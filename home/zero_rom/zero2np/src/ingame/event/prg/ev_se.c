// STATUS: NOT STARTED

#include "ev_se.h"

static int ev_se_reg_files[66][5];
static int sb_ids[2][5];
static int ev_se_toggle;

void ev_seInit() {
	int i;
	int j;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar2 = 4;
    piVar1 = ev_se_reg_files + iVar4 + iVar3 + 4;
    do {
      iVar2 = iVar2 + -1;
      *piVar1 = -1;
      piVar1 = piVar1 + -1;
    } while (-1 < iVar2);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 0x42);
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar2 = 4;
    piVar1 = sb_ids + iVar4 + iVar3 + 4;
    do {
      iVar2 = iVar2 + -1;
      *piVar1 = -1;
      piVar1 = piVar1 + -1;
    } while (-1 < iVar2);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar3 < 2);
  ev_se_toggle = 0;
  return;
}

void ev_seSetSave(MC_SAVE_DATA *save) {
  save->size = 0x528;
  save->addr = (uchar *)ev_se_reg_files;
  return;
}

void ev_seRelease() {
	int i;
	int j;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  while( true ) {
    iVar3 = 4;
    piVar2 = sb_ids + iVar1 + iVar4;
    do {
      iVar3 = iVar3 + -1;
      if (-1 < *piVar2) {
        SndBankRelease(*piVar2);
        *piVar2 = -1;
      }
      piVar2 = piVar2 + 1;
    } while (-1 < iVar3);
    iVar4 = iVar4 + 1;
    if (1 < iVar4) break;
    iVar1 = iVar4 * 4;
  }
  ev_se_toggle = 0;
  return;
}

void ev_seRegisterFile(int room_id, int file_no) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 101,
		/* [1] = */ 118,
		/* [2] = */ 95,
		/* [3] = */ 115,
		/* [4] = */ 101,
		/* [5] = */ 82,
		/* [6] = */ 101,
		/* [7] = */ 103,
		/* [8] = */ 105,
		/* [9] = */ 115,
		/* [10] = */ 116,
		/* [11] = */ 101,
		/* [12] = */ 114,
		/* [13] = */ 70,
		/* [14] = */ 105,
		/* [15] = */ 108,
		/* [16] = */ 101,
		/* [17] = */ 0
	};
	int i;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)ev_se_reg_files[room_id];
  while( true ) {
    iVar1 = *piVar2;
    if (iVar1 == file_no) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("EVENT_SE REGISTER SAME FILE!! ROOM[%d] file_no = %d");
      iVar1 = *piVar2;
    }
    iVar3 = iVar3 + 1;
    if (iVar1 == -1) break;
    piVar2 = piVar2 + 1;
    if (4 < iVar3) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("EVENT_SE REGISTER IS OVER!! ROOM[%d] file_no = %d");
      return;
    }
  }
  *piVar2 = file_no;
  return;
}

void ev_seDeleteFile(int room_id, int file_no) {
	int i;
	
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)ev_se_reg_files[room_id];
  iVar3 = 0;
  do {
    if (*piVar1 == file_no) {
      if (3 < iVar3) {
        *piVar1 = -1;
        return;
      }
      piVar2 = ev_se_reg_files[room_id] + iVar3;
      do {
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 1;
        *piVar2 = piVar2[1];
        piVar2 = piVar2 + 1;
      } while (iVar3 < 4);
      *piVar1 = -1;
      return;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 5);
  printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
  PrintWarningReal("EVENT_SE DELETE NOT FOUND FILE!! ROOM[%d] file_no = %d");
  return;
}

int ev_seGetBankID(int file_no) {
	int i;
	int j;
	int no;
	int bank_file_no;
	
  int iVar1;
  _SND_BANK_STATUS__4_2748 _Var2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int bank_file_no;
  
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar4 = 0;
    piVar3 = (int *)((int)sb_ids + iVar1);
    iVar1 = *piVar3;
    while( true ) {
      piVar3 = piVar3 + 5;
      if (((-1 < iVar1) && (_Var2 = SndBankGetFileNo(iVar1,&bank_file_no), _Var2 == SND_BANK_OK)) &&
         (bank_file_no == file_no)) {
        return iVar1;
      }
      iVar4 = iVar4 + 1;
      if (1 < iVar4) break;
      iVar1 = *piVar3;
    }
    iVar5 = iVar5 + 1;
    iVar1 = iVar5 * 4;
    if (4 < iVar5) {
      return -1;
    }
  } while( true );
}

void ev_seChangeRoom(int room_id) {
	int i;
	int file_no;
	int header_file_no;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  uVar1 = ev_se_toggle;
  do {
    if (-1 < sb_ids[uVar1][iVar2]) {
      SndBankRelease(sb_ids[uVar1][iVar2]);
      uVar1 = ev_se_toggle;
      sb_ids[ev_se_toggle][iVar2] = -1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  iVar3 = 0;
  piVar4 = (int *)ev_se_reg_files[room_id];
  iVar2 = *piVar4;
  while( true ) {
    piVar4 = piVar4 + 1;
    if (-1 < iVar2) {
      iVar2 = SndBankNew(iVar2,iVar2 + -1,-1);
      uVar1 = ev_se_toggle;
      sb_ids[ev_se_toggle][iVar3] = iVar2;
    }
    iVar3 = iVar3 + 1;
    if (4 < iVar3) break;
    iVar2 = *piVar4;
  }
  ev_se_toggle = uVar1 ^ 1;
  return;
}

int ev_seIsReady() {
	int ready;
	int i;
	int no;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 1;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    if (-1 < sb_ids[ev_se_toggle ^ 1][iVar2]) {
      uVar1 = SndBankIsReady(sb_ids[ev_se_toggle ^ 1][iVar2]);
      uVar4 = uVar4 & uVar1;
    }
    iVar2 = iVar3;
  } while (iVar3 < 5);
  return uVar4;
}
