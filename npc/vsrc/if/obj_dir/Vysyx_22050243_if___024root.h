// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050243_if.h for the primary calling header

#ifndef VERILATED_VYSYX_22050243_IF___024ROOT_H_
#define VERILATED_VYSYX_22050243_IF___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050243_if__Syms;
class Vysyx_22050243_if_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050243_if___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(stall,5,0);
    VL_OUT8(isram_e,0,0);
    VL_INW(br_bus,64,0,3);
    VL_OUTW(if_to_id_bus,128,0,5);
    VL_OUT64(isram_addr,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22050243_if__DOT__ce_reg;
    QData/*63:0*/ ysyx_22050243_if__DOT__pc_reg;
    QData/*63:0*/ ysyx_22050243_if__DOT__next_pc;
    QData/*63:0*/ ysyx_22050243_if__DOT__if_pc;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050243_if__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050243_if___024root);  ///< Copying not allowed
  public:
    Vysyx_22050243_if___024root(const char* name);
    ~Vysyx_22050243_if___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050243_if__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
