// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_H

void SavePointStartReq();
void SavePointBackGroundLoadReq();
void SavePointEnd();
void init_SavePoint_FadeIn();
GPHASE_ENUM one_SavePoint_FadeIn(GPHASE_ENUM dummy);
void end_SavePoint_FadeIn();
void init_SavePoint_FadeOut();
GPHASE_ENUM one_SavePoint_FadeOut(GPHASE_ENUM dummy);
void end_SavePoint_FadeOut();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SAVEPOINT_SAVEPOINT_H
