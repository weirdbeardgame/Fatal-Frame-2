// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_G2D_DRAW_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_G2D_DRAW_H

typedef union {
	u_long128 ul128;
	u_long ul64[2];
	u_int ui32[4];
	float fl32[4];
	u_short us16[8];
	u_char uc8[16];
	sceVu0FVECTOR fv;
	sceVu0IVECTOR iv;
} Q_WORDDATA;

typedef struct {
	u_int att;
	u_int u;
	u_int v;
	u_int w;
	u_int h;
	float crx;
	float cry;
	float csx;
	float csy;
	float x;
	float y;
	u_int z;
	float scw;
	float sch;
	float rot;
	u_long gftg;
	u_long tex0;
	u_long tex1;
	u_long texa;
	u_long alphar;
	u_long zbuf;
	u_long test;
	u_int pri;
	u_char r;
	u_char g;
	u_char b;
	u_char alpha;
	u_char col;
} DISP_SPRT;

typedef struct {
	u_int att;
	u_short u1;
	u_short v1;
	u_short u2;
	u_short v2;
	float w;
	float h;
	float crx;
	float cry;
	float csx;
	float csy;
	float x;
	float y;
	u_int z;
	float scw;
	float sch;
	float rot;
	u_long gftg;
	u_long tex0;
	u_long tex1;
	u_long texa;
	u_long alpreg;
	u_long zbuf;
	u_long test;
	u_long clmp;
	u_int pri;
	u_char r;
	u_char g;
	u_char b;
	u_char alp;
	u_char col;
} DISP_SPRT2;

typedef struct {
	u_int att;
	float crx;
	float cry;
	float csx;
	float csy;
	int x[4];
	int y[4];
	u_int z;
	float scw;
	float sch;
	float rot;
	u_long texa;
	u_long alphar;
	u_long zbuf;
	u_long test;
	u_int pri;
	u_char r[4];
	u_char g[4];
	u_char b[4];
	u_char alpha;
} DISP_SQAR;

typedef struct {
	u_int w;
	u_int h;
	int x;
	int y;
	u_int pri;
	u_char r;
	u_char g;
	u_char b;
	u_char alpha;
} SQAR_DAT;

typedef struct {
	u_int w;
	u_int h;
	int x;
	int y;
	u_int pri;
	u_char r[4];
	u_char g[4];
	u_char b[4];
	u_char alpha;
} GSQR_DAT;

typedef struct {
	int x[4];
	int y[4];
	u_int pri;
	u_char r;
	u_char g;
	u_char b;
	u_char alpha;
} SQR4_DAT;

typedef struct {
	int x[4];
	int y[4];
	u_int pri;
	u_char r[4];
	u_char g[4];
	u_char b[4];
	u_char alpha;
} GSQ4_DAT;

extern u_char gInterlace;
extern PK2D_WRK pk2d_wrk;
extern VIF1_GS_PACKET_CTRL vif1gs;

void InitG2DDraw();
void CopySprDToSpr(DISP_SPRT *s, SPRT_DAT *d);
void DispSprD(DISP_SPRT *s);
void CopySqrDToSqr(DISP_SQAR *s, SQAR_DAT *d);
void CopyGSqDToSqr(DISP_SQAR *s, GSQR_DAT *d);
void CopySq4DToSqr(DISP_SQAR *s, SQR4_DAT *d);
void CopyGS4DToSqr(DISP_SQAR *s, GSQ4_DAT *d);
void DispSqrD(DISP_SQAR *s);
void CopySprDToSpr2(DISP_SPRT2 *s, SPRT_DAT2 *d);
void DispSprD2(DISP_SPRT2 *s);
void SetPanel(u_int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a);
int LocalCopyLtoBGetSize(int type);
void LocalCopyLtoBAdrs(int type, int ee_adrs, int v_adrs);
void LocalCopyLtoB(int type, int no, int addr);
void LocalCopyBtoLAdrs(int type, int ee_adrs, int v_adrs);
void LocalCopyBtoL(int type, int no, int addr);
void LocalCopyLtoL(int type, int addr1, int addr2);
void InitPK2Dbuf();
void SwapPK2Dbuf();
void PK2DKick();
Q_WORDDATA* GetPK2Dbuf();
void EndPK2Dbuf(Q_WORDDATA *addr);
Q_WORDDATA* GetPK2DbufWait();
void EndPK2DbufWait(Q_WORDDATA *addr);
Q_WORDDATA* SetPK2DRefTag(int nloop, unsigned int addr);
Q_WORDDATA* TermPK2Dbuf();
void AddCNTtag(Q_WORDDATA *addr, int n);
void SetPK2DImageTrans(unsigned int img_addr, int nloop);
Q_WORDDATA* GetPK3Dbuf();
void TermPK3Dbuf();
Q_WORDDATA* StartDmaDirectTrans();
Q_WORDDATA* EndDmaDirectTrans(Q_WORDDATA *tail);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_G2D_DRAW_H
