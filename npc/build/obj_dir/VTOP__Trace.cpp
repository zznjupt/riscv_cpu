// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__traceChgSub0(VTOP___024root* vlSelf, VerilatedVcd* tracep);

void VTOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VTOP___024root* const __restrict vlSelf = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VTOP___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VTOP___024root__traceChgSub0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlSelf->TOP__DOT__alu_ctrl_id),4);
            tracep->chgQData(oldp+1,(vlSelf->TOP__DOT__rs1),64);
            tracep->chgQData(oldp+3,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out),64);
            tracep->chgQData(oldp+5,(vlSelf->TOP__DOT__b),64);
            tracep->chgBit(oldp+7,((0ULL == vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out)));
            tracep->chgCData(oldp+8,(vlSelf->TOP__DOT____Vcellinp__ysyx_22050243_ALUCtrl___funct),4);
            tracep->chgBit(oldp+9,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_R));
            tracep->chgBit(oldp+10,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_I));
            tracep->chgBit(oldp+11,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S));
            tracep->chgBit(oldp+12,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B));
            tracep->chgBit(oldp+13,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U));
            tracep->chgBit(oldp+14,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J));
            tracep->chgSData(oldp+15,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S),12);
            tracep->chgSData(oldp+16,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B),13);
            tracep->chgIData(oldp+17,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J),21);
            tracep->chgQData(oldp+18,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S) 
                                                               >> 0xbU))))) 
                                        << 0xcU) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S)))),64);
            tracep->chgQData(oldp+20,((((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B) 
                                                               >> 0xcU))))) 
                                        << 0xdU) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B)))),64);
            tracep->chgQData(oldp+22,((((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J 
                                                               >> 0x14U))))) 
                                        << 0x15U) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J)))),64);
            tracep->chgQData(oldp+24,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__add_result),64);
            tracep->chgQData(oldp+26,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sub_result),64);
            tracep->chgIData(oldp+28,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sllw_result),32);
            tracep->chgIData(oldp+29,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__srlw_result),32);
            tracep->chgIData(oldp+30,(((IData)(vlSelf->TOP__DOT__rs1) 
                                       >> (0x1fU & (IData)(vlSelf->TOP__DOT__b)))),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+31,((4ULL + vlSelf->TOP__DOT__pc)),64);
            tracep->chgQData(oldp+33,(vlSelf->TOP__DOT__pc),64);
            tracep->chgQData(oldp+35,(vlSelf->TOP__DOT__npc),64);
            tracep->chgQData(oldp+37,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[0]),64);
            tracep->chgQData(oldp+39,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[1]),64);
            tracep->chgQData(oldp+41,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[2]),64);
            tracep->chgQData(oldp+43,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[3]),64);
            tracep->chgQData(oldp+45,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[4]),64);
            tracep->chgQData(oldp+47,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[5]),64);
            tracep->chgQData(oldp+49,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[6]),64);
            tracep->chgQData(oldp+51,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[7]),64);
            tracep->chgQData(oldp+53,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[8]),64);
            tracep->chgQData(oldp+55,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[9]),64);
            tracep->chgQData(oldp+57,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[10]),64);
            tracep->chgQData(oldp+59,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[11]),64);
            tracep->chgQData(oldp+61,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[12]),64);
            tracep->chgQData(oldp+63,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[13]),64);
            tracep->chgQData(oldp+65,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[14]),64);
            tracep->chgQData(oldp+67,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[15]),64);
            tracep->chgQData(oldp+69,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[16]),64);
            tracep->chgQData(oldp+71,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[17]),64);
            tracep->chgQData(oldp+73,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[18]),64);
            tracep->chgQData(oldp+75,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[19]),64);
            tracep->chgQData(oldp+77,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[20]),64);
            tracep->chgQData(oldp+79,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[21]),64);
            tracep->chgQData(oldp+81,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[22]),64);
            tracep->chgQData(oldp+83,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[23]),64);
            tracep->chgQData(oldp+85,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[24]),64);
            tracep->chgQData(oldp+87,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[25]),64);
            tracep->chgQData(oldp+89,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[26]),64);
            tracep->chgQData(oldp+91,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[27]),64);
            tracep->chgQData(oldp+93,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[28]),64);
            tracep->chgQData(oldp+95,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[29]),64);
            tracep->chgQData(oldp+97,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[30]),64);
            tracep->chgQData(oldp+99,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[31]),64);
        }
        tracep->chgBit(oldp+101,(vlSelf->clk));
        tracep->chgBit(oldp+102,(vlSelf->rst));
        tracep->chgIData(oldp+103,(vlSelf->i_inst),32);
        tracep->chgQData(oldp+104,(vlSelf->result),64);
        tracep->chgBit(oldp+106,(vlSelf->out_zero));
        tracep->chgBit(oldp+107,((0x13U == (0x7fU & vlSelf->i_inst))));
        tracep->chgCData(oldp+108,(((0x13U == (0x7fU 
                                               & vlSelf->i_inst))
                                     ? 3U : 0U)),3);
        tracep->chgQData(oldp+109,((((0x1fU & (vlSelf->i_inst 
                                               >> 0x14U)) 
                                     == (0x1fU & (vlSelf->i_inst 
                                                  >> 7U)))
                                     ? vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out
                                     : vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr
                                    [(0x1fU & (vlSelf->i_inst 
                                               >> 0x14U))])),64);
        tracep->chgQData(oldp+111,(((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_R)
                                     ? 0ULL : ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_I)
                                                ? ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B)
                                                     ? 0ULL
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                      ? 0ULL
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                       ? 0ULL
                                                       : 
                                                      (((- (QData)((IData)(
                                                                           (vlSelf->i_inst 
                                                                            >> 0x1fU)))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->i_inst 
                                                                          >> 0x14U))))))))
                                                : ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S)
                                                    ? 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B)
                                                     ? 0ULL
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                      ? 0ULL
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                       ? 0ULL
                                                       : 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S) 
                                                                               >> 0xbU))))) 
                                                        << 0xcU) 
                                                       | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S))))))
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B)
                                                     ? 
                                                    ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                      ? 0ULL
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                       ? 0ULL
                                                       : 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B) 
                                                                               >> 0xcU))))) 
                                                        << 0xdU) 
                                                       | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B)))))
                                                     : 
                                                    ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U)
                                                      ? 
                                                     ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                       ? 0ULL
                                                       : 
                                                      (((- (QData)((IData)(
                                                                           (vlSelf->i_inst 
                                                                            >> 0x1fU)))) 
                                                        << 0x14U) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->i_inst 
                                                                          >> 0xcU)))))
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J)
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J 
                                                                               >> 0x14U))))) 
                                                        << 0x15U) 
                                                       | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J)))
                                                       : 0ULL))))))),64);
        tracep->chgCData(oldp+113,((0x7fU & vlSelf->i_inst)),7);
        tracep->chgCData(oldp+114,((0x1fU & (vlSelf->i_inst 
                                             >> 7U))),5);
        tracep->chgCData(oldp+115,((0x1fU & (vlSelf->i_inst 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+116,((0x1fU & (vlSelf->i_inst 
                                             >> 0x14U))),5);
        tracep->chgSData(oldp+117,((vlSelf->i_inst 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+118,((vlSelf->i_inst 
                                    >> 0xcU)),20);
        tracep->chgQData(oldp+119,((((- (QData)((IData)(
                                                        (vlSelf->i_inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->i_inst 
                                                                 >> 0x14U))))),64);
        tracep->chgQData(oldp+121,((((- (QData)((IData)(
                                                        (vlSelf->i_inst 
                                                         >> 0x1fU)))) 
                                     << 0x14U) | (QData)((IData)(
                                                                 (vlSelf->i_inst 
                                                                  >> 0xcU))))),64);
    }
}

void VTOP___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VTOP___024root* const __restrict vlSelf = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
