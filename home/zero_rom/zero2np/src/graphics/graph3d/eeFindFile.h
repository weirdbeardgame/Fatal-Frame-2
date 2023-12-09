// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEFINDFILE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEFINDFILE_H

// warning: multiple differing types with the same name (#77, type name not equal)
typedef basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > string;

struct sce_dirent {
	sce_stat d_stat;
	char d_name[256];
	void *d_private;
};

struct _Vector_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > : _Vector_alloc_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >,false> {
	_Vector_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >& operator=();
	_Vector_base();
	_Vector_base();
	_Vector_base();
	_Vector_base(_Vector_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >*, int, void);
};

struct vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > : private _Vector_base<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > {
	custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > get_allocator();
protected:
	void _M_insert_aux();
	void _M_insert_aux();
public:
	string* begin();
	string* begin();
	string* end();
	string* end();
	reverse_iterator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rbegin();
	reverse_iterator<const basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rbegin();
	reverse_iterator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rend();
	reverse_iterator<const basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *> rend();
	size_t size();
	size_t max_size();
	size_t capacity();
	bool empty();
	string& operator[]();
	string& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector(vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >*, int, void);
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >& operator=();
	void reserve();
	void assign();
	string& front();
	string& front();
	string& back();
	string& back();
	void push_back();
	void push_back();
	void swap();
	string* insert();
	string* insert();
	void insert();
	void pop_back();
	string* erase();
	string* erase();
	void resize();
	void resize();
	void clear();
};

struct vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > : vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >,ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > > {
	vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >& operator=();
	vector();
	vector();
	vector(vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >*, int, void);
};

struct _Vector_base<sce_dirent,ctl::custom_allocator<sce_dirent> > : _Vector_alloc_base<sce_dirent,ctl::custom_allocator<sce_dirent>,false> {
	_Vector_base<sce_dirent,ctl::custom_allocator<sce_dirent> >& operator=();
	_Vector_base();
	_Vector_base();
	_Vector_base();
	_Vector_base(_Vector_base<sce_dirent,ctl::custom_allocator<sce_dirent> >*, int, void);
};

struct vector<sce_dirent,ctl::custom_allocator<sce_dirent> > : private _Vector_base<sce_dirent,ctl::custom_allocator<sce_dirent> > {
	custom_allocator<sce_dirent> get_allocator();
protected:
	void _M_insert_aux();
	void _M_insert_aux();
public:
	sce_dirent* begin();
	sce_dirent* begin();
	sce_dirent* end();
	sce_dirent* end();
	reverse_iterator<sce_dirent *> rbegin();
	reverse_iterator<const sce_dirent *> rbegin();
	reverse_iterator<sce_dirent *> rend();
	reverse_iterator<const sce_dirent *> rend();
	size_t size();
	size_t max_size();
	size_t capacity();
	bool empty();
	sce_dirent& operator[]();
	sce_dirent& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector(vector<sce_dirent,ctl::custom_allocator<sce_dirent> >*, int, void);
	vector<sce_dirent,ctl::custom_allocator<sce_dirent> >& operator=();
	void reserve();
	void assign();
	sce_dirent& front();
	sce_dirent& front();
	sce_dirent& back();
	sce_dirent& back();
	void push_back();
	void push_back();
	void swap();
	sce_dirent* insert();
	sce_dirent* insert();
	void insert();
	void pop_back();
	sce_dirent* erase();
	sce_dirent* erase();
	void resize();
	void resize();
	void clear();
};

struct vector<sce_dirent> : vector<sce_dirent,ctl::custom_allocator<sce_dirent> > {
	vector<sce_dirent>& operator=();
	vector();
	vector();
	vector(vector<sce_dirent>*, int, void);
};

extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
extern __vtbl_ptr_type CFindFile virtual table[3];
extern __vtbl_ptr_type ctl::custom_allocator<sce_dirent> virtual table[4];
extern __vtbl_ptr_type ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > virtual table[4];
extern unsigned char ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > type_info node[8];
extern unsigned char ctl::custom_allocator<sce_dirent> type_info node[8];
extern unsigned char CFindFile type_info node[8];
extern unsigned char ctl::custom_allocator<char> type_info node[8];
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
extern bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_S_instanceless;
extern bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent> >::_S_instanceless;

void CFindFile::~CFindFile(int __in_chrg);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, size_t n2, char c);
void basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::alloc(size_t __size, bool __save);
void vector<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_M_insert_aux(string *__position, string &__x);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, char *s, size_t n2);
void vector<sce_dirent, ctl::custom_allocator<sce_dirent> >::_M_insert_aux(sce_dirent *__position, sce_dirent &__x);
string* basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > * __uninitialized_copy_aux<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *, basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > *>(string *__first, string *__last, string *__result);
sce_dirent* sce_dirent * __uninitialized_copy_aux<sce_dirent *, sce_dirent *>(sce_dirent *__first, sce_dirent *__last, sce_dirent *__result);
type_info& ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > type_info function();
type_info& ctl::custom_allocator<sce_dirent> type_info function();
type_info& CFindFile type_info function();
type_info& ctl::custom_allocator<char> type_info function();
void ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >::custom_deallocate(void *_Ptr);
string* ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > >::custom_allocate(size_t _Count);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEFINDFILE_H
