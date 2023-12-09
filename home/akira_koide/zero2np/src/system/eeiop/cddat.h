// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_CDDAT_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_CDDAT_H

struct _CD_DAT_TBL {
	unsigned int cmp_flg : 1;
	unsigned int exist_flg : 1;
	unsigned int start_sector : 30;
	int size;
	int cmp_size;
};

typedef _CD_DAT_TBL CD_DAT_TBL;

typedef struct {
	char cmp_flg;
	char path_no;
	char *name;
} FNAME_DAT;


void cddatInit(char *cd_dat_name, char *pc_path, FNAME_DAT *p_file_name, char **p_path_name, CD_DAT_TBL *cd_tbl, char *ext_lbl, int total_file_num);
char GetFileExtLabel(int file_no);
int GetFileNum();
int GetFileStartSector(int file_no);
int GetFileSectorSize(int file_no);
unsigned int GetFileSize(int file_no);
unsigned int GetFileCmpSize(int file_no);
int cddatIsCmpFile(int file_no);
int cddatCompressFileNoUse();
int cddatCompressFileNoUseNo(int file_no);
char* GetFileName(int file_no);
void GetFileNameBuffer(int file_no, char *buf);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_CDDAT_H
