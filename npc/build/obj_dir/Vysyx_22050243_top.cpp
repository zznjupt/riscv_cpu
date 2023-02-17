// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22050243_top.h"
#include "Vysyx_22050243_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22050243_top::Vysyx_22050243_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_22050243_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , if_pc{vlSymsp->TOP.if_pc}
    , wb_valid{vlSymsp->TOP.wb_valid}
    , wb_pc{vlSymsp->TOP.wb_pc}
    , mepc{vlSymsp->TOP.mepc}
    , mtvec{vlSymsp->TOP.mtvec}
    , mstatus{vlSymsp->TOP.mstatus}
    , mcause{vlSymsp->TOP.mcause}
    , mie{vlSymsp->TOP.mie}
    , mip{vlSymsp->TOP.mip}
    , mscratch{vlSymsp->TOP.mscratch}
    , mtval{vlSymsp->TOP.mtval}
    , wb_memwrite{vlSymsp->TOP.wb_memwrite}
    , wb_instruction{vlSymsp->TOP.wb_instruction}
    , cmt_skip{vlSymsp->TOP.cmt_skip}
    , wb_diff_addr{vlSymsp->TOP.wb_diff_addr}
    , wb_diff_data{vlSymsp->TOP.wb_diff_data}
    , axi_aw_ready_i{vlSymsp->TOP.axi_aw_ready_i}
    , axi_aw_valid_o{vlSymsp->TOP.axi_aw_valid_o}
    , axi_aw_addr_o{vlSymsp->TOP.axi_aw_addr_o}
    , axi_aw_prot_o{vlSymsp->TOP.axi_aw_prot_o}
    , axi_aw_id_o{vlSymsp->TOP.axi_aw_id_o}
    , axi_aw_user_o{vlSymsp->TOP.axi_aw_user_o}
    , axi_aw_len_o{vlSymsp->TOP.axi_aw_len_o}
    , axi_aw_size_o{vlSymsp->TOP.axi_aw_size_o}
    , axi_aw_burst_o{vlSymsp->TOP.axi_aw_burst_o}
    , axi_aw_lock_o{vlSymsp->TOP.axi_aw_lock_o}
    , axi_aw_cache_o{vlSymsp->TOP.axi_aw_cache_o}
    , axi_aw_qos_o{vlSymsp->TOP.axi_aw_qos_o}
    , axi_aw_region_o{vlSymsp->TOP.axi_aw_region_o}
    , axi_w_ready_i{vlSymsp->TOP.axi_w_ready_i}
    , axi_w_valid_o{vlSymsp->TOP.axi_w_valid_o}
    , axi_w_data_o{vlSymsp->TOP.axi_w_data_o}
    , axi_w_strb_o{vlSymsp->TOP.axi_w_strb_o}
    , axi_w_last_o{vlSymsp->TOP.axi_w_last_o}
    , axi_w_user_o{vlSymsp->TOP.axi_w_user_o}
    , axi_b_ready_o{vlSymsp->TOP.axi_b_ready_o}
    , axi_b_valid_i{vlSymsp->TOP.axi_b_valid_i}
    , axi_b_resp_i{vlSymsp->TOP.axi_b_resp_i}
    , axi_b_id_i{vlSymsp->TOP.axi_b_id_i}
    , axi_b_user_i{vlSymsp->TOP.axi_b_user_i}
    , axi_ar_ready_i{vlSymsp->TOP.axi_ar_ready_i}
    , axi_ar_valid_o{vlSymsp->TOP.axi_ar_valid_o}
    , axi_ar_addr_o{vlSymsp->TOP.axi_ar_addr_o}
    , axi_ar_prot_o{vlSymsp->TOP.axi_ar_prot_o}
    , axi_ar_id_o{vlSymsp->TOP.axi_ar_id_o}
    , axi_ar_user_o{vlSymsp->TOP.axi_ar_user_o}
    , axi_ar_len_o{vlSymsp->TOP.axi_ar_len_o}
    , axi_ar_size_o{vlSymsp->TOP.axi_ar_size_o}
    , axi_ar_burst_o{vlSymsp->TOP.axi_ar_burst_o}
    , axi_ar_lock_o{vlSymsp->TOP.axi_ar_lock_o}
    , axi_ar_cache_o{vlSymsp->TOP.axi_ar_cache_o}
    , axi_ar_qos_o{vlSymsp->TOP.axi_ar_qos_o}
    , axi_ar_region_o{vlSymsp->TOP.axi_ar_region_o}
    , axi_r_ready_o{vlSymsp->TOP.axi_r_ready_o}
    , axi_r_valid_i{vlSymsp->TOP.axi_r_valid_i}
    , axi_r_resp_i{vlSymsp->TOP.axi_r_resp_i}
    , axi_r_data_i{vlSymsp->TOP.axi_r_data_i}
    , axi_r_last_i{vlSymsp->TOP.axi_r_last_i}
    , axi_r_id_i{vlSymsp->TOP.axi_r_id_i}
    , axi_r_user_i{vlSymsp->TOP.axi_r_user_i}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_22050243_top::Vysyx_22050243_top(const char* _vcname__)
    : Vysyx_22050243_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22050243_top::~Vysyx_22050243_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22050243_top___024root___eval_initial(Vysyx_22050243_top___024root* vlSelf);
void Vysyx_22050243_top___024root___eval_settle(Vysyx_22050243_top___024root* vlSelf);
void Vysyx_22050243_top___024root___eval(Vysyx_22050243_top___024root* vlSelf);
QData Vysyx_22050243_top___024root___change_request(Vysyx_22050243_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22050243_top___024root___eval_debug_assertions(Vysyx_22050243_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22050243_top___024root___final(Vysyx_22050243_top___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22050243_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22050243_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22050243_top___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22050243_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22050243_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_top.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22050243_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_22050243_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22050243_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22050243_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22050243_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22050243_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_top.v", 7, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22050243_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_22050243_top::final() {
    Vysyx_22050243_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_22050243_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_22050243_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vysyx_22050243_top___024root__traceInitTop(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22050243_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22050243_top___024root*>(voidSelf);
    Vysyx_22050243_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_22050243_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vysyx_22050243_top___024root__traceRegister(Vysyx_22050243_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050243_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vysyx_22050243_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
