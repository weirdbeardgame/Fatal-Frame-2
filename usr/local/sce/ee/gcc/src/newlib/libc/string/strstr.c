// STATUS: NOT STARTED

#include "strstr.h"

char* strstr(char *searchee, char *lookfor) {
	size_t i;
	
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = *lookfor;
  if (*searchee == '\0') {
    pcVar1 = (char *)0x0;
    if (cVar2 == '\0') {
      pcVar1 = searchee;
    }
    return pcVar1;
  }
  while( true ) {
    if (cVar2 == '\0') {
      return searchee;
    }
    if (cVar2 == *searchee) {
      iVar3 = 1;
      while( true ) {
        if (lookfor[iVar3] == '\0') {
          return searchee;
        }
        if (lookfor[iVar3] != searchee[iVar3]) break;
        iVar3 = iVar3 + 1;
      }
    }
    searchee = searchee + 1;
    if (*searchee == '\0') break;
    cVar2 = *lookfor;
  }
  return (char *)0x0;
}
