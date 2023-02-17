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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern const char *regs[];
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  if(cpu.pc != ref_r->pc) {
    printf("input pc 0x%016lx\n", cpu.pc);
    printf("ref pc 0x%016lx\n", ref_r->pc);
    printf("wrong in pc\n");
    return false;
  }
  for(int i = 0; i < 32; i++) {
    if(cpu.gpr[i] != ref_r->gpr[i]) {
      printf("wrong in gpr[%d], value is 0x%16lx\n", i, ref_r->gpr[i]);
      return false;
    }
  }
  if(ref_r->mepc != cpu.mepc || ref_r->mtvec != cpu.mtvec     || ref_r->mcause   != cpu.mcause 
   || ref_r->pc  != pc       || ref_r->mstatus != cpu.mstatus || ref_r->mtval    != cpu.mtval 
   || ref_r->mie != cpu.mie  || ref_r->mip != cpu.mip         || ref_r->mscratch != cpu.mscratch) return false;
   
  return true;
}

void isa_difftest_attach() {
}
