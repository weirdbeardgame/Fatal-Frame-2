// STATUS: NOT STARTED

#include "zero2_perf.h"

C_ZERO2_PERF_CNT c_zero2_perf_cnt = {
	/* .m_NowCnt = */ 0,
	/* .c_performance_measure = */ {
		/* .m_MarkCnt = */ 0
	}
};

void C_ZERO2_PERF_CNT::FrameInit() {
  this->m_NowCnt = 0;
  FrameStart__21C_PERFORMANCE_MEASURE(&this->c_performance_measure);
  SetMark__21C_PERFORMANCE_MEASURE(&this->c_performance_measure);
  return;
}

void C_ZERO2_PERF_CNT::AddDraw(char *str) {
	float Cnt;
	
  SetASCIIString2__FiffiUcUcUcPc(0,50.0,(float)(this->m_NowCnt * 0x19 + 0x14),0,0xa0,0xff,0xa0,str);
  SetASCIIString2__FiffiUcUcUcPc
            (0,300.0,(float)(this->m_NowCnt * 0x19 + 0x14),0,0xa0,0xa0,0xa0,&DAT_003f4900);
  GetPercentFromMark__16C_ZERO2_PERF_CNT(this);
  SetString2__FiffiUcUcUcPCce
            (0,320.0,(float)(this->m_NowCnt * 0x19 + 0x14),0,0xff,0xff,0xff,&DAT_003e6ef0);
  this->m_NowCnt = this->m_NowCnt + 1;
  SetMark__21C_PERFORMANCE_MEASURE(&this->c_performance_measure);
  return;
}

void C_ZERO2_PERF_CNT::SetMark() {
  SetMark__21C_PERFORMANCE_MEASURE(&this->c_performance_measure);
  return;
}

float C_ZERO2_PERF_CNT::GetPercent() {
  int iVar1;
  
  iVar1 = Get__21C_PERFORMANCE_MEASURE(&this->c_performance_measure);
  return (float)iVar1 / 20480.0;
}

float C_ZERO2_PERF_CNT::GetPercentFromMark() {
  int iVar1;
  
  iVar1 = GetFromMark__21C_PERFORMANCE_MEASURE(&this->c_performance_measure);
  return (float)iVar1 / 20480.0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to C_ZERO2_PERF_CNT::FrameInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
