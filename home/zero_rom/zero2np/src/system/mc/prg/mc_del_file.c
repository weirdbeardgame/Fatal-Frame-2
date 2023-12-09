// STATUS: NOT STARTED

#include "mc_del_file.h"

typedef struct {
	char step;
	char retry_cnt;
	int port;
	int slot;
	char name[55];
} MC_FILE_DEL_CTRL;

static MC_FILE_DEL_CTRL mc_file_del_ctrl;

void MemoryCardFileDelInit(int port, int slot, char *name) {
  mc_file_del_ctrl.retry_cnt = '\x04';
  mc_file_del_ctrl.step = '\0';
  mc_file_del_ctrl.port = port;
  mc_file_del_ctrl.slot = slot;
  memset(mc_file_del_ctrl.name,0,0x37);
  strcpy(mc_file_del_ctrl.name,name);
  return;
}

int MemoryCardFileDelMain() {
	int res;
	int mc_res;
	int result;
	
  char cVar1;
  int iVar2;
  int iVar3;
  int result;
  
  result = 0;
  iVar3 = 0;
  cVar1 = mc_file_del_ctrl.retry_cnt;
  if (mc_file_del_ctrl.step == '\0') {
    iVar2 = MemoryCardFileDelReq__FiiPc
                      (mc_file_del_ctrl.port,mc_file_del_ctrl.slot,mc_file_del_ctrl.name);
    cVar1 = mc_file_del_ctrl.retry_cnt;
    if (iVar2 == 0) {
      mc_file_del_ctrl.step = '\x01';
    }
    else if (mc_file_del_ctrl.retry_cnt < '\x01') {
      iVar3 = -10;
    }
    else if (iVar2 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
      cVar1 = mc_file_del_ctrl.retry_cnt;
    }
    else if (iVar2 == -0xd2) {
      MemoryCardAssert__FPce("Error! Directory Name Error!");
      cVar1 = mc_file_del_ctrl.retry_cnt;
    }
    else {
      cVar1 = mc_file_del_ctrl.retry_cnt + -1;
      if (iVar2 == -200) {
        mc_file_del_ctrl.step = '\x02';
        cVar1 = mc_file_del_ctrl.retry_cnt;
      }
    }
  }
  mc_file_del_ctrl.retry_cnt = cVar1;
  if (mc_file_del_ctrl.step == '\x01') {
    iVar2 = MemoryCardExeEndSync__FPi(&result);
    if (iVar2 == 1) {
      iVar3 = 1;
      if (result != 0) {
        if (result == -4) {
          MemoryCardWarning__FPce("Warning! MemoryCardFileDelMain");
        }
        else {
          iVar3 = -0x14;
          if (((-7 < result) && (iVar3 = result, -5 < result)) && (result != -2)) {
            iVar3 = -0x14;
          }
        }
      }
    }
    else if (iVar2 == -1) {
      mc_file_del_ctrl.step = '\0';
    }
  }
  if ((mc_file_del_ctrl.step == '\x02') && (iVar2 = MemoryCardExeEndSync__FPi(&result), iVar2 != 0))
  {
    mc_file_del_ctrl.step = '\0';
  }
  return iVar3;
}

int MemoryCardFileDelReq(int port, int slot, char *name) {
  int iVar1;
  
  iVar1 = sceMcDelete(port,slot,name);
  return iVar1;
}
