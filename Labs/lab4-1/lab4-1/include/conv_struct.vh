`ifndef __CONV_STRUCT__
`define __CONV_STRUCT__
package Conv;
    parameter WIDTH = 64;
    parameter LEN   = 4;

    typedef logic [WIDTH-1:0] data_t;
    typedef logic [WIDTH*2-1:0] result_t;

    typedef struct{
        data_t data [LEN-1:0];
    } data_vector;

endpackage
`endif