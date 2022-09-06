// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoff.h for the primary calling header

#include "Vonoff___024root.h"
#include "Vonoff__Syms.h"

//==========


void Vonoff___024root___ctor_var_reset(Vonoff___024root* vlSelf);

Vonoff___024root::Vonoff___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vonoff___024root___ctor_var_reset(this);
}

void Vonoff___024root::__Vconfigure(Vonoff__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vonoff___024root::~Vonoff___024root() {
}

void Vonoff___024root___eval_initial(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___eval_initial\n"); );
}

void Vonoff___024root___combo__TOP__1(Vonoff___024root* vlSelf);

void Vonoff___024root___eval_settle(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___eval_settle\n"); );
    // Body
    Vonoff___024root___combo__TOP__1(vlSelf);
}

void Vonoff___024root___final(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___final\n"); );
}

void Vonoff___024root___ctor_var_reset(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->f = VL_RAND_RESET_I(1);
}
