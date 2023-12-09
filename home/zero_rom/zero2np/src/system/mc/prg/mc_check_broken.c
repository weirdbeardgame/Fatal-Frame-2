// STATUS: NOT STARTED

#include "mc_check_broken.h"

int MemoryCardCheckDirBroken(int dir_label) {
	int res;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = GetMemoryCardAllFileNum__Fi(dir_label);
  iVar2 = GetMemoryCardCheckDirFileNum__Fv();
  if (iVar1 == iVar2) {
    iVar1 = GetMemoryCardDirSizeCluster__Fi(dir_label);
    iVar2 = GetMemoryCardCheckDirSize__Fv();
    uVar3 = (uint)(iVar1 == iVar2);
  }
  return uVar3;
}

int MemoryCardCheckFileBroken(void *data_addr, int size) {
	int i;
	int res;
	int check_sum;
	int load_check_sum;
	char *addr;
	char *check_sum_addr;
	
  undefined uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  int load_check_sum;
  
  piVar6 = &load_check_sum;
  puVar5 = (undefined *)((int)data_addr + size + -4);
  load_check_sum = 0;
  iVar2 = CalcMemoryCardDataCheckSum__FPci((char *)data_addr,size + -4);
  iVar3 = 3;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    iVar3 = iVar3 + -1;
    *(undefined *)piVar6 = uVar1;
    piVar6 = (int *)((int)piVar6 + 1);
  } while (-1 < iVar3);
  MemoryCardPrint__FPce("load check sum %d data check sum %d\n");
  uVar4 = (uint)(iVar2 == load_check_sum);
  if ((iVar2 == 0) && (load_check_sum == -1)) {
    uVar4 = 1;
  }
  return uVar4;
}

int MemoryCardCheckNewFileLoad(void *data_addr, int size) {
	int i;
	int res;
	int check_sum;
	int load_check_sum;
	char *addr;
	char *check_sum_addr;
	
  undefined uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  int size_00;
  uint uVar7;
  int load_check_sum;
  
  piVar6 = &load_check_sum;
  size_00 = size + -4;
  uVar7 = 0;
  puVar5 = (undefined *)((int)data_addr + size_00);
  load_check_sum = 0;
  iVar3 = CalcMemoryCardDataCheckSum__FPci((char *)data_addr,size_00);
  iVar4 = 3;
  do {
    uVar1 = *puVar5;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
    *(undefined *)piVar6 = uVar1;
    piVar6 = (int *)((int)piVar6 + 1);
  } while (-1 < iVar4);
  MemoryCardPrint__FPce("load check sum %d data check sum %d\n");
  if (iVar3 == 0) {
    uVar7 = (uint)(load_check_sum == -1);
  }
  iVar3 = 0;
  if (0 < size_00) {
                    /* WARNING: Load size is inaccurate */
    cVar2 = *data_addr;
    while (cVar2 == '\0') {
      iVar3 = iVar3 + 1;
      data_addr = (void *)((int)data_addr + 1);
      if (size_00 <= iVar3) {
        return uVar7;
      }
                    /* WARNING: Load size is inaccurate */
      cVar2 = *data_addr;
    }
    uVar7 = 0;
  }
  return uVar7;
}
