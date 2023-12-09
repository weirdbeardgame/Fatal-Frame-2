// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_CDEBUGEDIT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_CDEBUGEDIT_H

struct __true_type {
};

typedef void (*LPFUNC_ONEDITVALUECHANGED)(/* parameters unknown */);

struct _Vector_base<IEditObject *,ctl::custom_allocator<IEditObject *> > : _Vector_alloc_base<IEditObject *,ctl::custom_allocator<IEditObject *>,false> {
	_Vector_base<IEditObject *,ctl::custom_allocator<IEditObject *> >& operator=();
	_Vector_base();
	_Vector_base();
	_Vector_base();
	_Vector_base(_Vector_base<IEditObject *,ctl::custom_allocator<IEditObject *> >*, int, void);
};

struct vector<IEditObject *,ctl::custom_allocator<IEditObject *> > : private _Vector_base<IEditObject *,ctl::custom_allocator<IEditObject *> > {
	custom_allocator<IEditObject *> get_allocator();
protected:
	void _M_insert_aux();
	void _M_insert_aux();
public:
	IEditObject** begin();
	IEditObject** begin();
	IEditObject** end();
	IEditObject** end();
	reverse_iterator<IEditObject **> rbegin();
	reverse_iterator<IEditObject *const *> rbegin();
	reverse_iterator<IEditObject **> rend();
	reverse_iterator<IEditObject *const *> rend();
	size_t size();
	size_t max_size();
	size_t capacity();
	bool empty();
	IEditObject*& operator[]();
	IEditObject*& operator[]();
	vector();
	vector();
	vector();
	vector();
	vector(vector<IEditObject *,ctl::custom_allocator<IEditObject *> >*, int, void);
	vector<IEditObject *,ctl::custom_allocator<IEditObject *> >& operator=();
	void reserve();
	void assign();
	IEditObject*& front();
	IEditObject*& front();
	IEditObject*& back();
	IEditObject*& back();
	void push_back();
	void push_back();
	void swap();
	IEditObject** insert();
	IEditObject** insert();
	void insert();
	void pop_back();
	IEditObject** erase();
	IEditObject** erase();
	void resize();
	void resize();
	void clear();
};

struct vector<IEditObject *> : vector<IEditObject *,ctl::custom_allocator<IEditObject *> > {
	vector<IEditObject *>& operator=();
	vector();
	vector();
	vector(vector<IEditObject *>*, int, void);
};

extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
extern __vtbl_ptr_type CEditRoot virtual table[12];
extern __vtbl_ptr_type ctl::custom_allocator<IEditObject *> virtual table[4];
extern __vtbl_ptr_type IEditObject virtual table[12];
extern unsigned char IEditObject type_info node[8];
extern unsigned char ctl::custom_allocator<IEditObject *> type_info node[8];
extern unsigned char CEditRoot type_info node[12];
extern unsigned char ctl::custom_allocator<char> type_info node[8];
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;
extern bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *> >::_S_instanceless;

void CEditRoot::~CEditRoot(int __in_chrg);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, size_t n2, char c);
void basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::alloc(size_t __size, bool __save);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, char *s, size_t n2);
void void _delete_ContainerPtr_ForEach<ctl::vector<IEditObject *> >(vector<IEditObject *> &rContainer);
void vector<IEditObject *, ctl::custom_allocator<IEditObject *> >::_M_insert_aux(IEditObject **__position, IEditObject *&__x);
type_info& IEditObject type_info function();
void IEditObject::~IEditObject(int __in_chrg);
type_info& ctl::custom_allocator<IEditObject *> type_info function();
type_info& CEditRoot type_info function();
type_info& ctl::custom_allocator<char> type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_CDEBUGEDIT_H
