// STATUS: NOT STARTED

#include "perf_measure.h"

void C_PERFORMANCE_MEASURE::FrameStart() {
  int iVar1;
  
  REG_RCNT1_MODE = 0xc82;
  REG_RCNT1_COUNT = 0;
  iVar1 = REG_RCNT1_COUNT;
  this->m_MarkCnt = iVar1;
  return;
}

int C_PERFORMANCE_MEASURE::Get() {
	int i_MarkCnt;
	
  int iVar1;
  
  iVar1 = REG_RCNT1_COUNT;
  return iVar1;
}

void C_PERFORMANCE_MEASURE::SetMark() {
  int iVar1;
  
  iVar1 = REG_RCNT1_COUNT;
  this->m_MarkCnt = iVar1;
  return;
}

int C_PERFORMANCE_MEASURE::GetFromMark() {
	int i_MarkCnt;
	
  int iVar1;
  
  iVar1 = REG_RCNT1_COUNT;
  return iVar1 - this->m_MarkCnt;
}
