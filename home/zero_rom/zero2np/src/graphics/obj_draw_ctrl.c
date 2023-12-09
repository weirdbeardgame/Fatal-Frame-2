// STATUS: NOT STARTED

#include "obj_draw_ctrl.h"

OBJ_DRAW_FLG obj_draw_ctrl = {
	/* .player = */ 0,
	/* .sister = */ 0,
	/* .enemy = */ 0,
	/* .effect = */ 0,
	/* .room = */ 0,
	/* .obj = */ 0,
	/* .sky = */ 0,
	/* .shadow = */ 0,
	/* .shadow_src = */ 0
};

void InitDrawFLG() {
  SetDrawFLGAllON__Fv();
  return;
}

void SetDrawFLGAllON() {
  SetPlyrDrawFLG__Fi(1);
  SetSisDrawFLG__Fi(1);
  SetEneDrawFLG__Fi(1);
  SetEffDrawFLG__Fi(1);
  SetRoomDrawFLG__Fi(1);
  SetObjDrawFLG__Fi(1);
  SetSkyDrawFLG__Fi(1);
  SetSdwDrawFLG__Fi(1);
  SetSdwSrcDrawFLG__Fi(1);
  return;
}

void SetDrawFLGAllOFF() {
  SetPlyrDrawFLG__Fi(0);
  SetSisDrawFLG__Fi(0);
  SetEneDrawFLG__Fi(0);
  SetEffDrawFLG__Fi(0);
  SetRoomDrawFLG__Fi(0);
  SetObjDrawFLG__Fi(0);
  SetSkyDrawFLG__Fi(0);
  SetSdwDrawFLG__Fi(0);
  SetSdwSrcDrawFLG__Fi(0);
  return;
}

int GetPlyrDrawFLG() {
  return obj_draw_ctrl.player;
}

void SetPlyrDrawFLG(int sw) {
  obj_draw_ctrl.player = sw % 2;
  return;
}

int GetSisDrawFLG() {
  return obj_draw_ctrl.sister;
}

void SetSisDrawFLG(int sw) {
  obj_draw_ctrl.sister = sw % 2;
  return;
}

int GetEneDrawFLG() {
  return obj_draw_ctrl.enemy;
}

void SetEneDrawFLG(int sw) {
  obj_draw_ctrl.enemy = sw % 2;
  return;
}

int GetEffDrawFLG() {
  return obj_draw_ctrl.effect;
}

void SetEffDrawFLG(int sw) {
  obj_draw_ctrl.effect = sw % 2;
  return;
}

int GetRoomDrawFLG() {
  return obj_draw_ctrl.room;
}

void SetRoomDrawFLG(int sw) {
  obj_draw_ctrl.room = sw % 2;
  return;
}

int GetObjDrawFLG() {
  return obj_draw_ctrl.obj;
}

void SetObjDrawFLG(int sw) {
  obj_draw_ctrl.obj = sw % 2;
  return;
}

int GetSkyDrawFLG() {
  return obj_draw_ctrl.sky;
}

void SetSkyDrawFLG(int sw) {
  obj_draw_ctrl.sky = sw % 2;
  return;
}

int GetSdwDrawFLG() {
  return obj_draw_ctrl.shadow;
}

void SetSdwDrawFLG(int sw) {
  obj_draw_ctrl.shadow = sw % 2;
  return;
}

int GetSdwSrcDrawFLG() {
  return obj_draw_ctrl.shadow_src;
}

void SetSdwSrcDrawFLG(int sw) {
  obj_draw_ctrl.shadow_src = sw % 2;
  return;
}

void SetDrawFLG_PL_GameOver() {
  SetPlyrDrawFLG__Fi(1);
  SetSisDrawFLG__Fi(0);
  SetEneDrawFLG__Fi(0);
  SetEffDrawFLG__Fi(0);
  SetRoomDrawFLG__Fi(0);
  SetObjDrawFLG__Fi(0);
  SetSkyDrawFLG__Fi(0);
  SetSdwDrawFLG__Fi(0);
  SetSdwSrcDrawFLG__Fi(0);
  return;
}

void SetDrawFLG_SI_GameOver() {
  SetPlyrDrawFLG__Fi(0);
  SetSisDrawFLG__Fi(1);
  SetEneDrawFLG__Fi(0);
  SetEffDrawFLG__Fi(0);
  SetRoomDrawFLG__Fi(0);
  SetObjDrawFLG__Fi(0);
  SetSkyDrawFLG__Fi(0);
  SetSdwDrawFLG__Fi(0);
  SetSdwSrcDrawFLG__Fi(0);
  return;
}
