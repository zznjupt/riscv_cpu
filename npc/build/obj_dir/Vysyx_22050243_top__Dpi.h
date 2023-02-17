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
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_top.v:361:32
    extern void pmem_read(long long raddr, long long* doubly_aligned_data);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_wb.v:147:34
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_top.v:360:32
    extern void set_pc(const svBitVecVal* pc);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_top.v:359:32
    extern void set_simtime();

#ifdef __cplusplus
}
#endif
