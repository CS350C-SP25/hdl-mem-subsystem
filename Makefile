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
DIMM_SRCS = --cc src/ddr4_dimm.sv --exe src/dimm_tb2.cpp
SCHEDULER_SRCS = --cc $(wildcard src/mem_control/*.sv) src/testbenches/mem_scheduler_tb.sv
CACHE_SRCS = --cc --timing src/cache.sv src/testbenches/cache_tb.sv

# Output binaries
DIMM_BIN = obj_dir/Vddr4_dimm
SCHEDULER_BIN = obj_dir/Vmem_scheduler
CACHE_BIN = obj_dir/Vcache

# Default target (alias for dimm)
all: dimm

# Compile and run for DIMM
dimm: $(DIMM_BIN)
	./$(DIMM_BIN)

# Compile and run for Scheduler
scheduler: $(SCHEDULER_BIN)
	./$(SCHEDULER_BIN)

cache: $(CACHE_BIN)
    ./$(CACHE_BIN)

# Compile with Verilator
$(DIMM_BIN):
	$(OBJCACHE) $(VERILATOR) $(VFLAGS) $(DIMM_SRCS)

$(SCHEDULER_BIN):
	$(OBJCACHE) $(VERILATOR) $(VFLAGS) $(SCHEDULER_SRCS)

$(CACHE_BIN):
    $(OBJCACHE) $(VERILATOR) $(VFLAGS) $(CACHE_SRCS)

# Clean generated files
clean:
	rm -rf obj_dir $(DIMM_BIN) $(SCHEDULER_BIN) $(CACHE_BIN) *.log *.dmp *.vcd

clean-dimm:
	rm -rf obj_dir/Vddr4_dimm *.log *.dmp *.vcd

clean-scheduler:
	rm -rf obj_dir/Vmem_scheduler

clean-cache:
    rm -rf obj_dir/Vcache

.PHONY: all clean run dimm scheduler
