// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlpddr4_sim_tb.h for the primary calling header

#include "Vlpddr4_sim_tb__pch.h"

void Vlpddr4_sim_tb___024root___ctor_var_reset(Vlpddr4_sim_tb___024root* vlSelf);

Vlpddr4_sim_tb___024root::Vlpddr4_sim_tb___024root(Vlpddr4_sim_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vlpddr4_sim_tb___024root___ctor_var_reset(this);
}

void Vlpddr4_sim_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vlpddr4_sim_tb___024root::~Vlpddr4_sim_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
