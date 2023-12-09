// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_CHRSORT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_CHRSORT_H

struct HeaderSection {
	u_int VersionID;
	u_char MAPFLAG;
	u_char kind;
	u_short materials;
	SGDCOORDINATE *coordp;
	SGDMATERIAL *matp;
	u_int *phead;
	u_int blocks;
	u_int **primitives;
};


void ChrSortSetFlg(int flg);
void ChrSortDelFlg(int flg);
void ChrSortEnemCallback();
void ChrSortFlyCallback();
int ChrSortRegistEnem(ENE_WRK *ene);
int ChrSortRegistFly(FLY_WRK *fly);
int ChrSortDeleteEnem(ENE_WRK *ene);
int ChrSortDeleteFly(FLY_WRK *fly);
float*[4][4] ChrSortGetSgdMatrix(HeaderSection *hs);
float*[4][4] ChrSortGetPlayrMatrix();
float*[4][4] ChrSortGetSisMatrix();
int ChrSortRegistSis();
int ChrSortRegistPlayr();
int ChrSortDelete(int id);
void ChrSortInit();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_CHRSORT_H
