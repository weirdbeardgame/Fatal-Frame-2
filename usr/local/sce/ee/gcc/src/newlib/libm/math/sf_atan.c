// STATUS: NOT STARTED

#include "sf_atan.h"

static float atanhi[0] = {
};

static float atanlo[0] = {
};

static float aT[0] = {
};

static float one = 1.f;
static float huge = 9.99999939e+29f;

float atanf(float x) {
	float w;
	float s1;
	float s2;
	float z;
	__int32_t ix;
	__int32_t id;
	
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = (uint)x & 0x7fffffff;
  if (0x507fffff < uVar2) {
    if (0 < (int)x) {
      return DAT_003eb00c + DAT_003eb01c;
    }
    return -DAT_003eb00c - DAT_003eb01c;
  }
  if (uVar2 < 0x3ee00000) {
    iVar1 = -1;
    fVar5 = x;
    if (uVar2 < 0x31000000) {
      if (1.0 < x + 9.999999e+29) {
        return x;
      }
      fVar6 = x * x;
      goto LAB_002988c8;
    }
  }
  else {
    fVar5 = fabsf(x);
    if (uVar2 < 0x3f980000) {
      if (uVar2 < 0x3f300000) {
        fVar5 = ((fVar5 + fVar5) - 1.0) / (fVar5 + 2.0);
        iVar1 = 0;
      }
      else {
        fVar5 = (fVar5 - 1.0) / (fVar5 + 1.0);
        iVar1 = 1;
      }
    }
    else if (uVar2 < 0x401c0000) {
      fVar5 = (fVar5 - 1.5) / (fVar5 * 1.5 + 1.0);
      iVar1 = 2;
    }
    else {
      iVar1 = 3;
      fVar5 = -1.0 / fVar5;
    }
  }
  fVar6 = fVar5 * fVar5;
LAB_002988c8:
  fVar4 = fVar6 * fVar6;
  fVar3 = fVar4 * (DAT_003eb024 +
                  fVar4 * (DAT_003eb02c +
                          fVar4 * (DAT_003eb034 + fVar4 * (DAT_003eb03c + fVar4 * DAT_003eb044))));
  fVar6 = fVar6 * (_aT + fVar4 * (DAT_003eb028 +
                                 fVar4 * (DAT_003eb030 +
                                         fVar4 * (DAT_003eb038 +
                                                 fVar4 * (DAT_003eb040 + fVar4 * DAT_003eb048)))));
  if (iVar1 < 0) {
    fVar5 = fVar5 - fVar5 * (fVar6 + fVar3);
  }
  else {
    fVar5 = *(float *)(&atanhi + iVar1 * 4) -
            ((fVar5 * (fVar6 + fVar3) - *(float *)(&atanlo + iVar1 * 4)) - fVar5);
    if ((int)x < 0) {
      fVar5 = -fVar5;
    }
  }
  return fVar5;
}
