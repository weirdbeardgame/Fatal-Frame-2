// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_KAI_KAI_PZL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_KAI_KAI_PZL_H


void KaiPuzzleSetFadeCmn(int frame, int alpha);
void KaiPuzzleSetFade(int frame, int alpha, int flg);
void KaiPuzzleSetFade2(int frame, int alpha_st, int alpha_en, int flg);
void KaiPuzzleSetFadeNextMode(int mode, int frame);
void KaiPuzzleFadeProc();
void KaiPuzzleExeInit(int mode);
void KaiPzlDrawCancelWindow(u_char alpha);
int KaiPzlProc();
int KaiPzlAnim();
int KaiPzlClear();
int KaiPzlDrawMsg();
int KaiPzlCancel();
int KaiPzlRelease();
int KaiPzlTerm();
int KaiPzlTerm2();
int KaiPuzzleMain();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_KAI_KAI_PZL_H
