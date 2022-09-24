// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_ALU.h for the primary calling header

#include "Vysyx_22050243_ALU___024root.h"
#include "Vysyx_22050243_ALU__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22050243_ALU___024root___combo__TOP__1(Vysyx_22050243_ALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ALU___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22050243_ALU__DOT__add_result = (vlSelf->a 
                                                  + vlSelf->b);
    vlSelf->ysyx_22050243_ALU__DOT__sub_result = (vlSelf->a 
                                                  - vlSelf->b);
    vlSelf->ysyx_22050243_ALU__DOT__sllw_result = ((IData)(vlSelf->a) 
                                                   << 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->b)));
    vlSelf->ysyx_22050243_ALU__DOT__srlw_result = ((IData)(vlSelf->a) 
                                                   >> 
                                                   (0x1fU 
                                                    & (IData)(vlSelf->b)));
    vlSelf->alu_out = ((8U & (IData)(vlSelf->alu_ctrl))
                        ? ((4U & (IData)(vlSelf->alu_ctrl))
                            ? ((2U & (IData)(vlSelf->alu_ctrl))
                                ? ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? 0ULL : (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->a 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((IData)(vlSelf->a) 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & (IData)(vlSelf->b)))))))
                                : ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? VL_SHIFTRS_QQI(64,64,6, vlSelf->a, 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->b)))
                                    : (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22050243_ALU__DOT__srlw_result 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050243_ALU__DOT__srlw_result)))))
                            : ((2U & (IData)(vlSelf->alu_ctrl))
                                ? ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->ysyx_22050243_ALU__DOT__sllw_result 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050243_ALU__DOT__sllw_result)))
                                    : (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22050243_ALU__DOT__sub_result 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050243_ALU__DOT__sub_result))))
                                : ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? (((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->ysyx_22050243_ALU__DOT__add_result 
                                                                               >> 0x1fU))))))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050243_ALU__DOT__add_result)))
                                    : vlSelf->ysyx_22050243_ALU__DOT__sub_result)))
                        : ((4U & (IData)(vlSelf->alu_ctrl))
                            ? ((2U & (IData)(vlSelf->alu_ctrl))
                                ? ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? (vlSelf->a & vlSelf->b)
                                    : (vlSelf->a | vlSelf->b))
                                : ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? (vlSelf->a >> 
                                       (0x3fU & (IData)(vlSelf->b)))
                                    : (vlSelf->a ^ vlSelf->b)))
                            : ((2U & (IData)(vlSelf->alu_ctrl))
                                ? ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? ((vlSelf->a < vlSelf->b)
                                        ? 1ULL : 0ULL)
                                    : (VL_LTS_IQQ(1,64,64, vlSelf->a, vlSelf->b)
                                        ? 1ULL : 0ULL))
                                : ((1U & (IData)(vlSelf->alu_ctrl))
                                    ? (vlSelf->a << 
                                       (0x3fU & (IData)(vlSelf->b)))
                                    : vlSelf->ysyx_22050243_ALU__DOT__add_result))));
    vlSelf->zero = (0ULL == vlSelf->alu_out);
}

void Vysyx_22050243_ALU___024root___eval(Vysyx_22050243_ALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ALU___024root___eval\n"); );
    // Body
    Vysyx_22050243_ALU___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

QData Vysyx_22050243_ALU___024root___change_request_1(Vysyx_22050243_ALU___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050243_ALU___024root___change_request(Vysyx_22050243_ALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ALU___024root___change_request\n"); );
    // Body
    return (Vysyx_22050243_ALU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050243_ALU___024root___change_request_1(Vysyx_22050243_ALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ALU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050243_ALU___024root___eval_debug_assertions(Vysyx_22050243_ALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_ALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_ctrl & 0xf0U))) {
        Verilated::overWidthError("alu_ctrl");}
}
#endif  // VL_DEBUG
