// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_ITEM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_ITEM_H

extern unsigned char DISP_ITEM_DATA type_info node[8];

void GetMenuItemTexMem();
void MenuItemTexLoadReq();
void MenuItem();
void LiberateMenuItemTexMem();
void MenuItemTexLoadCancel();
void MenuItemDisp();
DISP_ITEM_DATA* DISP_ITEM_DATA * _fixed_array_verifyrange<DISP_ITEM_DATA>(size_t v, size_t _max);
type_info& DISP_ITEM_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_ITEM_H
