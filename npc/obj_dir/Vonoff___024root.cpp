// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vonoff.h for the primary calling header

#include "Vonoff___024root.h"
#include "Vonoff__Syms.h"

//==========

VL_INLINE_OPT void Vonoff___024root___combo__TOP__1(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
}

void Vonoff___024root___eval(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___eval\n"); );
    // Body
    Vonoff___024root___combo__TOP__1(vlSelf);
}

QData Vonoff___024root___change_request_1(Vonoff___024root* vlSelf);

VL_INLINE_OPT QData Vonoff___024root___change_request(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___change_request\n"); );
    // Body
    return (Vonoff___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vonoff___024root___change_request_1(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vonoff___024root___eval_debug_assertions(Vonoff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vonoff___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
