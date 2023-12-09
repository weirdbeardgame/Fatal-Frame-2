// STATUS: NOT STARTED

#include "spu_voice.h"

int core_voices[2] = {
	/* [0] = */ 0,
	/* [1] = */ 0
};

void InitSPUVoice() {
  core_voices[0] = 0;
  core_voices[1] = 0;
  return;
}

void InitSPUVoiceCore(int core) {
  core_voices[core] = 0;
  return;
}

int GetSPUVoiceCore(int core) {
	int i;
	
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (uint *)(core_voices + core);
  uVar1 = *puVar2;
  while( true ) {
    if (((int)uVar1 >> (uVar3 & 0x1f) & 1U) == 0) {
      *puVar2 = uVar1 | 1 << (uVar3 & 0x1f);
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    if (0x17 < (int)uVar3) break;
    uVar1 = *puVar2;
  }
  return -1;
}

void FreeSPUVoiceCore(int core, int voice_no) {
  if (voice_no == -1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal(s_NoVoice_003f49c8);
    return;
  }
  core_voices[core] = core_voices[core] & ~(1 << (voice_no & 0x1fU));
  return;
}
