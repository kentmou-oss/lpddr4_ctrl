# LPDDR4 Host Controller & Digital PHY

A complete Verilog implementation of an LPDDR4 Host Controller and Digital PHY with 4 AXI ports and 32-bit DQ bus.

## Features

- **4 AXI4 Slave Ports**: Connect to multiple masters in SOC
- **32-bit DQ Bus**: x32 LPDDR4 device configuration
- **Digital PHY**: Full physical layer with serialization/deserialization
- **Training Support**: Write leveling, read gate, CA training
- **Mode Register Interface**: Full MR access via APB
- **DFI 3.1 Compatible**: Standard DFI interface between controller and PHY

## Architecture

```
lpddr4_top
├── axi_crossbar (4:1)
│   └── AXI command arbitration
├── lpddr4_controller
│   ├── Command FSM
│   ├── Bank/Row management
│   └── Refresh scheduling
└── lpddr4_phy
    ├── DFI interface
    ├── Write path (4:1 serialization)
    ├── Read path (1:4 deserialization)
    └── CA shift register
```

## LPDDR4 Protocol Support

- Activate, Read, Write, Precharge commands
- All Bank Refresh
- Mode Register Read/Write (MRW/MRR)
- ZQ Calibration
- Write Leveling
- Read Gate Training
- CA Training
- BL16 (fixed), optional BC4

## Quick Start

```bash
# Build with iverilog
make build

# Run simulation
make sim

# View waveforms
make wave
```

## Configuration

### APB Registers

| Address | Name | Description |
|---------|------|-------------|
| 0x00 | CTRL_CFG | Control configuration |
| 0x04 | TIMING_CFG | Timing parameters |
| 0x08 | PHY_CFG | PHY settings |
| 0x0C | TRAINING_CFG | Training control |
| 0x10 | STATUS | Status register |
| 0x14 | TRAINING_STATUS | Training results |

### AXI Address Mapping

```
[31:28] - Reserved
[27:26] - Chip select
[25:24] - Bank group
[23:22] - Bank address
[21:8]  - Row address
[7:3]   - Column address (BL16 aligned)
[2:0]   - Byte lane
```

## Timing Parameters (DDR-3200)

| Parameter | Value |
|-----------|-------|
| tCK | 0.937ns |
| tRP | 18ns |
| tRCD | 18ns |
| tRAS | 42ns |
| tRFC | 130ns |
| tRL | 14 cycles |
| tWL | 4 cycles |

## Interface Signals

### AXI4 (per port)
- 32-bit address, 128-bit data
- ID width: 4 bits
- Max burst length: 256

### LPDDR4 SDRAM
- DQ[31:0], DQS[3:0], DQS_N[3:0]
- CA[9:0], CS_N[1:0], CK/CK_N
- CKE[1:0], ODT[1:0], RESET_N

## Directory Structure

```
lpddr4_ctrl/
├── rtl/
│   ├── top/           # Top-level integration
│   ├── axi_slave/     # AXI interface logic
│   ├── controller/    # Memory controller
│   ├── phy/           # Digital PHY
│   ├── training/      # Training sequences
│   └── common/        # Shared types/utilities
├── tb/                # Testbenches
├── docs/              # Specifications
└── Makefile          # Build system
```

## Simulation

The testbench includes:
- Clock generation (100MHz sys, 200MHz DDR)
- Reset sequence
- APB register access
- AXI write/read transactions
- DRAM model (simple)

## Notes

- This is a reference implementation for educational and prototyping purposes
- Production designs may require additional features (ECC, power management, etc.)
- Timing parameters are examples and should be adjusted for specific device
- PHY I/O cells need technology-specific implementation (IO80, TSMC, etc.)

## License

Copyright (c) 2026 - Open Source