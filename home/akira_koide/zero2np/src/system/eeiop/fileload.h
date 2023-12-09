// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_FILELOAD_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_FILELOAD_H

typedef _FILE_LOAD_ENUM FILE_LOAD_ENUM;

struct _EEIOP_DEF {
	void* (*malloc64)(/* parameters unknown */);
	void (*free64)(/* parameters unknown */);
	int command_send_buffer_size;
	char *iop_def_module;
	char *hil_file_name;
	char *dil_file_name;
	int media;
	int file_load_wrk_num;
	int snd_bank_wrk_num;
	int stream_auto_wrk_num;
	int auto_bd_wrk_num;
	int snd_stream_load_priority;
	int snd_bank_load_priority;
	int cmp_use_flg;
	int rom_boot;
};

typedef _EEIOP_DEF EEIOP_DEF;
typedef _FILE_LOAD_TYPE FILE_LOAD_TYPE;

int FileLoadReqSPU(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg);
int FileLoadReqEE(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg);
int FileDecodeLoadReqEE(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg);
void _intr_wait_load_func(void *buffer, void *arg);
void FileLoadReqEEWait(int file_no, void *adrs);
FILE_LOAD_ENUM FileLoadCancelWait2(int file_no, void *adrs);
FILE_LOAD_ENUM FileLoadCancelWait(int id);
FILE_LOAD_ENUM FileLoadCancel2(int file_no, void *adrs, void (*func)(/* parameters unknown */), void *arg);
FILE_LOAD_ENUM FileLoadCancelSPU2(int file_no, void *adrs, void (*func)(/* parameters unknown */), void *arg);
FILE_LOAD_ENUM FileLoadCancel(int id, void (*func)(/* parameters unknown */), void *arg);
FILE_LOAD_ENUM FileLoadCancelAll();
int FileLoadIsEnd2(int file_no, void *adrs);
int FileLoadIsEnd(int id);
int AllFileLoadIsEnd();
int FileLoadGetNeedSize(EEIOP_DEF *def);
void* FileLoadInit(EEIOP_DEF *def, void *wrk_buffer);
void PrintFileLoadWrk();
void rpcFileLoadReqSub(FILE_LOAD_WRK *wrk);
void FileLoadChangeThreadPriority(int load_th_priority, int decode_th_priority);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_FILELOAD_H
