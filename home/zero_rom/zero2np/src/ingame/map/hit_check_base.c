// STATUS: NOT STARTED

#include "hit_check_base.h"

int HcBaseIsInTriXZ(float *target, float *tri0, float *tri1, float *tri2) {
	float p[3][4];
	float avTemp[3][4];
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  float p [3] [4];
  float avTemp [3] [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar4 = _lqc2(*(undefined (*) [16])tri0);
  auVar5 = _lqc2(*(undefined (*) [16])target);
  auVar4 = _vsub(auVar4,auVar5);
  p[0] = (float  [4])_sqc2(auVar4);
  auVar4 = _lqc2(*(undefined (*) [16])tri1);
  auVar5 = _lqc2(*(undefined (*) [16])target);
  auVar4 = _vsub(auVar4,auVar5);
  p[1] = (float  [4])_sqc2(auVar4);
  auVar4 = _lqc2(*(undefined (*) [16])tri2);
  auVar5 = _lqc2(*(undefined (*) [16])target);
  auVar4 = _vsub(auVar4,auVar5);
  p[2] = (float  [4])_sqc2(auVar4);
                    /* end of inlined section */
  iVar1 = 1;
  iVar2 = 0;
  while (iVar3 = iVar1, sceVu0OuterProduct(avTemp[iVar2],p[iVar2],p[iVar3 % 3]), iVar3 < 3) {
    iVar2 = iVar3;
    iVar1 = iVar3 + 1;
  }
  if ((((avTemp[0][1] < 0.0) || (avTemp[1][1] < 0.0)) || (iVar1 = 1, avTemp[2][1] < 0.0)) &&
     (((iVar1 = 0, avTemp[0][1] <= 0.0 && (avTemp[1][1] <= 0.0)) && (iVar1 = 1, 0.0 < avTemp[2][1]))
     )) {
    iVar1 = 0;
  }
  return iVar1;
}

float HcBasePointLineXZ(float *p0, float *p1, float *v) {
	float r;
	float p1p0[4];
	
  float fVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  float p1p0 [4];
  
  sceVu0SubVector(p1p0,p0,p1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar2 = _lqc2((undefined  [16])p1p0);
  auVar3 = _lqc2((undefined  [16])p1p0);
  auVar2 = _vmul(auVar2,auVar3);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  fVar1 = auVar2._0_4_;
  auVar2 = _lqc2(*(undefined (*) [16])v);
  auVar3 = _lqc2(*(undefined (*) [16])v);
  auVar2 = _vmul(auVar2,auVar3);
  auVar2 = _vaddbc(auVar2,auVar2);
  auVar2 = _qmfc2(auVar2._0_4_);
  auVar3 = _lqc2((undefined  [16])p1p0);
  auVar4 = _lqc2(*(undefined (*) [16])v);
  auVar3 = _vmul(auVar3,auVar4);
  auVar3 = _vaddbc(auVar3,auVar3);
  auVar3 = _qmfc2(auVar3._0_4_);
                    /* end of inlined section */
  if (auVar2._0_4_ != 0.0) {
    fVar1 = fVar1 - (auVar3._0_4_ * auVar3._0_4_) / auVar2._0_4_;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  _qmtc2(fVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

int HcBaseLineIntersect(float *line1_1, float *line1_2, float *line2_1, float *line2_2) {
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = *line1_1;
  fVar10 = *line1_2;
  fVar5 = fVar10;
  if (fVar12 < fVar10) {
    fVar5 = fVar12;
  }
  fVar9 = *line2_1;
  fVar6 = *line2_2;
  fVar8 = fVar9;
  if (fVar9 <= fVar6) {
    fVar8 = fVar6;
  }
  uVar3 = 0;
  if (fVar5 <= fVar8) {
    fVar11 = line1_1[2];
    fVar8 = line1_2[2];
    fVar5 = fVar8;
    if (fVar11 < fVar8) {
      fVar5 = fVar11;
    }
    fVar7 = line2_1[2];
    fVar4 = line2_2[2];
    fVar1 = fVar7;
    if (fVar7 <= fVar4) {
      fVar1 = fVar4;
    }
    uVar3 = 0;
    if (fVar5 <= fVar1) {
      if (fVar6 <= fVar9) {
        fVar9 = fVar6;
      }
      if (fVar12 <= fVar10) {
        fVar12 = fVar10;
      }
      uVar3 = 0;
      if (fVar9 <= fVar12) {
        if (fVar4 <= fVar7) {
          fVar7 = fVar4;
        }
        if (fVar8 < fVar11) {
          if (fVar11 < fVar7) {
            return 0;
          }
        }
        else if (fVar8 < fVar7) {
          return 0;
        }
        uVar3 = 0;
        iVar2 = HcBaseLineStraddle__FPCfN30(line1_1,line1_2,line2_1,line2_2);
        if (iVar2 != 0) {
          iVar2 = HcBaseLineStraddle__FPCfN30(line2_1,line2_2,line1_1,line1_2);
          uVar3 = (uint)(iVar2 != 0);
        }
      }
    }
  }
  return uVar3;
}

int HcBaseLineStraddle(float *e1, float *e2, float *a, float *b) {
  int iVar1;
  int iVar2;
  
  iVar1 = HcBaseLineSide__FPCfN20(a,e1,e2);
  iVar2 = HcBaseLineSide__FPCfN20(b,e1,e2);
  return (int)(iVar1 * iVar2 < 1);
}

int HcBaseLineSide(float *p, float *e1, float *e2) {
	float n;
	
  int iVar1;
  float fVar2;
  
  fVar2 = *p * (e1[2] - e2[2]) + *e1 * (e2[2] - p[2]) + *e2 * (p[2] - e1[2]);
  iVar1 = 1;
  if ((fVar2 <= 0.0) && (iVar1 = -1, 0.0 <= fVar2)) {
    iVar1 = 0;
  }
  return iVar1;
}

int HcBaseLineIntersect2(float *line1_1, float *line1_2, float *line2_1, float *line2_2) {
	float line12[4];
	float line1p[4];
	float outer[4];
	float outer2[4];
	
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  float line12 [4];
  float line1p [4];
  float outer [4];
  float outer2 [4];
  
  fVar11 = *line1_1;
  fVar9 = *line1_2;
  fVar10 = fVar9;
  if (fVar11 < fVar9) {
    fVar10 = fVar11;
  }
  fVar8 = *line2_1;
  fVar5 = *line2_2;
  fVar4 = fVar8;
  if (fVar8 <= fVar5) {
    fVar4 = fVar5;
  }
  iVar2 = 0;
  if (fVar10 <= fVar4) {
    fVar10 = line1_1[2];
    fVar7 = line1_2[2];
    fVar4 = fVar7;
    if (fVar10 < fVar7) {
      fVar4 = fVar10;
    }
    fVar6 = line2_1[2];
    fVar3 = line2_2[2];
    fVar1 = fVar6;
    if (fVar6 <= fVar3) {
      fVar1 = fVar3;
    }
    iVar2 = 0;
    if (fVar4 <= fVar1) {
      if (fVar5 <= fVar8) {
        fVar8 = fVar5;
      }
      if (fVar11 <= fVar9) {
        fVar11 = fVar9;
      }
      iVar2 = 0;
      if (fVar8 <= fVar11) {
        if (fVar3 <= fVar6) {
          fVar6 = fVar3;
        }
        if (fVar10 <= fVar7) {
          fVar10 = fVar7;
        }
        iVar2 = 0;
        if (fVar6 <= fVar10) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          auVar12 = _lqc2(*(undefined (*) [16])line1_2);
          auVar13 = _lqc2(*(undefined (*) [16])line1_1);
          auVar12 = _vsub(auVar12,auVar13);
          line12 = (float  [4])_sqc2(auVar12);
          auVar12 = _lqc2(*(undefined (*) [16])line2_1);
          auVar13 = _lqc2(*(undefined (*) [16])line1_1);
          auVar12 = _vsub(auVar12,auVar13);
          line1p = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
          sceVu0OuterProduct(outer,line12,line1p);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          auVar12 = _lqc2(*(undefined (*) [16])line2_2);
          auVar13 = _lqc2(*(undefined (*) [16])line1_1);
          auVar12 = _vsub(auVar12,auVar13);
          line1p = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
          sceVu0OuterProduct(outer2,line12,line1p);
          iVar2 = 0;
          if (outer[1] * outer2[1] <= 0.0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            auVar12 = _lqc2(*(undefined (*) [16])line2_2);
            auVar13 = _lqc2(*(undefined (*) [16])line2_1);
            auVar12 = _vsub(auVar12,auVar13);
            line12 = (float  [4])_sqc2(auVar12);
            auVar12 = _lqc2(*(undefined (*) [16])line1_1);
            auVar13 = _lqc2(*(undefined (*) [16])line2_1);
            auVar12 = _vsub(auVar12,auVar13);
            line1p = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
            sceVu0OuterProduct(outer,line12,line1p);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
            auVar12 = _lqc2(*(undefined (*) [16])line1_2);
            auVar13 = _lqc2(*(undefined (*) [16])line2_1);
            auVar12 = _vsub(auVar12,auVar13);
            line1p = (float  [4])_sqc2(auVar12);
                    /* end of inlined section */
            sceVu0OuterProduct(outer2,line12,line1p);
            iVar2 = 1;
            if (0.0 < outer[1] * outer2[1]) {
              iVar2 = 0;
            }
          }
        }
      }
    }
  }
  return iVar2;
}

int HcBaseIsLineHitFace(float *pos, float *a, float *b, float *v0, float *v1, float *v2) {
	float n[4];
	float v01[4];
	float v02[4];
	float face[4];
	float ab[4];
	float t;
	
  float fVar1;
  int iVar2;
  float fVar3;
  undefined extraout_vf1 [16];
  undefined extraout_vf1_00 [16];
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  float n [4];
  float v01 [4];
  float v02 [4];
  float face [4];
  float ab [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar4 = _lqc2(*(undefined (*) [16])v1);
  auVar5 = _lqc2(*(undefined (*) [16])v0);
  auVar4 = _vsub(auVar4,auVar5);
  _sqc2(auVar4);
  auVar4 = _lqc2(*(undefined (*) [16])v2);
  auVar5 = _lqc2(*(undefined (*) [16])v0);
  auVar4 = _vsub(auVar4,auVar5);
  _sqc2(auVar4);
                    /* end of inlined section */
  sceVu0OuterProduct(n);
  auVar4 = _lqc2((undefined  [16])n);
  auVar5 = _lqc2(*(undefined (*) [16])v0);
  auVar4 = _vmul(auVar4,auVar5);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(extraout_vf1,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  fVar1 = auVar4._0_4_ * -1.0;
  sceVu0CopyVector(face,n);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  auVar4 = _lqc2(*(undefined (*) [16])b);
  auVar5 = _lqc2(*(undefined (*) [16])a);
  auVar4 = _vsub(auVar4,auVar5);
  ab = (float  [4])_sqc2(auVar4);
  auVar4._12_4_ = fVar1;
  auVar4._0_4_ = face[0];
  auVar4._4_4_ = face[1];
  auVar4._8_4_ = face[2];
  auVar4 = _lqc2(auVar4);
  auVar5 = _lqc2((undefined  [16])ab);
  auVar4 = _vmul(auVar4,auVar5);
  _vaddabc(auVar4,auVar4);
  auVar4 = _vmaddbc(extraout_vf1_00,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  iVar2 = 0;
  if (auVar4._0_4_ != 0.0) {
    auVar5._12_4_ = fVar1;
    auVar5._0_4_ = face[0];
    auVar5._4_4_ = face[1];
    auVar5._8_4_ = face[2];
    auVar4 = _lqc2(auVar5);
    auVar5 = _lqc2(*(undefined (*) [16])a);
    auVar4 = _vmul(auVar4,auVar5);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(extraout_vf1_00,auVar4);
    auVar4 = _vmaddbc(extraout_vf1_00,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    auVar6._12_4_ = fVar1;
    auVar6._0_4_ = face[0];
    auVar6._4_4_ = face[1];
    auVar6._8_4_ = face[2];
    auVar5 = _lqc2(auVar6);
    auVar6 = _lqc2((undefined  [16])ab);
    auVar5 = _vmul(auVar5,auVar6);
    _vaddabc(auVar5,auVar5);
    auVar5 = _vmaddbc(extraout_vf1_00,auVar5);
    auVar5 = _qmfc2(auVar5._0_4_);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar3 = -(auVar4._0_4_ / auVar5._0_4_);
                    /* end of inlined section */
    iVar2 = 0;
    if ((0.0 <= fVar3) && (fVar3 <= 1.0)) {
      face[3] = fVar1;
      sceVu0ScaleVector(ab,ab);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      auVar4 = _lqc2(*(undefined (*) [16])a);
      auVar5 = _lqc2((undefined  [16])ab);
      auVar4 = _vadd(auVar4,auVar5);
      auVar4 = _sqc2(auVar4);
      *(undefined (*) [16])pos = auVar4;
                    /* end of inlined section */
      pos[3] = 1.0;
      iVar2 = 1;
    }
  }
  return iVar2;
}

int HcBaseIsNearSegTri(float *pos1, float *pos2, float *tri0, float *tri1, float *tri2) {
	int j;
	float trimax[4];
	float trimin[4];
	float segmax[4];
	float segmin[4];
	
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float trimax [4];
  float trimin [4];
  float segmax [4];
  float segmin [4];
  
  pfVar3 = trimax;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  trimax[0] = (float)*(undefined8 *)tri0;
  trimax[1] = (float)((ulong)*(undefined8 *)tri0 >> 0x20);
  trimax[2] = tri0[2];
  trimax[3] = tri0[3];
  pfVar2 = trimin;
  trimin[0] = (float)*(undefined8 *)tri0;
  trimin[1] = (float)((ulong)*(undefined8 *)tri0 >> 0x20);
  trimin[2] = tri0[2];
  trimin[3] = tri0[3];
  pfVar1 = segmax;
  segmax[0] = (float)*(undefined8 *)pos1;
  segmax[1] = (float)((ulong)*(undefined8 *)pos1 >> 0x20);
  segmax[2] = pos1[2];
  segmax[3] = pos1[3];
  pfVar4 = segmin;
  segmin[0] = (float)*(undefined8 *)pos1;
  segmin[1] = (float)((ulong)*(undefined8 *)pos1 >> 0x20);
  segmin[2] = pos1[2];
  segmin[3] = pos1[3];
                    /* end of inlined section */
  iVar5 = 0;
  do {
    fVar6 = tri1[iVar5];
    if (*pfVar3 < fVar6) {
      *pfVar3 = fVar6;
    }
    else if (fVar6 < *pfVar2) {
      *pfVar2 = fVar6;
    }
    fVar6 = tri2[iVar5];
    if (*pfVar3 < fVar6) {
      *pfVar3 = fVar6;
    }
    else if (fVar6 < *pfVar2) {
      *pfVar2 = fVar6;
    }
    fVar6 = pos2[iVar5];
    if (*pfVar1 < fVar6) {
      *pfVar1 = fVar6;
    }
    else if (fVar6 < *pfVar4) {
      *pfVar4 = fVar6;
    }
    if (*pfVar3 <= *pfVar4) {
      return 0;
    }
    if (*pfVar1 <= *pfVar2) {
      return 0;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 1;
    pfVar1 = pfVar1 + 1;
    pfVar2 = pfVar2 + 1;
    pfVar3 = pfVar3 + 1;
  } while (iVar5 < 3);
  return 1;
}

int HcBasePointRectangle(float *len, float *pos, float *a, float *b, float *vec[4], float r) {
	int i;
	int p_flg;
	int l_flg;
	float line_p1[4];
	float line_p2[4];
	float tmp1[4];
	float tmp2[4];
	float p_vec[4];
	float l_vec[2][4];
	float p_len;
	float l_len;
	float tmp_len;
	
  bool bVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  float line_p1 [4];
  float line_p2 [4];
  float tmp1 [4];
  float tmp2 [4];
  float p_vec [4];
  float l_vec [2] [4];
  int l_flg;
  
  bVar1 = false;
  bVar2 = false;
  fVar11 = -1.0;
  iVar5 = HcBaseIsNearRectangle__FPA3_fPff(vec,pos,r);
  if (iVar5 == 0) {
    return 0;
  }
  fVar12 = 0.0;
  iVar7 = 0;
  fVar10 = -1.0;
  iVar5 = 0;
  do {
    iVar9 = iVar5 + 1;
    sceVu0CopyVector(line_p1,(int)*vec + iVar7);
    iVar7 = iVar9;
    if (iVar9 < 0) {
      iVar7 = iVar5 + 4;
    }
    sceVu0CopyVector(line_p2,vec[iVar9 + (iVar7 >> 2) * -4]);
    sceVu0SubVector(tmp1,pos,line_p1);
    sceVu0SubVector(tmp2,line_p2,line_p1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    auVar13 = _lqc2((undefined  [16])tmp1);
    auVar14 = _lqc2((undefined  [16])tmp2);
    auVar13 = _vmul(auVar13,auVar14);
    auVar13 = _vaddbc(auVar13,auVar13);
    auVar13 = _qmfc2(auVar13._0_4_);
    fVar6 = fVar10;
    if (auVar13._0_4_ < fVar12) {
      auVar13 = _lqc2((undefined  [16])tmp1);
      auVar14 = _lqc2((undefined  [16])tmp1);
      auVar13 = _vmul(auVar13,auVar14);
      auVar13 = _vaddbc(auVar13,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      fVar6 = auVar13._0_4_;
      pfVar8 = line_p1;
      fVar3 = fVar6;
      pfVar4 = line_p1;
                    /* end of inlined section */
      if (bVar1) goto joined_r0x001c7f4c;
LAB_001c7fc8:
      sceVu0CopyVector(p_vec,pfVar8);
      bVar1 = true;
    }
    else {
      sceVu0SubVector(tmp1,pos,line_p2);
      sceVu0SubVector(tmp2,line_p1,line_p2);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      auVar13 = _lqc2((undefined  [16])tmp1);
      auVar14 = _lqc2((undefined  [16])tmp2);
      auVar13 = _vmul(auVar13,auVar14);
      auVar13 = _vaddbc(auVar13,auVar13);
      auVar13 = _qmfc2(auVar13._0_4_);
      if (auVar13._0_4_ < fVar12) {
        auVar13 = _lqc2((undefined  [16])tmp1);
        auVar14 = _lqc2((undefined  [16])tmp1);
        auVar13 = _vmul(auVar13,auVar14);
        auVar13 = _vaddbc(auVar13,auVar13);
        auVar13 = _qmfc2(auVar13._0_4_);
        fVar6 = auVar13._0_4_;
        pfVar8 = line_p2;
        fVar3 = fVar6;
        pfVar4 = line_p2;
                    /* end of inlined section */
        if (!bVar1) goto LAB_001c7fc8;
joined_r0x001c7f4c:
        fVar6 = fVar10;
        if (fVar3 < fVar10) {
          sceVu0CopyVector(p_vec,pfVar4);
          fVar6 = fVar3;
        }
      }
      else {
        fVar10 = HcBasePointLineXZ__FPfN20(pos,line_p1,tmp2);
        if (bVar2) {
          if (fVar10 < fVar11) {
            sceVu0CopyVector(l_vec,line_p1);
            sceVu0CopyVector(l_vec[1],line_p2);
            fVar11 = fVar10;
          }
        }
        else {
          sceVu0CopyVector(l_vec,line_p1);
          sceVu0CopyVector(l_vec[1],line_p2);
          bVar2 = true;
          fVar11 = fVar10;
        }
      }
    }
    if (3 < iVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      _qmtc2(fVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = iVar9 * 0x10;
    fVar10 = fVar6;
    iVar5 = iVar9;
  } while( true );
}

static int HcBaseIsNearRectangle(float *vec[4], float *pos, float r) {
	float max_x;
	float min_x;
	float max_z;
	float min_z;
	int i;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = (*vec)[0];
  iVar1 = 3;
  fVar6 = (*vec)[2];
  fVar2 = (*vec)[0];
  fVar3 = fVar4;
  fVar7 = fVar6;
  while( true ) {
    fVar5 = fVar2;
    if ((fVar2 <= fVar3) && (fVar5 = fVar3, fVar2 < fVar4)) {
      fVar4 = fVar2;
    }
    fVar3 = (*vec)[2];
    vec = vec[1];
    fVar8 = fVar3;
    if ((fVar3 <= fVar7) && (fVar8 = fVar7, fVar3 < fVar6)) {
      fVar6 = fVar3;
    }
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) break;
    fVar2 = (*vec)[0];
    fVar3 = fVar5;
    fVar7 = fVar8;
  }
  if ((*pos <= fVar4 - r) ||
     (((iVar1 = 0, *pos < fVar5 + r && (fVar6 - r < pos[2])) && (iVar1 = 1, fVar8 + r <= pos[2]))))
  {
    iVar1 = 0;
  }
  return iVar1;
}
