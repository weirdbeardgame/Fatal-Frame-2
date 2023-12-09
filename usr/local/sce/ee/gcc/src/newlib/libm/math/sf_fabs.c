// STATUS: NOT STARTED

#include "sf_fabs.h"

float fabsf(float x) {
  return (float)((uint)x & 0x7fffffff);
}
