// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPFOG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPFOG_H


int* MapFogGetColor();
void MapFogAnimStart(int frame);
void MapFogAnim(MAP_FOG_HEAD *now, MAP_FOG_HEAD *st, MAP_FOG_HEAD *en);
void MapFogStartFogEv(int r, int g, int b, int st, int en, int min, int max);
void MapFogEndFogEv(int frame);
void MapFogReset();
void MapFogProc(int room_no, int floor, float *pos);
void MapFogDbProc(int room_no, int floor, float *pos);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPFOG_H
