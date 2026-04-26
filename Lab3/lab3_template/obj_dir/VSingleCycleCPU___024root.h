// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"


class VSingleCycleCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    CData/*0:0*/ SingleCycleCPU__DOT__m_Control_memRead;
    CData/*0:0*/ SingleCycleCPU__DOT__m_BranchComp_BrEq;
    CData/*0:0*/ SingleCycleCPU__DOT__m_BranchComp_BrLT;
    CData/*3:0*/ SingleCycleCPU__DOT__m_ALUCtrl_ALUCtl;
    CData/*0:0*/ SingleCycleCPU__DOT__m_ALU_zero;
    CData/*2:0*/ SingleCycleCPU__DOT____Vcellinp__m_Control__funct3;
    CData/*4:0*/ SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg;
    CData/*4:0*/ SingleCycleCPU__DOT____Vcellinp__m_Register__readReg2;
    CData/*4:0*/ SingleCycleCPU__DOT____Vcellinp__m_Register__readReg1;
    CData/*0:0*/ SingleCycleCPU__DOT__m_Control__DOT__branch;
    CData/*6:0*/ SingleCycleCPU__DOT__m_ImmGen__DOT__opcode;
    CData/*7:0*/ __VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*6:0*/ __VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*0:0*/ __VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*7:0*/ __VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*6:0*/ __VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*7:0*/ __VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*6:0*/ __VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*7:0*/ __VdlyVal__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*6:0*/ __VdlyDim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*0:0*/ __VdlySet__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__start__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_Control_memRead__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ SingleCycleCPU__DOT__m_Control__DOT__ctrl_signals;
    SData/*15:0*/ __VdfgRegularize_hd87f99a1_0_1;
    IData/*31:0*/ SingleCycleCPU__DOT__m_PC_pc_o;
    IData/*31:0*/ SingleCycleCPU__DOT__m_InstMem_inst;
    IData/*31:0*/ SingleCycleCPU__DOT__m_Register_readData1;
    IData/*31:0*/ SingleCycleCPU__DOT__m_Register_readData2;
    IData/*31:0*/ SingleCycleCPU__DOT__m_ImmGen_imm;
    IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_PC_out;
    IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_ALU_out_A;
    IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_ALU_out_B;
    IData/*31:0*/ SingleCycleCPU__DOT__m_ALU_ALUOut;
    IData/*31:0*/ SingleCycleCPU__DOT__m_DataMemory_readData;
    IData/*31:0*/ SingleCycleCPU__DOT__m_Mux_WriteData_out;
    IData/*31:0*/ __Vtrigprevexpr___TOP__SingleCycleCPU__DOT__m_ALU_ALUOut__0;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(r[32],31,0);
    VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
    VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
    VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
