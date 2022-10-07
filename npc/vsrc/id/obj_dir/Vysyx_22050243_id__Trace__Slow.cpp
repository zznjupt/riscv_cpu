// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_id__Syms.h"


void Vysyx_22050243_id___024root__traceInitSub0(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_id___024root__traceInitTop(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_id___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050243_id___024root__traceInitSub0(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+269,"clk", false,-1);
        tracep->declBit(c+270,"rst", false,-1);
        tracep->declBus(c+271,"stall", false,-1, 5,0);
        tracep->declBit(c+272,"stall_req_for_load", false,-1);
        tracep->declBus(c+273,"ex_2_id_for_stall_load", false,-1, 6,0);
        tracep->declArray(c+274,"if_2_id_bus", false,-1, 128,0);
        tracep->declBus(c+279,"isram_rdata", false,-1, 31,0);
        tracep->declArray(c+280,"ex_2_gpr_bus", false,-1, 69,0);
        tracep->declArray(c+283,"mem_2_gpr_bus", false,-1, 69,0);
        tracep->declArray(c+286,"wb_2_gpr_bus", false,-1, 69,0);
        tracep->declArray(c+289,"id_2_ex_bus", false,-1, 365,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+301+i*2,"gpr_o", true,(i+0), 63,0);}}
        tracep->declBit(c+269,"ysyx_22050243_id clk", false,-1);
        tracep->declBit(c+270,"ysyx_22050243_id rst", false,-1);
        tracep->declBus(c+271,"ysyx_22050243_id stall", false,-1, 5,0);
        tracep->declBit(c+272,"ysyx_22050243_id stall_req_for_load", false,-1);
        tracep->declBus(c+273,"ysyx_22050243_id ex_2_id_for_stall_load", false,-1, 6,0);
        tracep->declArray(c+274,"ysyx_22050243_id if_2_id_bus", false,-1, 128,0);
        tracep->declBus(c+279,"ysyx_22050243_id isram_rdata", false,-1, 31,0);
        tracep->declArray(c+280,"ysyx_22050243_id ex_2_gpr_bus", false,-1, 69,0);
        tracep->declArray(c+283,"ysyx_22050243_id mem_2_gpr_bus", false,-1, 69,0);
        tracep->declArray(c+286,"ysyx_22050243_id wb_2_gpr_bus", false,-1, 69,0);
        tracep->declArray(c+289,"ysyx_22050243_id id_2_ex_bus", false,-1, 365,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+301+i*2,"ysyx_22050243_id gpr_o", true,(i+0), 63,0);}}
        tracep->declBit(c+365,"ysyx_22050243_id ce", false,-1);
        tracep->declQuad(c+366,"ysyx_22050243_id id_pc", false,-1, 63,0);
        tracep->declQuad(c+368,"ysyx_22050243_id next_pc", false,-1, 63,0);
        tracep->declBit(c+370,"ysyx_22050243_id ex_gpr_w_e", false,-1);
        tracep->declBit(c+371,"ysyx_22050243_id mem_gpr_w_e", false,-1);
        tracep->declBit(c+372,"ysyx_22050243_id wb_gpr_w_e", false,-1);
        tracep->declBus(c+373,"ysyx_22050243_id ex_gpr_waddr", false,-1, 4,0);
        tracep->declBus(c+374,"ysyx_22050243_id mem_gpr_waddr", false,-1, 4,0);
        tracep->declBus(c+375,"ysyx_22050243_id wb_gpr_waddr", false,-1, 4,0);
        tracep->declQuad(c+376,"ysyx_22050243_id ex_gpr_wdata", false,-1, 63,0);
        tracep->declQuad(c+378,"ysyx_22050243_id mem_gpr_wdata", false,-1, 63,0);
        tracep->declQuad(c+380,"ysyx_22050243_id wb_gpr_wdata", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22050243_id flag", false,-1);
        tracep->declBus(c+2,"ysyx_22050243_id buf_inst", false,-1, 31,0);
        tracep->declBit(c+3,"ysyx_22050243_id buf_ce", false,-1);
        tracep->declQuad(c+4,"ysyx_22050243_id buf_id_pc", false,-1, 63,0);
        tracep->declQuad(c+6,"ysyx_22050243_id buf_next_pc", false,-1, 63,0);
        tracep->declBit(c+3,"ysyx_22050243_id ce_i", false,-1);
        tracep->declBus(c+8,"ysyx_22050243_id inst_i", false,-1, 31,0);
        tracep->declQuad(c+9,"ysyx_22050243_id id_pc_i", false,-1, 63,0);
        tracep->declQuad(c+11,"ysyx_22050243_id next_pc_i", false,-1, 63,0);
        tracep->declBus(c+13,"ysyx_22050243_id opcode", false,-1, 6,0);
        tracep->declBus(c+14,"ysyx_22050243_id rd", false,-1, 4,0);
        tracep->declBus(c+15,"ysyx_22050243_id funct3", false,-1, 2,0);
        tracep->declBus(c+16,"ysyx_22050243_id rs1", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22050243_id rs2", false,-1, 4,0);
        tracep->declBus(c+18,"ysyx_22050243_id funct7", false,-1, 6,0);
        tracep->declQuad(c+382,"ysyx_22050243_id rs1_data", false,-1, 63,0);
        tracep->declQuad(c+384,"ysyx_22050243_id rs2_data", false,-1, 63,0);
        tracep->declBus(c+14,"ysyx_22050243_id gpr_waddr", false,-1, 4,0);
        tracep->declQuad(c+386,"ysyx_22050243_id gpr_rdata1", false,-1, 63,0);
        tracep->declQuad(c+388,"ysyx_22050243_id gpr_rdata2", false,-1, 63,0);
        tracep->declArray(c+19,"ysyx_22050243_id op_d", false,-1, 127,0);
        tracep->declArray(c+23,"ysyx_22050243_id funct7_d", false,-1, 127,0);
        tracep->declBus(c+27,"ysyx_22050243_id funct3_d", false,-1, 7,0);
        tracep->declBit(c+28,"ysyx_22050243_id inst_lui", false,-1);
        tracep->declBit(c+29,"ysyx_22050243_id inst_auipc", false,-1);
        tracep->declBit(c+30,"ysyx_22050243_id inst_addi", false,-1);
        tracep->declBit(c+31,"ysyx_22050243_id inst_add", false,-1);
        tracep->declBit(c+32,"ysyx_22050243_id inst_addiw", false,-1);
        tracep->declBit(c+33,"ysyx_22050243_id inst_addw", false,-1);
        tracep->declBit(c+34,"ysyx_22050243_id inst_sub", false,-1);
        tracep->declBit(c+35,"ysyx_22050243_id inst_subw", false,-1);
        tracep->declBit(c+36,"ysyx_22050243_id inst_slti", false,-1);
        tracep->declBit(c+37,"ysyx_22050243_id inst_sltiu", false,-1);
        tracep->declBit(c+38,"ysyx_22050243_id inst_slt", false,-1);
        tracep->declBit(c+39,"ysyx_22050243_id inst_sltu", false,-1);
        tracep->declBit(c+40,"ysyx_22050243_id inst_slli", false,-1);
        tracep->declBit(c+41,"ysyx_22050243_id inst_srli", false,-1);
        tracep->declBit(c+42,"ysyx_22050243_id inst_srai", false,-1);
        tracep->declBit(c+43,"ysyx_22050243_id inst_slliw", false,-1);
        tracep->declBit(c+44,"ysyx_22050243_id inst_srliw", false,-1);
        tracep->declBit(c+45,"ysyx_22050243_id inst_sraiw", false,-1);
        tracep->declBit(c+46,"ysyx_22050243_id inst_sll", false,-1);
        tracep->declBit(c+47,"ysyx_22050243_id inst_srl", false,-1);
        tracep->declBit(c+48,"ysyx_22050243_id inst_sra", false,-1);
        tracep->declBit(c+49,"ysyx_22050243_id inst_sllw", false,-1);
        tracep->declBit(c+50,"ysyx_22050243_id inst_srlw", false,-1);
        tracep->declBit(c+51,"ysyx_22050243_id inst_sraw", false,-1);
        tracep->declBit(c+52,"ysyx_22050243_id inst_xori", false,-1);
        tracep->declBit(c+53,"ysyx_22050243_id inst_ori", false,-1);
        tracep->declBit(c+54,"ysyx_22050243_id inst_andi", false,-1);
        tracep->declBit(c+55,"ysyx_22050243_id inst_xor", false,-1);
        tracep->declBit(c+56,"ysyx_22050243_id inst_or", false,-1);
        tracep->declBit(c+57,"ysyx_22050243_id inst_and", false,-1);
        tracep->declBit(c+58,"ysyx_22050243_id inst_ecall", false,-1);
        tracep->declBit(c+59,"ysyx_22050243_id inst_ebreak", false,-1);
        tracep->declBit(c+60,"ysyx_22050243_id inst_lb", false,-1);
        tracep->declBit(c+61,"ysyx_22050243_id inst_lh", false,-1);
        tracep->declBit(c+62,"ysyx_22050243_id inst_lw", false,-1);
        tracep->declBit(c+63,"ysyx_22050243_id inst_ld", false,-1);
        tracep->declBit(c+64,"ysyx_22050243_id inst_lbu", false,-1);
        tracep->declBit(c+65,"ysyx_22050243_id inst_lhu", false,-1);
        tracep->declBit(c+66,"ysyx_22050243_id inst_lwu", false,-1);
        tracep->declBit(c+67,"ysyx_22050243_id inst_sb", false,-1);
        tracep->declBit(c+68,"ysyx_22050243_id inst_sh", false,-1);
        tracep->declBit(c+69,"ysyx_22050243_id inst_sw", false,-1);
        tracep->declBit(c+70,"ysyx_22050243_id inst_sd", false,-1);
        tracep->declBit(c+71,"ysyx_22050243_id inst_jal", false,-1);
        tracep->declBit(c+72,"ysyx_22050243_id inst_jalr", false,-1);
        tracep->declBit(c+73,"ysyx_22050243_id inst_beq", false,-1);
        tracep->declBit(c+74,"ysyx_22050243_id inst_bne", false,-1);
        tracep->declBit(c+75,"ysyx_22050243_id inst_blt", false,-1);
        tracep->declBit(c+76,"ysyx_22050243_id inst_bge", false,-1);
        tracep->declBit(c+77,"ysyx_22050243_id inst_bltu", false,-1);
        tracep->declBit(c+78,"ysyx_22050243_id inst_bgeu", false,-1);
        tracep->declBit(c+79,"ysyx_22050243_id inst_csrrw", false,-1);
        tracep->declBit(c+80,"ysyx_22050243_id inst_csrrs", false,-1);
        tracep->declBit(c+81,"ysyx_22050243_id inst_csrrc", false,-1);
        tracep->declBit(c+82,"ysyx_22050243_id inst_csrrwi", false,-1);
        tracep->declBit(c+83,"ysyx_22050243_id inst_csrrsi", false,-1);
        tracep->declBit(c+84,"ysyx_22050243_id inst_csrrci", false,-1);
        tracep->declBit(c+85,"ysyx_22050243_id inst_mul", false,-1);
        tracep->declBit(c+86,"ysyx_22050243_id inst_mulh", false,-1);
        tracep->declBit(c+87,"ysyx_22050243_id inst_mulhsu", false,-1);
        tracep->declBit(c+88,"ysyx_22050243_id inst_mulhu", false,-1);
        tracep->declBit(c+89,"ysyx_22050243_id inst_mulw", false,-1);
        tracep->declBit(c+90,"ysyx_22050243_id inst_div", false,-1);
        tracep->declBit(c+91,"ysyx_22050243_id inst_divu", false,-1);
        tracep->declBit(c+92,"ysyx_22050243_id inst_divw", false,-1);
        tracep->declBit(c+93,"ysyx_22050243_id inst_divuw", false,-1);
        tracep->declBit(c+94,"ysyx_22050243_id inst_remw", false,-1);
        tracep->declBit(c+95,"ysyx_22050243_id inst_remuw", false,-1);
        tracep->declBit(c+96,"ysyx_22050243_id inst_rem", false,-1);
        tracep->declBit(c+97,"ysyx_22050243_id inst_remu", false,-1);
        tracep->declBus(c+98,"ysyx_22050243_id sel_alu_src1", false,-1, 2,0);
        tracep->declBus(c+99,"ysyx_22050243_id sel_alu_src2", false,-1, 6,0);
        tracep->declBus(c+100,"ysyx_22050243_id alu_op", false,-1, 11,0);
        tracep->declBus(c+393,"ysyx_22050243_id sp_bus", false,-1, 1,0);
        tracep->declBit(c+101,"ysyx_22050243_id op_add", false,-1);
        tracep->declBit(c+102,"ysyx_22050243_id op_sub", false,-1);
        tracep->declBit(c+103,"ysyx_22050243_id op_slt", false,-1);
        tracep->declBit(c+104,"ysyx_22050243_id op_sltu", false,-1);
        tracep->declBit(c+105,"ysyx_22050243_id op_and", false,-1);
        tracep->declBit(c+106,"ysyx_22050243_id op_or", false,-1);
        tracep->declBit(c+107,"ysyx_22050243_id op_xor", false,-1);
        tracep->declBit(c+108,"ysyx_22050243_id op_sll", false,-1);
        tracep->declBit(c+109,"ysyx_22050243_id op_srl", false,-1);
        tracep->declBit(c+110,"ysyx_22050243_id op_sra", false,-1);
        tracep->declBit(c+111,"ysyx_22050243_id op_nop", false,-1);
        tracep->declBit(c+112,"ysyx_22050243_id op_sp", false,-1);
        tracep->declBus(c+113,"ysyx_22050243_id mem_op", false,-1, 10,0);
        tracep->declBus(c+114,"ysyx_22050243_id bru_op", false,-1, 7,0);
        tracep->declBus(c+115,"ysyx_22050243_id csr_op", false,-1, 5,0);
        tracep->declBus(c+116,"ysyx_22050243_id mul_op", false,-1, 4,0);
        tracep->declBus(c+117,"ysyx_22050243_id div_op", false,-1, 3,0);
        tracep->declBus(c+118,"ysyx_22050243_id rem_op", false,-1, 3,0);
        tracep->declBit(c+119,"ysyx_22050243_id lsu_8", false,-1);
        tracep->declBit(c+120,"ysyx_22050243_id lsu_16", false,-1);
        tracep->declBit(c+121,"ysyx_22050243_id lsu_32", false,-1);
        tracep->declBit(c+122,"ysyx_22050243_id lsu_64", false,-1);
        tracep->declBit(c+89,"ysyx_22050243_id mul_32", false,-1);
        tracep->declBit(c+123,"ysyx_22050243_id div_32", false,-1);
        tracep->declBit(c+124,"ysyx_22050243_id alu_32", false,-1);
        tracep->declBit(c+125,"ysyx_22050243_id dram_e", false,-1);
        tracep->declBit(c+126,"ysyx_22050243_id dram_w_e", false,-1);
        tracep->declBit(c+127,"ysyx_22050243_id gpr_w_e", false,-1);
        tracep->declBit(c+128,"ysyx_22050243_id sel_gpr_res", false,-1);
        tracep->declArray(c+257,"ysyx_22050243_id id_2_ex_bus_temp", false,-1, 365,0);
        tracep->declBus(c+390,"ysyx_22050243_id ex_rd", false,-1, 4,0);
        tracep->declBit(c+391,"ysyx_22050243_id ex_dram_w_e", false,-1);
        tracep->declBit(c+392,"ysyx_22050243_id ex_dram_e", false,-1);
        tracep->declBit(c+269,"ysyx_22050243_id gpr clk", false,-1);
        tracep->declBit(c+270,"ysyx_22050243_id gpr rst", false,-1);
        tracep->declBus(c+271,"ysyx_22050243_id gpr stall", false,-1, 5,0);
        tracep->declBit(c+372,"ysyx_22050243_id gpr w_e", false,-1);
        tracep->declBus(c+375,"ysyx_22050243_id gpr waddr", false,-1, 4,0);
        tracep->declQuad(c+380,"ysyx_22050243_id gpr wdata", false,-1, 63,0);
        tracep->declBit(c+394,"ysyx_22050243_id gpr r1_e", false,-1);
        tracep->declBus(c+16,"ysyx_22050243_id gpr raddr1", false,-1, 4,0);
        tracep->declQuad(c+382,"ysyx_22050243_id gpr rdata1", false,-1, 63,0);
        tracep->declBit(c+394,"ysyx_22050243_id gpr r2_e", false,-1);
        tracep->declBus(c+17,"ysyx_22050243_id gpr raddr2", false,-1, 4,0);
        tracep->declQuad(c+384,"ysyx_22050243_id gpr rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+193+i*2,"ysyx_22050243_id gpr gpr_o", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+129+i*2,"ysyx_22050243_id gpr gpr", true,(i+0), 63,0);}}
        tracep->declBus(c+13,"ysyx_22050243_id decoder_opcode in", false,-1, 6,0);
        tracep->declArray(c+19,"ysyx_22050243_id decoder_opcode out", false,-1, 127,0);
        tracep->declBus(c+18,"ysyx_22050243_id decoder_funct7 in", false,-1, 6,0);
        tracep->declArray(c+23,"ysyx_22050243_id decoder_funct7 out", false,-1, 127,0);
        tracep->declBus(c+15,"ysyx_22050243_id decoder_funct3 in", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22050243_id decoder_funct3 out", false,-1, 7,0);
    }
}

void Vysyx_22050243_id___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050243_id___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050243_id___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050243_id___024root__traceRegister(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050243_id___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050243_id___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050243_id___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050243_id___024root__traceFullSub0(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_id___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_id___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_id___024root*>(voidSelf);
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_id___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_id___024root__traceFullSub0(Vysyx_22050243_id___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_id__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22050243_id__DOT__flag));
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22050243_id__DOT__buf_inst),32);
        tracep->fullBit(oldp+3,(vlSelf->ysyx_22050243_id__DOT__buf_ce));
        tracep->fullQData(oldp+4,(vlSelf->ysyx_22050243_id__DOT__buf_id_pc),64);
        tracep->fullQData(oldp+6,(vlSelf->ysyx_22050243_id__DOT__buf_next_pc),64);
        tracep->fullIData(oldp+8,(vlSelf->ysyx_22050243_id__DOT__inst_i),32);
        tracep->fullQData(oldp+9,(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                    ? vlSelf->ysyx_22050243_id__DOT__buf_id_pc
                                    : 0ULL)),64);
        tracep->fullQData(oldp+11,(((IData)(vlSelf->ysyx_22050243_id__DOT__buf_ce)
                                     ? vlSelf->ysyx_22050243_id__DOT__buf_next_pc
                                     : 0ULL)),64);
        tracep->fullCData(oldp+13,((0x7fU & vlSelf->ysyx_22050243_id__DOT__inst_i)),7);
        tracep->fullCData(oldp+14,((0x1fU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                             >> 7U))),5);
        tracep->fullCData(oldp+15,((7U & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+17,((0x1fU & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+18,((vlSelf->ysyx_22050243_id__DOT__inst_i 
                                    >> 0x19U)),7);
        tracep->fullWData(oldp+19,(vlSelf->ysyx_22050243_id__DOT__op_d),128);
        tracep->fullWData(oldp+23,(vlSelf->ysyx_22050243_id__DOT__funct7_d),128);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22050243_id__DOT__funct3_d),8);
        tracep->fullBit(oldp+28,((1U & (vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                        >> 0x17U))));
        tracep->fullBit(oldp+29,((1U & (vlSelf->ysyx_22050243_id__DOT__op_d[0U] 
                                        >> 0x17U))));
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22050243_id__DOT__inst_addi));
        tracep->fullBit(oldp+31,(vlSelf->ysyx_22050243_id__DOT__inst_add));
        tracep->fullBit(oldp+32,(vlSelf->ysyx_22050243_id__DOT__inst_addiw));
        tracep->fullBit(oldp+33,(vlSelf->ysyx_22050243_id__DOT__inst_addw));
        tracep->fullBit(oldp+34,(vlSelf->ysyx_22050243_id__DOT__inst_sub));
        tracep->fullBit(oldp+35,(vlSelf->ysyx_22050243_id__DOT__inst_subw));
        tracep->fullBit(oldp+36,(vlSelf->ysyx_22050243_id__DOT__inst_slti));
        tracep->fullBit(oldp+37,(vlSelf->ysyx_22050243_id__DOT__inst_sltiu));
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22050243_id__DOT__inst_slt));
        tracep->fullBit(oldp+39,(vlSelf->ysyx_22050243_id__DOT__inst_sltu));
        tracep->fullBit(oldp+40,(vlSelf->ysyx_22050243_id__DOT__inst_slli));
        tracep->fullBit(oldp+41,(vlSelf->ysyx_22050243_id__DOT__inst_srli));
        tracep->fullBit(oldp+42,(vlSelf->ysyx_22050243_id__DOT__inst_srai));
        tracep->fullBit(oldp+43,(vlSelf->ysyx_22050243_id__DOT__inst_slliw));
        tracep->fullBit(oldp+44,(vlSelf->ysyx_22050243_id__DOT__inst_srliw));
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22050243_id__DOT__inst_sraiw));
        tracep->fullBit(oldp+46,(vlSelf->ysyx_22050243_id__DOT__inst_sll));
        tracep->fullBit(oldp+47,(vlSelf->ysyx_22050243_id__DOT__inst_srl));
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22050243_id__DOT__inst_sra));
        tracep->fullBit(oldp+49,(vlSelf->ysyx_22050243_id__DOT__inst_sllw));
        tracep->fullBit(oldp+50,(vlSelf->ysyx_22050243_id__DOT__inst_srlw));
        tracep->fullBit(oldp+51,(vlSelf->ysyx_22050243_id__DOT__inst_sraw));
        tracep->fullBit(oldp+52,(vlSelf->ysyx_22050243_id__DOT__inst_xori));
        tracep->fullBit(oldp+53,(vlSelf->ysyx_22050243_id__DOT__inst_ori));
        tracep->fullBit(oldp+54,(vlSelf->ysyx_22050243_id__DOT__inst_andi));
        tracep->fullBit(oldp+55,(vlSelf->ysyx_22050243_id__DOT__inst_xor));
        tracep->fullBit(oldp+56,(vlSelf->ysyx_22050243_id__DOT__inst_or));
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22050243_id__DOT__inst_and));
        tracep->fullBit(oldp+58,((1U & (((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                        & (~ (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                              >> 0x14U))))));
        tracep->fullBit(oldp+59,((1U & (((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                        & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                           >> 0x14U)))));
        tracep->fullBit(oldp+60,(vlSelf->ysyx_22050243_id__DOT__inst_lb));
        tracep->fullBit(oldp+61,(vlSelf->ysyx_22050243_id__DOT__inst_lh));
        tracep->fullBit(oldp+62,(vlSelf->ysyx_22050243_id__DOT__inst_lw));
        tracep->fullBit(oldp+63,(vlSelf->ysyx_22050243_id__DOT__inst_ld));
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22050243_id__DOT__inst_lbu));
        tracep->fullBit(oldp+65,(vlSelf->ysyx_22050243_id__DOT__inst_lhu));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22050243_id__DOT__inst_lwu));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22050243_id__DOT__inst_sb));
        tracep->fullBit(oldp+68,(vlSelf->ysyx_22050243_id__DOT__inst_sh));
        tracep->fullBit(oldp+69,(vlSelf->ysyx_22050243_id__DOT__inst_sw));
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22050243_id__DOT__inst_sd));
        tracep->fullBit(oldp+71,((1U & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                        >> 0xfU))));
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22050243_id__DOT__inst_jalr));
        tracep->fullBit(oldp+73,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                         >> 3U) & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)))));
        tracep->fullBit(oldp+74,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                         >> 3U) & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 1U)))));
        tracep->fullBit(oldp+75,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                         >> 3U) & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 4U)))));
        tracep->fullBit(oldp+76,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                         >> 3U) & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 5U)))));
        tracep->fullBit(oldp+77,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                         >> 3U) & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 6U)))));
        tracep->fullBit(oldp+78,((1U & ((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                         >> 3U) & ((IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d) 
                                                   >> 7U)))));
        tracep->fullBit(oldp+79,(vlSelf->ysyx_22050243_id__DOT__inst_csrrw));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22050243_id__DOT__inst_csrrs));
        tracep->fullBit(oldp+81,(vlSelf->ysyx_22050243_id__DOT__inst_csrrc));
        tracep->fullBit(oldp+82,(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi));
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi));
        tracep->fullBit(oldp+84,(vlSelf->ysyx_22050243_id__DOT__inst_csrrci));
        tracep->fullBit(oldp+85,(vlSelf->ysyx_22050243_id__DOT__inst_mul));
        tracep->fullBit(oldp+86,(vlSelf->ysyx_22050243_id__DOT__inst_mulh));
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22050243_id__DOT__inst_mulhsu));
        tracep->fullBit(oldp+88,(vlSelf->ysyx_22050243_id__DOT__inst_mulhu));
        tracep->fullBit(oldp+89,(vlSelf->ysyx_22050243_id__DOT__inst_mulw));
        tracep->fullBit(oldp+90,(vlSelf->ysyx_22050243_id__DOT__inst_div));
        tracep->fullBit(oldp+91,(vlSelf->ysyx_22050243_id__DOT__inst_divu));
        tracep->fullBit(oldp+92,(vlSelf->ysyx_22050243_id__DOT__inst_divw));
        tracep->fullBit(oldp+93,(vlSelf->ysyx_22050243_id__DOT__inst_divuw));
        tracep->fullBit(oldp+94,(vlSelf->ysyx_22050243_id__DOT__inst_remw));
        tracep->fullBit(oldp+95,(vlSelf->ysyx_22050243_id__DOT__inst_remuw));
        tracep->fullBit(oldp+96,(vlSelf->ysyx_22050243_id__DOT__inst_rem));
        tracep->fullBit(oldp+97,(vlSelf->ysyx_22050243_id__DOT__inst_remu));
        tracep->fullCData(oldp+98,(vlSelf->ysyx_22050243_id__DOT__sel_alu_src1),3);
        tracep->fullCData(oldp+99,(vlSelf->ysyx_22050243_id__DOT__sel_alu_src2),7);
        tracep->fullSData(oldp+100,(vlSelf->ysyx_22050243_id__DOT__alu_op),12);
        tracep->fullBit(oldp+101,((1U & (((((((((((
                                                   (((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_add) 
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
        tracep->fullBit(oldp+102,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sub) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw))));
        tracep->fullBit(oldp+103,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_slt) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slti))));
        tracep->fullBit(oldp+104,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltu) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sltiu))));
        tracep->fullBit(oldp+105,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_and) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_andi)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci))));
        tracep->fullBit(oldp+106,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_or) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ori)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi))));
        tracep->fullBit(oldp+107,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_xor) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_xori))));
        tracep->fullBit(oldp+108,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sll) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slli)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw))));
        tracep->fullBit(oldp+109,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_srl) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srli)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw))));
        tracep->fullBit(oldp+110,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sra) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srai)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw))));
        tracep->fullBit(oldp+111,((1U & (((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
                                           >> 0x17U) 
                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw)) 
                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi)))));
        tracep->fullBit(oldp+112,((1U & ((((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                            >> 0x13U) 
                                           & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                          & (~ (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                >> 0x14U))) 
                                         | (((vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                              >> 0x13U) 
                                             & (IData)(vlSelf->ysyx_22050243_id__DOT__funct3_d)) 
                                            & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                               >> 0x14U))))));
        tracep->fullSData(oldp+113,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                      << 0xaU) | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh) 
                                                   << 9U) 
                                                  | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw) 
                                                      << 8U) 
                                                     | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld) 
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
        tracep->fullCData(oldp+114,(((0x80U & (vlSelf->ysyx_22050243_id__DOT__op_d[3U] 
                                               >> 8U)) 
                                     | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_jalr) 
                                         << 6U) | (
                                                   (0x20U 
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
        tracep->fullCData(oldp+115,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrw) 
                                      << 5U) | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrs) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrc) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrwi) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrsi) 
                                                          << 1U) 
                                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_csrrci))))))),6);
        tracep->fullCData(oldp+116,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mul) 
                                      << 4U) | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulh) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhsu) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulhu) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_mulw)))))),5);
        tracep->fullCData(oldp+117,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_div) 
                                      << 3U) | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divu) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw))))),4);
        tracep->fullCData(oldp+118,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_rem) 
                                      << 3U) | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_remu) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw))))),4);
        tracep->fullBit(oldp+119,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb))));
        tracep->fullBit(oldp+120,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh))));
        tracep->fullBit(oldp+121,((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw))));
        tracep->fullBit(oldp+122,(((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld))));
        tracep->fullBit(oldp+123,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_divw) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_divuw)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remw)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_remuw))));
        tracep->fullBit(oldp+124,((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_addiw) 
                                          | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_addw)) 
                                         | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_subw)) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_slliw)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraiw)) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sllw)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_srlw)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sraw))));
        tracep->fullBit(oldp+125,((((((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
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
        tracep->fullBit(oldp+126,(((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_sb) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sh)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sw)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_sd))));
        tracep->fullBit(oldp+127,((1U & (((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((vlSelf->ysyx_22050243_id__DOT__op_d[1U] 
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
        tracep->fullBit(oldp+128,((((((((IData)(vlSelf->ysyx_22050243_id__DOT__inst_lb) 
                                        | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lh)) 
                                       | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lw)) 
                                      | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_ld)) 
                                     | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lbu)) 
                                    | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lhu)) 
                                   | (IData)(vlSelf->ysyx_22050243_id__DOT__inst_lwu))));
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[0]),64);
        tracep->fullQData(oldp+131,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[1]),64);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[2]),64);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[3]),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[4]),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[5]),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[6]),64);
        tracep->fullQData(oldp+143,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[7]),64);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[8]),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[9]),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[10]),64);
        tracep->fullQData(oldp+151,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[11]),64);
        tracep->fullQData(oldp+153,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[12]),64);
        tracep->fullQData(oldp+155,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[13]),64);
        tracep->fullQData(oldp+157,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[14]),64);
        tracep->fullQData(oldp+159,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[15]),64);
        tracep->fullQData(oldp+161,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[16]),64);
        tracep->fullQData(oldp+163,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[17]),64);
        tracep->fullQData(oldp+165,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[18]),64);
        tracep->fullQData(oldp+167,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[19]),64);
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[20]),64);
        tracep->fullQData(oldp+171,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[21]),64);
        tracep->fullQData(oldp+173,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[22]),64);
        tracep->fullQData(oldp+175,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[23]),64);
        tracep->fullQData(oldp+177,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[24]),64);
        tracep->fullQData(oldp+179,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[25]),64);
        tracep->fullQData(oldp+181,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[26]),64);
        tracep->fullQData(oldp+183,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[27]),64);
        tracep->fullQData(oldp+185,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[28]),64);
        tracep->fullQData(oldp+187,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[29]),64);
        tracep->fullQData(oldp+189,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[30]),64);
        tracep->fullQData(oldp+191,(vlSelf->ysyx_22050243_id__DOT__gpr__DOT__gpr[31]),64);
        tracep->fullQData(oldp+193,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[0]),64);
        tracep->fullQData(oldp+195,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[1]),64);
        tracep->fullQData(oldp+197,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[2]),64);
        tracep->fullQData(oldp+199,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[3]),64);
        tracep->fullQData(oldp+201,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[4]),64);
        tracep->fullQData(oldp+203,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[5]),64);
        tracep->fullQData(oldp+205,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[6]),64);
        tracep->fullQData(oldp+207,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[7]),64);
        tracep->fullQData(oldp+209,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[8]),64);
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[9]),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[10]),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[11]),64);
        tracep->fullQData(oldp+217,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[12]),64);
        tracep->fullQData(oldp+219,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[13]),64);
        tracep->fullQData(oldp+221,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[14]),64);
        tracep->fullQData(oldp+223,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[15]),64);
        tracep->fullQData(oldp+225,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[16]),64);
        tracep->fullQData(oldp+227,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[17]),64);
        tracep->fullQData(oldp+229,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[18]),64);
        tracep->fullQData(oldp+231,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[19]),64);
        tracep->fullQData(oldp+233,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[20]),64);
        tracep->fullQData(oldp+235,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[21]),64);
        tracep->fullQData(oldp+237,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[22]),64);
        tracep->fullQData(oldp+239,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[23]),64);
        tracep->fullQData(oldp+241,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[24]),64);
        tracep->fullQData(oldp+243,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[25]),64);
        tracep->fullQData(oldp+245,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[26]),64);
        tracep->fullQData(oldp+247,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[27]),64);
        tracep->fullQData(oldp+249,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[28]),64);
        tracep->fullQData(oldp+251,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[29]),64);
        tracep->fullQData(oldp+253,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[30]),64);
        tracep->fullQData(oldp+255,(vlSelf->ysyx_22050243_id__DOT____Vcellout__gpr__gpr_o[31]),64);
        tracep->fullWData(oldp+257,(vlSelf->ysyx_22050243_id__DOT__id_2_ex_bus_temp),366);
        tracep->fullBit(oldp+269,(vlSelf->clk));
        tracep->fullBit(oldp+270,(vlSelf->rst));
        tracep->fullCData(oldp+271,(vlSelf->stall),6);
        tracep->fullBit(oldp+272,(vlSelf->stall_req_for_load));
        tracep->fullCData(oldp+273,(vlSelf->ex_2_id_for_stall_load),7);
        tracep->fullWData(oldp+274,(vlSelf->if_2_id_bus),129);
        tracep->fullIData(oldp+279,(vlSelf->isram_rdata),32);
        tracep->fullWData(oldp+280,(vlSelf->ex_2_gpr_bus),70);
        tracep->fullWData(oldp+283,(vlSelf->mem_2_gpr_bus),70);
        tracep->fullWData(oldp+286,(vlSelf->wb_2_gpr_bus),70);
        tracep->fullWData(oldp+289,(vlSelf->id_2_ex_bus),366);
        tracep->fullQData(oldp+301,(vlSelf->gpr_o[0]),64);
        tracep->fullQData(oldp+303,(vlSelf->gpr_o[1]),64);
        tracep->fullQData(oldp+305,(vlSelf->gpr_o[2]),64);
        tracep->fullQData(oldp+307,(vlSelf->gpr_o[3]),64);
        tracep->fullQData(oldp+309,(vlSelf->gpr_o[4]),64);
        tracep->fullQData(oldp+311,(vlSelf->gpr_o[5]),64);
        tracep->fullQData(oldp+313,(vlSelf->gpr_o[6]),64);
        tracep->fullQData(oldp+315,(vlSelf->gpr_o[7]),64);
        tracep->fullQData(oldp+317,(vlSelf->gpr_o[8]),64);
        tracep->fullQData(oldp+319,(vlSelf->gpr_o[9]),64);
        tracep->fullQData(oldp+321,(vlSelf->gpr_o[10]),64);
        tracep->fullQData(oldp+323,(vlSelf->gpr_o[11]),64);
        tracep->fullQData(oldp+325,(vlSelf->gpr_o[12]),64);
        tracep->fullQData(oldp+327,(vlSelf->gpr_o[13]),64);
        tracep->fullQData(oldp+329,(vlSelf->gpr_o[14]),64);
        tracep->fullQData(oldp+331,(vlSelf->gpr_o[15]),64);
        tracep->fullQData(oldp+333,(vlSelf->gpr_o[16]),64);
        tracep->fullQData(oldp+335,(vlSelf->gpr_o[17]),64);
        tracep->fullQData(oldp+337,(vlSelf->gpr_o[18]),64);
        tracep->fullQData(oldp+339,(vlSelf->gpr_o[19]),64);
        tracep->fullQData(oldp+341,(vlSelf->gpr_o[20]),64);
        tracep->fullQData(oldp+343,(vlSelf->gpr_o[21]),64);
        tracep->fullQData(oldp+345,(vlSelf->gpr_o[22]),64);
        tracep->fullQData(oldp+347,(vlSelf->gpr_o[23]),64);
        tracep->fullQData(oldp+349,(vlSelf->gpr_o[24]),64);
        tracep->fullQData(oldp+351,(vlSelf->gpr_o[25]),64);
        tracep->fullQData(oldp+353,(vlSelf->gpr_o[26]),64);
        tracep->fullQData(oldp+355,(vlSelf->gpr_o[27]),64);
        tracep->fullQData(oldp+357,(vlSelf->gpr_o[28]),64);
        tracep->fullQData(oldp+359,(vlSelf->gpr_o[29]),64);
        tracep->fullQData(oldp+361,(vlSelf->gpr_o[30]),64);
        tracep->fullQData(oldp+363,(vlSelf->gpr_o[31]),64);
        tracep->fullBit(oldp+365,((1U & vlSelf->if_2_id_bus[4U])));
        tracep->fullQData(oldp+366,((((QData)((IData)(
                                                      vlSelf->if_2_id_bus[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->if_2_id_bus[2U])))),64);
        tracep->fullQData(oldp+368,((((QData)((IData)(
                                                      vlSelf->if_2_id_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->if_2_id_bus[0U])))),64);
        tracep->fullBit(oldp+370,((1U & (vlSelf->ex_2_gpr_bus[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+371,((1U & (vlSelf->mem_2_gpr_bus[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+372,((1U & (vlSelf->wb_2_gpr_bus[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+373,((0x1fU & vlSelf->ex_2_gpr_bus[2U])),5);
        tracep->fullCData(oldp+374,((0x1fU & vlSelf->mem_2_gpr_bus[2U])),5);
        tracep->fullCData(oldp+375,((0x1fU & vlSelf->wb_2_gpr_bus[2U])),5);
        tracep->fullQData(oldp+376,((((QData)((IData)(
                                                      vlSelf->ex_2_gpr_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ex_2_gpr_bus[0U])))),64);
        tracep->fullQData(oldp+378,((((QData)((IData)(
                                                      vlSelf->mem_2_gpr_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->mem_2_gpr_bus[0U])))),64);
        tracep->fullQData(oldp+380,((((QData)((IData)(
                                                      vlSelf->wb_2_gpr_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->wb_2_gpr_bus[0U])))),64);
        tracep->fullQData(oldp+382,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
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
                                                 [(0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0xfU))])))),64);
        tracep->fullQData(oldp+384,(((IData)(vlSelf->rst)
                                      ? 0ULL : ((0U 
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
                                                 [(0x1fU 
                                                   & (vlSelf->ysyx_22050243_id__DOT__inst_i 
                                                      >> 0x14U))])))),64);
        tracep->fullQData(oldp+386,((((vlSelf->ex_2_gpr_bus[2U] 
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
        tracep->fullQData(oldp+388,((((vlSelf->ex_2_gpr_bus[2U] 
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
        tracep->fullCData(oldp+390,((0x1fU & ((IData)(vlSelf->ex_2_id_for_stall_load) 
                                              >> 2U))),5);
        tracep->fullBit(oldp+391,((1U & ((IData)(vlSelf->ex_2_id_for_stall_load) 
                                         >> 1U))));
        tracep->fullBit(oldp+392,((1U & (IData)(vlSelf->ex_2_id_for_stall_load))));
        tracep->fullCData(oldp+393,(vlSelf->ysyx_22050243_id__DOT__sp_bus),2);
        tracep->fullBit(oldp+394,(1U));
    }
}
