// STATUS: NOT STARTED

#include "mc_del_all_file.h"

typedef struct {
	char step;
	int port;
	int slot;
	int dir_label;
	int del_file_cnt;
} MC_DEL_ALL_FILE_CTRL;

static MC_DEL_ALL_FILE_CTRL mc_del_all_file_ctrl;

void MemoryCardAllFileDelInit(int port, int slot, int dir_label) {
  mc_del_all_file_ctrl.del_file_cnt = 2;
  mc_del_all_file_ctrl.port = port;
  mc_del_all_file_ctrl.slot = slot;
  mc_del_all_file_ctrl.dir_label = dir_label;
  mc_del_all_file_ctrl.step = '\0';
  return;
}

int MemoryCardAllFileDelMain() {
	int res;
	int mc_res;
	char path_name[55];
	
  int iVar1;
  char path_name [55];
  
  memset(path_name,0,0x37);
  if (mc_del_all_file_ctrl.step != '\x01') {
    if ('\x01' < mc_del_all_file_ctrl.step) {
      if (mc_del_all_file_ctrl.step == '\x02') {
        SetMemoryCardDelFilePath__FPcii
                  (path_name,mc_del_all_file_ctrl.dir_label,mc_del_all_file_ctrl.del_file_cnt);
        MemoryCardFileDelInit__FiiPc(mc_del_all_file_ctrl.port,mc_del_all_file_ctrl.slot,path_name);
        mc_del_all_file_ctrl.step = '\x03';
      }
      else if (mc_del_all_file_ctrl.step != '\x03') goto LAB_001dfea0;
      iVar1 = MemoryCardFileDelMain__Fv();
      if (iVar1 != 1) goto LAB_001dfe90;
      mc_del_all_file_ctrl.del_file_cnt = mc_del_all_file_ctrl.del_file_cnt + 1;
      goto LAB_001dfe64;
    }
    if (mc_del_all_file_ctrl.step != '\0') {
LAB_001dfea0:
      MemoryCardAssert__FPce("Error! MemoryCardAllFileDelMain");
      return 0;
    }
    MemoryCardMakeSearchDirPath__FPci(path_name,mc_del_all_file_ctrl.dir_label);
    MemoryCardGetDirInfoInit__FiiPc(mc_del_all_file_ctrl.port,mc_del_all_file_ctrl.slot,path_name);
    mc_del_all_file_ctrl.step = '\x01';
  }
  iVar1 = MemoryCardGetDirInfoMain__Fv();
  if (iVar1 != 1) {
LAB_001dfe90:
    if (-1 < iVar1) {
      return 0;
    }
    return iVar1;
  }
LAB_001dfe64:
  iVar1 = GetMemoryCardCheckDirFileNum__Fv();
  if (mc_del_all_file_ctrl.del_file_cnt < iVar1) {
    mc_del_all_file_ctrl.step = '\x02';
  }
  return (uint)(mc_del_all_file_ctrl.del_file_cnt >= iVar1);
}

static void SetMemoryCardDelFilePath(char *path_name, int dir_label, int data_pos) {
	char fname[55];
	char entry_name[55];
	char dir_name[21];
	
  char fname [55];
  char entry_name [55];
  char dir_name [21];
  
  fname[0] = DAT_003bb480;
  fname[1] = DAT_003bb481;
  memset(fname + 2,0,0x35);
  memset(entry_name,0,0x37);
  memset(dir_name,0,0x15);
  memset(entry_name,0,0x37);
  memset(path_name,0,0x37);
  MemoryCardSetDirName__FPci(dir_name,dir_label);
  GetMemoryCardCheckDirEntryName__FPci(entry_name,data_pos);
  strcat(fname,dir_name);
  strcat(fname,"/");
  strcat(fname,entry_name);
  strcpy(path_name,fname);
  return;
}
