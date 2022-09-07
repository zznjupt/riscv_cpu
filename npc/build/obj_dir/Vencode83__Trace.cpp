// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencode83__Syms.h"


void Vencode83___024root__traceChgSub0(Vencode83___024root* vlSelf, VerilatedVcd* tracep);

void Vencode83___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vencode83___024root* const __restrict vlSelf = static_cast<Vencode83___024root*>(voidSelf);
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vencode83___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vencode83___024root__traceChgSub0(Vencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->X),8);
        tracep->chgBit(oldp+1,(vlSelf->en));
        tracep->chgCData(oldp+2,(vlSelf->Y),3);
        tracep->chgBit(oldp+3,(vlSelf->flag));
        tracep->chgIData(oldp+4,(vlSelf->encode83__DOT__i),32);
    }
}

void Vencode83___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vencode83___024root* const __restrict vlSelf = static_cast<Vencode83___024root*>(voidSelf);
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
