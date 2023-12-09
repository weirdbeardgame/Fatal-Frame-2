// STATUS: NOT STARTED

#include "mc_make.h"

typedef struct {
	char step;
	int port;
	int slot;
	int dir_label;
	void *buff_addr;
	int buff_size;
} MC_NEW_MAKE_CTRL;

static MC_NEW_MAKE_CTRL mc_new_make_ctrl;

void MemoryCardNewMakeInit(int port, int slot, int dir_label, void *buff_addr, int buff_size) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 109,
		/* [3] = */ 111,
		/* [4] = */ 114,
		/* [5] = */ 121,
		/* [6] = */ 67,
		/* [7] = */ 97,
		/* [8] = */ 114,
		/* [9] = */ 100,
		/* [10] = */ 78,
		/* [11] = */ 101,
		/* [12] = */ 119,
		/* [13] = */ 77,
		/* [14] = */ 97,
		/* [15] = */ 107,
		/* [16] = */ 101,
		/* [17] = */ 73,
		/* [18] = */ 110,
		/* [19] = */ 105,
		/* [20] = */ 116,
		/* [21] = */ 0
	};
	
  mc_new_make_ctrl.step = '\0';
  mc_new_make_ctrl.port = port;
  mc_new_make_ctrl.slot = slot;
  mc_new_make_ctrl.dir_label = dir_label;
  mc_new_make_ctrl.buff_addr = buff_addr;
  mc_new_make_ctrl.buff_size = buff_size;
  if (buff_addr == (void *)0x0) {
    MemoryCardAssert__FPce("Error! %s Buff Addr NULL!!");
  }
  return;
}

int MemoryCardNewMakeMain() {
	int res;
	int mc_res;
	char dir_name[21];
	
  int iVar1;
  char dir_name [21];
  
  memset(dir_name,0,0x15);
  if (mc_new_make_ctrl.step != '\x01') {
    if ('\x01' < mc_new_make_ctrl.step) {
      if (mc_new_make_ctrl.step == '\x02') {
        MemoryCardAllFileMakeInit__FiiiPvi
                  (mc_new_make_ctrl.port,mc_new_make_ctrl.slot,mc_new_make_ctrl.dir_label,
                   mc_new_make_ctrl.buff_addr,mc_new_make_ctrl.buff_size);
        mc_new_make_ctrl.step = '\x03';
      }
      else if (mc_new_make_ctrl.step != '\x03') goto LAB_001e0b80;
      iVar1 = MemoryCardAllFileMakeMain__Fv();
      if (iVar1 == 1) {
        return 1;
      }
      goto LAB_001e0b70;
    }
    if (mc_new_make_ctrl.step != '\0') {
LAB_001e0b80:
      MemoryCardAssert__FPce("Error! MemoryCardNewMakeMain");
      return 0;
    }
    MemoryCardSetDirName__FPci(dir_name,mc_new_make_ctrl.dir_label);
    MemoryCardMakeNewDirInit__FiiPc(mc_new_make_ctrl.port,mc_new_make_ctrl.slot,dir_name);
    mc_new_make_ctrl.step = '\x01';
  }
  iVar1 = MemoryCardMakeNewDirMain__Fv();
  if (iVar1 == 1) {
    mc_new_make_ctrl.step = '\x02';
    return 0;
  }
LAB_001e0b70:
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
