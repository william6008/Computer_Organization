module Multiplier(
    input signed [31:0] A, B,
    output signed [63:0] P
);

    // TODO: implement Multiplier here
    // Note: Do NOT use built-in operator * here.


    reg signed [64:0] acc;
    assign P = acc[64:1]; // assign answer

    always @(*) begin
        // TODO
        
        acc = {32'd0, B, 1'b0}; // init acc
        for (int i = 0; i < 32; i += 1) begin
            case (acc[1:0]) // booth algo operation
                2'b10: begin
                    acc[64:33] = acc[64:33] - A;
                end
                2'b01: begin
                    acc[64:33] = acc[64:33] + A;
                end
                default: ;
            endcase
             // update acc
            acc = $signed(acc) >>> 1;
        end

    end

endmodule
