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
# 	@echo "-- VERILATE MuxKeyInternal module --"
# 	@echo "---------------------------------"
# 	$(VERILATOR) $(VERILATOR_FLAGS) --protect-lib MuxKeyInternal -Mdir obj_dir_MuxKeyInternal/ MuxKeyInternal.v
# 	@echo "-- COMPILE protected library --"
# 	$(MAKE) -j 20 -C obj_dir_MuxKeyInternal
# 	@echo "-- VERILATE MuxKey module --"
# 	$(VERILATOR) $(TOP_VERILATOR_FLAGS) --exe 
# 	@echo 

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
	verilator --Wall --cc -Mdir obj_dir_MuxKeyInternal/ ./vsrc/experiment/1.mux/MuxKeyInternal.v
	verilator --Wall --cc -Mdir obj_dir MuxKey/ ./vsrc/experiment/1.mux/MuxKey.v
	verilator --Wall --cc --exe -build ./csrc/experiment/mux.cpp 	./vsrc/experiment/1.mux/mux.v
run:
	./obj_dir/V$(DESIGN)

wave:
	gitwave ./obj_dir/$(WAVE).vcd

clean:
	@rm -rf obj_dir*
	@rm -rf wave.vcd

include ../Makefile