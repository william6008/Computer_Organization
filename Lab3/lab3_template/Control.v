module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq, BrLT,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg [1:0] PCSel
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal

    reg [9:0] ctrl_signals;
    assign {PCSel, memRead, memtoReg, ALUOp, memWrite, ALUSrc, regWrite} = ctrl_signals;
    reg branch;

    always @(*) begin
        branch = 1'b0;
        case(opcode)

            7'b0110011: ctrl_signals = 10'b00_0_00_11_0_0_1; // R-type
            7'b0010011: ctrl_signals = 10'b00_0_00_01_0_1_1; // I-type
            7'b1100011: begin
                case(funct3)
                    // Implement b-type instructions
                    
                    3'b000: branch = BrEq; // beq
                    3'b001: branch = !BrEq; // bne
                    3'b100: branch = BrLT; // blt
                    3'b101: branch = !BrLT; // bge
                    default: ctrl_signals = 10'bxxxxxxxxxx;
                endcase
                if (branch) ctrl_signals = 10'b01_0_xx_xx_0_x_0;
                else ctrl_signals = 10'b00_0_xx_xx_0_x_0;
            end
            7'b0000011: ctrl_signals = 10'b00_1_01_00_0_1_1; // lw
            7'b0100011: ctrl_signals = 10'b00_0_xx_00_1_1_0; // sw
            7'b1101111: ctrl_signals = 10'b01_0_10_xx_0_x_1; // jal
            7'b1100111: ctrl_signals = 10'b10_0_10_00_0_1_1; // jalr
            7'b0010111: ctrl_signals = 10'b00_0_00_00_0_1_1; // auipc
            default: ctrl_signals = 10'bxxxxxxxxxx;
        
        endcase
    
    end

endmodule

