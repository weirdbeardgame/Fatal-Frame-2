#ifndef MIKOMPILATION_GRA3DSGD_H
#define MIKOMPILATION_GRA3DSGD_H

#include "sgd_types.h"

void sgdRemap(SGDFILEHEADER* pSGDHead);
void gra3dsgdSetCoordinate(const SGDCOORDINATE *pCU, int iIndex);
void _gra3dDrawSGD(SGDFILEHEADER* pSGDTop, SGDRENDERTYPE type, SGDCOORDINATE* pCoord, int pnum);
void sgdResetMaterialCache(SGDFILEHEADER *pSGDData);
void gra3dsgdSetupVu1();
CoordCache& _GetCoordCache();
void _SetCoordCache(const CoordCache &rCC);
int gra3dsgdGetNumBlock();
void SgSortPreProcessP(SGDPROCUNITHEADER *pPUHead);
void gra3dsgdDrawPresetDataObject(SGDPROCUNITHEADER *pPUHead);
void SgSortPreProcess(u_int *_prim);
void SgSortUnitPrim(SGDPROCUNITHEADER *pPUHead);
void SgSortUnitPrimPost(SGDPROCUNITHEADER *pPUHead);
void SgPreRenderPrim(SGDPROCUNITHEADER *pPUHead);
void SgClearPreRenderPrim(SGDPROCUNITHEADER *pPUHead);
SGDCOORDINATE * gra3dsgdGetCoordinate(int iIndex);
static void SetVUMeshDataPost(SGDPROCUNITHEADER *pPUHead);
void SetVUVNDataPost(SGDPROCUNITHEADER *pPUHead);
void _SetVUVNPRIM(const SGDPROCUNITHEADER *ppuhVUVN);
int _GetGlobalBufferSize();
sceVu0FVECTOR* _GetGlobalVertexBuffer();
sceVu0FVECTOR* _GetGlobalNormalBuffer();
void LoadTRI2Files(SGDPROCUNITHEADER *pPUHead);
void GsImageProcess(const SGDPROCUNITHEADER *pPUHead);
int CheckBoundingBox(SGDPROCUNITHEADER *pPUHead);
void SetVUMeshDataP(SGDPROCUNITHEADER *pPUHead);
int BoundingBoxCalcP(SGDPROCUNITHEADER *_prim);
static void CalcVertexBuffer(SGDPROCUNITHEADER *pPUHead);
void _CalcWeightedLocalWorldMatrix(float (*matRet) [4],float (*matLocalWorld) [4]);
SGDFILEHEADER * _GetSGDTop();
PHEAD* _GetLPHEAD(void);
static void _CalcWeightedVectorBuffer(
		_ONELIST *aList,
		int iNumList,
		float (*pvDest)[4],
		const float (*pvSrc)[4],
		void (*pFunc)(float*, const float*, float (*)[4], float (*)[4])
);
void _CalcWeightedVertexBuffer(float *dp, const float *v, float (*matWorkP0)[4], float (*matWorkP1)[4]);
void _CalcWeightedNormalBuffer(float *dp, const float *v, float (*matWorkP0)[4], float (*matWorkP1)[4]);
void sgdCalcBoneCoordinate(SGDCOORDINATE *pCoord, int iNumBlock);
void sgdCalcCoordinateMatrix(SGDCOORDINATE *pCoord);
void _SetCoordData(SGDPROCUNITHEADER *pPUHead);
void SetVUMeshData(SGDPROCUNITHEADER *pPUHead);
void SetVUVNData(SGDPROCUNITHEADER *pPUHead);

#endif //MIKOMPILATION_GRA3DSGD_H
