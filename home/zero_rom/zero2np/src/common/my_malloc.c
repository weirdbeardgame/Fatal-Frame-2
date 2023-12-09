// STATUS: NOT STARTED

#include "my_malloc.h"

void my_mallocInit(MY_MALLOC *my_malloc, void *adrs, int size) {
  (my_malloc->wrk).pre = (_MALLOC_HEADER *)0x0;
  (my_malloc->wrk).next = (_MALLOC_HEADER *)0x0;
  (my_malloc->wrk).vac_size = size;
  (my_malloc->wrk).use_size = 0;
  my_malloc->adrs = adrs;
  if (((uint)adrs & 0xf) != 0) {
    printf("my_mallocInit() adrs is not aligned [%d] bit\n");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  my_malloc->size = size;
  return;
}

void* my_mallocMalloc(MY_MALLOC *my_malloc, int size, int align_bit) {
	MALLOC_HEADER *wrk;
	MALLOC_HEADER *new_wrk;
	int align_size;
	int free_adrs;
	int amari;
	
  int iVar1;
  void *pvVar2;
  _MALLOC_HEADER *p_Var3;
  _MALLOC_HEADER *p_Var4;
  _MY_MALLOC *p_Var5;
  void *pvVar6;
  int iVar7;
  
  if (align_bit < 4) {
    align_bit = 4;
  }
  iVar7 = size + 0x10;
  iVar1 = (my_malloc->wrk).vac_size;
  p_Var5 = my_malloc;
  while( true ) {
    if ((iVar7 >> (align_bit & 0x1fU)) + 2 << (align_bit & 0x1fU) <= iVar1) {
      if ((p_Var5->wrk).pre == (_MALLOC_HEADER *)0x0) {
        pvVar6 = my_malloc->adrs;
      }
      else {
        pvVar6 = (void *)((int)&(p_Var5->wrk).pre + (p_Var5->wrk).use_size);
      }
      pvVar2 = (void *)GetAlignUp((int)pvVar6 + 0x10,align_bit);
      p_Var3 = (p_Var5->wrk).next;
      p_Var4 = (_MALLOC_HEADER *)((int)pvVar2 - 0x10);
      if (p_Var3 != (_MALLOC_HEADER *)0x0) {
        p_Var3->pre = p_Var4;
        p_Var3 = (p_Var5->wrk).next;
      }
      *(int *)((int)pvVar2 - 8) = iVar7;
      *(_MALLOC_HEADER **)((int)pvVar2 - 0xc) = p_Var3;
      iVar1 = (p_Var5->wrk).vac_size;
      p_Var4->pre = &p_Var5->wrk;
      (p_Var5->wrk).next = p_Var4;
      *(int *)((int)pvVar2 - 4) = (iVar1 - ((int)p_Var4 - (int)pvVar6)) - iVar7;
      (p_Var5->wrk).vac_size = (int)p_Var4 - (int)pvVar6;
      return pvVar2;
    }
    p_Var5 = (_MY_MALLOC *)(p_Var5->wrk).next;
    if (p_Var5 == (_MY_MALLOC *)0x0) break;
    iVar1 = (p_Var5->wrk).vac_size;
  }
  printf("my_mallocMalloc() cannot Get Memory size[%07x]\n");
  return (void *)0x0;
}

void my_mallocFree(MY_MALLOC *my_malloc, void *adrs) {
	MALLOC_HEADER *wrk;
	
  void **ppvVar1;
  int iVar2;
  _MALLOC_HEADER *p_Var3;
  
  if (adrs == (void *)0x0) {
    printf("my_mallocFree() free adrs is NULL!\n");
    return;
  }
  ppvVar1 = &my_malloc->adrs;
  do {
    if (ppvVar1 == (void **)adrs) {
      p_Var3 = (my_malloc->wrk).next;
      if (p_Var3 == (_MALLOC_HEADER *)0x0) {
        p_Var3 = (my_malloc->wrk).pre;
      }
      else {
        p_Var3->pre = (my_malloc->wrk).pre;
        p_Var3 = (my_malloc->wrk).pre;
      }
      if (p_Var3 == (_MALLOC_HEADER *)0x0) {
        iVar2 = (my_malloc->wrk).vac_size;
        p_Var3 = (_MALLOC_HEADER *)0x0;
      }
      else {
        p_Var3->next = (my_malloc->wrk).next;
        p_Var3 = (my_malloc->wrk).pre;
        iVar2 = (my_malloc->wrk).vac_size;
      }
      p_Var3->vac_size = p_Var3->vac_size + (my_malloc->wrk).use_size + iVar2;
      return;
    }
    my_malloc = (_MY_MALLOC *)(my_malloc->wrk).next;
    ppvVar1 = &my_malloc->adrs;
  } while (my_malloc != (_MY_MALLOC *)0x0);
  printf("my_mallocFree() there is no free_able adrs[0x%x]\n");
  return;
}

int my_mallocQueryTotalFreeMem(MY_MALLOC *my_malloc) {
	MALLOC_HEADER *wrk;
	int free_size;
	
  _MALLOC_HEADER *p_Var1;
  int iVar2;
  
  iVar2 = 0;
  do {
    p_Var1 = &my_malloc->wrk;
    my_malloc = (_MY_MALLOC *)(my_malloc->wrk).next;
    iVar2 = iVar2 + p_Var1->vac_size;
  } while (my_malloc != (_MY_MALLOC *)0x0);
  return iVar2;
}

int my_mallocQueryMaxFreeMem(MY_MALLOC *my_malloc) {
	MALLOC_HEADER *wrk;
	int max_free_size;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = (my_malloc->wrk).vac_size;
    my_malloc = (_MY_MALLOC *)(my_malloc->wrk).next;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
  } while (my_malloc != (_MY_MALLOC *)0x0);
  return iVar2;
}

void my_mallocDrawMemory(MY_MALLOC *my_malloc, void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh) {
	MALLOC_HEADER *wrk;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _MY_MALLOC *p_Var5;
  
  iVar2 = xx + ww + 1;
  iVar3 = xx + -1;
  iVar4 = yy + -1;
  (*(code *)draw_line_func)(iVar3,iVar4,iVar2,iVar4,0xffffffffa0a0a0ff);
  iVar1 = yy + hh + 1;
  (*(code *)draw_line_func)(iVar3,iVar1,iVar2,iVar1,0xffffffffa0a0a0ff);
  (*(code *)draw_line_func)(iVar3,iVar4,iVar3,iVar1,0xffffffffa0a0a0ff);
  (*(code *)draw_line_func)(iVar2,iVar4,iVar2,iVar1,0xffffffffa0a0a0ff);
  iVar1 = (my_malloc->wrk).use_size;
  p_Var5 = my_malloc;
  while( true ) {
    if (iVar1 != 0) {
      iVar2 = my_malloc->size;
      if (iVar2 == 0) {
        trap(7);
      }
      (*(code *)draw_rect_func)
                (xx,yy + (hh * ((int)p_Var5 - (int)my_malloc->adrs)) / iVar2,ww,(hh * iVar1) / iVar2
                 ,0xffffffffffffff20);
    }
    p_Var5 = (_MY_MALLOC *)(p_Var5->wrk).next;
    if (p_Var5 == (_MY_MALLOC *)0x0) break;
    iVar1 = (p_Var5->wrk).use_size;
  }
  return;
}
