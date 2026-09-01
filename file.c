/* Generated from file.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: file.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file file.c -emit-import-library chicken.file
   unit: file
   uses: extras pathname irregex library
*/
#include "chicken.h"

#include <errno.h>

/* For Windows */
#ifndef R_OK
# define R_OK 2
#endif
#ifndef W_OK
# define W_OK 4
#endif
#ifndef X_OK
# define X_OK 2
#endif

#if defined(_WIN32) && !defined(__CYGWIN__)
# include <direct.h>
# define C_test_access(fn, m) C_fix(_waccess(C_utf16(fn, 0), C_unfix(m)))

static C_word C_rename(C_word old, C_word new) {
  wchar_t *s = C_utf16(old, 0), *s2 = C_utf16(new, 1);
  _wremove(s2);
  return(C_fix(_wrename(s, s2)));
}

# define C_remove(str)       C_fix(_wremove(C_utf16(str, 0)))
# define C_rmdir(str)        C_fix(_wrmdir(C_utf16(str, 0)))
# define C_mkdir(str)        C_fix(_wmkdir(C_utf16(str, 0)))
#else
# include <sys/stat.h>
# define C_test_access(fn, m) C_fix(access(C_c_string(fn), C_unfix(m)))
# define C_rename(old, new)  C_fix(rename(C_c_string(old), C_c_string(new)))
# define C_remove(str)       C_fix(remove(C_c_string(str)))
# define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))
# define C_mkdir(str)        C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#endif

#include <sys/types.h>
#include <dirent.h>

#if defined(_WIN32) && !defined(__CYGWIN__)
# define C_opendir(s,h)      C_set_block_item(h, 0, (C_word) _wopendir(C_utf16(s, 0)))

static C_word C_foundfile(C_word e,C_word b,C_word l) {
   C_char *s = C_utf8(((struct _wdirent *)C_block_item(e, 0))->d_name);
   C_char *p = s;
   while(*p != 0) {
     *p = *p == '\\' ? '/' : *p;
     ++p;
   }
   C_strlcpy(C_c_string(b), s, C_unfix(l));
   return(C_fix(C_strlen(s)));
}
# define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) _wreaddir((_WDIR *)C_block_item(h, 0)))
# define C_closedir(h)       (_wclosedir((_WDIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#else
# define C_opendir(s,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(s)))
# define C_foundfile(e,b,l)  (C_strlcpy(C_c_string(b), ((struct dirent *)C_block_item(e, 0))->d_name, C_unfix(l)), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

# define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
# define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#endif

static C_word C_u_i_lstat(C_word path)
{
#if !defined(_WIN32) || defined(__CYGWIN__)
  struct stat buf;
  if (lstat(C_c_string(path), &buf) == 0)
    return C_fix(buf.st_mode);
#else
  struct _stat buf;
  if(_wstat(C_utf16(path, 0), &buf) == 0)
    return C_SCHEME_TRUE;
#endif
  return C_SCHEME_FALSE;
}

#if !defined(_WIN32) || defined(__CYGWIN__)
# define C_u_i_symbolic_linkp(m)		C_mk_bool(S_ISLNK(C_unfix(m)))
#else
# define C_u_i_symbolic_linkp(m)        C_SCHEME_FALSE
#endif


static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_extern void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[114];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,102,105,108,101,35,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,32,108,111,99,32,109,115,103,32,97,114,103,115,41,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char li2[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,45,101,120,105,115,116,115,63,32,110,97,109,101,41,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,116,101,115,116,45,97,99,99,101,115,115,32,102,105,108,101,110,97,109,101,32,97,99,99,32,108,111,99,41,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,114,101,97,100,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,119,114,105,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,108,101,45,101,120,101,99,117,116,97,98,108,101,63,32,102,105,108,101,110,97,109,101,41};
static C_char li7[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,105,114,101,99,116,111,114,121,32,46,32,114,101,115,116,41,0};
static C_char li9[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,105,114,41,0,0,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,7),40,97,49,48,56,50,41,0};
static C_char li11[] C_aligned={C_lihdr(0,0,29),40,97,49,48,56,56,32,100,105,114,50,52,56,32,102,105,108,101,50,53,48,32,101,120,116,50,53,50,41,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,11),40,114,109,100,105,114,32,100,105,114,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,8),40,103,50,56,55,32,102,41};
static C_char li15[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,56,54,32,103,50,57,51,41,0};
static C_char li16[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,32,102,105,108,101,110,97,109,101,41,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,7),40,97,49,50,57,55,41,0};
static C_char li19[] C_aligned={C_lihdr(0,0,11),40,97,49,50,57,49,32,101,120,110,41,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,55,51,50,41,0,0,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,7),40,97,49,51,50,55,41,0};
static C_char li22[] C_aligned={C_lihdr(0,0,14),40,116,109,112,50,55,51,51,32,97,114,103,115,41,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,7),40,97,49,51,49,52,41,0};
static C_char li24[] C_aligned={C_lihdr(0,0,9),40,97,49,50,56,53,32,107,41,0,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,102,105,108,101,35,100,101,108,101,116,101,45,102,105,108,101,42,32,102,105,108,101,41};
static C_char li26[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,102,105,108,101,35,114,101,110,97,109,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,111,112,121,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char li29[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,100,32,108,41,0,0,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,102,105,108,101,35,109,111,118,101,45,102,105,108,101,32,111,108,100,102,105,108,101,32,110,101,119,102,105,108,101,32,46,32,114,101,115,116,41,0};
static C_char li31[] C_aligned={C_lihdr(0,0,9),40,116,101,109,112,100,105,114,41,0,0,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,9),40,97,49,55,51,49,32,112,41,0,0,0,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,105,108,101,35,99,114,101,97,116,101,45,116,101,109,112,111,114,97,114,121,45,100,105,114,101,99,116,111,114,121,41,0,0,0,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,7),40,97,49,56,52,57,41,0};
static C_char li38[] C_aligned={C_lihdr(0,0,8),40,103,53,48,49,32,109,41};
static C_char li39[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,102,110,115,41,0,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,7),40,97,49,57,52,53,41,0};
static C_char li41[] C_aligned={C_lihdr(0,0,13),40,97,49,57,51,57,32,101,120,118,97,114,41,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,9),40,116,109,112,49,55,53,54,41,0,0,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,7),40,97,49,57,57,52,41,0};
static C_char li44[] C_aligned={C_lihdr(0,0,14),40,116,109,112,50,55,53,55,32,97,114,103,115,41,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,7),40,97,49,57,56,49,41,0};
static C_char li46[] C_aligned={C_lihdr(0,0,9),40,97,49,57,51,51,32,107,41,0,0,0,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,28),40,97,49,56,53,53,32,100,105,114,52,55,51,32,102,105,108,52,55,53,32,101,120,116,52,55,55,41,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,17),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,102,105,108,101,35,103,108,111,98,32,46,32,112,97,116,104,115,41,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,52,41,0};
static C_char li51[] C_aligned={C_lihdr(0,0,7),40,97,50,49,50,57,41,0};
static C_char li52[] C_aligned={C_lihdr(0,0,7),40,97,50,49,52,57,41,0};
static C_char li53[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,32,100,105,114,32,102,115,32,114,41,0};
static C_char li54[] C_aligned={C_lihdr(0,0,10),40,102,95,50,50,48,55,32,120,41,0,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,12),40,102,95,50,50,49,53,32,46,32,95,41,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,12),40,102,95,50,50,50,51,32,46,32,95,41,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,7),40,97,50,50,50,56,41,0};
static C_char li58[] C_aligned={C_lihdr(0,0,7),40,97,50,50,51,49,41,0};
static C_char li59[] C_aligned={C_lihdr(0,0,7),40,97,50,50,51,52,41,0};
static C_char li60[] C_aligned={C_lihdr(0,0,7),40,97,50,50,51,55,41,0};
static C_char li61[] C_aligned={C_lihdr(0,0,12),40,102,95,50,50,52,51,32,120,32,121,41,0,0,0,0};
static C_char li62[] C_aligned={C_lihdr(0,0,7),40,97,50,50,52,48,41,0};
static C_char li63[] C_aligned={C_lihdr(0,0,12),40,102,95,50,50,53,49,32,46,32,95,41,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,7),40,97,50,50,52,56,41,0};
static C_char li65[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,105,108,101,35,102,105,110,100,45,102,105,108,101,115,32,100,105,114,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li66[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from getpid */
C_regparm static C_word stub461(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from getpid */
C_regparm static C_word stub452(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k784 */
C_regparm static C_word stub153(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word *av) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word *av) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word *av) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word *av) C_noret;
C_noret_decl(f_1041)
static void f_1041(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1048)
static void f_1048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word *av) C_noret;
C_noret_decl(f_1067)
static void C_ccall f_1067(C_word c,C_word *av) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word *av) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word *av) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word *av) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word *av) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word *av) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word *av) C_noret;
C_noret_decl(f_1134)
static void f_1134(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word *av) C_noret;
C_noret_decl(f_1144)
static void f_1144(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word *av) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word *av) C_noret;
C_noret_decl(f_1177)
static void f_1177(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1195)
static void C_ccall f_1195(C_word c,C_word *av) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word *av) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word *av) C_noret;
C_noret_decl(f_1213)
static void f_1213(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word *av) C_noret;
C_noret_decl(f_1245)
static void C_ccall f_1245(C_word c,C_word *av) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word *av) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word *av) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word *av) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word *av) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word *av) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word *av) C_noret;
C_noret_decl(f_1281)
static void C_ccall f_1281(C_word c,C_word *av) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word *av) C_noret;
C_noret_decl(f_1292)
static void C_ccall f_1292(C_word c,C_word *av) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word *av) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word *av) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word *av) C_noret;
C_noret_decl(f_1317)
static void f_1317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1322)
static void f_1322(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word *av) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word *av) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word *av) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word *av) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word *av) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word *av) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word *av) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word *av) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word *av) C_noret;
C_noret_decl(f_1387)
static void C_ccall f_1387(C_word c,C_word *av) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word *av) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word *av) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word *av) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word *av) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word *av) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word *av) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word *av) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word *av) C_noret;
C_noret_decl(f_1453)
static void f_1453(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word *av) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word *av) C_noret;
C_noret_decl(f_1469)
static void C_ccall f_1469(C_word c,C_word *av) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word *av) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word *av) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word *av) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word *av) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word *av) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word *av) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word *av) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word *av) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word *av) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word *av) C_noret;
C_noret_decl(f_1581)
static void C_ccall f_1581(C_word c,C_word *av) C_noret;
C_noret_decl(f_1583)
static void f_1583(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word *av) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word *av) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word *av) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word *av) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word *av) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word *av) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word *av) C_noret;
C_noret_decl(f_1667)
static void f_1667(C_word t0) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word *av) C_noret;
C_noret_decl(f_1712)
static void f_1712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1718)
static void C_ccall f_1718(C_word c,C_word *av) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word *av) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word *av) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word *av) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word *av) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word *av) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word *av) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word *av) C_noret;
C_noret_decl(f_1769)
static void f_1769(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word *av) C_noret;
C_noret_decl(f_1781)
static void C_ccall f_1781(C_word c,C_word *av) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word *av) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word *av) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word *av) C_noret;
C_noret_decl(f_1809)
static void C_ccall f_1809(C_word c,C_word *av) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word *av) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word *av) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word *av) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word *av) C_noret;
C_noret_decl(f_1835)
static void f_1835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word *av) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word *av) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word *av) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word *av) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word *av) C_noret;
C_noret_decl(f_1875)
static void f_1875(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word *av) C_noret;
C_noret_decl(f_1896)
static void f_1896(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word *av) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word *av) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word *av) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word *av) C_noret;
C_noret_decl(f_1940)
static void C_ccall f_1940(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_1982)
static void C_ccall f_1982(C_word c,C_word *av) C_noret;
C_noret_decl(f_1984)
static void f_1984(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void f_1989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word *av) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word *av) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word *av) C_noret;
C_noret_decl(f_2027)
static void C_ccall f_2027(C_word c,C_word *av) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word *av) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word *av) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word *av) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word *av) C_noret;
C_noret_decl(f_2045)
static void f_2045(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2048)
static void f_2048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word *av) C_noret;
C_noret_decl(f_2057)
static void f_2057(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word *av) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word *av) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word *av) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word *av) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word *av) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word *av) C_noret;
C_noret_decl(f_2130)
static void C_ccall f_2130(C_word c,C_word *av) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word *av) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word *av) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word *av) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word *av) C_noret;
C_noret_decl(f_2160)
static void C_ccall f_2160(C_word c,C_word *av) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word *av) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word *av) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word *av) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word *av) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word *av) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word *av) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word *av) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word *av) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word *av) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word *av) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word *av) C_noret;
C_noret_decl(f_2238)
static void C_ccall f_2238(C_word c,C_word *av) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word *av) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word *av) C_noret;
C_noret_decl(f_2249)
static void C_ccall f_2249(C_word c,C_word *av) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word *av) C_noret;
C_noret_decl(f_766)
static void C_ccall f_766(C_word c,C_word *av) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word *av) C_noret;
C_noret_decl(f_772)
static void C_ccall f_772(C_word c,C_word *av) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word *av) C_noret;
C_noret_decl(f_787)
static void f_787(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_791)
static void C_ccall f_791(C_word c,C_word *av) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word *av) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word *av) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word *av) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word *av) C_noret;
C_noret_decl(f_828)
static void f_828(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word *av) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word *av) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word *av) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word *av) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word *av) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word *av) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word *av) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word *av) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word *av) C_noret;
C_noret_decl(f_901)
static void C_ccall f_901(C_word c,C_word *av) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word *av) C_noret;
C_noret_decl(f_919)
static void f_919(C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word *av) C_noret;
C_noret_decl(f_945)
static void f_945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1041)
static void C_ccall trf_1041(C_word c,C_word *av) C_noret;
static void C_ccall trf_1041(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1041(t0,t1,t2);}

C_noret_decl(trf_1048)
static void C_ccall trf_1048(C_word c,C_word *av) C_noret;
static void C_ccall trf_1048(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1048(t0,t1);}

C_noret_decl(trf_1134)
static void C_ccall trf_1134(C_word c,C_word *av) C_noret;
static void C_ccall trf_1134(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1134(t0,t1);}

C_noret_decl(trf_1144)
static void C_ccall trf_1144(C_word c,C_word *av) C_noret;
static void C_ccall trf_1144(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1144(t0,t1);}

C_noret_decl(trf_1177)
static void C_ccall trf_1177(C_word c,C_word *av) C_noret;
static void C_ccall trf_1177(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1177(t0,t1,t2);}

C_noret_decl(trf_1213)
static void C_ccall trf_1213(C_word c,C_word *av) C_noret;
static void C_ccall trf_1213(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1213(t0,t1,t2);}

C_noret_decl(trf_1317)
static void C_ccall trf_1317(C_word c,C_word *av) C_noret;
static void C_ccall trf_1317(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1317(t0,t1);}

C_noret_decl(trf_1322)
static void C_ccall trf_1322(C_word c,C_word *av) C_noret;
static void C_ccall trf_1322(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1322(t0,t1,t2);}

C_noret_decl(trf_1453)
static void C_ccall trf_1453(C_word c,C_word *av) C_noret;
static void C_ccall trf_1453(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1453(t0,t1,t2,t3);}

C_noret_decl(trf_1583)
static void C_ccall trf_1583(C_word c,C_word *av) C_noret;
static void C_ccall trf_1583(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1583(t0,t1,t2,t3);}

C_noret_decl(trf_1667)
static void C_ccall trf_1667(C_word c,C_word *av) C_noret;
static void C_ccall trf_1667(C_word c,C_word *av){
C_word t0=av[0];
f_1667(t0);}

C_noret_decl(trf_1712)
static void C_ccall trf_1712(C_word c,C_word *av) C_noret;
static void C_ccall trf_1712(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1712(t0,t1);}

C_noret_decl(trf_1769)
static void C_ccall trf_1769(C_word c,C_word *av) C_noret;
static void C_ccall trf_1769(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1769(t0,t1);}

C_noret_decl(trf_1835)
static void C_ccall trf_1835(C_word c,C_word *av) C_noret;
static void C_ccall trf_1835(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1835(t0,t1,t2);}

C_noret_decl(trf_1875)
static void C_ccall trf_1875(C_word c,C_word *av) C_noret;
static void C_ccall trf_1875(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1875(t0,t1,t2);}

C_noret_decl(trf_1896)
static void C_ccall trf_1896(C_word c,C_word *av) C_noret;
static void C_ccall trf_1896(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1896(t0,t1,t2);}

C_noret_decl(trf_1984)
static void C_ccall trf_1984(C_word c,C_word *av) C_noret;
static void C_ccall trf_1984(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1984(t0,t1);}

C_noret_decl(trf_1989)
static void C_ccall trf_1989(C_word c,C_word *av) C_noret;
static void C_ccall trf_1989(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1989(t0,t1,t2);}

C_noret_decl(trf_2045)
static void C_ccall trf_2045(C_word c,C_word *av) C_noret;
static void C_ccall trf_2045(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2045(t0,t1);}

C_noret_decl(trf_2048)
static void C_ccall trf_2048(C_word c,C_word *av) C_noret;
static void C_ccall trf_2048(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2048(t0,t1);}

C_noret_decl(trf_2057)
static void C_ccall trf_2057(C_word c,C_word *av) C_noret;
static void C_ccall trf_2057(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2057(t0,t1,t2,t3,t4);}

C_noret_decl(trf_787)
static void C_ccall trf_787(C_word c,C_word *av) C_noret;
static void C_ccall trf_787(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_787(t0,t1,t2,t3,t4);}

C_noret_decl(trf_828)
static void C_ccall trf_828(C_word c,C_word *av) C_noret;
static void C_ccall trf_828(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_828(t0,t1,t2,t3);}

C_noret_decl(trf_919)
static void C_ccall trf_919(C_word c,C_word *av) C_noret;
static void C_ccall trf_919(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_919(t0,t1);}

C_noret_decl(trf_945)
static void C_ccall trf_945(C_word c,C_word *av) C_noret;
static void C_ccall trf_945(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_945(t0,t1);}

/* chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1013(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1013,c,av);}
a=C_alloc(10);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[31]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1023,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(0),C_u_i_string_length(t2));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1029,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t7)){
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t7;
f_1029(2,av2);}}
else{
/* file.scm:231: file-exists? */
t9=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k1021 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1023,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_1029,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1039,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1083,a[2]=((C_word*)t0)[3],a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1089,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* file.scm:233: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* file.scm:224: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[31];
tp(4,av2);}}}}

/* k1037 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1039,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1041,a[2]=t3,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1041(t5,((C_word*)t0)[2],t1);}

/* loop in k1037 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void f_1041(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1041,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1048,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1081,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* file.scm:235: directory-exists? */
t5=*((C_word*)lf[11]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=t3;
f_1048(t4,C_SCHEME_FALSE);}}

/* k1046 in loop in k1037 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void f_1048(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_1048,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1074,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:236: chicken.pathname#pathname-directory */
t4=C_fast_retrieve(lf[33]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1049 in k1046 in loop in k1037 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1051,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1067,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:224: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[31];
tp(4,av2);}}

/* k1065 in k1049 in k1046 in loop in k1037 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1067,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_eqp(C_fix(0),C_mkdir(t1));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* file.scm:225: posix-error */
f_787(((C_word*)t2)[2],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t2)[3]));}}

/* k1072 in k1046 in loop in k1037 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1074,c,av);}
/* file.scm:236: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1041(t2,((C_word*)t0)[3],t1);}

/* k1079 in loop in k1037 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1081,c,av);}
t2=((C_word*)t0)[2];
f_1048(t2,C_i_not(t1));}

/* a1082 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1083,c,av);}
/* file.scm:233: chicken.pathname#decompose-pathname */
t2=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1088 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1089,c,av);}
if(C_truep(t3)){
/* file.scm:234: chicken.pathname#make-pathname */
t5=C_fast_retrieve(lf[35]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k1110 in k1027 in chicken.file#create-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_1112,c,av);}
a=C_alloc(3);
t2=C_eqp(C_fix(0),C_mkdir(t1));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* file.scm:225: posix-error */
f_787(((C_word*)t0)[4],lf[14],lf[31],lf[32],C_a_i_list(&a,1,((C_word*)t0)[3]));}}

/* chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,6)))){
C_save_and_reclaim((void *)f_1128,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1134,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
t6=C_i_check_string_2(t2,lf[37]);
if(C_truep(t4)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1176,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:250: find-files */
t8=*((C_word*)lf[40]+1);{
C_word av2[7];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[41];
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[42];
av2[6]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(7,av2);}}
else{
/* file.scm:262: rmdir */
f_1134(t1,t2);}}

/* rmdir in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void f_1134(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1134,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1138,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:244: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k1136 in rmdir in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1138,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1144,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(C_fix(0),C_rmdir(t1));
if(C_truep(C_i_not(t3))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1161,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file.scm:246: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t4=t2;
f_1144(t4,C_SCHEME_FALSE);}}

/* k1142 in k1136 in rmdir in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void f_1144(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_1144,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* file.scm:247: posix-error */
f_787(((C_word*)t2)[2],lf[14],lf[37],lf[38],C_a_i_list(&a,1,((C_word*)t2)[3]));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1159 in k1136 in rmdir in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1161,c,av);}
t2=C_fix((C_word)ENOENT);
t3=((C_word*)t0)[2];
f_1144(t3,C_i_not(C_eqp(t1,t2)));}

/* k1174 in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_1176,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1177,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1208,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1213,a[2]=t5,a[3]=t2,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1213(t7,t3,t1);}

/* g287 in k1174 in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void f_1177(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_1177,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1202,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:218: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[37];
tp(4,av2);}}

/* k1193 in k1200 in g287 in k1174 in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1195,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* file.scm:255: g297 */
f_1134(((C_word*)t2)[3],((C_word*)t2)[4]);}
else{
t3=*((C_word*)lf[39]+1);
t4=*((C_word*)lf[39]+1);
/* file.scm:255: g297 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}}

/* k1200 in g287 in k1174 in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1202,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_lstat(t1);
if(C_truep(C_u_i_symbolic_linkp(t3))){
t4=*((C_word*)lf[39]+1);
t5=*((C_word*)lf[39]+1);
/* file.scm:255: g297 */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[39]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[39]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1195,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file.scm:257: directory-exists? */
t5=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k1206 in k1174 in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1208,c,av);}
t2=((C_word*)t0)[2];
/* file.scm:261: rmdir */
f_1134(((C_word*)t2)[3],((C_word*)t2)[4]);}

/* for-each-loop286 in k1174 in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void f_1213(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1213,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1223,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:254: g287 */
t4=((C_word*)t0)[3];
f_1177(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1221 in for-each-loop286 in k1174 in chicken.file#delete-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1223,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1213(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.file#delete-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1245,c,av);}
a=C_alloc(9);
t3=C_i_check_string_2(t2,lf[43]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1252,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1275,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* file.scm:269: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[43];
tp(4,av2);}}

/* k1250 in chicken.file#delete-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1252,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1260 in k1273 in chicken.file#delete-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1262,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1266,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1270,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1264 in k1260 in k1273 in chicken.file#delete-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1266,c,av);}
/* file.scm:270: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[43];
av2[5]=t1;
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}

/* k1268 in k1260 in k1273 in chicken.file#delete-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1270,c,av);}
/* file.scm:272: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[44]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
av2[3]=t1;
tp(4,av2);}}

/* k1273 in chicken.file#delete-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1275,c,av);}
a=C_alloc(4);
t2=C_eqp(C_fix(0),C_remove(t1));
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1262,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:271: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
tp(2,av2);}}}

/* chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1277,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1281,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1286,a[2]=t2,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
/* file.scm:276: scheme#call-with-current-continuation */
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1279 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1281(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1281,c,av);}
/* file.scm:275: g327 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1286,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1292,a[2]=t2,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1315,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp);
/* file.scm:276: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[51]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a1291 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1292,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1298,a[2]=t2,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
/* file.scm:276: k324 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1297 in a1291 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_1298,c,av);}
a=C_alloc(5);
t2=C_fix((C_word)ENOENT);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1313,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* file.scm:277: chicken.condition#get-condition-property */
t4=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[49];
av2[4]=lf[50];
av2[5]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k1311 in a1297 in a1291 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1313,c,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* file.scm:279: chicken.condition#signal */
t3=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* a1314 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1315,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1322,a[2]=((C_word*)t0)[3],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1339,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1732 */
t5=t2;
f_1317(t5,t4);}

/* tmp1732 in a1314 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void f_1317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_1317,2,t0,t1);}
/* file.scm:280: delete-file */
t2=*((C_word*)lf[39]+1);{
C_word av2[3];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* tmp2733 in a1314 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void f_1322(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1322,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1328,a[2]=t2,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
/* file.scm:276: k324 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1327 in tmp2733 in a1314 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1328,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k1337 in a1314 in a1285 in chicken.file#delete-file* in k773 in k770 in k767 in k764 */
static void C_ccall f_1339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1339,c,av);}
a=C_alloc(3);
/* tmp2733 */
t2=((C_word*)t0)[2];
f_1322(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1341,c,av);}
a=C_alloc(9);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_i_check_string_2(t2,lf[54]);
t7=C_i_check_string_2(t3,lf[54]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1354,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1387,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t5))){
/* file.scm:285: file-exists? */
t10=*((C_word*)lf[8]+1);{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
t10=t8;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_1354(2,av2);}}}

/* k1352 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1354,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1380,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* file.scm:289: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[54];
tp(4,av2);}}

/* k1355 in k1352 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1357,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1365 in k1382 in k1378 in k1352 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1367,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1371,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1375,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1369 in k1365 in k1382 in k1378 in k1352 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_1371,c,av);}
/* file.scm:291: ##sys#signal-hook/errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[14];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[54];
av2[5]=t1;
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
tp(8,av2);}}

/* k1373 in k1365 in k1382 in k1378 in k1352 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1375,c,av);}
/* file.scm:293: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[44]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[55];
av2[3]=t1;
tp(4,av2);}}

/* k1378 in k1352 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1380,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1384,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:290: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[54];
tp(4,av2);}}

/* k1382 in k1378 in k1352 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1384,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_eqp(C_fix(0),C_rename(((C_word*)t2)[2],t1));
if(C_truep(t3)){
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1367,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[6],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:292: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k1385 in chicken.file#rename-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1387,c,av);}
if(C_truep(t1)){
/* file.scm:286: ##sys#error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=lf[57];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1354(2,av2);}}}

/* chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1404,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(1024):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_check_string_2(t2,lf[59]);
t11=C_i_check_string_2(t3,lf[59]);
t12=C_i_check_number_2(t8,lf[59]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1429,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=t2,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t8))){
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1429(2,av2);}}
else{
/* file.scm:301: ##sys#error */
t14=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[59];
av2[3]=lf[69];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
/* file.scm:301: ##sys#error */
t14=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[59];
av2[3]=lf[69];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}

/* k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1429,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1495,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* file.scm:302: directory-exists? */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1432,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1435,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1483,a[2]=t3,a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t2)[6]))){
/* file.scm:304: file-exists? */
t5=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1435(2,av2);}}}

/* k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1435,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:306: scheme#open-input-file */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[65];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1438,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1441,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* file.scm:307: scheme#open-output-file */
t3=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[65];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1441,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1444,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* file.scm:308: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1442 in k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1444,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1451,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:309: chicken.io#read-bytevector! */
t4=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1449 in k1442 in k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1451,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1453,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t4,a[5]=((C_word*)t2)[4],a[6]=((C_word)li27),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1453(t6,((C_word*)t2)[5],t1,C_fix(0));}

/* loop in k1449 in k1442 in k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void f_1453(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1453,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1463,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* file.scm:313: scheme#close-input-port */
t6=*((C_word*)lf[61]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1469,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* file.scm:317: chicken.io#write-bytevector */
t6=C_fast_retrieve(lf[63]);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[2];
av2[4]=C_fix(0);
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}

/* k1461 in loop in k1449 in k1442 in k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1463,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:314: scheme#close-output-port */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1464 in k1461 in loop in k1449 in k1442 in k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1466,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1467 in loop in k1449 in k1442 in k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1469,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:318: chicken.io#read-bytevector! */
t3=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1474 in k1467 in loop in k1449 in k1442 in k1439 in k1436 in k1433 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1476,c,av);}
/* file.scm:318: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1453(t2,((C_word*)t0)[3],t1,C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k1481 in k1430 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1483,c,av);}
if(C_truep(t1)){
/* file.scm:305: ##sys#error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[59];
av2[3]=lf[67];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1435(2,av2);}}}

/* k1493 in k1427 in chicken.file#copy-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1495,c,av);}
if(C_truep(t1)){
/* file.scm:303: ##sys#error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[59];
av2[3]=lf[68];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1432(2,av2);}}}

/* chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_1534,c,av);}
a=C_alloc(7);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(1024):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_check_string_2(t2,lf[71]);
t11=C_i_check_string_2(t3,lf[71]);
t12=C_i_check_number_2(t8,lf[71]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1559,a[2]=t2,a[3]=t1,a[4]=t8,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_integerp(t8))){
if(C_truep(C_fixnum_greaterp(t8,C_fix(0)))){
t14=t13;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_SCHEME_UNDEFINED;
f_1559(2,av2);}}
else{
/* file.scm:325: ##sys#error */
t14=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[71];
av2[3]=lf[74];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}
else{
/* file.scm:325: ##sys#error */
t14=*((C_word*)lf[56]+1);{
C_word av2[5];
av2[0]=t14;
av2[1]=t13;
av2[2]=lf[71];
av2[3]=lf[74];
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}}

/* k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1559,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1562,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1628,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* file.scm:326: directory-exists? */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1562,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1565,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1616,a[2]=t3,a[3]=((C_word*)t2)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(((C_word*)t2)[6]))){
/* file.scm:328: file-exists? */
t5=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_1565(2,av2);}}}

/* k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1565,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1568,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:330: scheme#open-input-file */
t3=*((C_word*)lf[66]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[65];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1568,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1571,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp);
/* file.scm:331: scheme#open-output-file */
t4=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
av2[3]=lf[65];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1571,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1574,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* file.scm:332: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1574,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1581,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:333: chicken.io#read-bytevector! */
t4=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1579 in k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1581,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1583,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t4,a[6]=((C_word*)t2)[5],a[7]=((C_word)li29),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1583(t6,((C_word*)t2)[6],t1,C_fix(0));}

/* loop in k1579 in k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void f_1583(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,5)))){
C_save_and_reclaim_args((void *)trf_1583,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1593,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* file.scm:337: scheme#close-input-port */
t6=*((C_word*)lf[61]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1602,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* file.scm:342: chicken.io#write-bytevector */
t6=C_fast_retrieve(lf[63]);{
C_word av2[6];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[3];
av2[4]=C_fix(0);
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(6,av2);}}}

/* k1591 in loop in k1579 in k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1593,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* file.scm:338: scheme#close-output-port */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1594 in k1591 in loop in k1579 in k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1596,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* file.scm:339: delete-file */
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1597 in k1594 in k1591 in loop in k1579 in k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1599,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1600 in loop in k1579 in k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1602,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:343: chicken.io#read-bytevector! */
t3=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1607 in k1600 in loop in k1579 in k1572 in k1569 in k1566 in k1563 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1609,c,av);}
/* file.scm:343: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1583(t2,((C_word*)t0)[3],t1,C_fixnum_plus(((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k1614 in k1560 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1616,c,av);}
if(C_truep(t1)){
/* file.scm:329: ##sys#error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=lf[72];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1565(2,av2);}}}

/* k1626 in k1557 in chicken.file#move-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1628,c,av);}
if(C_truep(t1)){
/* file.scm:327: ##sys#error */
t2=*((C_word*)lf[56]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=lf[73];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_1562(2,av2);}}}

/* tempdir in k773 in k770 in k767 in k764 */
static void f_1667(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1667,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1671,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* file.scm:354: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[79]);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k1669 in tempdir in k773 in k770 in k767 in k764 */
static void C_ccall f_1671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1671,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* file.scm:355: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[83];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1675 in k1669 in tempdir in k773 in k770 in k767 in k764 */
static void C_ccall f_1677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1677,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* file.scm:356: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[82];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k1681 in k1675 in k1669 in tempdir in k773 in k770 in k767 in k764 */
static void C_ccall f_1683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1683,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_fast_retrieve(lf[76]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* file.scm:358: chicken.process-context#get-environment-variable */
t3=C_fast_retrieve(lf[79]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[80];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[81];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k1690 in k1681 in k1675 in k1669 in tempdir in k773 in k770 in k767 in k764 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1692,c,av);}
if(C_truep(t1)){
/* file.scm:360: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[77];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[78];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1700,c,av);}
a=C_alloc(9);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?lf[86]:C_get_rest_arg(c,2,av,2,t0));
t4=C_i_check_string_2(t3,lf[87]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1712,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li33),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1712(t8,t1);}

/* loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void f_1712(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_1712,2,t0,t1);}
a=C_alloc(11);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1718,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1737,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:370: tempdir */
f_1667(t4);}

/* k1716 in loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1718,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1724,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:377: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1722 in k1716 in loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1724,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* file.scm:378: loop */
t3=((C_word*)((C_word*)t2)[2])[1];
f_1712(t3,((C_word*)t2)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1732,a[2]=((C_word*)t2)[4],a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
/* file.scm:379: scheme#call-with-output-file */
t4=*((C_word*)lf[88]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[4];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* a1731 in k1722 in k1716 in loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1732,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1735 in loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1737,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1741,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1745,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1739 in k1735 in loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1741,c,av);}
/* file.scm:369: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[35]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1743 in k1735 in loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1745,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1749,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:375: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
av2[2]=stub452(C_SCHEME_UNDEFINED);
tp(3,av2);}}

/* k1747 in k1743 in k1735 in loop in chicken.file#create-temporary-file in k773 in k770 in k767 in k764 */
static void C_ccall f_1749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1749,c,av);}
t2=((C_word*)t0)[2];
/* file.scm:371: string-append */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=((C_word*)t2)[4];
av2[4]=lf[89];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1763,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1769,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li35),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1769(t5,t1);}

/* loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void f_1769(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_1769,2,t0,t1);}
a=C_alloc(10);
t2=C_random_fixnum(C_fix(65536));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1775,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1809,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* file.scm:386: tempdir */
f_1667(t4);}

/* k1773 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1775,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:392: file-exists? */
t4=*((C_word*)lf[8]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1779 in k1773 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1781,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* file.scm:393: loop */
t3=((C_word*)((C_word*)t2)[2])[1];
f_1769(t3,((C_word*)t2)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1788,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:394: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=lf[93];
tp(4,av2);}}}

/* k1786 in k1779 in k1773 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1788(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1788,c,av);}
a=C_alloc(9);
t2=C_mkdir(t1);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1801,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)strerror(errno));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1799 in k1786 in k1779 in k1773 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1801,c,av);}
t2=((C_word*)t0)[2];
/* file.scm:397: ##sys#signal-hook */
t3=*((C_word*)lf[92]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[14];
av2[3]=lf[93];
av2[4]=t1;
av2[5]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k1803 in k1786 in k1779 in k1773 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1805,c,av);}
/* file.scm:399: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[44]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[94];
av2[3]=t1;
tp(4,av2);}}

/* k1807 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1809,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1813,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1817,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(16);
tp(4,av2);}}

/* k1811 in k1807 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1813,c,av);}
/* file.scm:385: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[35]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k1815 in k1807 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1817,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:391: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t3;
av2[2]=stub461(C_SCHEME_UNDEFINED);
tp(3,av2);}}

/* k1819 in k1815 in k1807 in loop in chicken.file#create-temporary-directory in k773 in k770 in k767 in k764 */
static void C_ccall f_1821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1821,c,av);}
t2=((C_word*)t0)[2];
/* file.scm:387: string-append */
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=((C_word*)t2)[4];
av2[4]=lf[95];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_1829,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1835,a[2]=t4,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1835(t6,t1,t2);}

/* conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void f_1835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1835,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1850,a[2]=t3,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
/* file.scm:410: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}}

/* a1849 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1850,c,av);}
/* file.scm:410: chicken.pathname#decompose-pathname */
t2=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1856,c,av);}
a=C_alloc(13);
t5=(C_truep(t2)?t2:lf[97]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2010,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2014,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
/* file.scm:412: chicken.pathname#make-pathname */
t9=C_fast_retrieve(lf[35]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
/* file.scm:412: chicken.pathname#make-pathname */
t9=C_fast_retrieve(lf[35]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_SCHEME_FALSE;
av2[3]=lf[104];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}

/* k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_1863,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[6],a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
/* file.scm:413: scheme#call-with-current-continuation */
t4=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1870,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1873,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:413: g515 */
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k1871 in k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1873,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1875,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t4,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word)li39),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1875(t6,((C_word*)t2)[6],t1);}

/* loop in k1871 in k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void f_1875(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1875,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* file.scm:415: conc-loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1835(t4,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1892,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* file.scm:416: chicken.irregex#irregex-match */
t5=C_fast_retrieve(lf[99]);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k1890 in loop in k1871 in k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1892,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp);
/* file.scm:415: g501 */
t3=t2;
f_1896(t3,((C_word*)t0)[5],t1);}
else{
/* file.scm:420: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1875(t2,((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}

/* g501 in k1890 in loop in k1871 in k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void f_1896(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1896,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1904,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1916,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:418: chicken.irregex#irregex-match-substring */
t5=C_fast_retrieve(lf[98]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1902 in g501 in k1890 in loop in k1871 in k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1904,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* file.scm:419: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1875(t3,t2,C_i_cdr(((C_word*)t0)[4]));}

/* k1906 in k1902 in g501 in k1890 in loop in k1871 in k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1908,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k1914 in g501 in k1890 in loop in k1871 in k1868 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1916,c,av);}
/* file.scm:418: chicken.pathname#make-pathname */
t2=C_fast_retrieve(lf[35]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_1934,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1940,a[2]=t2,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1982,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp);
/* file.scm:413: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[51]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a1939 in a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1940,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1946,a[2]=t2,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
/* file.scm:413: k512 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1945 in a1939 in a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1946,c,av);}
t2=C_i_structurep(((C_word*)t0)[2],lf[100]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t3)){
if(C_truep(C_i_memq(lf[49],t3))){
if(C_truep(C_i_memq(lf[101],t3))){
if(C_truep(C_i_memq(lf[0],t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:413: chicken.condition#signal */
t4=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:413: chicken.condition#signal */
t4=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:413: chicken.condition#signal */
t4=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}
else{
/* file.scm:413: chicken.condition#signal */
t4=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* a1981 in a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_1982,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[2],a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[3],a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2006,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tmp1756 */
t5=t2;
f_1984(t5,t4);}

/* tmp1756 in a1981 in a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void f_1984(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1984,2,t0,t1);}
/* file.scm:413: directory */
t2=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* tmp2757 in a1981 in a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void f_1989(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1989,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1995,a[2]=t2,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
/* file.scm:413: k512 */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a1994 in tmp2757 in a1981 in a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_1995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1995,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
C_apply_values(3,av2);}}

/* k2004 in a1981 in a1933 in k1861 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_2006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2006,c,av);}
a=C_alloc(3);
/* tmp2757 */
t2=((C_word*)t0)[2];
f_1989(t2,((C_word*)t0)[3],C_a_i_list(&a,1,t1));}

/* k2008 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_2010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2010,c,av);}
/* file.scm:412: chicken.irregex#irregex */
t2=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2012 in a1855 in conc-loop in chicken.file#glob in k773 in k770 in k767 in k764 */
static void C_ccall f_2014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2014,c,av);}
/* file.scm:412: chicken.irregex#glob->sre */
t2=C_fast_retrieve(lf[103]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,4)))){
C_save_and_reclaim((void*)f_2020,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2024,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2249,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
/* file.scm:425: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[109]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t4;
av2[2]=lf[113];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}

/* k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2024,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2241,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
/* file.scm:425: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[109]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t2;
av2[2]=lf[112];
av2[3]=((C_word*)t0)[4];
av2[4]=t3;
tp(5,av2);}}

/* k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2027,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2030,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2238,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
/* file.scm:425: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[109]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t2;
av2[2]=lf[111];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
tp(5,av2);}}

/* k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_2030,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2235,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* file.scm:425: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[109]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t2;
av2[2]=lf[110];
av2[3]=((C_word*)t0)[6];
av2[4]=t3;
tp(5,av2);}}

/* k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_2033,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2232,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
/* file.scm:425: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[109]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t2;
av2[2]=lf[41];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
tp(5,av2);}}

/* k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_2036,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2229,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* file.scm:425: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[109]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t2;
av2[2]=lf[42];
av2[3]=((C_word*)t0)[8];
av2[4]=t3;
tp(5,av2);}}

/* k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_2039,c,av);}
a=C_alloc(17);
t2=C_i_check_string_2(((C_word*)t0)[2],lf[105]);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2045,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(((C_word*)t0)[8]))){
t6=t5;
f_2045(t6,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2215,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));}
else{
if(C_truep(C_fixnump(((C_word*)t0)[8]))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2223,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp);
t7=t5;
f_2045(t7,t6);}
else{
t6=t5;
f_2045(t6,((C_word*)t0)[8]);}}}

/* k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void f_2045(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_2045,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2048,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_closurep(((C_word*)t0)[9]))){
t3=t2;
f_2048(t3,((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2206,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file.scm:440: chicken.irregex#irregex */
t4=C_fast_retrieve(lf[102]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void f_2048(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_2048,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2055,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:443: directory */
t4=*((C_word*)lf[23]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_2055,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2057,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word)li53),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_2057(t6,((C_word*)t2)[8],((C_word*)t2)[9],t1,((C_word*)t2)[10]);}

/* loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void f_2057(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,3)))){
C_save_and_reclaim_args((void *)trf_2057,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_slot(t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2070,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* file.scm:448: chicken.pathname#make-pathname */
t7=C_fast_retrieve(lf[35]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2070,c,av);}
a=C_alloc(15);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* file.scm:450: directory-exists? */
t4=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_2079,c,av);}
a=C_alloc(14);
if(C_truep(t1)){
if(C_truep((C_truep(C_i_equalp(((C_word*)t0)[2],lf[106]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(((C_word*)t0)[2],lf[107]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* file.scm:451: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2057(t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2181,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* file.scm:218: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[105];
tp(4,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2190,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* file.scm:462: pproc */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k2099 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2101,c,av);}
/* file.scm:453: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2057(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2102 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2104,c,av);}
if(C_truep(t1)){
/* file.scm:453: action */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
/* file.scm:453: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2057(t2,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[5]);}}

/* k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_2113,c,av);}
a=C_alloc(31);
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2125,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word)li51),tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2150,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp);
/* file.scm:457: ##sys#dynamic-wind */
t11=*((C_word*)lf[108]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t7;
av2[2]=t8;
av2[3]=t9;
av2[4]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2160,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:461: pproc */
t4=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2121 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2123,c,av);}
/* file.scm:455: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2057(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* a2124 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2125,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2129 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2130,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* file.scm:459: directory */
t3=*((C_word*)lf[23]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2136 in a2129 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_2138,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2145,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* file.scm:460: pproc */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2140 in k2136 in a2129 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 in ... */
static void C_ccall f_2142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2142,c,av);}
/* file.scm:458: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2057(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2143 in k2136 in a2129 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 in ... */
static void C_ccall f_2145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2145,c,av);}
if(C_truep(t1)){
/* file.scm:460: action */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
/* file.scm:458: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2057(t2,((C_word*)t0)[7],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[5]);}}

/* a2149 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2150,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[4])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2158 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2160(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2160,c,av);}
/* file.scm:461: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2057(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2161 in k2111 in k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2163,c,av);}
if(C_truep(t1)){
/* file.scm:461: action */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}
else{
/* file.scm:461: loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2057(t2,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[5]);}}

/* k2179 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_2181,c,av);}
a=C_alloc(16);
t2=C_u_i_lstat(t1);
t3=(C_truep(C_u_i_symbolic_linkp(t2))?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2101,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* file.scm:453: pproc */
t6=((C_word*)t0)[10];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2113,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* file.scm:454: lproc */
t5=((C_word*)t0)[13];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k2188 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2190(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2190,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* file.scm:462: action */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}
else{
/* file.scm:463: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2057(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[8]);}}

/* k2195 in k2188 in k2077 in k2068 in loop in k2053 in k2046 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2197,c,av);}
/* file.scm:462: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2057(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k2204 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2206,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
f_2048(t2,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2207,a[2]=t1,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));}

/* f_2207 in k2204 in k2043 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2207,c,av);}
/* file.scm:441: chicken.irregex#irregex-match */
t3=C_fast_retrieve(lf[99]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* f_2215 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2215,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2223 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2223,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2228 in k2034 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2229,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2231 in k2031 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2232,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2234 in k2028 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2235,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2237 in k2025 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2238,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a2240 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2241,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2243,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2243 in a2240 in k2022 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2243,c,av);}
a=C_alloc(3);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2248 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2249,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2251,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_2251 in a2248 in chicken.file#find-files in k773 in k770 in k767 in k764 */
static void C_ccall f_2251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2251,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k764 */
static void C_ccall f_766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_766,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k767 in k764 */
static void C_ccall f_769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_769,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k770 in k767 in k764 */
static void C_ccall f_772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_772,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k773 in k770 in k767 in k764 */
static void C_ccall f_775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(64,c,6)))){
C_save_and_reclaim((void *)f_775,c,av);}
a=C_alloc(64);
t2=C_mutate(&lf[2] /* (set! chicken.file#posix-error ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_787,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[8]+1 /* (set! chicken.file#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[11]+1 /* (set! chicken.file#directory-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_816,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[13] /* (set! chicken.file#test-access ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_828,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[17]+1 /* (set! chicken.file#file-readable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_858,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[19]+1 /* (set! chicken.file#file-writable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_864,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[21]+1 /* (set! chicken.file#file-executable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[23]+1 /* (set! chicken.file#directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[30]+1 /* (set! chicken.file#create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1013,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[36]+1 /* (set! chicken.file#delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1128,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[39]+1 /* (set! chicken.file#delete-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1245,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[46]+1 /* (set! chicken.file#delete-file* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1277,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[53]+1 /* (set! chicken.file#rename-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1341,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[58]+1 /* (set! chicken.file#copy-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1404,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[70]+1 /* (set! chicken.file#move-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1534,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t17=lf[75];
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1667,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
t19=C_mutate((C_word*)lf[85]+1 /* (set! chicken.file#create-temporary-file ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1700,a[2]=t17,a[3]=t18,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t20=C_mutate((C_word*)lf[91]+1 /* (set! chicken.file#create-temporary-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1763,a[2]=t17,a[3]=t18,a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp));
t21=C_mutate((C_word*)lf[96]+1 /* (set! chicken.file#glob ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1829,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[40]+1 /* (set! chicken.file#find-files ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2020,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t23=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* chicken.file#posix-error in k773 in k770 in k767 in k764 */
static void f_787(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_787,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_791,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* file.scm:155: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t6;
tp(2,av2);}}

/* k789 in chicken.file#posix-error in k773 in k770 in k767 in k764 */
static void C_ccall f_791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_791,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_802,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
/* file.scm:152: ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=stub153(t4,t5);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k796 in k789 in chicken.file#posix-error in k773 in k770 in k767 in k764 */
static void C_ccall f_798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_798,c,av);}{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[3]);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
av2[6]=t1;
av2[7]=((C_word*)t0)[6];
C_apply(8,av2);}}

/* k800 in k789 in chicken.file#posix-error in k773 in k770 in k767 in k764 */
static void C_ccall f_802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_802,c,av);}
/* file.scm:157: string-append */
t2=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[5];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.file#file-exists? in k773 in k770 in k767 in k764 */
static void C_ccall f_804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_804,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[9]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_814,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:164: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[9];
tp(6,av2);}}

/* k812 in chicken.file#file-exists? in k773 in k770 in k767 in k764 */
static void C_ccall f_814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_814,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#directory-exists? in k773 in k770 in k767 in k764 */
static void C_ccall f_816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_816,c,av);}
a=C_alloc(4);
t3=C_i_check_string_2(t2,lf[12]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_826,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* file.scm:168: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[12];
tp(6,av2);}}

/* k824 in chicken.file#directory-exists? in k773 in k770 in k767 in k764 */
static void C_ccall f_826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_826,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.file#test-access in k773 in k770 in k767 in k764 */
static void f_828(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_828,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_836,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* file.scm:179: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[4];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}

/* k834 in chicken.file#test-access in k773 in k770 in k767 in k764 */
static void C_ccall f_836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_836,c,av);}
a=C_alloc(5);
t2=C_test_access(t1,((C_word*)t0)[2]);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_855,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* file.scm:181: ##sys#update-errno */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k853 in k834 in chicken.file#test-access in k773 in k770 in k767 in k764 */
static void C_ccall f_855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_855,c,av);}
a=C_alloc(3);
t2=C_fix((C_word)EACCES);
t3=C_eqp(t1,t2);
if(C_truep(t3)){
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* file.scm:183: posix-error */
f_787(((C_word*)t0)[2],lf[14],((C_word*)t0)[3],lf[15],C_a_i_list(&a,1,((C_word*)t0)[4]));}}

/* chicken.file#file-readable? in k773 in k770 in k767 in k764 */
static void C_ccall f_858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_858,c,av);}
/* file.scm:185: test-access */
f_828(t1,t2,C_fix((C_word)R_OK),lf[18]);}

/* chicken.file#file-writable? in k773 in k770 in k767 in k764 */
static void C_ccall f_864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_864,c,av);}
/* file.scm:186: test-access */
f_828(t1,t2,C_fix((C_word)W_OK),lf[20]);}

/* chicken.file#file-executable? in k773 in k770 in k767 in k764 */
static void C_ccall f_870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_870,c,av);}
/* file.scm:187: test-access */
f_828(t1,t2,C_fix((C_word)X_OK),lf[22]);}

/* chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_876,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_880,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* file.scm:192: chicken.process-context#current-directory */
t4=C_fast_retrieve(lf[29]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_car(t2);
f_880(2,av2);}}}

/* k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_880,c,av);}
a=C_alloc(8);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=C_i_check_string_2(t1,lf[24]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_895,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* file.scm:194: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t9;
av2[2]=C_fix(256);
tp(3,av2);}}

/* k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_895,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_898,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* file.scm:195: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t3;
tp(2,av2);}}

/* k896 in k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_898,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_901,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file.scm:196: ##sys#make-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2=av;
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t4;
tp(2,av2);}}

/* k899 in k896 in k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_901,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_905,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* file.scm:199: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
av2[3]=lf[24];
tp(4,av2);}}

/* k903 in k899 in k896 in k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_905,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_opendir(t1,((C_word*)t2)[2]);
if(C_truep(C_null_pointerp(((C_word*)t2)[2]))){
/* file.scm:201: posix-error */
f_787(((C_word*)t2)[3],lf[14],lf[24],lf[25],C_a_i_list(&a,1,((C_word*)t2)[4]));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_919,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=t5,a[6]=((C_word*)t2)[7],a[7]=((C_word)li7),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_919(t7,((C_word*)t2)[3]);}}

/* loop in k903 in k899 in k896 in k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void f_919(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_919,2,t0,t1);}
a=C_alloc(6);
t2=C_readdir(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_null_pointerp(((C_word*)t0)[3]))){
t3=C_closedir(((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_block_size(((C_word*)t0)[4]);
t4=C_foundfile(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_933,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* file.scm:207: ##sys#buffer->string */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t4;
tp(5,av2);}}}

/* k931 in loop in k903 in k899 in k896 in k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_933,c,av);}
a=C_alloc(5);
t2=C_i_string_ref(t1,C_fix(0));
t3=C_fixnum_greaterp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_945,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_make_character(46),t2);
if(C_truep(t6)){
t7=C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_945(t8,t7);}
else{
t8=C_eqp(C_make_character(46),t4);
if(C_truep(t8)){
t9=C_eqp(C_fix(2),((C_word*)t0)[2]);
t10=t5;
f_945(t10,(C_truep(t9)?t9:C_i_not(((C_word*)t0)[5])));}
else{
t9=t5;
f_945(t9,C_i_not(((C_word*)t0)[5]));}}}
else{
t7=t5;
f_945(t7,C_SCHEME_FALSE);}}

/* k943 in k931 in loop in k903 in k899 in k896 in k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void f_945(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_945,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
/* file.scm:214: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_919(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_955,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* file.scm:215: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_919(t3,t2);}}

/* k953 in k943 in k931 in loop in k903 in k899 in k896 in k893 in k878 in chicken.file#directory in k773 in k770 in k767 in k764 */
static void C_ccall f_955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_955,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_file_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("file"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_file_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(574))){
C_save(t1);
C_rereclaim2(574*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,114);
lf[0]=C_h_intern(&lf[0],4, C_text("file"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.file#"));
lf[3]=C_h_intern(&lf[3],23, C_text("##sys#signal-hook/errno"));
lf[4]=C_h_intern(&lf[4],20, C_text("scheme#string-append"));
lf[5]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\055\040\000"));
lf[6]=C_h_intern(&lf[6],19, C_text("##sys#peek-c-string"));
lf[7]=C_h_intern(&lf[7],18, C_text("##sys#update-errno"));
lf[8]=C_h_intern(&lf[8],25, C_text("chicken.file#file-exists?"));
lf[9]=C_h_intern(&lf[9],12, C_text("file-exists?"));
lf[10]=C_h_intern(&lf[10],18, C_text("##sys#file-exists?"));
lf[11]=C_h_intern(&lf[11],30, C_text("chicken.file#directory-exists?"));
lf[12]=C_h_intern(&lf[12],17, C_text("directory-exists?"));
lf[14]=C_h_intern_kw(&lf[14],10, C_text("file-error"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\143\141\156\156\157\164\040\141\143\143\145\163\163\040\146\151\154\145\000"));
lf[16]=C_h_intern(&lf[16],19, C_text("##sys#make-c-string"));
lf[17]=C_h_intern(&lf[17],27, C_text("chicken.file#file-readable?"));
lf[18]=C_h_intern(&lf[18],14, C_text("file-readable?"));
lf[19]=C_h_intern(&lf[19],27, C_text("chicken.file#file-writable?"));
lf[20]=C_h_intern(&lf[20],14, C_text("file-writable?"));
lf[21]=C_h_intern(&lf[21],29, C_text("chicken.file#file-executable?"));
lf[22]=C_h_intern(&lf[22],16, C_text("file-executable?"));
lf[23]=C_h_intern(&lf[23],22, C_text("chicken.file#directory"));
lf[24]=C_h_intern(&lf[24],9, C_text("directory"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\157\160\145\156\040\144\151\162\145\143\164\157\162\171\000"));
lf[26]=C_h_intern(&lf[26],20, C_text("##sys#buffer->string"));
lf[27]=C_h_intern(&lf[27],18, C_text("##sys#make-pointer"));
lf[28]=C_h_intern(&lf[28],21, C_text("##sys#make-bytevector"));
lf[29]=C_h_intern(&lf[29],41, C_text("chicken.process-context#current-directory"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.file#create-directory"));
lf[31]=C_h_intern(&lf[31],16, C_text("create-directory"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\143\162\145\141\164\145\040\144\151\162\145\143\164\157\162\171\000"));
lf[33]=C_h_intern(&lf[33],35, C_text("chicken.pathname#pathname-directory"));
lf[34]=C_h_intern(&lf[34],35, C_text("chicken.pathname#decompose-pathname"));
lf[35]=C_h_intern(&lf[35],30, C_text("chicken.pathname#make-pathname"));
lf[36]=C_h_intern(&lf[36],29, C_text("chicken.file#delete-directory"));
lf[37]=C_h_intern(&lf[37],16, C_text("delete-directory"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\144\145\154\145\164\145\040\144\151\162\145\143\164\157\162\171\000"));
lf[39]=C_h_intern(&lf[39],24, C_text("chicken.file#delete-file"));
lf[40]=C_h_intern(&lf[40],23, C_text("chicken.file#find-files"));
lf[41]=C_h_intern_kw(&lf[41],8, C_text("dotfiles"));
lf[42]=C_h_intern_kw(&lf[42],15, C_text("follow-symlinks"));
lf[43]=C_h_intern(&lf[43],11, C_text("delete-file"));
lf[44]=C_h_intern(&lf[44],19, C_text("##sys#string-append"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\144\145\154\145\164\145\040\146\151\154\145\040\055\040\000"));
lf[46]=C_h_intern(&lf[46],25, C_text("chicken.file#delete-file*"));
lf[47]=C_h_intern(&lf[47],24, C_text("chicken.condition#signal"));
lf[48]=C_h_intern(&lf[48],40, C_text("chicken.condition#get-condition-property"));
lf[49]=C_h_intern(&lf[49],3, C_text("exn"));
lf[50]=C_h_intern(&lf[50],5, C_text("errno"));
lf[51]=C_h_intern(&lf[51],40, C_text("chicken.condition#with-exception-handler"));
lf[52]=C_h_intern(&lf[52],37, C_text("scheme#call-with-current-continuation"));
lf[53]=C_h_intern(&lf[53],24, C_text("chicken.file#rename-file"));
lf[54]=C_h_intern(&lf[54],11, C_text("rename-file"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\162\145\156\141\155\145\040\146\151\154\145\040\055\040\000"));
lf[56]=C_h_intern(&lf[56],11, C_text("##sys#error"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\145\167\146\151\154\145\040\145\170\151\163\164\163\040\142\165\164\040\143\154\157\142\142\145\162\040\151\163\040\146\141\154\163\145\000"));
lf[58]=C_h_intern(&lf[58],22, C_text("chicken.file#copy-file"));
lf[59]=C_h_intern(&lf[59],9, C_text("copy-file"));
lf[60]=C_h_intern(&lf[60],24, C_text("scheme#close-output-port"));
lf[61]=C_h_intern(&lf[61],23, C_text("scheme#close-input-port"));
lf[62]=C_h_intern(&lf[62],27, C_text("chicken.io#read-bytevector!"));
lf[63]=C_h_intern(&lf[63],27, C_text("chicken.io#write-bytevector"));
lf[64]=C_h_intern(&lf[64],23, C_text("scheme#open-output-file"));
lf[65]=C_h_intern_kw(&lf[65],6, C_text("binary"));
lf[66]=C_h_intern(&lf[66],22, C_text("scheme#open-input-file"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\145\167\146\151\154\145\040\145\170\151\163\164\163\040\142\165\164\040\143\154\157\142\142\145\162\040\151\163\040\146\141\154\163\145\000"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\143\157\160\171\040\144\151\162\145\143\164\157\162\151\145\163\000"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\151\156\166\141\154\151\144\040\142\154\157\143\153\163\151\172\145\040\055\040\156\157\164\040\141\040\160\157\163\151\164\151\166\145\040\151\156\164\145\147\145\162\000"));
lf[70]=C_h_intern(&lf[70],22, C_text("chicken.file#move-file"));
lf[71]=C_h_intern(&lf[71],9, C_text("move-file"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\145\167\146\151\154\145\040\145\170\151\163\164\163\040\142\165\164\040\143\154\157\142\142\145\162\040\151\163\040\146\141\154\163\145\000"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\143\141\156\156\157\164\040\155\157\166\145\040\144\151\162\145\143\164\157\162\151\145\163\000"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\151\156\166\141\154\151\144\040\142\154\157\143\153\163\151\172\145\040\055\040\156\157\164\040\141\040\160\157\163\151\164\151\166\145\040\151\156\164\145\147\145\162\000"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\164\145\155\160\000"));
lf[76]=C_h_intern(&lf[76],22, C_text("##sys#windows-platform"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\057\101\160\160\104\141\164\141\057\114\157\143\141\154\057\124\145\155\160\000"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[79]=C_h_intern(&lf[79],48, C_text("chicken.process-context#get-environment-variable"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\125\123\105\122\120\122\117\106\111\114\105\000"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\057\164\155\160\000"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\124\115\120\000"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\124\105\115\120\000"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\124\115\120\104\111\122\000"));
lf[85]=C_h_intern(&lf[85],34, C_text("chicken.file#create-temporary-file"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\164\155\160\000"));
lf[87]=C_h_intern(&lf[87],21, C_text("create-temporary-file"));
lf[88]=C_h_intern(&lf[88],28, C_text("scheme#call-with-output-file"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[90]=C_h_intern(&lf[90],20, C_text("##sys#number->string"));
lf[91]=C_h_intern(&lf[91],39, C_text("chicken.file#create-temporary-directory"));
lf[92]=C_h_intern(&lf[92],17, C_text("##sys#signal-hook"));
lf[93]=C_h_intern(&lf[93],26, C_text("create-temporary-directory"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\143\141\156\156\157\164\040\143\162\145\141\164\145\040\164\145\155\160\157\162\141\162\171\040\144\151\162\145\143\164\157\162\171\040\055\040\000"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[96]=C_h_intern(&lf[96],17, C_text("chicken.file#glob"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[98]=C_h_intern(&lf[98],39, C_text("chicken.irregex#irregex-match-substring"));
lf[99]=C_h_intern(&lf[99],29, C_text("chicken.irregex#irregex-match"));
lf[100]=C_h_intern(&lf[100],9, C_text("condition"));
lf[101]=C_h_intern(&lf[101],3, C_text("i/o"));
lf[102]=C_h_intern(&lf[102],23, C_text("chicken.irregex#irregex"));
lf[103]=C_h_intern(&lf[103],25, C_text("chicken.irregex#glob->sre"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\052\000"));
lf[105]=C_h_intern(&lf[105],10, C_text("find-files"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\056\000"));
lf[108]=C_h_intern(&lf[108],18, C_text("##sys#dynamic-wind"));
lf[109]=C_h_intern(&lf[109],17, C_text("##sys#get-keyword"));
lf[110]=C_h_intern_kw(&lf[110],5, C_text("limit"));
lf[111]=C_h_intern_kw(&lf[111],4, C_text("seed"));
lf[112]=C_h_intern_kw(&lf[112],6, C_text("action"));
lf[113]=C_h_intern_kw(&lf[113],4, C_text("test"));
C_register_lf2(lf,114,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_766,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[200] = {
{C_text("f_1013:file_2escm"),(void*)f_1013},
{C_text("f_1023:file_2escm"),(void*)f_1023},
{C_text("f_1029:file_2escm"),(void*)f_1029},
{C_text("f_1039:file_2escm"),(void*)f_1039},
{C_text("f_1041:file_2escm"),(void*)f_1041},
{C_text("f_1048:file_2escm"),(void*)f_1048},
{C_text("f_1051:file_2escm"),(void*)f_1051},
{C_text("f_1067:file_2escm"),(void*)f_1067},
{C_text("f_1074:file_2escm"),(void*)f_1074},
{C_text("f_1081:file_2escm"),(void*)f_1081},
{C_text("f_1083:file_2escm"),(void*)f_1083},
{C_text("f_1089:file_2escm"),(void*)f_1089},
{C_text("f_1112:file_2escm"),(void*)f_1112},
{C_text("f_1128:file_2escm"),(void*)f_1128},
{C_text("f_1134:file_2escm"),(void*)f_1134},
{C_text("f_1138:file_2escm"),(void*)f_1138},
{C_text("f_1144:file_2escm"),(void*)f_1144},
{C_text("f_1161:file_2escm"),(void*)f_1161},
{C_text("f_1176:file_2escm"),(void*)f_1176},
{C_text("f_1177:file_2escm"),(void*)f_1177},
{C_text("f_1195:file_2escm"),(void*)f_1195},
{C_text("f_1202:file_2escm"),(void*)f_1202},
{C_text("f_1208:file_2escm"),(void*)f_1208},
{C_text("f_1213:file_2escm"),(void*)f_1213},
{C_text("f_1223:file_2escm"),(void*)f_1223},
{C_text("f_1245:file_2escm"),(void*)f_1245},
{C_text("f_1252:file_2escm"),(void*)f_1252},
{C_text("f_1262:file_2escm"),(void*)f_1262},
{C_text("f_1266:file_2escm"),(void*)f_1266},
{C_text("f_1270:file_2escm"),(void*)f_1270},
{C_text("f_1275:file_2escm"),(void*)f_1275},
{C_text("f_1277:file_2escm"),(void*)f_1277},
{C_text("f_1281:file_2escm"),(void*)f_1281},
{C_text("f_1286:file_2escm"),(void*)f_1286},
{C_text("f_1292:file_2escm"),(void*)f_1292},
{C_text("f_1298:file_2escm"),(void*)f_1298},
{C_text("f_1313:file_2escm"),(void*)f_1313},
{C_text("f_1315:file_2escm"),(void*)f_1315},
{C_text("f_1317:file_2escm"),(void*)f_1317},
{C_text("f_1322:file_2escm"),(void*)f_1322},
{C_text("f_1328:file_2escm"),(void*)f_1328},
{C_text("f_1339:file_2escm"),(void*)f_1339},
{C_text("f_1341:file_2escm"),(void*)f_1341},
{C_text("f_1354:file_2escm"),(void*)f_1354},
{C_text("f_1357:file_2escm"),(void*)f_1357},
{C_text("f_1367:file_2escm"),(void*)f_1367},
{C_text("f_1371:file_2escm"),(void*)f_1371},
{C_text("f_1375:file_2escm"),(void*)f_1375},
{C_text("f_1380:file_2escm"),(void*)f_1380},
{C_text("f_1384:file_2escm"),(void*)f_1384},
{C_text("f_1387:file_2escm"),(void*)f_1387},
{C_text("f_1404:file_2escm"),(void*)f_1404},
{C_text("f_1429:file_2escm"),(void*)f_1429},
{C_text("f_1432:file_2escm"),(void*)f_1432},
{C_text("f_1435:file_2escm"),(void*)f_1435},
{C_text("f_1438:file_2escm"),(void*)f_1438},
{C_text("f_1441:file_2escm"),(void*)f_1441},
{C_text("f_1444:file_2escm"),(void*)f_1444},
{C_text("f_1451:file_2escm"),(void*)f_1451},
{C_text("f_1453:file_2escm"),(void*)f_1453},
{C_text("f_1463:file_2escm"),(void*)f_1463},
{C_text("f_1466:file_2escm"),(void*)f_1466},
{C_text("f_1469:file_2escm"),(void*)f_1469},
{C_text("f_1476:file_2escm"),(void*)f_1476},
{C_text("f_1483:file_2escm"),(void*)f_1483},
{C_text("f_1495:file_2escm"),(void*)f_1495},
{C_text("f_1534:file_2escm"),(void*)f_1534},
{C_text("f_1559:file_2escm"),(void*)f_1559},
{C_text("f_1562:file_2escm"),(void*)f_1562},
{C_text("f_1565:file_2escm"),(void*)f_1565},
{C_text("f_1568:file_2escm"),(void*)f_1568},
{C_text("f_1571:file_2escm"),(void*)f_1571},
{C_text("f_1574:file_2escm"),(void*)f_1574},
{C_text("f_1581:file_2escm"),(void*)f_1581},
{C_text("f_1583:file_2escm"),(void*)f_1583},
{C_text("f_1593:file_2escm"),(void*)f_1593},
{C_text("f_1596:file_2escm"),(void*)f_1596},
{C_text("f_1599:file_2escm"),(void*)f_1599},
{C_text("f_1602:file_2escm"),(void*)f_1602},
{C_text("f_1609:file_2escm"),(void*)f_1609},
{C_text("f_1616:file_2escm"),(void*)f_1616},
{C_text("f_1628:file_2escm"),(void*)f_1628},
{C_text("f_1667:file_2escm"),(void*)f_1667},
{C_text("f_1671:file_2escm"),(void*)f_1671},
{C_text("f_1677:file_2escm"),(void*)f_1677},
{C_text("f_1683:file_2escm"),(void*)f_1683},
{C_text("f_1692:file_2escm"),(void*)f_1692},
{C_text("f_1700:file_2escm"),(void*)f_1700},
{C_text("f_1712:file_2escm"),(void*)f_1712},
{C_text("f_1718:file_2escm"),(void*)f_1718},
{C_text("f_1724:file_2escm"),(void*)f_1724},
{C_text("f_1732:file_2escm"),(void*)f_1732},
{C_text("f_1737:file_2escm"),(void*)f_1737},
{C_text("f_1741:file_2escm"),(void*)f_1741},
{C_text("f_1745:file_2escm"),(void*)f_1745},
{C_text("f_1749:file_2escm"),(void*)f_1749},
{C_text("f_1763:file_2escm"),(void*)f_1763},
{C_text("f_1769:file_2escm"),(void*)f_1769},
{C_text("f_1775:file_2escm"),(void*)f_1775},
{C_text("f_1781:file_2escm"),(void*)f_1781},
{C_text("f_1788:file_2escm"),(void*)f_1788},
{C_text("f_1801:file_2escm"),(void*)f_1801},
{C_text("f_1805:file_2escm"),(void*)f_1805},
{C_text("f_1809:file_2escm"),(void*)f_1809},
{C_text("f_1813:file_2escm"),(void*)f_1813},
{C_text("f_1817:file_2escm"),(void*)f_1817},
{C_text("f_1821:file_2escm"),(void*)f_1821},
{C_text("f_1829:file_2escm"),(void*)f_1829},
{C_text("f_1835:file_2escm"),(void*)f_1835},
{C_text("f_1850:file_2escm"),(void*)f_1850},
{C_text("f_1856:file_2escm"),(void*)f_1856},
{C_text("f_1863:file_2escm"),(void*)f_1863},
{C_text("f_1870:file_2escm"),(void*)f_1870},
{C_text("f_1873:file_2escm"),(void*)f_1873},
{C_text("f_1875:file_2escm"),(void*)f_1875},
{C_text("f_1892:file_2escm"),(void*)f_1892},
{C_text("f_1896:file_2escm"),(void*)f_1896},
{C_text("f_1904:file_2escm"),(void*)f_1904},
{C_text("f_1908:file_2escm"),(void*)f_1908},
{C_text("f_1916:file_2escm"),(void*)f_1916},
{C_text("f_1934:file_2escm"),(void*)f_1934},
{C_text("f_1940:file_2escm"),(void*)f_1940},
{C_text("f_1946:file_2escm"),(void*)f_1946},
{C_text("f_1982:file_2escm"),(void*)f_1982},
{C_text("f_1984:file_2escm"),(void*)f_1984},
{C_text("f_1989:file_2escm"),(void*)f_1989},
{C_text("f_1995:file_2escm"),(void*)f_1995},
{C_text("f_2006:file_2escm"),(void*)f_2006},
{C_text("f_2010:file_2escm"),(void*)f_2010},
{C_text("f_2014:file_2escm"),(void*)f_2014},
{C_text("f_2020:file_2escm"),(void*)f_2020},
{C_text("f_2024:file_2escm"),(void*)f_2024},
{C_text("f_2027:file_2escm"),(void*)f_2027},
{C_text("f_2030:file_2escm"),(void*)f_2030},
{C_text("f_2033:file_2escm"),(void*)f_2033},
{C_text("f_2036:file_2escm"),(void*)f_2036},
{C_text("f_2039:file_2escm"),(void*)f_2039},
{C_text("f_2045:file_2escm"),(void*)f_2045},
{C_text("f_2048:file_2escm"),(void*)f_2048},
{C_text("f_2055:file_2escm"),(void*)f_2055},
{C_text("f_2057:file_2escm"),(void*)f_2057},
{C_text("f_2070:file_2escm"),(void*)f_2070},
{C_text("f_2079:file_2escm"),(void*)f_2079},
{C_text("f_2101:file_2escm"),(void*)f_2101},
{C_text("f_2104:file_2escm"),(void*)f_2104},
{C_text("f_2113:file_2escm"),(void*)f_2113},
{C_text("f_2123:file_2escm"),(void*)f_2123},
{C_text("f_2125:file_2escm"),(void*)f_2125},
{C_text("f_2130:file_2escm"),(void*)f_2130},
{C_text("f_2138:file_2escm"),(void*)f_2138},
{C_text("f_2142:file_2escm"),(void*)f_2142},
{C_text("f_2145:file_2escm"),(void*)f_2145},
{C_text("f_2150:file_2escm"),(void*)f_2150},
{C_text("f_2160:file_2escm"),(void*)f_2160},
{C_text("f_2163:file_2escm"),(void*)f_2163},
{C_text("f_2181:file_2escm"),(void*)f_2181},
{C_text("f_2190:file_2escm"),(void*)f_2190},
{C_text("f_2197:file_2escm"),(void*)f_2197},
{C_text("f_2206:file_2escm"),(void*)f_2206},
{C_text("f_2207:file_2escm"),(void*)f_2207},
{C_text("f_2215:file_2escm"),(void*)f_2215},
{C_text("f_2223:file_2escm"),(void*)f_2223},
{C_text("f_2229:file_2escm"),(void*)f_2229},
{C_text("f_2232:file_2escm"),(void*)f_2232},
{C_text("f_2235:file_2escm"),(void*)f_2235},
{C_text("f_2238:file_2escm"),(void*)f_2238},
{C_text("f_2241:file_2escm"),(void*)f_2241},
{C_text("f_2243:file_2escm"),(void*)f_2243},
{C_text("f_2249:file_2escm"),(void*)f_2249},
{C_text("f_2251:file_2escm"),(void*)f_2251},
{C_text("f_766:file_2escm"),(void*)f_766},
{C_text("f_769:file_2escm"),(void*)f_769},
{C_text("f_772:file_2escm"),(void*)f_772},
{C_text("f_775:file_2escm"),(void*)f_775},
{C_text("f_787:file_2escm"),(void*)f_787},
{C_text("f_791:file_2escm"),(void*)f_791},
{C_text("f_798:file_2escm"),(void*)f_798},
{C_text("f_802:file_2escm"),(void*)f_802},
{C_text("f_804:file_2escm"),(void*)f_804},
{C_text("f_814:file_2escm"),(void*)f_814},
{C_text("f_816:file_2escm"),(void*)f_816},
{C_text("f_826:file_2escm"),(void*)f_826},
{C_text("f_828:file_2escm"),(void*)f_828},
{C_text("f_836:file_2escm"),(void*)f_836},
{C_text("f_855:file_2escm"),(void*)f_855},
{C_text("f_858:file_2escm"),(void*)f_858},
{C_text("f_864:file_2escm"),(void*)f_864},
{C_text("f_870:file_2escm"),(void*)f_870},
{C_text("f_876:file_2escm"),(void*)f_876},
{C_text("f_880:file_2escm"),(void*)f_880},
{C_text("f_895:file_2escm"),(void*)f_895},
{C_text("f_898:file_2escm"),(void*)f_898},
{C_text("f_901:file_2escm"),(void*)f_901},
{C_text("f_905:file_2escm"),(void*)f_905},
{C_text("f_919:file_2escm"),(void*)f_919},
{C_text("f_933:file_2escm"),(void*)f_933},
{C_text("f_945:file_2escm"),(void*)f_945},
{C_text("f_955:file_2escm"),(void*)f_955},
{C_text("toplevel:file_2escm"),(void*)C_file_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|hiding unexported module binding: chicken.file#d 
o|hiding unexported module binding: chicken.file#define-alias 
o|hiding unexported module binding: chicken.file#posix-error 
o|hiding unexported module binding: chicken.file#test-access 
S|applied compiler syntax:
S|  scheme#for-each		1
o|eliminated procedure checks: 23 
o|specializations:
o|  1 (scheme#cdr pair)
o|  2 (scheme#number->string * *)
o|  2 (scheme#integer? *)
o|  2 (##sys#call-with-values (procedure () *) *)
o|  1 (##sys#check-list (or pair list) *)
o|  1 (scheme#string-length string)
o|  1 (scheme#string-ref string fixnum)
(o e)|safe calls: 211 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-file 
o|dropping redundant toplevel assignment: chicken.file#create-temporary-directory 
o|safe globals: (chicken.file#find-files chicken.file#glob chicken.file#create-temporary-directory chicken.file#create-temporary-file chicken.file#move-file chicken.file#copy-file chicken.file#rename-file chicken.file#delete-file* chicken.file#delete-file chicken.file#delete-directory chicken.file#create-directory chicken.file#directory chicken.file#file-executable? chicken.file#file-writable? chicken.file#file-readable? chicken.file#test-access chicken.file#directory-exists? chicken.file#file-exists? chicken.file#posix-error) 
o|merged explicitly consed rest parameter: args160 
o|contracted procedure: "(file.scm:157) strerror150" 
o|inlining procedure: k809 
o|inlining procedure: k809 
o|inlining procedure: k821 
o|inlining procedure: k821 
o|inlining procedure: k840 
o|inlining procedure: k840 
o|consed rest parameter at call site: "(file.scm:183) chicken.file#posix-error" 4 
o|inlining procedure: k906 
o|consed rest parameter at call site: "(file.scm:201) chicken.file#posix-error" 4 
o|inlining procedure: k906 
o|inlining procedure: k921 
o|inlining procedure: k921 
o|inlining procedure: k962 
o|inlining procedure: k962 
o|substituted constant variable: a984 
o|inlining procedure: k1021 
o|inlining procedure: k1021 
o|inlining procedure: k1043 
o|contracted procedure: "(file.scm:237) g242243" 
o|inlining procedure: k1054 
o|inlining procedure: k1054 
o|consed rest parameter at call site: "(file.scm:225) chicken.file#posix-error" 4 
o|inlining procedure: k1043 
o|inlining procedure: k1091 
o|inlining procedure: k1091 
o|contracted procedure: "(file.scm:238) g260261" 
o|inlining procedure: k1099 
o|inlining procedure: k1099 
o|consed rest parameter at call site: "(file.scm:225) chicken.file#posix-error" 4 
o|inlining procedure: k1139 
o|consed rest parameter at call site: "(file.scm:247) chicken.file#posix-error" 4 
o|inlining procedure: k1139 
o|inlining procedure: k1179 
o|propagated global variable: r11802279 chicken.file#delete-file 
o|inlining procedure: k1179 
o|contracted procedure: "(file.scm:256) g303304" 
o|contracted procedure: "(file.scm:256) g306307" 
o|inlining procedure: k1171 
o|inlining procedure: k1215 
o|inlining procedure: k1215 
o|inlining procedure: k1171 
o|inlining procedure: k1250 
o|inlining procedure: k1250 
o|inlining procedure: k1300 
o|inlining procedure: k1300 
o|merged explicitly consed rest parameter: args325332 
o|consed rest parameter at call site: tmp2733 1 
o|inlining procedure: k1355 
o|inlining procedure: k1355 
o|inlining procedure: k1455 
o|inlining procedure: k1455 
o|inlining procedure: k1585 
o|inlining procedure: k1585 
o|inlining procedure: k1672 
o|inlining procedure: k1672 
o|inlining procedure: k1684 
o|inlining procedure: k1684 
o|inlining procedure: k1693 
o|inlining procedure: k1693 
o|inlining procedure: k1719 
o|inlining procedure: k1719 
o|contracted procedure: "(file.scm:375) getpid451" 
o|substituted constant variable: a1755 
o|inlining procedure: k1776 
o|inlining procedure: k1776 
o|contracted procedure: "(file.scm:391) getpid460" 
o|substituted constant variable: a1827 
o|inlining procedure: k1837 
o|inlining procedure: k1837 
o|inlining procedure: k1877 
o|inlining procedure: k1877 
o|inlining procedure: k1951 
o|inlining procedure: k1951 
o|inlining procedure: k1960 
o|inlining procedure: k1960 
o|merged explicitly consed rest parameter: args513528 
o|consed rest parameter at call site: tmp2757 1 
o|inlining procedure: k2016 
o|inlining procedure: k2016 
o|inlining procedure: k2059 
o|inlining procedure: k2059 
o|inlining procedure: k2080 
o|inlining procedure: k2080 
o|inlining procedure: k2099 
o|inlining procedure: k2099 
o|inlining procedure: k2108 
o|inlining procedure: k2140 
o|inlining procedure: k2140 
o|inlining procedure: k2108 
o|inlining procedure: k2158 
o|inlining procedure: k2158 
o|contracted procedure: "(file.scm:452) g573574" 
o|contracted procedure: "(file.scm:452) g576577" 
o|inlining procedure: k2185 
o|inlining procedure: k2185 
o|inlining procedure: k2217 
o|inlining procedure: k2217 
o|replaced variables: 417 
o|removed binding forms: 99 
o|substituted constant variable: r8102254 
o|substituted constant variable: r8222256 
o|substituted constant variable: r9222261 
o|substituted constant variable: loc244 
o|substituted constant variable: loc244 
o|substituted constant variable: loc262 
o|substituted constant variable: loc262 
o|propagated global variable: g2972982280 chicken.file#delete-file 
o|inlining procedure: k1179 
o|inlining procedure: k1179 
o|propagated global variable: r11802364 chicken.file#delete-file 
o|propagated global variable: r11802364 chicken.file#delete-file 
o|substituted constant variable: loc309 
o|converted assignments to bindings: (rmdir278) 
o|substituted constant variable: r13012297 
o|substituted constant variable: r16942312 
o|substituted constant variable: r18382317 
o|substituted constant variable: r19522321 
o|substituted constant variable: r19612324 
o|substituted constant variable: r20172327 
o|substituted constant variable: r20172327 
o|substituted constant variable: loc579 
o|converted assignments to bindings: (tempdir428) 
o|simplifications: ((let . 2)) 
o|replaced variables: 40 
o|removed binding forms: 311 
o|inlining procedure: k965 
o|inlining procedure: k1021 
o|inlining procedure: k1203 
o|inlining procedure: k1385 
o|inlining procedure: k1481 
o|inlining procedure: k1499 
o|inlining procedure: k1614 
o|inlining procedure: k1632 
o|inlining procedure: k1751 
o|inlining procedure: k1823 
o|inlining procedure: k1954 
o|inlining procedure: k1954 
o|inlining procedure: k1954 
o|inlining procedure: k2169 
o|replaced variables: 1 
o|removed binding forms: 57 
o|substituted constant variable: r9662401 
o|substituted constant variable: r9662401 
o|substituted constant variable: r13862412 
o|substituted constant variable: r14822415 
o|substituted constant variable: r15002416 
o|substituted constant variable: r16152419 
o|substituted constant variable: r16332420 
o|substituted constant variable: r19552429 
o|substituted constant variable: r19552431 
o|substituted constant variable: r19552433 
o|contracted procedure: k2182 
o|simplifications: ((let . 1)) 
o|removed binding forms: 12 
o|removed conditional forms: 9 
o|contracted procedure: k1187 
o|simplifications: ((let . 1)) 
o|removed binding forms: 11 
o|simplifications: ((if . 22) (let . 10) (##core#call . 117)) 
o|  call simplifications:
o|    chicken.base#fixnum?
o|    chicken.fixnum#fx<
o|    scheme#procedure?
o|    scheme#member
o|    ##sys#structure?
o|    scheme#memv	3
o|    ##sys#check-number	2
o|    scheme#>	2
o|    chicken.fixnum#fx+	3
o|    ##sys#apply	2
o|    scheme#pair?	2
o|    ##sys#slot	5
o|    ##sys#call-with-values	2
o|    scheme#car	12
o|    scheme#null?	18
o|    scheme#cdr	8
o|    ##sys#null-pointer?	2
o|    ##sys#size
o|    scheme#string-ref
o|    chicken.fixnum#fx>
o|    scheme#eq?	7
o|    scheme#not	12
o|    scheme#cons	3
o|    chicken.fixnum#fx=	9
o|    ##sys#check-string	15
o|    ##sys#foreign-fixnum-argument
o|    scheme#apply
o|contracted procedure: k784 
o|contracted procedure: k806 
o|contracted procedure: k818 
o|contracted procedure: k830 
o|contracted procedure: k837 
o|contracted procedure: k846 
o|contracted procedure: k997 
o|contracted procedure: k881 
o|contracted procedure: k991 
o|contracted procedure: k884 
o|contracted procedure: k985 
o|contracted procedure: k887 
o|contracted procedure: k890 
o|contracted procedure: k909 
o|contracted procedure: k924 
o|contracted procedure: k928 
o|contracted procedure: k934 
o|contracted procedure: k980 
o|contracted procedure: k937 
o|contracted procedure: k956 
o|contracted procedure: k959 
o|contracted procedure: k974 
o|contracted procedure: k965 
o|contracted procedure: k1003 
o|contracted procedure: k1121 
o|contracted procedure: k1015 
o|contracted procedure: k1018 
o|contracted procedure: k1024 
o|contracted procedure: k1057 
o|contracted procedure: k1102 
o|contracted procedure: k1238 
o|contracted procedure: k1130 
o|contracted procedure: k1164 
o|contracted procedure: k1148 
o|contracted procedure: k1155 
o|contracted procedure: k1168 
o|contracted procedure: k1218 
o|contracted procedure: k1228 
o|contracted procedure: k1232 
o|contracted procedure: k1247 
o|contracted procedure: k1253 
o|contracted procedure: k1303 
o|contracted procedure: k1397 
o|contracted procedure: k1343 
o|contracted procedure: k1346 
o|contracted procedure: k1349 
o|contracted procedure: k1358 
o|contracted procedure: k1391 
o|contracted procedure: k1527 
o|contracted procedure: k1406 
o|contracted procedure: k1521 
o|contracted procedure: k1409 
o|contracted procedure: k1515 
o|contracted procedure: k1412 
o|contracted procedure: k1509 
o|contracted procedure: k1415 
o|contracted procedure: k1418 
o|contracted procedure: k1421 
o|contracted procedure: k1424 
o|contracted procedure: k1458 
o|contracted procedure: k1478 
o|contracted procedure: k1487 
o|contracted procedure: k1499 
o|substituted constant variable: g2509 
o|contracted procedure: k1660 
o|contracted procedure: k1536 
o|contracted procedure: k1654 
o|contracted procedure: k1539 
o|contracted procedure: k1648 
o|contracted procedure: k1542 
o|contracted procedure: k1642 
o|contracted procedure: k1545 
o|contracted procedure: k1548 
o|contracted procedure: k1551 
o|contracted procedure: k1554 
o|contracted procedure: k1588 
o|contracted procedure: k1611 
o|contracted procedure: k1620 
o|contracted procedure: k1632 
o|substituted constant variable: g2513 
o|contracted procedure: k1756 
o|contracted procedure: k1702 
o|contracted procedure: k1705 
o|contracted procedure: k1792 
o|contracted procedure: k1840 
o|contracted procedure: k1843 
o|contracted procedure: k1858 
o|contracted procedure: k1930 
o|contracted procedure: k1880 
o|contracted procedure: k1887 
o|contracted procedure: k1910 
o|contracted procedure: k1926 
o|contracted procedure: k1975 
o|contracted procedure: k1948 
o|contracted procedure: k1963 
o|contracted procedure: k1969 
o|contracted procedure: k1954 
o|contracted procedure: k2040 
o|contracted procedure: k2062 
o|contracted procedure: k2065 
o|contracted procedure: k2071 
o|contracted procedure: k2083 
o|contracted procedure: k2092 
o|contracted procedure: k2118 
o|contracted procedure: k2201 
o|contracted procedure: k2212 
o|contracted procedure: k2220 
o|simplifications: ((if . 1) (let . 28)) 
o|replaced variables: 2 
o|removed binding forms: 105 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest228230 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest228230 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest270272 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest270272 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest337340 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest337340 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest355358 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest355358 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest355358 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest355358 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest391394 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest391394 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest391394 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest391394 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest442443 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest442443 0 
o|replaced variables: 2 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1410 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1410 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1410 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1410 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1540 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1540 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1540 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1540 1 
o|removed binding forms: 1 
o|removed binding forms: 4 
o|customizable procedures: (k2043 k2046 loop557 tmp1756 tmp2757 g501502 loop493 conc-loop470 loop458 tempdir428 loop449 loop410 loop374 tmp1732 tmp2733 g287294 for-each-loop286310 rmdir278 k1142 k1046 loop239 k943 loop205 chicken.file#test-access chicken.file#posix-error) 
o|shared closure containers: 18 
o|shared closure users: 21 
o|calls to known targets: 75 
o|unused rest argument: rest228230 f_1013 
o|unused rest argument: rest270272 f_1128 
o|unused rest argument: rest337340 f_1341 
o|unused rest argument: rest355358 f_1404 
o|unused rest argument: rest391394 f_1534 
o|unused rest argument: rest442443 f_1700 
o|unused rest argument: _552 f_2215 
o|unused rest argument: _553 f_2223 
o|unused rest argument: _538 f_2251 
o|fast box initializations: 10 
o|fast global references: 8 
o|fast global assignments: 2 
o|dropping unused closure argument: f_1134 
o|dropping unused closure argument: f_1667 
o|dropping unused closure argument: f_787 
o|dropping unused closure argument: f_828 
*/
/* end of file */
