# LPDDR4 Controller & PHY Build System

.PHONY: all compile sim build wave clean lint sim_verilator

# Tool paths (customize for your environment)
VERILATOR ?= verilator
VCS ?= vcs
IVERILOG ?= iverilog
GTKWAVE ?= gtkwave

# Source files
RTL_TOP = rtl/top/lpddr4_top.sv
RTL_PHY = rtl/phy/lpddr4_phy.sv
RTL_CTRL = rtl/controller/lpddr4_controller.sv
RTL_CROSSBAR = rtl/axi_slave/axi_crossbar.sv
RTL_AXI = rtl/axi_slave/axi_slave_if.sv
RTL_AXI_TRACKER = rtl/axi_slave/axi_outstanding_tracker.sv
RTL_TRAIN = rtl/training/lpddr4_training.sv
RTL_COMMON = rtl/common/lpddr4_common.sv

RTL_SOURCES = $(RTL_TOP) $(RTL_PHY) $(RTL_CTRL) $(RTL_CROSSBAR) $(RTL_AXI) $(RTL_AXI_TRACKER) $(RTL_TRAIN) $(RTL_COMMON)

# Testbench files
TB_BASIC = tb/lpddr4_tb.sv
TB_SIM = tb/lpddr4_sim_tb.sv
TB_MODEL = tb/lpddr4_model.sv
TB_TG = tb/axi_traffic_gen.sv

# Include paths
INCDIR = -Irtl/common -Itb

# Verilator options
VERILATOR_OPTS = --top-module lpddr4_sim_tb --cc --exe
VERILATOR_OPTS += --CFLAGS "-O3 -Wall -pthread"
VERILATOR_OPTS += --LDFLAGS "-lpthread"
VERILATOR_OPTS += -f $(shell pwd)/rtl.vc
VERILATOR_OPTS += +1800-2012ext+sv
VERILATOR_OPTS += --timing
VERILATOR_OPTS += --trace --trace-fst
VERILATOR_OPTS += -Wno-UNOPTFLAT
VERILATOR_OPTS += -Wno-LATCH
VERILATOR_OPTS += -Wno-IMPLICITSTATIC
VERILATOR_OPTS += -Wno-MODDUP
VERILATOR_OPTS += -Wno-CASEINCOMPLETE
VERILATOR_OPTS += -Wno-CASEOVERLAP
VERILATOR_OPTS += -Wno-WIDTHTRUNC
VERILATOR_OPTS += -Wno-WIDTHEXPAND
VERILATOR_OPTS += -Wno-SELRANGE
VERILATOR_OPTS += -Wno-ASSIGNDLY
VERILATOR_OPTS += -Wno-IMPERFECTSCH

# VCS options
VCS_OPTS = -full64 -timescale=1ns/1ps -cpp g++ -cc gcc -sverilog
VCS_OPTS += +v2k +acc +warn=noall -notice -debug
VCS_OPTS += -I$(shell pwd)/rtl/common

# Iverilog options
IVERILOG_OPTS = -g2012 -Wall $(INCDIR)

all: build

# ===========================================
# Verilator Simulation (recommended for this project)
# ===========================================
verilator_sim: verilator_deps
	@echo "Building with Verilator..."
	$(VERILATOR) $(VERILATOR_OPTS) \
		-o lpddr4_verilator_sim \
		tb/main.cpp \
		$(TB_SIM) $(TB_MODEL) $(TB_TG) \
		$(RTL_SOURCES)
	@echo "Build complete. Run with: ./lpddr4_verilator_sim"

verilator_run: verilator_sim
	@echo "Running Verilator simulation..."
	./lpddr4_verilator_sim

verilator_wave: verilator_sim
	@echo "Running with waveform dump..."
	./lpddr4_verilator_sim +vcdplus+on
	$(GTKWAVE) lpddr4_sim.vcd &

verilator_clean:
	rm -rf lpddr4_verilator_sim obj_dir
	rm -f *.vcd *.vpd

verilator_deps:
	@if [ ! -f rtl.vc ]; then \
		echo "Creating rtl.vc..."; \
		for f in $(RTL_SOURCES); do echo $$f; done > rtl.vc; \
	fi

# ===========================================
# Iverilog (iverilog) - build only
# ===========================================
build: $(RTL_SOURCES) $(TB_BASIC)
	$(IVERILOG) $(IVERILOG_OPTS) -o lpddr4_sim.vvp $(TB_BASIC) $(RTL_SOURCES)

# Build with simulation testbench
build_sim: $(RTL_SOURCES) $(TB_SIM) $(TB_MODEL) $(TB_TG)
	$(IVERILOG) $(IVERILOG_OPTS) -o lpddr4_sim.vvp $(TB_SIM) $(TB_MODEL) $(TB_TG) $(RTL_SOURCES)

# ===========================================
# VCS Compilation
# ===========================================
vcs: $(RTL_SOURCES) $(TB_BASIC)
	$(VCS) $(VCS_OPTS) -o lpddr4_simv $(TB_BASIC) $(RTL_SOURCES)

vcs_sim: $(RTL_SOURCES) $(TB_SIM) $(TB_MODEL) $(TB_TG)
	$(VCS) $(VCS_OPTS) -o lpddr4_simv $(TB_SIM) $(TB_MODEL) $(TB_TG) $(RTL_SOURCES)

# ===========================================
# Run Simulations
# ===========================================
sim: build
	vvp lpddr4_sim.vvp

sim_vvp: build_sim
	vvp lpddr4_sim.vvp

sim_vcs: vcs
	./lpddr4_simv

sim_vcs_sim: vcs_sim
	./lpddr4_simv

# Waveform viewing
wave: build
	vvp lpddr4_sim.vvp +vcdplus+lpddr4_tb.vpd &
	$(GTKWAVE) lpddr4_tb.vpd &

wave_vvp: build_sim
	vvp lpddr4_sim.vvp +vcdplus+lpddr4_sim.vpd &
	$(GTKWAVE) lpddr4_sim.vpd &

# ===========================================
# Linting
# ===========================================
lint:
	$(VERILATOR) --lint-only $(RTL_SOURCES)

lint_tb:
	$(VERILATOR) --lint-only $(TB_SIM) $(RTL_SOURCES)

# ===========================================
# Clean
# ===========================================
clean:
	rm -f lpddr4_sim.vvp lpddr4_sim lpddr4_simv
	rm -f *.vcd *.vpd
	rm -rf obj_dir
	rm -f rtl.vc

clean_all: clean
	rm -f lpddr4_verilator_sim

# ===========================================
# Help
# ===========================================
help:
	@echo "LPDDR4 Controller Build System"
	@echo ""
	@echo "Targets:"
	@echo "  verilator_sim   - Build with Verilator (recommended)"
	@echo "  verilator_run   - Build and run Verilator simulation"
	@echo "  verilator_wave  - Build and run with waveform"
	@echo "  build           - Build with iverilog (basic testbench)"
	@echo "  build_sim       - Build with iverilog (full simulation)"
	@echo "  sim             - Run iverilog simulation"
	@echo "  sim_vvp         - Run full simulation with iverilog"
	@echo "  vcs             - Build with VCS"
	@echo "  vcs_sim         - Build full simulation with VCS"
	@echo "  sim_vcs         - Run VCS simulation"
	@echo "  sim_vcs_sim     - Run full simulation with VCS"
	@echo "  wave            - Run with waveform viewer"
	@echo "  lint            - Lint RTL with Verilator"
	@echo "  clean           - Remove build artifacts"
	@echo ""
	@echo "Environment variables:"
	@echo "  VERILATOR - Path to verilator (default: verilator)"
	@echo "  VCS       - Path to vcs"
	@echo "  IVERILOG  - Path to iverilog"
	@echo "  GTKWAVE   - Path to gtkwave"