// STATUS: NOT STARTED

#include "ef_rem_pio2.h"

static __int32_t two_over_pi[0] = {
};

static __int32_t npio2_hw[0] = {
};

static float zero = 0.f;
static float half = 0.5f;
static float two8 = 256.f;
static float invpio2 = 0.636619806f;
static float pio2_1 = 1.57078552f;
static float pio2_1t = 1.08043332e-05f;
static float pio2_2 = 1.08042723e-05f;
static float pio2_2t = 6.0771e-11f;
static float pio2_3 = 6.07709438e-11f;
static float pio2_3t = 6.1232336e-17f;

__int32_t __ieee754_rem_pio2f(float x, float *y) {
	float z;
	float w;
	float t;
	float r;
	float fn;
	float tx[3];
	__int32_t i;
	__int32_t j;
	__int32_t n;
	__int32_t ix;
	int e0;
	int nx;
	
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float tx [3];
  
  pfVar3 = tx;
  uVar4 = (uint)x & 0x7fffffff;
  if (uVar4 < 0x3f490fd9) {
    *y = x;
    y[1] = 0.0;
    return 0;
  }
  if (uVar4 < 0x4016cbe4) {
    if (0 < (int)x) {
      fVar8 = x - 1.570786;
      if (((uint)x & 0x7ffffff0) == 0x3fc90fd0) {
        fVar6 = 6.0771e-11;
        fVar8 = fVar8 - 1.080427e-05;
        fVar5 = fVar8 - 6.0771e-11;
      }
      else {
        fVar6 = 1.080433e-05;
        fVar5 = fVar8 - 1.080433e-05;
      }
      *y = fVar5;
      y[1] = (fVar8 - fVar5) - fVar6;
      return 1;
    }
    fVar8 = x + 1.570786;
    if (((uint)x & 0x7ffffff0) == 0x3fc90fd0) {
      fVar6 = 6.0771e-11;
      fVar8 = fVar8 + 1.080427e-05;
      fVar5 = fVar8 + 6.0771e-11;
    }
    else {
      fVar6 = 1.080433e-05;
      fVar5 = fVar8 + 1.080433e-05;
    }
    *y = fVar5;
    y[1] = (fVar8 - fVar5) + fVar6;
    return -1;
  }
  iVar1 = (int)uVar4 >> 0x17;
  if (0x43490f80 < uVar4) {
    tx[2] = (float)(uVar4 + (iVar1 + -0x86) * -0x800000);
    iVar2 = 1;
    do {
      iVar2 = iVar2 + -1;
      *pfVar3 = (float)(int)tx[2];
      pfVar3 = pfVar3 + 1;
      tx[2] = (tx[2] - (float)(int)tx[2]) * 256.0;
    } while (-1 < iVar2);
    iVar2 = 3;
    if (tx[2] == 0.0) {
      pfVar3 = tx + 2;
      do {
        pfVar3 = pfVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (*pfVar3 == 0.0);
    }
    iVar2 = __kernel_rem_pio2f(tx,y,iVar1 + -0x86,iVar2,2,(int *)&two_over_pi);
    if (-1 < (int)x) {
      return iVar2;
    }
    fVar5 = *y;
    fVar6 = y[1];
    goto LAB_0029a2e4;
  }
  fVar8 = fabsf(x);
  iVar2 = (int)(fVar8 * 0.6366198 + 0.5);
  fVar5 = (float)iVar2;
  fVar6 = fVar5 * 1.080433e-05;
  fVar8 = fVar8 - fVar5 * 1.570786;
  if ((iVar2 < 0x20) && (((uint)x & 0x7fffff00) != *(uint *)(&DAT_003eb484 + iVar2 * 4))) {
    *y = fVar8 - fVar6;
LAB_0029a204:
    fVar5 = *y;
    fVar7 = fVar8;
  }
  else {
    *y = fVar8 - fVar6;
    if ((int)(iVar1 - ((uint)(fVar8 - fVar6) >> 0x17 & 0xff)) < 9) {
      fVar5 = *y;
      fVar7 = fVar8;
    }
    else {
      fVar7 = fVar8 - fVar5 * 1.080427e-05;
      fVar6 = fVar5 * 6.0771e-11 - ((fVar8 - fVar7) - fVar5 * 1.080427e-05);
      *y = fVar7 - fVar6;
      if (0x19 < (int)(iVar1 - ((uint)(fVar7 - fVar6) >> 0x17 & 0xff))) {
        fVar8 = fVar7 - fVar5 * 6.077094e-11;
        fVar6 = fVar5 * 6.123234e-17 - ((fVar7 - fVar8) - fVar5 * 6.077094e-11);
        *y = fVar8 - fVar6;
        goto LAB_0029a204;
      }
      fVar5 = *y;
    }
  }
  fVar6 = (fVar7 - fVar5) - fVar6;
  y[1] = fVar6;
  if (-1 < (int)x) {
    return iVar2;
  }
LAB_0029a2e4:
  *y = -fVar5;
  y[1] = -fVar6;
  return -iVar2;
}
