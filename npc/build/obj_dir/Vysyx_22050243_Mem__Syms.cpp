// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vysyx_22050243_Mem__Syms.h"
#include "Vysyx_22050243_Mem.h"
#include "Vysyx_22050243_Mem___024root.h"

// FUNCTIONS
Vysyx_22050243_Mem__Syms::~Vysyx_22050243_Mem__Syms()
{
}

Vysyx_22050243_Mem__Syms::Vysyx_22050243_Mem__Syms(VerilatedContext* contextp, const char* namep,Vysyx_22050243_Mem* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}