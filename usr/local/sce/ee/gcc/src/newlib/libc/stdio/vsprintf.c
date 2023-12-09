// STATUS: NOT STARTED

#include "vsprintf.h"

int vsprintf(char *str, char *fmt, va_list ap) {
	FILE f;
	
  int iVar1;
  __sFILE f;
  
  f._bf._size = 0x7fffffff;
  f._w = 0x7fffffff;
  f._flags = 0x208;
  f._data = _impure_ptr;
  f._p = (uchar *)str;
  f._bf._base = (uchar *)str;
  iVar1 = vfprintf(&f,fmt,ap);
  *f._p = '\0';
  return iVar1;
}

int vsprintf_r(_reent *ptr, char *str, char *fmt, va_list ap) {
	FILE f;
	
  int iVar1;
  __sFILE f;
  
  f._bf._size = 0x7fffffff;
  f._w = 0x7fffffff;
  f._flags = 0x208;
  f._p = (uchar *)str;
  f._bf._base = (uchar *)str;
  f._data = ptr;
  iVar1 = vfprintf(&f,fmt,ap);
  *f._p = '\0';
  return iVar1;
}
