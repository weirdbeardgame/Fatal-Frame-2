// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPPUT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPPUT_H

extern unsigned char MAPPUT_OBJ type_info node[8];

void MapPutSetFlg(int buff_id, int flg);
void MapPutDeleteFlg(int buff_id, int flg);
void MapPutSetFirst(void *obj, short int offset);
void MapPutSetZoffset(void *obj, float offset);
void MapPutSetMatrix(void *obj, float *mat[4]);
void MapPutSetMatrixPtr(void *obj, float *mp[4][4]);
void MapPutSetBuffID(void *obj, int buff_id);
void MapPutSetLitPtr(void *obj, GRA3DLIGHTDATA *light_ptr);
void MapPutSetWork(void *obj, int work);
void MapPutSetModelPtr(void *obj, u_int *addr);
float*[4][4] MapPutGetMatrixPtr(void *obj);
int* MapPutGetFlgPtr(void *obj);
GRA3DLIGHTDATA* MapPutGetLitPtr(void *obj);
u_int* MapPutGetModelPtr(void *obj);
int MapPutGetWork(void *obj);
void MapPutSetFuncAddr(void *obj, void (*func)(/* parameters unknown */));
void* MapPutSetObj(int buff_id, u_int *addr, float *pos, float *rot, float *scale, GRA3DLIGHTDATA *lit, int flg);
void* MapPutSetFunc(int buff_id, u_int *addr, int flg);
void MapPutChangeFunc(void *pHdl, void (*func)(/* parameters unknown */));
void MapPutChangeObj(void *pHdl);
void MpaPutDeleteOneObj(void *hdl);
void MapPutDelete(int buff_id);
void* MapPutGetNowHdl();
int MapPutGetNowBuffID();
void MapPutDraw();
void MapPutResetAll();
MAPPUT_OBJ* MAPPUT_OBJ * _fixed_array_verifyrange<MAPPUT_OBJ>(size_t v, size_t _max);
type_info& MAPPUT_OBJ type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPPUT_H
