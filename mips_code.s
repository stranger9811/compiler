.data
	str: .asciiz " Program ended. \n"
	newLine: .asciiz "\n"
.align 2
	a_2: .space 4
	x_2: .space 4
	y_2: .space 4
	z_2: .space 4
.text
main:
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
	li $9 45
L13:
	sw $9 a_2
L14:
	li $9 1
L15:
	sw $9 x_2
L16:
	li $9 2
L17:
	sw $9 y_2
L18:
	li $9 3
L19:
	sw $9 z_2
L20:
	lw $9 a_2
L21:
	li $10 100
L22:
	blt $9,$10,L24
L23:
	b L38
L24:
	lw $9 a_2
L25:
	li $10 50
L26:
	blt $9,$10,L28
L27:
	b L33
L28:
	lw $9 x_2
L29:
	move $4 $9
L30:
	 li $v0, 1 
L31:
	 syscall   
L32:
	b L42
L33:
	lw $9 y_2
L34:
	move $4 $9
L35:
	 li $v0, 1 
L36:
	 syscall   
L37:
	b L42
L38:
	lw $9 z_2
L39:
	move $4 $9
L40:
	 li $v0, 1 
L41:
	 syscall   
L42:
	li $9 0
L43:
	move $2 $9
L44:
	 lw $ra, 384($sp) 
L45:
	 lw $fp, 388($sp) 
L46:
	 addu  $sp,  $sp, 512
L47:
	 lw $s0, 444($sp) 
L48:
	 lw $s1, 440($sp) 
L49:
	 lw $s2, 436($sp) 
L50:
	 lw $s3, 432($sp) 
L51:
	 lw $s4, 428($sp) 
L52:
	 lw $s5, 424($sp) 
L53:
	 lw $s6, 420($sp) 
L54:
	 lw $s7, 416($sp) 
L55:
	 jr $ra  
