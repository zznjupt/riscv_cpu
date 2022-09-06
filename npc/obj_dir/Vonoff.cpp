// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vonoff.h"
#include "Vonoff__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vonoff::Vonoff(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vonoff__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

Vonoff::Vonoff(const char* _vcname__)
    : Vonoff(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vonoff::~Vonoff() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vonoff___024root___eval_initial(Vonoff___024root* vlSelf);
void Vonoff___024root___eval_settle(Vonoff___024root* vlSelf);
void Vonoff___024root___eval(Vonoff___024root* vlSelf);
QData Vonoff___024root___change_request(Vonoff___024root* vlSelf);
#ifdef VL_DEBUG
void Vonoff___024root___eval_debug_assertions(Vonoff___024root* vlSelf);
#endif  // VL_DEBUG
void Vonoff___024root___final(Vonoff___024root* vlSelf);

static void _eval_initial_loop(Vonoff__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vonoff___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vonoff___024root___eval_settle(&(vlSymsp->TOP));
        Vonoff___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vonoff___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/onoff.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vonoff___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vonoff::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vonoff::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vonoff___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vonoff___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vonoff___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/onoff.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vonoff___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vonoff::final() {
    Vonoff___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vonoff::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vonoff::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vonoff___024root__traceInitTop(Vonoff___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vonoff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vonoff___024root*>(voidSelf);
    Vonoff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vonoff___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vonoff___024root__traceRegister(Vonoff___024root* vlSelf, VerilatedVcd* tracep);

void Vonoff::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vonoff___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
