// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_UTILITY2_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_UTILITY2_H


int Get2Power(int num);
unsigned int GetAlignUp(unsigned int a, int power);
int GetOffsetChar(char *string, char chr);
int GetStrLen(char *str);
int GetOffsetLastChar(char *string, int len, char chr);
int FileExtensionMatch(char *filename, char *c_extent);
int GetExtension(char *filename);
int RingBufAdd(int idx, int buf_num);
int RingBufCalcDiff(int former, int later, int num);
void DumpMemReal(unsigned int adrs, int size, char *name);
float GetClampValF(float val, float upper, float lower);
int GetClampVal(int val, int upper, int lower);
void SetPrintWarning(void (*func)(/* parameters unknown */));
void SetPrintAssert(void (*func)(/* parameters unknown */));
void PrintWarningReal(char *str);
void SetAssertPreMessage(char *cComment);
void PrintAssertReal(char *str);
char* StrToLower(char *str);
char* GetNameWithoutPath(char *path_file);
float RotLimitChk2(float rot);
void PrintBit(int iInt);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_UTILITY2_H
