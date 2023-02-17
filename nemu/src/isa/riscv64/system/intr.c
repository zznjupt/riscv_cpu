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

#define MIE  (1 << 3)
#define MPIE (1 << 7)

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
  word_t mtvec;
  cpu.mepc   = epc;
  if(NO <= 19 || NO == -1){//syscalls
    cpu.mcause = 11;
  }
  mtvec      = cpu.mtvec;
  if(cpu.mstatus & MIE)cpu.mstatus |= MPIE;
  else cpu.mstatus &= (~MPIE);
  cpu.mstatus &= (~MIE);
  #ifdef CONFIG_ETRACE
  printf("handle mepc %lx mcause %lx mstatus %lx\n",cpu.mepc, cpu.mcause, cpu.mstatus);//no mtvec
  #endif
  //1:将当前PC值保存到mepc寄存器
  //2:在mcause寄存器中设置异常号
  return mtvec;//从mtvec寄存器中取出异常入口地址,跳转到异常入口地址(nemu dnpc = mtvec)
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
