# LPDDR4 Host Controller & PHY Specification

## 1. Overview

- **Project Name**: lpddr4_ctrl
- **Type**: Digital Logic IP (Verilog)
- **Core Functionality**: Host controller and Digital PHY for LPDDR4 DRAM interface with 4 AXI slave ports and 32-bit DQ bus
- **Target**: SOC integration, LPDDR4 devices (x32 configuration)

## 2. Architecture

```
┌─────────────────────────────────────────────────────────┐
│                     lpddr4_top                          │
│  ┌───────────────────────────────────────────────────┐  │
│  │              axi_crossbar (4:1)                   │  │
│  │   axi_if[0] ──┐                                    │  │
│  │   axi_if[1] ──┼──► lpddr4_ctrl ──► lpddr4_phy     │  │
│  │   axi_if[2] ──┤       │              │             │  │
│  │   axi_if[3] ──┘       ▼              ▼             │  │
│  └────────────────────┐────────────────────────────┘   │
│                       │                                 │
│              ┌────────┴────────┐                       │
│              │   lpddr4_ctrl    │                       │
│              │  ┌────────────┐  │                       │
│              │  │ AXI FSM    │  │                       │
│              │  │ cmd_queue  │  │                       │
│              │  │ refresh    │  │                       │
│              │  │ training   │  │                       │
│              │  └────────────┘  │                       │
│              └────────┬────────┘                       │
│                       │                                 │
│              ┌────────┴────────┐                       │
│              │   lpddr4_phy    │                       │
│              │  ┌────────────┐  │                       │
│              │  │ DFI Master │  │                       │
│              │  │ TX phase   │  │                       │
│              │  │ RX phase   │  │                       │
│              │  │ Datgen     │  │                       │
│              │  └────────────┘  │                       │
│              └────────┬────────┘                       │
└───────────────────────┬─────────────────────────────────┘
                        │
          ┌─────────────┼─────────────┐
          │             │             │
         DQ[31:0]    DQS[3:0]    CA[9:0]
```

## 3. Interface Specifications

### 3.1 AXI Slave Interface (x4)

| Signal | Width | Direction | Description |
|--------|-------|-----------|-------------|
| axi_awid | 4 | Input | Write address ID |
| axi_awaddr | 32 | Input | Write address |
| axi_awlen | 8 | Input | Write burst length |
| axi_awsize | 3 | Input | Write burst size |
| axi_awburst | 2 | Input | Write burst type |
| axi_awvalid | 1 | Input | Write address valid |
| axi_awready | 4 | Output | Write address ready |
| axi_wdata | 128 | Input | Write data |
| axi_wstrb | 16 | Input | Write strobe |
| axi_wlast | 1 | Input | Write last |
| axi_wvalid | 1 | Input | Write valid |
| axi_wready | 4 | Output | Write ready |
| axi_bid | 4 | Output | Write response ID |
| axi_bresp | 2 | Output | Write response |
| axi_bvalid | 1 | Output | Write response valid |
| axi_bready | 1 | Input | Write response ready |
| axi_arid | 5 | Input | Read address ID (32 outstanding) |
| axi_araddr | 32 | Input | Read address |
| axi_arlen | 8 | Input | Read burst length |
| axi_arsize | 3 | Input | Read burst size |
| axi_arburst | 2 | Input | Read burst type |
| axi_arvalid | 1 | Input | Read address valid |
| axi_arready | 4 | Output | Read address ready |
| axi_rid | 5 | Output | Read response ID (32 outstanding) |
| axi_rdata | 128 | Output | Read data |
| axi_rresp | 2 | Output | Read response |
| axi_rlast | 1 | Output | Read last |
| axi_rvalid | 1 | Output | Read valid |
| axi_rready | 1 | Input | Read ready |

### 3.2 LPDDR4 Device Interface (32-bit DQ)

| Signal | Width | Direction | Description |
|--------|-------|-----------|-------------|
| ddr_dq | 32 | Bidir | Data bus |
| ddr_dqs | 4 | Bidir | Data strobes (per byte) |
| ddr_dqs_n | 4 | Bidir | Complementary data strobes |
| ddr_ca | 10 | Output | Command/address |
| ddr_cs_n | 2 | Output | Chip select (dual channel) |
| ddr_ck | 1 | Output | Clock (single-ended) |
| ddr_ck_n | 1 | Output | Complementary clock |
| ddr_cke | 2 | Output | Clock enable |
| ddr_odt | 2 | Output | On-die termination |
| ddr_reset_n | 1 | Output | Reset |

### 3.3 DFI Interface (Internal)

| Signal | Width | Description |
|--------|-------|-------------|
| dfi_wrdata | 128 | Write data |
| dfi_wrdata_en | 1 | Write data enable |
| dfi_rddata | 128 | Read data |
| dfi_rddata_en | 1 | Read data enable |
| dfi_cs_n | 2 | Chip select |
| dfi_cke | 2 | Clock enable |
| dfi_odt | 2 | ODT control |
| dfi_ca | 10 | Command/address |
| dfi_clk | 1 | DFI clock |
| dfi_clk_gate | 1 | Clock gate |

## 4. LPDDR4 Protocol Support

### 4.1 Commands

- **ACTIVATE**: Activate row in bank
- **READ**: Read from active row (BL16 fixed, optional BC4)
- **WRITE**: Write to active row (BL16 fixed, optional BC4)
- **PRECHARGE**: Precharge bank/row
- **REFRESH**: Refresh command (all banks)
- **MRW**: Mode Register Write
- **MRR**: Mode Register Read
- **DESELECT**: No operation

### 4.2 Mode Registers (MR)

| Register | Description |
|----------|-------------|
| MR0 | Device feature info |
| MR1 | Device feature info |
| MR2 | Timing parameters (tRFC, tRRD) |
| MR3 | PHY configuration |
| MR4 | Temperature sensor |
| MR5 | Basic configuration 1 |
| MR6 | Timing parameters (tRP, tRCD) |
| MR10 | Calibration (ZQ) |
| MR11 | ODT configuration |
| MR12 | Write leveling |
| MR13 | FSP-OP |
| MR14 | FSP-WR |
| MR16 | CRC |
| MR17 | CA training |
| MR18-19 | Write training |
| MR20 | Read training |
| MR32 | ZQ calibration |
| MR40-41 | Device feature 2 |

### 4.3 Timing Parameters (LPDDR4-3200 example)

| Parameter | Value | Description |
|-----------|-------|-------------|
| tCK | 0.937ns | Clock period (DDR-3200) |
| tRPab | 18ns | Row precharge (all banks) |
| tRCD | 18ns | RAS to CAS delay |
| tRRD | 4ns | Row to row delay |
| tRFCab | 130ns | Refresh to active (all banks) |
| tRAS | 42ns | Row active time |
| tWL | 4 | Write latency |
| tRL | 14 | Read latency |
| tDQSCK | 2.5ns | DQS output access |
| tDQSQ | 0.3tCK | DQS-DQ skew |
| tRDA | 5 | Read to precharge |
| tWRA | 5 | Write to precharge |

## 5. Training Features

### 5.1 Write Leveling
- Host sends DQS, device returns DQ
- Adjusts DQS-DQ alignment

### 5.2 Read Gate Training
- Calibrates DQS gating
- Handles receive enable timing

### 5.3 Write Data Training
- Host sends pattern on DQ
- Device returns data
- Validates TX data window

### 5.4 CA Training
- Host sweeps CA bits
- Device reports back expected values
- Aligns command/address timing

### 5.5 MPR Read
- Multi-purpose register for training patterns

## 6. AXI Transaction Handling

### 6.1 Address Mapping
```
[31:28] - Reserved
[27:24] - Chip select (4 regions, 2GB each)
[23:18] - Bank address (BA0-BA1, BG0-BG1)
[17:13] - Row address (R0-R12)
[12:9]  - Column address (C0-C11, with BL16)
[8:6]   - burst beat index
[5:2]   - byte lane (for 128-bit AXI, 16 bytes)
[1:0]   - reserved
```

### 6.2 Burst Support
- INCR: 1-16 beats
- FIXED: single beat repeat
- Wrap supported for cache-line sized transfers (64 bytes)

### 6.3 QoS Support
- 4 priority levels via AXI AW/AR signals interpretation
- Starvation prevention via round-robin

### 6.4 Outstanding Transaction Support
- **Maximum Outstanding Reads**: 32 (ARID width = 5 bits)
- **Maximum Outstanding Writes**: 16 (AWID width = 4 bits)
- Per-ID outstanding counters track pending transactions
- Reorder buffer (32 entries) for read response ordering
- AXI ID passed through command queue for response routing

## 7. PHY Features

### 7.1 Serialization (TX)
- 4:1 serialization for DQ (128-bit AXI → 32-bit DRAM)
- Per-byte DQS generation

### 7.2 Deserialization (RX)
- 1:4 deserialization (32-bit DRAM → 128-bit AXI)
- DQS capture with configurable sample point

### 7.3 Impedance Calibration
- ZQ calibration support
- Programmable drive strength (RTT)

## 8. Configuration & Status

### 8.1 Control Registers (APB slave)

| Address | Name | Description |
|---------|------|-------------|
| 0x00 | CTRL_CFG | Basic configuration |
| 0x04 | TIMING_CFG | Timing parameters |
| 0x08 | PHY_CFG | PHY settings |
| 0x0C | PHY_STATUS | PHY state |
| 0x10 | TRAINING_CFG | Training configuration |
| 0x14 | TRAINING_STATUS | Training results |
| 0x20 | MR0-MR63 | Mode registers |

### 8.2 Interrupt Events
- Command complete
- Training failure
- DRAM initialization done
- Temperature alert
- Leveling sequence complete

## 9. Integration Parameters

```verilog
parameter NUM_AXI_PORTS      = 4;
parameter AXI_ADDR_WIDTH     = 32;
parameter AXI_DATA_WIDTH     = 128;
parameter AXI_ID_WIDTH       = 5;   // Supports 32 outstanding reads
parameter MAX_PENDING_READS  = 32;
parameter MAX_PENDING_WRITES = 16;
parameter DQ_WIDTH           = 32;
parameter DQS_WIDTH          = 4;
parameter CA_WIDTH           = 10;
parameter CS_WIDTH           = 2;
parameter CKE_WIDTH          = 2;
parameter ODT_WIDTH          = 2;
```

## 10. Clocking

- **SYS_CLK**: AXI interface clock (up to 400MHz)
- **DDR_CLK**: DRAM interface clock (800MHz DDR rate for DDR-1600)
- **PLL_LOCK**: PLL synchronization indicator
- **ASYNC_FIFO**: Cross-clock domain data transfer

## 11. Reset Strategy

- Global async reset (active low)
- Reset sequencing for initialization
- DFI reset propagation to DRAM
- Training state machine reset

## 12. Implementation Notes

- All state machines use Gray coding for FSM states
- ECC/scramble logic placeholder (not synthesized)
- DBI encoding support optional
- CRC generation/checking optional