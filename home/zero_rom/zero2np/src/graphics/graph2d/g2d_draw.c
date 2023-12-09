// STATUS: NOT STARTED

#include "g2d_draw.h"

struct PK2D_WRK {
	Q_WORDDATA *idx_top;
	Q_WORDDATA *idx_now;
	Q_WORDDATA *buf_top;
	Q_WORDDATA *buf_now;
};

typedef struct {
	int stbp;
	int sfbw;
	int stw;
	int sth;
	int dtbp;
	int dfbw;
	int dw;
	int dh;
	int du;
	int dv;
} SCREEN_COPY_WRK;

typedef struct {
	Q_WORDDATA *pp0;
	Q_WORDDATA *pp1;
} VIF1_GS_PACKET_CTRL;

u_char gInterlace = 0;

PK2D_WRK pk2d_wrk = {
	/* .idx_top = */ NULL,
	/* .idx_now = */ NULL,
	/* .buf_top = */ NULL,
	/* .buf_now = */ NULL
};

VIF1_GS_PACKET_CTRL vif1gs = {
	/* .pp0 = */ NULL,
	/* .pp1 = */ NULL
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae9a8;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0a30,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0a38,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void InitG2DDraw() {
  return;
}

void CopySprDToSpr(DISP_SPRT *s, SPRT_DAT *d) {
  byte bVar1;
  uchar uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = d->flip;
  uVar3 = d->v;
  uVar4 = d->w;
  uVar5 = d->h;
  s->u = (uint)(ushort)d->u;
  s->v = (uint)uVar3;
  s->att = (uint)bVar1;
  s->w = (uint)uVar4;
  s->h = (uint)uVar5;
  iVar8 = d->x;
  uVar6 = d->pri;
  iVar7 = d->y;
  s->tex0 = d->tex0;
  s->sch = 1.0;
  s->z = 0xfffff - (uVar6 & 0xfffff);
  s->x = (float)iVar8;
  s->y = (float)iVar7;
  s->crx = 0.0;
  s->cry = 0.0;
  s->csx = 0.0;
  s->csy = 0.0;
  s->scw = 1.0;
  s->rot = 0.0;
  uVar6 = d->pri;
  bVar1 = d->bln;
  s->texa = 0x8000008000;
  s->alphar = 0x8000000044;
  s->zbuf = 0x10a000118;
  s->tex1 = (ulong)bVar1 << 5 | 0x141;
  s->test = 0x30003;
  s->gftg = 0x154;
  s->pri = uVar6;
  s->b = 0x80;
  s->r = 0x80;
  s->g = 0x80;
  uVar2 = d->alpha;
  s->col = '\0';
  s->alpha = uVar2;
  return;
}

void DispSprD(DISP_SPRT *s) {
	u_int ui;
	int i;
	int psm;
	float ss;
	float cc;
	float div;
	u_int matt;
	u_int mu;
	u_int mv;
	float mw;
	float mh;
	float mx;
	float my;
	float mcrx;
	float mcry;
	float mcsx;
	float mcsy;
	u_int mz;
	float msw;
	float msh;
	float mrot;
	u_long mtex0;
	u_long mtex1;
	u_long mtexa;
	u_long malpr;
	u_long mzbuf;
	u_long mtest;
	u_long mgftg;
	u_char mr;
	u_char mg;
	u_char mb;
	u_char ma;
	u_char mlud;
	float x[4];
	float y[4];
	float x2[4];
	float y2[4];
	u_int xx[4];
	u_int yy[4];
	u_int uu[4];
	u_int vv[4];
	sceVu0IVECTOR itmp;
	float ftmp[4];
	Q_WORDDATA *pbuf;
	int n;
	
  Q_WORDDATA *pQVar1;
  ulong uVar2;
  Q_WORDDATA *pQVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float x_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong mtex0;
  float x [4];
  float y [4];
  float x2 [4];
  float y2 [4];
  uint xx [4];
  uint yy [4];
  uint uu [4];
  uint vv [4];
  int itmp [4];
  float ftmp [4];
  _DRAW_ENV_5 local_130;
  ulong local_100;
  ulong local_f8;
  uint matt;
  uint mu;
  uint mv;
  uint mz;
  ulong mtex1;
  ulong mtexa;
  ulong malpr;
  ulong mzbuf;
  ulong mtest;
  ulong mgftg;
  uchar mr;
  uchar mg;
  uchar mb;
  uchar ma;
  uchar mlud;
  
  matt = s->att;
  uVar7 = s->w;
  mu = s->u;
  mv = s->v;
  if ((int)uVar7 < 0) {
    fVar13 = (float)(uVar7 & 1 | uVar7 >> 1);
    fVar13 = fVar13 + fVar13;
    uVar7 = s->h;
  }
  else {
    fVar13 = (float)uVar7;
    uVar7 = s->h;
  }
  if ((int)uVar7 < 0) {
    fVar12 = (float)(uVar7 & 1 | uVar7 >> 1);
    fVar12 = fVar12 + fVar12;
    uVar2 = s->tex0;
  }
  else {
    fVar12 = (float)uVar7;
    uVar2 = s->tex0;
  }
  y[1] = s->y - 224.0;
  x[2] = s->x - 320.0;
  fVar14 = s->crx - 320.0;
  fVar15 = s->cry - 224.0;
  _mlud = (uint)s->col;
  fVar8 = s->csy - 224.0;
  fVar11 = s->csx - 320.0;
  mz = s->z;
  x_00 = (s->rot * DAT_003ee358) / 180.0;
  fVar16 = 0.5;
  mtex1 = s->tex1;
  fVar9 = s->scw;
  fVar10 = s->sch;
  mtexa = s->texa;
  malpr = s->alphar;
  mzbuf = s->zbuf;
  mtest = s->test;
  mgftg = s->gftg;
  _mr = (uint)s->r;
  _mg = (uint)s->g;
  _mb = (uint)s->b;
  _ma = (uint)s->alpha;
  if (gInterlace == '\0') {
    fVar16 = 1.0;
  }
  uVar7 = (uint)(uVar2 >> 0x14) & 0x3f;
  x[1] = x[2] + fVar13;
  if (fVar9 == 1.0) {
    x[0] = x[2];
  }
  else {
    x[0] = (x[2] - fVar11) * fVar9 + fVar11;
    x[1] = (x[1] - fVar11) * fVar9 + fVar11;
    x[2] = x[0];
  }
  x[3] = x[1];
  y[2] = y[1] + fVar12;
  if (fVar10 == 1.0) {
    y[0] = y[1];
  }
  else {
    y[0] = (y[1] - fVar8) * fVar10 + fVar8;
    y[2] = (y[2] - fVar8) * fVar10 + fVar8;
    y[1] = y[0];
  }
  y[3] = y[2];
  iVar4 = 0;
  x[0] = x[2];
  y[0] = y[1];
  do {
    iVar5 = iVar4 + 1;
    x[iVar4] = x[iVar4] - fVar14;
    y[iVar4] = y[iVar4] - fVar15;
    iVar4 = iVar5;
  } while (iVar5 < 4);
  if (x_00 == 0.0) {
    x2[0] = x[0];
    y2[0] = y[0];
    x2[1] = x[1];
    y2[1] = y[1];
    x2[2] = x[2];
    y2[2] = y[2];
    x2[3] = x[3];
    y2[3] = y[3];
  }
  else {
    fVar8 = sinf(x_00);
    fVar9 = cosf(x_00);
    x2[0] = x[0] * fVar9 - y[0] * fVar8;
    y2[0] = x[0] * fVar8 + y[0] * fVar9;
    x2[1] = x[1] * fVar9 - y[1] * fVar8;
    y2[1] = x[1] * fVar8 + y[1] * fVar9;
    x2[2] = x[2] * fVar9 - y[2] * fVar8;
    y2[2] = x[2] * fVar8 + y[2] * fVar9;
    x2[3] = x[3] * fVar9 - y[3] * fVar8;
    y2[3] = x[3] * fVar8 + y[3] * fVar9;
  }
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    x2[iVar4] = x2[iVar4] + fVar14;
    y2[iVar4] = y2[iVar4] + fVar15;
    iVar4 = iVar5;
  } while (iVar5 < 4);
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    ftmp[0] = x2[iVar4] + 2048.0;
    ftmp[1] = y2[iVar4] * fVar16 + 2048.0;
    _ftoi4__FPiPf(itmp,ftmp);
    xx[iVar4] = itmp[0];
    yy[iVar4] = itmp[1];
    iVar4 = iVar5;
  } while (iVar5 < 4);
  ftmp[0] = fVar13;
  ftmp[1] = fVar12;
  _ftoi0__FPiPf(itmp,ftmp);
  uu[3] = (itmp[0] + mu) * 0x10;
  vv[3] = (itmp[1] + mv) * 0x10;
  uu[2] = mu << 4;
  if ((matt & 2) != 0) {
    uu[2] = uu[3];
    uu[3] = mu << 4;
  }
  vv[1] = mv << 4;
  if ((matt & 1) != 0) {
    vv[1] = vv[3];
    vv[3] = mv << 4;
  }
  local_130.alpha = malpr;
  local_130.clamp = 5;
  local_130.tex1 = mtex1;
  local_130.test = mtest;
  local_130.zbuf = mzbuf;
  uu[0] = uu[2];
  uu[1] = uu[3];
  vv[0] = vv[1];
  vv[2] = vv[3];
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_130);
  SetTexaRegister__Fl(mtexa);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x1000000000008004;
  pQVar1->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar1 + 0x18) = 0x3f;
  pQVar1[1].ul64[0] = 0;
  if (((uVar7 == 0x14) || (uVar7 == 0x2c)) || (uVar7 == 0x24)) {
    local_f8 = uVar2 & 0xffffffffffffff;
    local_100 = uVar2 & 0xfffffffc0fffff | 0x2000000001300000;
    pQVar1[2].ul64[0] = local_100;
    *(undefined8 *)((int)pQVar1 + 0x28) = 6;
    *(undefined8 *)((int)pQVar1 + 0x38) = 6;
    pQVar1[3].ul64[0] = local_f8;
  }
  else {
    *(undefined8 *)((int)pQVar1 + 0x28) = 6;
    pQVar1[2].ul64[0] = uVar2;
    *(undefined8 *)((int)pQVar1 + 0x38) = 0x7f;
    pQVar1[3].ul64[0] = 0;
  }
  iVar5 = 6;
  *(undefined8 *)((int)pQVar1 + 0x48) = 0x1c;
  pQVar1[4].ul64[0] = (long)(int)_mlud << 0xc | 4;
  *(undefined8 *)((int)pQVar1 + 0x58) = 0x413413413413;
  pQVar1[5].ul64[0] = mgftg << 0x2f | 0xc000400000008001;
  pQVar3 = pQVar1 + 6;
  iVar4 = 0;
  do {
    iVar6 = iVar4 + 1;
    pQVar3->ui32[0] = uu[iVar4];
    iVar5 = iVar5 + 3;
    uVar7 = vv[iVar4];
    pQVar3->ui32[2] = 0;
    pQVar3->ui32[1] = uVar7;
    pQVar3->ui32[3] = 0;
    pQVar3[1].ui32[0] = _mr;
    *(uint *)((int)pQVar3 + 0x14) = _mg;
    *(uint *)((int)pQVar3 + 0x18) = _mb;
    *(uint *)((int)pQVar3 + 0x1c) = _ma;
    pQVar3[2].ui32[0] = xx[iVar4];
    *(uint *)((int)pQVar3 + 0x24) = yy[iVar4];
    *(uint *)((int)pQVar3 + 0x28) = mz;
    *(undefined4 *)((int)pQVar3 + 0x2c) = 0;
    pQVar3 = pQVar3 + 3;
    iVar4 = iVar6;
  } while (iVar6 < 4);
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + iVar5);
  return;
}

void CopySqrDToSqr(DISP_SQAR *s, SQAR_DAT *d) {
	int i;
	
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  
  s->att = 0;
  iVar2 = d->x;
  s->x[0] = iVar2;
  s->x[2] = iVar2;
  iVar6 = 0;
  s->sch = 1.0;
  uVar1 = d->w;
  puVar5 = s->r;
  iVar2 = d->x;
  s->texa = 0x8000008000;
  iVar2 = iVar2 + uVar1;
  s->alphar = 0x8000000044;
  s->x[1] = iVar2;
  s->x[3] = iVar2;
  s->zbuf = 0x10a000118;
  iVar2 = d->y;
  s->test = 0x30003;
  s->y[0] = iVar2;
  s->y[1] = iVar2;
  s->crx = 0.0;
  iVar2 = d->y;
  uVar1 = d->h;
  s->cry = 0.0;
  iVar2 = iVar2 + uVar1;
  s->csx = 0.0;
  s->y[2] = iVar2;
  s->y[3] = iVar2;
  s->csy = 0.0;
  uVar1 = d->pri;
  s->scw = 1.0;
  s->rot = 0.0;
  s->z = 0xfffff - (uVar1 & 0xfffff);
  s->pri = d->pri;
  do {
    puVar4 = s->g + iVar6;
    puVar3 = s->b + iVar6;
    *puVar5 = d->r;
    puVar5 = puVar5 + 1;
    iVar6 = iVar6 + 1;
    *puVar4 = d->g;
    *puVar3 = d->b;
  } while (iVar6 < 4);
  s->alpha = d->alpha;
  return;
}

void CopyGSqDToSqr(DISP_SQAR *s, GSQR_DAT *d) {
	int i;
	
  uint uVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  
  s->att = 0;
  iVar2 = d->x;
  s->x[0] = iVar2;
  s->x[2] = iVar2;
  s->sch = 1.0;
  uVar1 = d->w;
  iVar2 = d->x;
  s->texa = 0x8000008000;
  iVar2 = iVar2 + uVar1;
  s->alphar = 0x8000000044;
  s->x[1] = iVar2;
  puVar3 = s->r;
  s->x[3] = iVar2;
  s->zbuf = 0x10a000118;
  iVar2 = d->y;
  s->test = 0x30003;
  s->y[0] = iVar2;
  s->y[1] = iVar2;
  s->crx = 0.0;
  iVar2 = d->y;
  uVar1 = d->h;
  s->cry = 0.0;
  iVar2 = iVar2 + uVar1;
  s->csx = 0.0;
  s->y[2] = iVar2;
  s->y[3] = iVar2;
  s->csy = 0.0;
  uVar1 = d->pri;
  s->scw = 1.0;
  s->rot = 0.0;
  s->z = 0xfffff - (uVar1 & 0xfffff);
  s->pri = d->pri;
  iVar2 = 0;
  do {
    iVar4 = iVar2 + 1;
    *puVar3 = d->r[iVar2];
    puVar3 = puVar3 + 1;
    s->g[iVar2] = d->g[iVar2];
    s->b[iVar2] = d->b[iVar2];
    iVar2 = iVar4;
  } while (iVar4 < 4);
  s->alpha = d->alpha;
  return;
}

void CopySq4DToSqr(DISP_SQAR *s, SQR4_DAT *d) {
	int i;
	
  int *piVar1;
  uint uVar2;
  SQR4_DAT *pSVar3;
  uchar *puVar4;
  int *piVar5;
  uchar *puVar6;
  int iVar7;
  uchar *puVar8;
  
  s->att = 0;
  s->crx = 0.0;
  piVar5 = s->y;
  s->cry = 0.0;
  s->csx = 0.0;
  iVar7 = 3;
  s->csy = 0.0;
  pSVar3 = d;
  do {
    iVar7 = iVar7 + -1;
    piVar5[-4] = pSVar3->x[0];
    piVar1 = pSVar3->y;
    pSVar3 = (SQR4_DAT *)(pSVar3->x + 1);
    *piVar5 = *piVar1;
    piVar5 = piVar5 + 1;
  } while (-1 < iVar7);
  s->z = 0xfffff - (d->pri & 0xfffff);
  s->sch = 1.0;
  uVar2 = d->pri;
  s->texa = 0x8000008000;
  iVar7 = 0;
  s->alphar = 0x8000000044;
  puVar8 = s->r;
  s->zbuf = 0x10a000118;
  s->test = 0x30003;
  s->pri = uVar2;
  s->scw = 1.0;
  s->rot = 0.0;
  do {
    puVar6 = s->g + iVar7;
    puVar4 = s->b + iVar7;
    *puVar8 = d->r;
    puVar8 = puVar8 + 1;
    iVar7 = iVar7 + 1;
    *puVar6 = d->g;
    *puVar4 = d->b;
  } while (iVar7 < 4);
  s->alpha = d->alpha;
  return;
}

void CopyGS4DToSqr(DISP_SQAR *s, GSQ4_DAT *d) {
	int i;
	
  int *piVar1;
  uint uVar2;
  GSQ4_DAT *pGVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  
  s->att = 0;
  s->crx = 0.0;
  piVar4 = s->y;
  s->cry = 0.0;
  s->csx = 0.0;
  iVar5 = 3;
  s->csy = 0.0;
  pGVar3 = d;
  do {
    iVar5 = iVar5 + -1;
    piVar4[-4] = pGVar3->x[0];
    piVar1 = pGVar3->y;
    pGVar3 = (GSQ4_DAT *)(pGVar3->x + 1);
    *piVar4 = *piVar1;
    piVar4 = piVar4 + 1;
  } while (-1 < iVar5);
  s->z = 0xfffff - (d->pri & 0xfffff);
  s->sch = 1.0;
  uVar2 = d->pri;
  s->texa = 0x8000008000;
  s->alphar = 0x8000000044;
  s->zbuf = 0x10a000118;
  s->test = 0x30003;
  s->pri = uVar2;
  puVar7 = s->r;
  s->scw = 1.0;
  s->rot = 0.0;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    *puVar7 = d->r[iVar5];
    puVar7 = puVar7 + 1;
    s->g[iVar5] = d->g[iVar5];
    s->b[iVar5] = d->b[iVar5];
    iVar5 = iVar6;
  } while (iVar6 < 4);
  s->alpha = d->alpha;
  return;
}

void DispSqrD(DISP_SQAR *s) {
	int i;
	float ss;
	float cc;
	float div;
	float mx[4];
	float my[4];
	float mcrx;
	float mcry;
	float mcsx;
	float mcsy;
	u_int mz;
	float msw;
	float msh;
	float mrot;
	u_long mtexa;
	u_long malpr;
	u_long mzbuf;
	u_long mtest;
	u_char mr[4];
	u_char mg[4];
	u_char mb[4];
	u_char ma;
	float x[4];
	float y[4];
	float x2[4];
	float y2[4];
	u_int xx[4];
	u_int yy[4];
	float ftmp[4];
	sceVu0IVECTOR itmp;
	Q_WORDDATA *pbuf;
	
  int *piVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  byte bVar5;
  byte bVar6;
  Q_WORDDATA *pQVar7;
  Q_WORDDATA *pQVar8;
  uchar *puVar9;
  uchar *puVar10;
  int *piVar11;
  uchar *puVar12;
  uchar *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float mx [4];
  float my [4];
  uchar mr [4];
  uchar mg [4];
  uchar mb [4];
  float x [4];
  float y [4];
  float x2 [4];
  float y2 [4];
  uint xx [4];
  uint yy [4];
  float ftmp [4];
  int itmp [4];
  _DRAW_ENV_NOTEX local_d0;
  uint mz;
  ulong mtexa;
  ulong malpr;
  ulong mzbuf;
  ulong mtest;
  
  piVar11 = s->y;
  fVar21 = s->crx - 320.0;
  fVar22 = s->cry - 224.0;
  fVar19 = s->csx - 320.0;
  fVar18 = s->csy - 224.0;
  iVar15 = 0;
  do {
    piVar1 = piVar11 + -4;
    iVar17 = *piVar11;
    piVar11 = piVar11 + 1;
    iVar14 = iVar15 + 1;
    mx[iVar15] = (float)*piVar1 - 320.0;
    my[iVar15] = (float)iVar17 - 224.0;
    iVar15 = iVar14;
  } while (iVar14 < 4);
  iVar15 = 0;
  puVar13 = s->r;
  mz = s->z;
  fVar16 = s->scw;
  fVar20 = s->sch;
  fVar24 = s->rot;
  mtexa = s->texa;
  malpr = s->alphar;
  mzbuf = s->zbuf;
  mtest = s->test;
  do {
    puVar12 = mr + iVar15;
    uVar2 = s->g[iVar15];
    puVar10 = mg + iVar15;
    uVar3 = s->b[iVar15];
    puVar9 = mb + iVar15;
    uVar4 = *puVar13;
    puVar13 = puVar13 + 1;
    iVar15 = iVar15 + 1;
    *puVar12 = uVar4;
    *puVar10 = uVar2;
    *puVar9 = uVar3;
  } while (iVar15 < 4);
  fVar23 = 0.5;
  bVar5 = s->alpha;
  if (gInterlace == '\0') {
    fVar23 = 1.0;
  }
  if (fVar16 == 1.0) {
    for (iVar15 = 0; iVar15 < 4; iVar15 = iVar15 + 1) {
      x[iVar15] = mx[iVar15];
    }
  }
  else {
    iVar15 = 0;
    do {
      iVar14 = iVar15 + 1;
      x[iVar15] = (mx[iVar15] - fVar19) * fVar16 + fVar19;
      iVar15 = iVar14;
    } while (iVar14 < 4);
  }
  if (fVar20 == 1.0) {
    for (iVar15 = 0; iVar15 < 4; iVar15 = iVar15 + 1) {
      y[iVar15] = my[iVar15];
    }
  }
  else {
    iVar15 = 0;
    do {
      iVar14 = iVar15 + 1;
      y[iVar15] = (my[iVar15] - fVar18) * fVar20 + fVar18;
      iVar15 = iVar14;
    } while (iVar14 < 4);
  }
  fVar19 = (fVar24 * DAT_003ee35c) / 180.0;
  fVar18 = sinf(fVar19);
  fVar19 = cosf(fVar19);
  iVar15 = 0;
  do {
    iVar14 = iVar15 + 1;
    x[iVar15] = x[iVar15] - fVar21;
    y[iVar15] = y[iVar15] - fVar22;
    iVar15 = iVar14;
  } while (iVar14 < 4);
  if (fVar24 == 0.0) {
    x2[0] = x[0];
    y2[0] = y[0];
    x2[1] = x[1];
    y2[1] = y[1];
    x2[2] = x[2];
    y2[2] = y[2];
    x2[3] = x[3];
    y2[3] = y[3];
  }
  else {
    x2[0] = x[0] * fVar19 - y[0] * fVar18;
    y2[0] = x[0] * fVar18 + y[0] * fVar19;
    x2[1] = x[1] * fVar19 - y[1] * fVar18;
    y2[1] = x[1] * fVar18 + y[1] * fVar19;
    x2[2] = x[2] * fVar19 - y[2] * fVar18;
    y2[2] = x[2] * fVar18 + y[2] * fVar19;
    x2[3] = x[3] * fVar19 - y[3] * fVar18;
    y2[3] = x[3] * fVar18 + y[3] * fVar19;
  }
  iVar15 = 0;
  do {
    iVar14 = iVar15 + 1;
    x2[iVar15] = x2[iVar15] + fVar21;
    y2[iVar15] = y2[iVar15] + fVar22;
    iVar15 = iVar14;
  } while (iVar14 < 4);
  iVar15 = 0;
  do {
    iVar14 = iVar15 + 1;
    ftmp[0] = x2[iVar15] + 2048.0;
    ftmp[1] = y2[iVar15] * fVar23 + 2048.0;
    _ftoi4__FPiPf(itmp,ftmp);
    xx[iVar15] = itmp[0];
    yy[iVar15] = itmp[1];
    iVar15 = iVar14;
  } while (iVar14 < 4);
  local_d0.alpha = malpr;
  local_d0.test = mtest;
  local_d0.zbuf = mzbuf;
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_d0);
  SetTexaRegister__Fl(mtexa);
  pQVar8 = GetPK2Dbuf__Fv();
  pQVar8->ul64[0] = 0x8026400000008001;
  pQVar8->ul64[1] = 0x41414141;
  iVar15 = 0;
  pQVar7 = pQVar8;
  do {
    iVar14 = iVar15 + 1;
    *(uint *)(pQVar7 + 1) = (uint)mr[iVar15];
    *(uint *)((int)pQVar7 + 0x14) = (uint)mg[iVar15];
    bVar6 = mb[iVar15];
    *(uint *)((int)pQVar7 + 0x1c) = (uint)bVar5;
    *(uint *)((int)pQVar7 + 0x18) = (uint)bVar6;
    pQVar7[2].ui32[0] = xx[iVar15];
    *(uint *)((int)pQVar7 + 0x24) = yy[iVar15];
    *(uint *)((int)pQVar7 + 0x28) = mz;
    *(undefined4 *)((int)pQVar7 + 0x2c) = 0;
    iVar15 = iVar14;
    pQVar7 = pQVar7 + 2;
  } while (iVar14 < 4);
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar8 + 9);
  return;
}

void CopySprDToSpr2(DISP_SPRT2 *s, SPRT_DAT2 *d) {
  uint uVar1;
  ulong uVar2;
  short sVar3;
  short sVar4;
  float fVar5;
  
  fVar5 = d->u1 * 16.0;
  sVar3 = (short)(int)fVar5;
  s->att = 0;
  if (2.147484e+09 <= fVar5) {
    sVar3 = (short)(int)(fVar5 - 2.147484e+09);
  }
  fVar5 = d->v1 * 16.0;
  s->u1 = sVar3;
  sVar3 = (short)(int)fVar5;
  if (2.147484e+09 <= fVar5) {
    sVar3 = (short)(int)(fVar5 - 2.147484e+09);
    fVar5 = d->u2;
  }
  else {
    fVar5 = d->u2;
  }
  fVar5 = fVar5 * 16.0;
  s->v1 = sVar3;
  sVar3 = (short)(int)fVar5;
  if (2.147484e+09 <= fVar5) {
    sVar3 = (short)(int)(fVar5 - 2.147484e+09);
    fVar5 = d->v2;
  }
  else {
    fVar5 = d->v2;
  }
  fVar5 = fVar5 * 16.0;
  sVar4 = (short)(int)fVar5;
  s->u2 = sVar3;
  if (2.147484e+09 <= fVar5) {
    sVar4 = (short)(int)(fVar5 - 2.147484e+09);
  }
  uVar1 = d->pri;
  s->w = d->w;
  uVar2 = d->tex0;
  fVar5 = d->h;
  s->z = 0xfffff - (uVar1 & 0xfffff);
  s->h = fVar5;
  uVar1 = d->pri;
  s->x = d->x;
  s->v2 = sVar4;
  fVar5 = d->y;
  s->sch = 1.0;
  s->y = fVar5;
  s->tex0 = uVar2;
  s->tex1 = 0x161;
  s->texa = 0x8000008000;
  s->alpreg = 0x8000000044;
  s->zbuf = 0x10a000118;
  s->test = 0x30003;
  s->clmp = 5;
  s->gftg = 0x154;
  s->pri = uVar1;
  s->b = 0x80;
  s->crx = 0.0;
  s->cry = 0.0;
  s->csx = 0.0;
  s->csy = 0.0;
  s->scw = 1.0;
  s->rot = 0.0;
  s->r = 0x80;
  s->g = 0x80;
  s->alp = d->alpha;
  s->col = '\0';
  return;
}

void DispSprD2(DISP_SPRT2 *s) {
	u_int ui;
	int i;
	int psm;
	float ss;
	float cc;
	float div;
	u_int matt;
	u_int mu1;
	u_int mv1;
	u_int mu2;
	u_int mv2;
	float mw;
	float mh;
	float mx;
	float my;
	float mcrx;
	float mcry;
	float mcsx;
	float mcsy;
	u_int mz;
	float msw;
	float msh;
	float mrot;
	u_long mtex0;
	u_long mtex1;
	u_long mtexa;
	u_long malpr;
	u_long mzbuf;
	u_long mtest;
	u_long mgftg;
	u_long mclmp;
	u_char mr;
	u_char mg;
	u_char mb;
	u_char ma;
	u_char mlud;
	float x[4];
	float y[4];
	float x2[4];
	float y2[4];
	u_int xx[4];
	u_int yy[4];
	u_int uu[4];
	u_int vv[4];
	float ww;
	float hh;
	sceVu0IVECTOR itmp;
	float ftmp[4];
	Q_WORDDATA *pbuf;
	int n;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Q_WORDDATA *pQVar4;
  ulong uVar5;
  Q_WORDDATA *pQVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float x_00;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong mtex0;
  float x [4];
  float y [4];
  float x2 [4];
  float y2 [4];
  uint xx [4];
  uint yy [4];
  uint uu [4];
  uint vv [4];
  int itmp [4];
  float ftmp [4];
  _DRAW_ENV_5 local_130;
  ulong local_100;
  ulong local_f8;
  uint matt;
  uint mv1;
  uint mv2;
  uint mz;
  ulong mtex1;
  ulong mtexa;
  ulong malpr;
  ulong mzbuf;
  ulong mtest;
  ulong mgftg;
  ulong mclmp;
  uchar mr;
  uchar mg;
  uchar mb;
  uchar ma;
  uchar mlud;
  
  uVar5 = s->tex0;
  y[1] = s->y - 224.0;
  x[2] = s->x - 320.0;
  fVar15 = s->crx - 320.0;
  fVar16 = s->cry - 224.0;
  _mlud = (uint)s->col;
  fVar11 = s->csy - 224.0;
  fVar14 = s->csx - 320.0;
  matt = s->att;
  x_00 = (s->rot * DAT_003ee360) / 180.0;
  fVar17 = 0.5;
  uVar1 = s->u1;
  mv1 = (uint)(ushort)s->v1;
  uVar2 = s->u2;
  mv2 = (uint)(ushort)s->v2;
  mz = s->z;
  mtex1 = s->tex1;
  fVar12 = s->scw;
  fVar13 = s->sch;
  mtexa = s->texa;
  malpr = s->alpreg;
  mzbuf = s->zbuf;
  mtest = s->test;
  mgftg = s->gftg;
  mclmp = s->clmp;
  _mr = (uint)s->r;
  _mg = (uint)s->g;
  _mb = (uint)s->b;
  _ma = (uint)s->alp;
  if (gInterlace == '\0') {
    fVar17 = 1.0;
  }
  uVar10 = (uint)(uVar5 >> 0x14) & 0x3f;
  if (fVar12 == 1.0) {
    x[1] = x[2] + s->w * fVar12;
    x[0] = x[2];
  }
  else {
    x[0] = fVar14 - (fVar14 - x[2]) * fVar12;
    x[1] = fVar14 + ((x[2] + s->w) - fVar14) * fVar12;
    x[2] = x[0];
  }
  x[3] = x[1];
  if (fVar13 == 1.0) {
    y[2] = y[1] + s->h * fVar13;
    y[0] = y[1];
  }
  else {
    y[0] = fVar11 - (fVar11 - y[1]) * fVar13;
    y[2] = fVar11 + ((y[1] + s->h) - fVar11) * fVar13;
    y[1] = y[0];
  }
  y[3] = y[2];
  iVar7 = 0;
  x[0] = x[2];
  y[0] = y[1];
  do {
    iVar8 = iVar7 + 1;
    x[iVar7] = x[iVar7] - fVar15;
    y[iVar7] = y[iVar7] - fVar16;
    iVar7 = iVar8;
  } while (iVar8 < 4);
  if (x_00 == 0.0) {
    x2[0] = x[0];
    y2[0] = y[0];
    x2[1] = x[1];
    y2[1] = y[1];
    x2[2] = x[2];
    y2[2] = y[2];
    x2[3] = x[3];
    y2[3] = y[3];
  }
  else {
    fVar11 = sinf(x_00);
    fVar12 = cosf(x_00);
    x2[0] = x[0] * fVar12 - y[0] * fVar11;
    y2[0] = x[0] * fVar11 + y[0] * fVar12;
    x2[1] = x[1] * fVar12 - y[1] * fVar11;
    y2[1] = x[1] * fVar11 + y[1] * fVar12;
    x2[2] = x[2] * fVar12 - y[2] * fVar11;
    y2[2] = x[2] * fVar11 + y[2] * fVar12;
    x2[3] = x[3] * fVar12 - y[3] * fVar11;
    y2[3] = x[3] * fVar11 + y[3] * fVar12;
  }
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 1;
    x2[iVar7] = x2[iVar7] + fVar15;
    y2[iVar7] = y2[iVar7] + fVar16;
    iVar7 = iVar8;
  } while (iVar8 < 4);
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 1;
    ftmp[0] = x2[iVar7] + 2048.0;
    ftmp[1] = y2[iVar7] * fVar17 + 2048.0;
    _ftoi4__FPiPf(itmp,ftmp);
    xx[iVar7] = itmp[0];
    yy[iVar7] = itmp[1];
    iVar7 = iVar8;
  } while (iVar8 < 4);
  vv[1] = mv1;
  vv[3] = mv2;
  uVar3 = uVar1;
  if ((matt & 2) != 0) {
    uVar3 = uVar2;
    uVar2 = uVar1;
  }
  uu[3] = (uint)uVar2;
  uu[2] = (uint)uVar3;
  if ((matt & 1) != 0) {
    vv[1] = mv2;
    vv[3] = mv1;
  }
  local_130.alpha = malpr;
  local_130.tex1 = mtex1;
  local_130.clamp = mclmp;
  local_130.test = mtest;
  local_130.zbuf = mzbuf;
  uu[0] = uu[2];
  uu[1] = uu[3];
  vv[0] = vv[1];
  vv[2] = vv[3];
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_130);
  SetTexaRegister__Fl(mtexa);
  pQVar4 = GetPK2Dbuf__Fv();
  pQVar4->ul64[0] = 0x1000000000008004;
  pQVar4->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar4 + 0x18) = 0x3f;
  pQVar4[1].ul64[0] = 0;
  if (((uVar10 == 0x14) || (uVar10 == 0x2c)) || (uVar10 == 0x24)) {
    local_f8 = uVar5 & 0xffffffffffffff;
    local_100 = uVar5 & 0xfffffffc0fffff | 0x2000000001300000;
    pQVar4[2].ul64[0] = local_100;
    *(undefined8 *)((int)pQVar4 + 0x28) = 6;
    *(undefined8 *)((int)pQVar4 + 0x38) = 6;
    pQVar4[3].ul64[0] = local_f8;
  }
  else {
    *(undefined8 *)((int)pQVar4 + 0x28) = 6;
    pQVar4[2].ul64[0] = uVar5;
    *(undefined8 *)((int)pQVar4 + 0x38) = 0x7f;
    pQVar4[3].ul64[0] = 0;
  }
  iVar8 = 6;
  *(undefined8 *)((int)pQVar4 + 0x48) = 0x1c;
  pQVar4[4].ul64[0] = (long)(int)_mlud << 0xc | 4;
  *(undefined8 *)((int)pQVar4 + 0x58) = 0x413413413413;
  pQVar4[5].ul64[0] = mgftg << 0x2f | 0xc000400000008001;
  pQVar6 = pQVar4 + 6;
  iVar7 = 0;
  do {
    iVar9 = iVar7 + 1;
    pQVar6->ui32[0] = uu[iVar7];
    iVar8 = iVar8 + 3;
    uVar10 = vv[iVar7];
    pQVar6->ui32[2] = 0;
    pQVar6->ui32[1] = uVar10;
    pQVar6->ui32[3] = 0;
    pQVar6[1].ui32[0] = _mr;
    *(uint *)((int)pQVar6 + 0x14) = _mg;
    *(uint *)((int)pQVar6 + 0x18) = _mb;
    *(uint *)((int)pQVar6 + 0x1c) = _ma;
    pQVar6[2].ui32[0] = xx[iVar7];
    *(uint *)((int)pQVar6 + 0x24) = yy[iVar7];
    *(uint *)((int)pQVar6 + 0x28) = mz;
    *(undefined4 *)((int)pQVar6 + 0x2c) = 0;
    pQVar6 = pQVar6 + 3;
    iVar7 = iVar9;
  } while (iVar9 < 4);
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar4 + iVar8);
  return;
}

void SetPanel(u_int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  float fVar7;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  fVar7 = y2 - y1;
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aea00 >> (7 - uVar2) * 8;
  sq._0_8_ = DAT_003aea00;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003aea08 >> (7 - uVar2) * 8;
  sq._8_8_ = DAT_003aea08;
  uVar2 = (uint)&sq.alpha & 7;
  puVar6 = &sq.alpha + -uVar2;
  *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar2 + 1) * 8 | DAT_003aea10 >> (7 - uVar2) * 8;
  sq._16_8_ = DAT_003aea10;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dq,&sq);
  dq.x[0] = (int)x1;
  dq.z = 0xfffff - (pri & 0xfffff);
  dq.y[0] = (int)y1;
  dq.x[1] = dq.x[0] + (int)(x2 - x1);
  dq.zbuf = (long)(int)dq.z << 0x20 | 0xa000118;
  dq.y[2] = dq.y[0] + (int)fVar7;
  puVar6 = dq.r;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    *puVar6 = r;
    dq.g[iVar4] = g;
    puVar6 = puVar6 + 1;
    dq.b[iVar4] = b;
    iVar4 = iVar5;
  } while (iVar5 < 4);
  dq.x[2] = dq.x[0];
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  dq.pri = pri;
  dq.alpha = a;
  DispSqrD__FP9DISP_SQAR(&dq);
  return;
}

int LocalCopyLtoBGetSize(int type) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 76,
		/* [1] = */ 111,
		/* [2] = */ 99,
		/* [3] = */ 97,
		/* [4] = */ 108,
		/* [5] = */ 67,
		/* [6] = */ 111,
		/* [7] = */ 112,
		/* [8] = */ 121,
		/* [9] = */ 76,
		/* [10] = */ 116,
		/* [11] = */ 111,
		/* [12] = */ 66,
		/* [13] = */ 71,
		/* [14] = */ 101,
		/* [15] = */ 116,
		/* [16] = */ 83,
		/* [17] = */ 105,
		/* [18] = */ 122,
		/* [19] = */ 101,
		/* [20] = */ 0
	};
	
  int iVar1;
  
  iVar1 = 0x46000;
  if (type != 1) {
    if (type < 2) {
      if (type == 0) {
        return 0x118000;
      }
    }
    else {
      if (type == 2) {
        return 0x8c000;
      }
      if (type == 3) {
        return 0x8c000;
      }
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("LocalCopyLtoBGetSize() type is Illegal");
    iVar1 = 0;
  }
  return iVar1;
}

void LocalCopyLtoBAdrs(int type, int ee_adrs, int v_adrs) {
	sceGsStoreImage gs_simage[8];
	int i;
	
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined local_3b0 [112];
  undefined auStack_340 [784];
  
  uVar1 = (undefined2)v_adrs;
  if (type == 1) {
    sceGsSetDefStoreImage(local_3b0,uVar1,5,0,0,0,0x140,0xe0);
  }
  else if (type < 2) {
    if (type == 0) {
      iVar2 = 0;
      iVar3 = 0;
      puVar4 = local_3b0;
      do {
        iVar2 = iVar2 + 1;
        sceGsSetDefStoreImage(puVar4,uVar1,10,0,0,iVar3 >> 0x10,0x280,0x40);
        iVar3 = iVar2 * 0x400000;
        puVar4 = puVar4 + 0x70;
      } while (iVar2 < 7);
    }
  }
  else if (type == 2) {
    sceGsSetDefStoreImage(local_3b0,uVar1,5,0,0,0,0x140,400);
    sceGsSetDefStoreImage(auStack_340,uVar1,5,0,0,400,0x140,0x30);
  }
  else if (type == 3) {
    sceGsSetDefStoreImage(local_3b0,uVar1,10,0,0,0,0x280,0xe0);
  }
  g3dGsSyncPath__FiUs(0,0);
  FlushCache(0);
  if (type == 1) {
    g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(local_3b0,(uint16 *)ee_adrs);
  }
  else if (type < 2) {
    if (type == 0) {
      iVar3 = 0;
      puVar4 = local_3b0;
      do {
        iVar3 = iVar3 + 1;
        g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(puVar4,(uint16 *)ee_adrs);
        ee_adrs = (int)(ee_adrs + 0x28000);
        puVar4 = puVar4 + 0x70;
      } while (iVar3 < 7);
    }
  }
  else if (type == 2) {
    g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(local_3b0,(uint16 *)ee_adrs);
    g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(auStack_340,(uint16 *)(ee_adrs + 0x7d000));
  }
  else if (type == 3) {
    g3dGsExecStoreImage__FPC15sceGsStoreImagePUI80(local_3b0,(uint16 *)ee_adrs);
  }
  g3dGsSyncPath__FiUs(0,0);
  return;
}

void LocalCopyLtoB(int type, int no, int addr) {
  int ee_adrs;
  
  ee_adrs = 0x1f05b00;
  if (no == 0) {
    ee_adrs = 0x1e79b00;
  }
  LocalCopyLtoBAdrs__Fiii(type,ee_adrs,addr);
  return;
}

void LocalCopyBtoLAdrs(int type, int ee_adrs, int v_adrs) {
	int addr;
	int bline;
	int rline;
	int oline;
	int bl;
	int bw;
	int dbw;
	Q_WORDDATA *pbuf;
	int frtype;
	int div;
	
  long lVar1;
  bool bVar2;
  Q_WORDDATA *pQVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int div;
  
  uVar9 = 0x140;
  uVar10 = 0xe0;
  div = 4;
  lVar5 = 0;
  lVar4 = 5;
  if (type == 1) goto LAB_0019a558;
  if (type < 2) {
    uVar10 = 0x1c0;
    uVar9 = 0x280;
    lVar4 = 10;
    if (type == 0) goto LAB_0019a558;
  }
  else {
    div = 4;
    lVar5 = 0;
    uVar10 = 0x1c0;
    uVar9 = 0x140;
    lVar4 = 5;
    if (type == 2) goto LAB_0019a558;
    if (type == 3) {
      uVar10 = 0xe0;
      uVar9 = 0x280;
      lVar4 = 10;
      div = 8;
      goto LAB_0019a558;
    }
  }
  uVar10 = 0x1c0;
  div = 4;
  uVar9 = 0x280;
  lVar4 = 10;
  lVar5 = 1;
LAB_0019a558:
  if (uVar10 != 0) {
    bVar2 = 100 < uVar10;
    uVar8 = uVar10;
    do {
      uVar6 = 100;
      if (!bVar2) {
        uVar6 = uVar8;
      }
      iVar7 = (int)uVar10 - (int)uVar8;
      if (div == 0) {
        trap(7);
      }
      uVar8 = (ulong)((int)uVar8 - (int)uVar6);
      pQVar3 = GetPK2Dbuf__Fv();
      pQVar3->ul64[0] = 0x1000000000008004;
      pQVar3->ul64[1] = 0xe;
      *(undefined8 *)((int)pQVar3 + 0x18) = 0x50;
      pQVar3[1].ul64[0] = (long)v_adrs << 0x20 | lVar4 << 0x30 | lVar5 << 0x38;
      *(undefined8 *)((int)pQVar3 + 0x28) = 0x51;
      pQVar3[2].ul64[0] = (long)iVar7 << 0x30;
      *(undefined8 *)((int)pQVar3 + 0x38) = 0x52;
      pQVar3[3].ul64[0] = uVar9 | uVar6 << 0x20;
      *(undefined8 *)((int)pQVar3 + 0x48) = 0x53;
      pQVar3[4].ul64[0] = 0;
      EndPK2Dbuf__FP10Q_WORDDATA(pQVar3 + 5);
      lVar1 = (long)(int)uVar9 * (long)iVar7;
      SetPK2DImageTrans__FUii
                ((ee_adrs | (uint)((ulong)lVar1 >> 0x20)) + (int)lVar1 * 4,
                 ((int)uVar9 * (int)uVar6) / div);
      bVar2 = 100 < (long)uVar8;
    } while (0 < (long)uVar8);
  }
  return;
}

void LocalCopyBtoL(int type, int no, int addr) {
  int ee_adrs;
  
  ee_adrs = 0x1f05b00;
  if (no == 0) {
    ee_adrs = 0x1e79b00;
  }
  LocalCopyBtoLAdrs__Fiii(type,ee_adrs,addr);
  return;
}

void LocalCopyLtoL(int type, int addr1, int addr2) {
	static SCREEN_COPY_WRK scpw[6] = {
		/* [0] = */ {
			/* .stbp = */ 0,
			/* .sfbw = */ 10,
			/* .stw = */ 10,
			/* .sth = */ 9,
			/* .dtbp = */ 0,
			/* .dfbw = */ 10,
			/* .dw = */ 640,
			/* .dh = */ 448,
			/* .du = */ 640,
			/* .dv = */ 448
		},
		/* [1] = */ {
			/* .stbp = */ 0,
			/* .sfbw = */ 10,
			/* .stw = */ 10,
			/* .sth = */ 9,
			/* .dtbp = */ 0,
			/* .dfbw = */ 5,
			/* .dw = */ 320,
			/* .dh = */ 224,
			/* .du = */ 640,
			/* .dv = */ 448
		},
		/* [2] = */ {
			/* .stbp = */ 0,
			/* .sfbw = */ 5,
			/* .stw = */ 9,
			/* .sth = */ 8,
			/* .dtbp = */ 0,
			/* .dfbw = */ 10,
			/* .dw = */ 640,
			/* .dh = */ 448,
			/* .du = */ 320,
			/* .dv = */ 224
		},
		/* [3] = */ {
			/* .stbp = */ 0,
			/* .sfbw = */ 10,
			/* .stw = */ 10,
			/* .sth = */ 9,
			/* .dtbp = */ 0,
			/* .dfbw = */ 5,
			/* .dw = */ 320,
			/* .dh = */ 448,
			/* .du = */ 640,
			/* .dv = */ 448
		},
		/* [4] = */ {
			/* .stbp = */ 0,
			/* .sfbw = */ 5,
			/* .stw = */ 9,
			/* .sth = */ 9,
			/* .dtbp = */ 0,
			/* .dfbw = */ 10,
			/* .dw = */ 640,
			/* .dh = */ 448,
			/* .du = */ 320,
			/* .dv = */ 448
		},
		/* [5] = */ {
			/* .stbp = */ 0,
			/* .sfbw = */ 10,
			/* .stw = */ 10,
			/* .sth = */ 9,
			/* .dtbp = */ 0,
			/* .dfbw = */ 10,
			/* .dw = */ 640,
			/* .dh = */ 224,
			/* .du = */ 640,
			/* .dv = */ 448
		}
	};
	SCREEN_COPY_WRK *scpp;
	Q_WORDDATA *pbuf;
	sceGsDrawEnv1 *pNDrawEnv;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Q_WORDDATA *pQVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  _DRAW_ENV_5 local_a0;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  
  puVar6 = (undefined8 *)GetDrawEnv__Fi((int)sys_wrk.count + 1U & 1);
  iVar10 = type * 0x28;
  if (addr2 < 0) {
    addr2 = addr2 + 0x1f;
  }
  *(int *)(scpw_997 + iVar10) = addr1;
  *(int *)(scpw_997 + iVar10 + 0x10) = addr2 >> 5;
  local_70 = 0x8000000011;
  local_68 = 0x100000161;
  local_60 = 5;
  local_58 = 0x30003;
  local_a0.alpha = 0x8000000011;
  local_a0.tex1 = 0x100000161;
  local_a0.zbuf = puVar6[2] & 0xf0001ff | 0x100000000;
  local_a0.clamp = 5;
  local_a0.test = 0x30003;
  local_50 = local_a0.zbuf;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_a0);
  pQVar7 = GetPK2DbufWait__Fv();
  pQVar7->ul64[0] = 0x1000000000008004;
  pQVar7->ul64[1] = 0xe;
  pQVar7[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar7 + 0x18) = 0x3f;
  iVar1 = *(int *)(scpw_997 + iVar10 + 0x14);
  iVar2 = *(int *)(scpw_997 + iVar10 + 0x10);
  *(undefined8 *)((int)pQVar7 + 0x28) = 0x4c;
  pQVar7[2].ul64[0] = (long)iVar2 | (long)iVar1 << 0x10 | 0x1000000;
  *(undefined8 *)((int)pQVar7 + 0x38) = 0x18;
  pQVar7[3].ul64[0] = 0x790800006c08;
  iVar1 = *(int *)(scpw_997 + iVar10 + 4);
  iVar2 = *(int *)(scpw_997 + iVar10 + 0xc);
  iVar3 = *(int *)(scpw_997 + iVar10);
  iVar4 = *(int *)(scpw_997 + iVar10 + 8);
  *(undefined8 *)((int)pQVar7 + 0x48) = 6;
  pQVar7[4].ul64[0] =
       (long)iVar3 | 0x800000000U | (long)iVar1 << 0xe | (long)iVar2 << 0x1e |
       (long)iVar4 << 0x1a | 0x100000U | 0x400000000;
  *(undefined8 *)((int)pQVar7 + 0x58) = 0x4343;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pQVar7[5].ul64[0] = 0x408b400000008001;
  *(undefined4 *)((int)pQVar7 + 100) = 0;
  pQVar7[6].ui32[0] = 0;
  pQVar7[7].fl32[0] = 3.87431e-41;
  *(undefined4 *)((int)pQVar7 + 0x74) = 0x7900;
  *(undefined8 *)((int)pQVar7 + 0x78) = 0;
  pQVar7[8].ui32[0] = *(int *)(scpw_997 + iVar10 + 0x20) << 4;
  *(int *)((int)pQVar7 + 0x84) = *(int *)(scpw_997 + iVar10 + 0x24) << 4;
  pQVar7[9].ui32[0] = *(int *)(scpw_997 + iVar10 + 0x18) * 0x10 + 0x6c00;
  iVar10 = *(int *)(scpw_997 + iVar10 + 0x1c);
  *(undefined8 *)((int)pQVar7 + 0x98) = 0;
  *(int *)((int)pQVar7 + 0x94) = iVar10 * 0x10 + 0x7900;
  pQVar7[10].ul64[0] = 0x1000000000008002;
  *(undefined8 *)((int)pQVar7 + 0xa8) = 0xe;
  uVar5 = *puVar6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar8 = *(undefined4 *)(puVar6 + 1);
  uVar9 = *(undefined4 *)((int)puVar6 + 0xc);
  pQVar7[0xb].ui32[0] = (uint)uVar5;
  *(int *)((int)pQVar7 + 0xb4) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)((int)pQVar7 + 0xb8) = uVar8;
  *(undefined4 *)((int)pQVar7 + 0xbc) = uVar9;
  uVar5 = puVar6[4];
  uVar8 = *(undefined4 *)(puVar6 + 5);
  uVar9 = *(undefined4 *)((int)puVar6 + 0x2c);
  pQVar7[0xc].ui32[0] = (uint)uVar5;
  *(int *)((int)pQVar7 + 0xc4) = (int)((ulong)uVar5 >> 0x20);
  *(undefined4 *)((int)pQVar7 + 200) = uVar8;
  *(undefined4 *)((int)pQVar7 + 0xcc) = uVar9;
                    /* end of inlined section */
  EndPK2DbufWait__FP10Q_WORDDATA(pQVar7 + 0xd);
  return;
}

void InitPK2Dbuf() {
  pk2d_wrk.buf_top = (Q_WORDDATA *)0x1e89b00;
  pk2d_wrk.idx_top = (Q_WORDDATA *)0x1e79b00;
  pk2d_wrk.idx_now = (Q_WORDDATA *)0x1e79b00;
  pk2d_wrk.buf_now = (Q_WORDDATA *)0x1e89b00;
  return;
}

void SwapPK2Dbuf() {
  pk2d_wrk.buf_now = (Q_WORDDATA *)0x21e89b00;
  pk2d_wrk.buf_top = (Q_WORDDATA *)0x21e89b00;
  pk2d_wrk.idx_now = (Q_WORDDATA *)(((uint)sys_wrk.count & 1) * 0x8000 + 0x1e79b00 | 0x20000000);
  pk2d_wrk.idx_top = pk2d_wrk.idx_now;
  return;
}

void PK2DKick() {
  dmaVif1Kick__Fv();
  return;
}

Q_WORDDATA* GetPK2Dbuf() {
  Q_WORDDATA *pQVar1;
  
  pQVar1 = (Q_WORDDATA *)dmaVif1GetPacketFLUSH_DIRECT__Fv();
  return pQVar1;
}

void EndPK2Dbuf(Q_WORDDATA *addr) {
  dmaVif1SetPacketFLUSH_DIRECT__FPA3_i((int (*) [4])addr);
  return;
}

Q_WORDDATA* GetPK2DbufWait() {
  Q_WORDDATA *pQVar1;
  
  pQVar1 = GetPK2Dbuf__Fv();
  return pQVar1;
}

void EndPK2DbufWait(Q_WORDDATA *addr) {
  dmaVif1SetPacketFLUSH_DIRECT__FPA3_i((int (*) [4])addr);
  return;
}

Q_WORDDATA* SetPK2DRefTag(int nloop, unsigned int addr) {
  dmaVif1AddRefTag__FUii(0,nloop);
  return (Q_WORDDATA *)0x0;
}

Q_WORDDATA* TermPK2Dbuf() {
  printf("kitemasu\n");
  return (Q_WORDDATA *)0x0;
}

void AddCNTtag(Q_WORDDATA *addr, int n) {
  return;
}

void SetPK2DImageTrans(unsigned int img_addr, int nloop) {
	Q_WORDDATA *pbuf;
	
  int (*paiVar1) [4];
  
  paiVar1 = dmaVif1GetPacketVIF__Fv();
  *(ulong *)*paiVar1 = (long)nloop | 0x1800000000008000;
  *(undefined8 *)(*paiVar1 + 2) = 0xe;
  dmaVif1SetPacketVIF__FPA3_iii(paiVar1[1],0,0x50000001);
  dmaVif1AddRefTagVIF__FUiiii(img_addr,nloop,0,nloop | 0x50000000);
  return;
}

Q_WORDDATA* GetPK3Dbuf() {
  printf("kitemasu\n");
  return pk2d_wrk.idx_now;
}

void TermPK3Dbuf() {
  printf("kitemasu\n");
  pk2d_wrk.idx_now = pk2d_wrk.idx_now + 1;
  return;
}

Q_WORDDATA* StartDmaDirectTrans() {
  Q_WORDDATA *pQVar1;
  
  pQVar1 = (Q_WORDDATA *)dmaVif1GetPacketFLUSH_DIRECT__Fv();
  return pQVar1;
}

Q_WORDDATA* EndDmaDirectTrans(Q_WORDDATA *tail) {
  dmaVif1SetPacketFLUSH_DIRECT__FPA3_i((int (*) [4])tail);
  return tail;
}
