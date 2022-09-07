// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VALU__Syms.h"


void VALU___024root__traceInitSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VALU___024root__traceInitTop(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VALU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VALU___024root__traceInitSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+3,"op", false,-1, 2,0);
        tracep->declBus(c+4,"A", false,-1, 3,0);
        tracep->declBus(c+5,"B", false,-1, 3,0);
        tracep->declBus(c+6,"alu_result", false,-1, 3,0);
        tracep->declBit(c+7,"overflow", false,-1);
        tracep->declBit(c+8,"zero", false,-1);
        tracep->declBus(c+3,"ALU op", false,-1, 2,0);
        tracep->declBus(c+4,"ALU A", false,-1, 3,0);
        tracep->declBus(c+5,"ALU B", false,-1, 3,0);
        tracep->declBus(c+6,"ALU alu_result", false,-1, 3,0);
        tracep->declBit(c+7,"ALU overflow", false,-1);
        tracep->declBit(c+8,"ALU zero", false,-1);
        tracep->declBus(c+1,"ALU A_", false,-1, 4,0);
        tracep->declBus(c+2,"ALU B_", false,-1, 4,0);
        tracep->declBus(c+9,"ALU alu_reg", false,-1, 4,0);
    }
}

void VALU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VALU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VALU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VALU___024root__traceRegister(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VALU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VALU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VALU___024root__traceCleanup, vlSelf);
    }
}

void VALU___024root__traceFullSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VALU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VALU___024root* const __restrict vlSelf = static_cast<VALU___024root*>(voidSelf);
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VALU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VALU___024root__traceFullSub0(VALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ALU__DOT__A_),5);
        tracep->fullCData(oldp+2,(vlSelf->ALU__DOT__B_),5);
        tracep->fullCData(oldp+3,(vlSelf->op),3);
        tracep->fullCData(oldp+4,(vlSelf->A),4);
        tracep->fullCData(oldp+5,(vlSelf->B),4);
        tracep->fullCData(oldp+6,(vlSelf->alu_result),4);
        tracep->fullBit(oldp+7,(vlSelf->overflow));
        tracep->fullBit(oldp+8,(vlSelf->zero));
        tracep->fullCData(oldp+9,(vlSelf->ALU__DOT__alu_reg),5);
    }
}
