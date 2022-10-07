// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_id__Syms.h"


void Vysyx_22050243_id___024root__traceChgSub0(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050243_id___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_id___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_id___024root*>(voidSelf);
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050243_id___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_id___024root__traceChgSub0(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22050243_id__DOT__flag));
            tracep->chgIData(oldp+1,(vlSelf->ysyx_22050243_id__DOT__buf_inst),32);
            tracep->chgBit(oldp+2,(vlSelf->ysyx_22050243_id__DOT__buf_ce));
            tracep->chgQData(oldp+3,(vlSelf->ysyx_22050243_id__DOT__buf_id_pc),64);
            tracep->chgQData(oldp+5,(vlSelf->ysyx_22050243_id__DOT__buf_next_pc),64);
            tracep->chgIData(oldp+7,(vlSelf->ysyx_22050243_id__DOT__inst_i),32);
            tracep->chgQData(oldp+8,(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                       ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                                       : 0ULL)),64);
            tracep->chgQData(oldp+10,(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                        ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                                        : 0ULL)),64);
            tracep->chgCData(oldp+12,((0x7fU & vlSelf->ysyx_22050243_id__DOT__inst_i)),7);
            tracep->chgCData(oldp+13,((0x1fU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 7U))),5);
            tracep->chgCData(oldp+14,((7U & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+15,((0x1fU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+16,((0x1fU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+17,((vlSelf->ysyx_22050243_id__DOT__inst_i 
                                       >> 0x19U)),7);
            tracep->chgWData(oldp+18,(vlSelf->ysyx_22050243_id__DOT__op_d),128);
            tracep->chgWData(oldp+22,(vlSelf->ysyx_22050243_id__DOT__funct7_d),128);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22050243_id__DOT__funct3_d),8);
            tracep->chgBit(oldp+27,((1U & (vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+28,((1U & (vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                           >> 0x17U))));
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22050243_id__DOT__inst_addi));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22050243_id__DOT__inst_add));
            tracep->chgBit(oldp+31,(vlSelf->ysyx_22050243_id__DOT__inst_addiw));
            tracep->chgBit(oldp+32,(vlSelf->ysyx_22050243_id__DOT__inst_addw));
            tracep->chgBit(oldp+33,(vlSelf->ysyx_22050243_id__DOT__inst_sub));
            tracep->chgBit(oldp+34,(vlSelf->ysyx_22050243_id__DOT__inst_subw));
            tracep->chgBit(oldp+35,(vlSelf->ysyx_22050243_id__DOT__inst_slti));
            tracep->chgBit(oldp+36,(vlSelf->ysyx_22050243_id__DOT__inst_sltiu));
            tracep->chgBit(oldp+37,(vlSelf->ysyx_22050243_id__DOT__inst_slt));
            tracep->chgBit(oldp+38,(vlSelf->ysyx_22050243_id__DOT__inst_sltu));
            tracep->chgBit(oldp+39,(vlSelf->ysyx_22050243_id__DOT__inst_slli));
            tracep->chgBit(oldp+40,(vlSelf->ysyx_22050243_id__DOT__inst_srli));
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22050243_id__DOT__inst_srai));
            tracep->chgBit(oldp+42,(vlSelf->ysyx_22050243_id__DOT__inst_slliw));
            tracep->chgBit(oldp+43,(vlSelf->ysyx_22050243_id__DOT__inst_srliw));
            tracep->chgBit(oldp+44,(vlSelf->ysyx_22050243_id__DOT__inst_sraiw));
            tracep->chgBit(oldp+45,(vlSelf->ysyx_22050243_id__DOT__inst_sll));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22050243_id__DOT__inst_srl));
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22050243_id__DOT__inst_sra));
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22050243_id__DOT__inst_sllw));
            tracep->chgBit(oldp+49,(vlSelf->ysyx_22050243_id__DOT__inst_srlw));
            tracep->chgBit(oldp+50,(vlSelf->ysyx_22050243_id__DOT__inst_sraw));
            tracep->chgBit(oldp+51,(vlSelf->ysyx_22050243_id__DOT__inst_xori));
            tracep->chgBit(oldp+52,(vlSelf->ysyx_22050243_id__DOT__inst_ori));
            tracep->chgBit(oldp+53,(vlSelf->ysyx_22050243_id__DOT__inst_andi));
            tracep->chgBit(oldp+54,(vlSelf->ysyx_22050243_id__DOT__inst_xor));
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22050243_id__DOT__inst_or));
            tracep->chgBit(oldp+56,(vlSelf->ysyx_22050243_id__DOT__inst_and));
            tracep->chgBit(oldp+57,((1U & (((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                             >> 0x13U) 
                                            & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                           & (~ (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0x14U))))));
            tracep->chgBit(oldp+58,((1U & (((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                             >> 0x13U) 
                                            & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                           & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                              >> 0x14U)))));
            tracep->chgBit(oldp+59,(vlSelf->ysyx_22050243_id__DOT__inst_lb));
            tracep->chgBit(oldp+60,(vlSelf->ysyx_22050243_id__DOT__inst_lh));
            tracep->chgBit(oldp+61,(vlSelf->ysyx_22050243_id__DOT__inst_lw));
            tracep->chgBit(oldp+62,(vlSelf->ysyx_22050243_id__DOT__inst_ld));
            tracep->chgBit(oldp+63,(vlSelf->ysyx_22050243_id__DOT__inst_lbu));
            tracep->chgBit(oldp+64,(vlSelf->ysyx_22050243_id__DOT__inst_lhu));
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22050243_id__DOT__inst_lwu));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22050243_id__DOT__inst_sb));
            tracep->chgBit(oldp+67,(vlSelf->ysyx_22050243_id__DOT__inst_sh));
            tracep->chgBit(oldp+68,(vlSelf->ysyx_22050243_id__DOT__inst_sw));
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22050243_id__DOT__inst_sd));
            tracep->chgBit(oldp+70,((1U & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                           >> 0xfU))));
            tracep->chgBit(oldp+71,(vlSelf->ysyx_22050243_id__DOT__inst_jalr));
            tracep->chgBit(oldp+72,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                            >> 3U) 
                                           & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)))));
            tracep->chgBit(oldp+73,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                            >> 3U) 
                                           & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                              >> 1U)))));
            tracep->chgBit(oldp+74,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                            >> 3U) 
                                           & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                              >> 4U)))));
            tracep->chgBit(oldp+75,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                            >> 3U) 
                                           & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                              >> 5U)))));
            tracep->chgBit(oldp+76,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                            >> 3U) 
                                           & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                              >> 6U)))));
            tracep->chgBit(oldp+77,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                            >> 3U) 
                                           & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                              >> 7U)))));
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22050243_id__DOT__inst_csrrw));
            tracep->chgBit(oldp+79,(vlSelf->ysyx_22050243_id__DOT__inst_csrrs));
            tracep->chgBit(oldp+80,(vlSelf->ysyx_22050243_id__DOT__inst_csrrc));
            tracep->chgBit(oldp+81,(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi));
            tracep->chgBit(oldp+82,(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi));
            tracep->chgBit(oldp+83,(vlSelf->ysyx_22050243_id__DOT__inst_csrrci));
            tracep->chgBit(oldp+84,(vlSelf->ysyx_22050243_id__DOT__inst_mul));
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22050243_id__DOT__inst_mulh));
            tracep->chgBit(oldp+86,(vlSelf->ysyx_22050243_id__DOT__inst_mulhsu));
            tracep->chgBit(oldp+87,(vlSelf->ysyx_22050243_id__DOT__inst_mulhu));
            tracep->chgBit(oldp+88,(vlSelf->ysyx_22050243_id__DOT__inst_mulw));
            tracep->chgBit(oldp+89,(vlSelf->ysyx_22050243_id__DOT__inst_div));
            tracep->chgBit(oldp+90,(vlSelf->ysyx_22050243_id__DOT__inst_divu));
            tracep->chgBit(oldp+91,(vlSelf->ysyx_22050243_id__DOT__inst_divw));
            tracep->chgBit(oldp+92,(vlSelf->ysyx_22050243_id__DOT__inst_divuw));
            tracep->chgBit(oldp+93,(vlSelf->ysyx_22050243_id__DOT__inst_remw));
            tracep->chgBit(oldp+94,(vlSelf->ysyx_22050243_id__DOT__inst_remuw));
            tracep->chgBit(oldp+95,(vlSelf->ysyx_22050243_id__DOT__inst_rem));
            tracep->chgBit(oldp+96,(vlSelf->ysyx_22050243_id__DOT__inst_remu));
            tracep->chgCData(oldp+97,(vlSelf->ysyx_22050243_id__DOT__sel_alu_src1),3);
            tracep->chgCData(oldp+98,(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2),7);
            tracep->chgSData(oldp+99,(vlSelf->ysyx_22050243_id__DOT__alu_op),12);
            tracep->chgBit(oldp+100,((1U & ((((((((
                                                   ((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_add) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addi)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb)) 
                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd)) 
                                              | (vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                                 >> 0x17U)) 
                                             | (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                >> 0xfU)) 
                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr)))));
            tracep->chgBit(oldp+101,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sub) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw))));
            tracep->chgBit(oldp+102,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_slt) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slti))));
            tracep->chgBit(oldp+103,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltu) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltiu))));
            tracep->chgBit(oldp+104,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_and) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_andi)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci))));
            tracep->chgBit(oldp+105,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_or) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ori)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi))));
            tracep->chgBit(oldp+106,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_xor) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xori))));
            tracep->chgBit(oldp+107,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sll) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slli)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw))));
            tracep->chgBit(oldp+108,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_srl) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw))));
            tracep->chgBit(oldp+109,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sra) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw))));
            tracep->chgBit(oldp+110,((1U & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                              >> 0x17U) 
                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw)) 
                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi)))));
            tracep->chgBit(oldp+111,((1U & ((((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                               >> 0x13U) 
                                              & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                             & (~ (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                   >> 0x14U))) 
                                            | (((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                 >> 0x13U) 
                                                & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                               & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                  >> 0x14U))))));
            tracep->chgSData(oldp+112,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                         << 0xaU) | 
                                        (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh) 
                                          << 9U) | 
                                         (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw) 
                                           << 8U) | 
                                          (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld) 
                                            << 7U) 
                                           | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu) 
                                               << 6U) 
                                              | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh) 
                                                           << 2U) 
                                                          | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw) 
                                                              << 1U) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd)))))))))))),11);
            tracep->chgCData(oldp+113,(((0x80U & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                  >> 8U)) 
                                        | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr) 
                                            << 6U) 
                                           | ((0x20U 
                                               & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                   << 2U) 
                                                  & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                     << 5U))) 
                                              | ((0x10U 
                                                  & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                      << 1U) 
                                                     & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                        << 3U))) 
                                                 | ((8U 
                                                     & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                        & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                           >> 1U))) 
                                                    | ((4U 
                                                        & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                            >> 1U) 
                                                           & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                              >> 3U))) 
                                                       | ((2U 
                                                           & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                               >> 2U) 
                                                              & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                                 >> 5U))) 
                                                          | (1U 
                                                             & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                                 >> 3U) 
                                                                & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                                   >> 7U))))))))))),8);
            tracep->chgCData(oldp+114,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci))))))),6);
            tracep->chgCData(oldp+115,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mul) 
                                         << 4U) | (
                                                   ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulh) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhsu) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhu) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulw)))))),5);
            tracep->chgCData(oldp+116,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_div) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divu) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw))))),4);
            tracep->chgCData(oldp+117,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_rem) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyx_22050243_id__DOT__inst_remu) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw))))),4);
            tracep->chgBit(oldp+118,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb))));
            tracep->chgBit(oldp+119,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh))));
            tracep->chgBit(oldp+120,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw))));
            tracep->chgBit(oldp+121,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld))));
            tracep->chgBit(oldp+122,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw))));
            tracep->chgBit(oldp+123,((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw) 
                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw))));
            tracep->chgBit(oldp+124,((((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb)) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd))));
            tracep->chgBit(oldp+125,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd))));
            tracep->chgBit(oldp+126,((1U & ((((((((
                                                   ((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                                                                | vlSelf->ysyx_22050243_id__DOT__op_d[0U]) 
                                                                                >> 0x17U) 
                                                                                | (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                                                                >> 0xfU)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addi)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slti)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltiu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xori)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ori)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_andi)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slli)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_add)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sub)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sll)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slt)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltu)) 
                                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xor)) 
                                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srl)) 
                                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sra)) 
                                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_or)) 
                                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_and)) 
                                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw)) 
                                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw)) 
                                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw)) 
                                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw)) 
                                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs)) 
                                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc)) 
                                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi)) 
                                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi)) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci)) 
                                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mul)) 
                                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulh)) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhsu)) 
                                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhu)) 
                                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_div)) 
                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divu)) 
                                                  | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_rem)) 
                                                 | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remu)) 
                                                | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulw)) 
                                               | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw)) 
                                              | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw)) 
                                             | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw)) 
                                            | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw)))));
            tracep->chgBit(oldp+127,((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                           | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu))));
            tracep->chgQData(oldp+128,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[0]),64);
            tracep->chgQData(oldp+130,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[1]),64);
            tracep->chgQData(oldp+132,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[2]),64);
            tracep->chgQData(oldp+134,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[3]),64);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[4]),64);
            tracep->chgQData(oldp+138,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[5]),64);
            tracep->chgQData(oldp+140,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[6]),64);
            tracep->chgQData(oldp+142,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[7]),64);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[8]),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[9]),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[10]),64);
            tracep->chgQData(oldp+150,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[11]),64);
            tracep->chgQData(oldp+152,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[12]),64);
            tracep->chgQData(oldp+154,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[13]),64);
            tracep->chgQData(oldp+156,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[14]),64);
            tracep->chgQData(oldp+158,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[15]),64);
            tracep->chgQData(oldp+160,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[16]),64);
            tracep->chgQData(oldp+162,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[17]),64);
            tracep->chgQData(oldp+164,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[18]),64);
            tracep->chgQData(oldp+166,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[19]),64);
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[20]),64);
            tracep->chgQData(oldp+170,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[21]),64);
            tracep->chgQData(oldp+172,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[22]),64);
            tracep->chgQData(oldp+174,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[23]),64);
            tracep->chgQData(oldp+176,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[24]),64);
            tracep->chgQData(oldp+178,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[25]),64);
            tracep->chgQData(oldp+180,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[26]),64);
            tracep->chgQData(oldp+182,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[27]),64);
            tracep->chgQData(oldp+184,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[28]),64);
            tracep->chgQData(oldp+186,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[29]),64);
            tracep->chgQData(oldp+188,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[30]),64);
            tracep->chgQData(oldp+190,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[31]),64);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgQData(oldp+192,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0]),64);
            tracep->chgQData(oldp+194,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[1]),64);
            tracep->chgQData(oldp+196,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[2]),64);
            tracep->chgQData(oldp+198,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[3]),64);
            tracep->chgQData(oldp+200,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[4]),64);
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[5]),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[6]),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[7]),64);
            tracep->chgQData(oldp+208,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[8]),64);
            tracep->chgQData(oldp+210,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[9]),64);
            tracep->chgQData(oldp+212,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[10]),64);
            tracep->chgQData(oldp+214,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[11]),64);
            tracep->chgQData(oldp+216,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[12]),64);
            tracep->chgQData(oldp+218,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[13]),64);
            tracep->chgQData(oldp+220,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[14]),64);
            tracep->chgQData(oldp+222,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[15]),64);
            tracep->chgQData(oldp+224,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[16]),64);
            tracep->chgQData(oldp+226,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[17]),64);
            tracep->chgQData(oldp+228,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[18]),64);
            tracep->chgQData(oldp+230,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[19]),64);
            tracep->chgQData(oldp+232,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[20]),64);
            tracep->chgQData(oldp+234,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[21]),64);
            tracep->chgQData(oldp+236,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[22]),64);
            tracep->chgQData(oldp+238,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[23]),64);
            tracep->chgQData(oldp+240,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[24]),64);
            tracep->chgQData(oldp+242,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[25]),64);
            tracep->chgQData(oldp+244,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[26]),64);
            tracep->chgQData(oldp+246,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[27]),64);
            tracep->chgQData(oldp+248,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[28]),64);
            tracep->chgQData(oldp+250,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[29]),64);
            tracep->chgQData(oldp+252,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[30]),64);
            tracep->chgQData(oldp+254,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+256,(vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp),366);
        }
        tracep->chgBit(oldp+268,(vlSelf->clk));
        tracep->chgBit(oldp+269,(vlSelf->rst));
        tracep->chgCData(oldp+270,(vlSelf->stall),6);
        tracep->chgBit(oldp+271,(vlSelf->stall_req_for_load));
        tracep->chgCData(oldp+272,(vlSelf->ex_2_id_for_stall_load),7);
        tracep->chgWData(oldp+273,(vlSelf->if_2_id_bus),129);
        tracep->chgIData(oldp+278,(vlSelf->isram_rdata),32);
        tracep->chgWData(oldp+279,(vlSelf->ex_2_gpr_bus),70);
        tracep->chgWData(oldp+282,(vlSelf->mem_2_gpr_bus),70);
        tracep->chgWData(oldp+285,(vlSelf->wb_2_gpr_bus),70);
        tracep->chgWData(oldp+288,(vlSelf->id_2_ex_bus),366);
        tracep->chgQData(oldp+300,(vlSelf->gpr_o[0]),64);
        tracep->chgQData(oldp+302,(vlSelf->gpr_o[1]),64);
        tracep->chgQData(oldp+304,(vlSelf->gpr_o[2]),64);
        tracep->chgQData(oldp+306,(vlSelf->gpr_o[3]),64);
        tracep->chgQData(oldp+308,(vlSelf->gpr_o[4]),64);
        tracep->chgQData(oldp+310,(vlSelf->gpr_o[5]),64);
        tracep->chgQData(oldp+312,(vlSelf->gpr_o[6]),64);
        tracep->chgQData(oldp+314,(vlSelf->gpr_o[7]),64);
        tracep->chgQData(oldp+316,(vlSelf->gpr_o[8]),64);
        tracep->chgQData(oldp+318,(vlSelf->gpr_o[9]),64);
        tracep->chgQData(oldp+320,(vlSelf->gpr_o[10]),64);
        tracep->chgQData(oldp+322,(vlSelf->gpr_o[11]),64);
        tracep->chgQData(oldp+324,(vlSelf->gpr_o[12]),64);
        tracep->chgQData(oldp+326,(vlSelf->gpr_o[13]),64);
        tracep->chgQData(oldp+328,(vlSelf->gpr_o[14]),64);
        tracep->chgQData(oldp+330,(vlSelf->gpr_o[15]),64);
        tracep->chgQData(oldp+332,(vlSelf->gpr_o[16]),64);
        tracep->chgQData(oldp+334,(vlSelf->gpr_o[17]),64);
        tracep->chgQData(oldp+336,(vlSelf->gpr_o[18]),64);
        tracep->chgQData(oldp+338,(vlSelf->gpr_o[19]),64);
        tracep->chgQData(oldp+340,(vlSelf->gpr_o[20]),64);
        tracep->chgQData(oldp+342,(vlSelf->gpr_o[21]),64);
        tracep->chgQData(oldp+344,(vlSelf->gpr_o[22]),64);
        tracep->chgQData(oldp+346,(vlSelf->gpr_o[23]),64);
        tracep->chgQData(oldp+348,(vlSelf->gpr_o[24]),64);
        tracep->chgQData(oldp+350,(vlSelf->gpr_o[25]),64);
        tracep->chgQData(oldp+352,(vlSelf->gpr_o[26]),64);
        tracep->chgQData(oldp+354,(vlSelf->gpr_o[27]),64);
        tracep->chgQData(oldp+356,(vlSelf->gpr_o[28]),64);
        tracep->chgQData(oldp+358,(vlSelf->gpr_o[29]),64);
        tracep->chgQData(oldp+360,(vlSelf->gpr_o[30]),64);
        tracep->chgQData(oldp+362,(vlSelf->gpr_o[31]),64);
        tracep->chgBit(oldp+364,((1U & vlSelf->if_2_id_bus[4U])));
        tracep->chgQData(oldp+365,((((QData)((IData)(
                                                     vlSelf->if_2_id_bus[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->if_2_id_bus[2U])))),64);
        tracep->chgQData(oldp+367,((((QData)((IData)(
                                                     vlSelf->if_2_id_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->if_2_id_bus[0U])))),64);
        tracep->chgBit(oldp+369,((1U & (vlSelf->ex_2_gpr_bus[2U] 
                                        >> 5U))));
        tracep->chgBit(oldp+370,((1U & (vlSelf->mem_2_gpr_bus[2U] 
                                        >> 5U))));
        tracep->chgBit(oldp+371,((1U & (vlSelf->wb_2_gpr_bus[2U] 
                                        >> 5U))));
        tracep->chgCData(oldp+372,((0x1fU & vlSelf->ex_2_gpr_bus[2U])),5);
        tracep->chgCData(oldp+373,((0x1fU & vlSelf->mem_2_gpr_bus[2U])),5);
        tracep->chgCData(oldp+374,((0x1fU & vlSelf->wb_2_gpr_bus[2U])),5);
        tracep->chgQData(oldp+375,((((QData)((IData)(
                                                     vlSelf->ex_2_gpr_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ex_2_gpr_bus[0U])))),64);
        tracep->chgQData(oldp+377,((((QData)((IData)(
                                                     vlSelf->mem_2_gpr_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mem_2_gpr_bus[0U])))),64);
        tracep->chgQData(oldp+379,((((QData)((IData)(
                                                     vlSelf->wb_2_gpr_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->wb_2_gpr_bus[0U])))),64);
        tracep->chgQData(oldp+381,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0xfU)))
                                                ? 0ULL
                                                : (
                                                   (((0x1fU 
                                                      & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                         >> 0xfU)) 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->wb_2_gpr_bus[2U])) 
                                                    & (vlSelf->wb_2_gpr_bus[2U] 
                                                       >> 5U))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->wb_2_gpr_bus[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->wb_2_gpr_bus[0U])))
                                                    : 
                                                   vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                       >> 0xfU))])))),64);
        tracep->chgQData(oldp+383,(((IData)(vlSelf->rst)
                                     ? 0ULL : ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0x14U)))
                                                ? 0ULL
                                                : (
                                                   (((0x1fU 
                                                      & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                         >> 0x14U)) 
                                                     == 
                                                     (0x1fU 
                                                      & vlSelf->wb_2_gpr_bus[2U])) 
                                                    & (vlSelf->wb_2_gpr_bus[2U] 
                                                       >> 5U))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->wb_2_gpr_bus[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->wb_2_gpr_bus[0U])))
                                                    : 
                                                   vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                       >> 0x14U))])))),64);
        tracep->chgQData(oldp+385,((((vlSelf->ex_2_gpr_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->ex_2_gpr_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0xfU))))
                                     ? (((QData)((IData)(
                                                         vlSelf->ex_2_gpr_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ex_2_gpr_bus[0U])))
                                     : (((vlSelf->mem_2_gpr_bus[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->mem_2_gpr_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0xfU))))
                                         ? (((QData)((IData)(
                                                             vlSelf->mem_2_gpr_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->mem_2_gpr_bus[0U])))
                                         : (((vlSelf->wb_2_gpr_bus[2U] 
                                              >> 5U) 
                                             & ((0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0xfU))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->wb_2_gpr_bus[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->wb_2_gpr_bus[0U])))
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0xfU)))
                                                  ? 0ULL
                                                  : 
                                                 ((((0x1fU 
                                                     & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0xfU)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->wb_2_gpr_bus[2U])) 
                                                   & (vlSelf->wb_2_gpr_bus[2U] 
                                                      >> 5U))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->wb_2_gpr_bus[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->wb_2_gpr_bus[0U])))
                                                   : 
                                                  vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0xfU))]))))))),64);
        tracep->chgQData(oldp+387,((((vlSelf->ex_2_gpr_bus[2U] 
                                      >> 5U) & ((0x1fU 
                                                 & vlSelf->ex_2_gpr_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0x14U))))
                                     ? (((QData)((IData)(
                                                         vlSelf->ex_2_gpr_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ex_2_gpr_bus[0U])))
                                     : (((vlSelf->mem_2_gpr_bus[2U] 
                                          >> 5U) & 
                                         ((0x1fU & 
                                           vlSelf->mem_2_gpr_bus[2U]) 
                                          == (0x1fU 
                                              & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                 >> 0x14U))))
                                         ? (((QData)((IData)(
                                                             vlSelf->mem_2_gpr_bus[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->mem_2_gpr_bus[0U])))
                                         : (((vlSelf->wb_2_gpr_bus[2U] 
                                              >> 5U) 
                                             & ((0x1fU 
                                                 & vlSelf->wb_2_gpr_bus[2U]) 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                    >> 0x14U))))
                                             ? (((QData)((IData)(
                                                                 vlSelf->wb_2_gpr_bus[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->wb_2_gpr_bus[0U])))
                                             : ((IData)(vlSelf->rst)
                                                 ? 0ULL
                                                 : 
                                                ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : 
                                                 ((((0x1fU 
                                                     & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                        >> 0x14U)) 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->wb_2_gpr_bus[2U])) 
                                                   & (vlSelf->wb_2_gpr_bus[2U] 
                                                      >> 5U))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlSelf->wb_2_gpr_bus[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->wb_2_gpr_bus[0U])))
                                                   : 
                                                  vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0x14U))]))))))),64);
        tracep->chgCData(oldp+389,((0x1fU & ((IData)(vlSelf->ex_2_id_for_stall_load) 
                                             >> 2U))),5);
        tracep->chgBit(oldp+390,((1U & ((IData)(vlSelf->ex_2_id_for_stall_load) 
                                        >> 1U))));
        tracep->chgBit(oldp+391,((1U & (IData)(vlSelf->ex_2_id_for_stall_load))));
    }
}

void Vysyx_22050243_id___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050243_id___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_id___024root*>(voidSelf);
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
