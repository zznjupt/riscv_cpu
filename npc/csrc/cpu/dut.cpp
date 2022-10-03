#include <dlfcn.h>
#include <stdint.h>


typedef struct REF_CPU_state {
    uint64_t gpr[32];
    uint64_t PC;
} REF_CPU_state;

REF_CPU_state ref_cpu;

static void reg_init(REF_CPU_state ref_cpu, CPU_state dut_cpu_state) {
    for(int i = 0; i < 32; i++) ref_cpu.gpr[i] = dut_cpu_state.cpu_gpr;
    ref_cpu.PC = cpu.pc;
}

void (*ref_difftest_init)(int port) = NULL;
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
// void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef DIFFTEST
void init_difftest(char *ref_so_file, long img_size, int port) {
    assert(ref_so_file != NULL);

    void *handle; 
    handle = 
    dlopen(ref_so_file, RTLD_LAZY);                               
    assert(handle);

    ref_difftest_init = 
    (void(*)(int))dlsym(handle, "my_difftest_init");   
    ref_difftest_init(port);                                                
    assert(ref_difftest_init);

    ref_difftest_memcpy = 
    (void(*)(uint32_t, void *, size_t, bool))dlsym(handle, "my_difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = 
    (void(*)(void *, bool))dlsym(handle, "my_difftest_regcpy");
	assert(ref_difftest_regcpy);

    ref_difftest_exec = (void(*)(uint64_t))dlsym(handle, "my_difftest_exec");
	assert(ref_difftest_exec);

	// ref_difftest_raise_intr = 
    // dlsym(handle, "difftest_raise_intr");
	// assert(ref_difftest_raise_intr);

	char log_info_1[64] = 
    ASNI_FMT("Differential testing: ON", ASNI_FG_GREEN);
	my_log(log_info_1);
	char log_info_2[256] = 
    "The result of every instruction will be compared with ref_so_file. \nThis will help you a lot for debugging, but also significantly reduce the performance.\n";
	my_log(log_info_2);
}

static int checkregs(REF_CPU_state ref, uint64_t PC) {
	int abort = 0;
	for (int i = 0; i < 32; i++) if (cpu.cpu_gpr[i] != ref.gpr[i]) abort = 1;
	if (abort == 1) {
		contextp->gotFinish(true);
		char log_info[96] = 
        ASNI_FMT("Differential testing Failed, Please Check Your NPC", ASNI_FG_RED);
		my_log(log_info);
		printf(ASNI_FMT("Differential testing Failed, Please Check Your NPC at %08lx\n", ASNI_FG_RED), cpu.pc);
		return abort + 1;
	}
	return abort;
}

int difftest_step(uint64_t PC) {
	int exit = 0;
	reg_init(ref_cpu, cpu);
	REF_CPU_state ref_temp;
	ref_difftest_exec(1);
	ref_difftest_regcpy(&ref_temp, DIFFTEST_TO_DUT);
	exit = checkregs(ref_temp, PC);
	return exit;
}

#endif
