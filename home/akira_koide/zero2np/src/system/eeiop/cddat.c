// STATUS: NOT STARTED

#include "cddat.h"

static char title_root_path[200];
static FNAME_DAT *p_fname_dat;
static char **p_filename_path;
static char *p_ext_lbl;
static int project_file_num;
static CD_DAT_TBL *p_cd_dat;
static SET_CD_DAT set_cd_dat;

void cddatInit(char *cd_dat_name, char *pc_path, FNAME_DAT *p_file_name, char **p_path_name, CD_DAT_TBL *cd_tbl, char *ext_lbl, int total_file_num) {
  strcpy(set_cd_dat.file_name,cd_dat_name);
  iopCommandRegister(REQ_SET_CD_DAT,set_cd_dat.file_name,0x10);
  strcpy(title_root_path,pc_path);
  p_fname_dat = p_file_name;
  p_filename_path = p_path_name;
  p_ext_lbl = ext_lbl;
  project_file_num = total_file_num;
  p_cd_dat = cd_tbl;
  ee_iopMain();
  ee_iopMain();
  return;
}

char GetFileExtLabel(int file_no) {
  return p_ext_lbl[file_no];
}

int GetFileNum() {
  return project_file_num;
}

int GetFileStartSector(int file_no) {
  _CD_DAT_TBL *p_Var1;
  
  p_Var1 = p_cd_dat + file_no;
  if ((*(uint *)p_Var1 >> 1 & 1) == 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("file_no %d is not On CD");
    p_Var1 = p_cd_dat + file_no;
  }
  return *(uint *)p_Var1 >> 2;
}

int GetFileSectorSize(int file_no) {
  uint uVar1;
  
  uVar1 = GetFileSize(file_no);
  return (int)(uVar1 + 0x7ff) >> 0xb;
}

unsigned int GetFileSize(int file_no) {
  uint uVar1;
  
  uVar1 = GetAlignUp(p_cd_dat[file_no].size,4);
  return uVar1;
}

unsigned int GetFileCmpSize(int file_no) {
  uint uVar1;
  
  uVar1 = GetAlignUp(p_cd_dat[file_no].cmp_size,4);
  return uVar1;
}

int cddatIsCmpFile(int file_no) {
  return *(uint *)(p_cd_dat + file_no) & 1;
}

int cddatCompressFileNoUse() {
	int i;
	FNAME_DAT *p_fname_dat_not_const;
	
  int iVar1;
  FNAME_DAT *pFVar2;
  
  iVar1 = AllFileLoadIsEnd();
  if (iVar1 != 0) {
    iVar1 = 0;
    pFVar2 = p_fname_dat;
    if (0 < project_file_num) {
      do {
        pFVar2->cmp_flg = '\0';
        iVar1 = iVar1 + 1;
        pFVar2 = pFVar2 + 1;
      } while (iVar1 < project_file_num);
    }
    iVar1 = 1;
  }
  return iVar1;
}

int cddatCompressFileNoUseNo(int file_no) {
	FNAME_DAT *p_fname_dat_not_const;
	
  int iVar1;
  
  iVar1 = AllFileLoadIsEnd();
  if (iVar1 != 0) {
    iVar1 = 1;
    p_fname_dat[file_no].cmp_flg = '\0';
  }
  return iVar1;
}

char* GetFileName(int file_no) {
	static char file_full_name[256];
	unsigned char path_no;
	
  byte bVar1;
  char *pcVar2;
  
  bVar1 = p_fname_dat[file_no].path_no;
  if (file_no < project_file_num) {
    pcVar2 = &file_full_name_0;
    strcpy(&file_full_name_0,title_root_path);
    strcat(&file_full_name_0,p_filename_path[bVar1]);
    strcat(&file_full_name_0,p_fname_dat[file_no].name);
  }
  else {
    printf("***** (PC FILE) FILE NO. OVER %d *****\n");
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}

void GetFileNameBuffer(int file_no, char *buf) {
  byte bVar1;
  
  bVar1 = p_fname_dat[file_no].path_no;
  strcpy(buf,title_root_path);
  strcat(buf,p_filename_path[bVar1]);
  strcat(buf,p_fname_dat[file_no].name);
  return;
}
