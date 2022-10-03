default: Vysyx_22050243_top

# Include the rules made by verilator
include Vysyx_22050243_top.mk

# Use OBJCACHE (cccache) if using gmake and its installed
COMPILE.cc = $(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c

# Compile flags

## Turn on creating .d make dependency files
CPPFLAGS += -MMD -MP

## Compile in Verilator runtime debugging, so +verilator+debug works
CPPFLAGS += -DVL_DEBUG=1

## Use the realline lib
LIBS += -lreadline

# itrace
CXXSRC = csrc/disasm.cc
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)
LIBS +=-ldl