// STATUS: NOT STARTED

#include "ef_atan2.h"

static float tiny = 9.99999909e-31f;
static float zero = 0.f;
static float pi_o_4 = 0.785398126f;
static float pi_o_2 = 1.57079625f;
static float pi = 3.1415925f;
static float pi_lo = 1.50995788e-07f;

float __ieee754_atan2f(float y, float x) {
	float z;
	__int32_t k;
	__int32_t m;
	__int32_t ix;
	__int32_t iy;
	
  int iVar1;
  uint uVar2;
  float fVar3;
  
  if (x == 1.0) {
    fVar3 = atanf(y);
    return fVar3;
  }
  uVar2 = (uint)y >> 0x1f | (int)x >> 0x1e & 2U;
  if (((uint)y & 0x7fffffff) < 0x800000) {
    if (uVar2 == 2) {
      return 3.141593;
    }
    if (uVar2 < 3) {
      return y;
    }
    if (uVar2 == 3) {
      return -3.141593;
    }
  }
  if (((uint)x & 0x7fffffff) < 0x800000) {
    fVar3 = -1.570796;
    if (-1 < (int)y) {
      fVar3 = 1.570796;
    }
  }
  else {
    fVar3 = 1.570796;
    iVar1 = (int)(((uint)y & 0x7fffffff) - ((uint)x & 0x7fffffff)) >> 0x17;
    if ((iVar1 < 0x3d) && ((-1 < (int)x || (fVar3 = 0.0, -0x3d < iVar1)))) {
      fVar3 = fabsf(y / x);
      fVar3 = atanf(fVar3);
    }
    if (uVar2 == 1) {
      fVar3 = (float)((uint)fVar3 ^ 0x80000000);
    }
    else {
      if (uVar2 < 2) {
        if (uVar2 == 0) {
          return fVar3;
        }
      }
      else if (uVar2 == 2) {
        return 3.141593 - (fVar3 - 1.509958e-07);
      }
      fVar3 = (fVar3 - 1.509958e-07) - 3.141593;
    }
  }
  return fVar3;
}
