// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlpddr4_sim_tb.h for the primary calling header

#include "Vlpddr4_sim_tb__pch.h"

void Vlpddr4_sim_tb___024root___timing_ready(Vlpddr4_sim_tb___024root* vlSelf);

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___eval_static(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_static\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready;
    vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000200ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000400ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
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
    Vlpddr4_sim_tb___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___eval_initial__TOP(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_initial__TOP\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("lpddr4_sim.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[0U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[1U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[2U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[3U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[4U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[5U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[6U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[10U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[11U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[12U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[13U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[14U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[16U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[17U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[18U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[19U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[20U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[32U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[40U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[41U] = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__training_done = 0U;
}

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___eval_final(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_final\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlpddr4_sim_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vlpddr4_sim_tb___024root___eval_phase__stl(Vlpddr4_sim_tb___024root* vlSelf);

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___eval_settle(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_settle\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vlpddr4_sim_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/lpddr4_sim_tb.sv", 5, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vlpddr4_sim_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___eval_triggers_vec__stl(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_triggers_vec__stl\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready__0)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready__0)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready;
    vlSelfRef.__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready__0 
        = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (2ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (4ULL | vlSelfRef.__VstlTriggered[0U]);
        vlSelfRef.__VstlTriggered[0U] = (8ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vlpddr4_sim_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlpddr4_sim_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vlpddr4_sim_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] lpddr4_sim_tb.u_dut.s3_axi_bready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] lpddr4_sim_tb.u_dut.s2_axi_bready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] lpddr4_sim_tb.u_dut.s1_axi_bready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] lpddr4_sim_tb.u_dut.s0_axi_bready)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vlpddr4_sim_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___stl_sequent__TOP__0(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___stl_sequent__TOP__0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_2;
    __VdfgRegularize_hebeb780c_0_2 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    // Body
    if ((1U & (~ ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bid = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rresp = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bresp = 0U;
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
            vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rlast = 1U;
        }
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bresp = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bid = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rresp = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rid 
                = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id
                [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head];
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
            vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rlast = 1U;
        }
    }
    if ((2U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
        if ((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bid = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bresp = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rresp = 0U;
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
            vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rlast = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_port)))) {
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bid = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bresp = 0U;
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rresp = 0U;
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
            vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rlast = 1U;
        }
    }
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke = 3U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_start = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_ack = 0U;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_empty 
        = (1U & (~ (0U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid))));
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
    vlSelfRef.lpddr4_sim_tb__DOT__training_done = vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__training_done_int;
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
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__rst_n 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
           & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__init_reset_n));
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[0U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[1U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[2U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[3U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[0U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[1U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[2U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[3U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[0U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[1U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[2U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[3U] 
        = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[0U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[1U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[2U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[3U] = vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes;
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n) 
           & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__pll_lock));
    vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable 
        = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__tg_enable) 
           & (0x10U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full 
        = (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid) 
            >> (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr)) 
           & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr) 
              == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr)));
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
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out 
        = ((0xffff0000U & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out) 
           | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[2U] 
               << 8U) | vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[0U]));
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out 
        = ((0x0000ffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out) 
           | ((vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[6U] 
               << 0x00000018U) | (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[4U] 
                                  << 0x00000010U)));
    vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en 
        = ((0x30U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine)) 
           & (0x0eU >= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en) 
                                                | (0U 
                                                   < (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wrdata_cnt)));
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
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_req 
        = ((((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
             << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                       << 2U)) | (((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                   << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5)));
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
    __VdfgRegularize_hebeb780c_0_1 = (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out 
                                      & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))));
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
    vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__bank_addr 
        = ((4U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                  >> 0x00000014U)) | (3U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                            >> 0x0000000fU)));
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
}

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___stl_comb__TOP__0(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___stl_comb__TOP__0\n"); );
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

VL_ATTR_COLD void Vlpddr4_sim_tb___024root____Vm_traceActivitySetAll(Vlpddr4_sim_tb___024root* vlSelf);

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___eval_stl(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_stl\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
        Vlpddr4_sim_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vlpddr4_sim_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if (((1ULL & vlSelfRef.__VstlTriggered[1U]) | (0x000000000000000fULL 
                                                   & vlSelfRef.__VstlTriggered[0U]))) {
        Vlpddr4_sim_tb___024root___stl_comb__TOP__0(vlSelf);
        Vlpddr4_sim_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vlpddr4_sim_tb___024root___eval_phase__stl(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___eval_phase__stl\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vlpddr4_sim_tb___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vlpddr4_sim_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vlpddr4_sim_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vlpddr4_sim_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vlpddr4_sim_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vlpddr4_sim_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vlpddr4_sim_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] lpddr4_sim_tb.u_dut.s3_axi_bready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([hybrid] lpddr4_sim_tb.u_dut.s2_axi_bready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([hybrid] lpddr4_sim_tb.u_dut.s1_axi_bready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([hybrid] lpddr4_sim_tb.u_dut.s0_axi_bready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(posedge lpddr4_sim_tb.ddr_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(posedge lpddr4_sim_tb.sys_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(posedge lpddr4_sim_tb.ddr_clk_4x)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(negedge lpddr4_sim_tb.u_mem.rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @( lpddr4_sim_tb.sys_rst_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @( lpddr4_sim_tb.pll_lock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vlpddr4_sim_tb___024root____Vm_traceActivitySetAll(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root____Vm_traceActivitySetAll\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
}

VL_ATTR_COLD void Vlpddr4_sim_tb___024root___ctor_var_reset(Vlpddr4_sim_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root___ctor_var_reset\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->lpddr4_sim_tb__DOT__sys_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 207201129152139104ull);
    vlSelf->lpddr4_sim_tb__DOT__sys_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2617443844645424461ull);
    vlSelf->lpddr4_sim_tb__DOT__pll_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 368891498151758418ull);
    vlSelf->lpddr4_sim_tb__DOT__ddr_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11907620385632882320ull);
    vlSelf->lpddr4_sim_tb__DOT__ddr_clk_4x = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1335610659501771034ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8546524683098762123ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9406607522218865095ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13364607887644638686ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4985551540040345502ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1924925041161346345ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3431928398411282960ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__s0_axi_rdata, __VscopeHash, 2764422822049477517ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2145641615327503459ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1434131347722661265ull);
    vlSelf->lpddr4_sim_tb__DOT__s0_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7814476333955205467ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 617309482249095281ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10317767870310515799ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15282592376586879630ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17936179305019130615ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10177214399163759259ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8388139803399773035ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__s1_axi_rdata, __VscopeHash, 5482540124363479729ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14436044559795903495ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3103948661621491937ull);
    vlSelf->lpddr4_sim_tb__DOT__s1_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14832737405497887011ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15963749716358381715ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2384789913150607123ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18240733880183582000ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6264848702944045354ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4118902546349793385ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 929553765317667975ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__s2_axi_rdata, __VscopeHash, 4157733179895302068ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15441186761357085860ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2201545813046992048ull);
    vlSelf->lpddr4_sim_tb__DOT__s2_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16715735252435617679ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15796903756165439660ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_bid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16212826983480422816ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 484838548855566563ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12251787530828108641ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16075043900414099300ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_rid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16980449853325966672ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__s3_axi_rdata, __VscopeHash, 16139016678734715191ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11310315609883659117ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_rlast = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8662827299359428040ull);
    vlSelf->lpddr4_sim_tb__DOT__s3_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10233870891551609278ull);
    vlSelf->lpddr4_sim_tb__DOT__psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448408311783915690ull);
    vlSelf->lpddr4_sim_tb__DOT__penable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3731375930545161313ull);
    vlSelf->lpddr4_sim_tb__DOT__paddr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9280601563162940234ull);
    vlSelf->lpddr4_sim_tb__DOT__pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4912277140820863723ull);
    vlSelf->lpddr4_sim_tb__DOT__pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8412932890596431319ull);
    vlSelf->lpddr4_sim_tb__DOT__prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11643583722019654958ull);
    vlSelf->lpddr4_sim_tb__DOT__ddr_ca = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16751292664381913041ull);
    vlSelf->lpddr4_sim_tb__DOT__training_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1481736786683318032ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__stat_reads[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8397182192171801900ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__stat_writes[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 924397346825118131ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__stat_read_cmds[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12415525953686283335ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__stat_write_cmds[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5546724490777616022ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__tg_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12616971060093512348ull);
    vlSelf->lpddr4_sim_tb__DOT__ddr_clk_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18267185538359998891ull);
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes = 0;
    vlSelf->lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17391424458654653742ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17992243896194157113ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6726889320843191542ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5594440184130624856ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17948228848016041667ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17346271005650460098ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9718976647396929899ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3049491412605562767ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dq = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16719929568951993448ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3294744977010072955ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__ddr_rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2527667587544824785ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18078148036510629022ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2252234619171337260ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14582302807271885597ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12225026150112748347ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_mask = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15929490145435542167ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7827822198035801212ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1481363036529236048ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17218395014084203868ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata, __VscopeHash, 15032460137449425859ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10589533815878489383ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5984197207975016749ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8669345403815264690ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__resp_port = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7301873355215667141ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cfg_ctrl = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15722714830017380371ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cfg_timing = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17024465233615684817ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cfg_phy = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18211717975257811941ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11055904604914810889ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__training_done_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13632014508258224730ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__training_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9164954253846642479ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__wl_delay = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1505719463485814025ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__gate_delay = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1723380064434413022ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__rd_delay = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17476975309259192815ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__wr_delay = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11882564730894447892ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__ca_delay = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17209584948413797514ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT____Vcellout__u_controller__dfi_cs_n = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dqs__en1 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9428280071102363460ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12895922074085807517ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6426766696972259020ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__arb_rr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5722843734863045772ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_pri = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16640964341477170653ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15663655359320461726ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__intr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12855470495513465126ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14915630428059009563ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 669157783390186143ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__bank_addr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7192861940704310829ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__open_row[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 10805991666003562496ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__row_open[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17622175372590078148ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10735619868674040512ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11842959822566144814ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1593998363732162804ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata[__Vi0], __VscopeHash, 5124993628149197933ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13229151741276417791ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8938922598621645211ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10564821846208351667ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6198373112836662036ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14318057267148494716ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13952088567666398414ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1684886270701719558ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8648590305734749413ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6394305384259679514ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2092590023400658630ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf, __VscopeHash, 7491034351819519845ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf, __VscopeHash, 1338811711596998435ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_strb_buf = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12604207580268787146ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata[__Vi0], __VscopeHash, 85967174096331151ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6744712112403259163ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 363901583149876707ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8118434185795910602ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11906266267282121084ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_pending_id = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6724774047075114394ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__mr[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11511885091120677908ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11201957054291356734ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2470154173540744746ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15778822450373805397ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16216519935972571664ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5369607659951147304ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14038725711369872228ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_ack = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1828856482360622860ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ck_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1864304076793641444ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ck_gate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2619293947932654566ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4801287363084246478ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16323149513660332000ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 968481063455877637ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8017424850513051535ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10267804183119568336ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_in = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7116828103724101922ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1904871354357995754ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_ser[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7715971628893523094ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14689201003998419786ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 728331830818997566ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_deser[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18159132249595973240ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14675739178154522525ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rd_aligned = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18224170303058437411ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf, __VscopeHash, 4001430622437548681ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wrdata_en_dly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11329275299194475492ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wrdata_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18113218960172767773ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rd_data_buf = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15646939465692965141ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5675172088741280555ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5206817748782633341ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rd_phase = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10443793521566846487ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 447476291922620488ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate_early = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17871387548862583423ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__odt_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10176609227778699532ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__init_reset_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4452465880461785509ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__reset_phy_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6498037484574401061ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13926588794450074155ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__prev_dfi_rddata_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11860443803772015452ull);
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out0 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out1 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out2 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out3 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out4 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out5 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out6 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out7 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out8 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out9 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out10 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out11 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out12 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out13 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out14 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out15 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out16 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out17 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out18 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out19 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out20 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out21 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out22 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out23 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out24 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out25 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out26 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out27 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out28 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out29 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out30 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dq__out__strong__out31 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out32 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out33 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out34 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out35 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out36 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out37 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out38 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out39 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18344079796335781233ull);
    for (int __Vi0 = 0; __Vi0 < 268435456; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9114345539139385784ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__state_machine = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16010767843060873898ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__next_state = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4620206290298577977ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__open_row[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6073107877720704583ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__open_bank[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17556240477285174230ull);
    }
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14696827254461519216ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__dqs_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11376399085001661775ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__cmd_addr = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1318478388281044839ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__timer = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11209048498926908572ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__row_addr_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1827628640004165366ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__bank_addr_reg = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4287248807646051068ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__timer_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 397527095814773537ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__timer_load = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14930670872710143436ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__read_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8098183056066427834ull);
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out0 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out1 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out2 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out3 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out4 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out5 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out6 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out7 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out8 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out9 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out10 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out11 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out12 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out13 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out14 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out15 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out16 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out17 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out18 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out19 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out20 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out21 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out22 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out23 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out24 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out25 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out26 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out27 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out28 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out29 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out30 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_mem__DOT__ddr_dq__out__strong__out31 = 0;
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13492465163062296269ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 305542369326130975ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12885089805789532447ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16907102680314491311ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7603753309657326600ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8695472187543316328ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10344956344491062480ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14244544935560291492ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2327046727577013130ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata, __VscopeHash, 16396135218501713576ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10193025404727381396ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 888711734728237116ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13169369146058100567ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10921679255698359885ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1334852367380961953ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15657160924839810523ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1086101040885535223ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1874501304716648548ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10887733864253731814ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18000467513247433863ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata, __VscopeHash, 15430395982215256511ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9196234394238553989ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4349927761691004787ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14189829926194103431ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12523337123917193362ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13577163121789572799ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8449347909862530818ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12915780507292855308ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3429072183184762644ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11037314609952794703ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13300862837941063462ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata, __VscopeHash, 3049565001583827357ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9436494391758867781ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5559119694102436857ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16594615113885018271ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10862643588689552688ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4810502137093243068ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5848223125123563943ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6604400750887903814ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15240269064419503315ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_arid = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18063030666917644092ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_awid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7054993095277686728ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata, __VscopeHash, 14798538769641634473ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__is_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7685436024586323534ull);
    vlSelf->lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4387510192897939905ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_5 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_6 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_7 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_8 = 0;
    vlSelf->__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr = 0;
    vlSelf->__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt = 0;
    vlSelf->__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg = 0;
    vlSelf->__Vdly__lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt = 0;
    vlSelf->__VdlySet__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr__v0 = 0;
    vlSelf->__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len__v0 = 0;
    vlSelf->__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len__v0 = 0;
    VL_ZERO_RESET_W(128, vlSelf->__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0);
    vlSelf->__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata__v0 = 0;
    vlSelf->__VdlyVal__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb__v0 = 0;
    vlSelf->__VdlyDim0__lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready__0 = 0;
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__ddr_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__ddr_clk_4x__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__u_mem__DOT__rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__sys_rst_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__lpddr4_sim_tb__DOT__pll_lock__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
