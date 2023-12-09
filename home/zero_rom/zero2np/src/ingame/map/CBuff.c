// STATUS: NOT STARTED

#include "CBuff.h"

static int CBuffNum = 0;
static int CBuffMaxLen = 0;
static int CBuffMaxNum = 0;
static char *CBuffStr;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39db00;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003eeab0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003eeab8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int CBuffGetRegistNum() {
  return CBuffNum;
}

char* CBuffGetStr(int id) {
  if ((-1 < id) && (id < CBuffNum)) {
    return CBuffStr + CBuffMaxLen * id;
  }
  return (char *)0x0;
}

int CBuffSetStr(char *str) {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < CBuffNum) {
    do {
      iVar1 = CBuffMaxLen * iVar2;
      iVar2 = iVar2 + 1;
      iVar1 = strcmp(CBuffStr + iVar1,str);
      if (iVar1 == 0) {
        return 1;
      }
    } while (iVar2 < CBuffNum);
  }
  strcpy(CBuffStr + CBuffMaxLen * iVar2,str);
  CBuffNum = CBuffNum + 1;
  return 0;
}

void CBuffReset() {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < CBuffMaxNum) {
    do {
      iVar1 = CBuffMaxLen * iVar2;
      iVar2 = iVar2 + 1;
      CBuffStr[iVar1] = '\0';
    } while (iVar2 < CBuffMaxNum);
  }
  CBuffNum = 0;
  return;
}

void CBuffInit(int max_len, int max_num) {
  _HEAP_WRK *wrk;
  
  wrk = GetSystemHeapWrkP__Fv();
  CBuffStr = (char *)SAFE_MALLOC(wrk,(void *)0x0,max_len * max_num);
  CBuffMaxLen = max_len;
  CBuffMaxNum = max_num;
  CBuffReset__Fv();
  return;
}

void CBuffTerm() {
  _HEAP_WRK *wrk;
  
  if (CBuffStr != (char *)0x0) {
    wrk = GetSystemHeapWrkP__Fv();
    heapCtrlFree(wrk,CBuffStr);
    CBuffStr = (char *)0x0;
  }
  return;
}
