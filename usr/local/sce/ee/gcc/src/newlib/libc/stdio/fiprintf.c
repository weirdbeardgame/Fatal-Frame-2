// STATUS: NOT STARTED

#include "fiprintf.h"

int fiprintf(FILE *fp, char *fmt) {
  int iVar1;
  undefined local_30 [48];
  
  iVar1 = vfiprintf(fp,fmt,local_30);
  return iVar1;
}
