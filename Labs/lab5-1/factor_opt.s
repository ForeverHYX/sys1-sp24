        .text
        .globl  factor
factor:
        mv      a5,a0
        li      a0,1
        beq     a5,zero,.L1
.L2:
        mv      a4,a5
        addi    a5,a5,-1
        mul     a0,a0,a4
        bne     a5,zero,.L2
.L1:
        ret