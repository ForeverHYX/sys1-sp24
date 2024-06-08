module Cnt2num #(
    parameter BASE = 24,
    parameter INITIAL = 16
)(
    input en,
    input clk,
    input rstn,
    input high_rst,
    input low_co,
    output co,
    output [7:0] cnt
);

    localparam HIGH_BASE = 10;
    localparam LOW_BASE  = 10;
    localparam HIGH_INIT = INITIAL/10;
    localparam LOW_INIT  = INITIAL%10;
    localparam HIGH_CO   = (BASE-1)/10;
    localparam LOW_CO    = (BASE-1)%10;

    logic co1;
    logic hrst;
    Cnt #(
        .BASE(LOW_BASE),
        .INITIAL(LOW_INIT)
    )cnt_low(
        .en(en),
        .clk(clk),
        .rstn(rstn),
        .low_co(low_co),
        .high_rst(hrst),
        .co(co1),
        .cnt(cnt[3:0])
    );
    logic co2;
    Cnt #(
        .BASE(HIGH_BASE),
        .INITIAL(HIGH_INIT)
    )cnt_high(
        .en(en),
        .clk(clk),
        .rstn(rstn),
        .low_co(co1),
        .high_rst(hrst),
        .co(co2),
        .cnt(cnt[7:4])
    );

    assign hrst=(cnt[7:4] == HIGH_CO[3:0] && cnt[3:0] == LOW_CO[3:0]) ? 1 : 0;
    assign co = (cnt[7:4] == HIGH_CO[3:0] && cnt[3:0] == LOW_CO[3:0]) ? 1 : 0;

endmodule
