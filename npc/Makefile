FG_YELLOW = "\001\033[1;33m"
FG_MAGENTA = "\001\033[1;35m"
CLOSE = "\001\033[0m\002"

override ARGS += -l $(shell pwd)/log/npc-log.txt

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

## Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
## Optimiza
VERILATOR_FLAGS += -Os -x-assign 0
## Don't warn the no-fatal warning
VERILATOR_FLAGS += --Wno-fatal
## make waveforms
VERILATOR_FLAGS += --trace
## make dir
VERILATOR_FLAGS += --Mdir  sim

# Input_file for Verilator
VERILATOR_INPUT = ./vsrc/ysyx_22050243_top.v ./npc-main.cpp -y ./vsrc

all:
	@echo "Write this Makefile by your self."

sim: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@$^
	@echo
	@echo $(FG_YELLOW) "-- VERILATE ----------------" $(CLOSE)
	@echo
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo
	@echo $(FG_YELLOW) "-- BUILDING ----------------" $(CLOSE)
	@echo
	$(MAKE)  -j -C sim -f ../Makefile_obj

	@echo
	@echo $(FG_YELLOW) "-- GENERATE ----------------" $(CLOSE)
	$(MAKE) -j -C $(NEMU_HOME)

	@echo
	@echo $(FG_YELLOW) "-- RUN ---------------------" $(CLOSE)
	@echo
	sim/Vysyx_22050243_top $(ARGS) $(IMG) 

	@echo
	@echo $(FG_YELLOW) "-- DONE --------------------" $(CLOSE)
	@echo
	@echo $(FG_MAGENTA) "To see waveforms, please "make wave"" $(CLOSE)
	@echo
wave:
	gitwave $(WAVE).vcd

clean:
	@rm -rf $(BUILD_DIR)
	@rm -rf wave.vcd

include ../Makefile