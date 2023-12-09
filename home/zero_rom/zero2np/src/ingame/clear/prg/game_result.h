// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_GAME_RESULT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_GAME_RESULT_H


void GameResultFadeOutReq();
void* GetGameResultCharPk2Addr();
void init_GameResult();
GPHASE_ENUM pre_GameResult(GPHASE_ENUM dummy);
GPHASE_ENUM after_GameResult(GPHASE_ENUM result);
void end_GameResult();
void init_GameResult_Top();
GPHASE_ENUM one_GameResult_Top(GPHASE_ENUM dummy);
void end_GameResult_Top();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_GAME_RESULT_H
