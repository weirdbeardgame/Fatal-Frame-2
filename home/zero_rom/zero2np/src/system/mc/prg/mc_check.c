// STATUS: NOT STARTED

#include "mc_check.h"

typedef struct {
	char step;
	int port;
	int slot;
	char name[55];
} MC_CHECK_CTRL;

static MC_CHECK_CTRL mc_check_ctrl;

void MemoryCardCheckInit(int port, int slot, char *name) {
  mc_check_ctrl.step = '\0';
  mc_check_ctrl.port = port;
  mc_check_ctrl.slot = slot;
  memset(mc_check_ctrl.name,0,0x37);
  strcpy(mc_check_ctrl.name,name);
  return;
}

int MemoryCardCheckMain() {
	int res;
	int mc_res;
	
  int iVar1;
  
  if (mc_check_ctrl.step != '\x01') {
    if ('\x01' < mc_check_ctrl.step) {
      if (mc_check_ctrl.step == '\x02') {
        MemoryCardGetDirInfoInit__FiiPc(mc_check_ctrl.port,mc_check_ctrl.slot,mc_check_ctrl.name);
        mc_check_ctrl.step = '\x03';
      }
      else if (mc_check_ctrl.step != '\x03') goto LAB_001df1f0;
      iVar1 = MemoryCardGetDirInfoMain__Fv();
      if (iVar1 == 1) {
        return 1;
      }
      if (iVar1 < 0) {
        return iVar1;
      }
      return 0;
    }
    if (mc_check_ctrl.step != '\0') {
LAB_001df1f0:
      MemoryCardAssert__FPce("Error! MemoryCardCheckMain");
      return 0;
    }
    MemoryCardGetCardInfoInit__Fii(mc_check_ctrl.port,mc_check_ctrl.slot);
    mc_check_ctrl.step = '\x01';
  }
  iVar1 = MemoryCardGetCardInfoMain__Fv();
  if (iVar1 != 1) {
    if (-1 < iVar1) {
      return 0;
    }
    if (iVar1 != -1) {
      return iVar1;
    }
  }
  mc_check_ctrl.step = '\x02';
  return 0;
}
