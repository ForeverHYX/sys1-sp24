module top(
  input clk,
  input rstn,
  output [7:0] cs,
  output [7:0] an
);

  wire [31:0] clk_div;
  ClkDiv clkdiv(
    .clk(clk),
    .rstn(rstn),
    .clk_div(clk_div)
  );

  wire [7:0] cnt;
  wire co;
  Cnt2num #(
    .BASE(24),
    .INITIAL(16)
  ) cnt_24 (
    .clk(clk_div[23]),
    .rstn(rstn),
    .high_rst(1'b0),
    .low_co(1'b1),
    .co(co),
    .cnt(cnt)
  );

  SegDriver segdriver(
    .clk(clk_div[10]),
    .rstn(rstn),
    .data({23'b0, co, cnt}),
    .point(1'b0),
    .LE(1'b0),
    .cs(cs),
    .an(an)
  );

endmodule