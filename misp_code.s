L1:
	lw t1 scope1
	lw t2 scope1
	mul $t1,$t1,$t2
	mv t2 2
	lw t3 scope1
	mul $t2,$t2,$t3
	lw t3 scope1
	mul $t2,$t2,$t3
	add $t1,$t1,$t2
	lw t2 scope1
	lw t3 scope1
	mul $t2,$t2,$t3
	add $t1,$t1,$t2
	sw t1 scope1
	lw t14 scope1
	mv t15 0
L2:
	lw t1 scope1
	lw t2 scope1
	mul $t1,$t1,$t2
	mv t2 2
	lw t3 scope1
	mul $t2,$t2,$t3
	lw t3 scope1
	mul $t2,$t2,$t3
	add $t1,$t1,$t2
	lw t2 scope1
	lw t3 scope1
	mul $t2,$t2,$t3
	add $t1,$t1,$t2
	sw t1 scope1
