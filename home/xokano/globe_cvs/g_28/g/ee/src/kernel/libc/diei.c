// STATUS: NOT STARTED

#include "diei.h"

int DIntr() {
	u_int stat;
	u_int oldstat;
	
  if ((Status & 0x10000) != 0) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    return (int)((Status & 0x10000) != 0);
  }
  return 0;
}

int EIntr() {
	u_int oldstat;
	
  EI();
  return (int)((Status & 0x10000) != 0);
}
