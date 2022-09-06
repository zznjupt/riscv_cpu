# Makefile

export DESIGN=onoff
export SIM=sim_main.cpp
export WAVE=wave

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@verilator -Wall --cc --exe -build --trace ./csrc/$(SIM) vsrc/$(DESIGN).v
	@./obj_dir/V$(DESIGN)

wave:
	gitwave ./obj_dir/$(WAVE).vcd

clean:
	@rm -rf obj_dir

include ../Makefile
