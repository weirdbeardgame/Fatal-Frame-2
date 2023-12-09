// STATUS: NOT STARTED

#include "stream_auto.h"

struct _STREAM_QUEUE {
	sceVu0FVECTOR pos;
	sceVu0FVECTOR vel;
	sceVu0FVECTOR dir;
	int status;
	int priority;
	unsigned int s3d : 1;
	unsigned int effect : 1;
	unsigned int loop : 1;
	unsigned int use : 1;
	unsigned int playing : 1;
	unsigned int end : 1;
	unsigned int resume : 1;
	unsigned int pause : 1;
	unsigned int reset_flg : 1;
	unsigned int first_flg : 1;
	unsigned int vel_flg : 1;
	unsigned int dir_flg : 1;
	int reset_in_time;
	int in_time;
	int vol;
	int file_no;
	int header_file_no;
	int id;
	int offset;
	float play_spd;
};

typedef _STREAM_QUEUE STREAM_QUEUE;
static int dbg_stream_enable_flg = 0;
static int stream_queue_max;
static STREAM_QUEUE *stream_wait_queue;
static STREAM_QUEUE stream_play_queue[2];
static char stream_play_disable[2];
static char stream_play_disable_num;
static int stream_queue_id;
static int stream_wait_num;

void StreamAutoEnable() {
  printf("StreamAutoEnable\n");
  dbg_stream_enable_flg = 0;
  return;
}

void StreamAutoDisable() {
  printf("StreamAutoDisable\n");
  dbg_stream_enable_flg = 1;
  return;
}

static void StreamAutoStartSub(int wrk_id, int header_file_no) {
	STREAM_QUEUE *play_q;
	
  SndStreamStart(wrk_id,stream_play_queue[wrk_id].file_no,header_file_no,
                 stream_play_queue[wrk_id].offset);
  *(ulong *)&stream_play_queue[wrk_id].field_0x38 =
       *(ulong *)&stream_play_queue[wrk_id].field_0x38 & 0xffffffffffffffcf;
  return;
}

static int cmpStreamQueue(void *a, void *b) {
  return *(int *)((int)b + 0x34) - *(int *)((int)a + 0x34);
}

static int PopStreamWaitQueue(STREAM_QUEUE *play_q) {
  _STREAM_QUEUE *p_Var1;
  _STREAM_QUEUE *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (stream_wait_num != 0) {
    p_Var2 = stream_wait_queue + stream_wait_num;
    p_Var1 = p_Var2 + -1;
    if (((*(long *)&p_Var2[-1].field_0x38 << 0x19) >> 0x20 & 1U) == 0) {
      do {
        uVar3 = *(undefined8 *)(p_Var1->pos + 2);
        uVar4 = *(undefined8 *)p_Var1->vel;
        uVar5 = *(undefined8 *)(p_Var1->vel + 2);
        *(undefined8 *)play_q->pos = *(undefined8 *)p_Var1->pos;
        *(undefined8 *)(play_q->pos + 2) = uVar3;
        *(undefined8 *)play_q->vel = uVar4;
        *(undefined8 *)(play_q->vel + 2) = uVar5;
        p_Var1 = (_STREAM_QUEUE *)p_Var1->dir;
        play_q = (_STREAM_QUEUE *)play_q->dir;
      } while (p_Var1 != p_Var2);
      stream_wait_num = stream_wait_num + -1;
      return 1;
    }
  }
  return 0;
}

static int DeleteStreamWaitQueue(int id) {
	int i;
	STREAM_QUEUE *queue;
	
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  
  iVar8 = 0;
  if (0 < stream_wait_num) {
    iVar10 = 0;
    iVar6 = 0;
    do {
      iVar1 = iVar6 + 0x30;
      iVar6 = iVar6 + 0x60;
      if (*(int *)((int)stream_wait_queue->dir + iVar1) == id) {
        if (iVar8 < stream_wait_num + -1) {
          puVar2 = (undefined8 *)((int)stream_wait_queue->pos + iVar10);
          while( true ) {
            puVar4 = puVar2 + 0xc;
            puVar3 = puVar2 + 0x18;
            do {
              uVar5 = puVar4[1];
              uVar7 = puVar4[2];
              uVar9 = puVar4[3];
              *puVar2 = *puVar4;
              puVar2[1] = uVar5;
              puVar2[2] = uVar7;
              puVar2[3] = uVar9;
              puVar4 = puVar4 + 4;
              puVar2 = puVar2 + 4;
            } while (puVar4 != puVar3);
            iVar8 = iVar8 + 1;
            if (stream_wait_num + -1 <= iVar8) break;
            puVar2 = (undefined8 *)((int)stream_wait_queue[1].pos + iVar10);
            iVar10 = iVar10 + 0x60;
          }
        }
        stream_wait_num = stream_wait_num + -1;
        printf("DeleteStreamWaitQueue stream_wait_num = %d\n");
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar10 = iVar10 + 0x60;
    } while (iVar8 < stream_wait_num);
  }
  return 0;
}

static int GetWrkNoFromID(int id) {
	int i;
	
  int iVar1;
  _STREAM_QUEUE *p_Var2;
  
  iVar1 = 0;
  p_Var2 = stream_play_queue;
  while ((((*(long *)&p_Var2->field_0x38 << 0x1d) >> 0x20 & 1U) == 0 || (p_Var2->id != id))) {
    iVar1 = iVar1 + 1;
    p_Var2 = p_Var2 + 1;
    if (1 < iVar1) {
      return -1;
    }
  }
  return iVar1;
}

static void PlayQueueReturn(int id, int time) {
	STREAM_QUEUE *play_q;
	STREAM_QUEUE *queue;
	
  _STREAM_QUEUE *p_Var1;
  int iVar2;
  _STREAM_QUEUE *p_Var3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  p_Var1 = stream_play_queue + id;
  uVar4 = *(ulong *)&stream_play_queue[id].field_0x38;
  if (((uVar4 & 0x24) == 4) || (((long)(uVar4 << 0x1a) >> 0x20 & 1U) == 0)) {
    if (((long)(uVar4 << 0x18) >> 0x20 & 1U) == 0) {
      iVar2 = SndStreamGetNowOffset(id);
      stream_play_queue[id].offset = iVar2;
    }
    else {
      stream_play_queue[id].offset = 0;
    }
    iVar2 = stream_wait_num + 1;
    p_Var3 = stream_wait_queue + stream_wait_num;
    stream_wait_num = iVar2;
    if (stream_queue_max <= iVar2) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("StreamQueueMax Over!");
    }
    do {
      uVar5 = *(undefined8 *)(p_Var1->pos + 2);
      uVar6 = *(undefined8 *)p_Var1->vel;
      uVar7 = *(undefined8 *)(p_Var1->vel + 2);
      *(undefined8 *)p_Var3->pos = *(undefined8 *)p_Var1->pos;
      *(undefined8 *)(p_Var3->pos + 2) = uVar5;
      *(undefined8 *)p_Var3->vel = uVar6;
      *(undefined8 *)(p_Var3->vel + 2) = uVar7;
      p_Var1 = (_STREAM_QUEUE *)p_Var1->dir;
      p_Var3 = (_STREAM_QUEUE *)p_Var3->dir;
    } while (p_Var1 != stream_play_queue + id + 1);
    SndStreamFadeStop(id,time);
    *(ulong *)&stream_play_queue[id].field_0x38 =
         *(ulong *)&stream_play_queue[id].field_0x38 & 0xfffffffffffffdff;
    uVar4 = *(ulong *)&stream_play_queue[id].field_0x38;
  }
  *(ulong *)&stream_play_queue[id].field_0x38 = uVar4 & 0xfffffffffffffff7;
  return;
}

static void StreamAutoSet3DSub(STREAM_QUEUE *queue, SND_3D_SET *s3s) {
  float (*pafVar1) [4];
  
  pafVar1 = s3s->pos;
  if (pafVar1 == (float (*) [4])0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("s3s->pos is NULL");
    pafVar1 = s3s->pos;
  }
  sceVu0CopyVector(queue,pafVar1);
  pafVar1 = s3s->vel;
  if (pafVar1 == (float (*) [4])0x0) {
    *(ulong *)&queue->field_0x38 = *(ulong *)&queue->field_0x38 & 0xfffffffffffffbff;
    pafVar1 = s3s->dir;
  }
  else {
    *(ulong *)&queue->field_0x38 = *(ulong *)&queue->field_0x38 | 0x400;
    sceVu0CopyVector(queue->vel,pafVar1);
    pafVar1 = s3s->dir;
  }
  if (pafVar1 != (float (*) [4])0x0) {
    *(ulong *)&queue->field_0x38 = *(ulong *)&queue->field_0x38 | 0x800;
    sceVu0CopyVector(queue->dir);
    return;
  }
  *(ulong *)&queue->field_0x38 = *(ulong *)&queue->field_0x38 & 0xfffffffffffff7ff;
  return;
}

static int StreamAutoNew(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, int reset_in_time, SND_3D_SET *s3s, int play_flg, int reset_flg, int offset) {
	SND_3D_SET *s3s;
	int play_flg;
	int reset_flg;
	int offset;
	STREAM_QUEUE *queue;
	
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  _STREAM_QUEUE *queue;
  
  iVar3 = stream_wait_num + 1;
  queue = stream_wait_queue + stream_wait_num;
  stream_wait_num = iVar3;
  if (stream_queue_max <= iVar3) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("StreamQueueMax Over!");
  }
  if (file_no < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("file_no is under 0");
  }
  else if ((header_file_no < 0) && (header_file_no != -0x21)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("header_file_no is under 0");
  }
  printf("priority = %d\n");
  *(ulong *)&queue->field_0x38 =
       *(ulong *)&queue->field_0x38 & 0xffffffffffffffb9 | 8 | ((ulong)(uint)play_flg & 1) << 6 |
       ((ulong)(uint)loop & 1) << 2 | ((ulong)(uint)effect & 1) << 1;
  queue->reset_in_time = reset_in_time;
  uVar2 = *(ulong *)&queue->field_0x38;
  uVar4 = ((ulong)(uint)reset_flg & 1) << 8;
  queue->priority = priority;
  queue->file_no = file_no;
  queue->header_file_no = header_file_no;
  queue->vol = vol;
  queue->in_time = in_time;
  uVar1 = uVar2 & 0xfffffffffffffe5f | uVar4;
  queue->offset = offset;
  queue->play_spd = 1.0;
  *(ulong *)&queue->field_0x38 = uVar1 | 0x200;
  if (s3s == (_SND_3D_SET *)0x0) {
    *(ulong *)&queue->field_0x38 = uVar2 & 0xfffffffffffffe5e | uVar4 | 0x200;
  }
  else {
    *(ulong *)&queue->field_0x38 = uVar1 | 0x201;
    StreamAutoSet3DSub(queue,s3s);
  }
  iVar3 = stream_queue_id + 1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  stream_queue_id = iVar3;
  queue->id = iVar3;
  return iVar3;
}

static void StreamAutoSub(int priority) {
	int i;
	int least_priority;
	int least_priority_no;
	
  int iVar1;
  int iVar2;
  int iVar3;
  _STREAM_QUEUE *p_Var4;
  int iVar5;
  int id;
  
  p_Var4 = stream_play_queue;
  iVar3 = 0;
  iVar1 = -1;
  iVar5 = 0;
  do {
    iVar2 = iVar1;
    id = iVar5;
    if (stream_play_disable[iVar3] == '\0') {
      if (((*(long *)&p_Var4->field_0x38 << 0x1d) >> 0x20 & 1U) == 0) {
        return;
      }
      if ((((*(long *)&p_Var4->field_0x38 << 0x19) >> 0x20 & 1U) == 0) &&
         (iVar2 = p_Var4->priority, id = iVar3, p_Var4->priority <= iVar1)) {
        iVar2 = iVar1;
        id = iVar5;
      }
    }
    iVar3 = iVar3 + 1;
    p_Var4 = p_Var4 + 1;
    iVar1 = iVar2;
    iVar5 = id;
  } while (iVar3 < 2);
  if ((iVar2 != -1) && (priority < iVar2)) {
    PlayQueueReturn(id,5);
  }
  return;
}

int StreamAutoPreload(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, SND_3D_SET *s3s) {
	int id;
	
  int iVar1;
  
  iVar1 = -1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoNew(file_no,header_file_no,priority,effect,loop,vol,in_time,in_time,s3s,0,1,0)
    ;
    StreamAutoSub(priority);
  }
  return iVar1;
}

int StreamAutoPlayNonReset(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, int reset_in_time, SND_3D_SET *s3s, int start_sector) {
	SND_3D_SET *s3s;
	int start_sector;
	int id;
	
  int iVar1;
  
  iVar1 = -1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoNew(file_no,header_file_no,priority,effect,loop,vol,in_time,reset_in_time,s3s,
                          1,0,start_sector);
    StreamAutoSub(priority);
  }
  return iVar1;
}

int StreamAutoPreloadNonReset(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, int reset_in_time, SND_3D_SET *s3s) {
	SND_3D_SET *s3s;
	int id;
	
  int iVar1;
  
  iVar1 = -1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoNew(file_no,header_file_no,priority,effect,loop,vol,in_time,reset_in_time,s3s,
                          0,0,0);
    StreamAutoSub(priority);
  }
  return iVar1;
}

int StreamAutoPlay(int file_no, int header_file_no, int priority, int effect, int loop, int vol, int in_time, SND_3D_SET *s3s) {
	int id;
	
  int iVar1;
  
  iVar1 = -1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoNew(file_no,header_file_no,priority,effect,loop,vol,in_time,in_time,s3s,1,1,0)
    ;
    StreamAutoSub(priority);
  }
  return iVar1;
}

void StreamAutoSetPlayNum(int iNum, int fade_time) {
	int iNewlyDisableNum;
	int iSubDisableNum;
	int i;
	int j;
	int iPriority;
	
  char cVar1;
  char *pcVar2;
  int *piVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (2 < (uint)iNum) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("StreamAutoSetPlayNum ArgNum[%d] Is Illegal");
    return;
  }
  iVar8 = (2 - iNum) - (int)stream_play_disable_num;
  if (iVar8 < 1) {
    iVar7 = 0;
    if (iVar8 < 0) {
      do {
        if (stream_play_disable[0] == '\0') {
          for (iVar6 = 1; iVar6 < 2; iVar6 = iVar6 + 1) {
            if (stream_play_disable[iVar6] != '\0') {
              stream_play_disable[iVar6] = '\0';
              break;
            }
          }
        }
        else {
          stream_play_disable[0] = '\0';
        }
        iVar7 = iVar7 + -1;
      } while (iVar8 < iVar7);
    }
  }
  else {
    puVar4 = (ulong *)&stream_play_queue[0].field_0x38;
    pcVar2 = stream_play_disable;
    iVar7 = 0;
    do {
      if ((*pcVar2 == '\0') && ((*puVar4 & 0x28) != 8)) {
        *pcVar2 = '\x01';
        iVar8 = iVar8 + -1;
      }
      puVar4 = puVar4 + 0xc;
    } while ((iVar7 + 1 < 2) &&
            (pcVar2 = stream_play_disable + iVar7 + 1, iVar7 = iVar7 + 1, 0 < iVar8));
    iVar7 = 0;
    do {
      if (iVar8 < 1) break;
      if (stream_play_disable[iVar7] == '\0') {
        iVar5 = iVar7 + 1;
        iVar6 = stream_play_queue[iVar7].priority;
        printf(s_i____d_003f4980);
        printf("iPriority = %d\n");
        pcVar2 = stream_play_disable + iVar7 + 1;
        piVar3 = &stream_play_queue[iVar5].priority;
        for (; iVar5 < 2; iVar5 = iVar5 + 1) {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          if ((cVar1 == '\0') && (iVar6 < *piVar3)) {
            printf("wrk[%d] priority is lower than [%d]\n");
            break;
          }
          piVar3 = piVar3 + 0x18;
        }
        if (iVar5 == 2) {
          printf("===========================disable %d\n");
          stream_play_disable[iVar7] = '\x01';
          PlayQueueReturn(iVar7,fade_time);
          iVar8 = iVar8 + -1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
    qsort(stream_wait_queue,stream_wait_num,0x60,cmpStreamQueue);
  }
  stream_play_disable_num = (char)(2 - iNum);
  return;
}

void StreamAutoSetExclusiveMode(int flg, int fade_time) {
  if (dbg_stream_enable_flg == 0) {
    if (flg == 0) {
      StreamAutoSetPlayNum(2,fade_time);
    }
    else {
      StreamAutoSetPlayNum(1,fade_time);
    }
  }
  return;
}

int StreamAutoGetOneWrkSize() {
  return 0x70;
}

void* StreamAutoPlayInit(void *wrk_buffer, int num) {
	int i;
	
  _STREAM_QUEUE *p_Var1;
  ulong uVar2;
  char *pcVar3;
  _STREAM_QUEUE *p_Var4;
  int iVar5;
  
  p_Var1 = (_STREAM_QUEUE *)GetAlignUp((uint)wrk_buffer,4);
  iVar5 = 0;
  stream_wait_num = 0;
  p_Var4 = p_Var1;
  stream_queue_max = num;
  stream_wait_queue = p_Var1;
  if (0 < num) {
    do {
      p_Var4->id = iVar5;
      iVar5 = iVar5 + 1;
      *(ulong *)&p_Var4->field_0x38 = *(ulong *)&p_Var4->field_0x38 & 0xfffffffffffffff7;
      p_Var4 = p_Var4 + 1;
    } while (iVar5 < num);
  }
  iVar5 = 0;
  p_Var4 = stream_play_queue;
  do {
    uVar2 = *(ulong *)&p_Var4->field_0x38;
    pcVar3 = stream_play_disable + iVar5;
    iVar5 = iVar5 + 1;
    *pcVar3 = '\0';
    *(ulong *)&p_Var4->field_0x38 = uVar2 & 0xfffffffffffffff7;
    p_Var4 = p_Var4 + 1;
  } while (iVar5 < 2);
  stream_play_disable_num = '\0';
  iVar5 = StreamAutoGetOneWrkSize();
  return (float *)((int)p_Var1->pos + num * iVar5);
}

static void StreamPlayQueueWrk(int wrk_id) {
	STREAM_QUEUE *play_q;
	SND_3D_SET *ptr;
	SND_3D_SET s3s;
	
  int iVar1;
  long lVar2;
  ulong uVar3;
  _SND_3D_SET *s3s_00;
  _STREAM_QUEUE *play_q;
  _SND_3D_SET s3s;
  
  s3s_00 = &s3s;
  play_q = stream_play_queue + wrk_id;
  iVar1 = SndStreamIsUse(wrk_id);
  if (iVar1 == 0) {
    uVar3 = *(ulong *)&stream_play_queue[wrk_id].field_0x38;
    if (((long)(uVar3 << 0x1d) >> 0x20 & 1U) != 0) {
      if ((uVar3 & 0x24) == 4) {
        StreamAutoStartSub(wrk_id,-0x21);
        lVar2 = *(long *)&stream_play_queue[wrk_id].field_0x38;
      }
      else {
        *(ulong *)&stream_play_queue[wrk_id].field_0x38 = uVar3 & 0xfffffffffffffff7;
        lVar2 = *(long *)&stream_play_queue[wrk_id].field_0x38;
      }
      if (((lVar2 << 0x1d) >> 0x20 & 1U) != 0) {
        return;
      }
    }
    qsort(stream_wait_queue,stream_wait_num,0x60,cmpStreamQueue);
    iVar1 = PopStreamWaitQueue(play_q);
    if (iVar1 != 0) {
      iVar1 = stream_play_queue[wrk_id].header_file_no;
      *(ulong *)&stream_play_queue[wrk_id].field_0x38 =
           *(ulong *)&stream_play_queue[wrk_id].field_0x38 & 0xffffffffffffff7f | 8;
      StreamAutoStartSub(wrk_id,iVar1);
    }
  }
  else if (((*(ulong *)&stream_play_queue[wrk_id].field_0x38 & 0xd0) == 0x40) &&
          (iVar1 = SndStreamIsHeaderReady(wrk_id), iVar1 != 0)) {
    memset(&s3s,0,0xc);
    lVar2 = *(long *)&stream_play_queue[wrk_id].field_0x38;
    if ((*(uint *)&stream_play_queue[wrk_id].field_0x38 & 1) == 0) {
      s3s_00 = (_SND_3D_SET *)0x0;
    }
    else {
      if (((lVar2 << 0x16) >> 0x20 & 1U) == 0) {
        s3s.vel = (float (*) [4])0x0;
      }
      else {
        s3s.vel = (float (*) [4])stream_play_queue[wrk_id].vel;
      }
      s3s.dir = (float (*) [4])stream_play_queue[wrk_id].dir;
      s3s.pos = play_q->pos;
      if (((lVar2 << 0x15) >> 0x20 & 1U) == 0) {
        s3s.dir = (float (*) [4])0x0;
        s3s_00 = &s3s;
      }
    }
    if (((lVar2 << 0x17) >> 0x20 & 1U) == 0) {
      SndStreamPlay(wrk_id,(uint)((ulong)(lVar2 << 0x1f) >> 0x20) & 1,
                    (uint)((ulong)(lVar2 << 0x1e) >> 0x20) & 1,stream_play_queue[wrk_id].vol,
                    stream_play_queue[wrk_id].in_time,s3s_00,stream_play_queue[wrk_id].play_spd,
                    0x1000);
    }
    else {
      SndStreamPlay(wrk_id,(uint)((ulong)(lVar2 << 0x1f) >> 0x20) & 1,
                    (uint)((ulong)(lVar2 << 0x1e) >> 0x20) & 1,stream_play_queue[wrk_id].vol,
                    stream_play_queue[wrk_id].reset_in_time,s3s_00,
                    stream_play_queue[wrk_id].play_spd,0x1000);
      *(ulong *)&stream_play_queue[wrk_id].field_0x38 =
           *(ulong *)&stream_play_queue[wrk_id].field_0x38 & 0xfffffffffffffdff;
    }
    *(ulong *)&stream_play_queue[wrk_id].field_0x38 =
         *(ulong *)&stream_play_queue[wrk_id].field_0x38 | 0x10;
  }
  return;
}

void StreamAutoPlayMain() {
	int i;
	
  char cVar1;
  int wrk_id;
  char *pcVar2;
  
  if (dbg_stream_enable_flg == 0) {
    wrk_id = 0;
    pcVar2 = stream_play_disable;
    cVar1 = stream_play_disable[0];
    while( true ) {
      pcVar2 = pcVar2 + 1;
      if (cVar1 == '\0') {
        StreamPlayQueueWrk(wrk_id);
      }
      wrk_id = wrk_id + 1;
      if (1 < wrk_id) break;
      cVar1 = *pcVar2;
    }
  }
  return;
}

static int StreamAutoSearchWrkID(int id) {
	int i;
	
  int iVar1;
  _STREAM_QUEUE *p_Var2;
  
  iVar1 = 0;
  p_Var2 = stream_play_queue;
  while ((((*(long *)&p_Var2->field_0x38 << 0x1d) >> 0x20 & 1U) == 0 || (p_Var2->id != id))) {
    iVar1 = iVar1 + 1;
    p_Var2 = p_Var2 + 1;
    if (1 < iVar1) {
      return -1;
    }
  }
  return iVar1;
}

static int StreamAutoSearchWaitWrkID(int id) {
	int i;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (stream_wait_num < 1) {
LAB_0027254c:
    iVar3 = -1;
  }
  else {
    piVar2 = &stream_wait_queue->id;
    iVar1 = *piVar2;
    iVar3 = 0;
    while( true ) {
      piVar2 = piVar2 + 0x18;
      if (iVar1 == id) break;
      if (stream_wait_num <= iVar3 + 1) goto LAB_0027254c;
      iVar1 = *piVar2;
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

int StreamAutoGetInfo(int id, int *num, int *interleave_byte, SOUND_INFO **info) {
	int wrk_id;
	
  uint uVar1;
  int wrk_id;
  _SND_STREAM_ERR _Var2;
  
  uVar1 = 0;
  if (dbg_stream_enable_flg == 0) {
    wrk_id = StreamAutoSearchWrkID(id);
    uVar1 = 0;
    if (-1 < wrk_id) {
      _Var2 = SndStreamGetInfo(wrk_id,num,interleave_byte,info);
      uVar1 = (uint)(_Var2 == SND_STREAM_OK);
    }
  }
  return uVar1;
}

void StreamAutoAllStop() {
	int i;
	
  int iVar1;
  _STREAM_QUEUE *p_Var2;
  int iVar3;
  int iVar4;
  
  if (dbg_stream_enable_flg == 0) {
    iVar3 = 0;
    iVar4 = 0x4c0060;
    do {
      if ((*(ulong *)(iVar4 + 8) & 0x28) == 8) {
        printf("StreamAutoallStop stop\n");
        SndStreamFadeStop(iVar3,1);
        *(ulong *)(iVar4 + 8) = *(ulong *)(iVar4 + 8) & 0xfffffffffffffdf7;
      }
      iVar1 = stream_queue_max;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x60;
    } while (iVar3 < 2);
    iVar3 = 0;
    stream_wait_num = 0;
    p_Var2 = stream_wait_queue;
    if (0 < stream_queue_max) {
      do {
        p_Var2->id = iVar3;
        iVar3 = iVar3 + 1;
        *(ulong *)&p_Var2->field_0x38 = *(ulong *)&p_Var2->field_0x38 & 0xfffffffffffffff7;
        p_Var2 = p_Var2 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return;
}

void StreamAutoAllPause() {
	int i;
	
  int iVar1;
  _STREAM_QUEUE *p_Var2;
  
  if (dbg_stream_enable_flg == 0) {
    iVar1 = 0;
    p_Var2 = stream_play_queue;
    do {
      if (((*(long *)&p_Var2->field_0x38 << 0x1d) >> 0x20 & 1U) != 0) {
        SndStreamPause(iVar1);
        *(ulong *)&p_Var2->field_0x38 = *(ulong *)&p_Var2->field_0x38 | 0x80;
      }
      iVar1 = iVar1 + 1;
      p_Var2 = p_Var2 + 1;
    } while (iVar1 < 2);
    iVar1 = stream_wait_num;
    p_Var2 = stream_wait_queue;
    if (0 < stream_wait_num) {
      do {
        iVar1 = iVar1 + -1;
        *(ulong *)&p_Var2->field_0x38 = *(ulong *)&p_Var2->field_0x38 | 0x80;
        p_Var2 = p_Var2 + 1;
      } while (iVar1 != 0);
    }
  }
  return;
}

void StreamAutoAllRestart() {
	int i;
	
  int iVar1;
  _STREAM_QUEUE *p_Var2;
  
  if (dbg_stream_enable_flg == 0) {
    iVar1 = 0;
    p_Var2 = stream_play_queue;
    do {
      if (((*(long *)&p_Var2->field_0x38 << 0x1d) >> 0x20 & 1U) != 0) {
        SndStreamRestart(iVar1);
        *(ulong *)&p_Var2->field_0x38 = *(ulong *)&p_Var2->field_0x38 & 0xffffffffffffff7f;
      }
      iVar1 = iVar1 + 1;
      p_Var2 = p_Var2 + 1;
    } while (iVar1 < 2);
    iVar1 = stream_wait_num;
    p_Var2 = stream_wait_queue;
    if (0 < stream_wait_num) {
      do {
        iVar1 = iVar1 + -1;
        *(ulong *)&p_Var2->field_0x38 = *(ulong *)&p_Var2->field_0x38 & 0xffffffffffffff7f;
        p_Var2 = p_Var2 + 1;
      } while (iVar1 != 0);
    }
  }
  return;
}

void StreamAutoFade(int id, int target_vol, int time) {
	int wait_wrk_no;
	int play_wrk_no;
	
  int iVar1;
  
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoSearchWaitWrkID(id);
    if (iVar1 < 0) {
      iVar1 = GetWrkNoFromID(id);
      if (-1 < iVar1) {
        SndStreamFade(iVar1,target_vol,time);
      }
    }
    else {
      stream_wait_queue[iVar1].vol = target_vol;
    }
  }
  return;
}

void StreamAutoFadeOut(int id, int fade_time) {
	int play_wrk_no;
	
  int iVar1;
  
  if (((dbg_stream_enable_flg == 0) && (iVar1 = DeleteStreamWaitQueue(id), iVar1 == 0)) &&
     (iVar1 = GetWrkNoFromID(id), -1 < iVar1)) {
    SndStreamFadeStop(iVar1,fade_time);
    *(ulong *)&stream_play_queue[iVar1].field_0x38 =
         *(ulong *)&stream_play_queue[iVar1].field_0x38 & 0xfffffffffffffdf7 | 0x20;
  }
  return;
}

int StreamAutoPause(int id) {
	int wrk_id;
	
  int iVar1;
  int iVar2;
  
  iVar1 = StreamAutoSearchWrkID(id);
  if (iVar1 < 0) {
    iVar2 = StreamAutoSearchWaitWrkID(id);
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = 1;
      *(ulong *)&stream_wait_queue[iVar2].field_0x38 =
           *(ulong *)&stream_wait_queue[iVar2].field_0x38 | 0x80;
    }
  }
  else {
    *(ulong *)&stream_play_queue[iVar1].field_0x38 =
         *(ulong *)&stream_play_queue[iVar1].field_0x38 | 0x80;
    SndStreamPause(iVar1);
    iVar1 = 1;
  }
  return iVar1;
}

int StreamAutoRestart(int id) {
	int wrk_id;
	
  int iVar1;
  int iVar2;
  
  iVar1 = StreamAutoSearchWrkID(id);
  if (iVar1 < 0) {
    iVar2 = StreamAutoSearchWaitWrkID(id);
    iVar1 = 0;
    if (-1 < iVar2) {
      iVar1 = 1;
      *(ulong *)&stream_wait_queue[iVar2].field_0x38 =
           *(ulong *)&stream_wait_queue[iVar2].field_0x38 & 0xffffffffffffff7f;
    }
  }
  else {
    *(ulong *)&stream_play_queue[iVar1].field_0x38 =
         *(ulong *)&stream_play_queue[iVar1].field_0x38 & 0xffffffffffffff7f;
    SndStreamRestart(iVar1);
    iVar1 = 1;
  }
  return iVar1;
}

int StreamAutoSetPosition(int id, float *pos) {
	SND_3D_SET set;
	int wrk_id;
	
  int iVar1;
  int iVar2;
  _SND_3D_SET set;
  
  memset(&set,0,0xc);
  iVar1 = 1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoSearchWrkID(id);
    set.pos = (float (*) [4])(stream_play_queue + iVar1);
    if (iVar1 < 0) {
      iVar2 = StreamAutoSearchWaitWrkID(id);
      iVar1 = 0;
      if (-1 < iVar2) {
        sceVu0CopyVector(stream_wait_queue + iVar2,pos);
        iVar1 = 1;
      }
    }
    else {
      sceVu0CopyVector(set.pos,pos);
      if (((*(long *)&stream_play_queue[iVar1].field_0x38 << 0x16) >> 0x20 & 1U) != 0) {
        set.vel = (float (*) [4])stream_play_queue[iVar1].vel;
      }
      if (((*(long *)&stream_play_queue[iVar1].field_0x38 << 0x15) >> 0x20 & 1U) != 0) {
        set.dir = (float (*) [4])stream_play_queue[iVar1].dir;
      }
      SndStreamSet3D(iVar1,&set);
      iVar1 = 1;
    }
  }
  return iVar1;
}

void PrintStreamAutoStatus() {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  printf(&DAT_003f4988);
  printf("================================\n");
  printf("<<Wait Streams>>\n");
  if (0 < stream_wait_num) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      GetFileName(*(int *)((int)stream_wait_queue->dir + iVar2 + 0x28));
      iVar2 = iVar2 + 0x60;
      printf("%s priority %d file_no %d\n");
    } while (iVar1 < stream_wait_num);
  }
  iVar2 = 0;
  printf(&DAT_003f4988);
  printf("<<Play Streams>>\n");
  iVar1 = 0x4c0070;
  do {
    if (((*(long *)(iVar1 + -8) << 0x1d) >> 0x20 & 1U) == 0) {
      printf("[%d] NONE Is Played\n");
    }
    else {
      GetFileName(*(int *)(iVar1 + 8));
      printf("[%d] %s priority %d file_no %d\n");
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x60;
  } while (iVar2 < 2);
  printf("================================\n");
  printf(&DAT_003f4988);
  return;
}

int StreamAutoIsPreload(int id) {
	int wrk_id;
	
  int iVar1;
  
  iVar1 = 1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoSearchWrkID(id);
    if (-1 < iVar1) {
      iVar1 = SndStreamIsPreload(iVar1);
      return iVar1;
    }
    iVar1 = StreamAutoSearchWaitWrkID(id);
    if (iVar1 < 0) {
      if (id != -1) {
        printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
        PrintWarningReal("StreamAutoIsPreload() ID[%d] is not Found");
        return 0;
      }
    }
    else {
      printf("StreamAutoIsPreload() Wait Other Stream End\n");
    }
    iVar1 = 0;
  }
  return iVar1;
}

int StreamAutoPreloadPlay(int id) {
	int wrk_id;
	
  int wrk_id;
  int iVar1;
  
  iVar1 = 1;
  if (dbg_stream_enable_flg == 0) {
    wrk_id = StreamAutoSearchWrkID(id);
    if ((wrk_id < 0) || (iVar1 = SndStreamIsPreload(wrk_id), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
      *(ulong *)&stream_play_queue[wrk_id].field_0x38 =
           *(ulong *)&stream_play_queue[wrk_id].field_0x38 | 0x40;
    }
  }
  return iVar1;
}

int StreamAutoIsAllStop() {
	int i;
	
  int iVar1;
  int iVar2;
  
  if (dbg_stream_enable_flg == 0) {
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 1;
      iVar1 = SndStreamIsUse(iVar1);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = iVar2;
    } while (iVar2 < 2);
  }
  return 1;
}

int StreamAutoIsPlaying(int id) {
  int iVar1;
  
  if ((dbg_stream_enable_flg == 0) && (iVar1 = StreamAutoSearchWrkID(id), iVar1 < 0)) {
    iVar1 = StreamAutoSearchWaitWrkID(id);
    if (iVar1 < 0) {
      return 0;
    }
    printf("StreamAutoIsPlaying() Wait Other Stream End\n");
  }
  return 1;
}

int StreamAutoChangePlaySpeed(int id, float rate) {
	int wrk_id;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoSearchWrkID(id);
    if (iVar1 < 0) {
      iVar2 = StreamAutoSearchWaitWrkID(id);
      iVar1 = 0;
      if (-1 < iVar2) {
        iVar1 = 1;
        stream_wait_queue[iVar2].play_spd = rate;
      }
    }
    else {
      stream_play_queue[iVar1].play_spd = rate;
      SndStreamChangePlaySpeed(iVar1,rate);
      iVar1 = 1;
    }
  }
  return iVar1;
}

float StreamAutoNowPlayPercentage(int id) {
	int wrk_id;
	
  int iVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoSearchWrkID(id);
    if (iVar1 < 0) {
      iVar1 = StreamAutoSearchWaitWrkID(id);
      fVar3 = 0.0;
      if (-1 < iVar1) {
        iVar2 = GetFileSectorSize(stream_wait_queue[iVar1].file_no);
        fVar3 = (float)stream_wait_queue[iVar1].offset / (float)iVar2;
      }
    }
    else {
      iVar2 = SndStreamGetNowOffset(iVar1);
      iVar1 = GetFileSectorSize(stream_play_queue[iVar1].file_no);
      fVar3 = (float)iVar2 / (float)iVar1;
    }
  }
  return fVar3;
}

int StreamAutoGetNowSector(int id) {
	int wrk_id;
	
  int iVar1;
  
  iVar1 = StreamAutoSearchWrkID(id);
  if (-1 < iVar1) {
    iVar1 = SndStreamGetNowOffset(iVar1);
    return iVar1;
  }
  return 0;
}

int StreamAutoSet3D(int id, SND_3D_SET *s3s) {
	int wrk_id;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 1;
  if (dbg_stream_enable_flg == 0) {
    iVar1 = StreamAutoSearchWrkID(id);
    if (iVar1 < 0) {
      iVar2 = StreamAutoSearchWaitWrkID(id);
      iVar1 = 0;
      if (-1 < iVar2) {
        StreamAutoSet3DSub(stream_wait_queue + iVar2,s3s);
        iVar1 = 1;
      }
    }
    else {
      StreamAutoSet3DSub(stream_play_queue + iVar1,s3s);
      SndStreamSet3D(iVar1,s3s);
      iVar1 = 1;
    }
  }
  return iVar1;
}
