// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_Mem.h for the primary calling header

#include "Vysyx_22050243_Mem___024root.h"
#include "Vysyx_22050243_Mem__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050243_Mem___024root___ctor_var_reset(Vysyx_22050243_Mem___024root* vlSelf);

Vysyx_22050243_Mem___024root::Vysyx_22050243_Mem___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050243_Mem___024root___ctor_var_reset(this);
}

void Vysyx_22050243_Mem___024root::__Vconfigure(Vysyx_22050243_Mem__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050243_Mem___024root::~Vysyx_22050243_Mem___024root() {
}

void Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__isa_init_TOP();

void Vysyx_22050243_Mem___024root___initial__TOP__1(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___initial__TOP__1\n"); );
    // Body
    Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__isa_init_TOP();
}

void Vysyx_22050243_Mem___024root___eval_initial(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___eval_initial\n"); );
    // Body
    Vysyx_22050243_Mem___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vysyx_22050243_Mem___024root___combo__TOP__2(Vysyx_22050243_Mem___024root* vlSelf);

void Vysyx_22050243_Mem___024root___eval_settle(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___eval_settle\n"); );
    // Body
    Vysyx_22050243_Mem___024root___combo__TOP__2(vlSelf);
}

void Vysyx_22050243_Mem___024root___final(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___final\n"); );
}

void Vysyx_22050243_Mem___024root___ctor_var_reset(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->inst_en = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->data_w_en = VL_RAND_RESET_I(1);
    vlSelf->data_r_en = VL_RAND_RESET_I(1);
    vlSelf->data_wmask = VL_RAND_RESET_I(8);
    vlSelf->data_addr = VL_RAND_RESET_Q(64);
    vlSelf->data_w = VL_RAND_RESET_Q(64);
    vlSelf->data_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_ysyx_22050243_Mem__DOT__IF_inst_read__1__inst = 0;
    vlSelf->__Vtask_ysyx_22050243_Mem__DOT__MEM_pmem_read__3__rdata = 0;
}
