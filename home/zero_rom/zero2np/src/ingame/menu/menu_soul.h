// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_SOUL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_SOUL_H

extern unsigned char DISP_SOUL_LIST_DATA type_info node[8];

void MenuSoulListCompFlgInit();
void GetMenuSoulTexMem();
void MenuSoulTexLoadReq();
void MenuSoul();
void LiberateMenuSoulTexMem();
void MenuSoulTexLoadCancel();
void MenuSoulDisp();
void SetSave_ListCompDispFlg(MC_SAVE_DATA *data);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
DISP_SOUL_LIST_DATA* DISP_SOUL_LIST_DATA * _fixed_array_verifyrange<DISP_SOUL_LIST_DATA>(size_t v, size_t _max);
type_info& DISP_SOUL_LIST_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_SOUL_H
