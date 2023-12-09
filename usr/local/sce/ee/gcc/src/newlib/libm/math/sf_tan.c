// STATUS: NOT STARTED

#include "sf_tan.h"

float tanf(float x) {
	float y[2];
	__int32_t ix;
	
  uint uVar1;
  float fVar2;
  float y [2];
  
  if (((uint)x & 0x7fffffff) < 0x3f490fdb) {
    fVar2 = __kernel_tanf(x,0.0,1);
  }
  else {
    uVar1 = __ieee754_rem_pio2f(x,y);
    fVar2 = __kernel_tanf(y[0],y[1],(uVar1 & 1) * -2 + 1);
  }
  return fVar2;
}
