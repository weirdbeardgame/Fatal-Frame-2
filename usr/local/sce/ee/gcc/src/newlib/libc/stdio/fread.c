// STATUS: NOT STARTED

#include "fread.h"

size_t fread(void *buf, size_t size, size_t count, FILE *fp) {
	size_t resid;
	char *p;
	int r;
	size_t total;
	
  int iVar1;
  uchar *__src;
  ulong __n;
  int iVar2;
  ulong __n_00;
  
  __n_00 = (ulong)(int)(count * size);
  if (__n_00 == 0) {
    count = 0;
  }
  else {
    __n = (ulong)fp->_r;
    if ((long)__n < 0) {
      fp->_r = 0;
      __n = 0;
    }
    if (__n < __n_00) {
      __src = fp->_p;
      while( true ) {
        iVar1 = (int)__n;
        iVar2 = (int)__n_00 - iVar1;
        __n_00 = (ulong)iVar2;
        memcpy(buf,__src,__n);
        buf = (void *)((int)buf + iVar1);
        fp->_p = fp->_p + iVar1;
        iVar1 = __srefill(fp);
        if (iVar1 != 0) break;
        __n = (ulong)fp->_r;
        if (__n_00 <= __n) goto LAB_002aa9b0;
        __src = fp->_p;
      }
      if (size == 0) {
        trap(7);
      }
      count = (int)(count * size - iVar2) / (int)size;
    }
    else {
LAB_002aa9b0:
      memcpy(buf,fp->_p,__n_00);
      fp->_r = fp->_r - (int)__n_00;
      fp->_p = fp->_p + (int)__n_00;
    }
  }
  return count;
}
