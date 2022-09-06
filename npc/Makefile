# Makefile

DESIGN = onoff
SIM = sim_main.cpp
WAVE = wave

VERILATOR = verilator --Wall --cc --exe -build --trace \
            ./csrc/$(SIM) \
			./vsrc/$(DESIGN).v

all:
	@echo "Write this Makefile by your self."

com:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$(VERILATOR)
run:
	./obj_dir/V$(DESIGN)

wave:
	gitwave ./obj_dir/$(WAVE).vcd

clean:
	@rm -rf obj_dir
	@rm -rf wave.vcd

include ../Makefile
