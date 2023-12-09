// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_BGM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_BGM_H


void map_bgmInit();
void map_bgmChangeTbl(int iRoomID, int iStrFileNo);
void map_bgmMain();
void map_bgmFadeOut(int fade_time, int target_vol);
void map_bgmRelease(int fade_out_time);
void map_bgmFadeIn(int fade_time);
void map_bgmSetSave(MC_SAVE_DATA *data);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_BGM_H
