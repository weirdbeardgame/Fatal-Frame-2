#include "common.h"

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFD38);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFD68);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFDA0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFDD8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFE10);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFE68);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFEB0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001AFFC8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B0000);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dLightDataAddOffsetPosition__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dLightEnableAll__Fi);

inline void gra3dLightEnablePush__Fv(void)
{
}

inline void gra3dLightEnablePop__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dLightPushData__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dLightPopData__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dEmulateLightData__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPCff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dEmulateLightDataObj__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPCff);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B0DF8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B0E18);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dIsBBInViewvolume__FPA3_fT0PA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", CheckModelBoundingBox__FPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dExecPrelight__FP13SGDFILEHEADERPCfT1);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dExecPrelight__FP13SGDFILEHEADERPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetCamera__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamGetPosition__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamGetDirection__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamGetTarget__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetPosition__FPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetPosition__Ffff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamGetPositionOld__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B1440);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetCoord__FPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetTarget__FPCfi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetTarget__Ffffi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetRoll__Ff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamGetRoll__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamRotationByAxis__FPCff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetNumLightEnable__FPC14GRA3DLIGHTDATAi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetNumLightInitial__FPC14GRA3DLIGHTDATAi);

INCLUDE_ASM(const s32, "graphics/gra3d", utilSetGRA3DLIGHTDATADefault__FP14GRA3DLIGHTDATA);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetGsRegisterDefault__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B1898);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B1928);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCalcWorldScreenMatrix__FPA3_fP11GRA3DCAMERAi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dApplyCamera__FP11GRA3DCAMERAi);

INCLUDE_ASM(const s32, "graphics/gra3d", _gra3dSetCameraForce__FPC11GRA3DCAMERA);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetFov__Ff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamGetFov__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetAspect__Fff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetDepth__Fff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetClip__Fff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dcamSetType__F20G3DCAMPROJECTIONTYPE);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetClipVolume__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetClipVolumeV__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetFog__Fffff);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetFog__FPC6G3DFOG);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetFogColor__Fiii);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dApplyFog__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetFogRef__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dIsFogEnable__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B1F38);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dEnableFog__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", g3dCalcVu1Fog__FP9G3DVU1FOGPC6G3DFOG);

INCLUDE_ASM(const s32, "graphics/gra3d", g3dCalcFA__FPC6G3DFOG);

INCLUDE_ASM(const s32, "graphics/gra3d", g3dCalcFB__FPC6G3DFOG);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dIsMonotoneDrawEnable__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dMonotoneDrawEnable__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", _ClearMaterialData__FPv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetValidLightId__FiUii);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B21C8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B2478);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B2530);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetNumEnableLight__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B2750);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B2930);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B2D00);

INCLUDE_ASM(const s32, "graphics/gra3d", g3dSetVu1LightData__FP17GRA3DVU1LIGHTDATAPC13SGDCOORDINATET1);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dVu1TransGTEOP__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", SetVU1Header__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dIsLightTypeEnable__F12G3DLIGHTTYPE);

inline void gra3dEnableLightType__F12G3DLIGHTTYPEi(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetAmbient__FPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetAmbientRef__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetLight__FiPC8G3DLIGHT);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetLightRef__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dLightEnable__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dIsLightEnable__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetLightStatus__FiPC16GRA3DLIGHTSTATUS);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetLightStatusRef__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dApplyLight__Fv);

inline void gra3dDrawPrimitive__FPCvi(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", g3dGetVu1MaterialCache__F12G3DLIGHTTYPEi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B3C68);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCalcVu1MaterialDataDirectional__FP32GRA3DVU1MATERIALDATA_DIRECTIONAL);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCalcVu1MaterialDataPoint__FP26GRA3DVU1MATERIALDATA_POINT);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCalcVu1MaterialDataSpot__FP25GRA3DVU1MATERIALDATA_SPOT);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetMaterial__FP11SGDMATERIAL);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetTransform__F23GRA3DTRANSFORMSTATETYPEPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetTransformRef__F23GRA3DTRANSFORMSTATETYPE);

INCLUDE_ASM(const s32, "graphics/gra3d", _gra3dEnableTextureForce__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCalcVertexColor__FPfPCfN21);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4718);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4790);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetGsRegister__Flli);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetGsRegisters__FPC13_sceGifPackAdii);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetGsRegisterRef__Fl);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4918);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4978);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dUseScratchpad__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dIsUsingScratchpad__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4C08);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dInit__FPvi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dDraw__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4D58);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4D60);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4D78);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4D98);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4DB8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4DE8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4E20);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B4E58);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbApplyMatrix__FPA3_fPA3_CfT1);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbIsInFogArea__FPA3_CfPC6G3DFOGT0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbIsInViewvolume__FPA3_fPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbCalcCenter__FPfPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbCalcCenterBase__FPfPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbCalcRadiusXZ__FPA3_f);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbCalcInnerEllipse__FPfPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbCopy__FPA3_fPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbApplyFromBounds__FPA3_fPCfT1PA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dbbFromBounds__FPA3_fPCfT1);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B57F8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B5828);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B5860);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B5898);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B58D0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B59D0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B59F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B5A20);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B5A58);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B5A90);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B5AC8);

INCLUDE_ASM(const s32, "graphics/gra3d", _PrintLMatrix__FPA3_CfPCc);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgDrawLine__FPCfT0Ui);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgDrawPoint__FPCfUi);

inline void gra3ddbgVerifyVu1MemAddress__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgDrawSphere__FPCffUiT0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgDrawRangedCone__FPCfT0ffUi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgDrawSprite__FPC10G3DFREGIONfUiPC9sceGsTex0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgDrawBB__FPA3_CfUi);

inline void gra3ddbgDrawProc__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgVerifyVifCodex4__FPC9tVIF_CODE);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3ddbgNormalizeLightData__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATA);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetVif1Code_CallMicroSubroutine2__FPvPCUi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetVif1Code_Unpack__FPiiii);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dDmaLoadVu1MicroProgram__FPCUii);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCallMicroSubroutine1__FPCUi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCallMicroSubroutine2__FPCUi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCallMicroSubroutine3__FPCUi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCallMicroSubroutine4__FPCUi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B69B8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B69E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B6A20);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B6A58);

INCLUDE_ASM(const s32, "graphics/gra3d", _DrawShadowTexture__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCalcShadowLight__FP8G3DLIGHTPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dPrelightScene__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dPrelight__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dDrawSGDShadow__FP13SGDFILEHEADERP13SGDCOORDINATEPC8G3DLIGHTPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetObjectIdDrawNoShadow__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dDrawSGDShadowEveryObject__FP13SGDFILEHEADERPC8G3DLIGHT);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGenerateLightDataToChar__FP14GRA3DLIGHTDATAPC14GRA3DLIGHTDATAPC35GRA3DEMULATIONLIGHTDATACREATIONDATA);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7408);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dDrawSGDShadowCharacter__FP8ANI_CTRLP13SGDCOORDINATEPA3_CfPC35GRA3DEMULATIONLIGHTDATACREATIONDATA);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dStartSpecialLight__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dEndSpecialLight__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dUpdateSpecialLight__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dIsSpecialLightActive__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetProjectorSpot__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetProjectorSpotId__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7878);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B78E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7908);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7938);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7970);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B79A8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B79E0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B79E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7A50);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7A80);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7C18);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B7FE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B8198);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B82A0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B84C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B8798);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B87B8);

INCLUDE_ASM(const s32, "graphics/gra3d", _SetVUVNPRIM__FPC17SGDPROCUNITHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetVUVNPRIM__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B88C8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B8B48);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B8C40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B8D50);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B8DE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B8F80);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B9008);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B9108);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B94E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B9590);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B97E0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdGetCoordinate__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdSetCoordinate__FPC13SGDCOORDINATEi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B9A08);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B9B38);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdSetupVu1__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", BoundingBoxCalcP__FP17SGDPROCUNITHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001B9E90);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dCalcVRAMPageSize__FUi);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetPREVIOUSTRI2PRIM__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _SetPREVIOUSTRI2PRIM__FP17SGDPROCUNITHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BA058);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdDrawPresetDataObject__FP17SGDPROCUNITHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BA1C0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdGetNumBlock__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetCoordCache__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _SetCoordCache__FRC10CoordCache);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetGlobalVertexBuffer__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetGlobalNormalBuffer__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetGlobalBufferSize__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BA418);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdInit__FPC20GRA3DSGDCREATIONDATA);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdSetData__FP13SGDFILEHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dsgdGetData__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _GetEdgeCheck__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", _SetEdgeCheck__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SgSortPreProcess__FPUi);

INCLUDE_ASM(const s32, "graphics/gra3d", _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BAE50);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BAED0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BAF58);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BB020);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BB068);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dChangeST__FP13SGDFILEHEADERff);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BB2C8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BB4C8);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dSetVertexColorPreset__FP13SGDFILEHEADERiPf);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BB6E0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BB7B0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BB970);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBA78);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBAA8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBAE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBB18);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBB50);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBB90);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBD40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBD48);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBD50);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBEA0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBF00);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBFD0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBFD8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBFE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBFE8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BBFF0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BC050);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdRemap__FP13SGDFILEHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdResetMaterialCache__FP13SGDFILEHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdCalcBoneCoordinate__FP13SGDCOORDINATEi);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdCalcCoordinate__FP13SGDFILEHEADERPA3_Cf);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdCalcCoordinateMatrix__FP13SGDCOORDINATE);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdVerifyLightData__FP14GRA3DLIGHTDATAPC18ZERO2LIGHTDATAFILE);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdGetLocalWorldMatrix__FPCvPA3_fi);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdClearCoordCalcFlgParents__FPvi);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdClearCoordCalcFlgAll__FPv);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdClearCoordCalcFlg__FPvi);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdGetProcUnit__FPC17SGDPROCUNITHEADERii);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdGetBoundingBox__FP13SGDFILEHEADERPA3_f);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdRemapInverse__FP13SGDFILEHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", sgdEnableOptimizeTexture__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD640);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD670);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD6A8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD6E0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD718);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD738);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD748);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD768);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD828);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD860);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BD9F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BDCE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BDD40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BDD60);

INCLUDE_ASM(const s32, "graphics/gra3d", AssignShadowPrim__FP17SGDPROCUNITHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BE340);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BE588);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BE708);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BE908);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BEA90);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BEBD8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BEC38);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BEDB8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BEDF0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BEE68);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BF0B0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowInit__FPC23GRA3DSHADOWCREATIONDATA);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowAddProjectModel__FP13SGDFILEHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowSetSourceModel__FPC13SGDFILEHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowSetAssignGroup__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowGetAssignGroup__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowClearProjectModel__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BF708);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BF8E0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowSetBoundingBox__FPA3_CfT0);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowSetLight__FPC8G3DLIGHT);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowGetTarget__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dshadowDrawSGD__FP13SGDFILEHEADERP13SGDCOORDINATEi);

INCLUDE_ASM(const s32, "graphics/gra3d", DispShadowSprite__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001BFF90);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0010);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0030);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0050);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0080);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C00B8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C00F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0128);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0218);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGetTRI2SizeData__FP12TRI2SIZEDATAPC12TRI2SIZEDATAPC17SGDTRI2FILEHEADER);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dLoadTRI2FileToVRAM__FiPC17SGDTRI2FILEHEADERi);

INCLUDE_ASM(const s32, "graphics/gra3d", gra3dGenerateTRI2FileFromVRAM__FP17SGDTRI2FILEHEADERPC12TRI2SIZEDATA);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0730);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0760);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0798);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C07D0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0808);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0838);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C0870);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C08A8);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawHitCircle__FPffiUcUcf);

INCLUDE_ASM(const s32, "graphics/gra3d", SetLine2DPacket__FffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetLine2D__FffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawHitCircle2D__FPffiUcUcf);

INCLUDE_ASM(const s32, "graphics/gra3d", Draw3DSquare__FPfN30UcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawCrossLineA__FPCfUc);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawCrossLine__FPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C1C80);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawLine__FPCfUcUcUcUcT0UcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawLineTestOff__FPfUcUcUcUcT0UcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawCrossLineLast__FPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawCrossLineLastReal__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSquareS__FiffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSquare__FiffffffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSquare2s__FiffffUcUcUcUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSquareZ__Fiffffi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSquareSN__FiffffUcUcUcUc);

inline void SetSquareN__FiffffffffUcUcUcUc(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", SetTriangle__FiffffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetTriangleZ__FifffffffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetLine__FiffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetLine2__FiffffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetLine2PC__FiffUcUcUcffUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawPoint__FPfi);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawPoint2__FPCfUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawSphere__FffffUcUcUcUcPCf);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawTube__FPfT0fUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", CaptureScreen__FUi);

INCLUDE_ASM(const s32, "graphics/gra3d", DrawScreen__FUiUiUcUcUcUc);

INCLUDE_ASM(const s32, "graphics/gra3d", MakePacket3D__FPA3_fiiiiiffffG9sceGsTex0i);

INCLUDE_ASM(const s32, "graphics/gra3d", MakeBillBoardPacket__FPfffiiiiffffG9sceGsTex0i);

INCLUDE_ASM(const s32, "graphics/gra3d", heapCtrlReset);

INCLUDE_ASM(const s32, "graphics/gra3d", heapCtrlInit);

INCLUDE_ASM(const s32, "graphics/gra3d", heapCtrlMalloc);

INCLUDE_ASM(const s32, "graphics/gra3d", heapCtrlFree);

INCLUDE_ASM(const s32, "graphics/gra3d", heapCtrlMemSize);

INCLUDE_ASM(const s32, "graphics/gra3d", heapCtrlQueryMaxOneSize);

INCLUDE_ASM(const s32, "graphics/gra3d", SAFE_MALLOC);

INCLUDE_ASM(const s32, "graphics/gra3d", heapCtrlDrawMemory);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C4E38);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C4E68);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C4EA0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C4ED8);

INCLUDE_ASM(const s32, "graphics/gra3d", HinaPuzzleExeInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", HinaPuzzleCrossDispInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C4F38);

INCLUDE_ASM(const s32, "graphics/gra3d", HinaPuzzleMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5148);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5178);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5198);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C51F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5748);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5808);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C58A0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5938);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5A10);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5B48);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5B98);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5BE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5C08);

INCLUDE_ASM(const s32, "graphics/gra3d", HinaPuzzleDispMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5D28);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5E78);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5EA0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5EC0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5EE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5F00);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C5FC0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C60C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6118);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6340);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6398);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C65E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6728);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6780);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C69D8);

INCLUDE_ASM(const s32, "graphics/gra3d", HinaPuzzleNumberDisp__FiiffUciUc);

INCLUDE_ASM(const s32, "graphics/gra3d", HinaPuzzleNumberDisp_One__FiffUci);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6D60);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6DF8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6E90);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C6F98);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C7098);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C7110);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C7188);

INCLUDE_ASM(const s32, "graphics/gra3d", HinaPuzzleCrossScreenDisp__FiiUc);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C72B0);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBaseIsInTriXZ__FPCfN30);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBasePointLineXZ__FPfN20);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBaseLineIntersect__FPCfN30);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBaseLineStraddle__FPCfN30);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBaseLineSide__FPCfN20);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBaseLineIntersect2__FPCfN30);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBaseIsLineHitFace__FPfPCfN41);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBaseIsNearSegTri__FPCfN40);

INCLUDE_ASM(const s32, "graphics/gra3d", HcBasePointRectangle__FPfN30PA3_ff);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C8158);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C8218);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C8248);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C8280);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C82B8);

INCLUDE_ASM(const s32, "graphics/gra3d", SyncHpBar__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", Draw__6CHpBariii);

INCLUDE_ASM(const s32, "graphics/gra3d", Work__6CHpBar);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C85C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C85F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C8628);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001C8660);

INCLUDE_ASM(const s32, "graphics/gra3d", Init__10INGAME_WRK);

INCLUDE_ASM(const s32, "graphics/gra3d", MenuLock__10INGAME_WRK);

INCLUDE_ASM(const s32, "graphics/gra3d", MenuUnlock__10INGAME_WRK);

INCLUDE_ASM(const s32, "graphics/gra3d", MenuIsLocked__10INGAME_WRK);

INCLUDE_ASM(const s32, "graphics/gra3d", PauseLock__10INGAME_WRK);

INCLUDE_ASM(const s32, "graphics/gra3d", PauseUnlock__10INGAME_WRK);

INCLUDE_ASM(const s32, "graphics/gra3d", PauseIsLocked__10INGAME_WRK);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameSceneReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameEventMsgDispReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameEventFileDispReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SendIngameGameOver__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SendIngameGameOverPre__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SendIngameEndingNormal__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SendIngameEndingHard__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameDamageMode__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameDoorMode__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SendIngameEventLoadEndFlg__Fi);

inline void SetIngameEventModeFlg__Fi(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameEffectModeTime__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameMenuMode__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameMapMode__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngamePauseMode__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameDbgMenu__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameEneDead__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngamePhoto__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameMovieRoomMenu__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameMission__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", CheckIngameMission__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", ResetOutReqFlg__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameDecideNextPhase__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_NowLoading__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", pre_Story_NowLoading__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", after_Story_NowLoading__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_NowLoading__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Load_Mission__Fv);

inline void end_Story_Load_Mission__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Load_Mission__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Load_Mission_Save__Fv);

inline void end_Story_Load_Mission_Save__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Load_Mission_Save__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Load_Mission_Event__Fv);

inline void end_Story_Load_Mission_Event__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Load_Mission_Event__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Main__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Main__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", pre_Story_Main__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", after_Story_Main__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameCameraMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameDrawSub__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Normal__Fv);

inline void end_Story_Normal__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Normal__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Game_Over_Pre__Fv);

inline void end_Story_Game_Over_Pre__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Game_Over_Pre__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Damage__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Damage__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Damage__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Door_Open__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Door_Open__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Door_Open__F11GPHASE_ENUM);

inline void init_Story_Ene_Dead__Fv(void)
{
}

inline void end_Story_Ene_Dead__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Ene_Dead__F11GPHASE_ENUM);

inline void init_Story_Debug__Fv(void)
{
}

inline void end_Story_Debug__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Debug__F11GPHASE_ENUM);

inline void init_Story_Debug_Cam__Fv(void)
{
}

inline void end_Story_Debug_Cam__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Debug_Cam__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Pause__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Pause__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Pause__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameLoopSEPause__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameLoopSERestart__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Menu__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Menu__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Menu__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Map__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Map__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Map__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Mission_St__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Mission_St__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Mission_St__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Mission_Result__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Mission_Result__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Mission_Result__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Pause_Mission__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Pause_Mission__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Pause_Mission__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Game_Over__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", pre_Story_Game_Over__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", after_Story_Game_Over__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Game_Over__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Effect__Fv);

inline void end_Story_Effect__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Effect__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Puzzle__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", pre_Story_Puzzle__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", after_Story_Puzzle__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Puzzle__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_SavePoint__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", pre_Story_SavePoint__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", after_Story_SavePoint__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_SavePoint__Fv);

inline void init_Story_Movie_Room__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Movie_Room__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", init_Story_Movie_Room_Sel__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", end_Story_Movie_Room_Sel__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IngamePlyrNoActJob__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_Story_Movie_Room_Sel__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CA480);

INCLUDE_ASM(const s32, "graphics/gra3d", InitCostume__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IngameWrkInit__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CA7F8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CA828);

INCLUDE_ASM(const s32, "graphics/gra3d", SetIngameListnerInfo__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSave_IngameWrk__FP12MC_SAVE_DATA);

INCLUDE_ASM(const s32, "graphics/gra3d", fene_entrySetSave__FP12MC_SAVE_DATA);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CA978);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CAA18);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CAA38);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CAA68);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CAAA0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CAAD8);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectParticleEndPosFinderGet__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectParticleEndPosNoFinderGet__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectParticleEndPosCalcFinder__FPf);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectParticleEndPosCalcNoFinder__FPf);

INCLUDE_ASM(const s32, "graphics/gra3d", CalcParticleNumFromDamage__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectEneDmgReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectEneParticleDmgReq__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectEneDmgReqZero__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncZeroReq__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncSlowReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncKokuReq__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncParalyzeReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncViewReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncMetsuReq__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncRenReq__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncTsuiReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncFuuReq__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB3D8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB4F8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB5C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB680);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB740);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB800);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB8C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CB980);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CBA40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CBB00);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectSubFuncPDeformClear__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CBC48);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CBEA8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CBEB8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CBF10);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectZeroCamFreqReq__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectIsEndParticleSuck__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectRenzFlareDispFlgSet__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectStoryMainScreenEffectReq__FP23SCREEN_EFFECT_PARAMETER);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectStoryMainContrastTypeGet__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectStoryMainContrastColorGet__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectStoryMainContrastAlphaGet__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectDustReq__FP8ANI_CTRLiPf);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectPlayerDustReq__FP8ANI_CTRLi);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectButterflyReq__FPf);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectButterflyAllCut__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectLightComeInModelDraw__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectLightComeInModelDrawSub__FPvPA3_f);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectTourouFreaModelDraw__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectTourouFreaModelDrawSub__FPvPA3_f);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectTourouBaseModelDraw__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectTourouBaseModelDrawSub__FPvPA3_f);

INCLUDE_ASM(const s32, "graphics/gra3d", IgEffectEffectEndParticleReq__FPfi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CC9E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CC9F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CCA10);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CCA40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CCA78);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CCAB0);

INCLUDE_ASM(const s32, "graphics/gra3d", AllPlyrItemInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", PlyrItemInit__FP9PLYR_ITEM);

INCLUDE_ASM(const s32, "graphics/gra3d", AllPlyrEventItemLost__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemGet__FiUc);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemGetPossible__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemUse__FiUc);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemUsePossible__FiUc);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemLost__FiUc);

INCLUDE_ASM(const s32, "graphics/gra3d", GetPlyrItemHaveNum__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", GetHaveItemTypeNum__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", GetItemType__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", GetItemDatAddr__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemPlyrHPRecover__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemPlyrSPRecover__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemFilmEquip__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSave_PlyrItem__FP12MC_SAVE_DATA);

INCLUDE_ASM(const s32, "graphics/gra3d", DebugAllItemGet__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", ItemDbgPlyrItemPrint__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD5E0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD5E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD608);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD638);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD670);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD6A8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD6E0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD710);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD748);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD780);

inline void ItemDbg_PlyrItemLink__Fv(void)
{
}

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD7C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD7F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD828);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD860);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD898);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD8D0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD920);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CD988);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPuzzleSetFadeCmn__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPuzzleSetFade__Fiii);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPuzzleSetFade2__Fiiii);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPuzzleSetFadeNextMode__Fii);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPuzzleFadeProc__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPuzzleExeInit__Fi);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CDC18);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CDC78);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CDE80);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CDF18);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlDrawCancelWindow__FUc);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CE038);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CE080);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlProc__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlAnim__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlClear__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlDrawMsg__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlCancel__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlRelease__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlTerm__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPzlTerm2__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", KaiPuzzleMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEA98);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEAC8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEB00);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEB38);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzle2ExeInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEB98);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEC68);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzle2Main__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEDE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CEE60);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF0F8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF118);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF148);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF210);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF330);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF380);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF558);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF578);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF6B0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF6D8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF758);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF848);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzle2DispMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CF9A8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CFAC8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CFB70);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CFC48);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CFD88);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CFE30);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CFED8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001CFF80);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0040);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0100);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0170);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0278);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0418);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0478);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0618);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0688);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0788);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D07F8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D08C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D09B8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0A10);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0AB8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0B58);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0DA8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0EF0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0F40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D0FB8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D10B8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1130);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D11A8);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzle2CrossScreenDisp__FiiUc);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1320);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D13A0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1468);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1488);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D14B8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D14F0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1528);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzleExeInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1588);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzleMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1708);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1788);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1A20);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1A40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1A70);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1B38);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1C58);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1CA8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1E80);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1EA0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D1FD8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2000);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2080);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzleDispMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D21A8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D22C8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2370);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2448);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2588);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2630);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D26D8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2780);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2850);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D28C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D29C8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2B68);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2BC8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2D68);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2DD8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2ED8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D2F48);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3010);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3108);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3160);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3208);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D32A8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D34F8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3640);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3690);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3708);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3808);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3880);

INCLUDE_ASM(const s32, "graphics/gra3d", KazaPuzzleCrossScreenDisp__FiiUc);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D39A8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3A28);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3AF0);

INCLUDE_ASM(const s32, "graphics/gra3d", SetDefaultKeyType__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", SetKeyType__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3CB0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3CE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3D18);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3D50);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3D88);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3DC8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3EC8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D3F10);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4018);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D40A0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D41D8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4250);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4270);

INCLUDE_ASM(const s32, "graphics/gra3d", init_LangData_Check__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_LangData_Check__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", end_LangData_Check__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D43C8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D43F8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4430);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4468);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D44A0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D44D0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4520);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D46E0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4818);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D48A0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4908);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4A00);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4B00);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadLangSetUp__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LangData_LoadReq__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LangData_LoadWait__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", Set_McSaveLanguage__FUc);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSave_Language__FP12MC_SAVE_DATA);

INCLUDE_ASM(const s32, "graphics/gra3d", init_LangSel_Main__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", one_LangSel_Main__F11GPHASE_ENUM);

INCLUDE_ASM(const s32, "graphics/gra3d", end_LangSel_Main__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4D78);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4DA8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4DE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4E18);

INCLUDE_ASM(const s32, "graphics/gra3d", PlyrLevelGemInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", GetLevelGem__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LostLevelGem__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", GetPlyrLevelGemNum__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", SetSave_PlyrLevelGem__FP12MC_SAVE_DATA);

INCLUDE_ASM(const s32, "graphics/gra3d", DebugSetLevelGemMaxNum__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4F10);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4F40);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4F78);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D4FB0);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadGameInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D50B0);

INCLUDE_ASM(const s32, "graphics/gra3d", GetLoadGameTexMem__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadGameDataLoadReq__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadGameDataLoadWait__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadGameMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D52E0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5330);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5418);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D54B8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5658);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5860);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5960);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5988);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5BC8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5BF0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5D30);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5DD0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5F28);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D5FD8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6128);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6158);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6230);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D62C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6308);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D63D8);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadGameEnd__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", ReleaseLoadGameTexMem__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadGameDispMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6710);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D69C0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D69E8);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6A08);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6A38);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6A70);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6AA8);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadingInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", GetLoadingTexMem__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadingTexLoadReq__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadingTexLoadWait__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadingCtrlInit__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadingCtrlMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6C88);

INCLUDE_ASM(const s32, "graphics/gra3d", LoadingDispMain__Fv);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6D28);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6D60);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D6DE0);

INCLUDE_ASM(const s32, "graphics/gra3d", func_001D7110);

INCLUDE_ASM(const s32, "graphics/gra3d", ReleaseLoadingTexMem__Fv);
