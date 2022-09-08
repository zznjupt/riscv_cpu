// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU___024root.h"
#include "VALU__Syms.h"

//==========


void VALU___024root___ctor_var_reset(VALU___024root* vlSelf);

VALU___024root::VALU___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VALU___024root___ctor_var_reset(this);
}

void VALU___024root::__Vconfigure(VALU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VALU___024root::~VALU___024root() {
}

void VALU___024root___eval_initial(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_initial\n"); );
}

void VALU___024root___combo__TOP__1(VALU___024root* vlSelf);

void VALU___024root___eval_settle(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_settle\n"); );
    // Body
    VALU___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void VALU___024root___final(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___final\n"); );
}

void VALU___024root___ctor_var_reset(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->op = VL_RAND_RESET_I(3);
    vlSelf->A = VL_RAND_RESET_I(4);
    vlSelf->B = VL_RAND_RESET_I(4);
    vlSelf->alu_result = VL_RAND_RESET_I(4);
    vlSelf->overflow = VL_RAND_RESET_I(1);
    vlSelf->zero = VL_RAND_RESET_I(1);
    vlSelf->ALU__DOT__A_ = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__B_ = VL_RAND_RESET_I(5);
    vlSelf->ALU__DOT__alu_reg = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
