// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Ctrl.v:33:34
    extern void ID_ctrl_show(long long opcode);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Ctrl.v:34:34
    extern void ID_funct3_show(long long funct3);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Ctrl.v:32:34
    extern void ebreak();

#ifdef __cplusplus
}
#endif
