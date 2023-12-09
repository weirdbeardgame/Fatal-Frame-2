// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MHCTL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MHCTL_H

typedef struct {
	int draw_flg;
	int draw_hight;
	int predb_mode;
	int save;
} MH_CTL_DB_FLG;

extern MH_CTL_DB_FLG mhdb;
extern DEBUG_MENU dbg_room_main;

void MhCtlInit();
int MhCtlGetMapHeight(float *tv, float *pos, int room_no, int flg);
int MhCtlHitLineCheck(float *pos1, float *pos2, int room_no);
int MhCtlGetRoomNo(int kai, float *vPos);
void MhCtlGetObjStatStart(int room_no, int kai);
MB_OUT_SECTION* MhCtlGetObjStatNext();
int MhCtlMain(int area_no);
void MhCtlDrawShadow();
void MhCtlSetVuFlush();
int MhCtlDraw();
void MhCtlDrawLock();
void MhCtlDrawUnlock();
void MhCtlDbOutObjPos(int room_no, int kai);
void MhCtlReload();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MHCTL_H
