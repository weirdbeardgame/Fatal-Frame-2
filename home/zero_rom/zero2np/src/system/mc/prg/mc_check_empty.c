// STATUS: NOT STARTED

#include "mc_check_empty.h"

int MemoryCardCheckEmpty(int dir_label) {
  int iVar1;
  int iVar2;
  
  iVar1 = GetMemoryCardDirSizeCluster__Fi(dir_label);
  iVar2 = GetAccessMemoryCardFreeCluster__Fv();
  return iVar2 < iVar1 ^ 1;
}

int MemoryCardCheckEmptyBroken(int dir_label) {
	int empty_size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = GetMemoryCardCheckDirSize__Fv();
  iVar2 = GetAccessMemoryCardFreeCluster__Fv();
  iVar3 = GetMemoryCardDirSizeCluster__Fi(dir_label);
  return iVar1 + iVar2 < iVar3 ^ 1;
}
