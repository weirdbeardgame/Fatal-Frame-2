// STATUS: NOT STARTED

#include "ef_log.h"

static float ln2_hi = 0.693138123f;
static float ln2_lo = 9.05800061e-06f;
static float two25 = 33554432.f;
static float Lg1 = 0.666666627f;
static float Lg2 = 0.399999976f;
static float Lg3 = 0.285714298f;
static float Lg4 = 0.222221985f;
static float Lg5 = 0.181835711f;
static float Lg6 = 0.153138369f;
static float Lg7 = 0.147981972f;
static float zero = 0.f;

float __ieee754_logf(float x) {
	float hfsq;
	float f;
	float s;
	float z;
	float R;
	float w;
	float t1;
	float t2;
	float dk;
	__int32_t k;
	__int32_t ix;
	__int32_t i;
	__int32_t j;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((uint)x & 0x7fffffff) < 0x800000) {
    return DAT_003eb0e4;
  }
  if ((int)x < 0) {
    return (x - x) / 0.0;
  }
  uVar3 = (uint)x & 0x7fffff;
  uVar1 = uVar3 + 0x4afb20 & 0x800000;
  iVar2 = ((int)x >> 0x17) + -0x7f + ((int)uVar1 >> 0x17);
  fVar8 = (float)(uVar3 | uVar1 ^ 0x3f800000) - 1.0;
  if ((uVar3 + 0xf & 0x7fffff) < 0x10) {
    fVar4 = 0.0;
    if (fVar8 != 0.0) {
      fVar4 = fVar8 * fVar8 * (0.5 - fVar8 * 0.3333333);
      if (iVar2 == 0) {
        return fVar8 - fVar4;
      }
      return (float)iVar2 * 0.6931381 - ((fVar4 - (float)iVar2 * 9.058001e-06) - fVar8);
    }
    if (iVar2 != 0) {
      return (float)iVar2 * 0.6931381 + (float)iVar2 * 9.058001e-06;
    }
  }
  else {
    fVar7 = fVar8 / (fVar8 + 2.0);
    fVar6 = (float)iVar2;
    fVar5 = fVar7 * fVar7;
    fVar4 = fVar5 * fVar5;
    fVar4 = fVar5 * (fVar4 * (fVar4 * (fVar4 * 0.147982 + 0.1818357) + 0.2857143) + 0.6666666) +
            fVar4 * (fVar4 * (fVar4 * 0.1531384 + 0.222222) + 0.4);
    if (0 < (int)(uVar3 - 0x30a3d0 | 0x35c288 - uVar3)) {
      fVar5 = fVar8 * 0.5 * fVar8;
      if (iVar2 == 0) {
        return fVar8 - (fVar5 - fVar7 * (fVar5 + fVar4));
      }
      return fVar6 * 0.6931381 -
             ((fVar5 - (fVar7 * (fVar5 + fVar4) + fVar6 * 9.058001e-06)) - fVar8);
    }
    if (iVar2 == 0) {
      return fVar8 - fVar7 * (fVar8 - fVar4);
    }
    fVar4 = fVar6 * 0.6931381 - ((fVar7 * (fVar8 - fVar4) - fVar6 * 9.058001e-06) - fVar8);
  }
  return fVar4;
}
