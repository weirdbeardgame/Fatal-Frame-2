// STATUS: NOT STARTED

#include "sscanf.h"

static int eofread(void *cookie, char *buf, int len) {
  return 0;
}

int sscanf(char *str, char *fmt) {
	FILE f;
	
  int iVar1;
  size_t sVar2;
  __sFILE f;
  undefined local_30 [48];
  
  f._flags = 4;
  f._p = (uchar *)str;
  f._bf._base = (uchar *)str;
  sVar2 = strlen(str);
  f._r = (int)sVar2;
  f._read = eofread;
  f._data = _impure_ptr;
  f._ub._base = (uchar *)0x0;
  f._lb._base = (uchar *)0x0;
  f._bf._size = f._r;
  iVar1 = __svfscanf(&f,fmt,local_30);
  return iVar1;
}
