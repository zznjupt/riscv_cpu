// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vencode83__Syms.h"


void Vencode83___024root__traceInitSub0(Vencode83___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vencode83___024root__traceInitTop(Vencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vencode83___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vencode83___024root__traceInitSub0(Vencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"X", false,-1, 7,0);
        tracep->declBit(c+2,"en", false,-1);
        tracep->declBus(c+3,"Y", false,-1, 2,0);
        tracep->declBit(c+4,"flag", false,-1);
        tracep->declBus(c+1,"encode83 X", false,-1, 7,0);
        tracep->declBit(c+2,"encode83 en", false,-1);
        tracep->declBus(c+3,"encode83 Y", false,-1, 2,0);
        tracep->declBit(c+4,"encode83 flag", false,-1);
        tracep->declBus(c+5,"encode83 i", false,-1, 31,0);
    }
}

void Vencode83___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vencode83___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vencode83___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vencode83___024root__traceRegister(Vencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vencode83___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vencode83___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vencode83___024root__traceCleanup, vlSelf);
    }
}

void Vencode83___024root__traceFullSub0(Vencode83___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vencode83___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vencode83___024root* const __restrict vlSelf = static_cast<Vencode83___024root*>(voidSelf);
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vencode83___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vencode83___024root__traceFullSub0(Vencode83___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->X),8);
        tracep->fullBit(oldp+2,(vlSelf->en));
        tracep->fullCData(oldp+3,(vlSelf->Y),3);
        tracep->fullBit(oldp+4,(vlSelf->flag));
        tracep->fullIData(oldp+5,(vlSelf->encode83__DOT__i),32);
    }
}
