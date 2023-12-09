// STATUS: NOT STARTED

#include "unit_ctl.h"

unsigned char ENE_WRK type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3e6cc0;
	
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f48b0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3f48b8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3e6d08,_max);
  }
  return (uint **)0x0;
}

void RotLimitChk(float *rot) {
  float fVar1;
  
  fVar1 = *rot;
  if (DAT_003ee9a4 < fVar1) {
    *rot = fVar1 - DAT_003ee9a8;
    return;
  }
  if (fVar1 < DAT_003ee9ac) {
    *rot = fVar1 + DAT_003ee9b0;
  }
  return;
}

void GetTrgtRotFromPlyr(float *p, float *rot, int id) {
	float dist[4];
	
  float fVar1;
  float dist [4];
  
  _ClearVector__FPf(rot);
  sceVu0SubVector(dist,p,0x33cda0);
  dist[1] = -(dist[1] - -600.0);
  if ((id & 1U) != 0) {
    dist[3] = GetDistV__FPCfT0(p,plyr_wrk.cmn_wrk.mbox.pos);
    fVar1 = g3dAtan2f__Fff(dist[1],dist[3]);
    *rot = fVar1;
  }
  if ((id & 2U) != 0) {
    fVar1 = g3dAtan2f__Fff(dist[0],dist[2]);
    rot[1] = fVar1;
  }
  return;
}

void GetTrgtRot(float *p0, float *p1, float *rot, int id) {
	float dist[4];
	
  float fVar1;
  float dist [4];
  
  _ClearVector__FPf(rot);
  sceVu0SubVector(dist,p1,p0);
  if ((id & 1U) != 0) {
    dist[3] = GetDistV__FPCfT0(p0,p1);
    fVar1 = g3dAtan2f__Fff(-dist[1],dist[3]);
    *rot = fVar1;
    RotLimitChk__FPf(rot);
  }
  if ((id & 2U) != 0) {
    fVar1 = g3dAtan2f__Fff(dist[0],dist[2]);
    rot[1] = fVar1;
    RotLimitChk__FPf(rot + 1);
  }
  return;
}

float GetTrgtRotY(float *p0, float *p1) {
  float fVar1;
  
  fVar1 = g3dAtan2f__Fff(*p1 - *p0,p1[2] - p0[2]);
  return fVar1;
}

int RotRngChk(float *vp, float *tp, float rot, float rng) {
  float fVar1;
  float local_20 [4];
  
  local_20[0] = rot;
  fVar1 = GetTrgtRotY__FPCfT0(vp,tp);
  local_20[0] = fVar1 - local_20[0];
  RotLimitChk__FPf(local_20);
  return (uint)(ABS(local_20[0]) <= rng);
}

u_char OutSightChk(float *tp, float *vp, float rot, float sight, float dist) {
	u_char chk;
	
  int iVar1;
  float fVar2;
  
  if ((dist != 0.0) && (fVar2 = GetDistV__FPCfT0(tp,vp), dist < fVar2)) {
    return '\x01';
  }
  iVar1 = RotRngChk__FPfT0ff(vp,tp,rot,sight * 0.5);
  return iVar1 == 0;
}

int GetRndSP(u_int min, u_int lng) {
	long int result;
	
  int iVar1;
  long lVar2;
  float fVar3;
  
  if (lng != 0) {
    iVar1 = rand();
    lVar2 = __muldi3((ulong)lng,(long)iVar1);
    fVar3 = __floatdisf(lVar2);
    lVar2 = __fixsfdi(fVar3 / DAT_003ee9b4);
    min = min + (int)lVar2;
  }
  return min;
}

u_char ConvertRot2Dir(float rot, u_char id) {
	u_char dir;
	
  int iVar1;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = '\0';
  if (id == '\x01') {
    iVar4 = (int)((rot + DAT_003ee9c4 + DAT_003ee9c8) / DAT_003ee9cc);
    iVar1 = iVar4;
    if (iVar4 < 0) {
      iVar1 = iVar4 + 7;
    }
    uVar3 = iVar4 + (iVar1 >> 3) * -8 + 4;
    uVar2 = (uchar)uVar3;
    if (7 < (uVar3 & 0xff)) {
      uVar2 = uVar2 + 0xf8;
    }
  }
  else {
    if (id < 2) {
      if (id == '\0') {
        iVar4 = (int)((rot + DAT_003ee9b8 + DAT_003ee9bc) / DAT_003ee9c0);
        iVar1 = iVar4;
        if (iVar4 < 0) {
          iVar1 = iVar4 + 3;
        }
        uVar3 = iVar4 + (iVar1 >> 2) * -4 + 2;
        uVar2 = (uchar)uVar3;
        if ((uVar3 & 0xff) < 4) {
          return uVar2;
        }
        return uVar2 + 0xfc;
      }
    }
    else if (id == '\x02') {
      uVar3 = (int)((rot + DAT_003ee9d0 + DAT_003ee9d4) / DAT_003ee9d0) % 2 + 1;
      uVar2 = (uchar)uVar3;
      if ((uVar3 & 0xff) < 2) {
        return uVar2;
      }
      return uVar2 + 0xfe;
    }
    if (rot < 0.0) {
      uVar2 = '\x01';
    }
  }
  return uVar2;
}

void ReqEneStop(u_char req, u_char except) {
	ENE_WRK *ew;
	u_char i;
	
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  fixed_array<ENE_WRK,10> *pfVar4;
  uint uVar5;
  
  uVar5 = (uint)except;
  if (req == '\x01') {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
    pfVar4 = &ene_wrk;
                    /* end of inlined section */
    uVar3 = 0;
    do {
      if ((((ENE_WRK *)pfVar4)->status == 4) && ((((int)uVar5 >> (uVar3 & 0x1f) ^ 1U) & 1) != 0)) {
        (((ENE_WRK *)pfVar4)->st).sta = (((ENE_WRK *)pfVar4)->st).sta | 0x40000000;
      }
      uVar3 = uVar3 + 1 & 0xff;
      pfVar4 = (fixed_array<ENE_WRK,10> *)((int)pfVar4 + 0x490);
    } while (uVar3 < 10);
  }
  else if (req < 2) {
    if (req == '\0') {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
      pfVar4 = &ene_wrk;
                    /* end of inlined section */
      bVar2 = 0;
      do {
        uVar1 = (((ENE_WRK *)pfVar4)->st).sta;
        if ((uVar1 & 0x40000000) != 0) {
          (((ENE_WRK *)pfVar4)->st).sta = uVar1 & 0xffffffffbdffffff;
        }
        bVar2 = bVar2 + 1;
        pfVar4 = (fixed_array<ENE_WRK,10> *)((int)pfVar4 + 0x490);
      } while (bVar2 < 10);
    }
  }
  else if (req == '\x02') {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
    pfVar4 = &ene_wrk;
                    /* end of inlined section */
    uVar3 = 0;
    do {
      if ((((ENE_WRK *)pfVar4)->status == 4) && ((((int)uVar5 >> (uVar3 & 0x1f) ^ 1U) & 1) != 0)) {
        (((ENE_WRK *)pfVar4)->st).sta = (((ENE_WRK *)pfVar4)->st).sta | 0x2000000;
      }
      uVar3 = uVar3 + 1 & 0xff;
      pfVar4 = (fixed_array<ENE_WRK,10> *)((int)pfVar4 + 0x490);
    } while (uVar3 < 10);
  }
  else if (req == '\x03') {
                    /* inlined from ../../graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
    pfVar4 = &ene_wrk;
                    /* end of inlined section */
    uVar3 = 0;
    do {
      if ((((ENE_WRK *)pfVar4)->status == 4) && ((((int)uVar5 >> (uVar3 & 0x1f) ^ 1U) & 1) != 0)) {
        (((ENE_WRK *)pfVar4)->st).sta = (((ENE_WRK *)pfVar4)->st).sta | 0x42000000;
      }
      uVar3 = uVar3 + 1 & 0xff;
      pfVar4 = (fixed_array<ENE_WRK,10> *)((int)pfVar4 + 0x490);
    } while (uVar3 < 10);
  }
  return;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}

type_info& ENE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_807);
  return (type_info *)v;
}
