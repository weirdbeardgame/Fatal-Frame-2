// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_MAP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_MAP_H


void MenuMap();
int MenuMapHitCheck(float *target, float *tri0, float *tri1, float *tri2, float *tri3);
int GetPlyrMapLabel();
int GetMapLabelFromAreaLabel(int area_label, int floor_label);
void MenuMapRelease();
void MenuMapDisp();
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_MAP_H
