# # Makefile

# DESIGN = mux
# SIM = mux.cpp
# WAVE = mux

# # VERILATOR = verilator --Wall --cc --exe -build --trace \
# #             ./csrc/experiment/$(SIM) \
# # 			./vsrc/experiment/1.mux/$(DESIGN).v

# VERILATOR = verilator
# VERILATOR_FLAGS += -cc
# VERILATOR_FLAGS += -0s -x-assign 0
# VERILATOR_FLAGS += Wall

# TOP_VERILATOR_FLAGS = $(VERILATOR_FLAGS) --trace

# default: com

# all:
# 	@echo "Write this Makefile by your self."

# com:
# 	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
# 	@echo "Write this Makefile by your self."
# 	@echo "-- Verilator $(DESIGN) example --"
# 	@echo "-- VERILATE MuxKeyInternal module"
# 	$()

# run:
# 	./obj_dir/V$(DESIGN)

# wave:
# 	gitwave ./obj_dir/$(WAVE).vcd

# clean:
# 	@rm -rf obj_dir
# 	@rm -rf wave.vcd

# include ../Makefile
# Makefile

DESIGN = mux
SIM = mux.cpp
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