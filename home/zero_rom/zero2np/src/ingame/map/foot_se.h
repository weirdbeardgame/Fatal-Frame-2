// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FOOT_SE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FOOT_SE_H


void foot_seSetRoom(int room_id_new, int room_id_now);
void foot_seInit();
void foot_seRelease();
void foot_seSetNewFiles(int *file_array, int file_num);
void foot_sePlay(float *pos, int vol, int pitch);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FOOT_SE_H
