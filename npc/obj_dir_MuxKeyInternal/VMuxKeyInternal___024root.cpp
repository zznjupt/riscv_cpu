// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMuxKeyInternal.h for the primary calling header

#include "VMuxKeyInternal___024root.h"
#include "VMuxKeyInternal__Syms.h"

//==========

VL_INLINE_OPT void VMuxKeyInternal___024root___combo__TOP__1(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ MuxKeyInternal__DOT__lut_out;
    // Body
    vlSelf->MuxKeyInternal__DOT__pair_list[0U] = (3U 
                                                  & (IData)(vlSelf->lut));
    vlSelf->MuxKeyInternal__DOT__pair_list[1U] = (3U 
                                                  & ((IData)(vlSelf->lut) 
                                                     >> 2U));
    vlSelf->MuxKeyInternal__DOT__data_list[0U] = (1U 
                                                  & vlSelf->MuxKeyInternal__DOT__pair_list
                                                  [0U]);
    vlSelf->MuxKeyInternal__DOT__key_list[0U] = (1U 
                                                 & (vlSelf->MuxKeyInternal__DOT__pair_list
                                                    [0U] 
                                                    >> 1U));
    vlSelf->MuxKeyInternal__DOT__data_list[1U] = (1U 
                                                  & vlSelf->MuxKeyInternal__DOT__pair_list
                                                  [1U]);
    vlSelf->MuxKeyInternal__DOT__key_list[1U] = (1U 
                                                 & (vlSelf->MuxKeyInternal__DOT__pair_list
                                                    [1U] 
                                                    >> 1U));
    MuxKeyInternal__DOT__lut_out = (((IData)(vlSelf->key) 
                                     == vlSelf->MuxKeyInternal__DOT__key_list
                                     [0U]) & vlSelf->MuxKeyInternal__DOT__data_list
                                    [0U]);
    MuxKeyInternal__DOT__lut_out = ((IData)(MuxKeyInternal__DOT__lut_out) 
                                    | (((IData)(vlSelf->key) 
                                        == vlSelf->MuxKeyInternal__DOT__key_list
                                        [1U]) & vlSelf->MuxKeyInternal__DOT__data_list
                                       [1U]));
    vlSelf->out = MuxKeyInternal__DOT__lut_out;
}

void VMuxKeyInternal___024root___eval(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval\n"); );
    // Body
    VMuxKeyInternal___024root___combo__TOP__1(vlSelf);
}

QData VMuxKeyInternal___024root___change_request_1(VMuxKeyInternal___024root* vlSelf);

VL_INLINE_OPT QData VMuxKeyInternal___024root___change_request(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___change_request\n"); );
    // Body
    return (VMuxKeyInternal___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VMuxKeyInternal___024root___change_request_1(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMuxKeyInternal___024root___eval_debug_assertions(VMuxKeyInternal___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMuxKeyInternal__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMuxKeyInternal___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->key & 0xfeU))) {
        Verilated::overWidthError("key");}
    if (VL_UNLIKELY((vlSelf->default_out & 0xfeU))) {
        Verilated::overWidthError("default_out");}
    if (VL_UNLIKELY((vlSelf->lut & 0xf0U))) {
        Verilated::overWidthError("lut");}
}
#endif  // VL_DEBUG
