module fulladder (
    // input 
    input logic a, b, cin,

    // output
    output logic sum, cout
);
    assign cout = (a & b & cin) | (a & cin) | (b & cin);
    assign sum = a ^ b ^ cin;
endmodule : fulladder
