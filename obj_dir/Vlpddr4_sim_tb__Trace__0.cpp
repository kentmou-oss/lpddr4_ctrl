// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vlpddr4_sim_tb__Syms.h"


void Vlpddr4_sim_tb___024root__trace_chg_0_sub_0(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vlpddr4_sim_tb___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_0\n"); );
    // Body
    Vlpddr4_sim_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlpddr4_sim_tb___024root*>(voidSelf);
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vlpddr4_sim_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____0(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____1(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____2(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____3(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____4(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 32>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____5(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 32>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____6(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 32>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____7(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____8(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____9(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 4>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____10(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____11(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____12(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 8>& __VdtypeVar);
void Vlpddr4_sim_tb___024root__trace_chg_dtype____13(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 8>& __VdtypeVar);

void Vlpddr4_sim_tb___024root__trace_chg_0_sub_0(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_0_sub_0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bid),4);
        bufp->chgCData(oldp+1,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bresp),2);
        bufp->chgCData(oldp+2,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rresp),2);
        bufp->chgBit(oldp+3,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rlast));
        bufp->chgCData(oldp+4,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bid),4);
        bufp->chgCData(oldp+5,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bresp),2);
        bufp->chgCData(oldp+6,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rresp),2);
        bufp->chgBit(oldp+7,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rlast));
        bufp->chgCData(oldp+8,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bid),4);
        bufp->chgCData(oldp+9,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bresp),2);
        bufp->chgCData(oldp+10,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rresp),2);
        bufp->chgBit(oldp+11,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rlast));
        bufp->chgCData(oldp+12,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bid),4);
        bufp->chgCData(oldp+13,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bresp),2);
        bufp->chgCData(oldp+14,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rresp),2);
        bufp->chgBit(oldp+15,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rlast));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+16,(vlSelfRef.lpddr4_sim_tb__DOT__psel));
        bufp->chgBit(oldp+17,(vlSelfRef.lpddr4_sim_tb__DOT__penable));
        bufp->chgCData(oldp+18,(vlSelfRef.lpddr4_sim_tb__DOT__paddr),8);
        bufp->chgBit(oldp+19,(vlSelfRef.lpddr4_sim_tb__DOT__pwrite));
        bufp->chgIData(oldp+20,(vlSelfRef.lpddr4_sim_tb__DOT__pwdata),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity[7U])))) {
        bufp->chgBit(oldp+21,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_bvalid));
        bufp->chgBit(oldp+22,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_bready));
        bufp->chgBit(oldp+23,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rvalid));
        bufp->chgBit(oldp+24,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_bvalid));
        bufp->chgBit(oldp+25,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_bready));
        bufp->chgBit(oldp+26,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rvalid));
        bufp->chgBit(oldp+27,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_bvalid));
        bufp->chgBit(oldp+28,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_bready));
        bufp->chgBit(oldp+29,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rvalid));
        bufp->chgBit(oldp+30,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_bvalid));
        bufp->chgBit(oldp+31,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_bready));
        bufp->chgBit(oldp+32,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rvalid));
        bufp->chgBit(oldp+33,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+34,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_awid),4);
        bufp->chgIData(oldp+35,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_addr),32);
        bufp->chgCData(oldp+36,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len),8);
        bufp->chgBit(oldp+37,((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))));
        bufp->chgWData(oldp+38,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_wdata),128);
        bufp->chgBit(oldp+42,(((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_len) 
                               == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count))));
        bufp->chgBit(oldp+43,((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))));
        bufp->chgCData(oldp+44,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__curr_arid),5);
        bufp->chgBit(oldp+45,((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))));
        bufp->chgCData(oldp+46,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rid),5);
        bufp->chgWData(oldp+47,(vlSelfRef.lpddr4_sim_tb__DOT__s0_axi_rdata),128);
        bufp->chgBit(oldp+51,((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state))));
        bufp->chgCData(oldp+52,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_awid),4);
        bufp->chgIData(oldp+53,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_addr),32);
        bufp->chgCData(oldp+54,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len),8);
        bufp->chgBit(oldp+55,((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))));
        bufp->chgWData(oldp+56,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_wdata),128);
        bufp->chgBit(oldp+60,(((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_len) 
                               == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count))));
        bufp->chgBit(oldp+61,((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))));
        bufp->chgCData(oldp+62,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__curr_arid),5);
        bufp->chgBit(oldp+63,((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))));
        bufp->chgCData(oldp+64,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rid),5);
        bufp->chgWData(oldp+65,(vlSelfRef.lpddr4_sim_tb__DOT__s1_axi_rdata),128);
        bufp->chgBit(oldp+69,((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state))));
        bufp->chgCData(oldp+70,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_awid),4);
        bufp->chgIData(oldp+71,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_addr),32);
        bufp->chgCData(oldp+72,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len),8);
        bufp->chgBit(oldp+73,((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))));
        bufp->chgWData(oldp+74,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_wdata),128);
        bufp->chgBit(oldp+78,(((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_len) 
                               == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count))));
        bufp->chgBit(oldp+79,((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))));
        bufp->chgCData(oldp+80,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__curr_arid),5);
        bufp->chgBit(oldp+81,((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))));
        bufp->chgCData(oldp+82,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rid),5);
        bufp->chgWData(oldp+83,(vlSelfRef.lpddr4_sim_tb__DOT__s2_axi_rdata),128);
        bufp->chgBit(oldp+87,((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state))));
        bufp->chgCData(oldp+88,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_awid),4);
        bufp->chgIData(oldp+89,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_addr),32);
        bufp->chgCData(oldp+90,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len),8);
        bufp->chgBit(oldp+91,((2U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))));
        bufp->chgWData(oldp+92,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_wdata),128);
        bufp->chgBit(oldp+96,(((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_len) 
                               == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count))));
        bufp->chgBit(oldp+97,((3U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))));
        bufp->chgCData(oldp+98,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__curr_arid),5);
        bufp->chgBit(oldp+99,((5U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))));
        bufp->chgCData(oldp+100,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rid),5);
        bufp->chgWData(oldp+101,(vlSelfRef.lpddr4_sim_tb__DOT__s3_axi_rdata),128);
        bufp->chgBit(oldp+105,((6U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state))));
        bufp->chgIData(oldp+106,(vlSelfRef.lpddr4_sim_tb__DOT__prdata),32);
        bufp->chgCData(oldp+107,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__odt_reg),2);
        bufp->chgBit(oldp+108,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__init_reset_n));
        bufp->chgIData(oldp+109,(vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[0]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[1]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[2]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.lpddr4_sim_tb__DOT__stat_reads[3]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[0]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[1]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[2]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.lpddr4_sim_tb__DOT__stat_writes[3]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[0]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[1]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[2]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.lpddr4_sim_tb__DOT__stat_read_cmds[3]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[0]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[1]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[2]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.lpddr4_sim_tb__DOT__stat_write_cmds[3]),32);
        bufp->chgBit(oldp+125,(((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_8) 
                                | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_7) 
                                   | ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_6) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_5))))));
        bufp->chgIData(oldp+126,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr),32);
        bufp->chgCData(oldp+127,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_len),8);
        bufp->chgBit(oldp+128,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wr));
        bufp->chgWData(oldp+129,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wdata),128);
        bufp->chgSData(oldp+133,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_wstrb),16);
        bufp->chgCData(oldp+134,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_id),5);
        bufp->chgCData(oldp+135,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__grant_enc),2);
        bufp->chgWData(oldp+136,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata
                                 [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head]),128);
        bufp->chgCData(oldp+140,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id
                                 [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head]),5);
        bufp->chgBit(oldp+141,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid
                               [vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head]));
        bufp->chgIData(oldp+142,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_ctrl),32);
        bufp->chgIData(oldp+143,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_timing),32);
        bufp->chgIData(oldp+144,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_phy),32);
        bufp->chgCData(oldp+145,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__bank_addr),3);
        bufp->chgSData(oldp+146,((0x00003fffU & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                                 >> 4U))),14);
        bufp->chgSData(oldp+147,((0x000007f8U & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr)),11);
        bufp->chgCData(oldp+148,((3U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cmd_addr 
                                        >> 0x0000001aU))),2);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____0(vlSelf, bufp, 149, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_addr);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____1(vlSelf, bufp, 157, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____2(vlSelf, bufp, 165, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_id);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____3(vlSelf, bufp, 173, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_port);
        bufp->chgCData(oldp+181,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid),8);
        bufp->chgCData(oldp+182,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wr_ptr),3);
        bufp->chgBit(oldp+183,((1U & (~ (0U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid))))));
        bufp->chgWData(oldp+184,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__read_buf),128);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____4(vlSelf, bufp, 188, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_rdata);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____5(vlSelf, bufp, 316, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_id);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____6(vlSelf, bufp, 348, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_valid);
        bufp->chgCData(oldp+380,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_head),5);
        bufp->chgCData(oldp+381,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__rob_tail),5);
        bufp->chgSData(oldp+382,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer),16);
        bufp->chgBit(oldp+383,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_done));
        bufp->chgCData(oldp+384,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__init_timer),8);
        bufp->chgSData(oldp+385,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_timer),16);
        bufp->chgBit(oldp+386,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_req));
        bufp->chgCData(oldp+387,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_req),4);
        bufp->chgCData(oldp+388,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt),4);
        bufp->chgCData(oldp+389,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__arb_rr),2);
        bufp->chgCData(oldp+390,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__rot_req),4);
        bufp->chgBit(oldp+391,((1U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt))));
        bufp->chgBit(oldp+392,((1U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt) 
                                      >> 1U))));
        bufp->chgBit(oldp+393,((1U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt) 
                                      >> 2U))));
        bufp->chgBit(oldp+394,((1U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_crossbar__DOT__port_gnt) 
                                      >> 3U))));
        bufp->chgSData(oldp+395,((0x0000ffffU & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_phy)),16);
        bufp->chgBit(oldp+396,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_load));
        bufp->chgCData(oldp+397,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_cnt),4);
        bufp->chgCData(oldp+398,((0x0000000fU & (- (IData)((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle))))),4);
        bufp->chgCData(oldp+399,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate),4);
        bufp->chgBit(oldp+400,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__reset_phy_latch));
        bufp->chgBit(oldp+401,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_toggle));
        bufp->chgBit(oldp+402,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__prev_dfi_rddata_en));
        bufp->chgIData(oldp+403,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads),32);
        bufp->chgIData(oldp+404,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes),32);
        bufp->chgIData(oldp+405,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds),32);
        bufp->chgIData(oldp+406,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds),32);
        bufp->chgCData(oldp+407,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__state),4);
        bufp->chgIData(oldp+408,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr),32);
        bufp->chgBit(oldp+409,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__lfsr_feedback));
        bufp->chgIData(oldp+410,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_reads)),32);
        bufp->chgIData(oldp+411,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_write_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_0__stat_writes)),32);
        bufp->chgBit(oldp+412,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__is_write));
        bufp->chgCData(oldp+413,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__beat_count),4);
        bufp->chgIData(oldp+414,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads),32);
        bufp->chgIData(oldp+415,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes),32);
        bufp->chgIData(oldp+416,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds),32);
        bufp->chgIData(oldp+417,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds),32);
        bufp->chgCData(oldp+418,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__state),4);
        bufp->chgIData(oldp+419,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr),32);
        bufp->chgBit(oldp+420,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__lfsr_feedback));
        bufp->chgIData(oldp+421,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_reads)),32);
        bufp->chgIData(oldp+422,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_write_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_1__stat_writes)),32);
        bufp->chgBit(oldp+423,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__is_write));
        bufp->chgCData(oldp+424,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__beat_count),4);
        bufp->chgIData(oldp+425,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads),32);
        bufp->chgIData(oldp+426,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes),32);
        bufp->chgIData(oldp+427,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds),32);
        bufp->chgIData(oldp+428,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds),32);
        bufp->chgCData(oldp+429,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__state),4);
        bufp->chgIData(oldp+430,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr),32);
        bufp->chgBit(oldp+431,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__lfsr_feedback));
        bufp->chgIData(oldp+432,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_reads)),32);
        bufp->chgIData(oldp+433,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_write_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_2__stat_writes)),32);
        bufp->chgBit(oldp+434,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__is_write));
        bufp->chgCData(oldp+435,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__beat_count),4);
        bufp->chgIData(oldp+436,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads),32);
        bufp->chgIData(oldp+437,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes),32);
        bufp->chgIData(oldp+438,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds),32);
        bufp->chgIData(oldp+439,(vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds),32);
        bufp->chgCData(oldp+440,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__state),4);
        bufp->chgIData(oldp+441,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr),32);
        bufp->chgBit(oldp+442,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__lfsr_feedback));
        bufp->chgIData(oldp+443,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_read_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_reads)),32);
        bufp->chgIData(oldp+444,((vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_write_cmds 
                                  - vlSelfRef.lpddr4_sim_tb__DOT____Vcellout__u_tg_3__stat_writes)),32);
        bufp->chgBit(oldp+445,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__is_write));
        bufp->chgCData(oldp+446,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__beat_count),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+447,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rd_data_buf),32);
        bufp->chgIData(oldp+448,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_out),32);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____7(vlSelf, bufp, 449, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_ser);
        bufp->chgCData(oldp+457,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ser_cnt),4);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____8(vlSelf, bufp, 458, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_deser);
        bufp->chgCData(oldp+466,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__deser_cnt),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+467,((0x10U == (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine))));
        bufp->chgCData(oldp+468,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine),8);
        bufp->chgCData(oldp+469,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__state_machine),8);
        bufp->chgCData(oldp+470,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__next_state),8);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____9(vlSelf, bufp, 471, vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_row);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____10(vlSelf, bufp, 475, vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__open_bank);
        bufp->chgBit(oldp+479,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en));
        bufp->chgCData(oldp+480,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer),8);
        bufp->chgSData(oldp+481,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__row_addr_reg),16);
        bufp->chgCData(oldp+482,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__bank_addr_reg),2);
        bufp->chgBit(oldp+483,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_init));
        bufp->chgCData(oldp+484,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__timer_load),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgBit(oldp+485,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s0_axi_awready));
        bufp->chgBit(oldp+486,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s1_axi_awready));
        bufp->chgBit(oldp+487,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s2_axi_awready));
        bufp->chgBit(oldp+488,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__s3_axi_awready));
        bufp->chgSData(oldp+489,(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca),10);
        bufp->chgCData(oldp+490,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT____Vcellout__u_controller__dfi_cs_n),2);
        bufp->chgCData(oldp+491,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_cke),2);
        bufp->chgBit(oldp+492,((0x10U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state))));
        bufp->chgCData(oldp+493,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state),8);
        bufp->chgBit(oldp+494,(((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__training_fail) 
                                | (0x10U <= (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state)))));
        bufp->chgSData(oldp+495,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca),10);
        bufp->chgIData(oldp+496,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata),32);
        bufp->chgBit(oldp+497,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_wrdata_en));
        bufp->chgBit(oldp+498,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_en));
        bufp->chgBit(oldp+499,((1U & (~ (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full)))));
        bufp->chgIData(oldp+500,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training),32);
        bufp->chgBit(oldp+501,((1U & vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training)));
        bufp->chgCData(oldp+502,((7U & (vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__cfg_training 
                                        >> 1U))),4);
        bufp->chgBit(oldp+503,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT____Vcellout__u_controller__dfi_cs_n));
        bufp->chgCData(oldp+504,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__state),8);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____11(vlSelf, bufp, 505, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_len);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____12(vlSelf, bufp, 513, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wdata);
        Vlpddr4_sim_tb___024root__trace_chg_dtype____13(vlSelf, bufp, 545, vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_wstrb);
        bufp->chgCData(oldp+553,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_rd_ptr),3);
        bufp->chgBit(oldp+554,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_full));
        bufp->chgCData(oldp+555,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_cnt),8);
        bufp->chgBit(oldp+556,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__burst_active));
        bufp->chgWData(oldp+557,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_buf),128);
        bufp->chgSData(oldp+561,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__write_strb_buf),16);
        bufp->chgBit(oldp+562,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__timer_start));
        bufp->chgBit(oldp+563,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__ref_ack));
        bufp->chgSData(oldp+564,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ca_shreg),10);
        bufp->chgIData(oldp+565,((- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)))),32);
        bufp->chgIData(oldp+566,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dq_in),32);
        bufp->chgCData(oldp+567,((0x0000000fU & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))))),4);
        bufp->chgWData(oldp+568,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__wr_data_buf),128);
        bufp->chgCData(oldp+572,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__rddata_cnt),4);
        bufp->chgBit(oldp+573,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__dqs_gate_early));
        bufp->chgBit(oldp+574,((0x03ffU != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__dfi_ca))));
        bufp->chgBit(oldp+575,((1U & (~ ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                         >> 9U)))));
        bufp->chgBit(oldp+576,((1U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                      >> 5U))));
        bufp->chgBit(oldp+577,((1U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                      >> 4U))));
        bufp->chgBit(oldp+578,((1U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                      >> 3U))));
        bufp->chgBit(oldp+579,((1U & ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca) 
                                      >> 2U))));
        bufp->chgCData(oldp+580,((3U & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__ddr_ca))),2);
        bufp->chgSData(oldp+581,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__cmd_addr),14);
        bufp->chgSData(oldp+582,((0x000007ffU & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__cmd_addr))),11);
    }
    bufp->chgBit(oldp+583,(vlSelfRef.lpddr4_sim_tb__DOT__sys_clk));
    bufp->chgBit(oldp+584,(vlSelfRef.lpddr4_sim_tb__DOT__sys_rst_n));
    bufp->chgBit(oldp+585,(vlSelfRef.lpddr4_sim_tb__DOT__pll_lock));
    bufp->chgBit(oldp+586,(vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk));
    bufp->chgBit(oldp+587,(vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_4x));
    bufp->chgIData(oldp+588,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dq),32);
    bufp->chgCData(oldp+589,((0x0000000fU & ((- (IData)((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en))) 
                                             | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dqs__en1) 
                                                & (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out32) 
                                                    & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                   | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out33) 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                          << 1U)) 
                                                      | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out34) 
                                                          & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                             << 2U)) 
                                                         | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out35) 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                               << 3U))))))))),4);
    bufp->chgCData(oldp+590,((0x0000000fU & ((~ ((- (IData)((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__dq_out_en))) 
                                                 | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dqs__en1) 
                                                    & (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out32) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                       | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out33) 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                              << 1U)) 
                                                          | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out34) 
                                                              & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                 << 2U)) 
                                                             | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs__out__strong__out35) 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                                   << 3U)))))))) 
                                             | ((((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out36) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0)) 
                                                 | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out37) 
                                                     & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                        << 1U)) 
                                                    | (((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out38) 
                                                        & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                           << 2U)) 
                                                       | ((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_phy__DOT__ddr_dqs_n__out__strong__out39) 
                                                          & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                                             << 3U))))) 
                                                & (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__ddr_dqs__en1))))),4);
    bufp->chgBit(oldp+591,(vlSelfRef.lpddr4_sim_tb__DOT__training_done));
    bufp->chgBit(oldp+592,(vlSelfRef.lpddr4_sim_tb__DOT__tg_enable));
    bufp->chgIData(oldp+593,(vlSelfRef.lpddr4_sim_tb__DOT__ddr_clk_count),32);
    bufp->chgBit(oldp+594,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__rst_n));
    bufp->chgBit(oldp+595,(((IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__resp_ready) 
                            & (0U != (IData)(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__q_valid)))));
    bufp->chgCData(oldp+596,(vlSelfRef.lpddr4_sim_tb__DOT__u_dut__DOT__u_controller__DOT__next_state),8);
    bufp->chgBit(oldp+597,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__rst_n));
    bufp->chgIData(oldp+598,(vlSelfRef.lpddr4_sim_tb__DOT__u_mem__DOT__read_data),32);
    bufp->chgBit(oldp+599,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__enable));
    bufp->chgCData(oldp+600,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_0__DOT__next_state),4);
    bufp->chgCData(oldp+601,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_1__DOT__next_state),4);
    bufp->chgCData(oldp+602,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_2__DOT__next_state),4);
    bufp->chgCData(oldp+603,(vlSelfRef.lpddr4_sim_tb__DOT__u_tg_3__DOT__next_state),4);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____0(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____0\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____1(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____1\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[4]));
    bufp->chgBit(oldp+5,(__VdtypeVar[5]));
    bufp->chgBit(oldp+6,(__VdtypeVar[6]));
    bufp->chgBit(oldp+7,(__VdtypeVar[7]));
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____2(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____2\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),5);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),5);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),5);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),5);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),5);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),5);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),5);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),5);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____3(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*1:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____3\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),2);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),2);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),2);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),2);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),2);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),2);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),2);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),2);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____4(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____4\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0]),128);
    bufp->chgWData(oldp+4,(__VdtypeVar[1]),128);
    bufp->chgWData(oldp+8,(__VdtypeVar[2]),128);
    bufp->chgWData(oldp+12,(__VdtypeVar[3]),128);
    bufp->chgWData(oldp+16,(__VdtypeVar[4]),128);
    bufp->chgWData(oldp+20,(__VdtypeVar[5]),128);
    bufp->chgWData(oldp+24,(__VdtypeVar[6]),128);
    bufp->chgWData(oldp+28,(__VdtypeVar[7]),128);
    bufp->chgWData(oldp+32,(__VdtypeVar[8]),128);
    bufp->chgWData(oldp+36,(__VdtypeVar[9]),128);
    bufp->chgWData(oldp+40,(__VdtypeVar[10]),128);
    bufp->chgWData(oldp+44,(__VdtypeVar[11]),128);
    bufp->chgWData(oldp+48,(__VdtypeVar[12]),128);
    bufp->chgWData(oldp+52,(__VdtypeVar[13]),128);
    bufp->chgWData(oldp+56,(__VdtypeVar[14]),128);
    bufp->chgWData(oldp+60,(__VdtypeVar[15]),128);
    bufp->chgWData(oldp+64,(__VdtypeVar[16]),128);
    bufp->chgWData(oldp+68,(__VdtypeVar[17]),128);
    bufp->chgWData(oldp+72,(__VdtypeVar[18]),128);
    bufp->chgWData(oldp+76,(__VdtypeVar[19]),128);
    bufp->chgWData(oldp+80,(__VdtypeVar[20]),128);
    bufp->chgWData(oldp+84,(__VdtypeVar[21]),128);
    bufp->chgWData(oldp+88,(__VdtypeVar[22]),128);
    bufp->chgWData(oldp+92,(__VdtypeVar[23]),128);
    bufp->chgWData(oldp+96,(__VdtypeVar[24]),128);
    bufp->chgWData(oldp+100,(__VdtypeVar[25]),128);
    bufp->chgWData(oldp+104,(__VdtypeVar[26]),128);
    bufp->chgWData(oldp+108,(__VdtypeVar[27]),128);
    bufp->chgWData(oldp+112,(__VdtypeVar[28]),128);
    bufp->chgWData(oldp+116,(__VdtypeVar[29]),128);
    bufp->chgWData(oldp+120,(__VdtypeVar[30]),128);
    bufp->chgWData(oldp+124,(__VdtypeVar[31]),128);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____5(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*4:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____5\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),5);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),5);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),5);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),5);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),5);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),5);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),5);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),5);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),5);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),5);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),5);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),5);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),5);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),5);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),5);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),5);
    bufp->chgCData(oldp+16,(__VdtypeVar[16]),5);
    bufp->chgCData(oldp+17,(__VdtypeVar[17]),5);
    bufp->chgCData(oldp+18,(__VdtypeVar[18]),5);
    bufp->chgCData(oldp+19,(__VdtypeVar[19]),5);
    bufp->chgCData(oldp+20,(__VdtypeVar[20]),5);
    bufp->chgCData(oldp+21,(__VdtypeVar[21]),5);
    bufp->chgCData(oldp+22,(__VdtypeVar[22]),5);
    bufp->chgCData(oldp+23,(__VdtypeVar[23]),5);
    bufp->chgCData(oldp+24,(__VdtypeVar[24]),5);
    bufp->chgCData(oldp+25,(__VdtypeVar[25]),5);
    bufp->chgCData(oldp+26,(__VdtypeVar[26]),5);
    bufp->chgCData(oldp+27,(__VdtypeVar[27]),5);
    bufp->chgCData(oldp+28,(__VdtypeVar[28]),5);
    bufp->chgCData(oldp+29,(__VdtypeVar[29]),5);
    bufp->chgCData(oldp+30,(__VdtypeVar[30]),5);
    bufp->chgCData(oldp+31,(__VdtypeVar[31]),5);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____6(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____6\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
    bufp->chgBit(oldp+4,(__VdtypeVar[4]));
    bufp->chgBit(oldp+5,(__VdtypeVar[5]));
    bufp->chgBit(oldp+6,(__VdtypeVar[6]));
    bufp->chgBit(oldp+7,(__VdtypeVar[7]));
    bufp->chgBit(oldp+8,(__VdtypeVar[8]));
    bufp->chgBit(oldp+9,(__VdtypeVar[9]));
    bufp->chgBit(oldp+10,(__VdtypeVar[10]));
    bufp->chgBit(oldp+11,(__VdtypeVar[11]));
    bufp->chgBit(oldp+12,(__VdtypeVar[12]));
    bufp->chgBit(oldp+13,(__VdtypeVar[13]));
    bufp->chgBit(oldp+14,(__VdtypeVar[14]));
    bufp->chgBit(oldp+15,(__VdtypeVar[15]));
    bufp->chgBit(oldp+16,(__VdtypeVar[16]));
    bufp->chgBit(oldp+17,(__VdtypeVar[17]));
    bufp->chgBit(oldp+18,(__VdtypeVar[18]));
    bufp->chgBit(oldp+19,(__VdtypeVar[19]));
    bufp->chgBit(oldp+20,(__VdtypeVar[20]));
    bufp->chgBit(oldp+21,(__VdtypeVar[21]));
    bufp->chgBit(oldp+22,(__VdtypeVar[22]));
    bufp->chgBit(oldp+23,(__VdtypeVar[23]));
    bufp->chgBit(oldp+24,(__VdtypeVar[24]));
    bufp->chgBit(oldp+25,(__VdtypeVar[25]));
    bufp->chgBit(oldp+26,(__VdtypeVar[26]));
    bufp->chgBit(oldp+27,(__VdtypeVar[27]));
    bufp->chgBit(oldp+28,(__VdtypeVar[28]));
    bufp->chgBit(oldp+29,(__VdtypeVar[29]));
    bufp->chgBit(oldp+30,(__VdtypeVar[30]));
    bufp->chgBit(oldp+31,(__VdtypeVar[31]));
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____7(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____7\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),4);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____8(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*3:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____8\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),4);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),4);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),4);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),4);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),4);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),4);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),4);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),4);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____9(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____9\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____10(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*0:0*/, 4>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____10\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgBit(oldp+0,(__VdtypeVar[0]));
    bufp->chgBit(oldp+1,(__VdtypeVar[1]));
    bufp->chgBit(oldp+2,(__VdtypeVar[2]));
    bufp->chgBit(oldp+3,(__VdtypeVar[3]));
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____11(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____11\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____12(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<VlWide<4>/*127:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____12\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgWData(oldp+0,(__VdtypeVar[0]),128);
    bufp->chgWData(oldp+4,(__VdtypeVar[1]),128);
    bufp->chgWData(oldp+8,(__VdtypeVar[2]),128);
    bufp->chgWData(oldp+12,(__VdtypeVar[3]),128);
    bufp->chgWData(oldp+16,(__VdtypeVar[4]),128);
    bufp->chgWData(oldp+20,(__VdtypeVar[5]),128);
    bufp->chgWData(oldp+24,(__VdtypeVar[6]),128);
    bufp->chgWData(oldp+28,(__VdtypeVar[7]),128);
}

void Vlpddr4_sim_tb___024root__trace_chg_dtype____13(Vlpddr4_sim_tb___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_chg_dtype____13\n"); );
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),16);
}

void Vlpddr4_sim_tb___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlpddr4_sim_tb___024root__trace_cleanup\n"); );
    // Body
    Vlpddr4_sim_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlpddr4_sim_tb___024root*>(voidSelf);
    Vlpddr4_sim_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
