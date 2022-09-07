// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU___024root.h"
#include "VALU__Syms.h"

//==========

VL_INLINE_OPT void VALU___024root___combo__TOP__2(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->overflow = 0U;
    if ((0U == (IData)(vlSelf->op))) {
        vlSelf->ALU__DOT__alu_reg = (0x1fU & ((IData)(vlSelf->ALU__DOT__A_) 
                                              + (IData)(vlSelf->ALU__DOT__B_)));
        if ((1U & VL_REDXOR_32((0x18U & (IData)(vlSelf->ALU__DOT__alu_reg))))) {
            vlSelf->ALU__DOT__alu_reg = 0U;
            vlSelf->overflow = 1U;
        }
    } else if ((1U == (IData)(vlSelf->op))) {
        vlSelf->ALU__DOT__alu_reg = (0x1fU & ((IData)(1U) 
                                              + ((IData)(vlSelf->ALU__DOT__A_) 
                                                 + 
                                                 (~ (IData)(vlSelf->ALU__DOT__B_)))));
        if ((1U & VL_REDXOR_32((0x18U & (IData)(vlSelf->ALU__DOT__alu_reg))))) {
            vlSelf->ALU__DOT__alu_reg = 0U;
            vlSelf->overflow = 1U;
        }
    } else {
        vlSelf->ALU__DOT__alu_reg = 0U;
    }
    vlSelf->alu_result = (0xfU & (IData)(vlSelf->ALU__DOT__alu_reg));
    vlSelf->zero = (1U & (~ (0U != (IData)(vlSelf->ALU__DOT__alu_reg))));
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    VALU___024root___combo__TOP__2(vlSelf);
}

QData VALU___024root___change_request_1(VALU___024root* vlSelf);

VL_INLINE_OPT QData VALU___024root___change_request(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request\n"); );
    // Body
    return (VALU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VALU___024root___change_request_1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->op & 0xf8U))) {
        Verilated::overWidthError("op");}
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
