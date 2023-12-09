// STATUS: NOT STARTED

#include "effect_spr.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a81a8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0010,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0018,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void SetEffSQITex(int n, int *v, int tp, float w, float h, u_char r, u_char g, u_char b, u_char a) {
	u_char rr;
	u_char gg;
	u_char bb;
	int i;
	int tw;
	int th;
	int xx[2];
	int yy[2];
	u_long tx0;
	int ndpkt;
	Q_WORDDATA *pbuf;
	float div;
	
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Q_WORDDATA *pQVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  Q_WORDDATA *pQVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  int xx [2];
  int yy [2];
  _DRAW_ENV_5 local_90;
  uint local_60;
  
  uVar16 = (ulong)tp;
  uVar15 = (uint)g;
  uVar17 = (uint)b;
  uVar14 = (uint)r;
  fVar19 = 2.0;
  xx[1] = *v + (int)(w * 16.0);
  xx[0] = *v - (int)(w * 16.0);
  local_60 = (uint)a;
  if (g_bInterlace == '\0') {
    fVar19 = 1.0;
  }
  iVar18 = (int)((h / fVar19) * 16.0);
  yy[1] = v[1] + iVar18;
  yy[0] = v[1] - iVar18;
  iVar18 = EffWrkMonochroModeGet__Fv();
  if (iVar18 != 0) {
    uVar17 = ((uint)r + (uint)g + (uint)b) / 3 & 0xff;
    uVar14 = uVar17;
    uVar15 = uVar17;
  }
  lVar10 = 2;
  if ((uVar16 & 4) == 0) {
    lVar10 = 1;
  }
  lVar6 = 1;
  if ((uVar16 & 2) != 0) {
    lVar6 = 2;
  }
  local_90.zbuf = (uVar16 & 1) << 0x20 | 0xa000118;
  local_90.alpha = lVar6 << 2 | lVar10 << 6;
  uVar1 = effdat[n].h;
  uVar2 = effdat[n].w;
  local_90.tex1 = 0x161;
  local_90.test = 0x5000d;
  local_90.clamp = 0;
  uVar16 = effdat[n].tex0;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_90);
  pQVar4 = StartDmaDirectTrans__Fv();
  Reserve2DPacket__FUi(0x10);
  pQVar4->ul64[0] = 0x1000000000008002;
  pQVar4->ul64[1] = 0xe;
  iVar18 = 4;
  *(undefined8 *)((int)pQVar4 + 0x18) = 0x3f;
  uVar13 = 0;
  pQVar4[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar4 + 0x28) = 6;
  pQVar4[2].ul64[0] = uVar16;
  pQVar4[3].ul64[0] = 0x30aa400000008004;
  *(undefined8 *)((int)pQVar4 + 0x38) = 0x431;
  pQVar12 = pQVar4 + 4;
  do {
    pQVar12->ui32[0] = uVar14;
    pQVar12->ui32[1] = uVar15;
    pQVar12->ui32[2] = uVar17;
    iVar7 = (int)uVar13 / 2;
    uVar11 = 8;
    if ((uVar13 & 1) != 0) {
      uVar11 = (uint)uVar2 * 0x10 - 8;
    }
    pQVar12->ui32[3] = local_60;
    iVar8 = 8;
    if (iVar7 != 0) {
      iVar8 = (uint)uVar1 * 0x10 + -8;
    }
    iVar5 = (int)uVar13 % 2;
    pQVar12[1].ui32[0] = uVar11;
    *(int *)((int)pQVar12 + 0x14) = iVar8;
    *(undefined4 *)((int)pQVar12 + 0x18) = 0;
    *(undefined4 *)((int)pQVar12 + 0x1c) = 0;
    bVar3 = 1 < (int)uVar13;
    uVar9 = 0x8000;
    uVar13 = uVar13 + 1;
    if (bVar3) {
      uVar9 = 0;
    }
    pQVar12[2].ui32[0] = xx[iVar5];
    iVar18 = iVar18 + 3;
    *(int *)((int)pQVar12 + 0x24) = yy[iVar7];
    *(int *)((int)pQVar12 + 0x28) = v[2];
    *(undefined4 *)((int)pQVar12 + 0x2c) = uVar9;
    pQVar12 = pQVar12 + 3;
  } while ((int)uVar13 < 4);
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar4 + iVar18);
  return;
}

void SetEffSQTex(int n, float *v, int tp, float w, float h, u_char r, u_char g, u_char b, u_char a) {
	u_char rr;
	u_char gg;
	u_char bb;
	int i;
	int tw;
	int th;
	int xx[4];
	int yy[4];
	u_long tx0;
	Q_WORDDATA *pbuf;
	int ndpkt;
	int ClipFlg;
	static DRAW_ENV_5 env;
	
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  Q_WORDDATA *pQVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  uint *puVar9;
  Q_WORDDATA *pQVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int xx [4];
  int yy [4];
  
  iVar4 = 2;
  if (g_bInterlace == '\0') {
    iVar4 = 1;
  }
  uVar13 = (uint)r;
  uVar14 = (uint)g;
  uVar15 = (uint)b;
  bVar3 = false;
  xx[1] = (int)((*v + w) * 16.0);
  xx[0] = (int)((*v - w) * 16.0);
  xx[2] = xx[0];
  xx[3] = xx[1];
  yy[2] = (int)((v[1] + h / (float)iVar4) * 16.0);
  yy[0] = (int)((v[1] - h / (float)iVar4) * 16.0);
  yy[1] = yy[0];
  yy[3] = yy[2];
  iVar4 = 0;
  do {
    iVar11 = iVar4 + 1;
    if (0x8000 < xx[iVar4] - 0x4000U) {
      bVar3 = true;
    }
    if (0x8000 < yy[iVar4] - 0x4000U) {
      bVar3 = true;
    }
    iVar4 = iVar11;
  } while (iVar11 < 4);
  if (0xfffff00 < (int)(v[2] * 16.0) - 0xffU) {
    bVar3 = true;
  }
  if (!bVar3) {
    iVar4 = EffWrkMonochroModeGet__Fv();
    if (iVar4 != 0) {
      uVar15 = ((uint)r + (uint)g + (uint)b) / 3 & 0xff;
      uVar13 = uVar15;
      uVar14 = uVar15;
    }
    uVar1 = effdat[n].h;
    uVar2 = effdat[n].w;
    uVar16 = effdat[n].tex0;
    if (__tmp_0_747 == 0) {
      DAT_004784f0 = (long)tp << 0x20 | 0xa000118;
      env_746 = 0x44;
      DAT_004784d8 = 0x161;
      DAT_004784e8 = 0x5000d;
      __tmp_0_747 = 1;
      DAT_004784e0 = 0;
    }
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,(_DRAW_ENV_5 *)&env_746);
    pQVar5 = StartDmaDirectTrans__Fv();
    Reserve2DPacket__FUi(0x10);
    pQVar5->ul64[1] = 0xe;
    pQVar5->ul64[0] = 0x1000000000008002;
    *(undefined8 *)((int)pQVar5 + 0x18) = 0x3f;
    pQVar5[1].ul64[0] = 0;
    *(undefined8 *)((int)pQVar5 + 0x28) = 6;
    pQVar5[2].ul64[0] = uVar16;
    pQVar5[3].ul64[0] = 0x30aa400000008004;
    iVar4 = 4;
    *(undefined8 *)((int)pQVar5 + 0x38) = 0x431;
    uVar12 = 0;
    pQVar10 = pQVar5 + 4;
    do {
      pQVar10->ui32[0] = uVar13;
      pQVar10->ui32[1] = uVar14;
      pQVar10->ui32[2] = uVar15;
      iVar11 = 8;
      if ((int)uVar12 / 2 != 0) {
        iVar11 = (uint)uVar1 * 0x10 + -8;
      }
      iVar4 = iVar4 + 3;
      pQVar10->ui32[3] = (uint)a;
      uVar6 = 8;
      if ((uVar12 & 1) != 0) {
        uVar6 = (uint)uVar2 * 0x10 - 8;
      }
      *(int *)((int)pQVar10 + 0x14) = iVar11;
      uVar7 = 0x8000;
      pQVar10[1].ui32[0] = uVar6;
      puVar9 = (uint *)(xx + uVar12);
      *(undefined4 *)((int)pQVar10 + 0x18) = 0;
      *(undefined4 *)((int)pQVar10 + 0x1c) = 0;
      piVar8 = yy + uVar12;
      if (1 < (int)uVar12) {
        uVar7 = 0;
      }
      uVar12 = uVar12 + 1;
      pQVar10[2].ui32[0] = *puVar9;
      *(int *)((int)pQVar10 + 0x24) = *piVar8;
      *(int *)((int)pQVar10 + 0x28) = (int)(v[2] * 16.0);
      *(undefined4 *)((int)pQVar10 + 0x2c) = uVar7;
      pQVar10 = pQVar10 + 3;
    } while ((int)uVar12 < 4);
    EndDmaDirectTrans__FP10Q_WORDDATA(pQVar5 + iVar4);
  }
  return;
}
