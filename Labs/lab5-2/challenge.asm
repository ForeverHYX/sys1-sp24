
challenge:     file format elf64-littleriscv


Disassembly of section .plt:

00000000000006f0 <.plt>:
 6f0:	00003397          	auipc	t2,0x3
 6f4:	41c30333          	sub	t1,t1,t3
 6f8:	9583be03          	ld	t3,-1704(t2) # 3048 <__TMC_END__>
 6fc:	fd430313          	addi	t1,t1,-44
 700:	95838293          	addi	t0,t2,-1704
 704:	00135313          	srli	t1,t1,0x1
 708:	0082b283          	ld	t0,8(t0)
 70c:	000e0067          	jr	t3

0000000000000710 <__libc_start_main@plt>:
 710:	00003e17          	auipc	t3,0x3
 714:	948e3e03          	ld	t3,-1720(t3) # 3058 <__libc_start_main@GLIBC_2.34>
 718:	000e0367          	jalr	t1,t3
 71c:	00000013          	nop

0000000000000720 <__isoc99_scanf@plt>:
 720:	00003e17          	auipc	t3,0x3
 724:	940e3e03          	ld	t3,-1728(t3) # 3060 <__isoc99_scanf@GLIBC_2.27>
 728:	000e0367          	jalr	t1,t3
 72c:	00000013          	nop

0000000000000730 <__stack_chk_fail@plt>:
 730:	00003e17          	auipc	t3,0x3
 734:	938e3e03          	ld	t3,-1736(t3) # 3068 <__stack_chk_fail@GLIBC_2.27>
 738:	000e0367          	jalr	t1,t3
 73c:	00000013          	nop

0000000000000740 <strlen@plt>:
 740:	00003e17          	auipc	t3,0x3
 744:	930e3e03          	ld	t3,-1744(t3) # 3070 <strlen@GLIBC_2.27>
 748:	000e0367          	jalr	t1,t3
 74c:	00000013          	nop

0000000000000750 <puts@plt>:
 750:	00003e17          	auipc	t3,0x3
 754:	928e3e03          	ld	t3,-1752(t3) # 3078 <puts@GLIBC_2.27>
 758:	000e0367          	jalr	t1,t3
 75c:	00000013          	nop

0000000000000760 <printf@plt>:
 760:	00003e17          	auipc	t3,0x3
 764:	920e3e03          	ld	t3,-1760(t3) # 3080 <printf@GLIBC_2.27>
 768:	000e0367          	jalr	t1,t3
 76c:	00000013          	nop

Disassembly of section .text:

0000000000000770 <_start>:
 770:	022000ef          	jal	ra,792 <load_gp>
 774:	87aa                	mv	a5,a0
 776:	00003517          	auipc	a0,0x3
 77a:	92a53503          	ld	a0,-1750(a0) # 30a0 <_GLOBAL_OFFSET_TABLE_+0x18>
 77e:	6582                	ld	a1,0(sp)
 780:	0030                	addi	a2,sp,8
 782:	ff017113          	andi	sp,sp,-16
 786:	4681                	li	a3,0
 788:	4701                	li	a4,0
 78a:	880a                	mv	a6,sp
 78c:	f85ff0ef          	jal	ra,710 <__libc_start_main@plt>
 790:	9002                	ebreak

0000000000000792 <load_gp>:
 792:	00003197          	auipc	gp,0x3
 796:	06e18193          	addi	gp,gp,110 # 3800 <__global_pointer$>
 79a:	8082                	ret
	...

000000000000079e <deregister_tm_clones>:
 79e:	00003517          	auipc	a0,0x3
 7a2:	8aa50513          	addi	a0,a0,-1878 # 3048 <__TMC_END__>
 7a6:	00003797          	auipc	a5,0x3
 7aa:	8a278793          	addi	a5,a5,-1886 # 3048 <__TMC_END__>
 7ae:	00a78863          	beq	a5,a0,7be <deregister_tm_clones+0x20>
 7b2:	00003797          	auipc	a5,0x3
 7b6:	8de7b783          	ld	a5,-1826(a5) # 3090 <_ITM_deregisterTMCloneTable@Base>
 7ba:	c391                	beqz	a5,7be <deregister_tm_clones+0x20>
 7bc:	8782                	jr	a5
 7be:	8082                	ret

00000000000007c0 <register_tm_clones>:
 7c0:	00003517          	auipc	a0,0x3
 7c4:	88850513          	addi	a0,a0,-1912 # 3048 <__TMC_END__>
 7c8:	00003597          	auipc	a1,0x3
 7cc:	88058593          	addi	a1,a1,-1920 # 3048 <__TMC_END__>
 7d0:	8d89                	sub	a1,a1,a0
 7d2:	4035d793          	srai	a5,a1,0x3
 7d6:	91fd                	srli	a1,a1,0x3f
 7d8:	95be                	add	a1,a1,a5
 7da:	8585                	srai	a1,a1,0x1
 7dc:	c599                	beqz	a1,7ea <register_tm_clones+0x2a>
 7de:	00003797          	auipc	a5,0x3
 7e2:	8d27b783          	ld	a5,-1838(a5) # 30b0 <_ITM_registerTMCloneTable@Base>
 7e6:	c391                	beqz	a5,7ea <register_tm_clones+0x2a>
 7e8:	8782                	jr	a5
 7ea:	8082                	ret

00000000000007ec <__do_global_dtors_aux>:
 7ec:	1141                	addi	sp,sp,-16
 7ee:	e022                	sd	s0,0(sp)
 7f0:	00003417          	auipc	s0,0x3
 7f4:	8c840413          	addi	s0,s0,-1848 # 30b8 <completed.0>
 7f8:	00044783          	lbu	a5,0(s0)
 7fc:	e406                	sd	ra,8(sp)
 7fe:	e385                	bnez	a5,81e <__do_global_dtors_aux+0x32>
 800:	00003797          	auipc	a5,0x3
 804:	8a87b783          	ld	a5,-1880(a5) # 30a8 <__cxa_finalize@GLIBC_2.27>
 808:	c791                	beqz	a5,814 <__do_global_dtors_aux+0x28>
 80a:	00002517          	auipc	a0,0x2
 80e:	7f653503          	ld	a0,2038(a0) # 3000 <__dso_handle>
 812:	9782                	jalr	a5
 814:	f8bff0ef          	jal	ra,79e <deregister_tm_clones>
 818:	4785                	li	a5,1
 81a:	00f40023          	sb	a5,0(s0)
 81e:	60a2                	ld	ra,8(sp)
 820:	6402                	ld	s0,0(sp)
 822:	0141                	addi	sp,sp,16
 824:	8082                	ret

0000000000000826 <frame_dummy>:
 826:	bf69                	j	7c0 <register_tm_clones>

0000000000000828 <char2num>:
 828:	1101                	addi	sp,sp,-32
 82a:	ec22                	sd	s0,24(sp)
 82c:	1000                	addi	s0,sp,32
 82e:	87aa                	mv	a5,a0
 830:	fef42623          	sw	a5,-20(s0)
 834:	fec42783          	lw	a5,-20(s0)
 838:	0007871b          	sext.w	a4,a5
 83c:	02f00793          	li	a5,47
 840:	02e7d063          	bge	a5,a4,860 <char2num+0x38>
 844:	fec42783          	lw	a5,-20(s0)
 848:	0007871b          	sext.w	a4,a5
 84c:	03900793          	li	a5,57
 850:	00e7c863          	blt	a5,a4,860 <char2num+0x38>
 854:	fec42783          	lw	a5,-20(s0)
 858:	fd07879b          	addiw	a5,a5,-48
 85c:	2781                	sext.w	a5,a5
 85e:	a805                	j	88e <char2num+0x66>
 860:	fec42783          	lw	a5,-20(s0)
 864:	0007871b          	sext.w	a4,a5
 868:	06000793          	li	a5,96
 86c:	02e7d063          	bge	a5,a4,88c <char2num+0x64>
 870:	fec42783          	lw	a5,-20(s0)
 874:	0007871b          	sext.w	a4,a5
 878:	06600793          	li	a5,102
 87c:	00e7c863          	blt	a5,a4,88c <char2num+0x64>
 880:	fec42783          	lw	a5,-20(s0)
 884:	fa97879b          	addiw	a5,a5,-87
 888:	2781                	sext.w	a5,a5
 88a:	a011                	j	88e <char2num+0x66>
 88c:	57fd                	li	a5,-1
 88e:	853e                	mv	a0,a5
 890:	6462                	ld	s0,24(sp)
 892:	6105                	addi	sp,sp,32
 894:	8082                	ret

0000000000000896 <phase_1>:
 896:	7179                	addi	sp,sp,-48
 898:	f406                	sd	ra,40(sp)
 89a:	f022                	sd	s0,32(sp)
 89c:	1800                	addi	s0,sp,48
 89e:	fca43c23          	sd	a0,-40(s0)
 8a2:	00003797          	auipc	a5,0x3
 8a6:	88678793          	addi	a5,a5,-1914 # 3128 <name_buffer>
 8aa:	0067c783          	lbu	a5,6(a5)
 8ae:	2781                	sext.w	a5,a5
 8b0:	853e                	mv	a0,a5
 8b2:	f77ff0ef          	jal	ra,828 <char2num>
 8b6:	87aa                	mv	a5,a0
 8b8:	fef42223          	sw	a5,-28(s0)
 8bc:	47d1                	li	a5,20
 8be:	fef42423          	sw	a5,-24(s0)
 8c2:	a8b9                	j	920 <phase_1+0x8a>
 8c4:	00002717          	auipc	a4,0x2
 8c8:	74470713          	addi	a4,a4,1860 # 3008 <phase_box>
 8cc:	fe442783          	lw	a5,-28(s0)
 8d0:	078a                	slli	a5,a5,0x2
 8d2:	97ba                	add	a5,a5,a4
 8d4:	4398                	lw	a4,0(a5)
 8d6:	fe442783          	lw	a5,-28(s0)
 8da:	278d                	addiw	a5,a5,3
 8dc:	2781                	sext.w	a5,a5
 8de:	8bbd                	andi	a5,a5,15
 8e0:	2781                	sext.w	a5,a5
 8e2:	00002697          	auipc	a3,0x2
 8e6:	72668693          	addi	a3,a3,1830 # 3008 <phase_box>
 8ea:	078a                	slli	a5,a5,0x2
 8ec:	97b6                	add	a5,a5,a3
 8ee:	439c                	lw	a5,0(a5)
 8f0:	8fb9                	xor	a5,a5,a4
 8f2:	0007871b          	sext.w	a4,a5
 8f6:	00002697          	auipc	a3,0x2
 8fa:	71268693          	addi	a3,a3,1810 # 3008 <phase_box>
 8fe:	fe442783          	lw	a5,-28(s0)
 902:	078a                	slli	a5,a5,0x2
 904:	97b6                	add	a5,a5,a3
 906:	439c                	lw	a5,0(a5)
 908:	00002697          	auipc	a3,0x2
 90c:	70068693          	addi	a3,a3,1792 # 3008 <phase_box>
 910:	078a                	slli	a5,a5,0x2
 912:	97b6                	add	a5,a5,a3
 914:	439c                	lw	a5,0(a5)
 916:	8fb9                	xor	a5,a5,a4
 918:	2781                	sext.w	a5,a5
 91a:	8bbd                	andi	a5,a5,15
 91c:	fef42223          	sw	a5,-28(s0)
 920:	fe842783          	lw	a5,-24(s0)
 924:	fff7871b          	addiw	a4,a5,-1
 928:	fee42423          	sw	a4,-24(s0)
 92c:	ffc1                	bnez	a5,8c4 <phase_1+0x2e>
 92e:	4785                	li	a5,1
 930:	fef42623          	sw	a5,-20(s0)
 934:	a805                	j	964 <phase_1+0xce>
 936:	fd843783          	ld	a5,-40(s0)
 93a:	0007c783          	lbu	a5,0(a5)
 93e:	2781                	sext.w	a5,a5
 940:	853e                	mv	a0,a5
 942:	ee7ff0ef          	jal	ra,828 <char2num>
 946:	87aa                	mv	a5,a0
 948:	873e                	mv	a4,a5
 94a:	fe442783          	lw	a5,-28(s0)
 94e:	2781                	sext.w	a5,a5
 950:	00e79563          	bne	a5,a4,95a <phase_1+0xc4>
 954:	fe042623          	sw	zero,-20(s0)
 958:	a819                	j	96e <phase_1+0xd8>
 95a:	fd843783          	ld	a5,-40(s0)
 95e:	0785                	addi	a5,a5,1
 960:	fcf43c23          	sd	a5,-40(s0)
 964:	fd843783          	ld	a5,-40(s0)
 968:	0007c783          	lbu	a5,0(a5)
 96c:	f7e9                	bnez	a5,936 <phase_1+0xa0>
 96e:	fec42783          	lw	a5,-20(s0)
 972:	853e                	mv	a0,a5
 974:	70a2                	ld	ra,40(sp)
 976:	7402                	ld	s0,32(sp)
 978:	6145                	addi	sp,sp,48
 97a:	8082                	ret

000000000000097c <phase_2>:
 97c:	715d                	addi	sp,sp,-80
 97e:	e486                	sd	ra,72(sp)
 980:	e0a2                	sd	s0,64(sp)
 982:	fc26                	sd	s1,56(sp)
 984:	0880                	addi	s0,sp,80
 986:	faa43c23          	sd	a0,-72(s0)
 98a:	00002797          	auipc	a5,0x2
 98e:	70e7b783          	ld	a5,1806(a5) # 3098 <__stack_chk_guard@GLIBC_2.27>
 992:	6398                	ld	a4,0(a5)
 994:	fce43c23          	sd	a4,-40(s0)
 998:	4701                	li	a4,0
 99a:	fb843783          	ld	a5,-72(s0)
 99e:	0007c783          	lbu	a5,0(a5)
 9a2:	cf89                	beqz	a5,9bc <phase_2+0x40>
 9a4:	fb843783          	ld	a5,-72(s0)
 9a8:	0785                	addi	a5,a5,1
 9aa:	0007c783          	lbu	a5,0(a5)
 9ae:	c799                	beqz	a5,9bc <phase_2+0x40>
 9b0:	fb843783          	ld	a5,-72(s0)
 9b4:	0789                	addi	a5,a5,2
 9b6:	0007c783          	lbu	a5,0(a5)
 9ba:	e399                	bnez	a5,9c0 <phase_2+0x44>
 9bc:	4785                	li	a5,1
 9be:	ac21                	j	bd6 <phase_2+0x25a>
 9c0:	00002797          	auipc	a5,0x2
 9c4:	76878793          	addi	a5,a5,1896 # 3128 <name_buffer>
 9c8:	0077c783          	lbu	a5,7(a5)
 9cc:	2781                	sext.w	a5,a5
 9ce:	853e                	mv	a0,a5
 9d0:	e59ff0ef          	jal	ra,828 <char2num>
 9d4:	87aa                	mv	a5,a0
 9d6:	fcf42423          	sw	a5,-56(s0)
 9da:	00002797          	auipc	a5,0x2
 9de:	74e78793          	addi	a5,a5,1870 # 3128 <name_buffer>
 9e2:	0087c783          	lbu	a5,8(a5)
 9e6:	2781                	sext.w	a5,a5
 9e8:	853e                	mv	a0,a5
 9ea:	e3fff0ef          	jal	ra,828 <char2num>
 9ee:	87aa                	mv	a5,a0
 9f0:	fcf42623          	sw	a5,-52(s0)
 9f4:	00002797          	auipc	a5,0x2
 9f8:	73478793          	addi	a5,a5,1844 # 3128 <name_buffer>
 9fc:	0097c783          	lbu	a5,9(a5)
 a00:	2781                	sext.w	a5,a5
 a02:	853e                	mv	a0,a5
 a04:	e25ff0ef          	jal	ra,828 <char2num>
 a08:	87aa                	mv	a5,a0
 a0a:	fcf42823          	sw	a5,-48(s0)
 a0e:	06400793          	li	a5,100
 a12:	fcf42023          	sw	a5,-64(s0)
 a16:	a211                	j	b1a <phase_2+0x19e>
 a18:	fc842783          	lw	a5,-56(s0)
 a1c:	00002717          	auipc	a4,0x2
 a20:	5ec70713          	addi	a4,a4,1516 # 3008 <phase_box>
 a24:	078a                	slli	a5,a5,0x2
 a26:	97ba                	add	a5,a5,a4
 a28:	439c                	lw	a5,0(a5)
 a2a:	00002717          	auipc	a4,0x2
 a2e:	5de70713          	addi	a4,a4,1502 # 3008 <phase_box>
 a32:	078a                	slli	a5,a5,0x2
 a34:	97ba                	add	a5,a5,a4
 a36:	4398                	lw	a4,0(a5)
 a38:	fcc42783          	lw	a5,-52(s0)
 a3c:	00002697          	auipc	a3,0x2
 a40:	5cc68693          	addi	a3,a3,1484 # 3008 <phase_box>
 a44:	078a                	slli	a5,a5,0x2
 a46:	97b6                	add	a5,a5,a3
 a48:	439c                	lw	a5,0(a5)
 a4a:	8fb9                	xor	a5,a5,a4
 a4c:	0007871b          	sext.w	a4,a5
 a50:	fd042783          	lw	a5,-48(s0)
 a54:	00002697          	auipc	a3,0x2
 a58:	5b468693          	addi	a3,a3,1460 # 3008 <phase_box>
 a5c:	078a                	slli	a5,a5,0x2
 a5e:	97b6                	add	a5,a5,a3
 a60:	439c                	lw	a5,0(a5)
 a62:	8fb9                	xor	a5,a5,a4
 a64:	2781                	sext.w	a5,a5
 a66:	8bbd                	andi	a5,a5,15
 a68:	2781                	sext.w	a5,a5
 a6a:	fcf42423          	sw	a5,-56(s0)
 a6e:	fc842783          	lw	a5,-56(s0)
 a72:	00002717          	auipc	a4,0x2
 a76:	59670713          	addi	a4,a4,1430 # 3008 <phase_box>
 a7a:	078a                	slli	a5,a5,0x2
 a7c:	97ba                	add	a5,a5,a4
 a7e:	4398                	lw	a4,0(a5)
 a80:	fcc42783          	lw	a5,-52(s0)
 a84:	00002697          	auipc	a3,0x2
 a88:	58468693          	addi	a3,a3,1412 # 3008 <phase_box>
 a8c:	078a                	slli	a5,a5,0x2
 a8e:	97b6                	add	a5,a5,a3
 a90:	439c                	lw	a5,0(a5)
 a92:	00002697          	auipc	a3,0x2
 a96:	57668693          	addi	a3,a3,1398 # 3008 <phase_box>
 a9a:	078a                	slli	a5,a5,0x2
 a9c:	97b6                	add	a5,a5,a3
 a9e:	439c                	lw	a5,0(a5)
 aa0:	8fb9                	xor	a5,a5,a4
 aa2:	0007871b          	sext.w	a4,a5
 aa6:	fd042783          	lw	a5,-48(s0)
 aaa:	00002697          	auipc	a3,0x2
 aae:	55e68693          	addi	a3,a3,1374 # 3008 <phase_box>
 ab2:	078a                	slli	a5,a5,0x2
 ab4:	97b6                	add	a5,a5,a3
 ab6:	439c                	lw	a5,0(a5)
 ab8:	8fb9                	xor	a5,a5,a4
 aba:	2781                	sext.w	a5,a5
 abc:	8bbd                	andi	a5,a5,15
 abe:	2781                	sext.w	a5,a5
 ac0:	fcf42623          	sw	a5,-52(s0)
 ac4:	fc842783          	lw	a5,-56(s0)
 ac8:	00002717          	auipc	a4,0x2
 acc:	54070713          	addi	a4,a4,1344 # 3008 <phase_box>
 ad0:	078a                	slli	a5,a5,0x2
 ad2:	97ba                	add	a5,a5,a4
 ad4:	4398                	lw	a4,0(a5)
 ad6:	fcc42783          	lw	a5,-52(s0)
 ada:	00002697          	auipc	a3,0x2
 ade:	52e68693          	addi	a3,a3,1326 # 3008 <phase_box>
 ae2:	078a                	slli	a5,a5,0x2
 ae4:	97b6                	add	a5,a5,a3
 ae6:	439c                	lw	a5,0(a5)
 ae8:	8fb9                	xor	a5,a5,a4
 aea:	0007871b          	sext.w	a4,a5
 aee:	fd042783          	lw	a5,-48(s0)
 af2:	00002697          	auipc	a3,0x2
 af6:	51668693          	addi	a3,a3,1302 # 3008 <phase_box>
 afa:	078a                	slli	a5,a5,0x2
 afc:	97b6                	add	a5,a5,a3
 afe:	439c                	lw	a5,0(a5)
 b00:	00002697          	auipc	a3,0x2
 b04:	50868693          	addi	a3,a3,1288 # 3008 <phase_box>
 b08:	078a                	slli	a5,a5,0x2
 b0a:	97b6                	add	a5,a5,a3
 b0c:	439c                	lw	a5,0(a5)
 b0e:	8fb9                	xor	a5,a5,a4
 b10:	2781                	sext.w	a5,a5
 b12:	8bbd                	andi	a5,a5,15
 b14:	2781                	sext.w	a5,a5
 b16:	fcf42823          	sw	a5,-48(s0)
 b1a:	fc042783          	lw	a5,-64(s0)
 b1e:	fff7871b          	addiw	a4,a5,-1
 b22:	fce42023          	sw	a4,-64(s0)
 b26:	ee0799e3          	bnez	a5,a18 <phase_2+0x9c>
 b2a:	fcc42483          	lw	s1,-52(s0)
 b2e:	fb843783          	ld	a5,-72(s0)
 b32:	0007c783          	lbu	a5,0(a5)
 b36:	2781                	sext.w	a5,a5
 b38:	853e                	mv	a0,a5
 b3a:	cefff0ef          	jal	ra,828 <char2num>
 b3e:	87aa                	mv	a5,a0
 b40:	9fa5                	addw	a5,a5,s1
 b42:	2781                	sext.w	a5,a5
 b44:	8bbd                	andi	a5,a5,15
 b46:	2781                	sext.w	a5,a5
 b48:	fcf42623          	sw	a5,-52(s0)
 b4c:	fd042483          	lw	s1,-48(s0)
 b50:	fb843783          	ld	a5,-72(s0)
 b54:	0785                	addi	a5,a5,1
 b56:	0007c783          	lbu	a5,0(a5)
 b5a:	2781                	sext.w	a5,a5
 b5c:	853e                	mv	a0,a5
 b5e:	ccbff0ef          	jal	ra,828 <char2num>
 b62:	87aa                	mv	a5,a0
 b64:	9fa5                	addw	a5,a5,s1
 b66:	2781                	sext.w	a5,a5
 b68:	8bbd                	andi	a5,a5,15
 b6a:	2781                	sext.w	a5,a5
 b6c:	fcf42823          	sw	a5,-48(s0)
 b70:	4785                	li	a5,1
 b72:	fcf42223          	sw	a5,-60(s0)
 b76:	fb843783          	ld	a5,-72(s0)
 b7a:	0007c783          	lbu	a5,0(a5)
 b7e:	2781                	sext.w	a5,a5
 b80:	853e                	mv	a0,a5
 b82:	ca7ff0ef          	jal	ra,828 <char2num>
 b86:	87aa                	mv	a5,a0
 b88:	873e                	mv	a4,a5
 b8a:	fc842783          	lw	a5,-56(s0)
 b8e:	04f71263          	bne	a4,a5,bd2 <phase_2+0x256>
 b92:	fb843783          	ld	a5,-72(s0)
 b96:	0785                	addi	a5,a5,1
 b98:	0007c783          	lbu	a5,0(a5)
 b9c:	2781                	sext.w	a5,a5
 b9e:	853e                	mv	a0,a5
 ba0:	c89ff0ef          	jal	ra,828 <char2num>
 ba4:	87aa                	mv	a5,a0
 ba6:	873e                	mv	a4,a5
 ba8:	fcc42783          	lw	a5,-52(s0)
 bac:	02f71363          	bne	a4,a5,bd2 <phase_2+0x256>
 bb0:	fb843783          	ld	a5,-72(s0)
 bb4:	0789                	addi	a5,a5,2
 bb6:	0007c783          	lbu	a5,0(a5)
 bba:	2781                	sext.w	a5,a5
 bbc:	853e                	mv	a0,a5
 bbe:	c6bff0ef          	jal	ra,828 <char2num>
 bc2:	87aa                	mv	a5,a0
 bc4:	873e                	mv	a4,a5
 bc6:	fd042783          	lw	a5,-48(s0)
 bca:	00f71463          	bne	a4,a5,bd2 <phase_2+0x256>
 bce:	fc042223          	sw	zero,-60(s0)
 bd2:	fc442783          	lw	a5,-60(s0)
 bd6:	873e                	mv	a4,a5
 bd8:	00002797          	auipc	a5,0x2
 bdc:	4c07b783          	ld	a5,1216(a5) # 3098 <__stack_chk_guard@GLIBC_2.27>
 be0:	fd843683          	ld	a3,-40(s0)
 be4:	639c                	ld	a5,0(a5)
 be6:	8fb5                	xor	a5,a5,a3
 be8:	4681                	li	a3,0
 bea:	c399                	beqz	a5,bf0 <phase_2+0x274>
 bec:	b45ff0ef          	jal	ra,730 <__stack_chk_fail@plt>
 bf0:	853a                	mv	a0,a4
 bf2:	60a6                	ld	ra,72(sp)
 bf4:	6406                	ld	s0,64(sp)
 bf6:	74e2                	ld	s1,56(sp)
 bf8:	6161                	addi	sp,sp,80
 bfa:	8082                	ret

0000000000000bfc <phase_3>:
 bfc:	7139                	addi	sp,sp,-64
 bfe:	fc06                	sd	ra,56(sp)
 c00:	f822                	sd	s0,48(sp)
 c02:	f426                	sd	s1,40(sp)
 c04:	0080                	addi	s0,sp,64
 c06:	fca43423          	sd	a0,-56(s0)
 c0a:	00002797          	auipc	a5,0x2
 c0e:	51e78793          	addi	a5,a5,1310 # 3128 <name_buffer>
 c12:	0067c783          	lbu	a5,6(a5)
 c16:	2781                	sext.w	a5,a5
 c18:	853e                	mv	a0,a5
 c1a:	c0fff0ef          	jal	ra,828 <char2num>
 c1e:	87aa                	mv	a5,a0
 c20:	84be                	mv	s1,a5
 c22:	00002797          	auipc	a5,0x2
 c26:	50678793          	addi	a5,a5,1286 # 3128 <name_buffer>
 c2a:	0077c783          	lbu	a5,7(a5)
 c2e:	2781                	sext.w	a5,a5
 c30:	853e                	mv	a0,a5
 c32:	bf7ff0ef          	jal	ra,828 <char2num>
 c36:	87aa                	mv	a5,a0
 c38:	8fa5                	xor	a5,a5,s1
 c3a:	0007849b          	sext.w	s1,a5
 c3e:	00002797          	auipc	a5,0x2
 c42:	4ea78793          	addi	a5,a5,1258 # 3128 <name_buffer>
 c46:	0087c783          	lbu	a5,8(a5)
 c4a:	2781                	sext.w	a5,a5
 c4c:	853e                	mv	a0,a5
 c4e:	bdbff0ef          	jal	ra,828 <char2num>
 c52:	87aa                	mv	a5,a0
 c54:	8fa5                	xor	a5,a5,s1
 c56:	0007849b          	sext.w	s1,a5
 c5a:	00002797          	auipc	a5,0x2
 c5e:	4ce78793          	addi	a5,a5,1230 # 3128 <name_buffer>
 c62:	0097c783          	lbu	a5,9(a5)
 c66:	2781                	sext.w	a5,a5
 c68:	853e                	mv	a0,a5
 c6a:	bbfff0ef          	jal	ra,828 <char2num>
 c6e:	87aa                	mv	a5,a0
 c70:	8fa5                	xor	a5,a5,s1
 c72:	fcf42c23          	sw	a5,-40(s0)
 c76:	4785                	li	a5,1
 c78:	fcf42e23          	sw	a5,-36(s0)
 c7c:	fc843783          	ld	a5,-56(s0)
 c80:	82ba                	mv	t0,a4
 c82:	833e                	mv	t1,a5
 c84:	a021                	j	c8c <phase_3_L1>

0000000000000c86 <phase_3_L2>:
 c86:	0072c2b3          	xor	t0,t0,t2
 c8a:	0305                	addi	t1,t1,1

0000000000000c8c <phase_3_L1>:
 c8c:	00034383          	lbu	t2,0(t1)
 c90:	fe039be3          	bnez	t2,c86 <phase_3_L2>
 c94:	00029463          	bnez	t0,c9c <phase_3_L3>
 c98:	00000793          	li	a5,0

0000000000000c9c <phase_3_L3>:
 c9c:	0001                	nop
 c9e:	fce42c23          	sw	a4,-40(s0)
 ca2:	fcf42e23          	sw	a5,-36(s0)
 ca6:	fdc42783          	lw	a5,-36(s0)
 caa:	853e                	mv	a0,a5
 cac:	70e2                	ld	ra,56(sp)
 cae:	7442                	ld	s0,48(sp)
 cb0:	74a2                	ld	s1,40(sp)
 cb2:	6121                	addi	sp,sp,64
 cb4:	8082                	ret

0000000000000cb6 <main>:
 cb6:	1101                	addi	sp,sp,-32
 cb8:	ec06                	sd	ra,24(sp)
 cba:	e822                	sd	s0,16(sp)
 cbc:	1000                	addi	s0,sp,32
 cbe:	00000517          	auipc	a0,0x0
 cc2:	15250513          	addi	a0,a0,338 # e10 <_IO_stdin_used+0x8>
 cc6:	a9bff0ef          	jal	ra,760 <printf@plt>
 cca:	00002597          	auipc	a1,0x2
 cce:	45e58593          	addi	a1,a1,1118 # 3128 <name_buffer>
 cd2:	00000517          	auipc	a0,0x0
 cd6:	15e50513          	addi	a0,a0,350 # e30 <_IO_stdin_used+0x28>
 cda:	a47ff0ef          	jal	ra,720 <__isoc99_scanf@plt>
 cde:	00002517          	auipc	a0,0x2
 ce2:	44a50513          	addi	a0,a0,1098 # 3128 <name_buffer>
 ce6:	a5bff0ef          	jal	ra,740 <strlen@plt>
 cea:	872a                	mv	a4,a0
 cec:	47a9                	li	a5,10
 cee:	00f70a63          	beq	a4,a5,d02 <main+0x4c>
 cf2:	00000517          	auipc	a0,0x0
 cf6:	14650513          	addi	a0,a0,326 # e38 <_IO_stdin_used+0x30>
 cfa:	a57ff0ef          	jal	ra,750 <puts@plt>
 cfe:	57fd                	li	a5,-1
 d00:	a8e5                	j	df8 <main+0x142>
 d02:	fe042623          	sw	zero,-20(s0)
 d06:	a891                	j	d5a <main+0xa4>
 d08:	00002717          	auipc	a4,0x2
 d0c:	42070713          	addi	a4,a4,1056 # 3128 <name_buffer>
 d10:	fec42783          	lw	a5,-20(s0)
 d14:	97ba                	add	a5,a5,a4
 d16:	0007c783          	lbu	a5,0(a5)
 d1a:	873e                	mv	a4,a5
 d1c:	02f00793          	li	a5,47
 d20:	02e7f063          	bgeu	a5,a4,d40 <main+0x8a>
 d24:	00002717          	auipc	a4,0x2
 d28:	40470713          	addi	a4,a4,1028 # 3128 <name_buffer>
 d2c:	fec42783          	lw	a5,-20(s0)
 d30:	97ba                	add	a5,a5,a4
 d32:	0007c783          	lbu	a5,0(a5)
 d36:	873e                	mv	a4,a5
 d38:	03900793          	li	a5,57
 d3c:	00e7fa63          	bgeu	a5,a4,d50 <main+0x9a>
 d40:	00000517          	auipc	a0,0x0
 d44:	0f850513          	addi	a0,a0,248 # e38 <_IO_stdin_used+0x30>
 d48:	a09ff0ef          	jal	ra,750 <puts@plt>
 d4c:	57fd                	li	a5,-1
 d4e:	a06d                	j	df8 <main+0x142>
 d50:	fec42783          	lw	a5,-20(s0)
 d54:	2785                	addiw	a5,a5,1
 d56:	fef42623          	sw	a5,-20(s0)
 d5a:	fec42783          	lw	a5,-20(s0)
 d5e:	0007871b          	sext.w	a4,a5
 d62:	47a5                	li	a5,9
 d64:	fae7d2e3          	bge	a5,a4,d08 <main+0x52>
 d68:	00000517          	auipc	a0,0x0
 d6c:	0f050513          	addi	a0,a0,240 # e58 <_IO_stdin_used+0x50>
 d70:	9e1ff0ef          	jal	ra,750 <puts@plt>
 d74:	00002597          	auipc	a1,0x2
 d78:	34c58593          	addi	a1,a1,844 # 30c0 <input_buffer>
 d7c:	00000517          	auipc	a0,0x0
 d80:	0b450513          	addi	a0,a0,180 # e30 <_IO_stdin_used+0x28>
 d84:	99dff0ef          	jal	ra,720 <__isoc99_scanf@plt>
 d88:	00002517          	auipc	a0,0x2
 d8c:	33850513          	addi	a0,a0,824 # 30c0 <input_buffer>
 d90:	b07ff0ef          	jal	ra,896 <phase_1>
 d94:	87aa                	mv	a5,a0
 d96:	eb95                	bnez	a5,dca <main+0x114>
 d98:	00000517          	auipc	a0,0x0
 d9c:	10050513          	addi	a0,a0,256 # e98 <_IO_stdin_used+0x90>
 da0:	9b1ff0ef          	jal	ra,750 <puts@plt>
 da4:	00002597          	auipc	a1,0x2
 da8:	31c58593          	addi	a1,a1,796 # 30c0 <input_buffer>
 dac:	00000517          	auipc	a0,0x0
 db0:	08450513          	addi	a0,a0,132 # e30 <_IO_stdin_used+0x28>
 db4:	96dff0ef          	jal	ra,720 <__isoc99_scanf@plt>
 db8:	00002517          	auipc	a0,0x2
 dbc:	30850513          	addi	a0,a0,776 # 30c0 <input_buffer>
 dc0:	bbdff0ef          	jal	ra,97c <phase_2>
 dc4:	87aa                	mv	a5,a0
 dc6:	e395                	bnez	a5,dea <main+0x134>
 dc8:	a809                	j	dda <main+0x124>
 dca:	00000517          	auipc	a0,0x0
 dce:	0fe50513          	addi	a0,a0,254 # ec8 <_IO_stdin_used+0xc0>
 dd2:	97fff0ef          	jal	ra,750 <puts@plt>
 dd6:	57fd                	li	a5,-1
 dd8:	a005                	j	df8 <main+0x142>
 dda:	00000517          	auipc	a0,0x0
 dde:	11e50513          	addi	a0,a0,286 # ef8 <_IO_stdin_used+0xf0>
 de2:	96fff0ef          	jal	ra,750 <puts@plt>
 de6:	4781                	li	a5,0
 de8:	a801                	j	df8 <main+0x142>
 dea:	00000517          	auipc	a0,0x0
 dee:	13e50513          	addi	a0,a0,318 # f28 <_IO_stdin_used+0x120>
 df2:	95fff0ef          	jal	ra,750 <puts@plt>
 df6:	57fd                	li	a5,-1
 df8:	853e                	mv	a0,a5
 dfa:	60e2                	ld	ra,24(sp)
 dfc:	6442                	ld	s0,16(sp)
 dfe:	6105                	addi	sp,sp,32
 e00:	8082                	ret
