// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_3D_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_3D_H

struct _VOLSET {
	short int l;
	short int r;
};

typedef _VOLSET VOLSET;

void Snd3DInit();
void snd3DSet1Meter(float unit);
void snd3DSetEnvironment(SND_3D_ENV *env);
void snd3DSetListner(SND_3D_SET *set, float *top);
void Snd3DFreeWrk(void *hndl);
void* Snd3DCreateWrk(SND_3D_SET *s3s);
void snd3DSetSET(void *hndl, SND_3D_SET *set);
void Snd3DSetPosition(void *hndl, float *pos);
void Snd3DGetVal(void *hndl, VOLSET *volset, short int *pitch);
float GetLenDirection(float *velocity, float *unit_dir);
void Snd3DMain();

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_3D_H
