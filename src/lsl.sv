/* verilator lint_off UNUSED */
module lsl(
    input logic [7:0] data_i ,
    input logic [3:0] shamt_i ,

    output logic [7:0] data_o 
);
    logic [2:0] limited_shamt ;
    assign limited_shamt = (data_i < 8) ? shamt_i[2:0] : 3'b111 ; 
    assign data_o = data_i << limited_shamt ;

endmodule : lsl
/* verilator lint_on UNUSED */
