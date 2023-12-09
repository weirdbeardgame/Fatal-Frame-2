// STATUS: NOT STARTED

#include "mc_del_dir.h"

typedef struct {
	char step;
	int port;
	int slot;
	int dir_label;
} MC_DIR_DEL_CTRL;

static MC_DIR_DEL_CTRL mc_dir_del_ctrl;

void MemoryCardDirDelInit(int port, int slot, int dir_label) {
  mc_dir_del_ctrl.dir_label = dir_label;
  mc_dir_del_ctrl.port = port;
  mc_dir_del_ctrl.slot = slot;
  mc_dir_del_ctrl.step = '\0';
  return;
}

int MemoryCardDirDelMain() {
	int res;
	int mc_res;
	char dir_name[21];
	
  int iVar1;
  char dir_name [21];
  
  memset(dir_name,0,0x15);
  if (mc_dir_del_ctrl.step != '\x01') {
    if ('\x01' < mc_dir_del_ctrl.step) {
      if (mc_dir_del_ctrl.step == '\x02') {
        MemoryCardSetDirName__FPci(dir_name,mc_dir_del_ctrl.dir_label);
        MemoryCardFileDelInit__FiiPc(mc_dir_del_ctrl.port,mc_dir_del_ctrl.slot,dir_name);
        mc_dir_del_ctrl.step = '\x03';
      }
      else if (mc_dir_del_ctrl.step != '\x03') goto LAB_001e00f8;
      iVar1 = MemoryCardFileDelMain__Fv();
      if (iVar1 == 1) {
        return 1;
      }
      goto LAB_001e00e8;
    }
    if (mc_dir_del_ctrl.step != '\0') {
LAB_001e00f8:
      MemoryCardAssert__FPce("Error! MemoryCardDirDelMain");
      return 0;
    }
    MemoryCardAllFileDelInit__Fiii
              (mc_dir_del_ctrl.port,mc_dir_del_ctrl.slot,mc_dir_del_ctrl.dir_label);
    mc_dir_del_ctrl.step = '\x01';
  }
  iVar1 = MemoryCardAllFileDelMain__Fv();
  if (iVar1 == 1) {
    mc_dir_del_ctrl.step = '\x02';
    return 0;
  }
LAB_001e00e8:
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
