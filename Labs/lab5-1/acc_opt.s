        .text
        .globl  acc
acc:
        mv      a5,a0
        bgt     a0,a1,.L4
        addi    a1,a1,1
        li      a0,0
.L3:
        add     a0,a0,a5
        addi    a5,a5,1
        bne     a5,a1,.L3
        ret
.L4:
        li      a0,0
        ret