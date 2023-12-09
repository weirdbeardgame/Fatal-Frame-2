// STATUS: NOT STARTED

#include "finder_camera.h"

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae348;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0898,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f08a0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void FinderModeCameraCtrl() {
	PLYR_WRK *pPlyrWrk;
	float Position[4];
	float Target[4];
	float RotVec[4];
	float SetCamPos[4];
	
  int iVar1;
  float fVar2;
  float Position [4];
  float Target [4];
  float RotVec [4];
  float SetCamPos [4];
  
  iVar1 = IsFinderLocked__Fv();
  if (iVar1 == 0) {
    Position[1] = DAT_003ee288;
    Position[0] = 0.0;
    Position[2] = 0.0;
    Position[3] = 1.0;
    RotFvector__FPfT0(plyr_wrk.cmn_wrk.mbox.rot,Position);
    sceVu0AddVector(SetCamPos,0x33cda0,Position);
    SetCamPos[3] = 1.0;
    gra3dcamSetPosition__FPCf(SetCamPos);
    if ((plyr_wrk.cmn_wrk.st.mvsta & 0x4000) == 0) {
      PointSearchCameraCtrl__Fv();
      PlyrCamCondChk__FP8PLYR_WRKP8MOVE_BOX(&plyr_wrk,(MOVE_BOX *)&plyr_wrk);
      SetFinderRot__FP8PLYR_WRKP8MOVE_BOX(&plyr_wrk,(MOVE_BOX *)&plyr_wrk);
    }
    else if (plyr_wrk.cmn_wrk.mbox.mloop == 0.0) {
      plyr_wrk.cmn_wrk.mbox.rspd[3] = 0.0;
      plyr_wrk.cmn_wrk.st.mvsta = plyr_wrk.cmn_wrk.st.mvsta & 0xffffffffffffbfff;
      plyr_wrk.cmn_wrk.mbox.rspd[0] = 0.0;
      plyr_wrk.cmn_wrk.mbox.rspd[1] = 0.0;
      plyr_wrk.cmn_wrk.mbox.rspd[2] = 0.0;
    }
    else {
      plyr_wrk.cmn_wrk.mbox.mloop = plyr_wrk.cmn_wrk.mbox.mloop - 1.0;
      sceVu0AddVector(0x33cde0,0x33cde0,0x33ce10);
      RotLimitChk__FPf(plyr_wrk.cmn_wrk.mbox.rot + 1);
    }
    Target[0] = 0.0;
    Target[1] = 0.0;
    RotVec[2] = 0.0;
    RotVec[3] = 0.0;
    Target[2] = 1000.0;
    RotVec[0] = plyr_wrk.frot_x;
    RotVec[1] = plyr_wrk.cmn_wrk.mbox.rot[1];
    Target[3] = 1.0;
    RotFvector__FPfT0(RotVec,Target);
    sceVu0AddVector(Target,SetCamPos,Target);
    Target[3] = 1.0;
    gra3dcamSetTarget__FPCfi(Target,1);
    FreqCamera__Fv();
    fVar2 = GetFOVRate__12CNPlyrCamera(&m_plyr_camera);
    gra3dcamSetFov__Ff((float)((double)fVar2 * DAT_003ae3a0));
    gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  }
  return;
}

static void SetFinderRot(PLYR_WRK *pPlyrWrk, MOVE_BOX *pMoveBox) {
	float delta;
	float ax;
	float ay;
	float dist;
	float spd;
	float rot;
	char pad_x;
	char pad_y;
	u_char jyuji_on;
	
  short sVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float ax;
  float ay;
  char pad_x;
  char pad_y;
  uchar jyuji_on;
  
  fVar8 = 0.0;
  sVar1 = (pPlyrWrk->cmn_wrk).st.cond;
  fVar7 = 10.0;
  fVar6 = 0.0;
  if (sVar1 == 1) {
    return;
  }
  if (sVar1 == 3) {
    return;
  }
  iVar4 = FinderModePadChk__FPcT0PfT2PUc(&pad_x,&pad_y,&ax,&ay,&jyuji_on);
  if (iVar4 == 0) {
    if (*(int *)pPlyrWrk->fp != 0xe00140) {
      fVar6 = DAT_003ee28c;
      fVar7 = atan2f((float)(0x140 - (short)pPlyrWrk->fp[0]),(float)(0xe0 - (short)pPlyrWrk->fp[1]))
      ;
    }
  }
  else {
    fVar6 = 2.0;
    fVar7 = atan2f(ax,ay);
    fVar8 = GetDist__Fff(ax,ay);
  }
  if (fVar7 != 10.0) {
    fVar5 = sinf(fVar7);
    ax = fVar6 * fVar5;
    fVar7 = cosf(fVar7);
    ay = fVar6 * fVar7;
    iVar4 = (uint)pPlyrWrk->fp[0] + (int)ax;
    pPlyrWrk->fp[0] = (ushort)iVar4;
    if (fVar6 == 2.0) {
      iVar4 = iVar4 * 0x10000 >> 0x10;
      if (iVar4 < 300) {
        uVar3 = 300;
      }
      else {
        if (iVar4 < 0x155) goto LAB_001929a0;
        uVar3 = 0x154;
      }
LAB_00192998:
      pPlyrWrk->fp[0] = uVar3;
    }
    else if (((0.0 < ax) && (uVar3 = 0x140, 0x140 < iVar4 * 0x10000 >> 0x10)) ||
            ((ax < 0.0 && (uVar3 = 0x140, (short)pPlyrWrk->fp[0] < 0x140)))) goto LAB_00192998;
LAB_001929a0:
    iVar4 = (uint)pPlyrWrk->fp[1] + (int)ay;
    pPlyrWrk->fp[1] = (ushort)iVar4;
    if (fVar6 == 2.0) {
      iVar4 = iVar4 * 0x10000 >> 0x10;
      if (iVar4 < 0xd1) {
        uVar3 = 0xd1;
      }
      else {
        if (iVar4 < 0xf0) goto LAB_00192a3c;
        uVar3 = 0xef;
      }
    }
    else if ((ay <= 0.0) || (uVar3 = 0xe0, iVar4 * 0x10000 >> 0x10 < 0xe1)) {
      if ((0.0 <= ay) || (0xdf < (short)pPlyrWrk->fp[1])) goto LAB_00192a3c;
      uVar3 = 0xe0;
    }
    pPlyrWrk->fp[1] = uVar3;
  }
LAB_00192a3c:
  fVar6 = DAT_003ee290;
  if ((*paddat[0xc] == 0) && ((125.0 < fVar8 || (fVar6 = DAT_003ee294, jyuji_on != '\0')))) {
    fVar6 = DAT_003ee298;
  }
  iVar4 = GetPALMode__Fv();
  if (iVar4 != 0) {
    fVar6 = fVar6 * DAT_003ee29c;
  }
  if ((pad[0].now & 0x8000U) == 0) {
    if (pad_x < '\0') {
      fVar7 = pMoveBox->rot[1];
      goto LAB_00192aac;
    }
    if ((pad[0].now & 0x2000U) != 0) {
      fVar7 = pMoveBox->rot[1];
LAB_00192acc:
      fVar7 = fVar7 + fVar6;
      goto LAB_00192ad0;
    }
    if ('\0' < pad_x) {
      fVar7 = pMoveBox->rot[1];
      goto LAB_00192acc;
    }
  }
  else {
    fVar7 = pMoveBox->rot[1];
LAB_00192aac:
    fVar7 = fVar7 - fVar6;
LAB_00192ad0:
    pMoveBox->rot[1] = fVar7;
  }
  RotLimitChk__FPf(pMoveBox->rot + 1);
  fVar8 = DAT_003ee2ac;
  fVar7 = DAT_003ee2a4;
  if (pad_y < '\0') {
    fVar6 = pPlyrWrk->frot_x + fVar6 * DAT_003ee2a0;
    bVar2 = DAT_003ee2a4 < fVar6;
    pPlyrWrk->frot_x = fVar6;
    fVar8 = fVar7;
  }
  else {
    if (pad_y < '\x01') goto LAB_00192b34;
    fVar6 = pPlyrWrk->frot_x - fVar6 * DAT_003ee2a8;
    bVar2 = fVar6 < DAT_003ee2ac;
    pPlyrWrk->frot_x = fVar6;
  }
  if (bVar2) {
    pPlyrWrk->frot_x = fVar8;
  }
LAB_00192b34:
  RotLimitChk__FPf(&pPlyrWrk->frot_x);
  return;
}

static int FinderModePadChk(char *pad_x, char *pad_y, float *ax, float *ay, u_char *jyuji_on) {
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  
  *pad_y = '\0';
  *pad_x = '\0';
  *jyuji_on = '\0';
  sVar2 = pad[0].now;
  *ay = 0.0;
  *ax = 0.0;
  if ((sVar2 & 0xf000U) != 0) {
    *jyuji_on = '\x01';
  }
  if ((pad[0].id != 'y') && (*jyuji_on == '\0')) {
    cVar3 = *pad_x;
    goto LAB_00192d44;
  }
  if ((pad[0].now & 0x1000U) == 0) {
    if ((pad[0].now & 0x4000U) != 0) {
      *ay = 40.0;
    }
  }
  else {
    *ay = -40.0;
  }
  if ((pad[0].now & 0x2000U) == 0) {
    if ((pad[0].now & 0x8000U) != 0) {
      *ax = -40.0;
      goto LAB_00192c1c;
    }
    fVar5 = *ax;
  }
  else {
    *ax = 40.0;
LAB_00192c1c:
    fVar5 = *ax;
  }
  if ((fVar5 == 0.0) && (*ay == 0.0)) {
    if ((opt_wrk.ana_replace == '\0') || (opt_wrk.ana_replace != '\x01')) {
      *ax = (float)(uint)pad[0].analog[2] - 128.0;
      bVar1 = pad[0].analog[3];
    }
    else {
      *ax = (float)(uint)pad[0].analog[0] - 128.0;
      bVar1 = pad[0].analog[1];
    }
    *ay = (float)(uint)bVar1 - 128.0;
    fVar5 = *ax;
  }
  cVar3 = '\x01';
  if (fVar5 < 40.0) {
    if (fVar5 <= -40.0) {
      cVar3 = -1;
      goto LAB_00192cdc;
    }
    fVar5 = *ay;
  }
  else {
LAB_00192cdc:
    *pad_x = cVar3;
    fVar5 = *ay;
  }
  cVar3 = '\x01';
  if (fVar5 < 40.0) {
    if (fVar5 <= -40.0) {
      cVar3 = -1;
      goto LAB_00192d10;
    }
    cVar3 = *pad_y;
  }
  else {
LAB_00192d10:
    *pad_y = cVar3;
    cVar3 = *pad_y;
  }
  if ((cVar3 != '\0') && (opt_wrk.view_vertical != '\0')) {
    if (opt_wrk.view_vertical != '\x01') {
      cVar3 = *pad_x;
      goto LAB_00192d44;
    }
    *pad_y = -*pad_y;
  }
  cVar3 = *pad_x;
LAB_00192d44:
  iVar4 = 0;
  if ((cVar3 != '\0') || (*pad_y != '\0')) {
    iVar4 = 1;
  }
  return iVar4;
}

static void PlyrCamCondChk(PLYR_WRK *pPlyrWrk, MOVE_BOX *pMoveBox) {
  if ((pPlyrWrk->cmn_wrk).st.cond == 1) {
    PconMahiCameraCtrl__FP8MOVE_BOX(pMoveBox);
  }
  return;
}

static void PconMahiCameraCtrl(MOVE_BOX *pMoveBox) {
	static u_char time = 0;
	static u_char flag = 0;
	
  bool bVar1;
  float fVar2;
  
  bVar1 = time_1096 == '\0';
  time_1096 = time_1096 + -1;
  if (bVar1) {
    time_1096 = '\x03';
    flag_1097 = flag_1097 ^ 1;
  }
  if (flag_1097 == 0) {
    fVar2 = pMoveBox->rot[1] + DAT_003ee2b0;
  }
  else {
    fVar2 = pMoveBox->rot[1] - DAT_003ee2b4;
  }
  pMoveBox->rot[1] = fVar2;
  RotLimitChk__FPf(pMoveBox->rot + 1);
  return;
}

void ReqPointSearchCamera() {
	MOVE_BOX *pMoveBox;
	
  plyr_wrk.cmn_wrk.mbox.mloop = 10.0;
  if (plyr_wrk.cmn_wrk.mbox.rspd[1] != 0.0) {
    plyr_wrk.cmn_wrk.mbox.rspd[1] = plyr_wrk.cmn_wrk.mbox.rspd[1] / 10.0;
  }
  return;
}

void PointSearchCameraCtrl() {
	MOVE_BOX *pMoveBox;
	float r;
	
  float r;
  
  if ((plyr_wrk.cmn_wrk.st.sta & 0x40000) == 0) {
    if (0.0 < plyr_wrk.cmn_wrk.mbox.mloop) {
      plyr_wrk.cmn_wrk.mbox.rot[1] = plyr_wrk.cmn_wrk.mbox.rot[1] + plyr_wrk.cmn_wrk.mbox.rspd[1];
      RotLimitChk__FPf(plyr_wrk.cmn_wrk.mbox.rot + 1);
      plyr_wrk.cmn_wrk.mbox.mloop = plyr_wrk.cmn_wrk.mbox.mloop - 1.0;
      if (plyr_wrk.cmn_wrk.mbox.mloop <= 0.0) {
        plyr_wrk.cmn_wrk.mbox.rspd[3] = 0.0;
        plyr_wrk.cmn_wrk.mbox.rspd[0] = 0.0;
        plyr_wrk.cmn_wrk.mbox.rspd[1] = 0.0;
        plyr_wrk.cmn_wrk.mbox.rspd[2] = 0.0;
      }
    }
  }
  else {
    plyr_wrk.cmn_wrk.mbox.mloop = plyr_wrk.cmn_wrk.mbox.mloop + 1.0;
    r = plyr_wrk.cmn_wrk.mbox.rspd[0] * 0.5 * plyr_wrk.cmn_wrk.mbox.mloop *
        plyr_wrk.cmn_wrk.mbox.mloop + plyr_wrk.cmn_wrk.mbox.trot[0];
    RotLimitChk__FPf(&r);
    plyr_wrk.frot_x = r;
    r = plyr_wrk.cmn_wrk.mbox.rspd[1] * 0.5 * plyr_wrk.cmn_wrk.mbox.mloop *
        plyr_wrk.cmn_wrk.mbox.mloop + plyr_wrk.cmn_wrk.mbox.trot[1];
    RotLimitChk__FPf(&r);
    plyr_wrk.cmn_wrk.mbox.rot[1] = r;
    if (10.0 <= plyr_wrk.cmn_wrk.mbox.mloop) {
      plyr_wrk.cmn_wrk.mbox.trot[3] = 0.0;
      plyr_wrk.cmn_wrk.st.sta = plyr_wrk.cmn_wrk.st.sta & 0xfffffffffffbffff;
      plyr_wrk.cmn_wrk.mbox.rspd[0] = 0.0;
      plyr_wrk.cmn_wrk.mbox.rspd[1] = 0.0;
      plyr_wrk.cmn_wrk.mbox.rspd[2] = 0.0;
      plyr_wrk.cmn_wrk.mbox.rspd[3] = 0.0;
      plyr_wrk.cmn_wrk.mbox.trot[0] = 0.0;
      plyr_wrk.cmn_wrk.mbox.trot[1] = 0.0;
      plyr_wrk.cmn_wrk.mbox.trot[2] = 0.0;
    }
  }
  return;
}

void ReqFinderCamera() {
  ReqPointSearchCamera__Fv();
  return;
}

void FinderInCameraCtrl() {
  PointSearchCameraCtrl__Fv();
  return;
}
