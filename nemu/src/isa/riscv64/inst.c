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



#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i)     gpr(i)
#define Mr       vaddr_read
#define Mw       vaddr_write
#define MTVEC    0x305
#define MCAUSE   0x342
#define MSTATUS  0x300
#define MEPC     0x341
#define CSRMIE   0x304
#define MIP      0x344
#define MSCRATCH 0x340
#define MIE      (1 << 3)
#define MPIE     (1 << 7)
#define SD       ((word_t)1 << 63)


enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J, TYPE_R,
  TYPE_B, // none
};

#define src1R(n) do { *src1 = R(n); } while (0)
#define src2R(n) do { *src2 = R(n); } while (0)
#define destR(n) do { *dest = n; } while (0)
#define src1I(i) do { *src1 = i; } while (0)
#define src2I(i) do { *src2 = i; } while (0)
#define destI(i) do { *dest = i; } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t immB(uint32_t i) { return SEXT(BITS(i, 31, 31), 1) << 12
 | BITS(i, 30, 25) << 5 | BITS(i, 11, 8) << 1 | BITS(i, 7, 7) << 11; }//careful
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return (SEXT(BITS(i, 31, 31), 1) << 20) | BITS(i, 30, 21) << 1 
| BITS(i, 20, 20) << 11 | BITS(i, 19, 12) << 12; }

static void jal_op(word_t dest, word_t src1, Decode *s){
  R(dest) = s->snpc; 
  s->dnpc += src1 - 4;
}
static void jalr_op(word_t dest, word_t src1, word_t src2, Decode *s){
  word_t t = s->snpc; 
  s->dnpc = (src1 + src2) & (~1);
  R(dest) = t;
}
static void beq_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if(src1 == src2) 
    s->dnpc += dest - 4;
}
static void bne_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if(src1 != src2) 
    s->dnpc += dest - 4;
}
static word_t var_ext(word_t src1, word_t src2){
  word_t ret = src1 >> src2;
  if((src1 >> 63) & 1){
    for(int i = 63; i >= 0; i--){
      if((ret >> i) & 1)break;
      else ret |= (1 << i);
    }
  }
  return ret;
}
static void bge_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if((int64_t)src1 >= (int64_t)src2) 
    s->dnpc += dest - 4;
}
static void bgeu_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if(src1 >= src2) 
    s->dnpc += dest - 4;
}
static void blt_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if((int64_t)src1 < (int64_t)src2) 
    s->dnpc += dest - 4;
}
static void bltu_op(word_t dest, word_t src1, word_t src2, Decode *s){
  if(src1 < src2) 
    s->dnpc += dest - 4;
}
static void csrrws_op(word_t dest, word_t src1, word_t src2, Decode *s,word_t is_read,int is_imm){
  word_t t;
  if(is_imm){
    word_t i = s->isa.inst.val;
    src1 = BITS(i, 19, 15);
  }//csrw:csrrw x0,csr,rs1
  switch (src2) {
    case(MTVEC)  : t = cpu.mtvec;   cpu.mtvec    = is_read * t | src1; R(dest) = t; break;
    case(MCAUSE) : t = cpu.mcause;  cpu.mcause   = is_read * t | src1; R(dest) = t; break;
    case(MSTATUS): t = cpu.mstatus; cpu.mstatus  = is_read * t | src1; R(dest) = t; break;
    case(CSRMIE) : t = cpu.mie;     cpu.mie      = is_read * t | src1; R(dest) = t; break;
    case(MEPC)   : t = cpu.mepc;    cpu.mepc     = is_read * t | src1; R(dest) = t; break;
    case(MIP)    : t = cpu.mip;     cpu.mip      = is_read * t | src1; R(dest) = t; break;
    case(MSCRATCH):t = cpu.mscratch;cpu.mscratch = is_read * t | src1; R(dest) = t; break;
    //printf("csrrws %lx %lx\n",cpu.mepc,cpu.pc);
  }
}
//dest:rd src1:x[rs1] src2:csr
static void csrrc_op(word_t dest, word_t src1, word_t src2, Decode *s,int is_imm){
  word_t t;
  if(is_imm){
    word_t i = s->isa.inst.val;
    src1 = BITS(i, 19, 15);
  }
  switch (src2) {
    case(MTVEC)  : t = cpu.mtvec;    cpu.mtvec    = t & (~src1); R(dest) = t; break;
    case(MCAUSE) : t = cpu.mcause;   cpu.mcause   = t & (~src1); R(dest) = t; break;
    case(MSTATUS): t = cpu.mstatus;  cpu.mstatus  = t & (~src1); R(dest) = t; break;
    case(CSRMIE) : t = cpu.mie;      cpu.mie      = t & (~src1); R(dest) = t; break;
    case(MIP)    : t = cpu.mip;      cpu.mip      = t & (~src1); R(dest) = t; break;
    case(MSCRATCH):t = cpu.mscratch; cpu.mscratch = t & (~src1); R(dest) = t; break;
    case(MEPC)   : t = cpu.mepc;     cpu.mepc     = t & (~src1); R(dest) = t; break;
  }
}


static void mret_op(word_t dest, word_t src1, word_t src2, Decode *s){
  s->dnpc = cpu.mepc;//set mepc to pc+4(ecall)?
  //printf("mstatus is %lx\n",cpu.mstatus);
  if(cpu.mstatus & MPIE)cpu.mstatus |= MIE;
  else cpu.mstatus &= (~MIE);
  cpu.mstatus |= MPIE;//0x80
  #ifndef CONFIG_TARGET_SHARE
    cpu.mstatus &= 0xFFFFFFFFFFFFE7FF;
  #endif
  //printf("mret %lx\n",cpu.mstatus & (0xFFFFFFFFFFFFE7FF));
}
static void ecall_op(word_t dest, word_t src1, word_t src2, Decode *s){
  s->dnpc = isa_raise_intr(R(17), s->pc);
  #ifndef CONFIG_TARGET_SHARE
    cpu.mstatus |= 0x1800;
  #endif
}
static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  destR(rd);//dest register is always[11:7]
  switch (type) {
    case TYPE_I: src1R(rs1);     src2I(immI(i)); break;
    case TYPE_N: src1R(rs1);     src2I(immI(i)); break;
    case TYPE_U: src1I(immU(i)); break;
    case TYPE_S: destI(immS(i)); src1R(rs1); src2R(rs2); break;
    case TYPE_J: src1I(immJ(i)); break;
    case TYPE_R: src1R(rs1); src2R(rs2); break;
    case TYPE_B: src1R(rs1); src2R(rs2); destR(immB(i)); break;
  }
}
void (*ref_difftest_skip)(uint64_t n);

static int decode_exec(Decode *s) {
  word_t dest = 0, src1 = 0, src2 = 0;
  s->dnpc = s->snpc;//dynamic next pc <- static next pc

#define INSTPAT_INST(s) ((s)->isa.inst.val) // src/isa/riscv64/include/isa_def.h
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  // lwu mulh mulhsu mulhu
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = src1 + s->pc);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = src1);

  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = src1 << src2);
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ((int64_t)src1 < (int64_t)src2));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2));
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(dest) = (int64_t)src1 / (int64_t)src2);
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = src1 / src2);
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = src1 * src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(dest) = (__int128_t)src1 * (__int128_t)src2 >> 64);
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(dest) = (__int128_t)((__int128_t)src1 * (__uint128_t)src2) >> 64);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(dest) = (__uint128_t)((__uint128_t)src1 * (__uint128_t)src2) >> 64);
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = src1 % src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(dest) = (int64_t)src1 % (int64_t)src2);
  //10
  //s,s:000,001,
  //s,u:010
  //u,u:011
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(src1 + src2, 32));
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(src1 - src2, 32));
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT(src1 * src2, 32));
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(src1 << (src2 & 0x1F), 32));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = src1 >> src2);
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = SEXT((uint32_t)src1 >> (src2 & 0x1F), 32));
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = SEXT((int32_t)src1 >> (src2 & 0x1F) , 32));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(dest) = (int64_t)src1 >> (int64_t)src2);
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT((int32_t)(src1 & 0xFFFFFFFF) / (int32_t)(src2 & 0xFFFFFFFF), 32));
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw  , R, R(dest) = SEXT((src1 & 0xFFFFFFFF) / (src2 & 0xFFFFFFFF), 32));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT((int32_t)(src1 & 0xFFFFFFFF) % (int32_t)(src2 & 0xFFFFFFFF), 32));
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , R, R(dest) = SEXT((src1 & 0xFFFFFFFF) % (src2 & 0xFFFFFFFF), 32));

  // IMM[31:20]--- rs[19:15] rd[11:7] opcode[6:0]  dest(addr)
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + src2, 8));      
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + src2, 4), 32));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(Mr(src1 + src2, 2), 16));
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT(Mr(src1 + src2, 1), 8));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = Mr(src1 + src2, 1));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = Mr(src1 + src2, 2));
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = Mr(src1 + src2, 4));

 
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + src2);//(li/mv?)
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & src2);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(dest) = src1 | src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < src2));//(seqz)
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(dest) = ((int64_t)src1 < (int64_t)src2));//(seqz)
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = var_ext(src1, (src2 & 0x3F)));//new (different from 32I)
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = src1 >> (src2 & 0x3F));//new (different from 32I)
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << (src2 & 0x3F));//new


  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, jalr_op(dest, src1, src2, s));//(ret)
  

  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(src1 + src2, 32));//(seqz)
  INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT((int32_t)BITS(src1, 31, 0) >> (src2 & 0x3F), 32));//new (different from 32I)
  INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT(src1 << (src2 & 0x3F), 32));//new
  INSTPAT("000000? ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT((src1 & 0xFFFFFFFF) >> src2, 32));//new
  
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + dest, 8, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + dest, 1, src2 & 0xFF));//(need RSC)
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + dest, 2, src2 & 0xFFFF));//(need RSC)
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + dest, 4, src2 & 0xFFFFFFFF));//new

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, beq_op(dest, src1, src2, s));//beqz
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, bne_op(dest, src1, src2, s));
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, blt_op(dest, src1, src2, s));//newnew
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, bltu_op(dest, src1, src2, s));//newnew
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, bge_op(dest, src1, src2, s));//newnew
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, bgeu_op(dest, src1, src2, s));

  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, jal_op(dest, src1, s));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, ecall_op(dest, src1, src2, s));
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , N, csrrws_op(dest, src1, src2, s, 0, 0));
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi , N, csrrws_op(dest, src1, src2, s, 0, 1));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs  , N, csrrws_op(dest, src1, src2, s, 1, 0));
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi , N, csrrws_op(dest, src1, src2, s, 1, 1));
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc  , N, csrrc_op(dest, src1, src2, s, 0));
  INSTPAT("??????? ????? ????? 111 ????? 11100 11", csrrci , N, csrrc_op(dest, src1, src2, s, 1));
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, mret_op(dest, src1, src2, s));

  INSTPAT("??????? ????? ????? ??? ????? 11110 11", noo    , N, ;);//uart
  INSTPAT("0000000 00000 00000 001 00000 00011 11", fencei , N, ;);
  INSTPAT("??????? ????? ????? ??? ????? 11010 11", noo    , N, NEMUTRAP(s->pc, R(10)));//ref_difftest_skip(1)
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();
  //if(((cpu.mstatus >> 13) & 0x3) == 0x3)cpu.mstatus |= (SD);
  //else cpu.mstatus &= (~SD);
  #ifdef CONFIG_TARGET_SHARE
    cpu.mstatus |= (0x1800LL);
    cpu.mstatus &= (0x7FFFFFF000001888LL);
  #else
    cpu.mstatus &= (0x7FFFFFFa00021888LL);
  #endif
  //hard wired value:
  //1:MPP(12:11)
  //0:uie(0),sie(1),WPRI(2),upie(4),spie(5),WPRI(6),SPP(8),WPRI(10:9),(35:13) 
  //XSL[1](35) UXL[1](33) XS(16:15) FS(14:13)
  R(0) = 0; // reset $zero to 0
  //printf("%lx\n",cpu.pc);
  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
