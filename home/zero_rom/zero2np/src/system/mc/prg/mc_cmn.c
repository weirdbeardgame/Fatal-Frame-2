// STATUS: NOT STARTED

#include "mc_cmn.h"

int MemoryCardExeEndSync(int *result) {
  int iVar1;
  
  iVar1 = sceMcSync(1,0,result);
  return iVar1;
}

int GetMemoryCardFreeSizeForBrowser() {
	int size;
	
  int iVar1;
  
  iVar1 = GetAccessMemoryCardFreeCluster__Fv();
  iVar1 = iVar1 + -2;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

int CalcMemoryCardDataCheckSum(char *data_addr, int size) {
	u_int check_sum;
	int i;
	
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < size) {
    do {
      cVar1 = *data_addr;
      data_addr = data_addr + 1;
      size = size + -1;
      iVar2 = iVar2 + cVar1;
    } while (size != 0);
  }
  return iVar2;
}

void SetMemoryCardDataCheckSum(char *addr, int check_sum) {
	char *check_sum_addr;
	int i;
	
  char cVar1;
  int iVar2;
  int *piVar3;
  int local_10 [4];
  
  piVar3 = local_10;
  iVar2 = 3;
  local_10[0] = check_sum;
  do {
    cVar1 = *(char *)piVar3;
    piVar3 = (int *)((int)piVar3 + 1);
    iVar2 = iVar2 + -1;
    *addr = cVar1;
    addr = addr + 1;
  } while (-1 < iVar2);
  return;
}
