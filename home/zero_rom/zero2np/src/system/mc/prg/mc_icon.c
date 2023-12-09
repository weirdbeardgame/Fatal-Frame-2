// STATUS: NOT STARTED

#include "mc_icon.h"

typedef struct {
	char step;
	int port;
	int slot;
	int dir_label;
	int icon_type;
} MC_ICON_CTRL;

static void *icon_data_addr = NULL;
static MC_ICON_CTRL mc_icon_ctrl;

void MemoryCardIconInit(int port, int slot, int dir_label, int icon_type) {
  mc_icon_ctrl.step = '\0';
  mc_icon_ctrl.port = port;
  mc_icon_ctrl.slot = slot;
  mc_icon_ctrl.dir_label = dir_label;
  mc_icon_ctrl.icon_type = icon_type;
  LiberateMemoryCardIconDataMem__Fv();
  return;
}

int MemoryCardIconMain() {
	int res;
	int mc_res;
	char path_name[55];
	
  int iVar1;
  int iVar2;
  char path_name [55];
  
  iVar2 = 0;
  memset(path_name,0,0x37);
  if (mc_icon_ctrl.step != '\x01') {
    if ('\x01' < mc_icon_ctrl.step) {
      if (mc_icon_ctrl.step == '\x02') {
        MemoryCardSetIconFilePath__FPcii(path_name,mc_icon_ctrl.dir_label,mc_icon_ctrl.icon_type);
        iVar1 = GetIconDataSize__Fii(mc_icon_ctrl.dir_label,mc_icon_ctrl.icon_type);
        MemoryCardMakeNewFileInit__FiiPcPvi
                  (mc_icon_ctrl.port,mc_icon_ctrl.slot,path_name,icon_data_addr,iVar1);
        mc_icon_ctrl.step = '\x03';
      }
      else if (mc_icon_ctrl.step != '\x03') goto LAB_001e0610;
      iVar1 = MemoryCardMakeNewFileMain__Fv();
      if (iVar1 == 1) {
        iVar2 = 1;
      }
      else if (iVar1 < 0) {
        iVar2 = iVar1;
      }
      goto LAB_001e0618;
    }
    if (mc_icon_ctrl.step != '\0') {
LAB_001e0610:
      MemoryCardAssert__FPce("Error! MemoryCardIconMain");
      goto LAB_001e0618;
    }
    iVar1 = GetIconDataSize__Fii(mc_icon_ctrl.dir_label,mc_icon_ctrl.icon_type);
    icon_data_addr = GetDataMemoryArea__Fi(iVar1);
    iVar1 = GetIconDataLabel__Fii(mc_icon_ctrl.dir_label,mc_icon_ctrl.icon_type);
    MemoryCardDataLoadReq__FPvi(icon_data_addr,iVar1);
    mc_icon_ctrl.step = '\x01';
  }
  iVar1 = MemoryCardDataLoadWait__Fv();
  if (iVar1 != 0) {
    mc_icon_ctrl.step = '\x02';
  }
LAB_001e0618:
  if (iVar2 != 0) {
    LiberateMemoryCardIconDataMem__Fv();
  }
  return iVar2;
}

void LiberateMemoryCardIconDataMem() {
  if (icon_data_addr != (void *)0x0) {
    LiberateDataMemoryArea__FPv(icon_data_addr);
    icon_data_addr = (void *)0x0;
  }
  return;
}
