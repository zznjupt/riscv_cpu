// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__traceChgSub0(VALU___024root* vlSelf, VerilatedVcd* tracep);

void VALU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VALU___024root* const __restrict vlSelf = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VALU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VALU___024root__traceChgSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgCData(oldp+0,(vlSelf->ALU__DOT__A_),5);
            tracep->chgCData(oldp+1,(vlSelf->ALU__DOT__B_),5);
        }
        tracep->chgCData(oldp+2,(vlSelf->op),3);
        tracep->chgCData(oldp+3,(vlSelf->A),4);
        tracep->chgCData(oldp+4,(vlSelf->B),4);
        tracep->chgCData(oldp+5,(vlSelf->alu_result),4);
        tracep->chgBit(oldp+6,(vlSelf->overflow));
        tracep->chgBit(oldp+7,(vlSelf->zero));
        tracep->chgCData(oldp+8,(vlSelf->ALU__DOT__alu_reg),5);
    }
}

void VALU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VALU___024root* const __restrict vlSelf = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    }
}
