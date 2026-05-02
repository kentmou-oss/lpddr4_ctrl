// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlpddr4_sim_tb.h for the primary calling header

#include "Vlpddr4_sim_tb__pch.h"

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___eval_initial__TOP(Vlpddr4_sim_tb___024root* vlSelf);
VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__0(Vlpddr4_sim_tb___024root* vlSelf);
VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__1(Vlpddr4_sim_tb___024root* vlSelf);
VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__2(Vlpddr4_sim_tb___024root* vlSelf);
VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__3(Vlpddr4_sim_tb___024root* vlSelf);
VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__4(Vlpddr4_sim_tb___024root* vlSelf);

void Vlpddr4_sim_tb___024root___eval_initial(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_initial\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vlpddr4_sim_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
}

VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__0(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__sys_clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/lpddr4_sim_tb.sv", 
                                             570);
        vlSelfRef.lpddr4_sim_tb__DOT__sys_clk = (1U 
                                                 & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_clk)));
    }
    co_return;
}

VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__1(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x00000000000009c4ULL, 
                                             nullptr, 
                                             "tb/lpddr4_sim_tb.sv", 
                                             575);
        vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk = (1U 
                                                 & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk)));
    }
    co_return;
}

VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__2(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_4x = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000271ULL, 
                                             nullptr, 
                                             "tb/lpddr4_sim_tb.sv", 
                                             580);
        vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_4x = 
            (1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_4x)));
    }
    co_return;
}

VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__3(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__pll_lock = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__tg_enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         590);
    vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x000000000000c350ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         592);
    vlSelfRef.lpddr4_sim_tb__DOT__pll_lock = 1U;
    co_return;
}

void Vlpddr4_sim_tb___024root____VbeforeTrig_h885c11dc__0(Vlpddr4_sim_tb___024root* vlSelf, const char* __VeventDescription);
void Vlpddr4_sim_tb___024root____VbeforeTrig_h555bb969__0(Vlpddr4_sim_tb___024root* vlSelf, const char* __VeventDescription);
void Vlpddr4_sim_tb___024root____VbeforeTrig_hcd29c994__0(Vlpddr4_sim_tb___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__4(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtask_lpddr4_sim_tb__DOT__apb_write__0__addr;
    __Vtask_lpddr4_sim_tb__DOT__apb_write__0__addr = 0;
    IData/*31:0*/ __Vtask_lpddr4_sim_tb__DOT__apb_write__0__data;
    __Vtask_lpddr4_sim_tb__DOT__apb_write__0__data = 0;
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__psel = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__penable = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__paddr = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__pwrite = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__pwdata = 0U;
    while ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n)))) {
        Vlpddr4_sim_tb___024root____VbeforeTrig_h885c11dc__0(vlSelf, 
                                                             "@( lpddr4_sim_tb.sys_rst_n)");
        co_await vlSelfRef.__VtrigSched_h885c11dc__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lpddr4_sim_tb.sys_rst_n)", 
                                                             "tb/lpddr4_sim_tb.sv", 
                                                             645);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__pll_lock)))) {
        Vlpddr4_sim_tb___024root____VbeforeTrig_h555bb969__0(vlSelf, 
                                                             "@( lpddr4_sim_tb.pll_lock)");
        co_await vlSelfRef.__VtrigSched_h555bb969__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( lpddr4_sim_tb.pll_lock)", 
                                                             "tb/lpddr4_sim_tb.sv", 
                                                             646);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VdlySched.delay(0x000000000007a120ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         647);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("=== LPDDR4 Controller Simulation Test ===\nTime: %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    __Vtask_lpddr4_sim_tb__DOT__apb_write__0__data = 0x01031018U;
    __Vtask_lpddr4_sim_tb__DOT__apb_write__0__addr = 4U;
    Vlpddr4_sim_tb___024root____VbeforeTrig_hcd29c994__0(vlSelf, 
                                                         "@(posedge lpddr4_sim_tb.sys_clk)");
    co_await vlSelfRef.__VtrigSched_hcd29c994__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge lpddr4_sim_tb.sys_clk)", 
                                                         "tb/lpddr4_sim_tb.sv", 
                                                         603);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.lpddr4_sim_tb__DOT__psel = 1U;
    vlSelfRef.lpddr4_sim_tb__DOT__penable = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__paddr = __Vtask_lpddr4_sim_tb__DOT__apb_write__0__addr;
    vlSelfRef.lpddr4_sim_tb__DOT__pwrite = 1U;
    vlSelfRef.lpddr4_sim_tb__DOT__pwdata = __Vtask_lpddr4_sim_tb__DOT__apb_write__0__data;
    Vlpddr4_sim_tb___024root____VbeforeTrig_hcd29c994__0(vlSelf, 
                                                         "@(posedge lpddr4_sim_tb.sys_clk)");
    co_await vlSelfRef.__VtrigSched_hcd29c994__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge lpddr4_sim_tb.sys_clk)", 
                                                         "tb/lpddr4_sim_tb.sv", 
                                                         609);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.lpddr4_sim_tb__DOT__penable = 1U;
    Vlpddr4_sim_tb___024root____VbeforeTrig_hcd29c994__0(vlSelf, 
                                                         "@(posedge lpddr4_sim_tb.sys_clk)");
    co_await vlSelfRef.__VtrigSched_hcd29c994__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge lpddr4_sim_tb.sys_clk)", 
                                                         "tb/lpddr4_sim_tb.sv", 
                                                         611);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.lpddr4_sim_tb__DOT__psel = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__penable = 0U;
    VL_WRITEF_NX("Configured timing registers\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x0000000001312d00ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         657);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0x10U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        VL_WRITEF_NX("Initialization complete at time %0t\n",2, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
    } else {
        VL_WRITEF_NX("WARNING: init_done not asserted, running anyway at time %0t\n",2, 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000));
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         665);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.lpddr4_sim_tb__DOT__tg_enable = 1U;
    VL_WRITEF_NX("Traffic generators enabled at time %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         670);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n=== AXI Signal Check at time %0t ===\nPort 0: AW valid=%b ready=%b AR valid=%b ready=%b\nTG0: state=%h lfsr=%h pending_reads=%d pending_writes=%d\nTG0 IDLE check: enable=%b pending_reads=%d pending_writes=%d max_outstanding=         16\n",13, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000), '#',1,
                 (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))
                 , '#',1,(IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_awready)
                 , '#',1,(5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))
                 , '#',1,(IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_arready)
                 , '#',4,vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr
                 , '#',32,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds 
                           - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads)
                 , '#',32,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds 
                           - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes)
                 , '#',1,(IData)(vlSelfRef.lpddr4_sim_tb__DOT__tg_enable)
                 , '#',32,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds 
                           - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads)
                 , '#',32,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds 
                           - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes));
    co_await vlSelfRef.__VdlySched.delay(0x0000000005f5e100ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         680);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n=== Traffic Statistics ===\nPort           0: Reads=%d, Writes=%d, ReadCmds=%d, WriteCmds=%d\nPort           1: Reads=%d, Writes=%d, ReadCmds=%d, WriteCmds=%d\nPort           2: Reads=%d, Writes=%d, ReadCmds=%d, WriteCmds=%d\nPort           3: Reads=%d, Writes=%d, ReadCmds=%d, WriteCmds=%d\n",16
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[0U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[0U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[0U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[0U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[1U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[1U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[1U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[1U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[2U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[2U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[2U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[2U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[3U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[3U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[3U]
                 , '#',32,vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[3U]);
    vlSelfRef.lpddr4_sim_tb__DOT__tg_enable = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000f4240ULL, 
                                         nullptr, "tb/lpddr4_sim_tb.sv", 
                                         690);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n=== Simulation Complete ===\nTotal time: %0t\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_FINISH_MT("tb/lpddr4_sim_tb.sv", 694, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vlpddr4_sim_tb___024root___eval_triggers_vec__act(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_triggers_vec__act\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__pll_lock) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__pll_lock__0)) 
                                                       << 0x0000000aU) 
                                                      | ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_rst_n__0)) 
                                                          << 9U) 
                                                         | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                            << 8U))) 
                                                     | (((((((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__rst_n)) 
                                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_mem__DOT__rst_n__0)) 
                                                            << 3U) 
                                                           | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_4x) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__ddr_clk_4x__0))) 
                                                              << 2U)) 
                                                          | ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_clk__0))) 
                                                              << 1U) 
                                                             | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk) 
                                                                & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__ddr_clk__0))))) 
                                                         << 4U) 
                                                        | (((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready__0)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready__0)) 
                                                               << 2U)) 
                                                           | ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready) 
                                                                != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready__0)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready__0))))))));
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__ddr_clk__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_clk__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__sys_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__ddr_clk_4x__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_4x;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_mem__DOT__rst_n__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_rst_n__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__pll_lock__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__pll_lock;
}

bool Vlpddr4_sim_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vlpddr4_sim_tb___024root___act_sequent__TOP__0(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___act_sequent__TOP__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__rst_n 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
           & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__init_reset_n));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
           & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__pll_lock));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state;
    if ((0x00000080U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
    } else if ((0x00000040U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((0x00000020U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if (((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active)) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            }
        } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x40U;
        } else if (((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state 
                    = (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr
                       [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr]
                        ? 0x50U : 0x40U);
            }
        } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x20U;
        } else if (((0U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid)) 
                    & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x30U;
        }
    } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((0xfaU <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            }
        } else if ((0xc8U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((0x64U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 2U;
        }
    } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 1U;
    }
}

void Vlpddr4_sim_tb___024root___act_comb__TOP__0(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___act_comb__TOP__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__tg_enable) 
           & (0x10U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)));
}

void Vlpddr4_sim_tb___024root___act_sequent__TOP__1(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___act_sequent__TOP__1\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready = 0U;
    if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bvalid 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                    & (3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
                   & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr));
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rvalid 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                    & (3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
                   & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr)));
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready 
                = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bvalid)) 
                   | ((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                      & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rvalid)));
        } else {
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bvalid 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                    & (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
                   & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr));
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rvalid 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                    & (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
                   & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr)));
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready 
                = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bvalid)) 
                   | ((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                      & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rvalid)));
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
        vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bvalid 
            = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                & (1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
               & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr));
        vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rvalid 
            = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                & (1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
               & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr)));
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready 
            = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready) 
                & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bvalid)) 
               | ((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rvalid)));
    } else {
        vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bvalid 
            = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                & (0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
               & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr));
        vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rvalid 
            = ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head] 
                & (0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) 
               & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr)));
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready 
            = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready) 
                & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bvalid)) 
               | ((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rvalid)));
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bvalid) 
           & (4U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bvalid) 
           & (4U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bvalid) 
           & (4U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bvalid) 
           & (4U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)));
}

void Vlpddr4_sim_tb___024root___act_comb__TOP__1(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___act_comb__TOP__1\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 1U;
    }
}

void Vlpddr4_sim_tb___024root___eval_act(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_act\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        Vlpddr4_sim_tb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000720ULL & vlSelfRef.__VactTriggered[0U])) {
        Vlpddr4_sim_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VactTriggered[0U])) {
        Vlpddr4_sim_tb___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x000000000000072fULL & vlSelfRef.__VactTriggered[0U])) {
        Vlpddr4_sim_tb___024root___act_comb__TOP__1(vlSelf);
    }
}

void Vlpddr4_sim_tb___024root___nba_sequent__TOP__0(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_sequent__TOP__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_count = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_count)
                                                    : 0U);
    if (((0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine)) 
         & (1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__unnamedblk2__DOT__mem_idx 
            = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__bank_addr_reg) 
                << 0x0000001bU) | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_row
                                            [vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__bank_addr_reg]) 
                                    << 0x0000000bU) 
                                   | (0x000007ffU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__cmd_addr))));
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__mem
            [(0x0fffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__unnamedblk2__DOT__mem_idx)];
    }
}

void Vlpddr4_sim_tb___024root___nba_sequent__TOP__1(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_sequent__TOP__1\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer = 0;
    CData/*0:0*/ __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req = 0;
    SData/*15:0*/ __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer = 0;
    VlWide<4>/*127:0*/ __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf;
    VL_ZERO_W(128, __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf);
    CData/*3:0*/ __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt = 0;
    CData/*0:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback = 0;
    IData/*31:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count = 0;
    CData/*0:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback = 0;
    IData/*31:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count = 0;
    CData/*0:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback = 0;
    IData/*31:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count = 0;
    CData/*0:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback = 0;
    IData/*31:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr = 0;
    CData/*3:0*/ __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count = 0;
    IData/*31:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0 = 0;
    CData/*2:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0 = 0;
    CData/*0:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0 = 0;
    CData/*2:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0 = 0;
    CData/*4:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0 = 0;
    CData/*2:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0 = 0;
    CData/*1:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0 = 0;
    CData/*2:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0 = 0;
    VlWide<4>/*127:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0;
    VL_ZERO_W(128, __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0);
    CData/*4:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0 = 0;
    CData/*4:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0 = 0;
    CData/*4:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0 = 0;
    CData/*4:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v0 = 0;
    CData/*4:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v2;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v2 = 0;
    // Body
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr;
    vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer;
    vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[0U] 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[0U];
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[1U] 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[1U];
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[2U] 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[2U];
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[3U] 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[3U];
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v2 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0 = 0U;
    vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count;
    __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count;
    vlSelfRef.__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0 = 0U;
    vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr;
    if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n) {
        if ((0xffffU == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer))) {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req = 1U;
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer = 0U;
        } else {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer)));
            if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req) 
                 & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_ack)))) {
                __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req = 0U;
            }
        }
        if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_load) {
            vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca;
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt = 0U;
        } else if ((9U > (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt))) {
            vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg 
                = (0x00000200U | (0x000001ffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg) 
                                                 >> 1U)));
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt)));
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__prev_dfi_rddata_en) 
              & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en))) 
             & (1U == (3U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca))))) {
            vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt 
                = (0x0000000fU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rd_delay));
        }
        if ((((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
              | (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
             | (3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)))) {
            if ((0xffU > (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer)));
            }
        } else {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer = 0U;
        }
        if ((0x50U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((0x40U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en) {
                    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[0U] 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[1U];
                    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[1U] 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[2U];
                    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[2U] 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[3U];
                    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[3U] 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rd_data_buf;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__arb_rr 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__arb_rr)));
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active) 
              & (0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt))) 
             & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr
                          [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr])))) {
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[0U];
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[1U];
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[2U];
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[3U];
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail;
            __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0 = 1U;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr];
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail;
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail)));
        }
        if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready) 
             & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
             [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head])) {
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head;
            __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1 = 1U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head 
                = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head)));
        }
        if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en) 
             | (0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wrdata_cnt)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle 
                = (1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle)));
        }
        if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_start) {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer 
                = (0x0000ffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_timing);
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done = 0U;
        } else if ((0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer))) {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer 
                = (0x0000ffffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer) 
                                  - (IData)(1U)));
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done 
                = (1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer));
        } else {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done = 0U;
        }
        if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate_early) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate = 0U;
        } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate = 0x0fU;
        }
        if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__psel) 
             & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__pwrite)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__prdata = 
                ((0x00000080U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                  ? 0U : ((0x00000040U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                           ? 0U : ((0x00000020U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                                    ? 0U : ((0x00000010U 
                                             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                                             ? ((8U 
                                                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                                                  ? 
                                                 (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__training_done_int) 
                                                   << 9U) 
                                                  | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__training_fail) 
                                                     << 8U))
                                                  : (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)))
                                             : ((8U 
                                                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                                                  ? vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training
                                                  : vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_phy)
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr))
                                                  ? vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_timing
                                                  : vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_ctrl))))));
        }
        if ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
              | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                 | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                    | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)))) 
             & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full)))) {
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr;
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr;
            vlSelfRef.__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0 = 1U;
            vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len;
            vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr;
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr;
            vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[0U];
            vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[1U];
            vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[2U];
            vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[3U];
            vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr;
            vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb;
            vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id;
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc;
            __VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid 
                = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid) 
                   | (0x00ffU & ((IData)(1U) << (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr))));
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr)));
        }
        if ((((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_empty)) 
              & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active))) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr))) 
                   & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid));
            vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr)));
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__psel) 
              & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__penable)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__pwrite))) {
            if ((0U != (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                       >> 2U)))) {
                if ((1U != (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                           >> 2U)))) {
                    if ((2U == (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                               >> 2U)))) {
                        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_phy 
                            = vlSelfRef.lpddr4_sim_tb__DOT__pwdata;
                    }
                }
                if ((1U == (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                           >> 2U)))) {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_timing 
                        = vlSelfRef.lpddr4_sim_tb__DOT__pwdata;
                }
            }
            if ((0U == (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                       >> 2U)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_ctrl 
                    = vlSelfRef.lpddr4_sim_tb__DOT__pwdata;
            }
        }
    } else {
        __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer = 0U;
        __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req = 0U;
        vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg = 0x03ffU;
        __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt = 0U;
        vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__arb_rr = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail = 0U;
        __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v2 = 1U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle = 0U;
        __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate = 0x0fU;
        vlSelfRef.lpddr4_sim_tb__DOT__prdata = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr = 0U;
        vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_phy = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_ctrl = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_timing = 0x01031018U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n)) 
               | (3U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count = 0U;
    } else if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_wready))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n)) 
               | (3U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count = 0U;
    } else if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_wready))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n)) 
               | (3U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count = 0U;
    } else if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_wready))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n)) 
               | (3U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count = 0U;
    } else if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_wready))) {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count 
            = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count)));
    }
    if (vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) {
        if (vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) {
            __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback 
                = (1U & VL_REDXOR_32((0x80200003U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr)));
            __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr 
                    << 1U) | (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback));
            __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback 
                = (1U & VL_REDXOR_32((0x80200003U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr)));
            __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr 
                    << 1U) | (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback));
            __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback 
                = (1U & VL_REDXOR_32((0x80200003U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr)));
            __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr 
                    << 1U) | (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback));
            __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback 
                = (1U & VL_REDXOR_32((0x80200003U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr)));
            __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr 
                = ((vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr 
                    << 1U) | (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback));
        }
        if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bvalid) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes);
        }
        if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bvalid) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes);
        }
        if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bvalid) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes);
        }
        if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bvalid) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes);
        }
        if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_arready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds);
        }
        if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_arready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds);
        }
        if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_arready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds);
        }
        if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_arready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds);
        }
        if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds);
        }
        if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds);
        }
        if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds);
        }
        if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds);
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rvalid) 
              & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rlast))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads);
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rvalid) 
              & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rlast))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads);
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rvalid) 
              & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rlast))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads);
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rvalid) 
              & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rlast))) {
            vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads 
                = ((IData)(1U) + vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads);
        }
        if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT____VlemCall_0__random 
                = VL_MODDIV_III(32, vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr, (IData)(0x04000001U));
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__is_write 
                = (1U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_addr 
                = ((IData)((QData)((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT____VlemCall_0__random))) 
                   << 2U);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_arid 
                = (0x0000001fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_awid 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[2U] = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[3U] = 0U;
        } else if ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_wready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[0U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[1U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[2U] = 0U;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[3U] = 0U;
            }
        }
        if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT____VlemCall_0__random 
                = ((IData)(0x04000000U) + VL_MODDIV_III(32, vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr, (IData)(0x04000001U)));
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__is_write 
                = (1U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_addr 
                = ((IData)((QData)((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT____VlemCall_0__random))) 
                   << 2U);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_arid 
                = (0x0000001fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_awid 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[2U] = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[3U] = 0U;
        } else if ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_wready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[0U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[1U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[2U] = 0U;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[3U] = 0U;
            }
        }
        if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT____VlemCall_0__random 
                = ((IData)(0x08000000U) + VL_MODDIV_III(32, vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr, (IData)(0x04000001U)));
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__is_write 
                = (1U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_addr 
                = ((IData)((QData)((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT____VlemCall_0__random))) 
                   << 2U);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_arid 
                = (0x0000001fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_awid 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[2U] = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[3U] = 0U;
        } else if ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_wready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[0U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[1U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[2U] = 0U;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[3U] = 0U;
            }
        }
        if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT____VlemCall_0__random 
                = ((IData)(0x0c000000U) + VL_MODDIV_III(32, vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr, (IData)(0x04000001U)));
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__is_write 
                = (1U & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_addr 
                = ((IData)((QData)((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT____VlemCall_0__random))) 
                   << 2U);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_arid 
                = (0x0000001fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_awid 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr);
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[2U] = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[3U] = 0U;
        } else if ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            if (((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_wready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[0U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[1U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[2U] = 0U;
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[3U] = 0U;
            }
        }
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state;
    } else {
        __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr = 0x00003039U;
        __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr = 0x00005ba0U;
        __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr = 0x00008707U;
        __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr = 0x0000b26eU;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_addr = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_arid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_awid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__is_write = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_addr = 0x10000000U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_arid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_awid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__is_write = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_addr = 0x20000000U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_arid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_awid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__is_write = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_addr = 0x30000000U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_arid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_awid = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__is_write = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state = 0U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__odt_reg = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__init_reset_n 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n) 
           && (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__reset_phy_latch));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[0U] 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[0U];
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[1U] 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[1U];
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[2U] 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[2U];
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[3U] 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf[3U];
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0][0U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[0U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0][1U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[1U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0][2U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[2U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0][3U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata__v0[3U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v0] = 1U;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v1] = 0U;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid__v2) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[4U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[5U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[6U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[7U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[8U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[9U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[10U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[11U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[12U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[13U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[14U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[15U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[16U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[17U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[18U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[19U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[20U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[21U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[22U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[23U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[24U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[25U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[26U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[27U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[28U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[29U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[30U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[31U] = 0U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr;
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr 
        = __Vdly__lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr;
    if (vlSelfRef.__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr[__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr__v0;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_load 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n) 
           && (0x03ffU != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca)));
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[0U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[1U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[2U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[3U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__prev_dfi_rddata_en 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en;
    if ((1U & (~ ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][0U];
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][1U];
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rdata[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][2U];
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rdata[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][3U];
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rid 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head];
        }
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][0U];
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][1U];
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rdata[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][2U];
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rdata[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][3U];
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rid 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head];
        }
    }
    if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
        if ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][0U];
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][1U];
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rdata[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][2U];
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rdata[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][3U];
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rid 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head];
        }
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][0U];
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][1U];
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rdata[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][2U];
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rdata[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head][3U];
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rid 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head];
        }
    }
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[0U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[1U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[2U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[3U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[0U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[1U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[2U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[3U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[0U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[1U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[2U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[3U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__reset_phy_latch 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_empty 
        = (1U & (~ (0U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_5 = ((2U 
                                                 == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                                                | (5U 
                                                   == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_6 = ((2U 
                                                 == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                                                | (5U 
                                                   == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_7 = ((2U 
                                                 == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                                                | (5U 
                                                   == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_8 = ((2U 
                                                 == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                                                | (5U 
                                                   == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_req 
        = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
             << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                       << 2U)) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req 
        = (0x0000000fU & ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_req) 
                            << 4U) | (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_req)) 
                          << (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__arb_rr)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 0U;
    if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 0U;
    }
    if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 1U;
    }
    if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 2U;
    }
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 3U;
    }
    if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 0U;
    }
    if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 1U;
    }
    if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 2U;
    }
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = 3U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[0U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[1U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[2U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[3U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_req) 
           & ((IData)(1U) << (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 0U;
    if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) {
            if ((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb = 0xffffU;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[0U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[0U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[1U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[1U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[2U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[2U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[3U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata[3U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_awid;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_addr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 1U;
            } else if ((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_arid;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_addr;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 0U;
            }
        } else if ((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb = 0xffffU;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[0U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[1U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[2U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata[3U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_awid;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_addr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 1U;
        } else if ((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_arid;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_addr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc))) {
        if ((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb = 0xffffU;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[0U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[1U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[1U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[2U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[2U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[3U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata[3U];
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_awid;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_addr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 1U;
        } else if ((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_arid;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_addr;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 0U;
        }
    } else if ((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb = 0xffffU;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[0U] 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[0U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[1U] 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[1U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[2U] 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[2U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata[3U] 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata[3U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_awid;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_addr;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 1U;
    } else if ((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_arid;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_addr;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = 0U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__bank_addr 
        = ((4U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                  >> 0x00000014U)) | (3U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                            >> 0x0000000fU)));
}

void Vlpddr4_sim_tb___024root___nba_sequent__TOP__2(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_sequent__TOP__2\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt = 0;
    CData/*3:0*/ __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v1;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v1 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v2;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v2 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v3;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v3 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v4;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v4 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v5;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v5 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v6;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v6 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v7;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v7 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v9;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v9 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v10;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v10 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v11;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v11 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v12;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v12 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v13;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v13 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v14;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v14 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v15;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v15 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v16;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v16 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v1;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v1 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v2;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v2 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v3;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v3 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v4;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v4 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v5;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v5 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v6;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v6 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v7;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v7 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v9;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v9 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v10;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v10 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v11;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v11 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v12;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v12 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v13;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v13 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v14;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v14 = 0;
    CData/*3:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v15;
    __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v15 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v16;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v16 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v17;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v17 = 0;
    // Body
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v16 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v17 = 0U;
    __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v16 = 0U;
    if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n) {
        if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en) {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt = 0U;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U]);
            __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0 = 1U;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v1 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                                  >> 4U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v2 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                                  >> 8U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v3 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                                  >> 0x0000000cU));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v4 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                                  >> 0x00000010U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v5 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                                  >> 0x00000014U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v6 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                                  >> 0x00000018U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v7 
                = (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                   >> 0x0000001cU);
        } else if ((3U > (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt))) {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[0U] 
                         >> 1U));
            __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8 = 1U;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v9 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[1U] 
                         >> 1U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v10 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[2U] 
                         >> 1U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v11 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[3U] 
                         >> 1U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v12 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[4U] 
                         >> 1U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v13 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[5U] 
                         >> 1U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v14 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[6U] 
                         >> 1U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v15 
                = (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[7U] 
                         >> 1U));
        }
        if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate_early) {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt = 0U;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0 
                = (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in);
            __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0 = 1U;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v1 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                                  >> 4U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v2 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                                  >> 8U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v3 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                                  >> 0x0cU));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v4 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                                  >> 0x10U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v5 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                                  >> 0x14U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v6 
                = (0x0000000fU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                                  >> 0x18U));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v7 
                = (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                   >> 0x1cU);
        } else if ((3U > (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt))) {
            __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          << 3U)) | (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[0U] 
                                           >> 1U)));
            __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8 = 1U;
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v9 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          >> 1U)) | (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[1U] 
                                           >> 1U)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v10 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          >> 5U)) | (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[2U] 
                                           >> 1U)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v11 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          >> 9U)) | (7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[3U] 
                                           >> 1U)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v12 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          >> 0x0000000dU)) | (7U & 
                                              (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[4U] 
                                               >> 1U)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v13 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          >> 0x00000011U)) | (7U & 
                                              (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[5U] 
                                               >> 1U)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v14 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          >> 0x00000015U)) | (7U & 
                                              (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[6U] 
                                               >> 1U)));
            __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v15 
                = ((8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
                          >> 0x00000019U)) | (7U & 
                                              (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[7U] 
                                               >> 1U)));
        } else if ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rd_data_buf 
                = ((((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[7U]) 
                       << 4U) | vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[6U]) 
                     << 0x00000018U) | ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[5U]) 
                                          << 4U) | vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[4U]) 
                                        << 0x00000010U)) 
                   | (((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[3U]) 
                         << 4U) | vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[2U]) 
                       << 8U) | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[1U]) 
                                  << 4U) | vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[0U])));
        }
    } else {
        __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt = 0U;
        __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v16 = 1U;
        __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt = 0U;
        __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v16 = 1U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rd_data_buf = 0U;
        __VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v17 = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt;
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[0U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[1U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v1;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[2U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v2;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[3U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v3;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[4U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v4;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[5U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v5;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[6U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v6;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[7U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v7;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[0U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v8;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[1U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v9;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[2U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v10;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[3U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v11;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[4U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v12;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[5U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v13;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[6U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v14;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[7U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v15;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser__v16) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[4U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[5U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[6U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[7U] = 0U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt 
        = __Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt;
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[0U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[1U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v1;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[2U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v2;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[3U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v3;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[4U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v4;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[5U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v5;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[6U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v6;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[7U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v7;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[0U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v8;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[1U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v9;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[2U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v10;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[3U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v11;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[4U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v12;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[5U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v13;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[6U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v14;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[7U] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v15;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v16) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[0U] = 0U;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser__v17) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[4U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[5U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[6U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[7U] = 0U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out 
        = ((0xffff0000U & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out) 
           | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[2U] 
               << 8U) | vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[0U]));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out 
        = ((0x0000ffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out) 
           | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[6U] 
               << 0x00000018U) | (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[4U] 
                                  << 0x00000010U)));
}

void Vlpddr4_sim_tb___024root___nba_sequent__TOP__3(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_sequent__TOP__3\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine;
    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine = 0;
    CData/*0:0*/ __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init;
    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 0;
    CData/*7:0*/ __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer;
    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer = 0;
    SData/*15:0*/ __VdlyVal__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0;
    __VdlyVal__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0;
    __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v0;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v0 = 0;
    CData/*1:0*/ __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1;
    __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1;
    __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1 = 0;
    CData/*0:0*/ __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v2;
    __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v2 = 0;
    // Body
    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_init;
    __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v2 = 0U;
    __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0 = 0U;
    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer;
    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine;
    if (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__rst_n) {
        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state;
        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 0U;
        if ((0U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load))) {
            __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load;
            __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 1U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load = 0U;
        } else if ((0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
            __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer 
                = (0x000000ffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer) 
                                  - (IData)(1U)));
            __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 0U;
        }
        if (((((((((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine)) 
                   | (1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) 
                  | (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) 
                 | (3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) 
                | (0x10U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) 
               | (0x20U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) 
              | (0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) 
             | (0x40U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine)))) {
            if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                if ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_init)))) {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load = 0x32U;
                    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                if (((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_init)) 
                     & (0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer)))) {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load = 0x32U;
                    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 1U;
                }
            } else if ((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                if (((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_init)) 
                     & (0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer)))) {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load = 0x14U;
                    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 1U;
                }
            } else if ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                if (((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_init)) 
                     & (0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer)))) {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load = 0x32U;
                    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 1U;
                }
            } else if ((0x10U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                if ((IData)((0x000cU == (0x023cU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca))))) {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__row_addr_reg 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__cmd_addr;
                    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__bank_addr_reg 
                        = (3U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca));
                    __VdlyVal__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__cmd_addr;
                    __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0 
                        = (3U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca));
                    __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0 = 1U;
                    __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v0 
                        = (3U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca));
                    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer = 9U;
                }
            } else if ((0x20U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                if ((0U >= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                    if ((IData)((0x0014U == (0x023cU 
                                             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca))))) {
                        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer = 0x12U;
                        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine = 0x30U;
                    } else if ((IData)((0x0018U == 
                                        (0x023cU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca))))) {
                        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer = 0x10U;
                        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine = 0x40U;
                    } else if ((IData)((0x000cU == 
                                        (0x023cU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca))))) {
                        __VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1 
                            = (3U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca));
                        __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1 = 1U;
                        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer = 9U;
                        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine = 0x50U;
                    }
                }
            } else if ((0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                if ((0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                    __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer 
                        = (0x000000ffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer) 
                                          - (IData)(1U)));
                }
            } else if ((0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer 
                    = (0x000000ffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer) 
                                      - (IData)(1U)));
            }
        } else if (((0x50U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine)) 
                    || (0x60U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine)))) {
            if ((0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer 
                    = (0x000000ffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer) 
                                      - (IData)(1U)));
            }
        }
    } else {
        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine = 0U;
        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = 0U;
        __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load = 0U;
        __VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v2 = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_init 
        = __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer_init;
    if (__VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_row[__VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0] 
            = __VdlyVal__lpddr4_sim_tb__DOT__u_mem__DOT__open_row__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_bank[__VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v0] = 1U;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_bank[__VdlyDim0__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v1] = 0U;
    }
    if (__VdlySet__lpddr4_sim_tb__DOT__u_mem__DOT__open_bank__v2) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_bank[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_bank[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_bank[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_bank[3U] = 0U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer 
        = __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__timer;
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine 
        = __Vdly__lpddr4_sim_tb__DOT__u_mem__DOT__state_machine;
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine;
    if ((0x00000080U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
    } else if ((0x00000040U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        if ((0x00000020U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            }
        } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x20U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            } else if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x20U;
            }
        } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
        } else if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x20U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state 
            = ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))
                ? 0x10U : ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))
                            ? 0x10U : ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))
                                        ? 0x10U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))
                                                    ? 0x10U
                                                    : 0x20U))));
    } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
            if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 0x10U;
            }
        } else if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))) {
        if ((0U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 2U;
        }
    } else {
        vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en 
        = ((0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine)) 
           & (0x0eU >= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer)));
}

void Vlpddr4_sim_tb___024root___nba_sequent__TOP__4(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_sequent__TOP__4\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    // Body
    if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n) {
        if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[1U] = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[2U] = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[3U] = 0U;
        }
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dq;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate_early 
            = (IData)((9U == (0x0000000fU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training)));
        vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca = ((1U 
                                                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg))
                                                 ? 0x03ffU
                                                 : (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg));
        if ((0x50U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active) {
                if ((0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt))) {
                    vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt 
                        = (0x000000ffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt) 
                                          - (IData)(1U)));
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_strb_buf 
                        = (3U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_strb_buf));
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[0U];
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en = 1U;
                    if ((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt))) {
                        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active = 0U;
                    }
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[0U] 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[1U];
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[1U] 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[2U];
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[2U] 
                        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[3U];
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[3U] = 0U;
                } else {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en = 0U;
                }
            } else {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[0U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr][0U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[1U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr][1U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[2U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr][2U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[3U] 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr][3U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_strb_buf 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr];
                vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active = 1U;
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata 
                    = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata
                    [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr][0U];
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en = 1U;
            }
        } else if ((0x40U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en) {
                vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt 
                    = (0x000000ffU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt) 
                                      - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt))) {
                    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active = 0U;
                }
            }
        } else {
            vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en = 0U;
        }
        if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__psel) 
              & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__penable)) 
             & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__pwrite))) {
            if ((0U != (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                       >> 2U)))) {
                if ((1U != (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                           >> 2U)))) {
                    if ((2U != (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                               >> 2U)))) {
                        if ((3U == (0x0000003fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__paddr) 
                                                   >> 2U)))) {
                            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training 
                                = vlSelfRef.lpddr4_sim_tb__DOT__pwdata;
                        }
                    }
                }
            }
        }
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en = 0U;
        if ((0U < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt))) {
            vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt 
                = (0x0000000fU & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt) 
                                  - (IData)(1U)));
            if ((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en = 1U;
            }
        }
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state 
            = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state;
    } else {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca = 0x03ffU;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[0U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[1U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[2U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf[3U] = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_strb_buf = 0U;
        vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training = 0U;
        vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en = 0U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state = 0U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg 
        = vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg;
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__cmd_addr 
        = ((((4U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                    >> 6U)) | ((2U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                      >> 5U)) | (1U 
                                                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                                    >> 7U)))) 
            << 7U) | ((0x00000040U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                      << 6U)) | (0x00000030U 
                                                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                                    << 1U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt 
        = vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt;
    if (vlSelfRef.__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata[vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0][0U] 
            = vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[0U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata[vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0][1U] 
            = vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[1U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata[vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0][2U] 
            = vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[2U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata[vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0][3U] 
            = vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0[3U];
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb[vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb__v0] 
            = vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb__v0;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len[vlSelfRef.__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len__v0] 
            = vlSelfRef.__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len__v0;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr 
        = vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full 
        = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid) 
            >> (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr)) 
           & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr) 
              == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en) 
                                                | (0U 
                                                   < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wrdata_cnt)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_awready 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt) 
           & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full)) 
              & (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_awready 
        = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt) 
            >> 1U) & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full)) 
                      & (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_awready 
        = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt) 
            >> 2U) & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full)) 
                      & (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_awready 
        = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt) 
            >> 3U) & ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full)) 
                      & (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt 
        = vlSelfRef.__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dqs__en1 
        = ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
           | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
               << 1U) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                          << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                    << 2U))));
    __VdfgRegularize_hebeb780c_0_2 = ((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle)) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
    __VdfgRegularize_hebeb780c_0_3 = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke = 3U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_start = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_ack = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT____Vcellout__u_controller__dfi_cs_n 
        = ((1U & (~ ((((((((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
                           | (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
                          | (3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
                         | (0x20U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
                        | (0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
                       | (0x40U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
                      | (0x50U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
                     | (0x60U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))))) 
           || ((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
               || ((2U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
                   && ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
                       || ((0x20U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
                           && (1U & ((0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                                      ? (~ ((IData)(1U) 
                                            << (3U 
                                                & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                                   >> 0x0000001aU))))
                                      : ((0x40U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                                          ? (~ ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                                    >> 0x0000001aU))))
                                          : ((0x50U 
                                              == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
                                             && (1U 
                                                 & (~ 
                                                    ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                                         >> 0x0000001aU))))))))))))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca = 0x03ffU;
    if (((((((((1U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)) 
               | (2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
              | (3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
             | (0x20U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
            | (0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
           | (0x40U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
          | (0x50U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) 
         | (0x60U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)))) {
        if ((1U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((2U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                if ((3U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                    if ((0x20U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                        if ((0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke = 3U;
                        } else if ((0x40U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke = 3U;
                        } else if ((0x50U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke = 3U;
                        }
                    }
                    if ((0x20U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_ack = 1U;
                    }
                }
            }
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca 
                = ((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                    ? (0x0000003fU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[2U])
                    : ((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                        ? 0x002aU : ((0x20U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                                      ? 3U : ((0x30U 
                                               == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                                               ? (1U 
                                                  | (0x000003fcU 
                                                     & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                                        >> 2U)))
                                               : ((0x40U 
                                                   == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                                                   ? 
                                                  (1U 
                                                   | ((0x00000380U 
                                                       & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__bank_addr) 
                                                          << 8U)) 
                                                      | (0x00000078U 
                                                         & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr)))
                                                   : 
                                                  ((0x50U 
                                                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))
                                                    ? 
                                                   ((0x00000380U 
                                                     & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__bank_addr) 
                                                        << 8U)) 
                                                    | (0x00000078U 
                                                       & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr))
                                                    : 
                                                   (1U 
                                                    | (0x000003f8U 
                                                       & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__bank_addr) 
                                                          << 3U)))))))));
        }
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_start = 1U;
    } else {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke = 3U;
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca = 0x03ffU;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out36 
        = ((0x0eU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out36)) 
           | (IData)(__VdfgRegularize_hebeb780c_0_2));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out37 
        = ((0x0dU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out37)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_2) 
              << 1U));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out38 
        = ((0x0bU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out38)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_2) 
              << 2U));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out39 
        = ((7U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out39)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_2) 
              << 3U));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out32 
        = ((0x0eU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out32)) 
           | (IData)(__VdfgRegularize_hebeb780c_0_3));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out33 
        = ((0x0dU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out33)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_3) 
              << 1U));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out34 
        = ((0x0bU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out34)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_3) 
              << 2U));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out35 
        = ((7U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out35)) 
           | ((IData)(__VdfgRegularize_hebeb780c_0_3) 
              << 3U));
}

void Vlpddr4_sim_tb___024root___nba_comb__TOP__1(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_comb__TOP__1\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__rst_n 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
           & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__init_reset_n));
}

void Vlpddr4_sim_tb___024root___nba_comb__TOP__2(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_comb__TOP__2\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out0 
        = ((0xfffffffeU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out0) 
           | (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
              & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out1 
        = ((0xfffffffdU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out1) 
           | (0xfffffffeU & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 1U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out2 
        = ((0xfffffffbU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out2) 
           | (0xfffffffcU & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 2U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out3 
        = ((0xfffffff7U & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out3) 
           | (0xfffffff8U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 3U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out4 
        = ((0xffffffefU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out4) 
           | (0xfffffff0U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 4U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out5 
        = ((0xffffffdfU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out5) 
           | (0xffffffe0U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 5U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out6 
        = ((0xffffffbfU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out6) 
           | (0xffffffc0U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 6U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out7 
        = ((0xffffff7fU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out7) 
           | (0xffffff80U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 7U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out8 
        = ((0xfffffeffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out8) 
           | (0xffffff00U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 8U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out9 
        = ((0xfffffdffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out9) 
           | (0xfffffe00U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 9U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out10 
        = ((0xfffffbffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out10) 
           | (0xfffffc00U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000000aU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out11 
        = ((0xfffff7ffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out11) 
           | (0xfffff800U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000000bU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out12 
        = ((0xffffefffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out12) 
           | (0xfffff000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000000cU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out13 
        = ((0xffffdfffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out13) 
           | (0xffffe000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000000dU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out14 
        = ((0xffffbfffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out14) 
           | (0xffffc000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000000eU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out15 
        = ((0xffff7fffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out15) 
           | (0xffff8000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000000fU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out16 
        = ((0xfffeffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out16) 
           | (0xffff0000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000010U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out17 
        = ((0xfffdffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out17) 
           | (0xfffe0000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000011U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out18 
        = ((0xfffbffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out18) 
           | (0xfffc0000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000012U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out19 
        = ((0xfff7ffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out19) 
           | (0xfff80000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000013U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out20 
        = ((0xffefffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out20) 
           | (0xfff00000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000014U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out21 
        = ((0xffdfffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out21) 
           | (0xffe00000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000015U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out22 
        = ((0xffbfffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out22) 
           | (0xffc00000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000016U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out23 
        = ((0xff7fffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out23) 
           | (0xff800000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000017U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out24 
        = ((0xfeffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out24) 
           | (0xff000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000018U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out25 
        = ((0xfdffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out25) 
           | (0xfe000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x00000019U))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out26 
        = ((0xfbffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out26) 
           | (0xfc000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000001aU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out27 
        = ((0xf7ffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out27) 
           | (0xf8000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000001bU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out28 
        = ((0xefffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out28) 
           | (0xf0000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000001cU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out29 
        = ((0xdfffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out29) 
           | (0xe0000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000001dU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out30 
        = ((0xbfffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out30) 
           | (0xc0000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000001eU))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out31 
        = ((0x7fffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out31) 
           | (0x80000000U & (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data 
                             & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                << 0x0000001fU))));
}

void Vlpddr4_sim_tb___024root___nba_sequent__TOP__5(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_sequent__TOP__5\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
           & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__pll_lock));
}

void Vlpddr4_sim_tb___024root___nba_comb__TOP__3(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_comb__TOP__3\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    // Body
    __VdfgRegularize_hebeb780c_0_1 = (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out 
                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out0 
        = ((0xfffffffeU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out0) 
           | (1U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out1 
        = ((0xfffffffdU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out1) 
           | (2U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out2 
        = ((0xfffffffbU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out2) 
           | (4U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out3 
        = ((0xfffffff7U & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out3) 
           | (8U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out4 
        = ((0xffffffefU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out4) 
           | (0x00000010U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out5 
        = ((0xffffffdfU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out5) 
           | (0x00000020U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out6 
        = ((0xffffffbfU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out6) 
           | (0x00000040U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out7 
        = ((0xffffff7fU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out7) 
           | (0x00000080U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out8 
        = ((0xfffffeffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out8) 
           | (0x00000100U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out9 
        = ((0xfffffdffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out9) 
           | (0x00000200U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out10 
        = ((0xfffffbffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out10) 
           | (0x00000400U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out11 
        = ((0xfffff7ffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out11) 
           | (0x00000800U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out12 
        = ((0xffffefffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out12) 
           | (0x00001000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out13 
        = ((0xffffdfffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out13) 
           | (0x00002000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out14 
        = ((0xffffbfffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out14) 
           | (0x00004000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out15 
        = ((0xffff7fffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out15) 
           | (0x00008000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out16 
        = ((0xfffeffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out16) 
           | (0x00010000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out17 
        = ((0xfffdffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out17) 
           | (0x00020000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out18 
        = ((0xfffbffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out18) 
           | (0x00040000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out19 
        = ((0xfff7ffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out19) 
           | (0x00080000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out20 
        = ((0xffefffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out20) 
           | (0x00100000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out21 
        = ((0xffdfffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out21) 
           | (0x00200000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out22 
        = ((0xffbfffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out22) 
           | (0x00400000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out23 
        = ((0xff7fffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out23) 
           | (0x00800000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out24 
        = ((0xfeffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out24) 
           | (0x01000000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out25 
        = ((0xfdffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out25) 
           | (0x02000000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out26 
        = ((0xfbffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out26) 
           | (0x04000000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out27 
        = ((0xf7ffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out27) 
           | (0x08000000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out28 
        = ((0xefffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out28) 
           | (0x10000000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out29 
        = ((0xdfffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out29) 
           | (0x20000000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out30 
        = ((0xbfffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out30) 
           | (0x40000000U & __VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out31 
        = ((0x7fffffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out31) 
           | (0x80000000U & __VdfgRegularize_hebeb780c_0_1));
}

void Vlpddr4_sim_tb___024root___nba_comb__TOP__5(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_comb__TOP__5\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state;
    if ((0x00000080U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
    } else if ((0x00000040U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((0x00000020U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if (((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active)) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            }
        } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x40U;
        } else if (((~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state 
                    = (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr
                       [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr]
                        ? 0x50U : 0x40U);
            }
        } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
        } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x20U;
        } else if (((0U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid)) 
                    & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x30U;
        }
    } else if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
            if ((0xfaU <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 0x10U;
            }
        } else if ((0xc8U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))) {
        if ((0x64U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 2U;
        }
    } else if (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = 1U;
    }
}

void Vlpddr4_sim_tb___024root___nba_comb__TOP__6(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_comb__TOP__6\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dq 
        = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                 << 1U) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                            << 2U) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                       << 3U) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                     << 5U) 
                                                    | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                        << 6U) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                           << 7U) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                              << 8U) 
                                                             | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                    << 0x0000000aU) 
                                                                   | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                       << 0x0000000bU) 
                                                                      | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                          << 0x0000000cU) 
                                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                             << 0x0000000dU) 
                                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000000eU) 
                                                                               | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000000fU) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000010U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000011U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000012U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000013U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000014U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000015U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000016U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000017U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000018U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000019U) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001aU) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001bU) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001cU) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001dU) 
                                                                                | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001fU) 
                                                                                | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001eU)))))))))))))))))))))))))))))))) 
            & ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out0 
                & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
               | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out1 
                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                      << 1U)) | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out2 
                                  & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                     << 2U)) | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out3 
                                                 & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                    << 3U)) 
                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out4 
                                                    & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                       << 4U)) 
                                                   | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out5 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                          << 5U)) 
                                                      | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out6 
                                                          & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                             << 6U)) 
                                                         | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out7 
                                                             & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                << 7U)) 
                                                            | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out8 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                   << 8U)) 
                                                               | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out9 
                                                                   & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                      << 9U)) 
                                                                  | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out10 
                                                                      & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                         << 0x0000000aU)) 
                                                                     | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out11 
                                                                         & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                            << 0x0000000bU)) 
                                                                        | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out12 
                                                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                               << 0x0000000cU)) 
                                                                           | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out13 
                                                                               & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000000dU)) 
                                                                              | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out14 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000000eU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out15 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000000fU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out16 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000010U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out17 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000011U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out18 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000012U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out19 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000013U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out20 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000014U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out21 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000015U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out22 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000016U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out23 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000017U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out24 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000018U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out25 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x00000019U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out26 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001aU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out27 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001bU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out28 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001cU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out29 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001dU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out30 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001eU)) 
                                                                                | (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out31 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                                << 0x0000001fU)))))))))))))))))))))))))))))))))) 
           | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
               | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                   << 1U) | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                              << 2U) | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                         << 3U) | (
                                                   ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                          << 6U) 
                                                         | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                             << 7U) 
                                                            | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                << 8U) 
                                                               | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                      << 0x0aU) 
                                                                     | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                         << 0x0bU) 
                                                                        | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                            << 0x0cU) 
                                                                           | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                               << 0x0dU) 
                                                                              | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x0eU) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x0fU) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1eU) 
                                                                                | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1fU)))))))))))))))))))))))))))))))) 
              & ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out0 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en)) 
                 | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out1 
                     & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                        << 1U)) | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out2 
                                    & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                       << 2U)) | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out3 
                                                   & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                      << 3U)) 
                                                  | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out4 
                                                      & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                         << 4U)) 
                                                     | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out5 
                                                         & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                            << 5U)) 
                                                        | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out6 
                                                            & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                               << 6U)) 
                                                           | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out7 
                                                               & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                  << 7U)) 
                                                              | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out8 
                                                                  & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                     << 8U)) 
                                                                 | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out9 
                                                                     & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                        << 9U)) 
                                                                    | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out10 
                                                                        & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                           << 0x0aU)) 
                                                                       | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out11 
                                                                           & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                              << 0x0bU)) 
                                                                          | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out12 
                                                                              & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x0cU)) 
                                                                             | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out13 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x0dU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out14 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x0eU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out15 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x0fU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out16 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x10U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out17 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x11U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out18 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x12U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out19 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x13U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out20 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x14U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out21 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x15U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out22 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x16U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out23 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x17U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out24 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x18U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out25 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x19U)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out26 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1aU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out27 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1bU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out28 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1cU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out29 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1dU)) 
                                                                                | ((vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out30 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1eU)) 
                                                                                | (vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out31 
                                                                                & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en) 
                                                                                << 0x1fU)))))))))))))))))))))))))))))))))));
}

void Vlpddr4_sim_tb___024root___nba_comb__TOP__7(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___nba_comb__TOP__7\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = 1U;
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state;
    if ((8U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
    } else if ((4U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
            } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rvalid) 
                         & (6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) 
                        & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rlast))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            if (((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                 & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_arready))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 6U;
            }
        } else if (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bvalid) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
            if ((((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                  & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_wready)) 
                 & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len) 
                    == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count)))) {
                vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state)) 
                    & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_awready))) {
            vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state 
            = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__is_write)
                ? 2U : 5U);
    } else if ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable) 
                 & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds 
                                   - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes))) 
                & (0x00000010U > (vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads)))) {
        vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = 1U;
    }
}

void Vlpddr4_sim_tb___024root___eval_nba(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_nba\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000010ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((0x0000000000000040ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x0000000000000090ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x000000000000002fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___act_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x0000000000000120ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x0000000000000090ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((0x0000000000000100ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x0000000000000060ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x0000000000000720ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x0000000000000120ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x00000000000000f0ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x000000000000072fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vlpddr4_sim_tb___024root___nba_comb__TOP__7(vlSelf);
    }
}

void Vlpddr4_sim_tb___024root___timing_ready(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___timing_ready\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000200ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h885c11dc__0.ready("@( lpddr4_sim_tb.sys_rst_n)");
    }
    if ((0x0000000000000400ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h555bb969__0.ready("@( lpddr4_sim_tb.pll_lock)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcd29c994__0.ready("@(posedge lpddr4_sim_tb.sys_clk)");
    }
}

void Vlpddr4_sim_tb___024root___timing_resume(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___timing_resume\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h885c11dc__0.moveToResumeQueue(
                                                          "@( lpddr4_sim_tb.sys_rst_n)");
    vlSelfRef.__VtrigSched_h555bb969__0.moveToResumeQueue(
                                                          "@( lpddr4_sim_tb.pll_lock)");
    vlSelfRef.__VtrigSched_hcd29c994__0.moveToResumeQueue(
                                                          "@(posedge lpddr4_sim_tb.sys_clk)");
    vlSelfRef.__VtrigSched_h885c11dc__0.resume("@( lpddr4_sim_tb.sys_rst_n)");
    vlSelfRef.__VtrigSched_h555bb969__0.resume("@( lpddr4_sim_tb.pll_lock)");
    vlSelfRef.__VtrigSched_hcd29c994__0.resume("@(posedge lpddr4_sim_tb.sys_clk)");
    if ((0x0000000000000100ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vlpddr4_sim_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlpddr4_sim_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vlpddr4_sim_tb___024root___eval_phase__act(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_phase__act\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vlpddr4_sim_tb___024root___eval_triggers_vec__act(vlSelf);
    Vlpddr4_sim_tb___024root___timing_ready(vlSelf);
    Vlpddr4_sim_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlpddr4_sim_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vlpddr4_sim_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vlpddr4_sim_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vlpddr4_sim_tb___024root___timing_resume(vlSelf);
        Vlpddr4_sim_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vlpddr4_sim_tb___024root___eval_phase__inact(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_phase__inact\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/lpddr4_sim_tb.sv", 5, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vlpddr4_sim_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vlpddr4_sim_tb___024root___eval_phase__nba(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_phase__nba\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vlpddr4_sim_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vlpddr4_sim_tb___024root___eval_nba(vlSelf);
        Vlpddr4_sim_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vlpddr4_sim_tb___024root___eval(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vlpddr4_sim_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/lpddr4_sim_tb.sv", 5, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/lpddr4_sim_tb.sv", 5, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vlpddr4_sim_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/lpddr4_sim_tb.sv", 5, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vlpddr4_sim_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vlpddr4_sim_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vlpddr4_sim_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vlpddr4_sim_tb___024root____VbeforeTrig_h885c11dc__0(Vlpddr4_sim_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root____VbeforeTrig_h885c11dc__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_rst_n__0)) 
                                  << 9U)));
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_rst_n__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n;
    if ((0x0000000000000200ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h885c11dc__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vlpddr4_sim_tb___024root____VbeforeTrig_h555bb969__0(Vlpddr4_sim_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root____VbeforeTrig_h555bb969__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__pll_lock) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__pll_lock__0)) 
                                  << 0x0000000aU)));
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__pll_lock__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__pll_lock;
    if ((0x0000000000000400ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h555bb969__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vlpddr4_sim_tb___024root____VbeforeTrig_hcd29c994__0(Vlpddr4_sim_tb___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root____VbeforeTrig_hcd29c994__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_clk) 
                                   & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_clk__0))) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_clk__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__sys_clk;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcd29c994__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcd29c994__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcd29c994__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vlpddr4_sim_tb___024root___eval_debug_assertions(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_debug_assertions\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
