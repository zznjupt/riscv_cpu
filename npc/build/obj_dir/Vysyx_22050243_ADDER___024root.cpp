// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_ADDER.h for the primary calling header

#include "Vysyx_22050243_ADDER___024root.h"
#include "Vysyx_22050243_ADDER__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22050243_ADDER___024root___combo__TOP__1(Vysyx_22050243_ADDER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ADDER___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->s = (vlSelf->a + vlSelf->b);
}

void Vysyx_22050243_ADDER___024root___eval(Vysyx_22050243_ADDER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ADDER___024root___eval\n"); );
    // Body
    Vysyx_22050243_ADDER___024root___combo__TOP__1(vlSelf);
}

QData Vysyx_22050243_ADDER___024root___change_request_1(Vysyx_22050243_ADDER___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050243_ADDER___024root___change_request(Vysyx_22050243_ADDER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ADDER___024root___change_request\n"); );
    // Body
    return (Vysyx_22050243_ADDER___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050243_ADDER___024root___change_request_1(Vysyx_22050243_ADDER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ADDER___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050243_ADDER___024root___eval_debug_assertions(Vysyx_22050243_ADDER___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ADDER__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ADDER___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
