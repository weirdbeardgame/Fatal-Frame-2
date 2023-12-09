// STATUS: NOT STARTED

#include "effect_sub.h"

typedef struct {
	int screen_flag;
	int time;
	int cnt;
	u_char col_r;
	u_char col_g;
	u_char col_b;
	u_char now_alpha;
} SCRCTRL;

struct fixed_array_base<short int,4,short int[4]> {
protected:
	short int m_aData[4];
	
public:
	fixed_array_base<short int,4,short int[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	short int& operator[]();
	short int& operator[]();
	short int* data();
	short int* begin();
	short int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<short int,4> : fixed_array_base<short int,4,short int[4]> {
};

typedef struct {
	float Position[4];
	float Aim[4];
	float Accel[4];
	float Rots[4];
	short int at_ground;
	fixed_array<short int,4> rgba;
	short int InCount;
} LEAVES_PARTICLE;

typedef struct {
	LEAVES_PARTICLE *pLeavesParticle;
	float FallSpeed[4];
	float CenterPos[4];
	int ParticleMax;
	int ParticleNum;
	float AppearRate;
	float AppearRateCount;
	short int FallDistance;
	int StopTime;
	int Id;
	short int Area;
	fixed_array<short int,4> Color;
} LEAVES_FALL_CTRL;

typedef struct {
	int FileNo;
	int BankNo;
	int IsReady;
} EFFECT_SOUNDFILE_DATA;

typedef struct {
	int FileNo;
} EFFECT_FILEDEL_DATA;

typedef struct {
	float Position[4];
	int SetPositionFlg;
	int FileNo;
	int No;
	int Effect;
	int FadeTime;
	int PlayId;
	u_int DeleteKey;
} EFFECT_SOUNDPLAY_DATA;

typedef struct {
	SINGLE_LINK_LIST FileReadyList;
	SINGLE_LINK_LIST FileDeleteList;
	SINGLE_LINK_LIST PlayList;
} EFFECT_SOUND_CTRL;

static SCRCTRL sc_col = {
	/* .screen_flag = */ 0,
	/* .time = */ 0,
	/* .cnt = */ 0,
	/* .col_r = */ 0,
	/* .col_g = */ 0,
	/* .col_b = */ 0,
	/* .now_alpha = */ 0
};

unsigned char float [3] type_info node[8];

SINGLE_LINK_LIST LeavesList = {
	/* .ElemSize = */ 0,
	/* .RegCount = */ 0,
	/* .pBeginCell = */ NULL,
	/* .pEndCell = */ NULL
};

static u_long128 *buf;
static u_long128 *buf2;
static u_long128 *bufz;

EFFECT_SOUND_CTRL EffectSoundCtrl = {
	/* .FileReadyList = */ {
		/* .ElemSize = */ 0,
		/* .RegCount = */ 0,
		/* .pBeginCell = */ NULL,
		/* .pEndCell = */ NULL
	},
	/* .FileDeleteList = */ {
		/* .ElemSize = */ 0,
		/* .RegCount = */ 0,
		/* .pBeginCell = */ NULL,
		/* .pEndCell = */ NULL
	},
	/* .PlayList = */ {
		/* .ElemSize = */ 0,
		/* .RegCount = */ 0,
		/* .pBeginCell = */ NULL,
		/* .pEndCell = */ NULL
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a8200;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tfA3_f(0x3f0030,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tfA3_f(0x3f0038,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tfA3_f(0x3a8248,_max);
  }
  return (uint **)0x0;
}

void InitEffectSub() {
  buf = (uint16 *)0x1e79b00;
  buf2 = (uint16 *)0x1f05b00;
  bufz = (uint16 *)0x5000000;
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&LeavesList,0x60);
  return;
}

void SetParam(int alp, int time, u_char r, u_char g, u_char b, int flag) {
  int iVar1;
  
  sc_col.screen_flag = flag;
  iVar1 = GetPALMode__Fv();
  sc_col.time = time;
  if (iVar1 != 0) {
    sc_col.time = (int)((float)time / DAT_003ee058);
  }
  sc_col.now_alpha = (uchar)alp;
  sc_col.col_r = r;
  sc_col.col_g = g;
  sc_col.col_b = b;
  sc_col.cnt = 0;
  return;
}

int ScreenCtrl() {
  if (sc_col.now_alpha != '\0') {
    SetPanel2__FUiffffiUcUcUcUc
              (0x10,0.0,0.0,640.0,448.0,0,sc_col.col_r,sc_col.col_g,sc_col.col_g,sc_col.now_alpha);
  }
  if (sc_col.screen_flag == 1) {
    if (sc_col.time == 0) {
      trap(7);
    }
    sc_col.screen_flag = (int)(sc_col.cnt < sc_col.time);
    sc_col.now_alpha = (uchar)(((sc_col.time - sc_col.cnt) * 0x80) / sc_col.time);
  }
  else {
    if (sc_col.screen_flag < 2) {
      return sc_col.screen_flag;
    }
    if (sc_col.screen_flag != 2) {
      return sc_col.screen_flag;
    }
    sc_col.screen_flag = 2;
    if (sc_col.time <= sc_col.cnt) {
      sc_col.screen_flag = 0;
    }
    if (sc_col.time == 0) {
      trap(7);
    }
    sc_col.now_alpha = (uchar)((sc_col.cnt << 7) / sc_col.time);
  }
  sc_col.cnt = sc_col.cnt + 1;
  return sc_col.screen_flag;
}

void SetPanel2(u_int pri, float x1, float y1, float x2, float y2, int z, u_char r, u_char g, u_char b, u_char a) {
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  fVar7 = y2 - y1;
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a8258 >> (7 - uVar2) * 8;
  sq._0_8_ = DAT_003a8258;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a8260 >> (7 - uVar2) * 8;
  sq._8_8_ = DAT_003a8260;
  uVar2 = (uint)&sq.alpha & 7;
  puVar4 = &sq.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003a8268 >> (7 - uVar2) * 8;
  sq._16_8_ = DAT_003a8268;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dq,&sq);
  dq.x[0] = (int)x1;
  dq.y[0] = (int)y1;
  dq.zbuf = (long)z << 0x20 | 0xa000118;
  dq.z = 0xfffff - (pri & 0xfffff);
  dq.x[1] = dq.x[0] + (int)(x2 - x1);
  dq.y[2] = dq.y[0] + (int)fVar7;
  puVar4 = dq.r;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    *puVar4 = r;
    dq.g[iVar5] = g;
    puVar4 = puVar4 + 1;
    dq.b[iVar5] = b;
    iVar5 = iVar6;
  } while (iVar6 < 4);
  dq.x[2] = dq.x[0];
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  dq.pri = pri;
  dq.alpha = a;
  DispSqrD__FP9DISP_SQAR(&dq);
  return;
}

void SetScreenZ(int addr) {
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  sd.tex0 = DAT_003a8270;
  sd._8_8_ = DAT_003a8278;
  sd._16_8_ = DAT_003a8280;
  sd._24_8_ = DAT_003a8288;
  sd._32_8_ = DAT_003a8290;
  sd._40_8_ = DAT_003a8298;
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  ds.tex0 = (long)addr | 0x200000026ba28000;
  ds.z = 0xfffff;
  DispSprD2__FP10DISP_SPRT2(&ds);
  return;
}

void Set3DPosTexure(float *wlm[4], DRAW_ENV *de, int texno, float w, float h, u_char r, u_char g, u_char b, u_char a) {
	u_char r;
	u_char g;
	u_char b;
	int MonochroModeFlg;
	int i;
	float th;
	float tw;
	Q_WORDDATA *pbuf;
	int ndpkt;
	int ClipFlg;
	u_int clpz2;
	sceGsTex0 *pTx0;
	float slm[4][4];
	sceVu0IVECTOR ivec[4];
	float ppos[4][4];
	float stq[2];
	U32DATA ts[4];
	U32DATA tt[4];
	U32DATA tq[4];
	GRA3DCAMERA *pCam;
	DRAW_ENV_5 env;
	int Col;
	
  ushort uVar1;
  ushort uVar2;
  U32DATA UVar3;
  ulong *puVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  GRA3DCAMERA *pGVar8;
  int iVar9;
  uint uVar10;
  Q_WORDDATA *pQVar11;
  U32DATA *pUVar12;
  float *pfVar13;
  ulong uVar14;
  U32DATA *pUVar15;
  undefined4 uVar16;
  U32DATA *pUVar17;
  int (*paiVar18) [4];
  Q_WORDDATA *pQVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float slm [4] [4];
  int ivec [4] [4];
  float ppos [4] [4];
  float stq [2];
  U32DATA ts [4];
  U32DATA tt [4];
  U32DATA tq [4];
  _DRAW_ENV_5 env;
  uint local_70;
  uint clpz2;
  
  uVar23 = (uint)g;
  local_70 = (uint)a;
  iVar7 = EffWrkMonochroModeGet__Fv();
  uVar22 = (int)stq + 7U & 7;
  puVar4 = (ulong *)(((int)stq + 7U) - uVar22);
  *puVar4 = *puVar4 & -1L << (uVar22 + 1) * 8 | (ulong)DAT_003f0068 >> (7 - uVar22) * 8;
  stq[0] = DAT_003f0068[0];
  stq[1] = DAT_003f0068[1];
  pGVar8 = gra3dGetCamera__Fv();
  pfVar13 = ppos + 1;
  clpz2 = 0xffffff;
  uVar22 = 0;
  do {
    fVar24 = w;
    if ((uVar22 & 1) == 0) {
      fVar24 = -w;
    }
    (*(float (*) [4])(pfVar13 + -1))[0] = fVar24 * 0.5;
    uVar20 = uVar22 + 1;
    if ((int)uVar22 / 2 == 0) {
      fVar24 = h * 0.5;
    }
    else {
      fVar24 = -h * 0.5;
    }
    *pfVar13 = fVar24;
    pfVar13[1] = 0.0;
    pfVar13[2] = 1.0;
    pfVar13 = pfVar13 + 4;
    uVar22 = uVar20;
  } while ((int)uVar20 < 4);
  sceVu0MulMatrix(slm,pGVar8->matWorldScreen,wlm);
  sceVu0RotTransPersN(ivec,slm,ppos,4,1);
  iVar9 = texno + iVar7;
  uVar1 = effdat[iVar9].w;
  uVar2 = effdat[iVar9].h;
  uVar22 = (uint)b;
  uVar20 = (uint)r;
  if (iVar7 != 0) {
    uVar23 = (uint)r + (uint)g + b / 3;
    if (0xff < uVar23) {
      uVar23 = 0xff;
    }
    uVar23 = uVar23 & 0xff;
    uVar22 = uVar23;
    uVar20 = uVar23;
  }
  uVar14 = effdat[iVar9].tex0;
  paiVar18 = ivec;
  bVar5 = false;
  iVar7 = 0;
  do {
    if (((uint)(*paiVar18)[0] < 0x4000) || (0xc000 < (uint)(*paiVar18)[0])) {
      bVar5 = true;
      uVar10 = (*paiVar18)[1];
    }
    else {
      uVar10 = (*paiVar18)[1];
    }
    if ((uVar10 < 0x4000) || (0xc000 < uVar10)) {
      bVar5 = true;
      uVar10 = (*paiVar18)[2];
    }
    else {
      uVar10 = (*paiVar18)[2];
    }
    if ((uVar10 == 0) || (clpz2 < uVar10)) {
      bVar5 = true;
    }
    piVar6 = *paiVar18;
    paiVar18 = paiVar18[1];
    fVar25 = *(float *)(twoby_1000 + ((uint)(uVar14 >> 0x1a) & 0xf) * 4);
    fVar24 = 1.0 / (float)piVar6[3];
    iVar21 = iVar7 + 1;
    fVar26 = *(float *)(twoby_1000 + ((uint)(uVar14 >> 0x1e) & 0xf) * 4);
    tq[iVar7].fl32 = fVar24;
    ts[iVar7].fl32 = ((float)(uint)uVar1 * stq[iVar7 % 2] * fVar24) / fVar25;
    tt[iVar7].fl32 = ((float)(uint)uVar2 * stq[iVar7 / 2] * tq[iVar7].fl32) / fVar26;
    iVar7 = iVar21;
  } while (iVar21 < 4);
  if (!bVar5) {
    env.tex1 = de->tex1;
    env.test = de->test;
    env.alpha = de->alpha;
    env.zbuf = de->zbuf;
    env.clamp = 0;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&env);
    pQVar11 = StartDmaDirectTrans__Fv();
    Reserve2DPacket__FUi(0x10);
    pQVar11->ul64[0] = 0x1000000000008002;
    pQVar11->ul64[1] = 0xe;
    *(undefined8 *)((int)pQVar11 + 0x18) = 0x3f;
    pQVar11[1].ul64[0] = 0;
    uVar14 = effdat[iVar9].tex0;
    *(undefined8 *)((int)pQVar11 + 0x28) = 6;
    pQVar11[2].ul64[0] = uVar14;
    paiVar18 = ivec;
    iVar9 = 4;
    uVar14 = de->prim;
    iVar7 = 0;
    *(undefined8 *)((int)pQVar11 + 0x38) = 0x412;
    pQVar11[3].ul64[0] = uVar14;
    pQVar19 = pQVar11 + 4;
    do {
      bVar5 = 1 < iVar7;
      pUVar12 = ts + iVar7;
      pUVar17 = tt + iVar7;
      pUVar15 = tq + iVar7;
      uVar16 = 0x8000;
      iVar7 = iVar7 + 1;
      pQVar19->ui32[0] = (uint)*pUVar12;
      if (bVar5) {
        uVar16 = 0;
      }
      iVar9 = iVar9 + 3;
      *(U32DATA *)(pQVar19->ui32 + 1) = *pUVar17;
      UVar3 = *pUVar15;
      pQVar19->ui32[3] = 0;
      *(U32DATA *)(pQVar19->ui32 + 2) = UVar3;
      *(uint *)(pQVar19 + 1) = uVar20;
      *(uint *)((int)pQVar19 + 0x14) = uVar23;
      *(uint *)((int)pQVar19 + 0x18) = uVar22;
      *(uint *)((int)pQVar19 + 0x1c) = local_70;
      pQVar19[2].ui32[0] = (*paiVar18)[0];
      *(int *)((int)pQVar19 + 0x24) = (*paiVar18)[1];
      piVar6 = *paiVar18;
      paiVar18 = paiVar18[1];
      *(int *)((int)pQVar19 + 0x28) = piVar6[2] << 4;
      *(undefined4 *)((int)pQVar19 + 0x2c) = uVar16;
      pQVar19 = pQVar19 + 3;
    } while (iVar7 < 4);
    EndDmaDirectTrans__FP10Q_WORDDATA(pQVar11 + iVar9);
  }
  return;
}

void Set3DPosTexure2(float *wlm[4], DRAW_ENV *de, int texno, float w, float h, u_char r, u_char g, u_char b, u_char a, int MonochroModeFlg) {
	u_char r;
	u_char g;
	u_char b;
	int i;
	float th;
	float tw;
	Q_WORDDATA *pbuf;
	int ndpkt;
	int ClipFlg;
	u_int clpz2;
	sceGsTex0 *pTx0;
	float slm[4][4];
	sceVu0IVECTOR ivec[4];
	float ppos[4][4];
	float stq[2];
	U32DATA ts[4];
	U32DATA tt[4];
	U32DATA tq[4];
	GRA3DCAMERA *pCam;
	DRAW_ENV_5 env;
	int Col;
	
  ushort uVar1;
  ushort uVar2;
  U32DATA UVar3;
  ulong *puVar4;
  bool bVar5;
  int *piVar6;
  GRA3DCAMERA *pGVar7;
  int iVar8;
  uint uVar9;
  Q_WORDDATA *pQVar10;
  U32DATA *pUVar11;
  float *pfVar12;
  ulong uVar13;
  U32DATA *pUVar14;
  undefined4 uVar15;
  U32DATA *pUVar16;
  int (*paiVar17) [4];
  Q_WORDDATA *pQVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float slm [4] [4];
  int ivec [4] [4];
  float ppos [4] [4];
  float stq [2];
  U32DATA ts [4];
  U32DATA tt [4];
  U32DATA tq [4];
  _DRAW_ENV_5 env;
  uint local_70;
  uint clpz2;
  
  uVar23 = (uint)g;
  uVar22 = (int)stq + 7U & 7;
  puVar4 = (ulong *)(((int)stq + 7U) - uVar22);
  *puVar4 = *puVar4 & -1L << (uVar22 + 1) * 8 | (ulong)DAT_003f0070 >> (7 - uVar22) * 8;
  stq = DAT_003f0070;
  local_70 = (uint)a;
  pGVar7 = gra3dGetCamera__Fv();
  pfVar12 = ppos + 1;
  clpz2 = 0xffffff;
  uVar22 = 0;
  do {
    fVar24 = w;
    if ((uVar22 & 1) == 0) {
      fVar24 = -w;
    }
    (*(float (*) [4])(pfVar12 + -1))[0] = fVar24 * 0.5;
    uVar19 = uVar22 + 1;
    if ((int)uVar22 / 2 == 0) {
      fVar24 = h * 0.5;
    }
    else {
      fVar24 = -h * 0.5;
    }
    *pfVar12 = fVar24;
    pfVar12[1] = 0.0;
    pfVar12[2] = 1.0;
    pfVar12 = pfVar12 + 4;
    uVar22 = uVar19;
  } while ((int)uVar19 < 4);
  sceVu0MulMatrix(slm,pGVar7->matWorldScreen,wlm);
  sceVu0RotTransPersN(ivec,slm,ppos,4,1);
  iVar8 = texno + MonochroModeFlg;
  uVar1 = effdat[iVar8].w;
  uVar2 = effdat[iVar8].h;
  uVar22 = (uint)b;
  uVar19 = (uint)r;
  if (MonochroModeFlg != 0) {
    uVar23 = (uint)r + (uint)g + b / 3;
    if (0xff < uVar23) {
      uVar23 = 0xff;
    }
    uVar23 = uVar23 & 0xff;
    uVar22 = uVar23;
    uVar19 = uVar23;
  }
  uVar13 = effdat[iVar8].tex0;
  paiVar17 = ivec;
  bVar5 = false;
  iVar21 = 0;
  do {
    if (((uint)(*paiVar17)[0] < 0x4000) || (0xc000 < (uint)(*paiVar17)[0])) {
      bVar5 = true;
      uVar9 = (*paiVar17)[1];
    }
    else {
      uVar9 = (*paiVar17)[1];
    }
    if ((uVar9 < 0x4000) || (0xc000 < uVar9)) {
      bVar5 = true;
      uVar9 = (*paiVar17)[2];
    }
    else {
      uVar9 = (*paiVar17)[2];
    }
    if ((uVar9 == 0) || (clpz2 < uVar9)) {
      bVar5 = true;
    }
    piVar6 = *paiVar17;
    paiVar17 = paiVar17[1];
    fVar25 = *(float *)(twoby_1000 + ((uint)(uVar13 >> 0x1a) & 0xf) * 4);
    fVar24 = 1.0 / (float)piVar6[3];
    iVar20 = iVar21 + 1;
    fVar26 = *(float *)(twoby_1000 + ((uint)(uVar13 >> 0x1e) & 0xf) * 4);
    tq[iVar21].fl32 = fVar24;
    ts[iVar21].fl32 = ((float)(uint)uVar1 * stq[iVar21 % 2] * fVar24) / fVar25;
    tt[iVar21].fl32 = ((float)(uint)uVar2 * stq[iVar21 / 2] * tq[iVar21].fl32) / fVar26;
    iVar21 = iVar20;
  } while (iVar20 < 4);
  if (!bVar5) {
    env.tex1 = de->tex1;
    env.test = de->test;
    env.alpha = de->alpha;
    env.zbuf = de->zbuf;
    env.clamp = 0;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&env);
    pQVar10 = StartDmaDirectTrans__Fv();
    Reserve2DPacket__FUi(0x10);
    pQVar10->ul64[0] = 0x1000000000008002;
    pQVar10->ul64[1] = 0xe;
    *(undefined8 *)((int)pQVar10 + 0x18) = 0x3f;
    pQVar10[1].ul64[0] = 0;
    paiVar17 = ivec;
    uVar13 = effdat[iVar8].tex0;
    *(undefined8 *)((int)pQVar10 + 0x28) = 6;
    pQVar10[2].ul64[0] = uVar13;
    iVar21 = 4;
    uVar13 = de->prim;
    iVar8 = 0;
    *(undefined8 *)((int)pQVar10 + 0x38) = 0x412;
    pQVar10[3].ul64[0] = uVar13;
    pQVar18 = pQVar10 + 4;
    do {
      bVar5 = 1 < iVar8;
      pUVar11 = ts + iVar8;
      pUVar16 = tt + iVar8;
      pUVar14 = tq + iVar8;
      uVar15 = 0x8000;
      iVar8 = iVar8 + 1;
      pQVar18->ui32[0] = (uint)*pUVar11;
      if (bVar5) {
        uVar15 = 0;
      }
      iVar21 = iVar21 + 3;
      *(U32DATA *)(pQVar18->ui32 + 1) = *pUVar16;
      UVar3 = *pUVar14;
      pQVar18->ui32[3] = 0;
      *(U32DATA *)(pQVar18->ui32 + 2) = UVar3;
      *(uint *)(pQVar18 + 1) = uVar19;
      *(uint *)((int)pQVar18 + 0x14) = uVar23;
      *(uint *)((int)pQVar18 + 0x18) = uVar22;
      *(uint *)((int)pQVar18 + 0x1c) = local_70;
      pQVar18[2].ui32[0] = (*paiVar17)[0];
      *(int *)((int)pQVar18 + 0x24) = (*paiVar17)[1];
      piVar6 = *paiVar17;
      paiVar17 = paiVar17[1];
      *(int *)((int)pQVar18 + 0x28) = piVar6[2] << 4;
      *(undefined4 *)((int)pQVar18 + 0x2c) = uVar15;
      pQVar18 = pQVar18 + 3;
    } while (iVar8 < 4);
    EndDmaDirectTrans__FP10Q_WORDDATA(pQVar10 + iVar21);
  }
  return;
}

void CamSave() {
  return;
}

int CamChangeCheck() {
  return 0;
}

void CheckPointDepth(PP_JUDGE *ppj) {
	int i;
	int nums;
	int xx;
	int yy;
	int clip;
	float wlm[4][4];
	float slm[4][4];
	float fzero[4];
	sceVu0IVECTOR ivec;
	GRA3DCAMERA *pCam;
	static sceGsStoreImage gs_simage;
	Q_WORDDATA q;
	int n1;
	int n2;
	sceDmaChan *DmaVif;
	
  byte bVar1;
  GRA3DCAMERA *pGVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uchar *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  fixed_array<float[4],10> *pfVar10;
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [4];
  Q_WORDDATA q;
  float (*local_70) [4];
  fixed_array<unsigned_char,10> *local_6c;
  
  iVar9 = 0;
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  pGVar2 = gra3dGetCamera__Fv();
  bVar1 = ppj->num;
  if (bVar1 != 0) {
    local_70 = pGVar2->matWorldScreen;
    local_6c = &ppj->result;
    pfVar10 = &ppj->p;
    do {
      sceVu0UnitMatrix(wlm);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      wlm[2][2] = 25.0;
      wlm[1][1] = 25.0;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      wlm[0][0] = 25.0;
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,10);
      sceVu0TransMatrix(wlm,wlm,pfVar10);
                    /* end of inlined section */
      sceVu0MulMatrix(slm,local_70,wlm);
      sceVu0RotTransPers(ivec,slm,fzero,0);
      iVar5 = ivec[0] + -0x6bf8;
      if (ivec[0] + -0x6bf8 < 0) {
        iVar5 = ivec[0] + -0x6be9;
      }
      iVar5 = iVar5 >> 4;
      iVar7 = ivec[1] + -0x71f8;
      if (ivec[1] + -0x71f8 < 0) {
        iVar7 = ivec[1] + -0x71e9;
      }
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar5 + 7;
      }
      cVar8 = 0x2800 < ivec[0] - 0x6c00U;
      if (0x1c00 < ivec[1] - 0x7200U) {
        cVar8 = cVar8 + '\x01';
      }
      cVar8 = cVar8 + (0xfff00 < ivec[2] - 0xffU);
      if (cVar8 == '\0') {
        puVar4 = (uint *)sceDmaGetChan(1);
        sceGsSetDefStoreImage
                  (0x478500,0x2300,10,0x3a,((iVar3 >> 3) << 0x13) >> 0x10,(short)(iVar7 >> 4),8,1);
        FlushCache(0);
        g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(&gs_simage_1016,&q.ul128);
        g3dGsSyncPath__FiUs(0,0);
        *puVar4 = *puVar4 | 0x40;
        cVar8 = (ivec[2] >> 4 & 0xffffU) <= (uint)(ushort)q.us16[iVar5 + (iVar3 >> 3) * -8];
      }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar9,10);
      puVar6 = (local_6c->field0_0x0).m_aData + iVar9;
                    /* end of inlined section */
      iVar9 = iVar9 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      *puVar6 = cVar8 == '\0';
      pfVar10 = (fixed_array<float[4],10> *)(pfVar10->field0_0x0).m_aData[1];
    } while (iVar9 < (int)(uint)bVar1);
  }
  return;
}

void GetCamI2DPos(float *pos, float *tx, float *ty) {
	float wlm[4][4];
	float slm[4][4];
	float vt[4];
	float vtw[4];
	float pl;
	float tmp_pos[4];
	GRA3DCAMERA *pCam;
	
  GRA3DCAMERA *pGVar1;
  float fVar2;
  float wlm [4] [4];
  float slm [4] [4];
  float vt [4];
  float vtw [4];
  float tmp_pos [4];
  
  memset(vt,0,0x10);
  vt[3] = 1.0;
  pGVar1 = gra3dGetCamera__Fv();
  sceVu0UnitMatrix(wlm);
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
                    /* inlined from ../graph3d/g3dxVu0.h */
  tmp_pos[2] = pos[2];
  tmp_pos[3] = pos[3];
  tmp_pos[0] = (float)*(undefined8 *)pos;
  tmp_pos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20);
                    /* end of inlined section */
  fVar2 = 0.0;
  sceVu0TransMatrix(wlm,wlm,tmp_pos);
  sceVu0MulMatrix(slm,pGVar1->matWorldScreen,wlm);
  sceVu0ApplyMatrix(vtw,slm,vt);
  sceVu0ScaleVector(1.0 / vtw[3],vtw,vtw);
  *tx = (vtw[0] - 2048.0) + 320.0;
  *ty = (vtw[1] - 2048.0) + 224.0 + fVar2;
  return;
}

void Vector2Rot(float *dir, float *x, float *y) {
	float fx;
	float fy;
	float fz;
	
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
  _qmtc2(*dir * *dir + dir[2] * dir[2]);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void Get2PosRot(float *v1, float *v2, float *x, float *y) {
	float dir[4];
	
  float dir [4];
  
  sceVu0SubVector(dir,v2,v1);
  Vector2Rot__FPCfPfT1(dir,x,y);
  return;
}

void Get2PosRot2(float *v1, float *v2, float *x, float *z) {
	float fy;
	float fz;
	
  bool bVar1;
  float fVar2;
  float fVar3;
  float x_00;
  float fVar4;
  
  fVar4 = v2[2];
  x_00 = v2[1] - v1[1];
  fVar2 = v1[2];
  fVar3 = atan2f(*v2 - *v1,x_00);
  *z = fVar3;
  fVar2 = atan2f(fVar4 - fVar2,x_00);
  bVar1 = DAT_003ee080 < fVar2;
  *x = fVar2;
  if (bVar1) {
    fVar2 = fVar2 - DAT_003ee084;
  }
  else {
    if (DAT_003ee088 <= fVar2) {
      *x = fVar2;
      goto LAB_00166dcc;
    }
    fVar2 = fVar2 + DAT_003ee08c;
  }
  *x = fVar2;
LAB_00166dcc:
  fVar2 = *z;
  if (DAT_003ee090 < fVar2) {
    fVar2 = fVar2 - DAT_003ee094;
  }
  else {
    if (DAT_003ee098 <= fVar2) {
      *z = fVar2;
      return;
    }
    fVar2 = fVar2 + DAT_003ee09c;
  }
  *z = fVar2;
  return;
}

void GetTrgtRotType2(float *p0, float *p1, float *rot, int id) {
	float dist[4];
	
  float fVar1;
  float dist [4];
  
  *rot = 0.0;
  rot[1] = 0.0;
  rot[2] = 0.0;
  rot[3] = 0.0;
  sceVu0SubVector(dist,p1,p0);
  if ((id & 1U) != 0) {
    dist[3] = GetDistV__FPCfT0(p0,p1);
    fVar1 = atan2f(dist[1],dist[3]);
    *rot = fVar1;
  }
  if ((id & 2U) != 0) {
    fVar1 = atan2f(dist[0],dist[2]);
    rot[1] = fVar1;
  }
  return;
}

float Get2PLength(float *v1, float *v2) {
	float xx;
	float yy;
	float zz;
	
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
  _qmtc2((*v2 - *v1) * (*v2 - *v1) + (v2[1] - v1[1]) * (v2[1] - v1[1]) +
         (v2[2] - v1[2]) * (v2[2] - v1[2]));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

int GetYOffset() {
  return 0x7908 - (uint)*(ushort *)((int)pdrawenv + 0x24);
}

float GetYOffsetf() {
  ulong u;
  float fVar1;
  
  u = 0x7908 - (ulong)*(ushort *)((int)pdrawenv + 0x24);
  if ((long)u < 0) {
    fVar1 = __floatdisf(u & 1 | u >> 1);
    fVar1 = fVar1 + fVar1;
  }
  else {
    fVar1 = __floatdisf(u);
  }
  return fVar1 * 0.0625;
}

void LocalCopyZtoBZ() {
	static sceGsStoreImage gs_simage1;
	
  sceGsSetDefStoreImage(0x478570,0x2300,10,0x31,0,0,0x280,0xe0);
  g3dGsSyncPath__FiUs(0,0);
  dmaVif1CheckDMA__Fv();
  FlushCache(0);
  g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(&gs_simage1_1053,bufz);
  g3dGsSyncPath__FiUs(0,0);
  return;
}

void LocalCopyBZtoZ() {
	static sceGsLoadImage gs_limage1;
	
  sceGsSetDefLoadImage(0x4785e0,0x2300,10,0x31,0,0,0x280,0xe0);
  FlushCache(0);
  sceGsExecLoadImage(0x4785e0,bufz);
  g3dGsSyncPath__FiUs(0,0);
  return;
}

void LocalCopyLtoBD(int addr, void *outbuf) {
	static sceGsStoreImage gs_simage1;
	static sceGsStoreImage gs_simage2;
	
  sceGsSetDefStoreImage(0x478640,(short)addr,10,1,0,0,0x280,200);
  sceGsSetDefStoreImage(0x4786b0,(short)addr,10,1,0,200,0x280,0x18);
  dmaVif1CheckDMA__Fv();
  g3dGsSyncPath__FiUs(0,0);
  FlushCache(0);
  g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(&gs_simage1_1061,(uint16 *)outbuf);
  g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(&gs_simage2_1062,(uint16 *)((int)outbuf + 0x7d000))
  ;
  g3dGsSyncPath__FiUs(0,0);
  return;
}

void EffectSndInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&EffectSoundCtrl.FileReadyList,0xc);
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&EffectSoundCtrl.FileDeleteList,4);
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&EffectSoundCtrl.PlayList,0x30);
  return;
}

void EffectSndEnd() {
  EffectSndAllStop__Fv();
  EffectSndFileReadyAllReleaseAndRemove__Fv();
  EffectSndFileDeleteAllRemove__Fv();
  return;
}

void EffectSndCtrl() {
  EffectSndPlayCtrl__Fv();
  EffectSndFileReadyCtrl__Fv();
  EffectSndFileDeleteCtrl__Fv();
  return;
}

static int EffectSndFileReadyRegisteredCheck(int FileNo) {
	SLL_CELL *pCell;
	int Registered;
	SINGLE_LINK_LIST *pSLL;
	
  int *piVar1;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileReadyList.RegCount != 0) {
    pCell = EffectSoundCtrl.FileReadyList.pBeginCell;
  }
  while( true ) {
                    /* inlined from ../../common/SingleLinkList.h */
    if (pCell == (_SLL_CELL *)0x0) {
      return 0;
    }
                    /* end of inlined section */
    piVar1 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    if (*piVar1 == FileNo) break;
    pCell = pCell->pNext;
  }
  return 1;
}

void EffectSndFileReadyReq(int FileNo) {
	EFFECT_SOUNDFILE_DATA TmpFileData;
	EFFECT_SOUNDFILE_DATA *pSndData;
	SLL_CELL *pCell;
	
  int iVar1;
  _SLL_CELL *pCell;
  void *pvVar2;
  EFFECT_SOUNDFILE_DATA TmpFileData;
  
  EffectSndFileDeleteRemove__Fi(FileNo);
  iVar1 = EffectSndFileReadyRegisteredCheck__Fi(FileNo);
  if (iVar1 == 0) {
    TmpFileData.BankNo = -1;
    TmpFileData.IsReady = 0;
    TmpFileData.FileNo = FileNo;
    pCell = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv
                      (&EffectSoundCtrl.FileReadyList,&TmpFileData);
    if (pCell != (_SLL_CELL *)0x0) {
      pvVar2 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      iVar1 = SndBankNew(FileNo,FileNo + -1,-1);
      *(int *)((int)pvVar2 + 4) = iVar1;
    }
  }
  return;
}

static void EffectSndFileReadyRemove(int FileNo) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  int *piVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileReadyList.RegCount != 0) {
    pCell = EffectSoundCtrl.FileReadyList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      piVar1 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*piVar1 == FileNo) {
        SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.FileReadyList,pCell);
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

static int EffectSndGetBankNo(int FileNo) {
	SLL_CELL *pCell;
	int BankNo;
	SINGLE_LINK_LIST *pSLL;
	
  int *piVar1;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileReadyList.RegCount != 0) {
    pCell = EffectSoundCtrl.FileReadyList.pBeginCell;
  }
  while( true ) {
                    /* inlined from ../../common/SingleLinkList.h */
    if (pCell == (_SLL_CELL *)0x0) {
      return -1;
    }
                    /* end of inlined section */
    piVar1 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    if (*piVar1 == FileNo) break;
    pCell = pCell->pNext;
  }
  return piVar1[1];
}

static int EffectSndFileIsReady(int FileNo) {
	SLL_CELL *pCell;
	int IsReady;
	SINGLE_LINK_LIST *pSLL;
	EFFECT_SOUNDFILE_DATA *pFileData;
	
  _SLL_CELL *p_Var1;
  int *piVar2;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileReadyList.RegCount != 0) {
    p_Var1 = EffectSoundCtrl.FileReadyList.pBeginCell;
  }
  while( true ) {
    pCell = p_Var1;
    if (pCell == (_SLL_CELL *)0x0) {
      return 0;
    }
                    /* end of inlined section */
    piVar2 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
                    /* end of inlined section */
    if ((*piVar2 == FileNo) && (piVar2[2] != 0)) break;
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
  }
  return 1;
}

static void EffectSndFileReadyCtrl() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	EFFECT_SOUNDFILE_DATA *pFileData;
	
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var1;
  void *pvVar2;
  int iVar3;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileReadyList.RegCount != 0) {
    p_Var1 = EffectSoundCtrl.FileReadyList.pBeginCell;
  }
                    /* end of inlined section */
  while (pCell = p_Var1, pCell != (_SLL_CELL *)0x0) {
    pvVar2 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    if ((*(int *)((int)pvVar2 + 8) == 0) &&
       (iVar3 = SndBankIsReady(*(int *)((int)pvVar2 + 4)), iVar3 != 0)) {
      *(undefined4 *)((int)pvVar2 + 8) = 1;
    }
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
  }
  return;
}

static void EffectSndFileReadyAllReleaseAndRemove() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	int BankNo;
	
  int *piVar1;
  int bank_no;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileReadyList.RegCount != 0) {
    pCell = EffectSoundCtrl.FileReadyList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      piVar1 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      bank_no = EffectSndGetBankNo__Fi(*piVar1);
      if (bank_no != -1) {
        SndBankRelease(bank_no);
      }
      SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.FileReadyList,pCell);
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

void EffectSndFileRelease(int FileNo) {
	EFFECT_FILEDEL_DATA TmpDelData;
	
  int iVar1;
  EFFECT_FILEDEL_DATA TmpDelData;
  
  iVar1 = EffectSndFileReadyRegisteredCheck__Fi(FileNo);
  if ((iVar1 != 0) && (iVar1 = EffectSndFileDeleteRegisteredCheck__Fi(FileNo), iVar1 == 0)) {
    TmpDelData.FileNo = FileNo;
    SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&EffectSoundCtrl.FileDeleteList,&TmpDelData);
  }
  return;
}

static int EffectSndFileDeleteRegisteredCheck(int FileNo) {
	SLL_CELL *pCell;
	int Registered;
	SINGLE_LINK_LIST *pSLL;
	
  int *piVar1;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileDeleteList.RegCount != 0) {
    pCell = EffectSoundCtrl.FileDeleteList.pBeginCell;
  }
  while( true ) {
                    /* inlined from ../../common/SingleLinkList.h */
    if (pCell == (_SLL_CELL *)0x0) {
      return 0;
    }
                    /* end of inlined section */
    piVar1 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    if (*piVar1 == FileNo) break;
    pCell = pCell->pNext;
  }
  return 1;
}

static void EffectSndFileDeleteRemove(int FileNo) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  int *piVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileDeleteList.RegCount != 0) {
    pCell = EffectSoundCtrl.FileDeleteList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      piVar1 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*piVar1 == FileNo) {
        SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.FileDeleteList,pCell)
        ;
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

static void EffectSndFileDeleteAllRemove() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  _SLL_CELL *pDelCell;
  _SLL_CELL *p_Var1;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pDelCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileDeleteList.RegCount != 0) {
    pDelCell = EffectSoundCtrl.FileDeleteList.pBeginCell;
  }
                    /* end of inlined section */
  if (pDelCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pDelCell != (_SLL_CELL *)0x0) {
      p_Var1 = pDelCell->pNext;
    }
                    /* end of inlined section */
    for (; SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL
                     (&EffectSoundCtrl.FileDeleteList,pDelCell), p_Var1 != (_SLL_CELL *)0x0;
        p_Var1 = p_Var1->pNext) {
      pDelCell = p_Var1;
    }
  }
  return;
}

static void EffectSndFileDeleteCtrl() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	EFFECT_FILEDEL_DATA *pDelData;
	int BankNo;
	
  int *piVar1;
  int iVar2;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var3;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.FileDeleteList.RegCount != 0) {
    pCell = EffectSoundCtrl.FileDeleteList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var3 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var3 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      piVar1 = (int *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      iVar2 = EffectSndFilePlayUseCheck__Fi(*piVar1);
      if (iVar2 == 0) {
        iVar2 = EffectSndGetBankNo__Fi(*piVar1);
        if (iVar2 != -1) {
          SndBankRelease(iVar2);
        }
        EffectSndFileReadyRemove__Fi(*piVar1);
        SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.FileDeleteList,pCell)
        ;
      }
      if (p_Var3 == (_SLL_CELL *)0x0) break;
      pCell = p_Var3;
      p_Var3 = p_Var3->pNext;
    }
  }
  return;
}

static void EffectSndPlaySub(int FileNo, int No, int Effect, int FadeTime, float *pPosition[4], u_int DeleteKey) {
	int BankNo;
	EFFECT_SOUNDPLAY_DATA TmpPlayData;
	int LoopFlg;
	int PlayId;
	SND_3D_SET Snd3d;
	SND_3D_SET *pSnd3d;
	
  int iVar1;
  int iVar2;
  int iVar3;
  _SLL_CELL *p_Var4;
  _SND_3D_SET *s3s;
  EFFECT_SOUNDPLAY_DATA TmpPlayData;
  _SND_3D_SET Snd3d;
  
  iVar1 = EffectSndGetBankNo__Fi(FileNo);
  if (pPosition != (float (*) [4])0x0) {
                    /* inlined from ../graph3d/g3dxVu0.h */
    TmpPlayData.Position[2] = (*pPosition)[2];
    TmpPlayData.Position[3] = (*pPosition)[3];
    TmpPlayData.Position[0] = (float)*(undefined8 *)*pPosition;
    TmpPlayData.Position[1] = (float)((ulong)*(undefined8 *)*pPosition >> 0x20);
                    /* end of inlined section */
  }
  TmpPlayData.SetPositionFlg = (int)(pPosition != (float (*) [4])0x0);
  TmpPlayData.PlayId = -1;
  TmpPlayData.FileNo = FileNo;
  TmpPlayData.No = No;
  TmpPlayData.Effect = Effect;
  TmpPlayData.FadeTime = FadeTime;
  TmpPlayData.DeleteKey = DeleteKey;
  if (iVar1 == -1) {
    EffectSndFileReadyReq__Fi(FileNo);
    SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&EffectSoundCtrl.PlayList,&TmpPlayData);
  }
  else {
    iVar2 = SndBankIsLoopSnd(iVar1,No);
    iVar3 = EffectSndFileIsReady__Fi(FileNo);
    s3s = &Snd3d;
    if (iVar3 == 0) {
      SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&EffectSoundCtrl.PlayList,&TmpPlayData);
    }
    else {
      memset(s3s,0,0xc);
      if (pPosition == (float (*) [4])0x0) {
        s3s = (_SND_3D_SET *)0x0;
      }
      else {
        Snd3d.vel = (float (*) [4])0x0;
        Snd3d.dir = (float (*) [4])0x0;
        Snd3d.pos = pPosition;
      }
      iVar1 = SndBankPlay(iVar1,No,Effect,(uint)(iVar2 != 0),0x3200,0x1000,0,s3s);
      TmpPlayData.PlayId = iVar1;
      p_Var4 = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&EffectSoundCtrl.PlayList,&TmpPlayData)
      ;
      if (p_Var4 == (_SLL_CELL *)0x0) {
        SndBufStop(iVar1);
      }
    }
  }
  return;
}

void EffectSndPlay(int FileNo, int No, int Effect, int FadeTime, float *pPosition[4]) {
  EffectSndPlaySub__FiiiiPA3_fUi(FileNo,No,Effect,FadeTime,pPosition,0);
  return;
}

void EffectSndPlayDeleteKey(int FileNo, int No, int Effect, int FadeTime, float *pPosition[4], u_int DeleteKey) {
  EffectSndPlaySub__FiiiiPA3_fUi(FileNo,No,Effect,FadeTime,pPosition,DeleteKey);
  return;
}

void EffectSndStop(int FileNo, int No, int FadeFlg) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	EFFECT_SOUNDPLAY_DATA *pPlayData;
	
  int id;
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.PlayList.RegCount != 0) {
    pCell = EffectSoundCtrl.PlayList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if ((*(int *)((int)pvVar1 + 0x14) == FileNo) && (*(int *)((int)pvVar1 + 0x18) == No)) {
        id = *(int *)((int)pvVar1 + 0x24);
        if (id == -1) {
          SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.PlayList,pCell);
        }
        else if (FadeFlg == 0) {
          SndBufStop(id);
        }
        else {
          SndBufFadeStop(id,0x3c);
        }
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

void EffectSndStopDeleteKey(u_int DeleteKey, int FadeFlg) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	EFFECT_SOUNDPLAY_DATA *pPlayData;
	
  int id;
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.PlayList.RegCount != 0) {
    pCell = EffectSoundCtrl.PlayList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*(uint *)((int)pvVar1 + 0x28) == DeleteKey) {
        id = *(int *)((int)pvVar1 + 0x24);
        if (id == -1) {
          SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.PlayList,pCell);
        }
        else if (FadeFlg == 0) {
          SndBufStop(id);
        }
        else {
          SndBufFadeStop(id,0x3c);
        }
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

void EffectSndAllStop() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.PlayList.RegCount != 0) {
    pCell = EffectSoundCtrl.PlayList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*(int *)((int)pvVar1 + 0x24) != -1) {
        SndBufStop(*(int *)((int)pvVar1 + 0x24));
      }
      SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.PlayList,pCell);
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

void EffectSndAllPause() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.PlayList.RegCount != 0) {
    pCell = EffectSoundCtrl.PlayList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*(int *)((int)pvVar1 + 0x24) != -1) {
        SndBufPause(*(int *)((int)pvVar1 + 0x24));
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

void EffectSndAllRestart() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.PlayList.RegCount != 0) {
    pCell = EffectSoundCtrl.PlayList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*(int *)((int)pvVar1 + 0x24) != -1) {
        SndBufRestart(*(int *)((int)pvVar1 + 0x24));
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

static int EffectSndFilePlayUseCheck(int FileNo) {
	SLL_CELL *pCell;
	int UseFlg;
	SINGLE_LINK_LIST *pSLL;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.PlayList.RegCount != 0) {
    pCell = EffectSoundCtrl.PlayList.pBeginCell;
  }
  while( true ) {
                    /* inlined from ../../common/SingleLinkList.h */
    if (pCell == (_SLL_CELL *)0x0) {
      return 0;
    }
                    /* end of inlined section */
    pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    if (*(int *)((int)pvVar1 + 0x14) == FileNo) break;
    pCell = pCell->pNext;
  }
  return 1;
}

static void EffectSndPlayCtrl() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	EFFECT_SOUNDPLAY_DATA *pPlayData;
	int BankNo;
	SND_3D_SET Snd3d;
	SND_3D_SET *pSnd3d;
	int LoopFlg;
	
  float (*pafVar1) [4];
  int iVar2;
  int iVar3;
  float fVar4;
  _SLL_CELL *pCell;
  _SND_3D_SET *s3s;
  _SLL_CELL *p_Var5;
  _SND_3D_SET Snd3d;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (EffectSoundCtrl.PlayList.RegCount != 0) {
    pCell = EffectSoundCtrl.PlayList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var5 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var5 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pafVar1 = (float (*) [4])SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (pafVar1[2][1] == -NAN) {
        iVar2 = EffectSndGetBankNo__Fi((int)pafVar1[1][1]);
        if ((iVar2 != -1) && (iVar3 = EffectSndFileIsReady__Fi((int)pafVar1[1][1]), iVar3 != 0)) {
          memset(&Snd3d,0,0xc);
          iVar3 = SndBankIsLoopSnd(iVar2,(int)pafVar1[1][2]);
          if (pafVar1[1][0] == 0.0) {
            s3s = (_SND_3D_SET *)0x0;
          }
          else {
            Snd3d.vel = (float (*) [4])0x0;
            Snd3d.dir = (float (*) [4])0x0;
            s3s = &Snd3d;
            Snd3d.pos = pafVar1;
          }
          fVar4 = (float)SndBankPlay(iVar2,(int)pafVar1[1][2],(int)pafVar1[1][3],(uint)(iVar3 != 0),
                                     0x3200,0x1000,0,s3s);
          pafVar1[2][1] = fVar4;
        }
      }
      else {
        iVar2 = SndBufIsPlaying((int)pafVar1[2][1]);
        if (iVar2 == 0) {
          SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectSoundCtrl.PlayList,pCell);
        }
      }
      if (p_Var5 == (_SLL_CELL *)0x0) break;
      pCell = p_Var5;
      p_Var5 = p_Var5->pNext;
    }
  }
  return;
}

void EffectLeavesFallReq(float *CenterPos, int Id) {
	LEAVES_FALL_CTRL TmpLeavesFallCtrl;
	float Speed[4];
	
  int iVar1;
  _SLL_CELL *p_Var2;
  LEAVES_FALL_CTRL TmpLeavesFallCtrl;
  float Speed [4];
  
  Speed._0_8_ = DAT_003a82d0;
  Speed._8_8_ = DAT_003a82d8;
  iVar1 = EffectLeavesFallCtrlInit__FP16LEAVES_FALL_CTRLPfiiPCfiiiiii
                    (&TmpLeavesFallCtrl,CenterPos,2000,0x14,Speed,0x5dc,0x75,0x3a,0x55,0xa7,0xa1);
  if (iVar1 != 0) {
    EffectLeavesDropSet__FP16LEAVES_FALL_CTRL(&TmpLeavesFallCtrl);
    TmpLeavesFallCtrl.Id = Id;
    p_Var2 = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&LeavesList,&TmpLeavesFallCtrl);
    if (p_Var2 == (_SLL_CELL *)0x0) {
      EFFECT_FREE__FPv(TmpLeavesFallCtrl.pLeavesParticle);
    }
  }
  return;
}

void EffectLeavesFallCut(int Id) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	LEAVES_FALL_CTRL *pLfCtrl;
	
  void **ppvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (LeavesList.RegCount != 0) {
    pCell = LeavesList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      ppvVar1 = (void **)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (ppvVar1[0x12] == (void *)Id) {
        EFFECT_FREE__FPv(*ppvVar1);
        SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&LeavesList,pCell);
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

static void EffectLeavesFallParticleInit(LEAVES_PARTICLE *pParticle, float *CenterPos, int Area, float *FallSpeed, short int FallDistance, short int *Color) {
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  fVar4 = (float)Area;
                    /* inlined from effect.h */
  iVar2 = rand();
  fVar1 = DAT_003ee0a0;
                    /* end of inlined section */
  fVar5 = 1.0;
                    /* inlined from effect.h */
  fVar3 = fVar4 * 0.5;
  pParticle->Position[0] = *CenterPos + (float)(int)(fVar4 * ((float)iVar2 / DAT_003ee0a0) - fVar3);
  iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
  pParticle->Position[2] = CenterPos[2] + (float)(int)(fVar4 * ((float)iVar2 / fVar1) - fVar3);
                    /* end of inlined section */
  fVar3 = CenterPos[1];
  pParticle->Position[3] = fVar5;
  pParticle->Position[1] = fVar3 - (float)(int)(short)FallDistance;
                    /* inlined from effect.h */
  fVar3 = FallSpeed[3];
  iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
  pParticle->Aim[0] = (fVar3 + fVar3) * ((float)iVar2 / fVar1) - FallSpeed[3];
  fVar3 = FallSpeed[3];
  iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
  pParticle->Aim[2] = (fVar3 + fVar3) * ((float)iVar2 / fVar1) - FallSpeed[3];
                    /* end of inlined section */
  fVar3 = FallSpeed[1];
                    /* inlined from effect.h */
  iVar2 = rand();
                    /* end of inlined section */
  pParticle->Accel[0] = 0.0;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pParticle->Accel[2] = 0.0;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pParticle->Rots[0] = 0.0;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pParticle->Rots[1] = 0.0;
  pParticle->Rots[2] = 0.0;
                    /* inlined from effect.h */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  pParticle->Accel[1] = (float)((int)(fVar3 - fVar5) + (int)(((float)iVar2 / fVar1) * 3.0));
  _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,4);
  (pParticle->rgba).field0_0x0.m_aData[0] = *Color;
  _fixed_array_verifyrange__H1Zs_UiUi_PX01(1,4);
  (pParticle->rgba).field0_0x0.m_aData[1] = Color[1];
  _fixed_array_verifyrange__H1Zs_UiUi_PX01(2,4);
  (pParticle->rgba).field0_0x0.m_aData[2] = Color[2];
  _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
  (pParticle->rgba).field0_0x0.m_aData[3] = 0;
                    /* end of inlined section */
  pParticle->InCount = 0;
  pParticle->at_ground = 0;
  return;
}

static int EffectLeavesFallCtrlInit(LEAVES_FALL_CTRL *pLfCtrl, float *CenterPos, int Area, int FallMax, float *FallSpeed, int Height, int StopTime, int ColR, int ColG, int ColB, int Alpha) {
	int ColG;
	int ColB;
	int Alpha;
	int i;
	
  ushort uVar1;
  undefined8 uVar2;
  LEAVES_PARTICLE *pLVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  pLVar3 = (LEAVES_PARTICLE *)EFFECT_MALLOC__Fi(FallMax * 0x50);
  pLfCtrl->pLeavesParticle = pLVar3;
  if (pLVar3 != (LEAVES_PARTICLE *)0x0) {
                    /* inlined from ../graph3d/g3dxVu0.h */
    uVar2 = *(undefined8 *)CenterPos;
    fVar4 = CenterPos[2];
    fVar5 = CenterPos[3];
    pLfCtrl->CenterPos[0] = (float)uVar2;
    pLfCtrl->CenterPos[1] = (float)((ulong)uVar2 >> 0x20);
    pLfCtrl->CenterPos[2] = fVar4;
    pLfCtrl->CenterPos[3] = fVar5;
                    /* end of inlined section */
    pLfCtrl->ParticleMax = FallMax;
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
    pLfCtrl->ParticleNum = FallMax;
    uVar2 = *(undefined8 *)FallSpeed;
                    /* inlined from ../graph3d/g3dxVu0.h */
    fVar4 = FallSpeed[2];
    fVar5 = FallSpeed[3];
    pLfCtrl->FallSpeed[0] = (float)uVar2;
    pLfCtrl->FallSpeed[1] = (float)((ulong)uVar2 >> 0x20);
    pLfCtrl->FallSpeed[2] = fVar4;
    pLfCtrl->FallSpeed[3] = fVar5;
                    /* end of inlined section */
    pLfCtrl->FallDistance = (ushort)Height;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    pLfCtrl->StopTime = StopTime;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    pLfCtrl->Area = (ushort)Area;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,4);
    (pLfCtrl->Color).field0_0x0.m_aData[0] = (ushort)ColR;
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(1,4);
    (pLfCtrl->Color).field0_0x0.m_aData[1] = (ushort)ColG;
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(2,4);
    (pLfCtrl->Color).field0_0x0.m_aData[2] = (ushort)ColB;
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
                    /* end of inlined section */
    uVar1 = pLfCtrl->FallDistance;
    fVar4 = pLfCtrl->FallSpeed[1];
    iVar7 = pLfCtrl->StopTime;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar6 = pLfCtrl->ParticleMax;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    (pLfCtrl->Color).field0_0x0.m_aData[3] = (ushort)Alpha;
                    /* end of inlined section */
    fVar4 = ((float)(int)(short)uVar1 / fVar4 + (float)iVar7) / (float)iVar6;
    pLfCtrl->AppearRateCount = fVar4;
    pLfCtrl->AppearRate = fVar4;
    if (0 < FallMax) {
      iVar6 = 0;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      do {
        _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,4);
                    /* end of inlined section */
        FallMax = FallMax + -1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        pLVar3 = (LEAVES_PARTICLE *)((int)pLfCtrl->pLeavesParticle->Position + iVar6);
                    /* end of inlined section */
        iVar6 = iVar6 + 0x50;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        EffectLeavesFallParticleInit__FP15LEAVES_PARTICLEPfiT1sPs
                  (pLVar3,pLfCtrl->CenterPos,Area,pLfCtrl->FallSpeed,pLfCtrl->FallDistance,
                   (ushort *)&pLfCtrl->Color);
                    /* end of inlined section */
      } while (FallMax != 0);
    }
    pLVar3 = (LEAVES_PARTICLE *)&GRA3DVU1MEM_VF02;
  }
  return (int)pLVar3;
}

static void EffectLeavesDropSet(LEAVES_FALL_CTRL *pLfCtrl) {
	int i;
	
  ushort uVar1;
  LEAVES_PARTICLE *pLVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = 0;
  if (0 < pLfCtrl->ParticleMax) {
    fVar7 = DAT_003ee0a4;
    iVar5 = 0;
    do {
      uVar1 = pLfCtrl->FallDistance;
      iVar6 = iVar6 + 1;
                    /* inlined from effect.h */
      pLVar2 = pLfCtrl->pLeavesParticle;
      iVar4 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      iVar3 = pLfCtrl->ParticleMax;
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
      *(float *)((int)pLVar2->Position + iVar5 + 4) =
           *(float *)((int)pLVar2->Position + iVar5 + 4) +
           ((float)(int)((float)(int)(short)uVar1 * ((float)iVar4 / fVar7)) -
           (float)pLfCtrl->StopTime * pLfCtrl->FallSpeed[1]);
      iVar5 = iVar5 + 0x50;
    } while (iVar6 < iVar3);
  }
  return;
}

void EffectLeavesFallExec() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var1;
  LEAVES_FALL_CTRL *pLfCtrl;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (LeavesList.RegCount != 0) {
    p_Var1 = LeavesList.pBeginCell;
  }
                    /* end of inlined section */
  while (pCell = p_Var1, pCell != (_SLL_CELL *)0x0) {
    pLfCtrl = (LEAVES_FALL_CTRL *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    EffectLeavesFallExecSub__FP16LEAVES_FALL_CTRL(pLfCtrl);
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
  }
  return;
}

static void EffectLeavesFallExecSub(LEAVES_FALL_CTRL *pLfCtrl) {
	LEAVES_PARTICLE *pParticleTop;
	int i;
	float *Rot;
	int TexNo;
	float matLocalWorld[4][4];
	float matLocalScreen[4][4];
	sceVu0IVECTOR ivec[4];
	float ppos[4][4];
	int i;
	int th;
	int tw;
	int ClipFlg;
	u_char mr;
	u_char mg;
	u_char mb;
	Q_WORDDATA *pbuf;
	int ndpkt;
	u_long tex0;
	GRA3DCAMERA *pCam;
	
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  GRA3DCAMERA *pGVar8;
  int iVar9;
  Q_WORDDATA *pQVar10;
  uint uVar11;
  ushort *puVar12;
  int (*paiVar13) [4];
  long lVar14;
  uint uVar15;
  Q_WORDDATA *pQVar16;
  uint uVar17;
  ulong uVar18;
  fixed_array<short_int,4> *rgba;
  LEAVES_PARTICLE *pParticle;
  uint uVar19;
  float fVar20;
  _DRAW_ENV_5 local_1a0;
  float matLocalWorld [4] [4];
  float matLocalScreen [4] [4];
  int ivec [4] [4];
  float ppos [4] [4];
  int i;
  int TexNo;
  uchar mr;
  uchar mg;
  
  iVar7 = pLfCtrl->ParticleNum;
  pParticle = pLfCtrl->pLeavesParticle;
  if (iVar7 < pLfCtrl->ParticleMax) {
    fVar20 = pLfCtrl->AppearRateCount + 1.0;
    while (pLfCtrl->AppearRateCount = fVar20, pLfCtrl->AppearRate <= fVar20) {
      iVar7 = iVar7 + 1;
      pLfCtrl->ParticleNum = iVar7;
      fVar20 = pLfCtrl->AppearRateCount - pLfCtrl->AppearRate;
    }
  }
  i = 0;
  local_1a0.alpha = DAT_003a82e0;
  local_1a0.tex1 = DAT_003a82e8;
  local_1a0.clamp = DAT_003a82f0;
  local_1a0.test = DAT_003a82f8;
  local_1a0.zbuf = DAT_003a8300;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_1a0);
  if (0 < pLfCtrl->ParticleNum) {
    puVar12 = (pLfCtrl->Color).field0_0x0.m_aData + 3;
    do {
      if (pLfCtrl->CenterPos[1] <= pParticle->Position[1]) {
        lVar14 = (long)pLfCtrl->StopTime;
        pParticle->at_ground = pParticle->at_ground + 1;
        if (lVar14 != 0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
          lVar14 = (long)pLfCtrl->StopTime;
          if (lVar14 == 0) {
            trap(7);
          }
          (pParticle->rgba).field0_0x0.m_aData[3] =
               *puVar12 -
               (short)(((int)(short)*puVar12 * (int)(short)pParticle->at_ground) / pLfCtrl->StopTime
                      );
        }
                    /* end of inlined section */
        if (lVar14 <= (short)pParticle->at_ground) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,4);
          EffectLeavesFallParticleInit__FP15LEAVES_PARTICLEPfiT1sPs
                    (pParticle,pLfCtrl->CenterPos,(int)(short)pLfCtrl->Area,pLfCtrl->FallSpeed,
                     pLfCtrl->FallDistance,(ushort *)&pLfCtrl->Color);
        }
      }
      else {
                    /* end of inlined section */
        if ((short)pParticle->InCount < 0x3c) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
          uVar1 = pParticle->InCount;
          uVar2 = *puVar12;
                    /* end of inlined section */
          pParticle->InCount = pParticle->InCount + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          (pParticle->rgba).field0_0x0.m_aData[3] =
               (ushort)(((int)(short)uVar2 * (int)(short)uVar1) / 0x3c);
        }
        else {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(3,4);
          (pParticle->rgba).field0_0x0.m_aData[3] = (pLfCtrl->Color).field0_0x0.m_aData[3];
        }
                    /* end of inlined section */
        pParticle->Position[1] = pParticle->Position[1] + pParticle->Accel[1];
        EffectLeavesUpdateTrans__FPfN30
                  (pParticle->Position,pParticle->Accel,pParticle->Aim,pLfCtrl->FallSpeed);
        EffectLeavesUpdateRot__FPfN20(pParticle->Rots,pParticle->Accel,pParticle->Aim);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      }
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,4);
      rgba = &pParticle->rgba;
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,4);
      EffectLeavesLight__FPfPsT1(pParticle->Position,(ushort *)rgba,(ushort *)&pLfCtrl->Color);
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(0,4);
                    /* end of inlined section */
      iVar7 = EffWrkMonochroModeGet__Fv();
      iVar7 = iVar7 + 10;
      ppos[0][0] = (float)DAT_003a8310;
      ppos[0][1] = DAT_003a8310._4_4_;
      ppos[0][2] = (float)DAT_003a8318;
      ppos[0][3] = DAT_003a8318._4_4_;
      ppos[1][0] = (float)DAT_003a8320;
      ppos[1][1] = DAT_003a8320._4_4_;
      ppos[1][2] = (float)DAT_003a8328;
      ppos[1][3] = DAT_003a8328._4_4_;
      ppos[2][0] = (float)DAT_003a8330;
      ppos[2][1] = DAT_003a8330._4_4_;
      ppos[2][2] = (float)DAT_003a8338;
      ppos[2][3] = DAT_003a8338._4_4_;
      ppos[3][0] = (float)DAT_003a8340;
      ppos[3][1] = DAT_003a8340._4_4_;
      ppos[3][2] = _DAT_003a8348;
      ppos[3][3] = _UNK_003a834c;
      pGVar8 = gra3dGetCamera__Fv();
      iVar9 = EffWrkMonochroModeGet__Fv();
      if (iVar9 == 0) {
        _mr = (uint)*(byte *)(rgba->field0_0x0).m_aData;
        _mg = (uint)*(byte *)((pParticle->rgba).field0_0x0.m_aData + 1);
        uVar19 = (uint)*(byte *)((pParticle->rgba).field0_0x0.m_aData + 2);
      }
      else {
        uVar19 = ((int)(short)(rgba->field0_0x0).m_aData[0] +
                  (int)(short)(pParticle->rgba).field0_0x0.m_aData[1] +
                 (int)(short)(pParticle->rgba).field0_0x0.m_aData[2]) / 3 & 0xff;
        _mr = uVar19;
        _mg = uVar19;
      }
      sceVu0UnitMatrix(matLocalWorld);
      sceVu0RotMatrixX(pParticle->Rots[0],matLocalWorld,matLocalWorld);
      sceVu0RotMatrixY(pParticle->Rots[1],matLocalWorld,matLocalWorld);
      sceVu0RotMatrixZ(pParticle->Rots[2],matLocalWorld,matLocalWorld);
      sceVu0TransMatrix(matLocalWorld,matLocalWorld,pParticle);
      sceVu0MulMatrix(matLocalScreen,pGVar8->matWorldScreen,matLocalWorld);
      sceVu0RotTransPersN(ivec,matLocalScreen,ppos,4,0);
      bVar3 = false;
      paiVar13 = ivec;
      iVar9 = 3;
      do {
        piVar4 = *paiVar13;
        iVar9 = iVar9 + -1;
        piVar5 = *paiVar13;
        piVar6 = *paiVar13;
        paiVar13 = paiVar13[1];
        if (0x8000 < *piVar4 - 0x4000U) {
          bVar3 = true;
        }
        if (0x8000 < piVar5[1] - 0x4000U) {
          bVar3 = true;
        }
        if (0xffff00 < piVar6[2] - 0xffU) {
          bVar3 = true;
        }
      } while (-1 < iVar9);
      if (!bVar3) {
        uVar1 = effdat[iVar7].h;
        uVar2 = effdat[iVar7].w;
        uVar18 = effdat[iVar7].tex0;
        Reserve2DPacket__FUi(0x10);
        pQVar10 = StartDmaDirectTrans__Fv();
        pQVar10->ul64[1] = 0xe;
        pQVar10->ul64[0] = 0x1000000000000002;
        paiVar13 = ivec;
        *(undefined8 *)((int)pQVar10 + 0x18) = 0x3f;
        iVar7 = 4;
        pQVar10[1].ul64[0] = 0;
        uVar17 = 0;
        *(undefined8 *)((int)pQVar10 + 0x28) = 6;
        pQVar10[2].ul64[0] = uVar18;
        *(undefined8 *)((int)pQVar10 + 0x38) = 0x431;
        pQVar10[3].ul64[0] = 0x30aa400000008004;
        pQVar16 = pQVar10 + 4;
        do {
          pQVar16->ui32[0] = _mr;
          uVar15 = 0;
          if ((int)uVar17 / 2 != 0) {
            uVar15 = (uint)uVar1 << 4;
          }
          bVar3 = 1 < (int)uVar17;
          pQVar16->ui32[2] = uVar19;
          iVar7 = iVar7 + 3;
          pQVar16->ui32[1] = _mg;
          uVar11 = 0;
          if ((uVar17 & 1) != 0) {
            uVar11 = (uint)uVar2 << 4;
          }
          uVar17 = uVar17 + 1;
          pQVar16->ui32[3] = (int)(short)(pParticle->rgba).field0_0x0.m_aData[3];
          pQVar16[1].ui32[0] = uVar11;
          uVar11 = 0x8000;
          *(uint *)((int)pQVar16 + 0x14) = uVar15;
          if (bVar3) {
            uVar11 = 0;
          }
          *(uint *)((int)pQVar16 + 0x18) = 0;
          *(uint *)((int)pQVar16 + 0x1c) = 0;
          pQVar16[2].ui32[0] = (*paiVar13)[0];
          *(int *)((int)pQVar16 + 0x24) = (*paiVar13)[1];
          piVar4 = *paiVar13;
          paiVar13 = paiVar13[1];
          *(int *)((int)pQVar16 + 0x28) = piVar4[2];
          *(uint *)((int)pQVar16 + 0x2c) = uVar11;
          pQVar16 = pQVar16 + 3;
        } while ((int)uVar17 < 4);
        EndDmaDirectTrans__FP10Q_WORDDATA(pQVar10 + iVar7);
      }
      pParticle = pParticle + 1;
      i = i + 1;
    } while (i < pLfCtrl->ParticleNum);
  }
  return;
}

static void EffectLeavesUpdateTrans(float *leaf, float *axel, float *aim, float *FallSpeed) {
	int tmp;
	
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *axel;
  if (fVar4 < *aim) {
    fVar4 = fVar4 + *FallSpeed;
    *axel = fVar4;
    if (*aim * 0.5 <= fVar4) {
      fVar4 = *aim - fVar4;
    }
    *leaf = *leaf + fVar4;
    fVar4 = *aim;
                    /* end of inlined section */
    fVar3 = *axel;
  }
  else {
    fVar4 = fVar4 - *FallSpeed;
    *axel = fVar4;
    if (fVar4 <= *aim * 0.5) {
      fVar4 = *aim - fVar4;
    }
    *leaf = *leaf + fVar4;
    fVar4 = *axel;
    fVar3 = *aim;
  }
  if (fVar4 <= fVar3) {
                    /* inlined from effect.h */
    fVar4 = FallSpeed[3];
    iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    *aim = (float)(int)((fVar4 + fVar4) * ((float)iVar2 / DAT_003ee0a8) - FallSpeed[3]);
                    /* end of inlined section */
    *axel = 0.0;
  }
                    /* inlined from effect.h */
  iVar2 = rand();
                    /* end of inlined section */
  if ((int)(((float)iVar2 / DAT_003ee0ac) * 10.0) + 1 < 6) {
    fVar4 = leaf[1] + 1.0;
  }
  else {
    fVar4 = leaf[1] - 1.0;
  }
  leaf[1] = fVar4;
  fVar4 = axel[2];
  if (fVar4 < aim[2]) {
    fVar4 = fVar4 + FallSpeed[2];
    axel[2] = fVar4;
    if (aim[2] * 0.5 <= fVar4) {
      fVar4 = aim[2] - fVar4;
    }
    leaf[2] = leaf[2] + fVar4;
    bVar1 = aim[2] <= axel[2];
                    /* end of inlined section */
  }
  else {
    fVar4 = fVar4 - FallSpeed[2];
    axel[2] = fVar4;
    if (fVar4 <= aim[2] * 0.5) {
      fVar4 = aim[2] - fVar4;
    }
    leaf[2] = leaf[2] + fVar4;
    bVar1 = axel[2] <= aim[2];
  }
  if (bVar1) {
                    /* inlined from effect.h */
    fVar4 = FallSpeed[3];
    iVar2 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    aim[2] = (float)(int)((fVar4 + fVar4) * ((float)iVar2 / DAT_003ee0b0) - FallSpeed[3]);
                    /* end of inlined section */
    axel[2] = 0.0;
  }
  return;
}

static void EffectLeavesUpdateRot(float *rotation, float *axel, float *aim) {
  float fVar1;
  float fVar2;
  
  fVar2 = *axel;
  fVar1 = *aim;
  if ((fVar1 <= fVar2) || ((-1.0 <= fVar1 && (fVar1 <= 1.0)))) {
    if (fVar2 < fVar1) {
      rotation[1] = 0.0;
      goto LAB_00168fc8;
    }
    if ((-1.0 <= fVar1) && (fVar1 <= 1.0)) {
      rotation[1] = 0.0;
      goto LAB_00168fc8;
    }
    if (fVar2 <= fVar1 * 0.5) {
      fVar2 = (fVar1 - fVar2) * DAT_003ee0bc;
    }
    else {
      fVar2 = fVar2 * DAT_003ee0c0;
    }
  }
  else if (fVar1 * 0.5 <= fVar2) {
    fVar2 = (fVar1 - fVar2) * DAT_003ee0b4;
  }
  else {
    fVar2 = fVar2 * DAT_003ee0b8;
  }
  rotation[2] = fVar2 / (fVar1 * 0.5);
LAB_00168fc8:
  fVar2 = axel[2];
  fVar1 = aim[2];
  if ((fVar1 <= fVar2) || ((-1.0 <= fVar1 && (fVar1 <= 1.0)))) {
    if ((fVar2 < fVar1) || ((-1.0 <= fVar1 && (fVar1 <= 1.0)))) {
      rotation[1] = 0.0;
      return;
    }
    if (fVar2 <= fVar1 * 0.5) {
      fVar2 = (fVar1 - fVar2) * DAT_003ee0cc;
    }
    else {
      fVar2 = fVar2 * DAT_003ee0d0;
    }
  }
  else if (fVar1 * 0.5 <= fVar2) {
    fVar2 = (fVar1 - fVar2) * DAT_003ee0c4;
  }
  else {
    fVar2 = fVar2 * DAT_003ee0c8;
  }
  *rotation = fVar2 / (fVar1 * 0.5);
  return;
}

static void EffectLeavesLight(float *leaf, short int *rgba, short int *Color) {
	float tes1;
	float tes2;
	
  ushort uVar1;
  int iVar2;
  float tes1;
  float tes2;
  
  tes1 = 0.0;
  tes2 = 0.0;
  iVar2 = GetCornHitCheck2__FPffT0T0(leaf,1200.0,&tes1,&tes2);
  if (iVar2 == 0) {
    iVar2 = (uint)*Color << 0x10;
    *rgba = (ushort)((iVar2 >> 0x10) - (iVar2 >> 0x1f) >> 1);
    rgba[1] = (ushort)(((int)((uint)Color[1] << 0x10) >> 0x10) -
                       ((int)((uint)Color[1] << 0x10) >> 0x1f) >> 1);
    uVar1 = (ushort)(((int)((uint)Color[2] << 0x10) >> 0x10) -
                     ((int)((uint)Color[2] << 0x10) >> 0x1f) >> 1);
  }
  else {
    *rgba = *Color;
    rgba[1] = Color[1];
    uVar1 = Color[2];
  }
  rgba[2] = uVar1;
  return;
}

float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& float [3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}
