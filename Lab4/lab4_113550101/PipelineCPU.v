module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire [31:0] pc_mux_out, pc_out, pc_plus4, ins_out, writeData, readData1, readData2, imm, imm_shift, adder2_sum, jalr_sum, jalr_target, ALUmux_out, memRead_out, ALUOut;
wire [3:0] ALUCtrl;
wire [1:0] memtoReg, ALUOp, PCSel;
wire Brlt, Breq, memRead, memWrite, ALUSrc, regWrite, zero;

// new wire for pipeline cpu
wire [31:0] reg1_pc_o, reg1_pc_4_o, reg1_inst_out, reg2_pc_4, reg2_pc, reg2_rd1, reg2_rd2, reg2_imm, reg3_pc_4, reg3_ALUResult, reg3_rd2, reg4_pc_4, reg4_ALUResult, reg4_readDataResult;
wire [4:0] reg2_writeReg, reg3_writeReg, reg4_writeReg;
wire [1:0] reg2_mem_to_reg, reg2_ALUop, reg3_mem_to_reg, reg4_mem_to_reg;
wire [2:0] reg2_funct3;
wire reg2_memWrite, reg2_memRead, reg2_ALUSrc, reg2_regWrite, reg2_funct7, isU, reg2_isU, reg3_memWrite, reg3_memRead, reg3_regWrite, reg4_regWrite; 

// add by myself
wire Flush_HD_out, RePC_out;
wire id_ForwardA_out, id_ForwardB_out;
wire [1:0]ex_ForwardA_out, ex_ForwardB_out;
wire [31:0] rd1_mux_out, rd2_mux_out, ALUSrc_mux_ex_ForwardA_out, ALUSrc_mux_ex_ForwardB_out; 
wire [4:0] reg2_readReg1, reg2_readReg2;

wire Flush_ctrl_out;
wire [31:0] RePC_mux_out;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(RePC_mux_out),
    .pc_o(pc_out)
);
Adder m_Adder_1(
    .a(pc_out),
    .b(4),
    .sum(pc_plus4)
);
InstructionMemory m_InstMem(
    .readAddr(pc_out),
    .inst(ins_out)
);
IF_ID_Reg IF_ID_reg(
    .clk(clk),
    .rst(start),
    .pc_i(pc_out),
    .pc_4_i(pc_plus4),
    .inst_i(ins_out),
    .Flush_HD(Flush_HD_out),
    .Flush_ctrl(Flush_ctrl_out),
    .pc_o(reg1_pc_o),
    .pc_4_o(reg1_pc_4_o),
    .inst_o(reg1_inst_out)
);
Control m_Control(
    .opcode(reg1_inst_out[6:0]),
    .funct3(reg1_inst_out[14:12]),
    .BrEq(Breq),
    .BrLT(Brlt),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .isUtype(isU),
    .regWrite(regWrite),
    .PCSel(PCSel),
    .Flush_ctrl(Flush_ctrl_out)
);
ID_EX_Reg ID_EX_reg(
    .clk(clk),
    .rst(start),
    .mem_to_reg_i(memtoReg),
    .ALUop_i(ALUOp),
    .memWrite_i(memWrite),
    .memRead_i(memRead),
    .ALUSrc_i(ALUSrc),
    .regWrite_i(regWrite),
    .isU_i(isU),
    .funct7_i(reg1_inst_out[30]),
    .funct3_i(reg1_inst_out[14:12]),
    .pc_i(reg1_pc_o),
    .pc_4_i(reg1_pc_4_o),
    .writeReg_i(reg1_inst_out[11:7]),
    .rd1_i(readData1),
    .rd2_i(readData2),
    .imm_i(imm),
    .readReg1_i(reg1_inst_out[19:15]),
    .readReg2_i(reg1_inst_out[24:20]),
    .Flush_HD(Flush_HD_out),
    .mem_to_reg_o(reg2_mem_to_reg),
    .ALUop_o(reg2_ALUop),
    .memWrite_o(reg2_memWrite),
    .memRead_o(reg2_memRead),
    .ALUSrc_o(reg2_ALUSrc),
    .regWrite_o(reg2_regWrite),
    .isU_o(reg2_isU),
    .funct7_o(reg2_funct7),
    .funct3_o(reg2_funct3),
    .pc_4_o(reg2_pc_4),
    .pc_o(reg2_pc),
    .writeReg_o(reg2_writeReg),
    .rd1_o(reg2_rd1),
    .rd2_o(reg2_rd2),
    .imm_o(reg2_imm),
    .readReg1_o(reg2_readReg1),
    .readReg2_o(reg2_readReg2)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(reg4_regWrite),
    .readReg1(reg1_inst_out[19:15]),
    .readReg2(reg1_inst_out[24:20]),
    .writeReg(reg4_writeReg),
    .writeData(writeData),
    .readData1(readData1),
    .readData2(readData2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(rd1_mux_out),
    .B(rd2_mux_out),
    .BrEq(Breq),
    .BrLT(Brlt)
);

ImmGen m_ImmGen(
    .inst(reg1_inst_out),
    .imm(imm)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(imm_shift)
);
Adder m_Adder_2(
    .a(reg1_pc_o),
    .b(imm),
    .sum(adder2_sum)
);

// JALR is resolved in the ID stage, just like the branches.  ALUOut belongs
// to the instruction currently in EX, so it must not be used as JALR's PC.
// Use the forwarded ID-stage rs1 value and clear bit 0 as required by RISC-V.
Adder m_Adder_JALR(
    .a(rd1_mux_out),
    .b(imm),
    .sum(jalr_sum)
);
assign jalr_target = {jalr_sum[31:1], 1'b0};

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(pc_plus4),
    .s1(adder2_sum),
    .s2(jalr_target),
    .out(pc_mux_out)
);


Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(reg2_ALUSrc),
    .s0(ALUSrc_mux_ex_ForwardB_out),
    .s1(reg2_imm),
    .out(ALUmux_out)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(reg2_ALUop),
    
    .funct7(reg2_funct7),
    .funct3(reg2_funct3),
    .ALUCtl(ALUCtrl)
);

ALU m_ALU(
    .ALUctl(ALUCtrl),
    .pc(reg2_pc),
    .isUtype(reg2_isU),
    .A(ALUSrc_mux_ex_ForwardA_out),
    .B(ALUmux_out),
    .ALUOut(ALUOut),
    .zero(zero)
);

EX_MEM_Reg EX_MEM_reg(
    .clk(clk),
    .rst(start),
    .mem_to_reg_i(reg2_mem_to_reg),
    .memWrite_i(reg2_memWrite),
    .memRead_i(reg2_memRead),
    .regWrite_i(reg2_regWrite),
    .pc_4_i(reg2_pc_4),
    .writeReg_i(reg2_writeReg),
    .ALU_result_i(ALUOut),
    .rd2_i(ALUSrc_mux_ex_ForwardB_out),
    .mem_to_reg_o(reg3_mem_to_reg),
    .memWrite_o(reg3_memWrite),
    .memRead_o(reg3_memRead),
    .regWrite_o(reg3_regWrite),
    .pc_4_o(reg3_pc_4),
    .writeReg_o(reg3_writeReg),
    .ALU_result_o(reg3_ALUResult),
    .rd2_o(reg3_rd2)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(reg3_memWrite),
    .memRead(reg3_memRead),
    .address(reg3_ALUResult),
    .writeData(reg3_rd2),
    .readData(memRead_out)
);

MEM_WB_Reg MEM_WB_reg(
    .clk(clk),
    .rst(start),
    .mem_to_reg_i(reg3_mem_to_reg),
    .regWrite_i(reg3_regWrite),
    .pc_4_i(reg3_pc_4),
    .writeReg_i(reg3_writeReg),
    .ALU_result_i(reg3_ALUResult),
    .readDataResult_i(memRead_out),
    .mem_to_reg_o(reg4_mem_to_reg),
    .regWrite_o(reg4_regWrite),
    .pc_4_o(reg4_pc_4),
    .writeReg_o(reg4_writeReg),
    .ALU_result_o(reg4_ALUResult),
    .readDataResult_o(reg4_readDataResult)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(reg4_mem_to_reg),
    .s0(reg4_ALUResult),
    .s1(reg4_readDataResult),
    .s2(reg4_pc_4),
    .out(writeData)
);

Forwarding_Unit Forwarding_Unit(
    .id_R1(reg1_inst_out[19:15]),
    .id_R2(reg1_inst_out[24:20]),
    .ex_R1(reg2_readReg1),
    .ex_R2(reg2_readReg2),
    .mem_Rd(reg3_writeReg),
    .wb_Rd(reg4_writeReg),
    .mem_RegWrite(reg3_regWrite),
    .wb_RegWrite(reg4_regWrite),
    .id_ForwardA(id_ForwardA_out),
    .id_ForwardB(id_ForwardB_out),
    .ex_ForwardA(ex_ForwardA_out),
    .ex_ForwardB(ex_ForwardB_out)
);

Mux2to1 m_Mux_Rd1(
    .sel(id_ForwardA_out),
    .s0(readData1),
    .s1(reg3_ALUResult),
    .out(rd1_mux_out)
);

Mux2to1 m_Mux_Rd2(
    .sel(id_ForwardB_out),
    .s0(readData2),
    .s1(reg3_ALUResult),
    .out(rd2_mux_out)
);

Mux3to1 m_Mux_ex_ForwardA(
    .sel(ex_ForwardA_out),
    .s0(reg2_rd1),
    .s1(writeData),
    .s2(reg3_ALUResult),
    .out(ALUSrc_mux_ex_ForwardA_out)
);

Mux3to1 m_Mux_ex_ForwardB(
    .sel(ex_ForwardB_out),
    .s0(reg2_rd2),
    .s1(writeData),
    .s2(reg3_ALUResult),
    .out(ALUSrc_mux_ex_ForwardB_out)
);

HazardDetection HazardDetection(
    .id_opcode(reg1_inst_out[6:0]),
    .id_R1(reg1_inst_out[19:15]),      
    .id_R2(reg1_inst_out[24:20]),      
    .ex_Rd(reg2_writeReg),
    .mem_Rd(reg3_writeReg),
    .ex_MemRead(reg2_memRead),
    .ex_RegWrite(reg2_regWrite),
    .mem_MemRead(reg3_memRead),
    .RePC(RePC_out),             
    .Flush_HD(Flush_HD_out)  
);

Mux2to1 m_Mux_Repc(
    .sel(RePC_out),
    .s0(pc_mux_out),
    .s1(reg1_pc_o),
    .out(RePC_mux_out)
);

endmodule
