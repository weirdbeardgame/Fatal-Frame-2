// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_DRAW_ENV_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_DRAW_ENV_H

struct _DRAW_ENV_5 {
	long int alpha;
	long int tex1;
	long int clamp;
	long int test;
	long int zbuf;
};

typedef _DRAW_ENV_5 DRAW_ENV_5;

struct _DRAW_ENV_NOTEX {
	long int alpha;
	long int test;
	long int zbuf;
};

typedef _DRAW_ENV_NOTEX DRAW_ENV_NOTEX;
extern qword* (*context_packet_start[2])(/* parameters unknown */);
extern void (*context_packet_end[2])(/* parameters unknown */);

void ClearDrawEnv();
void InitDrawEnv(qword* (*c1_start)(/* parameters unknown */), qword* (*c2_start)(/* parameters unknown */), void (*c1_end)(/* parameters unknown */), void (*c2_end)(/* parameters unknown */));
void SetDrawEnv(int context_no, DRAW_ENV_5 *new_env);
void SetDrawEnvNoTex(int context_no, DRAW_ENV_NOTEX *new_env);
long int GET_ALPHA_REGISTER(int context_no);
void SetAlphaRegister(int context_no, long int alpha);
long int GET_TEST_REGISTER(int context_no);
void SetTestRegister(int context_no, long int test);
long int GET_ZBUF_REGISTER(int context_no);
void SetZbufRegister(int context_no, long int zbuf);
long int GET_TEX1_REGISTER(int context_no);
void SetTex1Register(int context_no, long int tex1);
long int GET_CLAMP_REGISTER(int context_no);
void SetClampRegister(int context_no, long int clamp);
long int GET_SCISSOR_REGISTER(int context_no);
void SetScissorRegister(int context_no, long int scissor);
long int GET_TEXA_REGISTER();
void SetTexaRegister(long int texa);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_DRAW_ENV_H
