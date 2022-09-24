// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_ALU__Syms.h"


void Vysyx_22050243_ALU___024root__traceChgSub0(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050243_ALU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_ALU___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_ALU___024root*>(voidSelf);
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050243_ALU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_ALU___024root__traceChgSub0(Vysyx_22050243_ALU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->ysyx_22050243_ALU__DOT__add_result),64);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22050243_ALU__DOT__sub_result),64);
            tracep->chgIData(oldp+4,(vlSelf->ysyx_22050243_ALU__DOT__sllw_result),32);
            tracep->chgIData(oldp+5,(vlSelf->ysyx_22050243_ALU__DOT__srlw_result),32);
        }
        tracep->chgQData(oldp+6,(vlSelf->a),64);
        tracep->chgQData(oldp+8,(vlSelf->b),64);
        tracep->chgCData(oldp+10,(vlSelf->alu_ctrl),4);
        tracep->chgQData(oldp+11,(vlSelf->alu_out),64);
        tracep->chgBit(oldp+13,(vlSelf->zero));
        tracep->chgIData(oldp+14,(((IData)(vlSelf->a) 
                                   >> (0x1fU & (IData)(vlSelf->b)))),32);
    }
}

void Vysyx_22050243_ALU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050243_ALU___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_ALU___024root*>(voidSelf);
    Vysyx_22050243_ALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
