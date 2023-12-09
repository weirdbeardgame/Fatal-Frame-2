// STATUS: NOT STARTED

#include "vib_manage.h"

static int vib1_time;
static int vib2_time;
static int vib2_pow;

void InitVibrate() {
  vib1_time = 0;
  vib2_time = 0;
  vib2_pow = 0;
  return;
}

void SetVibrate(int type, int time, int pow) {
  if (type != 0) {
    vib2_time = time;
    vib2_pow = pow;
    return;
  }
  vib1_time = time;
  return;
}

void CallVibrate() {
  bool bVar1;
  int iVar2;
  
  iVar2 = vib1_time + -1;
  bVar1 = 0 < vib1_time;
  vib1_time = iVar2;
  if (bVar1) {
    VibrateRequest1__FUsUs(0,1);
  }
  iVar2 = vib2_time + -1;
  bVar1 = 0 < vib2_time;
  vib2_time = iVar2;
  if (bVar1) {
    VibrateRequest2__FUsUs(0,(short)vib2_pow);
  }
  return;
}
