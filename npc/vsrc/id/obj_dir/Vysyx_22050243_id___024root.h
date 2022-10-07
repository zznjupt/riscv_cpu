// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050243_id.h for the primary calling header

#ifndef VERILATED_VYSYX_22050243_ID___024ROOT_H_
#define VERILATED_VYSYX_22050243_ID___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050243_id__Syms;
class Vysyx_22050243_id_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050243_id___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(stall,5,0);
    VL_OUT8(stall_req_for_load,0,0);
    VL_IN8(ex_2_id_for_stall_load,6,0);
    VL_INW(if_2_id_bus,128,0,5);
    VL_IN(isram_rdata,31,0);
    VL_INW(ex_2_gpr_bus,69,0,3);
    VL_INW(mem_2_gpr_bus,69,0,3);
    VL_INW(wb_2_gpr_bus,69,0,3);
    VL_OUTW(id_2_ex_bus,365,0,12);
    VL_OUT64(gpr_o[32],63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22050243_id__DOT__flag;
        CData/*0:0*/ ysyx_22050243_id__DOT__buf_ce;
        CData/*7:0*/ ysyx_22050243_id__DOT__funct3_d;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_addi;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_add;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_addiw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_addw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sub;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_subw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_slti;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sltiu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_slt;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sltu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_slli;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_srli;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_srai;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_slliw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_srliw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sraiw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sll;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_srl;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sra;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sllw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_srlw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sraw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_xori;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_ori;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_andi;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_xor;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_or;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_and;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_lb;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_lh;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_lw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_ld;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_lbu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_lhu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_lwu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sb;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sh;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_sd;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_jalr;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_csrrw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_csrrs;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_csrrc;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_csrrwi;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_csrrsi;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_csrrci;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_mul;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_mulh;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_mulhsu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_mulhu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_mulw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_div;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_divu;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_divw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_divuw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_remw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_remuw;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_rem;
        CData/*0:0*/ ysyx_22050243_id__DOT__inst_remu;
        CData/*2:0*/ ysyx_22050243_id__DOT__sel_alu_src1;
        CData/*6:0*/ ysyx_22050243_id__DOT__sel_alu_src2;
    };
    struct {
        CData/*1:0*/ ysyx_22050243_id__DOT__sp_bus;
        SData/*11:0*/ ysyx_22050243_id__DOT__alu_op;
        IData/*31:0*/ ysyx_22050243_id__DOT__buf_inst;
        IData/*31:0*/ ysyx_22050243_id__DOT__inst_i;
        VlWide<4>/*127:0*/ ysyx_22050243_id__DOT__op_d;
        VlWide<4>/*127:0*/ ysyx_22050243_id__DOT__funct7_d;
        VlWide<12>/*365:0*/ ysyx_22050243_id__DOT__id_2_ex_bus_temp;
        QData/*63:0*/ ysyx_22050243_id__DOT__buf_id_pc;
        QData/*63:0*/ ysyx_22050243_id__DOT__buf_next_pc;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050243_id__DOT__gpr__DOT__gpr;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050243_id__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050243_id___024root);  ///< Copying not allowed
  public:
    Vysyx_22050243_id___024root(const char* name);
    ~Vysyx_22050243_id___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050243_id__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
