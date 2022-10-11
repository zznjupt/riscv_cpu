TOP_NAME  = top
INC_PATH ?=
RM        = rm -rf

# build
BUILD_DIR = $(NPC_HOME)/build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOP_NAME)

# verilator
VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc --exe --trace \
				-O3 --x-assign fast --x-initial fast --noassert \
				--timescale "1ns/1ns"
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS  += $(INCFLAGS) -DTOP_NAME="\"V$(TOP_NAME)\""
CFLAGS += $(shell llvm-config-11 --cxxflags)
LDFLAGS += $(shell llvm-config-11 --libs) 
LDFLAGS += -lSDL2  -lreadline -ldl 

# src
VSRCS = $(shell find $(abspath $(NPC_HOME)/vsrc) -name "*.v")
CSRCS = $(shell find $(abspath $(NPC_HOME)/csrc) -name "*.cpp" -or -name "*.cc") 
HSRCS += $(shell find $(abspath $(NPC_HOME)/csrc) -name "*.h")

default: $(BIN)
	$(shell mkdir -p $(BUILD_DIR))

$(BIN): $(VSRCS) $(CSRCS) $(HSRCS)
	@$(RM) $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOP_NAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

commit:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

run: $(BIN) $(ARGS)
	@$^

wave:
	gitwave $(WAVE).vcd

clean:
	@$(RM) $(BUILD_DIR)
	@$(RM) wave.vcd

.PHONY: default commit run wave clean