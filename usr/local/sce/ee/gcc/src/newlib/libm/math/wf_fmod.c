// STATUS: NOT STARTED

#include "wf_fmod.h"

float fmodf(float x, float y) {
  float fVar1;
  
  fVar1 = __ieee754_fmodf(x,y);
  return fVar1;
}
