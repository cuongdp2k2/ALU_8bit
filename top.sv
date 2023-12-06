module top (
    // input
    input logic [7:0] A_i , B_i ,
    input logic [2:0]   ALU_op_i ,
    input logic clk_i ,
    // output
    output logic [7:0] ALU_RESULT_o ,
    output logic [3:0]     ALU_FLAGS_o      // oVerflow , Carry, Negative, Zero
);
	alu dut (
        .*    
    );
    
    always @(posedge clk_i) begin
        
    end
	 
endmodule : top
