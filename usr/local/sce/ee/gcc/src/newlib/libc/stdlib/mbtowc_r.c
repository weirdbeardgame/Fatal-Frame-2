// STATUS: NOT STARTED

#include "mbtowc_r.h"

int _mbtowc_r(_reent *r, wchar_t *pwc, char *s, size_t n, int *state) {
	wchar_t dummy;
	
  uint uVar1;
  uint *puVar2;
  int dummy;
  
  uVar1 = 0;
  puVar2 = (uint *)&dummy;
  if (pwc != (int *)0x0) {
    puVar2 = (uint *)pwc;
  }
  if ((s != (char *)0x0) && (uVar1 = 0xffffffff, n != 0)) {
    *puVar2 = (uint)(byte)*s;
    uVar1 = (uint)(*s != '\0');
  }
  return uVar1;
}
