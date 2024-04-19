addiu	sp,sp,-16
lui	v0,0x0
addiu	v0,v0,3008
sd	ra,0(sp)
li	a0,-1
li	v1,5
addiu	v0,v0,20
nop
addiu	v1,v1,-1
sw	a0,0(v0)
nop
nop
nop
bgez	v1,148 <InitGPhaseSys__Fv+0x20>
addiu	v0,v0,-4
jal	0 <SetNextGPhase__F14GPHASE_ID_ENUM>
move	a0,zero
ld	ra,0(sp)
jr	ra
addiu	sp,sp,16
