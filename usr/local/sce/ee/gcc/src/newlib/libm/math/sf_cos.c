// STATUS: NOT STARTED

#include "sf_cos.h"

static float one = 1.f;

float cosf(float x) {
	float y[2];
	__int32_t ix;
	
  uint uVar1;
  float fVar2;
  float y [2];
  
  if (((uint)x & 0x7fffffff) < 0x3f490fd9) {
    fVar2 = __kernel_cosf(x,0.0);
  }
  else {
    uVar1 = __ieee754_rem_pio2f(x,y);
    uVar1 = uVar1 & 3;
    if (uVar1 == 1) {
      fVar2 = __kernel_sinf(y[0],y[1],1);
      fVar2 = -fVar2;
    }
    else {
      if (uVar1 < 2) {
        if (uVar1 == 0) {
          fVar2 = __kernel_cosf(y[0],y[1]);
          return fVar2;
        }
      }
      else if (uVar1 == 2) {
        fVar2 = __kernel_cosf(y[0],y[1]);
        return -fVar2;
      }
      fVar2 = __kernel_sinf(y[0],y[1],1);
    }
  }
  return fVar2;
}
