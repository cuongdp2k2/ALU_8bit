module zero(
    input logic [7:0] data_i ,

    output logic isZero_o 
); 
    logic [7:0] zero_wire ;
    assign zero_wire = data_i ^ 8'b0 ;
    
    assign isZero_o = (zero_wire != 0) ? 0 : 1 ; 

endmodule : zero