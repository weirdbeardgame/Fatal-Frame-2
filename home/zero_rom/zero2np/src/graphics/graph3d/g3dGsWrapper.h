// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DGSWRAPPER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DGSWRAPPER_H

// warning: multiple differing types with the same name (#139, descriptor not equal)
typedef __uint128_t u_long128;
// warning: multiple differing types with the same name (#139, descriptor not equal)
typedef void sceGifTag;

// warning: multiple differing types with the same name (#139, fields size not equal)
typedef struct {
	unsigned int EN1 : 1;
	unsigned int EN2 : 1;
	unsigned int CRTMD : 3;
	unsigned int MMOD : 1;
	unsigned int AMOD : 1;
	unsigned int SLBG : 1;
	unsigned int ALP : 8;
	unsigned int p0 : 16;
	unsigned int p1;
} tGS_PMODE;

// warning: multiple differing types with the same name (#139, size not equal)
typedef struct {
	unsigned int INT : 1;
	unsigned int FFMD : 1;
	unsigned int DPMS : 2;
	unsigned int p0 : 28;
	unsigned int p1;
} tGS_SMODE2;

typedef struct {
	unsigned int FBP : 9;
	unsigned int FBW : 6;
	unsigned int PSM : 5;
	unsigned int p0 : 12;
	unsigned int DBX : 11;
	unsigned int DBY : 11;
	unsigned int p1 : 10;
} tGS_DISPFB2;

typedef struct {
	unsigned int DX : 12;
	unsigned int DY : 11;
	unsigned int MAGH : 4;
	unsigned int MAGV : 2;
	unsigned int p0 : 3;
	unsigned int DW : 12;
	unsigned int DH : 11;
	unsigned int p1 : 9;
} tGS_DISPLAY2;

// warning: multiple differing types with the same name (#139, descriptor not equal)
typedef struct {
	unsigned int R : 8;
	unsigned int G : 8;
	unsigned int B : 8;
	unsigned int p0 : 8;
	unsigned int p1;
} tGS_BGCOLOR;

typedef struct {
	tGS_PMODE pmode;
	tGS_SMODE2 smode2;
	tGS_DISPFB2 dispfb;
	tGS_DISPLAY2 display;
	tGS_BGCOLOR bgcolor;
} sceGsDispEnv;

// warning: multiple differing types with the same name (#139, descriptor not equal)
typedef void sceGsClear;

typedef struct {
	sceGsDispEnv disp[2];
	sceGifTag giftag0;
	sceGsDrawEnv1 draw0;
	sceGsClear clear0;
	sceGifTag giftag1;
	sceGsDrawEnv1 draw1;
	sceGsClear clear1;
} sceGsDBuff;

// warning: multiple differing types with the same name (#139, descriptor not equal)
typedef void sceGsStoreImage;
typedef void (*LPFUNC_ONDETECTPACKETDOESNOTTERMINATED)(/* parameters unknown */);

int g3dGsPutDrawEnv(sceGifTag *pGT);
void g3dGsPutDispEnv(sceGsDispEnv *pDE);
int g3dGsSwapDBuff(sceGsDBuff *pDB, int id);
int g3dGsSyncPath(int mode, u_short timeout);
int g3dGsExecStoreImage(sceGsStoreImage *sp, u_long128 *dstaddr);
void g3dGsSetDebugHandler(LPFUNC_ONDETECTPACKETDOESNOTTERMINATED pFunc);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DGSWRAPPER_H
