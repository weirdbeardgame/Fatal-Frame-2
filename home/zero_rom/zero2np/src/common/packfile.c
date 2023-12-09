// STATUS: NOT STARTED

#include "packfile.h"

typedef struct {
	int pack_num;
	int pad[3];
	int offset[1];
} PK2_HEAD;

u_int* PakAlign128(u_int *addr) {
	u_int tmp;
	
  if (((uint)addr & 0xf) != 0) {
    addr = (uint *)((int)addr + (0x10 - ((uint)addr & 0xf)));
  }
  return addr;
}

int GetNumInPak(void *pak_head) {
  int iVar1;
  
  iVar1 = 0;
  if (pak_head != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
    iVar1 = *pak_head;
  }
  return iVar1;
}

void* GetFileInPak(void *pak_head, int num) {
	int file_num;
	int file_size;
	int i;
	char *fp;
	
  int iVar1;
  int *piVar2;
  
                    /* WARNING: Load size is inaccurate */
  piVar2 = (int *)0x0;
  if (num < *pak_head) {
    piVar2 = (int *)((int)pak_head + 0x10);
    if (0 < num) {
      iVar1 = *piVar2;
      while( true ) {
        piVar2 = (int *)((int)piVar2 + iVar1 + 0x10);
        num = num + -1;
        if (num == 0) break;
        iVar1 = *piVar2;
      }
    }
    piVar2 = piVar2 + 4;
  }
  return piVar2;
}

int GetFileSizeInPak(void *pak_head, int num) {
	int file_num;
	int file_size;
	int i;
	char *fp;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = 0;
  if (num < *pak_head) {
    piVar3 = (int *)((int)pak_head + 0x10);
    iVar2 = 0;
    if (0 < num) {
      iVar1 = *piVar3;
      while (piVar3 = (int *)((int)piVar3 + iVar1 + 0x10), num != iVar2) {
        iVar2 = iVar2 + 1;
        if (num <= iVar2) {
          return 0;
        }
        iVar1 = *piVar3;
      }
    }
  }
  return iVar1;
}

void* GetPakTaleAddr(void *pak_head) {
	int file_num;
	int file_size;
	int i;
	char *fp;
	
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  
                    /* WARNING: Load size is inaccurate */
  iVar3 = *pak_head;
  piVar4 = (int *)((int)pak_head + 0x10);
  if (0 < iVar3) {
    iVar1 = *piVar4;
    while( true ) {
      piVar4 = (int *)((int)piVar4 + iVar1 + 0x10);
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) break;
      iVar1 = *piVar4;
    }
  }
  puVar2 = PakAlign128__FPUi((uint *)(piVar4 + 4));
  return puVar2;
}

int Pk2GetNum(u_int *top_addr) {
  uint uVar1;
  
  uVar1 = 0;
  if (top_addr != (uint *)0x0) {
    uVar1 = *top_addr;
  }
  return uVar1;
}

u_int* Pk2GetAddr(u_int *top_addr, int index) {
  int iVar1;
  
  if (-1 < index) {
    iVar1 = Pk2GetNum__FPUi(top_addr);
    if (index < iVar1) {
      return (uint *)((int)top_addr + top_addr[index + 4]);
    }
  }
  return (uint *)0x0;
}
