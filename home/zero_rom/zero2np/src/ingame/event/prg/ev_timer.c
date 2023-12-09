// STATUS: NOT STARTED

#include "ev_timer.h"

static EV_TIMER_CTRL ev_timer_ctrl;
unsigned char REGIST_TIMER type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ac350;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf12REGIST_TIMER(0x3f0638,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf12REGIST_TIMER(0x3f0640,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf12REGIST_TIMER(0x3ac398,_max);
  }
  return (uint **)0x0;
}

void EvTimerCtrlInit() {
	int i;
	
  int iVar1;
  int iVar2;
  REGIST_TIMER *timer;
  
  timer = (REGIST_TIMER *)&ev_timer_ctrl.regist_timer;
  ev_timer_ctrl.event_timer = 0;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12REGIST_TIMER_UiUi_PX01(iVar1,0x1e);
    RegistTimerInit__FP12REGIST_TIMER(timer);
                    /* end of inlined section */
    timer = timer + 1;
    iVar1 = iVar2;
  } while (iVar2 < 0x1e);
  return;
}

static void RegistTimerInit(REGIST_TIMER *timer) {
  timer->req_state = '\0';
  timer->req_event_id = -1;
  timer->event_id = -1;
  timer->timer = 0;
  return;
}

void EvTimerMain() {
  uchar uVar1;
  
  uVar1 = GetEvWrkWaitFlg__Fv();
  if (uVar1 == '\0') {
    EvTimerCount__Fv();
  }
  EvTimerExe__Fv();
  return;
}

static void EvTimerCount() {
  ev_timer_ctrl.event_timer = ev_timer_ctrl.event_timer + 1;
  if (399999999 < ev_timer_ctrl.event_timer) {
    ev_timer_ctrl.event_timer = 0;
  }
  return;
}

static void EvTimerExe() {
	int i;
	
  REGIST_TIMER *timer;
  int iVar1;
  int iVar2;
  
  timer = (REGIST_TIMER *)&ev_timer_ctrl.regist_timer;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12REGIST_TIMER_UiUi_PX01(iVar1,0x1e);
                    /* end of inlined section */
    if ((timer->event_id != -1) && (timer->timer == ev_timer_ctrl.event_timer)) {
      printf("TIMER COMPRETE!\n");
      Req_CompulsionSetEventState__FiiUc(timer->event_id,timer->req_event_id,timer->req_state);
      RegistTimerInit__FP12REGIST_TIMER(timer);
    }
    timer = timer + 1;
    iVar1 = iVar2;
  } while (iVar2 < 0x1e);
  return;
}

void EvTimerRegist(int event_id, u_int timer, int req_event_id, u_char state) {
	int empty_area;
	
  int iVar1;
  uint uVar2;
  
  iVar1 = GetEmptyRegistTimer__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (iVar1 == -1) {
    printf("ERROR!! TIMER REGIST NO EMPTY!!\n");
    return;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z12REGIST_TIMER_UiUi_PX01(iVar1,0x1e);
                    /* end of inlined section */
  ev_timer_ctrl.regist_timer.field0_0x0.m_aData[iVar1].event_id = event_id;
  uVar2 = CalTimerFill__FUi(timer);
  ev_timer_ctrl.regist_timer.field0_0x0.m_aData[iVar1].req_state = state;
  ev_timer_ctrl.regist_timer.field0_0x0.m_aData[iVar1].req_event_id = req_event_id;
  ev_timer_ctrl.regist_timer.field0_0x0.m_aData[iVar1].timer = uVar2;
  return;
}

static int GetEmptyRegistTimer() {
	int empty_res;
	int i;
	
  fixed_array_base<REGIST_TIMER,30,REGIST_TIMER[30]> *pfVar1;
  int iVar2;
  fixed_array<REGIST_TIMER,30> *pfVar3;
  
  iVar2 = 0;
  pfVar3 = &ev_timer_ctrl.regist_timer;
  while( true ) {
    if (0x1d < iVar2) {
      return -1;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12REGIST_TIMER_UiUi_PX01(iVar2,0x1e);
    pfVar1 = &pfVar3->field0_0x0;
    pfVar3 = (fixed_array<REGIST_TIMER,30> *)((pfVar3->field0_0x0).m_aData + 1);
    if (pfVar1->m_aData[0].event_id == -1) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

static u_int CalTimerFill(u_int timer) {
	u_int fill_time;
	
  uint uVar1;
  
  uVar1 = ev_timer_ctrl.event_timer + timer;
  printf("set time %d\n");
  printf("fill_time %d\n");
  if (399999999 < uVar1) {
    uVar1 = uVar1 + 0xe8287c00;
  }
  return uVar1;
}

void EvTimerRelease(int event_id) {
	int i;
	
  int iVar1;
  int iVar2;
  REGIST_TIMER *timer;
  
  timer = (REGIST_TIMER *)&ev_timer_ctrl.regist_timer;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12REGIST_TIMER_UiUi_PX01(iVar1,0x1e);
    iVar2 = iVar1 + 1;
    if (timer->event_id == event_id) {
      _fixed_array_verifyrange__H1Z12REGIST_TIMER_UiUi_PX01(iVar1,0x1e);
      RegistTimerInit__FP12REGIST_TIMER(timer);
    }
                    /* end of inlined section */
    timer = timer + 1;
    iVar1 = iVar2;
  } while (iVar2 < 0x1e);
  return;
}

void SetSave_EvTimerCtrl(MC_SAVE_DATA *data) {
  data->size = 0x1e4;
  data->addr = (uchar *)&ev_timer_ctrl;
  return;
}

REGIST_TIMER* REGIST_TIMER * _fixed_array_verifyrange<REGIST_TIMER>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& REGIST_TIMER type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to EvTimerCtrlInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
