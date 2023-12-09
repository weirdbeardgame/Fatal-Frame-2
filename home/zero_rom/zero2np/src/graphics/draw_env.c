// STATUS: NOT STARTED

#include "draw_env.h"

qword* (*context_packet_start[2])(/* parameters unknown */) = {
	/* [0] = */ NULL,
	/* [1] = */ NULL
};

void (*context_packet_end[2])(/* parameters unknown */) = {
	/* [0] = */ NULL,
	/* [1] = */ NULL
};

static long int draw_env_alpha[2];
static long int draw_env_test[2];
static long int draw_env_zbuf[2];
static long int draw_env_tex1[2];
static long int draw_env_clamp[2];
static long int draw_env_scissor[2];
static long int draw_env_texa;

void ClearDrawEnv() {
	int i;
	qword *base;
	
  code *pcVar1;
  undefined8 *puVar2;
  int context_no;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  context_no = 0;
  do {
    puVar2 = (undefined8 *)(**(code **)((int)context_packet_start + iVar4))();
    SET_ALPHA_REGISTER__FPUlil(puVar2 + 2,context_no,0x44);
    SET_TEST_REGISTER__FPUlil(puVar2 + 4,context_no,0x5000d);
    SET_TEX1_REGISTER__FPUlil(puVar2 + 6,context_no,0x161);
    SET_CLAMP_REGISTER__FPUlil(puVar2 + 8,context_no,0);
    SET_ZBUF_REGISTER__FPUlil(puVar2 + 10,context_no,0);
    iVar3 = context_no + 1;
    SET_SCISSOR_REGISTER__FPUlil(puVar2 + 0xc,context_no,0);
    *puVar2 = 0x1000000000008006;
    pcVar1 = *(code **)((int)context_packet_end + iVar4);
    iVar4 = iVar4 + 4;
    puVar2[1] = 0xe;
    (*pcVar1)(puVar2 + 0xe);
    context_no = iVar3;
  } while (iVar3 < 2);
  puVar2 = (undefined8 *)(*(code *)context_packet_start[0])();
  SET_TEXA_REGISTER__FPUll(puVar2 + 2,0);
  *puVar2 = 0x1000000000008001;
  puVar2[1] = 0xe;
  (*(code *)context_packet_end[0])(puVar2 + 4);
  return;
}

void InitDrawEnv(qword* (*c1_start)(/* parameters unknown */), qword* (*c2_start)(/* parameters unknown */), void (*c1_end)(/* parameters unknown */), void (*c2_end)(/* parameters unknown */)) {
  context_packet_start[0] = c1_start;
  context_packet_start[1] = c2_start;
  context_packet_end[0] = c1_end;
  context_packet_end[1] = c2_end;
  ClearDrawEnv__Fv();
  return;
}

void SetDrawEnv(int context_no, DRAW_ENV_5 *new_env) {
	qword *base;
	
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  SET_ALPHA_REGISTER__FPUlil(puVar1 + 2,context_no,new_env->alpha);
  SET_TEX1_REGISTER__FPUlil(puVar1 + 4,context_no,new_env->tex1);
  SET_CLAMP_REGISTER__FPUlil(puVar1 + 6,context_no,new_env->clamp);
  SET_TEST_REGISTER__FPUlil(puVar1 + 8,context_no,new_env->test);
  SET_ZBUF_REGISTER__FPUlil(puVar1 + 10,context_no,new_env->zbuf);
  *puVar1 = 0x1000000000008005;
  puVar1[1] = 0xe;
  (*(code *)context_packet_end[context_no])(puVar1 + 0xc);
  return;
}

void SetDrawEnvNoTex(int context_no, DRAW_ENV_NOTEX *new_env) {
	qword *base;
	
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  SET_ALPHA_REGISTER__FPUlil(puVar1 + 2,context_no,new_env->alpha);
  SET_TEST_REGISTER__FPUlil(puVar1 + 4,context_no,new_env->test);
  SET_ZBUF_REGISTER__FPUlil(puVar1 + 6,context_no,new_env->zbuf);
  *puVar1 = 0x1000000000008003;
  puVar1[1] = 0xe;
  (*(code *)context_packet_end[context_no])(puVar1 + 8);
  return;
}

long int GET_ALPHA_REGISTER(int context_no) {
  return draw_env_alpha[context_no];
}

void SetAlphaRegister(int context_no, long int alpha) {
	qword *base;
	u_long *base;
	
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  *puVar1 = 0x1000000000008001;
  puVar1[1] = 0xe;
  draw_env_alpha[context_no] = alpha;
  puVar1[2] = alpha;
  if (context_no == 0) {
    iVar2 = 0x42;
  }
  else {
    iVar2 = 0x43;
  }
  puVar1[3] = (long)iVar2;
  (*(code *)context_packet_end[context_no])(puVar1 + 4);
  return;
}

long int GET_TEST_REGISTER(int context_no) {
  return draw_env_test[context_no];
}

void SetTestRegister(int context_no, long int test) {
	qword *base;
	u_long *base;
	
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  *puVar1 = 0x1000000000008001;
  puVar1[1] = 0xe;
  draw_env_test[context_no] = test;
  puVar1[2] = test;
  if (context_no == 0) {
    iVar2 = 0x47;
  }
  else {
    iVar2 = 0x48;
  }
  puVar1[3] = (long)iVar2;
  (*(code *)context_packet_end[context_no])(puVar1 + 4);
  return;
}

long int GET_ZBUF_REGISTER(int context_no) {
  return draw_env_zbuf[context_no];
}

void SetZbufRegister(int context_no, long int zbuf) {
	qword *base;
	u_long *base;
	
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  *puVar1 = 0x1000000000008001;
  puVar1[1] = 0xe;
  draw_env_zbuf[context_no] = zbuf;
  puVar1[2] = zbuf;
  if (context_no == 0) {
    iVar2 = 0x4e;
  }
  else {
    iVar2 = 0x4f;
  }
  puVar1[3] = (long)iVar2;
  (*(code *)context_packet_end[context_no])(puVar1 + 4);
  return;
}

long int GET_TEX1_REGISTER(int context_no) {
  return draw_env_tex1[context_no];
}

void SetTex1Register(int context_no, long int tex1) {
	qword *base;
	u_long *base;
	
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  *puVar1 = 0x1000000000008001;
  puVar1[1] = 0xe;
  draw_env_tex1[context_no] = tex1;
  puVar1[2] = tex1;
  if (context_no == 0) {
    iVar2 = 0x14;
  }
  else {
    iVar2 = 0x15;
  }
  puVar1[3] = (long)iVar2;
  (*(code *)context_packet_end[context_no])(puVar1 + 4);
  return;
}

long int GET_CLAMP_REGISTER(int context_no) {
  return draw_env_clamp[context_no];
}

void SetClampRegister(int context_no, long int clamp) {
	qword *base;
	u_long *base;
	
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  *puVar1 = 0x1000000000008001;
  puVar1[1] = 0xe;
  draw_env_clamp[context_no] = clamp;
  puVar1[2] = clamp;
  if (context_no == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = 9;
  }
  puVar1[3] = (long)iVar2;
  (*(code *)context_packet_end[context_no])(puVar1 + 4);
  return;
}

long int GET_SCISSOR_REGISTER(int context_no) {
  return draw_env_scissor[context_no];
}

void SetScissorRegister(int context_no, long int scissor) {
	qword *base;
	u_long *base;
	
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)context_packet_start[context_no])();
  *puVar1 = 0x1000000000008001;
  puVar1[1] = 0xe;
  draw_env_scissor[context_no] = scissor;
  puVar1[2] = scissor;
  if (context_no == 0) {
    iVar2 = 0x40;
  }
  else {
    iVar2 = 0x41;
  }
  puVar1[3] = (long)iVar2;
  (*(code *)context_packet_end[context_no])(puVar1 + 4);
  return;
}

long int GET_TEXA_REGISTER() {
  return draw_env_texa;
}

void SetTexaRegister(long int texa) {
	qword *base;
	
  undefined1 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(*(code *)context_packet_start[0])();
  *puVar2 = 0x1000000000008001;
  puVar2[1] = 0xe;
  puVar1 = context_packet_end[0];
  draw_env_texa = texa;
  puVar2[2] = texa;
  puVar2[3] = 0x3b;
  (*(code *)puVar1)(puVar2 + 4);
  return;
}

static void SET_ALPHA_REGISTER(u_long *base, int context_no, long int alpha) {
  draw_env_alpha[context_no] = alpha;
  *base = alpha;
  if (context_no == 0) {
    base[1] = 0x42;
    return;
  }
  base[1] = 0x43;
  return;
}

static void SET_TEST_REGISTER(u_long *base, int context_no, long int test) {
  draw_env_test[context_no] = test;
  *base = test;
  if (context_no == 0) {
    base[1] = 0x47;
    return;
  }
  base[1] = 0x48;
  return;
}

static void SET_ZBUF_REGISTER(u_long *base, int context_no, long int zbuf) {
  draw_env_zbuf[context_no] = zbuf;
  *base = zbuf;
  if (context_no == 0) {
    base[1] = 0x4e;
    return;
  }
  base[1] = 0x4f;
  return;
}

static void SET_TEX1_REGISTER(u_long *base, int context_no, long int tex1) {
  draw_env_tex1[context_no] = tex1;
  *base = tex1;
  if (context_no == 0) {
    base[1] = 0x14;
    return;
  }
  base[1] = 0x15;
  return;
}

static void SET_CLAMP_REGISTER(u_long *base, int context_no, long int clamp) {
  draw_env_clamp[context_no] = clamp;
  *base = clamp;
  if (context_no == 0) {
    base[1] = 8;
    return;
  }
  base[1] = 9;
  return;
}

static void SET_SCISSOR_REGISTER(u_long *base, int context_no, long int scissor) {
  draw_env_scissor[context_no] = scissor;
  *base = scissor;
  if (context_no == 0) {
    base[1] = 0x40;
    return;
  }
  base[1] = 0x41;
  return;
}

static void SET_TEXA_REGISTER(u_long *base, long int texa) {
  draw_env_texa = texa;
  base[1] = 0x3b;
  *base = texa;
  return;
}
