# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vddr4_dimm.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vddr4_dimm \
	Vddr4_dimm___024root__DepSet_he98dae16__0 \
	Vddr4_dimm___024root__DepSet_h35b00a56__0 \
	Vddr4_dimm___024root__DepSet_h35b00a56__1 \
	Vddr4_dimm___024root__DepSet_h35b00a56__2 \
	Vddr4_dimm__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vddr4_dimm___024root__Slow \
	Vddr4_dimm___024root__DepSet_he98dae16__0__Slow \
	Vddr4_dimm___024root__DepSet_h35b00a56__0__Slow \
	Vddr4_dimm___024unit__Slow \
	Vddr4_dimm___024unit__DepSet_hb4434c91__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vddr4_dimm__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vddr4_dimm__Syms \
	Vddr4_dimm__Trace__0__Slow \
	Vddr4_dimm__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
