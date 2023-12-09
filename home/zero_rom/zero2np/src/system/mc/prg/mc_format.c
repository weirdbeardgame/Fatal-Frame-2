// STATUS: NOT STARTED

#include "mc_format.h"

typedef struct {
	char step;
	char retry_cnt;
	int port;
	int slot;
} MC_FORMAT_CTRL;

static MC_FORMAT_CTRL mc_format_ctrl;

void MemoryCardFormatInit(int port, int slot) {
  mc_format_ctrl.slot = slot;
  mc_format_ctrl.retry_cnt = '\x04';
  mc_format_ctrl.port = port;
  mc_format_ctrl.step = '\0';
  return;
}

int MemoryCardFormatMain() {
	int res;
	int mc_res;
	int result;
	
  int iVar1;
  int iVar2;
  int result;
  
  result = 0;
  iVar2 = 0;
  if (mc_format_ctrl.step == '\0') {
    iVar1 = MemoryCardFormatReq__Fii(mc_format_ctrl.port,mc_format_ctrl.slot);
    if (iVar1 == 0) {
      mc_format_ctrl.step = '\x01';
    }
    else if (mc_format_ctrl.retry_cnt < '\x01') {
      iVar2 = -10;
    }
    else if (iVar1 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
    }
    else {
      mc_format_ctrl.retry_cnt = mc_format_ctrl.retry_cnt + -1;
      if (iVar1 == -200) {
        mc_format_ctrl.step = '\x02';
      }
    }
  }
  if (mc_format_ctrl.step == '\x01') {
    iVar1 = MemoryCardExeEndSync__FPi(&result);
    if (iVar1 == 1) {
      iVar2 = 1;
      if ((result != 0) && (iVar2 = -0x14, result == -5)) {
        iVar2 = -5;
      }
    }
    else if (iVar1 == -1) {
      mc_format_ctrl.step = '\0';
    }
  }
  if ((mc_format_ctrl.step == '\x02') && (iVar1 = MemoryCardExeEndSync__FPi(&result), iVar1 != 0)) {
    mc_format_ctrl.step = '\0';
  }
  return iVar2;
}

int MemoryCardFormatReq(int port, int slot) {
  int iVar1;
  
  iVar1 = sceMcFormat(port,slot);
  return iVar1;
}
