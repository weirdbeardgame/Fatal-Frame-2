// STATUS: NOT STARTED

#include "atol.h"

long int atol(char *s) {
  long lVar1;
  
  lVar1 = strtol(s,(char **)0x0,10);
  return lVar1;
}
