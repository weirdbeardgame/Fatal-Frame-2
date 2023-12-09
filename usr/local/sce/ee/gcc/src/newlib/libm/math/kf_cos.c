// STATUS: NOT STARTED

#include "kf_cos.h"

static float one = 1.f;
static float C1 = 0.0416666642f;
static float C2 = -0.00138888881f;
static float C3 = 2.48015858e-05f;
static float C4 = -2.75573115e-07f;
static float C5 = 2.08757212e-09f;
static float C6 = -1.13596476e-11f;

float __kernel_cosf(float x, float y) {
	float a;
	float hz;
	float z;
	float r;
	float qx;
	__int32_t ix;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = (uint)x & 0x7fffffff;
  if ((0x31ffffff < uVar1) || (fVar3 = 1.0, (int)x != 0)) {
    fVar4 = x * x;
    fVar3 = fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * (fVar4 * -1.135965e-11 + 2.087572e-09) +
                                               -2.755731e-07) + 2.480159e-05) + -0.001388889) +
                    0.04166666);
    if (uVar1 < 0x3e99999a) {
      fVar3 = 1.0 - (fVar4 * 0.5 - (fVar4 * fVar3 - x * y));
    }
    else {
      fVar2 = 0.28125;
      if (uVar1 < 0x3f480001) {
        fVar2 = (float)(uVar1 - 0x1000000);
      }
      fVar3 = (1.0 - fVar2) - ((fVar4 * 0.5 - fVar2) - (fVar4 * fVar3 - x * y));
    }
  }
  return fVar3;
}
