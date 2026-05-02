# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Build Commands

```bash
# Verilator simulation (recommended)
make verilator_sim          # Build with Verilator
make verilator_run          # Build and run
./lpddr4_verilator_sim      # Run simulation directly

# Iverilog
make build                  # Build basic testbench
make build_sim              # Build full simulation testbench
make sim_vvp                # Run with iverilog

# VCS
make vcs                    # Build with VCS
make sim_vcs                # Run VCS simulation

# Linting
make lint                   # Lint RTL
make lint_tb                # Lint testbench + RTL

# Cleanup
make clean                  # Remove build artifacts
make clean_all              # Remove everything including Verilator binary
```

## Architecture

### Directory Structure
```
rtl/
├── top/lpddr4_top.sv           # Top-level integration
├── axi_slave/
│   ├── axi_crossbar.sv          # 4:1 AXI arbitration, round-robin
│   ├── axi_slave_if.sv          # AXI slave with 32 read / 16 write outstanding
│   └── axi_outstanding_tracker.sv
├── controller/lpddr4_controller.sv  # Main FSM, init, command queue
├── phy/lpddr4_phy.sv            # DFI interface, serialization
├── training/lpddr4_training.sv  # Training sequences
└── common/lpddr4_common.sv      # Package, CRC, async FIFO
tb/
├── lpddr4_sim_tb.sv             # Main testbench with 4 traffic generators
├── lpddr4_model.sv              # Behavioral DRAM model
├── axi_traffic_gen.sv           # Random AXI traffic generator
└── main.cpp                     # Verilator entry point with FST tracing
```

### Signal Flow
AXI ports (s0_axi_*) → axi_crossbar → axi_slave_if → lpddr4_controller → lpddr4_phy → DRAM signals

**Critical arbitration logic** (axi_crossbar lines 197-200):
```
m*_axi_awready = port*_granted && cmd_ready && m*_axi_awvalid
```
AXI ready requires: (1) port is granted, (2) controller cmd_queue not full, (3) valid asserted.

### Initialization State Machines

**Controller**: RESET → INIT_WAIT (100 cycles) → INIT_MR (200 cycles) → INIT_ZQCAL (250 cycles) → IDLE

**Memory model**: STATE_RESET → STATE_INIT_WAIT → STATE_INIT_MRS → STATE_INIT_ZQCAL → STATE_IDLE

### Key Timing Parameters (DDR-3200, tCK=0.937ns)

| Parameter | Value |
|-----------|-------|
| tRP | 18ns |
| tRCD | 18ns |
| tRAS | 42ns |
| tRL | 14 clocks |
| tWL | 4 clocks |

### Initialization Sequence

Controller: RESET → INIT_WAIT (100 cycles) → INIT_MR (200 cycles) → INIT_ZQCAL (250 cycles) → IDLE

Memory model: STATE_RESET → STATE_INIT_WAIT → STATE_INIT_MRS → STATE_INIT_ZQCAL → STATE_IDLE

## Verilator Notes

- Uses `--timing` for cycle-accurate simulation
- Uses `--trace --trace-fst` for FST waveform output (lpddr4_sim.fst)
- Entry point is `tb/main.cpp` which uses `VerilatedFstC` for waveform
- Simulation time managed via `eventsPending()` and `nextTimeSlot()`
- Verilator object directory: `obj_dir/`

## AXI Protocol Notes

- AXI IDs: AW uses 4-bit, AR uses 5-bit (extended for 32 outstanding reads)
- Outstanding tracking per-ID: `read_pending_cnt[32]` and `write_pending_cnt[16]`
- W channel requires WLAST to complete burst before CMD_SEND
- Read data returns via `resp_valid`/`resp_ready` with reorder buffer

## Debug Tips

- FST waveform: `gtkwave lpddr4_sim.fst &` (Verilator) or VCD: `lpddr4_sim.vcd`
- `simulation.log` captures Verilator output
- Enable `$display` blocks in `tb/lpddr4_sim_tb.sv` for debug output
- AXI ARID is 5-bit (32 outstanding reads), AWID is 4-bit (16 outstanding writes)

## DFI Interface

Internal connection between controller and PHY:
- 128-bit write/read data bus
- CA[9:0], CS_N[1:0], CKE[1:0], ODT[1:0]
- Separate clk and clk_gate signals