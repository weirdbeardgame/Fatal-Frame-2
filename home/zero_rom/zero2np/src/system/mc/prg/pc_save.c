// STATUS: NOT STARTED

#include "pc_save.h"

void SavePCFile() {
	int fd;
	char fname[20];
	void *data_buff_addr;
	
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int size;
  char fname [20];
  
  pcVar3 = fname + 7;
  uVar1 = (uint)pcVar3 & 7;
  *(ulong *)(pcVar3 + -uVar1) =
       *(ulong *)(pcVar3 + -uVar1) & -1L << (uVar1 + 1) * 8 |
       (ulong)s__host0_save_data_dat_003c2bcf._1_8_ >> (7 - uVar1) * 8;
  fname._0_8_ = s__host0_save_data_dat_003c2bcf._1_8_;
  pcVar3 = fname + 0xf;
  uVar1 = (uint)pcVar3 & 7;
  *(ulong *)(pcVar3 + -uVar1) =
       *(ulong *)(pcVar3 + -uVar1) & -1L << (uVar1 + 1) * 8 |
       (ulong)s__host0_save_data_dat_003c2bcf._9_8_ >> (7 - uVar1) * 8;
  fname._8_8_ = s__host0_save_data_dat_003c2bcf._9_8_;
  pcVar3 = fname + 0x13;
  uVar1 = (uint)pcVar3 & 3;
  *(uint *)(pcVar3 + -uVar1) =
       *(uint *)(pcVar3 + -uVar1) & -1 << (uVar1 + 1) * 8 |
       (uint)s__host0_save_data_dat_003c2bcf._17_4_ >> (3 - uVar1) * 8;
  fname._16_4_ = s__host0_save_data_dat_003c2bcf._17_4_;
  iVar2 = GetMemoryCardDataSize__Fii(0,2);
  pcVar3 = (char *)mem_dbgGetMem__Fi(iVar2);
  SetMemoryCardSaveDataToBuff__FPcii(pcVar3,0,2);
  iVar2 = sceOpen(fname,0x202);
  if (-1 < iVar2) {
    sceLseek(iVar2,0,0);
    size = GetMemoryCardDataSize__Fii(0,2);
    sceWrite(iVar2,pcVar3,size);
    sceClose(iVar2);
    mem_dbgFreeMem__FPv(pcVar3);
    MemoryCardPrint__FPce("*****  PC Save OK!!  *****\n");
  }
  return;
}

void LoadPCFile() {
	int fd;
	char fname[20];
	void *data_buff_addr;
	
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int size;
  char fname [20];
  
  pcVar3 = fname + 7;
  uVar1 = (uint)pcVar3 & 7;
  *(ulong *)(pcVar3 + -uVar1) =
       *(ulong *)(pcVar3 + -uVar1) & -1L << (uVar1 + 1) * 8 |
       (ulong)s__host0_save_data_dat_003c2bcf._1_8_ >> (7 - uVar1) * 8;
  fname._0_8_ = s__host0_save_data_dat_003c2bcf._1_8_;
  pcVar3 = fname + 0xf;
  uVar1 = (uint)pcVar3 & 7;
  *(ulong *)(pcVar3 + -uVar1) =
       *(ulong *)(pcVar3 + -uVar1) & -1L << (uVar1 + 1) * 8 |
       (ulong)s__host0_save_data_dat_003c2bcf._9_8_ >> (7 - uVar1) * 8;
  fname._8_8_ = s__host0_save_data_dat_003c2bcf._9_8_;
  pcVar3 = fname + 0x13;
  uVar1 = (uint)pcVar3 & 3;
  *(uint *)(pcVar3 + -uVar1) =
       *(uint *)(pcVar3 + -uVar1) & -1 << (uVar1 + 1) * 8 |
       (uint)s__host0_save_data_dat_003c2bcf._17_4_ >> (3 - uVar1) * 8;
  fname._16_4_ = s__host0_save_data_dat_003c2bcf._17_4_;
  iVar2 = GetMemoryCardDataSize__Fii(0,2);
  pcVar3 = (char *)mem_dbgGetMem__Fi(iVar2);
  iVar2 = sceOpen(fname,1);
  if (-1 < iVar2) {
    sceLseek(iVar2,0,0);
    size = GetMemoryCardDataSize__Fii(0,2);
    sceRead(iVar2,pcVar3,size);
    DevelopMemoryCardLoadData__FPcii(pcVar3,0,2);
    sceClose(iVar2);
    mem_dbgFreeMem__FPv(pcVar3);
    MemoryCardPrint__FPce("*****  PC Load OK!!  *****\n");
  }
  return;
}
