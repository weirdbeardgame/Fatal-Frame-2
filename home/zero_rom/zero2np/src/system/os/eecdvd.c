// STATUS: NOT STARTED

#include "eecdvd.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a59e0;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003efc58,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003efc60,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int LoadReq(int file_no, unsigned int addr) {
  uint uVar1;
  int iVar2;
  
  uVar1 = GetFileSize(file_no);
  if (uVar1 != 0) {
    iVar2 = FileLoadReqEE(file_no,(void *)addr,6,(undefined1 *)0x0,(void *)0x0);
    return iVar2;
  }
  return -1;
}

unsigned int LoadReqGetAddr(int file_no, unsigned int addr, int *id) {
	unsigned int size;
	int ret_id;
	
  uint uVar1;
  int iVar2;
  
  uVar1 = GetFileSize(file_no);
  uVar1 = GetAlignUp(uVar1,6);
  iVar2 = -1;
  if (uVar1 != 0) {
    iVar2 = FileLoadReqEE(file_no,(void *)addr,6,(undefined1 *)0x0,(void *)0x0);
  }
  if (id != (int *)0x0) {
    *id = iVar2;
  }
  return uVar1 + addr;
}

int LoadReqSe(int file_no, unsigned char se_type) {
  return 0;
}

int IsLoadEndAll() {
  int iVar1;
  
  iVar1 = AllFileLoadIsEnd();
  return iVar1;
}

int IsLoadEnd(int id) {
  int iVar1;
  
  iVar1 = FileLoadIsEnd(id);
  return iVar1;
}

int FileLoadReqEE_L(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg) {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadReqEE(file_no + (char)uVar1,adrs,priority,func,arg);
  return iVar2;
}

int FileLoadIsEnd2_L(int file_no, void *adrs) {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2(file_no + (char)uVar1,adrs);
  return iVar2;
}

unsigned int GetFileSize_L(int file_no) {
  uchar uVar1;
  uint uVar2;
  
  uVar1 = GetLanguage__Fv();
  uVar2 = GetFileSize(file_no + (char)uVar1);
  return uVar2;
}
