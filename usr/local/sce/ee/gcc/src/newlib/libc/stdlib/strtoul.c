// STATUS: NOT STARTED

#include "strtoul.h"

long unsigned int _strtoul_r(_reent *rptr, char *nptr, char **endptr, int base) {
	char *s;
	long unsigned int acc;
	int c;
	long unsigned int cutoff;
	int neg;
	int any;
	int cutlim;
	
  byte bVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong u;
  int iVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  ulong d;
  int neg;
  
  d = (ulong)base;
  bVar3 = false;
  pcVar11 = nptr;
  do {
    pcVar10 = pcVar11;
    lVar9 = (long)*pcVar10;
    pcVar11 = pcVar10 + 1;
  } while ((""[*pcVar10 + 1] & 8U) != 0);
  if (lVar9 == 0x2d) {
    lVar9 = (long)*pcVar11;
    pcVar11 = pcVar10 + 2;
    bVar3 = true;
  }
  else if (lVar9 == 0x2b) {
    lVar9 = (long)*pcVar11;
    pcVar11 = pcVar10 + 2;
  }
  if ((((d == 0) || (d == 0x10)) && (lVar9 == 0x30)) && ((*pcVar11 == 'x' || (*pcVar11 == 'X')))) {
    lVar9 = (long)pcVar11[1];
    pcVar11 = pcVar11 + 2;
    d = 0x10;
  }
  if (d == 0) {
    d = 8;
    if (lVar9 != 0x30) {
      d = 10;
    }
  }
  uVar4 = __udivdi3(0xffffffffffffffff,d);
  iVar7 = 0;
  uVar5 = __umoddi3(0xffffffffffffffff,d);
  u = 0;
  do {
    iVar8 = (int)lVar9;
    bVar1 = ""[iVar8 + 1];
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 3) == 0) {
LAB_002adaf0:
        if (iVar7 < 0) {
          rptr->_errno = 0x22;
          u = 0xffffffffffffffff;
        }
        else if (bVar3) {
          u = -u;
        }
        if (endptr != (char **)0x0) {
          if (iVar7 != 0) {
            nptr = pcVar11 + -1;
          }
          *endptr = nptr;
        }
        return u;
      }
      iVar2 = iVar8 + -0x37;
      if ((bVar1 & 1) == 0) {
        iVar2 = iVar8 + -0x57;
      }
    }
    else {
      iVar2 = iVar8 + -0x30;
    }
    lVar9 = (long)iVar2;
    if ((long)d <= lVar9) goto LAB_002adaf0;
    if (iVar7 < 0) {
LAB_002ada90:
      iVar7 = -1;
    }
    else if (uVar4 < u) {
      iVar7 = -1;
    }
    else {
      if ((u == uVar4) && ((int)uVar5 < lVar9)) goto LAB_002ada90;
      lVar6 = __muldi3(u,d);
      iVar7 = 1;
      u = lVar9 + lVar6;
    }
    lVar9 = (long)*pcVar11;
    pcVar11 = pcVar11 + 1;
  } while( true );
}

long unsigned int strtoul(char *s, char **ptr, int base) {
  ulong uVar1;
  
  uVar1 = _strtoul_r(_impure_ptr,s,ptr,base);
  return uVar1;
}
