// STATUS: NOT STARTED

#include "kf_sin.h"

static float half = 0.5f;
static float S1 = -0.166666657f;
static float S2 = 0.00833333377f;
static float S3 = -0.000198412701f;
static float S4 = 2.7557312e-06f;
static float S5 = -2.50507597e-08f;
static float S6 = 1.58969088e-10f;

float __kernel_sinf(float x, float y, int iy) {
	float z;
	float r;
	float v;
	__int32_t ix;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((0x31ffffff < ((uint)x & 0x7fffffff)) || ((int)x != 0)) {
    fVar2 = x * x;
    fVar3 = fVar2 * x;
    fVar1 = fVar2 * (fVar2 * (fVar2 * (fVar2 * 1.589691e-10 + -2.505076e-08) + 2.755731e-06) +
                    -0.0001984127) + 0.008333334;
    if (iy == 0) {
      x = x + fVar3 * (fVar2 * fVar1 + -0.1666667);
    }
    else {
      x = x - ((fVar2 * (y * 0.5 - fVar3 * fVar1) - y) - fVar3 * -0.1666667);
    }
  }
  return x;
}
