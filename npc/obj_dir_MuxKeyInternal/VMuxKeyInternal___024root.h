// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMuxKeyInternal.h for the primary calling header

#ifndef VERILATED_VMUXKEYINTERNAL___024ROOT_H_
#define VERILATED_VMUXKEYINTERNAL___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VMuxKeyInternal__Syms;

//----------

VL_MODULE(VMuxKeyInternal___024root) {
  public:

    // PORTS
    VL_OUT8(out,0,0);
    VL_IN8(key,0,0);
    VL_IN8(default_out,0,0);
    VL_IN8(lut,3,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*1:0*/, 2> MuxKeyInternal__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKeyInternal__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 2> MuxKeyInternal__DOT__data_list;

    // INTERNAL VARIABLES
    VMuxKeyInternal__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMuxKeyInternal___024root);  ///< Copying not allowed
  public:
    VMuxKeyInternal___024root(const char* name);
    ~VMuxKeyInternal___024root();

    // INTERNAL METHODS
    void __Vconfigure(VMuxKeyInternal__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
