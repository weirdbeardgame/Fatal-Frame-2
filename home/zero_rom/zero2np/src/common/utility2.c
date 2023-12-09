// STATUS: NOT STARTED

#include "utility2.h"

static void (*print_warning_func)(/* parameters unknown */) = NULL;
static void (*print_assert_func)(/* parameters unknown */) = NULL;
static char g_cComment[300];

int Get2Power(int num) {
	int power;
	int cmp;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 1;
  if (num < 1) {
    do {
      iVar1 = iVar1 << 1;
      iVar2 = iVar2 + 1;
    } while (num < iVar1);
  }
  return iVar2;
}

unsigned int GetAlignUp(unsigned int a, int power) {
	unsigned int mask;
	
  return (a + ~(-1 << (power & 0x1fU)) >> (power & 0x1fU)) << (power & 0x1fU);
}

int GetOffsetChar(char *string, char chr) {
	int ofst;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    if ((long)string[iVar2] == 0) {
      return -1;
    }
    iVar1 = iVar2 + 1;
  } while ((long)string[iVar2] != (long)(int)chr);
  return iVar2;
}

int GetStrLen(char *str) {
	int i;
	
  int iVar1;
  
  iVar1 = 0;
  if (*str != '\0') {
    for (iVar1 = 1; str[iVar1] != '\0'; iVar1 = iVar1 + 1) {
    }
  }
  return iVar1;
}

int GetOffsetLastChar(char *string, int len, char chr) {
	int i;
	
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = len + -1;
  iVar1 = iVar3;
  if ((long)string[iVar3] != (long)(int)chr) {
    cVar2 = string[iVar3];
    while (iVar1 = -1, cVar2 != '\0') {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return -1;
      }
      if ((long)string[iVar3] == (long)(int)chr) {
        return iVar3;
      }
      cVar2 = string[iVar3];
    }
  }
  return iVar1;
}

int FileExtensionMatch(char *filename, char *c_extent) {
	char *ex;
	char *ptr;
	int ofst;
	
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = GetStrLen__FPCc(filename);
  iVar2 = GetOffsetLastChar__FPCcic(filename,iVar2,'.');
  pcVar3 = filename + iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else {
    do {
      pcVar3 = pcVar3 + 1;
      cVar1 = *c_extent;
      c_extent = c_extent + 1;
      if (*pcVar3 != cVar1) {
        return 0;
      }
      iVar2 = 1;
    } while (*pcVar3 != '\0');
  }
  return iVar2;
}

int GetExtension(char *filename) {
	char *ptr;
	int ofst;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetOffsetChar(filename,'.');
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = *(int *)(filename + iVar1 + 1);
  }
  return iVar2;
}

int RingBufAdd(int idx, int buf_num) {
  int iVar1;
  
  iVar1 = idx + 1;
  if (buf_num <= iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}

int RingBufCalcDiff(int former, int later, int num) {
  int iVar1;
  
  iVar1 = former - later;
  if (former < later) {
    iVar1 = num - (later - former);
  }
  return iVar1;
}

void DumpMemReal(unsigned int adrs, int size, char *name) {
	int i;
	int count;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  printf("DUMP<%s>  ADRS<%x>\n");
  if (0 < size) {
    do {
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 1;
      printf(s__02x_003f48c0);
      if (0xf < iVar2) {
        iVar2 = 0;
        printf(s__0x_x_003f48c8);
      }
    } while (iVar1 < size);
  }
  return;
}

float GetClampValF(float val, float upper, float lower) {
  if ((val <= upper) && (upper = lower, lower <= val)) {
    upper = val;
  }
  return upper;
}

int GetClampVal(int val, int upper, int lower) {
  if ((val <= upper) && (upper = lower, lower <= val)) {
    upper = val;
  }
  return upper;
}

void SetPrintWarning(void (*func)(/* parameters unknown */)) {
  print_warning_func = func;
  return;
}

void SetPrintAssert(void (*func)(/* parameters unknown */)) {
  print_assert_func = func;
  return;
}

void PrintWarningReal(char *str) {
	va_list ap;
	char buf[1000];
	
  void *ap;
  char buf [1000];
  undefined local_38 [56];
  
  vsprintf(buf,str,local_38);
  if (print_warning_func == (undefined1 *)0x0) {
    printf("<<warning>>\n");
    printf(&DAT_003f48d8);
  }
  else {
    (*(code *)print_warning_func)(buf);
  }
  return;
}

void SetAssertPreMessage(char *cComment) {
	va_list ap;
	
  void *ap;
  undefined local_38 [56];
  
  vsprintf(g_cComment,cComment,local_38);
  return;
}

void PrintAssertReal(char *str) {
	va_list ap;
	char buf[2000];
	
  size_t sVar1;
  void *ap;
  char buf [2000];
  undefined local_38 [56];
  
  strcpy(buf,g_cComment);
  sVar1 = strlen(buf);
  vsprintf(buf + (int)sVar1,str,local_38);
  if (print_assert_func == (undefined1 *)0x0) {
    printf("<<assert>>\n");
    printf(&DAT_003f48d8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (*(code *)print_assert_func)(buf);
  return;
}

char* StrToLower(char *str) {
	char *strp;
	
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *str;
  pcVar3 = str;
  cVar1 = *str;
  while (cVar1 != '\0') {
    if ((""[cVar2 + 1] & 1U) != 0) {
      cVar2 = cVar2 + ' ';
    }
    *pcVar3 = cVar2;
    pcVar3 = pcVar3 + 1;
    cVar2 = *pcVar3;
    cVar1 = cVar2;
  }
  return str;
}

char* GetNameWithoutPath(char *path_file) {
	int len;
	
  size_t sVar1;
  
  sVar1 = strlen(path_file);
  while( true ) {
    if (path_file[(int)sVar1] == '/') break;
    sVar1 = (size_t)((int)sVar1 + -1);
  }
  return path_file + (int)sVar1 + 1;
}

float RotLimitChk2(float rot) {
  if (DAT_003ee9ec < rot) {
    return rot - DAT_003ee9f0;
  }
  if (DAT_003ee9f4 <= rot) {
    return rot;
  }
  return rot + DAT_003ee9f8;
}

void PrintBit(int iInt) {
	int i;
	
  uint uVar1;
  uint uVar2;
  
  printf(&DAT_003f48e0);
  uVar2 = 0;
  uVar1 = iInt;
  do {
    uVar2 = uVar2 + 1;
    if ((uVar1 & 1) == 0) {
      printf(&DAT_003f48f0);
    }
    else {
      printf(&DAT_003f48e8);
    }
    uVar1 = iInt >> (uVar2 & 0x1f);
  } while ((int)uVar2 < 0x20);
  printf(&DAT_003f48f8);
  return;
}
