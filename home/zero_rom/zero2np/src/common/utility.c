// STATUS: NOT STARTED

#include "utility.h"

void GetSquare(float *v0[4], float *v1[4]) {
  float afVar1 [4];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar2 = _lqc2((undefined  [16])*v0);
  auVar3 = _lqc2((undefined  [16])*v0);
  auVar2 = _vmul(auVar2,auVar3);
  afVar1 = (float  [4])_sqc2(auVar2);
  *v1 = afVar1;
  return;
}

float GetDist(float x, float z) {
	float v0[4];
	float v1[4];
	
  float v0 [4];
  float v1 [4];
  
  v0[0] = ABS(x);
  v0[2] = ABS(z);
  v0[1] = 0.0;
  v0[3] = 0.0;
  GetSquare__FPA3_CfT0((float (*) [4])v0,(float (*) [4])v1);
  return SQRT(v1[0] + v1[2]);
}

float GetDistV(float *p0, float *p1) {
	float v0[4];
	float v1[4];
	
  float v0 [4];
  float v1 [4];
  
  v0[1] = 0.0;
  v0[3] = 0.0;
  v0[2] = ABS(p0[2] - p1[2]);
  v0[0] = ABS(*p0 - *p1);
  GetSquare__FPA3_CfT0((float (*) [4])v0,(float (*) [4])v1);
  return SQRT(v1[0] + v1[2]);
}

float GetDistV2(float *p0, float *p1) {
	float v0[4];
	float v1[4];
	
  float v0 [4];
  float v1 [4];
  
  v0[0] = ABS(*p0 - *p1);
  v0[2] = ABS(p0[2] - p1[2]);
  GetSquare__FPA3_CfT0((float (*) [4])v0,(float (*) [4])v1);
  v0[0] = SQRT(v1[0] + v1[2]);
  v0[2] = ABS(p0[1] - p1[1]);
  GetSquare__FPA3_CfT0((float (*) [4])v0,(float (*) [4])v1);
  return SQRT(v1[0] + v1[2]);
}

void RotFvector(float *rot, float *tv) {
	sceVu0FMATRIX work;
	sceVu0FMATRIX rot_matrix;
	
  float work [4] [4];
  float rot_matrix [4] [4];
  
  sceVu0UnitMatrix(work);
  if (rot[2] != 0.0) {
    sceVu0RotMatrixZ(rot_matrix,work);
    sceVu0ApplyMatrix(tv,rot_matrix,tv);
  }
  if (*rot != 0.0) {
    sceVu0RotMatrixX(*rot,rot_matrix,work);
    sceVu0ApplyMatrix(tv,rot_matrix,tv);
  }
  if (rot[1] != 0.0) {
    sceVu0RotMatrixY(rot[1],rot_matrix,work);
    sceVu0ApplyMatrix(tv,rot_matrix,tv);
  }
  return;
}

float CombRotate(float rot) {
  float fVar1;
  
  if (0.0 < rot) {
    if (DAT_003ee9d8 < rot) {
      for (fVar1 = rot - DAT_003ee9dc; DAT_003ee9d8 < fVar1; fVar1 = fVar1 - DAT_003ee9dc) {
      }
      return fVar1;
    }
  }
  else {
    for (; rot < DAT_003ee9e4; rot = rot + DAT_003ee9e0) {
    }
  }
  return rot;
}

int CompVector(float *v1, float *v2) {
  int iVar1;
  
  iVar1 = 0;
  if (((*v1 == *v2) && (v1[1] == v2[1])) && (iVar1 = 1, v1[2] != v2[2])) {
    iVar1 = 0;
  }
  return iVar1;
}

void _SetVector(float *v, float x, float y, float z, float w) {
  v[3] = w;
  *v = x;
  v[1] = y;
  v[2] = z;
  return;
}

void _ClearVector(float *v0) {
  *v0 = 0.0;
  v0[3] = 0.0;
  v0[2] = 0.0;
  v0[1] = 0.0;
  return;
}

int LineIntersect(LINE_T *e1, LINE_T *e2) {
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = (e1->a).x;
  fVar10 = (e1->b).x;
  fVar5 = fVar10;
  if (fVar12 < fVar10) {
    fVar5 = fVar12;
  }
  fVar9 = (e2->a).x;
  fVar6 = (e2->b).x;
  fVar8 = fVar9;
  if (fVar9 <= fVar6) {
    fVar8 = fVar6;
  }
  uVar3 = 0;
  if (fVar5 <= fVar8) {
    fVar11 = (e1->a).y;
    fVar8 = (e1->b).y;
    fVar5 = fVar8;
    if (fVar11 < fVar8) {
      fVar5 = fVar11;
    }
    fVar7 = (e2->a).y;
    fVar4 = (e2->b).y;
    fVar1 = fVar7;
    if (fVar7 <= fVar4) {
      fVar1 = fVar4;
    }
    uVar3 = 0;
    if (fVar5 <= fVar1) {
      if (fVar6 <= fVar9) {
        fVar9 = fVar6;
      }
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      uVar3 = 0;
      if (fVar9 <= fVar12) {
        if (fVar4 <= fVar7) {
          fVar7 = fVar4;
        }
        if (fVar8 < fVar11) {
          if (fVar11 < fVar7) {
            return 0;
          }
        }
        else if (fVar8 < fVar7) {
          return 0;
        }
        uVar3 = 0;
        iVar2 = LineStraddle__FP6LINE_TP7POINT_TT1(e1,&e2->a,&e2->b);
        if (iVar2 != 0) {
          iVar2 = LineStraddle__FP6LINE_TP7POINT_TT1(e2,&e1->a,&e1->b);
          uVar3 = (uint)(iVar2 != 0);
        }
      }
    }
  }
  return uVar3;
}

int LineStraddle(LINE_T *e, POINT_T *a, POINT_T *b) {
  int iVar1;
  int iVar2;
  
  iVar1 = LineSide__FP7POINT_TP6LINE_T(a,e);
  iVar2 = LineSide__FP7POINT_TP6LINE_T(b,e);
  return (int)(iVar1 * iVar2 < 1);
}

int LineSide(POINT_T *p, LINE_T *e) {
	POINT_T p1;
	POINT_T p2;
	POINT_T p3;
	float n;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  ulong in_v0;
  ulong uVar6;
  ulong uVar7;
  ulong in_a3;
  ulong uVar8;
  float fVar9;
  POINT_T p1;
  POINT_T p2;
  POINT_T p3;
  
  puVar1 = (undefined *)((int)&p->y + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)p & 7;
  uVar6 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)p - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p1.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar6 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&(e->a).y + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)e & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          uVar6 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)e - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p2.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  puVar1 = (undefined *)((int)&(e->b).y + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&e->b & 7;
  uVar8 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&e->b - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&p3.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar2);
  *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
  p2.y = (float)(uVar7 >> 0x20);
  p3.y = (float)(uVar8 >> 0x20);
  p1.y = (float)(uVar6 >> 0x20);
  p1.x = (float)uVar6;
  p2.x = (float)uVar7;
  p3.x = (float)uVar8;
  fVar9 = p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y);
  iVar5 = 1;
  if ((fVar9 <= 0.0) && (iVar5 = -1, 0.0 <= fVar9)) {
    iVar5 = 0;
  }
  return iVar5;
}

void Vu0SubOuterProduct(float *v0, float *v1, float *v2, float *v3) {
	u_int reg0;
	
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar2 = _lqc2(*(undefined (*) [16])v2);
  auVar3 = _lqc2(*(undefined (*) [16])v3);
  auVar2 = _vsub(auVar2,auVar1);
  auVar1 = _vsub(auVar3,auVar1);
  _vopmula(auVar2,auVar1);
  auVar1 = _vopmsub(auVar1,auVar2);
  auVar1 = _vsub(auVar1,auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void Vu0Normalize(float *v0, float *v1) {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vaddbc(auVar1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void Vu0ApplyMatrix(float *v0, float *m0[4], float *v1) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  auVar1 = _lqc2((undefined  [16])*m0);
  auVar2 = _lqc2((undefined  [16])m0[1]);
  auVar3 = _lqc2((undefined  [16])m0[2]);
  auVar4 = _lqc2((undefined  [16])m0[3]);
  auVar5 = _lqc2(*(undefined (*) [16])v1);
  _vmulabc(auVar1,auVar5);
  _vmaddabc(auVar2,auVar5);
  _vmaddabc(auVar3,auVar5);
  auVar1 = _vmaddbc(auVar4,auVar5);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void Vu0MulVector(float *v0, float *v1, float *v2) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar2 = _lqc2(*(undefined (*) [16])v2);
  auVar1 = _vmul(auVar1,auVar2);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

void Vu0FTOI0Vector(int *v0, float *v1) {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])v1);
  auVar1 = _vftoi0(auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])v0 = auVar1;
  return;
}

u_int log_2(u_int n) {
	int i;
	
  uint uVar1;
  
  uVar1 = 0x1f;
  if (-1 < (int)n) {
    for (uVar1 = 0x1e; (0 < (int)uVar1 && (((int)n >> (uVar1 & 0x1f) & 1U) == 0)); uVar1 = uVar1 - 1
        ) {
    }
  }
  return uVar1 + (1 << (uVar1 & 0x1f) < (int)n);
}

float log_10sub(float num) {
	float n;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = num / 10.0;
  fVar3 = 0.0;
  uVar1 = (uint)fVar2;
  if (1.0 <= fVar2) {
    if (2.147484e+09 <= fVar2) {
      uVar1 = (int)(fVar2 - 2.147484e+09) | 0x80000000;
    }
    uVar1 = log_10__FUi(uVar1);
    if ((int)uVar1 < 0) {
      fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)uVar1;
    }
  }
  return fVar3 + 1.0;
}

u_int log_10(u_int num) {
  uint uVar1;
  float fVar2;
  
  if ((int)num < 0) {
    fVar2 = (float)(num & 1 | num >> 1);
    fVar2 = fVar2 + fVar2;
  }
  else {
    fVar2 = (float)num;
  }
  fVar2 = log_10sub__Ff(fVar2);
  uVar1 = (uint)fVar2;
  if (2.147484e+09 <= fVar2) {
    uVar1 = (int)(fVar2 - 2.147484e+09) | 0x80000000;
  }
  return uVar1;
}

void _ftoi0(int *out, float *in) {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])in);
  auVar1 = _vftoi0(auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])out = auVar1;
  return;
}

void _ftoi4(int *out, float *in) {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])in);
  auVar1 = _vftoi4(auVar1);
  auVar1 = _sqc2(auVar1);
  *(undefined (*) [16])out = auVar1;
  return;
}

float GetVecLenUnitFrom2Point(float *bet, float *unit, float *from, float *to) {
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])from);
  auVar2 = _lqc2(*(undefined (*) [16])to);
  auVar1 = _vsub(auVar2,auVar1);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vaddbc(auVar1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

float GetLenUnitFromVec(float *unit, float *vec) {
  undefined auVar1 [16];
  
  auVar1 = _lqc2(*(undefined (*) [16])vec);
  auVar1 = _vmul(auVar1,auVar1);
  auVar1 = _vaddbc(auVar1,auVar1);
  _vaddbc(auVar1,auVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void PrintFVECTOR(char *str, float *vec) {
  printf("%s = %f, %f, %f, %f\n");
  return;
}

void PrintMATRIX(float *m[4]) {
  printf("[ %08f %08f %08f %08f ]\n");
  printf("[ %08f %08f %08f %08f ]\n");
  printf("[ %08f %08f %08f %08f ]\n");
  printf("[ %08f %08f %08f %08f ]\n");
  return;
}

int sceFprintf(int fd, char *str) {
	va_list ap;
	char buf[65536];
	int count;
	
  int size;
  void *ap;
  char buf [65536];
  
  size = sprintf(buf,str);
  sceWrite(fd,buf,size);
  return size;
}

float GetRandValF(float max) {
  int iVar1;
  
  iVar1 = rand();
  return (max * (float)iVar1) / DAT_003ee9e8;
}

int GetRandValI(int max) {
  float fVar1;
  
  fVar1 = GetRandValF__Ff((float)max);
  return (int)fVar1;
}
