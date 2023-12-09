// STATUS: NOT STARTED

#include "snd_3d.h"

struct _SND_3D_WRK {
	sceVu0FVECTOR pos;
	sceVu0FVECTOR velocity;
	int status;
	int voll;
	int volr;
	int pitch;
};

typedef _SND_3D_WRK SND_3D_WRK;

struct _SND_3D_LISTENER {
	sceVu0FVECTOR pos;
	sceVu0FVECTOR velocity;
	sceVu0FVECTOR dir;
	sceVu0FVECTOR top;
	int defer;
};

typedef _SND_3D_LISTENER SND_3D_LISTENER;

static SND_3D_ENV snd_3d_env = {
	/* .front = */ 0.799999952f,
	/* .side = */ 0.099999994f,
	/* .back = */ 0.7f,
	/* .vol_min = */ 0.299999982f,
	/* .farthest_dist = */ 30.f,
	/* .nearest_dist = */ 2.f
};

static char listner_set = 0;
static float farthest_dist_calc;
static float nearest_dist_calc;
static float sound_speed;
static float dist_unit;
static SND_3D_WRK snd_3d_wrk[30];
static SND_3D_LISTENER snd_3d_listner;

static void CheckEnvValue() {
  if ((snd_3d_env.front < 0.0) || (1.0 < snd_3d_env.front)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Snd3DEnv.front Is between 0.f and 1.f");
  }
  if ((snd_3d_env.side < 0.0) || (1.0 < snd_3d_env.side)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Snd3DEnv.side Is between 0.f and 1.f");
  }
  if ((snd_3d_env.back < 0.0) || (1.0 < snd_3d_env.back)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Snd3DEnv.back Is between 0.f and 1.f");
  }
  if ((snd_3d_env.vol_min < 0.0) || (1.0 < snd_3d_env.vol_min)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Snd3DEnv.vol_min Is between 0.f and 1.f");
  }
  if (snd_3d_env.farthest_dist <= snd_3d_env.nearest_dist) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Snd3DEnv.farthest_dist have to be longer nearest_dist");
    return;
  }
  return;
}

void Snd3DInit() {
	int i;
	
  int *piVar1;
  int iVar2;
  
  snd3DSet1Meter(1.0);
  iVar2 = 0x1d;
  piVar1 = &snd_3d_wrk[0x1d].status;
  do {
    iVar2 = iVar2 + -1;
    *piVar1 = 0;
    piVar1 = piVar1 + -0xc;
  } while (-1 < iVar2);
  CheckEnvValue();
  return;
}

void snd3DSet1Meter(float unit) {
  dist_unit = unit;
  sound_speed = unit * 340.0;
  nearest_dist_calc = snd_3d_env.nearest_dist * unit;
  farthest_dist_calc = snd_3d_env.farthest_dist * unit;
  return;
}

void snd3DSetEnvironment(SND_3D_ENV *env) {
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong in_v1;
  ulong in_a1;
  ulong in_a2;
  ulong uVar4;
  
  puVar1 = (undefined *)((int)&env->side + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)env & 7;
  snd_3d_env._0_8_ =
       (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
       in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
       *(ulong *)((int)env - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&env->vol_min + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&env->back & 7;
  snd_3d_env._8_8_ =
       (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
       in_a1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
       *(ulong *)((int)&env->back - uVar3) >> uVar3 * 8;
  puVar1 = (undefined *)((int)&env->nearest_dist + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)&env->farthest_dist & 7;
  uVar4 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_a2 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)&env->farthest_dist - uVar3) >> uVar3 * 8;
  snd_3d_env.nearest_dist = (float)(uVar4 >> 0x20);
  snd_3d_env.farthest_dist = (float)uVar4;
  nearest_dist_calc = snd_3d_env.nearest_dist * dist_unit;
  farthest_dist_calc = snd_3d_env.farthest_dist * dist_unit;
  snd_3d_env._16_8_ = uVar4;
  CheckEnvValue();
  return;
}

void snd3DSetListner(SND_3D_SET *set, float *top) {
	float inner;
	
  sceVu0CopyVector(0x4c0690,set->pos);
  sceVu0CopyVector(0x4c06b0,set->dir);
  sceVu0CopyVector(0x4c06c0,top);
  snd_3d_listner.defer = 1;
  if (set->vel == (float (*) [4])0x0) {
    snd_3d_listner.velocity[0] = 0.0;
    snd_3d_listner.velocity[3] = 0.0;
    snd_3d_listner.velocity[2] = 0.0;
    snd_3d_listner.velocity[1] = 0.0;
  }
  else {
    sceVu0CopyVector(0x4c06a0,set->vel);
  }
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(0x4c06b0,0x4c06b0);
}

void Snd3DFreeWrk(void *hndl) {
  *(uint *)((int)hndl + 0x20) = *(uint *)((int)hndl + 0x20) & 0xfffffffe;
  return;
}

void* Snd3DCreateWrk(SND_3D_SET *s3s) {
	int i;
	
  int iVar1;
  _SND_3D_WRK *s3d;
  
  iVar1 = 0;
  s3d = snd_3d_wrk;
  do {
    if ((s3d->status & 1U) == 0) {
      s3d->status = s3d->status | 1;
      snd3DSetSET(s3d,s3s);
      Snd3DCalc(s3d);
      return s3d;
    }
    iVar1 = iVar1 + 1;
    s3d = s3d + 1;
  } while (iVar1 < 0x1e);
  return (void *)0x0;
}

void snd3DSetSET(void *hndl, SND_3D_SET *set) {
  uint uVar1;
  
  sceVu0CopyVector(hndl,set->pos);
  if (set->vel == (float (*) [4])0x0) {
    uVar1 = *(uint *)((int)hndl + 0x20) & 0xfffffffb;
  }
  else {
    sceVu0CopyVector((int)hndl + 0x10,set->vel);
    uVar1 = *(uint *)((int)hndl + 0x20) | 4;
  }
  *(uint *)((int)hndl + 0x20) = uVar1;
  *(uint *)((int)hndl + 0x20) = *(uint *)((int)hndl + 0x20) | 2;
  return;
}

void Snd3DSetPosition(void *hndl, float *pos) {
  sceVu0CopyVector(hndl,pos);
  *(uint *)((int)hndl + 0x20) = *(uint *)((int)hndl + 0x20) | 2;
  return;
}

void Snd3DGetVal(void *hndl, VOLSET *volset, short int *pitch) {
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)((int)hndl + 0x2c);
  uVar2 = *(ushort *)((int)hndl + 0x28);
  volset->l = *(ushort *)((int)hndl + 0x24);
  volset->r = uVar2;
  *pitch = uVar1;
  return;
}

float GetLenDirection(float *velocity, float *unit_dir) {
	float vel_len;
	sceVu0FVECTOR listner_vel_unit;
	
  float listner_vel_unit [4];
  
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(velocity,velocity);
}

static void Snd3DCalc(SND_3D_WRK *s3d) {
	sceVu0FVECTOR unit;
	float dist;
	float vol;
	float fVolRate;
	float temp_dist;
	sceVu0FVECTOR rightvec;
	int right;
	float cos;
	float revcos;
	float temp;
	
  float unit [4];
  float rightvec [4];
  
  if (listner_set == '\0') {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("3D Sound Cannot Do Without Listner Setting!");
  }
  sceVu0SubVector(unit,s3d,0x4c0690);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(unit,unit);
}

void Snd3DMain() {
	int i;
	
  ulong uVar1;
  _SND_3D_WRK *p_Var2;
  int iVar3;
  
  if (snd_3d_listner.defer == 0) {
    p_Var2 = snd_3d_wrk;
    iVar3 = 0x1d;
    do {
      uVar1._0_4_ = p_Var2->status;
      uVar1._4_4_ = p_Var2->voll;
      if ((uVar1 & 3) == 3) {
        Snd3DCalc(p_Var2);
      }
      iVar3 = iVar3 + -1;
      p_Var2 = p_Var2 + 1;
    } while (-1 < iVar3);
  }
  else {
    iVar3 = 0x1d;
    p_Var2 = snd_3d_wrk;
    do {
      if ((p_Var2->status & 1U) != 0) {
        Snd3DCalc(p_Var2);
      }
      iVar3 = iVar3 + -1;
      p_Var2 = p_Var2 + 1;
    } while (-1 < iVar3);
    snd_3d_listner.defer = 0;
  }
  return;
}
