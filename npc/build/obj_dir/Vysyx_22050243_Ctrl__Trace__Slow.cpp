// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_Ctrl__Syms.h"


void Vysyx_22050243_Ctrl___024root__traceInitSub0(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_Ctrl___024root__traceInitTop(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_Ctrl___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050243_Ctrl___024root__traceInitSub0(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1,"opcode", false,-1, 6,0);
        tracep->declBus(c+2,"funct3", false,-1, 2,0);
        tracep->declBit(c+3,"alu_src", false,-1);
        tracep->declBus(c+4,"mem2reg", false,-1, 2,0);
        tracep->declBit(c+5,"reg_w", false,-1);
        tracep->declBit(c+6,"mem_r", false,-1);
        tracep->declBit(c+7,"mem_w", false,-1);
        tracep->declBit(c+8,"branch", false,-1);
        tracep->declBus(c+9,"pc_src_ctrl", false,-1, 1,0);
        tracep->declBus(c+10,"alu_op", false,-1, 2,0);
        tracep->declBit(c+11,"csr_r", false,-1);
        tracep->declBus(c+1,"ysyx_22050243_Ctrl opcode", false,-1, 6,0);
        tracep->declBus(c+2,"ysyx_22050243_Ctrl funct3", false,-1, 2,0);
        tracep->declBit(c+3,"ysyx_22050243_Ctrl alu_src", false,-1);
        tracep->declBus(c+4,"ysyx_22050243_Ctrl mem2reg", false,-1, 2,0);
        tracep->declBit(c+5,"ysyx_22050243_Ctrl reg_w", false,-1);
        tracep->declBit(c+6,"ysyx_22050243_Ctrl mem_r", false,-1);
        tracep->declBit(c+7,"ysyx_22050243_Ctrl mem_w", false,-1);
        tracep->declBit(c+8,"ysyx_22050243_Ctrl branch", false,-1);
        tracep->declBus(c+9,"ysyx_22050243_Ctrl pc_src_ctrl", false,-1, 1,0);
        tracep->declBus(c+10,"ysyx_22050243_Ctrl alu_op", false,-1, 2,0);
        tracep->declBit(c+11,"ysyx_22050243_Ctrl csr_r", false,-1);
    }
}

void Vysyx_22050243_Ctrl___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050243_Ctrl___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050243_Ctrl___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050243_Ctrl___024root__traceRegister(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050243_Ctrl___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050243_Ctrl___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050243_Ctrl___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050243_Ctrl___024root__traceFullSub0(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_Ctrl___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_Ctrl___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_Ctrl___024root*>(voidSelf);
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_Ctrl___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_Ctrl___024root__traceFullSub0(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->opcode),7);
        tracep->fullCData(oldp+2,(vlSelf->funct3),3);
        tracep->fullBit(oldp+3,(vlSelf->alu_src));
        tracep->fullCData(oldp+4,(vlSelf->mem2reg),3);
        tracep->fullBit(oldp+5,(vlSelf->reg_w));
        tracep->fullBit(oldp+6,(vlSelf->mem_r));
        tracep->fullBit(oldp+7,(vlSelf->mem_w));
        tracep->fullBit(oldp+8,(vlSelf->branch));
        tracep->fullCData(oldp+9,(vlSelf->pc_src_ctrl),2);
        tracep->fullCData(oldp+10,(vlSelf->alu_op),3);
        tracep->fullBit(oldp+11,(vlSelf->csr_r));
    }
}
