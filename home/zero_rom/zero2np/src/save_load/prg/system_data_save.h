// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_SYSTEM_DATA_SAVE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_SYSTEM_DATA_SAVE_H


void SystemDataSaveInit(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */));
int SystemDataSaveMain();
void SystemDataSaveEnd();
void SystemDataSaveDispMain();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SAVE_LOAD_PRG_SYSTEM_DATA_SAVE_H
