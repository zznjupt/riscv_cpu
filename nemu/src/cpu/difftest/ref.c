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

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>
#ifdef _STDIO_H
#include <stdio.h>
#endif

typedef struct diff_context_t {
  uint64_t gpr[32];
  uint32_t pc;
} diff_context_t;

void diff_set_regs(void *diff_context) {
  diff_context_t *ctx = (diff_context_t *)diff_context;
  for (int i = 0; i < 32; i++) {
    cpu.gpr[i] = ctx->gpr[i];
  }
  cpu.pc = ctx->pc;
}

void diff_get_regs(void *diff_context) {
  diff_context_t *ctx = (diff_context_t *)diff_context;
  for (int i = 0; i < 32; i++) {
    ctx->gpr[i] = cpu.gpr[i];
  }
  ctx->pc = cpu.pc;
}

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  // assert(0);
  if(direction == DIFFTEST_TO_REF) memcpy(guest_to_host(addr), buf, n);
  else assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  // assert(0);

  if(direction == DIFFTEST_TO_REF) {
    diff_set_regs(dut);
  } else {
    diff_get_regs(dut);
  }
}

void difftest_exec(uint64_t n) {
  // assert(0);
  cpu_exec(-1);
}

void difftest_raise_intr(word_t NO) { // clint
  assert(0);
}

void difftest_init(int port) {
  /* Perform ISA dependent initialization. */
  init_isa();
}
