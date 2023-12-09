// STATUS: NOT STARTED

#include "strtol.h"

long int _strtol_r(_reent *rptr, char *nptr, char **endptr, int base) {
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
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  ulong v;
  
  v = (ulong)base;
  bVar3 = false;
  pcVar12 = nptr;
  do {
    pcVar11 = pcVar12;
    lVar10 = (long)*pcVar11;
    pcVar12 = pcVar11 + 1;
  } while ((""[*pcVar11 + 1] & 8U) != 0);
  if (lVar10 == 0x2d) {
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar11 + 2;
    bVar3 = true;
  }
  else if (lVar10 == 0x2b) {
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar11 + 2;
  }
  if ((((v == 0) || (v == 0x10)) && (lVar10 == 0x30)) && ((*pcVar12 == 'x' || (*pcVar12 == 'X')))) {
    lVar10 = (long)pcVar12[1];
    pcVar12 = pcVar12 + 2;
    v = 0x10;
  }
  if ((v == 0) && (v = 8, lVar10 != 0x30)) {
    v = 10;
  }
  uVar7 = 0x8000000000000000;
  if (!bVar3) {
    uVar7 = 0x7fffffffffffffff;
  }
  uVar4 = __umoddi3(uVar7,v);
  uVar5 = __udivdi3(uVar7,v);
  iVar8 = 0;
  uVar7 = 0;
  do {
    iVar9 = (int)lVar10;
    bVar1 = ""[iVar9 + 1];
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 3) == 0) {
LAB_002a5868:
        if (iVar8 < 0) {
          uVar7 = 0x8000000000000000;
          if (!bVar3) {
            uVar7 = 0x7fffffffffffffff;
          }
          rptr->_errno = 0x22;
        }
        else if (bVar3) {
          uVar7 = -uVar7;
        }
        if (endptr != (char **)0x0) {
          if (iVar8 != 0) {
            nptr = pcVar12 + -1;
          }
          *endptr = nptr;
        }
        return uVar7;
      }
      iVar2 = iVar9 + -0x37;
      if ((bVar1 & 1) == 0) {
        iVar2 = iVar9 + -0x57;
      }
    }
    else {
      iVar2 = iVar9 + -0x30;
    }
    lVar10 = (long)iVar2;
    if ((long)v <= lVar10) goto LAB_002a5868;
    if (iVar8 < 0) {
LAB_002a5808:
      iVar8 = -1;
    }
    else if (uVar5 < uVar7) {
      iVar8 = -1;
    }
    else {
      if ((uVar7 == uVar5) && ((int)uVar4 < lVar10)) goto LAB_002a5808;
      lVar6 = __muldi3(uVar7,v);
      iVar8 = 1;
      uVar7 = lVar10 + lVar6;
    }
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar12 + 1;
  } while( true );
}

long int strtol(char *s, char **ptr, int base) {
  long lVar1;
  
  lVar1 = _strtol_r(_impure_ptr,s,ptr,base);
  return lVar1;
}
