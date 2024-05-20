	.text
	.globl	switch_eg
switch_eg:
	addi	a5,a0,-20
	li	a4,6
	bgtu	a5,a4,.L8
	lla	a4,.L4
	slli	a5,a5,2
	add	a5,a5,a4
	lw	a5,0(a5)
	add	a5,a5,a4
	jr	a5
	.section	.rodata
	.align	2
	.align	2
.L4:
	.word	.L7-.L4
	.word	.L6-.L4
	.word	.L5-.L4
	.word	.L8-.L4
	.word	.L3-.L4
	.word	.L8-.L4
	.word	.L3-.L4
	.text
.L3:
	addiw	a0,a1,-20
	ret
.L7:
	addi	a1,a1,-5
.L6:
	addiw	a0,a1,19
	ret
.L5:
	addiw	a0,a1,11
	ret
.L8:
	li	a0,0
	ret