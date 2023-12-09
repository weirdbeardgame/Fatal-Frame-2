// STATUS: NOT STARTED

#include "atoi.h"

int atoi(char *s) {
  long lVar1;
  
  lVar1 = strtol(s,(char **)0x0,10);
  return (int)lVar1;
}
