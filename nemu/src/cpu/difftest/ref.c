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
// #ifdef _STDIO_H
// #include <stdio.h>
// #endif

// typedef struct diff_context_t {
//   uint64_t gpr[32];
//   uint32_t pc;
// } diff_context_t;

// void diff_set_regs(void *diff_context) {
//   diff_context_t *ctx = (diff_context_t *)diff_context;
//   for (int i = 0; i < 32; i++) {
//     cpu.gpr[i] = ctx->gpr[i];
//   }
//   cpu.pc = ctx->pc;
// }

// void diff_get_regs(void *diff_context) {
//   diff_context_t *ctx = (diff_context_t *)diff_context;
//   for (int i = 0; i < 32; i++) {
//     ctx->gpr[i] = cpu.gpr[i];
//   }
//   ctx->pc = cpu.pc;
// }

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  if(direction == DIFFTEST_TO_REF){
    for(size_t i = 0; i < n; i++){
      paddr_write(addr + i, 1, ((uint8_t *)buf)[i]);
    }
  }
  else assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  if(direction == DIFFTEST_TO_REF){
    for(int i = 0; i < 32; i++){
      cpu.gpr[i] = ((uint64_t *)dut)[i];
    }
    cpu.pc = ((uint64_t *)dut)[32];
    //mepc, mcause, mtvec, mstatus;
    //uint64_t mie, mip, mscratch, mtval;
    cpu.mepc = ((uint64_t *)dut)[33];
    cpu.mcause = ((uint64_t *)dut)[34];
    cpu.mtvec = ((uint64_t *)dut)[35];
    cpu.mstatus = ((uint64_t *)dut)[36];
    cpu.mie = ((uint64_t *)dut)[37];
    cpu.mip = ((uint64_t *)dut)[38];
    cpu.mscratch = ((uint64_t *)dut)[39];
    cpu.mtval = ((uint64_t *)dut)[40];
  } else {
    for(int i = 0; i < 32; i++){
     ((uint64_t *)dut)[i] = cpu.gpr[i];
    }
    ((uint64_t *)dut)[32] = cpu.pc;
    ((uint64_t *)dut)[33] = cpu.mepc;
    ((uint64_t *)dut)[34] = cpu.mcause;
    ((uint64_t *)dut)[35] = cpu.mtvec;
    ((uint64_t *)dut)[36] = cpu.mstatus;
    ((uint64_t *)dut)[37] = cpu.mie;
    ((uint64_t *)dut)[38] = cpu.mip;
    ((uint64_t *)dut)[39] = cpu.mscratch;
    ((uint64_t *)dut)[40] = cpu.mtval;
  }
  
}

void difftest_exec(uint64_t n) {
  cpu_exec(n);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}

void difftest_init() {
  /* Perform ISA dependent initialization. */
  init_isa();
}
