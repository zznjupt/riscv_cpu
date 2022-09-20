// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_ALU__Syms.h"


void Vysyx_22050243_ALU___024root__traceInitSub0(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_ALU___024root__traceInitTop(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_ALU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050243_ALU___024root__traceInitSub0(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declQuad(c+7,"a", false,-1, 63,0);
        tracep->declQuad(c+9,"b", false,-1, 63,0);
        tracep->declBus(c+11,"alu_ctrl", false,-1, 3,0);
        tracep->declQuad(c+12,"alu_out", false,-1, 63,0);
        tracep->declBit(c+14,"zero", false,-1);
        tracep->declBus(c+16,"ysyx_22050243_ALU WIDTH", false,-1, 31,0);
        tracep->declQuad(c+7,"ysyx_22050243_ALU a", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22050243_ALU b", false,-1, 63,0);
        tracep->declBus(c+11,"ysyx_22050243_ALU alu_ctrl", false,-1, 3,0);
        tracep->declQuad(c+12,"ysyx_22050243_ALU alu_out", false,-1, 63,0);
        tracep->declBit(c+14,"ysyx_22050243_ALU zero", false,-1);
        tracep->declQuad(c+7,"ysyx_22050243_ALU u_a", false,-1, 63,0);
        tracep->declQuad(c+9,"ysyx_22050243_ALU u_b", false,-1, 63,0);
        tracep->declQuad(c+1,"ysyx_22050243_ALU add_result", false,-1, 63,0);
        tracep->declQuad(c+3,"ysyx_22050243_ALU sub_result", false,-1, 63,0);
        tracep->declBus(c+5,"ysyx_22050243_ALU sllw_result", false,-1, 31,0);
        tracep->declBus(c+6,"ysyx_22050243_ALU srlw_result", false,-1, 31,0);
        tracep->declBus(c+15,"ysyx_22050243_ALU sraw_result", false,-1, 31,0);
    }
}

void Vysyx_22050243_ALU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050243_ALU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050243_ALU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050243_ALU___024root__traceRegister(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050243_ALU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050243_ALU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050243_ALU___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050243_ALU___024root__traceFullSub0(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_ALU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_ALU___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_ALU___024root*>(voidSelf);
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_ALU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_ALU___024root__traceFullSub0(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->ysyx_22050243_ALU__DOT__add_result),64);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22050243_ALU__DOT__sub_result),64);
        tracep->fullIData(oldp+5,(vlSelf->ysyx_22050243_ALU__DOT__sllw_result),32);
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22050243_ALU__DOT__srlw_result),32);
        tracep->fullQData(oldp+7,(vlSelf->a),64);
        tracep->fullQData(oldp+9,(vlSelf->b),64);
        tracep->fullCData(oldp+11,(vlSelf->alu_ctrl),4);
        tracep->fullQData(oldp+12,(vlSelf->alu_out),64);
        tracep->fullBit(oldp+14,(vlSelf->zero));
        tracep->fullIData(oldp+15,(((IData)(vlSelf->a) 
                                    >> (0x1fU & (IData)(vlSelf->b)))),32);
        tracep->fullIData(oldp+16,(0x40U),32);
    }
}
