// STATUS: NOT STARTED

#include "menu_cam.h"

void MenuCam() {
  int iVar1;
  
  if (menu_wrk.step == '\0') {
    MenuCamMainInit__Fc('\0');
    menu_wrk.step = '\x01';
  }
  if ((menu_wrk.step == '\x01') && (iVar1 = MenuCamMain__Fv(), iVar1 != 0)) {
    menu_wrk.step = '\x02';
  }
  if (menu_wrk.step == '\x02') {
    SetNextMenuStep__Fi(8);
  }
  return;
}

void MenuCamDisp() {
  if (menu_wrk.step == '\x01') {
    MenuCamMainDisp__Fv();
  }
  return;
}
