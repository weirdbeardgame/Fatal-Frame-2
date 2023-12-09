// STATUS: NOT STARTED

#include "mdlwork.h"

u_int *plyr_clut_addr = NULL;
u_int *plyr_bwc_addr = NULL;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bc258;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f2a78,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f2a80,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void ManmdlSetAlpha(void *sgd_top, u_char alpha) {
	SGDMATERIAL *matp;
	u_int *phead;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)sgd_top + 0x10);
  uVar2 = *(uint *)((int)sgd_top + 0xc);
  if (uVar2 < uVar1) {
    *(float *)(uVar2 + 0x2c) = (float)(uint)alpha;
    while (uVar2 + 0xb0 < uVar1) {
      *(float *)(uVar2 + 0xdc) = (float)(uint)alpha;
      uVar2 = uVar2 + 0xb0;
    }
  }
  return;
}

char motCheckTrRateMdl(u_int mdl_no) {
  return '\0';
}

u_int* MpkMapUnit(u_int *mpk_p) {
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)0x0;
  if (mpk_p != (uint *)0x0) {
    puVar2 = mpk_p + 4;
    uVar1 = *puVar2;
    while (uVar1 - 1 < 0x7fffffff) {
      sgdRemap__FP13SGDFILEHEADER((SGDFILEHEADER *)(puVar2 + 4));
      puVar2 = (uint *)((int)puVar2 + (*puVar2 & 0xfffffffc) + 0x10);
      uVar1 = *puVar2;
    }
  }
  return puVar2;
}

void DrawGirlSubObj(u_int *mpk_p, u_char alpha) {
	u_int i;
	u_int obj_num;
	float tmpvec[4];
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	u_char alp;
	
  uint uVar1;
  SGDCOORDINATE *pCoord;
  SGDFILEHEADER *pSGDTop;
  int iVar2;
  uchar alpha_00;
  uint num;
  uint uVar3;
  float fVar4;
  float fVar5;
  float tmpvec [4];
  
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  uVar1 = *mpk_p;
  pCoord = (SGDCOORDINATE *)mpk_p[10];
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  if (1 < uVar1) {
    fVar5 = 0.0078125;
    num = 1;
    do {
      pSGDTop = (SGDFILEHEADER *)GetFileInPak__FPvi(mpk_p,num);
      iVar2 = MorphCheckId1__Fi(num);
      uVar3 = num + 1;
      if (iVar2 == 0) {
        iVar2 = MorphCheckId2__Fi(num);
        alpha_00 = alpha;
        if (iVar2 != 0) {
          fVar4 = MorphGetAlpha2__Ff((float)(uint)alpha * fVar5);
          goto LAB_001e44ec;
        }
      }
      else {
        fVar4 = MorphGetAlpha1__Ff((float)(uint)alpha * fVar5);
LAB_001e44ec:
        fVar4 = fVar4 * 128.0;
        alpha_00 = (uchar)(int)fVar4;
        if (2.147484e+09 <= fVar4) {
          alpha_00 = (uchar)(int)(fVar4 - 2.147484e+09);
        }
      }
      ManmdlSetAlpha__FPvUc(pSGDTop,alpha_00);
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                (pSGDTop,SRT_REALTIME,pCoord,-1);
      num = uVar3;
    } while (uVar3 < uVar1);
  }
  return;
}

void DrawEneSubObj(u_int *mpk_p, u_char alpha1, u_char alpha2) {
	u_int i;
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	u_int obj_num;
	u_char alpha;
	
  uint uVar1;
  SGDCOORDINATE *pCoord;
  SGDFILEHEADER *pSGDTop;
  int iVar2;
  uint uVar3;
  uint num;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *mpk_p;
  pCoord = (SGDCOORDINATE *)mpk_p[10];
  if (1 < uVar1) {
    fVar6 = 0.0078125;
    num = 1;
    do {
      uVar3 = (uint)alpha2;
      if (num != 1) {
        uVar3 = (uint)alpha1;
      }
      pSGDTop = (SGDFILEHEADER *)GetFileInPak__FPvi(mpk_p,num);
      iVar2 = MorphCheckId1__Fi(num);
      uVar4 = num + 1;
      if (iVar2 == 0) {
        iVar2 = MorphCheckId2__Fi(num);
        if (iVar2 != 0) {
          fVar5 = MorphGetAlpha2__Ff((float)uVar3 * fVar6);
          goto LAB_001e465c;
        }
      }
      else {
        fVar5 = MorphGetAlpha1__Ff((float)uVar3 * fVar6);
LAB_001e465c:
        fVar5 = fVar5 * 128.0;
        if (2.147484e+09 <= fVar5) {
          fVar5 = fVar5 - 2.147484e+09;
        }
        uVar3 = (int)fVar5 & 0xff;
      }
      ManmdlSetAlpha__FPvUc(pSGDTop,(uchar)uVar3);
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                (pSGDTop,SRT_REALTIME,pCoord,-1);
      num = uVar4;
    } while (uVar4 < uVar1);
  }
  return;
}

void InitEneVramCtrl() {
	u_int i;
	
  ENE_VRAM_CTRL *ev_ctrl;
  uint uVar1;
  
  uVar1 = 0;
  ev_ctrl = ene_vram_ctrl;
  do {
    uVar1 = uVar1 + 1;
    InitEneVramCtrlSub__FP13ENE_VRAM_CTRL(ev_ctrl);
    ev_ctrl = ev_ctrl + 1;
  } while (uVar1 < 4);
  return;
}

void InitEneVramCtrlSub(ENE_VRAM_CTRL *ev_ctrl) {
  ev_ctrl->offset = 0;
  ev_ctrl->mdl_no = 0xffff;
  ev_ctrl->mdl_p = (uint *)0x0;
  ev_ctrl->flg = 0;
  return;
}

void SetEneVram(u_int *mdl_p, int offset) {
	u_int *mpk_p;
	
  uint *mpk_p;
  
  mpk_p = (uint *)GetFileInPak__FPvi(mdl_p,0);
  GetFileInPak__FPvi(mdl_p,1);
  if (offset < 0) {
    if (mpk_p[1] == 0) {
      printf("Warning : SetEneVram Already UnMapped\n");
      return;
    }
    mpk_p[1] = 0;
    MpkAddTexOffset__FPUii(mpk_p,offset);
  }
  else {
    if (mpk_p[1] == 1) {
      printf("Warning : SetEneVram Already Mapped\n");
      return;
    }
    mpk_p[1] = 1;
    MpkAddTexOffset__FPUii(mpk_p,offset);
  }
  return;
}

int SendEneVram(u_int *mdl_p, int offset) {
	u_int *mpk_p;
	u_int *pk2_p;
	
  void *pvVar1;
  uint *pak_addr;
  int iVar2;
  
  pvVar1 = GetFileInPak__FPvi(mdl_p,0);
  pak_addr = (uint *)GetFileInPak__FPvi(mdl_p,1);
  if (offset < 0) {
    printf("Warning : SendEneVram Illegal Vram Adrs\n");
    iVar2 = 0;
    *(undefined4 *)((int)pvVar1 + 4) = 0;
  }
  else if (*(int *)((int)pvVar1 + 4) == 1) {
    SetManmdlTm2__FPUiic(pak_addr,offset,'\0');
    iVar2 = 1;
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

int SendEneVramMono(u_int *mdl_p, int offset, u_int *bwc_p) {
	u_int *mpk_p;
	u_int *pk2_p;
	
  void *pvVar1;
  uint *pak_addr;
  int iVar2;
  
  pvVar1 = GetFileInPak__FPvi(mdl_p,0);
  pak_addr = (uint *)GetFileInPak__FPvi(mdl_p,1);
  if (offset < 0) {
    printf("Warning : SendEneVram Illegal Vram Adrs\n");
    iVar2 = 0;
    *(undefined4 *)((int)pvVar1 + 4) = 0;
  }
  else if (*(int *)((int)pvVar1 + 4) == 1) {
    if (bwc_p == (uint *)0x0) {
      SetManmdlTm2__FPUiic(pak_addr,offset,'\0');
      iVar2 = 1;
    }
    else {
      SetManmdlTm2_Mono__FPUiicT0(pak_addr,offset,'\0',bwc_p);
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

void SendManMdlTex() {
	u_int i;
	
  uint *pak_addr;
  ENE_VRAM_CTRL *pEVar1;
  uint uVar2;
  
  pEVar1 = ene_vram_ctrl;
  uVar2 = 0;
  do {
    if (pEVar1->flg != 0) {
      pak_addr = (uint *)GetFileInPak__FPvi(pEVar1->mdl_p,1);
      SetManmdlTm2__FPUiic(pak_addr,pEVar1->offset,'\0');
    }
    uVar2 = uVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while (uVar2 < 4);
  return;
}

void SetTextureToScene() {
	u_int i;
	int offset;
	
  ENE_VRAM_CTRL *pEVar1;
  uint uVar2;
  
  uVar2 = 0;
  BackupEneVramCtrl__Fv();
  pEVar1 = ene_vram_ctrl;
  do {
    if ((undefined *)pEVar1->flg == &GRA3DVU1MEM_VF02) {
      SetEneVram__FPUii(pEVar1->mdl_p,-pEVar1->offset);
    }
    uVar2 = uVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while (uVar2 < 4);
  InitEneVramCtrl__Fv();
  return;
}

void SetTextureAfterScene() {
	u_int i;
	
  ENE_VRAM_CTRL *pEVar1;
  uint uVar2;
  
  uVar2 = 0;
  SetupEneVramCtrl__Fv();
  pEVar1 = ene_vram_ctrl;
  do {
    if (pEVar1->flg != 0) {
      SetEneVram__FPUii(pEVar1->mdl_p,pEVar1->offset);
    }
    uVar2 = uVar2 + 1;
    pEVar1 = pEVar1 + 1;
  } while (uVar2 < 4);
  return;
}

void MpkAddTexOffset(u_int *mpk_p, int offset) {
  uint *sgd_top;
  uint *puVar1;
  uint *puVar2;
  
  if (mpk_p[4] - 1 < 0x7fffffff) {
    sgd_top = mpk_p + 8;
    puVar1 = mpk_p + 4;
    do {
      SgdAddTexOffset__FPvi(sgd_top,offset);
      puVar2 = (uint *)((int)puVar1 + (*puVar1 & 0xfffffffc) + 0x10);
      sgd_top = (uint *)((int)puVar1 + (*puVar1 & 0xfffffffc) + 0x20);
      puVar1 = puVar2;
    } while (*puVar2 - 1 < 0x7fffffff);
  }
  return;
}

void SetManmdlTm2(u_int *pak_addr, int offset, char mode) {
	u_int tm2_num;
	u_int i;
	u_int *tm2_addr;
	
  uint uVar1;
  void *tm2_addr;
  uint uVar2;
  uint num;
  
  num = 0;
  uVar1 = *pak_addr;
  if (uVar1 != 0) {
    do {
      uVar2 = num + 1;
      tm2_addr = GetFileInPak__FPvi(pak_addr,num);
      if (mode == '\0') {
        MakeTim2SendPacket_3Dpkt__FUii((uint)tm2_addr,offset);
      }
      else {
        MakeTim2SendPacket__FUii((uint)tm2_addr,offset);
      }
      num = uVar2;
    } while (uVar2 < uVar1);
  }
  return;
}

void SetManmdlTm2_Mono(u_int *pak_addr, int offset, char mode, u_int *mono_addr) {
	u_int tm2_num;
	u_int i;
	u_int *tm2_addr;
	
  uint uVar1;
  void *tm2_addr;
  void *mono_addr_00;
  uint num;
  uint uVar2;
  
  uVar1 = *pak_addr;
  num = 0;
  if (uVar1 != 0) {
    do {
      tm2_addr = GetFileInPak__FPvi(pak_addr,num);
      uVar2 = num + 1;
      mono_addr_00 = GetFileInPak__FPvi(mono_addr,num);
      MakeTim2SendPacket_Mono__FUiiUi((uint)tm2_addr,offset,(uint)mono_addr_00);
      num = uVar2;
    } while (uVar2 < uVar1);
  }
  return;
}

void BackupEneVramCtrl() {
	u_int i;
	
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  do {
    uVar7 = uVar6 + 1;
    uVar2._0_4_ = ene_vram_ctrl[uVar6].mdl_p;
    uVar2._4_4_ = ene_vram_ctrl[uVar6].flg;
    uVar3._0_4_ = ene_vram_ctrl[uVar6].mdl_no;
    uVar3._4_4_ = ene_vram_ctrl[uVar6].offset;
    uVar1 = uVar6 * 0x10 + 0x336d7f;
    uVar4 = uVar1 & 7;
    puVar5 = (ulong *)(uVar1 - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
    ene_vram_bak[uVar6].mdl_p = (uint *)(int)uVar2;
    ene_vram_bak[uVar6].flg = (int)(uVar2 >> 0x20);
    uVar1 = uVar6 * 0x10 + 0x336d87;
    uVar4 = uVar1 & 7;
    puVar5 = (ulong *)(uVar1 - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar3 >> (7 - uVar4) * 8;
    ene_vram_bak[uVar6].mdl_no = (int)uVar3;
    ene_vram_bak[uVar6].offset = (int)(uVar3 >> 0x20);
    uVar6 = uVar7;
  } while (uVar7 < 4);
  return;
}

void SetupEneVramCtrl() {
	u_int i;
	
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  do {
    uVar7 = uVar6 + 1;
    uVar2._0_4_ = ene_vram_bak[uVar6].mdl_p;
    uVar2._4_4_ = ene_vram_bak[uVar6].flg;
    uVar3._0_4_ = ene_vram_bak[uVar6].mdl_no;
    uVar3._4_4_ = ene_vram_bak[uVar6].offset;
    uVar1 = uVar6 * 0x10 + 0x336d3f;
    uVar4 = uVar1 & 7;
    puVar5 = (ulong *)(uVar1 - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar2 >> (7 - uVar4) * 8;
    ene_vram_ctrl[uVar6].mdl_p = (uint *)(int)uVar2;
    ene_vram_ctrl[uVar6].flg = (int)(uVar2 >> 0x20);
    uVar1 = uVar6 * 0x10 + 0x336d47;
    uVar4 = uVar1 & 7;
    puVar5 = (ulong *)(uVar1 - uVar4);
    *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | uVar3 >> (7 - uVar4) * 8;
    ene_vram_ctrl[uVar6].mdl_no = (int)uVar3;
    ene_vram_ctrl[uVar6].offset = (int)(uVar3 >> 0x20);
    uVar6 = uVar7;
  } while (uVar7 < 4);
  return;
}

void SgdAddTexOffset(void *sgd_top, int offset) {
	u_int i;
	u_int *p;
	u_int *nextprim;
	u_int *pk;
	
  uint uVar1;
  int *piVar2;
  int **ppiVar3;
  uint uVar4;
  
  piVar2 = (int *)((int)sgd_top + 0x18);
  uVar4 = 0;
  if (*(int *)((int)sgd_top + 0x14) != 0) {
    do {
      ppiVar3 = (int **)*piVar2;
      if (ppiVar3 == (int **)0x0) {
        uVar1 = *(uint *)((int)sgd_top + 0x14);
      }
      else if (*ppiVar3 == (int *)0x0) {
        uVar1 = *(uint *)((int)sgd_top + 0x14);
      }
      else {
        do {
          if (ppiVar3[1] == (int *)&GRA3DVU1MEM_VF02) {
            if (ppiVar3[0xc] == (int *)&GRA3DVU1MEM_GTTRIFAN_NOTEX) {
              ppiVar3[10] = (int *)((int)ppiVar3[10] + offset);
              ppiVar3[0xb] = ppiVar3[0xb] + offset * 8;
              ppiVar3 = (int **)*ppiVar3;
            }
            else {
              ppiVar3 = (int **)*ppiVar3;
            }
          }
          else {
            ppiVar3 = (int **)*ppiVar3;
          }
        } while (*ppiVar3 != (int *)0x0);
        uVar1 = *(uint *)((int)sgd_top + 0x14);
      }
      uVar4 = uVar4 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar4 < uVar1);
  }
  return;
}

void motInitMsn() {
  motInitANI_CTRL__Fv();
  InitEneVramCtrl__Fv();
  InitPlyrAcsAlpha__Fv();
  return;
}

void motInitAniMdlBufSub(ANI_MDL_CTRL *am_ctrl) {
  am_ctrl->pkt_no = '\0';
  am_ctrl->anm_no = -1;
  am_ctrl->anm_p = (uint *)0x0;
  am_ctrl->map_flg = '\0';
  return;
}

void motEneTexAnm(ANI_CTRL *ani_ctrl, u_int work_id) {
	u_int *pk2_p;
	u_int i;
	u_int offset;
	static u_int cnt = 0;
	
  bool bVar1;
  uint *pak_addr;
  ENE_VRAM_CTRL *pEVar2;
  int num;
  uint uVar3;
  int offset;
  
  offset = 0;
  if ((sys_wrk.count & 1) != 0) {
    cnt_967 = cnt_967 + 1;
  }
  num = 7 - cnt_967 % 7;
  if ((cnt_967 / 7 & 1U) == 0) {
    num = cnt_967 % 7;
  }
  pak_addr = (uint *)GetFileInPak__FPvi(ani_ctrl->tanm_p,num);
  uVar3 = 0;
  pEVar2 = ene_vram_ctrl;
  while( true ) {
    if (pEVar2->mdl_p == ani_ctrl->mdl_p) {
      offset = pEVar2->offset;
    }
    bVar1 = uVar3 == 3;
    uVar3 = uVar3 + 1;
    if (bVar1) break;
    pEVar2 = pEVar2 + 1;
    if (3 < uVar3) {
      SetManmdlTm2__FPUiic(pak_addr,offset,'\0');
      return;
    }
  }
  return;
}

void SetPlyrClut(int bw_flg) {
	u_int *clut_addr;
	u_int i;
	u_int num;
	
  uint uVar1;
  void *tm2_addr;
  uint uVar2;
  uint *pak_head;
  uint num;
  
  pak_head = plyr_bwc_addr;
  if (bw_flg == 0) {
    pak_head = plyr_clut_addr;
  }
  if (pak_head != (uint *)0x0) {
    uVar1 = *pak_head;
    num = 0;
    if (uVar1 != 0) {
      do {
        uVar2 = num + 1;
        tm2_addr = GetFileInPak__FPvi(pak_head,num);
        MakeTim2SendPacket__FUii((uint)tm2_addr,0);
        num = uVar2;
      } while (uVar2 < uVar1);
    }
  }
  return;
}

int SendItemVram(u_int *pPk2, int offset) {
	u_int *pTm2;
	u_int *pBwc;
	
  uint *pak_addr;
  uint *mono_addr;
  int iVar1;
  
  iVar1 = 0;
  if (pPk2 != (uint *)0x0) {
    pak_addr = Pk2GetAddr__FPUii(pPk2,1);
    mono_addr = Pk2GetAddr__FPUii(pPk2,2);
    if (offset < 0) {
      printf("Warning : SendItemVram Illegal Vram Adrs\n");
      iVar1 = 0;
    }
    else {
      iVar1 = gra3dIsMonotoneDrawEnable__Fv();
      if (iVar1 == 0) {
        SetManmdlTm2__FPUiic(pak_addr,offset,'\0');
        iVar1 = 1;
      }
      else {
        SetManmdlTm2_Mono__FPUiicT0(pak_addr,offset,'\0',mono_addr);
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}
