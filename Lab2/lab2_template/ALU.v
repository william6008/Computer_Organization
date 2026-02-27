module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero,
    output overflow
);
    // ALU has two operand, it execute different operator based on ALUctl wire
    // You have to output two flag: zero, overflow

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    reg zero_reg, overflow_reg;
    assign zero = zero_reg;
    assign overflow = overflow_reg;

    always @(*) begin
        case(ALUctl) 
            // TODO

            //R-type & I-type
            4'b0010: begin  // ADD
                ALUOut = A + B;
                if ((A > 0 && B > 0 && ALUOut < 0) || (A < 0 && B < 0 && ALUOut > 0)) overflow_reg = 1;
                else overflow_reg = 0;
                zero_reg = ALUOut == 0 ? 1 : 0;
            end
            4'b0110: begin  // SUB
                ALUOut = A - B;
                if ((A > 0 && B < 0 && ALUOut < 0) || (A < 0 && B > 0 && ALUOut > 0)) overflow_reg = 1;
                else overflow_reg = 0;
                zero_reg = ALUOut == 0 ? 1 : 0;

            end
            4'b0001: begin  // OR
                ALUOut = A | B;
                zero_reg = ALUOut == 0 ? 1 : 0;
                overflow_reg = 0;
            end
            4'b0000: begin  // AND
                ALUOut = A & B;
                zero_reg = ALUOut == 0 ? 1 : 0;
                overflow_reg = 0;
            end
            4'b0111: begin  // SLT
                ALUOut = A < B ? 1 : 0;
                zero_reg = ALUOut == 0 ? 1 : 0;
                overflow_reg = 0;
            end
            4'b1001: begin  // XOR
                ALUOut = A ^ B;
                zero_reg = ALUOut == 0 ? 1 : 0;
                overflow_reg = 0;
            end
            4'b1010: begin  // SLL
                ALUOut = A << B[4:0]; 
                zero_reg = ALUOut == 0 ? 1 : 0;
                overflow_reg = 0;
            end
            4'b1100: begin// SRL
                ALUOut = A >> B[4:0];
                zero_reg = ALUOut == 0 ? 1 : 0;
                overflow_reg = 0;
            end
            4'b1011: begin// SRA
                ALUOut = A >>> B[4:0];
                zero_reg = ALUOut == 0 ? 1 : 0;
                overflow_reg = 0;
            end
            //----------------

            default: begin
                ALUOut = 0;
                zero_reg = 0;
                overflow_reg = 0;
            end

        endcase
    end
endmodule

