// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050243_Ctrl.h for the primary calling header

#ifndef VERILATED_VYSYX_22050243_CTRL___024ROOT_H_
#define VERILATED_VYSYX_22050243_CTRL___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050243_Ctrl__Syms;
class Vysyx_22050243_Ctrl_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050243_Ctrl___024root) {
  public:

    // PORTS
    VL_IN8(opcode,6,0);
    VL_IN8(funct3,2,0);
    VL_OUT8(alu_src,0,0);
    VL_OUT8(mem2reg,2,0);
    VL_OUT8(reg_w,0,0);
    VL_OUT8(mem_r,0,0);
    VL_OUT8(mem_w,0,0);
    VL_OUT8(branch,0,0);
    VL_OUT8(pc_src_ctrl,1,0);
    VL_OUT8(alu_op,2,0);
    VL_OUT8(csr_r,0,0);

    // INTERNAL VARIABLES
    Vysyx_22050243_Ctrl__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050243_Ctrl___024root);  ///< Copying not allowed
  public:
    Vysyx_22050243_Ctrl___024root(const char* name);
    ~Vysyx_22050243_Ctrl___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050243_Ctrl__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
