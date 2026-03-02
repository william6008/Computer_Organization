module SingleCycleCPU (
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

//m_PC
wire [31:0] m_PC_pc_o;

//m_Adder_1
wire [31:0] m_Adder_1_sum;

//m_InstMem
wire [31:0] m_InstMem_inst;

//m_Control
wire m_Control_memRead,
    m_Control_memWrite,
    m_Control_ALUSrc,
    m_Control_regWrite;
wire [1:0] m_Control_memtoReg,
            m_Control_ALUOp,
            m_Control_PCSel;

//m_Register
wire [31:0] m_Register_readData1,
            m_Register_readData2;

//m_BranchComp
wire m_BranchComp_BrEq,
    m_BranchComp_BrLT;

//m_ImmGen
wire [31:0] m_ImmGen_imm;

//m_ShiftLeftOne
wire [31:0] m_ShiftLeftOne_o;

//m_Adder_2
wire [31:0] m_Adder_2_sum;

//m_Mux_PC
wire [31:0] m_Mux_PC_out;

//m_Mux_ALU
wire [31:0] m_Mux_ALU_out;

//m_ALUCtrl
wire [3:0] m_ALUCtrl_ALUCtl;

//m_ALU
wire [31:0] m_ALU_ALUOut;
wire m_ALU_zero;

//m_DataMemory
wire [31:0] m_DataMemory_readData;

//m_Mux_WriteData
wire [31:0] m_Mux_WriteData_out;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(m_Mux_PC_out),
    .pc_o(m_PC_pc_o)
);

Adder m_Adder_1(
    .a({{29{1'b0}}, 3'b100}),
    .b(m_PC_pc_o),
    .sum(m_Adder_1_sum)
);


InstructionMemory m_InstMem(
    .readAddr(m_PC_pc_o),
    .inst(m_InstMem_inst)
);

Control m_Control(
    .opcode(m_InstMem_inst[6:0]),
    .funct3(m_InstMem_inst[14:12]),
    .BrEq(m_BranchComp_BrEq),
    .BrLT(m_BranchComp_BrLT),
    .memRead(m_Control_memRead),
    .memtoReg(m_Control_memtoReg),
    .ALUOp(m_Control_ALUOp),
    .memWrite(m_Control_memWrite),
    .ALUSrc(m_Control_ALUSrc),
    .regWrite(m_Control_regWrite),
    .PCSel(m_Control_PCSel)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(m_Control_regWrite),
    .readReg1(m_InstMem_inst[19:15]),
    .readReg2(m_InstMem_inst[24:20]),
    .writeReg(m_InstMem_inst[11:7]),
    .writeData(m_Mux_ALU_out),
    .readData1(m_Register_readData1),
    .readData2(m_Register_readData2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(m_Register_readData1),
    .B(m_Register_readData2),
    .BrEq(m_BranchComp_BrEq),
    .BrLT(m_BranchComp_BrLT)
);

ImmGen m_ImmGen(
    .inst(m_InstMem_inst),
    .imm(m_ImmGen_imm)
);


ShiftLeftOne m_ShiftLeftOne(
    .i(m_ImmGen_imm),
    .o(m_ShiftLeftOne_o)
);

Adder m_Adder_2(
    .a(m_PC_pc_o),
    .b(m_ShiftLeftOne_o),
    .sum(m_Adder_2_sum)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(m_Control_PCSel),
    .s0(m_Adder_1_sum),
    .s1(m_Adder_2_sum),
    .s2(m_ALU_ALUOut),
    .out(m_Mux_PC_out)
);


Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(m_Control_ALUSrc),
    .s0(m_Register_readData2),
    .s1(m_ImmGen_imm),
    .out(m_Mux_ALU_out)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(m_Control_ALUOp),
    .funct7(m_InstMem_inst[30]),
    .funct3(m_InstMem_inst[14:12]),
    .ALUCtl(m_ALUCtrl_ALUCtl)
);

ALU m_ALU(
    .ALUctl(m_ALUCtrl_ALUCtl),
    .A(m_Register_readData1),
    .B(m_Mux_ALU_out),
    .ALUOut(m_ALU_ALUOut),
    .zero(m_ALU_zero)
);


DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(m_Control_memWrite),
    .memRead(m_Control_memRead),
    .address(m_ALU_ALUOut),
    .writeData(m_Register_readData2),
    .readData(m_DataMemory_readData)
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(m_Control_memtoReg),
    .s0(m_ALU_ALUOut),
    .s1(m_DataMemory_readData),
    .s2(m_Adder_1_sum),
    .out(m_Mux_WriteData_out)
);

endmodule
