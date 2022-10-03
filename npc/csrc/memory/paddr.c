#include "memconf.h"
#include <stdint.h>

#ifndef _STDIO_H
#include <stdio.h>
#endif
#ifndef _STDLIB_H
#include <stdlib.h>
#endif

#define PG_ALIGN __attribute((aligned(4096)))
#define PMEM_LEFT  ((uint32_t)CONFIG_MBASE)
#define PMEM_RIGHT ((uint32_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

static const uint32_t img [] = {
  0x00000297,  // auipc t0,0
  0x0002b823,  // sd  zero,16(t0)
  0x0102b503,  // ld  a0,16(t0)
  0x00100073,  // ebreak (used as nemu_trap)
  0xdeadbeef,  // some data
};

static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};


uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }


extern "C" void MEM_pmem_read(uint64_t raddr, uint64_t* rdata, bool r_en) {
    if(!r_en) return;
    if(raddr >= CONFIG_MBASE) {
        *rdata = *(uint64_t*) guest_to_host(raddr);
        printf("\033[1;33mcprintf: MEM stage\33[0m\nread from addr:   \33[1;34m0x%016lx\33[0m, rdata =  \33[1;32m0x%016lx\33[0m\n", raddr, *rdata);
    } else assert(0);
}

extern "C" void MEM_pmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask, bool w_en) {
    if(!w_en) return;
    if(waddr >= CONFIG_MBASE) {
        int low = 0, high = 0, index = 0, low_get = 0;
        uint8_t mask = wmask;
        while (mask != 0) {
            // printf("cprintf: index = %d, mask = %x\n", index, mask);
            if (!low_get && mask % 2 == 1) {
                low_get = 1;
                low = index;
            }
            index++;
            mask >>= 1;
        }
        high = index - 1;
        int length = high - low + 1;
        printf("\033[1;33mcprintf: MEM stage\33[0m\nwrite in addr:    \33[1;34m0x%016lx\33[0m, wdata =  \33[1;32m0x%016lx\33[0m, wmask = 0x%02x\n", waddr, wdata, wmask);
        switch (length) {
            case 1: *(uint8_t  *)guest_to_host((waddr & ~0x7ull) + low) = (uint8_t )wdata; break;
            case 2: *(uint16_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint16_t)wdata; break;
            case 4: *(uint32_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint32_t)wdata; break;
            case 8: *(uint64_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint64_t)wdata; break;
            default: assert(0); break;
        }   
    } else assert(0);
}

void init_mem() {
	uint32_t *p = (uint32_t *)pmem;
	for (int i = 0; i < (int)(CONFIG_MSIZE / sizeof(p[0])); i++) p[i] = rand();
}