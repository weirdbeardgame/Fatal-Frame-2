// STATUS: NOT STARTED

#include "menu_dat.h"

static int DbmFileD = -1;
static int DbmLiCnt = 0;

void DbIlInit(int cnt) {
  DbmLiCnt = cnt;
  return;
}

void DbIlPush(char *str) {
  DbmFWrite__FPCce(&DAT_003f2cd8);
  DbmLiCnt = DbmLiCnt + 1;
  return;
}

void DbIlPop(char *str) {
  DbmLiCnt = DbmLiCnt + -1;
  if (DbmLiCnt < 0) {
    DbmLiCnt = 0;
  }
  DbmFWrite__FPCce(&DAT_003f2cd8);
  return;
}

void DbmFOpen(char *path, int type) {
	int flg;
	
  int flag;
  
  if (type == 0) {
    flag = 0x602;
  }
  else {
    flag = 0x302;
    if (type != 1) {
      return;
    }
  }
  if (DbmFileD != -1) {
    DbmFClose__Fv();
  }
  DbmFileD = sceOpen(path,flag);
  DbIlInit__Fi(0);
  return;
}

void DbmFWrite(char *str) {
	va_list ap;
	char buf[65536];
	int i;
	
  char *pcVar1;
  int iVar2;
  void *ap;
  char buf [65536];
  undefined local_38 [56];
  
  iVar2 = 0;
  if (0 < DbmLiCnt) {
    do {
      pcVar1 = buf + iVar2;
      iVar2 = iVar2 + 1;
      *pcVar1 = '\t';
    } while (iVar2 < DbmLiCnt);
  }
  iVar2 = vsprintf(buf + iVar2,str,local_38);
  sceWrite(DbmFileD,buf,iVar2 + DbmLiCnt);
  return;
}

void DbmFClose() {
  if (DbmFileD != -1) {
    sceClose(DbmFileD);
    DbmFileD = -1;
  }
  return;
}

void DbmFWriteLabelOne(char *name, char *num) {
	char stat_name[512];
	char buf[65536];
	va_list ap;
	int len;
	
  size_t sVar1;
  ulong uVar2;
  char stat_name [512];
  char buf [65536];
  void *ap;
  undefined local_30 [48];
  
  vsprintf(buf,num,local_30);
  sprintf(stat_name,"#define %s");
  sVar1 = strlen(stat_name);
  for (uVar2 = sVar1 & 0xfffffffffffffffc; (long)uVar2 < 0x28; uVar2 = (ulong)((int)uVar2 + 4)) {
    strcat(stat_name,&DAT_003f2ce0);
  }
  DbmFWrite__FPCce("%s\t(%s)\n");
  return;
}

void DbmSave(DEBUG_MENU *in, char *path, char *fname, char *label) {
	int i;
	char FileNameBuf[256];
	char stat_name[128];
	
  bool bVar1;
  int iVar2;
  DEBUG_SUB_MENU *pDVar3;
  int iVar4;
  char FileNameBuf [256];
  char stat_name [128];
  
  if (fname == (char *)0x0) {
    sprintf(FileNameBuf,&DAT_003f2ce8);
  }
  else {
    sprintf(FileNameBuf,&DAT_003f2ce8);
  }
  DbmFOpen__FPci(FileNameBuf,0);
  pDVar3 = in->submenu;
  DbmFWrite__FPCce("///////////////////////////////////////////////////////\n");
  iVar4 = 0;
  DbmFWrite__FPCce("//debug menu [%s] data\n//\n");
  DbmFWrite__FPCce("///////////////////////////////////////////////////////\n\n\n");
  while ((bVar1 = iVar4 < 0x14, iVar4 = iVar4 + 1, bVar1 &&
         (iVar2 = strcmp(pDVar3->name,s__end__003f2cf0), iVar2 != 0))) {
    if ((pDVar3->attr & 0x1000) == 0) {
      if ((pDVar3->attr & 0x2000) == 0) {
        sprintf(stat_name,&DAT_003f2ce8);
        if ((pDVar3->attr & 0x20000) == 0) {
          DbmFWriteLabelOne__FPcPCce(stat_name,&DAT_003f2d00);
          pDVar3 = pDVar3 + 1;
        }
        else {
          DbmFWriteLabelOne__FPcPCce(stat_name,&DAT_003f2cf8);
          pDVar3 = pDVar3 + 1;
        }
      }
      else {
        pDVar3 = pDVar3 + 1;
      }
    }
    else {
      pDVar3 = pDVar3 + 1;
    }
  }
  DbmFClose__Fv();
  return;
}
