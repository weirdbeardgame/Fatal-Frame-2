// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_HXD_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_HXD_H

struct _HXD_HEADER {
	int name;
	int version;
	int num;
	int type;
	int size;
	int interleave_byte;
	int padding[2];
};

typedef _HXD_HEADER HXD_HEADER;

struct _SOUND_INFO {
	int smpl_rate;
	int offset;
	short int pitch;
	short int vol;
	short unsigned int adsr1;
	short unsigned int adsr2;
	VOICE_ATTR attr;
	short int pan;
	int loopstart;
	int loopend;
};

typedef _SOUND_INFO SOUND_INFO;
extern char *voice_type_name_tbl[0];

void CheckHXDData(HXD_HEADER *header, int requested_file_type);
void PrintSOUND_INFO(SOUND_INFO info);
void PrintSOUND_INFOArray(SOUND_INFO *info, int num);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_HXD_H
