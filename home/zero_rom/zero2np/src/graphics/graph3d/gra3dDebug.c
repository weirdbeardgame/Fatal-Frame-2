// STATUS: NOT STARTED

#include "gra3dDebug.h"

struct _PACKET_DRAWSPRITE {
	qword qwVifCode;
	sceGifTag Gt;
	sceGifPackRgbaq Rgbaq;
	sceGifPackXyzf aXyzf2[2];
};

unsigned char G3DLIGHT type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b5330;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT(0x3f11c8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT(0x3f11d0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8G3DLIGHT(0x3b5378,_max);
  }
  return (uint **)0x0;
}

static void _DrawSphere(float *vCenter, float fRange, G3DCOLOR col, float *vScale) {
  DrawSphere__FffffUcUcUcUcPCf
            (fRange,*vCenter,vCenter[1],vCenter[2],(uchar)col,(uchar)(col >> 8),(uchar)(col >> 0x10)
             ,(uchar)(col >> 0x18),vScale);
  return;
}

void _PrintLMatrix(float *fmat[4], char *pValName) {
	int i;
	
  int iVar1;
  
  iVar1 = 0;
  _GetLineInfo__Fv();
  g3ddbgPrintf__FPCce("_PrintLMatrix(%s):%s(%d)\n");
  do {
    iVar1 = iVar1 + 1;
    g3ddbgPrintf__FPCce("m[%d] : %8.2f, %8.2f, %8.2f, %8.2f\n");
  } while (iVar1 < 3);
  return;
}

void gra3ddbgDrawLine(float *vStart, float *vEnd, G3DCOLOR col) {
  uchar g1;
  
  g1 = (uchar)(col >> 8);
  DrawLine__FPCfUcUcUcUcT0UcUcUcUc
            (vStart,(uchar)col,g1,(uchar)(col >> 0x10),(uchar)(col >> 0x18),vEnd,(uchar)col,g1,
             col >> 0x10 & 0xff,col >> 0x18);
  return;
}

void gra3ddbgDrawPoint(float *vPoint, G3DCOLOR col) {
  DrawPoint2__FPCfUcUcUcUc
            (vPoint,(uchar)col,(uchar)(col >> 8),(uchar)(col >> 0x10),(uchar)(col >> 0x18));
  return;
}

void gra3ddbgVerifyVu1MemAddress() {
	static char __FUNCTION__[28] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 100,
		/* [6] = */ 98,
		/* [7] = */ 103,
		/* [8] = */ 86,
		/* [9] = */ 101,
		/* [10] = */ 114,
		/* [11] = */ 105,
		/* [12] = */ 102,
		/* [13] = */ 121,
		/* [14] = */ 86,
		/* [15] = */ 117,
		/* [16] = */ 49,
		/* [17] = */ 77,
		/* [18] = */ 101,
		/* [19] = */ 109,
		/* [20] = */ 65,
		/* [21] = */ 100,
		/* [22] = */ 100,
		/* [23] = */ 114,
		/* [24] = */ 101,
		/* [25] = */ 115,
		/* [26] = */ 115,
		/* [27] = */ 0
	};
	
  return;
}

void gra3ddbgDrawSphere(float *vPosition, float fRange, G3DCOLOR col, float *vScale) {
  _DrawSphere__FPCffUiT0(vPosition,fRange,col,vScale);
  return;
}

void gra3ddbgDrawRangedCone(float *vPosition, float *vDirection, float fRange, float fAngle, G3DCOLOR col) {
	float fRadiusOfCircle;
	float avPointOnCircle[8][4];
	float fOffsetY;
	float vPoint[4];
	float vEnd[4];
	float plane[4];
	float vTemp[4];
	float mat[4][4];
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	
  undefined auVar1 [12];
  int iVar2;
  undefined (*pauVar3) [16];
  undefined8 uVar5;
  undefined auVar4 [16];
  float *pfVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float x;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  undefined auVar22 [16];
  undefined auVar23 [16];
  undefined4 uVar24;
  float avPointOnCircle [8] [4];
  float vPoint [4];
  float vEnd [4];
  float plane [4];
  float vTemp [4];
  float mat [4] [4];
  float local_110;
  float fStack_10c;
  float fStack_108;
  
  lVar10 = (long)(int)avPointOnCircle;
  iVar9 = 0;
  fVar11 = sinf(fAngle);
  fVar12 = DAT_003ee3d4;
  fVar11 = fRange * fVar11;
  fVar13 = 0.125;
  lVar8 = lVar10;
  do {
    fVar14 = (float)iVar9;
    iVar9 = iVar9 + 1;
    x = fVar14 * fVar12 * fVar13;
    fVar14 = cosf(x);
    pfVar6 = (float *)lVar8;
    pfVar6[1] = 0.0;
    *pfVar6 = fVar14 * fVar11;
    fVar14 = sinf(x);
    pfVar6[3] = 1.0;
    pfVar6[2] = fVar14 * fVar11;
    lVar8 = (long)(int)(pfVar6 + 4);
  } while (iVar9 < 8);
  fVar12 = cosf(fAngle);
  fVar12 = fRange * fVar12;
  vPoint._0_8_ = vPoint._4_8_ << 0x20;
  vPoint[2] = 0.0;
  vPoint[3] = 1.0;
  auVar1._4_4_ = vEnd[2];
  auVar1._8_4_ = vEnd[3];
  auVar1._0_4_ = fRange - fVar12;
  auVar15._4_4_ = vPoint[2];
  auVar15._8_4_ = vPoint[3];
  auVar15._0_4_ = -fVar12;
  auVar15._12_4_ = 0;
  vPoint = (float  [4])(auVar15 << 0x20);
  vEnd._0_8_ = auVar1._0_8_ << 0x20;
  vEnd[2] = 0.0;
  vEnd[3] = 1.0;
  g3dCalcPlaneFromPoints__FPfPCfN21(plane,vDirection,g_v0000,g_v0100);
  g3dCalcPlaneFromPointNormal__FPfPCfT1(plane,g_v0000,plane);
                    /* inlined from g3dxVu0.h */
  auVar15 = _lqc2(*(undefined (*) [16])vDirection);
  auVar16 = _vmul(auVar15,auVar15);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar16,auVar16);
  auVar16 = _vmaddbc(extraout_vf1,auVar16);
  _vnop();
  _vnop();
  _vnop();
  uVar24 = _vrsqrt(in_vf0,auVar16);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar15 = _vmulq(auVar15,uVar24);
  auVar15 = _sqc2(auVar15);
  auVar15 = _lqc2(auVar15);
  auVar16 = _lqc2((undefined  [16])g_v0100);
  auVar15 = _vmul(auVar15,auVar16);
  _vaddabc(auVar15,auVar15);
  auVar15 = _vmaddbc(extraout_vf1,auVar15);
  auVar15 = _qmfc2(auVar15._0_4_);
  uVar5 = auVar15._8_8_;
  fVar13 = acosf(auVar15._0_4_);
  fVar11 = sinf(fVar13 * 0.5);
  auVar16 = _qmtc2(fVar11);
  auVar15 = _lqc2((undefined  [16])plane);
  auVar15 = _vmulbc(auVar15,auVar16);
  auVar15 = _sqc2(auVar15);
  fVar13 = cosf(fVar13 * 0.5);
  fStack_10c = auVar15._4_4_;
  fStack_108 = auVar15._8_4_;
  fVar11 = -fStack_10c;
  fVar14 = -fStack_108;
  local_110 = auVar15._0_4_;
  auVar16._4_4_ = fStack_108;
  auVar16._0_4_ = fVar13;
  auVar16._8_4_ = fVar11;
  auVar16._12_4_ = local_110;
  auVar16 = _lqc2(auVar16);
  auVar17._4_4_ = fVar13;
  auVar17._0_4_ = fVar14;
  auVar17._8_4_ = local_110;
  auVar17._12_4_ = fStack_10c;
  auVar17 = _lqc2(auVar17);
  auVar18._4_4_ = -local_110;
  auVar18._0_4_ = fStack_10c;
  auVar18._8_4_ = fVar13;
  auVar18._12_4_ = fStack_108;
  auVar18 = _lqc2(auVar18);
  auVar19._4_4_ = fVar11;
  auVar19._0_4_ = -local_110;
  auVar19._8_4_ = fVar14;
  auVar19._12_4_ = fVar13;
  auVar19 = _lqc2(auVar19);
  auVar20._4_4_ = fStack_108;
  auVar20._0_4_ = fVar13;
  auVar20._8_4_ = fVar11;
  auVar20._12_4_ = -local_110;
  auVar20 = _lqc2(auVar20);
  auVar21._4_4_ = fVar13;
  auVar21._0_4_ = fVar14;
  auVar21._8_4_ = local_110;
  auVar21._12_4_ = fVar11;
  auVar21 = _lqc2(auVar21);
  auVar22._4_4_ = -local_110;
  auVar22._0_4_ = fStack_10c;
  auVar22._8_4_ = fVar13;
  auVar22._12_4_ = fVar14;
  auVar22 = _lqc2(auVar22);
  auVar23._12_4_ = fVar13;
  auVar23._0_12_ = auVar15._0_12_;
  auVar23 = _lqc2(auVar23);
  _vmulabc(auVar16,auVar20);
  _vmaddabc(auVar17,auVar20);
  _vmaddabc(auVar18,auVar20);
  auVar15 = _vmaddbc(auVar19,auVar20);
  _vmulabc(auVar16,auVar21);
  _vmaddabc(auVar17,auVar21);
  _vmaddabc(auVar18,auVar21);
  auVar20 = _vmaddbc(auVar19,auVar21);
  _vmulabc(auVar16,auVar22);
  _vmaddabc(auVar17,auVar22);
  _vmaddabc(auVar18,auVar22);
  auVar21 = _vmaddbc(auVar19,auVar22);
  _vmulabc(auVar16,auVar23);
  _vmaddabc(auVar17,auVar23);
  _vmaddabc(auVar18,auVar23);
  auVar18 = _vmaddbc(auVar19,auVar23);
  auVar15 = _sqc2(auVar15);
  auVar16 = _sqc2(auVar20);
  auVar17 = _sqc2(auVar21);
  _sqc2(auVar18);
                    /* end of inlined section */
  iVar9 = 7;
  vPoint[1] = vPoint[1] + fVar12;
  vEnd[1] = vEnd[1] + fVar12;
  lVar8 = lVar10;
  do {
    iVar2 = (int)lVar8;
    iVar9 = iVar9 + -1;
    *(float *)(iVar2 + 4) = *(float *)(iVar2 + 4) + fVar12;
    lVar8 = (long)(iVar2 + 0x10);
  } while (-1 < iVar9);
                    /* inlined from g3dxVu0.h */
  auVar18 = _lqc2((undefined  [16])vPoint);
  auVar19 = _lqc2(auVar15);
  auVar20 = _lqc2(auVar16);
  auVar21 = _lqc2(auVar17);
  _vmulabc(auVar19,auVar18);
  _vmaddabc(auVar20,auVar18);
  auVar18 = _vmaddbc(auVar21,auVar18);
  auVar18 = _sqc2(auVar18);
  auVar19 = _lqc2((undefined  [16])vEnd);
  auVar20 = _lqc2(auVar15);
  auVar21 = _lqc2(auVar16);
  auVar22 = _lqc2(auVar17);
  _vmulabc(auVar20,auVar19);
  _vmaddabc(auVar21,auVar19);
  auVar19 = _vmaddbc(auVar22,auVar19);
  auVar19 = _sqc2(auVar19);
                    /* end of inlined section */
  iVar9 = 7;
  lVar8 = lVar10;
  do {
    pauVar3 = (undefined (*) [16])lVar8;
                    /* inlined from g3dxVu0.h */
    auVar20 = _lqc2(*pauVar3);
    auVar21 = _lqc2(auVar15);
    auVar22 = _lqc2(auVar16);
    auVar23 = _lqc2(auVar17);
    _vmulabc(auVar21,auVar20);
    _vmaddabc(auVar22,auVar20);
    auVar20 = _vmaddbc(auVar23,auVar20);
    auVar20 = _sqc2(auVar20);
    *pauVar3 = auVar20;
                    /* end of inlined section */
    iVar9 = iVar9 + -1;
    lVar8 = (long)(int)pauVar3[1];
  } while (-1 < iVar9);
                    /* inlined from g3dxVu0.h */
  auVar15 = _lqc2(auVar18);
  auVar16 = _lqc2(*(undefined (*) [16])vPosition);
  auVar15 = _vadd(auVar15,auVar16);
  vPoint = (float  [4])_sqc2(auVar15);
  auVar15 = _lqc2(auVar19);
  auVar16 = _lqc2(*(undefined (*) [16])vPosition);
  auVar15 = _vadd(auVar15,auVar16);
  vEnd = (float  [4])_sqc2(auVar15);
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = lVar10;
                    /* end of inlined section */
  iVar9 = 7;
  do {
    pauVar3 = auVar4._0_4_;
                    /* inlined from g3dxVu0.h */
    auVar15 = _lqc2(*pauVar3);
    auVar16 = _lqc2(*(undefined (*) [16])vPosition);
    auVar15 = _vadd(auVar15,auVar16);
    auVar15 = _sqc2(auVar15);
    *pauVar3 = auVar15;
                    /* end of inlined section */
    iVar9 = iVar9 + -1;
    auVar4._0_8_ = (long)(int)pauVar3[1];
  } while (-1 < iVar9);
  iVar9 = 7;
  lVar8 = lVar10;
  do {
    pfVar6 = (float *)lVar8;
    lVar8 = (long)(int)(pfVar6 + 4);
    iVar9 = iVar9 + -1;
    gra3ddbgDrawLine__FPCfT0Ui(vPoint,pfVar6,col);
  } while (-1 < iVar9);
  iVar9 = 1;
  iVar2 = 0;
  do {
    iVar7 = iVar9;
    iVar9 = iVar7;
    if (iVar7 < 0) {
      iVar9 = iVar2 + 8;
    }
    gra3ddbgDrawLine__FPCfT0Ui
              ((float *)avPointOnCircle[iVar2],(float *)avPointOnCircle[iVar7 + (iVar9 >> 3) * -8],
               col);
    iVar9 = iVar7 + 1;
    iVar2 = iVar7;
  } while (iVar7 < 8);
  iVar9 = 7;
  do {
    pfVar6 = (float *)lVar10;
    lVar10 = (long)(int)(pfVar6 + 4);
    iVar9 = iVar9 + -1;
    gra3ddbgDrawLine__FPCfT0Ui(vEnd,pfVar6,col);
  } while (-1 < iVar9);
  return;
}

void gra3ddbgDrawSprite(G3DFREGION *pRegion, float fZ, G3DCOLOR col, sceGsTex0 *pGsTex0) {
	float vScreenCoordLT[4];
	float vScreenCoordRB[4];
	sceGsXyz lt;
	sceGsXyz rb;
	_PACKET_DRAWSPRITE *pPacket;
	
  undefined4 *puVar1;
  ulong *puVar2;
  float vScreenCoordLT [4];
  float vScreenCoordRB [4];
  sceGsXyz lt;
  sceGsXyz rb;
  
  vScreenCoordLT[0] = pRegion->fLeft;
  vScreenCoordLT[1] = pRegion->fTop;
  vScreenCoordLT._8_8_ = ZEXT48((uint)fZ);
  vScreenCoordRB[1] = pRegion->fTop + pRegion->fHeight;
  vScreenCoordRB[0] = pRegion->fLeft + pRegion->fWidth;
  vScreenCoordRB._8_8_ = ZEXT48((uint)fZ);
  g3dCalcGsPrimitiveCoord__FP8sceGsXyzPCf(&lt,vScreenCoordLT);
  g3dCalcGsPrimitiveCoord__FP8sceGsXyzPCf(&rb,vScreenCoordRB);
  puVar1 = (undefined4 *)g3dDmaOpenPacket__Fv();
                    /* inlined from g3dMemory.h */
  puVar2 = (ulong *)(puVar1 + 4);
                    /* end of inlined section */
  puVar1[3] = 0x50000004;
                    /* inlined from g3dMemory.h */
  *(undefined4 *)puVar2 = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
                    /* end of inlined section */
  puVar1[2] = &DAT_11000000;
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar2 = *puVar2 & 0x7fffffff8000 | 0x3003400000008001;
  puVar1[0xb] = col >> 0x18;
                    /* inlined from g3dMemory.h */
                    /* end of inlined section */
  puVar1[9] = col >> 8 & 0xff;
  puVar1[8] = col & 0xff;
  puVar1[10] = col >> 0x10 & 0xff;
                    /* inlined from g3dMemory.h */
                    /* end of inlined section */
  *(ulong *)(puVar1 + 6) = *(ulong *)(puVar1 + 6) & 0xfffffffffffff000 | 0x441;
                    /* inlined from g3dMemory.h */
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
                    /* end of inlined section */
  puVar1[0xc] = (uint)(ushort)lt._0_2_;
                    /* inlined from g3dMemory.h */
                    /* end of inlined section */
  puVar1[0xd] = (uint)(ushort)lt._2_2_;
                    /* inlined from g3dMemory.h */
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
                    /* end of inlined section */
  puVar1[0xe] = lt._4_4_ << 4;
  puVar1[0x10] = (uint)(ushort)rb._0_2_;
  puVar1[0x11] = (uint)(ushort)rb._2_2_;
  puVar1[0x12] = rb._4_4_ << 4;
  g3dDmaClosePacket__FPCv(puVar1 + 0x14);
  return;
}

void gra3ddbgDrawBB(float *avBB[4], G3DCOLOR col) {
  float (*vEnd) [4];
  float (*vEnd_00) [4];
  float (*vStart) [4];
  float (*vEnd_01) [4];
  float (*vEnd_02) [4];
  float (*vEnd_03) [4];
  float (*vEnd_04) [4];
  
  vEnd_03 = avBB[1];
  vEnd_04 = avBB[3];
  vEnd = avBB[6];
  vEnd_00 = avBB[5];
  vStart = avBB[4];
  vEnd_01 = avBB[7];
  vEnd_02 = avBB[2];
  gra3ddbgDrawLine__FPCfT0Ui((float *)avBB,(float *)vEnd_03,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_03,(float *)vEnd_04,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_04,(float *)vEnd_02,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_02,(float *)avBB,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vStart,(float *)vEnd_00,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_00,(float *)vEnd_01,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_01,(float *)vEnd,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd,(float *)vStart,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)avBB,(float *)vStart,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_03,(float *)vEnd_00,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_02,(float *)vEnd,col);
  gra3ddbgDrawLine__FPCfT0Ui((float *)vEnd_04,(float *)vEnd_01,col);
  return;
}

void gra3ddbgDrawProc() {
  return;
}

void gra3ddbgVerifyVifCodex4(tVIF_CODE *aVC) {
	int i;
	
  int iVar1;
  
  iVar1 = 3;
  do {
    iVar1 = iVar1 + -1;
    g3ddbgVerifyVifCode__FPC9tVIF_CODE(aVC);
    aVC = aVC + 1;
  } while (-1 < iVar1);
  return;
}

void gra3ddbgNormalizeLightData(GRA3DLIGHTDATA *pLDDest, GRA3DLIGHTDATA *pLDSrc) {
	static char __FUNCTION__[27] = {
		/* [0] = */ 103,
		/* [1] = */ 114,
		/* [2] = */ 97,
		/* [3] = */ 51,
		/* [4] = */ 100,
		/* [5] = */ 100,
		/* [6] = */ 98,
		/* [7] = */ 103,
		/* [8] = */ 78,
		/* [9] = */ 111,
		/* [10] = */ 114,
		/* [11] = */ 109,
		/* [12] = */ 97,
		/* [13] = */ 108,
		/* [14] = */ 105,
		/* [15] = */ 122,
		/* [16] = */ 101,
		/* [17] = */ 76,
		/* [18] = */ 105,
		/* [19] = */ 103,
		/* [20] = */ 104,
		/* [21] = */ 116,
		/* [22] = */ 68,
		/* [23] = */ 97,
		/* [24] = */ 116,
		/* [25] = */ 97,
		/* [26] = */ 0
	};
	int i;
	
  float fVar1;
  GRA3DLIGHTDATA *pGVar2;
  float *pfVar3;
  GRA3DLIGHTDATA *pGVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  fixed_array<G3DLIGHT,39> *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined in_vf0 [16];
  undefined extraout_vf1 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined4 uVar16;
  
  if (pLDDest == (GRA3DLIGHTDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dDebug.c",0x197,"gra3ddbgNormalizeLightData",s_pLDDest_003f11e0);
    g3ddbgAssert__FbPCce(false,&DAT_003f11d8);
  }
  if (pLDSrc == (GRA3DLIGHTDATA *)0x0) {
    _SetLineInfo__FPCciT0T0("gra3dDebug.c",0x198,"gra3ddbgNormalizeLightData",s_pLDSrc_003f11e8);
    g3ddbgAssert__FbPCce(false,&DAT_003f11d8);
  }
  pGVar4 = pLDSrc + 1;
  pGVar2 = pLDDest;
  do {
    uVar5 = *(undefined8 *)(pLDSrc->vAmbient + 2);
    uVar6 = *(undefined8 *)(pLDSrc->aLight).field0_0x0.m_aData[0].vDiffuse;
    uVar7 = *(undefined8 *)((pLDSrc->aLight).field0_0x0.m_aData[0].vDiffuse + 2);
    *(undefined8 *)pGVar2->vAmbient = *(undefined8 *)pLDSrc->vAmbient;
    *(undefined8 *)(pGVar2->vAmbient + 2) = uVar5;
    *(undefined8 *)(pGVar2->aLight).field0_0x0.m_aData[0].vDiffuse = uVar6;
    *(undefined8 *)((pGVar2->aLight).field0_0x0.m_aData[0].vDiffuse + 2) = uVar7;
    pLDSrc = (GRA3DLIGHTDATA *)(pLDSrc->aLight).field0_0x0.m_aData[0].vSpecular;
    pGVar2 = (GRA3DLIGHTDATA *)(pGVar2->aLight).field0_0x0.m_aData[0].vSpecular;
  } while (pLDSrc != pGVar4);
                    /* inlined from g3dxVu0.h */
  uVar12 = 0x3f800000;
  auVar15 = _lqc2(*(undefined (*) [16])pLDDest->vAmbient);
  auVar13 = _qmtc2(0);
  auVar14 = _qmtc2(0x3f800000);
  auVar13 = _vmaxbc(auVar15,auVar13);
  auVar13 = _vminibc(auVar13,auVar14);
  auVar13 = _sqc2(auVar13);
  *(undefined (*) [16])pLDDest->vAmbient = auVar13;
                    /* end of inlined section */
  pfVar8 = &pLDDest->aLight;
  iVar9 = 0;
  do {
                    /* inlined from ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar9,0x27);
                    /* inlined from g3dxVu0.h */
    auVar15 = _lqc2(*(undefined (*) [16])(pfVar8->field0_0x0).m_aData[0].vDiffuse);
    auVar13 = _qmtc2(0);
    auVar14 = _qmtc2(uVar12);
    auVar13 = _vmaxbc(auVar15,auVar13);
    auVar13 = _vminibc(auVar13,auVar14);
    auVar13 = _sqc2(auVar13);
    *(undefined (*) [16])(pfVar8->field0_0x0).m_aData[0].vDiffuse = auVar13;
    pfVar3 = (pfVar8->field0_0x0).m_aData[0].vSpecular;
    auVar15 = _lqc2(*(undefined (*) [16])pfVar3);
    auVar13 = _qmtc2(0);
    auVar14 = _qmtc2(uVar12);
    auVar13 = _vmaxbc(auVar15,auVar13);
    auVar13 = _vminibc(auVar13,auVar14);
    auVar13 = _sqc2(auVar13);
    *(undefined (*) [16])pfVar3 = auVar13;
    pfVar3 = (pfVar8->field0_0x0).m_aData[0].vAmbient;
    auVar15 = _lqc2(*(undefined (*) [16])pfVar3);
    auVar13 = _qmtc2(0);
    auVar14 = _qmtc2(uVar12);
    auVar13 = _vmaxbc(auVar15,auVar13);
    auVar13 = _vminibc(auVar13,auVar14);
    auVar13 = _sqc2(auVar13);
    *(undefined (*) [16])pfVar3 = auVar13;
    pfVar3 = (pfVar8->field0_0x0).m_aData[0].vDirection;
    auVar13 = _lqc2(*(undefined (*) [16])pfVar3);
    auVar14 = _vmul(auVar13,auVar13);
    _vnop();
    _vnop();
    _vnop();
    _vaddabc(auVar14,auVar14);
    auVar14 = _vmaddbc(extraout_vf1,auVar14);
    _vnop();
    _vnop();
    _vnop();
    uVar16 = _vrsqrt(in_vf0,auVar14);
    _vsubbc(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    _vnop();
    auVar13 = _vmulq(auVar13,uVar16);
    auVar13 = _sqc2(auVar13);
    *(undefined (*) [16])pfVar3 = auVar13;
                    /* end of inlined section */
    if ((pfVar8->field0_0x0).m_aData[0].fMinRange < 0.0) {
      (pfVar8->field0_0x0).m_aData[0].fMinRange = 0.0;
    }
    fVar10 = (pfVar8->field0_0x0).m_aData[0].fMaxRange;
    if (fVar10 < (pfVar8->field0_0x0).m_aData[0].fMinRange) {
      (pfVar8->field0_0x0).m_aData[0].fMinRange = fVar10;
    }
    fVar10 = (pfVar8->field0_0x0).m_aData[0].fAngleInside;
    if (fVar10 < 0.0) {
      (pfVar8->field0_0x0).m_aData[0].fAngleInside = 0.0;
      fVar10 = (pfVar8->field0_0x0).m_aData[0].fAngleInside;
      fVar11 = (pfVar8->field0_0x0).m_aData[0].fAngleOutside;
    }
    else {
      fVar11 = (pfVar8->field0_0x0).m_aData[0].fAngleOutside;
    }
    fVar1 = DAT_003ee3d8;
    if (DAT_003ee3d8 < fVar11) {
      (pfVar8->field0_0x0).m_aData[0].fAngleOutside = DAT_003ee3d8;
      fVar11 = fVar1;
    }
    if (fVar11 < fVar10) {
      (pfVar8->field0_0x0).m_aData[0].fAngleInside = fVar11;
    }
    iVar9 = iVar9 + 1;
    pfVar8 = (fixed_array<G3DLIGHT,39> *)((pfVar8->field0_0x0).m_aData + 1);
  } while (iVar9 < 0x27);
  return;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}

type_info& G3DLIGHT type_info function() {
  g3ddbgAssert__FbPCce(false,str_735);
  return (type_info *)v;
}
