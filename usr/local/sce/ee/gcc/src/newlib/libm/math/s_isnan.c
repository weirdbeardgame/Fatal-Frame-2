// STATUS: NOT STARTED

#include "s_isnan.h"

int isnan(double x) {
	__int32_t hx;
	
  return 0x7ff00000 - ((uint)((ulong)x >> 0x20) & 0x7fffffff | ((uint)x | -(uint)x) >> 0x1f) >> 0x1f
  ;
}
