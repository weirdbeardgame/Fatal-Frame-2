// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSAVE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSAVE_H


void* MapSaveGetTblPtr(int label);
int MapSaveGetStat(int label, int stat);
void MapSaveSetStat(int label, int stat, int num);
void MapSaveSetMstDat(int reg_id);
void MapSaveCopyDat(void *out, void *mst);
void MapSaveRegist();
void MapSaveCallback(MC_SAVE_DATA *data);
void MapSavePushFirstDat();
void MapSavePopFirstDat();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSAVE_H
