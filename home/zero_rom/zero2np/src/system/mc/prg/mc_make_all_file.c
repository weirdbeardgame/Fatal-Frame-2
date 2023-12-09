// STATUS: NOT STARTED

#include "mc_make_all_file.h"

typedef struct {
	char step;
	int port;
	int slot;
	int dir_label;
	int data_file_num;
	int make_data_file_num;
	void *buff_addr;
	int buff_size;
} MC_MAKE_ALL_FILE_CTRL;

static MC_MAKE_ALL_FILE_CTRL mc_make_all_file_ctrl;

void MemoryCardAllFileMakeInit(int port, int slot, int dir_label, void *buff_addr, int buff_size) {
	static char __FUNCTION__[26] = {
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
		/* [10] = */ 65,
		/* [11] = */ 108,
		/* [12] = */ 108,
		/* [13] = */ 70,
		/* [14] = */ 105,
		/* [15] = */ 108,
		/* [16] = */ 101,
		/* [17] = */ 77,
		/* [18] = */ 97,
		/* [19] = */ 107,
		/* [20] = */ 101,
		/* [21] = */ 73,
		/* [22] = */ 110,
		/* [23] = */ 105,
		/* [24] = */ 116,
		/* [25] = */ 0
	};
	
  mc_make_all_file_ctrl.step = '\0';
  mc_make_all_file_ctrl.port = port;
  mc_make_all_file_ctrl.slot = slot;
  mc_make_all_file_ctrl.dir_label = dir_label;
  mc_make_all_file_ctrl.data_file_num = GetMemoryCardDataFileNum__Fi(dir_label);
  mc_make_all_file_ctrl.make_data_file_num = 0;
  mc_make_all_file_ctrl.buff_addr = buff_addr;
  mc_make_all_file_ctrl.buff_size = buff_size;
  if (buff_addr == (void *)0x0) {
    MemoryCardAssert__FPce("Error! %s Buff Addr NULL!!");
  }
  return;
}

int MemoryCardAllFileMakeMain() {
	static char __FUNCTION__[26] = {
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
		/* [10] = */ 65,
		/* [11] = */ 108,
		/* [12] = */ 108,
		/* [13] = */ 70,
		/* [14] = */ 105,
		/* [15] = */ 108,
		/* [16] = */ 101,
		/* [17] = */ 77,
		/* [18] = */ 97,
		/* [19] = */ 107,
		/* [20] = */ 101,
		/* [21] = */ 77,
		/* [22] = */ 97,
		/* [23] = */ 105,
		/* [24] = */ 110,
		/* [25] = */ 0
	};
	int res;
	int mc_res;
	char path_name[55];
	int data_file_size;
	char *check_sum_addr;
	
  int iVar1;
  char path_name [55];
  
  memset(path_name,0,0x37);
  switch(mc_make_all_file_ctrl.step) {
  case '\0':
    MemoryCardSetFilePath__FPcii
              (path_name,mc_make_all_file_ctrl.dir_label,mc_make_all_file_ctrl.make_data_file_num);
    iVar1 = GetMemoryCardDataSize__Fii
                      (mc_make_all_file_ctrl.dir_label,mc_make_all_file_ctrl.make_data_file_num);
    if ((long)mc_make_all_file_ctrl.buff_size < (long)iVar1) {
      MemoryCardAssert__FPce("Error! %s Buff Size Over!!");
    }
    memset(mc_make_all_file_ctrl.buff_addr,0,(long)iVar1);
    memset((void *)((int)mc_make_all_file_ctrl.buff_addr + iVar1 + -4),-1,4);
    MemoryCardMakeNewFileInit__FiiPcPvi
              (mc_make_all_file_ctrl.port,mc_make_all_file_ctrl.slot,path_name,
               mc_make_all_file_ctrl.buff_addr,iVar1);
    mc_make_all_file_ctrl.step = '\x01';
  case '\x01':
    iVar1 = MemoryCardMakeNewFileMain__Fv();
    if (iVar1 == 1) {
      mc_make_all_file_ctrl.make_data_file_num = mc_make_all_file_ctrl.make_data_file_num + 1;
      iVar1 = GetMemoryCardDataFileNum__Fi(mc_make_all_file_ctrl.dir_label);
      if (mc_make_all_file_ctrl.make_data_file_num < iVar1) {
        mc_make_all_file_ctrl.step = '\0';
        return 0;
      }
      mc_make_all_file_ctrl.step = '\x02';
      return 0;
    }
    break;
  case '\x02':
    MemoryCardIconInit__Fiiii
              (mc_make_all_file_ctrl.port,mc_make_all_file_ctrl.slot,mc_make_all_file_ctrl.dir_label
               ,0);
    mc_make_all_file_ctrl.step = '\x03';
  case '\x03':
    iVar1 = MemoryCardIconMain__Fv();
    if (iVar1 == 1) {
      mc_make_all_file_ctrl.step = '\x04';
      return 0;
    }
    break;
  case '\x04':
    MemoryCardIconSysInit__Fiii
              (mc_make_all_file_ctrl.port,mc_make_all_file_ctrl.slot,mc_make_all_file_ctrl.dir_label
              );
    mc_make_all_file_ctrl.step = '\x05';
  case '\x05':
    iVar1 = MemoryCardIconSysMain__Fv();
    if (iVar1 == 1) {
      return 1;
    }
    break;
  default:
    MemoryCardAssert__FPce("Error! %s");
    return 0;
  }
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
