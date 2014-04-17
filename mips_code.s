.data
	str: .asciiz " Program ended. \n"
	newLine: .asciiz "\n" 
	x_2: .space 4
	y_2: .space 4
	j_3: .space 4
	a_1: .space 4
	i_1: .space 4
	x_1: .space 40
	y_1: .space 40
.text
L0:
	 subu $sp, $sp, 512
L1:
	 sw $ra, 384($sp) 
L2:
	 sw $fp, 388($sp) 
L3:
	 addu $fp, $sp, 512
L4:
	 sw $s0, 444($sp) 
L5:
	 sw $s1, 440($sp) 
L6:
	 sw $s2, 436($sp) 
L7:
	 sw $s3, 432($sp) 
L8:
	 sw $s4, 428($sp) 
L9:
	 sw $s5, 424($sp) 
L10:
	 sw $s6, 420($sp) 
L11:
	 sw $s7, 416($sp) 
L12:
	li $9 2
L13:
	lw $10 x_2
L14:
	mul $9,$9,$10
L15:
	sw $9 y_2
L16:
	lw $9 y_2
L17:
	move $2 $9
L18:
	 lw $ra, 384($sp) 
L19:
	 lw $fp, 388($sp) 
L20:
	 addu  $sp,  $sp, 512
L21:
	 lw $s0, 444($sp) 
L22:
	 lw $s1, 440($sp) 
L23:
	 lw $s2, 436($sp) 
L24:
	 lw $s3, 432($sp) 
L25:
	 lw $s4, 428($sp) 
L26:
	 lw $s5, 424($sp) 
L27:
	 lw $s6, 420($sp) 
L28:
	 lw $s7, 416($sp) 
L29:
	 jr $ra  
main:
	 subu $sp, $sp, 512
L31:
	 sw $ra, 384($sp) 
L32:
	 sw $fp, 388($sp) 
L33:
	 addu $fp, $sp, 512
L34:
	 sw $s0, 444($sp) 
L35:
	 sw $s1, 440($sp) 
L36:
	 sw $s2, 436($sp) 
L37:
	 sw $s3, 432($sp) 
L38:
	 sw $s4, 428($sp) 
L39:
	 sw $s5, 424($sp) 
L40:
	 sw $s6, 420($sp) 
L41:
	 sw $s7, 416($sp) 
L42:
	li $9 4
L43:
	sw $9 a_1
L44:
	li $9 0
L45:
	sw $9 i_1
L46:
	lw $9 i_1
L47:
	li $10 10
L48:
	blt $9,$10,L55
L49:
	b L96
L50:
	lw $9 i_1
L51:
	li $10 1
L52:
	add $9,$9,$10
L53:
	sw $9 i_1
L54:
	b L46
L55:
	lw $9 i_1
L56:
	li $10 1
L57:
	add $9,$9,$10
L58:
	sw $9 j_3
L59:
	lw $10 i_1
L60:
	lw $9 a_1
L61:
	lw $11 i_1
L62:
	la $6, x_1
	lw $3, 3($6)
L63:
	mul $9,$9,$11
L64:
	lw $11 j_3
	la $10 y_1
L65:
	lw $21, 3($10)
L66:
	 sw $t0, 476($sp) 
L67:
	 sw $t1, 472($sp) 
L68:
	 sw $t2, 468($sp) 
L69:
	 sw $t3, 464($sp) 
L70:
	 sw $t4, 460($sp) 
L71:
	 sw $t5, 456($sp) 
L72:
	 sw $t6, 452($sp) 
L73:
	 sw $t7, 448($sp) 
L74:
	 sw $t8, 412($sp) 
L75:
	 sw $t9, 408($sp) 
L76:
	 jal L0  
L77:
	 lw $t0, 476($sp) 
L78:
	 lw $t1, 472($sp) 
L79:
	 lw $t2, 468($sp) 
L80:
	 lw $t3, 464($sp) 
L81:
	 lw $t4, 460($sp) 
L82:
	 lw $t5, 456($sp) 
L83:
	 lw $t6, 452($sp) 
L84:
	 lw $t7, 448($sp) 
L85:
	 lw $t8, 412($sp) 
L86:
	 lw $t9, 408($sp) 
L87:
	move $11 $2
L88:
	add $9,$9,$11
L89:
	la $13, y_1
	sw $9, 10($13)
L90:
	lw $9 i_1
	la $3, y_1
L91:
	lw $2, 1($3)
L92:
	move $4 $9
L93:
	 li $v0, 1 
L94:
	 syscall   
L95:
	b L50
L96:
	li $9 0
L97:
	move $2 $9
L98:
	 lw $ra, 384($sp) 
L99:
	 lw $fp, 388($sp) 
L100:
	 addu  $sp,  $sp, 512
L101:
	 lw $s0, 444($sp) 
L102:
	 lw $s1, 440($sp) 
L103:
	 lw $s2, 436($sp) 
L104:
	 lw $s3, 432($sp) 
L105:
	 lw $s4, 428($sp) 
L106:
	 lw $s5, 424($sp) 
L107:
	 lw $s6, 420($sp) 
L108:
	 lw $s7, 416($sp) 
L109:
	 jr $ra  
