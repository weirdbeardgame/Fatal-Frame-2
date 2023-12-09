// STATUS: NOT STARTED

#include "PhfUnPk.h"

typedef struct {
	char magic[4];
	unsigned int f_size;
	int h_num;
	int dat_offset;
} PHF_FILE_HEAD;

typedef struct {
	char name[24];
	unsigned int offset;
	unsigned int size;
} PACK_HEAD;

int UnPkGetFileNum(char *addr) {
  return *(int *)(addr + 8);
}

char* UnPkGetFileAddr(char *addr, int id) {
	PACK_HEAD *lp;
	
  if ((-1 < id) && (id < *(int *)(addr + 8))) {
    return addr + *(int *)(addr + 0xc) + *(int *)(addr + id * 0x20 + 0x28);
  }
  return (char *)0x0;
}

char* UnPkGetFileName(char *addr, int id) {
	PACK_HEAD *lp;
	
  char *pcVar1;
  
  pcVar1 = addr + id * 0x20 + 0x10;
  if ((id < 0) || (*(int *)(addr + 8) <= id)) {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}

int UnPkGetPacState(char *addr, char *name) {
	int i;
	PACK_HEAD *lp;
	
  int iVar1;
  char *__s1;
  int iVar2;
  
  iVar2 = 0;
  __s1 = addr + 0x10;
  if (0 < *(int *)(addr + 8)) {
    do {
      iVar1 = strcmp(__s1,name);
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) goto LAB_00114b58;
      __s1 = __s1 + 0x20;
    } while (iVar2 < *(int *)(addr + 8));
  }
  __s1 = (char *)0x0;
LAB_00114b58:
  if (__s1 == (char *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(__s1 + 0x1c);
  }
  return iVar2;
}

char* UnPkGetFileAddr(char *addr, char *name) {
	int i;
	PACK_HEAD *lp;
	
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = addr + 0x10;
  if (0 < *(int *)(addr + 8)) {
    do {
      iVar1 = strcmp(pcVar2,name);
      iVar3 = iVar3 + 1;
      if (iVar1 == 0) goto LAB_00114c00;
      pcVar2 = pcVar2 + 0x20;
    } while (iVar3 < *(int *)(addr + 8));
  }
  pcVar2 = (char *)0x0;
LAB_00114c00:
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = addr + *(int *)(addr + 0xc) + *(int *)(pcVar2 + 0x18);
  }
  return pcVar2;
}
