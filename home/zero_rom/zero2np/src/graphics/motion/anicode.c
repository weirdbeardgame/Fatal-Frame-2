// STATUS: NOT STARTED

#include "anicode.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a1590;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef4d0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef4d8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void motAniCodeClearBuf(ANI_CTRL *ani_ctrl) {
	u_int i;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0x10;
  do {
    uVar2 = uVar2 + 1;
    *(undefined4 *)((int)(ani_ctrl->anm).buf + iVar1 + -0xc) = 0;
    *(undefined2 *)((int)(ani_ctrl->anm).buf + iVar1 + -0xe) = 0;
    iVar1 = iVar1 + 8;
  } while (uVar2 < 10);
  return;
}

void motAniCodeSetBuf(ANI_CTRL *ani_ctrl, ANI_CODE code) {
	u_int i;
	
  short sVar1;
  ANI_BUF *pAVar2;
  uint uVar3;
  
  uVar3 = 0;
  pAVar2 = (ani_ctrl->anm).buf;
  (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
  do {
    if (pAVar2->stat == 0) {
      sVar1 = *(short *)&(ani_ctrl->anm).timer;
      pAVar2->code = code;
      pAVar2->stat = 1;
      pAVar2->cnt = sVar1;
      return;
    }
    uVar3 = uVar3 + 1;
    pAVar2 = pAVar2 + 1;
  } while (uVar3 < 10);
  printf("Warning : anicode buffer over !!!\n");
  return;
}

u_char motAniCodeRead(ANI_CTRL *ani_ctrl) {
	ANI_CODE_CTRL *c_ctrl;
	
  short code;
  int iVar1;
  int aiStack_30 [4];
  
  (ani_ctrl->anm).stat = 0;
  do {
    code = *(ani_ctrl->anm).code_now;
    GetAniCodeArgs__FUsPi(code,aiStack_30);
    motAniCodeExec__FP8ANI_CTRLUsPi(ani_ctrl,code,aiStack_30);
    iVar1 = (ani_ctrl->anm).stat;
  } while (iVar1 == 0);
  return iVar1 == 1;
}

void motAniCodeExec(ANI_CTRL *ani_ctrl, ANI_CODE code, int *args) {
  ushort uVar1;
  
  uVar1 = (ushort)code >> 0xc;
  if (uVar1 == 1) {
    motAniCodeReadTIMER__FP8ANI_CTRLPi(ani_ctrl,args);
    return;
  }
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      motAniCodeReadCTRL__FP8ANI_CTRLPi(ani_ctrl,args);
      return;
    }
  }
  else if (uVar1 == 2) {
    motAniCodeReadMOT__FP8ANI_CTRLPi(ani_ctrl,args);
    return;
  }
  motAniCodeSetBuf__FP8ANI_CTRLUs(ani_ctrl,code);
  return;
}

void motAniTimerCodeExec(ANI_CTRL *ani_ctrl) {
	u_int i;
	int args[3];
	
  ushort code;
  ushort uVar1;
  uint uVar2;
  short *psVar3;
  ushort *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int args [3];
  
  puVar5 = &(ani_ctrl->anm).buf[0].stat;
  iVar6 = 0x10;
  uVar7 = 0;
  do {
    if (*puVar5 != 0) {
      uVar2 = motGetNowFrame__FP8MOT_CTRL(&ani_ctrl->mot);
      puVar4 = (ushort *)((int)&((ANI_CODE_CTRL *)((ani_ctrl->anm).buf + -2))->playnum + iVar6);
      if (puVar4[1] <= uVar2) {
        code = *puVar4;
        uVar1 = code >> 0xc;
        GetAniCodeArgs__FUsPi(code,args);
        if (uVar1 == 4) {
          motAniCodeReadSE__FP8ANI_CTRLPi(ani_ctrl,args);
          psVar3 = (ani_ctrl->anm).code_now;
        }
        else if (uVar1 < 5) {
          if (uVar1 == 3) {
            motAniCodeReadMIM__FP8ANI_CTRLPi(ani_ctrl,args);
            psVar3 = (ani_ctrl->anm).code_now;
          }
          else {
            psVar3 = (ani_ctrl->anm).code_now;
          }
        }
        else if (uVar1 == 5) {
          psVar3 = (ani_ctrl->anm).code_now;
        }
        else if (uVar1 == 6) {
          motAniCodeReadEFCT__FP8ANI_CTRLPi(ani_ctrl,args);
          psVar3 = (ani_ctrl->anm).code_now;
        }
        else {
          psVar3 = (ani_ctrl->anm).code_now;
        }
        *puVar5 = 0;
        (ani_ctrl->anm).code_now = psVar3 + -1;
      }
    }
    uVar7 = uVar7 + 1;
    puVar5 = puVar5 + 2;
    iVar6 = iVar6 + 8;
  } while (uVar7 < 10);
  return;
}

int motAniCodeIsEnd(ANI_CODE code) {
	int args[3];
	
  int iVar1;
  int args [3];
  
  GetAniCodeArgs__FUsPi(code,args);
  iVar1 = 1;
  if (((ushort)code >> 0xc != 0) || (args[0] != 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

void GetAniCodeArgs(ANI_CODE code, int *args) {
  ushort uVar1;
  
  uVar1 = (ushort)code >> 10 & 3;
  if (uVar1 == 1) {
    *args = (ushort)code >> 3 & 0x7f;
    args[1] = (ushort)code & 7;
    args[2] = 0;
    return;
  }
  if (1 < uVar1) {
    if (uVar1 == 2) {
      *args = (ushort)code >> 6 & 0xf;
      args[2] = (ushort)code & 7;
      args[1] = (ushort)code >> 3 & 7;
      return;
    }
    return;
  }
  if (((ushort)code >> 10 & 3) == 0) {
    args[2] = 0;
    args[1] = 0;
    *args = (ushort)code & 0x3ff;
    return;
  }
  return;
}

int motAniCodeReadCTRL(ANI_CTRL *ani_ctrl, int *args) {
  int iVar1;
  short *psVar2;
  
  iVar1 = *args;
  if (iVar1 == 1) {
    iVar1 = (ani_ctrl->anm).loop_rest;
    if (iVar1 == 0) {
      psVar2 = (ani_ctrl->anm).code_now + 1;
    }
    else if (iVar1 == -1) {
      psVar2 = (ani_ctrl->anm).loop_start;
    }
    else {
      (ani_ctrl->anm).loop_rest = iVar1 + -1;
      psVar2 = (ani_ctrl->anm).loop_start;
    }
    (ani_ctrl->anm).code_now = psVar2;
    return 1;
  }
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      (ani_ctrl->anm).stat = 1;
      return 0;
    }
  }
  else if (iVar1 == 2) {
    if (args[1] == 0) {
      (ani_ctrl->anm).loop_rest = -1;
    }
    else {
      (ani_ctrl->anm).loop_rest = args[1];
    }
    (ani_ctrl->anm).timer = 0;
    psVar2 = (ani_ctrl->anm).code_now + 1;
    (ani_ctrl->anm).loop_start = psVar2;
    (ani_ctrl->anm).code_now = psVar2;
    return 0;
  }
  printf("Warning : Wrong ANI_LOOP\n");
  return 0;
}

void motAniCodeReadTIMER(ANI_CTRL *ani_ctrl, int *args) {
  (ani_ctrl->anm).timer = *args;
  (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
  return;
}

void motAniCodeReadMOT(ANI_CTRL *ani_ctrl, int *args) {
	MOT_CTRL *m_ctrl;
	
  short sVar1;
  uint num;
  short *psVar2;
  uint *puVar3;
  
  num = *args;
  (ani_ctrl->mot).play_id = num;
  puVar3 = (uint *)GetFileInPak__FPvi((ani_ctrl->mot).top,num);
  (ani_ctrl->mot).dat = puVar3;
  if (ani_ctrl->mtop != (uint *)0x0) {
    puVar3 = (uint *)GetFileInPak__FPvi(ani_ctrl->mtop,(ani_ctrl->mot).play_id);
    ani_ctrl->mdat = puVar3;
  }
  psVar2 = (ani_ctrl->anm).code_now;
  sVar1 = *(short *)(args + 1);
  ani_ctrl->interp_flg = 0;
  ani_ctrl->ftype = sVar1;
  (ani_ctrl->anm).code_now = psVar2 + 1;
  (ani_ctrl->anm).stat = 2;
  return;
}

void motAniCodeReadMIM(ANI_CTRL *ani_ctrl, int *args) {
  int iVar1;
  short *psVar2;
  
  if (ani_ctrl->mim != (MIME_CTRL *)0x0) {
    iVar1 = args[1];
    if (iVar1 == 1) {
      mimRequestNum__FP8ANI_CTRLiUc(ani_ctrl,*args,'\x01');
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_0012abfc;
    }
    if (iVar1 < 2) {
      if (iVar1 == 0) {
        mimRequestNum__FP8ANI_CTRLiUc(ani_ctrl,*args,'\0');
        psVar2 = (ani_ctrl->anm).code_now;
      }
      else {
        psVar2 = (ani_ctrl->anm).code_now;
      }
      goto LAB_0012abfc;
    }
    if (iVar1 == 2) {
      mimLoopRequestNum__FP8ANI_CTRLiUc(ani_ctrl,*args,'\0');
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_0012abfc;
    }
    if (iVar1 != 3) {
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_0012abfc;
    }
    mimLoopRequestNum__FP8ANI_CTRLiUc(ani_ctrl,*args,'\x01');
  }
  psVar2 = (ani_ctrl->anm).code_now;
LAB_0012abfc:
  (ani_ctrl->anm).code_now = psVar2 + 1;
  return;
}

void motAniCodeReadSE(ANI_CTRL *ani_ctrl, int *args) {
	float pos[4];
	
  int iVar1;
  uchar lr;
  float pos [4];
  
  iVar1 = *args;
  if (iVar1 == 1) {
LAB_0012ac84:
    lr = '\x01';
  }
  else {
    if (iVar1 < 2) {
      if (iVar1 != 0) goto LAB_0012aca4;
    }
    else if (iVar1 != 2) {
      if (iVar1 != 3) goto LAB_0012aca4;
      goto LAB_0012ac84;
    }
    lr = '\0';
  }
  GetPlyrFootPos__FPfP8ANI_CTRLUc(pos,ani_ctrl,lr);
  iVar1 = *args;
  (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
LAB_0012aca4:
  if (-1 < iVar1) {
    if (iVar1 < 2) {
      foot_sePlay__FPfii(pos,0x2300,0xf3c);
    }
    else if (iVar1 < 4) {
      foot_sePlay__FPfii(pos,0x3200,0x1000);
    }
  }
  return;
}

static int motAniIsSeNoDustEffect(int SeNo) {
	int RetVal;
	
  int iVar1;
  
  iVar1 = 0;
  if ((SeNo == 3) || (SeNo == 0xd)) {
    iVar1 = 1;
  }
  return iVar1;
}

void motAniCodeReadEFCT(ANI_CTRL *ani_ctrl, int *args) {
	float pos[4];
	
  int iVar1;
  short *psVar2;
  float pos [4];
  
  iVar1 = *args;
  if (iVar1 == 1) {
    GetPlyrFootPos__FPfP8ANI_CTRLUc(pos,ani_ctrl,'\x01');
    MrecSetSEInfo__FPf(pos);
    iVar1 = MrecGetSeNo__Fv();
    iVar1 = motAniIsSeNoDustEffect__Fi(iVar1);
    if (iVar1 != 0) {
      IgEffectPlayerDustReq__FP8ANI_CTRLi(ani_ctrl,0x10);
    }
  }
  else {
    if (1 < iVar1) {
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_0012add8;
    }
    if (iVar1 != 0) {
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_0012add8;
    }
    GetPlyrFootPos__FPfP8ANI_CTRLUc(pos,ani_ctrl,'\0');
    MrecSetSEInfo__FPf(pos);
    iVar1 = MrecGetSeNo__Fv();
    iVar1 = motAniIsSeNoDustEffect__Fi(iVar1);
    if (iVar1 != 0) {
      IgEffectPlayerDustReq__FP8ANI_CTRLi(ani_ctrl,5);
      psVar2 = (ani_ctrl->anm).code_now;
      goto LAB_0012add8;
    }
  }
  psVar2 = (ani_ctrl->anm).code_now;
LAB_0012add8:
  (ani_ctrl->anm).code_now = psVar2 + 1;
  return;
}

u_char motGetNextMotion(ANI_CTRL *ani_ctrl) {
	ANI_CODE_CTRL *c_ctrl;
	int loop_end;
	int args[3];
	
  ushort code;
  ushort uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int args [3];
  
  iVar3 = 0;
  (ani_ctrl->anm).stat = 0;
  do {
    code = *(ani_ctrl->anm).code_now;
    uVar1 = code >> 0xc;
    GetAniCodeArgs__FUsPi(code,args);
    if (uVar1 == 0) {
      iVar3 = motAniCodeReadCTRL__FP8ANI_CTRLPi(ani_ctrl,args);
LAB_0012ae78:
      iVar4 = (ani_ctrl->anm).stat;
    }
    else {
      if (uVar1 != 2) {
        (ani_ctrl->anm).code_now = (ani_ctrl->anm).code_now + 1;
        goto LAB_0012ae78;
      }
      motAniCodeReadMOT__FP8ANI_CTRLPi(ani_ctrl,args);
      iVar4 = (ani_ctrl->anm).stat;
    }
    if (iVar4 != 0) {
      uVar2 = '\x01';
      if ((iVar4 != 1) && (uVar2 = '\x02', iVar3 == 0)) {
        uVar2 = '\0';
      }
      return uVar2;
    }
  } while( true );
}
