// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MMANAGE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MMANAGE_H

typedef OL_LOAD_ERR MMANAGE_ERR;
void ModelMemoryFree(int wrk_no);
int* GetItemSgdAddr(int *pDataTop);
MMANAGE_ERR mmanageReqItemMdl(int mdl_no);
int mmanageIsReadyItemMdl(int mdl_no, int *mdl_pp, int bForceFree);
void mmanageClearItemMdl(int mdl_no);
MMANAGE_ERR mmanageReqMdl(int mdl_no);
int mmanageIsReadyMdl(int mdl_no, int *mdl_pp, int bForceFree);
void mmanageClearMdl(int mdl_no);
MMANAGE_ERR mmanageReqAnm(int mdl_no);
int mmanageIsReadyAnm(int mdl_no, int *mdl_pp, int bForceFree);
void mmanageClearAnm(int mdl_no);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MMANAGE_H
