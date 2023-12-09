// STATUS: NOT STARTED

#include "strrchr.h"

char* strrchr(char *s, int i) {
	char *last;
	char c;
	
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  cVar1 = *s;
  while (cVar1 != '\0') {
    if (cVar1 == (char)i) {
      pcVar2 = s;
    }
    s = s + 1;
    cVar1 = *s;
  }
  if ((char)i != '\0') {
    s = pcVar2;
  }
  return s;
}
