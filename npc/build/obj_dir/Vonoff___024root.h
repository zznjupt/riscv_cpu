// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vonoff.h for the primary calling header

#ifndef VERILATED_VONOFF___024ROOT_H_
#define VERILATED_VONOFF___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vonoff__Syms;
class Vonoff_VerilatedVcd;


//----------

VL_MODULE(Vonoff___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);

    // INTERNAL VARIABLES
    Vonoff__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vonoff___024root);  ///< Copying not allowed
  public:
    Vonoff___024root(const char* name);
    ~Vonoff___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vonoff__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
