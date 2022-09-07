// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode83.h for the primary calling header

#include "Vencode83___024root.h"
#include "Vencode83__Syms.h"

//==========


void Vencode83___024root___ctor_var_reset(Vencode83___024root* vlSelf);

Vencode83___024root::Vencode83___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vencode83___024root___ctor_var_reset(this);
}

void Vencode83___024root::__Vconfigure(Vencode83__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vencode83___024root::~Vencode83___024root() {
}

void Vencode83___024root___eval_initial(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_initial\n"); );
}

void Vencode83___024root___combo__TOP__1(Vencode83___024root* vlSelf);

void Vencode83___024root___eval_settle(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_settle\n"); );
    // Body
    Vencode83___024root___combo__TOP__1(vlSelf);
}

void Vencode83___024root___final(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___final\n"); );
}

void Vencode83___024root___ctor_var_reset(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->X = VL_RAND_RESET_I(8);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->Y = VL_RAND_RESET_I(3);
    vlSelf->flag = VL_RAND_RESET_I(1);
    vlSelf->encode83__DOT__i = VL_RAND_RESET_I(32);
}
