// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_RADIO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_RADIO_H

extern unsigned char DISP_CRYSTAL_DATA type_info node[8];

void GetMenuRadioTexMem();
void MenuRadioTexLoadReq();
void MenuRadio();
void MenuRadioStreamStop();
void LiberateMenuRadioTexMem();
void MenuRadioTexLoadCancel();
void MenuRadioDisp();
DISP_CRYSTAL_DATA* DISP_CRYSTAL_DATA * _fixed_array_verifyrange<DISP_CRYSTAL_DATA>(size_t v, size_t _max);
type_info& DISP_CRYSTAL_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_RADIO_H
