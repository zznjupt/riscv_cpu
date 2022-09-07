// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencode83.h for the primary calling header

#include "Vencode83___024root.h"
#include "Vencode83__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 512> Vencode83__ConstPool__TABLE_2ab4c310_0;

VL_INLINE_OPT void Vencode83___024root___combo__TOP__1(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___combo__TOP__1\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->flag = ((0U == (IData)(vlSelf->X)) ? 0U
                     : 1U);
    __Vtableidx1 = (((IData)(vlSelf->X) << 1U) | (IData)(vlSelf->en));
    vlSelf->Y = Vencode83__ConstPool__TABLE_2ab4c310_0
        [__Vtableidx1];
}

void Vencode83___024root___eval(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval\n"); );
    // Body
    Vencode83___024root___combo__TOP__1(vlSelf);
}

QData Vencode83___024root___change_request_1(Vencode83___024root* vlSelf);

VL_INLINE_OPT QData Vencode83___024root___change_request(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___change_request\n"); );
    // Body
    return (Vencode83___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vencode83___024root___change_request_1(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vencode83___024root___eval_debug_assertions(Vencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencode83___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
