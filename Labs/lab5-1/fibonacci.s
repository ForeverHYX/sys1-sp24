.text
.globl  fibonacci
#fibonacci(long long n){
#   if(n==0 or n==1) return 1;
#   return return fibonacci(n-1)+fibonacci(n-2);
#}
fibonacci:
    li t0, 2
    bge a0, t0, recursive
    li t1,0
    li t2,1
    beq a0,t0,return
    beq a0,t1,return
    ret
return:
    li a0,1
    ret
recursive:
    addi sp, sp, -24
    sd ra, 0(sp)
    sd s0, 8(sp)
    sd s1, 16(sp)
    mv s0, a0
    addi a0, s0, -1
    call fibonacci
    mv s1, a0
    addi a0, s0, -2
    call fibonacci
    add a0, s1, a0
    ld ra, 0(sp)
    ld s0, 8(sp)
    ld s1, 16(sp)
    addi sp, sp, 24
    ret
    