module Exercise3 (
    input clk,
    input nReset,
    input [3:0] a,
    input [15:0] b,
    input [15:0] c,
    output [15:0] out
);
wire [7:0] wire1, wire2;

Mystery1 m1 (a[1:0], b[7:0], c[7:0], wire1);
Mystery1 m2 (a[3:2], b[15:8], c[15:8], wire2);
Mystery2 m3 (clk, nReset, wire1, wire2, out);

endmodule
