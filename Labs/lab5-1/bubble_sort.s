.text
.globl bubble_sort
#int i=0,j;
#for(i;i<=len-1;i++){
#   for(j=i;j<=len-2;j++){
#       if(a[j+1]<=a[j]) swap(a[j],a[j+1]);
#   }
#}
# void bubble_sort(long long *arr, long long len)
bubble_sort:
    addi    sp, sp, -32         # 分配栈空间
    sd      ra, 24(sp)          # 保存 ra
    sd      s0, 16(sp)          # 保存 s0
    addi    s0, sp, 32          # 设置帧指针
    sd      a0, -32(s0)         # 保存 arr
    sd      a1, -24(s0)         # 保存 len
    addi    t0, a1, -1          # t0 = len - 1

loop1:
    mv      t2, a0              # t2 = arr (当前基地址)
    li      t3, 0               # t3 = 0 (内循环计数器)

loop2:
    bge     t3, t0, judge  # 如果 t3 >= t0, 跳到 next_outer
    ld      t4, 0(t2)           # t4 = arr[j]
    ld      t5, 8(t2)           # t5 = arr[j+1]
    ble     t4, t5, no_swap     # 如果 arr[j+1] <= arr[j], 不交换
    sd      t5, 0(t2)           # arr[j] = t5
    sd      t4, 8(t2)           # arr[j+1] = t4

no_swap:
    addi    t2, t2, 8           # t2 = t2 + 8 (移动到下一个元素)
    addi    t3, t3, 1           # t3 = t3 + 1
    j       loop2          # 跳回内循环

judge:
    addi    t0, t0, -1          # t0 = t0 - 1 (减少下次遍历的长度)
    ble     zero,t0, loop1      # 如果 t0 >= 0, 继续外循环

exit:
    ld      ra, 24(sp)          # 恢复 ra
    ld      s0, 16(sp)          # 恢复 s0
    addi    sp, sp, 32          # 释放栈空间
    jr      ra                  # 返回
