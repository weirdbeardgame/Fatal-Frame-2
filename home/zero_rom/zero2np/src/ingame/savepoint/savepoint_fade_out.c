// STATUS: NOT STARTED

#include "savepoint_fade_out.h"

static int save_point_fade_timer = 0;

void SavePointFadeOutInit() {
  save_point_fade_timer = 0;
  return;
}

void SavePointFadeOutDispMain() {
  uchar alpha;
  
  alpha = Zero2Anim2D_FadeOutAnimCtrl__FPis(&save_point_fade_timer,0x1e);
  SavePoint_BlackBgDisp__FUc(alpha);
  if (0x1d < save_point_fade_timer) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
  }
  return;
}
