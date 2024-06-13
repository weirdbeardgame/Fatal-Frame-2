#include "common.h"

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", printClut__FPvi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", ResetClutAlpha__FPvi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", ResetPIXELAlpha__FPUci);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2CheckFileHeaer__FPv);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetPictureHeader__FPvi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2IsClut2__FP18TIM2_PICTUREHEADER);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetMipMapPictureSize__FP18TIM2_PICTUREHEADERiPiT2);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetMipMapHeader__FP18TIM2_PICTUREHEADERPi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetUserSpace__FP18TIM2_PICTUREHEADERPi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetUserData__FP18TIM2_PICTUREHEADERPi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetComment__FP18TIM2_PICTUREHEADER);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetImage__FP18TIM2_PICTUREHEADERi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetClut__FP18TIM2_PICTUREHEADER);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetClutColor__FP18TIM2_PICTUREHEADERii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2SetClutColor__FP18TIM2_PICTUREHEADERiiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetTexel__FP18TIM2_PICTUREHEADERiii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2SetTexel__FP18TIM2_PICTUREHEADERiiiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2GetTextureColor__FP18TIM2_PICTUREHEADERiiii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2LoadPicture2__FP18TIM2_PICTUREHEADERUiUiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2LoadPicture__FP18TIM2_PICTUREHEADERUiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2LoadImage2__FP18TIM2_PICTUREHEADERUiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2LoadImage__FP18TIM2_PICTUREHEADERUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2LoadClut2__FP18TIM2_PICTUREHEADERUiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2LoadClut__FP18TIM2_PICTUREHEADERUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2LoadTexture__FiUiiiiPUI80);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2CalcBufWidth__Fii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", Tim2CalcBufSize__Fiii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", GetTex0RegPK__FUiiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", GetTex0RegTM__FUiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", MakeTim2Direct__FPUiii);

INCLUDE_RODATA("asm/nonmatchings/graphics/graph2d/tim2", D_003E6650);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", MakeClutDirect__FPUiii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", MakeClutDirect_ChrMono__FPUiiiT0);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", PK2SendVram__FUiiii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", PK2SendVramOne__FUiiiii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", MakeTim2SendPacket__FUii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", MakeTim2SendPacket_3Dpkt__FUii);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", MakeTim2SendPacket_Mono__FUiiUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", SetSprFile__FUi);

INCLUDE_ASM("asm/nonmatchings/graphics/graph2d/tim2", SetSprFile2__FUiUi);
