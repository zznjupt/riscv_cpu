// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux__Syms.h"


void Vmux___024root__traceChgSub0(Vmux___024root* vlSelf, VerilatedVcd* tracep);

void Vmux___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmux___024root* const __restrict vlSelf = static_cast<Vmux___024root*>(voidSelf);
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vmux___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmux___024root__traceChgSub0(Vmux___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgSData(oldp+0,(vlSelf->mux__DOT____Vcellinp__i0____pinNumber3),16);
            tracep->chgCData(oldp+1,(vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[0]),4);
            tracep->chgCData(oldp+2,(vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[1]),4);
            tracep->chgCData(oldp+3,(vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[2]),4);
            tracep->chgCData(oldp+4,(vlSelf->mux__DOT__i0__DOT__i0__DOT__pair_list[3]),4);
            tracep->chgCData(oldp+5,(vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+6,(vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[1]),2);
            tracep->chgCData(oldp+7,(vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[2]),2);
            tracep->chgCData(oldp+8,(vlSelf->mux__DOT__i0__DOT__i0__DOT__key_list[3]),2);
            tracep->chgCData(oldp+9,(vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[0]),2);
            tracep->chgCData(oldp+10,(vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[1]),2);
            tracep->chgCData(oldp+11,(vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[2]),2);
            tracep->chgCData(oldp+12,(vlSelf->mux__DOT__i0__DOT__i0__DOT__data_list[3]),2);
            tracep->chgCData(oldp+13,(vlSelf->mux__DOT__i0__DOT__i0__DOT__lut_out),2);
            tracep->chgBit(oldp+14,(vlSelf->mux__DOT__i0__DOT__i0__DOT__hit));
        }
        tracep->chgCData(oldp+15,(vlSelf->X0),2);
        tracep->chgCData(oldp+16,(vlSelf->X1),2);
        tracep->chgCData(oldp+17,(vlSelf->X2),2);
        tracep->chgCData(oldp+18,(vlSelf->X3),2);
        tracep->chgCData(oldp+19,(vlSelf->Y),2);
        tracep->chgCData(oldp+20,(vlSelf->F),2);
    }
}

void Vmux___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vmux___024root* const __restrict vlSelf = static_cast<Vmux___024root*>(voidSelf);
    Vmux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
