// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_CRYSTAL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_CRYSTAL_H


void PlyrCrystalInit();
void GetCrystal(int crystal_label);
void LostCrystal(int crystal_label);
void HearCrystal(int crystal_label);
char GetPlyrCrystalState(int crystal_label);
int GetCrystalStreamID(int crystal_label);
MOVIE_TITLE_DAT* GetCrystalTitleDat(int crystal_label);
int GetPlyrHaveCrystalNum();
void SetSave_PlyrCrystal(MC_SAVE_DATA *data);
void DebugAllCrystalGet();
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_CRYSTAL_H
