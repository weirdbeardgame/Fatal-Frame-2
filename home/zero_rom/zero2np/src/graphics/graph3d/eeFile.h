// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEFILE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEFILE_H

extern Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep;
extern __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
extern __vtbl_ptr_type CFileName virtual table[3];
extern __vtbl_ptr_type CStdioFile virtual table[8];
extern __vtbl_ptr_type CFile virtual table[6];
extern unsigned char CFile type_info node[8];
extern unsigned char CStdioFile type_info node[12];
extern unsigned char CFileName type_info node[12];
extern unsigned char ctl::custom_allocator<char> type_info node[8];
extern unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info node[8];
extern size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos;

void CFile::~CFile(int __in_chrg);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos, size_t n1, char *s, size_t n2);
basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> >& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::replace(size_t pos1, size_t n1, basic_string<char,string_char_traits<char>,ctl::custom_allocator<char> > &str, size_t pos2, size_t n2);
type_info& CFile type_info function();
type_info& CStdioFile type_info function();
void CStdioFile::~CStdioFile(int __in_chrg);
type_info& CFileName type_info function();
void CFileName::~CFileName(int __in_chrg);
type_info& ctl::custom_allocator<char> type_info function();
type_info& basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_EEFILE_H
