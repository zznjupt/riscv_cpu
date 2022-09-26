// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_Ctrl.h for the primary calling header

#include "Vysyx_22050243_Ctrl___024root.h"
#include "Vysyx_22050243_Ctrl__Syms.h"

#include "verilated_dpi.h"

//==========


void Vysyx_22050243_Ctrl___024root___ctor_var_reset(Vysyx_22050243_Ctrl___024root* vlSelf);

Vysyx_22050243_Ctrl___024root::Vysyx_22050243_Ctrl___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22050243_Ctrl___024root___ctor_var_reset(this);
}

void Vysyx_22050243_Ctrl___024root::__Vconfigure(Vysyx_22050243_Ctrl__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22050243_Ctrl___024root::~Vysyx_22050243_Ctrl___024root() {
}

void Vysyx_22050243_Ctrl___024root___eval_initial(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___eval_initial\n"); );
}

void Vysyx_22050243_Ctrl___024root___combo__TOP__1(Vysyx_22050243_Ctrl___024root* vlSelf);

void Vysyx_22050243_Ctrl___024root___eval_settle(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___eval_settle\n"); );
    // Body
    Vysyx_22050243_Ctrl___024root___combo__TOP__1(vlSelf);
}

void Vysyx_22050243_Ctrl___024root___final(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___final\n"); );
}

void Vysyx_22050243_Ctrl___024root___ctor_var_reset(Vysyx_22050243_Ctrl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Ctrl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->funct3 = VL_RAND_RESET_I(3);
    vlSelf->alu_src = VL_RAND_RESET_I(1);
    vlSelf->mem2reg = VL_RAND_RESET_I(3);
    vlSelf->reg_w = VL_RAND_RESET_I(1);
    vlSelf->mem_r = VL_RAND_RESET_I(1);
    vlSelf->mem_w = VL_RAND_RESET_I(1);
    vlSelf->branch = VL_RAND_RESET_I(1);
    vlSelf->pc_src_ctrl = VL_RAND_RESET_I(2);
    vlSelf->alu_op = VL_RAND_RESET_I(3);
    vlSelf->csr_r = VL_RAND_RESET_I(1);
}
