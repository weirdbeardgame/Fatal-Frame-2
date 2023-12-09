// STATUS: NOT STARTED

#include "mc_open.h"

typedef struct {
	char step;
	char retry_cnt;
	int port;
	int slot;
	int mode;
	char *name;
} MC_FILE_OPEN_CTRL;

static MC_FILE_OPEN_CTRL mc_file_open_ctrl;

void MemoryCardFileOpenInit(int port, int slot, char *name, int mode) {
  mc_file_open_ctrl.name = name;
  mc_file_open_ctrl.retry_cnt = '\x04';
  mc_file_open_ctrl.port = port;
  mc_file_open_ctrl.slot = slot;
  mc_file_open_ctrl.mode = mode;
  mc_file_open_ctrl.step = '\0';
  return;
}

int MemoryCardFileOpenMain(int *fd) {
	int res;
	int mc_res;
	int result;
	
  char *name;
  int iVar1;
  int iVar2;
  int iVar3;
  int result;
  
  name = mc_file_open_ctrl.name;
  iVar2 = 0;
  result = 0;
  if (mc_file_open_ctrl.step == '\0') {
    *fd = -1;
    iVar1 = MemoryCardFileOpenReq__FiiPci
                      (mc_file_open_ctrl.port,mc_file_open_ctrl.slot,name,mc_file_open_ctrl.mode);
    if (iVar1 == 0) {
      mc_file_open_ctrl.step = '\x01';
    }
    else if (mc_file_open_ctrl.retry_cnt < '\x01') {
      iVar2 = -10;
    }
    else if (iVar1 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
    }
    else if (iVar1 == -0xd2) {
      MemoryCardAssert__FPce("Error! Directory Name Error!");
    }
    else {
      mc_file_open_ctrl.retry_cnt = mc_file_open_ctrl.retry_cnt + -1;
      if (iVar1 == -200) {
        mc_file_open_ctrl.step = '\x02';
      }
    }
  }
  if (mc_file_open_ctrl.step == '\x01') {
    iVar1 = MemoryCardExeEndSync__FPi(&result);
    if (iVar1 == 1) {
      if (result < 0) {
        iVar3 = result;
        if ((((result != -7) && (iVar2 = -0x14, iVar3 = iVar2, -8 < result)) && (result < -1)) &&
           (iVar3 = result, result < -5)) goto LAB_001e130c;
      }
      else {
        *fd = result;
        iVar3 = 1;
      }
    }
    else {
      iVar3 = iVar2;
      if (iVar1 == -1) {
        mc_file_open_ctrl.step = '\0';
      }
    }
    iVar2 = iVar3;
  }
LAB_001e130c:
  if ((mc_file_open_ctrl.step == '\x02') && (iVar1 = MemoryCardExeEndSync__FPi(&result), iVar1 != 0)
     ) {
    mc_file_open_ctrl.step = '\0';
  }
  return iVar2;
}

int MemoryCardFileOpenReq(int port, int slot, char *name, int mode) {
  int iVar1;
  
  iVar1 = sceMcOpen(port,slot,name,mode);
  return iVar1;
}
