// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VTOP__Syms;
class VTOP_VerilatedVcd;


//----------

VL_MODULE(VTOP___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(out_zero,0,0);
    VL_IN(i_inst,31,0);
    VL_OUT64(result,63,0);

    // LOCAL SIGNALS
    CData/*3:0*/ TOP__DOT__alu_ctrl_id;
    CData/*0:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__is_R;
    CData/*0:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__is_I;
    CData/*0:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S;
    CData/*0:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B;
    CData/*0:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U;
    CData/*0:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J;
    SData/*11:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S;
    SData/*12:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B;
    IData/*20:0*/ TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J;
    IData/*31:0*/ TOP__DOT__ysyx_22050243_ALU__DOT__sllw_result;
    IData/*31:0*/ TOP__DOT__ysyx_22050243_ALU__DOT__srlw_result;
    QData/*63:0*/ TOP__DOT__pc;
    QData/*63:0*/ TOP__DOT__npc;
    QData/*63:0*/ TOP__DOT__rs1;
    QData/*63:0*/ TOP__DOT__b;
    QData/*63:0*/ TOP__DOT__ysyx_22050243_ALU__DOT__add_result;
    QData/*63:0*/ TOP__DOT__ysyx_22050243_ALU__DOT__sub_result;
    QData/*63:0*/ TOP__DOT__ysyx_22050243_ALU__DOT__alu_out;
    VlUnpacked<QData/*63:0*/, 32> TOP__DOT__ysyx_22050243_GPR___DOT__gpr;

    // LOCAL VARIABLES
    CData/*3:0*/ TOP__DOT____Vcellinp__ysyx_22050243_ALUCtrl___funct;
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vchglast__TOP__TOP__DOT__ysyx_22050243_ALU__DOT__alu_out;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VTOP__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTOP___024root);  ///< Copying not allowed
  public:
    VTOP___024root(const char* name);
    ~VTOP___024root();

    // INTERNAL METHODS
    void __Vconfigure(VTOP__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
