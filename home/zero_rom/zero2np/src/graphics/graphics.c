// STATUS: NOT STARTED

#include "graphics.h"

static int save_cross_line_cnt = 0;
static float save_cross_line_pos[10][4];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b8780;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1498,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f14a0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void DrawHitCircle(float *mpos, float rot_y, int adj_y, u_char col, u_char alp, float rad) {
	int i;
	int n;
	int np;
	u_char rgb[12][6];
	float f;
	float add;
	float ncf[38][4];
	sceVu0IVECTOR nci[38];
	float trf[4][4];
	sceVu0IVECTOR tri[4];
	float wpos[4];
	float slm1[4][4];
	float slm2[4][4];
	float wlm[4][4];
	u_int clpx2;
	u_int clpy2;
	u_int clpz2;
	Q_WORDDATA *pbuf;
	
  byte bVar1;
  ulong *puVar2;
  int *piVar3;
  float fVar4;
  GRA3DCAMERA *pGVar5;
  Q_WORDDATA *pQVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  Q_WORDDATA *pQVar11;
  Q_WORDDATA *pQVar12;
  int (*paiVar13) [4];
  Q_WORDDATA *pQVar14;
  ulong uVar15;
  Q_WORDDATA *pQVar16;
  ulong uVar17;
  Q_WORDDATA *pQVar18;
  Q_WORDDATA *pQVar19;
  float (*pafVar20) [4];
  bool bVar21;
  long lVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uchar rgb [12] [6];
  float ncf [38] [4];
  int nci [38] [4];
  float trf [4] [4];
  int tri [4] [4];
  float wpos [4];
  float slm1 [4] [4];
  float slm2 [4] [4];
  float wlm [4] [4];
  _DRAW_ENV_NOTEX local_c0;
  
  puVar7 = &DAT_003b87d8;
  puVar2 = (ulong *)rgb;
  do {
    puVar8 = puVar2;
    uVar24 = puVar7[1];
    uVar15 = puVar7[2];
    uVar17 = puVar7[3];
    *puVar8 = *puVar7;
    puVar8[1] = uVar24;
    puVar8[2] = uVar15;
    puVar8[3] = uVar17;
    puVar7 = puVar7 + 4;
    puVar2 = puVar8 + 4;
  } while (puVar7 != (ulong *)&UNK_003b8818);
  uVar25 = (int)puVar8 + 0x27U & 7;
  puVar2 = (ulong *)(((int)puVar8 + 0x27U) - uVar25);
  *puVar2 = *puVar2 & -1L << (uVar25 + 1) * 8 | _UNK_003b8818 >> (7 - uVar25) * 8;
  fVar31 = 10.0;
  puVar8[4] = _UNK_003b8818;
  fVar26 = CombRotate__Ff(rot_y);
  fVar4 = DAT_003ee410;
                    /* inlined from graph3d/g3dxVu0.h */
  wpos[2] = mpos[2];
  wpos[3] = mpos[3];
  wpos[0] = (float)*(undefined8 *)mpos;
                    /* end of inlined section */
  fVar30 = 0.0;
  fVar32 = 180.0;
  wpos[1] = (float)((ulong)*(undefined8 *)mpos >> 0x20) - ((float)adj_y + fVar31);
  uVar28 = DAT_003ee40c;
  sceVu0UnitMatrix(wlm);
  sceVu0RotMatrixX(uVar28,wlm,wlm);
  sceVu0RotMatrixY(fVar26,wlm,wlm);
  sceVu0TransMatrix(wlm,wlm,wpos);
  pGVar5 = gra3dGetCamera__Fv();
  sceVu0MulMatrix(slm1,pGVar5->matWorldScreen,wlm);
  wpos[1] = wpos[1] - ((float)adj_y + 3.0);
  sceVu0UnitMatrix(wlm);
  sceVu0RotMatrixX(uVar28,wlm,wlm);
  sceVu0RotMatrixY(fVar26,wlm,wlm);
  sceVu0TransMatrix(wlm,wlm,wpos);
  pGVar5 = gra3dGetCamera__Fv();
  sceVu0MulMatrix(slm2,pGVar5->matWorldScreen,wlm);
  fVar26 = 1.0;
  pafVar20 = ncf;
  ncf[0][0] = 0.0;
  ncf[0][1] = 0.0;
  ncf[0][2] = 0.0;
  ncf[0][3] = 1.0;
  iVar23 = 1;
  do {
    iVar10 = iVar23;
    pafVar20 = pafVar20[1];
    fVar29 = fVar30 * fVar4;
    iVar23 = iVar10 + 1;
    fVar30 = fVar30 + fVar31;
    fVar29 = fVar29 / fVar32;
    fVar27 = g3dCosf__Ff(fVar29);
    (*pafVar20)[0] = rad * fVar27;
    fVar27 = g3dSinf__Ff(fVar29);
    (*pafVar20)[2] = 0.0;
    (*pafVar20)[3] = fVar26;
    (*pafVar20)[1] = rad * fVar27;
  } while (fVar30 < 360.0);
                    /* inlined from graph3d/g3dxVu0.h */
  ncf[iVar23][0] = (float)ncf[1]._0_8_;
  ncf[iVar23][1] = SUB84(ncf[1]._0_8_,4);
  ncf[iVar23][2] = ncf[1][2];
  ncf[iVar23][3] = ncf[1][3];
                    /* end of inlined section */
  uVar24 = (ulong)(iVar10 + 2);
                    /* inlined from graph3d/g3dxVu0.h */
  trf[0][2] = ncf[1][2];
  trf[0][3] = ncf[1][3];
  trf[1][0] = (float)ncf[14]._0_8_;
  trf[1][1] = SUB84(ncf[14]._0_8_,4);
  trf[1][2] = ncf[14][2];
  trf[1][3] = ncf[14][3];
  trf[2][0] = ncf[0][0];
  trf[2][1] = ncf[0][1];
  trf[2][2] = ncf[0][2];
  trf[2][3] = ncf[0][3];
  trf[3][0] = (float)ncf[24]._0_8_;
  trf[3][1] = SUB84(ncf[24]._0_8_,4);
  trf[3][2] = ncf[24][2];
  trf[3][3] = ncf[24][3];
                    /* end of inlined section */
  paiVar13 = nci;
  bVar21 = false;
  trf[0][0] = (float)ncf[1]._0_8_;
  trf[0][1] = SUB84(ncf[1]._0_8_,4);
  sceVu0RotTransPersN(paiVar13,slm1,ncf,uVar24,0);
  sceVu0RotTransPersN(tri,slm2,trf,4,0);
  if (((uint)nci[0][0] < 0x5a80) || (0xa580 < (uint)nci[0][0])) {
    bVar21 = true;
  }
  if (((uint)nci[0][1] < 0x6700) || (0x9900 < (uint)nci[0][1])) {
    bVar21 = true;
  }
  if (nci[0][2] == 0) {
    bVar21 = true;
  }
  else if (0xffffff < (uint)nci[0][2]) {
    bVar21 = true;
  }
  if (!bVar21) {
    local_c0.alpha = DAT_003b8820;
    local_c0.test = DAT_003b8828;
    local_c0.zbuf = DAT_003b8830;
    SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_c0);
    pQVar6 = GetPK2Dbuf__Fv();
    uVar25 = (uint)col;
    pQVar6->ul64[0] = 0x1022c00000008001;
    pQVar6->ul64[1] = 1;
    *(uint *)(pQVar6 + 1) = (uint)rgb[uVar25][0];
    iVar23 = 3;
    *(uint *)((int)pQVar6 + 0x14) = (uint)rgb[uVar25][1];
    bVar1 = rgb[uVar25][2];
    *(uint *)((int)pQVar6 + 0x1c) = (uint)alp;
    *(uint *)((int)pQVar6 + 0x18) = (uint)bVar1;
    *(undefined8 *)((int)pQVar6 + 0x28) = 4;
    pQVar6[2].ul64[0] = uVar24 | 0x1022c00000008000;
    if (0 < (long)uVar24) {
      lVar22 = 0;
      pQVar11 = pQVar6 + 3;
      do {
        bVar21 = 1 < lVar22;
        uVar9 = 0x8000;
        lVar22 = (long)((int)lVar22 + 1);
        pQVar11->ui32[0] = (*paiVar13)[0];
        if (bVar21) {
          uVar9 = 0;
        }
        iVar23 = iVar23 + 1;
        pQVar11->ui32[1] = (*paiVar13)[1];
        piVar3 = *paiVar13;
        paiVar13 = paiVar13[1];
        pQVar11->ui32[2] = piVar3[2];
        pQVar11->ui32[3] = uVar9;
        pQVar11 = pQVar11 + 1;
      } while (lVar22 < (long)uVar24);
    }
    pQVar6[iVar23].ul64[1] = 0x4444441;
    iVar10 = (uVar25 * 2 + (uint)col) * 2;
    pQVar6[iVar23].ul64[0] = 0x7022c00000008001;
    pQVar11 = pQVar6 + iVar23 + 1;
    *(uint *)pQVar11 = (uint)rgb[iVar10 + 3];
    pQVar12 = pQVar6 + iVar23 + 2;
    pQVar11->ui32[1] = (uint)rgb[iVar10 + 4];
    pQVar14 = pQVar6 + iVar23 + 3;
    bVar1 = rgb[iVar10 + 5];
    pQVar16 = pQVar6 + iVar23 + 4;
    pQVar11->ui32[3] = (uint)alp;
    *(uint *)(pQVar11->ul64 + 1) = (uint)bVar1;
    pQVar11 = pQVar6 + iVar23 + 5;
    pQVar18 = pQVar6 + iVar23 + 6;
    pQVar12->iv[0] = tri[0][0];
    pQVar19 = pQVar6 + iVar23 + 7;
    pQVar12->iv[1] = tri[0][1];
    pQVar12->ui32[3] = 0x8000;
    pQVar12->iv[2] = tri[0][2];
    pQVar14->iv[0] = tri[1][0];
    pQVar14->iv[1] = tri[1][1];
    pQVar14->ui32[3] = 0x8000;
    pQVar14->iv[2] = tri[1][2];
    pQVar16->iv[0] = tri[2][0];
    pQVar16->iv[1] = tri[2][1];
    pQVar16->ui32[3] = 0;
    pQVar16->iv[2] = tri[2][2];
    pQVar11->iv[0] = tri[0][0];
    pQVar11->iv[1] = tri[0][1];
    pQVar11->ui32[3] = 0x8000;
    pQVar11->iv[2] = tri[0][2];
    pQVar18->iv[0] = tri[3][0];
    pQVar18->iv[1] = tri[3][1];
    pQVar18->ui32[3] = 0x8000;
    pQVar18->iv[2] = tri[3][2];
    pQVar19->iv[0] = tri[2][0];
    pQVar19->iv[1] = tri[2][1];
    pQVar19->ui32[3] = 0;
    pQVar19->iv[2] = tri[2][2];
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar6 + iVar23 + 8);
  }
  return;
}

void SetLine2DPacket(float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
	float temp[4];
	sceVu0IVECTOR itmp;
	Q_WORDDATA *pbuf;
	
  Q_WORDDATA *pQVar1;
  float temp [4];
  int itmp [4];
  
  temp[3] = (y2 + 2048.0) - 224.0;
  temp[0] = (x1 + 2048.0) - 320.0;
  temp[1] = (x2 + 2048.0) - 320.0;
  temp[2] = (y1 + 2048.0) - 224.0;
  _ftoi4__FPiPf(itmp,temp);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x3020c00000008001;
  pQVar1->ul64[1] = 0x441;
  *(uint *)((int)pQVar1 + 0x1c) = (uint)a;
  *(uint *)(pQVar1 + 1) = (uint)r;
  *(uint *)((int)pQVar1 + 0x14) = (uint)g;
  *(uint *)((int)pQVar1 + 0x18) = (uint)b;
  pQVar1[2].iv[0] = itmp[0];
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  *(int *)((int)pQVar1 + 0x24) = itmp[2];
  *(undefined4 *)((int)pQVar1 + 0x28) = 1;
  pQVar1[3].iv[0] = itmp[1];
  *(undefined4 *)((int)pQVar1 + 0x38) = 1;
  *(int *)((int)pQVar1 + 0x34) = itmp[3];
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 4);
  return;
}

void SetLine2D(float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
  _DRAW_ENV_NOTEX local_70;
  
  local_70.alpha = (ulong)a << 0x20 | 100;
  local_70.zbuf = 0x10a000118;
  local_70.test = 0x5000d;
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_70);
  SetLine2DPacket__FffffUcUcUcUc(x1,y1,x2,y2,r,g,b,a);
  return;
}

void DrawHitCircle2D(float *mpos, float rot_y, int adj_y, u_char col, u_char alp, float rad) {
	int i;
	int n;
	int np;
	u_char rgb[12][6];
	float f;
	float add;
	float ncf[38][4];
	sceVu0IVECTOR nci[38];
	float trf[4][4];
	sceVu0IVECTOR tri[4];
	float wpos[4];
	float slm1[4][4];
	float slm2[4][4];
	float wlm[4][4];
	Q_WORDDATA *pbuf;
	
  byte bVar1;
  ulong *puVar2;
  bool bVar3;
  float *pfVar4;
  int *piVar5;
  Q_WORDDATA *pQVar6;
  ulong *puVar7;
  ulong *puVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  Q_WORDDATA *pQVar12;
  Q_WORDDATA *pQVar13;
  Q_WORDDATA *pQVar14;
  Q_WORDDATA *pQVar15;
  ulong uVar16;
  Q_WORDDATA *pQVar17;
  Q_WORDDATA *pQVar18;
  float (*v0) [4];
  float (*pafVar19) [4];
  ulong uVar20;
  long lVar21;
  int (*paiVar22) [4];
  int iVar23;
  ulong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uchar rgb [12] [6];
  float ncf [38] [4];
  int nci [38] [4];
  float trf [4] [4];
  int tri [4] [4];
  float wpos [4];
  float slm1 [4] [4];
  float slm2 [4] [4];
  float wlm [4] [4];
  _DRAW_ENV_NOTEX local_b0;
  
  puVar7 = &DAT_003b8838;
  puVar2 = (ulong *)rgb;
  do {
    puVar8 = puVar2;
    uVar24 = puVar7[1];
    uVar20 = puVar7[2];
    uVar16 = puVar7[3];
    *puVar8 = *puVar7;
    puVar8[1] = uVar24;
    puVar8[2] = uVar20;
    puVar8[3] = uVar16;
    puVar7 = puVar7 + 4;
    puVar2 = puVar8 + 4;
  } while (puVar7 != (ulong *)&UNK_003b8878);
  uVar25 = (int)puVar8 + 0x27U & 7;
  puVar2 = (ulong *)(((int)puVar8 + 0x27U) - uVar25);
  *puVar2 = *puVar2 & -1L << (uVar25 + 1) * 8 | _UNK_003b8878 >> (7 - uVar25) * 8;
  fVar31 = 10.0;
  puVar8[4] = _UNK_003b8878;
  fVar27 = CombRotate__Ff(rot_y);
  fVar26 = DAT_003ee418;
  fVar11 = DAT_003ee414;
                    /* inlined from graph3d/g3dxVu0.h */
  wpos[3] = mpos[3];
  wpos[1] = (float)((ulong)*(undefined8 *)mpos >> 0x20);
                    /* end of inlined section */
  fVar27 = -fVar27;
  wpos[0] = (float)*(undefined8 *)mpos * DAT_003ee414;
  wpos[2] = mpos[2] * DAT_003ee414;
  fVar30 = 180.0;
  fVar29 = 0.0;
  sceVu0UnitMatrix(wlm);
  wlm[2][2] = fVar11;
  wlm[1][1] = fVar11;
  wlm[0][0] = fVar11;
  sceVu0RotMatrixY(fVar27,wlm,wlm);
  sceVu0TransMatrix(slm1,wlm,wpos);
  sceVu0UnitMatrix(wlm);
  wlm[0][0] = fVar11;
  wlm[2][2] = fVar11;
  wlm[1][1] = fVar11;
  sceVu0RotMatrixY(fVar27,wlm,wlm);
  sceVu0TransMatrix(slm2,wlm,wpos);
  fVar11 = 1.0;
  v0 = ncf;
  pafVar19 = ncf;
  ncf[0][0] = 0.0;
  ncf[0][1] = 0.0;
  ncf[0][2] = 0.0;
  ncf[0][3] = 1.0;
  iVar23 = 1;
  do {
    iVar10 = iVar23;
    pafVar19 = pafVar19[1];
    fVar28 = fVar29 * fVar26;
    iVar23 = iVar10 + 1;
    fVar29 = fVar29 + fVar31;
    fVar28 = fVar28 / fVar30;
    fVar27 = g3dCosf__Ff(fVar28);
    (*pafVar19)[1] = 0.0;
    (*pafVar19)[0] = rad * fVar27;
    fVar27 = g3dSinf__Ff(fVar28);
    (*pafVar19)[3] = fVar11;
    (*pafVar19)[2] = rad * fVar27;
  } while (fVar29 < 360.0);
                    /* inlined from graph3d/g3dxVu0.h */
  fVar11 = (float)ncf[1]._0_8_;
  v0[iVar23][0] = fVar11;
  fVar26 = SUB84(ncf[1]._0_8_,4);
  ncf[iVar23][1] = fVar26;
  ncf[iVar23][2] = ncf[1][2];
  ncf[iVar23][3] = ncf[1][3];
                    /* end of inlined section */
  uVar24 = (ulong)(iVar10 + 2);
                    /* inlined from graph3d/g3dxVu0.h */
  pafVar19 = trf;
  trf[0][2] = ncf[1][2];
  trf[0][3] = ncf[1][3];
  trf[1][0] = (float)ncf[14]._0_8_;
  trf[1][1] = SUB84(ncf[14]._0_8_,4);
  trf[1][2] = ncf[14][2];
  trf[1][3] = ncf[14][3];
  trf[2][0] = ncf[0][0];
  trf[2][1] = ncf[0][1];
  trf[2][2] = ncf[0][2];
  trf[2][3] = ncf[0][3];
  trf[3][0] = (float)ncf[24]._0_8_;
  trf[3][1] = SUB84(ncf[24]._0_8_,4);
  trf[3][2] = ncf[24][2];
  trf[3][3] = ncf[24][3];
                    /* end of inlined section */
  trf[0][0] = fVar11;
  trf[0][1] = fVar26;
  if (0 < (long)uVar24) {
    fVar11 = 2048.0;
    paiVar22 = nci;
    uVar20 = uVar24;
    do {
      uVar20 = (ulong)((int)uVar20 + -1);
      Vu0ApplyMatrix__FPfPA3_fT0((float *)v0,slm1,(float *)v0);
      pfVar4 = *v0;
      fVar26 = (*v0)[2];
      v0 = v0[1];
      (*paiVar22)[0] = (int)((*pfVar4 + fVar11) * 16.0);
      (*paiVar22)[1] = (int)((fVar11 - fVar26) * 16.0);
      paiVar22 = paiVar22[1];
    } while (uVar20 != 0);
  }
  fVar11 = 2048.0;
  paiVar22 = tri;
  iVar23 = 3;
  do {
    iVar23 = iVar23 + -1;
    Vu0ApplyMatrix__FPfPA3_fT0((float *)pafVar19,slm2,(float *)pafVar19);
    pfVar4 = *pafVar19;
    fVar26 = (*pafVar19)[2];
    pafVar19 = pafVar19[1];
    (*paiVar22)[0] = (int)((*pfVar4 + fVar11) * 16.0);
    (*paiVar22)[1] = (int)((fVar11 - fVar26) * 16.0);
    paiVar22 = paiVar22[1];
  } while (-1 < iVar23);
  lVar21 = 0;
  local_b0.alpha = DAT_003b8880;
  local_b0.test = DAT_003b8888;
  local_b0.zbuf = DAT_003b8890;
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_b0);
  pQVar6 = GetPK2Dbuf__Fv();
  uVar25 = (uint)col;
  pQVar6->ul64[0] = 0x1022c00000008001;
  pQVar6->ul64[1] = 1;
  *(uint *)(pQVar6 + 1) = (uint)rgb[uVar25][0];
  iVar23 = 3;
  *(uint *)((int)pQVar6 + 0x14) = (uint)rgb[uVar25][1];
  bVar1 = rgb[uVar25][2];
  *(uint *)((int)pQVar6 + 0x1c) = (uint)alp;
  *(uint *)((int)pQVar6 + 0x18) = (uint)bVar1;
  *(undefined8 *)((int)pQVar6 + 0x28) = 4;
  pQVar6[2].ul64[0] = uVar24 | 0x1022c00000008000;
  if (0 < (long)uVar24) {
    paiVar22 = nci;
    pQVar12 = pQVar6 + 3;
    do {
      bVar3 = 1 < lVar21;
      uVar9 = 0x8000;
      lVar21 = (long)((int)lVar21 + 1);
      pQVar12->ui32[0] = (*paiVar22)[0];
      if (bVar3) {
        uVar9 = 0;
      }
      iVar23 = iVar23 + 1;
      pQVar12->ui32[1] = (*paiVar22)[1];
      piVar5 = *paiVar22;
      paiVar22 = paiVar22[1];
      pQVar12->ui32[2] = piVar5[2];
      pQVar12->ui32[3] = uVar9;
      pQVar12 = pQVar12 + 1;
    } while (lVar21 < (long)uVar24);
  }
  pQVar6[iVar23].ul64[1] = 0x4444441;
  iVar10 = (uVar25 * 2 + (uint)col) * 2;
  pQVar6[iVar23].ul64[0] = 0x7022c00000008001;
  pQVar12 = pQVar6 + iVar23 + 1;
  *(uint *)pQVar12 = (uint)rgb[iVar10 + 3];
  pQVar13 = pQVar6 + iVar23 + 2;
  pQVar12->ui32[1] = (uint)rgb[iVar10 + 4];
  pQVar14 = pQVar6 + iVar23 + 3;
  bVar1 = rgb[iVar10 + 5];
  pQVar15 = pQVar6 + iVar23 + 4;
  pQVar12->ui32[3] = (uint)alp;
  *(uint *)(pQVar12->ul64 + 1) = (uint)bVar1;
  pQVar12 = pQVar6 + iVar23 + 5;
  pQVar17 = pQVar6 + iVar23 + 6;
  pQVar13->iv[0] = tri[0][0];
  pQVar18 = pQVar6 + iVar23 + 7;
  pQVar13->iv[1] = tri[0][1];
  pQVar13->ui32[3] = 0x8000;
  pQVar13->iv[2] = tri[0][2];
  pQVar14->iv[0] = tri[1][0];
  pQVar14->iv[1] = tri[1][1];
  pQVar14->ui32[3] = 0x8000;
  pQVar14->iv[2] = tri[1][2];
  pQVar15->iv[0] = tri[2][0];
  pQVar15->iv[1] = tri[2][1];
  pQVar15->ui32[3] = 0;
  pQVar15->iv[2] = tri[2][2];
  pQVar12->iv[0] = tri[0][0];
  pQVar12->iv[1] = tri[0][1];
  pQVar12->ui32[3] = 0x8000;
  pQVar12->iv[2] = tri[0][2];
  pQVar17->iv[0] = tri[3][0];
  pQVar17->iv[1] = tri[3][1];
  pQVar17->ui32[3] = 0x8000;
  pQVar17->iv[2] = tri[3][2];
  pQVar18->iv[0] = tri[2][0];
  pQVar18->iv[1] = tri[2][1];
  pQVar18->ui32[3] = 0;
  pQVar18->iv[2] = tri[2][2];
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar6 + iVar23 + 8);
  return;
}

void Draw3DSquare(float *mpos1, float *mpos2, float *mpos3, float *mpos4, u_char r, u_char g, u_char b, u_char a) {
	int i;
	int clip;
	float wlm[4][4];
	float slm[4][4];
	float fzero[4];
	sceVu0IVECTOR ivec[4];
	Q_WORDDATA *pbuf;
	DRAW_ENV_NOTEX env;
	
  GRA3DCAMERA *pGVar1;
  int iVar2;
  Q_WORDDATA *pQVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int (*paiVar7) [4];
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [4] [4];
  _DRAW_ENV_NOTEX env;
  
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  sceVu0UnitMatrix(wlm);
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  wlm[0][0] = 25.0;
  sceVu0TransMatrix(wlm,wlm,mpos1);
  pGVar1 = gra3dGetCamera__Fv();
  sceVu0MulMatrix(slm,pGVar1->matWorldScreen,wlm);
  paiVar7 = ivec;
  sceVu0RotTransPers(paiVar7,slm,fzero,0);
  sceVu0UnitMatrix(wlm);
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  wlm[0][0] = 25.0;
  sceVu0TransMatrix(wlm,wlm,mpos2);
  pGVar1 = gra3dGetCamera__Fv();
  sceVu0MulMatrix(slm,pGVar1->matWorldScreen,wlm);
  sceVu0RotTransPers(ivec[1],slm,fzero,0);
  sceVu0UnitMatrix(wlm);
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  wlm[0][0] = 25.0;
  sceVu0TransMatrix(wlm,wlm,mpos3);
  pGVar1 = gra3dGetCamera__Fv();
  sceVu0MulMatrix(slm,pGVar1->matWorldScreen,wlm);
  sceVu0RotTransPers(ivec[2],slm,fzero,0);
  sceVu0UnitMatrix(wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix(wlm,wlm,mpos4);
  pGVar1 = gra3dGetCamera__Fv();
  sceVu0MulMatrix(slm,pGVar1->matWorldScreen,wlm);
  sceVu0RotTransPers(ivec[3],slm,fzero,0);
  uVar5 = 0;
  uVar4 = 0;
  piVar6 = ivec + 2;
  iVar2 = ivec[0][0];
  while( true ) {
    paiVar7 = paiVar7[1];
    if (64000 < iVar2 - 0x300U) {
      uVar5 = uVar5 | 1 << ((uVar4 & 7) << 2);
    }
    if (piVar6[-1] - 0x300U < 0xfa01) {
      iVar2 = *piVar6;
    }
    else {
      uVar5 = uVar5 | 2 << ((uVar4 & 7) << 2);
      iVar2 = *piVar6;
    }
    piVar6 = piVar6 + 4;
    if (0xffffff0 < iVar2 - 0xfU) {
      uVar5 = uVar5 | 4 << ((uVar4 & 7) << 2);
    }
    uVar4 = uVar4 + 1;
    if (3 < (int)uVar4) break;
    iVar2 = (*paiVar7)[0];
  }
  if (uVar5 == 0) {
    env.alpha = DAT_003b8898;
    env.test = DAT_003b88a0;
    env.zbuf = DAT_003b88a8;
    SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&env);
    pQVar3 = GetPK2Dbuf__Fv();
    pQVar3->ul64[0] = 0x5022400000008001;
    pQVar3->ul64[1] = 0x44441;
    *(uint *)((int)pQVar3 + 0x1c) = (uint)a;
    *(uint *)(pQVar3 + 1) = (uint)r;
    *(uint *)((int)pQVar3 + 0x14) = (uint)g;
    *(uint *)((int)pQVar3 + 0x18) = (uint)b;
    pQVar3[2].iv[0] = ivec[1][0];
    *(int *)((int)pQVar3 + 0x24) = ivec[1][1];
    *(undefined4 *)((int)pQVar3 + 0x2c) = 0;
    *(int *)((int)pQVar3 + 0x28) = ivec[1][2];
    pQVar3[3].iv[0] = ivec[0][0];
    *(int *)((int)pQVar3 + 0x34) = ivec[0][1];
    *(undefined4 *)((int)pQVar3 + 0x3c) = 0;
    *(int *)((int)pQVar3 + 0x38) = ivec[0][2];
    pQVar3[4].iv[0] = ivec[2][0];
    *(int *)((int)pQVar3 + 0x44) = ivec[2][1];
    *(undefined4 *)((int)pQVar3 + 0x4c) = 0;
    *(int *)((int)pQVar3 + 0x48) = ivec[2][2];
    pQVar3[5].iv[0] = ivec[3][0];
    *(int *)((int)pQVar3 + 0x54) = ivec[3][1];
    *(int *)((int)pQVar3 + 0x58) = ivec[3][2];
    *(undefined4 *)((int)pQVar3 + 0x5c) = 0;
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar3 + 6);
  }
  return;
}

void DrawCrossLineA(float *bpos, u_char alp) {
	float mpos1[4];
	float mpos2[4];
	
  float mpos1 [4];
  float mpos2 [4];
  
                    /* inlined from graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from graph3d/g3dxVu0.h */
  mpos1[2] = bpos[2];
  mpos1[3] = bpos[3];
  mpos1[1] = (float)((ulong)*(undefined8 *)bpos >> 0x20);
  mpos2[2] = bpos[2];
  mpos2[3] = bpos[3];
  mpos2[1] = (float)((ulong)*(undefined8 *)bpos >> 0x20);
                    /* end of inlined section */
  mpos2[0] = *bpos + 20.0;
  mpos1[0] = *bpos - 20.0;
  DrawLine__FPCfUcUcUcUcT0UcUcUcUc(mpos1,0x80,0x80,0x80,alp,mpos2,0x80,0x80,0x80,(uint)alp);
                    /* inlined from graph3d/g3dxVu0.h */
  mpos1[2] = bpos[2];
  mpos1[3] = bpos[3];
  mpos1[0] = (float)*(undefined8 *)bpos;
  mpos2[2] = bpos[2];
  mpos2[3] = bpos[3];
  mpos2[0] = (float)*(undefined8 *)bpos;
                    /* end of inlined section */
  mpos2[1] = bpos[1] + 20.0;
  mpos1[1] = bpos[1] - 20.0;
  DrawLine__FPCfUcUcUcUcT0UcUcUcUc(mpos1,0x80,0x80,0x80,alp,mpos2,0x80,0x80,0x80,(uint)alp);
                    /* inlined from graph3d/g3dxVu0.h */
  mpos1[3] = bpos[3];
  mpos1[0] = (float)*(undefined8 *)bpos;
  mpos1[1] = (float)((ulong)*(undefined8 *)bpos >> 0x20);
  mpos2[3] = bpos[3];
  mpos2[0] = (float)*(undefined8 *)bpos;
  mpos2[1] = (float)((ulong)*(undefined8 *)bpos >> 0x20);
                    /* end of inlined section */
  mpos2[2] = bpos[2] + 20.0;
  mpos1[2] = bpos[2] - 20.0;
  DrawLine__FPCfUcUcUcUcT0UcUcUcUc(mpos1,0x80,0x80,0x80,alp,mpos2,0x80,0x80,0x80,(uint)alp);
  return;
}

void DrawCrossLine(float *bpos) {
  DrawCrossLineA__FPCfUc(bpos,0x80);
  return;
}

static void DrawLinePacket(float *mpos1, u_char r1, u_char g1, u_char b1, u_char a1, float *mpos2, u_char r2, u_char g2, int b2, int a2, DRAW_ENV_NOTEX *envp) {
	u_char b2;
	u_char a2;
	int i;
	int clip;
	float wlm[4][4];
	float slm[4][4];
	float fzero[4];
	sceVu0IVECTOR ivec[2];
	Q_WORDDATA *pbuf;
	GRA3DCAMERA *pCam;
	
  GRA3DCAMERA *pGVar1;
  int iVar2;
  Q_WORDDATA *pQVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int (*paiVar7) [4];
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [2] [4];
  
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  pGVar1 = gra3dGetCamera__Fv();
  sceVu0UnitMatrix(wlm);
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  wlm[0][0] = 25.0;
  sceVu0TransMatrix(wlm,wlm,mpos1);
  sceVu0MulMatrix(slm,pGVar1->matWorldScreen,wlm);
  paiVar7 = ivec;
  sceVu0RotTransPers(paiVar7,slm,fzero,0);
  sceVu0UnitMatrix(wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix(wlm,wlm,mpos2);
  sceVu0MulMatrix(slm,pGVar1->matWorldScreen,wlm);
  sceVu0RotTransPers(ivec[1],slm,fzero,0);
  uVar5 = 0;
  uVar4 = 0;
  piVar6 = ivec + 2;
  iVar2 = ivec[0][0];
  while( true ) {
    paiVar7 = paiVar7[1];
    if (64000 < iVar2 - 0x300U) {
      uVar5 = uVar5 | 1 << ((uVar4 & 7) << 2);
    }
    if (piVar6[-1] - 0x300U < 0xfa01) {
      iVar2 = *piVar6;
    }
    else {
      uVar5 = uVar5 | 2 << ((uVar4 & 7) << 2);
      iVar2 = *piVar6;
    }
    piVar6 = piVar6 + 4;
    if (0xffff0 < iVar2 - 0xfU) {
      uVar5 = uVar5 | 4 << ((uVar4 & 7) << 2);
    }
    uVar4 = uVar4 + 1;
    if (1 < (int)uVar4) break;
    iVar2 = (*paiVar7)[0];
  }
  if (uVar5 == 0) {
    SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,envp);
    pQVar3 = GetPK2Dbuf__Fv();
    Reserve2DPacket__FUi(0x10);
    pQVar3->ul64[1] = 0x4141;
    pQVar3->ul64[0] = 0x4024c00000008001;
    *(uint *)((int)pQVar3 + 0x1c) = (uint)a1;
    *(uint *)(pQVar3 + 1) = (uint)r1;
    *(uint *)((int)pQVar3 + 0x14) = (uint)g1;
    *(uint *)((int)pQVar3 + 0x18) = (uint)b1;
    pQVar3[2].iv[0] = ivec[0][0];
    *(int *)((int)pQVar3 + 0x24) = ivec[0][1];
    *(undefined4 *)((int)pQVar3 + 0x2c) = 0;
    *(int *)((int)pQVar3 + 0x28) = ivec[0][2];
    *(uint *)((int)pQVar3 + 0x3c) = a2 & 0xff;
    *(uint *)(pQVar3 + 3) = (uint)r2;
    *(uint *)((int)pQVar3 + 0x34) = (uint)g2;
    *(uint *)((int)pQVar3 + 0x38) = b2 & 0xff;
    pQVar3[4].iv[0] = ivec[1][0];
    *(int *)((int)pQVar3 + 0x44) = ivec[1][1];
    *(undefined4 *)((int)pQVar3 + 0x4c) = 0;
    *(int *)((int)pQVar3 + 0x48) = ivec[1][2];
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar3 + 5);
  }
  return;
}

void DrawLine(float *mpos1, u_char r1, u_char g1, u_char b1, u_char a1, float *mpos2, u_char r2, u_char g2, int b2, int a2) {
	DRAW_ENV_NOTEX env;
	
  _DRAW_ENV_NOTEX env;
  
  env.alpha = DAT_003b8898;
  env.test = DAT_003b88a0;
  env.zbuf = DAT_003b88a8;
  DrawLinePacket__FPCfUcUcUcUcT0UcUcUcUcPC15_DRAW_ENV_NOTEX
            (mpos1,r1,g1,b1,a1,mpos2,r2,g2,b2 & 0xff,a2 & 0xff,&env);
  return;
}

void DrawLineTestOff(float *mpos1, u_char r1, u_char g1, u_char b1, u_char a1, float *mpos2, u_char r2, u_char g2, int b2, int a2) {
	DRAW_ENV_NOTEX env;
	
  _DRAW_ENV_NOTEX env;
  
  env.alpha = DAT_003b88b0;
  env.test = DAT_003b88b8;
  env.zbuf = DAT_003b88c0;
  DrawLinePacket__FPCfUcUcUcUcT0UcUcUcUcPC15_DRAW_ENV_NOTEX
            (mpos1,r1,g1,b1,a1,mpos2,r2,g2,b2 & 0xff,a2 & 0xff,&env);
  return;
}

void DrawCrossLineLast(float *bpos) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 68,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 119,
		/* [4] = */ 67,
		/* [5] = */ 114,
		/* [6] = */ 111,
		/* [7] = */ 115,
		/* [8] = */ 115,
		/* [9] = */ 76,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 101,
		/* [13] = */ 76,
		/* [14] = */ 97,
		/* [15] = */ 115,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (9 < save_cross_line_cnt) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("DrawCrossLineLast() OVER");
  }
                    /* inlined from graph3d/g3dxVu0.h */
  iVar2 = save_cross_line_cnt;
  uVar1 = *(undefined8 *)bpos;
  fVar3 = bpos[2];
  fVar4 = bpos[3];
  save_cross_line_pos[save_cross_line_cnt][0] = (float)uVar1;
  save_cross_line_pos[iVar2][1] = (float)((ulong)uVar1 >> 0x20);
  save_cross_line_pos[iVar2][2] = fVar3;
  save_cross_line_pos[iVar2][3] = fVar4;
                    /* end of inlined section */
  save_cross_line_cnt = save_cross_line_cnt + 1;
  return;
}

void DrawCrossLineLastReal() {
	int i;
	
  float *pfVar1;
  float (*pafVar2) [4];
  int iVar3;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  
  iVar3 = 0;
  if (0 < save_cross_line_cnt) {
    pafVar2 = save_cross_line_pos;
    do {
                    /* inlined from graph3d/g3dxVu0.h */
      local_58 = (*pafVar2)[2];
      fStack_54 = (*pafVar2)[3];
      local_5c = (float)((ulong)*(undefined8 *)*pafVar2 >> 0x20);
      local_48 = (*pafVar2)[2];
      fStack_44 = (*pafVar2)[3];
      local_4c = (float)((ulong)*(undefined8 *)*pafVar2 >> 0x20);
                    /* end of inlined section */
      local_50 = (*pafVar2)[0] + 20.0;
      local_60 = (*pafVar2)[0] - 20.0;
      DrawLineTestOff__FPfUcUcUcUcT0UcUcUcUc
                (&local_60,0x80,0x80,0x80,0x80,&local_50,0x80,0x80,0x80,0x80);
                    /* inlined from graph3d/g3dxVu0.h */
      local_58 = (*pafVar2)[2];
      fStack_54 = (*pafVar2)[3];
      local_60 = (float)*(undefined8 *)*pafVar2;
      local_48 = (*pafVar2)[2];
      fStack_44 = (*pafVar2)[3];
      local_50 = (float)*(undefined8 *)*pafVar2;
                    /* end of inlined section */
      local_4c = (*pafVar2)[1] + 20.0;
      local_5c = (*pafVar2)[1] - 20.0;
      DrawLineTestOff__FPfUcUcUcUcT0UcUcUcUc
                (&local_60,0x80,0x80,0x80,0x80,&local_50,0x80,0x80,0x80,0x80);
                    /* inlined from graph3d/g3dxVu0.h */
      fStack_54 = (*pafVar2)[3];
      local_60 = (float)*(undefined8 *)*pafVar2;
      local_5c = (float)((ulong)*(undefined8 *)*pafVar2 >> 0x20);
      fStack_44 = (*pafVar2)[3];
      local_50 = (float)*(undefined8 *)*pafVar2;
      local_4c = (float)((ulong)*(undefined8 *)*pafVar2 >> 0x20);
      pfVar1 = *pafVar2;
                    /* end of inlined section */
      pafVar2 = pafVar2[1];
      local_48 = pfVar1[2] + 20.0;
      local_58 = pfVar1[2] - 20.0;
      iVar3 = iVar3 + 1;
      DrawLineTestOff__FPfUcUcUcUcT0UcUcUcUc
                (&local_60,0x80,0x80,0x80,0x80,&local_50,0x80,0x80,0x80,0x80);
    } while (iVar3 < save_cross_line_cnt);
  }
  save_cross_line_cnt = 0;
  return;
}

void SetSquareS(int pri, float x1, float y1, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
  SetSquare__FiffffffffUcUcUcUc(pri,x1,y1,x1,y4,x4,y1,x4,y4,r,g,b,a);
  return;
}

void SetSquare(int pri, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
	int x[4];
	int y[4];
	int z;
	int mpri;
	float div;
	Q_WORDDATA *pbuf;
	DRAW_ENV_NOTEX env;
	
  Q_WORDDATA *pQVar1;
  uint pri_00;
  int iVar2;
  float fVar3;
  int x [4];
  int y [4];
  _DRAW_ENV_NOTEX env;
  
  fVar3 = 2.0;
  if (g_bInterlace == '\0') {
    fVar3 = 1.0;
  }
  pri_00 = 0x10;
  if (0 < pri) {
    pri_00 = pri;
  }
  Reserve2DPacket__FUi(pri_00);
  env.alpha = (ulong)a << 0x20 | 100;
  env.test = 0x5000d;
  env.zbuf = 0xa000118;
  iVar2 = 0xfffff - (pri_00 & 0xfffff);
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&env);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x5022400000008001;
  pQVar1->ul64[1] = 0x44441;
  *(undefined4 *)((int)pQVar1 + 0x1c) = 0x80;
  *(uint *)(pQVar1 + 1) = (uint)r;
  *(uint *)((int)pQVar1 + 0x14) = (uint)g;
  *(uint *)((int)pQVar1 + 0x18) = (uint)b;
  pQVar1[2].ui32[0] = (int)((x1 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x28) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  *(int *)((int)pQVar1 + 0x24) = (int)((y1 / fVar3 + 2048.0) * 16.0);
  pQVar1[3].ui32[0] = (int)((x2 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x38) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0;
  *(int *)((int)pQVar1 + 0x34) = (int)((y2 / fVar3 + 2048.0) * 16.0);
  pQVar1[4].ui32[0] = (int)((x3 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x48) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x4c) = 0;
  *(int *)((int)pQVar1 + 0x44) = (int)((y3 / fVar3 + 2048.0) * 16.0);
  pQVar1[5].ui32[0] = (int)((x4 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x58) = iVar2;
  *(int *)((int)pQVar1 + 0x54) = (int)((y4 / fVar3 + 2048.0) * 16.0);
  *(undefined4 *)((int)pQVar1 + 0x5c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 6);
  return;
}

void SetSquare2s(int pri, float x1, float y1, float x4, float y4, u_char r1, u_char g1, u_char b1, u_char r2, u_char g2, u_char b2, u_char a) {
	int x[4];
	int y[4];
	int z;
	int mpri;
	float div;
	Q_WORDDATA *pbuf;
	
  Q_WORDDATA *pQVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  int x [4];
  int y [4];
  _DRAW_ENV_NOTEX local_b0;
  uint local_90;
  
  fVar7 = 2.0;
  local_90 = (uint)b2;
  if (g_bInterlace == '\0') {
    fVar7 = 1.0;
  }
  uVar3 = 0x10;
  if (0 < pri) {
    uVar3 = pri;
  }
  Reserve2DPacket__FUi(uVar3);
  local_b0.alpha = (ulong)a << 0x20 | 100;
  local_b0.test = 0x5000d;
  local_b0.zbuf = 0x10a000118;
  uVar6 = (uint)((x1 + 2048.0) * 16.0);
  iVar2 = 0xfffff - (uVar3 & 0xfffff);
  uVar3 = (uint)((x4 + 2048.0) * 16.0);
  iVar4 = (int)((y4 / fVar7 + 2048.0) * 16.0);
  iVar5 = (int)((y1 / fVar7 + 2048.0) * 16.0);
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_b0);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x8026400000008001;
  pQVar1->ul64[1] = 0x41414141;
  *(undefined4 *)((int)pQVar1 + 0x1c) = 0x80;
  pQVar1[1].ui32[0] = (uint)r1;
  *(uint *)((int)pQVar1 + 0x14) = (uint)g1;
  *(uint *)((int)pQVar1 + 0x18) = (uint)b1;
  pQVar1[2].ui32[0] = uVar6;
  *(int *)((int)pQVar1 + 0x28) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  *(int *)((int)pQVar1 + 0x24) = iVar5;
  pQVar1[3].ui32[0] = (uint)r1;
  *(uint *)((int)pQVar1 + 0x34) = (uint)g1;
  *(uint *)((int)pQVar1 + 0x38) = (uint)b1;
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0x80;
  pQVar1[4].ui32[0] = uVar3;
  *(int *)((int)pQVar1 + 0x48) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x4c) = 0;
  *(int *)((int)pQVar1 + 0x44) = iVar5;
  pQVar1[5].ui32[0] = (uint)r2;
  *(uint *)((int)pQVar1 + 0x54) = (uint)g2;
  *(undefined4 *)((int)pQVar1 + 0x5c) = 0x80;
  *(uint *)((int)pQVar1 + 0x58) = local_90;
  pQVar1[6].ui32[0] = uVar6;
  *(int *)((int)pQVar1 + 0x68) = iVar2;
  *(int *)((int)pQVar1 + 100) = iVar4;
  *(undefined4 *)((int)pQVar1 + 0x6c) = 0;
  pQVar1[7].ui32[0] = (uint)r2;
  *(uint *)((int)pQVar1 + 0x74) = (uint)g2;
  *(undefined4 *)((int)pQVar1 + 0x7c) = 0x80;
  *(uint *)((int)pQVar1 + 0x78) = local_90;
  pQVar1[8].ui32[0] = uVar3;
  *(int *)((int)pQVar1 + 0x88) = iVar2;
  *(int *)((int)pQVar1 + 0x84) = iVar4;
  *(undefined4 *)((int)pQVar1 + 0x8c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 9);
  return;
}

void SetSquareZ(int pri, float x1, float y1, float x4, float y4, int z) {
	int x[4];
	int y[4];
	float div;
	Q_WORDDATA *pbuf;
	DRAW_ENV_NOTEX env;
	
  Q_WORDDATA *pQVar1;
  float fVar2;
  int x [4];
  int y [4];
  _DRAW_ENV_NOTEX env;
  
  fVar2 = 2.0;
  if (g_bInterlace == '\0') {
    fVar2 = 1.0;
  }
  Reserve2DPacket__FUi(0);
  env.alpha = (long)pri << 0x20 | 100;
  env.zbuf = 0x10a000118;
  env.test = 0x50003;
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&env);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x3023400000008001;
  pQVar1->ul64[1] = 0x441;
  *(undefined4 *)((int)pQVar1 + 0x1c) = 0x80;
  pQVar1[1].ui32[0] = 0x80;
  *(undefined4 *)((int)pQVar1 + 0x14) = 0x80;
  *(undefined4 *)((int)pQVar1 + 0x18) = 0x80;
  pQVar1[2].ui32[0] = (int)((x1 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x28) = z;
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  *(int *)((int)pQVar1 + 0x24) = (int)((y1 / fVar2 + 2048.0) * 16.0);
  pQVar1[3].ui32[0] = (int)((x4 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x38) = z;
  *(int *)((int)pQVar1 + 0x34) = (int)((y4 / fVar2 + 2048.0) * 16.0);
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 4);
  return;
}

void SetSquareSN(int pri, float x1, float y1, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
  SetSquare__FiffffffffUcUcUcUc(pri,x1,y1,x1,y4,x4,y1,x4,y4,r,g,b,a);
  return;
}

void SetSquareN(int pri, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, u_char r, u_char g, u_char b, u_char a) {
  return;
}

void SetTriangle(int pri, float x1, float y1, float x2, float y2, float x3, float y3, u_char r, u_char g, u_char b, u_char a) {
	int x[3];
	int y[3];
	int z;
	int mpri;
	float div;
	Q_WORDDATA *pbuf;
	DRAW_ENV_NOTEX env;
	
  Q_WORDDATA *pQVar1;
  uint pri_00;
  int iVar2;
  float fVar3;
  int x [3];
  int y [3];
  _DRAW_ENV_NOTEX env;
  
  fVar3 = 2.0;
  if (g_bInterlace == '\0') {
    fVar3 = 1.0;
  }
  pri_00 = 0x10;
  if (0 < pri) {
    pri_00 = pri;
  }
  Reserve2DPacket__FUi(pri_00);
  env.alpha = (ulong)a << 0x20 | 100;
  env.test = 0x5000d;
  env.zbuf = 0x10a000118;
  iVar2 = 0xfffff - (pri_00 & 0xfffff);
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&env);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x4022400000008001;
  pQVar1->ul64[1] = 0x4441;
  *(undefined4 *)((int)pQVar1 + 0x1c) = 0x80;
  *(uint *)(pQVar1 + 1) = (uint)r;
  *(uint *)((int)pQVar1 + 0x14) = (uint)g;
  *(uint *)((int)pQVar1 + 0x18) = (uint)b;
  pQVar1[2].ui32[0] = (int)((x1 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x28) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  *(int *)((int)pQVar1 + 0x24) = (int)((y1 / fVar3 + 2048.0) * 16.0);
  pQVar1[3].ui32[0] = (int)((x2 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x38) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0;
  *(int *)((int)pQVar1 + 0x34) = (int)((y2 / fVar3 + 2048.0) * 16.0);
  pQVar1[4].ui32[0] = (int)((x3 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x48) = iVar2;
  *(int *)((int)pQVar1 + 0x44) = (int)((y3 / fVar3 + 2048.0) * 16.0);
  *(undefined4 *)((int)pQVar1 + 0x4c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 5);
  return;
}

void SetTriangleZ(int pri, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, u_char r, u_char g, u_char b, u_char a) {
	float z3;
	int x[3];
	int y[3];
	float div;
	Q_WORDDATA *pbuf;
	int ndpkt;
	DRAW_ENV_NOTEX env;
	
  Q_WORDDATA *pQVar1;
  uint uVar2;
  float fVar3;
  int x [3];
  int y [3];
  _DRAW_ENV_NOTEX env;
  
  fVar3 = 2.0;
  if (g_bInterlace == '\0') {
    fVar3 = 1.0;
  }
  if (pri < 1) {
    pri = 0x10;
  }
  Reserve2DPacket__FUi(pri);
  env.alpha = (ulong)b << 0x20 | 100;
  env.test = 0x50000;
  env.zbuf = 0xa000118;
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&env);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[1] = 0x4441;
  uVar2 = (uint)z1;
  pQVar1->ul64[0] = 0x4022400000008001;
  *(undefined4 *)((int)pQVar1 + 0x1c) = 0x80;
  pQVar1[1].ui32[0] = (uint)z3 & 0xff;
  *(uint *)((int)pQVar1 + 0x14) = (uint)r;
  *(uint *)((int)pQVar1 + 0x18) = (uint)g;
  pQVar1[2].ui32[0] = (int)((x1 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x24) = (int)((y1 / fVar3 + 2048.0) * 16.0);
  if (2.147484e+09 <= z1) {
    uVar2 = (int)(z1 - 2.147484e+09) | 0x80000000;
  }
  *(uint *)((int)pQVar1 + 0x28) = uVar2;
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  pQVar1[3].ui32[0] = (int)((x2 + 2048.0) * 16.0);
  uVar2 = (uint)z2;
  *(int *)((int)pQVar1 + 0x34) = (int)((y2 / fVar3 + 2048.0) * 16.0);
  if (2.147484e+09 <= z2) {
    uVar2 = (int)(z2 - 2.147484e+09) | 0x80000000;
  }
  *(uint *)((int)pQVar1 + 0x38) = uVar2;
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0;
  pQVar1[4].ui32[0] = (int)((x3 + 2048.0) * 16.0);
  uVar2 = (uint)param_15;
  *(int *)((int)pQVar1 + 0x44) = (int)((y3 / fVar3 + 2048.0) * 16.0);
  if (2.147484e+09 <= param_15) {
    uVar2 = (int)(param_15 - 2.147484e+09) | 0x80000000;
  }
  *(uint *)((int)pQVar1 + 0x48) = uVar2;
  *(undefined4 *)((int)pQVar1 + 0x4c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 5);
  return;
}

void SetLine(int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
	int x[2];
	int y[2];
	int z;
	int mpri;
	float div;
	Q_WORDDATA *pbuf;
	
  Q_WORDDATA *pQVar1;
  uint pri_00;
  int iVar2;
  float fVar3;
  int x [2];
  int y [2];
  _DRAW_ENV_NOTEX local_90;
  
  fVar3 = 0.5;
  if (g_bInterlace == '\0') {
    fVar3 = 1.0;
  }
  pri_00 = 0x10;
  if (0 < pri) {
    pri_00 = pri;
  }
  Reserve2DPacket__FUi(pri_00);
  local_90.alpha = (ulong)a << 0x20 | 100;
  local_90.zbuf = 0x10a000118;
  local_90.test = 0x5000d;
  iVar2 = 0xfffff - (pri_00 & 0xfffff);
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_90);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x3020c00000008001;
  pQVar1->ul64[1] = 0x441;
  *(undefined4 *)((int)pQVar1 + 0x1c) = 0x80;
  *(uint *)(pQVar1 + 1) = (uint)r;
  *(uint *)((int)pQVar1 + 0x14) = (uint)g;
  *(uint *)((int)pQVar1 + 0x18) = (uint)b;
  pQVar1[2].ui32[0] = (int)((x1 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x28) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  *(int *)((int)pQVar1 + 0x24) = (int)((y1 * fVar3 + 2048.0) * 16.0);
  pQVar1[3].ui32[0] = (int)((x2 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x38) = iVar2;
  *(int *)((int)pQVar1 + 0x34) = (int)((y2 * fVar3 + 2048.0) * 16.0);
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 4);
  return;
}

void SetLine2(int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a) {
	u_char rr;
	u_char gg;
	u_char bb;
	float d;
	float dw;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = g3dAtanf__Ff((x1 - x2) / (y1 - y2));
  fVar1 = (fVar1 * 180.0) / DAT_003ee41c;
  if ((45.0 < fVar1) || (fVar1 < -45.0)) {
    fVar1 = (float)(uint)r * 0.5;
    if (2.147484e+09 <= fVar1) {
      fVar1 = fVar1 - 2.147484e+09;
    }
    fVar2 = (float)(uint)g * 0.5;
    r = (uchar)(int)fVar1;
    if (2.147484e+09 <= fVar2) {
      fVar2 = fVar2 - 2.147484e+09;
    }
    fVar1 = (float)(uint)b * 0.5;
    b = (uchar)(int)fVar1;
    g = (uchar)(int)fVar2;
  }
  else {
    if ((fVar1 <= 30.0) && (-30.0 <= fVar1)) goto LAB_001c33a8;
    if (fVar1 < 0.0) {
      fVar1 = -fVar1;
    }
    fVar2 = ((45.0 - fVar1) * 0.5) / 15.0;
    fVar1 = (float)(uint)r * (fVar2 + 0.5);
    if (2.147484e+09 <= fVar1) {
      fVar1 = fVar1 - 2.147484e+09;
    }
    fVar3 = (float)(uint)g * (fVar2 + 0.5);
    r = (uchar)(int)fVar1;
    if (2.147484e+09 <= fVar3) {
      fVar3 = fVar3 - 2.147484e+09;
    }
    fVar1 = (float)(uint)b * (fVar2 + 0.5);
    b = (uchar)(int)fVar1;
    g = (uchar)(int)fVar3;
  }
  if (2.147484e+09 <= fVar1) {
    b = (uchar)(int)(fVar1 - 2.147484e+09);
  }
LAB_001c33a8:
  SetLine__FiffffUcUcUcUc(pri,x1,y1,x2,y2,r,g,b,a);
  return;
}

void SetLine2PC(int pri, float x1, float y1, u_char r1, u_char g1, u_char b1, float x2, float y2, u_char r2, u_char g2, u_char b2, u_char a) {
	int x[2];
	int y[2];
	int z;
	int mpri;
	float div;
	Q_WORDDATA *pbuf;
	
  Q_WORDDATA *pQVar1;
  int iVar2;
  uint pri_00;
  float fVar3;
  int x [2];
  int y [2];
  _DRAW_ENV_NOTEX local_a0;
  
  fVar3 = 2.0;
  if (g_bInterlace == '\0') {
    fVar3 = 1.0;
  }
  pri_00 = 0x10;
  if (0 < pri) {
    pri_00 = pri;
  }
  Reserve2DPacket__FUi(pri_00);
  local_a0.alpha = (ulong)a << 0x20 | 100;
  local_a0.test = 0x5000d;
  local_a0.zbuf = 0x10a000118;
  iVar2 = 0xfffff - (pri_00 & 0xfffff);
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_a0);
  pQVar1 = GetPK2Dbuf__Fv();
  pQVar1->ul64[0] = 0x4024c00000008001;
  pQVar1->ul64[1] = 0x4141;
  *(uint *)(pQVar1 + 1) = (uint)r1;
  *(uint *)((int)pQVar1 + 0x14) = (uint)g1;
  *(uint *)((int)pQVar1 + 0x18) = (uint)b1;
  *(undefined4 *)((int)pQVar1 + 0x1c) = 0x80;
  pQVar1[2].ui32[0] = (int)((x1 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x28) = iVar2;
  *(undefined4 *)((int)pQVar1 + 0x2c) = 0;
  *(int *)((int)pQVar1 + 0x24) = (int)((y1 / fVar3 + 2048.0) * 16.0);
  *(uint *)(pQVar1 + 3) = (uint)r2;
  *(uint *)((int)pQVar1 + 0x34) = (uint)g2;
  *(uint *)((int)pQVar1 + 0x38) = (uint)b2;
  *(undefined4 *)((int)pQVar1 + 0x3c) = 0x80;
  pQVar1[4].ui32[0] = (int)((x2 + 2048.0) * 16.0);
  *(int *)((int)pQVar1 + 0x48) = iVar2;
  *(int *)((int)pQVar1 + 0x44) = (int)((y2 / fVar3 + 2048.0) * 16.0);
  *(undefined4 *)((int)pQVar1 + 0x4c) = 0;
  EndPK2Dbuf__FP10Q_WORDDATA(pQVar1 + 5);
  return;
}

void DrawPoint(float *mpos, int no) {
	int clip;
	float wlm[4][4];
	float slm[4][4];
	float fzero[4];
	sceVu0IVECTOR ivec;
	Q_WORDDATA *pbuf;
	GRA3DCAMERA *pCam;
	DRAW_ENV_NOTEX env;
	
  char cVar1;
  GRA3DCAMERA *pGVar2;
  Q_WORDDATA *pQVar3;
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [4];
  _DRAW_ENV_NOTEX env;
  
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  pGVar2 = gra3dGetCamera__Fv();
  sceVu0UnitMatrix(wlm);
  wlm[0][0] = 25.0;
  wlm[2][2] = 25.0;
  wlm[1][1] = 25.0;
  sceVu0TransMatrix(wlm,wlm,mpos);
  sceVu0MulMatrix(slm,pGVar2->matWorldScreen,wlm);
  sceVu0RotTransPers(ivec,slm,fzero,0);
  cVar1 = 0x2800 < ivec[0] - 0x6c00U;
  if (0xe00 < ivec[1] - 0x7900U) {
    cVar1 = cVar1 + '\x01';
  }
  if ((char)(cVar1 + (0xffff00 < ivec[2] - 0xffU)) == '\0') {
    env.test = DAT_003b8948;
    env.zbuf = DAT_003b8950;
    env.alpha = DAT_003b8940;
    SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&env);
    pQVar3 = GetPK2Dbuf__Fv();
    Reserve2DPacket__FUi(0x10);
    pQVar3->ul64[0] = 0x2060400000008001;
    pQVar3->ul64[1] = 0x41;
    *(undefined4 *)((int)pQVar3 + 0x1c) = 0x80;
    pQVar3[1].ui32[0] = 0xff;
    *(int *)((int)pQVar3 + 0x18) = no * 0xff;
    *(int *)((int)pQVar3 + 0x14) = no * 0xff;
    pQVar3[2].iv[0] = ivec[0];
    *(int *)((int)pQVar3 + 0x24) = ivec[1];
    *(undefined4 *)((int)pQVar3 + 0x2c) = 0;
    *(int *)((int)pQVar3 + 0x28) = ivec[2];
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar3 + 3);
  }
  return;
}

void DrawPoint2(float *mpos, u_char r, u_char g, u_char b, u_char a) {
	int clip;
	float wlm[4][4];
	float slm[4][4];
	float fzero[4];
	sceVu0IVECTOR ivec;
	Q_WORDDATA *pbuf;
	GRA3DCAMERA *pCam;
	DRAW_ENV_NOTEX env;
	
  char cVar1;
  GRA3DCAMERA *pGVar2;
  Q_WORDDATA *pQVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  float wlm [4] [4];
  float slm [4] [4];
  float fzero [4];
  int ivec [4];
  _DRAW_ENV_NOTEX env;
  
  memset(fzero,0,0x10);
  fzero[3] = 1.0;
  pGVar2 = gra3dGetCamera__Fv();
  sceVu0UnitMatrix(wlm);
                    /* inlined from graph3d/g3dxVu0.h */
  auVar4 = _lqc2(*(undefined (*) [16])mpos);
  auVar5 = _lqc2((undefined  [16])wlm[3]);
  auVar4 = _vadd(auVar5,auVar4);
  wlm[0][0] = 25.0;
  wlm[1][1] = 25.0;
  wlm[2][2] = 25.0;
  wlm[3] = (float  [4])_sqc2(auVar4);
                    /* end of inlined section */
  sceVu0MulMatrix(slm,pGVar2->matWorldScreen,wlm);
  sceVu0RotTransPers(ivec,slm,fzero,0);
  cVar1 = 0x2800 < ivec[0] - 0x6c00U;
  if (0xe00 < ivec[1] - 0x7900U) {
    cVar1 = cVar1 + '\x01';
  }
  if ((char)(cVar1 + (0xffff00 < ivec[2] - 0xffU)) == '\0') {
    env.test = DAT_003b8960;
    env.alpha = DAT_003b8958;
    env.zbuf = DAT_003b8968;
    SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&env);
    pQVar3 = GetPK2Dbuf__Fv();
    Reserve2DPacket__FUi(0x10);
    pQVar3->ul64[0] = 0x2020400000008001;
    pQVar3->ul64[1] = 0x41;
    *(uint *)((int)pQVar3 + 0x1c) = (uint)a;
    *(uint *)(pQVar3 + 1) = (uint)r;
    *(uint *)((int)pQVar3 + 0x14) = (uint)g;
    *(uint *)((int)pQVar3 + 0x18) = (uint)b;
    pQVar3[2].iv[0] = ivec[0];
    *(int *)((int)pQVar3 + 0x24) = ivec[1];
    *(undefined4 *)((int)pQVar3 + 0x2c) = 0;
    *(int *)((int)pQVar3 + 0x28) = ivec[2];
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar3 + 3);
  }
  return;
}

void DrawSphere(float f, float x, float y, float z, u_char r, u_char g, u_char b, u_char a, float *vScale) {
	int i;
	float pos1[4];
	float pos2[4];
	float m_point[30][4];
	float vdata[12][4];
	int tindices[30][2];
	int bunkatu[20][3];
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  int (*paiVar4) [2];
  int (*paiVar5) [2];
  int *piVar6;
  undefined8 *puVar7;
  float (*pafVar8) [4];
  ulong *puVar9;
  int aiVar10 [2];
  int (*paiVar11) [2];
  int *piVar12;
  int (*paiVar13) [2];
  undefined8 uVar14;
  undefined8 uVar15;
  int aiVar16 [2];
  ulong uVar17;
  undefined8 uVar18;
  int aiVar19 [2];
  ulong uVar20;
  ulong uVar21;
  float pos1 [4];
  float pos2 [4];
  float m_point [30] [4];
  float vdata [12] [4];
  int tindices [30] [2];
  int bunkatu [20] [3];
  
  puVar7 = &DAT_003b8970;
  pafVar8 = vdata;
  do {
    uVar14 = puVar7[1];
    uVar15 = puVar7[2];
    uVar18 = puVar7[3];
    *(undefined8 *)*pafVar8 = *puVar7;
    *(undefined8 *)(*pafVar8 + 2) = uVar14;
    *(undefined8 *)pafVar8[1] = uVar15;
    *(undefined8 *)(pafVar8[1] + 2) = uVar18;
    puVar7 = puVar7 + 4;
    pafVar8 = pafVar8[2];
  } while (puVar7 != &DAT_003b8a30);
  paiVar4 = (int (*) [2])&DAT_003b8a30;
  paiVar5 = tindices;
  do {
    paiVar13 = paiVar5;
    paiVar11 = paiVar4;
    aiVar10 = paiVar11[1];
    aiVar16 = paiVar11[2];
    aiVar19 = paiVar11[3];
    *paiVar13 = *paiVar11;
    paiVar13[1] = aiVar10;
    paiVar13[2] = aiVar16;
    paiVar13[3] = aiVar19;
    paiVar4 = paiVar11[4];
    paiVar5 = paiVar13[4];
  } while (paiVar11[4] != (int (*) [2])&UNK_003b8b10);
  aiVar10 = paiVar11[5];
  puVar1 = (undefined *)((int)paiVar13[4] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)_UNK_003b8b10 >> (7 - uVar2) * 8;
  paiVar13[4] = _UNK_003b8b10;
  puVar1 = (undefined *)((int)paiVar13[5] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)aiVar10 >> (7 - uVar2) * 8;
  paiVar13[5] = aiVar10;
  puVar3 = &DAT_003b8b20;
  piVar6 = (int *)bunkatu;
  do {
    piVar12 = piVar6;
    puVar9 = puVar3;
    uVar17 = puVar9[1];
    uVar20 = puVar9[2];
    uVar21 = puVar9[3];
    *(ulong *)piVar12 = *puVar9;
    *(ulong *)(piVar12 + 2) = uVar17;
    *(ulong *)(piVar12 + 4) = uVar20;
    *(ulong *)*(int (*) [3])(piVar12 + 6) = uVar21;
    puVar3 = puVar9 + 4;
    piVar6 = piVar12 + 8;
  } while (puVar9 + 4 != (ulong *)&UNK_003b8c00);
  uVar17 = puVar9[5];
  uVar2 = (uint)(undefined *)((int)piVar12 + 0x27U) & 7;
  puVar3 = (ulong *)((undefined *)((int)piVar12 + 0x27U) + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | _UNK_003b8c00 >> (7 - uVar2) * 8;
  *(ulong *)(piVar12 + 8) = _UNK_003b8c00;
  uVar2 = (uint)(undefined *)((int)piVar12 + 0x2fU) & 7;
  puVar3 = (ulong *)((undefined *)((int)piVar12 + 0x2fU) + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | uVar17 >> (7 - uVar2) * 8;
  *(ulong *)(piVar12 + 10) = uVar17;
  sceVu0ScaleVector(f,pos1,vdata[tindices[0][0]]);
  sceVu0ScaleVector(f,pos2,vdata[tindices[0][1]]);
  sceVu0AddVector(m_point,pos1,pos2);
  sceVu0ScaleVector(0x3f000000,m_point,m_point);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(m_point,m_point);
}

void DrawTube(float *p1, float *p2, float rad, u_char r, u_char g, u_char b, u_char a) {
	float vdata[16][4];
	int tindices[16][2];
	float pos11[4];
	float pos12[4];
	float pos21[4];
	float pos22[4];
	float tmp[4];
	float y_ziku[4];
	float n[4];
	float mtx[2][4][4];
	int i;
	float rot_x;
	float rot_z;
	
  undefined8 *puVar1;
  float (*pafVar2) [4];
  int (*paiVar3) [2];
  int (*paiVar4) [2];
  undefined8 uVar5;
  int aiVar6 [2];
  undefined8 uVar7;
  int aiVar8 [2];
  undefined8 uVar9;
  int aiVar10 [2];
  float fVar11;
  float vdata [16] [4];
  int tindices [16] [2];
  float pos11 [4];
  float pos12 [4];
  float pos21 [4];
  float pos22 [4];
  float tmp [4];
  float y_ziku [4];
  float n [4];
  float mtx [2] [4] [4];
  float *local_80;
  float *local_7c;
  int i;
  
  puVar1 = &DAT_003b8c10;
  pafVar2 = vdata;
  local_80 = p1;
  local_7c = p2;
  do {
    uVar5 = puVar1[1];
    uVar7 = puVar1[2];
    uVar9 = puVar1[3];
    *(undefined8 *)*pafVar2 = *puVar1;
    *(undefined8 *)(*pafVar2 + 2) = uVar5;
    *(undefined8 *)pafVar2[1] = uVar7;
    *(undefined8 *)(pafVar2[1] + 2) = uVar9;
    puVar1 = puVar1 + 4;
    pafVar2 = pafVar2[2];
  } while (puVar1 != &DAT_003b8d10);
  paiVar3 = (int (*) [2])&DAT_003b8d10;
  paiVar4 = tindices;
  do {
    aiVar6 = paiVar3[1];
    aiVar8 = paiVar3[2];
    aiVar10 = paiVar3[3];
    *paiVar4 = *paiVar3;
    paiVar4[1] = aiVar6;
    paiVar4[2] = aiVar8;
    paiVar4[3] = aiVar10;
    paiVar3 = paiVar3[4];
    paiVar4 = paiVar4[4];
  } while (paiVar3 != (int (*) [2])&DAT_003b8d90);
  fVar11 = 1.0;
  sceVu0UnitMatrix(mtx);
  sceVu0UnitMatrix(mtx[1]);
  y_ziku[0] = 0.0;
  y_ziku[2] = 0.0;
  y_ziku[3] = 0.0;
  y_ziku[1] = fVar11;
  sceVu0SubVector(tmp,local_80,local_7c);
  tmp[2] = 0.0;
  sceVu0Normalize(tmp,tmp);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(y_ziku,tmp);
}

void CaptureScreen(u_int addr) {
  LocalCopyLtoB__Fiii(0,0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20));
  return;
}

void DrawScreen(u_int pri, u_int addr, u_char r, u_char g, u_char b, u_char a) {
	SPRT_DAT2 sd;
	DISP_SPRT2 ds;
	
  SPRT_DAT2 sd;
  DISP_SPRT2 ds;
  
  LocalCopyBtoL__Fiii(0,0,0x2bc0);
  sd.tex0 = DAT_003b8d90;
  sd.u1 = (float)DAT_003b8d98;
  sd.v1 = DAT_003b8d98._4_4_;
  sd.u2 = (float)DAT_003b8da0;
  sd.v2 = DAT_003b8da0._4_4_;
  sd.w = (float)DAT_003b8da8;
  sd.h = DAT_003b8da8._4_4_;
  sd.x = (float)DAT_003b8db0;
  sd.y = DAT_003b8db0._4_4_;
  sd.pri = (int)DAT_003b8db8;
  sd.alpha = DAT_003b8db8._4_1_;
  sd._45_3_ = DAT_003b8db8._5_3_;
  CopySprDToSpr2__FP10DISP_SPRT2P9SPRT_DAT2(&ds,&sd);
  ds.alpreg = (ulong)a << 0x20 | 100;
  ds.tex0 = 0x200000026812abc0;
  ds.zbuf = 0x10a000118;
  ds.test = 0x30003;
  ds.pri = 0x10;
  ds.z = 0xfff00;
  ds.r = r;
  ds.g = g;
  ds.b = b;
  DispSprD2__FP10DISP_SPRT2(&ds);
  return;
}

void MakePacket3D(float *pa3DPos[4], int iNum, int iR, int iG, int iB, int iA, float fUX, float fUY, float fUW, float fUH, sceGsTex0 Tex0, int iZOffset) {
	int i;
	Q_WORDDATA *pbuf;
	int ndpkt;
	u_int clpz1;
	u_int clpz2;
	sceVu0IVECTOR ivec[4];
	U32DATA ts[4];
	U32DATA tt[4];
	U32DATA tq[4];
	float fTW;
	float fTH;
	GRA3DCAMERA *pCam;
	int iWrkNum;
	int ClipFlg;
	
  U32DATA UVar1;
  bool bVar2;
  int *piVar3;
  GRA3DCAMERA *pGVar4;
  Q_WORDDATA *pQVar5;
  uint uVar6;
  int (*paiVar7) [4];
  U32DATA *pUVar8;
  undefined4 uVar9;
  Q_WORDDATA *pQVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int ivec [4] [4];
  U32DATA ts [4];
  U32DATA tt [4];
  U32DATA tq [4];
  int local_b0;
  int local_ac;
  float (*local_a8) [4];
  
  uVar15 = (ulong)iNum;
  iVar16 = 4;
  fVar17 = (float)(1 << ((uint)((ulong)Tex0 >> 0x1a) & 0xf));
  fVar18 = (float)(1 << ((uint)((ulong)Tex0 >> 0x1e) & 0xf));
  pGVar4 = gra3dGetCamera__Fv();
  pQVar5 = StartDmaDirectTrans__Fv();
  pQVar5->ul64[0] = 0x1000000000008002;
  pQVar5->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar5 + 0x18) = 0x3f;
  pQVar5[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar5 + 0x28) = 6;
  pQVar5[2].ul64[0] = (ulong)Tex0;
  *(undefined8 *)((int)pQVar5 + 0x38) = 0x412;
  pQVar5[3].ul64[0] = uVar15 | 0x302a400000008000;
  if (0 < (long)uVar15) {
    local_a8 = pGVar4->matWorldScreen;
    fVar19 = fUX + fUW;
    fVar20 = fUY + fUH;
    local_b0 = iR;
    local_ac = iG;
    do {
      uVar14 = 4;
      if ((long)uVar15 < 5) {
        uVar14 = uVar15;
      }
      sceVu0RotTransPersN(ivec,local_a8,pa3DPos,uVar14,1);
      bVar2 = false;
      if (0 < (long)uVar14) {
        pUVar8 = tq;
        uVar12 = uVar14;
        paiVar7 = ivec;
        do {
          if (((uint)(*paiVar7)[0] < 0x4000) || (0xc000 < (uint)(*paiVar7)[0])) {
            bVar2 = true;
            uVar6 = (*paiVar7)[1];
          }
          else {
            uVar6 = (*paiVar7)[1];
          }
          if ((uVar6 < 0x4000) || (0xc000 < uVar6)) {
            bVar2 = true;
            uVar6 = (*paiVar7)[2];
          }
          else {
            uVar6 = (*paiVar7)[2];
          }
          if ((uVar6 == 0) || (0xffffff < uVar6)) {
            bVar2 = true;
          }
          piVar3 = *paiVar7;
          paiVar7 = paiVar7[1];
          uVar12 = (ulong)((int)uVar12 + -1);
          pUVar8->fl32 = 1.0 / (float)piVar3[3];
          pUVar8 = pUVar8 + 1;
        } while (uVar12 != 0);
      }
      ts[1].fl32 = (fVar19 * tq[1].fl32) / fVar17;
      ts[0].fl32 = ((fUX + 0.0) * tq[0].fl32) / fVar17;
      ts[2].fl32 = ((fUX + 0.0) * tq[2].fl32) / fVar17;
      ts[3].fl32 = (fVar19 * tq[3].fl32) / fVar17;
      tt[0].fl32 = ((fUY + 0.0) * tq[0].fl32) / fVar18;
      tt[1].fl32 = ((fUY + 0.0) * tq[1].fl32) / fVar18;
      tt[2].fl32 = (fVar20 * tq[2].fl32) / fVar18;
      tt[3].fl32 = (fVar20 * tq[3].fl32) / fVar18;
      if (bVar2) {
        return;
      }
      lVar13 = 0;
      if (0 < (long)uVar14) {
        pQVar10 = pQVar5 + iVar16;
        paiVar7 = ivec;
        do {
          iVar11 = (int)lVar13;
          bVar2 = 1 < lVar13;
          uVar9 = 0x8000;
          lVar13 = (long)(iVar11 + 1);
          pQVar10->ui32[0] = (uint)ts[iVar11];
          if (bVar2) {
            uVar9 = 0;
          }
          iVar16 = iVar16 + 3;
          *(U32DATA *)(pQVar10->ui32 + 1) = tt[iVar11];
          UVar1 = tq[iVar11];
          pQVar10->ui32[3] = 0;
          *(U32DATA *)(pQVar10->ui32 + 2) = UVar1;
          pQVar10[1].iv[0] = local_b0;
          *(int *)((int)pQVar10 + 0x18) = iB;
          *(int *)((int)pQVar10 + 0x14) = local_ac;
          *(int *)((int)pQVar10 + 0x1c) = iA;
          pQVar10[2].ui32[0] = (*paiVar7)[0];
          *(int *)((int)pQVar10 + 0x24) = (*paiVar7)[1];
          piVar3 = *paiVar7;
          paiVar7 = paiVar7[1];
          *(int *)((int)pQVar10 + 0x28) = (iZOffset + piVar3[2]) * 0x10;
          *(undefined4 *)((int)pQVar10 + 0x2c) = uVar9;
          pQVar10 = pQVar10 + 3;
        } while (lVar13 < (long)uVar14);
      }
      uVar15 = (ulong)((int)uVar15 + -4);
      pa3DPos = pa3DPos[4];
    } while (0 < (long)uVar15);
  }
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar5 + iVar16);
  return;
}

void MakeBillBoardPacket(float *Pos, float fWidth, float fHeight, int iR, int iG, int iB, int iA, float fUX, float fUY, float fUW, float fUH, sceGsTex0 Tex0, int iZOffset) {
	float aPos[4][4];
	float TempVec[4];
	float AddVecW[4];
	float AddVecH[4];
	GRA3DCAMERA *pCam;
	
  GRA3DCAMERA *pGVar1;
  float fVar2;
  float aPos [4] [4];
  float TempVec [4];
  float AddVecW [4];
  float AddVecH [4];
  
  fVar2 = 0.5;
  pGVar1 = gra3dGetCamera__Fv();
  sceVu0ScaleVector(fHeight * fVar2,AddVecH,0x3b4e30);
  sceVu0ScaleVector(fWidth * fVar2,AddVecW,pGVar1->matCoord);
  sceVu0SubVector(TempVec,Pos,AddVecH);
  sceVu0SubVector(aPos,TempVec,AddVecW);
  sceVu0AddVector(aPos[1],TempVec,AddVecW);
  sceVu0AddVector(TempVec,Pos,AddVecH);
  sceVu0SubVector(aPos[2],TempVec,AddVecW);
  sceVu0AddVector(aPos[3],TempVec,AddVecW);
  if (*key_now[10] == 0) {
    MakePacket3D__FPA3_fiiiiiffffG9sceGsTex0i(aPos,4,iR,iG,iB,iA,fUX,fUY,fUW,fUH,Tex0,iZOffset);
  }
  else {
    Draw3DSquare__FPfN30UcUcUcUc
              ((float *)aPos,(float *)aPos[1],(float *)aPos[2],(float *)aPos[3],(uchar)iR,(uchar)iG,
               (uchar)iB,(uchar)iA);
  }
  return;
}
