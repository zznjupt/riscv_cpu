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
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Mem.v:22:34
    extern void IF_inst_read(long long pc, int* inst, svBit inst_en);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Mem.v:24:34
    extern void MEM_pmem_read(long long raddr, long long* rdata, svBit r_en);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Mem.v:23:34
    extern void MEM_pmem_write(long long waddr, long long wdata, char wmask, svBit w_en);
    // DPI import at /home/admin1/ZZworkspace/git/ysyx-workbench/npc/vsrc/ysyx_22050243_Mem.v:25:34
    extern void isa_init();

#ifdef __cplusplus
}
#endif
