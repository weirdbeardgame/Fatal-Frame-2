// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_GAME_DATA_SAVE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_GAME_DATA_SAVE_H


void GameDataSaveInit(char exe_label);
void GameDataSaveBackGroundLoadReq(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */));
int GameDataSaveMain();
void GameDataSaveEnd();
void GameDataSaveTexMemFree();
void GameDataSaveDispMain();
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_GAME_DATA_SAVE_H
