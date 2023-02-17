// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_top__Syms.h"


void Vysyx_22050243_top___024root__traceChgSub0(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050243_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_top___024root*>(voidSelf);
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22050243_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_top___024root__traceChgSub0(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp277;
    VlWide<7>/*223:0*/ __Vtemp288;
    VlWide<10>/*319:0*/ __Vtemp289;
    VlWide<3>/*95:0*/ __Vtemp291;
    VlWide<4>/*127:0*/ __Vtemp292;
    VlWide<4>/*127:0*/ __Vtemp293;
    VlWide<4>/*127:0*/ __Vtemp294;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<4>/*127:0*/ __Vtemp299;
    VlWide<4>/*127:0*/ __Vtemp300;
    VlWide<4>/*127:0*/ __Vtemp312;
    VlWide<4>/*127:0*/ __Vtemp314;
    VlWide<4>/*127:0*/ __Vtemp315;
    VlWide<4>/*127:0*/ __Vtemp319;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgSData(oldp+0,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0]),10);
            tracep->chgSData(oldp+1,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1]),10);
            tracep->chgSData(oldp+2,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2]),10);
            tracep->chgSData(oldp+3,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3]),10);
            tracep->chgSData(oldp+4,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4]),10);
            tracep->chgSData(oldp+5,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5]),10);
            tracep->chgSData(oldp+6,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6]),10);
            tracep->chgSData(oldp+7,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7]),10);
            tracep->chgSData(oldp+8,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8]),10);
            tracep->chgSData(oldp+9,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9]),10);
            tracep->chgSData(oldp+10,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[10]),10);
            tracep->chgSData(oldp+11,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[11]),10);
            tracep->chgSData(oldp+12,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[12]),10);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
            tracep->chgCData(oldp+15,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
            tracep->chgCData(oldp+19,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
            tracep->chgCData(oldp+22,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
            tracep->chgCData(oldp+23,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
            tracep->chgCData(oldp+24,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[11]),7);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[12]),7);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[11]),3);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[12]),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+39,(vlSelf->ysyx_22050243_top__DOT__mhartid),64);
            tracep->chgBit(oldp+41,(vlSelf->ysyx_22050243_top__DOT__if_valid));
            tracep->chgIData(oldp+42,(vlSelf->ysyx_22050243_top__DOT__if_instruction),32);
            tracep->chgBit(oldp+43,((0x7bU == (0x7fU 
                                               & vlSelf->ysyx_22050243_top__DOT__if_instruction))));
            tracep->chgBit(oldp+44,((1U & ((vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 0xdU) 
                                           | (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                              >> 0xcU)))));
            tracep->chgBit(oldp+45,(vlSelf->ysyx_22050243_top__DOT__if_allowin));
            tracep->chgIData(oldp+46,(vlSelf->ysyx_22050243_top__DOT__id_branch_result),32);
            tracep->chgBit(oldp+47,(vlSelf->ysyx_22050243_top__DOT__id_branch_taken));
            tracep->chgCData(oldp+48,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x2fU)))),5);
            tracep->chgCData(oldp+49,((0x1fU & (IData)(
                                                       (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x34U)))),5);
            tracep->chgBit(oldp+50,(vlSelf->ysyx_22050243_top__DOT__id_flush));
            tracep->chgBit(oldp+51,(vlSelf->ysyx_22050243_top__DOT__id_allowin));
            tracep->chgQData(oldp+52,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf
                                      [(0x1fU & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x2fU)))]),64);
            tracep->chgQData(oldp+54,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf
                                      [(0x1fU & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x34U)))]),64);
            tracep->chgBit(oldp+56,(vlSelf->ysyx_22050243_top__DOT__id_to_ex_valid));
            tracep->chgBit(oldp+57,(vlSelf->ysyx_22050243_top__DOT__id_ecall));
            tracep->chgBit(oldp+58,(vlSelf->ysyx_22050243_top__DOT__id_mret));
            tracep->chgBit(oldp+59,(vlSelf->ysyx_22050243_top__DOT__load_branch));
            tracep->chgIData(oldp+60,(((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                        << 1U) | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                  >> 0x1fU))),32);
            tracep->chgCData(oldp+61,((7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                             >> 8U))),3);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_22050243_top__DOT__ex_wmask),8);
            tracep->chgBit(oldp+63,(vlSelf->ysyx_22050243_top__DOT__ex_flush));
            tracep->chgBit(oldp+64,(vlSelf->ysyx_22050243_top__DOT__ex_allowin));
            tracep->chgBit(oldp+65,(vlSelf->ysyx_22050243_top__DOT__ex_ready_go));
            tracep->chgBit(oldp+66,(vlSelf->ysyx_22050243_top__DOT__ex_to_mem_valid));
            tracep->chgBit(oldp+67,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 5U))));
            tracep->chgBit(oldp+68,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 6U))));
            tracep->chgBit(oldp+69,(vlSelf->ysyx_22050243_top__DOT__ex_mmio));
            tracep->chgBit(oldp+70,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                           >> 0x15U))));
            tracep->chgBit(oldp+71,(vlSelf->ysyx_22050243_top__DOT__ecallmret_on));
            tracep->chgBit(oldp+72,((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dcache_state)) 
                                      & (((IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit) 
                                          | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit)) 
                                         | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok))) 
                                     | ((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__dcache_state)) 
                                        & (((~ (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw)) 
                                            & ((IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit) 
                                               | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit))) 
                                           | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok))))));
            tracep->chgBit(oldp+73,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                           >> 0x12U))));
            tracep->chgBit(oldp+74,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__mem_valid));
            tracep->chgBit(oldp+75,(vlSelf->ysyx_22050243_top__DOT__mem_flush));
            tracep->chgQData(oldp+76,((((QData)((IData)(
                                                        vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
            tracep->chgBit(oldp+78,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                           >> 5U))));
            tracep->chgQData(oldp+79,(vlSelf->ysyx_22050243_top__DOT__mem_final_rdata),64);
            tracep->chgQData(oldp+81,(vlSelf->ysyx_22050243_top__DOT__mem_doubly_aligned_data),64);
            tracep->chgQData(oldp+83,(vlSelf->ysyx_22050243_top__DOT__mem_diff_addr),64);
            tracep->chgQData(oldp+85,(vlSelf->ysyx_22050243_top__DOT__mem_diff_data),64);
            tracep->chgIData(oldp+87,(((vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        << 0x15U) | 
                                       (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 0xbU))),32);
            tracep->chgQData(oldp+88,(vlSelf->ysyx_22050243_top__DOT__if_to_id_bus),64);
            __Vtemp277[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_timer_int_reg)) 
                                       << 0x3eU) | 
                                      (((QData)((IData)(
                                                        ((IData)(
                                                                 (0x10007300000000ULL 
                                                                  == 
                                                                  (0x10007f00000000ULL 
                                                                   & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                                         & (~ (IData)(
                                                                      (0ULL 
                                                                       != 
                                                                       (0xffefff8000000000ULL 
                                                                        & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg))))))) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(
                                                         (0xfffU 
                                                          & (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm)))) 
                                         << 0x31U) 
                                        | (((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__id_mret)) 
                                            << 0x30U) 
                                           | (((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__id_ecall)) 
                                               << 0x2fU) 
                                              | (((QData)((IData)(
                                                                  ((1U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                   & (6U 
                                                                      == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                  << 0x2eU) 
                                                 | (((QData)((IData)(
                                                                     ((2U 
                                                                       == 
                                                                       (7U 
                                                                        & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                      & (6U 
                                                                         == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                     << 0x2dU) 
                                                    | (((QData)((IData)(
                                                                        ((3U 
                                                                          == 
                                                                          (7U 
                                                                           & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                         & (6U 
                                                                            == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                        << 0x2cU) 
                                                       | (((QData)((IData)(
                                                                           ((5U 
                                                                             == 
                                                                             (7U 
                                                                              & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                            & (6U 
                                                                               == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                           << 0x2bU) 
                                                          | (((QData)((IData)(
                                                                              ((6U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                               & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                              << 0x2aU) 
                                                             | (((QData)((IData)(
                                                                                ((7U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                    << 9U) 
                                                                   | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 7U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))))))))))))))))))));
            __Vtemp277[1U] = (((IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                        >> 0x20U)) 
                               << 0x1fU) | (IData)(
                                                   ((((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_timer_int_reg)) 
                                                      << 0x3eU) 
                                                     | (((QData)((IData)(
                                                                         ((IData)(
                                                                                (0x10007300000000ULL 
                                                                                == 
                                                                                (0x10007f00000000ULL 
                                                                                & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                                                          & (~ (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0xffefff8000000000ULL 
                                                                                & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg))))))) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(
                                                                            (0xfffU 
                                                                             & (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm)))) 
                                                            << 0x31U) 
                                                           | (((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__id_mret)) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__id_ecall)) 
                                                                  << 0x2fU) 
                                                                 | (((QData)((IData)(
                                                                                ((1U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                                     << 0x2eU) 
                                                                    | (((QData)((IData)(
                                                                                ((2U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                                        << 0x2dU) 
                                                                       | (((QData)((IData)(
                                                                                ((3U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                                           << 0x2cU) 
                                                                          | (((QData)((IData)(
                                                                                ((5U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                                              << 0x2bU) 
                                                                             | (((QData)((IData)(
                                                                                ((6U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                ((7U 
                                                                                == 
                                                                                (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))) 
                                                                                & (6U 
                                                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)) 
                                                                                << 9U) 
                                                                                | (QData)((IData)(
                                                                                ((0x100U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x3eU)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x39U)) 
                                                                                << 7U)) 
                                                                                | ((0x78U 
                                                                                & ((IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x23U)) 
                                                                                << 3U)) 
                                                                                | (7U 
                                                                                & (IData)(
                                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                                >> 0x2cU)))))))))))))))))))) 
                                                    >> 0x20U)));
            __Vtemp288[6U] = ((0x200000U & ((((((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))) 
                                                | (1U 
                                                   == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                               | (3U 
                                                  == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                              | (4U 
                                                 == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                             | (6U 
                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                            << 0x15U)) 
                              | (((2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                  << 0x14U) | (((IData)(
                                                        (0x300000000ULL 
                                                         == 
                                                         (0x7f00000000ULL 
                                                          & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                                << 0x13U) 
                                               | ((0x7c000U 
                                                   & ((IData)(
                                                              (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                               >> 0x27U)) 
                                                      << 0xeU)) 
                                                  | ((0x3e00U 
                                                      & ((IData)(
                                                                 (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                  >> 0x2fU)) 
                                                         << 9U)) 
                                                     | ((0x1f0U 
                                                         & ((IData)(
                                                                    (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                     >> 0x34U)) 
                                                            << 4U)) 
                                                        | (((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_jalr))))))));
            __Vtemp289[0U] = (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final);
            __Vtemp289[1U] = (IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final 
                                      >> 0x20U));
            __Vtemp289[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                       | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))
                                       ? vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm
                                       : vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final));
            __Vtemp289[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                        | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))
                                        ? vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm
                                        : vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final) 
                                      >> 0x20U));
            __Vtemp289[4U] = (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_alu_input1);
            __Vtemp289[5U] = (IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_alu_input1 
                                      >> 0x20U));
            __Vtemp289[6U] = ((__Vtemp277[0U] << 0x16U) 
                              | __Vtemp288[6U]);
            __Vtemp289[7U] = ((__Vtemp277[0U] >> 0xaU) 
                              | (__Vtemp277[1U] << 0x16U));
            __Vtemp289[8U] = ((__Vtemp277[1U] >> 0xaU) 
                              | (0xffc00000U & ((IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x20U)) 
                                                << 0x15U)));
            __Vtemp289[9U] = ((0x200000U & ((((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1ffffU 
                                                           & (IData)(
                                                                     (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                      >> 0x2fU)))))) 
                                              & (0x20U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(
                                                            (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x27U))))) 
                                             & (0U 
                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                            << 0x15U)) 
                              | ((IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                          >> 0x20U)) 
                                 >> 0xbU));
            tracep->chgWData(oldp+90,(__Vtemp289),310);
            tracep->chgWData(oldp+100,(vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus),296);
            tracep->chgWData(oldp+110,(vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus),356);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22050243_top__DOT__d_req_addr),64);
            tracep->chgCData(oldp+124,(vlSelf->ysyx_22050243_top__DOT__d_req_strb),8);
            tracep->chgWData(oldp+125,(vlSelf->ysyx_22050243_top__DOT__d_req_data),128);
            tracep->chgBit(oldp+129,(vlSelf->ysyx_22050243_top__DOT__d_req_wen));
            tracep->chgBit(oldp+130,(vlSelf->ysyx_22050243_top__DOT__d_req_valid));
            tracep->chgBit(oldp+131,(vlSelf->ysyx_22050243_top__DOT__d_res_valid));
            tracep->chgWData(oldp+132,(vlSelf->ysyx_22050243_top__DOT__d_mrdata),128);
            tracep->chgQData(oldp+136,(vlSelf->ysyx_22050243_top__DOT__i_req_addr),64);
            tracep->chgBit(oldp+138,(vlSelf->ysyx_22050243_top__DOT__i_req_valid));
            tracep->chgBit(oldp+139,((5U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state))));
            tracep->chgWData(oldp+140,(vlSelf->ysyx_22050243_top__DOT__i_mrdata),128);
            tracep->chgQData(oldp+144,(vlSelf->ysyx_22050243_top__DOT__wb_reg_wdata),64);
            tracep->chgQData(oldp+146,(vlSelf->ysyx_22050243_top__DOT__wb_csrwdata),64);
            tracep->chgQData(oldp+148,(vlSelf->ysyx_22050243_top__DOT__wb_csrrdata),64);
            tracep->chgBit(oldp+150,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+151,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+152,((0x1fU & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
            tracep->chgBit(oldp+153,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+154,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                            >> 1U))));
            tracep->chgBit(oldp+155,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+156,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                            >> 2U))));
            tracep->chgBit(oldp+157,(vlSelf->ysyx_22050243_top__DOT__ecall_stuck));
            tracep->chgBit(oldp+158,(vlSelf->ysyx_22050243_top__DOT__mret_stuck));
            tracep->chgCData(oldp+159,(vlSelf->ysyx_22050243_top__DOT__dcache_state),3);
            tracep->chgCData(oldp+160,(vlSelf->ysyx_22050243_top__DOT__icache_state),3);
            tracep->chgIData(oldp+161,(vlSelf->ysyx_22050243_top__DOT__next_pc),32);
            tracep->chgBit(oldp+162,(((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__icache_state)) 
                                      & ((IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0hit) 
                                         | (IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1hit)))));
            tracep->chgBit(oldp+163,(vlSelf->ysyx_22050243_top__DOT__icache_valid));
            tracep->chgBit(oldp+164,(vlSelf->ysyx_22050243_top__DOT__preif_valid));
            tracep->chgBit(oldp+165,(vlSelf->ysyx_22050243_top__DOT__preif_ready_go_reg));
            tracep->chgBit(oldp+166,(vlSelf->ysyx_22050243_top__DOT__preif_ready_go));
            tracep->chgBit(oldp+167,(vlSelf->ysyx_22050243_top__DOT__preif_allowin));
            tracep->chgQData(oldp+168,(vlSelf->ysyx_22050243_top__DOT__icache_data),64);
            tracep->chgBit(oldp+170,(vlSelf->ysyx_22050243_top__DOT__timer_blocked));
            tracep->chgBit(oldp+171,(vlSelf->ysyx_22050243_top__DOT__if_timer_blocked));
            tracep->chgBit(oldp+172,(vlSelf->ysyx_22050243_top__DOT__if_timer_int_tmp));
            tracep->chgBit(oldp+173,(vlSelf->ysyx_22050243_top__DOT__on_hold));
            tracep->chgIData(oldp+174,(vlSelf->ysyx_22050243_top__DOT__next_pc_reg),32);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22050243_top__DOT__rf[0]),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22050243_top__DOT__rf[1]),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22050243_top__DOT__rf[2]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22050243_top__DOT__rf[3]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22050243_top__DOT__rf[4]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22050243_top__DOT__rf[5]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22050243_top__DOT__rf[6]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22050243_top__DOT__rf[7]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22050243_top__DOT__rf[8]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22050243_top__DOT__rf[9]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22050243_top__DOT__rf[10]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22050243_top__DOT__rf[11]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22050243_top__DOT__rf[12]),64);
            tracep->chgQData(oldp+201,(vlSelf->ysyx_22050243_top__DOT__rf[13]),64);
            tracep->chgQData(oldp+203,(vlSelf->ysyx_22050243_top__DOT__rf[14]),64);
            tracep->chgQData(oldp+205,(vlSelf->ysyx_22050243_top__DOT__rf[15]),64);
            tracep->chgQData(oldp+207,(vlSelf->ysyx_22050243_top__DOT__rf[16]),64);
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22050243_top__DOT__rf[17]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22050243_top__DOT__rf[18]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22050243_top__DOT__rf[19]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22050243_top__DOT__rf[20]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22050243_top__DOT__rf[21]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22050243_top__DOT__rf[22]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22050243_top__DOT__rf[23]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22050243_top__DOT__rf[24]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22050243_top__DOT__rf[25]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22050243_top__DOT__rf[26]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22050243_top__DOT__rf[27]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22050243_top__DOT__rf[28]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22050243_top__DOT__rf[29]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22050243_top__DOT__rf[30]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22050243_top__DOT__rf[31]),64);
            tracep->chgIData(oldp+239,(vlSelf->ysyx_22050243_top__DOT__if_instruction_reg),32);
            tracep->chgBit(oldp+240,(vlSelf->ysyx_22050243_top__DOT__if_instruction_blocked));
            tracep->chgBit(oldp+241,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_valid));
            tracep->chgBit(oldp+242,(((IData)(vlSelf->ysyx_22050243_top__DOT__i_req_valid) 
                                      | (IData)(vlSelf->ysyx_22050243_top__DOT__d_req_valid))));
            tracep->chgBit(oldp+243,(((IData)(vlSelf->ysyx_22050243_top__DOT__d_req_valid) 
                                      & (~ (IData)(vlSelf->ysyx_22050243_top__DOT__d_req_wen)))));
            tracep->chgBit(oldp+244,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__mmio_rdone));
            tracep->chgBit(oldp+245,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__mmio_wdone));
            tracep->chgBit(oldp+246,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__is_mmio));
            tracep->chgQData(oldp+247,(((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state))
                                         ? (0xfffffffffffffff0ULL 
                                            & vlSelf->ysyx_22050243_top__DOT__i_req_addr)
                                         : ((3U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state))
                                             ? ((IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__is_mmio)
                                                 ? vlSelf->ysyx_22050243_top__DOT__d_req_addr
                                                 : 
                                                (0xfffffffffffffff0ULL 
                                                 & vlSelf->ysyx_22050243_top__DOT__d_req_addr))
                                             : 0ULL))),64);
            tracep->chgCData(oldp+249,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state),3);
            tracep->chgCData(oldp+250,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state),3);
            tracep->chgBit(oldp+251,((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state))));
            tracep->chgBit(oldp+252,(((2U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state)) 
                                      | (5U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state)))));
            tracep->chgBit(oldp+253,(((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)) 
                                      | (3U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)))));
            tracep->chgBit(oldp+254,(((2U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)) 
                                      | (4U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)))));
            tracep->chgQData(oldp+255,((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc))),64);
            tracep->chgCData(oldp+257,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__input_offset_reg),4);
            tracep->chgBit(oldp+258,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0hit_reg));
            tracep->chgBit(oldp+259,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1hit_reg));
            tracep->chgIData(oldp+260,((0x1fffffU & (IData)(
                                                            ((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc)) 
                                                             >> 0xbU)))),21);
            tracep->chgCData(oldp+261,((0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc)) 
                                                         >> 4U)))),7);
            tracep->chgCData(oldp+262,((0xfU & (IData)((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc))))),4);
            tracep->chgBit(oldp+263,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_wen_way0));
            tracep->chgBit(oldp+264,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_wen_way1));
            tracep->chgWData(oldp+265,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_strb),128);
            tracep->chgWData(oldp+269,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_wdata),128);
            tracep->chgWData(oldp+273,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way0),128);
            tracep->chgWData(oldp+277,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way1),128);
            tracep->chgBit(oldp+281,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0hit));
            tracep->chgBit(oldp+282,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1hit));
            tracep->chgBit(oldp+283,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0valid));
            tracep->chgBit(oldp+284,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1valid));
            tracep->chgQData(oldp+285,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__input_offset_reg))
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way0[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way0[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way0[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way0[0U]))))),64);
            tracep->chgQData(oldp+287,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__input_offset_reg))
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way1[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way1[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way1[0U]))))),64);
            tracep->chgBit(oldp+289,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cnt));
            tracep->chgIData(oldp+290,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__unnamedblk1__DOT__i),32);
            tracep->chgQData(oldp+291,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U])))),64);
            tracep->chgQData(oldp+293,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[0U])))),64);
            tracep->chgBit(oldp+295,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                            >> 6U))));
            tracep->chgBit(oldp+296,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                            >> 5U))));
            tracep->chgBit(oldp+297,(vlSelf->ysyx_22050243_top__DOT____Vcellinp__dcache__input_valid));
            tracep->chgCData(oldp+298,((3U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                              >> 8U))),2);
            tracep->chgCData(oldp+299,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_size_reg),2);
            tracep->chgCData(oldp+300,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_offset_reg),4);
            tracep->chgBit(oldp+301,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit_reg));
            tracep->chgBit(oldp+302,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit_reg));
            tracep->chgBit(oldp+303,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mmio_ok));
            tracep->chgIData(oldp+304,((vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U] 
                                        >> 0xbU)),21);
            tracep->chgCData(oldp+305,((0x7fU & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U] 
                                                 >> 4U))),7);
            tracep->chgCData(oldp+306,((0xfU & vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U])),4);
            tracep->chgCData(oldp+307,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_index_reg),7);
            tracep->chgCData(oldp+308,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_offset_reg),4);
            tracep->chgWData(oldp+309,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_strb),128);
            tracep->chgBit(oldp+313,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way0));
            tracep->chgBit(oldp+314,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way1));
            tracep->chgWData(oldp+315,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+319,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_miss));
            tracep->chgCData(oldp+320,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_cnt),7);
            tracep->chgBit(oldp+321,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok));
            tracep->chgBit(oldp+322,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way0_reg));
            tracep->chgBit(oldp+323,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way1_reg));
            tracep->chgQData(oldp+324,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__ex_cache_strb),64);
            tracep->chgWData(oldp+326,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way0),128);
            tracep->chgWData(oldp+330,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way1),128);
            tracep->chgBit(oldp+334,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit));
            tracep->chgBit(oldp+335,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit));
            tracep->chgBit(oldp+336,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0dirty));
            tracep->chgBit(oldp+337,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1dirty));
            tracep->chgBit(oldp+338,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0valid));
            tracep->chgBit(oldp+339,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1valid));
            tracep->chgQData(oldp+340,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_offset_reg))
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way0[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way0[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way0[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way0[0U]))))),64);
            tracep->chgQData(oldp+342,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_offset_reg))
                                         ? (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way1[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way1[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way1[0U]))))),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__ex_cache_wdata),64);
            tracep->chgBit(oldp+346,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw_way0));
            tracep->chgBit(oldp+347,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw_way1));
            tracep->chgBit(oldp+348,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw));
            tracep->chgBit(oldp+349,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mmio_mem));
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mmio_rdata_reg),64);
            tracep->chgBit(oldp+352,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0fencev));
            tracep->chgBit(oldp+353,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0fenced));
            tracep->chgBit(oldp+354,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1fencev));
            tracep->chgBit(oldp+355,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1fenced));
            tracep->chgBit(oldp+356,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cnt));
            tracep->chgIData(oldp+357,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+358,((1U & (((vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                              >> 5U) 
                                             | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_miss)) 
                                            | ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                                >> 0x15U) 
                                               & (~ (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok)))))));
            tracep->chgCData(oldp+359,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT____Vcellinp__Dcache_way1__A),7);
            tracep->chgCData(oldp+360,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT____Vcellinp__Dcache_way2__A),7);
            tracep->chgCData(oldp+361,((0x1fU & vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U])),5);
            tracep->chgCData(oldp+362,((0x1fU & vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[2U])),5);
            tracep->chgBit(oldp+363,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+364,((1U & (vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+365,((1U & (vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[3U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+366,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[5U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+367,((1U & (vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[3U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+368,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                   >> 0x2cU)))))))));
            tracep->chgBit(oldp+369,((1U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                    >> 0x2dU)))))) 
                                            & (IData)(
                                                      (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                       >> 0x2cU))))));
            tracep->chgBit(oldp+370,((4U == (7U & (IData)(
                                                          (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x2cU))))));
            tracep->chgBit(oldp+371,((6U == (7U & (IData)(
                                                          (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x2cU))))));
            tracep->chgBit(oldp+372,((5U == (7U & (IData)(
                                                          (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x2cU))))));
            tracep->chgBit(oldp+373,((7U == (7U & (IData)(
                                                          (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x2cU))))));
            tracep->chgBit(oldp+374,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__btype_taken));
            tracep->chgBit(oldp+375,(((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                      | (3U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgBit(oldp+376,(((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                      | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgCData(oldp+377,(((0x20U & ((IData)(
                                                          (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x3eU)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            ((IData)(
                                                     (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x39U)) 
                                             << 4U)) 
                                           | (0xfU 
                                              & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x23U)))))),6);
            tracep->chgCData(oldp+378,((7U & (IData)(
                                                     (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x2cU)))),3);
            tracep->chgCData(oldp+379,((0x1fU & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x27U)))),5);
            tracep->chgBit(oldp+380,((1U & (((((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))) 
                                               | (1U 
                                                  == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                              | (3U 
                                                 == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                             | (4U 
                                                == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                            | (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))));
            tracep->chgBit(oldp+381,((2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))));
            tracep->chgBit(oldp+382,((IData)((0x300000000ULL 
                                              == (0x7f00000000ULL 
                                                  & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))));
            tracep->chgCData(oldp+383,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type),3);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm),64);
            tracep->chgBit(oldp+386,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_jalr));
            tracep->chgQData(oldp+387,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_alu_input1),64);
            tracep->chgQData(oldp+389,((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                         | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))
                                         ? vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm
                                         : vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final)),64);
            tracep->chgQData(oldp+391,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata1_final),64);
            tracep->chgQData(oldp+393,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final),64);
            tracep->chgBit(oldp+395,(((IData)((0x10007300000000ULL 
                                               == (0x10007f00000000ULL 
                                                   & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                      & (~ (IData)(
                                                   (0ULL 
                                                    != 
                                                    (0xffefff8000000000ULL 
                                                     & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))))));
            tracep->chgBit(oldp+396,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__exid_raw_hazard1));
            tracep->chgBit(oldp+397,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__exid_raw_hazard2));
            tracep->chgBit(oldp+398,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__memid_raw_hazard1));
            tracep->chgBit(oldp+399,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__memid_raw_hazard2));
            tracep->chgBit(oldp+400,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__load_use_hazard1));
            tracep->chgBit(oldp+401,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__load_use_hazard2));
            tracep->chgBit(oldp+402,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
            tracep->chgBit(oldp+403,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
            tracep->chgBit(oldp+404,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard1));
            tracep->chgBit(oldp+405,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard2));
            tracep->chgBit(oldp+406,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
            tracep->chgBit(oldp+407,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
            tracep->chgBit(oldp+408,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_ready_go));
            tracep->chgBit(oldp+409,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_valid));
            tracep->chgQData(oldp+410,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg),64);
            tracep->chgIData(oldp+412,((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)),32);
            tracep->chgIData(oldp+413,((IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+414,(((1U == (7U & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))) 
                                      & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgBit(oldp+415,(((2U == (7U & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))) 
                                      & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgBit(oldp+416,(((3U == (7U & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))) 
                                      & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgBit(oldp+417,(((5U == (7U & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))) 
                                      & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgBit(oldp+418,(((6U == (7U & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))) 
                                      & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgBit(oldp+419,(((7U == (7U & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2cU)))) 
                                      & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgBit(oldp+420,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_timer_int_reg));
            tracep->chgBit(oldp+421,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_jalr_stuck));
            tracep->chgBit(oldp+422,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_jalr_stuck_reg));
            tracep->chgIData(oldp+423,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__stuck_jalr_result),32);
            tracep->chgBit(oldp+424,((((~ (IData)((0U 
                                                   != 
                                                   (0x1ffffU 
                                                    & (IData)(
                                                              (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                               >> 0x2fU)))))) 
                                       & (0x20U == 
                                          (0xffU & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x27U))))) 
                                      & (0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
            tracep->chgCData(oldp+425,((0x7fU & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x20U)))),7);
            tracep->chgCData(oldp+426,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
            tracep->chgBit(oldp+427,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+428,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__rtype_calc_result),64);
            tracep->chgQData(oldp+430,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__itype_calc_result),64);
            tracep->chgQData(oldp+432,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__rtype_alu_op),64);
            tracep->chgIData(oldp+434,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__itype_alu_op),32);
            tracep->chgIData(oldp+435,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__addw_result),32);
            tracep->chgIData(oldp+436,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__subw_result),32);
            tracep->chgIData(oldp+437,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
            tracep->chgIData(oldp+438,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
            tracep->chgIData(oldp+439,(((vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                         << 0x1fU) 
                                        | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                           >> 1U))),32);
            tracep->chgQData(oldp+440,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_addw_result),64);
            tracep->chgQData(oldp+442,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22050243_top__DOT__exe__DOT__subw_result 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->ysyx_22050243_top__DOT__exe__DOT__subw_result)))),64);
            tracep->chgQData(oldp+444,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
            tracep->chgQData(oldp+446,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
            tracep->chgQData(oldp+448,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                            << 0x1fU) 
                                                           | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                              >> 1U)))))),64);
            tracep->chgIData(oldp+450,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__src1_sllw),32);
            tracep->chgIData(oldp+451,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__src1_srlw),32);
            tracep->chgCData(oldp+452,((0x3fU & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
            tracep->chgQData(oldp+453,((~ (0xffffffffffffffffULL 
                                           >> (0x3fU 
                                               & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
            tracep->chgQData(oldp+455,((0xffffffff00000000ULL 
                                        | (QData)((IData)(
                                                          (~ 
                                                           (0xffffffffU 
                                                            >> 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))))),64);
            tracep->chgQData(oldp+457,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_src1_sraw),64);
            tracep->chgQData(oldp+459,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_src1_sllw),64);
            tracep->chgQData(oldp+461,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_src1_srlw),64);
            tracep->chgQData(oldp+463,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
            tracep->chgCData(oldp+465,((0x3fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                 >> 0x19U))),6);
            tracep->chgCData(oldp+466,((7U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 0x16U))),3);
            tracep->chgBit(oldp+467,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+468,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+469,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                 >> 0xeU))),5);
            tracep->chgCData(oldp+470,((7U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 1U))),3);
            tracep->chgBit(oldp+471,((1U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
            tracep->chgQData(oldp+472,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
            tracep->chgQData(oldp+474,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
            tracep->chgCData(oldp+476,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                 >> 9U))),5);
            tracep->chgCData(oldp+477,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                 >> 4U))),5);
            tracep->chgBit(oldp+478,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x15U))));
            tracep->chgIData(oldp+479,(((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                         << 0xbU) | 
                                        (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 0x15U))),32);
            tracep->chgBit(oldp+480,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul_type));
            tracep->chgBit(oldp+481,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_type));
            tracep->chgBit(oldp+482,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_sign));
            tracep->chgBit(oldp+483,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul_ok));
            tracep->chgBit(oldp+484,((1U & (~ ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                >> 0x16U) 
                                               & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                  >> 0x17U))))));
            tracep->chgBit(oldp+485,((1U & (~ (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                               >> 0x17U)))));
            tracep->chgQData(oldp+486,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
            tracep->chgQData(oldp+488,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
            tracep->chgBit(oldp+490,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__ex_valid));
            tracep->chgWData(oldp+491,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg),310);
            tracep->chgQData(oldp+501,(((8U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                         ? ((4U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                             ? 0ULL
                                             : ((2U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? 0ULL
                                                 : vlSelf->ysyx_22050243_top__DOT__exe__DOT__rtype_calc_result))
                                         : ((4U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                             ? ((2U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + 
                                                                    ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                      << 1U) 
                                                                     | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                        >> 0x1fU)))))
                                                 : 
                                                ((((QData)((IData)(
                                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                 + 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))))
                                             : ((2U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                 ? 
                                                ((0x8000000U 
                                                  & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))
                                                  : 
                                                 ((((QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[4U]))) 
                                                  + (QData)((IData)(
                                                                    ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                      << 1U) 
                                                                     | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                        >> 0x1fU))))))
                                                 : 
                                                ((1U 
                                                  & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                       << 1U) 
                                                                      | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                         >> 0x1fU)))))
                                                  : vlSelf->ysyx_22050243_top__DOT__exe__DOT__itype_calc_result))))),64);
            tracep->chgBit(oldp+503,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_ready));
            tracep->chgCData(oldp+504,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_state),2);
            tracep->chgQData(oldp+505,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
            tracep->chgQData(oldp+507,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                              >> 1U)))),64);
            tracep->chgBit(oldp+509,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 4U))));
            tracep->chgBit(oldp+510,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 3U))));
            tracep->chgBit(oldp+511,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 2U))));
            tracep->chgBit(oldp+512,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 1U))));
            tracep->chgBit(oldp+513,((1U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
            tracep->chgBit(oldp+514,((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+515,((1U & ((((((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                 >> 3U) 
                                                | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                   >> 4U)) 
                                               | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                  >> 2U)) 
                                              | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                 >> 1U)) 
                                             | vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U]) 
                                            | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                               >> 0x1fU)))));
            tracep->chgSData(oldp+516,((0xfffU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                  >> 7U))),12);
            tracep->chgBit(oldp+517,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+518,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+519,((1U & (((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                              >> 5U) 
                                             | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                >> 6U)) 
                                            | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                               >> 0x14U)))));
            tracep->chgBit(oldp+520,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__cache_readygo));
            tracep->chgBit(oldp+521,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul_stuck));
            tracep->chgBit(oldp+522,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_stuck));
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__res_sra),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__res_srl),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__res_sll),64);
            tracep->chgCData(oldp+529,(vlSelf->ysyx_22050243_top__DOT__exe__DOT____Vcellinp__decode_Rtype__in),6);
            tracep->chgCData(oldp+530,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                 >> 0x16U))),5);
            tracep->chgWData(oldp+531,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__x_ext),65);
            __Vtemp291[0U] = ((IData)((((QData)((IData)(
                                                        vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
                              << 1U);
            __Vtemp291[1U] = (((IData)((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
                               >> 0x1fU) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))) 
                                                     >> 0x20U)) 
                                            << 1U));
            __Vtemp291[2U] = ((((0x800000U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                 ? 0U : (3U & (- (IData)(
                                                         (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U] 
                                                          >> 0x1fU))))) 
                               << 1U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))) 
                                                  >> 0x20U)) 
                                         >> 0x1fU));
            tracep->chgWData(oldp+534,(__Vtemp291),67);
            tracep->chgWData(oldp+537,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res),128);
            tracep->chgCData(oldp+541,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__cnt),5);
            tracep->chgWData(oldp+542,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier),128);
            tracep->chgWData(oldp+546,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied),67);
            tracep->chgCData(oldp+549,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__mul_state),2);
            __Vtemp292[0U] = 1U;
            __Vtemp292[1U] = 0U;
            __Vtemp292[2U] = 0U;
            __Vtemp292[3U] = 0U;
            __Vtemp293[0U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
            __Vtemp293[1U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
            __Vtemp293[2U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
            __Vtemp293[3U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
            VL_ADD_W(4, __Vtemp294, __Vtemp292, __Vtemp293);
            tracep->chgWData(oldp+550,(__Vtemp294),128);
            __Vtemp298[0U] = 1U;
            __Vtemp298[1U] = 0U;
            __Vtemp298[2U] = 0U;
            __Vtemp298[3U] = 0U;
            __Vtemp299[0U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
            __Vtemp299[1U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
            __Vtemp299[2U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
            __Vtemp299[3U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
            VL_ADD_W(4, __Vtemp300, __Vtemp298, __Vtemp299);
            __Vtemp312[0U] = 1U;
            __Vtemp312[1U] = 0U;
            __Vtemp312[2U] = 0U;
            __Vtemp312[3U] = 0U;
            __Vtemp314[0U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
            __Vtemp314[1U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
            __Vtemp314[2U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
            __Vtemp314[3U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
            VL_ADD_W(4, __Vtemp315, __Vtemp312, __Vtemp314);
            __Vtemp319[0U] = (((((- (IData)(((1U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                             | (2U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]) 
                                | ((- (IData)(((5U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & __Vtemp300[0U])) 
                               | ((- (IData)((3U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                  & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                     << 1U))) | ((- (IData)(
                                                            (4U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                                 & (__Vtemp315[0U] 
                                                    << 1U)));
            __Vtemp319[1U] = (((((- (IData)(((1U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                             | (2U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]) 
                                | ((- (IData)(((5U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & __Vtemp300[1U])) 
                               | ((- (IData)((3U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                  & ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                                   << 1U)))) 
                              | ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp315[0U] 
                                     >> 0x1fU) | (__Vtemp315[1U] 
                                                  << 1U))));
            __Vtemp319[2U] = (((((- (IData)(((1U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                             | (2U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]) 
                                | ((- (IData)(((5U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & __Vtemp300[2U])) 
                               | ((- (IData)((3U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                  & ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                                   << 1U)))) 
                              | ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp315[1U] 
                                     >> 0x1fU) | (__Vtemp315[2U] 
                                                  << 1U))));
            __Vtemp319[3U] = (((((- (IData)(((1U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                             | (2U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]) 
                                | ((- (IData)(((5U 
                                                == 
                                                (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                                   & __Vtemp300[3U])) 
                               | ((- (IData)((3U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                  & ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                      >> 0x1fU) | (
                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U] 
                                                   << 1U)))) 
                              | ((- (IData)((4U == 
                                             (7U & 
                                              vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                 & ((__Vtemp315[2U] 
                                     >> 0x1fU) | (__Vtemp315[3U] 
                                                  << 1U))));
            tracep->chgWData(oldp+554,(__Vtemp319),128);
            tracep->chgQData(oldp+558,(vlSelf->ysyx_22050243_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
            tracep->chgQData(oldp+560,(vlSelf->ysyx_22050243_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
            tracep->chgCData(oldp+562,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__cnt),7);
            tracep->chgWData(oldp+563,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend),129);
            tracep->chgQData(oldp+568,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__divisor),64);
            tracep->chgWData(oldp+570,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__subres),65);
            tracep->chgBit(oldp+573,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                            >> 6U))));
            tracep->chgCData(oldp+574,((7U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                              >> 8U))),3);
            tracep->chgQData(oldp+575,(((0x20U & vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                         ? vlSelf->ysyx_22050243_top__DOT__mem_final_rdata
                                         : (((QData)((IData)(
                                                             vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
            tracep->chgBit(oldp+577,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+578,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                            >> 8U))));
            tracep->chgBit(oldp+579,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lb));
            tracep->chgBit(oldp+580,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lh));
            tracep->chgBit(oldp+581,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lw));
            tracep->chgBit(oldp+582,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__ld));
            tracep->chgBit(oldp+583,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lbu));
            tracep->chgBit(oldp+584,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lhu));
            tracep->chgBit(oldp+585,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lwu));
            tracep->chgBit(oldp+586,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                            >> 7U))));
            tracep->chgCData(oldp+587,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                                 >> 0x15U))),5);
            tracep->chgQData(oldp+588,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                              >> 0x1aU)))),64);
            tracep->chgSData(oldp+590,((0xfffU & ((
                                                   vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                                   << 6U) 
                                                  | (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                                     >> 0x1aU)))),12);
            tracep->chgCData(oldp+591,((0x1fU & vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
            tracep->chgBit(oldp+592,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0xbU))));
            tracep->chgQData(oldp+593,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
            tracep->chgBit(oldp+595,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+596,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0x10U))));
            tracep->chgBit(oldp+597,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0xfU))));
            tracep->chgBit(oldp+598,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0xeU))));
            tracep->chgBit(oldp+599,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0xdU))));
            tracep->chgBit(oldp+600,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0xcU))));
            tracep->chgBit(oldp+601,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                            >> 0x14U))));
            tracep->chgBit(oldp+602,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                            >> 6U))));
            tracep->chgBit(oldp+603,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                            >> 7U))));
            tracep->chgIData(oldp+604,(((vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[9U] 
                                         << 0x17U) 
                                        | (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                           >> 9U))),32);
            tracep->chgBit(oldp+605,((0U == (7U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+606,((1U == (7U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+607,((2U == (7U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+608,((3U == (7U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+609,((4U == (7U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+610,((5U == (7U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+611,((6U == (7U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+612,((1U == (3U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+613,((2U == (3U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgBit(oldp+614,((3U == (3U & (
                                                   vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                   >> 8U)))));
            tracep->chgWData(oldp+615,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg),297);
            tracep->chgQData(oldp+625,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__rawdata),64);
            tracep->chgCData(oldp+627,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_addr_lowmask),8);
            tracep->chgCData(oldp+628,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__mem_addr_lowmask),8);
            tracep->chgCData(oldp+629,((7U & vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U])),3);
            tracep->chgQData(oldp+630,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[0]),64);
            tracep->chgQData(oldp+632,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[1]),64);
            tracep->chgQData(oldp+634,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[2]),64);
            tracep->chgQData(oldp+636,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[3]),64);
            tracep->chgQData(oldp+638,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[4]),64);
            tracep->chgQData(oldp+640,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[5]),64);
            tracep->chgQData(oldp+642,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[6]),64);
            tracep->chgQData(oldp+644,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[7]),64);
            tracep->chgQData(oldp+646,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[8]),64);
            tracep->chgQData(oldp+648,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[9]),64);
            tracep->chgQData(oldp+650,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[10]),64);
            tracep->chgQData(oldp+652,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[11]),64);
            tracep->chgQData(oldp+654,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[12]),64);
            tracep->chgQData(oldp+656,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[13]),64);
            tracep->chgQData(oldp+658,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[14]),64);
            tracep->chgQData(oldp+660,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[15]),64);
            tracep->chgQData(oldp+662,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[16]),64);
            tracep->chgQData(oldp+664,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[17]),64);
            tracep->chgQData(oldp+666,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[18]),64);
            tracep->chgQData(oldp+668,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[19]),64);
            tracep->chgQData(oldp+670,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[20]),64);
            tracep->chgQData(oldp+672,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[21]),64);
            tracep->chgQData(oldp+674,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[22]),64);
            tracep->chgQData(oldp+676,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[23]),64);
            tracep->chgQData(oldp+678,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[24]),64);
            tracep->chgQData(oldp+680,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[25]),64);
            tracep->chgQData(oldp+682,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[26]),64);
            tracep->chgQData(oldp+684,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[27]),64);
            tracep->chgQData(oldp+686,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[28]),64);
            tracep->chgQData(oldp+688,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[29]),64);
            tracep->chgQData(oldp+690,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[30]),64);
            tracep->chgQData(oldp+692,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[31]),64);
            tracep->chgQData(oldp+694,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__csr_mcycle),64);
            tracep->chgSData(oldp+696,((vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+697,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
            tracep->chgCData(oldp+699,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mstatus_mpp),2);
            tracep->chgBit(oldp+700,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mstatus_mpie));
            tracep->chgBit(oldp+701,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mstatus_mie));
            tracep->chgBit(oldp+702,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__wb_flush));
            tracep->chgCData(oldp+703,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                 >> 0xfU))),5);
            tracep->chgBit(oldp+704,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+705,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 0xaU))));
            tracep->chgBit(oldp+706,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 9U))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 8U))));
            tracep->chgBit(oldp+708,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 7U))));
            tracep->chgBit(oldp+709,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                            >> 6U))));
            tracep->chgQData(oldp+710,((((QData)((IData)(
                                                         vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                              >> 0x14U)))),64);
            tracep->chgBit(oldp+712,(((0xb00U == (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                  >> 0x14U)) 
                                      & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xaU))));
            tracep->chgBit(oldp+713,((1U & (((0xb00U 
                                              == (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                                  >> 0x14U)) 
                                             & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                                >> 0xaU)) 
                                            | (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                               >> 3U)))));
            tracep->chgBit(oldp+714,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                            >> 3U))));
            tracep->chgWData(oldp+715,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg),356);
            tracep->chgBit(oldp+727,((0U != (0x1fU 
                                             & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+728,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__ar_hs));
            tracep->chgBit(oldp+729,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_hs));
            tracep->chgBit(oldp+730,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__b_hs));
            tracep->chgBit(oldp+731,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_hs));
            tracep->chgBit(oldp+732,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_done));
        }
        tracep->chgBit(oldp+733,(vlSelf->clk));
        tracep->chgBit(oldp+734,(vlSelf->rst));
        tracep->chgIData(oldp+735,(vlSelf->if_pc),32);
        tracep->chgBit(oldp+736,(vlSelf->wb_valid));
        tracep->chgIData(oldp+737,(vlSelf->wb_pc),32);
        tracep->chgQData(oldp+738,(vlSelf->mepc),64);
        tracep->chgQData(oldp+740,(vlSelf->mtvec),64);
        tracep->chgQData(oldp+742,(vlSelf->mstatus),64);
        tracep->chgQData(oldp+744,(vlSelf->mcause),64);
        tracep->chgQData(oldp+746,(vlSelf->mie),64);
        tracep->chgQData(oldp+748,(vlSelf->mip),64);
        tracep->chgQData(oldp+750,(vlSelf->mscratch),64);
        tracep->chgQData(oldp+752,(vlSelf->mtval),64);
        tracep->chgBit(oldp+754,(vlSelf->wb_memwrite));
        tracep->chgIData(oldp+755,(vlSelf->wb_instruction),32);
        tracep->chgBit(oldp+756,(vlSelf->cmt_skip));
        tracep->chgQData(oldp+757,(vlSelf->wb_diff_addr),64);
        tracep->chgQData(oldp+759,(vlSelf->wb_diff_data),64);
        tracep->chgBit(oldp+761,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+762,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+763,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+765,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+766,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+767,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+768,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+769,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+770,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+771,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+772,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+773,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+774,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+775,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+776,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+777,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+779,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+780,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+781,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+782,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+783,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+784,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+785,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+786,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+787,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+788,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+789,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+791,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+792,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+793,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+794,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+795,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+796,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+797,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+798,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+799,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+800,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+801,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+802,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+803,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+804,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+806,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+807,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+808,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+809,(((IData)(vlSelf->axi_aw_ready_i) 
                                  & (IData)(vlSelf->axi_aw_valid_o))));
        tracep->chgBit(oldp+810,(((IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_hs) 
                                  & (IData)(vlSelf->axi_w_last_o))));
        tracep->chgBit(oldp+811,(((IData)(vlSelf->ysyx_22050243_top__DOT__d_req_wen)
                                   ? (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__b_hs)
                                   : (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_done))));
        tracep->chgIData(oldp+812,((IData)(vlSelf->mepc)),32);
        tracep->chgBit(oldp+813,(((((0U != (0x1fU & 
                                            vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                    & ((0x1fU & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                       == (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2fU))))) 
                                   & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                      >> 5U)) & (vlSelf->wb_pc 
                                                 != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))));
        tracep->chgBit(oldp+814,(((((0U != (0x1fU & 
                                            vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                    & ((0x1fU & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                       == (0x1fU & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x34U))))) 
                                   & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                      >> 5U)) & (vlSelf->wb_pc 
                                                 != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))));
    }
}

void Vysyx_22050243_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22050243_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_top___024root*>(voidSelf);
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
