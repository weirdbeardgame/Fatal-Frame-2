// STATUS: NOT STARTED

#include "mc_make_dir.h"

typedef struct {
	char step;
	char retry_cnt;
	int port;
	int slot;
	char name[21];
} MC_MAKE_DIR_CTRL;

static MC_MAKE_DIR_CTRL mc_make_dir_ctrl;

void MemoryCardMakeNewDirInit(int port, int slot, char *name) {
  mc_make_dir_ctrl.retry_cnt = '\x04';
  mc_make_dir_ctrl.step = '\0';
  mc_make_dir_ctrl.port = port;
  mc_make_dir_ctrl.slot = slot;
  memset(mc_make_dir_ctrl.name,0,0x15);
  strcpy(mc_make_dir_ctrl.name,name);
  return;
}

int MemoryCardMakeNewDirMain() {
	int res;
	int mc_res;
	int result;
	
  int iVar1;
  int iVar2;
  int result;
  
  result = 0;
  iVar2 = 0;
  if (mc_make_dir_ctrl.step == '\0') {
    iVar1 = MemoryCardMakeNewDirReq__FiiPc
                      (mc_make_dir_ctrl.port,mc_make_dir_ctrl.slot,mc_make_dir_ctrl.name);
    if (iVar1 == 0) {
      mc_make_dir_ctrl.step = '\x01';
    }
    else if (mc_make_dir_ctrl.retry_cnt < '\x01') {
      iVar2 = -10;
    }
    else if (iVar1 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
    }
    else if (iVar1 == -0xd2) {
      MemoryCardAssert__FPce("Error! Directory Name Error!");
    }
    else {
      mc_make_dir_ctrl.retry_cnt = mc_make_dir_ctrl.retry_cnt + -1;
      if (iVar1 == -200) {
        mc_make_dir_ctrl.step = '\x02';
      }
    }
  }
  if (mc_make_dir_ctrl.step == '\x01') {
    iVar1 = MemoryCardExeEndSync__FPi(&result);
    if (iVar1 == 1) {
      iVar2 = 1;
      if (result != 0) {
        iVar2 = -0x14;
      }
    }
    else if (iVar1 == -1) {
      mc_make_dir_ctrl.step = '\0';
    }
  }
  if ((mc_make_dir_ctrl.step == '\x02') && (iVar1 = MemoryCardExeEndSync__FPi(&result), iVar1 != 0))
  {
    mc_make_dir_ctrl.step = '\0';
  }
  return iVar2;
}

int MemoryCardMakeNewDirReq(int port, int slot, char *name) {
  int iVar1;
  
  iVar1 = sceMcMkdir(port,slot,name);
  return iVar1;
}
