// STATUS: NOT STARTED

#include "mc_load.h"

typedef struct {
	char step;
	int port;
	int slot;
	int size;
	int fd;
	void *data_addr;
	char name[55];
} MC_LOAD_CTRL;

static MC_LOAD_CTRL mc_load_ctrl;

void MemoryCardFileLoadInit(int port, int slot, char *name, void *data_addr, int size) {
  mc_load_ctrl.fd = -1;
  mc_load_ctrl.step = '\0';
  mc_load_ctrl.port = port;
  mc_load_ctrl.slot = slot;
  mc_load_ctrl.size = size;
  mc_load_ctrl.data_addr = data_addr;
  memset(mc_load_ctrl.name,0,0x37);
  strcpy(mc_load_ctrl.name,name);
  return;
}

int MemoryCardFileLoadMain() {
	int res;
	int mc_res;
	
  int iVar1;
  
  switch(mc_load_ctrl.step) {
  case '\0':
    MemoryCardFileOpenInit__FiiPci(mc_load_ctrl.port,mc_load_ctrl.slot,mc_load_ctrl.name,1);
    mc_load_ctrl.step = '\x01';
  case '\x01':
    iVar1 = MemoryCardFileOpenMain__FPi(&mc_load_ctrl.fd);
    if (iVar1 == 1) {
      mc_load_ctrl.step = '\x02';
      return 0;
    }
    break;
  case '\x02':
    MemoryCardFileReadInit__FiPvi(mc_load_ctrl.fd,mc_load_ctrl.data_addr,mc_load_ctrl.size);
    mc_load_ctrl.step = '\x03';
  case '\x03':
    iVar1 = MemoryCardFileReadMain__Fv();
    if (iVar1 == 1) {
      mc_load_ctrl.step = '\x04';
      return 0;
    }
    break;
  case '\x04':
    MemoryCardFileCloseInit__Fi(mc_load_ctrl.fd);
    mc_load_ctrl.step = '\x05';
  case '\x05':
    iVar1 = MemoryCardFileCloseMain__Fv();
    if (iVar1 == 1) {
      return 1;
    }
    break;
  default:
    MemoryCardAssert__FPce("Error! MemoryCardFileLoadMain");
    return 0;
  }
  if (-1 < iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}
