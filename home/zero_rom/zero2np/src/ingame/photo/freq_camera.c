// STATUS: NOT STARTED

#include "freq_camera.h"

typedef struct {
	int frq_flow;
	int frq_cnt;
	int fov_flow;
	int fov_cnt;
	float fov_bak;
} FREQ_CAM;

static float freqcam[14] = {
	/* [0] = */ 14.f,
	/* [1] = */ -48.f,
	/* [2] = */ 42.f,
	/* [3] = */ -34.f,
	/* [4] = */ 27.f,
	/* [5] = */ -21.f,
	/* [6] = */ 15.f,
	/* [7] = */ -10.f,
	/* [8] = */ -6.f,
	/* [9] = */ 3.39999986f,
	/* [10] = */ -1.5999999f,
	/* [11] = */ -0.5f,
	/* [12] = */ 0.099999994f,
	/* [13] = */ 0.f
};

static float fovcam[3] = {
	/* [0] = */ -0.299999982f,
	/* [1] = */ 0.149999991f,
	/* [2] = */ 0.f
};

static FREQ_CAM freq_cam_wrk;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae918;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f09d0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f09d8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void FreqCameraInit() {
  freq_cam_wrk.frq_flow = 0;
  return;
}

void ReqFreqCamera() {
	FREQ_CAM *fcp;
	
  GRA3DCAMERA *pGVar1;
  
  if ((freq_cam_wrk.frq_flow == 0) && (freq_cam_wrk.fov_flow == 0)) {
    freq_cam_wrk.fov_flow = 1;
    freq_cam_wrk.frq_flow = 1;
    pGVar1 = gra3dGetCamera__Fv();
    freq_cam_wrk.fov_bak = pGVar1->fFov;
  }
  return;
}

void FreqCamera() {
	FREQ_CAM *fcp;
	
  int iVar1;
  int iVar2;
  GRA3DCAMERA *pGVar3;
  
  if (freq_cam_wrk.frq_flow == 1) {
    freq_cam_wrk.frq_cnt = 0;
    freq_cam_wrk.frq_flow = 2;
  }
  else {
    iVar2 = freq_cam_wrk.frq_cnt;
    if ((freq_cam_wrk.frq_flow < 2) || (freq_cam_wrk.frq_flow != 2)) goto LAB_00197ac0;
  }
  pGVar3 = gra3dGetCamera__Fv();
  pGVar3->matCoord[3][1] = pGVar3->matCoord[3][1] + freqcam[freq_cam_wrk.frq_cnt / 3];
  pGVar3 = gra3dGetCamera__Fv();
  iVar2 = freq_cam_wrk.frq_cnt;
  iVar1 = freq_cam_wrk.frq_cnt / 3;
  pGVar3->vTarget[1] = pGVar3->vTarget[1] + freqcam[iVar1];
  iVar2 = iVar2 + 1;
  if (freqcam[iVar1] == 0.0) {
    freq_cam_wrk.frq_flow = 0;
    iVar2 = freq_cam_wrk.frq_cnt;
  }
LAB_00197ac0:
  freq_cam_wrk.frq_cnt = iVar2;
  if (freq_cam_wrk.fov_flow == 1) {
    freq_cam_wrk.fov_cnt = 0;
    freq_cam_wrk.fov_flow = 2;
  }
  else {
    if (freq_cam_wrk.fov_flow < 2) {
      return;
    }
    if (freq_cam_wrk.fov_flow != 2) {
      return;
    }
  }
  pGVar3 = gra3dGetCamera__Fv();
  iVar1 = freq_cam_wrk.fov_cnt;
  iVar2 = freq_cam_wrk.fov_cnt / 5;
  pGVar3->fFov = freq_cam_wrk.fov_bak + fovcam[iVar2];
  iVar1 = iVar1 + 1;
  if (fovcam[iVar2] == 0.0) {
    pGVar3 = gra3dGetCamera__Fv();
    freq_cam_wrk.fov_flow = 0;
    pGVar3->fFov = freq_cam_wrk.fov_bak;
    iVar1 = freq_cam_wrk.fov_cnt;
  }
  freq_cam_wrk.fov_cnt = iVar1;
  return;
}

float GetFreqCamera() {
	FREQ_CAM *fcp;
	
  float fVar1;
  
  fVar1 = 0.0;
  if (freq_cam_wrk.frq_flow != 0) {
    if (0 < freq_cam_wrk.frq_cnt) {
      return freqcam[(freq_cam_wrk.frq_cnt + -1) / 3];
    }
    fVar1 = freqcam[freq_cam_wrk.frq_cnt / 3];
  }
  return fVar1;
}
