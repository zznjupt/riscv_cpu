// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_if__Syms.h"


void Vysyx_22050243_if___024root__traceInitSub0(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_if___024root__traceInitTop(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_if___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050243_if___024root__traceInitSub0(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+6,"clk", false,-1);
        tracep->declBit(c+7,"rst", false,-1);
        tracep->declBus(c+8,"stall", false,-1, 5,0);
        tracep->declArray(c+9,"br_bus", false,-1, 64,0);
        tracep->declArray(c+12,"if_2_id_bus", false,-1, 128,0);
        tracep->declBit(c+17,"isram_e", false,-1);
        tracep->declQuad(c+18,"isram_addr", false,-1, 63,0);
        tracep->declBit(c+6,"ysyx_22050243_if clk", false,-1);
        tracep->declBit(c+7,"ysyx_22050243_if rst", false,-1);
        tracep->declBus(c+8,"ysyx_22050243_if stall", false,-1, 5,0);
        tracep->declArray(c+9,"ysyx_22050243_if br_bus", false,-1, 64,0);
        tracep->declArray(c+12,"ysyx_22050243_if if_2_id_bus", false,-1, 128,0);
        tracep->declBit(c+17,"ysyx_22050243_if isram_e", false,-1);
        tracep->declQuad(c+18,"ysyx_22050243_if isram_addr", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_22050243_if pc_reg", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22050243_if ce_reg", false,-1);
        tracep->declQuad(c+20,"ysyx_22050243_if next_pc", false,-1, 63,0);
        tracep->declBit(c+22,"ysyx_22050243_if br_e", false,-1);
        tracep->declQuad(c+23,"ysyx_22050243_if br_addr", false,-1, 63,0);
        tracep->declQuad(c+4,"ysyx_22050243_if if_pc", false,-1, 63,0);
    }
}

void Vysyx_22050243_if___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050243_if___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050243_if___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050243_if___024root__traceRegister(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050243_if___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050243_if___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050243_if___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050243_if___024root__traceFullSub0(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_if___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_if___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_if___024root*>(voidSelf);
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_if___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_if___024root__traceFullSub0(Vysyx_22050243_if___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_if__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22050243_if__DOT__pc_reg),64);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22050243_if__DOT__ce_reg));
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22050243_if__DOT__if_pc),64);
        tracep->fullBit(oldp+6,(vlSelf->clk));
        tracep->fullBit(oldp+7,(vlSelf->rst));
        tracep->fullCData(oldp+8,(vlSelf->stall),6);
        tracep->fullWData(oldp+9,(vlSelf->br_bus),65);
        tracep->fullWData(oldp+12,(vlSelf->if_2_id_bus),129);
        tracep->fullBit(oldp+17,(vlSelf->isram_e));
        tracep->fullQData(oldp+18,(vlSelf->isram_addr),64);
        tracep->fullQData(oldp+20,(vlSelf->ysyx_22050243_if__DOT__next_pc),64);
        tracep->fullBit(oldp+22,((1U & vlSelf->br_bus[2U])));
        tracep->fullQData(oldp+23,((((QData)((IData)(
                                                     vlSelf->br_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->br_bus[0U])))),64);
    }
}
