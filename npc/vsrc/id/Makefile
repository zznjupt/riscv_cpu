TOPNAME = ysyx_22050243_id

NPC_VSRC_DIR = ./src
OBJ_DIR = ./obj_dir/

VERILATOR = verilator
VERILATOR_CFLAGS +=  -MMD --build -cc --exe --trace \
					 -O3 --x-assign fast --x-initial fast --noassert \
					 --timescale "1ns/1ns"  

VSRCS = $(shell find $(abspath ./src) -name "*.v")
CSRCS = $(shell find $(abspath ./src) -name "*.cpp")

sim:
	$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCS) $(VSRCS) -y $(NPC_VSRC_DIR) --top-module $(TOPNAME)
	make -j -C $(OBJ_DIR) -f V$(TOPNAME).mk V$(TOPNAME)
	$(OBJ_DIR)V$(TOPNAME)
run:
	$(OBJ_DIR)V$(TOPNAME)

clean:
	@rm -rf $(OBJ_DIR)
	@rm -rf wave.vcd