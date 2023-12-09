// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_OUTGAME_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_OUTGAME_H

extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void init_OutGame_Main();
GPHASE_ENUM pre_OutGame_Main(GPHASE_ENUM dummy);
GPHASE_ENUM after_OutGame_Main(GPHASE_ENUM result);
void end_OutGame_Main();
void init_UBI_Mode();
GPHASE_ENUM one_UBI_Mode(GPHASE_ENUM dummy);
void end_UBI_Mode();
void init_Tecmo_Mode();
GPHASE_ENUM one_Tecmo_Mode(GPHASE_ENUM dummy);
void end_Tecmo_Mode();
void init_Project_Mode();
GPHASE_ENUM one_Project_Mode(GPHASE_ENUM dummy);
void end_Project_Mode();
void BackGroundLoadReq();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_OUTGAME_H
