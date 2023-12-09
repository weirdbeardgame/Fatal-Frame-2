// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_OL_LOAD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_OL_LOAD_H

struct basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > {
	static size_t npos;
private:
	static Rep nilRep;
	char *dat;
	
	Rep* rep();
	void repup();
public:
	char* data();
	size_t length();
	size_t size();
	size_t capacity();
	size_t max_size();
	bool empty();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator=();
	basic_string();
	basic_string();
	basic_string();
	basic_string();
	basic_string();
	basic_string();
	basic_string(basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >*, int, void);
	void swap();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& append();
	void push_back();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& assign();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator+=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator+=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& operator+=();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& insert();
	char* insert();
	char* insert();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& erase();
	char* erase();
	char* erase();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& replace();
private:
	static char eos(/* parameters unknown */);
	void unique();
	void selfish();
public:
	char operator[]();
	char& operator[]();
	char& at();
	char& at();
private:
	void terminate();
public:
	char* c_str();
	void resize();
	void resize();
	void reserve();
	void clear();
	size_t copy();
	size_t find();
	size_t find();
	size_t find();
	size_t find();
	size_t rfind();
	size_t rfind();
	size_t rfind();
	size_t rfind();
	size_t find_first_of();
	size_t find_first_of();
	size_t find_first_of();
	size_t find_first_of();
	size_t find_last_of();
	size_t find_last_of();
	size_t find_last_of();
	size_t find_last_of();
	size_t find_first_not_of();
	size_t find_first_not_of();
	size_t find_first_not_of();
	size_t find_first_not_of();
	size_t find_last_not_of();
	size_t find_last_not_of();
	size_t find_last_not_of();
	size_t find_last_not_of();
	basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > substr();
	int compare();
	int compare();
	int compare();
	char* begin();
	char* end();
private:
	char* ibegin();
	char* iend();
public:
	char* begin();
	char* end();
	reverse_iterator<char *> rbegin();
	reverse_iterator<const char *> rbegin();
	reverse_iterator<char *> rend();
	reverse_iterator<const char *> rend();
private:
	void alloc();
	static size_t _find(/* parameters unknown */);
	bool check_realloc();
};

struct Rep {
	size_t len;
	size_t res;
	size_t ref;
	bool selfish;
	
	Rep();
	Rep();
	char* data();
	char& operator[]();
	char* grab();
	void release();
	static void* operator new(/* parameters unknown */);
	static void operator delete(/* parameters unknown */);
	static Rep* create(/* parameters unknown */);
	char* clone();
	void copy();
	void move();
	void set();
	static bool excess_slop(/* parameters unknown */);
	static size_t frob_size(/* parameters unknown */);
private:
	Rep& operator=();
};

struct custom_allocator<char> {
	__vtbl_ptr_type *__vtable;
	
	custom_allocator<char>& operator=();
	char* address();
	char* address();
	custom_allocator();
	custom_allocator();
	/* vtable[1] */ virtual char* custom_allocate(size_t _Count);
	char* allocate();
	char* allocate();
	/* vtable[2] */ virtual void custom_deallocate(void *_Ptr);
	void deallocate();
	void construct();
	void destroy();
	size_t max_size();
};

typedef enum {
	OL_LOAD_ERR_OK = 0,
	OL_LOAD_ERR_MEMORY_LACK = 1,
	OL_LOAD_ERR_WORK_LACK = 2,
	OL_LOAD_ERR_FORCE_DWORD = -1
} _OL_LOAD_ERR;

typedef _OL_LOAD_ERR OL_LOAD_ERR;

typedef enum {
	OL_LOAD_READY_NOT_READY = 0,
	OL_LOAD_READY_READY = 1,
	OL_LOAD_READY_READY_FIRST = 3,
	OL_LOAD_READY_WAIT_MEMORY = 4
} OL_LOAD_READY;

struct OL_LOAD_ONE {
private:
	unsigned int mapping : 1;
	unsigned int load_end : 1;
	int cnt;
	void *adrs;
	int file_no;
	
public:
	OL_LOAD_ONE& operator=();
	OL_LOAD_ONE();
	OL_LOAD_ONE();
	void Init();
	int Main();
	int Release();
	void CntUp();
	OL_LOAD_ERR Req(int FileNo);
	OL_LOAD_READY IsReady(int *mdl_pp);
	int GetFileNo();
	void Print(char *pSBuf);
};

struct fixed_array<OL_LOAD_ONE,30> : fixed_array_base<OL_LOAD_ONE,30,OL_LOAD_ONE[30]> {
};

struct OL_LOAD {
private:
	fixed_array<OL_LOAD_ONE,30> one;
	
public:
	OL_LOAD& operator=();
	OL_LOAD();
	OL_LOAD();
	void Init();
	void Main();
	OL_LOAD_READY IsReady(int FileNo, int *mdl_pp);
	OL_LOAD_ERR Req(int FileNo);
	void Clear(int FileNo);
	void Print(char *pBuf);
};

typedef string std_string;

struct CFileName : basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > {
protected:
	std_string m_strDrive;
	std_string m_strDir;
	std_string m_strFile;
	std_string m_strExt;
	std_string m_strDriveDir;
	std_string m_strParentDir;
	std_string m_strFileExt;
public:
	__vtbl_ptr_type *__vtable;
	
	CFileName& operator=();
	CFileName();
protected:
	void GetPathName();
public:
	CFileName();
	CFileName();
	/* vtable[1] */ virtual CFileName(CFileName*, int, void);
	char* DriveName();
	char* DirName();
	char* FileName();
	char* ExtName();
	char* DriveDirName();
	char* FileExtName();
	char* ParentDirName();
	char* LowestDirName();
	void MakePath();
	int IsExist();
	static int IsExist(/* parameters unknown */);
};

extern OL_LOAD ol_load;
extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
extern __vtbl_ptr_type CFileName virtual table[3];
extern unsigned char CFileName type_info node[12];
extern unsigned char ctl::custom_allocator<char> type_info node[8];
extern unsigned char OL_LOAD_ONE type_info node[8];
extern unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info node[8];
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;

void ol_loadHeapInit(void *adrs, unsigned int size);
void ol_loadHeapReset(void *adrs, unsigned int size);
void* ol_loadGetHeap(int file_size);
void ol_loadFreeHeap(void *buf);
void ol_loadDrawMemory(void (*draw_rect_func)(/* parameters unknown */), void (*draw_line_func)(/* parameters unknown */), int xx, int yy, int ww, int hh);
unsigned int ol_loadQueryMaxFreeSize();
unsigned int ol_loadQueryTotalFreeSize();
OL_LOAD_ONE* OL_LOAD_ONE * _fixed_array_verifyrange<OL_LOAD_ONE>(size_t v, size_t _max);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, char *s, size_t n2);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos1, size_t n1, basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > &str, size_t pos2, size_t n2);
type_info& CFileName type_info function();
void CFileName::~CFileName(int __in_chrg);
type_info& ctl::custom_allocator<char> type_info function();
type_info& OL_LOAD_ONE type_info function();
type_info& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_OL_LOAD_H
