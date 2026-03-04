module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement

    always @(*) begin
        zero = 1'b0;
        case(ALUctl)

            4'b0010: ALUOut = A + B; 
            //Implement other ALU operations
            
            4'b0110: begin  // SUB
                ALUOut = A - B;
                zero = ALUOut == 0 ? 1 : 0;

            end
            4'b0001: begin  // OR
                ALUOut = A | B;
                zero = ALUOut == 0 ? 1 : 0;
            end
            4'b0000: begin  // AND
                ALUOut = A & B;
                zero = ALUOut == 0 ? 1 : 0;
            end
            4'b0111: begin  // SLT
                ALUOut = A < B ? 1 : 0;
                zero = ALUOut == 0 ? 1 : 0;
            end
            4'b1001: begin  // XOR
                ALUOut = A ^ B;
                zero = ALUOut == 0 ? 1 : 0;
            end
            4'b1010: begin  // SLL
                ALUOut = A << B[4:0]; 
                zero = ALUOut == 0 ? 1 : 0;
            end
            4'b1100: begin// SRL
                ALUOut = A >> B[4:0];
                zero = ALUOut == 0 ? 1 : 0;
            end
            4'b1011: begin// SRA
                ALUOut = A >>> B[4:0];
                zero = ALUOut == 0 ? 1 : 0;
            end
            default : begin
                ALUOut = 32'b0;
                zero = 0;
            end
        
        endcase
    end

endmodule

