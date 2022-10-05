// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_if__Syms.h"


void Vysyx_22050243_if___024root__traceChgSub0(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050243_if___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_if___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_if___024root*>(voidSelf);
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050243_if___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_if___024root__traceChgSub0(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22050243_if__DOT__pc_reg),64);
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22050243_if__DOT__ce_reg));
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22050243_if__DOT__if_pc),64);
        }
        tracep->chgBit(oldp+5,(vlSelf->clk));
        tracep->chgBit(oldp+6,(vlSelf->rst));
        tracep->chgCData(oldp+7,(vlSelf->stall),6);
        tracep->chgWData(oldp+8,(vlSelf->br_bus),65);
        tracep->chgWData(oldp+11,(vlSelf->if_2_id_bus),129);
        tracep->chgBit(oldp+16,(vlSelf->isram_e));
        tracep->chgQData(oldp+17,(vlSelf->isram_addr),64);
        tracep->chgQData(oldp+19,(vlSelf->ysyx_22050243_if__DOT__next_pc),64);
        tracep->chgBit(oldp+21,((1U & vlSelf->br_bus[2U])));
        tracep->chgQData(oldp+22,((((QData)((IData)(
                                                    vlSelf->br_bus[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->br_bus[0U])))),64);
    }
}

void Vysyx_22050243_if___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050243_if___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_if___024root*>(voidSelf);
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
