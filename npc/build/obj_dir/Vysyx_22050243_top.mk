# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_22050243_top.mk

default: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/build/ysyx_22050243_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /home/leizhenyu/systemc/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /home/leizhenyu/systemc/lib-linux64

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_22050243_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_22050243_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-DTOP_NAME="Vysyx_22050243_top" \
	-I/usr/lib/llvm-11/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_FORMAT_MACROS \
	-D__STDC_LIMIT_MACROS \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lLLVM-11 \
	-lSDL2 \
	-lreadline \
	-ldl \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	axi_test \
	difftest \
	disasm \
	itrace \
	paddr \
	sdb \
	sim-main \
	vga \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc \
	/home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/axi \


### Default rules...
# Include list of all generated classes
include Vysyx_22050243_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

axi_test.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/axi/axi_test.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
difftest.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/difftest.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
itrace.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/itrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/paddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sim-main.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/sim-main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/admin1/ZZworkspace/git/ysyx-workbench/npc/csrc/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/admin1/ZZworkspace/git/ysyx-workbench/npc/build/ysyx_22050243_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
