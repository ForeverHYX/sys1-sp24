.text
.globl bubble_sort
bubble_sort:
    addi    sp, sp, -32         # 分配栈空间
    sd      ra, 24(sp)          # 保存 ra
    sd      s0, 16(sp)          # 保存 s0
    addi    s0, sp, 32          # 设置帧指针
    sd      a0, -32(s0)         # 保存 arr
    sd      a1, -24(s0)         # 保存 len
    addi    t0, a1, -1          # 外循环计数器

loop1:
    mv      t2, a0              # 数组起始地址
    li      t3, 0               # 内循环计数器

loop2:
    bge     t3, t0, judge       # 如果 t3 >= t0, 跳出外循环
    ld      t4, 0(t2)           # t4 = arr[j]
    ld      t5, 8(t2)           # t5 = arr[j+1]
    ble     t4, t5, no_swap     # 如果 arr[j+1] <= arr[j], 不交换
    sd      t5, 0(t2)           # arr[j] = t5
    sd      t4, 8(t2)           # arr[j+1] = t4

no_swap:
    addi    t2, t2, 8           # 读出下一个数组元素
    addi    t3, t3, 1           # t3 = t3 + 1
    j       loop2               # 进入内循环

judge:
    addi    t0, t0, -1          # 外循环计数器-1
    ble     zero,t0, loop1      # 若还需进行外循环则跳回
                                #不然开始收尾

exit:
    ld      ra, 24(sp)          
    ld      s0, 16(sp)          
    addi    sp, sp, 32          
    jr      ra                  