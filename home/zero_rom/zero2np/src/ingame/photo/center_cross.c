// STATUS: NOT STARTED

#include "center_cross.h"

unsigned char ENE_WRK type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a1fc8;
	
  g3ddbgAssert__FbPCce(false,str_616);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3ef648,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3ef650,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf7ENE_WRK(0x3a2010,_max);
  }
  return (uint **)0x0;
}

void CCenterCross::Work() {
	int cmx;
	int i;
	
  int iVar1;
  ushort uVar2;
  fixed_array<ENE_WRK,10> *pfVar3;
  int iVar4;
  
  pfVar3 = &ene_wrk;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar4 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar1,10);
                    /* end of inlined section */
    if (((((ENE_WRK *)pfVar3)->st).sta & 0x80) == 0) {
      iVar1 = ((CENTER_CROSS *)&this->center_cercle[0].cnt)->cnt;
LAB_0012df44:
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      ((CENTER_CROSS *)&this->center_cercle[0].cnt)->cnt = iVar1;
      if (iVar1 < 1) {
        this->center_cercle[0].tx = plyr_wrk.fp[0];
        uVar2 = plyr_wrk.fp[1];
        goto LAB_0012df64;
      }
    }
    else {
      iVar1 = ((CENTER_CROSS *)&this->center_cercle[0].cnt)->cnt;
      if ((((ENE_WRK *)pfVar3)->attr & 0x40) != 0) goto LAB_0012df44;
      this->center_cercle[0].tx = ((ENE_WRK *)pfVar3)->fp[0];
      iVar1 = iVar1 + 1;
      if (9 < iVar1) {
        iVar1 = 10;
      }
      uVar2 = ((ENE_WRK *)pfVar3)->fp[1];
      ((CENTER_CROSS *)&this->center_cercle[0].cnt)->cnt = iVar1;
LAB_0012df64:
      this->center_cercle[0].ty = uVar2;
    }
    pfVar3 = (fixed_array<ENE_WRK,10> *)((int)pfVar3 + 0x490);
    this = (CCenterCross *)((int)this + 0xc);
    iVar1 = iVar4;
    if (9 < iVar4) {
      return;
    }
  } while( true );
}

void CCenterCross::Draw(int fndr_mx, int fndr_my, int iAlpha) {
	int alp;
	int cmx;
	int i;
	int m;
	float ex;
	float ey;
	CENTER_CROSS *ccp;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float y;
  
  iVar8 = 0;
  iVar9 = 0;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(iVar3,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar7 = iVar3 + 1;
    iVar2 = iVar8 + -4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar8 = iVar8 + 0x490;
    if ((*(uint *)((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse + iVar2) & 0x40) == 0) {
                    /* end of inlined section */
      uVar1 = this->center_cercle[0].tx;
      iVar2 = ((CENTER_CROSS *)&this->center_cercle[0].cnt)->cnt;
      iVar5 = (int)(short)plyr_wrk.fp[0];
      iVar4 = iVar5 - n_finder_dat[56].x;
      iVar6 = (int)(short)plyr_wrk.fp[0];
      y = ((float)((((int)(short)this->center_cercle[0].ty - (int)(short)plyr_wrk.fp[1]) * iVar2) /
                   10 + (int)(short)plyr_wrk.fp[1]) -
          (float)((short)plyr_wrk.fp[1] - n_finder_dat[56].y)) + (float)fndr_my;
      iVar3 = IsActEnemy__Fi(iVar3);
      if (iVar3 == 0) {
        iVar3 = this->center_cercle[0].alp - 8;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = this->center_cercle[0].alp + 8;
        if (iAlpha <= iVar3) {
          iVar3 = iAlpha;
        }
      }
      this->center_cercle[0].alp = (uchar)iVar3;
      if (this->center_cercle[0].alp != '\0') {
        iVar9 = iVar9 + 1;
        DispChara__FiUcffUcUcUcUc
                  (0x38,'\x03',
                   ((float)((((short)uVar1 - iVar5) * iVar2) / 10 + iVar6) - (float)iVar4) +
                   (float)fndr_mx,y,'\x06',this->center_cercle[0].alp,'\0','\x04');
      }
    }
    this = (CCenterCross *)((int)this + 0xc);
    iVar3 = iVar7;
  } while (iVar7 < 10);
  if (iVar9 == 0) {
    DispChara__FiUcffUcUcUcUc
              (0x38,'\x02',(float)fndr_mx,(float)fndr_my,'\x06',(uchar)iAlpha,'\0','\x04');
  }
  return;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_616);
  return (type_info *)v;
}

type_info& ENE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_616);
  return (type_info *)v;
}
