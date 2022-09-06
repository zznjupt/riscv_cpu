// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vonoff__Syms.h"


void Vonoff___024root__traceInitSub0(Vonoff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vonoff___024root__traceInitTop(Vonoff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vonoff___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vonoff___024root__traceInitSub0(Vonoff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"f", false,-1);
        tracep->declBit(c+1,"onoff a", false,-1);
        tracep->declBit(c+2,"onoff b", false,-1);
        tracep->declBit(c+3,"onoff f", false,-1);
    }
}

void Vonoff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vonoff___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vonoff___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vonoff___024root__traceRegister(Vonoff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vonoff___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vonoff___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vonoff___024root__traceCleanup, vlSelf);
    }
}

void Vonoff___024root__traceFullSub0(Vonoff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vonoff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vonoff___024root* const __restrict vlSelf = static_cast<Vonoff___024root*>(voidSelf);
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vonoff___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vonoff___024root__traceFullSub0(Vonoff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->a));
        tracep->fullBit(oldp+2,(vlSelf->b));
        tracep->fullBit(oldp+3,(vlSelf->f));
    }
}
