// STATUS: NOT STARTED

#include "map_hit_check.h"

int MapHitCheck(float *v0, float *now, float *old, float r, int kai) {
	int i;
	int j;
	int k;
	int rec_num;
	int door_rec_num;
	int hit_num;
	int flg;
	float tmp[4];
	float a[4];
	float b[4];
	float len;
	int *num_list;
	int list_num;
	float *vec[4];
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  float (*vec) [4];
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float tmp [4];
  float a [4];
  float b [4];
  float len;
  float *local_7c;
  float *local_78;
  float *local_74;
  int local_70;
  int door_rec_num;
  int *num_list;
  int list_num;
  
  iVar7 = 0;
  iVar8 = 0;
  local_7c = v0;
  local_78 = now;
  local_74 = old;
  local_70 = kai;
  sceVu0CopyVector(tmp);
  MrecSetRegBuffID__FiPCfi(local_70,tmp,0);
  MrecSetHitRectInfo__Fi(0);
  list_num = MrecGetHitInfoIdNum__Fv();
  num_list = MrecGetHitInfoRecNumList__Fv();
  door_rec_num = MrecIsDoorRectangleNum__Fv();
  DrawMapHitRect__FPf(tmp);
  do {
    iVar3 = MapHitCheckCol__FPffii(tmp,r,0,local_70);
    bVar1 = 0 < iVar3;
    iVar3 = 0;
    piVar6 = num_list;
    if (0 < list_num) {
      do {
        iVar7 = *piVar6;
        if (0 < iVar7) {
          iVar4 = 0;
          do {
            iVar5 = iVar4 + 1;
            vec = MrecGetHitInfoRecVecter__Fii(iVar3,iVar4);
            if ((vec != (float (*) [4])0x0) &&
               (iVar4 = HcBasePointRectangle__FPfN30PA3_ff(&len,tmp,a,b,vec,r), iVar4 != 0)) {
              bVar1 = true;
              if (iVar4 == 1) {
                MapHitCollisionPoint__FPfN20ff(tmp,tmp,a,len,r);
              }
              else {
                MapHitCollisionLine__FPfN30ff(tmp,tmp,a,b,len,r);
              }
              break;
            }
            iVar4 = iVar5;
          } while (iVar5 < iVar7);
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar3 < list_num);
    }
    iVar3 = 0;
    if (0 < door_rec_num) {
      do {
        iVar4 = MrecPointDoorRectangle__FPfN30if(&len,tmp,a,b,iVar3,r);
        if (iVar4 != 0) {
          bVar1 = true;
          if (iVar4 == 1) {
            MapHitCollisionPoint__FPfN20ff(tmp,tmp,a,len,r);
            bVar2 = iVar3 < iVar7;
          }
          else {
            MapHitCollisionLine__FPfN30ff(tmp,tmp,a,b,len,r);
            bVar2 = iVar3 < iVar7;
          }
          goto LAB_001dc764;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < door_rec_num);
    }
    bVar2 = iVar3 < iVar7;
LAB_001dc764:
    if (bVar2) {
      DrawMapHitRectOne__FiPf(iVar3,tmp);
    }
    if ((!bVar1) || (iVar8 = iVar8 + 1, 3 < iVar8)) {
      if (iVar8 == 0) {
        sceVu0CopyVector(local_7c,local_78);
        iVar7 = 0;
      }
      else if (iVar8 == 4) {
        sceVu0CopyVector(local_7c,local_74);
        iVar7 = 1;
      }
      else {
        sceVu0CopyVector(local_7c,tmp);
        iVar7 = 1;
      }
      return iVar7;
    }
  } while( true );
}

int MapHitLineCheck(float *pos1, int kai1, float *pos2, int kai2, float r) {
	int i;
	int j;
	int k;
	int rec_num;
	float box[4][4];
	float boxmax[4];
	float boxmin[4];
	int *num_list;
	int *door_list;
	int list_num;
	int hit_flg;
	float vec12[4];
	float tmp[4];
	float *pvMin;
	float *pvMax;
	int i;
	
  int iVar1;
  byte bVar2;
  float (*pafVar3) [4];
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined in_vf0 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined4 uVar16;
  float box [4] [4];
  float boxmax [4];
  float boxmin [4];
  float vec12 [4];
  float tmp [4];
  int *num_list;
  int *door_list;
  int list_num;
  
  bVar2 = 0;
  MrecSetRegBuffID__FiPCfi(kai1,pos1,0);
  MrecSetRegBuffID__FiPCfi(kai2,pos2,1);
  if (r == 0.0) {
                    /* end of inlined section */
    _lqc2((undefined  [16])box[0]);
    _lqc2((undefined  [16])box[1]);
    _lqc2((undefined  [16])box[2]);
    _lqc2((undefined  [16])box[3]);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar13 = _lqc2(*(undefined (*) [16])pos1);
    auVar14 = _lqc2(*(undefined (*) [16])pos2);
    auVar15 = _vmax(auVar13,auVar14);
    auVar13 = _vmini(auVar13,auVar14);
    boxmax = (float  [4])_sqc2(auVar15);
    boxmin = (float  [4])_sqc2(auVar13);
                    /* end of inlined section */
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar13 = _lqc2(*(undefined (*) [16])pos2);
    auVar14 = _lqc2(*(undefined (*) [16])pos1);
    auVar13 = _vsub(auVar13,auVar14);
    auVar13 = _vmul(auVar13,auVar13);
    auVar14 = _vaddbc(auVar13,auVar13);
    auVar13 = _vsub(in_vf0,in_vf0);
    _vnop();
    _vnop();
    _vrsqrt(in_vf0,auVar14);
    uVar16 = _vwaitq();
    auVar13 = _vmulq(auVar13,uVar16);
    auVar13 = _sqc2(auVar13);
                    /* end of inlined section */
    vec12[0] = auVar13._0_4_;
    vec12[2] = auVar13._8_4_;
    tmp[2] = -vec12[0];
    tmp[0] = vec12[2];
    tmp[3] = 0.0;
    tmp[1] = 0.0;
    sceVu0ScaleVector(r,tmp,tmp);
    sceVu0AddVector(box,pos1,tmp);
    sceVu0AddVector(box[1],pos2,tmp);
    sceVu0ScaleVector(0xbf800000,tmp,tmp);
    sceVu0AddVector(box[2],pos2,tmp);
    sceVu0AddVector(box[3],pos1,tmp);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar13 = _lqc2((undefined  [16])box[0]);
    auVar14 = _lqc2((undefined  [16])box[0]);
    iVar4 = 2;
    pafVar3 = box;
    do {
      pafVar3 = pafVar3[1];
      auVar15 = _lqc2((undefined  [16])*pafVar3);
      auVar13 = _vmax(auVar13,auVar15);
      auVar14 = _vmini(auVar14,auVar15);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    boxmax = (float  [4])_sqc2(auVar13);
    boxmin = (float  [4])_sqc2(auVar14);
  }
  iVar11 = 0;
  MrecSetHitRectInfo__Fi(0);
  MrecSetDoorHitRectInfo__Fi(0);
  iVar4 = MrecGetHitInfoIdNum__Fv();
  piVar5 = MrecGetHitInfoRecNumList__Fv();
  piVar6 = MrecGetDoorHitInfoRecNumList__Fv();
  if (iVar4 < 1) {
LAB_001dcc10:
    iVar11 = 0;
    MrecSetHitRectInfo__Fi(1);
    MrecSetDoorHitRectInfo__Fi(1);
    iVar4 = MrecGetHitInfoIdNum__Fv();
    piVar5 = MrecGetHitInfoRecNumList__Fv();
    piVar6 = MrecGetDoorHitInfoRecNumList__Fv();
    if (0 < iVar4) {
      do {
        iVar10 = 0;
        iVar1 = piVar5[iVar11];
        while (iVar10 < iVar1) {
          iVar8 = MrecIsNearRectangle__FPfT0ii(boxmin,boxmax,iVar11,iVar10);
          if (iVar8 == 0) {
            iVar10 = iVar10 + 1;
          }
          else {
            iVar8 = 0;
            if (r != 0.0) {
              do {
                iVar9 = iVar8;
                if (3 < iVar9) break;
                iVar8 = iVar9 + 1;
                iVar7 = iVar8;
                if (iVar8 < 0) {
                  iVar7 = iVar9 + 4;
                }
                iVar7 = MrecLineCross__FPCfT0ii
                                  ((float *)box[iVar9],(float *)box[iVar8 + (iVar7 >> 2) * -4],
                                   iVar11,iVar10);
              } while (iVar7 == 0);
              if (iVar9 == 4) {
                iVar8 = MrecIsInHitRectangle__FPCfN30ii
                                  ((float *)box,(float *)box[1],(float *)box[2],(float *)box[3],
                                   iVar11,iVar10);
                goto LAB_001dcd40;
              }
LAB_001dcd48:
              bVar2 = 1;
              break;
            }
            iVar8 = MrecLineCross__FPCfT0ii(pos1,pos2,iVar11,iVar10);
LAB_001dcd40:
            if (iVar8 != 0) goto LAB_001dcd48;
            iVar10 = iVar10 + 1;
          }
        }
        iVar10 = 0;
        fVar12 = 0.0;
        iVar1 = piVar6[iVar11];
LAB_001dcdc0:
        do {
          while( true ) {
            if (iVar1 <= iVar10) goto LAB_001dce30;
            iVar8 = MrecCheckDoorHitSta__Fii(iVar11,iVar10);
            if (iVar8 != 0) break;
LAB_001dcdbc:
            iVar10 = iVar10 + 1;
          }
          iVar8 = MrecIsNearDoorRectangle__FPfT0ii(boxmin,boxmax,iVar11,iVar10);
          if (iVar8 == 0) {
            iVar10 = iVar10 + 1;
            goto LAB_001dcdc0;
          }
          iVar8 = 0;
          if (r != fVar12) {
            do {
              iVar9 = iVar8;
              if (3 < iVar9) break;
              iVar8 = iVar9 + 1;
              iVar7 = iVar8;
              if (iVar8 < 0) {
                iVar7 = iVar9 + 4;
              }
              iVar7 = MrecDoorLineCross__FPCfT0ii
                                ((float *)box[iVar9],(float *)box[iVar8 + (iVar7 >> 2) * -4],iVar11,
                                 iVar10);
            } while (iVar7 == 0);
            if (iVar9 == 4) goto LAB_001dcdbc;
            break;
          }
          iVar8 = MrecDoorLineCross__FPCfT0ii(pos1,pos2,iVar11,iVar10);
          iVar10 = iVar10 + 1;
        } while (iVar8 == 0);
        bVar2 = 1;
LAB_001dce30:
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar4);
    }
    return (int)bVar2;
  }
LAB_001dca20:
  iVar10 = 0;
  iVar1 = piVar5[iVar11];
  while (iVar10 < iVar1) {
    iVar8 = MrecIsNearRectangle__FPfT0ii(boxmin,boxmax,iVar11,iVar10);
    if (iVar8 == 0) {
      iVar10 = iVar10 + 1;
    }
    else {
      iVar8 = 0;
      if (r != 0.0) {
        do {
          iVar9 = iVar8;
          if (3 < iVar9) break;
          iVar8 = iVar9 + 1;
          iVar7 = iVar8;
          if (iVar8 < 0) {
            iVar7 = iVar9 + 4;
          }
          iVar7 = MrecLineCross__FPCfT0ii
                            ((float *)box[iVar9],(float *)box[iVar8 + (iVar7 >> 2) * -4],iVar11,
                             iVar10);
        } while (iVar7 == 0);
        if (iVar9 == 4) {
          iVar8 = MrecIsInHitRectangle__FPCfN30ii
                            ((float *)box,(float *)box[1],(float *)box[2],(float *)box[3],iVar11,
                             iVar10);
          goto LAB_001dcb10;
        }
LAB_001dcb18:
        bVar2 = 1;
        break;
      }
      iVar8 = MrecLineCross__FPCfT0ii(pos1,pos2,iVar11,iVar10);
LAB_001dcb10:
      if (iVar8 != 0) goto LAB_001dcb18;
      iVar10 = iVar10 + 1;
    }
  }
  iVar10 = 0;
  fVar12 = 0.0;
  iVar1 = piVar6[iVar11];
LAB_001dcb90:
  do {
    if (iVar1 <= iVar10) break;
    iVar8 = MrecCheckDoorHitSta__Fii(iVar11,iVar10);
    if (iVar8 != 0) {
      iVar8 = MrecIsNearDoorRectangle__FPfT0ii(boxmin,boxmax,iVar11,iVar10);
      if (iVar8 == 0) {
        iVar10 = iVar10 + 1;
        goto LAB_001dcb90;
      }
      iVar8 = 0;
      if (r == fVar12) {
        iVar8 = MrecDoorLineCross__FPCfT0ii(pos1,pos2,iVar11,iVar10);
        if (iVar8 == 0) {
          iVar10 = iVar10 + 1;
          goto LAB_001dcb90;
        }
      }
      else {
        do {
          iVar9 = iVar8;
          if (3 < iVar9) break;
          iVar8 = iVar9 + 1;
          iVar7 = iVar8;
          if (iVar8 < 0) {
            iVar7 = iVar9 + 4;
          }
          iVar7 = MrecDoorLineCross__FPCfT0ii
                            ((float *)box[iVar9],(float *)box[iVar8 + (iVar7 >> 2) * -4],iVar11,
                             iVar10);
        } while (iVar7 == 0);
        if (iVar9 == 4) goto LAB_001dcb8c;
      }
      bVar2 = 1;
      break;
    }
LAB_001dcb8c:
    iVar10 = iVar10 + 1;
  } while( true );
  iVar11 = iVar11 + 1;
  if (iVar4 <= iVar11) goto LAB_001dcc10;
  goto LAB_001dca20;
}

int MapHitCollisionLine(float *v0, float *v1, float *a, float *b, float len, float r) {
	float ab[4];
	float av[4];
	float ver[4];
	float y;
	float ver_len;
	
  float ab [4];
  float av [4];
  float ver [4];
  
  sceVu0SubVector(ab,b,a);
  sceVu0SubVector(av,v1,a);
  ver[2] = -ab[0];
  ver[0] = ab[2];
  ver[1] = 0.0;
  ver[3] = 0.0;
  if (ab[2] * av[0] - ab[0] * av[2] < 0.0) {
    sceVu0ScaleVector(0xbf800000,ver,ver);
  }
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(ver,ver);
}

int MapHitCollisionPoint(float *v0, float *v1, float *a, float len, float r) {
	float av[4];
	
  float av [4];
  
  sceVu0SubVector(av,v1,a);
                    /* WARNING: Subroutine does not return */
  av[1] = 0.0;
  sceVu0InnerProduct(av,av);
}
