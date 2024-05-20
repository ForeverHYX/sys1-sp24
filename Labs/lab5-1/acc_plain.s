        .text
        .globl  acc
acc:
        addi    sp,sp,-48
        sd      s0,40(sp)
        addi    s0,sp,48
        sd      a0,-40(s0)
        sd      a1,-48(s0)
        sd      zero,-32(s0)
        ld      a5,-40(s0)
        sd      a5,-24(s0)
        j       .L2
.L3:
        ld      a4,-32(s0)
        ld      a5,-24(s0)
        add     a5,a4,a5
        sd      a5,-32(s0)
        ld      a5,-24(s0)
        addi    a5,a5,1
        sd      a5,-24(s0)
.L2:
        ld      a4,-24(s0)
        ld      a5,-48(s0)
        ble     a4,a5,.L3
        ld      a5,-32(s0)
        mv      a0,a5
        ld      s0,40(sp)
        addi    sp,sp,48
        jr      ra

        /*bubble_sort:
    addi    sp,sp,-64
    sd      s0,56(sp)
    addi    s0,sp,64
    sd      a0,-64(s0)#-64:arr address
    sd      a1,-56(s0)#-56:len
    addi    a1,a1,-1#-56:len-1
    ld      a2,-56(s0)#a2:len-1    
    addi    a2,a2,-1#a2:len-2
    sd      a2,-48(s0)#-48:a2:len-2
    li      a3,0#a3:i=0
    sd      a3,-40(s0)#-40:a3:i=0
    ld      a4,-40(s0)#a4:j=i
    sd      a4,-32(s0)#-32:a4:j=i=0
    sd      a5,-24(s0)#temp variable
    j       judge1
#a0:arr  a1:len-1  a2:len-2  a3:i=0  a4:j
judge1:
    ble     a3,a1,loop1
    ld      s0,56(sp)
    addi    sp,sp,64
    jr      ra
loop1:
    addi    a3,a3,1
    j       judge2
    j       judge1
judge2:
    ld      a4,-40(s0)
    ble     a4,a2,loop2
    j       judge1
loop2:
    ld      t1,0(a0)
    ld      t2,8(a0)
    ble     t2,t1,swap
    addi    a4,a4,1
    addi    a0,a0,8
    j       judge2
swap:
    ld      a5,t1
    ld      t1,t2
    ld      t2,a5
    sd      t1,0(a0)
    sd      t2,8(a0)
    ld      a5,t1
    ld      t1,t2
    ld      t2,a5
    j       loop2*/