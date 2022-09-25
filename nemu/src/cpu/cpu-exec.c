/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>

/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT INT_FAST64_MAX // 10 -> max
#define BUFFER_SIZE (128*3) //  iringbuf size

CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

static uint32_t validLen;        // 已使用的数据长度
static char  *pHead      = NULL; // 环形缓冲区的首地址
static char  *pTail      = NULL; // 环形缓冲区的尾地址
static char  *pValid     = NULL; // 已使用的缓冲区的首地址
static char  *pValidTail = NULL; // 已使用的缓冲区的尾地址
char readbuf[128];
char *nn ="\n";

void initIRingbuf(void) {
  if(pHead == NULL) pHead = (char*) malloc(BUFFER_SIZE);
  pValid = pValidTail = pHead;
  pTail  = pHead + BUFFER_SIZE;
  validLen = 0;
}

int writeIRingbuf(char* buf, uint32_t addLen) {
  if(addLen > BUFFER_SIZE) return -2;
  if(pHead == NULL)        return -1;
  assert(buf);
  // 将要存入的数据 copy 到 pValidTail 处
  if(pValidTail + addLen > pTail) {
    int len1 = pTail - pValidTail;
    int len2 = addLen - len1;
    memcpy(pValidTail, buf, len1);
    memcpy(pHead, buf + len1, len2);
    pValidTail = pHead + len2;
  } else {
    memcpy(pValidTail, buf, addLen);
    pValidTail += addLen;
  }
  if(validLen + addLen > BUFFER_SIZE) {
    int moveLen = validLen + addLen - BUFFER_SIZE;
    if(pValid + moveLen > pTail) {
      int len1 = pTail - pValid;
      int len2 = moveLen - len1;
      pValid = pHead + len2;
    } else {
      pValid = pValid + moveLen;
    }
    validLen = BUFFER_SIZE;
  } else {
    validLen += addLen;
  }
  printf("w: validLen = %d\n", validLen);
  return 0;
}

int readIRingbuf(char *buf, uint32_t len) {
  if(pHead == NULL) return -1;
  // printf("#\n");
  assert(buf);
  if(validLen == 0) return 0;
  // printf("#\n");
  if(len > validLen) len = validLen;
  if(pValid + len > pTail) {
    int len1 = pTail - pValid;
    int len2 = len - len1;
    memcpy(buf, pValid, len1);
    // printf("#\n");
    memcpy(buf + len1, pHead, len2);
    pValid = pValid + len2;        
  } else {
    memcpy(buf, pValid, len);
    pValid = pValid + len;
  }
  
  validLen -= len;
  printf("r: validLen = %d\n", validLen);
  return len;
}

void releaseIRingbuf(void) {
  if(pHead != NULL) free(pHead);
  pHead = NULL;
}


void device_update();

static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (CONFIG_ITRACE_COND) { log_write("%s\n", _this->logbuf); } //
#endif
  if (g_print_step) { 
    IFDEF(CONFIG_ITRACE, puts(_this->logbuf));
    writeIRingbuf(_this->logbuf, 128); 
  }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
}

static void exec_once(Decode *s, vaddr_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
#ifdef CONFIG_ITRACE
  char *p = s->logbuf;
  p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
 
  int ilen = s->snpc - s->pc;
  int i;
  uint8_t *inst = (uint8_t *)&s->isa.inst.val;
  for (i = ilen - 1; i >= 0; i --) {
    p += snprintf(p, 4, " %02x", inst[i]);
  }
  int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
  int space_len = ilen_max - ilen;
  if (space_len < 0) space_len = 0;
  space_len = space_len * 3 + 1;
  memset(p, ' ', space_len);
  p += space_len;
  
  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
      MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
}

static void execute(uint64_t n) {
  Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
    g_nr_guest_inst ++;
    trace_and_difftest(&s, cpu.pc);
    if (nemu_state.state != NEMU_RUNNING) break;
    IFDEF(CONFIG_DEVICE, device_update());
  }
}

static void statistic() {
  IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%", "%'") PRIu64
  Log("host time spent = " NUMBERIC_FMT " us", g_timer);
  Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
  if (g_timer > 0) Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
  else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() {
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) {
  g_print_step = (n < MAX_INST_TO_PRINT);
  switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

  uint64_t timer_start = get_time();

  initIRingbuf();

  execute(n);
  // for(int i = 0; i < 3; i++) {
  //   readIRingbuf(readbuf, 128);
  //   puts(readbuf);
  // }

  releaseIRingbuf();

  uint64_t timer_end = get_time();
  g_timer += timer_end - timer_start;

  #ifdef DEBUG
      /* TODO: check watchpoints here. */
    int judge=judge_wp();
    if(judge==-1) {
      nemu_state = NEMU_STOP;
      printf("Triggered the monitoring point\n");
      return;
    }

  #endif

  switch (nemu_state.state) {
    case NEMU_RUNNING: nemu_state.state = NEMU_STOP; break;

    case NEMU_END: case NEMU_ABORT:
      Log("nemu: %s at pc = " FMT_WORD,
          (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :
           (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) :
            ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))),
          nemu_state.halt_pc);
      // fall through
    case NEMU_QUIT: statistic();
  }
}
