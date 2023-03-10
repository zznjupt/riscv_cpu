// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22050243_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22050243_TOP___024ROOT_H_
#define VERILATED_VYSYX_22050243_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22050243_top__Syms;
class Vysyx_22050243_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22050243_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(wb_valid,0,0);
    VL_OUT8(wb_memwrite,0,0);
    VL_OUT8(cmt_skip,0,0);
    VL_IN8(axi_aw_ready_i,0,0);
    VL_OUT8(axi_aw_valid_o,0,0);
    VL_OUT8(axi_aw_prot_o,2,0);
    VL_OUT8(axi_aw_id_o,3,0);
    VL_OUT8(axi_aw_user_o,0,0);
    VL_OUT8(axi_aw_len_o,7,0);
    VL_OUT8(axi_aw_size_o,2,0);
    VL_OUT8(axi_aw_burst_o,1,0);
    VL_OUT8(axi_aw_lock_o,0,0);
    VL_OUT8(axi_aw_cache_o,3,0);
    VL_OUT8(axi_aw_qos_o,3,0);
    VL_OUT8(axi_aw_region_o,3,0);
    VL_IN8(axi_w_ready_i,0,0);
    VL_OUT8(axi_w_valid_o,0,0);
    VL_OUT8(axi_w_strb_o,7,0);
    VL_OUT8(axi_w_last_o,0,0);
    VL_OUT8(axi_w_user_o,0,0);
    VL_OUT8(axi_b_ready_o,0,0);
    VL_IN8(axi_b_valid_i,0,0);
    VL_IN8(axi_b_resp_i,1,0);
    VL_IN8(axi_b_id_i,3,0);
    VL_IN8(axi_b_user_i,0,0);
    VL_IN8(axi_ar_ready_i,0,0);
    VL_OUT8(axi_ar_valid_o,0,0);
    VL_OUT8(axi_ar_prot_o,2,0);
    VL_OUT8(axi_ar_id_o,3,0);
    VL_OUT8(axi_ar_user_o,0,0);
    VL_OUT8(axi_ar_len_o,7,0);
    VL_OUT8(axi_ar_size_o,2,0);
    VL_OUT8(axi_ar_burst_o,1,0);
    VL_OUT8(axi_ar_lock_o,0,0);
    VL_OUT8(axi_ar_cache_o,3,0);
    VL_OUT8(axi_ar_qos_o,3,0);
    VL_OUT8(axi_ar_region_o,3,0);
    VL_OUT8(axi_r_ready_o,0,0);
    VL_IN8(axi_r_valid_i,0,0);
    VL_IN8(axi_r_resp_i,1,0);
    VL_IN8(axi_r_last_i,0,0);
    VL_IN8(axi_r_id_i,3,0);
    VL_IN8(axi_r_user_i,0,0);
    VL_OUT(if_pc,31,0);
    VL_OUT(wb_pc,31,0);
    VL_OUT(wb_instruction,31,0);
    VL_OUT64(mepc,63,0);
    VL_OUT64(mtvec,63,0);
    VL_OUT64(mstatus,63,0);
    VL_OUT64(mcause,63,0);
    VL_OUT64(mie,63,0);
    VL_OUT64(mip,63,0);
    VL_OUT64(mscratch,63,0);
    VL_OUT64(mtval,63,0);
    VL_OUT64(wb_diff_addr,63,0);
    VL_OUT64(wb_diff_data,63,0);
    VL_OUT64(axi_aw_addr_o,63,0);
    VL_OUT64(axi_w_data_o,63,0);
    VL_OUT64(axi_ar_addr_o,63,0);
    VL_IN64(axi_r_data_i,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ysyx_22050243_top__DOT__if_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__if_allowin;
        CData/*0:0*/ ysyx_22050243_top__DOT__id_branch_taken;
        CData/*0:0*/ ysyx_22050243_top__DOT__id_jalr;
        CData/*0:0*/ ysyx_22050243_top__DOT__id_flush;
        CData/*0:0*/ ysyx_22050243_top__DOT__id_allowin;
        CData/*0:0*/ ysyx_22050243_top__DOT__id_to_ex_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__id_ecall;
        CData/*0:0*/ ysyx_22050243_top__DOT__id_mret;
        CData/*0:0*/ ysyx_22050243_top__DOT__load_branch;
        CData/*7:0*/ ysyx_22050243_top__DOT__ex_wmask;
        CData/*0:0*/ ysyx_22050243_top__DOT__ex_flush;
        CData/*0:0*/ ysyx_22050243_top__DOT__ex_allowin;
        CData/*0:0*/ ysyx_22050243_top__DOT__ex_ready_go;
        CData/*0:0*/ ysyx_22050243_top__DOT__ex_to_mem_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__ex_mmio;
        CData/*0:0*/ ysyx_22050243_top__DOT__ecallmret_on;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem_flush;
        CData/*7:0*/ ysyx_22050243_top__DOT__d_req_strb;
        CData/*0:0*/ ysyx_22050243_top__DOT__d_req_wen;
        CData/*0:0*/ ysyx_22050243_top__DOT__d_req_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__d_res_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__i_req_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__ecall_stuck;
        CData/*0:0*/ ysyx_22050243_top__DOT__mret_stuck;
        CData/*2:0*/ ysyx_22050243_top__DOT__dcache_state;
        CData/*2:0*/ ysyx_22050243_top__DOT__icache_state;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__preif_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__preif_ready_go_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__preif_ready_go;
        CData/*0:0*/ ysyx_22050243_top__DOT__preif_allowin;
        CData/*0:0*/ ysyx_22050243_top__DOT__timer_blocked;
        CData/*0:0*/ ysyx_22050243_top__DOT__if_timer_blocked;
        CData/*0:0*/ ysyx_22050243_top__DOT__if_timer_int_tmp;
        CData/*0:0*/ ysyx_22050243_top__DOT__on_hold;
        CData/*0:0*/ ysyx_22050243_top__DOT__if_instruction_blocked;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__w_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__mmio_rdone;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__mmio_wdone;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__ar_hs;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__w_hs;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__b_hs;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__r_hs;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__is_mmio;
        CData/*0:0*/ ysyx_22050243_top__DOT__axi__DOT__r_done;
        CData/*2:0*/ ysyx_22050243_top__DOT__axi__DOT__w_state;
        CData/*2:0*/ ysyx_22050243_top__DOT__axi__DOT__r_state;
        CData/*3:0*/ ysyx_22050243_top__DOT__icache__DOT__input_offset_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_way0hit_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_way1hit_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__mem_wen;
        CData/*7:0*/ ysyx_22050243_top__DOT__icache__DOT__mem_strb;
        CData/*6:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_index_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_wen_way0;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_wen_way1;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_way0hit;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_way1hit;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_way0valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_way1valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__icache__DOT__cnt;
        CData/*1:0*/ ysyx_22050243_top__DOT__dcache__DOT__input_size_reg;
        CData/*3:0*/ ysyx_22050243_top__DOT__dcache__DOT__input_offset_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit_reg;
    };
    struct {
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__mmio_ok;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__mem_wen;
        CData/*6:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_index_reg;
        CData/*3:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_offset_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way0;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way1;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_miss;
        CData/*6:0*/ ysyx_22050243_top__DOT__dcache__DOT__fencei_cnt;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__fencei_ok;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way0_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_wen_way1_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way0hit;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way1hit;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way0dirty;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way1dirty;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way0valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way1valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_raw_way0;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_raw_way1;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_raw;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__mmio_mem;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way0fencev;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way0fenced;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way1fencev;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_way1fenced;
        CData/*0:0*/ ysyx_22050243_top__DOT__dcache__DOT__cnt;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__btype_taken;
        CData/*2:0*/ ysyx_22050243_top__DOT__dec__DOT__id_inst_type;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__id_jalr;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__exid_raw_hazard1;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__exid_raw_hazard2;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__memid_raw_hazard1;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__memid_raw_hazard2;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__load_use_hazard1;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__load_use_hazard2;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard1_tmp;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard2_tmp;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard1;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__mem_load_use_hazard2;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__wb_load_use_hazard1_tmp;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__wb_load_use_hazard2_tmp;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__id_ready_go;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__id_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__if_timer_int_reg;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__id_jalr_stuck;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__id_jalr_stuck_reg;
        CData/*2:0*/ ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__mul_type;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__div_type;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__div_sign;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__mul_ok;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__ex_valid;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__div_ready;
        CData/*1:0*/ ysyx_22050243_top__DOT__exe__DOT__div_state;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__cache_readygo;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__mul_stuck;
        CData/*0:0*/ ysyx_22050243_top__DOT__exe__DOT__div_stuck;
        CData/*4:0*/ ysyx_22050243_top__DOT__exe__DOT__mul__DOT__cnt;
        CData/*1:0*/ ysyx_22050243_top__DOT__exe__DOT__mul__DOT__mul_state;
        CData/*6:0*/ ysyx_22050243_top__DOT__exe__DOT__div__DOT__cnt;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__lb;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__lh;
    };
    struct {
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__lw;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__ld;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__lbu;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__lhu;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__lwu;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__sh;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__sw;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__sd;
        CData/*0:0*/ ysyx_22050243_top__DOT__mem__DOT__mem_valid;
        CData/*7:0*/ ysyx_22050243_top__DOT__mem__DOT__ex_addr_lowmask;
        CData/*7:0*/ ysyx_22050243_top__DOT__mem__DOT__mem_addr_lowmask;
        CData/*1:0*/ ysyx_22050243_top__DOT__mem__DOT__ex_size;
        CData/*1:0*/ ysyx_22050243_top__DOT__wb__DOT__mstatus_mpp;
        CData/*0:0*/ ysyx_22050243_top__DOT__wb__DOT__mstatus_mpie;
        CData/*0:0*/ ysyx_22050243_top__DOT__wb__DOT__mstatus_mie;
        CData/*0:0*/ ysyx_22050243_top__DOT__wb__DOT__wb_flush;
        IData/*31:0*/ ysyx_22050243_top__DOT__if_instruction;
        IData/*31:0*/ ysyx_22050243_top__DOT__id_branch_result;
        VlWide<10>/*295:0*/ ysyx_22050243_top__DOT__ex_to_mem_bus;
        VlWide<12>/*355:0*/ ysyx_22050243_top__DOT__mem_to_wb_bus;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__d_req_data;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__d_mrdata;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__i_mrdata;
        IData/*31:0*/ ysyx_22050243_top__DOT__next_pc;
        IData/*31:0*/ ysyx_22050243_top__DOT__next_pc_reg;
        IData/*31:0*/ ysyx_22050243_top__DOT__if_instruction_reg;
        IData/*31:0*/ ysyx_22050243_top__DOT__icache__DOT__mem_addr;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_strb;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_wdata;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way0;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__icache__DOT__cache_rdata_way1;
        IData/*31:0*/ ysyx_22050243_top__DOT__icache__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_22050243_top__DOT__dcache__DOT__mem_addr;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_strb;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_wdata;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way0;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__dcache__DOT__cache_rdata_way1;
        IData/*31:0*/ ysyx_22050243_top__DOT__dcache__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ ysyx_22050243_top__DOT__dec__DOT__stuck_jalr_result;
        IData/*31:0*/ ysyx_22050243_top__DOT__exe__DOT__itype_alu_op;
        IData/*31:0*/ ysyx_22050243_top__DOT__exe__DOT__addw_result;
        IData/*31:0*/ ysyx_22050243_top__DOT__exe__DOT__subw_result;
        IData/*31:0*/ ysyx_22050243_top__DOT__exe__DOT__src1_sllw;
        IData/*31:0*/ ysyx_22050243_top__DOT__exe__DOT__src1_srlw;
        VlWide<10>/*309:0*/ ysyx_22050243_top__DOT__exe__DOT__id_to_ex_bus_reg;
        VlWide<3>/*64:0*/ ysyx_22050243_top__DOT__exe__DOT__mul__DOT__x_ext;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__exe__DOT__mul__DOT__res;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplier;
        VlWide<3>/*66:0*/ ysyx_22050243_top__DOT__exe__DOT__mul__DOT__multiplied;
        VlWide<4>/*127:0*/ ysyx_22050243_top__DOT__exe__DOT__mul__DOT__z;
        VlWide<5>/*128:0*/ ysyx_22050243_top__DOT__exe__DOT__div__DOT__dividend;
        VlWide<3>/*64:0*/ ysyx_22050243_top__DOT__exe__DOT__div__DOT__subres;
        VlWide<10>/*296:0*/ ysyx_22050243_top__DOT__mem__DOT__ex_to_mem_bus_reg;
        VlWide<12>/*355:0*/ ysyx_22050243_top__DOT__wb__DOT__mem_to_wb_bus_reg;
        QData/*63:0*/ ysyx_22050243_top__DOT__mhartid;
        QData/*63:0*/ ysyx_22050243_top__DOT__if_pcdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__reg_wdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__mem_final_rdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__mem_doubly_aligned_data;
        QData/*63:0*/ ysyx_22050243_top__DOT__mem_diff_addr;
        QData/*63:0*/ ysyx_22050243_top__DOT__mem_diff_data;
        QData/*63:0*/ ysyx_22050243_top__DOT__if_to_id_bus;
        QData/*63:0*/ ysyx_22050243_top__DOT__d_req_addr;
        QData/*63:0*/ ysyx_22050243_top__DOT__i_req_addr;
    };
    struct {
        QData/*63:0*/ ysyx_22050243_top__DOT__wb_reg_wdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__wb_csrwdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__wb_csrrdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__icache_data;
        QData/*63:0*/ ysyx_22050243_top__DOT__icache__DOT__ex_cache_wdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__dcache__DOT__ex_cache_strb;
        QData/*63:0*/ ysyx_22050243_top__DOT__dcache__DOT__ex_cache_wdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__dcache__DOT__mmio_rdata_reg;
        QData/*63:0*/ ysyx_22050243_top__DOT__dec__DOT__id_imm;
        QData/*63:0*/ ysyx_22050243_top__DOT__dec__DOT__id_alu_input1;
        QData/*63:0*/ ysyx_22050243_top__DOT__dec__DOT__id_regdata1_final;
        QData/*63:0*/ ysyx_22050243_top__DOT__dec__DOT__id_regdata2_final;
        QData/*63:0*/ ysyx_22050243_top__DOT__dec__DOT__if_to_id_bus_reg;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__rtype_calc_result;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__itype_calc_result;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__rtype_alu_op;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__sext_addw_result;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__sext_src1_sraw;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__sext_src1_sllw;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__sext_src1_srlw;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__res_sra;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__res_srl;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__res_sll;
        QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT__div__DOT__divisor;
        QData/*63:0*/ ysyx_22050243_top__DOT__mem__DOT__mem_wdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__mem__DOT__rawdata;
        QData/*63:0*/ ysyx_22050243_top__DOT__wb__DOT__csr_mcycle;
        VlUnpacked<QData/*63:0*/, 32> ysyx_22050243_top__DOT__rf;
        VlUnpacked<CData/*0:0*/, 128> ysyx_22050243_top__DOT__icache__DOT__cache_way0V;
        VlUnpacked<CData/*0:0*/, 128> ysyx_22050243_top__DOT__icache__DOT__cache_way1V;
        VlUnpacked<IData/*20:0*/, 128> ysyx_22050243_top__DOT__icache__DOT__cache_way0tags;
        VlUnpacked<IData/*20:0*/, 128> ysyx_22050243_top__DOT__icache__DOT__cache_way1tags;
        VlUnpacked<VlWide<4>/*127:0*/, 128> ysyx_22050243_top__DOT__icache__DOT__Icache_way1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 128> ysyx_22050243_top__DOT__icache__DOT__Icache_way2__DOT__ram;
        VlUnpacked<CData/*0:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__cache_way0D;
        VlUnpacked<CData/*0:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__cache_way1D;
        VlUnpacked<CData/*0:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__cache_way0V;
        VlUnpacked<CData/*0:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__cache_way1V;
        VlUnpacked<IData/*20:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__cache_way0tags;
        VlUnpacked<IData/*20:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__cache_way1tags;
        VlUnpacked<VlWide<4>/*127:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__Dcache_way1__DOT__ram;
        VlUnpacked<VlWide<4>/*127:0*/, 128> ysyx_22050243_top__DOT__dcache__DOT__Dcache_way2__DOT__ram;
        VlUnpacked<SData/*9:0*/, 13> ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 13> ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*2:0*/, 13> ysyx_22050243_top__DOT__dec__DOT__inst_mux__DOT__i0__DOT__data_list;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ ysyx_22050243_top__DOT____Vcellinp__dcache__input_valid;
    CData/*6:0*/ ysyx_22050243_top__DOT__dcache__DOT____Vcellinp__Dcache_way1__A;
    CData/*6:0*/ ysyx_22050243_top__DOT__dcache__DOT____Vcellinp__Dcache_way2__A;
    CData/*5:0*/ ysyx_22050243_top__DOT__exe__DOT____Vcellinp__decode_Rtype__in;
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT____Vcellinp__div____pinNumber4;
    QData/*63:0*/ ysyx_22050243_top__DOT__exe__DOT____Vcellinp__div____pinNumber3;
    VlUnpacked<QData/*63:0*/, 32> ysyx_22050243_top__DOT____Vcellout__wb__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22050243_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22050243_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22050243_top___024root(const char* name);
    ~Vysyx_22050243_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22050243_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
