#ifndef PARRD_H_
#define PARRD_H_

#include <stdio.h>
#include <stdint.h>
#include <assert.h>

#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0x8000000
typedef long long ll;
uint32_t inst_read(uint32_t addr);
uint8_t* base();
void     inst_w_by_index(uint32_t idx, uint32_t inst);
// copy from nemu
uint64_t paddr_read(uint64_t addr, uint64_t len); 
uint64_t paddr_write(uint64_t addr, uint64_t len, uint64_t val);

extern "C" void pmem_read(ll raddr, ll* rdata);
extern "C" void pmem_write(ll waddr, ll wdata, char wmask);

#endif
