// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux.h for the primary calling header

#include "Vmux___024root.h"
#include "Vmux__Syms.h"

//==========

VL_INLINE_OPT void Vmux___024root___combo__TOP__1(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->mux__DOT____Vcellinp__i0____pinNumber3 
        = (0x48cU | (((IData)(vlSelf->X0) << 0xcU) 
                     | (((IData)(vlSelf->X1) << 8U) 
                        | (((IData)(vlSelf->X2) << 4U) 
                           | (IData)(vlSelf->X3)))));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0xfU & (IData)(vlSelf->mux__DOT____Vcellinp__i0____pinNumber3));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[1U] 
        = (0xfU & ((IData)(vlSelf->mux__DOT____Vcellinp__i0____pinNumber3) 
                   >> 4U));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[2U] 
        = (0xfU & ((IData)(vlSelf->mux__DOT____Vcellinp__i0____pinNumber3) 
                   >> 8U));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[3U] 
        = (0xfU & ((IData)(vlSelf->mux__DOT____Vcellinp__i0____pinNumber3) 
                   >> 0xcU));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = (3U & vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
           [0U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[1U] 
        = (3U & vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
           [1U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[2U] 
        = (3U & vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
           [2U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[3U] 
        = (3U & vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
           [3U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[0U] 
        = (3U & (vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
                 [0U] >> 2U));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[1U] 
        = (3U & (vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
                 [1U] >> 2U));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[2U] 
        = (3U & (vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
                 [2U] >> 2U));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[3U] 
        = (3U & (vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list
                 [3U] >> 2U));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->Y) 
                                               == vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->Y) 
                                                  == 
                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->Y) 
                                                  == 
                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->Y) 
                                                  == 
                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              ((IData)(vlSelf->Y) 
                                                               == 
                                                               vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->Y) 
                                                                  == 
                                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                                  [1U]))) 
                                                      & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->Y) 
                                                                  == 
                                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                                  [2U]))) 
                                                      & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->Y) 
                                                                  == 
                                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                                  [3U]))) 
                                                      & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->F = vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out;
}

void Vmux___024root___eval(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval\n"); );
    // Body
    Vmux___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Vmux___024root___change_request_1(Vmux___024root* vlSelf);

VL_INLINE_OPT QData Vmux___024root___change_request(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___change_request\n"); );
    // Body
    return (Vmux___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmux___024root___change_request_1(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vmux___024root___eval_debug_assertions(Vmux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->X0 & 0xfcU))) {
        Verilated::overWidthError("X0");}
    if (VL_UNLIKELY((vlSelf->X1 & 0xfcU))) {
        Verilated::overWidthError("X1");}
    if (VL_UNLIKELY((vlSelf->X2 & 0xfcU))) {
        Verilated::overWidthError("X2");}
    if (VL_UNLIKELY((vlSelf->X3 & 0xfcU))) {
        Verilated::overWidthError("X3");}
    if (VL_UNLIKELY((vlSelf->Y & 0xfcU))) {
        Verilated::overWidthError("Y");}
}
#endif  // VL_DEBUG
