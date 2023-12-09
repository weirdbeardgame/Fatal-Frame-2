// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DTRI2_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DTRI2_H

struct SGDTRI2FILEHEADER {
	unsigned int uiVif1Code_NOP0;
	unsigned int uiVif1Code_NOP1;
	unsigned int uiVif1Code_FLUSH;
	unsigned int uiVif1Code_DIRECT;
	sceGsLoadImage gsli;
	
	SGDTRI2FILEHEADER& operator=();
	SGDTRI2FILEHEADER();
	SGDTRI2FILEHEADER();
	unsigned int GetTRI2Size();
};

struct TRI2SIZEDATA {
	unsigned int uiMaxAddress;
	unsigned int uiMinAddress;
	unsigned int uiVRAMTexSize;
	unsigned int uiMaxTbp;
	unsigned int uiPageSize;
};


void gra3dGetTRI2SizeData(TRI2SIZEDATA *pSD, TRI2SIZEDATA *pSDPrev, SGDTRI2FILEHEADER *pTRI2Head);
void gra3dLoadTRI2FileToVRAM(int iNumTexture, SGDTRI2FILEHEADER *pTRI2HeadTop, int iDmaChan);
int gra3dGenerateTRI2FileFromVRAM(SGDTRI2FILEHEADER *pTRI2HeadTop, TRI2SIZEDATA *pSD);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DTRI2_H
