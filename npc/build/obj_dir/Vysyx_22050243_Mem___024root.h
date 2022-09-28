// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050243_Mem.h for the primary calling header

#ifndef VERILATED_VYSYX_22050243_MEM___024ROOT_H_
#define VERILATED_VYSYX_22050243_MEM___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050243_Mem__Syms;
class Vysyx_22050243_Mem_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050243_Mem___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(inst_en,0,0);
    VL_IN8(data_w_en,0,0);
    VL_IN8(data_r_en,0,0);
    VL_IN8(data_wmask,7,0);
    VL_OUT(inst,31,0);
    VL_IN64(pc,63,0);
    VL_IN64(data_addr,63,0);
    VL_IN64(data_w,63,0);
    VL_OUT64(data_r,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ __Vtask_ysyx_22050243_Mem__DOT__IF_inst_read__1__inst;
    QData/*63:0*/ __Vtask_ysyx_22050243_Mem__DOT__MEM_pmem_read__3__rdata;

    // INTERNAL VARIABLES
    Vysyx_22050243_Mem__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050243_Mem___024root);  ///< Copying not allowed
  public:
    Vysyx_22050243_Mem___024root(const char* name);
    ~Vysyx_22050243_Mem___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050243_Mem__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
