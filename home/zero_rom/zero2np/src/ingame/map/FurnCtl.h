// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FURNCTL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FURNCTL_H

extern unsigned char FURN_CTL type_info node[8];

int FurnCtlCheckKakuType(char *f_name, char *type);
int FurnCtlGetType(char *name);
void FurnCtlGetMdoelName(char *out, char *in);
int FurnCtlGetID(char *name);
int FurnCtlGetAnimID(char *name, int type);
int FurnCtlRegist(int buff_id, char *name, char *addr, int attr, u_int size);
void FurnCtlClearBuff(int buff_id);
void FurnCtlClearAll();
void FurnCtlFindInit(int buff_id);
char* FurnCtlGetNextName();
char* FurnCtlGetNextModelAddr();
FURN_CTL* FurnCtlGetHeadPtr(int buff_id, char *name);
short int* FurnCtlGetFlgPtr(int buff_id, char *name);
void FurnCtlDeleteDrawFlgAll(int buff_id);
void FurnCtlDeleteManimFlgAll(int buff_id);
short int FurnCtlGetAttr(int buff_id, char *name);
char* FurnCtlGetModelAddr(int buff_id, char *name);
int FurnCtlGetSize(int buff_id, char *name);
char* FurnCtlGetMotAddrEx(int buff_id, char *name, int iIndex);
char* FurnCtlGetMotAddr(int buff_id, char *name);
int FurnCtlGetAddr(int buff_id, char *name, char **model, char **mot);
void CurnCtlSetTopWorkAddr(int buff_id, char *addr);
void FurnCtlModelInit(int buff_id);
void FurnCtlInit();
void FurnCtlTerm();
FURN_WORK_HEAD* FurnWorkGetFreeHead();
char* FurnWorkAlloc(int ctl_id, int size);
void FurnWorkFree(int ctl_id);
void FurnWorkFreeAll();
void FurnWorkInit();
void FurnWorkTrem();
FURN_CTL* FURN_CTL * _fixed_array_verifyrange<FURN_CTL>(size_t v, size_t _max);
type_info& FURN_CTL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FURNCTL_H
