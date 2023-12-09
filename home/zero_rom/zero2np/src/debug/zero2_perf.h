// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_ZERO2_PERF_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_ZERO2_PERF_H

struct C_ZERO2_PERF_CNT {
private:
	int m_NowCnt;
	C_PERFORMANCE_MEASURE c_performance_measure;
	
public:
	C_ZERO2_PERF_CNT& operator=();
	C_ZERO2_PERF_CNT();
	C_ZERO2_PERF_CNT();
	void FrameInit();
	void SetMark();
	void AddDraw(char *str);
	float GetPercent();
	float GetPercentFromMark();
};

extern C_ZERO2_PERF_CNT c_zero2_perf_cnt;


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_ZERO2_PERF_H
