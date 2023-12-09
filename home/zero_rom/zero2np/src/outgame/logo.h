// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_LOGO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_LOGO_H


void InitLogo();
void InitLogoCtrl();
void GetTecmoLogoTexMem();
void GetProjectLogoTexMem();
void TecmoLogoTexLoadReq();
void ProjectLogoTexLoadReq();
int TecmoLogoTexLoadWait();
int ProjectLogoTexLoadWait();
int LogoMain(int logo_label, int in_time, int wait_time, int out_time);
void ReleaseTecmoLogoTexMem();
void ReleaseProjectLogoTexMem();
int LangSelMain();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_LOGO_H
