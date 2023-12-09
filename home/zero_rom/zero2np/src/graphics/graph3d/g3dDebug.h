// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DDEBUG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DDEBUG_H

typedef struct {
	unsigned int immediate : 16;
	unsigned int num : 8;
	unsigned int CMD : 8;
} tVIF_CODE;

struct _G3DLINEINFO {
	char *pFileName;
	int iLine;
	char *pFunctionName;
	char *pExpression;
};


void g3ddbgPrintf(char *pStr);
int g3ddbgDumpMemoryCompare(void *p0, void *p1, int iSize);
void g3ddbgAssert(bool b, char *pStr);
void g3ddbgWarning(bool b, char *pStr);
void _SetLineInfo(char *pFileName, int iLine, char *pFunctionName, char *pExpression);
_G3DLINEINFO& _GetLineInfo();
void g3ddbgWaitVU1();
void g3ddbgDumpVu1MicroMemory();
void DispVUMemory();
void _PrintVector(float *fv, char *pValName);
void _PrintMatrix(float *fmat[4], char *pValName);
void g3ddbgLoadVu0FloatingPointRegisters(float *av[4]);
void g3ddbgStoreVu0FloatingPointRegisters(float *av[4]);
void g3ddbgDumpVu0FloatingPointRegisters(float *av[4]);
void g3ddbgVerifyVu1MemAddress();
void g3ddbgVerifyGsRegisterAddress();
void g3ddbgVerifyVifCode(tVIF_CODE *pVC);
void g3ddbgVerifyDmaPacket(void *pDmaPacket);
void g3ddbgVerifyDmaBuffer(void *pBuffer);
void g3ddbgDumpVif1Stat();
void g3ddbgDumpVif1Code();
void g3ddbgInfinitePrintConsole(int b);
void g3ddbgPrintConsole(char *pStr);
void _strcatf(char *strDest, char *pStr);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DDEBUG_H
