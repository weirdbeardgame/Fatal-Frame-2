// STATUS: NOT STARTED

#include "ef_pow.h"

static float bp[0] = {
};

static float dp_h[0] = {
};

static float dp_l[0] = {
};

static float zero = 0.f;
static float one = 1.f;
static float two = 2.f;
static float two24 = 16777216.f;
static float huge = 9.99999939e+29f;
static float tiny = 9.99999909e-31f;
static float L1 = 0.599999964f;
static float L2 = 0.428571433f;
static float L3 = 0.333333343f;
static float L4 = 0.272728086f;
static float L5 = 0.230660737f;
static float L6 = 0.206975013f;
static float P1 = 0.166666657f;
static float P2 = -0.00277777761f;
static float P3 = 6.61375525e-05f;
static float P4 = -1.6533902e-06f;
static float P5 = 4.13813659e-08f;
static float lg2 = 0.693147123f;
static float lg2_h = 0.693145752f;
static float lg2_l = 1.42860654e-06f;
static float ovt = 4.29956621e-08f;
static float cp = 0.961796641f;
static float cp_h = 0.961792f;
static float cp_l = 4.70173791e-06f;
static float ivln2 = 1.4426949f;
static float ivln2_h = 1.44268799f;
static float ivln2_l = 7.05260709e-06f;

float __ieee754_powf(float x, float y) {
	float z;
	float ax;
	float z_h;
	float z_l;
	float p_h;
	float p_l;
	float y1;
	float t1;
	float t2;
	float r;
	float s;
	float t;
	float u;
	float v;
	float w;
	__int32_t i;
	__int32_t j;
	__int32_t k;
	__int32_t yisint;
	__int32_t n;
	__int32_t ix;
	__int32_t iy;
	float s2;
	float s_h;
	float s_l;
	float t_h;
	float t_l;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar5 = (uint)y & 0x7fffffff;
  uVar7 = (uint)x & 0x7fffffff;
  if (uVar5 < 0x800000) {
    return 1.0;
  }
  uVar9 = 0;
  if ((int)x < 0) {
    if (uVar5 < 0x4b800000) {
      if ((0x3f7fffff < uVar5) &&
         (uVar2 = 0x96 - ((int)uVar5 >> 0x17), uVar3 = (int)uVar5 >> (uVar2 & 0x1f),
         uVar3 << (uVar2 & 0x1f) == uVar5)) {
        uVar9 = 2 - (uVar3 & 1);
      }
    }
    else {
      uVar9 = 2;
    }
  }
  if (uVar5 == 0x3f800000) {
    if ((int)y < 0) {
      return 1.0 / x;
    }
    return x;
  }
  if (y == 2.0) {
    return x * x;
  }
  if ((y == 0.5) && (-1 < (int)x)) {
    fVar10 = __ieee754_sqrtf(x);
    return fVar10;
  }
  fVar10 = y;
  fVar11 = fabsf(x);
  if ((uVar7 < 0x800000) || (uVar7 == 0x3f800000)) {
    if ((int)y < 0) {
      fVar11 = 1.0 / fVar11;
    }
    if (-1 < (int)x) {
      return fVar11;
    }
    if ((uVar7 + 0xc0800000 | uVar9) == 0) {
      return (fVar11 - fVar11) / (fVar11 - fVar11);
    }
    if (uVar9 == 1) {
      return -fVar11;
    }
    return fVar11;
  }
  if ((-((int)x >> 0x1f) - 1U | uVar9) == 0) {
    return (x - x) / (x - x);
  }
  if (uVar5 < 0x4d000001) {
    uVar5 = (uint)x & 0x7fffff;
    iVar6 = ((int)uVar7 >> 0x17) + -0x7f;
    fVar11 = (float)(uVar5 | 0x3f800000);
    iVar8 = 0;
    if ((0x1cc471 < uVar5) && (iVar8 = 1, 0x5db3d6 < uVar5)) {
      iVar6 = ((int)uVar7 >> 0x17) + -0x7e;
      fVar11 = (float)((int)fVar11 - 0x800000);
      iVar8 = 0;
    }
    iVar4 = iVar8 * 4;
    fVar12 = *(float *)(&bp + iVar4);
    fVar14 = 1.0 / (fVar11 + fVar12);
    fVar17 = (fVar11 - fVar12) * fVar14;
    fVar13 = (float)((uint)fVar17 & 0xfffff000);
    fVar15 = (float)(((int)fVar11 >> 1 | 0x20000000U) + iVar8 * 0x200000 + 0x40000);
    fVar16 = fVar17 * fVar17;
    fVar14 = fVar14 * (((fVar11 - fVar12) - fVar13 * fVar15) - fVar13 * (fVar11 - (fVar15 - fVar12))
                      );
    fVar15 = fVar16 * fVar16 *
             (fVar16 * (fVar16 * (fVar16 * (fVar16 * (fVar16 * 0.206975 + 0.2306607) + 0.2727281) +
                                 0.3333333) + 0.4285714) + 0.6) + fVar14 * (fVar13 + fVar17);
    fVar11 = (float)((uint)(fVar13 * fVar13 + 3.0 + fVar15) & 0xfffff000);
    fVar12 = fVar14 * fVar11 + (fVar15 - ((fVar11 - 3.0) - fVar13 * fVar13)) * fVar17;
    fVar15 = (float)((uint)(fVar13 * fVar11 + fVar12) & 0xfffff000);
    fVar13 = fVar15 * 4.701738e-06 + (fVar12 - (fVar15 - fVar13 * fVar11)) * 0.9617966 +
             *(float *)(&dp_l + iVar4);
    fVar11 = (float)((uint)(fVar15 * 0.961792 + fVar13 + *(float *)(&dp_h + iVar4) + (float)iVar6) &
                    0xfffff000);
    fVar13 = fVar13 - (((fVar11 - (float)iVar6) - *(float *)(&dp_h + iVar4)) - fVar15 * 0.961792);
  }
  else {
    if (uVar7 < 0x3f7ffff8) {
      if (-1 < (int)y) {
        return 0.0;
      }
      return DAT_003eb16c;
    }
    if (0x3f800007 < uVar7) {
      if ((int)y < 1) {
        return 0.0;
      }
      return DAT_003eb16c;
    }
    fVar15 = x - 1.0;
    fVar13 = fVar15 * 7.052607e-06 -
             fVar15 * fVar15 * (0.5 - fVar15 * (0.3333333 - fVar15 * 0.25)) * 1.442695;
    fVar11 = (float)((uint)(fVar15 * 1.442688 + fVar13) & 0xfffff000);
    fVar13 = fVar13 - (fVar11 - fVar15 * 1.442688);
  }
  fVar15 = 1.0;
  if ((-((int)x >> 0x1f) - 1U | uVar9 - 1) == 0) {
    fVar15 = -1.0;
  }
  fVar12 = (float)((uint)fVar10 & 0xfffff000) * fVar11;
  fVar11 = (fVar10 - (float)((uint)fVar10 & 0xfffff000)) * fVar11 + fVar10 * fVar13;
  fVar10 = fVar11 + fVar12;
  uVar5 = (uint)fVar10 & 0x7fffffff;
  if ((int)fVar10 < 1) {
    if ((uVar5 < 0x42fc0001) && ((uVar5 != 0x42fc0000 || (fVar10 - fVar12 < fVar11)))) {
LAB_00299d9c:
      iVar8 = 0;
      if (0x3f000000 < uVar5) {
        uVar7 = (int)fVar10 + (0x800000 >> (((int)uVar5 >> 0x17) - 0x7eU & 0x1f));
        uVar5 = (uVar7 >> 0x17 & 0xff) - 0x7f;
        fVar12 = fVar12 - (float)(uVar7 & ~(0x7fffff >> (uVar5 & 0x1f)));
        bVar1 = (int)fVar10 < 0;
        iVar8 = (int)(uVar7 & 0x7fffff | 0x800000) >> (0x17 - uVar5 & 0x1f);
        fVar10 = fVar11 + fVar12;
        if (bVar1) {
          iVar8 = -iVar8;
        }
      }
      fVar10 = (float)((uint)fVar10 & 0xfffff000);
      fVar11 = (fVar11 - (fVar10 - fVar12)) * 0.6931471 + fVar10 * 1.428607e-06;
      fVar13 = fVar10 * 0.6931458 + fVar11;
      fVar12 = fVar13 * fVar13;
      fVar11 = fVar11 - (fVar13 - fVar10 * 0.6931458);
      fVar10 = fVar13 - fVar12 * (fVar12 * (fVar12 * (fVar12 * (fVar12 * 4.138137e-08 + -1.65339e-06
                                                               ) + 6.613755e-05) + -0.002777778) +
                                 0.1666667);
      fVar11 = 1.0 - (((fVar13 * fVar10) / (fVar10 - 2.0) - (fVar11 + fVar13 * fVar11)) - fVar13);
      fVar10 = (float)((int)fVar11 + iVar8 * 0x800000);
      if ((int)fVar10 >> 0x17 < 1) {
        fVar10 = scalbnf(fVar11,iVar8);
      }
      return fVar15 * fVar10;
    }
    fVar10 = 9.999999e-31;
    fVar15 = fVar15 * 9.999999e-31;
  }
  else if (uVar5 < 0x43010001) {
    if ((uVar5 != 0x43010000) || (fVar11 + 4.299566e-08 <= fVar10 - fVar12)) goto LAB_00299d9c;
    fVar10 = 9.999999e+29;
    fVar15 = fVar15 * 9.999999e+29;
  }
  else {
    fVar10 = 9.999999e+29;
    fVar15 = fVar15 * 9.999999e+29;
  }
  return fVar15 * fVar10;
}
