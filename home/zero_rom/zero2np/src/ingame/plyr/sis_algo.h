// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SIS_ALGO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SIS_ALGO_H

struct SISALG_WRK {
	u_char job_no;
	u_char pos_no;
	u_char wait_time;
	float loop[2];
	P_INT comm_add;
	long int comm_add_top;
	long int data_addr;
	u_long stack_b[16];
	u_long *stack_p;
	u_char flag;
};

typedef struct {
	int loop_cnt;
	unsigned char hit;
	long unsigned int ghost_erase_tm;
} SIS_LOCAL_ALG;

extern void (*SisCtrlTbl[20])(/* parameters unknown */);
extern unsigned char ENE_WRK type_info node[8];
extern SIS_LOCAL_ALG sis_lalg;

void SisActSet(u_char alg_no);
void SisAlgCtrl();
void ReqSisAlgo(u_char no);
void SisAlgoMain();
int EneDistCount(float dist);
void CountAlgTime();
void SaEndAct(SISALG_WRK *alg);
void SaLoopSet(SISALG_WRK *alg);
void SaLoopEnd(SISALG_WRK *alg);
void SaJump(SISALG_WRK *alg);
void SaNeckPos(SISALG_WRK *alg);
void SaAnimSet(SISALG_WRK *alg);
void SaAnimEnd(SISALG_WRK *alg);
void SaEneDist(SISALG_WRK *alg);
void SaAlgoChg(SISALG_WRK *alg);
void SaAlgoTrace(SISALG_WRK *alg);
void SaRotEneDir(SISALG_WRK *alg);
void SaObjHit(SISALG_WRK *alg);
void SaEneOutTime(SISALG_WRK *alg);
void SaPlyrDist(SISALG_WRK *alg);
void SaWait(SISALG_WRK *alg);
void SaGetEneNum(SISALG_WRK *alg);
void SaSetDirection(SISALG_WRK *alg);
void SaReqSE(SISALG_WRK *alg);
void SaRndJump(SISALG_WRK *alg);
void SaSetMvsta(SISALG_WRK *alg);
ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
type_info& ENE_WRK type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SIS_ALGO_H
