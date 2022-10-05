#include <dlfcn.h>

#include "./include/sim-main.h"
#include "./include/difftest-def.h"
#include "./include/memory.h"


void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;


static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void difftest_skip_ref() {
    is_skip_ref = true;
    skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) {
    skip_dut_nr_inst += nr_dut;
    while (nr_ref-- > 0) ref_difftest_exec(1);
}



void init_difftest(char *ref_so_file, long img_size, int port) {
    cpu_s.pc = CONFIG_MBASE;
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(paddr_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    // printf("Differential testing: *ON*");
    // printf("The result of every instruction will be compared with %s. "
    //     "This will help you a lot for debugging, but also significantly reduce the performance. "
    //     "If it is not necessary, you can turn it off in menuconfig.",
    //     ref_so_file);

    ref_difftest_init(port);
    ref_difftest_memcpy(RESET_VECTOR, (void *)pmem, img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu_s, DIFFTEST_TO_REF);
}

///////////////////////////////////////////////////////////////////////////
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

const char* reg_name(int idx) {
  return regs[idx];
}

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t npc) {
    bool eqreg = true; 
    for(int i = 0; i < 32; i++) {
        if(ref_r->gpr[i] != cpu_s.gpr[i]) {
            eqreg = false;
            printf("difftest.cpp\n\033[36m%d-%s \033[34mis different at pc = 0x%08lx\n", i, reg_name(i), cpu_s.pc);
            printf("right %08lx, wrong %08lx\033[0m\n", ref_r->gpr[i], cpu_s.gpr[i] );
        }
    }
    if(ref_r->pc != npc) {
        printf("difftest.cpp\nright npc:%08lx\nnow npc:%08lx\n",ref_r->pc,npc);
        eqreg = false;
        printf("now pc 0x%08lx\n", cpu_s.pc);
    }
        
    return eqreg;
}


static void checkregs(CPU_state *ref, vaddr_t pc) {
    if (!isa_difftest_checkregs(ref, pc)) {
        exit_now();
        isa_reg_display();
    }
}

void difftest_step(vaddr_t pc, vaddr_t npc) {
    CPU_state ref_r;
    if (skip_dut_nr_inst > 0) {
        ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
        if (ref_r.pc == npc) {
          skip_dut_nr_inst = 0;
          checkregs(&ref_r, npc);
          return;
        }
        skip_dut_nr_inst--;
        if (skip_dut_nr_inst == 0) printf("can not catch up with ref.pc = %lx at pc = %lx", ref_r.pc, pc);
        return;
    }
    
    if (is_skip_ref) {
        // to skip the checking of an instruction, just copy the reg state to reference design
        ref_difftest_regcpy(&cpu_s, DIFFTEST_TO_REF);
        is_skip_ref = false;
        return;
    }
    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    checkregs(&ref_r, npc);
}