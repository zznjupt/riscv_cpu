// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMuxKeyInternal.h"
#include "VMuxKeyInternal__Syms.h"

//============================================================
// Constructors

VMuxKeyInternal::VMuxKeyInternal(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMuxKeyInternal__Syms(_vcontextp__, _vcname__, this)}
    , out{vlSymsp->TOP.out}
    , key{vlSymsp->TOP.key}
    , default_out{vlSymsp->TOP.default_out}
    , lut{vlSymsp->TOP.lut}
    , rootp{&(vlSymsp->TOP)}
{
}

VMuxKeyInternal::VMuxKeyInternal(const char* _vcname__)
    : VMuxKeyInternal(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMuxKeyInternal::~VMuxKeyInternal() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMuxKeyInternal___024root___eval_initial(VMuxKeyInternal___024root* vlSelf);
void VMuxKeyInternal___024root___eval_settle(VMuxKeyInternal___024root* vlSelf);
void VMuxKeyInternal___024root___eval(VMuxKeyInternal___024root* vlSelf);
QData VMuxKeyInternal___024root___change_request(VMuxKeyInternal___024root* vlSelf);
#ifdef VL_DEBUG
void VMuxKeyInternal___024root___eval_debug_assertions(VMuxKeyInternal___024root* vlSelf);
#endif  // VL_DEBUG
void VMuxKeyInternal___024root___final(VMuxKeyInternal___024root* vlSelf);

static void _eval_initial_loop(VMuxKeyInternal__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMuxKeyInternal___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMuxKeyInternal___024root___eval_settle(&(vlSymsp->TOP));
        VMuxKeyInternal___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VMuxKeyInternal___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/experiment/1.mux/MuxKeyInternal.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VMuxKeyInternal___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMuxKeyInternal::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMuxKeyInternal::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMuxKeyInternal___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMuxKeyInternal___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VMuxKeyInternal___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/experiment/1.mux/MuxKeyInternal.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VMuxKeyInternal___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VMuxKeyInternal::final() {
    VMuxKeyInternal___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VMuxKeyInternal::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMuxKeyInternal::name() const {
    return vlSymsp->name();
}
