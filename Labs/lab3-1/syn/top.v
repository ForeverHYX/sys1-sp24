module top(
  input clk,
  input rstn,
  input [1:0] btn,
  output [7:0] cs,
  output [7:0] an
);

  wire [31:0] clk_div;
  ClkDiv clkdiv(
    .clk(clk),
    .rstn(rstn),
    .clk_div(clk_div)
  );

  wire [1:0] btn_dbnc;
  Debouncer bd0(clk_div[10], btn[0], btn_dbnc[0]);
  Debouncer bd1(clk_div[10], btn[1], btn_dbnc[1]);

  wire a;
  wire b;
  PosSample sample0(clk, btn_dbnc[0], a);
  PosSample sample1(clk, btn_dbnc[1], b);

  wire [1:0] state;
  FSM fsm(
    .rstn(rstn),
    .clk(clk),
    .a(a),
    .b(b),
    .state(state)
  );

  SegDriver segdriver(
    .clk(clk_div[10]),
    .rstn(rstn),
    .data({30'b0, state}),
    .point(1'b0),
    .LE(1'b0),
    .cs(cs),
    .an(an)
  );

endmodule