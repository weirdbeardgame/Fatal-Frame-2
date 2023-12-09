// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSP_H

extern DEBUG_MENU dbg_kaza_main;
extern unsigned char MAPSP_KAZ_HEAD type_info node[8];
extern unsigned char MAPSP_KAZ_SPEED type_info node[8];

void MapSpKayaDrawCallback();
int MapSpKazRegistObj(int iGroup, void *pHdl, int iType, float *pfMstRot);
void MapSpKazDeleteGroup(int iGroupID);
void MapSpKazDeleteAll();
void MapSpKazSetMatrix(MAPSP_KAZ_HEAD *pKazHead);
int MapSpKazProc();
float*[4] MapSpGetReelPos();
void MapSpMoviSetFlg(int iOn_Off);
int MapSpMoviProc();
int MapSpAraCheck();
int MapSpKageProc();
int MapSpFusumaProc();
void MapSpObjReg(int iGroup, char *sName, MAPOBJ_DAT *pMObjDat, float *pfRot);
void MapSpObjRelease(int iGroupID);
void MapSpProc();
void MapSpInit();
MAPSP_KAZ_HEAD* MAPSP_KAZ_HEAD * _fixed_array_verifyrange<MAPSP_KAZ_HEAD>(size_t v, size_t _max);
MAPSP_KAZ_SPEED* MAPSP_KAZ_SPEED * _fixed_array_verifyrange<MAPSP_KAZ_SPEED>(size_t v, size_t _max);
type_info& MAPSP_KAZ_HEAD type_info function();
type_info& MAPSP_KAZ_SPEED type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSP_H
