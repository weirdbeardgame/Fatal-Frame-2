// STATUS: NOT STARTED

#include "mc_save.h"

typedef struct {
	char step;
	int port;
	int slot;
	int size;
	int fd;
	void *data_addr;
	char name[55];
} MC_SAVE_CTRL;

static MC_SAVE_CTRL mc_save_ctrl;

void MemoryCardFileSaveInit(int port, int slot, char *name, void *data_addr, int size) {
  mc_save_ctrl.fd = -1;
  mc_save_ctrl.step = '\0';
  mc_save_ctrl.port = port;
  mc_save_ctrl.slot = slot;
  mc_save_ctrl.size = size;
  mc_save_ctrl.data_addr = data_addr;
  memset(mc_save_ctrl.name,0,0x37);
  strcpy(mc_save_ctrl.name,name);
  return;
}

int MemoryCardFileSaveMain() {
	int res;
	int mc_res;
	
  int iVar1;
  
  switch(mc_save_ctrl.step) {
  case '\0':
    MemoryCardFileOpenInit__FiiPci(mc_save_ctrl.port,mc_save_ctrl.slot,mc_save_ctrl.name,3);
    mc_save_ctrl.step = '\x01';
  case '\x01':
    iVar1 = MemoryCardFileOpenMain__FPi(&mc_save_ctrl.fd);
    if (iVar1 == 1) {
      mc_save_ctrl.step = '\x02';
      return 0;
    }
    break;
  case '\x02':
    MemoryCardFileWriteInit__FiPvi(mc_save_ctrl.fd,mc_save_ctrl.data_addr,mc_save_ctrl.size);
    mc_save_ctrl.step = '\x03';
  case '\x03':
    iVar1 = MemoryCardFileWriteMain__Fv();
    if (iVar1 == 1) {
      mc_save_ctrl.step = '\x04';
      return 0;
    }
    break;
  case '\x04':
    MemoryCardFileCloseInit__Fi(mc_save_ctrl.fd);
    mc_save_ctrl.step = '\x05';
  case '\x05':
    iVar1 = MemoryCardFileCloseMain__Fv();
    if (iVar1 == 1) {
      return 1;
    }
    break;
  default:
    MemoryCardAssert__FPce("Error! MemoryCardFileSaveMain");
    return 0;
  }
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
