// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_Ctrl__Syms.h"


void Vysyx_22050243_Ctrl___024root__traceChgSub0(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050243_Ctrl___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_Ctrl___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_Ctrl___024root*>(voidSelf);
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050243_Ctrl___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_Ctrl___024root__traceChgSub0(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlSelf->opcode),7);
        tracep->chgCData(oldp+1,(vlSelf->funct3),3);
        tracep->chgBit(oldp+2,(vlSelf->alu_src));
        tracep->chgCData(oldp+3,(vlSelf->mem2reg),3);
        tracep->chgBit(oldp+4,(vlSelf->reg_w));
        tracep->chgBit(oldp+5,(vlSelf->mem_r));
        tracep->chgBit(oldp+6,(vlSelf->mem_w));
        tracep->chgBit(oldp+7,(vlSelf->branch));
        tracep->chgCData(oldp+8,(vlSelf->pc_src_ctrl),2);
        tracep->chgCData(oldp+9,(vlSelf->alu_op),3);
        tracep->chgBit(oldp+10,(vlSelf->csr_r));
    }
}

void Vysyx_22050243_Ctrl___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vysyx_22050243_Ctrl___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_Ctrl___024root*>(voidSelf);
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
