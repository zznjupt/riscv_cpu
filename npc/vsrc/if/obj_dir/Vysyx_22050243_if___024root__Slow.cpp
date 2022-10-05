// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_if.h for the primary calling header

#include "Vysyx_22050243_if___024root.h"
#include "Vysyx_22050243_if__Syms.h"

//==========


void Vysyx_22050243_if___024root___ctor_var_reset(Vysyx_22050243_if___024root* vlSelf);

Vysyx_22050243_if___024root::Vysyx_22050243_if___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050243_if___024root___ctor_var_reset(this);
}

void Vysyx_22050243_if___024root::__Vconfigure(Vysyx_22050243_if__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050243_if___024root::~Vysyx_22050243_if___024root() {
}

void Vysyx_22050243_if___024root___settle__TOP__2(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->isram_e = vlSelf->ysyx_22050243_if__DOT__ce_reg;
    vlSelf->ysyx_22050243_if__DOT__next_pc = ((1U & 
                                               vlSelf->br_bus[2U])
                                               ? (((QData)((IData)(
                                                                   vlSelf->br_bus[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->br_bus[0U])))
                                               : (4ULL 
                                                  + vlSelf->ysyx_22050243_if__DOT__pc_reg));
    vlSelf->ysyx_22050243_if__DOT__if_pc = ((0x7ffffffcULL 
                                             == vlSelf->ysyx_22050243_if__DOT__pc_reg)
                                             ? 0ULL
                                             : vlSelf->ysyx_22050243_if__DOT__pc_reg);
    vlSelf->isram_addr = vlSelf->ysyx_22050243_if__DOT__if_pc;
    vlSelf->if_to_id_bus[0U] = (IData)(vlSelf->ysyx_22050243_if__DOT__next_pc);
    vlSelf->if_to_id_bus[1U] = (IData)((vlSelf->ysyx_22050243_if__DOT__next_pc 
                                        >> 0x20U));
    vlSelf->if_to_id_bus[2U] = (IData)(vlSelf->ysyx_22050243_if__DOT__if_pc);
    vlSelf->if_to_id_bus[3U] = (IData)((vlSelf->ysyx_22050243_if__DOT__if_pc 
                                        >> 0x20U));
    vlSelf->if_to_id_bus[4U] = vlSelf->ysyx_22050243_if__DOT__ce_reg;
}

void Vysyx_22050243_if___024root___eval_initial(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22050243_if___024root___eval_settle(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___eval_settle\n"); );
    // Body
    Vysyx_22050243_if___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22050243_if___024root___final(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___final\n"); );
}

void Vysyx_22050243_if___024root___ctor_var_reset(Vysyx_22050243_if___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_if___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->stall = 0;
    VL_ZERO_RESET_W(65, vlSelf->br_bus);
    VL_ZERO_RESET_W(129, vlSelf->if_to_id_bus);
    vlSelf->isram_e = 0;
    vlSelf->isram_addr = 0;
    vlSelf->ysyx_22050243_if__DOT__pc_reg = 0;
    vlSelf->ysyx_22050243_if__DOT__ce_reg = 0;
    vlSelf->ysyx_22050243_if__DOT__next_pc = 0;
    vlSelf->ysyx_22050243_if__DOT__if_pc = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
