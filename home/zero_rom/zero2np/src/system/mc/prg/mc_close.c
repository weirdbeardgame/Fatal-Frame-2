// STATUS: NOT STARTED

#include "mc_close.h"

typedef struct {
	char step;
	char retry_cnt;
	int fd;
} MC_FILE_CLOSE_CTRL;

static MC_FILE_CLOSE_CTRL mc_file_close_ctrl;

void MemoryCardFileCloseInit(int fd) {
  mc_file_close_ctrl.fd = fd;
  mc_file_close_ctrl.retry_cnt = '\x04';
  mc_file_close_ctrl.step = '\0';
  return;
}

int MemoryCardFileCloseMain() {
	int res;
	int mc_res;
	int result;
	
  int iVar1;
  int iVar2;
  int result;
  
  result = 0;
  iVar2 = 0;
  if (mc_file_close_ctrl.step == '\0') {
    iVar1 = MemoryCardFileCloseReq__Fi(mc_file_close_ctrl.fd);
    if (iVar1 == 0) {
      mc_file_close_ctrl.step = '\x01';
    }
    else if (mc_file_close_ctrl.retry_cnt < '\x01') {
      iVar2 = -10;
    }
    else if (iVar1 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
    }
    else {
      mc_file_close_ctrl.retry_cnt = mc_file_close_ctrl.retry_cnt + -1;
      if (iVar1 == -200) {
        mc_file_close_ctrl.step = '\x02';
      }
    }
  }
  if (mc_file_close_ctrl.step == '\x01') {
    iVar1 = MemoryCardExeEndSync__FPi(&result);
    if (iVar1 == 1) {
      iVar2 = 1;
      if (result != 0) {
        if (result < -5) {
          iVar2 = -0x14;
        }
        else {
          iVar2 = result;
          if ((-4 < result) && (result != -2)) {
            iVar2 = -0x14;
          }
        }
      }
    }
    else if (iVar1 == -1) {
      mc_file_close_ctrl.step = '\0';
    }
  }
  if ((mc_file_close_ctrl.step == '\x02') &&
     (iVar1 = MemoryCardExeEndSync__FPi(&result), iVar1 != 0)) {
    mc_file_close_ctrl.step = '\0';
  }
  return iVar2;
}

int MemoryCardFileCloseReq(int fd) {
  int iVar1;
  
  iVar1 = sceMcClose(fd);
  return iVar1;
}
