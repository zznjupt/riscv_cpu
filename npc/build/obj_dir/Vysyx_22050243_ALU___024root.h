// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050243_ALU.h for the primary calling header

#ifndef VERILATED_VYSYX_22050243_ALU___024ROOT_H_
#define VERILATED_VYSYX_22050243_ALU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050243_ALU__Syms;
class Vysyx_22050243_ALU_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050243_ALU___024root) {
  public:

    // PORTS
    VL_IN8(alu_ctrl,3,0);
    VL_OUT8(zero,0,0);
    VL_IN64(a,63,0);
    VL_IN64(b,63,0);
    VL_OUT64(alu_out,63,0);

    // LOCAL SIGNALS
    IData/*31:0*/ ysyx_22050243_ALU__DOT__sllw_result;
    IData/*31:0*/ ysyx_22050243_ALU__DOT__srlw_result;
    QData/*63:0*/ ysyx_22050243_ALU__DOT__add_result;
    QData/*63:0*/ ysyx_22050243_ALU__DOT__sub_result;

    // LOCAL VARIABLES
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050243_ALU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050243_ALU___024root);  ///< Copying not allowed
  public:
    Vysyx_22050243_ALU___024root(const char* name);
    ~Vysyx_22050243_ALU___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050243_ALU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
