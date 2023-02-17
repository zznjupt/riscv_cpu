// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_22050243_TOP__SYMS_H_
#define VERILATED_VYSYX_22050243_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vysyx_22050243_top.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_22050243_top___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vysyx_22050243_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_22050243_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_22050243_top___024root   TOP;

    // CONSTRUCTORS
    Vysyx_22050243_top__Syms(VerilatedContext* contextp, const char* namep, Vysyx_22050243_top* modelp);
    ~Vysyx_22050243_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
