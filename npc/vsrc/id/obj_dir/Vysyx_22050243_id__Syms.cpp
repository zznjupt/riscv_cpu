// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_22050243_id__Syms.h"
#include "Vysyx_22050243_id.h"
#include "Vysyx_22050243_id___024root.h"

// FUNCTIONS
Vysyx_22050243_id__Syms::~Vysyx_22050243_id__Syms()
{
}

Vysyx_22050243_id__Syms::Vysyx_22050243_id__Syms(VerilatedContext* contextp, const char* namep,Vysyx_22050243_id* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-9);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
