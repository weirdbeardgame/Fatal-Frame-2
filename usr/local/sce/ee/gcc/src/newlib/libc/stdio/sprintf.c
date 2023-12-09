// STATUS: NOT STARTED

#include "sprintf.h"

int _sprintf_r(_reent *ptr, char *str, char *fmt) {
	FILE f;
	
  int iVar1;
  __sFILE f;
  undefined local_28 [40];
  
  f._flags = 0x208;
  f._bf._size = 0x7fffffff;
  f._w = 0x7fffffff;
  f._p = (uchar *)str;
  f._bf._base = (uchar *)str;
  f._data = ptr;
  iVar1 = vfprintf(&f,fmt,local_28);
  *f._p = '\0';
  return iVar1;
}

int sprintf(char *str, char *fmt) {
	FILE f;
	
  int iVar1;
  __sFILE f;
  undefined local_30 [48];
  
  f._bf._size = 0x7fffffff;
  f._w = 0x7fffffff;
  f._flags = 0x208;
  f._data = _impure_ptr;
  f._p = (uchar *)str;
  f._bf._base = (uchar *)str;
  iVar1 = vfprintf(&f,fmt,local_30);
  *f._p = '\0';
  return iVar1;
}
