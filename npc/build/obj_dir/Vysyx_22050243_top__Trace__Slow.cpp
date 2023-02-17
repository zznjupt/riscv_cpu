// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_top__Syms.h"


void Vysyx_22050243_top___024root__traceInitSub0(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_top___024root__traceInitTop(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22050243_top___024root__traceInitSub0(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+734,"clk", false,-1);
        tracep->declBit(c+735,"rst", false,-1);
        tracep->declBus(c+736,"if_pc", false,-1, 31,0);
        tracep->declBit(c+737,"wb_valid", false,-1);
        tracep->declBus(c+738,"wb_pc", false,-1, 31,0);
        tracep->declQuad(c+739,"mepc", false,-1, 63,0);
        tracep->declQuad(c+741,"mtvec", false,-1, 63,0);
        tracep->declQuad(c+743,"mstatus", false,-1, 63,0);
        tracep->declQuad(c+745,"mcause", false,-1, 63,0);
        tracep->declQuad(c+747,"mie", false,-1, 63,0);
        tracep->declQuad(c+749,"mip", false,-1, 63,0);
        tracep->declQuad(c+751,"mscratch", false,-1, 63,0);
        tracep->declQuad(c+753,"mtval", false,-1, 63,0);
        tracep->declBit(c+755,"wb_memwrite", false,-1);
        tracep->declBus(c+756,"wb_instruction", false,-1, 31,0);
        tracep->declBit(c+757,"cmt_skip", false,-1);
        tracep->declQuad(c+758,"wb_diff_addr", false,-1, 63,0);
        tracep->declQuad(c+760,"wb_diff_data", false,-1, 63,0);
        tracep->declBit(c+762,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+763,"axi_aw_valid_o", false,-1);
        tracep->declQuad(c+764,"axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+766,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+767,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+768,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+769,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+770,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+771,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+772,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+773,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+774,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+775,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+776,"axi_w_ready_i", false,-1);
        tracep->declBit(c+777,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+778,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+780,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+781,"axi_w_last_o", false,-1);
        tracep->declBus(c+782,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+783,"axi_b_ready_o", false,-1);
        tracep->declBit(c+784,"axi_b_valid_i", false,-1);
        tracep->declBus(c+785,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+786,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+787,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+788,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+789,"axi_ar_valid_o", false,-1);
        tracep->declQuad(c+790,"axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+792,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+793,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+794,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+795,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+796,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+797,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+798,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+799,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+800,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+801,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+802,"axi_r_ready_o", false,-1);
        tracep->declBit(c+803,"axi_r_valid_i", false,-1);
        tracep->declBus(c+804,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+805,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+807,"axi_r_last_i", false,-1);
        tracep->declBus(c+808,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+809,"axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+816,"ysyx_22050243_top RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"ysyx_22050243_top RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"ysyx_22050243_top AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"ysyx_22050243_top AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"ysyx_22050243_top AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"ysyx_22050243_top AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+819,"ysyx_22050243_top AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+734,"ysyx_22050243_top clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top rst", false,-1);
        tracep->declBus(c+736,"ysyx_22050243_top if_pc", false,-1, 31,0);
        tracep->declBit(c+737,"ysyx_22050243_top wb_valid", false,-1);
        tracep->declBus(c+738,"ysyx_22050243_top wb_pc", false,-1, 31,0);
        tracep->declQuad(c+739,"ysyx_22050243_top mepc", false,-1, 63,0);
        tracep->declQuad(c+741,"ysyx_22050243_top mtvec", false,-1, 63,0);
        tracep->declQuad(c+743,"ysyx_22050243_top mstatus", false,-1, 63,0);
        tracep->declQuad(c+745,"ysyx_22050243_top mcause", false,-1, 63,0);
        tracep->declQuad(c+747,"ysyx_22050243_top mie", false,-1, 63,0);
        tracep->declQuad(c+749,"ysyx_22050243_top mip", false,-1, 63,0);
        tracep->declQuad(c+751,"ysyx_22050243_top mscratch", false,-1, 63,0);
        tracep->declQuad(c+753,"ysyx_22050243_top mtval", false,-1, 63,0);
        tracep->declBit(c+755,"ysyx_22050243_top wb_memwrite", false,-1);
        tracep->declBus(c+756,"ysyx_22050243_top wb_instruction", false,-1, 31,0);
        tracep->declBit(c+757,"ysyx_22050243_top cmt_skip", false,-1);
        tracep->declQuad(c+758,"ysyx_22050243_top wb_diff_addr", false,-1, 63,0);
        tracep->declQuad(c+760,"ysyx_22050243_top wb_diff_data", false,-1, 63,0);
        tracep->declBit(c+762,"ysyx_22050243_top axi_aw_ready_i", false,-1);
        tracep->declBit(c+763,"ysyx_22050243_top axi_aw_valid_o", false,-1);
        tracep->declQuad(c+764,"ysyx_22050243_top axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+766,"ysyx_22050243_top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+767,"ysyx_22050243_top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+768,"ysyx_22050243_top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+769,"ysyx_22050243_top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+770,"ysyx_22050243_top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+771,"ysyx_22050243_top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+772,"ysyx_22050243_top axi_aw_lock_o", false,-1);
        tracep->declBus(c+773,"ysyx_22050243_top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+774,"ysyx_22050243_top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+775,"ysyx_22050243_top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+776,"ysyx_22050243_top axi_w_ready_i", false,-1);
        tracep->declBit(c+777,"ysyx_22050243_top axi_w_valid_o", false,-1);
        tracep->declQuad(c+778,"ysyx_22050243_top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+780,"ysyx_22050243_top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+781,"ysyx_22050243_top axi_w_last_o", false,-1);
        tracep->declBus(c+782,"ysyx_22050243_top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+783,"ysyx_22050243_top axi_b_ready_o", false,-1);
        tracep->declBit(c+784,"ysyx_22050243_top axi_b_valid_i", false,-1);
        tracep->declBus(c+785,"ysyx_22050243_top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+786,"ysyx_22050243_top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+787,"ysyx_22050243_top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+788,"ysyx_22050243_top axi_ar_ready_i", false,-1);
        tracep->declBit(c+789,"ysyx_22050243_top axi_ar_valid_o", false,-1);
        tracep->declQuad(c+790,"ysyx_22050243_top axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+792,"ysyx_22050243_top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+793,"ysyx_22050243_top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+794,"ysyx_22050243_top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+795,"ysyx_22050243_top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+796,"ysyx_22050243_top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+797,"ysyx_22050243_top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+798,"ysyx_22050243_top axi_ar_lock_o", false,-1);
        tracep->declBus(c+799,"ysyx_22050243_top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+800,"ysyx_22050243_top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+801,"ysyx_22050243_top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+802,"ysyx_22050243_top axi_r_ready_o", false,-1);
        tracep->declBit(c+803,"ysyx_22050243_top axi_r_valid_i", false,-1);
        tracep->declBus(c+804,"ysyx_22050243_top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+805,"ysyx_22050243_top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+807,"ysyx_22050243_top axi_r_last_i", false,-1);
        tracep->declBus(c+808,"ysyx_22050243_top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+809,"ysyx_22050243_top axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+40,"ysyx_22050243_top mhartid", false,-1, 63,0);
        tracep->declQuad(c+820,"ysyx_22050243_top if_pcdata", false,-1, 63,0);
        tracep->declBit(c+42,"ysyx_22050243_top if_valid", false,-1);
        tracep->declBus(c+43,"ysyx_22050243_top if_instruction", false,-1, 31,0);
        tracep->declBit(c+44,"ysyx_22050243_top if_uart", false,-1);
        tracep->declBit(c+45,"ysyx_22050243_top if_flush", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top if_ready_go", false,-1);
        tracep->declBit(c+46,"ysyx_22050243_top if_allowin", false,-1);
        tracep->declBit(c+42,"ysyx_22050243_top if_to_id_valid", false,-1);
        tracep->declQuad(c+823,"ysyx_22050243_top reg_wdata", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22050243_top id_branch_result", false,-1, 31,0);
        tracep->declBit(c+48,"ysyx_22050243_top id_branch_taken", false,-1);
        tracep->declBus(c+49,"ysyx_22050243_top id_rs1", false,-1, 4,0);
        tracep->declBus(c+50,"ysyx_22050243_top id_rs2", false,-1, 4,0);
        tracep->declBit(c+825,"ysyx_22050243_top id_jalr", false,-1);
        tracep->declBit(c+51,"ysyx_22050243_top id_flush", false,-1);
        tracep->declBit(c+52,"ysyx_22050243_top id_allowin", false,-1);
        tracep->declQuad(c+53,"ysyx_22050243_top id_regdata1", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22050243_top id_regdata2", false,-1, 63,0);
        tracep->declBit(c+57,"ysyx_22050243_top id_to_ex_valid", false,-1);
        tracep->declBit(c+58,"ysyx_22050243_top id_ecall", false,-1);
        tracep->declBit(c+59,"ysyx_22050243_top id_mret", false,-1);
        tracep->declBit(c+60,"ysyx_22050243_top load_branch", false,-1);
        tracep->declBus(c+61,"ysyx_22050243_top ex_pc", false,-1, 31,0);
        tracep->declBus(c+62,"ysyx_22050243_top ex_memop", false,-1, 2,0);
        tracep->declBus(c+63,"ysyx_22050243_top ex_wmask", false,-1, 7,0);
        tracep->declBit(c+64,"ysyx_22050243_top ex_flush", false,-1);
        tracep->declBit(c+65,"ysyx_22050243_top ex_allowin", false,-1);
        tracep->declBit(c+66,"ysyx_22050243_top ex_ready_go", false,-1);
        tracep->declBit(c+67,"ysyx_22050243_top ex_to_mem_valid", false,-1);
        tracep->declBit(c+68,"ysyx_22050243_top ex_ecall", false,-1);
        tracep->declBit(c+69,"ysyx_22050243_top ex_mret", false,-1);
        tracep->declBit(c+70,"ysyx_22050243_top ex_mmio", false,-1);
        tracep->declBit(c+71,"ysyx_22050243_top ex_fencei", false,-1);
        tracep->declBit(c+72,"ysyx_22050243_top ecallmret_on", false,-1);
        tracep->declBit(c+73,"ysyx_22050243_top dcache_pipelinehit", false,-1);
        tracep->declBit(c+74,"ysyx_22050243_top mem_ecall", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top mem_allowin", false,-1);
        tracep->declBit(c+75,"ysyx_22050243_top mem_to_wb_valid", false,-1);
        tracep->declBit(c+76,"ysyx_22050243_top mem_flush", false,-1);
        tracep->declQuad(c+77,"ysyx_22050243_top mem_alu_output", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22050243_top mem_memread", false,-1);
        tracep->declQuad(c+80,"ysyx_22050243_top mem_final_rdata", false,-1, 63,0);
        tracep->declQuad(c+82,"ysyx_22050243_top mem_doubly_aligned_data", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22050243_top mem_diff_addr", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22050243_top mem_diff_data", false,-1, 63,0);
        tracep->declBus(c+88,"ysyx_22050243_top mem_pc", false,-1, 31,0);
        tracep->declQuad(c+89,"ysyx_22050243_top if_to_id_bus", false,-1, 63,0);
        tracep->declArray(c+91,"ysyx_22050243_top id_to_ex_bus", false,-1, 309,0);
        tracep->declArray(c+101,"ysyx_22050243_top ex_to_mem_bus", false,-1, 295,0);
        tracep->declArray(c+111,"ysyx_22050243_top mem_to_wb_bus", false,-1, 355,0);
        tracep->declQuad(c+123,"ysyx_22050243_top d_req_addr", false,-1, 63,0);
        tracep->declBus(c+125,"ysyx_22050243_top d_req_strb", false,-1, 7,0);
        tracep->declArray(c+126,"ysyx_22050243_top d_req_data", false,-1, 127,0);
        tracep->declBit(c+130,"ysyx_22050243_top d_req_wen", false,-1);
        tracep->declBit(c+131,"ysyx_22050243_top d_req_valid", false,-1);
        tracep->declBit(c+132,"ysyx_22050243_top d_res_valid", false,-1);
        tracep->declArray(c+133,"ysyx_22050243_top d_mrdata", false,-1, 127,0);
        tracep->declQuad(c+137,"ysyx_22050243_top i_req_addr", false,-1, 63,0);
        tracep->declBit(c+139,"ysyx_22050243_top i_req_valid", false,-1);
        tracep->declBit(c+140,"ysyx_22050243_top i_res_valid", false,-1);
        tracep->declArray(c+141,"ysyx_22050243_top i_mrdata", false,-1, 127,0);
        tracep->declBit(c+822,"ysyx_22050243_top wb_allowin", false,-1);
        tracep->declQuad(c+145,"ysyx_22050243_top wb_reg_wdata", false,-1, 63,0);
        tracep->declQuad(c+147,"ysyx_22050243_top wb_csrwdata", false,-1, 63,0);
        tracep->declQuad(c+149,"ysyx_22050243_top wb_csrrdata", false,-1, 63,0);
        tracep->declBit(c+151,"ysyx_22050243_top wb_mret", false,-1);
        tracep->declBit(c+152,"ysyx_22050243_top wb_csr_we", false,-1);
        tracep->declBus(c+153,"ysyx_22050243_top wb_rd", false,-1, 4,0);
        tracep->declBit(c+154,"ysyx_22050243_top wb_reg_wen", false,-1);
        tracep->declBit(c+155,"ysyx_22050243_top wb_ebreak", false,-1);
        tracep->declBit(c+156,"ysyx_22050243_top wb_ecall", false,-1);
        tracep->declBit(c+157,"ysyx_22050243_top wb_timer_int", false,-1);
        tracep->declBit(c+158,"ysyx_22050243_top ecall_stuck", false,-1);
        tracep->declBit(c+159,"ysyx_22050243_top mret_stuck", false,-1);
        tracep->declBus(c+160,"ysyx_22050243_top dcache_state", false,-1, 2,0);
        tracep->declBus(c+161,"ysyx_22050243_top icache_state", false,-1, 2,0);
        tracep->declBus(c+162,"ysyx_22050243_top next_pc", false,-1, 31,0);
        tracep->declBit(c+163,"ysyx_22050243_top icache_pipieline_hit", false,-1);
        tracep->declBus(c+162,"ysyx_22050243_top icache_addr", false,-1, 31,0);
        tracep->declBit(c+164,"ysyx_22050243_top icache_valid", false,-1);
        tracep->declBit(c+165,"ysyx_22050243_top preif_valid", false,-1);
        tracep->declBit(c+166,"ysyx_22050243_top preif_ready_go_reg", false,-1);
        tracep->declBit(c+167,"ysyx_22050243_top preif_ready_go", false,-1);
        tracep->declBit(c+168,"ysyx_22050243_top preif_allowin", false,-1);
        tracep->declBit(c+826,"ysyx_22050243_top preif_timer_int", false,-1);
        tracep->declQuad(c+169,"ysyx_22050243_top icache_data", false,-1, 63,0);
        tracep->declBit(c+171,"ysyx_22050243_top timer_blocked", false,-1);
        tracep->declBit(c+826,"ysyx_22050243_top timer_int", false,-1);
        tracep->declBit(c+172,"ysyx_22050243_top if_timer_blocked", false,-1);
        tracep->declBit(c+173,"ysyx_22050243_top if_timer_int_tmp", false,-1);
        tracep->declBit(c+173,"ysyx_22050243_top if_timer_int", false,-1);
        tracep->declBit(c+174,"ysyx_22050243_top on_hold", false,-1);
        tracep->declBus(c+175,"ysyx_22050243_top next_pc_reg", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+176+i*2,"ysyx_22050243_top rf", true,(i+0), 63,0);}}
        tracep->declBus(c+240,"ysyx_22050243_top if_instruction_reg", false,-1, 31,0);
        tracep->declBit(c+241,"ysyx_22050243_top if_instruction_blocked", false,-1);
        tracep->declBus(c+827,"ysyx_22050243_top TYPE_I", false,-1, 2,0);
        tracep->declBus(c+828,"ysyx_22050243_top TYPE_U", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top TYPE_S", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top TYPE_J", false,-1, 2,0);
        tracep->declBus(c+831,"ysyx_22050243_top TYPE_R", false,-1, 2,0);
        tracep->declBus(c+832,"ysyx_22050243_top TYPE_B", false,-1, 2,0);
        tracep->declBus(c+833,"ysyx_22050243_top TYPE_N", false,-1, 2,0);
        tracep->declBus(c+816,"ysyx_22050243_top axi RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"ysyx_22050243_top axi RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"ysyx_22050243_top axi AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+816,"ysyx_22050243_top axi AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+817,"ysyx_22050243_top axi AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+818,"ysyx_22050243_top axi AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBus(c+819,"ysyx_22050243_top axi AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+734,"ysyx_22050243_top axi clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top axi rst", false,-1);
        tracep->declQuad(c+123,"ysyx_22050243_top axi d_req_addr", false,-1, 63,0);
        tracep->declBus(c+125,"ysyx_22050243_top axi d_req_strb", false,-1, 7,0);
        tracep->declArray(c+126,"ysyx_22050243_top axi d_req_data", false,-1, 127,0);
        tracep->declBit(c+130,"ysyx_22050243_top axi d_req_wen", false,-1);
        tracep->declBit(c+131,"ysyx_22050243_top axi d_req_valid", false,-1);
        tracep->declBit(c+132,"ysyx_22050243_top axi d_res_valid", false,-1);
        tracep->declArray(c+133,"ysyx_22050243_top axi d_mrdata", false,-1, 127,0);
        tracep->declQuad(c+137,"ysyx_22050243_top axi i_req_addr", false,-1, 63,0);
        tracep->declBit(c+139,"ysyx_22050243_top axi i_req_valid", false,-1);
        tracep->declBit(c+140,"ysyx_22050243_top axi i_res_valid", false,-1);
        tracep->declArray(c+141,"ysyx_22050243_top axi i_mrdata", false,-1, 127,0);
        tracep->declBit(c+762,"ysyx_22050243_top axi axi_aw_ready_i", false,-1);
        tracep->declBit(c+763,"ysyx_22050243_top axi axi_aw_valid_o", false,-1);
        tracep->declQuad(c+764,"ysyx_22050243_top axi axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+766,"ysyx_22050243_top axi axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+767,"ysyx_22050243_top axi axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+768,"ysyx_22050243_top axi axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+769,"ysyx_22050243_top axi axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+770,"ysyx_22050243_top axi axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+771,"ysyx_22050243_top axi axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+772,"ysyx_22050243_top axi axi_aw_lock_o", false,-1);
        tracep->declBus(c+773,"ysyx_22050243_top axi axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+774,"ysyx_22050243_top axi axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+775,"ysyx_22050243_top axi axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+776,"ysyx_22050243_top axi axi_w_ready_i", false,-1);
        tracep->declBit(c+777,"ysyx_22050243_top axi axi_w_valid_o", false,-1);
        tracep->declQuad(c+778,"ysyx_22050243_top axi axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+780,"ysyx_22050243_top axi axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+781,"ysyx_22050243_top axi axi_w_last_o", false,-1);
        tracep->declBus(c+782,"ysyx_22050243_top axi axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+783,"ysyx_22050243_top axi axi_b_ready_o", false,-1);
        tracep->declBit(c+784,"ysyx_22050243_top axi axi_b_valid_i", false,-1);
        tracep->declBus(c+785,"ysyx_22050243_top axi axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+786,"ysyx_22050243_top axi axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+787,"ysyx_22050243_top axi axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+788,"ysyx_22050243_top axi axi_ar_ready_i", false,-1);
        tracep->declBit(c+789,"ysyx_22050243_top axi axi_ar_valid_o", false,-1);
        tracep->declQuad(c+790,"ysyx_22050243_top axi axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+792,"ysyx_22050243_top axi axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+793,"ysyx_22050243_top axi axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+794,"ysyx_22050243_top axi axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+795,"ysyx_22050243_top axi axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+796,"ysyx_22050243_top axi axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+797,"ysyx_22050243_top axi axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+798,"ysyx_22050243_top axi axi_ar_lock_o", false,-1);
        tracep->declBus(c+799,"ysyx_22050243_top axi axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+800,"ysyx_22050243_top axi axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+801,"ysyx_22050243_top axi axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+802,"ysyx_22050243_top axi axi_r_ready_o", false,-1);
        tracep->declBit(c+803,"ysyx_22050243_top axi axi_r_valid_i", false,-1);
        tracep->declBus(c+804,"ysyx_22050243_top axi axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+805,"ysyx_22050243_top axi axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+807,"ysyx_22050243_top axi axi_r_last_i", false,-1);
        tracep->declBus(c+808,"ysyx_22050243_top axi axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+809,"ysyx_22050243_top axi axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+827,"ysyx_22050243_top axi W_IDLE", false,-1, 2,0);
        tracep->declBus(c+828,"ysyx_22050243_top axi W_ADDR", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top axi W_WRITE", false,-1, 2,0);
        tracep->declBus(c+832,"ysyx_22050243_top axi W_WRITE_WAIT", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top axi W_RESP", false,-1, 2,0);
        tracep->declBus(c+831,"ysyx_22050243_top axi W_DONE", false,-1, 2,0);
        tracep->declBus(c+827,"ysyx_22050243_top axi R_IDLE", false,-1, 2,0);
        tracep->declBus(c+828,"ysyx_22050243_top axi R_INST_ADDR", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top axi R_INST_READ", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top axi R_DATA_ADDR", false,-1, 2,0);
        tracep->declBus(c+831,"ysyx_22050243_top axi R_DATA_READ", false,-1, 2,0);
        tracep->declBus(c+832,"ysyx_22050243_top axi R_INST_DONE", false,-1, 2,0);
        tracep->declBus(c+833,"ysyx_22050243_top axi R_DATA_DONE", false,-1, 2,0);
        tracep->declBit(c+822,"ysyx_22050243_top axi r_trans", false,-1);
        tracep->declBit(c+242,"ysyx_22050243_top axi w_valid", false,-1);
        tracep->declBit(c+243,"ysyx_22050243_top axi r_valid", false,-1);
        tracep->declBit(c+244,"ysyx_22050243_top axi data_read", false,-1);
        tracep->declBit(c+139,"ysyx_22050243_top axi inst_read", false,-1);
        tracep->declBit(c+245,"ysyx_22050243_top axi mmio_rdone", false,-1);
        tracep->declBit(c+246,"ysyx_22050243_top axi mmio_wdone", false,-1);
        tracep->declBit(c+810,"ysyx_22050243_top axi aw_hs", false,-1);
        tracep->declBit(c+729,"ysyx_22050243_top axi ar_hs", false,-1);
        tracep->declBit(c+730,"ysyx_22050243_top axi w_hs", false,-1);
        tracep->declBit(c+731,"ysyx_22050243_top axi b_hs", false,-1);
        tracep->declBit(c+732,"ysyx_22050243_top axi r_hs", false,-1);
        tracep->declBit(c+247,"ysyx_22050243_top axi is_mmio", false,-1);
        tracep->declBit(c+730,"ysyx_22050243_top axi w_done_first", false,-1);
        tracep->declBit(c+811,"ysyx_22050243_top axi w_done_last", false,-1);
        tracep->declBit(c+733,"ysyx_22050243_top axi r_done", false,-1);
        tracep->declBit(c+812,"ysyx_22050243_top axi trans_done", false,-1);
        tracep->declQuad(c+248,"ysyx_22050243_top axi r_addr", false,-1, 63,0);
        tracep->declBus(c+250,"ysyx_22050243_top axi w_state", false,-1, 2,0);
        tracep->declBus(c+251,"ysyx_22050243_top axi r_state", false,-1, 2,0);
        tracep->declBit(c+252,"ysyx_22050243_top axi w_state_addr", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top axi w_state_resp", false,-1);
        tracep->declBit(c+253,"ysyx_22050243_top axi w_state_write", false,-1);
        tracep->declBit(c+254,"ysyx_22050243_top axi r_state_addr", false,-1);
        tracep->declBit(c+255,"ysyx_22050243_top axi r_state_read", false,-1);
        tracep->declBus(c+834,"ysyx_22050243_top axi AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+834,"ysyx_22050243_top axi MMIO_SIZE_R", false,-1, 31,0);
        tracep->declBus(c+835,"ysyx_22050243_top axi MMIO_SIZE_W", false,-1, 31,0);
        tracep->declBus(c+836,"ysyx_22050243_top axi axi_id", false,-1, 3,0);
        tracep->declBus(c+826,"ysyx_22050243_top axi axi_user", false,-1, 0,0);
        tracep->declBus(c+837,"ysyx_22050243_top axi axi_wlen", false,-1, 7,0);
        tracep->declBus(c+837,"ysyx_22050243_top axi axi_rlen", false,-1, 7,0);
        tracep->declBus(c+830,"ysyx_22050243_top axi axi_size", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top axi mmio_size_r", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top axi mmio_size_w", false,-1, 2,0);
        tracep->declBit(c+734,"ysyx_22050243_top icache clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top icache rst", false,-1);
        tracep->declQuad(c+256,"ysyx_22050243_top icache input_addr", false,-1, 63,0);
        tracep->declQuad(c+838,"ysyx_22050243_top icache input_wdata", false,-1, 63,0);
        tracep->declBit(c+826,"ysyx_22050243_top icache input_memwrite", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top icache input_memread", false,-1);
        tracep->declBit(c+164,"ysyx_22050243_top icache input_valid", false,-1);
        tracep->declBit(c+60,"ysyx_22050243_top icache load_branch", false,-1);
        tracep->declBit(c+52,"ysyx_22050243_top icache id_allowin", false,-1);
        tracep->declQuad(c+169,"ysyx_22050243_top icache output_data", false,-1, 63,0);
        tracep->declBit(c+163,"ysyx_22050243_top icache cache_pipelinehit", false,-1);
        tracep->declBus(c+161,"ysyx_22050243_top icache cache_state", false,-1, 2,0);
        tracep->declBit(c+158,"ysyx_22050243_top icache ecall_stuck", false,-1);
        tracep->declBit(c+159,"ysyx_22050243_top icache mret_stuck", false,-1);
        tracep->declBit(c+174,"ysyx_22050243_top icache on_hold", false,-1);
        tracep->declBit(c+156,"ysyx_22050243_top icache wb_ecall", false,-1);
        tracep->declBit(c+151,"ysyx_22050243_top icache wb_mret", false,-1);
        tracep->declQuad(c+137,"ysyx_22050243_top icache axi_req_addr", false,-1, 63,0);
        tracep->declBit(c+139,"ysyx_22050243_top icache axi_req_valid", false,-1);
        tracep->declBit(c+140,"ysyx_22050243_top icache axi_res_valid", false,-1);
        tracep->declArray(c+141,"ysyx_22050243_top icache axi_mrdata", false,-1, 127,0);
        tracep->declBus(c+258,"ysyx_22050243_top icache input_offset_reg", false,-1, 3,0);
        tracep->declBit(c+259,"ysyx_22050243_top icache cache_way0hit_reg", false,-1);
        tracep->declBit(c+260,"ysyx_22050243_top icache cache_way1hit_reg", false,-1);
        tracep->declBus(c+840,"ysyx_22050243_top icache mem_addr", false,-1, 31,0);
        tracep->declBit(c+841,"ysyx_22050243_top icache mem_wen", false,-1);
        tracep->declBus(c+842,"ysyx_22050243_top icache mem_strb", false,-1, 7,0);
        tracep->declBus(c+827,"ysyx_22050243_top icache IDLE", false,-1, 2,0);
        tracep->declBus(c+828,"ysyx_22050243_top icache LOOKUP", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top icache MISS", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top icache REPLACE", false,-1, 2,0);
        tracep->declBus(c+831,"ysyx_22050243_top icache REFILL", false,-1, 2,0);
        tracep->declBus(c+832,"ysyx_22050243_top icache MISS_STALL", false,-1, 2,0);
        tracep->declBus(c+833,"ysyx_22050243_top icache REFILL_STALL", false,-1, 2,0);
        tracep->declBus(c+843,"ysyx_22050243_top icache DUNJIAO", false,-1, 2,0);
        tracep->declBus(c+844,"ysyx_22050243_top icache SETS", false,-1, 31,0);
        tracep->declBus(c+261,"ysyx_22050243_top icache input_tag", false,-1, 20,0);
        tracep->declBus(c+262,"ysyx_22050243_top icache input_index", false,-1, 6,0);
        tracep->declBus(c+263,"ysyx_22050243_top icache input_offset", false,-1, 3,0);
        tracep->declBus(c+845,"ysyx_22050243_top icache cache_index_reg", false,-1, 6,0);
        tracep->declBit(c+264,"ysyx_22050243_top icache cache_wen_way0", false,-1);
        tracep->declBit(c+265,"ysyx_22050243_top icache cache_wen_way1", false,-1);
        tracep->declArray(c+266,"ysyx_22050243_top icache cache_strb", false,-1, 127,0);
        tracep->declArray(c+270,"ysyx_22050243_top icache cache_wdata", false,-1, 127,0);
        tracep->declArray(c+274,"ysyx_22050243_top icache cache_rdata_way0", false,-1, 127,0);
        tracep->declArray(c+278,"ysyx_22050243_top icache cache_rdata_way1", false,-1, 127,0);
        tracep->declBit(c+282,"ysyx_22050243_top icache cache_way0hit", false,-1);
        tracep->declBit(c+283,"ysyx_22050243_top icache cache_way1hit", false,-1);
        tracep->declBit(c+284,"ysyx_22050243_top icache cache_way0valid", false,-1);
        tracep->declBit(c+285,"ysyx_22050243_top icache cache_way1valid", false,-1);
        tracep->declQuad(c+286,"ysyx_22050243_top icache output_data_way0", false,-1, 63,0);
        tracep->declQuad(c+288,"ysyx_22050243_top icache output_data_way1", false,-1, 63,0);
        tracep->declQuad(c+846,"ysyx_22050243_top icache ex_cache_wdata", false,-1, 63,0);
        tracep->declBit(c+290,"ysyx_22050243_top icache cnt", false,-1);
        tracep->declBus(c+291,"ysyx_22050243_top icache unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top icache Icache_way1 Bits", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top icache Icache_way1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"ysyx_22050243_top icache Icache_way1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top icache Icache_way1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+274,"ysyx_22050243_top icache Icache_way1 Q", false,-1, 127,0);
        tracep->declBit(c+734,"ysyx_22050243_top icache Icache_way1 CLK", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top icache Icache_way1 CEN", false,-1);
        tracep->declBit(c+264,"ysyx_22050243_top icache Icache_way1 WEN", false,-1);
        tracep->declArray(c+266,"ysyx_22050243_top icache Icache_way1 BWEN", false,-1, 127,0);
        tracep->declBus(c+262,"ysyx_22050243_top icache Icache_way1 A", false,-1, 6,0);
        tracep->declArray(c+270,"ysyx_22050243_top icache Icache_way1 D", false,-1, 127,0);
        tracep->declBit(c+822,"ysyx_22050243_top icache Icache_way1 cen", false,-1);
        tracep->declBit(c+264,"ysyx_22050243_top icache Icache_way1 wen", false,-1);
        tracep->declArray(c+266,"ysyx_22050243_top icache Icache_way1 bwen", false,-1, 127,0);
        tracep->declBus(c+844,"ysyx_22050243_top icache Icache_way2 Bits", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top icache Icache_way2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"ysyx_22050243_top icache Icache_way2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top icache Icache_way2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+278,"ysyx_22050243_top icache Icache_way2 Q", false,-1, 127,0);
        tracep->declBit(c+734,"ysyx_22050243_top icache Icache_way2 CLK", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top icache Icache_way2 CEN", false,-1);
        tracep->declBit(c+265,"ysyx_22050243_top icache Icache_way2 WEN", false,-1);
        tracep->declArray(c+266,"ysyx_22050243_top icache Icache_way2 BWEN", false,-1, 127,0);
        tracep->declBus(c+262,"ysyx_22050243_top icache Icache_way2 A", false,-1, 6,0);
        tracep->declArray(c+270,"ysyx_22050243_top icache Icache_way2 D", false,-1, 127,0);
        tracep->declBit(c+822,"ysyx_22050243_top icache Icache_way2 cen", false,-1);
        tracep->declBit(c+265,"ysyx_22050243_top icache Icache_way2 wen", false,-1);
        tracep->declArray(c+266,"ysyx_22050243_top icache Icache_way2 bwen", false,-1, 127,0);
        tracep->declBit(c+734,"ysyx_22050243_top dcache clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top dcache rst", false,-1);
        tracep->declBit(c+71,"ysyx_22050243_top dcache fencei", false,-1);
        tracep->declQuad(c+292,"ysyx_22050243_top dcache input_addr", false,-1, 63,0);
        tracep->declQuad(c+294,"ysyx_22050243_top dcache input_wdata", false,-1, 63,0);
        tracep->declBit(c+296,"ysyx_22050243_top dcache input_memwrite", false,-1);
        tracep->declBit(c+297,"ysyx_22050243_top dcache input_memread", false,-1);
        tracep->declBit(c+298,"ysyx_22050243_top dcache input_valid", false,-1);
        tracep->declBus(c+299,"ysyx_22050243_top dcache input_size", false,-1, 1,0);
        tracep->declBus(c+63,"ysyx_22050243_top dcache input_strb", false,-1, 7,0);
        tracep->declQuad(c+82,"ysyx_22050243_top dcache output_data", false,-1, 63,0);
        tracep->declBit(c+73,"ysyx_22050243_top dcache cache_pipelinehit", false,-1);
        tracep->declBus(c+160,"ysyx_22050243_top dcache cache_state", false,-1, 2,0);
        tracep->declQuad(c+86,"ysyx_22050243_top dcache diff_data", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22050243_top dcache diff_addr", false,-1, 63,0);
        tracep->declQuad(c+123,"ysyx_22050243_top dcache axi_req_addr", false,-1, 63,0);
        tracep->declBus(c+125,"ysyx_22050243_top dcache axi_req_strb", false,-1, 7,0);
        tracep->declArray(c+126,"ysyx_22050243_top dcache axi_req_data", false,-1, 127,0);
        tracep->declBit(c+130,"ysyx_22050243_top dcache axi_req_wen", false,-1);
        tracep->declBit(c+131,"ysyx_22050243_top dcache axi_req_valid", false,-1);
        tracep->declBit(c+70,"ysyx_22050243_top dcache mmio", false,-1);
        tracep->declBit(c+132,"ysyx_22050243_top dcache axi_res_valid", false,-1);
        tracep->declArray(c+133,"ysyx_22050243_top dcache axi_mrdata", false,-1, 127,0);
        tracep->declBus(c+300,"ysyx_22050243_top dcache input_size_reg", false,-1, 1,0);
        tracep->declBus(c+301,"ysyx_22050243_top dcache input_offset_reg", false,-1, 3,0);
        tracep->declBit(c+302,"ysyx_22050243_top dcache cache_way0hit_reg", false,-1);
        tracep->declBit(c+303,"ysyx_22050243_top dcache cache_way1hit_reg", false,-1);
        tracep->declBit(c+304,"ysyx_22050243_top dcache mmio_ok", false,-1);
        tracep->declBus(c+849,"ysyx_22050243_top dcache mem_addr", false,-1, 31,0);
        tracep->declBit(c+850,"ysyx_22050243_top dcache mem_wen", false,-1);
        tracep->declBus(c+827,"ysyx_22050243_top dcache IDLE", false,-1, 2,0);
        tracep->declBus(c+828,"ysyx_22050243_top dcache LOOKUP", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top dcache MISS", false,-1, 2,0);
        tracep->declBus(c+831,"ysyx_22050243_top dcache REFILL", false,-1, 2,0);
        tracep->declBus(c+832,"ysyx_22050243_top dcache MISS_STALL", false,-1, 2,0);
        tracep->declBus(c+833,"ysyx_22050243_top dcache REFILL_STALL", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top dcache FENCEI", false,-1, 2,0);
        tracep->declBus(c+843,"ysyx_22050243_top dcache FENCEI_STALL", false,-1, 2,0);
        tracep->declBus(c+844,"ysyx_22050243_top dcache SETS", false,-1, 31,0);
        tracep->declBus(c+305,"ysyx_22050243_top dcache input_tag", false,-1, 20,0);
        tracep->declBus(c+306,"ysyx_22050243_top dcache input_index", false,-1, 6,0);
        tracep->declBus(c+307,"ysyx_22050243_top dcache input_offset", false,-1, 3,0);
        tracep->declBus(c+308,"ysyx_22050243_top dcache cache_index_reg", false,-1, 6,0);
        tracep->declBus(c+309,"ysyx_22050243_top dcache cache_offset_reg", false,-1, 3,0);
        tracep->declArray(c+310,"ysyx_22050243_top dcache cache_strb", false,-1, 127,0);
        tracep->declBit(c+314,"ysyx_22050243_top dcache cache_wen_way0", false,-1);
        tracep->declBit(c+315,"ysyx_22050243_top dcache cache_wen_way1", false,-1);
        tracep->declArray(c+316,"ysyx_22050243_top dcache cache_wdata", false,-1, 127,0);
        tracep->declBit(c+320,"ysyx_22050243_top dcache cache_miss", false,-1);
        tracep->declBus(c+321,"ysyx_22050243_top dcache fencei_cnt", false,-1, 6,0);
        tracep->declBit(c+322,"ysyx_22050243_top dcache fencei_ok", false,-1);
        tracep->declBit(c+323,"ysyx_22050243_top dcache cache_wen_way0_reg", false,-1);
        tracep->declBit(c+324,"ysyx_22050243_top dcache cache_wen_way1_reg", false,-1);
        tracep->declQuad(c+325,"ysyx_22050243_top dcache ex_cache_strb", false,-1, 63,0);
        tracep->declArray(c+327,"ysyx_22050243_top dcache cache_rdata_way0", false,-1, 127,0);
        tracep->declArray(c+331,"ysyx_22050243_top dcache cache_rdata_way1", false,-1, 127,0);
        tracep->declBit(c+335,"ysyx_22050243_top dcache cache_way0hit", false,-1);
        tracep->declBit(c+336,"ysyx_22050243_top dcache cache_way1hit", false,-1);
        tracep->declBit(c+337,"ysyx_22050243_top dcache cache_way0dirty", false,-1);
        tracep->declBit(c+338,"ysyx_22050243_top dcache cache_way1dirty", false,-1);
        tracep->declBit(c+339,"ysyx_22050243_top dcache cache_way0valid", false,-1);
        tracep->declBit(c+340,"ysyx_22050243_top dcache cache_way1valid", false,-1);
        tracep->declQuad(c+341,"ysyx_22050243_top dcache output_data_way0", false,-1, 63,0);
        tracep->declQuad(c+343,"ysyx_22050243_top dcache output_data_way1", false,-1, 63,0);
        tracep->declQuad(c+345,"ysyx_22050243_top dcache ex_cache_wdata", false,-1, 63,0);
        tracep->declBit(c+347,"ysyx_22050243_top dcache cache_raw_way0", false,-1);
        tracep->declBit(c+348,"ysyx_22050243_top dcache cache_raw_way1", false,-1);
        tracep->declBit(c+349,"ysyx_22050243_top dcache cache_raw", false,-1);
        tracep->declBit(c+350,"ysyx_22050243_top dcache mmio_mem", false,-1);
        tracep->declQuad(c+351,"ysyx_22050243_top dcache mmio_rdata_reg", false,-1, 63,0);
        tracep->declBit(c+353,"ysyx_22050243_top dcache cache_way0fencev", false,-1);
        tracep->declBit(c+354,"ysyx_22050243_top dcache cache_way0fenced", false,-1);
        tracep->declBit(c+355,"ysyx_22050243_top dcache cache_way1fencev", false,-1);
        tracep->declBit(c+356,"ysyx_22050243_top dcache cache_way1fenced", false,-1);
        tracep->declBit(c+357,"ysyx_22050243_top dcache cnt", false,-1);
        tracep->declBus(c+358,"ysyx_22050243_top dcache unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top dcache Dcache_way1 Bits", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top dcache Dcache_way1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"ysyx_22050243_top dcache Dcache_way1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top dcache Dcache_way1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+327,"ysyx_22050243_top dcache Dcache_way1 Q", false,-1, 127,0);
        tracep->declBit(c+734,"ysyx_22050243_top dcache Dcache_way1 CLK", false,-1);
        tracep->declBit(c+359,"ysyx_22050243_top dcache Dcache_way1 CEN", false,-1);
        tracep->declBit(c+314,"ysyx_22050243_top dcache Dcache_way1 WEN", false,-1);
        tracep->declArray(c+310,"ysyx_22050243_top dcache Dcache_way1 BWEN", false,-1, 127,0);
        tracep->declBus(c+360,"ysyx_22050243_top dcache Dcache_way1 A", false,-1, 6,0);
        tracep->declArray(c+316,"ysyx_22050243_top dcache Dcache_way1 D", false,-1, 127,0);
        tracep->declBit(c+359,"ysyx_22050243_top dcache Dcache_way1 cen", false,-1);
        tracep->declBit(c+314,"ysyx_22050243_top dcache Dcache_way1 wen", false,-1);
        tracep->declArray(c+310,"ysyx_22050243_top dcache Dcache_way1 bwen", false,-1, 127,0);
        tracep->declBus(c+844,"ysyx_22050243_top dcache Dcache_way2 Bits", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top dcache Dcache_way2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+848,"ysyx_22050243_top dcache Dcache_way2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+844,"ysyx_22050243_top dcache Dcache_way2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+331,"ysyx_22050243_top dcache Dcache_way2 Q", false,-1, 127,0);
        tracep->declBit(c+734,"ysyx_22050243_top dcache Dcache_way2 CLK", false,-1);
        tracep->declBit(c+359,"ysyx_22050243_top dcache Dcache_way2 CEN", false,-1);
        tracep->declBit(c+315,"ysyx_22050243_top dcache Dcache_way2 WEN", false,-1);
        tracep->declArray(c+310,"ysyx_22050243_top dcache Dcache_way2 BWEN", false,-1, 127,0);
        tracep->declBus(c+361,"ysyx_22050243_top dcache Dcache_way2 A", false,-1, 6,0);
        tracep->declArray(c+316,"ysyx_22050243_top dcache Dcache_way2 D", false,-1, 127,0);
        tracep->declBit(c+359,"ysyx_22050243_top dcache Dcache_way2 cen", false,-1);
        tracep->declBit(c+315,"ysyx_22050243_top dcache Dcache_way2 wen", false,-1);
        tracep->declArray(c+310,"ysyx_22050243_top dcache Dcache_way2 bwen", false,-1, 127,0);
        tracep->declBit(c+734,"ysyx_22050243_top dec clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top dec rst", false,-1);
        tracep->declBit(c+52,"ysyx_22050243_top dec id_allowin", false,-1);
        tracep->declBit(c+65,"ysyx_22050243_top dec ex_allowin", false,-1);
        tracep->declBit(c+42,"ysyx_22050243_top dec if_to_id_valid", false,-1);
        tracep->declBit(c+57,"ysyx_22050243_top dec id_to_ex_valid", false,-1);
        tracep->declQuad(c+89,"ysyx_22050243_top dec if_to_id_bus", false,-1, 63,0);
        tracep->declArray(c+91,"ysyx_22050243_top dec id_to_ex_bus", false,-1, 309,0);
        tracep->declBit(c+173,"ysyx_22050243_top dec if_timer_int", false,-1);
        tracep->declBus(c+49,"ysyx_22050243_top dec id_rs1", false,-1, 4,0);
        tracep->declBus(c+50,"ysyx_22050243_top dec id_rs2", false,-1, 4,0);
        tracep->declQuad(c+53,"ysyx_22050243_top dec id_regdata1_tmp", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22050243_top dec id_regdata2_tmp", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22050243_top dec id_branch_result", false,-1, 31,0);
        tracep->declBit(c+48,"ysyx_22050243_top dec id_branch_taken", false,-1);
        tracep->declBus(c+362,"ysyx_22050243_top dec ex_rd", false,-1, 4,0);
        tracep->declBus(c+363,"ysyx_22050243_top dec mem_rd", false,-1, 4,0);
        tracep->declBus(c+153,"ysyx_22050243_top dec wb_rd", false,-1, 4,0);
        tracep->declQuad(c+292,"ysyx_22050243_top dec ex_alu_output", false,-1, 63,0);
        tracep->declQuad(c+77,"ysyx_22050243_top dec mem_alu_output", false,-1, 63,0);
        tracep->declQuad(c+145,"ysyx_22050243_top dec wb_reg_wdata", false,-1, 63,0);
        tracep->declBit(c+297,"ysyx_22050243_top dec ex_memread", false,-1);
        tracep->declBit(c+79,"ysyx_22050243_top dec mem_memread", false,-1);
        tracep->declQuad(c+80,"ysyx_22050243_top dec mem_final_rdata", false,-1, 63,0);
        tracep->declBit(c+364,"ysyx_22050243_top dec ex_reg_wen", false,-1);
        tracep->declBit(c+365,"ysyx_22050243_top dec mem_reg_wen", false,-1);
        tracep->declBit(c+154,"ysyx_22050243_top dec wb_reg_wen", false,-1);
        tracep->declBit(c+366,"ysyx_22050243_top dec mem_mret", false,-1);
        tracep->declBit(c+367,"ysyx_22050243_top dec ex_csr_we", false,-1);
        tracep->declBit(c+368,"ysyx_22050243_top dec mem_csr_we", false,-1);
        tracep->declBit(c+152,"ysyx_22050243_top dec wb_csr_we", false,-1);
        tracep->declBus(c+61,"ysyx_22050243_top dec ex_pc", false,-1, 31,0);
        tracep->declBus(c+813,"ysyx_22050243_top dec mepc_low", false,-1, 31,0);
        tracep->declBit(c+168,"ysyx_22050243_top dec preif_allowin", false,-1);
        tracep->declBit(c+45,"ysyx_22050243_top dec if_flush", false,-1);
        tracep->declBus(c+240,"ysyx_22050243_top dec if_instruction_reg", false,-1, 31,0);
        tracep->declBit(c+241,"ysyx_22050243_top dec if_instruction_blocked", false,-1);
        tracep->declBit(c+51,"ysyx_22050243_top dec id_flush", false,-1);
        tracep->declBit(c+58,"ysyx_22050243_top dec id_ecall", false,-1);
        tracep->declBit(c+59,"ysyx_22050243_top dec id_mret", false,-1);
        tracep->declBit(c+60,"ysyx_22050243_top dec load_branch", false,-1);
        tracep->declBit(c+72,"ysyx_22050243_top dec ecallmret_on", false,-1);
        tracep->declBit(c+68,"ysyx_22050243_top dec ex_ecall", false,-1);
        tracep->declBit(c+69,"ysyx_22050243_top dec ex_mret", false,-1);
        tracep->declBus(c+88,"ysyx_22050243_top dec mem_pc", false,-1, 31,0);
        tracep->declBit(c+74,"ysyx_22050243_top dec mem_ecall", false,-1);
        tracep->declBit(c+156,"ysyx_22050243_top dec wb_ecall", false,-1);
        tracep->declBit(c+151,"ysyx_22050243_top dec wb_mret", false,-1);
        tracep->declBus(c+738,"ysyx_22050243_top dec wb_pc", false,-1, 31,0);
        tracep->declBus(c+161,"ysyx_22050243_top dec icache_state", false,-1, 2,0);
        tracep->declBus(c+827,"ysyx_22050243_top dec TYPE_I", false,-1, 2,0);
        tracep->declBus(c+828,"ysyx_22050243_top dec TYPE_U", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top dec TYPE_S", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top dec TYPE_J", false,-1, 2,0);
        tracep->declBus(c+831,"ysyx_22050243_top dec TYPE_R", false,-1, 2,0);
        tracep->declBus(c+832,"ysyx_22050243_top dec TYPE_B", false,-1, 2,0);
        tracep->declBus(c+833,"ysyx_22050243_top dec TYPE_N", false,-1, 2,0);
        tracep->declBit(c+369,"ysyx_22050243_top dec beq", false,-1);
        tracep->declBit(c+370,"ysyx_22050243_top dec bne", false,-1);
        tracep->declBit(c+371,"ysyx_22050243_top dec blt", false,-1);
        tracep->declBit(c+372,"ysyx_22050243_top dec bltu", false,-1);
        tracep->declBit(c+373,"ysyx_22050243_top dec bge", false,-1);
        tracep->declBit(c+374,"ysyx_22050243_top dec bgeu", false,-1);
        tracep->declBit(c+375,"ysyx_22050243_top dec btype_taken", false,-1);
        tracep->declBit(c+376,"ysyx_22050243_top dec imm_src1", false,-1);
        tracep->declBit(c+377,"ysyx_22050243_top dec imm_src2", false,-1);
        tracep->declBus(c+378,"ysyx_22050243_top dec id_aluop", false,-1, 5,0);
        tracep->declBus(c+379,"ysyx_22050243_top dec id_memop", false,-1, 2,0);
        tracep->declBus(c+380,"ysyx_22050243_top dec id_rd", false,-1, 4,0);
        tracep->declBit(c+381,"ysyx_22050243_top dec id_reg_wen", false,-1);
        tracep->declBit(c+382,"ysyx_22050243_top dec id_memwrite", false,-1);
        tracep->declBit(c+383,"ysyx_22050243_top dec id_memread", false,-1);
        tracep->declBus(c+384,"ysyx_22050243_top dec id_inst_type", false,-1, 2,0);
        tracep->declQuad(c+385,"ysyx_22050243_top dec id_imm", false,-1, 63,0);
        tracep->declBit(c+387,"ysyx_22050243_top dec id_jalr", false,-1);
        tracep->declQuad(c+388,"ysyx_22050243_top dec id_alu_input1", false,-1, 63,0);
        tracep->declQuad(c+390,"ysyx_22050243_top dec id_alu_input2", false,-1, 63,0);
        tracep->declQuad(c+392,"ysyx_22050243_top dec id_regdata1_final", false,-1, 63,0);
        tracep->declQuad(c+394,"ysyx_22050243_top dec id_regdata2_final", false,-1, 63,0);
        tracep->declQuad(c+394,"ysyx_22050243_top dec id_mem_wdata", false,-1, 63,0);
        tracep->declBit(c+396,"ysyx_22050243_top dec id_ebreak", false,-1);
        tracep->declBit(c+397,"ysyx_22050243_top dec exid_raw_hazard1", false,-1);
        tracep->declBit(c+398,"ysyx_22050243_top dec exid_raw_hazard2", false,-1);
        tracep->declBit(c+399,"ysyx_22050243_top dec memid_raw_hazard1", false,-1);
        tracep->declBit(c+400,"ysyx_22050243_top dec memid_raw_hazard2", false,-1);
        tracep->declBit(c+814,"ysyx_22050243_top dec wbid_raw_hazard1", false,-1);
        tracep->declBit(c+815,"ysyx_22050243_top dec wbid_raw_hazard2", false,-1);
        tracep->declBit(c+401,"ysyx_22050243_top dec load_use_hazard1", false,-1);
        tracep->declBit(c+402,"ysyx_22050243_top dec load_use_hazard2", false,-1);
        tracep->declBit(c+403,"ysyx_22050243_top dec mem_load_use_hazard1_tmp", false,-1);
        tracep->declBit(c+404,"ysyx_22050243_top dec mem_load_use_hazard2_tmp", false,-1);
        tracep->declBit(c+405,"ysyx_22050243_top dec mem_load_use_hazard1", false,-1);
        tracep->declBit(c+406,"ysyx_22050243_top dec mem_load_use_hazard2", false,-1);
        tracep->declBit(c+407,"ysyx_22050243_top dec wb_load_use_hazard1_tmp", false,-1);
        tracep->declBit(c+408,"ysyx_22050243_top dec wb_load_use_hazard2_tmp", false,-1);
        tracep->declBit(c+407,"ysyx_22050243_top dec wb_load_use_hazard1", false,-1);
        tracep->declBit(c+408,"ysyx_22050243_top dec wb_load_use_hazard2", false,-1);
        tracep->declBit(c+409,"ysyx_22050243_top dec id_ready_go", false,-1);
        tracep->declBit(c+410,"ysyx_22050243_top dec id_valid", false,-1);
        tracep->declQuad(c+411,"ysyx_22050243_top dec if_to_id_bus_reg", false,-1, 63,0);
        tracep->declBus(c+413,"ysyx_22050243_top dec id_pc", false,-1, 31,0);
        tracep->declBus(c+414,"ysyx_22050243_top dec id_instruction", false,-1, 31,0);
        tracep->declBit(c+415,"ysyx_22050243_top dec id_csrrw", false,-1);
        tracep->declBit(c+416,"ysyx_22050243_top dec id_csrrs", false,-1);
        tracep->declBit(c+417,"ysyx_22050243_top dec id_csrrc", false,-1);
        tracep->declBit(c+418,"ysyx_22050243_top dec id_csrrwi", false,-1);
        tracep->declBit(c+419,"ysyx_22050243_top dec id_csrrsi", false,-1);
        tracep->declBit(c+420,"ysyx_22050243_top dec id_csrrci", false,-1);
        tracep->declBit(c+421,"ysyx_22050243_top dec if_timer_int_reg", false,-1);
        tracep->declBit(c+422,"ysyx_22050243_top dec id_jalr_stuck", false,-1);
        tracep->declBit(c+423,"ysyx_22050243_top dec id_jalr_stuck_reg", false,-1);
        tracep->declBus(c+424,"ysyx_22050243_top dec stuck_jalr_result", false,-1, 31,0);
        tracep->declBit(c+826,"ysyx_22050243_top dec timer_int", false,-1);
        tracep->declBit(c+421,"ysyx_22050243_top dec id_timer_int", false,-1);
        tracep->declBit(c+425,"ysyx_22050243_top dec id_fencei", false,-1);
        tracep->declBus(c+851,"ysyx_22050243_top dec inst_mux NR_KEY", false,-1, 31,0);
        tracep->declBus(c+848,"ysyx_22050243_top dec inst_mux KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+834,"ysyx_22050243_top dec inst_mux DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+384,"ysyx_22050243_top dec inst_mux out", false,-1, 2,0);
        tracep->declBus(c+426,"ysyx_22050243_top dec inst_mux key", false,-1, 6,0);
        tracep->declBus(c+827,"ysyx_22050243_top dec inst_mux default_out", false,-1, 2,0);
        tracep->declArray(c+852,"ysyx_22050243_top dec inst_mux lut", false,-1, 129,0);
        tracep->declBus(c+851,"ysyx_22050243_top dec inst_mux i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+848,"ysyx_22050243_top dec inst_mux i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+834,"ysyx_22050243_top dec inst_mux i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+819,"ysyx_22050243_top dec inst_mux i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+384,"ysyx_22050243_top dec inst_mux i0 out", false,-1, 2,0);
        tracep->declBus(c+426,"ysyx_22050243_top dec inst_mux i0 key", false,-1, 6,0);
        tracep->declBus(c+827,"ysyx_22050243_top dec inst_mux i0 default_out", false,-1, 2,0);
        tracep->declArray(c+852,"ysyx_22050243_top dec inst_mux i0 lut", false,-1, 129,0);
        tracep->declBus(c+857,"ysyx_22050243_top dec inst_mux i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+1+i*1,"ysyx_22050243_top dec inst_mux i0 pair_list", true,(i+0), 9,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+14+i*1,"ysyx_22050243_top dec inst_mux i0 key_list", true,(i+0), 6,0);}}
        {int i; for (i=0; i<13; i++) {
                tracep->declBus(c+27+i*1,"ysyx_22050243_top dec inst_mux i0 data_list", true,(i+0), 2,0);}}
        tracep->declBus(c+427,"ysyx_22050243_top dec inst_mux i0 lut_out", false,-1, 2,0);
        tracep->declBit(c+428,"ysyx_22050243_top dec inst_mux i0 hit", false,-1);
        tracep->declBus(c+858,"ysyx_22050243_top dec inst_mux i0 i", false,-1, 31,0);
        tracep->declBit(c+734,"ysyx_22050243_top exe clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top exe rst", false,-1);
        tracep->declBit(c+65,"ysyx_22050243_top exe ex_allowin", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top exe mem_allowin", false,-1);
        tracep->declBit(c+57,"ysyx_22050243_top exe id_to_ex_valid", false,-1);
        tracep->declBit(c+67,"ysyx_22050243_top exe ex_to_mem_valid", false,-1);
        tracep->declArray(c+91,"ysyx_22050243_top exe id_to_ex_bus", false,-1, 309,0);
        tracep->declArray(c+101,"ysyx_22050243_top exe ex_to_mem_bus", false,-1, 295,0);
        tracep->declBit(c+366,"ysyx_22050243_top exe mem_mret", false,-1);
        tracep->declBit(c+51,"ysyx_22050243_top exe id_flush", false,-1);
        tracep->declBit(c+73,"ysyx_22050243_top exe cache_pipelinehit", false,-1);
        tracep->declBus(c+160,"ysyx_22050243_top exe cache_state", false,-1, 2,0);
        tracep->declBit(c+64,"ysyx_22050243_top exe ex_flush", false,-1);
        tracep->declBus(c+61,"ysyx_22050243_top exe ex_pc", false,-1, 31,0);
        tracep->declBit(c+68,"ysyx_22050243_top exe ex_ecall", false,-1);
        tracep->declBit(c+69,"ysyx_22050243_top exe ex_mret", false,-1);
        tracep->declBit(c+66,"ysyx_22050243_top exe ex_ready_go", false,-1);
        tracep->declBit(c+71,"ysyx_22050243_top exe ex_fencei", false,-1);
        tracep->declBit(c+74,"ysyx_22050243_top exe mem_ecall", false,-1);
        tracep->declQuad(c+429,"ysyx_22050243_top exe rtype_calc_result", false,-1, 63,0);
        tracep->declQuad(c+431,"ysyx_22050243_top exe itype_calc_result", false,-1, 63,0);
        tracep->declQuad(c+433,"ysyx_22050243_top exe rtype_alu_op", false,-1, 63,0);
        tracep->declBus(c+435,"ysyx_22050243_top exe itype_alu_op", false,-1, 31,0);
        tracep->declBus(c+436,"ysyx_22050243_top exe addw_result", false,-1, 31,0);
        tracep->declBus(c+437,"ysyx_22050243_top exe subw_result", false,-1, 31,0);
        tracep->declBus(c+438,"ysyx_22050243_top exe mulw_result", false,-1, 31,0);
        tracep->declBus(c+439,"ysyx_22050243_top exe divw_result", false,-1, 31,0);
        tracep->declBus(c+439,"ysyx_22050243_top exe divuw_result", false,-1, 31,0);
        tracep->declBus(c+440,"ysyx_22050243_top exe remw_result", false,-1, 31,0);
        tracep->declBus(c+440,"ysyx_22050243_top exe remuw_result", false,-1, 31,0);
        tracep->declQuad(c+441,"ysyx_22050243_top exe sext_addw_result", false,-1, 63,0);
        tracep->declQuad(c+443,"ysyx_22050243_top exe sext_subw_result", false,-1, 63,0);
        tracep->declQuad(c+445,"ysyx_22050243_top exe sext_mulw_result", false,-1, 63,0);
        tracep->declQuad(c+447,"ysyx_22050243_top exe sext_divw_result", false,-1, 63,0);
        tracep->declQuad(c+447,"ysyx_22050243_top exe sext_divuw_result", false,-1, 63,0);
        tracep->declQuad(c+449,"ysyx_22050243_top exe sext_remw_result", false,-1, 63,0);
        tracep->declQuad(c+449,"ysyx_22050243_top exe sext_remuw_result", false,-1, 63,0);
        tracep->declBus(c+451,"ysyx_22050243_top exe src1_sllw", false,-1, 31,0);
        tracep->declBus(c+452,"ysyx_22050243_top exe src1_srlw", false,-1, 31,0);
        tracep->declBus(c+453,"ysyx_22050243_top exe sft_input2", false,-1, 5,0);
        tracep->declQuad(c+454,"ysyx_22050243_top exe sra_mask_64", false,-1, 63,0);
        tracep->declQuad(c+456,"ysyx_22050243_top exe sraw_mask_32", false,-1, 63,0);
        tracep->declQuad(c+458,"ysyx_22050243_top exe sext_src1_sraw", false,-1, 63,0);
        tracep->declQuad(c+460,"ysyx_22050243_top exe sext_src1_sllw", false,-1, 63,0);
        tracep->declQuad(c+462,"ysyx_22050243_top exe sext_src1_srlw", false,-1, 63,0);
        tracep->declQuad(c+464,"ysyx_22050243_top exe ex_mem_wdata", false,-1, 63,0);
        tracep->declBus(c+466,"ysyx_22050243_top exe ex_aluop", false,-1, 5,0);
        tracep->declBus(c+467,"ysyx_22050243_top exe ex_memop", false,-1, 2,0);
        tracep->declBit(c+468,"ysyx_22050243_top exe ex_memwrite", false,-1);
        tracep->declBit(c+469,"ysyx_22050243_top exe ex_memread", false,-1);
        tracep->declBus(c+470,"ysyx_22050243_top exe ex_rd", false,-1, 4,0);
        tracep->declBus(c+471,"ysyx_22050243_top exe ex_inst_type", false,-1, 2,0);
        tracep->declBit(c+472,"ysyx_22050243_top exe ex_jalr", false,-1);
        tracep->declQuad(c+473,"ysyx_22050243_top exe ex_alu_input1", false,-1, 63,0);
        tracep->declQuad(c+475,"ysyx_22050243_top exe ex_alu_input2", false,-1, 63,0);
        tracep->declBus(c+477,"ysyx_22050243_top exe ex_rs1", false,-1, 4,0);
        tracep->declBus(c+478,"ysyx_22050243_top exe ex_rs2", false,-1, 4,0);
        tracep->declBit(c+479,"ysyx_22050243_top exe ex_reg_wen", false,-1);
        tracep->declBus(c+480,"ysyx_22050243_top exe ex_instruction", false,-1, 31,0);
        tracep->declBit(c+481,"ysyx_22050243_top exe mul_type", false,-1);
        tracep->declBit(c+482,"ysyx_22050243_top exe div_type", false,-1);
        tracep->declBit(c+483,"ysyx_22050243_top exe div_sign", false,-1);
        tracep->declBit(c+484,"ysyx_22050243_top exe mul_ok", false,-1);
        tracep->declBit(c+485,"ysyx_22050243_top exe sign1", false,-1);
        tracep->declBit(c+486,"ysyx_22050243_top exe sign2", false,-1);
        tracep->declQuad(c+487,"ysyx_22050243_top exe mul_res_high", false,-1, 63,0);
        tracep->declQuad(c+489,"ysyx_22050243_top exe mul_res_low", false,-1, 63,0);
        tracep->declBit(c+491,"ysyx_22050243_top exe ex_valid", false,-1);
        tracep->declArray(c+492,"ysyx_22050243_top exe id_to_ex_bus_reg", false,-1, 309,0);
        tracep->declQuad(c+502,"ysyx_22050243_top exe ex_alu_output", false,-1, 63,0);
        tracep->declBit(c+504,"ysyx_22050243_top exe div_ready", false,-1);
        tracep->declBus(c+505,"ysyx_22050243_top exe div_state", false,-1, 1,0);
        tracep->declQuad(c+506,"ysyx_22050243_top exe quo", false,-1, 63,0);
        tracep->declQuad(c+508,"ysyx_22050243_top exe rem", false,-1, 63,0);
        tracep->declBit(c+510,"ysyx_22050243_top exe ex_csrrw", false,-1);
        tracep->declBit(c+511,"ysyx_22050243_top exe ex_csrrs", false,-1);
        tracep->declBit(c+512,"ysyx_22050243_top exe ex_csrrc", false,-1);
        tracep->declBit(c+513,"ysyx_22050243_top exe ex_csrrwi", false,-1);
        tracep->declBit(c+514,"ysyx_22050243_top exe ex_csrrsi", false,-1);
        tracep->declBit(c+515,"ysyx_22050243_top exe ex_csrrci", false,-1);
        tracep->declBit(c+516,"ysyx_22050243_top exe ex_csr_we", false,-1);
        tracep->declBus(c+517,"ysyx_22050243_top exe ex_des_csr", false,-1, 11,0);
        tracep->declBit(c+518,"ysyx_22050243_top exe ex_ebreak", false,-1);
        tracep->declBit(c+519,"ysyx_22050243_top exe ex_timer_int", false,-1);
        tracep->declBit(c+520,"ysyx_22050243_top exe ex_excptions", false,-1);
        tracep->declBit(c+521,"ysyx_22050243_top exe cache_readygo", false,-1);
        tracep->declBit(c+522,"ysyx_22050243_top exe mul_stuck", false,-1);
        tracep->declBit(c+523,"ysyx_22050243_top exe div_stuck", false,-1);
        tracep->declBus(c+859,"ysyx_22050243_top exe op_add", false,-1, 5,0);
        tracep->declBus(c+860,"ysyx_22050243_top exe op_mul", false,-1, 5,0);
        tracep->declBus(c+861,"ysyx_22050243_top exe op_sub", false,-1, 5,0);
        tracep->declBus(c+862,"ysyx_22050243_top exe op_addw", false,-1, 5,0);
        tracep->declBus(c+863,"ysyx_22050243_top exe op_or", false,-1, 5,0);
        tracep->declBus(c+864,"ysyx_22050243_top exe op_xor", false,-1, 5,0);
        tracep->declBus(c+865,"ysyx_22050243_top exe op_sll", false,-1, 5,0);
        tracep->declBus(c+866,"ysyx_22050243_top exe op_slt", false,-1, 5,0);
        tracep->declBus(c+867,"ysyx_22050243_top exe op_sltu", false,-1, 5,0);
        tracep->declBus(c+868,"ysyx_22050243_top exe op_and", false,-1, 5,0);
        tracep->declBus(c+869,"ysyx_22050243_top exe op_div", false,-1, 5,0);
        tracep->declBus(c+870,"ysyx_22050243_top exe op_divu", false,-1, 5,0);
        tracep->declBus(c+871,"ysyx_22050243_top exe op_remu", false,-1, 5,0);
        tracep->declBus(c+872,"ysyx_22050243_top exe op_rem", false,-1, 5,0);
        tracep->declBus(c+873,"ysyx_22050243_top exe op_subw", false,-1, 5,0);
        tracep->declBus(c+874,"ysyx_22050243_top exe op_mulw", false,-1, 5,0);
        tracep->declBus(c+875,"ysyx_22050243_top exe op_sllw", false,-1, 5,0);
        tracep->declBus(c+876,"ysyx_22050243_top exe op_srl", false,-1, 5,0);
        tracep->declBus(c+877,"ysyx_22050243_top exe op_sra", false,-1, 5,0);
        tracep->declBus(c+878,"ysyx_22050243_top exe op_divw", false,-1, 5,0);
        tracep->declBus(c+879,"ysyx_22050243_top exe op_srlw", false,-1, 5,0);
        tracep->declBus(c+880,"ysyx_22050243_top exe op_sraw", false,-1, 5,0);
        tracep->declBus(c+881,"ysyx_22050243_top exe op_divuw", false,-1, 5,0);
        tracep->declBus(c+882,"ysyx_22050243_top exe op_remw", false,-1, 5,0);
        tracep->declBus(c+883,"ysyx_22050243_top exe op_remuw", false,-1, 5,0);
        tracep->declBus(c+884,"ysyx_22050243_top exe op_mulhu", false,-1, 5,0);
        tracep->declBus(c+885,"ysyx_22050243_top exe op_mulh", false,-1, 5,0);
        tracep->declBus(c+886,"ysyx_22050243_top exe op_mulhsu", false,-1, 5,0);
        tracep->declBus(c+887,"ysyx_22050243_top exe op_addi", false,-1, 4,0);
        tracep->declBus(c+888,"ysyx_22050243_top exe op_andi", false,-1, 4,0);
        tracep->declBus(c+889,"ysyx_22050243_top exe op_ori", false,-1, 4,0);
        tracep->declBus(c+890,"ysyx_22050243_top exe op_xori", false,-1, 4,0);
        tracep->declBus(c+891,"ysyx_22050243_top exe op_sltiu", false,-1, 4,0);
        tracep->declBus(c+892,"ysyx_22050243_top exe op_sri", false,-1, 4,0);
        tracep->declBus(c+893,"ysyx_22050243_top exe op_slli", false,-1, 4,0);
        tracep->declBus(c+894,"ysyx_22050243_top exe op_addiw", false,-1, 4,0);
        tracep->declBus(c+895,"ysyx_22050243_top exe op_slliw", false,-1, 4,0);
        tracep->declBus(c+896,"ysyx_22050243_top exe op_sriw", false,-1, 4,0);
        tracep->declBus(c+897,"ysyx_22050243_top exe op_slti", false,-1, 4,0);
        tracep->declQuad(c+524,"ysyx_22050243_top exe res_sra", false,-1, 63,0);
        tracep->declQuad(c+526,"ysyx_22050243_top exe res_srl", false,-1, 63,0);
        tracep->declQuad(c+528,"ysyx_22050243_top exe res_sll", false,-1, 63,0);
        tracep->declBus(c+827,"ysyx_22050243_top exe TYPE_I", false,-1, 2,0);
        tracep->declBus(c+828,"ysyx_22050243_top exe TYPE_U", false,-1, 2,0);
        tracep->declBus(c+829,"ysyx_22050243_top exe TYPE_S", false,-1, 2,0);
        tracep->declBus(c+830,"ysyx_22050243_top exe TYPE_J", false,-1, 2,0);
        tracep->declBus(c+831,"ysyx_22050243_top exe TYPE_R", false,-1, 2,0);
        tracep->declBus(c+832,"ysyx_22050243_top exe TYPE_B", false,-1, 2,0);
        tracep->declBus(c+833,"ysyx_22050243_top exe TYPE_N", false,-1, 2,0);
        tracep->declBus(c+530,"ysyx_22050243_top exe decode_Rtype in", false,-1, 5,0);
        tracep->declQuad(c+433,"ysyx_22050243_top exe decode_Rtype out", false,-1, 63,0);
        tracep->declBus(c+531,"ysyx_22050243_top exe decode_Itype in", false,-1, 4,0);
        tracep->declBus(c+435,"ysyx_22050243_top exe decode_Itype out", false,-1, 31,0);
        tracep->declBit(c+734,"ysyx_22050243_top exe mul clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top exe mul rst", false,-1);
        tracep->declQuad(c+473,"ysyx_22050243_top exe mul x", false,-1, 63,0);
        tracep->declQuad(c+475,"ysyx_22050243_top exe mul y", false,-1, 63,0);
        tracep->declBit(c+485,"ysyx_22050243_top exe mul xs", false,-1);
        tracep->declBit(c+486,"ysyx_22050243_top exe mul ys", false,-1);
        tracep->declQuad(c+487,"ysyx_22050243_top exe mul high", false,-1, 63,0);
        tracep->declQuad(c+489,"ysyx_22050243_top exe mul low", false,-1, 63,0);
        tracep->declBit(c+481,"ysyx_22050243_top exe mul mul_type", false,-1);
        tracep->declBit(c+522,"ysyx_22050243_top exe mul mul_stuck", false,-1);
        tracep->declBit(c+484,"ysyx_22050243_top exe mul ready", false,-1);
        tracep->declArray(c+532,"ysyx_22050243_top exe mul x_ext", false,-1, 64,0);
        tracep->declArray(c+535,"ysyx_22050243_top exe mul y_ext", false,-1, 66,0);
        tracep->declArray(c+538,"ysyx_22050243_top exe mul res", false,-1, 127,0);
        tracep->declBus(c+542,"ysyx_22050243_top exe mul cnt", false,-1, 4,0);
        tracep->declArray(c+543,"ysyx_22050243_top exe mul multiplier", false,-1, 127,0);
        tracep->declArray(c+547,"ysyx_22050243_top exe mul multiplied", false,-1, 66,0);
        tracep->declBus(c+550,"ysyx_22050243_top exe mul mul_state", false,-1, 1,0);
        tracep->declBus(c+898,"ysyx_22050243_top exe mul IDLE", false,-1, 1,0);
        tracep->declBus(c+899,"ysyx_22050243_top exe mul MUL_ON", false,-1, 1,0);
        tracep->declBus(c+900,"ysyx_22050243_top exe mul MUL_OK", false,-1, 1,0);
        tracep->declArray(c+551,"ysyx_22050243_top exe mul x_comp", false,-1, 127,0);
        tracep->declArray(c+555,"ysyx_22050243_top exe mul z", false,-1, 127,0);
        tracep->declBit(c+734,"ysyx_22050243_top exe div clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top exe div rst", false,-1);
        tracep->declQuad(c+559,"ysyx_22050243_top exe div x", false,-1, 63,0);
        tracep->declQuad(c+561,"ysyx_22050243_top exe div y", false,-1, 63,0);
        tracep->declBit(c+483,"ysyx_22050243_top exe div s", false,-1);
        tracep->declBit(c+482,"ysyx_22050243_top exe div is_div", false,-1);
        tracep->declBit(c+523,"ysyx_22050243_top exe div div_stuck", false,-1);
        tracep->declBit(c+504,"ysyx_22050243_top exe div ready", false,-1);
        tracep->declBus(c+505,"ysyx_22050243_top exe div state", false,-1, 1,0);
        tracep->declQuad(c+506,"ysyx_22050243_top exe div quo", false,-1, 63,0);
        tracep->declQuad(c+508,"ysyx_22050243_top exe div rem", false,-1, 63,0);
        tracep->declBus(c+898,"ysyx_22050243_top exe div IDLE", false,-1, 1,0);
        tracep->declBus(c+899,"ysyx_22050243_top exe div DIV_ON", false,-1, 1,0);
        tracep->declBus(c+900,"ysyx_22050243_top exe div DIV_ZERO", false,-1, 1,0);
        tracep->declBus(c+901,"ysyx_22050243_top exe div DIV_END", false,-1, 1,0);
        tracep->declBus(c+563,"ysyx_22050243_top exe div cnt", false,-1, 6,0);
        tracep->declArray(c+564,"ysyx_22050243_top exe div dividend", false,-1, 128,0);
        tracep->declQuad(c+569,"ysyx_22050243_top exe div divisor", false,-1, 63,0);
        tracep->declArray(c+571,"ysyx_22050243_top exe div subres", false,-1, 64,0);
        tracep->declBit(c+734,"ysyx_22050243_top mem clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top mem rst", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top mem mem_allowin", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top mem wb_allowin", false,-1);
        tracep->declBit(c+67,"ysyx_22050243_top mem ex_to_mem_valid", false,-1);
        tracep->declBit(c+75,"ysyx_22050243_top mem mem_to_wb_valid", false,-1);
        tracep->declArray(c+101,"ysyx_22050243_top mem ex_to_mem_bus", false,-1, 295,0);
        tracep->declBit(c+70,"ysyx_22050243_top mem ex_mmio", false,-1);
        tracep->declArray(c+111,"ysyx_22050243_top mem mem_to_wb_bus", false,-1, 355,0);
        tracep->declQuad(c+77,"ysyx_22050243_top mem mem_alu_output", false,-1, 63,0);
        tracep->declQuad(c+80,"ysyx_22050243_top mem mem_final_rdata", false,-1, 63,0);
        tracep->declBit(c+79,"ysyx_22050243_top mem mem_memread", false,-1);
        tracep->declBit(c+64,"ysyx_22050243_top mem ex_flush", false,-1);
        tracep->declBit(c+66,"ysyx_22050243_top mem ex_ready_go", false,-1);
        tracep->declBus(c+62,"ysyx_22050243_top mem ex_memop", false,-1, 2,0);
        tracep->declBus(c+63,"ysyx_22050243_top mem ex_wmask", false,-1, 7,0);
        tracep->declBit(c+76,"ysyx_22050243_top mem mem_flush", false,-1);
        tracep->declQuad(c+82,"ysyx_22050243_top mem mem_doubly_aligned_data", false,-1, 63,0);
        tracep->declQuad(c+84,"ysyx_22050243_top mem mem_diff_addr", false,-1, 63,0);
        tracep->declQuad(c+86,"ysyx_22050243_top mem mem_diff_data", false,-1, 63,0);
        tracep->declBit(c+74,"ysyx_22050243_top mem mem_ecall", false,-1);
        tracep->declBus(c+88,"ysyx_22050243_top mem mem_pc", false,-1, 31,0);
        tracep->declBus(c+160,"ysyx_22050243_top mem cache_state", false,-1, 2,0);
        tracep->declBit(c+574,"ysyx_22050243_top mem mem_memwrite", false,-1);
        tracep->declBus(c+575,"ysyx_22050243_top mem mem_memop", false,-1, 2,0);
        tracep->declQuad(c+576,"ysyx_22050243_top mem mem_reg_wdata", false,-1, 63,0);
        tracep->declBit(c+578,"ysyx_22050243_top mem mem_mret", false,-1);
        tracep->declBit(c+579,"ysyx_22050243_top mem mem_mmio", false,-1);
        tracep->declBit(c+580,"ysyx_22050243_top mem lb", false,-1);
        tracep->declBit(c+581,"ysyx_22050243_top mem lh", false,-1);
        tracep->declBit(c+582,"ysyx_22050243_top mem lw", false,-1);
        tracep->declBit(c+583,"ysyx_22050243_top mem ld", false,-1);
        tracep->declBit(c+584,"ysyx_22050243_top mem lbu", false,-1);
        tracep->declBit(c+585,"ysyx_22050243_top mem lhu", false,-1);
        tracep->declBit(c+586,"ysyx_22050243_top mem lwu", false,-1);
        tracep->declBit(c+902,"ysyx_22050243_top mem sh", false,-1);
        tracep->declBit(c+903,"ysyx_22050243_top mem sw", false,-1);
        tracep->declBit(c+904,"ysyx_22050243_top mem sd", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top mem mem_ready_go", false,-1);
        tracep->declBit(c+587,"ysyx_22050243_top mem mem_reg_wen", false,-1);
        tracep->declBus(c+588,"ysyx_22050243_top mem mem_rs1", false,-1, 4,0);
        tracep->declQuad(c+589,"ysyx_22050243_top mem mem_alu_input1", false,-1, 63,0);
        tracep->declBus(c+591,"ysyx_22050243_top mem mem_des_csr", false,-1, 11,0);
        tracep->declBus(c+592,"ysyx_22050243_top mem mem_rd", false,-1, 4,0);
        tracep->declBit(c+593,"ysyx_22050243_top mem mem_jalr", false,-1);
        tracep->declQuad(c+594,"ysyx_22050243_top mem mem_wdata_tmp", false,-1, 63,0);
        tracep->declQuad(c+905,"ysyx_22050243_top mem mem_wdata", false,-1, 63,0);
        tracep->declBit(c+75,"ysyx_22050243_top mem mem_valid", false,-1);
        tracep->declBit(c+596,"ysyx_22050243_top mem mem_csrrw", false,-1);
        tracep->declBit(c+597,"ysyx_22050243_top mem mem_csrrs", false,-1);
        tracep->declBit(c+598,"ysyx_22050243_top mem mem_csrrc", false,-1);
        tracep->declBit(c+599,"ysyx_22050243_top mem mem_csrrwi", false,-1);
        tracep->declBit(c+600,"ysyx_22050243_top mem mem_csrrsi", false,-1);
        tracep->declBit(c+601,"ysyx_22050243_top mem mem_csrrci", false,-1);
        tracep->declBit(c+602,"ysyx_22050243_top mem mem_csr_we", false,-1);
        tracep->declBit(c+603,"ysyx_22050243_top mem mem_ebreak", false,-1);
        tracep->declBit(c+604,"ysyx_22050243_top mem mem_timer_int", false,-1);
        tracep->declBus(c+605,"ysyx_22050243_top mem mem_instruction", false,-1, 31,0);
        tracep->declBit(c+606,"ysyx_22050243_top mem ex_lb", false,-1);
        tracep->declBit(c+607,"ysyx_22050243_top mem ex_lh", false,-1);
        tracep->declBit(c+608,"ysyx_22050243_top mem ex_lw", false,-1);
        tracep->declBit(c+609,"ysyx_22050243_top mem ex_ld", false,-1);
        tracep->declBit(c+610,"ysyx_22050243_top mem ex_lbu", false,-1);
        tracep->declBit(c+611,"ysyx_22050243_top mem ex_lhu", false,-1);
        tracep->declBit(c+612,"ysyx_22050243_top mem ex_lwu", false,-1);
        tracep->declBit(c+613,"ysyx_22050243_top mem ex_sh", false,-1);
        tracep->declBit(c+614,"ysyx_22050243_top mem ex_sw", false,-1);
        tracep->declBit(c+615,"ysyx_22050243_top mem ex_sd", false,-1);
        tracep->declArray(c+616,"ysyx_22050243_top mem ex_to_mem_bus_reg", false,-1, 296,0);
        tracep->declQuad(c+626,"ysyx_22050243_top mem rawdata", false,-1, 63,0);
        tracep->declBus(c+628,"ysyx_22050243_top mem ex_addr_lowmask", false,-1, 7,0);
        tracep->declBus(c+629,"ysyx_22050243_top mem mem_addr_lowmask", false,-1, 7,0);
        tracep->declBus(c+907,"ysyx_22050243_top mem ex_size", false,-1, 1,0);
        tracep->declBus(c+630,"ysyx_22050243_top mem decoder_mem in", false,-1, 2,0);
        tracep->declBus(c+628,"ysyx_22050243_top mem decoder_mem out", false,-1, 7,0);
        tracep->declBit(c+734,"ysyx_22050243_top wb clk", false,-1);
        tracep->declBit(c+735,"ysyx_22050243_top wb rst", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top wb wb_allowin", false,-1);
        tracep->declBit(c+75,"ysyx_22050243_top wb mem_to_wb_valid", false,-1);
        tracep->declArray(c+111,"ysyx_22050243_top wb mem_to_wb_bus", false,-1, 355,0);
        tracep->declBus(c+49,"ysyx_22050243_top wb raddr1", false,-1, 4,0);
        tracep->declBus(c+50,"ysyx_22050243_top wb raddr2", false,-1, 4,0);
        tracep->declQuad(c+53,"ysyx_22050243_top wb rdata1", false,-1, 63,0);
        tracep->declQuad(c+55,"ysyx_22050243_top wb rdata2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+631+i*2,"ysyx_22050243_top wb rf", true,(i+0), 63,0);}}
        tracep->declBus(c+153,"ysyx_22050243_top wb wb_rd", false,-1, 4,0);
        tracep->declQuad(c+145,"ysyx_22050243_top wb wb_reg_wdata", false,-1, 63,0);
        tracep->declBit(c+737,"ysyx_22050243_top wb wb_valid", false,-1);
        tracep->declBus(c+738,"ysyx_22050243_top wb wb_pc", false,-1, 31,0);
        tracep->declBit(c+154,"ysyx_22050243_top wb wb_reg_wen", false,-1);
        tracep->declQuad(c+147,"ysyx_22050243_top wb wb_csrwdata", false,-1, 63,0);
        tracep->declQuad(c+149,"ysyx_22050243_top wb wb_csrrdata", false,-1, 63,0);
        tracep->declBit(c+151,"ysyx_22050243_top wb wb_mret", false,-1);
        tracep->declBit(c+152,"ysyx_22050243_top wb wb_csr_we", false,-1);
        tracep->declBit(c+156,"ysyx_22050243_top wb wb_ecall", false,-1);
        tracep->declQuad(c+739,"ysyx_22050243_top wb csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+741,"ysyx_22050243_top wb csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+743,"ysyx_22050243_top wb csr_mstatus", false,-1, 63,0);
        tracep->declQuad(c+745,"ysyx_22050243_top wb csr_mcause", false,-1, 63,0);
        tracep->declQuad(c+747,"ysyx_22050243_top wb csr_mie", false,-1, 63,0);
        tracep->declQuad(c+749,"ysyx_22050243_top wb csr_mip", false,-1, 63,0);
        tracep->declQuad(c+751,"ysyx_22050243_top wb csr_mscratch", false,-1, 63,0);
        tracep->declQuad(c+40,"ysyx_22050243_top wb csr_mhartid", false,-1, 63,0);
        tracep->declBit(c+755,"ysyx_22050243_top wb wb_memwrite", false,-1);
        tracep->declQuad(c+760,"ysyx_22050243_top wb wb_diff_data", false,-1, 63,0);
        tracep->declQuad(c+758,"ysyx_22050243_top wb wb_diff_addr", false,-1, 63,0);
        tracep->declBit(c+157,"ysyx_22050243_top wb wb_timer_int", false,-1);
        tracep->declBit(c+155,"ysyx_22050243_top wb wb_ebreak", false,-1);
        tracep->declBus(c+756,"ysyx_22050243_top wb wb_instruction", false,-1, 31,0);
        tracep->declBit(c+757,"ysyx_22050243_top wb cmt_skip", false,-1);
        tracep->declBit(c+76,"ysyx_22050243_top wb mem_flush", false,-1);
        tracep->declBus(c+908,"ysyx_22050243_top wb MTVEC", false,-1, 11,0);
        tracep->declBus(c+909,"ysyx_22050243_top wb MCAUSE", false,-1, 11,0);
        tracep->declBus(c+910,"ysyx_22050243_top wb MSTATUS", false,-1, 11,0);
        tracep->declBus(c+911,"ysyx_22050243_top wb MEPC", false,-1, 11,0);
        tracep->declBus(c+912,"ysyx_22050243_top wb MIE", false,-1, 11,0);
        tracep->declBus(c+913,"ysyx_22050243_top wb MIP", false,-1, 11,0);
        tracep->declBus(c+914,"ysyx_22050243_top wb MSCRATCH", false,-1, 11,0);
        tracep->declBus(c+915,"ysyx_22050243_top wb MHARTID", false,-1, 11,0);
        tracep->declBus(c+916,"ysyx_22050243_top wb MCYCLE", false,-1, 11,0);
        tracep->declQuad(c+695,"ysyx_22050243_top wb csr_mcycle", false,-1, 63,0);
        tracep->declBus(c+697,"ysyx_22050243_top wb wb_des_csr", false,-1, 11,0);
        tracep->declQuad(c+698,"ysyx_22050243_top wb wb_reg_wdata_tmp", false,-1, 63,0);
        tracep->declBus(c+700,"ysyx_22050243_top wb mstatus_mpp", false,-1, 1,0);
        tracep->declBit(c+701,"ysyx_22050243_top wb mstatus_mpie", false,-1);
        tracep->declBit(c+702,"ysyx_22050243_top wb mstatus_mie", false,-1);
        tracep->declBit(c+703,"ysyx_22050243_top wb wb_flush", false,-1);
        tracep->declBus(c+704,"ysyx_22050243_top wb wb_rs1", false,-1, 4,0);
        tracep->declBit(c+705,"ysyx_22050243_top wb wb_csrrw", false,-1);
        tracep->declBit(c+706,"ysyx_22050243_top wb wb_csrrs", false,-1);
        tracep->declBit(c+707,"ysyx_22050243_top wb wb_csrrc", false,-1);
        tracep->declBit(c+708,"ysyx_22050243_top wb wb_csrrwi", false,-1);
        tracep->declBit(c+709,"ysyx_22050243_top wb wb_csrrsi", false,-1);
        tracep->declBit(c+710,"ysyx_22050243_top wb wb_csrrci", false,-1);
        tracep->declQuad(c+711,"ysyx_22050243_top wb wb_alu_input1", false,-1, 63,0);
        tracep->declBit(c+713,"ysyx_22050243_top wb wb_rmcycle", false,-1);
        tracep->declBit(c+714,"ysyx_22050243_top wb wb_skip", false,-1);
        tracep->declBit(c+715,"ysyx_22050243_top wb wb_mmio", false,-1);
        tracep->declArray(c+716,"ysyx_22050243_top wb mem_to_wb_bus_reg", false,-1, 355,0);
        tracep->declBit(c+728,"ysyx_22050243_top wb non_zerow", false,-1);
        tracep->declBit(c+822,"ysyx_22050243_top wb wb_ready_go", false,-1);
    }
}

void Vysyx_22050243_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22050243_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22050243_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22050243_top___024root__traceRegister(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22050243_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22050243_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22050243_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22050243_top___024root__traceFullSub0(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22050243_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22050243_top___024root* const __restrict vlSelf = static_cast<Vysyx_22050243_top___024root*>(voidSelf);
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22050243_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22050243_top___024root__traceFullSub0(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp233;
    VlWide<7>/*223:0*/ __Vtemp244;
    VlWide<10>/*319:0*/ __Vtemp245;
    VlWide<3>/*95:0*/ __Vtemp247;
    VlWide<4>/*127:0*/ __Vtemp248;
    VlWide<4>/*127:0*/ __Vtemp249;
    VlWide<4>/*127:0*/ __Vtemp250;
    VlWide<4>/*127:0*/ __Vtemp254;
    VlWide<4>/*127:0*/ __Vtemp255;
    VlWide<4>/*127:0*/ __Vtemp256;
    VlWide<4>/*127:0*/ __Vtemp268;
    VlWide<4>/*127:0*/ __Vtemp270;
    VlWide<4>/*127:0*/ __Vtemp271;
    VlWide<4>/*127:0*/ __Vtemp275;
    VlWide<5>/*159:0*/ __Vtemp276;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[0]),10);
        tracep->fullSData(oldp+2,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[1]),10);
        tracep->fullSData(oldp+3,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[2]),10);
        tracep->fullSData(oldp+4,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[3]),10);
        tracep->fullSData(oldp+5,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[4]),10);
        tracep->fullSData(oldp+6,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[5]),10);
        tracep->fullSData(oldp+7,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[6]),10);
        tracep->fullSData(oldp+8,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[7]),10);
        tracep->fullSData(oldp+9,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[8]),10);
        tracep->fullSData(oldp+10,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[9]),10);
        tracep->fullSData(oldp+11,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[10]),10);
        tracep->fullSData(oldp+12,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[11]),10);
        tracep->fullSData(oldp+13,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list[12]),10);
        tracep->fullCData(oldp+14,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[0]),7);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[1]),7);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[2]),7);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[3]),7);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[4]),7);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[5]),7);
        tracep->fullCData(oldp+20,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[6]),7);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[7]),7);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[8]),7);
        tracep->fullCData(oldp+23,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[9]),7);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[10]),7);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[11]),7);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list[12]),7);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[0]),3);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[1]),3);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[2]),3);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[3]),3);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[4]),3);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[5]),3);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[6]),3);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[7]),3);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[8]),3);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[9]),3);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[10]),3);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[11]),3);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list[12]),3);
        tracep->fullQData(oldp+40,(vlSelf->ysyx_22050243_top__DOT__mhartid),64);
        tracep->fullBit(oldp+42,(vlSelf->ysyx_22050243_top__DOT__if_valid));
        tracep->fullIData(oldp+43,(vlSelf->ysyx_22050243_top__DOT__if_instruction),32);
        tracep->fullBit(oldp+44,((0x7bU == (0x7fU & vlSelf->ysyx_22050243_top__DOT__if_instruction))));
        tracep->fullBit(oldp+45,((1U & ((vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xdU) | 
                                        (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xcU)))));
        tracep->fullBit(oldp+46,(vlSelf->ysyx_22050243_top__DOT__if_allowin));
        tracep->fullIData(oldp+47,(vlSelf->ysyx_22050243_top__DOT__id_branch_result),32);
        tracep->fullBit(oldp+48,(vlSelf->ysyx_22050243_top__DOT__id_branch_taken));
        tracep->fullCData(oldp+49,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x2fU)))),5);
        tracep->fullCData(oldp+50,((0x1fU & (IData)(
                                                    (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x34U)))),5);
        tracep->fullBit(oldp+51,(vlSelf->ysyx_22050243_top__DOT__id_flush));
        tracep->fullBit(oldp+52,(vlSelf->ysyx_22050243_top__DOT__id_allowin));
        tracep->fullQData(oldp+53,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf
                                   [(0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x2fU)))]),64);
        tracep->fullQData(oldp+55,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf
                                   [(0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x34U)))]),64);
        tracep->fullBit(oldp+57,(vlSelf->ysyx_22050243_top__DOT__id_to_ex_valid));
        tracep->fullBit(oldp+58,(vlSelf->ysyx_22050243_top__DOT__id_ecall));
        tracep->fullBit(oldp+59,(vlSelf->ysyx_22050243_top__DOT__id_mret));
        tracep->fullBit(oldp+60,(vlSelf->ysyx_22050243_top__DOT__load_branch));
        tracep->fullIData(oldp+61,(((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                     << 1U) | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                               >> 0x1fU))),32);
        tracep->fullCData(oldp+62,((7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                          >> 8U))),3);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22050243_top__DOT__ex_wmask),8);
        tracep->fullBit(oldp+64,(vlSelf->ysyx_22050243_top__DOT__ex_flush));
        tracep->fullBit(oldp+65,(vlSelf->ysyx_22050243_top__DOT__ex_allowin));
        tracep->fullBit(oldp+66,(vlSelf->ysyx_22050243_top__DOT__ex_ready_go));
        tracep->fullBit(oldp+67,(vlSelf->ysyx_22050243_top__DOT__ex_to_mem_valid));
        tracep->fullBit(oldp+68,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 5U))));
        tracep->fullBit(oldp+69,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                        >> 6U))));
        tracep->fullBit(oldp+70,(vlSelf->ysyx_22050243_top__DOT__ex_mmio));
        tracep->fullBit(oldp+71,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                        >> 0x15U))));
        tracep->fullBit(oldp+72,(vlSelf->ysyx_22050243_top__DOT__ecallmret_on));
        tracep->fullBit(oldp+73,((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dcache_state)) 
                                   & (((IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit) 
                                       | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit)) 
                                      | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok))) 
                                  | ((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__dcache_state)) 
                                     & (((~ (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw)) 
                                         & ((IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit) 
                                            | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit))) 
                                        | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok))))));
        tracep->fullBit(oldp+74,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                        >> 0x12U))));
        tracep->fullBit(oldp+75,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__mem_valid));
        tracep->fullBit(oldp+76,(vlSelf->ysyx_22050243_top__DOT__mem_flush));
        tracep->fullQData(oldp+77,((((QData)((IData)(
                                                     vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U])))),64);
        tracep->fullBit(oldp+79,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                        >> 5U))));
        tracep->fullQData(oldp+80,(vlSelf->ysyx_22050243_top__DOT__mem_final_rdata),64);
        tracep->fullQData(oldp+82,(vlSelf->ysyx_22050243_top__DOT__mem_doubly_aligned_data),64);
        tracep->fullQData(oldp+84,(vlSelf->ysyx_22050243_top__DOT__mem_diff_addr),64);
        tracep->fullQData(oldp+86,(vlSelf->ysyx_22050243_top__DOT__mem_diff_data),64);
        tracep->fullIData(oldp+88,(((vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                     << 0x15U) | (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                                  >> 0xbU))),32);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22050243_top__DOT__if_to_id_bus),64);
        __Vtemp233[0U] = (IData)((((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_timer_int_reg)) 
                                   << 0x3eU) | (((QData)((IData)(
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
                                                                                >> 0x2cU)))))))))))))))))))));
        __Vtemp233[1U] = (((IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                    >> 0x20U)) << 0x1fU) 
                          | (IData)(((((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_timer_int_reg)) 
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
                                                                                >> 0x2cU)))))))))))))))))))) 
                                     >> 0x20U)));
        __Vtemp244[6U] = ((0x200000U & ((((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))) 
                                            | (1U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                           | (3U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                          | (4U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                         | (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
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
        __Vtemp245[0U] = (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final);
        __Vtemp245[1U] = (IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final 
                                  >> 0x20U));
        __Vtemp245[2U] = (IData)((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                   | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))
                                   ? vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm
                                   : vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final));
        __Vtemp245[3U] = (IData)(((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                    | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))
                                    ? vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm
                                    : vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final) 
                                  >> 0x20U));
        __Vtemp245[4U] = (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_alu_input1);
        __Vtemp245[5U] = (IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_alu_input1 
                                  >> 0x20U));
        __Vtemp245[6U] = ((__Vtemp233[0U] << 0x16U) 
                          | __Vtemp244[6U]);
        __Vtemp245[7U] = ((__Vtemp233[0U] >> 0xaU) 
                          | (__Vtemp233[1U] << 0x16U));
        __Vtemp245[8U] = ((__Vtemp233[1U] >> 0xaU) 
                          | (0xffc00000U & ((IData)(
                                                    (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                     >> 0x20U)) 
                                            << 0x15U)));
        __Vtemp245[9U] = ((0x200000U & ((((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1ffffU 
                                                       & (IData)(
                                                                 (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                  >> 0x2fU)))))) 
                                          & (0x20U 
                                             == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x27U))))) 
                                         & (0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                        << 0x15U)) 
                          | ((IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                      >> 0x20U)) >> 0xbU));
        tracep->fullWData(oldp+91,(__Vtemp245),310);
        tracep->fullWData(oldp+101,(vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus),296);
        tracep->fullWData(oldp+111,(vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus),356);
        tracep->fullQData(oldp+123,(vlSelf->ysyx_22050243_top__DOT__d_req_addr),64);
        tracep->fullCData(oldp+125,(vlSelf->ysyx_22050243_top__DOT__d_req_strb),8);
        tracep->fullWData(oldp+126,(vlSelf->ysyx_22050243_top__DOT__d_req_data),128);
        tracep->fullBit(oldp+130,(vlSelf->ysyx_22050243_top__DOT__d_req_wen));
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22050243_top__DOT__d_req_valid));
        tracep->fullBit(oldp+132,(vlSelf->ysyx_22050243_top__DOT__d_res_valid));
        tracep->fullWData(oldp+133,(vlSelf->ysyx_22050243_top__DOT__d_mrdata),128);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22050243_top__DOT__i_req_addr),64);
        tracep->fullBit(oldp+139,(vlSelf->ysyx_22050243_top__DOT__i_req_valid));
        tracep->fullBit(oldp+140,((5U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state))));
        tracep->fullWData(oldp+141,(vlSelf->ysyx_22050243_top__DOT__i_mrdata),128);
        tracep->fullQData(oldp+145,(vlSelf->ysyx_22050243_top__DOT__wb_reg_wdata),64);
        tracep->fullQData(oldp+147,(vlSelf->ysyx_22050243_top__DOT__wb_csrwdata),64);
        tracep->fullQData(oldp+149,(vlSelf->ysyx_22050243_top__DOT__wb_csrrdata),64);
        tracep->fullBit(oldp+151,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+152,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xeU))));
        tracep->fullCData(oldp+153,((0x1fU & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])),5);
        tracep->fullBit(oldp+154,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+155,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                         >> 1U))));
        tracep->fullBit(oldp+156,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+157,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                         >> 2U))));
        tracep->fullBit(oldp+158,(vlSelf->ysyx_22050243_top__DOT__ecall_stuck));
        tracep->fullBit(oldp+159,(vlSelf->ysyx_22050243_top__DOT__mret_stuck));
        tracep->fullCData(oldp+160,(vlSelf->ysyx_22050243_top__DOT__dcache_state),3);
        tracep->fullCData(oldp+161,(vlSelf->ysyx_22050243_top__DOT__icache_state),3);
        tracep->fullIData(oldp+162,(vlSelf->ysyx_22050243_top__DOT__next_pc),32);
        tracep->fullBit(oldp+163,(((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__icache_state)) 
                                   & ((IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0hit) 
                                      | (IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1hit)))));
        tracep->fullBit(oldp+164,(vlSelf->ysyx_22050243_top__DOT__icache_valid));
        tracep->fullBit(oldp+165,(vlSelf->ysyx_22050243_top__DOT__preif_valid));
        tracep->fullBit(oldp+166,(vlSelf->ysyx_22050243_top__DOT__preif_ready_go_reg));
        tracep->fullBit(oldp+167,(vlSelf->ysyx_22050243_top__DOT__preif_ready_go));
        tracep->fullBit(oldp+168,(vlSelf->ysyx_22050243_top__DOT__preif_allowin));
        tracep->fullQData(oldp+169,(vlSelf->ysyx_22050243_top__DOT__icache_data),64);
        tracep->fullBit(oldp+171,(vlSelf->ysyx_22050243_top__DOT__timer_blocked));
        tracep->fullBit(oldp+172,(vlSelf->ysyx_22050243_top__DOT__if_timer_blocked));
        tracep->fullBit(oldp+173,(vlSelf->ysyx_22050243_top__DOT__if_timer_int_tmp));
        tracep->fullBit(oldp+174,(vlSelf->ysyx_22050243_top__DOT__on_hold));
        tracep->fullIData(oldp+175,(vlSelf->ysyx_22050243_top__DOT__next_pc_reg),32);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22050243_top__DOT__rf[0]),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22050243_top__DOT__rf[1]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22050243_top__DOT__rf[2]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22050243_top__DOT__rf[3]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22050243_top__DOT__rf[4]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22050243_top__DOT__rf[5]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22050243_top__DOT__rf[6]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22050243_top__DOT__rf[7]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22050243_top__DOT__rf[8]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22050243_top__DOT__rf[9]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22050243_top__DOT__rf[10]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22050243_top__DOT__rf[11]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22050243_top__DOT__rf[12]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22050243_top__DOT__rf[13]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22050243_top__DOT__rf[14]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22050243_top__DOT__rf[15]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22050243_top__DOT__rf[16]),64);
        tracep->fullQData(oldp+210,(vlSelf->ysyx_22050243_top__DOT__rf[17]),64);
        tracep->fullQData(oldp+212,(vlSelf->ysyx_22050243_top__DOT__rf[18]),64);
        tracep->fullQData(oldp+214,(vlSelf->ysyx_22050243_top__DOT__rf[19]),64);
        tracep->fullQData(oldp+216,(vlSelf->ysyx_22050243_top__DOT__rf[20]),64);
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22050243_top__DOT__rf[21]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22050243_top__DOT__rf[22]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22050243_top__DOT__rf[23]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22050243_top__DOT__rf[24]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22050243_top__DOT__rf[25]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22050243_top__DOT__rf[26]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22050243_top__DOT__rf[27]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22050243_top__DOT__rf[28]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22050243_top__DOT__rf[29]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22050243_top__DOT__rf[30]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22050243_top__DOT__rf[31]),64);
        tracep->fullIData(oldp+240,(vlSelf->ysyx_22050243_top__DOT__if_instruction_reg),32);
        tracep->fullBit(oldp+241,(vlSelf->ysyx_22050243_top__DOT__if_instruction_blocked));
        tracep->fullBit(oldp+242,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_valid));
        tracep->fullBit(oldp+243,(((IData)(vlSelf->ysyx_22050243_top__DOT__i_req_valid) 
                                   | (IData)(vlSelf->ysyx_22050243_top__DOT__d_req_valid))));
        tracep->fullBit(oldp+244,(((IData)(vlSelf->ysyx_22050243_top__DOT__d_req_valid) 
                                   & (~ (IData)(vlSelf->ysyx_22050243_top__DOT__d_req_wen)))));
        tracep->fullBit(oldp+245,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__mmio_rdone));
        tracep->fullBit(oldp+246,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__mmio_wdone));
        tracep->fullBit(oldp+247,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__is_mmio));
        tracep->fullQData(oldp+248,(((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state))
                                      ? (0xfffffffffffffff0ULL 
                                         & vlSelf->ysyx_22050243_top__DOT__i_req_addr)
                                      : ((3U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state))
                                          ? ((IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__is_mmio)
                                              ? vlSelf->ysyx_22050243_top__DOT__d_req_addr
                                              : (0xfffffffffffffff0ULL 
                                                 & vlSelf->ysyx_22050243_top__DOT__d_req_addr))
                                          : 0ULL))),64);
        tracep->fullCData(oldp+250,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state),3);
        tracep->fullCData(oldp+251,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state),3);
        tracep->fullBit(oldp+252,((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state))));
        tracep->fullBit(oldp+253,(((2U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state)) 
                                   | (5U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_state)))));
        tracep->fullBit(oldp+254,(((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)) 
                                   | (3U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)))));
        tracep->fullBit(oldp+255,(((2U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)) 
                                   | (4U == (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_state)))));
        tracep->fullQData(oldp+256,((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc))),64);
        tracep->fullCData(oldp+258,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__input_offset_reg),4);
        tracep->fullBit(oldp+259,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0hit_reg));
        tracep->fullBit(oldp+260,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1hit_reg));
        tracep->fullIData(oldp+261,((0x1fffffU & (IData)(
                                                         ((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc)) 
                                                          >> 0xbU)))),21);
        tracep->fullCData(oldp+262,((0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc)) 
                                                      >> 4U)))),7);
        tracep->fullCData(oldp+263,((0xfU & (IData)((QData)((IData)(vlSelf->ysyx_22050243_top__DOT__next_pc))))),4);
        tracep->fullBit(oldp+264,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_wen_way0));
        tracep->fullBit(oldp+265,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_wen_way1));
        tracep->fullWData(oldp+266,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_strb),128);
        tracep->fullWData(oldp+270,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_wdata),128);
        tracep->fullWData(oldp+274,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way0),128);
        tracep->fullWData(oldp+278,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way1),128);
        tracep->fullBit(oldp+282,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0hit));
        tracep->fullBit(oldp+283,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1hit));
        tracep->fullBit(oldp+284,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way0valid));
        tracep->fullBit(oldp+285,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_way1valid));
        tracep->fullQData(oldp+286,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__input_offset_reg))
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
        tracep->fullQData(oldp+288,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__icache__DOT__input_offset_reg))
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
        tracep->fullBit(oldp+290,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cnt));
        tracep->fullIData(oldp+291,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__unnamedblk1__DOT__i),32);
        tracep->fullQData(oldp+292,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U])))),64);
        tracep->fullQData(oldp+294,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[0U])))),64);
        tracep->fullBit(oldp+296,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                         >> 6U))));
        tracep->fullBit(oldp+297,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                         >> 5U))));
        tracep->fullBit(oldp+298,(vlSelf->ysyx_22050243_top__DOT____Vcellinp__dcache__input_valid));
        tracep->fullCData(oldp+299,((3U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                           >> 8U))),2);
        tracep->fullCData(oldp+300,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_size_reg),2);
        tracep->fullCData(oldp+301,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_offset_reg),4);
        tracep->fullBit(oldp+302,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit_reg));
        tracep->fullBit(oldp+303,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit_reg));
        tracep->fullBit(oldp+304,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mmio_ok));
        tracep->fullIData(oldp+305,((vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U] 
                                     >> 0xbU)),21);
        tracep->fullCData(oldp+306,((0x7fU & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U] 
                                              >> 4U))),7);
        tracep->fullCData(oldp+307,((0xfU & vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U])),4);
        tracep->fullCData(oldp+308,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_index_reg),7);
        tracep->fullCData(oldp+309,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_offset_reg),4);
        tracep->fullWData(oldp+310,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_strb),128);
        tracep->fullBit(oldp+314,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way0));
        tracep->fullBit(oldp+315,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way1));
        tracep->fullWData(oldp+316,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wdata),128);
        tracep->fullBit(oldp+320,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_miss));
        tracep->fullCData(oldp+321,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_cnt),7);
        tracep->fullBit(oldp+322,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok));
        tracep->fullBit(oldp+323,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way0_reg));
        tracep->fullBit(oldp+324,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way1_reg));
        tracep->fullQData(oldp+325,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__ex_cache_strb),64);
        tracep->fullWData(oldp+327,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way0),128);
        tracep->fullWData(oldp+331,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way1),128);
        tracep->fullBit(oldp+335,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit));
        tracep->fullBit(oldp+336,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit));
        tracep->fullBit(oldp+337,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0dirty));
        tracep->fullBit(oldp+338,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1dirty));
        tracep->fullBit(oldp+339,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0valid));
        tracep->fullBit(oldp+340,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1valid));
        tracep->fullQData(oldp+341,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_offset_reg))
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
        tracep->fullQData(oldp+343,(((8U & (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__input_offset_reg))
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
        tracep->fullQData(oldp+345,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__ex_cache_wdata),64);
        tracep->fullBit(oldp+347,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw_way0));
        tracep->fullBit(oldp+348,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw_way1));
        tracep->fullBit(oldp+349,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_raw));
        tracep->fullBit(oldp+350,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mmio_mem));
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mmio_rdata_reg),64);
        tracep->fullBit(oldp+353,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0fencev));
        tracep->fullBit(oldp+354,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way0fenced));
        tracep->fullBit(oldp+355,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1fencev));
        tracep->fullBit(oldp+356,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_way1fenced));
        tracep->fullBit(oldp+357,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cnt));
        tracep->fullIData(oldp+358,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+359,((1U & (((vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                           >> 5U) | (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__cache_miss)) 
                                         | ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                             >> 0x15U) 
                                            & (~ (IData)(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__fencei_ok)))))));
        tracep->fullCData(oldp+360,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT____Vcellinp__Dcache_way1__A),7);
        tracep->fullCData(oldp+361,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT____Vcellinp__Dcache_way2__A),7);
        tracep->fullCData(oldp+362,((0x1fU & vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U])),5);
        tracep->fullCData(oldp+363,((0x1fU & vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[2U])),5);
        tracep->fullBit(oldp+364,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                         >> 7U))));
        tracep->fullBit(oldp+365,((1U & (vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+366,((1U & (vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[3U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+367,((1U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[5U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+368,((1U & (vlSelf->ysyx_22050243_top__DOT__mem_to_wb_bus[3U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+369,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                >> 0x2cU)))))))));
        tracep->fullBit(oldp+370,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                                 >> 0x2dU)))))) 
                                         & (IData)(
                                                   (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                    >> 0x2cU))))));
        tracep->fullBit(oldp+371,((4U == (7U & (IData)(
                                                       (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x2cU))))));
        tracep->fullBit(oldp+372,((6U == (7U & (IData)(
                                                       (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x2cU))))));
        tracep->fullBit(oldp+373,((5U == (7U & (IData)(
                                                       (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x2cU))))));
        tracep->fullBit(oldp+374,((7U == (7U & (IData)(
                                                       (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x2cU))))));
        tracep->fullBit(oldp+375,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__btype_taken));
        tracep->fullBit(oldp+376,(((1U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                   | (3U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullBit(oldp+377,(((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                   | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullCData(oldp+378,(((0x20U & ((IData)(
                                                       (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                        >> 0x3eU)) 
                                               << 5U)) 
                                     | ((0x10U & ((IData)(
                                                          (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x39U)) 
                                                  << 4U)) 
                                        | (0xfU & (IData)(
                                                          (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                           >> 0x23U)))))),6);
        tracep->fullCData(oldp+379,((7U & (IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                   >> 0x2cU)))),3);
        tracep->fullCData(oldp+380,((0x1fU & (IData)(
                                                     (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x27U)))),5);
        tracep->fullBit(oldp+381,((1U & (((((~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))) 
                                            | (1U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                           | (3U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                          | (4U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))) 
                                         | (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))))));
        tracep->fullBit(oldp+382,((2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type))));
        tracep->fullBit(oldp+383,((IData)((0x300000000ULL 
                                           == (0x7f00000000ULL 
                                               & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))));
        tracep->fullCData(oldp+384,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type),3);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm),64);
        tracep->fullBit(oldp+387,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_jalr));
        tracep->fullQData(oldp+388,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_alu_input1),64);
        tracep->fullQData(oldp+390,((((0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)) 
                                      | (2U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))
                                      ? vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_imm
                                      : vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final)),64);
        tracep->fullQData(oldp+392,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata1_final),64);
        tracep->fullQData(oldp+394,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final),64);
        tracep->fullBit(oldp+396,(((IData)((0x10007300000000ULL 
                                            == (0x10007f00000000ULL 
                                                & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg))) 
                                   & (~ (IData)((0ULL 
                                                 != 
                                                 (0xffefff8000000000ULL 
                                                  & vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))))));
        tracep->fullBit(oldp+397,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__exid_raw_hazard1));
        tracep->fullBit(oldp+398,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__exid_raw_hazard2));
        tracep->fullBit(oldp+399,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__memid_raw_hazard1));
        tracep->fullBit(oldp+400,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__memid_raw_hazard2));
        tracep->fullBit(oldp+401,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__load_use_hazard1));
        tracep->fullBit(oldp+402,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__load_use_hazard2));
        tracep->fullBit(oldp+403,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard1_tmp));
        tracep->fullBit(oldp+404,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard2_tmp));
        tracep->fullBit(oldp+405,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard1));
        tracep->fullBit(oldp+406,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard2));
        tracep->fullBit(oldp+407,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__wb_load_use_hazard1_tmp));
        tracep->fullBit(oldp+408,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__wb_load_use_hazard2_tmp));
        tracep->fullBit(oldp+409,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_ready_go));
        tracep->fullBit(oldp+410,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_valid));
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg),64);
        tracep->fullIData(oldp+413,((IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)),32);
        tracep->fullIData(oldp+414,((IData)((vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                             >> 0x20U))),32);
        tracep->fullBit(oldp+415,(((1U == (7U & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x2cU)))) 
                                   & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullBit(oldp+416,(((2U == (7U & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x2cU)))) 
                                   & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullBit(oldp+417,(((3U == (7U & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x2cU)))) 
                                   & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullBit(oldp+418,(((5U == (7U & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x2cU)))) 
                                   & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullBit(oldp+419,(((6U == (7U & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x2cU)))) 
                                   & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullBit(oldp+420,(((7U == (7U & (IData)(
                                                        (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                         >> 0x2cU)))) 
                                   & (6U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullBit(oldp+421,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_timer_int_reg));
        tracep->fullBit(oldp+422,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_jalr_stuck));
        tracep->fullBit(oldp+423,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_jalr_stuck_reg));
        tracep->fullIData(oldp+424,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__stuck_jalr_result),32);
        tracep->fullBit(oldp+425,((((~ (IData)((0U 
                                                != 
                                                (0x1ffffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x2fU)))))) 
                                    & (0x20U == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                            >> 0x27U))))) 
                                   & (0U == (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__id_inst_type)))));
        tracep->fullCData(oldp+426,((0x7fU & (IData)(
                                                     (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                      >> 0x20U)))),7);
        tracep->fullCData(oldp+427,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out),3);
        tracep->fullBit(oldp+428,(vlSelf->ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+429,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__rtype_calc_result),64);
        tracep->fullQData(oldp+431,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__itype_calc_result),64);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__rtype_alu_op),64);
        tracep->fullIData(oldp+435,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__itype_alu_op),32);
        tracep->fullIData(oldp+436,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__addw_result),32);
        tracep->fullIData(oldp+437,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__subw_result),32);
        tracep->fullIData(oldp+438,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U]),32);
        tracep->fullIData(oldp+439,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U]),32);
        tracep->fullIData(oldp+440,(((vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                      << 0x1fU) | (
                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                   >> 1U))),32);
        tracep->fullQData(oldp+441,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_addw_result),64);
        tracep->fullQData(oldp+443,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22050243_top__DOT__exe__DOT__subw_result 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->ysyx_22050243_top__DOT__exe__DOT__subw_result)))),64);
        tracep->fullQData(oldp+445,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U] 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
        tracep->fullQData(oldp+447,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U] 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
        tracep->fullQData(oldp+449,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U]))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U] 
                                                                    << 0x1fU) 
                                                                   | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[2U] 
                                                                      >> 1U)))))),64);
        tracep->fullIData(oldp+451,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__src1_sllw),32);
        tracep->fullIData(oldp+452,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__src1_srlw),32);
        tracep->fullCData(oldp+453,((0x3fU & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])),6);
        tracep->fullQData(oldp+454,((~ (0xffffffffffffffffULL 
                                        >> (0x3fU & 
                                            vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
        tracep->fullQData(oldp+456,((0xffffffff00000000ULL 
                                     | (QData)((IData)(
                                                       (~ 
                                                        (0xffffffffU 
                                                         >> 
                                                         (0x1fU 
                                                          & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))))))),64);
        tracep->fullQData(oldp+458,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_src1_sraw),64);
        tracep->fullQData(oldp+460,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_src1_sllw),64);
        tracep->fullQData(oldp+462,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__sext_src1_srlw),64);
        tracep->fullQData(oldp+464,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[0U])))),64);
        tracep->fullCData(oldp+466,((0x3fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 0x19U))),6);
        tracep->fullCData(oldp+467,((7U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 0x16U))),3);
        tracep->fullBit(oldp+468,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+469,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+470,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 0xeU))),5);
        tracep->fullCData(oldp+471,((7U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                           >> 1U))),3);
        tracep->fullBit(oldp+472,((1U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])));
        tracep->fullQData(oldp+473,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[4U])))),64);
        tracep->fullQData(oldp+475,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))),64);
        tracep->fullCData(oldp+477,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 9U))),5);
        tracep->fullCData(oldp+478,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 4U))),5);
        tracep->fullBit(oldp+479,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                         >> 0x15U))));
        tracep->fullIData(oldp+480,(((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[9U] 
                                      << 0xbU) | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                                  >> 0x15U))),32);
        tracep->fullBit(oldp+481,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul_type));
        tracep->fullBit(oldp+482,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_type));
        tracep->fullBit(oldp+483,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_sign));
        tracep->fullBit(oldp+484,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul_ok));
        tracep->fullBit(oldp+485,((1U & (~ ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                             >> 0x16U) 
                                            & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                               >> 0x17U))))));
        tracep->fullBit(oldp+486,((1U & (~ (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                            >> 0x17U)))));
        tracep->fullQData(oldp+487,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[2U])))),64);
        tracep->fullQData(oldp+489,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res[0U])))),64);
        tracep->fullBit(oldp+491,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__ex_valid));
        tracep->fullWData(oldp+492,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg),310);
        tracep->fullQData(oldp+502,(((8U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                      ? ((4U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                          ? 0ULL : 
                                         ((2U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                           ? 0ULL : vlSelf->ysyx_22050243_top__DOT__exe__DOT__rtype_calc_result))
                                      : ((4U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                          ? ((2U & 
                                              vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                              ? (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + 
                                                                 ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                   << 1U) 
                                                                  | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                     >> 0x1fU)))))
                                              : ((((QData)((IData)(
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
                                          : ((2U & 
                                              vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                              ? ((0x8000000U 
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
                                              : ((1U 
                                                  & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                                                  ? (QData)((IData)(
                                                                    ((IData)(4U) 
                                                                     + 
                                                                     ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                                                       << 1U) 
                                                                      | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                                                         >> 0x1fU)))))
                                                  : vlSelf->ysyx_22050243_top__DOT__exe__DOT__itype_calc_result))))),64);
        tracep->fullBit(oldp+504,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_ready));
        tracep->fullCData(oldp+505,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_state),2);
        tracep->fullQData(oldp+506,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[0U])))),64);
        tracep->fullQData(oldp+508,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[4U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[3U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend[2U])) 
                                                      >> 1U)))),64);
        tracep->fullBit(oldp+510,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 4U))));
        tracep->fullBit(oldp+511,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 3U))));
        tracep->fullBit(oldp+512,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 2U))));
        tracep->fullBit(oldp+513,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 1U))));
        tracep->fullBit(oldp+514,((1U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U])));
        tracep->fullBit(oldp+515,((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[7U] 
                                   >> 0x1fU)));
        tracep->fullBit(oldp+516,((1U & ((((((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
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
        tracep->fullSData(oldp+517,((0xfffU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                               >> 7U))),12);
        tracep->fullBit(oldp+518,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+519,((1U & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+520,((1U & (((vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 5U) | 
                                          (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                           >> 6U)) 
                                         | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[8U] 
                                            >> 0x14U)))));
        tracep->fullBit(oldp+521,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__cache_readygo));
        tracep->fullBit(oldp+522,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul_stuck));
        tracep->fullBit(oldp+523,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div_stuck));
        tracep->fullQData(oldp+524,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__res_sra),64);
        tracep->fullQData(oldp+526,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__res_srl),64);
        tracep->fullQData(oldp+528,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__res_sll),64);
        tracep->fullCData(oldp+530,(vlSelf->ysyx_22050243_top__DOT__exe__DOT____Vcellinp__decode_Rtype__in),6);
        tracep->fullCData(oldp+531,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U] 
                                              >> 0x16U))),5);
        tracep->fullWData(oldp+532,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__x_ext),65);
        __Vtemp247[0U] = ((IData)((((QData)((IData)(
                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
                          << 1U);
        __Vtemp247[1U] = (((IData)((((QData)((IData)(
                                                     vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U])))) 
                           >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                                   vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))) 
                                                 >> 0x20U)) 
                                        << 1U));
        __Vtemp247[2U] = ((((0x800000U & vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[6U])
                             ? 0U : (3U & (- (IData)(
                                                     (vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U] 
                                                      >> 0x1fU))))) 
                           << 1U) | ((IData)(((((QData)((IData)(
                                                                vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg[2U]))) 
                                              >> 0x20U)) 
                                     >> 0x1fU));
        tracep->fullWData(oldp+535,(__Vtemp247),67);
        tracep->fullWData(oldp+538,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res),128);
        tracep->fullCData(oldp+542,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__cnt),5);
        tracep->fullWData(oldp+543,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier),128);
        tracep->fullWData(oldp+547,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied),67);
        tracep->fullCData(oldp+550,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__mul_state),2);
        __Vtemp248[0U] = 1U;
        __Vtemp248[1U] = 0U;
        __Vtemp248[2U] = 0U;
        __Vtemp248[3U] = 0U;
        __Vtemp249[0U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp249[1U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp249[2U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp249[3U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp250, __Vtemp248, __Vtemp249);
        tracep->fullWData(oldp+551,(__Vtemp250),128);
        __Vtemp254[0U] = 1U;
        __Vtemp254[1U] = 0U;
        __Vtemp254[2U] = 0U;
        __Vtemp254[3U] = 0U;
        __Vtemp255[0U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp255[1U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp255[2U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp255[3U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp256, __Vtemp254, __Vtemp255);
        __Vtemp268[0U] = 1U;
        __Vtemp268[1U] = 0U;
        __Vtemp268[2U] = 0U;
        __Vtemp268[3U] = 0U;
        __Vtemp270[0U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]);
        __Vtemp270[1U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]);
        __Vtemp270[2U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]);
        __Vtemp270[3U] = (~ vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]);
        VL_ADD_W(4, __Vtemp271, __Vtemp268, __Vtemp270);
        __Vtemp275[0U] = (((((- (IData)(((1U == (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                         | (2U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                             & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U]) 
                            | ((- (IData)(((5U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                           | (6U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                               & __Vtemp256[0U])) | 
                           ((- (IData)((3U == (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                            & (vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                               << 1U))) | ((- (IData)(
                                                      (4U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                                           & (__Vtemp271[0U] 
                                              << 1U)));
        __Vtemp275[1U] = (((((- (IData)(((1U == (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                         | (2U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                             & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U]) 
                            | ((- (IData)(((5U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                           | (6U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                               & __Vtemp256[1U])) | 
                           ((- (IData)((3U == (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                            & ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[0U] 
                                >> 0x1fU) | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                             << 1U)))) 
                          | ((- (IData)((4U == (7U 
                                                & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                             & ((__Vtemp271[0U] >> 0x1fU) 
                                | (__Vtemp271[1U] << 1U))));
        __Vtemp275[2U] = (((((- (IData)(((1U == (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                         | (2U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                             & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U]) 
                            | ((- (IData)(((5U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                           | (6U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                               & __Vtemp256[2U])) | 
                           ((- (IData)((3U == (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                            & ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[1U] 
                                >> 0x1fU) | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                             << 1U)))) 
                          | ((- (IData)((4U == (7U 
                                                & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                             & ((__Vtemp271[1U] >> 0x1fU) 
                                | (__Vtemp271[2U] << 1U))));
        __Vtemp275[3U] = (((((- (IData)(((1U == (7U 
                                                 & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                         | (2U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                             & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U]) 
                            | ((- (IData)(((5U == (7U 
                                                   & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])) 
                                           | (6U == 
                                              (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U]))))) 
                               & __Vtemp256[3U])) | 
                           ((- (IData)((3U == (7U & 
                                               vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                            & ((vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[2U] 
                                >> 0x1fU) | (vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier[3U] 
                                             << 1U)))) 
                          | ((- (IData)((4U == (7U 
                                                & vlSelf->ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied[0U])))) 
                             & ((__Vtemp271[2U] >> 0x1fU) 
                                | (__Vtemp271[3U] << 1U))));
        tracep->fullWData(oldp+555,(__Vtemp275),128);
        tracep->fullQData(oldp+559,(vlSelf->ysyx_22050243_top__DOT__exe__DOT____Vcellinp__div____pinNumber3),64);
        tracep->fullQData(oldp+561,(vlSelf->ysyx_22050243_top__DOT__exe__DOT____Vcellinp__div____pinNumber4),64);
        tracep->fullCData(oldp+563,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__cnt),7);
        tracep->fullWData(oldp+564,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend),129);
        tracep->fullQData(oldp+569,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__divisor),64);
        tracep->fullWData(oldp+571,(vlSelf->ysyx_22050243_top__DOT__exe__DOT__div__DOT__subres),65);
        tracep->fullBit(oldp+574,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                         >> 6U))));
        tracep->fullCData(oldp+575,((7U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                           >> 8U))),3);
        tracep->fullQData(oldp+576,(((0x20U & vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])
                                      ? vlSelf->ysyx_22050243_top__DOT__mem_final_rdata
                                      : (((QData)((IData)(
                                                          vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[2U]))))),64);
        tracep->fullBit(oldp+578,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+579,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                         >> 8U))));
        tracep->fullBit(oldp+580,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lb));
        tracep->fullBit(oldp+581,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lh));
        tracep->fullBit(oldp+582,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lw));
        tracep->fullBit(oldp+583,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__ld));
        tracep->fullBit(oldp+584,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lbu));
        tracep->fullBit(oldp+585,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lhu));
        tracep->fullBit(oldp+586,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__lwu));
        tracep->fullBit(oldp+587,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U] 
                                         >> 7U))));
        tracep->fullCData(oldp+588,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                              >> 0x15U))),5);
        tracep->fullQData(oldp+589,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U])) 
                                      << 0x26U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[6U])) 
                                                    << 6U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U])) 
                                                      >> 0x1aU)))),64);
        tracep->fullSData(oldp+591,((0xfffU & ((vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                                << 6U) 
                                               | (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[7U] 
                                                  >> 0x1aU)))),12);
        tracep->fullCData(oldp+592,((0x1fU & vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[4U])),5);
        tracep->fullBit(oldp+593,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0xbU))));
        tracep->fullQData(oldp+594,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[0U])))),64);
        tracep->fullBit(oldp+596,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0x11U))));
        tracep->fullBit(oldp+597,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+598,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0xfU))));
        tracep->fullBit(oldp+599,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0xeU))));
        tracep->fullBit(oldp+600,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0xdU))));
        tracep->fullBit(oldp+601,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+602,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[5U] 
                                         >> 0x14U))));
        tracep->fullBit(oldp+603,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                         >> 6U))));
        tracep->fullBit(oldp+604,((1U & (vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                         >> 7U))));
        tracep->fullIData(oldp+605,(((vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[9U] 
                                      << 0x17U) | (
                                                   vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg[8U] 
                                                   >> 9U))),32);
        tracep->fullBit(oldp+606,((0U == (7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+607,((1U == (7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+608,((2U == (7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+609,((3U == (7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+610,((4U == (7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+611,((5U == (7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+612,((6U == (7U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+613,((1U == (3U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+614,((2U == (3U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullBit(oldp+615,((3U == (3U & (vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[4U] 
                                                >> 8U)))));
        tracep->fullWData(oldp+616,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg),297);
        tracep->fullQData(oldp+626,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__rawdata),64);
        tracep->fullCData(oldp+628,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_addr_lowmask),8);
        tracep->fullCData(oldp+629,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__mem_addr_lowmask),8);
        tracep->fullCData(oldp+630,((7U & vlSelf->ysyx_22050243_top__DOT__ex_to_mem_bus[2U])),3);
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[0]),64);
        tracep->fullQData(oldp+633,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[1]),64);
        tracep->fullQData(oldp+635,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[2]),64);
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[3]),64);
        tracep->fullQData(oldp+639,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[4]),64);
        tracep->fullQData(oldp+641,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[5]),64);
        tracep->fullQData(oldp+643,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[6]),64);
        tracep->fullQData(oldp+645,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[7]),64);
        tracep->fullQData(oldp+647,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[8]),64);
        tracep->fullQData(oldp+649,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[9]),64);
        tracep->fullQData(oldp+651,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[10]),64);
        tracep->fullQData(oldp+653,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[11]),64);
        tracep->fullQData(oldp+655,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[12]),64);
        tracep->fullQData(oldp+657,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[13]),64);
        tracep->fullQData(oldp+659,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[14]),64);
        tracep->fullQData(oldp+661,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[15]),64);
        tracep->fullQData(oldp+663,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[16]),64);
        tracep->fullQData(oldp+665,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[17]),64);
        tracep->fullQData(oldp+667,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[18]),64);
        tracep->fullQData(oldp+669,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[19]),64);
        tracep->fullQData(oldp+671,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[20]),64);
        tracep->fullQData(oldp+673,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[21]),64);
        tracep->fullQData(oldp+675,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[22]),64);
        tracep->fullQData(oldp+677,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[23]),64);
        tracep->fullQData(oldp+679,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[24]),64);
        tracep->fullQData(oldp+681,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[25]),64);
        tracep->fullQData(oldp+683,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[26]),64);
        tracep->fullQData(oldp+685,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[27]),64);
        tracep->fullQData(oldp+687,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[28]),64);
        tracep->fullQData(oldp+689,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[29]),64);
        tracep->fullQData(oldp+691,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[30]),64);
        tracep->fullQData(oldp+693,(vlSelf->ysyx_22050243_top__DOT____Vcellout__wb__rf[31]),64);
        tracep->fullQData(oldp+695,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__csr_mcycle),64);
        tracep->fullSData(oldp+697,((vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                     >> 0x14U)),12);
        tracep->fullQData(oldp+698,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0U])))),64);
        tracep->fullCData(oldp+700,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mstatus_mpp),2);
        tracep->fullBit(oldp+701,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mstatus_mpie));
        tracep->fullBit(oldp+702,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mstatus_mie));
        tracep->fullBit(oldp+703,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__wb_flush));
        tracep->fullCData(oldp+704,((0x1fU & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                              >> 0xfU))),5);
        tracep->fullBit(oldp+705,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+706,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+707,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 9U))));
        tracep->fullBit(oldp+708,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 8U))));
        tracep->fullBit(oldp+709,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 7U))));
        tracep->fullBit(oldp+710,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                         >> 6U))));
        tracep->fullQData(oldp+711,((((QData)((IData)(
                                                      vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[4U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U])) 
                                                      >> 0x14U)))),64);
        tracep->fullBit(oldp+713,(((0xb00U == (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                               >> 0x14U)) 
                                   & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                      >> 0xaU))));
        tracep->fullBit(oldp+714,((1U & (((0xb00U == 
                                           (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[5U] 
                                            >> 0x14U)) 
                                          & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[3U] 
                                             >> 0xaU)) 
                                         | (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                            >> 3U)))));
        tracep->fullBit(oldp+715,((1U & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[0xaU] 
                                         >> 3U))));
        tracep->fullWData(oldp+716,(vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg),356);
        tracep->fullBit(oldp+728,((0U != (0x1fU & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]))));
        tracep->fullBit(oldp+729,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__ar_hs));
        tracep->fullBit(oldp+730,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_hs));
        tracep->fullBit(oldp+731,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__b_hs));
        tracep->fullBit(oldp+732,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_hs));
        tracep->fullBit(oldp+733,(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_done));
        tracep->fullBit(oldp+734,(vlSelf->clk));
        tracep->fullBit(oldp+735,(vlSelf->rst));
        tracep->fullIData(oldp+736,(vlSelf->if_pc),32);
        tracep->fullBit(oldp+737,(vlSelf->wb_valid));
        tracep->fullIData(oldp+738,(vlSelf->wb_pc),32);
        tracep->fullQData(oldp+739,(vlSelf->mepc),64);
        tracep->fullQData(oldp+741,(vlSelf->mtvec),64);
        tracep->fullQData(oldp+743,(vlSelf->mstatus),64);
        tracep->fullQData(oldp+745,(vlSelf->mcause),64);
        tracep->fullQData(oldp+747,(vlSelf->mie),64);
        tracep->fullQData(oldp+749,(vlSelf->mip),64);
        tracep->fullQData(oldp+751,(vlSelf->mscratch),64);
        tracep->fullQData(oldp+753,(vlSelf->mtval),64);
        tracep->fullBit(oldp+755,(vlSelf->wb_memwrite));
        tracep->fullIData(oldp+756,(vlSelf->wb_instruction),32);
        tracep->fullBit(oldp+757,(vlSelf->cmt_skip));
        tracep->fullQData(oldp+758,(vlSelf->wb_diff_addr),64);
        tracep->fullQData(oldp+760,(vlSelf->wb_diff_data),64);
        tracep->fullBit(oldp+762,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+763,(vlSelf->axi_aw_valid_o));
        tracep->fullQData(oldp+764,(vlSelf->axi_aw_addr_o),64);
        tracep->fullCData(oldp+766,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+767,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+768,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+769,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+770,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+771,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+772,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+773,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+774,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+775,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+776,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+777,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+778,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+780,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+781,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+782,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+783,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+784,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+785,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+786,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+787,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+788,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+789,(vlSelf->axi_ar_valid_o));
        tracep->fullQData(oldp+790,(vlSelf->axi_ar_addr_o),64);
        tracep->fullCData(oldp+792,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+793,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+794,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+795,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+796,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+797,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+798,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+799,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+800,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+801,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+802,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+803,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+804,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+805,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+807,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+808,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+809,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+810,(((IData)(vlSelf->axi_aw_ready_i) 
                                   & (IData)(vlSelf->axi_aw_valid_o))));
        tracep->fullBit(oldp+811,(((IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__w_hs) 
                                   & (IData)(vlSelf->axi_w_last_o))));
        tracep->fullBit(oldp+812,(((IData)(vlSelf->ysyx_22050243_top__DOT__d_req_wen)
                                    ? (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__b_hs)
                                    : (IData)(vlSelf->ysyx_22050243_top__DOT__axi__DOT__r_done))));
        tracep->fullIData(oldp+813,((IData)(vlSelf->mepc)),32);
        tracep->fullBit(oldp+814,(((((0U != (0x1fU 
                                             & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                     & ((0x1fU & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                        == (0x1fU & (IData)(
                                                            (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x2fU))))) 
                                    & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                       >> 5U)) & (vlSelf->wb_pc 
                                                  != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))));
        tracep->fullBit(oldp+815,(((((0U != (0x1fU 
                                             & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U])) 
                                     & ((0x1fU & vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U]) 
                                        == (0x1fU & (IData)(
                                                            (vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg 
                                                             >> 0x34U))))) 
                                    & (vlSelf->ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg[2U] 
                                       >> 5U)) & (vlSelf->wb_pc 
                                                  != (IData)(vlSelf->ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg)))));
        tracep->fullIData(oldp+816,(0x40U),32);
        tracep->fullIData(oldp+817,(4U),32);
        tracep->fullIData(oldp+818,(8U),32);
        tracep->fullIData(oldp+819,(1U),32);
        tracep->fullQData(oldp+820,(vlSelf->ysyx_22050243_top__DOT__if_pcdata),64);
        tracep->fullBit(oldp+822,(1U));
        tracep->fullQData(oldp+823,(vlSelf->ysyx_22050243_top__DOT__reg_wdata),64);
        tracep->fullBit(oldp+825,(vlSelf->ysyx_22050243_top__DOT__id_jalr));
        tracep->fullBit(oldp+826,(0U));
        tracep->fullCData(oldp+827,(0U),3);
        tracep->fullCData(oldp+828,(1U),3);
        tracep->fullCData(oldp+829,(2U),3);
        tracep->fullCData(oldp+830,(3U),3);
        tracep->fullCData(oldp+831,(4U),3);
        tracep->fullCData(oldp+832,(5U),3);
        tracep->fullCData(oldp+833,(6U),3);
        tracep->fullIData(oldp+834,(3U),32);
        tracep->fullIData(oldp+835,(2U),32);
        tracep->fullCData(oldp+836,(0U),4);
        tracep->fullCData(oldp+837,(1U),8);
        tracep->fullQData(oldp+838,(0ULL),64);
        tracep->fullIData(oldp+840,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__mem_addr),32);
        tracep->fullBit(oldp+841,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__mem_wen));
        tracep->fullCData(oldp+842,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__mem_strb),8);
        tracep->fullCData(oldp+843,(7U),3);
        tracep->fullIData(oldp+844,(0x80U),32);
        tracep->fullCData(oldp+845,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__cache_index_reg),7);
        tracep->fullQData(oldp+846,(vlSelf->ysyx_22050243_top__DOT__icache__DOT__ex_cache_wdata),64);
        tracep->fullIData(oldp+848,(7U),32);
        tracep->fullIData(oldp+849,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mem_addr),32);
        tracep->fullBit(oldp+850,(vlSelf->ysyx_22050243_top__DOT__dcache__DOT__mem_wen));
        tracep->fullIData(oldp+851,(0xdU),32);
        __Vtemp276[0U] = 0x39e46b1dU;
        __Vtemp276[1U] = 0x8deddc67U;
        __Vtemp276[2U] = 0x6018ce07U;
        __Vtemp276[3U] = 0xb96e4d82U;
        __Vtemp276[4U] = 0U;
        tracep->fullWData(oldp+852,(__Vtemp276),130);
        tracep->fullIData(oldp+857,(0xaU),32);
        tracep->fullIData(oldp+858,(0xdU),32);
        tracep->fullCData(oldp+859,(0U),6);
        tracep->fullCData(oldp+860,(0x10U),6);
        tracep->fullCData(oldp+861,(0x20U),6);
        tracep->fullCData(oldp+862,(1U),6);
        tracep->fullCData(oldp+863,(0xcU),6);
        tracep->fullCData(oldp+864,(8U),6);
        tracep->fullCData(oldp+865,(2U),6);
        tracep->fullCData(oldp+866,(4U),6);
        tracep->fullCData(oldp+867,(6U),6);
        tracep->fullCData(oldp+868,(0xeU),6);
        tracep->fullCData(oldp+869,(0x18U),6);
        tracep->fullCData(oldp+870,(0x1aU),6);
        tracep->fullCData(oldp+871,(0x1eU),6);
        tracep->fullCData(oldp+872,(0x1cU),6);
        tracep->fullCData(oldp+873,(0x21U),6);
        tracep->fullCData(oldp+874,(0x11U),6);
        tracep->fullCData(oldp+875,(3U),6);
        tracep->fullCData(oldp+876,(0xaU),6);
        tracep->fullCData(oldp+877,(0x2aU),6);
        tracep->fullCData(oldp+878,(0x19U),6);
        tracep->fullCData(oldp+879,(0xbU),6);
        tracep->fullCData(oldp+880,(0x2bU),6);
        tracep->fullCData(oldp+881,(0x1bU),6);
        tracep->fullCData(oldp+882,(0x1dU),6);
        tracep->fullCData(oldp+883,(0x1fU),6);
        tracep->fullCData(oldp+884,(0x16U),6);
        tracep->fullCData(oldp+885,(0x12U),6);
        tracep->fullCData(oldp+886,(0x14U),6);
        tracep->fullCData(oldp+887,(0x10U),5);
        tracep->fullCData(oldp+888,(0x17U),5);
        tracep->fullCData(oldp+889,(0x16U),5);
        tracep->fullCData(oldp+890,(0x14U),5);
        tracep->fullCData(oldp+891,(0x13U),5);
        tracep->fullCData(oldp+892,(0x15U),5);
        tracep->fullCData(oldp+893,(0x11U),5);
        tracep->fullCData(oldp+894,(0x18U),5);
        tracep->fullCData(oldp+895,(0x19U),5);
        tracep->fullCData(oldp+896,(0x1dU),5);
        tracep->fullCData(oldp+897,(0x12U),5);
        tracep->fullCData(oldp+898,(0U),2);
        tracep->fullCData(oldp+899,(1U),2);
        tracep->fullCData(oldp+900,(3U),2);
        tracep->fullCData(oldp+901,(2U),2);
        tracep->fullBit(oldp+902,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__sh));
        tracep->fullBit(oldp+903,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__sw));
        tracep->fullBit(oldp+904,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__sd));
        tracep->fullQData(oldp+905,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__mem_wdata),64);
        tracep->fullCData(oldp+907,(vlSelf->ysyx_22050243_top__DOT__mem__DOT__ex_size),2);
        tracep->fullSData(oldp+908,(0x305U),12);
        tracep->fullSData(oldp+909,(0x342U),12);
        tracep->fullSData(oldp+910,(0x300U),12);
        tracep->fullSData(oldp+911,(0x341U),12);
        tracep->fullSData(oldp+912,(0x304U),12);
        tracep->fullSData(oldp+913,(0x344U),12);
        tracep->fullSData(oldp+914,(0x340U),12);
        tracep->fullSData(oldp+915,(0xf14U),12);
        tracep->fullSData(oldp+916,(0xb00U),12);
    }
}
