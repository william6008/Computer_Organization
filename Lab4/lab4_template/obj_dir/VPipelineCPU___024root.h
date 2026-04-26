// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"


class VPipelineCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__reg3_memRead;
        CData/*3:0*/ PipelineCPU__DOT__ALUCtrl;
        CData/*0:0*/ PipelineCPU__DOT__zero;
        CData/*4:0*/ PipelineCPU__DOT__reg2_writeReg;
        CData/*4:0*/ PipelineCPU__DOT__reg3_writeReg;
        CData/*4:0*/ PipelineCPU__DOT__reg4_writeReg;
        CData/*1:0*/ PipelineCPU__DOT__reg2_mem_to_reg;
        CData/*1:0*/ PipelineCPU__DOT__reg2_ALUop;
        CData/*1:0*/ PipelineCPU__DOT__reg3_mem_to_reg;
        CData/*1:0*/ PipelineCPU__DOT__reg4_mem_to_reg;
        CData/*2:0*/ PipelineCPU__DOT__reg2_funct3;
        CData/*0:0*/ PipelineCPU__DOT__reg2_memWrite;
        CData/*0:0*/ PipelineCPU__DOT__reg2_memRead;
        CData/*0:0*/ PipelineCPU__DOT__reg2_ALUSrc;
        CData/*0:0*/ PipelineCPU__DOT__reg2_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__reg2_funct7;
        CData/*0:0*/ PipelineCPU__DOT__reg2_isU;
        CData/*0:0*/ PipelineCPU__DOT__reg3_memWrite;
        CData/*0:0*/ PipelineCPU__DOT__reg3_regWrite;
        CData/*0:0*/ PipelineCPU__DOT__reg4_regWrite;
        CData/*0:0*/ __Vdly__PipelineCPU__DOT__reg3_memRead;
        CData/*1:0*/ __Vdly__PipelineCPU__DOT__reg4_mem_to_reg;
        CData/*0:0*/ __Vdly__PipelineCPU__DOT__reg4_regWrite;
        CData/*4:0*/ __Vdly__PipelineCPU__DOT__reg4_writeReg;
        CData/*7:0*/ __VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __VdlyVal__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*6:0*/ __VdlyDim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __VdlySet__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__start__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__PipelineCPU__DOT__reg3_memRead__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ PipelineCPU__DOT__m_Control__DOT__ctrl;
        IData/*31:0*/ PipelineCPU__DOT__pc_mux_out;
        IData/*31:0*/ PipelineCPU__DOT__pc_out;
        IData/*31:0*/ PipelineCPU__DOT__imm;
        IData/*31:0*/ PipelineCPU__DOT__ALUmux_out;
        IData/*31:0*/ PipelineCPU__DOT__memRead_out;
        IData/*31:0*/ PipelineCPU__DOT__ALUOut;
        IData/*31:0*/ PipelineCPU__DOT__reg1_pc_o;
        IData/*31:0*/ PipelineCPU__DOT__reg1_pc_4_o;
        IData/*31:0*/ PipelineCPU__DOT__reg1_inst_out;
        IData/*31:0*/ PipelineCPU__DOT__reg2_pc_4;
        IData/*31:0*/ PipelineCPU__DOT__reg2_pc;
        IData/*31:0*/ PipelineCPU__DOT__reg2_rd1;
        IData/*31:0*/ PipelineCPU__DOT__reg2_rd2;
        IData/*31:0*/ PipelineCPU__DOT__reg2_imm;
        IData/*31:0*/ PipelineCPU__DOT__reg3_pc_4;
        IData/*31:0*/ PipelineCPU__DOT__reg3_ALUResult;
        IData/*31:0*/ PipelineCPU__DOT__reg3_rd2;
        IData/*31:0*/ PipelineCPU__DOT__reg4_pc_4;
        IData/*31:0*/ PipelineCPU__DOT__reg4_ALUResult;
        IData/*31:0*/ PipelineCPU__DOT__reg4_readDataResult;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg3_ALUResult;
    };
    struct {
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg4_pc_4;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg4_ALUResult;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__reg4_readDataResult;
        IData/*31:0*/ __Vtrigprevexpr___TOP__PipelineCPU__DOT__reg3_ALUResult__0;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
