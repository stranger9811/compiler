.data
	str: .asciiz " Program ended. \n"
	newLine: .asciiz "\n"
.align 2
	coeff_8: .space 4
	data_8: .space 4
	sum_6: .space 4
	K_2: .space 4
	a1_2: .space 4
	a1minus_2: .space 4
	a2_2: .space 4
	b1_2: .space 4
	b2_2: .space 4
	coeffs_2: .space 100
	i_2: .space 4
	ii_2: .space 4
	imag_2: .space 100
	in_2: .space 100
	j_2: .space 4
	jj_2: .space 4
	kernal_2: .space 100
	m_2: .space 4
	n_2: .space 4
	out_2: .space 100
	scale_2: .space 4
	temp1_2: .space 4
	temp2_2: .space 4
	temp3_2: .space 4
	temp4_2: .space 4
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
	li $9 5
L13:
	sw $9 m_2
L14:
	li $9 5
L15:
	sw $9 n_2
L16:
	li $9 5
L17:
	sw $9 K_2
L18:
	li $9 2
L19:
	sw $9 scale_2
L20:
	li $9 0
L21:
	sw $9 i_2
L22:
	lw $9 i_2
L23:
	lw $10 m_2
L24:
	blt $9,$10,L31
L25:
	b L65
L26:
	lw $9 i_2
L27:
	li $10 1
L28:
	add $9,$9,$10
L29:
	sw $9 i_2
L30:
	b L22
L31:
	li $9 0
L32:
	sw $9 j_2
L33:
	lw $9 j_2
L34:
	lw $10 m_2
L35:
	blt $9,$10,L42
L36:
	b L0
L37:
	lw $9 j_2
L38:
	li $10 1
L39:
	add $9,$9,$10
L40:
	sw $9 j_2
L41:
	b L33
L42:
	lw $11 j_2
L43:
	lw $10 i_2
L44:
	li $9 5
L45:
	mul $9,$9,$10
L46:
	add $10,$9,$11
L47:
	lw $9 j_2
L48:
	lw $12 i_2
L49:
	li $11 5
L50:
	mul $11,$11,$12
L51:
	add $11,$11,$9
L52:
	lw $12 j_2
L53:
	lw $13 i_2
L54:
	li $9 5
L55:
	mul $9,$9,$13
L56:
	add $12,$9,$12
L57:
	lw $9 i_2
L58:
	lw $13 j_2
L59:
	mul $9,$9,$13
L60:
L61:
L62:
L63:
	b L37
L64:
	b L26
L65:
	lw $9 K_2
L66:
	li $11 2
L67:
L68:
	sw $9 a1_2
L69:
	lw $9 m_2
L70:
	lw $11 a1_2
L71:
	sub $9,$9,$11
L72:
	sw $9 a2_2
L73:
	lw $9 n_2
L74:
	lw $11 a1_2
L75:
	sub $9,$9,$11
L76:
	sw $9 b1_2
L77:
	lw $52 a1_2
L78:
	sw $48 a1minus_2
L79:
	lw $9 a1_2
L80:
	sw $9 i_2
L81:
	lw $9 i_2
L82:
	lw $10 a2_2
L83:
	blt $9,$10,L90
L84:
	b L174
L85:
	lw $9 i_2
L86:
	li $11 1
L87:
	add $9,$9,$11
L88:
	sw $9 i_2
L89:
	b L81
L90:
	lw $9 a1_2
L91:
	sw $9 j_2
L92:
	lw $9 j_2
L93:
	lw $10 b1_2
L94:
	blt $9,$10,L101
L95:
	b L0
L96:
	lw $9 j_2
L97:
	li $11 1
L98:
	add $9,$9,$11
L99:
	sw $9 j_2
L100:
	b L92
L101:
	li $9 0
L102:
	sw $9 sum_6
L103:
	lw $9 a1minus_2
L104:
	sw $9 ii_2
L105:
	lw $9 ii_2
L106:
	lw $10 a1_2
L107:
	ble $9,$10,L114
L108:
	b L163
L109:
	lw $9 ii_2
L110:
	li $11 1
L111:
	add $9,$9,$11
L112:
	sw $9 ii_2
L113:
	b L105
L114:
	lw $9 a1minus_2
L115:
	sw $9 jj_2
L116:
	lw $9 jj_2
L117:
	lw $10 a1_2
L118:
	ble $9,$10,L125
L119:
	b L0
L120:
	lw $9 jj_2
L121:
	li $11 1
L122:
	add $9,$9,$11
L123:
	sw $9 jj_2
L124:
	b L116
L125:
	lw $9 i_2
L126:
	lw $12 ii_2
L127:
	add $9,$9,$12
L128:
	sw $9 temp1_2
L129:
	lw $9 j_2
L130:
	lw $12 jj_2
L131:
	add $9,$9,$12
L132:
	sw $9 temp2_2
L133:
	lw $9 ii_2
L134:
	lw $12 a1_2
L135:
	add $9,$9,$12
L136:
	sw $9 temp3_2
L137:
	lw $9 jj_2
L138:
	lw $12 a1_2
L139:
	add $9,$9,$12
L140:
	sw $9 temp4_2
L141:
	lw $9 temp2_2
L142:
	lw $12 temp1_2
L143:
	li $11 5
L144:
	mul $11,$11,$12
L145:
	add $11,$11,$9
L146:
	la $v1 in_2
	mul $11,$11,4
	add $v1,$v1,$11
	lw $11 ($v1)
L147:
	sw $11 data_8
L148:
	lw $11 temp4_2
L149:
	lw $12 temp3_2
L150:
	li $9 5
L151:
	mul $9,$9,$12
L152:
	add $12,$9,$11
L153:
	la $v1 coeffs_2
	mul $12,$12,4
	add $v1,$v1,$12
	lw $9 ($v1)
L154:
	sw $9 coeff_8
L155:
	lw $9 sum_6
L156:
	lw $11 data_8
L157:
	lw $12 coeff_8
L158:
	mul $11,$11,$12
L159:
	add $9,$9,$11
L160:
	sw $9 sum_6
L161:
	b L120
L162:
	b L109
L163:
	lw $10 j_2
L164:
	lw $12 i_2
L165:
	li $9 5
L166:
	mul $9,$9,$12
L167:
	add $10,$9,$10
L168:
	lw $9 sum_6
L169:
	lw $11 scale_2
L170:
L171:
L172:
	b L96
L173:
	b L85
L174:
	li $9 0
L175:
	sw $9 i_2
L176:
	lw $9 i_2
L177:
	lw $10 m_2
L178:
	blt $9,$10,L185
L179:
	b L207
L180:
	lw $9 i_2
L181:
	li $11 1
L182:
	add $9,$9,$11
L183:
	sw $9 i_2
L184:
	b L176
L185:
	li $9 0
L186:
	sw $9 j_2
L187:
	lw $9 j_2
L188:
	lw $10 m_2
L189:
	blt $9,$10,L196
L190:
	b L0
L191:
	lw $9 j_2
L192:
	li $11 1
L193:
	add $9,$9,$11
L194:
	sw $9 j_2
L195:
	b L187
L196:
	lw $10 j_2
L197:
	lw $11 i_2
L198:
	li $9 5
L199:
	mul $9,$9,$11
L200:
	add $9,$9,$10
L201:
	la $v1 out_2
	mul $9,$9,4
	add $v1,$v1,$9
	lw $9 ($v1)
L202:
	move $4 $9
L203:
	 li $v0, 1 
L204:
	 syscall   
L205:
	b L191
L206:
	b L180
L207:
	li $9 0
L208:
	move $2 $9
L209:
	 lw $ra, 384($sp) 
L210:
	 lw $fp, 388($sp) 
L211:
	 addu  $sp,  $sp, 512
L212:
	 lw $s0, 444($sp) 
L213:
	 lw $s1, 440($sp) 
L214:
	 lw $s2, 436($sp) 
L215:
	 lw $s3, 432($sp) 
L216:
	 lw $s4, 428($sp) 
L217:
	 lw $s5, 424($sp) 
L218:
	 lw $s6, 420($sp) 
L219:
	 lw $s7, 416($sp) 
L220:
	 jr $ra  
