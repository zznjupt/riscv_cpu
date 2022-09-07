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
        = (0x48cU | (((IData)(vlSelf->a) << 0xcU) | 
                     (((IData)(vlSelf->b) << 8U) | 
                      (((IData)(vlSelf->c) << 4U) | (IData)(vlSelf->d)))));
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
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->s) 
                                               == vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                               [0U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->s) 
                                                  == 
                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                  [1U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->s) 
                                                  == 
                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                  [2U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__hit = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__hit) 
                                               | ((IData)(vlSelf->s) 
                                                  == 
                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                  [3U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = (
                                                   (- (IData)(
                                                              ((IData)(vlSelf->s) 
                                                               == 
                                                               vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                               [0U]))) 
                                                   & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                   [0U]);
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->s) 
                                                                  == 
                                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                                  [1U]))) 
                                                      & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                      [1U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->s) 
                                                                  == 
                                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                                  [2U]))) 
                                                      & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                      [2U]));
    vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out = ((IData)(vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out) 
                                                   | ((- (IData)(
                                                                 ((IData)(vlSelf->s) 
                                                                  == 
                                                                  vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list
                                                                  [3U]))) 
                                                      & vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list
                                                      [3U]));
    vlSelf->y = vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out;
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
    if (VL_UNLIKELY((vlSelf->a & 0xfcU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfcU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c & 0xfcU))) {
        Verilated::overWidthError("c");}
    if (VL_UNLIKELY((vlSelf->d & 0xfcU))) {
        Verilated::overWidthError("d");}
    if (VL_UNLIKELY((vlSelf->s & 0xfcU))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
