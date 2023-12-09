// STATUS: NOT STARTED

#include "wf_pow.h"

float powf(float x, float y) {
  float fVar1;
  
  fVar1 = __ieee754_powf(x,y);
  return fVar1;
}
