// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_MEMO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_MEMO_H

extern unsigned char DISP_MEMO_DATA type_info node[8];

void GetMenuMemoTexMem();
void MenuMemoTexLoadReq();
void MenuMemo();
void LiberateMenuMemoTexMem();
void MenuMemoTexLoadCancel();
void MenuMemoDisp();
DISP_MEMO_DATA* DISP_MEMO_DATA * _fixed_array_verifyrange<DISP_MEMO_DATA>(size_t v, size_t _max);
type_info& DISP_MEMO_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_MEMO_H
