// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_LANG_SEL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_LANG_SEL_H


void LoadLangSetUp();
void LangData_LoadReq();
int LangData_LoadWait();
void Set_McSaveLanguage(u_char language);
void SetSave_Language(MC_SAVE_DATA *data);
void init_LangSel_Main();
GPHASE_ENUM one_LangSel_Main(GPHASE_ENUM dummy);
void end_LangSel_Main();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_LANG_SEL_H
