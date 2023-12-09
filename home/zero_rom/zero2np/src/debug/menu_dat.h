// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_MENU_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_MENU_DAT_H


void DbIlInit(int cnt);
void DbIlPush(char *str);
void DbIlPop(char *str);
void DbmFOpen(char *path, int type);
void DbmFWrite(char *str);
void DbmFClose();
void DbmFWriteLabelOne(char *name, char *num);
void DbmSave(DEBUG_MENU *in, char *path, char *fname, char *label);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_MENU_DAT_H
