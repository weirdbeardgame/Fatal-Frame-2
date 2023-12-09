// STATUS: NOT STARTED

#include "MapLBuff.h"

typedef struct {
	int labelID;
	int cnt;
	int stat;
} MAP_LBUFF_ST;

static MAP_LBUFF_ST MapLBuffList[66][16];

int MapLBuffRegist(int map_id) {
	int j;
	
  int iVar1;
  MAP_LBUFF_ST *pMVar2;
  int iVar3;
  
  iVar3 = 0;
  pMVar2 = (MAP_LBUFF_ST *)MapLBuffList[map_id];
  iVar1 = pMVar2->labelID;
  while ((pMVar2 = pMVar2 + 1, iVar1 == -1 ||
         ((iVar1 = FileStGetType__Fi(iVar1), iVar1 < 3 && (-1 < iVar1))))) {
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return 0;
    }
    iVar1 = pMVar2->labelID;
  }
  printf("***ERR!! %s(%d):");
  printf("ERR! LOAD_FILE_NO_TYPE\n");
  return -1;
}

int MapLBuffLoad(int map_id) {
	int j;
	
  int iVar1;
  MAP_LBUFF_ST *pMVar2;
  int iVar3;
  
  iVar3 = 0;
  pMVar2 = (MAP_LBUFF_ST *)MapLBuffList[map_id];
  iVar1 = pMVar2->labelID;
  while ((pMVar2 = pMVar2 + 1, iVar1 == -1 ||
         ((iVar1 = FileStGetType__Fi(iVar1), iVar1 < 3 && (-1 < iVar1))))) {
    iVar3 = iVar3 + 1;
    if (0xf < iVar3) {
      return 0;
    }
    iVar1 = pMVar2->labelID;
  }
  printf("ERR! LOAD_FILE_NOT_TYPE  MapLBuff.c/J.serizawa\n");
  return -1;
}

static MAP_LBUFF_ST* MapLBuffGetSpace(int map_id, int label) {
	int j;
	MAP_LBUFF_ST *wp;
	
  int iVar1;
  MAP_LBUFF_ST *pMVar2;
  MAP_LBUFF_ST *pMVar3;
  int iVar4;
  
  pMVar3 = (MAP_LBUFF_ST *)0x0;
  iVar4 = 0;
  pMVar2 = (MAP_LBUFF_ST *)MapLBuffList[map_id];
  do {
    iVar1 = ((MAP_LBUFF_ST *)&pMVar2->labelID)->labelID;
    if (iVar1 == label) {
      return pMVar2;
    }
    iVar4 = iVar4 + 1;
    if ((pMVar3 == (MAP_LBUFF_ST *)0x0) && (iVar1 == -1)) {
      pMVar3 = pMVar2;
    }
    pMVar2 = pMVar2 + 1;
  } while (iVar4 < 0x10);
  if (pMVar3 != (MAP_LBUFF_ST *)0x0) {
    pMVar3->cnt = 0;
    pMVar3->stat = 0;
  }
  return pMVar3;
}

int MapLBuffDeleteFile(int map_id, int label) {
	MAP_LBUFF_ST *mp;
	
  MAP_LBUFF_ST *pMVar1;
  int iVar2;
  
  pMVar1 = MapLBuffGetSpace__Fii(map_id,label);
  if ((pMVar1 == (MAP_LBUFF_ST *)0x0) || (pMVar1->labelID == -1)) {
    printf("ERR!_NO_DEL_SPACE  MapLBuff.c/J.serizawa\n");
    iVar2 = -1;
  }
  else {
    iVar2 = pMVar1->cnt + -1;
    pMVar1->cnt = iVar2;
    if (iVar2 < 1) {
      pMVar1->labelID = -1;
    }
    iVar2 = 0;
  }
  return iVar2;
}

int MapLBuffSetLoadFile(int map_id, int label) {
	MAP_LBUFF_ST *mp;
	
  MAP_LBUFF_ST *pMVar1;
  int iVar2;
  
  pMVar1 = MapLBuffGetSpace__Fii(map_id,label);
  if (pMVar1 == (MAP_LBUFF_ST *)0x0) {
    printf("ERR!_NO_FREE_SPACE  MapLBuff.c/J.serizawa\n");
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    pMVar1->labelID = label;
    pMVar1->cnt = pMVar1->cnt + 1;
  }
  return iVar2;
}

void MapLBuffInit() {
	int i;
	int j;
	
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar2 = 0xf;
    puVar1 = (undefined4 *)((int)MapLBuffList + (iVar4 + iVar3) * 0x40);
    do {
      iVar2 = iVar2 + -1;
      *puVar1 = 0xffffffff;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 3;
    } while (-1 < iVar2);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 2;
  } while (iVar3 < 0x42);
  return;
}
