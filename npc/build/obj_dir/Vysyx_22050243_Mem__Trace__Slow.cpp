// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_Mem__Syms.h"


void Vysyx_22050243_Mem___024root__traceInitSub0(Vysyx_22050243_Mem___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_Mem___024root__traceInitTop(Vysyx_22050243_Mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_Mem___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050243_Mem___024root__traceInitSub0(Vysyx_22050243_Mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clk", false,-1);
        tracep->declBit(c+2,"data_w_en", false,-1);
        tracep->declBit(c+3,"data_r_en", false,-1);
        tracep->declBus(c+4,"data_wmask", false,-1, 7,0);
        tracep->declQuad(c+5,"data_addr", false,-1, 63,0);
        tracep->declQuad(c+7,"data_w", false,-1, 63,0);
        tracep->declQuad(c+9,"data_r", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050243_Mem clk", false,-1);
        tracep->declBit(c+2,"ysyx_22050243_Mem data_w_en", false,-1);
        tracep->declBit(c+3,"ysyx_22050243_Mem data_r_en", false,-1);
        tracep->declBus(c+4,"ysyx_22050243_Mem data_wmask", false,-1, 7,0);
        tracep->declQuad(c+5,"ysyx_22050243_Mem data_addr", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22050243_Mem data_w", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22050243_Mem data_r", false,-1, 63,0);
    }
}

void Vysyx_22050243_Mem___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050243_Mem___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050243_Mem___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050243_Mem___024root__traceRegister(Vysyx_22050243_Mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050243_Mem___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050243_Mem___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050243_Mem___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050243_Mem___024root__traceFullSub0(Vysyx_22050243_Mem___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_Mem___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_Mem___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_Mem___024root*>(voidSelf);
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_Mem___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_Mem___024root__traceFullSub0(Vysyx_22050243_Mem___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clk));
        tracep->fullBit(oldp+2,(vlSelf->data_w_en));
        tracep->fullBit(oldp+3,(vlSelf->data_r_en));
        tracep->fullCData(oldp+4,(vlSelf->data_wmask),8);
        tracep->fullQData(oldp+5,(vlSelf->data_addr),64);
        tracep->fullQData(oldp+7,(vlSelf->data_w),64);
        tracep->fullQData(oldp+9,(vlSelf->data_r),64);
    }
}
