module notALU(
    input logic [7:0] data_i ,

    output logic [7:0] ndata_o 
);
    assign ndata_o = ~data_i ; 
    // genvar i ;
    // generate
    //     for(i=0 ; i<8 ; i++) begin NOT_GEN
    //         assign ndata_o[i] = ~data_i[i] ;
    //     end
    // endgenerate
endmodule : notALU