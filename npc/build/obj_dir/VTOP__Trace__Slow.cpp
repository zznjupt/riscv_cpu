// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__traceInitSub0(VTOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VTOP___024root__traceInitTop(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VTOP___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VTOP___024root__traceInitSub0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+102,"clk", false,-1);
        tracep->declBit(c+103,"rst", false,-1);
        tracep->declBus(c+104,"i_inst", false,-1, 31,0);
        tracep->declQuad(c+105,"result", false,-1, 63,0);
        tracep->declBit(c+107,"out_zero", false,-1);
        tracep->declBit(c+102,"TOP clk", false,-1);
        tracep->declBit(c+103,"TOP rst", false,-1);
        tracep->declBus(c+104,"TOP i_inst", false,-1, 31,0);
        tracep->declQuad(c+105,"TOP result", false,-1, 63,0);
        tracep->declBit(c+107,"TOP out_zero", false,-1);
        tracep->declQuad(c+32,"TOP pc_4", false,-1, 63,0);
        tracep->declQuad(c+34,"TOP pc", false,-1, 63,0);
        tracep->declQuad(c+36,"TOP npc", false,-1, 63,0);
        tracep->declBus(c+104,"TOP inst", false,-1, 31,0);
        tracep->declBit(c+108,"TOP alu_src_id", false,-1);
        tracep->declBus(c+109,"TOP alu_op_id", false,-1, 2,0);
        tracep->declBus(c+1,"TOP alu_ctrl_id", false,-1, 3,0);
        tracep->declQuad(c+2,"TOP rs1", false,-1, 63,0);
        tracep->declQuad(c+110,"TOP rs2", false,-1, 63,0);
        tracep->declQuad(c+4,"TOP rd", false,-1, 63,0);
        tracep->declQuad(c+112,"TOP imm", false,-1, 63,0);
        tracep->declQuad(c+2,"TOP a", false,-1, 63,0);
        tracep->declQuad(c+6,"TOP b", false,-1, 63,0);
        tracep->declQuad(c+4,"TOP alu_result", false,-1, 63,0);
        tracep->declBit(c+8,"TOP zero", false,-1);
        tracep->declBus(c+114,"TOP ysyx_22050243_Ctrl_ opcode", false,-1, 6,0);
        tracep->declBit(c+108,"TOP ysyx_22050243_Ctrl_ alu_src", false,-1);
        tracep->declBus(c+109,"TOP ysyx_22050243_Ctrl_ alu_op", false,-1, 2,0);
        tracep->declBus(c+109,"TOP ysyx_22050243_ALUCtrl_ alu_op", false,-1, 2,0);
        tracep->declBus(c+9,"TOP ysyx_22050243_ALUCtrl_ funct", false,-1, 3,0);
        tracep->declBus(c+1,"TOP ysyx_22050243_ALUCtrl_ alu_ctrl", false,-1, 3,0);
        tracep->declBus(c+124,"TOP ysyx_22050243_GPR_ ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_GPR_ DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+102,"TOP ysyx_22050243_GPR_ clk", false,-1);
        tracep->declBit(c+126,"TOP ysyx_22050243_GPR_ w_en", false,-1);
        tracep->declBus(c+115,"TOP ysyx_22050243_GPR_ w_addr", false,-1, 4,0);
        tracep->declQuad(c+4,"TOP ysyx_22050243_GPR_ w_data", false,-1, 63,0);
        tracep->declBit(c+126,"TOP ysyx_22050243_GPR_ r1_en", false,-1);
        tracep->declBus(c+116,"TOP ysyx_22050243_GPR_ r1_addr", false,-1, 4,0);
        tracep->declQuad(c+2,"TOP ysyx_22050243_GPR_ r1_data", false,-1, 63,0);
        tracep->declBit(c+126,"TOP ysyx_22050243_GPR_ r2_en", false,-1);
        tracep->declBus(c+117,"TOP ysyx_22050243_GPR_ r2_addr", false,-1, 4,0);
        tracep->declQuad(c+110,"TOP ysyx_22050243_GPR_ r2_data", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+38+i*2,"TOP ysyx_22050243_GPR_ gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+127,"TOP ysyx_22050243_ImmGen_ IBUS_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_ImmGen_ DBUS_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+104,"TOP ysyx_22050243_ImmGen_ inst", false,-1, 31,0);
        tracep->declQuad(c+112,"TOP ysyx_22050243_ImmGen_ imm", false,-1, 63,0);
        tracep->declBus(c+114,"TOP ysyx_22050243_ImmGen_ opcode", false,-1, 6,0);
        tracep->declBit(c+10,"TOP ysyx_22050243_ImmGen_ is_R", false,-1);
        tracep->declBit(c+11,"TOP ysyx_22050243_ImmGen_ is_I", false,-1);
        tracep->declBit(c+12,"TOP ysyx_22050243_ImmGen_ is_S", false,-1);
        tracep->declBit(c+13,"TOP ysyx_22050243_ImmGen_ is_B", false,-1);
        tracep->declBit(c+14,"TOP ysyx_22050243_ImmGen_ is_U", false,-1);
        tracep->declBit(c+15,"TOP ysyx_22050243_ImmGen_ is_J", false,-1);
        tracep->declBus(c+118,"TOP ysyx_22050243_ImmGen_ imm_I", false,-1, 11,0);
        tracep->declBus(c+16,"TOP ysyx_22050243_ImmGen_ imm_S", false,-1, 11,0);
        tracep->declBus(c+17,"TOP ysyx_22050243_ImmGen_ imm_B", false,-1, 12,0);
        tracep->declBus(c+119,"TOP ysyx_22050243_ImmGen_ imm_U", false,-1, 19,0);
        tracep->declBus(c+18,"TOP ysyx_22050243_ImmGen_ imm_J", false,-1, 20,0);
        tracep->declQuad(c+120,"TOP ysyx_22050243_ImmGen_ imm_sext_I", false,-1, 63,0);
        tracep->declQuad(c+19,"TOP ysyx_22050243_ImmGen_ imm_sext_S", false,-1, 63,0);
        tracep->declQuad(c+21,"TOP ysyx_22050243_ImmGen_ imm_sext_B", false,-1, 63,0);
        tracep->declQuad(c+122,"TOP ysyx_22050243_ImmGen_ imm_sext_U", false,-1, 63,0);
        tracep->declQuad(c+23,"TOP ysyx_22050243_ImmGen_ imm_sext_J", false,-1, 63,0);
        tracep->declBus(c+128,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_I IS_SIGNED", false,-1, 31,0);
        tracep->declBus(c+129,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_I DATA_WIDTH_I", false,-1, 31,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_I DATA_WIDTH_O", false,-1, 31,0);
        tracep->declBus(c+118,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_I i_data", false,-1, 11,0);
        tracep->declQuad(c+120,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_I data_o", false,-1, 63,0);
        tracep->declBus(c+128,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_S IS_SIGNED", false,-1, 31,0);
        tracep->declBus(c+129,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_S DATA_WIDTH_I", false,-1, 31,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_S DATA_WIDTH_O", false,-1, 31,0);
        tracep->declBus(c+16,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_S i_data", false,-1, 11,0);
        tracep->declQuad(c+19,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_S data_o", false,-1, 63,0);
        tracep->declBus(c+128,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_B IS_SIGNED", false,-1, 31,0);
        tracep->declBus(c+130,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_B DATA_WIDTH_I", false,-1, 31,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_B DATA_WIDTH_O", false,-1, 31,0);
        tracep->declBus(c+17,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_B i_data", false,-1, 12,0);
        tracep->declQuad(c+21,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_B data_o", false,-1, 63,0);
        tracep->declBus(c+128,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_U IS_SIGNED", false,-1, 31,0);
        tracep->declBus(c+131,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_U DATA_WIDTH_I", false,-1, 31,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_U DATA_WIDTH_O", false,-1, 31,0);
        tracep->declBus(c+119,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_U i_data", false,-1, 19,0);
        tracep->declQuad(c+122,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_U data_o", false,-1, 63,0);
        tracep->declBus(c+128,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_J IS_SIGNED", false,-1, 31,0);
        tracep->declBus(c+132,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_J DATA_WIDTH_I", false,-1, 31,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_J DATA_WIDTH_O", false,-1, 31,0);
        tracep->declBus(c+18,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_J i_data", false,-1, 20,0);
        tracep->declQuad(c+23,"TOP ysyx_22050243_ImmGen_ ysyx_22050243_Extend_J data_o", false,-1, 63,0);
        tracep->declBus(c+125,"TOP ysyx_22050243_ALU WIDTH", false,-1, 31,0);
        tracep->declQuad(c+2,"TOP ysyx_22050243_ALU a", false,-1, 63,0);
        tracep->declQuad(c+6,"TOP ysyx_22050243_ALU b", false,-1, 63,0);
        tracep->declBus(c+1,"TOP ysyx_22050243_ALU alu_ctrl", false,-1, 3,0);
        tracep->declQuad(c+4,"TOP ysyx_22050243_ALU alu_result", false,-1, 63,0);
        tracep->declBit(c+8,"TOP ysyx_22050243_ALU zero", false,-1);
        tracep->declQuad(c+2,"TOP ysyx_22050243_ALU u_a", false,-1, 63,0);
        tracep->declQuad(c+6,"TOP ysyx_22050243_ALU u_b", false,-1, 63,0);
        tracep->declQuad(c+25,"TOP ysyx_22050243_ALU add_result", false,-1, 63,0);
        tracep->declQuad(c+27,"TOP ysyx_22050243_ALU sub_result", false,-1, 63,0);
        tracep->declQuad(c+4,"TOP ysyx_22050243_ALU alu_out", false,-1, 63,0);
        tracep->declBus(c+29,"TOP ysyx_22050243_ALU sllw_result", false,-1, 31,0);
        tracep->declBus(c+30,"TOP ysyx_22050243_ALU srlw_result", false,-1, 31,0);
        tracep->declBus(c+31,"TOP ysyx_22050243_ALU sraw_result", false,-1, 31,0);
    }
}

void VTOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VTOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VTOP___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VTOP___024root__traceRegister(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VTOP___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VTOP___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VTOP___024root__traceCleanup, vlSelf);
    }
}

void VTOP___024root__traceFullSub0(VTOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VTOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VTOP___024root* const __restrict vlSelf = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VTOP___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VTOP___024root__traceFullSub0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->TOP__DOT__alu_ctrl_id),4);
        tracep->fullQData(oldp+2,(vlSelf->TOP__DOT__rs1),64);
        tracep->fullQData(oldp+4,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out),64);
        tracep->fullQData(oldp+6,(vlSelf->TOP__DOT__b),64);
        tracep->fullBit(oldp+8,((0ULL == vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out)));
        tracep->fullCData(oldp+9,(vlSelf->TOP__DOT____Vcellinp__ysyx_22050243_ALUCtrl___funct),4);
        tracep->fullBit(oldp+10,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_R));
        tracep->fullBit(oldp+11,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_I));
        tracep->fullBit(oldp+12,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S));
        tracep->fullBit(oldp+13,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_B));
        tracep->fullBit(oldp+14,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_U));
        tracep->fullBit(oldp+15,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_J));
        tracep->fullSData(oldp+16,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S),12);
        tracep->fullSData(oldp+17,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B),13);
        tracep->fullIData(oldp+18,(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J),21);
        tracep->fullQData(oldp+19,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S) 
                                                            >> 0xbU))))) 
                                     << 0xcU) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_S)))),64);
        tracep->fullQData(oldp+21,((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B) 
                                                            >> 0xcU))))) 
                                     << 0xdU) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_B)))),64);
        tracep->fullQData(oldp+23,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J 
                                                            >> 0x14U))))) 
                                     << 0x15U) | (QData)((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__imm_J)))),64);
        tracep->fullQData(oldp+25,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__add_result),64);
        tracep->fullQData(oldp+27,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sub_result),64);
        tracep->fullIData(oldp+29,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__sllw_result),32);
        tracep->fullIData(oldp+30,(vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__srlw_result),32);
        tracep->fullIData(oldp+31,(((IData)(vlSelf->TOP__DOT__rs1) 
                                    >> (0x1fU & (IData)(vlSelf->TOP__DOT__b)))),32);
        tracep->fullQData(oldp+32,((4ULL + vlSelf->TOP__DOT__pc)),64);
        tracep->fullQData(oldp+34,(vlSelf->TOP__DOT__pc),64);
        tracep->fullQData(oldp+36,(vlSelf->TOP__DOT__npc),64);
        tracep->fullQData(oldp+38,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[0]),64);
        tracep->fullQData(oldp+40,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[1]),64);
        tracep->fullQData(oldp+42,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[2]),64);
        tracep->fullQData(oldp+44,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[3]),64);
        tracep->fullQData(oldp+46,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[4]),64);
        tracep->fullQData(oldp+48,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[5]),64);
        tracep->fullQData(oldp+50,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[6]),64);
        tracep->fullQData(oldp+52,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[7]),64);
        tracep->fullQData(oldp+54,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[8]),64);
        tracep->fullQData(oldp+56,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[9]),64);
        tracep->fullQData(oldp+58,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[10]),64);
        tracep->fullQData(oldp+60,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[11]),64);
        tracep->fullQData(oldp+62,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[12]),64);
        tracep->fullQData(oldp+64,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[13]),64);
        tracep->fullQData(oldp+66,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[14]),64);
        tracep->fullQData(oldp+68,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[15]),64);
        tracep->fullQData(oldp+70,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[16]),64);
        tracep->fullQData(oldp+72,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[17]),64);
        tracep->fullQData(oldp+74,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[18]),64);
        tracep->fullQData(oldp+76,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[19]),64);
        tracep->fullQData(oldp+78,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[20]),64);
        tracep->fullQData(oldp+80,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[21]),64);
        tracep->fullQData(oldp+82,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[22]),64);
        tracep->fullQData(oldp+84,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[23]),64);
        tracep->fullQData(oldp+86,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[24]),64);
        tracep->fullQData(oldp+88,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[25]),64);
        tracep->fullQData(oldp+90,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[26]),64);
        tracep->fullQData(oldp+92,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[27]),64);
        tracep->fullQData(oldp+94,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[28]),64);
        tracep->fullQData(oldp+96,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[29]),64);
        tracep->fullQData(oldp+98,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[30]),64);
        tracep->fullQData(oldp+100,(vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr[31]),64);
        tracep->fullBit(oldp+102,(vlSelf->clk));
        tracep->fullBit(oldp+103,(vlSelf->rst));
        tracep->fullIData(oldp+104,(vlSelf->i_inst),32);
        tracep->fullQData(oldp+105,(vlSelf->result),64);
        tracep->fullBit(oldp+107,(vlSelf->out_zero));
        tracep->fullBit(oldp+108,((0x13U == (0x7fU 
                                             & vlSelf->i_inst))));
        tracep->fullCData(oldp+109,(((0x13U == (0x7fU 
                                                & vlSelf->i_inst))
                                      ? 3U : 0U)),3);
        tracep->fullQData(oldp+110,((((0x1fU & (vlSelf->i_inst 
                                                >> 0x14U)) 
                                      == (0x1fU & (vlSelf->i_inst 
                                                   >> 7U)))
                                      ? vlSelf->TOP__DOT__ysyx_22050243_ALU__DOT__alu_out
                                      : vlSelf->TOP__DOT__ysyx_22050243_GPR___DOT__gpr
                                     [(0x1fU & (vlSelf->i_inst 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+112,(((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_R)
                                      ? 0ULL : ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_I)
                                                 ? 
                                                ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S)
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
                                                 : 
                                                ((IData)(vlSelf->TOP__DOT__ysyx_22050243_ImmGen___DOT__is_S)
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
        tracep->fullCData(oldp+114,((0x7fU & vlSelf->i_inst)),7);
        tracep->fullCData(oldp+115,((0x1fU & (vlSelf->i_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+116,((0x1fU & (vlSelf->i_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+117,((0x1fU & (vlSelf->i_inst 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+118,((vlSelf->i_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+119,((vlSelf->i_inst 
                                     >> 0xcU)),20);
        tracep->fullQData(oldp+120,((((- (QData)((IData)(
                                                         (vlSelf->i_inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->i_inst 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+122,((((- (QData)((IData)(
                                                         (vlSelf->i_inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  (vlSelf->i_inst 
                                                                   >> 0xcU))))),64);
        tracep->fullIData(oldp+124,(5U),32);
        tracep->fullIData(oldp+125,(0x40U),32);
        tracep->fullBit(oldp+126,(1U));
        tracep->fullIData(oldp+127,(0x20U),32);
        tracep->fullIData(oldp+128,(1U),32);
        tracep->fullIData(oldp+129,(0xcU),32);
        tracep->fullIData(oldp+130,(0xdU),32);
        tracep->fullIData(oldp+131,(0x14U),32);
        tracep->fullIData(oldp+132,(0x15U),32);
    }
}
