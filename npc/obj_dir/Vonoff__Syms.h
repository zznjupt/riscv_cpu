// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VONOFF__SYMS_H_
#define VERILATED_VONOFF__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vonoff.h"

// INCLUDE MODULE CLASSES
#include "Vonoff___024root.h"

// SYMS CLASS (contains all model state)
class Vonoff__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vonoff* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vonoff___024root               TOP;

    // CONSTRUCTORS
    Vonoff__Syms(VerilatedContext* contextp, const char* namep, Vonoff* modelp);
    ~Vonoff__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
