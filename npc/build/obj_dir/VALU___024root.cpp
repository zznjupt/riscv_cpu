// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "VALU___024root.h"
#include "VALU__Syms.h"

//==========

VL_INLINE_OPT void VALU___024root___combo__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->ALU__DOT__A_ = ((0x10U & ((IData)(vlSelf->A) 
                                      << 1U)) | (IData)(vlSelf->A));
    vlSelf->ALU__DOT__B_ = ((0x10U & ((IData)(vlSelf->B) 
                                      << 1U)) | (IData)(vlSelf->B));
    vlSelf->overflow = 0U;
    if ((4U & (IData)(vlSelf->op))) {
        vlSelf->ALU__DOT__alu_reg = ((2U & (IData)(vlSelf->op))
                                      ? ((1U & (IData)(vlSelf->op))
                                          ? 0U : ((
                                                   (1U 
                                                    & ((IData)(vlSelf->A) 
                                                       >> 3U)) 
                                                   == 
                                                   (1U 
                                                    & ((IData)(vlSelf->B) 
                                                       >> 3U)))
                                                   ? 
                                                  ((8U 
                                                    & (IData)(vlSelf->A))
                                                    ? 
                                                   (((7U 
                                                      & (IData)(vlSelf->A)) 
                                                     > 
                                                     (7U 
                                                      & (IData)(vlSelf->B)))
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   (((7U 
                                                      & (IData)(vlSelf->A)) 
                                                     < 
                                                     (7U 
                                                      & (IData)(vlSelf->B)))
                                                     ? 1U
                                                     : 0U))
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->A))
                                                    ? 0U
                                                    : 1U)))
                                      : ((1U & (IData)(vlSelf->op))
                                          ? ((IData)(vlSelf->ALU__DOT__A_) 
                                             ^ (IData)(vlSelf->ALU__DOT__B_))
                                          : ((IData)(vlSelf->ALU__DOT__A_) 
                                             | (IData)(vlSelf->ALU__DOT__B_))));
    } else if ((2U & (IData)(vlSelf->op))) {
        vlSelf->ALU__DOT__alu_reg = (0x1fU & ((1U & (IData)(vlSelf->op))
                                               ? ((IData)(vlSelf->ALU__DOT__A_) 
                                                  & (IData)(vlSelf->ALU__DOT__B_))
                                               : (~ (IData)(vlSelf->ALU__DOT__A_))));
    } else if ((1U & (IData)(vlSelf->op))) {
        vlSelf->ALU__DOT__alu_reg = (0x1fU & ((IData)(1U) 
                                              + ((IData)(vlSelf->ALU__DOT__A_) 
                                                 + 
                                                 (~ (IData)(vlSelf->ALU__DOT__B_)))));
        if ((1U & VL_REDXOR_32((0x18U & (IData)(vlSelf->ALU__DOT__alu_reg))))) {
            vlSelf->ALU__DOT__alu_reg = 0U;
            vlSelf->overflow = 1U;
        }
    } else {
        vlSelf->ALU__DOT__alu_reg = (0x1fU & ((IData)(vlSelf->ALU__DOT__A_) 
                                              + (IData)(vlSelf->ALU__DOT__B_)));
        if ((1U & VL_REDXOR_32((0x18U & (IData)(vlSelf->ALU__DOT__alu_reg))))) {
            vlSelf->ALU__DOT__alu_reg = 0U;
            vlSelf->overflow = 1U;
        }
    }
    vlSelf->alu_result = (0xfU & (IData)(vlSelf->ALU__DOT__alu_reg));
    vlSelf->zero = (1U & (~ (0U != (IData)(vlSelf->ALU__DOT__alu_reg))));
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    VALU___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
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
