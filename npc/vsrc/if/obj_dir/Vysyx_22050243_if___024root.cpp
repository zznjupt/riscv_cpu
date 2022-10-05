// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_if.h for the primary calling header

#include "Vysyx_22050243_if___024root.h"
#include "Vysyx_22050243_if__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22050243_if___024root___sequent__TOP__1(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->ysyx_22050243_if__DOT__ce_reg = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->stall) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->stall) | ((IData)(vlSelf->stall) 
                                                >> 1U))))) {
            vlSelf->ysyx_22050243_if__DOT__ce_reg = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->ysyx_22050243_if__DOT__pc_reg = 0x7ffffffcULL;
    } else if ((1U & (~ ((IData)(vlSelf->stall) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->stall) | ((IData)(vlSelf->stall) 
                                                >> 1U))))) {
            vlSelf->ysyx_22050243_if__DOT__pc_reg = vlSelf->ysyx_22050243_if__DOT__next_pc;
        }
    }
    vlSelf->isram_e = vlSelf->ysyx_22050243_if__DOT__ce_reg;
    vlSelf->ysyx_22050243_if__DOT__if_pc = ((0x7ffffffcULL 
                                             == vlSelf->ysyx_22050243_if__DOT__pc_reg)
                                             ? 0ULL
                                             : vlSelf->ysyx_22050243_if__DOT__pc_reg);
    vlSelf->isram_addr = vlSelf->ysyx_22050243_if__DOT__if_pc;
}

VL_INLINE_OPT void Vysyx_22050243_if___024root___combo__TOP__3(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->ysyx_22050243_if__DOT__next_pc = ((1U & 
                                               vlSelf->br_bus[2U])
                                               ? (((QData)((IData)(
                                                                   vlSelf->br_bus[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->br_bus[0U])))
                                               : (4ULL 
                                                  + vlSelf->ysyx_22050243_if__DOT__pc_reg));
    vlSelf->if_to_id_bus[0U] = (IData)(vlSelf->ysyx_22050243_if__DOT__next_pc);
    vlSelf->if_to_id_bus[1U] = (IData)((vlSelf->ysyx_22050243_if__DOT__next_pc 
                                        >> 0x20U));
    vlSelf->if_to_id_bus[2U] = (IData)(vlSelf->ysyx_22050243_if__DOT__if_pc);
    vlSelf->if_to_id_bus[3U] = (IData)((vlSelf->ysyx_22050243_if__DOT__if_pc 
                                        >> 0x20U));
    vlSelf->if_to_id_bus[4U] = vlSelf->ysyx_22050243_if__DOT__ce_reg;
}

void Vysyx_22050243_if___024root___eval(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050243_if___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22050243_if___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050243_if___024root___change_request_1(Vysyx_22050243_if___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050243_if___024root___change_request(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___change_request\n"); );
    // Body
    return (Vysyx_22050243_if___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050243_if___024root___change_request_1(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050243_if___024root___eval_debug_assertions(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->stall & 0xc0U))) {
        Verilated::overWidthError("stall");}
    if (VL_UNLIKELY((vlSelf->br_bus[2U] & 0xfffffffeU))) {
        Verilated::overWidthError("br_bus");}
}
#endif  // VL_DEBUG
