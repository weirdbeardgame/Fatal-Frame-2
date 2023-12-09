// STATUS: NOT STARTED

#include "mc_check_dir.h"

typedef struct {
	sceMcTblGetDir table[18];
	short int get_filenum;
} MC_DIR_INFO;

typedef struct {
	char step;
	char retry_cnt;
	int port;
	int slot;
	char name[55];
} MC_CHECK_DIR_CTRL;

static MC_CHECK_DIR_CTRL mc_check_dir_ctrl;
static MC_DIR_INFO mc_dir_info;

void MemoryCardDirInfoCtrlInit() {
  memset(&mc_dir_info,0,0x4c0);
  return;
}

void MemoryCardGetDirInfoInit(int port, int slot, char *name) {
  mc_check_dir_ctrl.retry_cnt = '\x04';
  mc_check_dir_ctrl.step = '\0';
  mc_check_dir_ctrl.port = port;
  mc_check_dir_ctrl.slot = slot;
  memset(mc_check_dir_ctrl.name,0,0x37);
  strcpy(mc_check_dir_ctrl.name,name);
  return;
}

int MemoryCardGetDirInfoMain() {
	int res;
	int mc_res;
	int result;
	
  char cVar1;
  int iVar2;
  int iVar3;
  int result;
  
  result = 0;
  iVar3 = 0;
  cVar1 = mc_check_dir_ctrl.retry_cnt;
  if (mc_check_dir_ctrl.step == '\0') {
    iVar2 = MemoryCardGetDirInfoReq__FiiPc
                      (mc_check_dir_ctrl.port,mc_check_dir_ctrl.slot,mc_check_dir_ctrl.name);
    cVar1 = mc_check_dir_ctrl.retry_cnt;
    if (iVar2 == 0) {
      mc_check_dir_ctrl.step = '\x01';
    }
    else if (mc_check_dir_ctrl.retry_cnt < '\x01') {
      iVar3 = -10;
    }
    else if (iVar2 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
      cVar1 = mc_check_dir_ctrl.retry_cnt;
    }
    else if (iVar2 == -0xd2) {
      MemoryCardAssert__FPce("PATH Error! MemoryCardGetDirInfoMain");
      cVar1 = mc_check_dir_ctrl.retry_cnt;
    }
    else {
      cVar1 = mc_check_dir_ctrl.retry_cnt + -1;
      if (iVar2 == -200) {
        mc_check_dir_ctrl.step = '\x02';
        cVar1 = mc_check_dir_ctrl.retry_cnt;
      }
    }
  }
  mc_check_dir_ctrl.retry_cnt = cVar1;
  if (mc_check_dir_ctrl.step == '\x01') {
    iVar2 = MemoryCardExeEndSync__FPi(&result);
    if (iVar2 == 1) {
      if (result < 0) {
        iVar3 = -0x14;
        if (((-7 < result) && (iVar3 = result, -4 < result)) && (result != -2)) {
          iVar3 = -0x14;
        }
      }
      else {
        mc_dir_info.get_filenum = (ushort)result;
        iVar3 = 1;
      }
    }
    else if (iVar2 == -1) {
      mc_check_dir_ctrl.step = '\0';
    }
  }
  if ((mc_check_dir_ctrl.step == '\x02') && (iVar2 = MemoryCardExeEndSync__FPi(&result), iVar2 != 0)
     ) {
    mc_check_dir_ctrl.step = '\0';
  }
  return iVar3;
}

int MemoryCardGetDirInfoReq(int port, int slot, char *name) {
  int iVar1;
  
  iVar1 = sceMcGetDir(port,slot,name,0,0x12,0x4b4800);
  return iVar1;
}

int GetMemoryCardCheckDirFileNum() {
  return (int)(short)mc_dir_info.get_filenum;
}

void GetMemoryCardCheckDirEntryName(char *name, int data_pos) {
  int iVar1;
  
  iVar1 = GetMemoryCardCheckDirFileNum__Fv();
  if (iVar1 <= data_pos) {
    MemoryCardAssert__FPce("Error! GetMemoryCardCheckDirEntryName");
  }
  memset(name,0,0x37);
  strcpy(name,mc_dir_info.table + data_pos * 0x40 + 0x20);
  return;
}

int GetMemoryCardCheckDirSize() {
	int i;
	int size;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (2 < (short)mc_dir_info.get_filenum) {
    piVar3 = (int *)&mc_dir_info.field_0x90;
    iVar2 = (short)mc_dir_info.get_filenum + -2;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 0x10;
      iVar2 = iVar2 + -1;
      iVar4 = iVar4 + (iVar1 + 0x3ffU >> 10);
    } while (iVar2 != 0);
  }
  return iVar4 + ((short)mc_dir_info.get_filenum + -1) / 2 + 2;
}
