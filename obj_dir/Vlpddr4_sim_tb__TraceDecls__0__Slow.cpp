// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations

#include "verilated_fst_c.h"


void Vlpddr4_sim_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"CTRL_RESET", "CTRL_INIT_WAIT", "CTRL_INIT_MR", 
                                "CTRL_INIT_ZQCAL", 
                                "CTRL_IDLE", "CTRL_REFRESH", 
                                "CTRL_ACTIVATE", "CTRL_READ", 
                                "CTRL_WRITE", "CTRL_PRECHARGE", 
                                "CTRL_MRR", "CTRL_MRW", 
                                "CTRL_TRAINING", "CTRL_SREF", 
                                "CTRL_PWRDOWN"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "10000", "100000", 
                                "110000", "1000000", 
                                "1010000", "1100000", 
                                "1110000", "10000000", 
                                "10010000", "10100000", 
                                "10110000"};
        tracep->declDTypeEnum(1, "lpddr4_controller.ctrl_state_t", 15, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"STATE_RESET", "STATE_INIT_WAIT", "STATE_INIT_MRS", 
                                "STATE_INIT_ZQCAL", 
                                "STATE_IDLE", "STATE_ACTIVE", 
                                "STATE_READING", "STATE_WRITING", 
                                "STATE_PRECHARGING", 
                                "STATE_REFRESHING"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "10000", "100000", 
                                "110000", "1000000", 
                                "1010000", "1100000"};
        tracep->declDTypeEnum(2, "lpddr4_model.model_state_t", 10, 8, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT", "SEND_WRITE", "SEND_WDATA", 
                                "WAIT_BRESP", "SEND_READ", 
                                "WAIT_RDATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(3, "axi_traffic_gen.state_t", 7, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT", "SEND_WRITE", "SEND_WDATA", 
                                "WAIT_BRESP", "SEND_READ", 
                                "WAIT_RDATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(4, "axi_traffic_gen.state_t", 7, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT", "SEND_WRITE", "SEND_WDATA", 
                                "WAIT_BRESP", "SEND_READ", 
                                "WAIT_RDATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(5, "axi_traffic_gen.state_t", 7, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "WAIT", "SEND_WRITE", "SEND_WDATA", 
                                "WAIT_BRESP", "SEND_READ", 
                                "WAIT_RDATA"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(6, "axi_traffic_gen.state_t", 7, 4, __VenumItemNames, __VenumItemValues);
    }
}

void Vlpddr4_sim_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vlpddr4_sim_tb___024root__traceDeclTypesSub0(tracep);
}
