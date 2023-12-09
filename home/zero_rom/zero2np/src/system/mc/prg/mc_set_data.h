// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_SET_DATA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_SET_DATA_H

typedef struct {
	int hour;
	int min;
	int sec;
} TIME_INFO;

typedef int _iconVu0IVECTOR[4];
typedef float _iconVu0FVECTOR[4];

typedef struct {
	unsigned char Head[4];
	short unsigned int Reserv1;
	short unsigned int OffsLF;
	unsigned int Reserv2;
	unsigned int TransRate;
	_iconVu0IVECTOR BgColor[4];
	_iconVu0FVECTOR LightDir[3];
	_iconVu0FVECTOR LightColor[3];
	_iconVu0FVECTOR Ambient;
	unsigned char TitleName[68];
	unsigned char FnameView[64];
	unsigned char FnameCopy[64];
	unsigned char FnameDel[64];
	unsigned char Reserve3[512];
} sceMcIconSys;

struct fixed_array<char,5> : fixed_array_base<char,5,char[5]> {
};

struct fixed_array<int,5> : fixed_array_base<int,5,int[5]> {
};

extern unsigned char TIME_INFO type_info node[8];

void MemoryCardSoftResetLock();
void MemoryCardSoftResetUnlock();
void MemoryCardSetFilePath(char *path_name, int dir_label, int file_label);
void SetMemoryCardSaveDataToBuff(char *addr0, int dir_label, int file_label);
void DevelopMemoryCardLoadData(char *addr0, int dir_label, int file_label);
int GetMemoryCardDirSize(int dir_label);
int GetMemoryCardDirSizeCluster(int dir_label);
int GetMemoryCardDataSize(int dir_label, int file_label);
void* GetDataMemoryArea(int size);
void LiberateDataMemoryArea(void *data_addr);
void MemoryCardDataLoadReq(void *addr, int data_label);
int MemoryCardDataLoadWait();
int GetMemoryCardDataFileNum(int dir_label);
int GetMemoryCardAllFileNum(int dir_label);
void MemoryCardPlayDataHeadInit();
void SetMemoryCardPlayDataHead(int data_num, char clear_flg);
int GetMemoryCardPlayDataFlg(int data_num);
int GetMemoryCardClearDataFlg(int data_num);
int GetMemoryCardPlayDataChapter(int data_num);
int GetMemoryCardPlayDataClearNum(int data_num);
int GetMemoryCardPlayDataRoomLabel(int data_num);
TIME_INFO GetMemoryCardPlayDataPlayTime(int data_num);
void SetSave_PlayDataHead(MC_SAVE_DATA *data);
void MemoryCardSetDirName(char *dir_name, int dir_label);
void MemoryCardMakeSearchDirPath(char *path_name, int dir_label);
void MemoryCardSetIconSysPath(char *path_name, int dir_label);
sceMcIconSys MemoryCardSetIconSysData(int dir_label);
void MemoryCardSetIconTitleName(char *title, int dir_label);
void MemoryCardSetIconFileName(char *icon_name, int dir_label, int icon_type);
void MemoryCardSetIconFilePath(char *icon_path, int dir_label, int icon_type);
int GetIconDataLabel(int dir_label, int icon_type);
int GetIconDataSize(int dir_label, int icon_type);
void MemoryCardDebugReqSizeDisp();
void MemoryCardPrint(char *str);
void MemoryCardAssert(char *str);
void MemoryCardWarning(char *str);
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
TIME_INFO* TIME_INFO * _fixed_array_verifyrange<TIME_INFO>(size_t v, size_t _max);
type_info& TIME_INFO type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_MC_PRG_MC_SET_DATA_H
