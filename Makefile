# Try to use /u/nate/verilator if it exists; otherwise, use Verilator from PATH
ifneq ($(wildcard /u/nate/verilator),)
    VERILATOR := /u/nate/verilator
else
    VERILATOR := $(shell which verilator)
endif
$(info Using Verilator: $(VERILATOR))

CCACHE_PATH := $(shell which ccache 2>/dev/null)
ifeq ($(strip $(CCACHE_PATH)),)
    OBJCACHE :=
else
    OBJCACHE := OBJCACHE=ccache
endif
$(info OBJCACHE: $(OBJCACHE))

# Compiler
VERILATOR ?= /u/nate/verilator

# Flags
VFLAGS = --binary -j $$(( `nproc` - 1 )) --trace 

# Source files
SRCS = --cc src/ddr4_dimm.sv --exe src/dimm_tb2.cpp

# Output binary
BIN = obj_dir/Vddr4_dimm

# Run the verilog simulation
run: clean $(BIN)
	./$(BIN)

# Compile with Verilator
$(BIN):
	$(OBJCACHE) $(VERILATOR) $(VFLAGS) $(SRCS)



# Clean generated files
clean:
	rm -rf obj_dir $(BIN) *.log *.dmp

.PHONY: all clean run
