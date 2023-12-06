/* verilator lint_off UNUSED */
/* verilator lint_off UNOPTFLAT */
module add (
    // input 
    input logic        cin ,
    input logic [7:0]  A_i , B_i ,

    // output
    output logic       cout ,
    output logic [7:0] ADD_RESULT_o 
);
    logic [8:0] c_wire ;
    assign c_wire[0] = cin ;
    assign cout = c_wire[8] ;
    genvar i ;
    generate
        for(i=0; i<8; i++) begin : GENERATED_FOR_LOOP
            fulladder add_1bit(
                .a(A_i[i]) ,
                .b(B_i[i]) ,
                .cin(c_wire[i]) ,

                .sum(ADD_RESULT_o[i]) ,
                .cout(c_wire[i+1]) 
            );
        end
    endgenerate 
endmodule : add 
/* verilator lint_on UNUSED */
