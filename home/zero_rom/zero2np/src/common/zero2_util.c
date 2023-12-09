// STATUS: NOT STARTED

#include "zero2_util.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3e6f00;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f4940,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f4948,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int GetObjectPos(float *obj_pos, u_char obj_type, int obj_id) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 79,
		/* [4] = */ 98,
		/* [5] = */ 106,
		/* [6] = */ 101,
		/* [7] = */ 99,
		/* [8] = */ 116,
		/* [9] = */ 80,
		/* [10] = */ 111,
		/* [11] = */ 115,
		/* [12] = */ 0
	};
	int i;
	int res;
	MDAT_OBJ *obj_data;
	float *pv1;
	float *pv1;
	
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  
  iVar8 = 3;
  uVar9 = 1;
  pfVar6 = obj_pos + 3;
  do {
    iVar8 = iVar8 + -1;
    *pfVar6 = 0.0;
    fVar5 = sis_wrk.cmn_wrk.mbox.pos[3];
    fVar4 = sis_wrk.cmn_wrk.mbox.pos[2];
    uVar3 = sis_wrk.cmn_wrk.mbox.pos._0_8_;
    fVar2 = plyr_wrk.cmn_wrk.mbox.pos[3];
    fVar10 = plyr_wrk.cmn_wrk.mbox.pos[2];
    uVar1 = plyr_wrk.cmn_wrk.mbox.pos._0_8_;
    pfVar6 = pfVar6 + -1;
  } while (-1 < iVar8);
  switch(obj_type) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x05':
                    /* end of inlined section */
    iVar8 = GetEnePos__FPfUci(obj_pos,obj_type,obj_id);
    uVar9 = (uint)(iVar8 != 0);
    break;
  case '\x03':
  case '\x04':
  default:
    uVar9 = 0;
    printf("*******************************************************\n");
    printf("*     Error!! The value of the data is illegal!!!     *\n");
    printf("*                   GetObjectPos()                    *\n");
    printf("*******************************************************\n");
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal(&DAT_003f4950);
    break;
  case '\x06':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    *obj_pos = (float)plyr_wrk.cmn_wrk.mbox.pos._0_8_;
    obj_pos[1] = SUB84(uVar1,4);
    obj_pos[2] = fVar10;
    obj_pos[3] = fVar2;
    uVar9 = 1;
    break;
  case '\a':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    *obj_pos = (float)sis_wrk.cmn_wrk.mbox.pos._0_8_;
    obj_pos[1] = SUB84(uVar3,4);
    obj_pos[2] = fVar4;
    obj_pos[3] = fVar5;
    uVar9 = 1;
    break;
  case '\b':
  case '\t':
    iVar8 = GetPlyrAreaNo__Fv();
    iVar8 = MapLoadGetRegBuffID__Fii(iVar8,(int)(short)plyr_wrk.cmn_wrk.floor);
    psVar7 = RegDatGetStPtr4Label__Fii(iVar8,obj_id);
    *obj_pos = *(float *)(psVar7 + 0x18);
    obj_pos[1] = *(float *)(psVar7 + 0x1a);
    fVar10 = *(float *)(psVar7 + 0x1c);
    obj_pos[3] = 0.0;
    obj_pos[2] = fVar10;
  }
  return uVar9;
}

void Zero2PrintWarningFunc(char *str) {
  printf("<<<Warning\n");
  printf(&DAT_003f4958);
  return;
}

void Zero2PrintAssertFunc(char *str) {
  do {
    SetASCIIString2__FiffiUcUcUcPc(0,30.0,30.0,1,0x80,'\0','\0',"Assert!!");
    SetASCIIString2__FiffiUcUcUcPc(0,30.0,60.0,1,0x80,0x80,0x80,str);
    SendDMAMain__Fv();
    PadSyncCallback__Fv();
  } while (**paddat != 1);
  return;
}

void utilTim2SendVram(u_int *tim2_addr, int tbp, int cbp, int tw_2, int th_2) {
  TIM2_PICTUREHEADER *pTVar1;
  
  pTVar1 = Tim2GetPictureHeader__FPvi(tim2_addr,0);
  pTVar1->GsTex0 =
       (long)tbp | 0x2000000000000000U | (long)tw_2 << 0x1a | 0x400000000U |
       (long)tw_2 << 0xe | 0x1300000U | (long)th_2 << 0x1e | (long)cbp << 0x25;
  MakeTim2Direct__FPUiii(tim2_addr,tbp,0);
  MakeClutDirect__FPUiii(tim2_addr,cbp,0);
  return;
}

void GetRandomPositionXZ(float *pos, float *o_pos, float max, float min) {
	float radius;
	float radian;
	
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GetRandValF__Ff(max - min);
  fVar2 = GetRandValF__Ff(DAT_003eea00);
  fVar2 = fVar2 - DAT_003eea04;
  fVar3 = sinf(fVar2);
  *pos = *o_pos + (fVar1 + min) * fVar3;
  pos[1] = o_pos[1];
  fVar2 = cosf(fVar2);
  pos[2] = o_pos[2] + (fVar1 + min) * fVar2;
  pos[3] = o_pos[3];
  return;
}

float CalcAngle__FPCfN208_PLANE3D(float *vDirectionAxis, float *vDirection, float *vTop, PLANE3D plane_3d) {
	static char __FUNCTION__[10] = {
		/* [0] = */ 67,
		/* [1] = */ 97,
		/* [2] = */ 108,
		/* [3] = */ 99,
		/* [4] = */ 65,
		/* [5] = */ 110,
		/* [6] = */ 103,
		/* [7] = */ 108,
		/* [8] = */ 101,
		/* [9] = */ 0
	};
	float vDirectionAxisIn[4];
	float vDirectionIn[4];
	float vRightVec[4];
	float fRot;
	
  undefined auVar1 [16];
  float fVar2;
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  float vDirectionAxisIn [4];
  float vDirectionIn [4];
  float vRightVec [4];
  
  if (XY < plane_3d) {
    _SetLineInfo__FPCciT0T0
              ("zero2_util.c",0xb9,"CalcAngle",
               "(plane_3d == YZ || plane_3d == ZX || plane_3d == XY)");
    g3ddbgAssert__FbPCce(false,&DAT_003f4950);
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  vDirectionAxisIn[2] = vDirectionAxis[2];
  vDirectionAxisIn[3] = vDirectionAxis[3];
  vDirectionAxisIn[0] = (float)*(undefined8 *)vDirectionAxis;
  vDirectionAxisIn[1] = (float)((ulong)*(undefined8 *)vDirectionAxis >> 0x20);
  vDirectionIn[2] = vDirection[2];
  vDirectionIn[3] = vDirection[3];
  vDirectionIn[0] = (float)*(undefined8 *)vDirection;
  vDirectionIn[1] = (float)((ulong)*(undefined8 *)vDirection >> 0x20);
                    /* end of inlined section */
  vDirectionAxisIn[plane_3d] = 0.0;
  vDirectionIn[plane_3d] = 0.0;
  sceVu0Normalize(vDirectionAxisIn,vDirectionAxisIn);
  sceVu0Normalize(vDirectionIn,vDirectionIn);
  sceVu0OuterProduct(vRightVec,vTop,vDirectionAxisIn);
  auVar3._4_4_ = vDirectionAxisIn[1];
  auVar3._0_4_ = vDirectionAxisIn[0];
  auVar3._8_4_ = vDirectionAxisIn[2];
  auVar3._12_4_ = vDirectionAxisIn[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar3 = _lqc2(auVar3);
  auVar4._4_4_ = vDirectionIn[1];
  auVar4._0_4_ = vDirectionIn[0];
  auVar4._8_4_ = vDirectionIn[2];
  auVar4._12_4_ = vDirectionIn[3];
  auVar4 = _lqc2(auVar4);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(extraout_vf1,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  fVar2 = g3dAcosf__Ff(-auVar3._0_4_);
  auVar3 = _lqc2((undefined  [16])vRightVec);
  auVar1._4_4_ = vDirectionIn[1];
  auVar1._0_4_ = vDirectionIn[0];
  auVar1._8_4_ = vDirectionIn[2];
  auVar1._12_4_ = vDirectionIn[3];
  auVar4 = _lqc2(auVar1);
  auVar3 = _vmul(auVar3,auVar4);
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(extraout_vf1_00,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
  if (auVar3._0_4_ < 0.0) {
    fVar2 = -fVar2;
  }
                    /* end of inlined section */
  fVar2 = RotLimitChk2(fVar2 + DAT_003eea08);
  return fVar2;
}
