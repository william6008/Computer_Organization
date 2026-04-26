// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "VPipelineCPU__pch.h"
#include "VPipelineCPU__Syms.h"
#include "VPipelineCPU___024root.h"

void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf);

VPipelineCPU___024root::VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VPipelineCPU___024root___ctor_var_reset(this);
}

void VPipelineCPU___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VPipelineCPU___024root::~VPipelineCPU___024root() {
}
