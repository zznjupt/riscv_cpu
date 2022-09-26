// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_22050243_Ctrl.h"
#include "Vysyx_22050243_Ctrl__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_22050243_Ctrl::Vysyx_22050243_Ctrl(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vysyx_22050243_Ctrl__Syms(_vcontextp__, _vcname__, this)}
    , opcode{vlSymsp->TOP.opcode}
    , funct3{vlSymsp->TOP.funct3}
    , alu_src{vlSymsp->TOP.alu_src}
    , mem2reg{vlSymsp->TOP.mem2reg}
    , reg_w{vlSymsp->TOP.reg_w}
    , mem_r{vlSymsp->TOP.mem_r}
    , mem_w{vlSymsp->TOP.mem_w}
    , branch{vlSymsp->TOP.branch}
    , pc_src_ctrl{vlSymsp->TOP.pc_src_ctrl}
    , alu_op{vlSymsp->TOP.alu_op}
    , csr_r{vlSymsp->TOP.csr_r}
    , rootp{&(vlSymsp->TOP)}
{
}

Vysyx_22050243_Ctrl::Vysyx_22050243_Ctrl(const char* _vcname__)
    : Vysyx_22050243_Ctrl(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vysyx_22050243_Ctrl::~Vysyx_22050243_Ctrl() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_22050243_Ctrl___024root___eval_initial(Vysyx_22050243_Ctrl___024root* vlSelf);
void Vysyx_22050243_Ctrl___024root___eval_settle(Vysyx_22050243_Ctrl___024root* vlSelf);
void Vysyx_22050243_Ctrl___024root___eval(Vysyx_22050243_Ctrl___024root* vlSelf);
QData Vysyx_22050243_Ctrl___024root___change_request(Vysyx_22050243_Ctrl___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_22050243_Ctrl___024root___eval_debug_assertions(Vysyx_22050243_Ctrl___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_22050243_Ctrl___024root___final(Vysyx_22050243_Ctrl___024root* vlSelf);

static void _eval_initial_loop(Vysyx_22050243_Ctrl__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_22050243_Ctrl___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_22050243_Ctrl___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_22050243_Ctrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22050243_Ctrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Ctrl.v", 19, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22050243_Ctrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vysyx_22050243_Ctrl::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_22050243_Ctrl::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_22050243_Ctrl___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_22050243_Ctrl___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vysyx_22050243_Ctrl___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Ctrl.v", 19, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vysyx_22050243_Ctrl___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vysyx_22050243_Ctrl::final() {
    Vysyx_22050243_Ctrl___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vysyx_22050243_Ctrl::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vysyx_22050243_Ctrl::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vysyx_22050243_Ctrl___024root__traceInitTop(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_22050243_Ctrl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_22050243_Ctrl___024root*>(voidSelf);
    Vysyx_22050243_Ctrl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vysyx_22050243_Ctrl___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vysyx_22050243_Ctrl___024root__traceRegister(Vysyx_22050243_Ctrl___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22050243_Ctrl::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vysyx_22050243_Ctrl___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
