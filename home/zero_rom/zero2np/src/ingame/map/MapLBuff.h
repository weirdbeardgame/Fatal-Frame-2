// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLBUFF_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLBUFF_H


int MapLBuffRegist(int map_id);
int MapLBuffLoad(int map_id);
int MapLBuffDeleteFile(int map_id, int label);
int MapLBuffSetLoadFile(int map_id, int label);
void MapLBuffInit();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLBUFF_H
