// #include <stdio.h>
// #include <stdlib.h>
// #include <assert.h>
#include <verilated.h>

// MEM stage

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
#define PG_ALIGN __attribute((aligned(4096)))
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - CONFIG_MBASE; }
// uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

extern "C" void MEM_pmem_write(uint64_t waddr, uint64_t wdata, uint8_t wmask, bool w_en) {
    if(!w_en) return;
    int low = 0, high = 0, index = 0, low_get = 0;
    uint8_t mask = wmask;
    while (mask != 0) {
        printf("cprintf: index = %d, mask = %x\n", index, mask);
        if (!low_get && mask % 2 == 1) {
            low_get = 1;
            low = index;
        }
        index++;
        mask >>= 1;
    }
    high = index - 1;
    int length = high - low + 1;
    printf("cprintf: MEM stage write in  0x%016lx, wdata = 0x%016lx\nwmask = 0x%02lx, high = %d, low = %d\n", waddr, wdata, wmask, high, low);
    switch (length) {
        case 1: *(uint8_t  *)guest_to_host((waddr & ~0x7ull) + low) = (uint8_t )wdata; break;
        case 2: *(uint16_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint16_t)wdata; break;
        case 4: *(uint32_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint32_t)wdata; break;
        case 8: *(uint64_t *)guest_to_host((waddr & ~0x7ull) + low) = (uint64_t)wdata; break;
        default: assert(0); break;
    }   

}

extern "C" void MEM_pmem_read(uint64_t raddr, uint64_t* rdata, bool r_en) {
    if(!r_en) return;
    if(raddr >= CONFIG_MBASE) {
        *rdata = *(uint64_t*) guest_to_host(raddr);
        printf("cprintf: MEM stage read from 0x%016lx, rdata = 0x%016lx\n", raddr, *rdata);
    }
}

extern "C" void IF_inst_read(uint64_t inst_addr, bool inst_en) {
    if(!inst_en) return;

}