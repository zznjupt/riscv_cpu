#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vysyx_22050243_top.h"
#include "colorstr.h"

#include "verilated_dpi.h"
#include "Vysyx_22050243_top__Dpi.h"

#define EBREAK 0x00100073

VerilatedContext    *constextp      = NULL;
Vysyx_22050243_top  *top            = NULL;
VerilatedVcdC       *tfp            = NULL;

typedef struct CPU_state {
    uint64_t* cpu_gpr;
    uint64_t pc;
} CPU_state;

CPU_state cpu;