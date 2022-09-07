// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencode83.h for the primary calling header

#ifndef VERILATED_VENCODE83___024ROOT_H_
#define VERILATED_VENCODE83___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vencode83__Syms;
class Vencode83_VerilatedVcd;


//----------

VL_MODULE(Vencode83___024root) {
  public:

    // PORTS
    VL_IN8(X,7,0);
    VL_IN8(en,0,0);
    VL_OUT8(Y,2,0);
    VL_OUT8(flag,0,0);

    // INTERNAL VARIABLES
    Vencode83__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vencode83___024root);  ///< Copying not allowed
  public:
    Vencode83___024root(const char* name);
    ~Vencode83___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vencode83__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
