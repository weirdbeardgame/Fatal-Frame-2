// STATUS: NOT STARTED

#include "snd_bank.h"

struct _SND_BANK_FILE {
	short int m_Ready;
	short int m_RefCnt;
	int m_FileNo;
	void *m_pAdrs;
	int m_Size;
};

typedef _SND_BANK_FILE SND_BANK_FILE;

struct _SND_BANK {
	unsigned int use : 1;
	void *s3d;
	SND_BANK_FILE *pSndBDFile;
	SND_BANK_FILE *pSndHXDFile;
	int id;
};

typedef _SND_BANK SND_BANK;
static int snd_bank_max;
static SND_BANK *snd_bank;
static SND_BANK_FILE *snd_bd_file;
static SND_BANK_FILE *snd_hxd_file;
static int snd_bank_load_priority;

void SndBankSetLoadPriority(int iNewPriority) {
  snd_bank_load_priority = iNewPriority;
  return;
}

int SndBankGetLoadPriority() {
  return snd_bank_load_priority;
}

int SndBankGetOneWrkSize() {
  return 0x34;
}

void* SndBankInitAll(void *wrk_buffer, int num, int load_priority) {
	int i;
	
  _SND_BANK_FILE *p_Var1;
  _SND_BANK *p_Var2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  snd_bank_max = num;
  snd_bank = (_SND_BANK *)wrk_buffer;
  snd_bank_load_priority = load_priority;
  if (0 < num) {
    do {
                    /* WARNING: Load size is inaccurate */
      *(uint *)((int)wrk_buffer + 0x10) = uVar3;
      uVar3 = uVar3 + 1;
      *(uint *)wrk_buffer = *wrk_buffer & 0xfffffffe;
      *(uint *)((int)wrk_buffer + 8) = 0;
      *(uint *)((int)wrk_buffer + 0xc) = 0;
      wrk_buffer = (void *)((int)wrk_buffer + 0x14);
    } while ((int)uVar3 < num);
  }
  p_Var2 = snd_bank + num;
  iVar5 = num;
  iVar4 = num;
  snd_bd_file = (_SND_BANK_FILE *)p_Var2;
  if (0 < num) {
    do {
      iVar4 = iVar4 + -1;
      p_Var2->pSndBDFile = (_SND_BANK_FILE *)0x0;
      p_Var2->s3d = &_heap_size;
      p_Var2->pSndHXDFile = (_SND_BANK_FILE *)0x0;
      *(undefined2 *)&p_Var2->field_0x2 = 0;
      *(undefined2 *)p_Var2 = 0;
      p_Var2 = (_SND_BANK *)&p_Var2->id;
      iVar5 = snd_bank_max;
    } while (iVar4 != 0);
  }
  p_Var1 = snd_bd_file + num;
  snd_hxd_file = p_Var1;
  if (0 < iVar5) {
    do {
      iVar5 = iVar5 + -1;
      p_Var1->m_pAdrs = (void *)0x0;
      p_Var1->m_FileNo = -1;
      p_Var1->m_Size = 0;
      p_Var1->m_RefCnt = 0;
      p_Var1->m_Ready = 0;
      p_Var1 = p_Var1 + 1;
    } while (iVar5 != 0);
  }
  return snd_hxd_file + num;
}

int SndBankGetFreeBankNum() {
	int i;
	int iCnt;
	
  int iVar1;
  _SND_BANK *p_Var2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = snd_bank_max;
  p_Var2 = snd_bank;
  if (0 < snd_bank_max) {
    do {
      iVar1 = iVar1 + -1;
      if ((*(uint *)p_Var2 & 1) == 0) {
        iVar3 = iVar3 + 1;
      }
      p_Var2 = p_Var2 + 1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

static int GetVacantSndBank() {
	int i;
	
  uint uVar1;
  _SND_BANK *p_Var2;
  int iVar3;
  
  if (snd_bank_max < 1) {
LAB_00273354:
    iVar3 = -1;
  }
  else {
    uVar1 = *(uint *)snd_bank;
    iVar3 = 0;
    p_Var2 = snd_bank;
    while( true ) {
      p_Var2 = p_Var2 + 1;
      if ((uVar1 & 1) == 0) break;
      if (snd_bank_max <= iVar3 + 1) goto LAB_00273354;
      uVar1 = *(uint *)p_Var2;
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

int SndBankNew(int file_no, int header_file_no, int size) {
	int bank_no;
	SND_BANK *p_Sb;
	
  int iVar1;
  int iVar2;
  _SND_BANK *p_Sb;
  
  iVar1 = GetVacantSndBank();
  if (file_no < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FileNo Is Under Zero");
  }
  if (header_file_no < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FileNo Is Under Zero");
  }
  if (iVar1 == -1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndBankNew() There is No Free SndBank Wrk");
    iVar1 = -1;
  }
  else {
    p_Sb = snd_bank + iVar1;
    iVar2 = SndBankFileReqBD(p_Sb,file_no);
    if (iVar2 == 0) {
      iVar1 = -1;
    }
    else {
      iVar2 = SndBankFileReqHXD(p_Sb,header_file_no);
      if (iVar2 == 0) {
        ReleaseSndBDFile(p_Sb->pSndBDFile);
        iVar1 = -1;
      }
      else {
        p_Sb->s3d = (void *)0x0;
        *(uint *)p_Sb = *(uint *)p_Sb | 1;
      }
    }
  }
  return iVar1;
}

int SndBankIsReady(int bank_no) {
  int iVar1;
  
  if (bank_no != -1) {
    if ((-2 < bank_no) && (bank_no < snd_bank_max)) {
      iVar1 = snd_bankIsReady(snd_bank + bank_no);
      return iVar1;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndBankIsReady bank_no is Illegal");
  }
  return 1;
}

void SndBankPrintStatus() {
	int i;
	
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  printf("_____________________\n");
  printf(&DAT_003f4990);
  printf("<<Now SndBank Status>>\n");
  if (0 < snd_bank_max) {
    iVar3 = 0;
    iVar2 = snd_bank_max;
    do {
      puVar1 = (uint *)(&snd_bank->field_0x0 + iVar3);
      iVar3 = iVar3 + 0x14;
      if ((*puVar1 & 1) != 0) {
        GetFileName(*(int *)(puVar1[2] + 4));
        printf("GET_FILE_NAME(snd_bank[i].pSndBDFile->m_FileNo) = %s\n");
        iVar2 = snd_bank_max;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  printf("_____________________\n");
  return;
}

int SndBankGetInfo(int bank_no, int *num, SOUND_INFO **info) {
	SND_BANK *p_Sb;
	
  int iVar1;
  _SOUND_INFO *p_Var2;
  _HXD_HEADER *p_Var3;
  _SND_BANK *p_Sb;
  
  if (bank_no == -1) {
    if (snd_bank_max < 0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("SndBankGetInfo bank_no is Illegal");
      iVar1 = 3;
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    p_Sb = snd_bank + bank_no;
    iVar1 = snd_bankIsReady(p_Sb);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      p_Var2 = snd_bankGet_pSOUND_INFO(p_Sb);
      *info = p_Var2;
      p_Var3 = snd_bankGet_pHxdHeader(p_Sb);
      iVar1 = 4;
      *num = p_Var3->num;
    }
  }
  return iVar1;
}

static void intr_LoadCancelHXDFunc(void *buffer, void *dummy) {
  printf("(int)buffer = 0x%x\n");
  ee_iopFree(buffer);
  return;
}

static void intr_LoadCancelBDFunc(void *buffer, void *dummy) {
  ReleaseSPUMemory(buffer);
  return;
}

static void ReleaseSndHXDFile(SND_BANK_FILE *pSndHXDFile) {
  ushort uVar1;
  void *adrs;
  
  if ((short)pSndHXDFile->m_RefCnt < 2) {
    adrs = pSndHXDFile->m_pAdrs;
    if (adrs == (void *)0x0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("ReleaseSndHXDFile Adrs Is Null");
      adrs = pSndHXDFile->m_pAdrs;
      uVar1 = pSndHXDFile->m_Ready;
    }
    else {
      uVar1 = pSndHXDFile->m_Ready;
    }
    if (uVar1 == 0) {
      FileLoadCancel2(pSndHXDFile->m_FileNo,adrs,intr_LoadCancelHXDFunc,(void *)0x0);
    }
    else {
      printf("load end Free %x\n");
      ee_iopFree(pSndHXDFile->m_pAdrs);
    }
    pSndHXDFile->m_pAdrs = (void *)0x0;
    pSndHXDFile->m_RefCnt = 0;
    pSndHXDFile->m_FileNo = -1;
  }
  else {
    pSndHXDFile->m_RefCnt = pSndHXDFile->m_RefCnt - 1;
  }
  return;
}

static void ReleaseSndBDFile(SND_BANK_FILE *pSndBDFile) {
  void *adrs;
  ushort uVar1;
  
  if ((short)pSndBDFile->m_RefCnt < 2) {
    adrs = pSndBDFile->m_pAdrs;
    if (adrs == (void *)0x0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("ReleaseSndBDFile Adrs Is Null");
      adrs = pSndBDFile->m_pAdrs;
      uVar1 = pSndBDFile->m_Ready;
    }
    else {
      uVar1 = pSndBDFile->m_Ready;
    }
    if (uVar1 == 0) {
      FileLoadCancelSPU2(pSndBDFile->m_FileNo,adrs,intr_LoadCancelBDFunc,(void *)0x0);
    }
    else {
      ReleaseSPUMemory(adrs);
    }
    pSndBDFile->m_pAdrs = (void *)0x0;
    pSndBDFile->m_RefCnt = 0;
    pSndBDFile->m_FileNo = -1;
  }
  else {
    pSndBDFile->m_RefCnt = pSndBDFile->m_RefCnt - 1;
  }
  return;
}

int SndBankRelease(int bank_no) {
	SND_BANK *p_Sb;
	
  uint uVar1;
  _SND_BANK_FILE *pSndBDFile;
  void *hndl;
  _SND_BANK *p_Var2;
  
  if (bank_no != -1) {
    if ((bank_no < -1) || (snd_bank_max <= bank_no)) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("SndBankRelease bank_no is Illegal");
    }
    p_Var2 = snd_bank + bank_no;
    if (p_Var2->pSndHXDFile == (_SND_BANK_FILE *)0x0) {
      pSndBDFile = p_Var2->pSndBDFile;
    }
    else {
      ReleaseSndHXDFile(p_Var2->pSndHXDFile);
      p_Var2->pSndHXDFile = (_SND_BANK_FILE *)0x0;
      pSndBDFile = p_Var2->pSndBDFile;
    }
    if (pSndBDFile == (_SND_BANK_FILE *)0x0) {
      hndl = p_Var2->s3d;
    }
    else {
      ReleaseSndBDFile(pSndBDFile);
      p_Var2->pSndBDFile = (_SND_BANK_FILE *)0x0;
      hndl = p_Var2->s3d;
    }
    if (hndl == (void *)0x0) {
      uVar1 = *(uint *)p_Var2;
    }
    else {
      Snd3DFreeWrk(hndl);
      p_Var2->s3d = (void *)0x0;
      uVar1 = *(uint *)p_Var2;
    }
    *(uint *)p_Var2 = uVar1 & 0xfffffffe;
  }
  return 4;
}

int SndBankSet3D(int bank_no, float *pos) {
	SND_BANK *p_Sb;
	
  int iVar1;
  void *pvVar2;
  _SND_BANK *p_Sb;
  _SND_3D_SET local_30;
  
  iVar1 = 4;
  if (bank_no != -1) {
    if ((bank_no < -1) || (snd_bank_max <= bank_no)) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("SndBankSet3D bank_no is Illegal");
    }
    p_Sb = snd_bank + bank_no;
    iVar1 = snd_bankIsReady(p_Sb);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      if (p_Sb->s3d == (void *)0x0) {
        memset(&local_30,0,0xc);
        local_30.vel = (float (*) [4])0x0;
        local_30.dir = (float (*) [4])0x0;
        local_30.pos = (float (*) [4])pos;
        pvVar2 = Snd3DCreateWrk(&local_30);
        p_Sb->s3d = pvVar2;
      }
      else {
        if (pos == (float *)0x0) {
          return 4;
        }
        Snd3DSetPosition(p_Sb->s3d,pos);
      }
      iVar1 = 4;
    }
  }
  return iVar1;
}

int SndBankIsLoopSnd(int bank_no, int no) {
	SND_BANK *p_Sb;
	
  uint uVar1;
  _HXD_HEADER *p_Var2;
  _SOUND_INFO *p_Var3;
  _SND_BANK *p_Sb;
  
  uVar1 = 0;
  if (bank_no != -1) {
    if ((bank_no < -1) || (snd_bank_max <= bank_no)) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("SndBankIsLoopSnd bank_no is Illegal");
    }
    p_Sb = snd_bank + bank_no;
    uVar1 = snd_bankIsReady(p_Sb);
    if (uVar1 != 0) {
      p_Var2 = snd_bankGet_pHxdHeader(p_Sb);
      if (no < p_Var2->num) {
        p_Var3 = snd_bankGet_pSOUND_INFO(p_Sb);
        uVar1._0_2_ = p_Var3->attr;
        uVar1._2_2_ = p_Var3->pan;
        uVar1 = uVar1 >> 5 & 1;
      }
      else {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("SndBankIsLoopSnd no %d is illegal in file %d");
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

int SndBankPlay(int bank_no, int no, int effect, int loop, int vol, int pitch, int fade_time, SND_3D_SET *s3s) {
	int s3d_free;
	unsigned int top_adrs;
	SOUND_INFO *info;
	int core;
	int Ret;
	void *s3d;
	SND_BANK *p_Sb;
	
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  _HXD_HEADER *p_Var5;
  _SOUND_INFO *p_Var6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  _SND_BANK *p_Sb;
  int adrs;
  void *s3d;
  int s3d_free;
  
  s3d = (void *)0x0;
  s3d_free = 0;
  if (bank_no == -1) {
    return 0x300000;
  }
  if ((bank_no < -1) || (snd_bank_max <= bank_no)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndBankPlay bank_no is Illegal");
  }
  p_Sb = snd_bank + bank_no;
  iVar4 = snd_bankIsReady(p_Sb);
  if (iVar4 == 0) {
    return 0x300000;
  }
  p_Var5 = snd_bankGet_pHxdHeader(p_Sb);
  if (p_Var5->num <= no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndBankPlay no %d is illegal in file %d");
    return 0x300000;
  }
  p_Var6 = snd_bankGet_pSOUND_INFO(p_Sb);
  uVar9._0_2_ = p_Var6[no].attr;
  uVar9._2_2_ = p_Var6[no].pan;
  if ((uVar9 & 0x10) == 0) {
    uVar7 = uVar9 >> 5;
  }
  else {
    if (s3s == (_SND_3D_SET *)0x0) {
      pvVar8 = p_Sb->s3d;
      if (pvVar8 == (void *)0x0) {
        uVar7 = uVar9 >> 5;
        goto LAB_00273cf8;
      }
      s3d_free = 0;
    }
    else {
      s3d_free = 1;
      pvVar8 = Snd3DCreateWrk(s3s);
      uVar9._0_2_ = p_Var6[no].attr;
      uVar9._2_2_ = p_Var6[no].pan;
    }
    uVar7 = uVar9 >> 5;
    s3d = pvVar8;
  }
LAB_00273cf8:
  bVar3 = (uVar9 & 1) == 0;
  adrs = (int)p_Sb->pSndBDFile->m_pAdrs + p_Var6[no].offset;
  uVar1._0_2_ = p_Var6[no].attr;
  uVar1._2_2_ = p_Var6[no].pan;
  iVar4 = SndBufPlay(adrs,(uint)bVar3,effect,vol,(int)(short)p_Var6[no].vol,pitch,
                     (int)(short)p_Var6[no].pitch,(int)(short)p_Var6[no].pan,fade_time,uVar7 & 1,
                     uVar1 >> 1 & 7,s3d,s3d_free,(int)p_Var6[no].adsr1,(int)p_Var6[no].adsr2,
                     adrs + p_Var6[no].loopstart,adrs + p_Var6[no].loopend);
  if (iVar4 == 0x300000) {
    uVar2._0_2_ = p_Var6[no].attr;
    uVar2._2_2_ = p_Var6[no].pan;
    iVar4 = SndBufPlay(adrs,bVar3 ^ 1,0,vol,(int)(short)p_Var6[no].vol,pitch,
                       (int)(short)p_Var6[no].pitch,(int)(short)p_Var6[no].pan,fade_time,uVar7 & 1,
                       uVar2 >> 1 & 7,s3d,s3d_free,(int)p_Var6[no].adsr1,(int)p_Var6[no].adsr2,
                       adrs + p_Var6[no].loopstart,adrs + p_Var6[no].loopend);
  }
  return iVar4;
}

SND_BANK_STATUS SndBankGetFileNo(int bank_no, int *file_no) {
	SND_BANK *p_Sb;
	
  _SND_BANK_STATUS__4_2748 _Var1;
  int iVar2;
  _SND_BANK *p_Sb;
  
  if (bank_no == -1) {
    printf("bank_no is Illegal\n");
    _Var1 = SND_BANK_OK;
  }
  else {
    if ((bank_no < -1) || (snd_bank_max <= bank_no)) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("bank_no is Illegal");
    }
    p_Sb = snd_bank + bank_no;
    iVar2 = snd_bankIsReady(p_Sb);
    if (iVar2 == 0) {
      _Var1 = SND_BANK_NOT_READY;
    }
    else {
      _Var1 = SND_BANK_OK;
      *file_no = p_Sb->pSndBDFile->m_FileNo;
    }
  }
  return _Var1;
}

static SND_BANK_FILE* SndBankFileSearch(SND_BANK_FILE *a_snd_file, int FileNo) {
	int i;
	
  int iVar1;
  
  iVar1 = 0;
  if (0 < snd_bank_max) {
    do {
      if ((a_snd_file->m_RefCnt != 0) && (a_snd_file->m_FileNo == FileNo)) {
        return a_snd_file;
      }
      iVar1 = iVar1 + 1;
      a_snd_file = a_snd_file + 1;
    } while (iVar1 < snd_bank_max);
  }
  return (_SND_BANK_FILE *)0x0;
}

static SND_BANK_FILE* SndBankFileGet(SND_BANK_FILE *a_snd_file) {
	int i;
	
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (snd_bank_max < 1) {
LAB_00273f8c:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndBankFileBDGet Illegal");
    a_snd_file = (_SND_BANK_FILE *)0x0;
  }
  else {
    uVar1 = a_snd_file->m_RefCnt;
    while (uVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (snd_bank_max <= iVar2) goto LAB_00273f8c;
      uVar1 = a_snd_file[1].m_RefCnt;
      a_snd_file = a_snd_file + 1;
    }
  }
  return a_snd_file;
}

static int SndBankFileReqBD(SND_BANK *p_Sb, int file_no) {
	unsigned int i_FileSize;
	
  _SND_BANK_FILE *p_Var1;
  int iVar2;
  uint uVar3;
  void *adrs;
  
  p_Var1 = SndBankFileSearch(snd_bd_file,file_no);
  iVar2 = 1;
  p_Sb->pSndBDFile = p_Var1;
  if (p_Var1 == (_SND_BANK_FILE *)0x0) {
    p_Var1 = SndBankFileGet(snd_bd_file);
    p_Sb->pSndBDFile = p_Var1;
    uVar3 = GetFileSize(file_no);
    uVar3 = GetAlignUp(uVar3,6);
    p_Var1->m_Size = uVar3;
    adrs = GetSPUMemory(uVar3);
    p_Var1->m_pAdrs = adrs;
    if (adrs == (void *)0x0) {
      printf("SndBankFileReqBD() SPU No Memory\n");
      iVar2 = 0;
    }
    else {
      p_Var1->m_FileNo = file_no;
      p_Var1->m_Ready = 0;
      FileLoadReqSPU(file_no,adrs,snd_bank_load_priority,intrSndBankFileBD,p_Var1);
      p_Var1->m_RefCnt = 1;
      iVar2 = 1;
    }
  }
  else {
    p_Var1->m_RefCnt = p_Var1->m_RefCnt + 1;
  }
  return iVar2;
}

static int SndBankFileReqHXD(SND_BANK *p_Sb, int file_no) {
	unsigned int i_FileSize;
	
  _SND_BANK_FILE *p_Var1;
  int iVar2;
  uint uVar3;
  void *adrs;
  
  p_Var1 = SndBankFileSearch(snd_hxd_file,file_no);
  iVar2 = 1;
  p_Sb->pSndHXDFile = p_Var1;
  if (p_Var1 == (_SND_BANK_FILE *)0x0) {
    p_Var1 = SndBankFileGet(snd_hxd_file);
    p_Sb->pSndHXDFile = p_Var1;
    uVar3 = GetFileSize(file_no);
    uVar3 = GetAlignUp(uVar3,6);
    p_Var1->m_Size = uVar3;
    adrs = ee_iopMalloc(uVar3);
    p_Var1->m_pAdrs = adrs;
    if (adrs == (void *)0x0) {
      printf("SndBankFileHXDNew() EE No Memory\n");
      iVar2 = 0;
    }
    else {
      p_Var1->m_FileNo = file_no;
      p_Var1->m_Ready = 0;
      FileLoadReqEE(file_no,adrs,snd_bank_load_priority,intrSndBankFileHXD,p_Var1);
      p_Var1->m_RefCnt = 1;
      iVar2 = 1;
    }
  }
  else {
    p_Var1->m_RefCnt = p_Var1->m_RefCnt + 1;
  }
  return iVar2;
}

static void intrSndBankFileBD(void *buffer, void *arg) {
  *(undefined2 *)arg = 1;
  return;
}

static void intrSndBankFileHXD(void *buffer, void *arg) {
  CheckHXDData((_HXD_HEADER *)buffer,1);
  *(undefined2 *)arg = 1;
  return;
}

static HXD_HEADER* snd_bankGet_pHxdHeader(SND_BANK *p_Sb) {
  return (_HXD_HEADER *)p_Sb->pSndHXDFile->m_pAdrs;
}

static SOUND_INFO* snd_bankGet_pSOUND_INFO(SND_BANK *p_Sb) {
  return (_SOUND_INFO *)((int)p_Sb->pSndHXDFile->m_pAdrs + 0x20);
}

static int snd_bankIsReady(SND_BANK *p_Sb) {
  int iVar1;
  
  if ((p_Sb->pSndHXDFile != (_SND_BANK_FILE *)0x0) && (p_Sb->pSndHXDFile->m_Ready != 0)) {
    iVar1 = 0;
    if ((p_Sb->pSndBDFile != (_SND_BANK_FILE *)0x0) && (iVar1 = 1, p_Sb->pSndBDFile->m_Ready == 0))
    {
      iVar1 = 0;
    }
    return iVar1;
  }
  return 0;
}
