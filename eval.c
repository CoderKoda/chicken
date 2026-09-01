/* Generated from eval.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: eval.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file eval.c -emit-import-library chicken.eval -emit-import-library chicken.load
   unit: eval
   uses: modules eval expand internal library
*/
#include "chicken.h"


#ifndef C_INSTALL_EGG_HOME
# define C_INSTALL_EGG_HOME    "."
#endif

#ifndef C_INSTALL_SHARE_HOME
# define C_INSTALL_SHARE_HOME NULL
#endif

#ifndef C_BINARY_VERSION
# define C_BINARY_VERSION      0
#endif


#define C_store_result(x, ptr)   (*((C_word *)C_block_item(ptr, 0)) = (x), C_SCHEME_TRUE)


#define C_copy_result_string(str, buf, n)  (C_memcpy((char *)C_block_item(buf, 0), C_c_string(str), C_unfix(n)), ((char *)C_block_item(buf, 0))[ C_unfix(n) ] = '\0', C_SCHEME_TRUE)


C_extern  void  CHICKEN_get_error_message(char *t0,int t1);

C_extern  int  CHICKEN_load(char * t0);

C_extern  int  CHICKEN_read(char * t0,C_word *t1);

C_extern  int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3);

C_extern  int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2);

C_extern  int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2);

C_extern  int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2);

C_extern  int  CHICKEN_eval_string(char * t0,C_word *t1);

C_extern  int  CHICKEN_eval(C_word t0,C_word *t1);

C_extern  int  CHICKEN_yield();

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_modules_toplevel)
C_extern void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[360];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,15),40,102,105,110,100,45,105,100,32,105,100,32,115,101,41,0};
static C_char li1[] C_aligned={C_lihdr(0,0,7),40,97,51,55,48,52,41,0};
static C_char li2[] C_aligned={C_lihdr(0,0,13),40,97,51,55,49,48,32,46,32,116,109,112,41,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,118,97,114,41,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li5[] C_aligned={C_lihdr(0,0,8),40,103,50,55,49,32,112,41};
static C_char li6[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,110,118,115,32,101,105,41,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,15),40,108,111,111,107,117,112,32,118,97,114,48,32,101,41,0};
static C_char li8[] C_aligned={C_lihdr(0,0,34),40,101,109,105,116,45,116,114,97,99,101,45,105,110,102,111,32,108,110,32,105,110,102,111,32,99,110,116,114,32,101,32,118,41,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,37),40,101,109,105,116,45,115,121,110,116,97,120,45,116,114,97,99,101,45,105,110,102,111,32,116,102,32,105,110,102,111,32,99,110,116,114,41,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,9),40,97,51,53,57,50,32,120,41,0,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,11),40,97,51,54,48,53,32,112,32,105,41,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,15),40,100,101,99,111,114,97,116,101,32,112,32,108,108,41,0};
static C_char li13[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,50,41,0};
static C_char li14[] C_aligned={C_lihdr(0,0,7),40,97,51,57,48,55,41,0};
static C_char li15[] C_aligned={C_lihdr(0,0,7),40,97,51,57,49,51,41,0};
static C_char li16[] C_aligned={C_lihdr(0,0,18),40,97,51,56,57,51,32,102,111,114,109,115,32,112,97,116,104,41,0,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,33),40,105,110,99,108,117,100,101,45,102,105,108,101,32,120,32,99,105,32,101,32,116,102,32,99,110,116,114,32,116,108,63,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,12),40,102,95,51,57,53,50,32,46,32,118,41,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,7),40,97,51,57,54,51,41,0};
static C_char li20[] C_aligned={C_lihdr(0,0,10),40,102,95,51,57,57,48,32,118,41,0,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,48,49,32,46,32,118,41,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,12),40,102,95,52,48,48,54,32,46,32,118,41,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,55,52,32,118,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,10),40,102,95,52,48,56,57,32,118,41,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,10),40,102,95,52,49,48,56,32,118,41,0,0,0,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,10),40,102,95,52,49,51,49,32,118,41,0,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,10),40,102,95,52,49,53,50,32,118,41,0,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,11),40,97,51,57,54,57,32,105,32,106,41,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,55,56,32,46,32,118,41,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,56,54,32,46,32,118,41,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,12),40,102,95,52,49,57,52,32,46,32,118,41,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,48,50,32,46,32,118,41,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,48,52,32,46,32,118,41,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,50,51,32,46,32,118,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,50,53,32,46,32,118,41,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,51,54,32,46,32,118,41,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,21),40,102,95,51,56,53,53,32,105,110,112,117,116,32,111,117,116,112,117,116,41,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,12),40,102,95,52,50,57,53,32,46,32,118,41,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,48,51,32,46,32,118,41,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,49,49,32,46,32,118,41,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,49,57,32,46,32,118,41,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,50,55,32,46,32,118,41,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,51,53,32,46,32,118,41,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,52,51,32,46,32,118,41,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,52,53,32,46,32,118,41,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,55,52,32,46,32,118,41,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,48,56,32,118,41,0,0,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,10),40,102,95,52,52,50,53,32,118,41,0,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,49,48,32,118,41,0,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,10),40,102,95,52,53,51,53,32,118,41,0,0,0,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,7),40,97,52,54,49,48,41,0};
static C_char li52[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,51,52,32,118,41,0,0,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,52,50,32,118,41,0,0,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,55,55,32,118,41,0,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,10),40,102,95,52,54,57,48,32,118,41,0,0,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,11),40,97,52,54,49,54,32,105,32,106,41,0,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,53,52,32,118,41,0,0,0,0,0,0};
static C_char li58[] C_aligned={C_lihdr(0,0,10),40,102,95,52,55,57,49,32,118,41,0,0,0,0,0,0};
static C_char li59[] C_aligned={C_lihdr(0,0,10),40,102,95,52,56,52,54,32,118,41,0,0,0,0,0,0};
static C_char li60[] C_aligned={C_lihdr(0,0,10),40,102,95,52,57,49,54,32,118,41,0,0,0,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,8),40,103,54,48,53,32,120,41};
static C_char li62[] C_aligned={C_lihdr(0,0,19),40,100,111,108,111,111,112,54,50,54,32,105,32,118,108,105,115,116,41,0,0,0,0,0};
static C_char li63[] C_aligned={C_lihdr(0,0,10),40,102,95,52,57,57,52,32,118,41,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,57,57,32,103,54,49,49,41,0,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,7),40,97,53,48,56,49,41,0};
static C_char li66[] C_aligned={C_lihdr(0,0,7),40,97,53,48,57,56,41,0};
static C_char li67[] C_aligned={C_lihdr(0,0,7),40,97,53,49,49,54,41,0};
static C_char li68[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,51,50,32,103,53,52,52,41,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,53,48,52,32,103,53,49,54,41,0,0,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,54,55,32,103,54,55,57,41,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,48,32,103,54,53,50,41,0,0,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,56,49,54,32,103,56,50,56,32,103,56,50,57,41,0};
static C_char li73[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,55,56,51,32,103,55,57,53,32,103,55,57,54,41,0};
static C_char li74[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,53,54,32,103,55,54,56,41,0,0,0,0,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,50,54,32,103,55,51,56,41,0,0,0,0,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,57,57,32,103,55,49,49,41,0,0,0,0,0,0};
static C_char li77[] C_aligned={C_lihdr(0,0,11),40,97,53,55,48,55,32,46,32,114,41,0,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,48,50,32,118,41,0,0,0,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,7),40,97,53,55,50,54,41,0};
static C_char li80[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,50,49,32,118,41,0,0,0,0,0,0};
static C_char li81[] C_aligned={C_lihdr(0,0,14),40,97,53,55,53,48,32,97,49,32,46,32,114,41,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,52,53,32,118,41,0,0,0,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,10),40,97,53,55,54,57,32,97,49,41,0,0,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,54,52,32,118,41,0,0,0,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,17),40,97,53,55,57,55,32,97,49,32,97,50,32,46,32,114,41,0,0,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,10),40,102,95,53,55,57,50,32,118,41,0,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,13),40,97,53,56,49,54,32,97,49,32,97,50,41,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,49,49,32,118,41,0,0,0,0,0,0};
static C_char li89[] C_aligned={C_lihdr(0,0,20),40,97,53,56,52,52,32,97,49,32,97,50,32,97,51,32,46,32,114,41,0,0,0,0};
static C_char li90[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,51,57,32,118,41,0,0,0,0,0,0};
static C_char li91[] C_aligned={C_lihdr(0,0,16),40,97,53,56,54,51,32,97,49,32,97,50,32,97,51,41};
static C_char li92[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,53,56,32,118,41,0,0,0,0,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,23),40,97,53,56,57,49,32,97,49,32,97,50,32,97,51,32,97,52,32,46,32,114,41,0};
static C_char li94[] C_aligned={C_lihdr(0,0,10),40,102,95,53,56,56,54,32,118,41,0,0,0,0,0,0};
static C_char li95[] C_aligned={C_lihdr(0,0,19),40,97,53,57,49,48,32,97,49,32,97,50,32,97,51,32,97,52,41,0,0,0,0,0};
static C_char li96[] C_aligned={C_lihdr(0,0,10),40,102,95,53,57,48,53,32,118,41,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,26),40,100,111,108,111,111,112,49,51,48,57,32,110,32,99,32,97,114,103,115,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char li98[] C_aligned={C_lihdr(0,0,12),40,97,53,57,51,50,32,46,32,97,115,41,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,10),40,102,95,53,57,50,55,32,118,41,0,0,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,12),40,97,53,57,53,53,32,46,32,97,115,41,0,0,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,10),40,102,95,53,57,53,48,32,118,41,0,0,0,0,0,0};
static C_char li102[] C_aligned={C_lihdr(0,0,7),40,97,53,57,57,51,41,0};
static C_char li103[] C_aligned={C_lihdr(0,0,7),40,97,54,48,49,48,41,0};
static C_char li104[] C_aligned={C_lihdr(0,0,7),40,97,54,48,50,52,41,0};
static C_char li105[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,54,55,32,103,56,55,57,41,0,0,0,0,0,0};
static C_char li106[] C_aligned={C_lihdr(0,0,22),40,97,53,54,55,50,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,7),40,97,54,48,55,56,41,0};
static C_char li108[] C_aligned={C_lihdr(0,0,24),40,97,54,48,56,56,32,108,108,105,115,116,56,53,54,32,98,111,100,121,56,53,55,41};
static C_char li109[] C_aligned={C_lihdr(0,0,7),40,97,54,49,49,51,41,0};
static C_char li110[] C_aligned={C_lihdr(0,0,7),40,97,54,49,51,48,41,0};
static C_char li111[] C_aligned={C_lihdr(0,0,7),40,97,54,49,52,56,41,0};
static C_char li112[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,55,48,32,103,57,56,50,41,0,0,0,0,0,0};
static C_char li113[] C_aligned={C_lihdr(0,0,7),40,103,49,48,51,52,41,0};
static C_char li114[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,48,51,51,41,0,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,7),40,97,54,51,48,54,41,0};
static C_char li116[] C_aligned={C_lihdr(0,0,7),40,97,54,51,50,51,41,0};
static C_char li117[] C_aligned={C_lihdr(0,0,7),40,97,54,51,52,49,41,0};
static C_char li118[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,48,53,32,103,49,48,49,55,41,0,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,7),40,97,54,53,52,57,41,0};
static C_char li120[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,55,53,32,103,49,48,56,55,41,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,7),40,97,54,54,50,55,41,0};
static C_char li122[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,50,32,120,115,41,0,0,0,0,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,10),40,102,95,54,55,49,55,32,118,41,0,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,98,111,100,121,32,120,115,41,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,7),40,97,54,54,56,57,41,0};
static C_char li126[] C_aligned={C_lihdr(0,0,7),40,97,54,54,56,51,41,0};
static C_char li127[] C_aligned={C_lihdr(0,0,7),40,97,54,55,55,57,41,0};
static C_char li128[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li129[] C_aligned={C_lihdr(0,0,11),40,103,49,49,49,56,32,101,120,112,41,0,0,0,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,49,50,32,103,49,49,50,52,41,0,0,0,0};
static C_char li131[] C_aligned={C_lihdr(0,0,10),40,103,49,50,57,49,32,99,108,41,0,0,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,7),40,97,55,49,54,50,41,0};
static C_char li133[] C_aligned={C_lihdr(0,0,7),40,97,55,49,54,55,41,0};
static C_char li134[] C_aligned={C_lihdr(0,0,7),40,97,55,49,55,55,41,0};
static C_char li135[] C_aligned={C_lihdr(0,0,7),40,97,55,51,54,48,41,0};
static C_char li136[] C_aligned={C_lihdr(0,0,7),40,97,55,51,54,53,41,0};
static C_char li137[] C_aligned={C_lihdr(0,0,7),40,97,55,51,55,53,41,0};
static C_char li138[] C_aligned={C_lihdr(0,0,27),40,99,111,109,112,105,108,101,32,120,32,101,32,104,32,116,102,32,99,110,116,114,32,116,108,63,41,0,0,0,0,0};
static C_char li139[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char li140[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,53,52,32,118,41,0,0,0,0,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,10),40,102,95,55,53,55,52,32,118,41,0,0,0,0,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,10),40,102,95,55,54,48,53,32,118,41,0,0,0,0,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,10),40,102,95,55,54,52,52,32,118,41,0,0,0,0,0,0};
static C_char li144[] C_aligned={C_lihdr(0,0,10),40,102,95,55,54,57,49,32,118,41,0,0,0,0,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,9),40,103,49,51,56,54,32,97,41,0,0,0,0,0,0,0};
static C_char li146[] C_aligned={C_lihdr(0,0,9),40,103,49,52,49,52,32,97,41,0,0,0,0,0,0,0};
static C_char li147[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,48,56,32,103,49,52,50,48,41,0,0,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,10),40,102,95,55,55,51,57,32,118,41,0,0,0,0,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,56,48,32,103,49,51,57,50,41,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,12),40,102,95,55,56,52,57,32,46,32,95,41,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,26),40,99,111,109,112,105,108,101,45,99,97,108,108,32,120,32,101,32,116,102,32,99,110,116,114,41,0,0,0,0,0,0};
static C_char li152[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,101,118,97,108,35,99,111,109,112,105,108,101,45,116,111,45,99,108,111,115,117,114,101,32,101,120,112,32,101,110,118,32,114,101,115,116,41,0,0};
static C_char li153[] C_aligned={C_lihdr(0,0,7),40,97,55,57,50,57,41,0};
static C_char li154[] C_aligned={C_lihdr(0,0,7),40,97,55,57,55,56,41,0};
static C_char li155[] C_aligned={C_lihdr(0,0,7),40,97,55,57,56,55,41,0};
static C_char li156[] C_aligned={C_lihdr(0,0,7),40,97,55,57,55,50,41,0};
static C_char li157[] C_aligned={C_lihdr(0,0,7),40,97,56,48,48,52,41,0};
static C_char li158[] C_aligned={C_lihdr(0,0,22),40,35,35,115,121,115,35,101,118,97,108,47,109,101,116,97,32,102,111,114,109,41,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,21),40,115,99,104,101,109,101,35,101,118,97,108,32,120,32,46,32,101,110,118,41,0,0,0};
static C_char li160[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,101,118,97,108,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,110,97,109,101,41,0,0};
static C_char li161[] C_aligned={C_lihdr(0,0,5),40,101,114,114,41,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,108,108,105,115,116,32,118,97,114,115,32,97,114,103,99,41,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,38),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,108,97,109,98,100,97,45,108,105,115,116,32,108,108,105,115,116,48,32,107,41,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,32),40,115,99,104,101,109,101,35,105,110,116,101,114,97,99,116,105,111,110,45,101,110,118,105,114,111,110,109,101,110,116,41};
static C_char li165[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,49,54,49,48,32,103,49,54,49,49,41,0,0,0,0,0,0,0};
static C_char li166[] C_aligned={C_lihdr(0,0,10),40,115,116,114,105,112,32,115,101,41,0,0,0,0,0,0};
static C_char li167[] C_aligned={C_lihdr(0,0,36),40,115,99,104,101,109,101,35,115,99,104,101,109,101,45,114,101,112,111,114,116,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0};
static C_char li168[] C_aligned={C_lihdr(0,0,27),40,115,99,104,101,109,101,35,110,117,108,108,45,101,110,118,105,114,111,110,109,101,110,116,32,110,41,0,0,0,0,0};
static C_char li169[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,108,111,97,100,35,99,111,114,101,45,108,105,98,114,97,114,121,63,32,105,100,41,0};
static C_char li170[] C_aligned={C_lihdr(0,0,18),40,35,35,115,121,115,35,112,114,111,118,105,100,101,32,105,100,41,0,0,0,0,0,0};
static C_char li171[] C_aligned={C_lihdr(0,0,20),40,35,35,115,121,115,35,112,114,111,118,105,100,101,100,63,32,105,100,41,0,0,0,0};
static C_char li172[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li173[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,97,116,104,45,115,101,112,97,114,97,116,111,114,45,105,110,100,101,120,47,114,105,103,104,116,32,115,41,0,0,0,0,0};
static C_char li174[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,108,111,97,100,35,109,97,107,101,45,114,101,108,97,116,105,118,101,45,112,97,116,104,110,97,109,101,32,102,114,111,109,32,102,105,108,101,41,0};
static C_char li175[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,109,111,100,101,41,0,0,0,0,0};
static C_char li176[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,108,111,97,100,35,115,101,116,45,100,121,110,97,109,105,99,45,108,111,97,100,45,109,111,100,101,33,32,109,111,100,101,41,0,0,0,0,0,0};
static C_char li177[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,108,111,97,100,35,99,45,116,111,112,108,101,118,101,108,32,110,97,109,101,32,108,111,99,41,0,0,0,0,0,0};
static C_char li178[] C_aligned={C_lihdr(0,0,13),40,102,95,57,56,51,48,32,112,97,116,104,41,0,0,0};
static C_char li179[] C_aligned={C_lihdr(0,0,7),40,97,57,56,56,56,41,0};
static C_char li180[] C_aligned={C_lihdr(0,0,7),40,97,57,57,48,57,41,0};
static C_char li181[] C_aligned={C_lihdr(0,0,7),40,97,57,57,54,53,41,0};
static C_char li182[] C_aligned={C_lihdr(0,0,11),40,97,57,57,55,49,32,46,32,116,41,0,0,0,0,0};
static C_char li183[] C_aligned={C_lihdr(0,0,7),40,97,57,57,53,51,41,0};
static C_char li184[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,57,53,32,103,50,52,48,50,41,0,0,0,0,0,0,0};
static C_char li185[] C_aligned={C_lihdr(0,0,17),40,97,57,57,56,55,32,46,32,114,101,115,117,108,116,115,41,0,0,0,0,0,0,0};
static C_char li186[] C_aligned={C_lihdr(0,0,14),40,100,111,108,111,111,112,50,51,56,53,32,120,41,0,0};
static C_char li187[] C_aligned={C_lihdr(0,0,7),40,97,57,57,49,54,41,0};
static C_char li188[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,52,55,41};
static C_char li189[] C_aligned={C_lihdr(0,0,7),40,97,57,56,57,55,41,0};
static C_char li190[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,53,57,41};
static C_char li191[] C_aligned={C_lihdr(0,0,7),40,97,57,56,56,50,41,0};
static C_char li192[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,47,105,110,116,101,114,110,97,108,32,105,110,112,117,116,32,101,118,97,108,117,97,116,111,114,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li193[] C_aligned={C_lihdr(0,0,11),40,102,95,49,48,50,49,51,32,121,41,0,0,0,0,0};
static C_char li194[] C_aligned={C_lihdr(0,0,26),40,99,104,105,99,107,101,110,46,108,111,97,100,35,101,118,97,108,117,97,116,111,114,32,120,41,0,0,0,0,0,0};
static C_char li195[] C_aligned={C_lihdr(0,0,29),40,115,99,104,101,109,101,35,108,111,97,100,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0};
static C_char li196[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,114,101,108,97,116,105,118,101,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li197[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,55,56,41};
static C_char li198[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,56,49,41};
static C_char li199[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,110,111,105,115,105,108,121,32,102,105,108,101,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li200[] C_aligned={C_lihdr(0,0,16),40,99,111,109,112,108,101,116,101,32,103,50,52,55,56,41};
static C_char li201[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,108,105,98,115,41,0,0,0,0,0};
static C_char li202[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,117,110,105,116,32,117,110,105,116,45,110,97,109,101,32,108,105,98,32,108,111,99,41,0,0,0,0,0,0};
static C_char li203[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,108,105,98,114,97,114,121,32,117,110,105,116,45,110,97,109,101,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li204[] C_aligned={C_lihdr(0,0,8),40,97,49,48,52,52,51,41};
static C_char li205[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,50,53,54,52,32,120,32,120,115,41,0,0,0,0,0,0,0};
static C_char li206[] C_aligned={C_lihdr(0,0,8),40,97,49,48,52,52,56,41};
static C_char li207[] C_aligned={C_lihdr(0,0,8),40,97,49,48,52,57,49,41};
static C_char li208[] C_aligned={C_lihdr(0,0,11),40,97,49,48,52,51,48,32,105,110,41,0,0,0,0,0};
static C_char li209[] C_aligned={C_lihdr(0,0,52),40,35,35,115,121,115,35,105,110,99,108,117,100,101,45,102,111,114,109,115,45,102,114,111,109,45,102,105,108,101,32,102,105,108,101,110,97,109,101,32,115,111,117,114,99,101,32,99,105,32,107,41,0,0,0,0};
static C_char li210[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,108,101,45,101,120,105,115,116,115,63,32,110,97,109,101,41};
static C_char li211[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,102,105,108,101,32,110,97,109,101,32,115,101,97,114,99,104,45,112,97,116,104,41,0,0,0,0,0,0,0};
static C_char li212[] C_aligned={C_lihdr(0,0,12),40,99,104,101,99,107,32,112,97,116,104,41,0,0,0,0};
static C_char li213[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char li214[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,108,111,97,100,35,102,105,110,100,45,100,121,110,97,109,105,99,45,101,120,116,101,110,115,105,111,110,32,105,100,32,105,110,99,63,41,0,0,0};
static C_char li215[] C_aligned={C_lihdr(0,0,11),40,103,50,54,51,55,32,101,120,116,41,0,0,0,0,0};
static C_char li216[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,108,111,97,100,35,108,111,97,100,45,101,120,116,101,110,115,105,111,110,32,108,105,98,32,109,111,100,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li217[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,52,54,41,0,0,0,0,0};
static C_char li218[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,53,54,32,103,50,54,54,51,41,0,0,0,0,0,0,0};
static C_char li219[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,114,101,113,117,105,114,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char li220[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,57,57,41,0,0,0,0,0};
static C_char li221[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,48,57,32,103,50,55,49,54,41,0,0,0,0,0,0,0};
static C_char li222[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,32,46,32,105,100,115,41,0,0,0,0};
static C_char li223[] C_aligned={C_lihdr(0,0,19),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,53,50,41,0,0,0,0,0};
static C_char li224[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li225[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,108,111,97,100,35,112,114,111,118,105,100,101,100,63,32,46,32,105,100,115,41,0,0};
static C_char li226[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,114,101,113,117,105,114,101,32,108,105,98,32,109,111,100,32,99,111,109,112,105,108,101,45,109,111,100,101,41,0,0,0,0};
static C_char li227[] C_aligned={C_lihdr(0,0,27),40,116,101,115,116,45,101,120,116,101,110,115,105,111,110,115,32,102,110,97,109,101,32,108,115,116,41,0,0,0,0,0};
static C_char li228[] C_aligned={C_lihdr(0,0,12),40,116,101,115,116,32,102,110,97,109,101,41,0,0,0,0};
static C_char li229[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,97,116,104,115,41,0,0,0,0};
static C_char li230[] C_aligned={C_lihdr(0,0,55),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,105,110,99,108,117,100,101,45,102,105,108,101,110,97,109,101,32,102,110,97,109,101,32,101,120,116,115,32,114,101,112,111,32,115,111,117,114,99,101,41,0};
static C_char li231[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,51,50,41};
static C_char li232[] C_aligned={C_lihdr(0,0,11),40,97,49,49,49,50,54,32,101,120,41,0,0,0,0,0};
static C_char li233[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,53,49,41};
static C_char li234[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,54,51,41};
static C_char li235[] C_aligned={C_lihdr(0,0,15),40,97,49,49,49,53,55,32,46,32,97,114,103,115,41,0};
static C_char li236[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,52,53,41};
static C_char li237[] C_aligned={C_lihdr(0,0,10),40,97,49,49,49,50,48,32,107,41,0,0,0,0,0,0};
static C_char li238[] C_aligned={C_lihdr(0,0,16),40,114,117,110,45,115,97,102,101,32,116,104,117,110,107,41};
static C_char li239[] C_aligned={C_lihdr(0,0,23),40,115,116,111,114,101,45,114,101,115,117,108,116,32,120,32,114,101,115,117,108,116,41,0};
static C_char li240[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,56,52,41};
static C_char li241[] C_aligned={C_lihdr(0,0,15),40,67,72,73,67,75,69,78,95,121,105,101,108,100,41,0};
static C_char li242[] C_aligned={C_lihdr(0,0,8),40,97,49,49,49,57,54,41};
static C_char li243[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,101,118,97,108,32,101,120,112,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char li244[] C_aligned={C_lihdr(0,0,8),40,97,49,49,50,49,53,41};
static C_char li245[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,32,115,116,114,32,114,101,115,117,108,116,41};
static C_char li246[] C_aligned={C_lihdr(0,0,26),40,115,116,111,114,101,45,115,116,114,105,110,103,32,98,117,102,115,105,122,101,32,98,117,102,41,0,0,0,0,0,0};
static C_char li247[] C_aligned={C_lihdr(0,0,8),40,97,49,49,50,53,56,41};
static C_char li248[] C_aligned={C_lihdr(0,0,40),40,67,72,73,67,75,69,78,95,101,118,97,108,95,116,111,95,115,116,114,105,110,103,32,101,120,112,32,98,117,102,32,98,117,102,115,105,122,101,41};
static C_char li249[] C_aligned={C_lihdr(0,0,8),40,97,49,49,50,56,55,41};
static C_char li250[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,101,118,97,108,95,115,116,114,105,110,103,95,116,111,95,115,116,114,105,110,103,32,115,116,114,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char li251[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,50,49,41};
static C_char li252[] C_aligned={C_lihdr(0,0,32),40,67,72,73,67,75,69,78,95,97,112,112,108,121,32,102,117,110,99,32,97,114,103,115,32,114,101,115,117,108,116,41};
static C_char li253[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,51,55,41};
static C_char li254[] C_aligned={C_lihdr(0,0,47),40,67,72,73,67,75,69,78,95,97,112,112,108,121,95,116,111,95,115,116,114,105,110,103,32,102,117,110,99,32,97,114,103,115,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char li255[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,54,54,41};
static C_char li256[] C_aligned={C_lihdr(0,0,25),40,67,72,73,67,75,69,78,95,114,101,97,100,32,115,116,114,32,114,101,115,117,108,116,41,0,0,0,0,0,0,0};
static C_char li257[] C_aligned={C_lihdr(0,0,8),40,97,49,49,51,56,56,41};
static C_char li258[] C_aligned={C_lihdr(0,0,18),40,67,72,73,67,75,69,78,95,108,111,97,100,32,115,116,114,41,0,0,0,0,0,0};
static C_char li259[] C_aligned={C_lihdr(0,0,39),40,67,72,73,67,75,69,78,95,103,101,116,95,101,114,114,111,114,95,109,101,115,115,97,103,101,32,98,117,102,32,98,117,102,115,105,122,101,41,0};
static C_char li260[] C_aligned={C_lihdr(0,0,10),40,97,49,49,52,49,49,32,120,41,0,0,0,0,0,0};
static C_char li261[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,56,53,32,103,50,52,57,55,41,0,0,0,0};
static C_char li262[] C_aligned={C_lihdr(0,0,12),40,97,49,49,53,52,53,32,101,32,112,41,0,0,0,0};
static C_char li263[] C_aligned={C_lihdr(0,0,21),40,97,49,49,53,54,55,32,115,121,109,32,112,114,111,112,32,118,97,108,41,0,0,0};
static C_char li264[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,57,52,41};
static C_char li265[] C_aligned={C_lihdr(0,0,12),40,100,111,108,111,111,112,49,53,55,48,41,0,0,0,0};
static C_char li266[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,57,57,41};
static C_char li267[] C_aligned={C_lihdr(0,0,14),40,97,49,49,53,56,56,32,116,104,117,110,107,41,0,0};
static C_char li268[] C_aligned={C_lihdr(0,0,8),40,97,49,49,53,54,49,41};
static C_char li269[] C_aligned={C_lihdr(0,0,63),40,97,49,49,54,50,57,32,35,35,115,121,115,35,112,117,116,47,114,101,115,116,111,114,101,33,49,53,53,55,32,35,35,115,121,115,35,119,105,116,104,45,112,114,111,112,101,114,116,121,45,114,101,115,116,111,114,101,49,53,53,56,41,0};
static C_char li270[] C_aligned={C_lihdr(0,0,8),40,97,49,49,54,54,55,41};
static C_char li271[] C_aligned={C_lihdr(0,0,8),40,97,49,49,54,57,55,41};
static C_char li272[] C_aligned={C_lihdr(0,0,8),40,97,49,49,55,48,55,41};
static C_char li273[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,51,52,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li274[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f12364)
static void C_ccall f12364(C_word c,C_word *av) C_noret;
C_noret_decl(f_10005)
static void f_10005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10015)
static void C_ccall f_10015(C_word c,C_word *av) C_noret;
C_noret_decl(f_10039)
static void C_ccall f_10039(C_word c,C_word *av) C_noret;
C_noret_decl(f_10043)
static void C_ccall f_10043(C_word c,C_word *av) C_noret;
C_noret_decl(f_10048)
static void C_ccall f_10048(C_word c,C_word *av) C_noret;
C_noret_decl(f_10052)
static void C_ccall f_10052(C_word c,C_word *av) C_noret;
C_noret_decl(f_10060)
static void C_ccall f_10060(C_word c,C_word *av) C_noret;
C_noret_decl(f_10079)
static void C_ccall f_10079(C_word c,C_word *av) C_noret;
C_noret_decl(f_10082)
static void C_ccall f_10082(C_word c,C_word *av) C_noret;
C_noret_decl(f_10085)
static void C_ccall f_10085(C_word c,C_word *av) C_noret;
C_noret_decl(f_10091)
static void C_ccall f_10091(C_word c,C_word *av) C_noret;
C_noret_decl(f_10094)
static void C_ccall f_10094(C_word c,C_word *av) C_noret;
C_noret_decl(f_10109)
static void C_ccall f_10109(C_word c,C_word *av) C_noret;
C_noret_decl(f_10112)
static void C_ccall f_10112(C_word c,C_word *av) C_noret;
C_noret_decl(f_10115)
static void f_10115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10121)
static void C_ccall f_10121(C_word c,C_word *av) C_noret;
C_noret_decl(f_10133)
static void C_ccall f_10133(C_word c,C_word *av) C_noret;
C_noret_decl(f_10139)
static void C_ccall f_10139(C_word c,C_word *av) C_noret;
C_noret_decl(f_10199)
static void f_10199(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10213)
static void C_ccall f_10213(C_word c,C_word *av) C_noret;
C_noret_decl(f_10219)
static void C_ccall f_10219(C_word c,C_word *av) C_noret;
C_noret_decl(f_10230)
static void C_ccall f_10230(C_word c,C_word *av) C_noret;
C_noret_decl(f_10238)
static void C_ccall f_10238(C_word c,C_word *av) C_noret;
C_noret_decl(f_10245)
static void C_ccall f_10245(C_word c,C_word *av) C_noret;
C_noret_decl(f_10252)
static void C_ccall f_10252(C_word c,C_word *av) C_noret;
C_noret_decl(f_10260)
static void C_ccall f_10260(C_word c,C_word *av) C_noret;
C_noret_decl(f_10267)
static void C_ccall f_10267(C_word c,C_word *av) C_noret;
C_noret_decl(f_10270)
static void C_ccall f_10270(C_word c,C_word *av) C_noret;
C_noret_decl(f_10277)
static void C_ccall f_10277(C_word c,C_word *av) C_noret;
C_noret_decl(f_10279)
static void C_ccall f_10279(C_word c,C_word *av) C_noret;
C_noret_decl(f_10282)
static void C_ccall f_10282(C_word c,C_word *av) C_noret;
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word *av) C_noret;
C_noret_decl(f_10289)
static void f_10289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10296)
static void C_ccall f_10296(C_word c,C_word *av) C_noret;
C_noret_decl(f_10298)
static void C_ccall f_10298(C_word c,C_word *av) C_noret;
C_noret_decl(f_10305)
static void C_ccall f_10305(C_word c,C_word *av) C_noret;
C_noret_decl(f_10308)
static void f_10308(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word *av) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word *av) C_noret;
C_noret_decl(f_10319)
static void f_10319(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10333)
static void C_ccall f_10333(C_word c,C_word *av) C_noret;
C_noret_decl(f_10342)
static void C_ccall f_10342(C_word c,C_word *av) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word *av) C_noret;
C_noret_decl(f_10360)
static void C_ccall f_10360(C_word c,C_word *av) C_noret;
C_noret_decl(f_10363)
static void C_ccall f_10363(C_word c,C_word *av) C_noret;
C_noret_decl(f_10366)
static void C_ccall f_10366(C_word c,C_word *av) C_noret;
C_noret_decl(f_10379)
static void C_ccall f_10379(C_word c,C_word *av) C_noret;
C_noret_decl(f_10383)
static void C_ccall f_10383(C_word c,C_word *av) C_noret;
C_noret_decl(f_10387)
static void C_ccall f_10387(C_word c,C_word *av) C_noret;
C_noret_decl(f_10389)
static void C_ccall f_10389(C_word c,C_word *av) C_noret;
C_noret_decl(f_10416)
static void C_ccall f_10416(C_word c,C_word *av) C_noret;
C_noret_decl(f_10420)
static void C_ccall f_10420(C_word c,C_word *av) C_noret;
C_noret_decl(f_10423)
static void C_ccall f_10423(C_word c,C_word *av) C_noret;
C_noret_decl(f_10426)
static void C_ccall f_10426(C_word c,C_word *av) C_noret;
C_noret_decl(f_10431)
static void C_ccall f_10431(C_word c,C_word *av) C_noret;
C_noret_decl(f_10442)
static void C_ccall f_10442(C_word c,C_word *av) C_noret;
C_noret_decl(f_10444)
static void C_ccall f_10444(C_word c,C_word *av) C_noret;
C_noret_decl(f_10449)
static void C_ccall f_10449(C_word c,C_word *av) C_noret;
C_noret_decl(f_10460)
static void C_ccall f_10460(C_word c,C_word *av) C_noret;
C_noret_decl(f_10462)
static void f_10462(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10482)
static void C_ccall f_10482(C_word c,C_word *av) C_noret;
C_noret_decl(f_10492)
static void C_ccall f_10492(C_word c,C_word *av) C_noret;
C_noret_decl(f_10498)
static void C_ccall f_10498(C_word c,C_word *av) C_noret;
C_noret_decl(f_10510)
static void f_10510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10517)
static void C_ccall f_10517(C_word c,C_word *av) C_noret;
C_noret_decl(f_10519)
static void C_ccall f_10519(C_word c,C_word *av) C_noret;
C_noret_decl(f_10548)
static void C_ccall f_10548(C_word c,C_word *av) C_noret;
C_noret_decl(f_10560)
static void C_ccall f_10560(C_word c,C_word *av) C_noret;
C_noret_decl(f_10566)
static void C_ccall f_10566(C_word c,C_word *av) C_noret;
C_noret_decl(f_10570)
static void C_ccall f_10570(C_word c,C_word *av) C_noret;
C_noret_decl(f_10573)
static void C_ccall f_10573(C_word c,C_word *av) C_noret;
C_noret_decl(f_10575)
static void f_10575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10579)
static void C_ccall f_10579(C_word c,C_word *av) C_noret;
C_noret_decl(f_10582)
static void C_ccall f_10582(C_word c,C_word *av) C_noret;
C_noret_decl(f_10592)
static void C_ccall f_10592(C_word c,C_word *av) C_noret;
C_noret_decl(f_10604)
static void C_ccall f_10604(C_word c,C_word *av) C_noret;
C_noret_decl(f_10611)
static void C_ccall f_10611(C_word c,C_word *av) C_noret;
C_noret_decl(f_10618)
static void C_ccall f_10618(C_word c,C_word *av) C_noret;
C_noret_decl(f_10620)
static void f_10620(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10633)
static void C_ccall f_10633(C_word c,C_word *av) C_noret;
C_noret_decl(f_10667)
static void C_ccall f_10667(C_word c,C_word *av) C_noret;
C_noret_decl(f_10676)
static void C_ccall f_10676(C_word c,C_word *av) C_noret;
C_noret_decl(f_10692)
static void C_ccall f_10692(C_word c,C_word *av) C_noret;
C_noret_decl(f_10705)
static void C_ccall f_10705(C_word c,C_word *av) C_noret;
C_noret_decl(f_10708)
static void C_ccall f_10708(C_word c,C_word *av) C_noret;
C_noret_decl(f_10720)
static void C_ccall f_10720(C_word c,C_word *av) C_noret;
C_noret_decl(f_10724)
static void f_10724(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10728)
static void C_ccall f_10728(C_word c,C_word *av) C_noret;
C_noret_decl(f_10731)
static void C_ccall f_10731(C_word c,C_word *av) C_noret;
C_noret_decl(f_10739)
static void C_ccall f_10739(C_word c,C_word *av) C_noret;
C_noret_decl(f_10758)
static void f_10758(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10768)
static void C_ccall f_10768(C_word c,C_word *av) C_noret;
C_noret_decl(f_10781)
static C_word f_10781(C_word t0);
C_noret_decl(f_10804)
static void C_ccall f_10804(C_word c,C_word *av) C_noret;
C_noret_decl(f_10823)
static void f_10823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10833)
static void C_ccall f_10833(C_word c,C_word *av) C_noret;
C_noret_decl(f_10846)
static C_word f_10846(C_word t0);
C_noret_decl(f_10869)
static void C_ccall f_10869(C_word c,C_word *av) C_noret;
C_noret_decl(f_10883)
static C_word f_10883(C_word t0);
C_noret_decl(f_10910)
static void C_ccall f_10910(C_word c,C_word *av) C_noret;
C_noret_decl(f_10979)
static void C_ccall f_10979(C_word c,C_word *av) C_noret;
C_noret_decl(f_10982)
static void f_10982(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10995)
static void C_ccall f_10995(C_word c,C_word *av) C_noret;
C_noret_decl(f_10998)
static void C_ccall f_10998(C_word c,C_word *av) C_noret;
C_noret_decl(f_11001)
static void C_ccall f_11001(C_word c,C_word *av) C_noret;
C_noret_decl(f_11015)
static void f_11015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11051)
static void C_ccall f_11051(C_word c,C_word *av) C_noret;
C_noret_decl(f_11054)
static void C_ccall f_11054(C_word c,C_word *av) C_noret;
C_noret_decl(f_11064)
static void C_ccall f_11064(C_word c,C_word *av) C_noret;
C_noret_decl(f_11066)
static void f_11066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11076)
static void C_ccall f_11076(C_word c,C_word *av) C_noret;
C_noret_decl(f_11090)
static void C_ccall f_11090(C_word c,C_word *av) C_noret;
C_noret_decl(f_11101)
static void C_ccall f_11101(C_word c,C_word *av) C_noret;
C_noret_decl(f_11108)
static void C_ccall f_11108(C_word c,C_word *av) C_noret;
C_noret_decl(f_11111)
static void f_11111(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11116)
static void C_ccall f_11116(C_word c,C_word *av) C_noret;
C_noret_decl(f_11121)
static void C_ccall f_11121(C_word c,C_word *av) C_noret;
C_noret_decl(f_11127)
static void C_ccall f_11127(C_word c,C_word *av) C_noret;
C_noret_decl(f_11133)
static void C_ccall f_11133(C_word c,C_word *av) C_noret;
C_noret_decl(f_11137)
static void C_ccall f_11137(C_word c,C_word *av) C_noret;
C_noret_decl(f_11140)
static void C_ccall f_11140(C_word c,C_word *av) C_noret;
C_noret_decl(f_11144)
static void C_ccall f_11144(C_word c,C_word *av) C_noret;
C_noret_decl(f_11146)
static void C_ccall f_11146(C_word c,C_word *av) C_noret;
C_noret_decl(f_11152)
static void C_ccall f_11152(C_word c,C_word *av) C_noret;
C_noret_decl(f_11158)
static void C_ccall f_11158(C_word c,C_word *av) C_noret;
C_noret_decl(f_11164)
static void C_ccall f_11164(C_word c,C_word *av) C_noret;
C_noret_decl(f_11170)
static void f_11170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11174)
static void C_ccall f_11174(C_word c,C_word *av) C_noret;
C_noret_decl(f_11179)
static void C_ccall f_11179(C_word c,C_word *av) C_noret;
C_noret_decl(f_11185)
static void C_ccall f_11185(C_word c,C_word *av) C_noret;
C_noret_decl(f_11189)
static void C_ccall f_11189(C_word c,C_word *av) C_noret;
C_noret_decl(f_11191)
static void C_ccall f_11191(C_word c,C_word *av) C_noret;
C_noret_decl(f_11197)
static void C_ccall f_11197(C_word c,C_word *av) C_noret;
C_noret_decl(f_11205)
static void C_ccall f_11205(C_word c,C_word *av) C_noret;
C_noret_decl(f_11207)
static void C_ccall f_11207(C_word c,C_word *av) C_noret;
C_noret_decl(f_11211)
static void C_ccall f_11211(C_word c,C_word *av) C_noret;
C_noret_decl(f_11216)
static void C_ccall f_11216(C_word c,C_word *av) C_noret;
C_noret_decl(f_11220)
static void C_ccall f_11220(C_word c,C_word *av) C_noret;
C_noret_decl(f_11227)
static void C_ccall f_11227(C_word c,C_word *av) C_noret;
C_noret_decl(f_11231)
static void C_ccall f_11231(C_word c,C_word *av) C_noret;
C_noret_decl(f_11233)
static C_word f_11233(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_11253)
static void C_ccall f_11253(C_word c,C_word *av) C_noret;
C_noret_decl(f_11259)
static void C_ccall f_11259(C_word c,C_word *av) C_noret;
C_noret_decl(f_11263)
static void C_ccall f_11263(C_word c,C_word *av) C_noret;
C_noret_decl(f_11266)
static void C_ccall f_11266(C_word c,C_word *av) C_noret;
C_noret_decl(f_11273)
static void C_ccall f_11273(C_word c,C_word *av) C_noret;
C_noret_decl(f_11277)
static void C_ccall f_11277(C_word c,C_word *av) C_noret;
C_noret_decl(f_11279)
static void C_ccall f_11279(C_word c,C_word *av) C_noret;
C_noret_decl(f_11283)
static void C_ccall f_11283(C_word c,C_word *av) C_noret;
C_noret_decl(f_11288)
static void C_ccall f_11288(C_word c,C_word *av) C_noret;
C_noret_decl(f_11292)
static void C_ccall f_11292(C_word c,C_word *av) C_noret;
C_noret_decl(f_11295)
static void C_ccall f_11295(C_word c,C_word *av) C_noret;
C_noret_decl(f_11302)
static void C_ccall f_11302(C_word c,C_word *av) C_noret;
C_noret_decl(f_11306)
static void C_ccall f_11306(C_word c,C_word *av) C_noret;
C_noret_decl(f_11310)
static void C_ccall f_11310(C_word c,C_word *av) C_noret;
C_noret_decl(f_11314)
static void C_ccall f_11314(C_word c,C_word *av) C_noret;
C_noret_decl(f_11316)
static void C_ccall f_11316(C_word c,C_word *av) C_noret;
C_noret_decl(f_11322)
static void C_ccall f_11322(C_word c,C_word *av) C_noret;
C_noret_decl(f_11330)
static void C_ccall f_11330(C_word c,C_word *av) C_noret;
C_noret_decl(f_11332)
static void C_ccall f_11332(C_word c,C_word *av) C_noret;
C_noret_decl(f_11338)
static void C_ccall f_11338(C_word c,C_word *av) C_noret;
C_noret_decl(f_11342)
static void C_ccall f_11342(C_word c,C_word *av) C_noret;
C_noret_decl(f_11345)
static void C_ccall f_11345(C_word c,C_word *av) C_noret;
C_noret_decl(f_11352)
static void C_ccall f_11352(C_word c,C_word *av) C_noret;
C_noret_decl(f_11356)
static void C_ccall f_11356(C_word c,C_word *av) C_noret;
C_noret_decl(f_11358)
static void C_ccall f_11358(C_word c,C_word *av) C_noret;
C_noret_decl(f_11362)
static void C_ccall f_11362(C_word c,C_word *av) C_noret;
C_noret_decl(f_11367)
static void C_ccall f_11367(C_word c,C_word *av) C_noret;
C_noret_decl(f_11371)
static void C_ccall f_11371(C_word c,C_word *av) C_noret;
C_noret_decl(f_11378)
static void C_ccall f_11378(C_word c,C_word *av) C_noret;
C_noret_decl(f_11380)
static void C_ccall f_11380(C_word c,C_word *av) C_noret;
C_noret_decl(f_11384)
static void C_ccall f_11384(C_word c,C_word *av) C_noret;
C_noret_decl(f_11389)
static void C_ccall f_11389(C_word c,C_word *av) C_noret;
C_noret_decl(f_11393)
static void C_ccall f_11393(C_word c,C_word *av) C_noret;
C_noret_decl(f_11395)
static void C_ccall f_11395(C_word c,C_word *av) C_noret;
C_noret_decl(f_11410)
static void C_ccall f_11410(C_word c,C_word *av) C_noret;
C_noret_decl(f_11412)
static void C_ccall f_11412(C_word c,C_word *av) C_noret;
C_noret_decl(f_11418)
static void f_11418(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11443)
static void C_ccall f_11443(C_word c,C_word *av) C_noret;
C_noret_decl(f_11457)
static void C_ccall f_11457(C_word c,C_word *av) C_noret;
C_noret_decl(f_11469)
static void C_ccall f_11469(C_word c,C_word *av) C_noret;
C_noret_decl(f_11473)
static void C_ccall f_11473(C_word c,C_word *av) C_noret;
C_noret_decl(f_11500)
static void C_ccall f_11500(C_word c,C_word *av) C_noret;
C_noret_decl(f_11504)
static void C_ccall f_11504(C_word c,C_word *av) C_noret;
C_noret_decl(f_11508)
static void C_ccall f_11508(C_word c,C_word *av) C_noret;
C_noret_decl(f_11512)
static void C_ccall f_11512(C_word c,C_word *av) C_noret;
C_noret_decl(f_11516)
static void C_ccall f_11516(C_word c,C_word *av) C_noret;
C_noret_decl(f_11524)
static void C_ccall f_11524(C_word c,C_word *av) C_noret;
C_noret_decl(f_11532)
static void C_ccall f_11532(C_word c,C_word *av) C_noret;
C_noret_decl(f_11540)
static void C_ccall f_11540(C_word c,C_word *av) C_noret;
C_noret_decl(f_11546)
static void C_ccall f_11546(C_word c,C_word *av) C_noret;
C_noret_decl(f_11550)
static void C_ccall f_11550(C_word c,C_word *av) C_noret;
C_noret_decl(f_11553)
static void C_ccall f_11553(C_word c,C_word *av) C_noret;
C_noret_decl(f_11562)
static void C_ccall f_11562(C_word c,C_word *av) C_noret;
C_noret_decl(f_11568)
static void C_ccall f_11568(C_word c,C_word *av) C_noret;
C_noret_decl(f_11572)
static void f_11572(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11575)
static void C_ccall f_11575(C_word c,C_word *av) C_noret;
C_noret_decl(f_11587)
static void C_ccall f_11587(C_word c,C_word *av) C_noret;
C_noret_decl(f_11589)
static void C_ccall f_11589(C_word c,C_word *av) C_noret;
C_noret_decl(f_11595)
static void C_ccall f_11595(C_word c,C_word *av) C_noret;
C_noret_decl(f_11600)
static void C_ccall f_11600(C_word c,C_word *av) C_noret;
C_noret_decl(f_11604)
static void C_ccall f_11604(C_word c,C_word *av) C_noret;
C_noret_decl(f_11607)
static void f_11607(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11617)
static void C_ccall f_11617(C_word c,C_word *av) C_noret;
C_noret_decl(f_11630)
static void C_ccall f_11630(C_word c,C_word *av) C_noret;
C_noret_decl(f_11635)
static void C_ccall f_11635(C_word c,C_word *av) C_noret;
C_noret_decl(f_11642)
static void C_ccall f_11642(C_word c,C_word *av) C_noret;
C_noret_decl(f_11645)
static void C_ccall f_11645(C_word c,C_word *av) C_noret;
C_noret_decl(f_11660)
static void C_ccall f_11660(C_word c,C_word *av) C_noret;
C_noret_decl(f_11668)
static void C_ccall f_11668(C_word c,C_word *av) C_noret;
C_noret_decl(f_11672)
static void C_ccall f_11672(C_word c,C_word *av) C_noret;
C_noret_decl(f_11675)
static void C_ccall f_11675(C_word c,C_word *av) C_noret;
C_noret_decl(f_11679)
static void C_ccall f_11679(C_word c,C_word *av) C_noret;
C_noret_decl(f_11683)
static void C_ccall f_11683(C_word c,C_word *av) C_noret;
C_noret_decl(f_11686)
static void C_ccall f_11686(C_word c,C_word *av) C_noret;
C_noret_decl(f_11689)
static void C_ccall f_11689(C_word c,C_word *av) C_noret;
C_noret_decl(f_11698)
static void C_ccall f_11698(C_word c,C_word *av) C_noret;
C_noret_decl(f_11708)
static void C_ccall f_11708(C_word c,C_word *av) C_noret;
C_noret_decl(f_11712)
static void C_ccall f_11712(C_word c,C_word *av) C_noret;
C_noret_decl(f_11715)
static void C_ccall f_11715(C_word c,C_word *av) C_noret;
C_noret_decl(f_11718)
static void C_ccall f_11718(C_word c,C_word *av) C_noret;
C_noret_decl(f_11721)
static void C_ccall f_11721(C_word c,C_word *av) C_noret;
C_noret_decl(f_11729)
static void C_ccall f_11729(C_word c,C_word *av) C_noret;
C_noret_decl(f_11738)
static void C_ccall f_11738(C_word c,C_word *av) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word *av) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word *av) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word *av) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word *av) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word *av) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word *av) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3624)
static void C_ccall f_3624(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3631)
static void f_3631(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3658)
static void f_3658(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3671)
static void f_3671(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3693)
static void f_3693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3697)
static void C_ccall f_3697(C_word c,C_word *av) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word *av) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word *av) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word *av) C_noret;
C_noret_decl(f_3725)
static void C_ccall f_3725(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void f_3727(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void f_3739(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3756)
static void f_3756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3786)
static C_word f_3786(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3816)
static C_word f_3816(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5);
C_noret_decl(f_3830)
static void f_3830(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3847)
static void f_3847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word *av) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_3880)
static void f_3880(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word *av) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word *av) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word *av) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word *av) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word *av) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3944)
static void f_3944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word *av) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word *av) C_noret;
C_noret_decl(f_3983)
static void f_3983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word *av) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word *av) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word *av) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word *av) C_noret;
C_noret_decl(f_4010)
static void f_4010(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word *av) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word *av) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word *av) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word *av) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word *av) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word *av) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word *av) C_noret;
C_noret_decl(f_4186)
static void C_ccall f_4186(C_word c,C_word *av) C_noret;
C_noret_decl(f_4194)
static void C_ccall f_4194(C_word c,C_word *av) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word *av) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word *av) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word *av) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word *av) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word *av) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word *av) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word *av) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word *av) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word *av) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word *av) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word *av) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word *av) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word *av) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word *av) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word *av) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word *av) C_noret;
C_noret_decl(f_4421)
static void C_ccall f_4421(C_word c,C_word *av) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word *av) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word *av) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word *av) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word *av) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word *av) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word *av) C_noret;
C_noret_decl(f_4514)
static void C_ccall f_4514(C_word c,C_word *av) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word *av) C_noret;
C_noret_decl(f_4531)
static void C_ccall f_4531(C_word c,C_word *av) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word *av) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word *av) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word *av) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word *av) C_noret;
C_noret_decl(f_4611)
static void C_ccall f_4611(C_word c,C_word *av) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word *av) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word *av) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word *av) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word *av) C_noret;
C_noret_decl(f_4646)
static void C_ccall f_4646(C_word c,C_word *av) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word *av) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word *av) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word *av) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word *av) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word *av) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word *av) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word *av) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word *av) C_noret;
C_noret_decl(f_4754)
static void C_ccall f_4754(C_word c,C_word *av) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word *av) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word *av) C_noret;
C_noret_decl(f_4787)
static void C_ccall f_4787(C_word c,C_word *av) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word *av) C_noret;
C_noret_decl(f_4791)
static void C_ccall f_4791(C_word c,C_word *av) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_4815)
static void C_ccall f_4815(C_word c,C_word *av) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word *av) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word *av) C_noret;
C_noret_decl(f_4839)
static void C_ccall f_4839(C_word c,C_word *av) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word *av) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word *av) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word *av) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word *av) C_noret;
C_noret_decl(f_4890)
static void C_ccall f_4890(C_word c,C_word *av) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word *av) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word *av) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word *av) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word *av) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word *av) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word *av) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word *av) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word *av) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word *av) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word *av) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word *av) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word *av) C_noret;
C_noret_decl(f_4980)
static void f_4980(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word *av) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word *av) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word *av) C_noret;
C_noret_decl(f_5001)
static void C_ccall f_5001(C_word c,C_word *av) C_noret;
C_noret_decl(f_5010)
static void f_5010(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5040)
static void f_5040(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word *av) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word *av) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word *av) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word *av) C_noret;
C_noret_decl(f_5093)
static void C_ccall f_5093(C_word c,C_word *av) C_noret;
C_noret_decl(f_5099)
static void C_ccall f_5099(C_word c,C_word *av) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word *av) C_noret;
C_noret_decl(f_5115)
static void C_ccall f_5115(C_word c,C_word *av) C_noret;
C_noret_decl(f_5117)
static void C_ccall f_5117(C_word c,C_word *av) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word *av) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word *av) C_noret;
C_noret_decl(f_5129)
static void C_ccall f_5129(C_word c,C_word *av) C_noret;
C_noret_decl(f_5131)
static void f_5131(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word *av) C_noret;
C_noret_decl(f_5165)
static void f_5165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word *av) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word *av) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word *av) C_noret;
C_noret_decl(f_5276)
static void f_5276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5310)
static void f_5310(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5360)
static void C_ccall f_5360(C_word c,C_word *av) C_noret;
C_noret_decl(f_5369)
static void C_ccall f_5369(C_word c,C_word *av) C_noret;
C_noret_decl(f_5395)
static void C_ccall f_5395(C_word c,C_word *av) C_noret;
C_noret_decl(f_5422)
static void C_ccall f_5422(C_word c,C_word *av) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word *av) C_noret;
C_noret_decl(f_5438)
static void C_ccall f_5438(C_word c,C_word *av) C_noret;
C_noret_decl(f_5452)
static void f_5452(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5500)
static void f_5500(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5548)
static void f_5548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5582)
static void f_5582(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5616)
static void f_5616(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word *av) C_noret;
C_noret_decl(f_5668)
static void C_ccall f_5668(C_word c,C_word *av) C_noret;
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word *av) C_noret;
C_noret_decl(f_5683)
static void C_ccall f_5683(C_word c,C_word *av) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word *av) C_noret;
C_noret_decl(f_5692)
static void C_ccall f_5692(C_word c,C_word *av) C_noret;
C_noret_decl(f_5702)
static void C_ccall f_5702(C_word c,C_word *av) C_noret;
C_noret_decl(f_5708)
static void C_ccall f_5708(C_word c,C_word *av) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word *av) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word *av) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word *av) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word *av) C_noret;
C_noret_decl(f_5770)
static void C_ccall f_5770(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word *av) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word *av) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word *av) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word *av) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word *av) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word *av) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word *av) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word *av) C_noret;
C_noret_decl(f_5886)
static void C_ccall f_5886(C_word c,C_word *av) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word *av) C_noret;
C_noret_decl(f_5905)
static void C_ccall f_5905(C_word c,C_word *av) C_noret;
C_noret_decl(f_5911)
static void C_ccall f_5911(C_word c,C_word *av) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word *av) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word *av) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word *av) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word *av) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word *av) C_noret;
C_noret_decl(f_5956)
static void C_ccall f_5956(C_word c,C_word *av) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word *av) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word *av) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word *av) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word *av) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word *av) C_noret;
C_noret_decl(f_6011)
static void C_ccall f_6011(C_word c,C_word *av) C_noret;
C_noret_decl(f_6019)
static void C_ccall f_6019(C_word c,C_word *av) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word *av) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word *av) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word *av) C_noret;
C_noret_decl(f_6039)
static void f_6039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word *av) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word *av) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word *av) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word *av) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word *av) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word *av) C_noret;
C_noret_decl(f_6109)
static void C_ccall f_6109(C_word c,C_word *av) C_noret;
C_noret_decl(f_6114)
static void C_ccall f_6114(C_word c,C_word *av) C_noret;
C_noret_decl(f_6118)
static void C_ccall f_6118(C_word c,C_word *av) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word *av) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word *av) C_noret;
C_noret_decl(f_6139)
static void C_ccall f_6139(C_word c,C_word *av) C_noret;
C_noret_decl(f_6147)
static void C_ccall f_6147(C_word c,C_word *av) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word *av) C_noret;
C_noret_decl(f_6153)
static void C_ccall f_6153(C_word c,C_word *av) C_noret;
C_noret_decl(f_6156)
static void C_ccall f_6156(C_word c,C_word *av) C_noret;
C_noret_decl(f_6174)
static void C_ccall f_6174(C_word c,C_word *av) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word *av) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word *av) C_noret;
C_noret_decl(f_6186)
static void C_ccall f_6186(C_word c,C_word *av) C_noret;
C_noret_decl(f_6201)
static void C_ccall f_6201(C_word c,C_word *av) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word *av) C_noret;
C_noret_decl(f_6207)
static void f_6207(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word *av) C_noret;
C_noret_decl(f_6265)
static void C_ccall f_6265(C_word c,C_word *av) C_noret;
C_noret_decl(f_6269)
static void C_ccall f_6269(C_word c,C_word *av) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word *av) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word *av) C_noret;
C_noret_decl(f_6288)
static C_word f_6288(C_word t0,C_word t1);
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word *av) C_noret;
C_noret_decl(f_6311)
static void C_ccall f_6311(C_word c,C_word *av) C_noret;
C_noret_decl(f_6315)
static void C_ccall f_6315(C_word c,C_word *av) C_noret;
C_noret_decl(f_6318)
static void C_ccall f_6318(C_word c,C_word *av) C_noret;
C_noret_decl(f_6324)
static void C_ccall f_6324(C_word c,C_word *av) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word *av) C_noret;
C_noret_decl(f_6340)
static void C_ccall f_6340(C_word c,C_word *av) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word *av) C_noret;
C_noret_decl(f_6346)
static void C_ccall f_6346(C_word c,C_word *av) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word *av) C_noret;
C_noret_decl(f_6352)
static C_word f_6352(C_word t0,C_word t1);
C_noret_decl(f_6377)
static void C_ccall f_6377(C_word c,C_word *av) C_noret;
C_noret_decl(f_6379)
static void f_6379(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6426)
static void C_ccall f_6426(C_word c,C_word *av) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word *av) C_noret;
C_noret_decl(f_6432)
static void C_ccall f_6432(C_word c,C_word *av) C_noret;
C_noret_decl(f_6435)
static void C_ccall f_6435(C_word c,C_word *av) C_noret;
C_noret_decl(f_6438)
static void C_ccall f_6438(C_word c,C_word *av) C_noret;
C_noret_decl(f_6445)
static void C_ccall f_6445(C_word c,C_word *av) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word *av) C_noret;
C_noret_decl(f_6453)
static void C_ccall f_6453(C_word c,C_word *av) C_noret;
C_noret_decl(f_6470)
static void C_ccall f_6470(C_word c,C_word *av) C_noret;
C_noret_decl(f_6492)
static void C_ccall f_6492(C_word c,C_word *av) C_noret;
C_noret_decl(f_6500)
static void C_ccall f_6500(C_word c,C_word *av) C_noret;
C_noret_decl(f_6536)
static void C_ccall f_6536(C_word c,C_word *av) C_noret;
C_noret_decl(f_6548)
static void C_ccall f_6548(C_word c,C_word *av) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word *av) C_noret;
C_noret_decl(f_6564)
static void f_6564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6589)
static void C_ccall f_6589(C_word c,C_word *av) C_noret;
C_noret_decl(f_6605)
static void C_ccall f_6605(C_word c,C_word *av) C_noret;
C_noret_decl(f_6614)
static void C_ccall f_6614(C_word c,C_word *av) C_noret;
C_noret_decl(f_6617)
static void C_ccall f_6617(C_word c,C_word *av) C_noret;
C_noret_decl(f_6620)
static void C_ccall f_6620(C_word c,C_word *av) C_noret;
C_noret_decl(f_6623)
static void C_ccall f_6623(C_word c,C_word *av) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word *av) C_noret;
C_noret_decl(f_6632)
static void C_ccall f_6632(C_word c,C_word *av) C_noret;
C_noret_decl(f_6635)
static void C_ccall f_6635(C_word c,C_word *av) C_noret;
C_noret_decl(f_6638)
static void C_ccall f_6638(C_word c,C_word *av) C_noret;
C_noret_decl(f_6641)
static void C_ccall f_6641(C_word c,C_word *av) C_noret;
C_noret_decl(f_6645)
static void C_ccall f_6645(C_word c,C_word *av) C_noret;
C_noret_decl(f_6649)
static void C_ccall f_6649(C_word c,C_word *av) C_noret;
C_noret_decl(f_6653)
static void C_ccall f_6653(C_word c,C_word *av) C_noret;
C_noret_decl(f_6657)
static void C_ccall f_6657(C_word c,C_word *av) C_noret;
C_noret_decl(f_6660)
static void C_ccall f_6660(C_word c,C_word *av) C_noret;
C_noret_decl(f_6663)
static void C_ccall f_6663(C_word c,C_word *av) C_noret;
C_noret_decl(f_6666)
static void C_ccall f_6666(C_word c,C_word *av) C_noret;
C_noret_decl(f_6669)
static void C_ccall f_6669(C_word c,C_word *av) C_noret;
C_noret_decl(f_6684)
static void C_ccall f_6684(C_word c,C_word *av) C_noret;
C_noret_decl(f_6690)
static void C_ccall f_6690(C_word c,C_word *av) C_noret;
C_noret_decl(f_6700)
static void f_6700(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6710)
static void C_ccall f_6710(C_word c,C_word *av) C_noret;
C_noret_decl(f_6713)
static void C_ccall f_6713(C_word c,C_word *av) C_noret;
C_noret_decl(f_6716)
static void C_ccall f_6716(C_word c,C_word *av) C_noret;
C_noret_decl(f_6717)
static void C_ccall f_6717(C_word c,C_word *av) C_noret;
C_noret_decl(f_6723)
static void f_6723(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6746)
static void C_ccall f_6746(C_word c,C_word *av) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word *av) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761(C_word c,C_word *av) C_noret;
C_noret_decl(f_6776)
static void C_ccall f_6776(C_word c,C_word *av) C_noret;
C_noret_decl(f_6780)
static void C_ccall f_6780(C_word c,C_word *av) C_noret;
C_noret_decl(f_6784)
static void C_ccall f_6784(C_word c,C_word *av) C_noret;
C_noret_decl(f_6787)
static void C_ccall f_6787(C_word c,C_word *av) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word *av) C_noret;
C_noret_decl(f_6793)
static void C_ccall f_6793(C_word c,C_word *av) C_noret;
C_noret_decl(f_6796)
static void C_ccall f_6796(C_word c,C_word *av) C_noret;
C_noret_decl(f_6799)
static void C_ccall f_6799(C_word c,C_word *av) C_noret;
C_noret_decl(f_6802)
static void C_ccall f_6802(C_word c,C_word *av) C_noret;
C_noret_decl(f_6805)
static void C_ccall f_6805(C_word c,C_word *av) C_noret;
C_noret_decl(f_6812)
static void C_ccall f_6812(C_word c,C_word *av) C_noret;
C_noret_decl(f_6819)
static void f_6819(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6832)
static void f_6832(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6843)
static C_word f_6843(C_word t0);
C_noret_decl(f_6876)
static void f_6876(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word *av) C_noret;
C_noret_decl(f_6929)
static void C_ccall f_6929(C_word c,C_word *av) C_noret;
C_noret_decl(f_6963)
static void C_ccall f_6963(C_word c,C_word *av) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word *av) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word *av) C_noret;
C_noret_decl(f_7039)
static void f_7039(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7051)
static void C_ccall f_7051(C_word c,C_word *av) C_noret;
C_noret_decl(f_7074)
static void C_ccall f_7074(C_word c,C_word *av) C_noret;
C_noret_decl(f_7087)
static void f_7087(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7107)
static void C_ccall f_7107(C_word c,C_word *av) C_noret;
C_noret_decl(f_7133)
static void f_7133(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word *av) C_noret;
C_noret_decl(f_7163)
static void C_ccall f_7163(C_word c,C_word *av) C_noret;
C_noret_decl(f_7168)
static void C_ccall f_7168(C_word c,C_word *av) C_noret;
C_noret_decl(f_7176)
static void C_ccall f_7176(C_word c,C_word *av) C_noret;
C_noret_decl(f_7178)
static void C_ccall f_7178(C_word c,C_word *av) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word *av) C_noret;
C_noret_decl(f_7366)
static void C_ccall f_7366(C_word c,C_word *av) C_noret;
C_noret_decl(f_7374)
static void C_ccall f_7374(C_word c,C_word *av) C_noret;
C_noret_decl(f_7376)
static void C_ccall f_7376(C_word c,C_word *av) C_noret;
C_noret_decl(f_7382)
static void C_ccall f_7382(C_word c,C_word *av) C_noret;
C_noret_decl(f_7389)
static void C_ccall f_7389(C_word c,C_word *av) C_noret;
C_noret_decl(f_7418)
static void C_ccall f_7418(C_word c,C_word *av) C_noret;
C_noret_decl(f_7447)
static void f_7447(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7476)
static void C_ccall f_7476(C_word c,C_word *av) C_noret;
C_noret_decl(f_7493)
static C_word f_7493(C_word t0,C_word t1);
C_noret_decl(f_7519)
static void f_7519(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7526)
static void C_ccall f_7526(C_word c,C_word *av) C_noret;
C_noret_decl(f_7535)
static void C_ccall f_7535(C_word c,C_word *av) C_noret;
C_noret_decl(f_7554)
static void C_ccall f_7554(C_word c,C_word *av) C_noret;
C_noret_decl(f_7561)
static void C_ccall f_7561(C_word c,C_word *av) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word *av) C_noret;
C_noret_decl(f_7574)
static void C_ccall f_7574(C_word c,C_word *av) C_noret;
C_noret_decl(f_7581)
static void C_ccall f_7581(C_word c,C_word *av) C_noret;
C_noret_decl(f_7588)
static void C_ccall f_7588(C_word c,C_word *av) C_noret;
C_noret_decl(f_7601)
static void C_ccall f_7601(C_word c,C_word *av) C_noret;
C_noret_decl(f_7604)
static void C_ccall f_7604(C_word c,C_word *av) C_noret;
C_noret_decl(f_7605)
static void C_ccall f_7605(C_word c,C_word *av) C_noret;
C_noret_decl(f_7612)
static void C_ccall f_7612(C_word c,C_word *av) C_noret;
C_noret_decl(f_7619)
static void C_ccall f_7619(C_word c,C_word *av) C_noret;
C_noret_decl(f_7623)
static void C_ccall f_7623(C_word c,C_word *av) C_noret;
C_noret_decl(f_7637)
static void C_ccall f_7637(C_word c,C_word *av) C_noret;
C_noret_decl(f_7640)
static void C_ccall f_7640(C_word c,C_word *av) C_noret;
C_noret_decl(f_7643)
static void C_ccall f_7643(C_word c,C_word *av) C_noret;
C_noret_decl(f_7644)
static void C_ccall f_7644(C_word c,C_word *av) C_noret;
C_noret_decl(f_7651)
static void C_ccall f_7651(C_word c,C_word *av) C_noret;
C_noret_decl(f_7658)
static void C_ccall f_7658(C_word c,C_word *av) C_noret;
C_noret_decl(f_7662)
static void C_ccall f_7662(C_word c,C_word *av) C_noret;
C_noret_decl(f_7666)
static void C_ccall f_7666(C_word c,C_word *av) C_noret;
C_noret_decl(f_7681)
static void C_ccall f_7681(C_word c,C_word *av) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word *av) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word *av) C_noret;
C_noret_decl(f_7690)
static void C_ccall f_7690(C_word c,C_word *av) C_noret;
C_noret_decl(f_7691)
static void C_ccall f_7691(C_word c,C_word *av) C_noret;
C_noret_decl(f_7698)
static void C_ccall f_7698(C_word c,C_word *av) C_noret;
C_noret_decl(f_7705)
static void C_ccall f_7705(C_word c,C_word *av) C_noret;
C_noret_decl(f_7709)
static void C_ccall f_7709(C_word c,C_word *av) C_noret;
C_noret_decl(f_7713)
static void C_ccall f_7713(C_word c,C_word *av) C_noret;
C_noret_decl(f_7717)
static void C_ccall f_7717(C_word c,C_word *av) C_noret;
C_noret_decl(f_7728)
static void f_7728(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word *av) C_noret;
C_noret_decl(f_7739)
static void C_ccall f_7739(C_word c,C_word *av) C_noret;
C_noret_decl(f_7750)
static void C_ccall f_7750(C_word c,C_word *av) C_noret;
C_noret_decl(f_7755)
static void f_7755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7765)
static void C_ccall f_7765(C_word c,C_word *av) C_noret;
C_noret_decl(f_7767)
static void f_7767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7792)
static void C_ccall f_7792(C_word c,C_word *av) C_noret;
C_noret_decl(f_7801)
static void f_7801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7826)
static void C_ccall f_7826(C_word c,C_word *av) C_noret;
C_noret_decl(f_7849)
static void C_ccall f_7849(C_word c,C_word *av) C_noret;
C_noret_decl(f_7868)
static void C_ccall f_7868(C_word c,C_word *av) C_noret;
C_noret_decl(f_7918)
static void C_ccall f_7918(C_word c,C_word *av) C_noret;
C_noret_decl(f_7922)
static void C_ccall f_7922(C_word c,C_word *av) C_noret;
C_noret_decl(f_7925)
static void C_ccall f_7925(C_word c,C_word *av) C_noret;
C_noret_decl(f_7930)
static void C_ccall f_7930(C_word c,C_word *av) C_noret;
C_noret_decl(f_7934)
static void C_ccall f_7934(C_word c,C_word *av) C_noret;
C_noret_decl(f_7937)
static void C_ccall f_7937(C_word c,C_word *av) C_noret;
C_noret_decl(f_7940)
static void C_ccall f_7940(C_word c,C_word *av) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word *av) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word *av) C_noret;
C_noret_decl(f_7952)
static void C_ccall f_7952(C_word c,C_word *av) C_noret;
C_noret_decl(f_7955)
static void C_ccall f_7955(C_word c,C_word *av) C_noret;
C_noret_decl(f_7958)
static void C_ccall f_7958(C_word c,C_word *av) C_noret;
C_noret_decl(f_7961)
static void C_ccall f_7961(C_word c,C_word *av) C_noret;
C_noret_decl(f_7973)
static void C_ccall f_7973(C_word c,C_word *av) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word *av) C_noret;
C_noret_decl(f_7983)
static void C_ccall f_7983(C_word c,C_word *av) C_noret;
C_noret_decl(f_7988)
static void C_ccall f_7988(C_word c,C_word *av) C_noret;
C_noret_decl(f_7992)
static void C_ccall f_7992(C_word c,C_word *av) C_noret;
C_noret_decl(f_7999)
static void C_ccall f_7999(C_word c,C_word *av) C_noret;
C_noret_decl(f_8003)
static void C_ccall f_8003(C_word c,C_word *av) C_noret;
C_noret_decl(f_8005)
static void C_ccall f_8005(C_word c,C_word *av) C_noret;
C_noret_decl(f_8009)
static void C_ccall f_8009(C_word c,C_word *av) C_noret;
C_noret_decl(f_8012)
static void C_ccall f_8012(C_word c,C_word *av) C_noret;
C_noret_decl(f_8015)
static void C_ccall f_8015(C_word c,C_word *av) C_noret;
C_noret_decl(f_8018)
static void C_ccall f_8018(C_word c,C_word *av) C_noret;
C_noret_decl(f_8021)
static void C_ccall f_8021(C_word c,C_word *av) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word *av) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word *av) C_noret;
C_noret_decl(f_8033)
static void C_ccall f_8033(C_word c,C_word *av) C_noret;
C_noret_decl(f_8041)
static void C_ccall f_8041(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word *av) C_noret;
C_noret_decl(f_8050)
static void C_ccall f_8050(C_word c,C_word *av) C_noret;
C_noret_decl(f_8052)
static void C_ccall f_8052(C_word c,C_word *av) C_noret;
C_noret_decl(f_8055)
static void f_8055(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8065)
static void f_8065(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8079)
static void C_ccall f_8079(C_word c,C_word *av) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word *av) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word *av) C_noret;
C_noret_decl(f_8141)
static void C_ccall f_8141(C_word c,C_word *av) C_noret;
C_noret_decl(f_8144)
static void C_ccall f_8144(C_word c,C_word *av) C_noret;
C_noret_decl(f_8147)
static void C_ccall f_8147(C_word c,C_word *av) C_noret;
C_noret_decl(f_8150)
static void C_ccall f_8150(C_word c,C_word *av) C_noret;
C_noret_decl(f_8153)
static void C_ccall f_8153(C_word c,C_word *av) C_noret;
C_noret_decl(f_8155)
static void f_8155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8164)
static void f_8164(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word *av) C_noret;
C_noret_decl(f_8213)
static void C_ccall f_8213(C_word c,C_word *av) C_noret;
C_noret_decl(f_8238)
static void C_ccall f_8238(C_word c,C_word *av) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word *av) C_noret;
C_noret_decl(f_8641)
static void f_8641(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8663)
static void C_ccall f_8663(C_word c,C_word *av) C_noret;
C_noret_decl(f_9554)
static void f_9554(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9557)
static void C_ccall f_9557(C_word c,C_word *av) C_noret;
C_noret_decl(f_9571)
static void C_ccall f_9571(C_word c,C_word *av) C_noret;
C_noret_decl(f_9574)
static void f_9574(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9576)
static void C_ccall f_9576(C_word c,C_word *av) C_noret;
C_noret_decl(f_9579)
static void C_ccall f_9579(C_word c,C_word *av) C_noret;
C_noret_decl(f_9586)
static void f_9586(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9596)
static C_word f_9596(C_word t0,C_word t1);
C_noret_decl(f_9624)
static void f_9624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9628)
static void C_ccall f_9628(C_word c,C_word *av) C_noret;
C_noret_decl(f_9641)
static void C_ccall f_9641(C_word c,C_word *av) C_noret;
C_noret_decl(f_9669)
static void C_ccall f_9669(C_word c,C_word *av) C_noret;
C_noret_decl(f_9673)
static void C_ccall f_9673(C_word c,C_word *av) C_noret;
C_noret_decl(f_9680)
static void C_ccall f_9680(C_word c,C_word *av) C_noret;
C_noret_decl(f_9685)
static void f_9685(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9698)
static void C_ccall f_9698(C_word c,C_word *av) C_noret;
C_noret_decl(f_9767)
static void C_ccall f_9767(C_word c,C_word *av) C_noret;
C_noret_decl(f_9771)
static void C_ccall f_9771(C_word c,C_word *av) C_noret;
C_noret_decl(f_9773)
static void f_9773(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9781)
static void C_ccall f_9781(C_word c,C_word *av) C_noret;
C_noret_decl(f_9785)
static void C_ccall f_9785(C_word c,C_word *av) C_noret;
C_noret_decl(f_9787)
static void f_9787(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9825)
static void C_ccall f_9825(C_word c,C_word *av) C_noret;
C_noret_decl(f_9830)
static void f_9830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9834)
static void C_ccall f_9834(C_word c,C_word *av) C_noret;
C_noret_decl(f_9837)
static void C_ccall f_9837(C_word c,C_word *av) C_noret;
C_noret_decl(f_9853)
static void C_ccall f_9853(C_word c,C_word *av) C_noret;
C_noret_decl(f_9857)
static void C_ccall f_9857(C_word c,C_word *av) C_noret;
C_noret_decl(f_9861)
static void C_ccall f_9861(C_word c,C_word *av) C_noret;
C_noret_decl(f_9865)
static void C_ccall f_9865(C_word c,C_word *av) C_noret;
C_noret_decl(f_9869)
static void C_ccall f_9869(C_word c,C_word *av) C_noret;
C_noret_decl(f_9872)
static void C_ccall f_9872(C_word c,C_word *av) C_noret;
C_noret_decl(f_9875)
static void C_ccall f_9875(C_word c,C_word *av) C_noret;
C_noret_decl(f_9878)
static void C_ccall f_9878(C_word c,C_word *av) C_noret;
C_noret_decl(f_9883)
static void f_9883(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9889)
static void C_ccall f_9889(C_word c,C_word *av) C_noret;
C_noret_decl(f_9898)
static void C_ccall f_9898(C_word c,C_word *av) C_noret;
C_noret_decl(f_9902)
static void C_ccall f_9902(C_word c,C_word *av) C_noret;
C_noret_decl(f_9905)
static void C_ccall f_9905(C_word c,C_word *av) C_noret;
C_noret_decl(f_9910)
static void C_ccall f_9910(C_word c,C_word *av) C_noret;
C_noret_decl(f_9915)
static void C_ccall f_9915(C_word c,C_word *av) C_noret;
C_noret_decl(f_9917)
static void C_ccall f_9917(C_word c,C_word *av) C_noret;
C_noret_decl(f_9921)
static void C_ccall f_9921(C_word c,C_word *av) C_noret;
C_noret_decl(f_9924)
static void C_ccall f_9924(C_word c,C_word *av) C_noret;
C_noret_decl(f_9927)
static void C_ccall f_9927(C_word c,C_word *av) C_noret;
C_noret_decl(f_9932)
static void f_9932(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9942)
static void C_ccall f_9942(C_word c,C_word *av) C_noret;
C_noret_decl(f_9945)
static void C_ccall f_9945(C_word c,C_word *av) C_noret;
C_noret_decl(f_9952)
static void C_ccall f_9952(C_word c,C_word *av) C_noret;
C_noret_decl(f_9954)
static void C_ccall f_9954(C_word c,C_word *av) C_noret;
C_noret_decl(f_9961)
static void C_ccall f_9961(C_word c,C_word *av) C_noret;
C_noret_decl(f_9966)
static void C_ccall f_9966(C_word c,C_word *av) C_noret;
C_noret_decl(f_9972)
static void C_ccall f_9972(C_word c,C_word *av) C_noret;
C_noret_decl(f_9976)
static void C_ccall f_9976(C_word c,C_word *av) C_noret;
C_noret_decl(f_9983)
static void C_ccall f_9983(C_word c,C_word *av) C_noret;
C_noret_decl(f_9988)
static void C_ccall f_9988(C_word c,C_word *av) C_noret;
C_noret_decl(f_9997)
static void C_ccall f_9997(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;

/* from CHICKEN_get_error_message */
 void  CHICKEN_get_error_message(char *t0,int t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t1);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t0);
C_save(x);C_callback_wrapper((void *)f_11395,2);}

/* from CHICKEN_load */
 int  CHICKEN_load(char * t0){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0))),*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11380,1));}

/* from CHICKEN_read */
 int  CHICKEN_read(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11358,2));}

/* from CHICKEN_apply_to_string */
 int  CHICKEN_apply_to_string(C_word t0,C_word t1,char *t2,int t3){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t3);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11332,4));}

/* from CHICKEN_apply */
 int  CHICKEN_apply(C_word t0,C_word t1,C_word *t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t2);
C_save(x);
x=((C_word)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11316,3));}

/* from CHICKEN_eval_string_to_string */
 int  CHICKEN_eval_string_to_string(char * t0,char *t1,int t2){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11279,3));}

/* from CHICKEN_eval_to_string */
 int  CHICKEN_eval_to_string(C_word t0,char *t1,int t2){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_fix((C_word)t2);
C_save(x);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11253,3));}

/* from CHICKEN_eval_string */
 int  CHICKEN_eval_string(char * t0,C_word *t1){
C_word x,s=0+2+(t0==NULL?1:C_bytestowords(C_strlen(t0)))+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=C_mpointer(&a,(void*)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11207,2));}

/* from CHICKEN_eval */
 int  CHICKEN_eval(C_word t0,C_word *t1){
C_word x,s=0+3,*a=C_alloc(s);
C_callback_adjust_stack(a,s);
x=C_mpointer_or_false(&a,(void*)t1);
C_save(x);
x=((C_word)t0);
C_save(x);
return C_truep(C_callback_wrapper((void *)f_11191,2));}

/* from CHICKEN_yield */
 int  CHICKEN_yield(){
C_word x,s=0,*a=C_stack_pointer;
C_callback_adjust_stack(a,s);
return C_truep(C_callback_wrapper((void *)f_11179,0));}

C_noret_decl(trf_10005)
static void C_ccall trf_10005(C_word c,C_word *av) C_noret;
static void C_ccall trf_10005(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10005(t0,t1,t2);}

C_noret_decl(trf_10115)
static void C_ccall trf_10115(C_word c,C_word *av) C_noret;
static void C_ccall trf_10115(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10115(t0,t1);}

C_noret_decl(trf_10199)
static void C_ccall trf_10199(C_word c,C_word *av) C_noret;
static void C_ccall trf_10199(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10199(t0,t1);}

C_noret_decl(trf_10289)
static void C_ccall trf_10289(C_word c,C_word *av) C_noret;
static void C_ccall trf_10289(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10289(t0,t1,t2);}

C_noret_decl(trf_10308)
static void C_ccall trf_10308(C_word c,C_word *av) C_noret;
static void C_ccall trf_10308(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10308(t0,t1);}

C_noret_decl(trf_10319)
static void C_ccall trf_10319(C_word c,C_word *av) C_noret;
static void C_ccall trf_10319(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10319(t0,t1,t2);}

C_noret_decl(trf_10462)
static void C_ccall trf_10462(C_word c,C_word *av) C_noret;
static void C_ccall trf_10462(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10462(t0,t1,t2,t3);}

C_noret_decl(trf_10510)
static void C_ccall trf_10510(C_word c,C_word *av) C_noret;
static void C_ccall trf_10510(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10510(t0,t1);}

C_noret_decl(trf_10575)
static void C_ccall trf_10575(C_word c,C_word *av) C_noret;
static void C_ccall trf_10575(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10575(t0,t1,t2);}

C_noret_decl(trf_10620)
static void C_ccall trf_10620(C_word c,C_word *av) C_noret;
static void C_ccall trf_10620(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10620(t0,t1,t2);}

C_noret_decl(trf_10724)
static void C_ccall trf_10724(C_word c,C_word *av) C_noret;
static void C_ccall trf_10724(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10724(t0,t1,t2);}

C_noret_decl(trf_10758)
static void C_ccall trf_10758(C_word c,C_word *av) C_noret;
static void C_ccall trf_10758(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10758(t0,t1,t2);}

C_noret_decl(trf_10823)
static void C_ccall trf_10823(C_word c,C_word *av) C_noret;
static void C_ccall trf_10823(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10823(t0,t1,t2);}

C_noret_decl(trf_10982)
static void C_ccall trf_10982(C_word c,C_word *av) C_noret;
static void C_ccall trf_10982(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10982(t0,t1,t2,t3);}

C_noret_decl(trf_11015)
static void C_ccall trf_11015(C_word c,C_word *av) C_noret;
static void C_ccall trf_11015(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11015(t0,t1,t2);}

C_noret_decl(trf_11066)
static void C_ccall trf_11066(C_word c,C_word *av) C_noret;
static void C_ccall trf_11066(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11066(t0,t1,t2);}

C_noret_decl(trf_11111)
static void C_ccall trf_11111(C_word c,C_word *av) C_noret;
static void C_ccall trf_11111(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11111(t0,t1);}

C_noret_decl(trf_11170)
static void C_ccall trf_11170(C_word c,C_word *av) C_noret;
static void C_ccall trf_11170(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11170(t0,t1,t2);}

C_noret_decl(trf_11418)
static void C_ccall trf_11418(C_word c,C_word *av) C_noret;
static void C_ccall trf_11418(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11418(t0,t1,t2);}

C_noret_decl(trf_11572)
static void C_ccall trf_11572(C_word c,C_word *av) C_noret;
static void C_ccall trf_11572(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11572(t0,t1);}

C_noret_decl(trf_11607)
static void C_ccall trf_11607(C_word c,C_word *av) C_noret;
static void C_ccall trf_11607(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11607(t0,t1);}

C_noret_decl(trf_3631)
static void C_ccall trf_3631(C_word c,C_word *av) C_noret;
static void C_ccall trf_3631(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3631(t0,t1,t2,t3);}

C_noret_decl(trf_3658)
static void C_ccall trf_3658(C_word c,C_word *av) C_noret;
static void C_ccall trf_3658(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3658(t0,t1,t2,t3);}

C_noret_decl(trf_3671)
static void C_ccall trf_3671(C_word c,C_word *av) C_noret;
static void C_ccall trf_3671(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3671(t0,t1);}

C_noret_decl(trf_3693)
static void C_ccall trf_3693(C_word c,C_word *av) C_noret;
static void C_ccall trf_3693(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3693(t0,t1,t2);}

C_noret_decl(trf_3727)
static void C_ccall trf_3727(C_word c,C_word *av) C_noret;
static void C_ccall trf_3727(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3727(t0,t1,t2,t3);}

C_noret_decl(trf_3739)
static void C_ccall trf_3739(C_word c,C_word *av) C_noret;
static void C_ccall trf_3739(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3739(t0,t1,t2,t3);}

C_noret_decl(trf_3756)
static void C_ccall trf_3756(C_word c,C_word *av) C_noret;
static void C_ccall trf_3756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3756(t0,t1,t2);}

C_noret_decl(trf_3830)
static void C_ccall trf_3830(C_word c,C_word *av) C_noret;
static void C_ccall trf_3830(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3830(t0,t1,t2,t3);}

C_noret_decl(trf_3847)
static void C_ccall trf_3847(C_word c,C_word *av) C_noret;
static void C_ccall trf_3847(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3847(t0,t1,t2);}

C_noret_decl(trf_3880)
static void C_ccall trf_3880(C_word c,C_word *av) C_noret;
static void C_ccall trf_3880(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3880(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3944)
static void C_ccall trf_3944(C_word c,C_word *av) C_noret;
static void C_ccall trf_3944(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_3944(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_3983)
static void C_ccall trf_3983(C_word c,C_word *av) C_noret;
static void C_ccall trf_3983(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3983(t0,t1);}

C_noret_decl(trf_4010)
static void C_ccall trf_4010(C_word c,C_word *av) C_noret;
static void C_ccall trf_4010(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4010(t0,t1);}

C_noret_decl(trf_4980)
static void C_ccall trf_4980(C_word c,C_word *av) C_noret;
static void C_ccall trf_4980(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4980(t0,t1,t2);}

C_noret_decl(trf_5010)
static void C_ccall trf_5010(C_word c,C_word *av) C_noret;
static void C_ccall trf_5010(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5010(t0,t1,t2,t3);}

C_noret_decl(trf_5040)
static void C_ccall trf_5040(C_word c,C_word *av) C_noret;
static void C_ccall trf_5040(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5040(t0,t1,t2);}

C_noret_decl(trf_5131)
static void C_ccall trf_5131(C_word c,C_word *av) C_noret;
static void C_ccall trf_5131(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5131(t0,t1,t2);}

C_noret_decl(trf_5165)
static void C_ccall trf_5165(C_word c,C_word *av) C_noret;
static void C_ccall trf_5165(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5165(t0,t1,t2);}

C_noret_decl(trf_5276)
static void C_ccall trf_5276(C_word c,C_word *av) C_noret;
static void C_ccall trf_5276(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5276(t0,t1,t2);}

C_noret_decl(trf_5310)
static void C_ccall trf_5310(C_word c,C_word *av) C_noret;
static void C_ccall trf_5310(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5310(t0,t1,t2);}

C_noret_decl(trf_5452)
static void C_ccall trf_5452(C_word c,C_word *av) C_noret;
static void C_ccall trf_5452(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5452(t0,t1,t2,t3);}

C_noret_decl(trf_5500)
static void C_ccall trf_5500(C_word c,C_word *av) C_noret;
static void C_ccall trf_5500(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5500(t0,t1,t2,t3);}

C_noret_decl(trf_5548)
static void C_ccall trf_5548(C_word c,C_word *av) C_noret;
static void C_ccall trf_5548(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5548(t0,t1,t2);}

C_noret_decl(trf_5582)
static void C_ccall trf_5582(C_word c,C_word *av) C_noret;
static void C_ccall trf_5582(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5582(t0,t1,t2);}

C_noret_decl(trf_5616)
static void C_ccall trf_5616(C_word c,C_word *av) C_noret;
static void C_ccall trf_5616(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5616(t0,t1,t2);}

C_noret_decl(trf_6039)
static void C_ccall trf_6039(C_word c,C_word *av) C_noret;
static void C_ccall trf_6039(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6039(t0,t1,t2);}

C_noret_decl(trf_6207)
static void C_ccall trf_6207(C_word c,C_word *av) C_noret;
static void C_ccall trf_6207(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6207(t0,t1,t2);}

C_noret_decl(trf_6379)
static void C_ccall trf_6379(C_word c,C_word *av) C_noret;
static void C_ccall trf_6379(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6379(t0,t1,t2);}

C_noret_decl(trf_6564)
static void C_ccall trf_6564(C_word c,C_word *av) C_noret;
static void C_ccall trf_6564(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6564(t0,t1,t2);}

C_noret_decl(trf_6700)
static void C_ccall trf_6700(C_word c,C_word *av) C_noret;
static void C_ccall trf_6700(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6700(t0,t1,t2,t3);}

C_noret_decl(trf_6723)
static void C_ccall trf_6723(C_word c,C_word *av) C_noret;
static void C_ccall trf_6723(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6723(t0,t1,t2);}

C_noret_decl(trf_6819)
static void C_ccall trf_6819(C_word c,C_word *av) C_noret;
static void C_ccall trf_6819(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6819(t0,t1,t2);}

C_noret_decl(trf_6832)
static void C_ccall trf_6832(C_word c,C_word *av) C_noret;
static void C_ccall trf_6832(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6832(t0,t1);}

C_noret_decl(trf_6876)
static void C_ccall trf_6876(C_word c,C_word *av) C_noret;
static void C_ccall trf_6876(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6876(t0,t1,t2);}

C_noret_decl(trf_7039)
static void C_ccall trf_7039(C_word c,C_word *av) C_noret;
static void C_ccall trf_7039(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7039(t0,t1);}

C_noret_decl(trf_7087)
static void C_ccall trf_7087(C_word c,C_word *av) C_noret;
static void C_ccall trf_7087(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7087(t0,t1);}

C_noret_decl(trf_7133)
static void C_ccall trf_7133(C_word c,C_word *av) C_noret;
static void C_ccall trf_7133(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7133(t0,t1,t2);}

C_noret_decl(trf_7447)
static void C_ccall trf_7447(C_word c,C_word *av) C_noret;
static void C_ccall trf_7447(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7447(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7519)
static void C_ccall trf_7519(C_word c,C_word *av) C_noret;
static void C_ccall trf_7519(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7519(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7728)
static void C_ccall trf_7728(C_word c,C_word *av) C_noret;
static void C_ccall trf_7728(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7728(t0,t1,t2);}

C_noret_decl(trf_7755)
static void C_ccall trf_7755(C_word c,C_word *av) C_noret;
static void C_ccall trf_7755(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7755(t0,t1,t2);}

C_noret_decl(trf_7767)
static void C_ccall trf_7767(C_word c,C_word *av) C_noret;
static void C_ccall trf_7767(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7767(t0,t1,t2);}

C_noret_decl(trf_7801)
static void C_ccall trf_7801(C_word c,C_word *av) C_noret;
static void C_ccall trf_7801(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7801(t0,t1,t2);}

C_noret_decl(trf_8055)
static void C_ccall trf_8055(C_word c,C_word *av) C_noret;
static void C_ccall trf_8055(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8055(t0,t1);}

C_noret_decl(trf_8065)
static void C_ccall trf_8065(C_word c,C_word *av) C_noret;
static void C_ccall trf_8065(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8065(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8155)
static void C_ccall trf_8155(C_word c,C_word *av) C_noret;
static void C_ccall trf_8155(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8155(t0,t1);}

C_noret_decl(trf_8164)
static void C_ccall trf_8164(C_word c,C_word *av) C_noret;
static void C_ccall trf_8164(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8164(t0,t1,t2);}

C_noret_decl(trf_8641)
static void C_ccall trf_8641(C_word c,C_word *av) C_noret;
static void C_ccall trf_8641(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8641(t0,t1,t2);}

C_noret_decl(trf_9554)
static void C_ccall trf_9554(C_word c,C_word *av) C_noret;
static void C_ccall trf_9554(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9554(t0,t1);}

C_noret_decl(trf_9574)
static void C_ccall trf_9574(C_word c,C_word *av) C_noret;
static void C_ccall trf_9574(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9574(t0,t1);}

C_noret_decl(trf_9586)
static void C_ccall trf_9586(C_word c,C_word *av) C_noret;
static void C_ccall trf_9586(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9586(t0,t1);}

C_noret_decl(trf_9624)
static void C_ccall trf_9624(C_word c,C_word *av) C_noret;
static void C_ccall trf_9624(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9624(t0,t1,t2);}

C_noret_decl(trf_9685)
static void C_ccall trf_9685(C_word c,C_word *av) C_noret;
static void C_ccall trf_9685(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9685(t0,t1,t2);}

C_noret_decl(trf_9773)
static void C_ccall trf_9773(C_word c,C_word *av) C_noret;
static void C_ccall trf_9773(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9773(t0,t1,t2);}

C_noret_decl(trf_9787)
static void C_ccall trf_9787(C_word c,C_word *av) C_noret;
static void C_ccall trf_9787(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9787(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9830)
static void C_ccall trf_9830(C_word c,C_word *av) C_noret;
static void C_ccall trf_9830(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9830(t0,t1,t2);}

C_noret_decl(trf_9883)
static void C_ccall trf_9883(C_word c,C_word *av) C_noret;
static void C_ccall trf_9883(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9883(t0,t1);}

C_noret_decl(trf_9932)
static void C_ccall trf_9932(C_word c,C_word *av) C_noret;
static void C_ccall trf_9932(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9932(t0,t1,t2);}

/* f12364 in scheme#load in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f12364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f12364,c,av);}
/* eval.scm:1137: load/internal */
t2=C_retrieve2(lf[235],C_text("chicken.load#load/internal"));
f_9787(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* for-each-loop2395 in a9987 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in ... */
static void f_10005(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_10005,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10015,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9997,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1120: write */
t6=*((C_word*)lf[16]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10013 in for-each-loop2395 in a9987 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in ... */
static void C_ccall f_10015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10015,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10005(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k10037 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in ... */
static void C_ccall f_10039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10039,c,av);}
/* eval.scm:1101: ##sys#error */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[237];
av2[3]=t1;
av2[4]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k10041 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in ... */
static void C_ccall f_10043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10043,c,av);}
if(C_truep(t1)){
/* eval.scm:1103: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[245];
av2[3]=t1;
tp(4,av2);}}
else{
/* eval.scm:1103: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[245];
av2[3]=lf[246];
tp(4,av2);}}}

/* a10047 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_10048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10048,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10052,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1124: case-sensitive */
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10050 in a10047 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in ... */
static void C_ccall f_10052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10052,c,av);}
/* eval.scm:1125: close-input-port */
t2=*((C_word*)lf[249]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a10059 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10060(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10060,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[239]));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_fast_retrieve(lf[215]));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_fast_retrieve(lf[19]));
t5=C_mutate((C_word*)lf[239]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[215]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k10077 in k10089 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10079,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10082,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1083: display */
t4=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[3])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10080 in k10077 in k10089 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_10082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10082,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10085,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1084: display */
t3=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[253];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k10083 in k10080 in k10077 in k10089 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10085,c,av);}
/* eval.scm:1085: chicken.base#flush-output */
t2=*((C_word*)lf[251]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10089 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10091,c,av);}
a=C_alloc(3);
t2=(C_truep(t1)?((C_word*)((C_word*)t0)[3])[1]:C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10079,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1082: display */
t4=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[254];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_9872(2,av2);}}}

/* k10092 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_10094,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_9869(2,av2);}}
else{
t2=C_i_stringp(((C_word*)t0)[3]);
if(C_truep(C_i_not(t2))){
/* eval.scm:1072: ##sys#signal-hook */
t3=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[255];
av2[3]=lf[237];
av2[4]=lf[256];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10109,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1073: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[237];
tp(6,av2);}}}}

/* k10107 in k10092 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10109,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
f_9869(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10112,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1074: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=C_fast_retrieve(lf[201]);
tp(4,av2);}}}

/* k10110 in k10107 in k10092 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_10112,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10115,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t2)[4])[1])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10139,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1075: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t4;
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[237];
tp(6,av2);}}
else{
t4=t3;
f_10115(t4,C_SCHEME_FALSE);}}

/* k10113 in k10110 in k10107 in k10092 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void f_10115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_10115,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=t1;
f_9869(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10121,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1076: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_retrieve2(lf[198],C_text("chicken.load#constant2217"));
tp(4,av2);}}}

/* k10119 in k10113 in k10110 in k10107 in k10092 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_10121,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10133,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1077: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[2];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[237];
tp(6,av2);}}

/* k10131 in k10119 in k10113 in k10110 in k10107 in k10092 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10133,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
if(C_truep(((C_word*)t2)[2])){
t3=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
f_9869(2,av2);}}
else{
/* eval.scm:1079: ##sys#signal-hook */
t3=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=lf[257];
av2[3]=lf[237];
av2[4]=lf[258];
av2[5]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}
else{
/* eval.scm:1079: ##sys#signal-hook */
t3=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=lf[257];
av2[3]=lf[237];
av2[4]=lf[258];
av2[5]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k10137 in k10110 in k10107 in k10092 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_10139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10139,c,av);}
t2=((C_word*)t0)[2];
f_10115(t2,(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE));}

/* chicken.load#evaluator in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void f_10199(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10199,2,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_closurep(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_not(t2);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(C_truep(t3)?C_SCHEME_FALSE:(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10213,a[2]=t2,a[3]=((C_word)li193),tmp=(C_word)a,a+=4,tmp));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* f_10213 in chicken.load#evaluator in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_10213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10213,c,av);}
/* eval.scm:1133: eval */
t3=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* scheme#load in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_10219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10219,c,av);}
a=C_alloc(4);
if(C_truep(C_rest_nullp(c,3))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f12364,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1137: evaluator */
f_10199(t3,C_SCHEME_FALSE);}
else{
t3=C_get_rest_arg(c,3,av,3,t0);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10230,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1137: evaluator */
f_10199(t4,t3);}}

/* k10228 in scheme#load in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_10230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10230,c,av);}
/* eval.scm:1137: load/internal */
t2=C_retrieve2(lf[235],C_text("chicken.load#load/internal"));
f_9787(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* chicken.load#load-relative in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_10238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10238,c,av);}
a=C_alloc(4);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10245,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1140: make-relative-pathname */
f_9624(t5,C_fast_retrieve(lf[215]),t2);}

/* k10243 in chicken.load#load-relative in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_10245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10245,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10252,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1141: evaluator */
f_10199(t2,((C_word*)t0)[3]);}

/* k10250 in k10243 in chicken.load#load-relative in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10252,c,av);}
/* eval.scm:1141: load/internal */
t2=C_retrieve2(lf[235],C_text("chicken.load#load/internal"));
f_9787(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* chicken.load#load-noisily in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_10260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +9,c,4)))){
C_save_and_reclaim((void*)f_10260,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+9);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=C_i_get_keyword(lf[267],t3,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10267,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10282,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1143: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[268]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[268]+1);
av2[1]=t5;
av2[2]=lf[270];
av2[3]=t3;
av2[4]=t6;
tp(5,av2);}}

/* k10265 in chicken.load#load-noisily in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_10267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10267,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10279,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1143: ##sys#get-keyword */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[268]+1));
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[268]+1);
av2[1]=t2;
av2[2]=lf[269];
av2[3]=((C_word*)t0)[5];
av2[4]=t3;
tp(5,av2);}}

/* k10268 in k10265 in chicken.load#load-noisily in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10270,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1144: evaluator */
f_10199(t2,((C_word*)t0)[5]);}

/* k10275 in k10268 in k10265 in chicken.load#load-noisily in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10277,c,av);}
a=C_alloc(9);
/* eval.scm:1144: load/internal */
t2=C_retrieve2(lf[235],C_text("chicken.load#load/internal"));
f_9787(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1,C_a_i_list(&a,3,C_SCHEME_TRUE,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* a10278 in k10265 in chicken.load#load-noisily in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10279,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a10281 in chicken.load#load-noisily in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_10282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10282,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_10287(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_10287,c,av);}
a=C_alloc(24);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10289,a[2]=t1,a[3]=((C_word)li200),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[203],C_text("chicken.load#default-dynamic-load-libraries"));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11410,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11418,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t7,a[6]=((C_word)li261),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_11418(t13,t9,C_retrieve2(lf[203],C_text("chicken.load#default-dynamic-load-libraries")));}

/* complete in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void f_10289(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_10289,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[228]);
/* eval.scm:1155: g2481 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_10296(C_word c,C_word *av){
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
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(75,c,6)))){
C_save_and_reclaim((void *)f_10296,c,av);}
a=C_alloc(75);
t2=C_mutate((C_word*)lf[271]+1 /* (set! chicken.load#dynamic-load-libraries ...) */,t1);
t3=C_mutate((C_word*)lf[272]+1 /* (set! chicken.load#load-unit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10298,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[278]+1 /* (set! chicken.load#load-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10389,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[24]+1 /* (set! ##sys#include-forms-from-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10416,a[2]=((C_word)li209),tmp=(C_word)a,a+=3,tmp));
t6=C_set_block_item(lf[286] /* ##sys#setup-mode */,0,C_SCHEME_FALSE);
t7=C_mutate(&lf[287] /* (set! chicken.load#file-exists? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10510,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[288]+1 /* (set! chicken.load#find-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10519,a[2]=((C_word)li211),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[290]+1 /* (set! chicken.load#find-dynamic-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10566,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[115]+1 /* (set! chicken.load#load-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10667,a[2]=((C_word)li216),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[298]+1 /* (set! chicken.load#require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10739,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[300]+1 /* (set! chicken.load#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10804,a[2]=((C_word)li222),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[302]+1 /* (set! chicken.load#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10869,a[2]=((C_word)li225),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[272]+1 /* (set! chicken.load#load-unit ...) */,C_fast_retrieve(lf[272]));
t15=C_mutate((C_word*)lf[115]+1 /* (set! chicken.load#load-extension ...) */,C_fast_retrieve(lf[115]));
t16=C_mutate((C_word*)lf[288]+1 /* (set! chicken.load#find-file ...) */,C_fast_retrieve(lf[288]));
t17=C_mutate((C_word*)lf[290]+1 /* (set! chicken.load#find-dynamic-extension ...) */,C_fast_retrieve(lf[290]));
t18=C_mutate((C_word*)lf[117]+1 /* (set! ##sys#process-require ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10910,a[2]=((C_word)li226),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[285]+1 /* (set! ##sys#resolve-include-filename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10979,a[2]=((C_word)li230),tmp=(C_word)a,a+=3,tmp));
t20=lf[306] /* last-error */ =C_SCHEME_FALSE;;
t21=C_mutate(&lf[307] /* (set! run-safe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11111,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate(&lf[311] /* (set! store-result ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11170,a[2]=((C_word)li239),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[313] /* (set! CHICKEN_yield ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11179,a[2]=((C_word)li241),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[315] /* (set! CHICKEN_eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11191,a[2]=((C_word)li243),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[316] /* (set! CHICKEN_eval_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11207,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate(&lf[319] /* (set! store-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11233,a[2]=((C_word)li246),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate(&lf[321] /* (set! CHICKEN_eval_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11253,a[2]=((C_word)li248),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate(&lf[322] /* (set! CHICKEN_eval_string_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11279,a[2]=((C_word)li250),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate(&lf[323] /* (set! CHICKEN_apply ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11316,a[2]=((C_word)li252),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate(&lf[324] /* (set! CHICKEN_apply_to_string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11332,a[2]=((C_word)li254),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate(&lf[325] /* (set! CHICKEN_read ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11358,a[2]=((C_word)li256),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate(&lf[326] /* (set! CHICKEN_load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11380,a[2]=((C_word)li258),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate(&lf[327] /* (set! CHICKEN_get_error_message ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11395,a[2]=((C_word)li259),tmp=(C_word)a,a+=3,tmp));
t34=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t34;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t34+1)))(2,av2);}}

/* chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10298(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10298,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10305,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1163: ##sys#provided? */
t6=C_fast_retrieve(lf[204]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_10305,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_10308(t3,C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10379,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10387,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1167: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[233]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[233]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}}

/* k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void f_10308(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_10308,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10311,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1170: c-toplevel */
f_9773(t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_10311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10311,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10314,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10360,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1171: load-verbose */
t5=C_fast_retrieve(lf[214]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10312 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_10314,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li201),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10319(t5,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* loop in k10312 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void f_10319(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10319,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10333,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[247]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10342,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10353,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1178: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[227]);
C_word av2[4];
av2[0]=*((C_word*)lf[227]+1);
av2[1]=t4;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[275];
tp(4,av2);}}}

/* k10331 in loop in k10312 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10333,c,av);}
if(C_truep(t1)){
/* eval.scm:1177: ##sys#error */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[273];
av2[4]=((C_word*)t0)[4];
av2[5]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* eval.scm:1177: ##sys#error */
t2=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[273];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[274];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k10340 in loop in k10312 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10342,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1181: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10319(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k10351 in loop in k10312 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10353,c,av);}
/* eval.scm:1178: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k10358 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10360,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10363,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1172: scheme#display */
t3=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[277];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10314(2,av2);}}}

/* k10361 in k10358 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10363,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10366,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1173: scheme#display */
t4=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10364 in k10361 in k10358 in k10309 in k10306 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10366,c,av);}
/* eval.scm:1174: scheme#display */
t2=*((C_word*)lf[252]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[276];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k10377 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10379,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10383,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1168: dynamic-load-libraries */
t4=C_fast_retrieve(lf[271]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10381 in k10377 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_10383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10383,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];
f_10308(t3,C_a_i_cons(&a,2,((C_word*)t2)[3],t1));}

/* k10385 in k10303 in chicken.load#load-unit in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10387,c,av);}
/* eval.scm:1167: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[200],C_text("chicken.load#load-library-extension"));
tp(4,av2);}}

/* chicken.load#load-library in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10389,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_symbol_2(t2,lf[275]);
if(C_truep(C_i_not(t4))){
/* eval.scm:1186: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[272]);
C_word av2[5];
av2[0]=*((C_word*)lf[272]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=lf[275];
tp(5,av2);}}
else{
t6=C_i_check_string_2(t4,lf[275]);
/* eval.scm:1186: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[272]);
C_word av2[5];
av2[0]=*((C_word*)lf[272]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=lf[275];
tp(5,av2);}}}

/* ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_10416,c,av);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10420,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1192: ##sys#resolve-include-filename */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[285]);
C_word *av2=av;
av2[0]=*((C_word*)lf[285]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=t3;
tp(6,av2);}}

/* k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_10420,c,av);}
a=C_alloc(7);
t2=C_fast_retrieve(lf[240]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10423,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_not(t1))){
/* eval.scm:1195: ##sys#signal-hook */
t4=*((C_word*)lf[223]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[257];
av2[3]=lf[283];
av2[4]=lf[284];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_10423(2,av2);}}}

/* k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_10423,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10426,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10498,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1196: load-verbose */
t4=C_fast_retrieve(lf[214]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_10426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_10426,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10431,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word)li208),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1198: call-with-input-file */
t4=*((C_word*)lf[279]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[6];
av2[2]=((C_word*)t2)[2];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10431(C_word c,C_word *av){
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
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10431,c,av);}
a=C_alloc(26);
t3=C_slot(t2,C_fix(13));
t4=((C_word*)t0)[2];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10442,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10444,a[2]=t7,a[3]=t5,a[4]=((C_word)li204),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10449,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word)li206),tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10492,a[2]=t5,a[3]=t7,a[4]=((C_word)li207),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1201: ##sys#dynamic-wind */
t12=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* k10440 in a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10442,c,av);}
/* eval.scm:1201: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* a10443 in a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10444,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[19]));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a10448 in a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10449,c,av);}
a=C_alloc(6);
t2=C_i_not(((C_word*)t0)[2]);
t3=C_i_set_i_slot(((C_word*)t0)[3],C_fix(13),t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10460,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1203: read-with-source-info */
t5=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k10458 in a10448 in a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_10460,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word)li205),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10462(t5,((C_word*)t0)[5],t1,C_SCHEME_END_OF_LIST);}

/* doloop2564 in k10458 in a10448 in a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in ... */
static void f_10462(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10462,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eofp(t2))){
t4=C_i_set_i_slot(((C_word*)t0)[2],C_fix(13),((C_word*)t0)[3]);
/* eval.scm:1207: reverse */
t5=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10482,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1203: read-with-source-info */
t5=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k10480 in doloop2564 in k10458 in a10448 in a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in ... */
static void C_ccall f_10482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10482,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_10462(t3,((C_word*)t0)[5],t1,t2);}

/* a10491 in a10430 in k10424 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10492,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[19]));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10496 in k10421 in k10418 in ##sys#include-forms-from-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_10498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10498,c,av);}
if(C_truep(t1)){
/* eval.scm:1197: chicken.base#print */
t2=*((C_word*)lf[280]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[281];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[282];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_10426(2,av2);}}}

/* chicken.load#file-exists? in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void f_10510(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_10510,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10517,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1216: ##sys#file-exists? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[259]+1));
C_word av2[6];
av2[0]=*((C_word*)lf[259]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* k10515 in chicken.load#file-exists? in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10517,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.load#find-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_10519,c,av);}
a=C_alloc(8);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t3))){
t4=C_a_i_list1(&a,1,t3);
/* eval.scm:1221: find-file */
t5=C_fast_retrieve(lf[288]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10548,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10560,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1222: scheme#string-append */
t6=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
av2[3]=lf[289];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}}}

/* k10546 in chicken.load#find-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10548,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1223: find-file */
t2=C_fast_retrieve(lf[288]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_u_i_cdr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k10558 in chicken.load#find-file in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10560,c,av);}
/* eval.scm:1222: file-exists? */
f_10510(((C_word*)t0)[2],t1);}

/* chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10566,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10570,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1228: chicken.platform#repository-path */
t5=C_fast_retrieve(lf[296]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10570,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10573,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
/* eval.scm:1229: scheme#symbol->string */
t3=*((C_word*)lf[295]+1);{
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
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
f_10573(2,av2);}}}

/* k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10573(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_10573,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10575,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li212),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10618,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_truep(C_fast_retrieve(lf[286]))?lf[292]:C_SCHEME_END_OF_LIST);
t5=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_SCHEME_END_OF_LIST);
t6=(C_truep(((C_word*)t0)[4])?C_fast_retrieve(lf[293]):C_SCHEME_END_OF_LIST);
if(C_truep(C_fast_retrieve(lf[286]))){
/* eval.scm:1237: ##sys#append */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}
else{
/* eval.scm:1237: ##sys#append */
t7=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t7;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=lf[294];
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}}

/* check in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void f_10575(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_10575,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10579,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1231: string-append */
t4=*((C_word*)lf[211]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[291];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k10577 in check in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10579,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10582,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_i_not(C_fast_retrieve(lf[216])))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10604,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1234: chicken.platform#feature? */
t4=C_fast_retrieve(lf[261]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[262];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10582(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10582(2,av2);}}}

/* k10580 in k10577 in check in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10582,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1236: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_retrieve2(lf[198],C_text("chicken.load#constant2217"));
tp(4,av2);}}}

/* k10590 in k10580 in k10577 in check in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10592,c,av);}
/* eval.scm:1236: file-exists? */
f_10510(((C_word*)t0)[2],t1);}

/* k10602 in k10577 in check in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10604,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10611,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1235: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fast_retrieve(lf[201]);
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10582(2,av2);}}}

/* k10609 in k10602 in k10577 in check in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_10611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10611,c,av);}
/* eval.scm:1235: file-exists? */
f_10510(((C_word*)t0)[2],t1);}

/* k10616 in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_10618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_10618,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10620,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li213),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10620(t5,((C_word*)t0)[3],t1);}

/* loop in k10616 in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void f_10620(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10620,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10633,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1244: check */
t5=((C_word*)t0)[3];
f_10575(t5,t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10631 in loop in k10616 in k10571 in k10568 in chicken.load#find-dynamic-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10633,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1245: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_10620(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10667,c,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10708,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10676,a[2]=t5,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1248: ##sys#provided? */
t7=C_fast_retrieve(lf[204]);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k10674 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10676,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_10708(2,av2);}}
else{
t2=C_eqp(((C_word*)t0)[3],C_SCHEME_TRUE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1250: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1252: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10708(2,av2);}}}}}

/* k10690 in k10674 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10692,c,av);}
/* eval.scm:1250: ##sys#provided? */
t2=C_fast_retrieve(lf[204]);{
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

/* k10703 in k10674 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10705,c,av);}
/* eval.scm:1252: ##sys#provided? */
t2=C_fast_retrieve(lf[204]);{
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

/* k10706 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_10708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10708,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(((C_word*)t0)[2],C_retrieve2(lf[194],C_text("chicken.load#constant2178"))))){
/* eval.scm:1258: load-unit */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[272]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[272]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10720,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1259: find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[290]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[290]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_SCHEME_FALSE;
tp(4,av2);}}}}

/* k10718 in k10706 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10720,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10724,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t2)[2],a[4]=((C_word)li215),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1257: g2637 */
t4=t3;
f_10724(t4,((C_word*)t2)[3],t1);}
else{
/* eval.scm:1265: ##sys#error */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[4];
av2[3]=lf[297];
av2[4]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* g2637 in k10718 in k10706 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void f_10724(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,4)))){
C_save_and_reclaim_args((void *)trf_10724,3,t0,t1,t2);}
a=C_alloc(18);
t3=C_mutate(((C_word *)t0)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10728,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1261: load/internal */
t5=C_retrieve2(lf[235],C_text("chicken.load#load/internal"));
f_9787(t5,t4,t2,C_SCHEME_FALSE,C_a_i_list(&a,5,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]));}

/* k10726 in g2637 in k10718 in k10706 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_10728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10728,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10731,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1262: ##sys#provide */
t4=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k10729 in k10726 in g2637 in k10718 in k10706 in chicken.load#load-extension in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_10731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10731,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.load#require in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10739,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10781,a[2]=((C_word)li217),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10781(t2)
);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10758,a[2]=t6,a[3]=((C_word)li218),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10758(t8,t1,t2);}

/* for-each-loop2656 in chicken.load#require in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void f_10758(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_10758,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10768,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_fast_retrieve(lf[115]);
/* eval.scm:1269: g2687 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[115]);
C_word av2[5];
av2[0]=*((C_word*)lf[115]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[299];
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10766 in for-each-loop2656 in chicken.load#require in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10768,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10758(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2646 in chicken.load#require in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static C_word f_10781(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[299]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provide in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +9,c,3)))){
C_save_and_reclaim((void*)f_10804,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+9);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10846,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10846(t2)
);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10823,a[2]=t6,a[3]=((C_word)li221),tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_10823(t8,t1,t2);}

/* for-each-loop2709 in chicken.load#provide in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void f_10823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10823,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10833,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_fast_retrieve(lf[102]);
/* eval.scm:1273: g2740 */
t6=C_fast_retrieve(lf[102]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10831 in for-each-loop2709 in chicken.load#provide in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10833,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10823(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2699 in chicken.load#provide in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static C_word f_10846(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[301]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* chicken.load#provided? in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +10,c,3)))){
C_save_and_reclaim((void*)f_10869,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+10);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10883,a[2]=((C_word)li223),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_10883(t2)
);
t5=C_fast_retrieve(lf[204]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8641,a[2]=t7,a[3]=t5,a[4]=((C_word)li224),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8641(t9,t1,t2);}

/* for-each-loop2752 in chicken.load#provided? in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static C_word f_10883(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_symbol_2(t2,lf[303]);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* ##sys#process-require in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10910(C_word c,C_word *av){
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
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_10910,c,av);}
a=C_alloc(30);
t5=C_eqp(t2,t3);
t6=(C_truep(t5)?t5:t3);
t7=C_i_assq(t2,C_retrieve2(lf[192],C_text("chicken.load#constant2175")));
if(C_truep(t7)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_cdr(t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_memq(t2,C_retrieve2(lf[194],C_text("chicken.load#constant2178"))))){
if(C_truep(t4)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,2,lf[149],t2);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_a_i_list(&a,2,lf[32],t2);
t9=C_a_i_list(&a,2,lf[32],C_SCHEME_FALSE);
t10=C_a_i_list(&a,2,lf[32],C_SCHEME_FALSE);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,4,lf[272],t8,t9,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}
else{
t8=C_eqp(t4,lf[304]);
if(C_truep(t8)){
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,2,lf[149],t2);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_a_i_list(&a,2,lf[32],t2);
t10=C_a_i_list(&a,2,lf[32],t6);
t11=C_a_i_list(&a,2,lf[32],C_SCHEME_FALSE);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,4,lf[115],t9,t10,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}}}

/* ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_10979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
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
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10979,c,av);}
a=C_alloc(23);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10982,a[2]=t7,a[3]=((C_word)li227),tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11015,a[2]=t3,a[3]=t7,a[4]=((C_word)li228),tmp=(C_word)a,a+=5,tmp));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11054,a[2]=t1,a[3]=t9,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11108,a[2]=t9,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1326: make-relative-pathname */
f_9624(t13,t5,t2);}

/* test-extensions in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void f_10982(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_10982,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10995,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1312: file-exists? */
f_10510(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10998,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1313: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=C_i_car(t3);
tp(4,av2);}}}

/* k10993 in test-extensions in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10995,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?((C_word*)t0)[3]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10996 in test-extensions in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_10998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10998,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11001,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1314: file-exists? */
f_10510(t2,t1);}

/* k10999 in k10996 in test-extensions in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11001,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* eval.scm:1315: test-extensions */
t3=((C_word*)((C_word*)t2)[3])[1];
f_10982(t3,((C_word*)t2)[2],((C_word*)t2)[4],C_u_i_cdr(((C_word*)t2)[5]));}}

/* test in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void f_11015(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_11015,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* eval.scm:1317: test-extensions */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10982(t3,t1,t2,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11051,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1320: chicken.platform#feature? */
t4=C_fast_retrieve(lf[261]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[262];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k11049 in test in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11051,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list1(&a,1,C_retrieve2(lf[198],C_text("chicken.load#constant2217")));
/* eval.scm:1317: test-extensions */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10982(t3,((C_word*)t0)[3],((C_word*)t0)[4],t2);}
else{
t2=C_i_not(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_a_i_list2(&a,2,C_fast_retrieve(lf[201]),C_retrieve2(lf[198],C_text("chicken.load#constant2217"))):C_a_i_list2(&a,2,C_retrieve2(lf[198],C_text("chicken.load#constant2217")),C_fast_retrieve(lf[201])));
/* eval.scm:1317: test-extensions */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10982(t4,((C_word*)t0)[3],((C_word*)t0)[4],t3);}}

/* k11052 in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11054,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11064,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11101,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1330: chicken.platform#repository-path */
t4=C_fast_retrieve(lf[296]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_fast_retrieve(lf[293]);
f_11064(2,av2);}}}}

/* k11062 in k11052 in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11064,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11066,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li229),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_11066(t5,((C_word*)t0)[4],t1);}

/* loop in k11062 in k11052 in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void f_11066(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11066,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11076,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11090,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1333: string-append */
t6=*((C_word*)lf[211]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=lf[305];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k11074 in loop in k11062 in k11052 in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11076,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:1336: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_11066(t2,((C_word*)t0)[2],C_slot(((C_word*)t0)[4],C_fix(1)));}}

/* k11088 in loop in k11062 in k11052 in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11090,c,av);}
/* eval.scm:1333: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11015(t2,((C_word*)t0)[3],t1);}

/* k11099 in k11052 in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11101,c,av);}
if(C_truep(t1)){
/* eval.scm:1328: ##sys#append */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[293]);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
/* eval.scm:1328: ##sys#append */
t2=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fast_retrieve(lf[293]);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k11106 in ##sys#resolve-include-filename in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11108,c,av);}
/* eval.scm:1326: test */
t2=((C_word*)((C_word*)t0)[2])[1];
f_11015(t2,((C_word*)t0)[3],t1);}

/* run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void f_11111(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_11111,2,t1,t2);}
a=C_alloc(7);
t3=lf[306] /* last-error */ =C_SCHEME_FALSE;;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11116,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11121,a[2]=t2,a[3]=((C_word)li237),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: scheme#call-with-current-continuation */
t6=*((C_word*)lf[310]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t4;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k11114 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11116,c,av);}
/* eval.scm:1355: g2921 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_11121,c,av);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11127,a[2]=t2,a[3]=((C_word)li232),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11146,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li236),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1357: chicken.condition#with-exception-handler */
t5=C_fast_retrieve(lf[309]);{
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

/* a11126 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11127,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11133,a[2]=t2,a[3]=((C_word)li231),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: k2918 */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a11132 in a11126 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11133,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11137,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1358: scheme#open-output-string */
t3=C_fast_retrieve(lf[17]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11135 in a11132 in a11126 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11137,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11140,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1359: chicken.condition#print-error-message */
t3=C_fast_retrieve(lf[308]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k11138 in k11135 in a11132 in a11126 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_11140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11140,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1360: scheme#get-output-string */
t3=C_fast_retrieve(lf[15]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11142 in k11138 in k11135 in a11132 in a11126 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_11144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11144,c,av);}
t2=C_mutate(&lf[306] /* (set! last-error ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11145 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11146,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11152,a[2]=((C_word*)t0)[2],a[3]=((C_word)li233),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11158,a[2]=((C_word*)t0)[3],a[3]=((C_word)li235),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a11151 in a11145 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11152,c,av);}
/* eval.scm:1362: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a11157 in a11145 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_11158,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11164,a[2]=t2,a[3]=((C_word)li234),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1357: k2918 */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a11163 in a11157 in a11145 in a11120 in run-safe in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11164,c,av);}{
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

/* store-result in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void f_11170(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11170,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11174,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1369: ##sys#gc */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[312]);
C_word av2[3];
av2[0]=*((C_word*)lf[312]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}

/* k11172 in store-result in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11174,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_store_result(((C_word*)t0)[3],((C_word*)t0)[2]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* CHICKEN_yield in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11179,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11185,a[2]=((C_word)li240),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1375: run-safe */
f_11111(t1,t2);}

/* a11184 in CHICKEN_yield in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11185,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11189,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1375: ##sys#thread-yield! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[314]);
C_word *av2=av;
av2[0]=*((C_word*)lf[314]+1);
av2[1]=t2;
tp(2,av2);}}

/* k11187 in a11184 in CHICKEN_yield in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11189,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_eval in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11191,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11197,a[2]=t3,a[3]=t2,a[4]=((C_word)li242),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1378: run-safe */
f_11111(t1,t4);}

/* a11196 in CHICKEN_eval in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11197,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11205,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1380: scheme#eval */
t3=*((C_word*)lf[163]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11203 in a11196 in CHICKEN_eval in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11205,c,av);}
/* eval.scm:1380: store-result */
f_11170(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_eval_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11207,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11211,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1382: ##sys#peek-c-string */
t5=*((C_word*)lf[247]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11209 in CHICKEN_eval_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11211,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11216,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li244),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1383: run-safe */
f_11111(((C_word*)t0)[3],t2);}

/* a11215 in k11209 in CHICKEN_eval_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11216,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11220,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1385: scheme#open-input-string */
t3=C_fast_retrieve(lf[318]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11218 in a11215 in k11209 in CHICKEN_eval_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11220,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11227,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11231,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1386: scheme#read */
t4=*((C_word*)lf[317]+1);{
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

/* k11225 in k11218 in a11215 in k11209 in CHICKEN_eval_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11227,c,av);}
t2=((C_word*)t0)[2];
/* eval.scm:1386: store-result */
f_11170(((C_word*)t2)[2],t1,((C_word*)t2)[3]);}

/* k11229 in k11218 in a11215 in k11209 in CHICKEN_eval_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11231,c,av);}
/* eval.scm:1386: scheme#eval */
t2=*((C_word*)lf[163]+1);{
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

/* store-string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static C_word f_11233(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_slot(t1,C_fix(0));
t5=C_block_size(t4);
t6=C_fixnum_difference(t5,C_fix(1));
if(C_truep(C_fixnum_greater_or_equal_p(t6,t2))){
t7=C_mutate(&lf[306] /* (set! last-error ...) */,lf[320]);
return(C_SCHEME_FALSE);}
else{
return(C_copy_result_string(t4,t3,t6));}}

/* CHICKEN_eval_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11253,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11259,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li247),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1403: run-safe */
f_11111(t1,t5);}

/* a11258 in CHICKEN_eval_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11259,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11263,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1405: scheme#open-output-string */
t3=C_fast_retrieve(lf[17]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11261 in a11258 in CHICKEN_eval_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11263,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11277,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1406: scheme#eval */
t4=*((C_word*)lf[163]+1);{
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

/* k11264 in k11261 in a11258 in CHICKEN_eval_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11266,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1407: scheme#get-output-string */
t3=C_fast_retrieve(lf[15]);{
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

/* k11271 in k11264 in k11261 in a11258 in CHICKEN_eval_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11273,c,av);}
/* eval.scm:1407: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1407: store-string */
  f_11233(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11275 in k11261 in a11258 in CHICKEN_eval_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11277,c,av);}
/* eval.scm:1406: scheme#write */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11279,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11283,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1409: ##sys#peek-c-string */
t6=*((C_word*)lf[247]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11283,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11288,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word)li249),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1412: run-safe */
f_11111(((C_word*)t0)[4],t2);}

/* a11287 in k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11288,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11292,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1414: scheme#open-output-string */
t3=C_fast_retrieve(lf[17]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11290 in a11287 in k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_11292,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11306,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11310,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11314,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1415: scheme#open-input-string */
t6=C_fast_retrieve(lf[318]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k11293 in k11290 in a11287 in k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11295,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1416: scheme#get-output-string */
t3=C_fast_retrieve(lf[15]);{
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

/* k11300 in k11293 in k11290 in a11287 in k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_11302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11302,c,av);}
/* eval.scm:1416: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1416: store-string */
  f_11233(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11304 in k11290 in a11287 in k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11306,c,av);}
/* eval.scm:1415: scheme#write */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k11308 in k11290 in a11287 in k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11310,c,av);}
/* eval.scm:1415: scheme#eval */
t2=*((C_word*)lf[163]+1);{
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

/* k11312 in k11290 in a11287 in k11281 in CHICKEN_eval_string_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11314,c,av);}
/* eval.scm:1415: scheme#read */
t2=*((C_word*)lf[317]+1);{
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

/* CHICKEN_apply in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11316,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11322,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=((C_word)li251),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1421: run-safe */
f_11111(t1,t5);}

/* a11321 in CHICKEN_apply in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11322,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11330,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
C_apply(4,av2);}}

/* k11328 in a11321 in CHICKEN_apply in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11330,c,av);}
/* eval.scm:1421: store-result */
f_11170(((C_word*)t0)[2],t1,((C_word*)t0)[3]);}

/* CHICKEN_apply_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11332,c,av);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11338,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t3,a[6]=((C_word)li253),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1426: run-safe */
f_11111(t1,t6);}

/* a11337 in CHICKEN_apply_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11338,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11342,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:1428: scheme#open-output-string */
t3=C_fast_retrieve(lf[17]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k11340 in a11337 in CHICKEN_apply_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11342,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11345,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11356,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
C_apply(4,av2);}}

/* k11343 in k11340 in a11337 in CHICKEN_apply_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11345,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1430: scheme#get-output-string */
t3=C_fast_retrieve(lf[15]);{
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

/* k11350 in k11343 in k11340 in a11337 in CHICKEN_apply_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11352,c,av);}
/* eval.scm:1430: store-string */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
/* eval.scm:1430: store-string */
  f_11233(t1,((C_word*)t0)[3],((C_word*)t0)[4])
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11354 in k11340 in a11337 in CHICKEN_apply_to_string in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11356(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11356,c,av);}
/* eval.scm:1429: scheme#write */
t2=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* CHICKEN_read in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11358,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11362,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1432: ##sys#peek-c-string */
t5=*((C_word*)lf[247]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k11360 in CHICKEN_read in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11362(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11362,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11367,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li255),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1433: run-safe */
f_11111(((C_word*)t0)[3],t2);}

/* a11366 in k11360 in CHICKEN_read in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11367(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11367,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11371,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1435: scheme#open-input-string */
t3=C_fast_retrieve(lf[318]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11369 in a11366 in k11360 in CHICKEN_read in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11371,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11378,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1436: scheme#read */
t3=*((C_word*)lf[317]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11376 in k11369 in a11366 in k11360 in CHICKEN_read in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_11378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11378,c,av);}
t2=((C_word*)t0)[2];
/* eval.scm:1436: store-result */
f_11170(((C_word*)t2)[2],t1,((C_word*)t2)[3]);}

/* CHICKEN_load in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11380,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11384,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1438: ##sys#peek-c-string */
t4=*((C_word*)lf[247]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11382 in CHICKEN_load in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_11384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11384,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11389,a[2]=t1,a[3]=((C_word)li257),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1439: run-safe */
f_11111(((C_word*)t0)[2],t2);}

/* a11388 in k11382 in CHICKEN_load in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_11389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11389,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11393,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1439: scheme#load */
t3=*((C_word*)lf[264]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k11391 in a11388 in k11382 in CHICKEN_load in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_11393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11393,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* CHICKEN_get_error_message in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11395,c,av);}
t4=C_retrieve2(lf[306],C_text("last-error"));
if(C_truep(C_retrieve2(lf[306],C_text("last-error")))){
t5=C_retrieve2(lf[306],C_text("last-error"));
t6=C_retrieve2(lf[306],C_text("last-error"));
/* eval.scm:1442: store-string */
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
/* eval.scm:1442: store-string */
  f_11233(C_retrieve2(lf[306],C_text("last-error")),t3,t2)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* eval.scm:1442: store-string */
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
/* eval.scm:1442: store-string */
  f_11233(lf[328],t3,t2)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k11408 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_11410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11410,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11412,a[2]=((C_word)li260),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1156: scheme#make-parameter */
t3=C_fast_retrieve(lf[329]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a11411 in k11408 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11412,c,av);}
t3=C_i_check_list(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop2485 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void f_11418(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11418,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1157: g2491 */
t4=((C_word*)t0)[4];
f_10289(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11441 in map-loop2485 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_11443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11443,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11418(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k11455 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_11457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11457,c,av);}
/* eval.scm:1149: scheme#string-append */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[200],C_text("chicken.load#load-library-extension"));
av2[3]=lf[330];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k11467 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11469,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_9574(t2,C_a_i_list(&a,1,t1));}

/* k11471 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11473,c,av);}
/* eval.scm:974: scheme#string-append */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[334];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k11498 in k11502 in k11506 in k11510 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11500,c,av);}
t2=C_eqp(t1,lf[341]);
t3=((C_word*)t0)[2];
f_9554(t3,(C_truep(t2)?lf[342]:C_retrieve2(lf[196],C_text("chicken.load#constant2208"))));}

/* k11502 in k11506 in k11510 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11504,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[340]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11500,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:962: chicken.platform#machine-type */
t4=C_fast_retrieve(lf[343]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];
f_9554(t3,C_retrieve2(lf[196],C_text("chicken.load#constant2208")));}}

/* k11506 in k11510 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11508,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[338]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9554(t3,lf[339]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:961: chicken.platform#software-version */
t4=C_fast_retrieve(lf[335]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11510 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11512,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[336]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_9554(t3,lf[337]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11508,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:960: chicken.platform#software-version */
t4=C_fast_retrieve(lf[335]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11516(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_11516,c,av);}
a=C_alloc(21);
t2=C_i_setslot(((C_word*)t0)[2],C_fix(3),t1);
t3=C_mutate((C_word*)lf[185]+1 /* (set! scheme#scheme-report-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8213,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li167),tmp=(C_word)a,a+=5,tmp));
t4=C_mutate((C_word*)lf[188]+1 /* (set! scheme#null-environment ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8238,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word)li168),tmp=(C_word)a,a+=5,tmp));
t5=C_a_i_provide(&a,1,lf[191]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8264,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t6;
C_eval_toplevel(2,av2);}}

/* k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11524,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_i_setslot(((C_word*)t2)[2],C_fix(3),t1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11516,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:882: strip */
f_8155(t4,C_slot(((C_word*)t2)[3],C_fix(3)));}

/* k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11532,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_i_setslot(((C_word*)t2)[5],C_fix(3),t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:881: strip */
f_8155(t4,C_slot(((C_word*)t2)[2],C_fix(3)));}

/* k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11540,c,av);}
a=C_alloc(3);
t2=C_i_setslot(((C_word*)t0)[4],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11532,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:880: strip */
f_8155(t3,C_slot(((C_word*)t0)[5],C_fix(3)));}

/* a11545 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_11546,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11550,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:846: ##sys#print */
t5=*((C_word*)lf[354]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[355];
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k11548 in a11545 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11550,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:847: ##sys#print */
t3=*((C_word*)lf[354]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[4],C_fix(1));
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k11551 in k11548 in a11545 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11553,c,av);}
/* eval.scm:848: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[353]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[353]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(62);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11562(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_11562,c,av);}
a=C_alloc(14);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11568,a[2]=t5,a[3]=t3,a[4]=((C_word)li263),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11589,a[2]=t5,a[3]=t3,a[4]=((C_word)li267),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:800: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
C_values(4,av2);}}

/* a11567 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11568,c,av);}
a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11572,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11587,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:803: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}
else{
t6=t5;
f_11572(t6,C_SCHEME_UNDEFINED);}}

/* k11570 in a11567 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_11572(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_11572,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:804: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[357]);
C_word av2[5];
av2[0]=*((C_word*)lf[357]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k11573 in k11570 in a11567 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11575,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11585 in a11567 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11587,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=((C_word*)t0)[5];
f_11572(t5,t4);}

/* a11588 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11589(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_11589,c,av);}
a=C_alloc(15);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11595,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word)li264),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11600,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li266),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:809: scheme#dynamic-wind */
t8=C_fast_retrieve(lf[160]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t8;
av2[1]=t1;
av2[2]=t6;
av2[3]=t2;
av2[4]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* a11594 in a11588 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11595(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11595,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a11599 in a11588 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_11600,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11607,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=((C_word)li265),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11607(t6,t2);}

/* k11602 in a11599 in a11588 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11604,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop1570 in a11599 in a11588 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_11607(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_11607,2,t0,t1);}
a=C_alloc(5);
t2=C_eqp(((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11617,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word av2[4];
av2[0]=0;
av2[1]=t3;
av2[2]=C_fast_retrieve(lf[357]);
av2[3]=C_i_car(((C_word*)((C_word*)t0)[3])[1]);
C_apply(4,av2);}}}

/* k11615 in doloop1570 in a11599 in a11588 in a11561 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11617,c,av);}
t2=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)((C_word*)t0)[3])[1];
f_11607(t4,((C_word*)t0)[4]);}

/* a11629 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11630,c,av);}
t4=C_mutate((C_word*)lf[43]+1 /* (set! ##sys#put/restore! ...) */,t2);
t5=C_mutate((C_word*)lf[106]+1 /* (set! ##sys#with-property-restore ...) */,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11635,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11642,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:762: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}

/* k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11642(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_11642,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11645,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11738,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[179],C_fast_retrieve(lf[358]));
t5=C_a_i_cons(&a,2,lf[178],C_fast_retrieve(lf[359]));
t6=C_a_i_list(&a,3,lf[23],t4,t5);
/* eval.scm:768: compile-to-closure */
f_3631(t3,t6,C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_11645(2,av2);}}}

/* k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11645(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_11645,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
if(C_truep(((C_word*)t2)[2])){
t3=C_i_check_structure_2(((C_word*)t2)[2],lf[168],lf[0]);
t4=C_slot(((C_word*)t2)[2],C_fix(2));
t5=C_slot(((C_word*)t2)[2],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11660,a[2]=((C_word*)t2)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t4)){
t7=C_fast_retrieve(lf[98]);
t8=C_fast_retrieve(lf[9]);
t9=t5;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=t4;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_TRUE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11668,a[2]=t10,a[3]=t12,a[4]=t14,a[5]=t8,a[6]=t7,a[7]=((C_word)li270),tmp=(C_word)a,a+=8,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11698,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[4],a[4]=((C_word)li271),tmp=(C_word)a,a+=5,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11708,a[2]=t10,a[3]=t12,a[4]=t8,a[5]=t7,a[6]=((C_word)li272),tmp=(C_word)a,a+=7,tmp);
/* eval.scm:777: ##sys#dynamic-wind */
t18=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t18;
av2[1]=t6;
av2[2]=t15;
av2[3]=t16;
av2[4]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(5,av2);}}
else{
/* eval.scm:780: compile-to-closure */
f_3631(t6,((C_word*)t2)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t2)[2],C_SCHEME_FALSE,C_SCHEME_TRUE));}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11729,a[2]=((C_word*)t2)[3],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:783: compile-to-closure */
f_3631(t3,((C_word*)t2)[4],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}}

/* k11658 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11660,c,av);}
/* eval.scm:774: g1518 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a11667 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_11668,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[6],a[9]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:777: ##sys#macro-environment1521 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_11672(2,av2);}}}

/* k11670 in a11667 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11672,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+9,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11675,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* eval.scm:777: ##sys#current-environment1522 */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_11675(2,av2);}}}

/* k11673 in k11670 in a11667 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11675,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11679,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:777: ##sys#macro-environment1521 */
t5=((C_word*)t2)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k11677 in k11673 in k11670 in a11667 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11679,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11683,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:777: ##sys#current-environment1522 */
t5=((C_word*)t2)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k11681 in k11677 in k11673 in k11670 in a11667 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11683,c,av);}
a=C_alloc(6);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11686,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:777: ##sys#macro-environment1521 */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k11684 in k11681 in k11677 in k11673 in k11670 in a11667 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11686,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11689,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:777: ##sys#current-environment1522 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k11687 in k11684 in k11681 in k11677 in k11673 in k11670 in a11667 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11689,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a11697 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11698,c,av);}
a=C_alloc(12);
t2=C_slot(((C_word*)t0)[2],C_fix(4));
/* eval.scm:779: compile-to-closure */
f_3631(t1,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,((C_word*)t0)[2],t2,C_SCHEME_TRUE));}

/* a11707 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_11708,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11712,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:777: ##sys#macro-environment1521 */
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k11710 in a11707 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11712,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11715,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:777: ##sys#current-environment1522 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k11713 in k11710 in a11707 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11715,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11718,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t1,a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:777: ##sys#macro-environment1521 */
t4=((C_word*)t2)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k11716 in k11713 in k11710 in a11707 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_11718,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:777: ##sys#current-environment1522 */
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k11719 in k11716 in k11713 in k11710 in a11707 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11721,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11727 in k11643 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11729,c,av);}
/* eval.scm:772: g1550 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k11736 in k11640 in a11634 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_11738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11738,c,av);}
/* eval.scm:767: g1511 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k3574 */
static void C_ccall f_3576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_3576,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k3577 in k3574 */
static void C_ccall f_3579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3579,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k3580 in k3577 in k3574 */
static void C_ccall f_3582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3582,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3585,c,av);}
a=C_alloc(3);
t2=C_set_block_item(lf[2] /* ##sys#unbound-in-eval */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:82: scheme#make-parameter */
t4=C_fast_retrieve(lf[329]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a3592 in decorate in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3593,c,av);}
t3=C_immp(t2);
t4=C_i_not(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(C_truep(t4)?C_lambdainfop(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a3605 in decorate in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3606,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3614,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3618,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:76: scheme#open-output-string */
t6=C_fast_retrieve(lf[17]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k3612 in a3605 in decorate in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3614,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3616 in a3605 in decorate in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3618,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:77: scheme#write */
t3=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3619 in k3616 in a3605 in decorate in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3621,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:78: scheme#get-output-string */
t3=C_fast_retrieve(lf[15]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3622 in k3619 in k3616 in a3605 in decorate in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3624,c,av);}
/* eval.scm:75: ##sys#make-lambda-info */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3629(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_3629,c,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#eval-debug-level ...) */,t1);
t3=C_mutate(&lf[4] /* (set! chicken.eval#compile-to-closure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3631,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[78]+1 /* (set! ##sys#eval/meta ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7918,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11635,a[2]=((C_word)li273),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:760: scheme#make-parameter */
t7=C_fast_retrieve(lf[329]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3631(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(68,0,8)))){
C_save_and_reclaim_args((void *)trf_3631,4,t1,t2,t3,t4);}
a=C_alloc(68);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3658,a[2]=t22,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t40=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3693,a[2]=t22,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t41=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3727,a[2]=t24,a[3]=((C_word)li7),tmp=(C_word)a,a+=4,tmp));
t42=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3830,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t44=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3847,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3880,a[2]=t36,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t46=C_set_block_item(t36,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3944,a[2]=t26,a[3]=t14,a[4]=t36,a[5]=t10,a[6]=t32,a[7]=t24,a[8]=t34,a[9]=t38,a[10]=t30,a[11]=((C_word)li138),tmp=(C_word)a,a+=12,tmp));
t47=C_set_block_item(t38,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7519,a[2]=t28,a[3]=t36,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp));
t48=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7868,a[2]=t36,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t6,a[7]=t18,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:734: ##sys#eval-debug-level */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word av2[2];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t48;
tp(2,av2);}}

/* find-id in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3658(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3658,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3671,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_caar(t3);
t6=C_eqp(t2,t5);
if(C_truep(t6)){
t7=C_u_i_car(t3);
t8=t4;
f_3671(t8,C_i_symbolp(C_u_i_cdr(t7)));}
else{
t7=t4;
f_3671(t7,C_SCHEME_FALSE);}}}

/* k3669 in find-id in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3671(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3671,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_u_i_cdr(C_u_i_car(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:94: find-id */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3658(t2,((C_word*)t0)[2],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}

/* rename in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3693,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3697,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3725,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:97: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k3695 in rename in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3697,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3705,a[2]=((C_word*)t0)[3],a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[3],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:97: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}}

/* a3704 in k3695 in rename in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3705,c,av);}
/* eval.scm:98: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[6];
tp(4,av2);}}

/* a3710 in k3695 in rename in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_3711,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3718,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[8]+1);
av2[3]=t2;
C_apply(4,av2);}}

/* k3716 in a3710 in k3695 in rename in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3718,c,av);}
if(C_truep(t1)){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[7]+1);
av2[3]=((C_word*)t0)[3];
C_apply(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3723 in rename in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3725,c,av);}
/* eval.scm:97: find-id */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3658(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* lookup in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3727(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3727,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3731,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:102: rename */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3693(t5,t4,t2);}

/* k3729 in lookup in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3731,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3739,a[2]=t1,a[3]=t3,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3739(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop in k3729 in lookup in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3739(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3739,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
/* eval.scm:105: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[2];
C_values(4,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[2],a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp);
t6=(
  f_3786(t5,t4,C_fix(0))
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3756,a[2]=t3,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:105: g271 */
t8=t7;
f_3756(t8,t1,t6);}
else{
/* eval.scm:107: loop */
t9=t1;
t10=C_slot(t2,C_fix(1));
t11=C_fixnum_plus(t3,C_fix(1));
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* g271 in loop in k3729 in lookup in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3756,3,t0,t1,t2);}
/* eval.scm:106: scheme#values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
C_values(4,av2);}}

/* loop in loop in k3729 in lookup in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static C_word f_3786(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=C_slot(t1,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t6=C_slot(t1,C_fix(1));
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}}

/* emit-trace-info in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static C_word f_3816(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
if(C_truep(t1)){
t7=C_a_i_record4(&a,4,lf[10],t4,t5,t6);
return(C_emit_trace_info(t2,t3,t7,C_slot(C_fast_retrieve(lf[11]),C_fix(14))));}
else{
t7=C_SCHEME_UNDEFINED;
return(t7);}}

/* emit-syntax-trace-info in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3830(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3830,4,t1,t2,t3,t4);}
a=C_alloc(5);
if(C_truep(t2)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3838,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:126: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word av2[3];
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3836 in emit-syntax-trace-info in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3838,c,av);}
t2=(C_truep(t1)?t1:lf[12]);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_emit_trace_info(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_slot(C_fast_retrieve(lf[11]),C_fix(14)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* decorate in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3847(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3847,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3593,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3606,a[2]=t3,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:69: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word av2[5];
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t4;
av2[4]=t5;
tp(5,av2);}}

/* f_3855 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3855(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3855,c,av);}
a=C_alloc(10);
t4=C_eqp(t2,t3);
t5=C_i_not(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3862,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3865,a[2]=t6,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:137: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k3860 */
static void C_ccall f_3862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3862,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3863 */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3865,c,av);}
if(C_truep(t1)){
if(C_truep(t1)){
/* eval.scm:138: ##sys#update-line-number-database! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}
else{
if(C_truep(((C_word*)t0)[5])){
/* eval.scm:138: ##sys#update-line-number-database! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3880(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_3880,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(9);
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3894,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t7,a[7]=t2,a[8]=((C_word)li16),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:142: ##sys#include-forms-from-file */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[24]);
C_word av2[6];
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t1;
av2[2]=t8;
av2[3]=t9;
av2[4]=t3;
av2[5]=t10;
tp(6,av2);}}

/* a3893 in include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3894,c,av);}
a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3898,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=C_i_cdddr(((C_word*)t0)[7]);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3927,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:147: scheme#append */
t7=*((C_word*)lf[22]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=C_i_cadddr(((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[23],t2);
f_3898(2,av2);}}}

/* k3896 in a3893 in include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3898(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_3898,c,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3903,a[2]=t5,a[3]=t3,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3908,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li14),tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3914,a[2]=t3,a[3]=t5,a[4]=((C_word)li15),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:150: ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a3902 in k3896 in a3893 in include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3903,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[19]));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a3907 in k3896 in a3893 in include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_3908,c,av);}
/* eval.scm:151: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* a3913 in k3896 in a3893 in include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3914,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[19]));
t3=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3925 in a3893 in include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3927,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3931,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:148: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k3929 in k3925 in a3893 in include-file in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3931,c,av);}
t2=((C_word*)t0)[2];
/* eval.scm:146: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=t1;
tp(4,av2);}}

/* compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_3944,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(18);
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3951,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=t6,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=t5,a[11]=t7,a[12]=((C_word*)t0)[5],a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],a[16]=((C_word*)t0)[9],a[17]=((C_word*)t0)[10],tmp=(C_word)a,a+=18,tmp);
/* eval.scm:154: chicken.keyword#keyword? */
t9=C_fast_retrieve(lf[155]);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3951(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3951,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word)li19),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:156: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[2]))){
switch(((C_word*)t0)[2]){
case C_fix(-1):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4178,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4186,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4194,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4202,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[2],a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
if(C_truep(C_booleanp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4223,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4225,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=C_charp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4235,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_4235(2,av2);}}
else{
t4=C_eofp(((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4235(2,av2);}}
else{
t5=C_bwpp(((C_word*)t0)[2]);
if(C_truep(t5)){
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
f_4235(2,av2);}}
else{
t6=C_i_stringp(((C_word*)t0)[2]);
if(C_truep(t6)){
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_4235(2,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7418,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:210: chicken.bytevector#bytevector? */
t8=C_fast_retrieve(lf[154]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}}}}}}}}}

/* f_3952 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3952,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3963 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3964,c,av);}
/* eval.scm:156: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3727(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3970,c,av);}
a=C_alloc(12);
if(C_truep(C_i_not(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3980,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_i_symbolp(t3);
if(C_truep(C_i_not(t5))){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
f_3980(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:159: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t6;
tp(2,av2);}}}
else{
switch(t2){
case C_fix(0):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4074,a[2]=t3,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(1):
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4089,a[2]=t3,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
case C_fix(2):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4108,a[2]=t3,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(3):
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4131,a[2]=t3,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}
default:
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4152,a[2]=t2,a[3]=t3,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}

/* k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3980,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3983,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4010,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(*((C_word*)lf[2]+1))){
t4=C_i_not(t1);
if(C_truep(t4)){
t5=t3;
f_4010(t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:166: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t5;
av2[2]=t1;
tp(3,av2);}}}
else{
t4=t3;
f_4010(t4,C_SCHEME_FALSE);}}

/* k3981 in k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_3983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3983,2,t0,t1);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[4],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:172: ##sys#symbol-has-toplevel-binding? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word av2[3];
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* f_3990 in k3981 in k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_3990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3990,c,av);}
/* eval.scm:171: ##sys#error */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[26];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3998 in k3981 in k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4000,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4001,a[2]=((C_word*)t0)[2],a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_4001 in k3998 in k3981 in k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4001,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[2],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4006 in k3998 in k3981 in k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4006,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fast_retrieve(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4008 in k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_4010(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,1)))){
C_save_and_reclaim_args((void *)trf_4010,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,*((C_word*)lf[2]+1));
t4=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#unbound-in-eval ...) */,t3);
t5=((C_word*)t0)[4];
f_3983(t5,t4);}
else{
t2=((C_word*)t0)[4];
f_3983(t2,C_SCHEME_UNDEFINED);}}

/* k4029 in k3978 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4031,c,av);}
t2=((C_word*)t0)[2];
f_4010(t2,C_i_not(t1));}

/* k4061 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4063,c,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
f_3980(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
/* eval.scm:161: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[6];
tp(5,av2);}}
else{
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[4]);
t3=C_i_not(t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?((C_word*)t0)[4]:C_SCHEME_FALSE);
f_3980(2,av2);}}}}

/* f_4074 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4074,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(C_slot(t2,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4089 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4089,c,av);}
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(C_slot(t3,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_4108 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4108,c,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_slot(C_slot(t4,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_4131 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4131(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4131,c,av);}
t3=C_slot(t2,C_fix(1));
t4=C_slot(t3,C_fix(1));
t5=C_slot(t4,C_fix(1));
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_slot(C_slot(t5,C_fix(0)),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* f_4152 in a3969 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4152,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_slot(C_u_i_list_ref(t2,((C_word*)t0)[2]),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4178 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4178,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4186 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4186,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4194 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4194,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4202 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4202,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4204 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4204,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4223 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4223,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4225 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4225,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_4235,c,av);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4236,a[2]=((C_word*)t2)[2],a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_pairp(((C_word*)t2)[2]);
if(C_truep(C_i_not(t3))){
/* eval.scm:215: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=lf[30];
av2[3]=((C_word*)t2)[2];
tp(4,av2);}}
else{
t4=C_slot(((C_word*)t2)[2],C_fix(0));
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4255,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[8],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[9],a[7]=((C_word*)t2)[10],a[8]=((C_word*)t2)[6],a[9]=((C_word*)t2)[11],a[10]=((C_word*)t2)[4],a[11]=((C_word*)t2)[7],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],tmp=(C_word)a,a+=17,tmp);
/* eval.scm:217: emit-syntax-trace-info */
f_3830(t5,((C_word*)t2)[10],((C_word*)t2)[2],((C_word*)t2)[6]);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7382,a[2]=((C_word*)t2)[16],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[10],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:670: emit-syntax-trace-info */
f_3830(t5,((C_word*)t2)[10],((C_word*)t2)[2],((C_word*)t2)[6]);}}}}

/* f_4236 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4236,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4255,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:218: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4258(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,4)))){
C_save_and_reclaim((void *)f_4258,c,av);}
a=C_alloc(39);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3855,a[2]=t1,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4264,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],a[12]=((C_word*)t2)[12],a[13]=((C_word*)t2)[13],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[16],tmp=(C_word)a,a+=17,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7361,a[2]=t7,a[3]=t5,a[4]=((C_word)li135),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7366,a[2]=((C_word*)t2)[2],a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7376,a[2]=t5,a[3]=t7,a[4]=((C_word)li137),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:219: ##sys#dynamic-wind */
t12=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4264,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,((C_word*)t0)[3]);
if(C_truep(C_i_not(t2))){
/* eval.scm:224: compile */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3944(t3,((C_word*)t0)[2],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4279,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:225: rename */
t4=((C_word*)((C_word*)t0)[14])[1];
f_3693(t4,t3,C_slot(((C_word*)t0)[3],C_fix(0)));}}

/* k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4279(C_word c,C_word *av){
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
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,7)))){
C_save_and_reclaim((void *)f_4279,c,av);}
a=C_alloc(26);
t2=((C_word*)t0)[2];
t3=C_eqp(t1,lf[32]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4288,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:231: chicken.syntax#strip-syntax */
t5=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_cadr(((C_word*)t2)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_eqp(t1,lf[34]);
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t2)[3]);
t6=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4374,a[2]=t5,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=C_eqp(t1,lf[35]);
if(C_truep(t5)){
/* eval.scm:247: compile */
t6=((C_word*)((C_word*)t2)[4])[1];
f_3944(t6,((C_word*)t2)[2],C_i_cadr(((C_word*)t2)[3]),((C_word*)t2)[5],((C_word*)t2)[6],((C_word*)t2)[7],((C_word*)t2)[8],C_SCHEME_FALSE);}
else{
t6=C_eqp(t1,lf[36]);
if(C_truep(t6)){
/* eval.scm:250: compile */
t7=((C_word*)((C_word*)t2)[4])[1];
f_3944(t7,((C_word*)t2)[2],C_i_cadr(((C_word*)t2)[3]),((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],C_SCHEME_FALSE);}
else{
t7=C_eqp(t1,lf[37]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4408,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
t9=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t8=C_eqp(t1,lf[38]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4418,a[2]=((C_word*)t2)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:255: compile */
t10=((C_word*)((C_word*)t2)[4])[1];
f_3944(t10,t9,C_i_cadr(((C_word*)t2)[3]),((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],C_SCHEME_FALSE);}
else{
t9=C_eqp(t1,lf[23]);
if(C_truep(t9)){
t10=C_slot(((C_word*)t2)[3],C_fix(1));
t11=C_i_length(t10);
switch(t11){
case C_fix(0):
/* eval.scm:266: compile */
t12=((C_word*)((C_word*)t2)[4])[1];
f_3944(t12,((C_word*)t2)[2],lf[40],((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);
case C_fix(1):
/* eval.scm:267: compile */
t12=((C_word*)((C_word*)t2)[4])[1];
f_3944(t12,((C_word*)t2)[2],C_slot(t10,C_fix(0)),((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);
case C_fix(2):
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4506,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[4],a[4]=t10,a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:268: compile */
t13=((C_word*)((C_word*)t2)[4])[1];
f_3944(t13,t12,C_slot(t10,C_fix(0)),((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);
default:
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4528,a[2]=((C_word*)t2)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=t10,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:272: compile */
t13=((C_word*)((C_word*)t2)[4])[1];
f_3944(t13,t12,C_slot(t10,C_fix(0)),((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);}}
else{
t10=C_eqp(t1,lf[41]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4580,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t2)[9])){
t12=t11;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_UNDEFINED;
f_4580(2,av2);}}
else{
/* eval.scm:279: ##sys#error */
t12=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[46];
av2[3]=C_i_cadr(((C_word*)t2)[3]);
((C_proc)(void*)(*((C_word*)t12+1)))(4,av2);}}}
else{
t11=C_eqp(t1,lf[47]);
if(C_truep(t11)){
t12=C_i_cadr(((C_word*)t2)[3]);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4611,a[2]=((C_word*)t2)[10],a[3]=t12,a[4]=((C_word*)t2)[5],a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4617,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[12],a[4]=t12,a[5]=((C_word*)t2)[8],a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[5],a[9]=((C_word*)t2)[7],a[10]=((C_word)li56),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:286: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t2)[2];
av2[2]=t13;
av2[3]=t14;
C_call_with_values(4,av2);}}
else{
t12=C_eqp(t1,lf[52]);
if(C_truep(t12)){
t13=C_i_cadr(((C_word*)t2)[3]);
t14=C_i_length(t13);
t15=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t16=t15;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=((C_word*)t17)[1];
t19=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4726,a[2]=((C_word*)t2)[5],a[3]=t14,a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=t13,a[9]=((C_word*)t2)[12],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[3],tmp=(C_word)a,a+=12,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5165,a[2]=t17,a[3]=t21,a[4]=t18,a[5]=((C_word)li69),tmp=(C_word)a,a+=6,tmp));
t23=((C_word*)t21)[1];
f_5165(t23,t19,t13);}
else{
t13=C_eqp(t1,lf[59]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t2)[3]);
t15=C_u_i_cdr(((C_word*)t2)[3]);
t16=C_u_i_cdr(t15);
t17=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t18=t17;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=((C_word*)t19)[1];
t21=C_i_check_list_2(t14,lf[53]);
t22=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5238,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=t16,a[9]=t14,tmp=(C_word)a,a+=10,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5310,a[2]=t19,a[3]=t24,a[4]=t20,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t26=((C_word*)t24)[1];
f_5310(t26,t22,t14);}
else{
t14=C_eqp(t1,lf[62]);
if(C_truep(t14)){
t15=C_i_cadr(((C_word*)t2)[3]);
t16=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t17=t16;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=((C_word*)t18)[1];
t20=C_i_check_list_2(t15,lf[53]);
t21=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5360,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=t15,tmp=(C_word)a,a+=10,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5616,a[2]=t18,a[3]=t23,a[4]=t19,a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp));
t25=((C_word*)t23)[1];
f_5616(t25,t21,t15);}
else{
t15=C_eqp(t1,lf[64]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5657,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[6],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[13],a[6]=((C_word*)t2)[12],a[7]=((C_word*)t2)[11],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[2],tmp=(C_word)a,a+=10,tmp);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6100,a[2]=t16,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:389: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t17;
tp(2,av2);}}
else{
t16=C_eqp(t1,lf[76]);
if(C_truep(t16)){
t17=C_fast_retrieve(lf[9]);
t18=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6109,a[2]=t17,a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[2],tmp=(C_word)a,a+=9,tmp);
t19=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t20=t19;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=((C_word*)t21)[1];
t23=C_i_cadr(((C_word*)t2)[3]);
t24=C_i_check_list_2(t23,lf[53]);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6201,a[2]=t18,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6207,a[2]=t21,a[3]=t27,a[4]=t22,a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t29=((C_word*)t27)[1];
f_6207(t29,t25,t23);}
else{
t17=C_eqp(t1,lf[79]);
if(C_truep(t17)){
t18=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t19=t18;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=((C_word*)t20)[1];
t22=C_i_cadr(((C_word*)t2)[3]);
t23=C_i_check_list_2(t22,lf[53]);
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6284,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[7],a[5]=((C_word*)t2)[8],a[6]=((C_word*)t2)[3],a[7]=((C_word*)t2)[2],tmp=(C_word)a,a+=8,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6379,a[2]=t20,a[3]=t26,a[4]=t21,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t28=((C_word*)t26)[1];
f_6379(t28,t24,t22);}
else{
t18=C_eqp(t1,lf[81]);
if(C_truep(t18)){
t19=C_i_cadr(((C_word*)t2)[3]);
t20=C_i_caddr(((C_word*)t2)[3]);
t21=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6426,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=t20,a[8]=((C_word*)t2)[11],a[9]=t19,a[10]=((C_word*)t2)[12],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:521: rename */
t22=((C_word*)((C_word*)t2)[14])[1];
f_3693(t22,t21,t19);}
else{
t19=C_eqp(t1,lf[88]);
if(C_truep(t19)){
/* eval.scm:535: compile */
t20=((C_word*)((C_word*)t2)[4])[1];
f_3944(t20,((C_word*)t2)[2],lf[89],((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],C_SCHEME_FALSE);}
else{
t20=C_eqp(t1,lf[90]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6492,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],tmp=(C_word)a,a+=7,tmp);
t22=C_i_cddr(((C_word*)t2)[3]);
t23=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6500,a[2]=t21,a[3]=t22,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:539: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t23;
tp(2,av2);}}
else{
t21=C_eqp(t1,lf[91]);
if(C_truep(t21)){
/* eval.scm:543: include-file */
t22=((C_word*)((C_word*)t2)[15])[1];
f_3880(t22,((C_word*)t2)[2],((C_word*)t2)[3],C_SCHEME_FALSE,((C_word*)t2)[5],((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);}
else{
t22=C_eqp(t1,lf[92]);
if(C_truep(t22)){
/* eval.scm:546: include-file */
t23=((C_word*)((C_word*)t2)[15])[1];
f_3880(t23,((C_word*)t2)[2],((C_word*)t2)[3],C_SCHEME_TRUE,((C_word*)t2)[5],((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);}
else{
t23=C_eqp(t1,lf[93]);
if(C_truep(t23)){
t24=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t25=t24;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=((C_word*)t26)[1];
t28=C_i_cadr(((C_word*)t2)[3]);
t29=C_i_check_list_2(t28,lf[53]);
t30=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6548,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],a[8]=((C_word*)t2)[2],tmp=(C_word)a,a+=9,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6564,a[2]=t26,a[3]=t32,a[4]=t27,a[5]=((C_word)li120),tmp=(C_word)a,a+=6,tmp));
t34=((C_word*)t32)[1];
f_6564(t34,t30,t28);}
else{
t24=C_eqp(t1,lf[97]);
if(C_truep(t24)){
t25=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6605,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[7],a[4]=((C_word*)t2)[8],a[5]=((C_word*)t2)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:558: chicken.syntax#strip-syntax */
t26=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t26;
av2[1]=t25;
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t26+1)))(3,av2);}}
else{
t25=C_eqp(t1,lf[111]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6929,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:610: rename */
t27=((C_word*)((C_word*)t2)[14])[1];
f_3693(t27,t26,lf[74]);}
else{
t26=C_eqp(t1,lf[112]);
if(C_truep(t26)){
t27=C_i_cadr(((C_word*)t2)[3]);
t28=C_a_i_list(&a,2,lf[32],t27);
t29=C_a_i_list(&a,2,lf[102],t28);
/* eval.scm:613: compile */
t30=((C_word*)((C_word*)t2)[4])[1];
f_3944(t30,((C_word*)t2)[2],t29,((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],C_SCHEME_FALSE);}
else{
t27=C_eqp(t1,lf[113]);
if(C_truep(t27)){
t28=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6963,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:616: chicken.load#load-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[115]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[115]+1);
av2[1]=t28;
av2[2]=C_i_cadr(((C_word*)t2)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t28=C_eqp(t1,lf[116]);
if(C_truep(t28)){
t29=C_i_cadr(((C_word*)t2)[3]);
t30=C_u_i_cdr(((C_word*)t2)[3]);
t31=C_i_pairp(C_u_i_cdr(t30));
t32=(C_truep(t31)?C_i_caddr(((C_word*)t2)[3]):C_SCHEME_FALSE);
t33=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6989,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:622: ##sys#process-require */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[117]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[117]+1);
av2[1]=t33;
av2[2]=t29;
av2[3]=t32;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t29=C_eqp(t1,lf[118]);
t30=(C_truep(t29)?t29:C_eqp(t1,lf[119]));
if(C_truep(t30)){
t31=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7010,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:625: ##sys#eval/meta */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[78]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[78]+1);
av2[1]=t31;
av2[2]=C_i_cadr(((C_word*)t2)[3]);
tp(3,av2);}}
else{
t31=C_eqp(t1,lf[121]);
if(C_truep(t31)){
/* eval.scm:629: compile */
t32=((C_word*)((C_word*)t2)[4])[1];
f_3944(t32,((C_word*)t2)[2],C_i_cadr(((C_word*)t2)[3]),((C_word*)t2)[5],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);}
else{
t32=C_eqp(t1,lf[122]);
t33=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7039,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],a[8]=t1,a[9]=((C_word*)t2)[3],a[10]=((C_word*)t2)[14],a[11]=((C_word*)t2)[16],a[12]=((C_word*)t2)[6],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t32)){
t34=t33;
f_7039(t34,t32);}
else{
t34=C_eqp(t1,lf[149]);
t35=t33;
f_7039(t35,(C_truep(t34)?t34:C_eqp(t1,lf[150])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4288,c,av);}
a=C_alloc(4);
switch(t1){
case C_fix(-1):
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4295,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(0):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4303,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4311,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4319,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_SCHEME_TRUE:
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4327,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_SCHEME_FALSE:
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4335,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
default:
t2=C_eqp(t1,C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4345,a[2]=t1,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_4295 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4295,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(-1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4303 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4303,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4311 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4311,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4319 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4319,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(2);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4327 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4327,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4335 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4335,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4343 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4343,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4345 in k4286 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4345,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4374 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4374,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4408 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4408,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4416 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4418,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4421,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:256: compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3944(t4,t3,C_i_caddr(((C_word*)t0)[4]),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}

/* k4419 in k4416 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,7)))){
C_save_and_reclaim((void *)f_4421,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4424,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_i_cdddr(((C_word*)t2)[4]);
if(C_truep(C_i_pairp(t4))){
/* eval.scm:258: compile */
t5=((C_word*)((C_word*)t2)[5])[1];
f_3944(t5,t3,C_i_cadddr(((C_word*)t2)[4]),((C_word*)t2)[6],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],C_SCHEME_FALSE);}
else{
/* eval.scm:259: compile */
t5=((C_word*)((C_word*)t2)[5])[1];
f_3944(t5,t3,lf[39],((C_word*)t2)[6],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],C_SCHEME_FALSE);}}

/* k4422 in k4419 in k4416 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4424,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4425 in k4422 in k4419 in k4416 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4425,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4430 */
static void C_ccall f_4432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4432,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* k4504 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_4506,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4509,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:269: compile */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3944(t3,t2,C_i_cadr(((C_word*)t0)[4]),((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k4507 in k4504 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4509,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4510,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4510 in k4507 in k4504 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4510,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4514,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4512 */
static void C_ccall f_4514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4514,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4526 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4528,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4531,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:273: compile */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3944(t4,t3,C_i_cadr(((C_word*)t0)[4]),((C_word*)t0)[6],C_SCHEME_FALSE,((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k4529 in k4526 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4531(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,7)))){
C_save_and_reclaim((void *)f_4531,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4534,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t2)[4],C_fix(1));
t5=C_slot(t4,C_fix(1));
t6=C_a_i_cons(&a,2,lf[23],t5);
/* eval.scm:274: compile */
t7=((C_word*)((C_word*)t2)[5])[1];
f_3944(t7,t3,t6,((C_word*)t2)[6],C_SCHEME_FALSE,((C_word*)t2)[7],((C_word*)t2)[8],((C_word*)t2)[9]);}

/* k4532 in k4529 in k4526 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4534,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4535,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4535 in k4532 in k4529 in k4526 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4535,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4539,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4537 */
static void C_ccall f_4539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4539,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];{
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

/* k4540 in k4537 */
static void C_ccall f_4542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4542,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4578 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_4580,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:280: ##sys#put/restore! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[43]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[43]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
av2[3]=lf[44];
av2[4]=lf[45];
tp(5,av2);}}

/* k4581 in k4578 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4583,c,av);}
/* eval.scm:281: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],lf[42],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* a4610 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4611,c,av);}
/* eval.scm:286: lookup */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3727(t2,t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4617(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,7)))){
C_save_and_reclaim((void *)f_4617,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4621,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:287: compile */
t5=((C_word*)((C_word*)t0)[6])[1];
f_3944(t5,t4,C_i_caddr(((C_word*)t0)[7]),((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[9],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_4621,c,av);}
a=C_alloc(13);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fast_retrieve(lf[49]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:290: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4630(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(C_i_zerop(((C_word*)t0)[2]))?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4677,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4628 in k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4630,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4641,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:296: ##sys#alias-global-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}}

/* f_4634 in k4628 in k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4634,c,av);}
/* eval.scm:295: ##sys#error */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[0];
av2[3]=lf[48];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4639 in k4628 in k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4641,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4642,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4642 in k4639 in k4628 in k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4642,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4646,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4644 */
static void C_ccall f_4646(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4646,c,av);}
t2=C_i_persist_symbol(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fix(0),t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4670 in k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4672,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
/* eval.scm:292: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[51];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_4630(2,av2);}}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_4630(2,av2);}}}

/* f_4677 in k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4677,c,av);}
a=C_alloc(5);
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4689,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4687 */
static void C_ccall f_4689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4689,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4690 in k4619 in a4616 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4690,c,av);}
a=C_alloc(5);
t3=C_u_i_list_ref(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4699,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4697 */
static void C_ccall f_4699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4699,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_setslot(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4726(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4726,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[53]);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5131,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5131(t11,t7,t1);}

/* k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4735,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5129,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:313: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4741(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_4741,c,av);}
a=C_alloc(33);
t2=C_fast_retrieve(lf[9]);
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_TRUE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5082,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5099,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word)li66),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5117,a[2]=t4,a[3]=t2,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:314: ##sys#dynamic-wind */
t11=*((C_word*)lf[20]+1);{
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

/* k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4744(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4744,c,av);}
a=C_alloc(26);
switch(((C_word*)t0)[2]){
case C_fix(1):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4753,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:319: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(2):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4787,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:322: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(3):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:326: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
case C_fix(4):
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:334: scheme#cadar */
t4=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}
default:
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4980,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li61),tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5040,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li64),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_5040(t11,t7,((C_word*)t0)[9]);}}

/* k4751 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4753,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4754,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4754 in k4751 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4754,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4770,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4768 */
static void C_ccall f_4770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4770,c,av);}
a=C_alloc(5);
t2=C_a_i_vector1(&a,1,t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4772 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4774,c,av);}
/* eval.scm:319: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4785 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_4787,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4815,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:323: scheme#cadadr */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4788 in k4785 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4790,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4791,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4791 in k4788 in k4785 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4791,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4807,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4805 */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4807,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4811,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4809 in k4805 */
static void C_ccall f_4811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4811,c,av);}
a=C_alloc(6);
t2=C_a_i_vector2(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4813 in k4785 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4815,c,av);}
/* eval.scm:323: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4821 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4823,c,av);}
/* eval.scm:322: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4834 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4836,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:327: scheme#cadadr */
t4=*((C_word*)lf[55]+1);{
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

/* k4837 in k4834 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_4839,c,av);}
a=C_alloc(14);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4845,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:329: scheme#cadar */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4843 in k4837 in k4834 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4845,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4846,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li59),tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_4846 in k4843 in k4837 in k4834 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4846,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4862,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4860 */
static void C_ccall f_4862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4862,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4866,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4864 in k4860 */
static void C_ccall f_4866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4866,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4868 in k4864 in k4860 */
static void C_ccall f_4870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4870,c,av);}
a=C_alloc(7);
t2=C_a_i_vector3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[6];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4872 in k4837 in k4834 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4874,c,av);}
/* eval.scm:329: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_caddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4880 in k4834 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4882,c,av);}
/* eval.scm:327: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4888 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4890,c,av);}
/* eval.scm:326: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_4903,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:335: scheme#cadadr */
t4=*((C_word*)lf[55]+1);{
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

/* k4904 in k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4906,c,av);}
a=C_alloc(20);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4912,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:337: scheme#cadar */
t5=*((C_word*)lf[54]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4910 in k4904 in k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4912,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4948,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:338: scheme#cadadr */
t4=*((C_word*)lf[55]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4913 in k4910 in k4904 in k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4915,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4916,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li60),tmp=(C_word)a,a+=8,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4916 in k4913 in k4910 in k4904 in k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_4916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4916,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4932,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4930 */
static void C_ccall f_4932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4932,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4936,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4934 in k4930 */
static void C_ccall f_4936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4936,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4940,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4938 in k4934 in k4930 */
static void C_ccall f_4940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4940,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k4942 in k4938 in k4934 in k4930 */
static void C_ccall f_4944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4944,c,av);}
a=C_alloc(8);
t2=C_a_i_vector4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[5]);
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[7];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4946 in k4910 in k4904 in k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4948,c,av);}
/* eval.scm:338: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4954 in k4904 in k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4956,c,av);}
/* eval.scm:337: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_caddr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4962 in k4901 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4964,c,av);}
/* eval.scm:335: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_cadr(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k4970 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4972,c,av);}
/* eval.scm:334: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* g605 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_4980(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_4980,3,t0,t1,t2);}
/* eval.scm:348: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3944(t3,t1,C_i_cadr(t2),((C_word*)t0)[3],C_u_i_car(t2),((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k4991 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_4993,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_4994 in k4991 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_4994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4994,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4998,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:350: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k4996 */
static void C_ccall f_4998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_4998,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5001,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5010,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[2],a[6]=((C_word)li62),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5010(t6,t2,C_fix(0),((C_word*)t0)[6]);}

/* k4999 in k4996 */
static void C_ccall f_5001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5001,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* doloop626 in k4996 */
static void f_5010(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_5010,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_slot(t3,C_fix(0));{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k5033 in doloop626 in k4996 */
static void C_ccall f_5035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5035,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5010(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop599 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5040(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5040,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5065,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:348: g605 */
t4=((C_word*)t0)[4];
f_4980(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5063 in map-loop599 in k4742 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5065,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5040(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a5081 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5082,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:314: ##sys#current-environment560 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_5086(2,av2);}}}

/* k5084 in a5081 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5086,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5090,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:314: ##sys#current-environment560 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5088 in k5084 in a5081 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5090,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5093,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:314: ##sys#current-environment560 */
t5=((C_word*)t2)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}

/* k5091 in k5088 in k5084 in a5081 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5093,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5098 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5099,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5107,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5115,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:316: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k5105 in a5098 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5107,c,av);}
a=C_alloc(12);
/* eval.scm:315: compile-to-closure */
f_3631(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}

/* k5113 in a5098 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5115,c,av);}
/* eval.scm:316: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a5116 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5117,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5121,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:314: ##sys#current-environment560 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5119 in a5116 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5121(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5121,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5124,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:314: ##sys#current-environment560 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k5122 in k5119 in a5116 in k4739 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5124(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5124,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5127 in k4733 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5129,c,av);}
/* eval.scm:313: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop532 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5131(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5131,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:311: g538 */
t4=*((C_word*)lf[58]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5154 in map-loop532 in k4724 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5156,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5131(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop504 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5165(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5165,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5236 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5238(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5238,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5242,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5262,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5276,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5276(t11,t7,((C_word*)t0)[9]);}

/* k5240 in k5236 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_5242,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[52],t2);
/* eval.scm:360: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3944(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_FALSE);}

/* k5260 in k5236 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5262,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[52],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:361: ##sys#append */
t5=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop667 in k5236 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5276(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_5276,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_list(&a,3,lf[47],t4,t5);
t7=C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop640 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5310(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5310,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[61]);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t10=t1;
t11=C_slot(t2,C_fix(1));
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5360(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_5360,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(t1,lf[53]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5582,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li75),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5582(t11,t7,t1);}

/* k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5369(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5369,c,av);}
a=C_alloc(25);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5395,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5548,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li74),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5548(t11,t7,((C_word*)t0)[10]);}

/* k5393 in k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5395(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,4)))){
C_save_and_reclaim((void *)f_5395,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[53]);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5422,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5500,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5500(t11,t7,((C_word*)t0)[2],((C_word*)t0)[11]);}

/* k5420 in k5393 in k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5422(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_5422,c,av);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5426,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5438,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5452,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li72),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5452(t11,t7,((C_word*)t0)[10],((C_word*)t0)[11]);}

/* k5424 in k5420 in k5393 in k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,7)))){
C_save_and_reclaim((void *)f_5426,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[52],t2);
t4=C_a_i_list(&a,3,lf[52],((C_word*)t0)[3],t3);
/* eval.scm:376: compile */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3944(t5,((C_word*)t0)[5],t4,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_FALSE);}

/* k5436 in k5420 in k5393 in k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5438,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[52],t2);
t4=C_a_i_list(&a,1,t3);
/* eval.scm:377: ##sys#append */
t5=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop816 in k5420 in k5393 in k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5452(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_5452,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[47],t6,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t15=C_slot(t3,C_fix(1));
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop783 in k5393 in k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5500(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_5500,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_i_cadr(t7);
t9=C_a_i_list2(&a,2,t6,t8);
t10=C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t10);
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
t14=t1;
t15=C_slot(t2,C_fix(1));
t16=C_slot(t3,C_fix(1));
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* map-loop756 in k5367 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5548(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5548,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list2(&a,2,t4,lf[63]);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t10=t1;
t11=C_slot(t2,C_fix(1));
t1=t10;
t2=t11;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* map-loop726 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5582(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5582,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:374: g732 */
t4=*((C_word*)lf[58]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5605 in map-loop726 in k5358 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5607,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5582(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop699 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_5616(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5616,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t9=t1;
t10=C_slot(t2,C_fix(1));
t1=t9;
t2=t10;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5657(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_5657,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_truep(((C_word*)t0)[3])?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t4)[1]):C_a_i_cons(&a,2,lf[65],((C_word*)t4)[1]));
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5668,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t7,a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6074,a[2]=t4,a[3]=t7,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:393: ##sys#extended-lambda-list? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[72]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[72]+1);
av2[1]=t10;
av2[2]=((C_word*)t4)[1];
tp(3,av2);}}

/* k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5668,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5673,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word)li106),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:398: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[10];
av2[2]=((C_word*)((C_word*)t0)[11])[1];
av2[3]=t2;
tp(4,av2);}}

/* a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5673(C_word c,C_word *av){
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5673,c,av);}
a=C_alloc(27);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[53]);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5683,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6039,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6039(t14,t10,t2);}

/* k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_5683,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5686,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6037,a[2]=t2,a[3]=((C_word*)t0)[13],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:402: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5686(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_5686,c,av);}
a=C_alloc(35);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fast_retrieve(lf[9]);
t4=t1;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_TRUE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5692,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5994,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6011,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=t1,a[9]=((C_word)li103),tmp=(C_word)a,a+=10,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6025,a[2]=t5,a[3]=t3,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: ##sys#dynamic-wind */
t12=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t8;
av2[2]=t9;
av2[3]=t10;
av2[4]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5692,c,av);}
a=C_alloc(7);
switch(((C_word*)t0)[2]){
case C_fix(0):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5702,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li78),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5721,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(1):
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5745,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li82),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5764,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li84),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
case C_fix(2):
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5792,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li86),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5811,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li88),tmp=(C_word)a,a+=6,tmp));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}
case C_fix(3):
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5839,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5858,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
default:
t2=C_eqp(((C_word*)t0)[2],C_fix(4));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5886,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5905,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp)):(C_truep(((C_word*)t0)[4])?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5927,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5950,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li101),tmp=(C_word)a,a+=7,tmp)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* f_5702 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5702,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5708,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li77),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:412: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5707 */
static void C_ccall f_5708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_5708,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5721 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5721(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5721,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5727,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:417: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5726 */
static void C_ccall f_5727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5727,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f_5745 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5745,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5751,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:422: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5750 */
static void C_ccall f_5751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +6,c,2)))){
C_save_and_reclaim((void*)f_5751,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+6);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5764 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5764,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5770,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li83),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:427: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5769 */
static void C_ccall f_5770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5770,c,av);}
a=C_alloc(5);
t3=C_a_i_vector1(&a,1,t2);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* f_5792 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5792,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5798,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:433: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5797 */
static void C_ccall f_5798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_5798,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+7);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5811 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5811,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5817,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:438: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5816 */
static void C_ccall f_5817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5817,c,av);}
a=C_alloc(6);
t4=C_a_i_vector2(&a,2,t2,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[2]);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* f_5839 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5839,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5845,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:444: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5844 */
static void C_ccall f_5845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-5)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_5845,c,av);}
a=C_alloc((c-5)*C_SIZEOF_PAIR+8);
t5=C_build_rest(&a,c,5,av);
C_word t6;
C_word t7;
C_word t8;
t6=C_a_i_vector4(&a,4,t2,t3,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=t1;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}

/* f_5858 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5858,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5864,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:449: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5863 */
static void C_ccall f_5864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5864,c,av);}
a=C_alloc(7);
t5=C_a_i_vector3(&a,3,t2,t3,t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* f_5886 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5886,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5892,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:455: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5891 */
static void C_ccall f_5892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word *a;
if(c<6) C_bad_min_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-6)*C_SIZEOF_PAIR +9,c,2)))){
C_save_and_reclaim((void*)f_5892,c,av);}
a=C_alloc((c-6)*C_SIZEOF_PAIR+9);
t6=C_build_rest(&a,c,6,av);
C_word t7;
C_word t8;
C_word t9;
t7=C_a_i_vector5(&a,5,t2,t3,t4,t5,t6);
t8=C_a_i_cons(&a,2,t7,((C_word*)t0)[2]);
t9=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* f_5905 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5905(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5905,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5911,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:460: decorate */
f_3847(t1,t3,((C_word*)t0)[4]);}

/* a5910 */
static void C_ccall f_5911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6;
C_word t7;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_5911,c,av);}
a=C_alloc(5);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:462: ##sys#vector */
t7=*((C_word*)lf[66]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
av2[5]=t5;
((C_proc)(void*)(*((C_word*)t7+1)))(6,av2);}}

/* k5921 in a5910 */
static void C_ccall f_5923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5923,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* f_5927 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5927,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5933,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:467: decorate */
f_3847(t1,t3,((C_word*)t0)[5]);}

/* a5932 */
static void C_ccall f_5933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +15,c,6)))){
C_save_and_reclaim((void*)f_5933,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+15);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5949,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_list1(&a,1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[66]+1);
av2[3]=t5;
C_apply(4,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7447,a[2]=t2,a[3]=t6,a[4]=((C_word)li97),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7447(t8,t4,((C_word*)t0)[4],C_fix(0),t2,C_SCHEME_FALSE);}}

/* k5943 in a5932 */
static void C_ccall f_5945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5945,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k5947 in a5932 */
static void C_ccall f_5949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5949,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[66]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* f_5950 in k5690 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5950,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5956,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word)li100),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:474: decorate */
f_3847(t1,t3,((C_word*)t0)[5]);}

/* a5955 */
static void C_ccall f_5956(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +5,c,4)))){
C_save_and_reclaim((void*)f_5956,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+5);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=C_fix(c - 2);
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(C_i_not(t4))){
/* eval.scm:478: ##sys#error */
t5=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[68];
av2[3]=((C_word*)t0)[2];
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=*((C_word*)lf[66]+1);
av2[3]=t2;
C_apply(4,av2);}}}

/* k5976 in a5955 */
static void C_ccall f_5978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5978,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* a5993 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5994,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:405: ##sys#current-environment895 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_5998(2,av2);}}}

/* k5996 in a5993 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_5998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5998,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6002,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:405: ##sys#current-environment895 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6000 in k5996 in a5993 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6002,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6005,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:405: ##sys#current-environment895 */
t5=((C_word*)t2)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}

/* k6003 in k6000 in k5996 in a5993 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_6005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6005,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6010 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6011,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6019,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:407: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=((C_word*)t0)[8];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k6017 in a6010 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6019,c,av);}
a=C_alloc(12);
if(C_truep(((C_word*)t0)[2])){
/* eval.scm:406: compile-to-closure */
f_3631(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}
else{
/* eval.scm:406: compile-to-closure */
f_3631(((C_word*)t0)[3],t1,((C_word*)t0)[4],C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE));}}

/* a6024 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6025,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6029,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: ##sys#current-environment895 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6027 in a6024 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6029,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6032,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:405: ##sys#current-environment895 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6030 in k6027 in a6024 in k5684 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6032,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6035 in k5681 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6037,c,av);}
/* eval.scm:402: ##sys#extend-se */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop867 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6039(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6039,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:401: g873 */
t4=*((C_word*)lf[58]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6062 in map-loop867 in a5672 in k5666 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6064,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6039(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6072 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6074,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6089,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li108),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:394: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_5668(2,av2);}}}

/* a6078 in k6072 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6079,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6087,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:397: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k6085 in a6078 in k6072 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6087,c,av);}
/* eval.scm:396: ##sys#expand-extended-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
av2[4]=C_fast_retrieve(lf[71]);
av2[5]=t1;
tp(6,av2);}}

/* a6088 in k6072 in k5655 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6089,c,av);}
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6098 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_6100,c,av);}
/* eval.scm:389: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[74];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[75];
av2[5]=C_SCHEME_FALSE;
av2[6]=t1;
tp(7,av2);}}

/* k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6109(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_6109,c,av);}
a=C_alloc(23);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6114,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6131,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li110),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6149,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:483: ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[8];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a6113 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6114,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:483: ##sys#current-environment961 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6118(2,av2);}}}

/* k6116 in a6113 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6118,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6122,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:483: ##sys#current-environment961 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6120 in k6116 in a6113 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6122,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6125,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:483: ##sys#current-environment961 */
t5=((C_word*)t2)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}

/* k6123 in k6120 in k6116 in a6113 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6125,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6130 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6131,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6139,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6147,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:496: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6137 in a6130 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6139,c,av);}
/* eval.scm:495: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6145 in a6130 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6147,c,av);}
/* eval.scm:496: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6148 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6149,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6153,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:483: ##sys#current-environment961 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6151 in a6148 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6153,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6156,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:483: ##sys#current-environment961 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6154 in k6151 in a6148 in k6107 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6156,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6172 in map-loop970 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6174,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6178,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6182,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:491: ##sys#eval/meta */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[78]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[78]+1);
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
tp(3,av2);}}

/* k6176 in k6172 in map-loop970 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6178,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t6=((C_word*)((C_word*)t0)[5])[1];
f_6207(t6,((C_word*)t0)[6],C_slot(((C_word*)t0)[7],C_fix(1)));}

/* k6180 in k6172 in map-loop970 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6182,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6186,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:492: chicken.syntax#strip-syntax */
t3=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6184 in k6180 in k6172 in map-loop970 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6186,c,av);}
/* eval.scm:490: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6199 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6201,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6205,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:494: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6203 in k6199 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6205,c,av);}
t2=((C_word*)t0)[2];
/* eval.scm:485: scheme#append */
t3=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* map-loop970 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6207(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6207,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6174,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:489: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
tp(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6259 in map-loop1005 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6261,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_SCHEME_FALSE,t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_6379(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k6263 in map-loop1005 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6265,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6269,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:506: chicken.syntax#strip-syntax */
t3=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_u_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k6267 in k6263 in map-loop1005 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6269,c,av);}
/* eval.scm:504: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6284,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6287,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6377,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:508: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6287(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_6287,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6288,a[2]=t1,a[3]=((C_word)li113),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[80]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6352,a[2]=t2,a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp);
t5=(
  f_6352(t4,((C_word*)t0)[2])
);
t6=C_fast_retrieve(lf[9]);
t7=t1;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_TRUE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6307,a[2]=t8,a[3]=t10,a[4]=t6,a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6324,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li116),tmp=(C_word)a,a+=8,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6342,a[2]=t8,a[3]=t6,a[4]=((C_word)li117),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:513: ##sys#dynamic-wind */
t14=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=((C_word*)t0)[8];
av2[2]=t11;
av2[3]=t12;
av2[4]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}

/* g1034 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static C_word f_6288(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_set_car(C_i_cdr(t1),((C_word*)t0)[2]));}

/* a6306 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6307(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6307,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* eval.scm:513: ##sys#current-environment1042 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6311(2,av2);}}}

/* k6309 in a6306 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6311,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6315,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:513: ##sys#current-environment1042 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6313 in k6309 in a6306 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6315,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6318,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:513: ##sys#current-environment1042 */
t5=((C_word*)t2)[5];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}

/* k6316 in k6313 in k6309 in a6306 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6318,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6323 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6324,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6332,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_i_cddr(((C_word*)t0)[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6340,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:515: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6330 in a6323 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6332,c,av);}
/* eval.scm:514: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6338 in a6323 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6340,c,av);}
/* eval.scm:515: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* a6341 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6342,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6346,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:513: ##sys#current-environment1042 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6344 in a6341 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6346,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6349,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:513: ##sys#current-environment1042 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6347 in k6344 in a6341 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6349,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* for-each-loop1033 in k6285 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static C_word f_6352(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=(
/* eval.scm:509: g1034 */
  f_6288(((C_word*)t0)[2],C_slot(t1,C_fix(0)))
);
t4=C_slot(t1,C_fix(1));
t1=t4;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* k6375 in k6282 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6377,c,av);}
/* eval.scm:508: scheme#append */
t2=*((C_word*)lf[22]+1);{
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

/* map-loop1005 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6379(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_6379,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6261,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6265,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:505: ##sys#eval/meta */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[78]);
C_word av2[3];
av2[0]=*((C_word*)lf[78]+1);
av2[1]=t6;
av2[2]=C_i_cadr(t3);
tp(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6426,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6470,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:522: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6429(2,av2);}}}

/* k6427 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6429,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6432,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:524: ##sys#put/restore! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[43]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[43]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[44];
av2[4]=lf[86];
tp(5,av2);}}

/* k6430 in k6427 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6432,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6435,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6453,a[2]=t3,a[3]=((C_word*)t2)[7],a[4]=((C_word*)t2)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:526: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[85]);
C_word *av2=av;
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t4;
tp(2,av2);}}

/* k6433 in k6430 in k6427 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_6435,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6445,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:530: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6436 in k6433 in k6430 in k6427 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6438,c,av);}
/* eval.scm:532: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],lf[82],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6443 in k6433 in k6430 in k6427 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6445,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:531: ##sys#eval/meta */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[78]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[78]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6447 in k6443 in k6433 in k6430 in k6427 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6449,c,av);}
/* eval.scm:528: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[83]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[83]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k6451 in k6430 in k6427 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6453,c,av);}
/* eval.scm:525: ##sys#register-syntax-export */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* k6468 in k6424 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6470,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(C_i_not(t2))){
/* eval.scm:523: ##sys#error */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[0];
av2[3]=lf[87];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6429(2,av2);}}}

/* k6490 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6492,c,av);}
/* eval.scm:538: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6498 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6500,c,av);}
/* eval.scm:539: ##sys#canonicalize-body */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[21]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[21]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k6534 in map-loop1075 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6536,c,av);}
/* eval.scm:552: chicken.syntax#strip-syntax */
t2=C_fast_retrieve(lf[33]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k6546 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6548,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li119),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:549: ##sys#with-module-aliases */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}

/* a6549 in k6546 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6550,c,av);}
a=C_alloc(3);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[23],t2);
/* eval.scm:555: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3944(t4,t1,t3,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* map-loop1075 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6564(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6564,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6536,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:551: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word av2[5];
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t5;
av2[2]=lf[95];
av2[3]=t4;
av2[4]=lf[96];
tp(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6587 in map-loop1075 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6589,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6564(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6605(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_6605,c,av);}
a=C_alloc(26);
t2=C_i_cadr(t1);
t3=C_i_caddr(t1);
t4=C_eqp(C_SCHEME_TRUE,t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6614,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t4;
f_6614(2,av2);}}
else{
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6819,a[2]=t2,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp);
t11=C_u_i_cdr(t1);
t12=C_u_i_cdr(t11);
t13=C_u_i_car(t12);
t14=C_i_check_list_2(t13,lf[53]);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6876,a[2]=t8,a[3]=t16,a[4]=t10,a[5]=t9,a[6]=((C_word)li130),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_6876(t18,t5,t13);}}

/* k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6614,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6617,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6812,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:575: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[85]);
C_word *av2=av;
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6617(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6617,c,av);}
a=C_alloc(14);
t2=C_fast_retrieve(lf[85]);
t3=C_fast_retrieve(lf[9]);
t4=C_fast_retrieve(lf[98]);
t5=C_fast_retrieve(lf[99]);
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6620,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t2,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[7],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:578: ##sys#register-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[107]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[107]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}

/* k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6620,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=C_fast_retrieve(lf[100]);
t4=C_mutate(((C_word *)t0)+3,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6623,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:583: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[99]);
C_word *av2=av;
av2[0]=*((C_word*)lf[99]+1);
av2[1]=t5;
tp(2,av2);}}

/* k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6623(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(41,c,4)))){
C_save_and_reclaim((void *)f_6623,c,av);}
a=C_alloc(41);
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t2)[3];
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=t1;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_TRUE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6628,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,a[6]=t12,a[7]=((C_word*)t2)[4],a[8]=((C_word*)t2)[5],a[9]=((C_word*)t2)[6],a[10]=((C_word*)t2)[7],a[11]=((C_word)li121),tmp=(C_word)a,a+=12,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6684,a[2]=((C_word*)t2)[8],a[3]=((C_word*)t2)[9],a[4]=((C_word*)t2)[10],a[5]=((C_word*)t2)[11],a[6]=((C_word*)t2)[12],a[7]=((C_word)li126),tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6780,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[5],a[8]=((C_word*)t2)[6],a[9]=((C_word*)t2)[7],a[10]=((C_word)li127),tmp=(C_word)a,a+=11,tmp);
/* eval.scm:577: ##sys#dynamic-wind */
t16=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t16;
av2[1]=((C_word*)t2)[13];
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}

/* a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6628,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=C_SCHEME_UNDEFINED,a[10]=((C_word*)t0)[8],a[11]=C_SCHEME_UNDEFINED,a[12]=((C_word*)t0)[9],a[13]=C_SCHEME_UNDEFINED,a[14]=((C_word*)t0)[10],a[15]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:577: ##sys#current-module1150 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_6632(2,av2);}}}

/* k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6632,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+15,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6635,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* eval.scm:577: ##sys#current-environment1151 */
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_6635(2,av2);}}}

/* k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6635,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+13,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6638,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t2)[6])[1])){
/* eval.scm:577: ##sys#macro-environment1152 */
t5=((C_word*)t2)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t2)[4])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t2)[4])[1];
f_6638(2,av2);}}}

/* k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_6638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6638,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+11,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6641,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t2)[6])[1])){
/* eval.scm:577: ##sys#module-alias-environment1153 */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t2)[5])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t2)[5])[1];
f_6641(2,av2);}}}

/* k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_6641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6641,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6645,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:577: ##sys#current-module1150 */
t5=((C_word*)t2)[14];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in ... */
static void C_ccall f_6645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6645,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6649,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],tmp=(C_word)a,a+=15,tmp);
/* eval.scm:577: ##sys#current-environment1151 */
t5=((C_word*)t2)[12];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k6647 in k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in ... */
static void C_ccall f_6649(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6649,c,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6653,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:577: ##sys#macro-environment1152 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6651 in k6647 in k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in ... */
static void C_ccall f_6653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6653,c,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6657,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:577: ##sys#module-alias-environment1153 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6655 in k6651 in k6647 in k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in ... */
static void C_ccall f_6657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6657,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6660,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:577: ##sys#current-module1150 */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6658 in k6655 in k6651 in k6647 in k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in ... */
static void C_ccall f_6660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6660,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:577: ##sys#current-environment1151 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6661 in k6658 in k6655 in k6651 in k6647 in k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in ... */
static void C_ccall f_6663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6663,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:577: ##sys#macro-environment1152 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6664 in k6661 in k6658 in k6655 in k6651 in k6647 in k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in ... */
static void C_ccall f_6666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6666,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6669,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:577: ##sys#module-alias-environment1153 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6667 in k6664 in k6661 in k6658 in k6655 in k6651 in k6647 in k6643 in k6639 in k6636 in k6633 in k6630 in a6627 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in ... */
static void C_ccall f_6669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6669,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6684,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6690,a[2]=t0,a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:584: ##sys#with-property-restore */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[106]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[106]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6690(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6690,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_i_cdddr(((C_word*)t2)[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6700,a[2]=((C_word*)t2)[3],a[3]=t5,a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word)li124),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_6700(t7,t1,t3,C_SCHEME_END_OF_LIST);}

/* loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6700(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,7)))){
C_save_and_reclaim_args((void *)trf_6700,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6710,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:588: reverse */
t5=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6776,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:603: compile */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3944(t6,t5,C_u_i_car(t2),C_SCHEME_END_OF_LIST,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}}

/* k6708 in loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_6710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6710,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6713,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6761,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:589: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[85]);
C_word *av2=av;
av2[0]=*((C_word*)lf[85]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6711 in k6708 in loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_6713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6713,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6757,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:590: chicken.internal#module-requirement */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6714 in k6711 in k6708 in loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in ... */
static void C_ccall f_6716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6716,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6717,a[2]=((C_word*)t0)[2],a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_6717 in k6714 in k6711 in k6708 in loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in ... */
static void C_ccall f_6717(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6717,c,av);}
a=C_alloc(7);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6723,a[2]=t4,a[3]=t2,a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6723(t6,t1,((C_word*)t0)[2]);}

/* loop2 */
static void f_6723(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6723,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=*((C_word*)lf[101]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:596: g1207 */
t6=t4;{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
/* eval.scm:596: g1210 */
t4=C_u_i_car(t2);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}}

/* k6744 in loop2 */
static void C_ccall f_6746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6746,c,av);}
/* eval.scm:598: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6723(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6755 in k6711 in k6708 in loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in ... */
static void C_ccall f_6757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6757,c,av);}
/* eval.scm:590: ##sys#provide */
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

/* k6759 in k6708 in loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_6761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6761,c,av);}
/* eval.scm:589: ##sys#finalize-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[104]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6774 in loop in a6689 in a6683 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_6776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6776,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* eval.scm:601: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6700(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2);}

/* a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6780,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6784,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[4],a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[5],a[9]=t1,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:577: ##sys#current-module1150 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6784,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6787,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:577: ##sys#current-environment1151 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k6785 in k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6787,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6790,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:577: ##sys#macro-environment1152 */
t5=((C_word*)t2)[11];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k6788 in k6785 in k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_6790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6790,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6793,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:577: ##sys#module-alias-environment1153 */
t5=((C_word*)t2)[10];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k6791 in k6788 in k6785 in k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_6793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_6793,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6796,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=t1,a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:577: ##sys#current-module1150 */
t4=((C_word*)t2)[13];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k6794 in k6791 in k6788 in k6785 in k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in ... */
static void C_ccall f_6796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6796,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:577: ##sys#current-environment1151 */
t3=((C_word*)t0)[13];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6797 in k6794 in k6791 in k6788 in k6785 in k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in ... */
static void C_ccall f_6799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6799,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6802,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:577: ##sys#macro-environment1152 */
t3=((C_word*)t0)[12];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6800 in k6797 in k6794 in k6791 in k6788 in k6785 in k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in ... */
static void C_ccall f_6802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_6802,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6805,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:577: ##sys#module-alias-environment1153 */
t3=((C_word*)t0)[11];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[8])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k6803 in k6800 in k6797 in k6794 in k6791 in k6788 in k6785 in k6782 in a6779 in k6621 in k6618 in k6615 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in ... */
static void C_ccall f_6805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6805,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k6810 in k6612 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6812,c,av);}
if(C_truep(t1)){
/* eval.scm:576: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[108];
av2[3]=lf[109];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_6617(2,av2);}}}

/* g1118 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6819(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6819,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6832,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6843,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
t5=t3;
f_6832(t5,(
  f_6843(t2)
));}
else{
t4=t3;
f_6832(t4,C_SCHEME_FALSE);}}}

/* k6830 in g1118 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6832(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_6832,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* eval.scm:571: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word av2[6];
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[108];
av2[3]=lf[110];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}}

/* loop in g1118 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static C_word f_6843(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
if(C_truep(C_i_symbolp(t3))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* map-loop1112 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_6876(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6876,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:562: g1118 */
t4=((C_word*)t0)[4];
f_6819(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6899 in map-loop1112 in k6603 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6901,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6876(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6927 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_6929,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:610: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3944(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k6961 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6963,c,av);}
/* eval.scm:617: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],lf[114],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k6987 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_6989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_6989,c,av);}
/* eval.scm:622: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7008 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7010,c,av);}
/* eval.scm:626: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],lf[120],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_7039(C_word t0,C_word t1){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,7)))){
C_save_and_reclaim_args((void *)trf_7039,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
/* eval.scm:632: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],lf[123],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[124]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* eval.scm:635: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word av2[4];
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
av2[2]=lf[126];
av2[3]=((C_word*)t0)[9];
tp(4,av2);}}
else{
t3=C_eqp(((C_word*)t0)[8],lf[127]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[128]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7074,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:639: rename */
t6=((C_word*)((C_word*)t0)[10])[1];
f_3693(t6,t5,lf[129]);}
else{
t5=C_eqp(((C_word*)t0)[8],lf[130]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7087,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t5)){
t7=t6;
f_7087(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[8],lf[139]);
if(C_truep(t7)){
t8=t6;
f_7087(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[8],lf[140]);
if(C_truep(t8)){
t9=t6;
f_7087(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[8],lf[141]);
if(C_truep(t9)){
t10=t6;
f_7087(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[8],lf[142]);
if(C_truep(t10)){
t11=t6;
f_7087(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[8],lf[143]);
if(C_truep(t11)){
t12=t6;
f_7087(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[8],lf[144]);
if(C_truep(t12)){
t13=t6;
f_7087(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[8],lf[145]);
if(C_truep(t13)){
t14=t6;
f_7087(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[8],lf[146]);
if(C_truep(t14)){
t15=t6;
f_7087(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[8],lf[147]);
t16=t6;
f_7087(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[8],lf[148])));}}}}}}}}}}}}}

/* k7049 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7051,c,av);}
/* eval.scm:636: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],lf[125],((C_word*)t0)[4],C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7072 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_7074,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
/* eval.scm:639: compile */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3944(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_7087(C_word t0,C_word t1){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,7)))){
C_save_and_reclaim_args((void *)trf_7087,2,t0,t1);}
a=C_alloc(25);
if(C_truep(t1)){
/* eval.scm:646: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word av2[4];
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[131];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}
else{
t2=C_eqp(((C_word*)t0)[4],lf[132]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7107,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:649: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[2];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t3=C_eqp(((C_word*)t0)[4],lf[133]);
if(C_truep(t3)){
/* eval.scm:652: compile */
t4=((C_word*)((C_word*)t0)[9])[1];
f_3944(t4,((C_word*)t0)[2],C_i_cadddr(((C_word*)t0)[3]),((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[11]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[134]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7151,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:656: chicken.syntax#strip-syntax */
t6=C_fast_retrieve(lf[33]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_cdddr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_a_i_cons(&a,2,((C_word*)t0)[4],C_fast_retrieve(lf[138]));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7163,a[2]=t9,a[3]=t7,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7168,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li133),tmp=(C_word)a,a+=8,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7178,a[2]=t7,a[3]=t9,a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp);
/* eval.scm:666: ##sys#dynamic-wind */
t13=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t13;
av2[1]=((C_word*)t0)[2];
av2[2]=t10;
av2[3]=t11;
av2[4]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}}}}}

/* k7105 in k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7107,c,av);}
/* eval.scm:649: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7519(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* g1291 in k7149 in k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_7133(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7133,3,t0,t1,t2);}
/* eval.scm:658: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3944(t3,t1,C_i_cadr(t2),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k7149 in k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7151(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7151,c,av);}
a=C_alloc(9);
t2=C_i_assq(lf[135],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7133,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li131),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:656: g1291 */
t4=t3;
f_7133(t4,((C_word*)t0)[8],t2);}
else{
/* eval.scm:660: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=lf[136];
av2[3]=lf[137];
av2[4]=((C_word*)t0)[9];
tp(5,av2);}}}

/* a7162 in k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7163,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[138]));
t3=C_mutate((C_word*)lf[138]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7167 in k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7168,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7176,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:667: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7174 in a7167 in k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7176,c,av);}
/* eval.scm:667: compile-call */
t2=((C_word*)((C_word*)t0)[2])[1];
f_7519(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);}

/* a7177 in k7085 in k7037 in k4277 in k4262 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7178,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[138]));
t3=C_mutate((C_word*)lf[138]+1 /* (set! ##sys#syntax-context ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7360 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7361,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[151]));
t3=C_mutate((C_word*)lf[151]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a7365 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7366,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7374,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:221: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7372 in a7365 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7374,c,av);}
/* eval.scm:221: chicken.syntax#expand */
t2=C_fast_retrieve(lf[152]);{
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

/* a7375 in k4256 in k4253 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7376,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[151]));
t3=C_mutate((C_word*)lf[151]+1 /* (set! chicken.syntax#expansion-result-hook ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7380 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7382,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7389,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:671: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7387 in k7380 in k4233 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7389,c,av);}
t2=((C_word*)t0)[2];
/* eval.scm:671: compile-call */
t3=((C_word*)((C_word*)t2)[2])[1];
f_7519(t3,((C_word*)t2)[3],((C_word*)t2)[4],((C_word*)t2)[5],((C_word*)t2)[6],((C_word*)t2)[7]);}

/* k7416 in k3949 in compile in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7418,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_4235(2,av2);}}
else{
t2=C_i_vectorp(((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_4235(2,av2);}}
else{
/* eval.scm:212: ##sys#srfi-4-vector? */
t3=C_fast_retrieve(lf[153]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* doloop1309 in a5932 */
static void f_7447(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_7447,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=C_eqp(t2,C_fix(0));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,t4);
t8=C_i_setslot(t5,C_fix(1),t7);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t7=C_fixnum_difference(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7476,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t7,a[5]=t8,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t10=C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t10)){
/* eval.scm:680: ##sys#error */
t11=*((C_word*)lf[25]+1);{
C_word av2[5];
av2[0]=t11;
av2[1]=t9;
av2[2]=lf[67];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}
else{
t12=t1;
t13=t7;
t14=t8;
t15=C_slot(t4,C_fix(1));
t16=t4;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
t5=t16;
goto loop;}}}

/* k7474 in doloop1309 in a5932 */
static void C_ccall f_7476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7476,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7447(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* loop in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static C_word f_7493(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(t2);}
else{
if(C_truep(C_i_pairp(t1))){
t4=C_slot(t1,C_fix(1));
t5=C_fixnum_plus(t2,C_fix(1));
t1=t4;
t2=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_7519(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,7)))){
C_save_and_reclaim_args((void *)trf_7519,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7526,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_closurep(t6))){
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7849,a[2]=t6,a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp);
f_7526(2,av2);}}
else{
/* eval.scm:697: compile */
t8=((C_word*)((C_word*)t0)[3])[1];
f_3944(t8,t7,C_slot(t2,C_fix(0)),t3,C_SCHEME_FALSE,t4,t5,C_SCHEME_FALSE);}}

/* k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_7526,c,av);}
a=C_alloc(15);
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7493,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
t4=(
  f_7493(t2,C_fix(0))
);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7535,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[8],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* eval.scm:701: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7535(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,7)))){
C_save_and_reclaim((void *)f_7535,c,av);}
a=C_alloc(31);
t2=(C_truep(t1)?t1:lf[156]);
switch(((C_word*)t0)[2]){
case C_SCHEME_FALSE:
/* eval.scm:703: ##sys#syntax-error/context */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[157];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}
case C_fix(0):
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7554,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word)li140),tmp=(C_word)a,a+=10,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}
case C_fix(1):
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7573,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:707: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3944(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
case C_fix(2):
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:711: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3944(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
case C_fix(3):
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7637,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=C_SCHEME_UNDEFINED,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:716: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3944(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
case C_fix(4):
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
/* eval.scm:722: compile */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3944(t4,t3,C_slot(((C_word*)t0)[11],C_fix(0)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_FALSE);
default:
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7728,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word)li145),tmp=(C_word)a,a+=7,tmp);
t8=C_i_check_list_2(((C_word*)t0)[11],lf[53]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7801,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li149),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_7801(t13,t9,((C_word*)t0)[11]);}}

/* f_7554 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7554,c,av);}
a=C_alloc(8);
t3=(
/* eval.scm:705: emit-trace-info */
  f_3816(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7561,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7559 */
static void C_ccall f_7561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7561,c,av);}
/* eval.scm:704: g1348 */
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k7571 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7573,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word)li141),tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7574 in k7571 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7574,c,av);}
a=C_alloc(10);
t3=(
/* eval.scm:709: emit-trace-info */
  f_3816(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7581,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7579 */
static void C_ccall f_7581(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7581,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7588,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];{
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

/* k7586 in k7579 */
static void C_ccall f_7588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7588,c,av);}
/* eval.scm:708: g1353 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* k7599 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,7)))){
C_save_and_reclaim((void *)f_7601,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7604,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:712: compile */
t3=((C_word*)((C_word*)t0)[10])[1];
f_3944(t3,t2,C_u_i_list_ref(((C_word*)t0)[11],C_fix(1)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7602 in k7599 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7604,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7605,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li142),tmp=(C_word)a,a+=12,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7605 in k7602 in k7599 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7605,c,av);}
a=C_alloc(11);
t3=(
/* eval.scm:714: emit-trace-info */
  f_3816(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7612,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7610 */
static void C_ccall f_7612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7612,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7619,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
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

/* k7617 in k7610 */
static void C_ccall f_7619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_7619,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[4];{
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

/* k7621 in k7617 in k7610 */
static void C_ccall f_7623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7623,c,av);}
/* eval.scm:713: g1359 */
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
av2[3]=t1;
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k7635 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_7637,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+8,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7640,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:717: compile */
t4=((C_word*)((C_word*)t0)[11])[1];
f_3944(t4,t3,C_u_i_list_ref(((C_word*)t0)[12],C_fix(1)),((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[6],C_SCHEME_FALSE);}

/* k7638 in k7635 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_7640,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7643,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=t1,a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:718: compile */
t4=((C_word*)((C_word*)t2)[11])[1];
f_3944(t4,t3,C_u_i_list_ref(((C_word*)t2)[12],C_fix(2)),((C_word*)t2)[7],C_SCHEME_FALSE,((C_word*)t2)[3],((C_word*)t2)[6],C_SCHEME_FALSE);}

/* k7641 in k7638 in k7635 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7643,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word)li143),tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[11];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_7644 in k7641 in k7638 in k7635 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7644,c,av);}
a=C_alloc(12);
t3=(
/* eval.scm:720: emit-trace-info */
  f_3816(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7651,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t5=((C_word*)t0)[11];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7649 */
static void C_ccall f_7651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7651,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7658,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7656 in k7649 */
static void C_ccall f_7658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7658,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
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

/* k7660 in k7656 in k7649 */
static void C_ccall f_7662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7662,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7664 in k7660 in k7656 in k7649 */
static void C_ccall f_7666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7666,c,av);}
/* eval.scm:719: g1366 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t1;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k7679 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_7681,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+10,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7684,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:723: compile */
t4=((C_word*)((C_word*)t0)[12])[1];
f_3944(t4,t3,C_u_i_list_ref(((C_word*)t0)[13],C_fix(1)),((C_word*)t0)[8],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[7],C_SCHEME_FALSE);}

/* k7682 in k7679 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_7684,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7687,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:724: compile */
t5=((C_word*)((C_word*)t2)[12])[1];
f_3944(t5,t4,C_u_i_list_ref(((C_word*)t2)[13],C_fix(2)),((C_word*)t2)[8],C_SCHEME_FALSE,((C_word*)t2)[4],((C_word*)t2)[7],C_SCHEME_FALSE);}

/* k7685 in k7682 in k7679 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,7)))){
C_save_and_reclaim((void *)f_7687,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7690,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=t1,a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],tmp=(C_word)a,a+=13,tmp);
/* eval.scm:725: compile */
t4=((C_word*)((C_word*)t2)[12])[1];
f_3944(t4,t3,C_u_i_list_ref(((C_word*)t2)[13],C_fix(3)),((C_word*)t2)[8],C_SCHEME_FALSE,((C_word*)t2)[4],((C_word*)t2)[7],C_SCHEME_FALSE);}

/* k7688 in k7685 in k7682 in k7679 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_7690,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7691,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word)li144),tmp=(C_word)a,a+=14,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7691 in k7688 in k7685 in k7682 in k7679 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7691,c,av);}
a=C_alloc(13);
t3=(
/* eval.scm:727: emit-trace-info */
  f_3816(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7698,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7696 */
static void C_ccall f_7698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7698,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7705,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7703 in k7696 */
static void C_ccall f_7705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7705,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
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

/* k7707 in k7703 in k7696 */
static void C_ccall f_7709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7709,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7711 in k7707 in k7703 in k7696 */
static void C_ccall f_7713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7713,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7717,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7715 in k7711 in k7707 in k7703 in k7696 */
static void C_ccall f_7717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7717,c,av);}
/* eval.scm:726: g1374 */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=t1;
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}

/* g1386 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_7728(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_7728,3,t0,t1,t2);}
/* eval.scm:729: compile */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3944(t3,t1,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k7736 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7738,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word)li148),tmp=(C_word)a,a+=11,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_7739 in k7736 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7739,c,av);}
a=C_alloc(10);
t3=(
/* eval.scm:731: emit-trace-info */
  f_3816(C_a_i(&a,5),((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2)
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7750,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7748 */
static void C_ccall f_7750(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7750,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7755,a[2]=((C_word*)t0)[2],a[3]=((C_word)li146),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[53]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7765,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7767,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li147),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7767(t12,t8,((C_word*)t0)[3]);}

/* g1414 in k7748 */
static void f_7755(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_7755,3,t0,t1,t2);}
t3=t2;{
C_word av2[3];
av2[0]=t3;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7763 in k7748 */
static void C_ccall f_7765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7765,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop1408 in k7748 */
static void f_7767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7767,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:732: g1414 */
t4=((C_word*)t0)[4];
f_7755(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7790 in map-loop1408 in k7748 */
static void C_ccall f_7792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7792,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7767(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1380 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_7801(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7801,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* eval.scm:729: g1386 */
t4=((C_word*)t0)[4];
f_7728(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7824 in map-loop1380 in k7533 in k7524 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7826,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7801(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* f_7849 in compile-call in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7849,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7866 in chicken.eval#compile-to-closure in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_7868,c,av);}
/* eval.scm:734: compile */
t2=((C_word*)((C_word*)t0)[2])[1];
f_3944(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_FALSE,C_fixnum_greaterp(t1,C_fix(0)),((C_word*)t0)[6],((C_word*)t0)[7]);}

/* ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_7918,c,av);}
a=C_alloc(8);
t3=C_fast_retrieve(lf[85]);
t4=C_fast_retrieve(lf[98]);
t5=C_fast_retrieve(lf[9]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7922,a[2]=C_SCHEME_UNDEFINED,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:740: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[158]);
C_word *av2=av;
av2[0]=*((C_word*)lf[158]+1);
av2[1]=t6;
tp(2,av2);}}

/* k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7922,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7925,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:741: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[159]);
C_word *av2=av;
av2[0]=*((C_word*)lf[159]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7925(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_7925,c,av);}
a=C_alloc(31);
t2=((C_word*)t0)[2];
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t2)[2];
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t1;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_TRUE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7930,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,a[6]=((C_word*)t2)[3],a[7]=((C_word*)t2)[4],a[8]=((C_word*)t2)[5],a[9]=((C_word)li153),tmp=(C_word)a,a+=10,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7973,a[2]=((C_word*)t2)[6],a[3]=((C_word)li156),tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8005,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[5],a[8]=((C_word)li157),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:739: ##sys#dynamic-wind */
t14=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t14;
av2[1]=((C_word*)t2)[7];
av2[2]=t11;
av2[3]=t12;
av2[4]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(5,av2);}}

/* a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_7930,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=C_SCHEME_UNDEFINED,a[9]=((C_word*)t0)[7],a[10]=C_SCHEME_UNDEFINED,a[11]=((C_word*)t0)[8],a[12]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:739: ##sys#current-module1450 */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_7934(2,av2);}}}

/* k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7934,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+12,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7937,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
/* eval.scm:739: ##sys#macro-environment1451 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
f_7937(2,av2);}}}

/* k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7937,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t2)[5])[1])){
/* eval.scm:739: ##sys#current-environment1452 */
t5=((C_word*)t2)[7];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)((C_word*)t2)[4])[1];
av2[3]=C_SCHEME_TRUE;
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t5))(5,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t2)[4])[1];
f_7940(2,av2);}}}

/* k7938 in k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7940,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+8,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7944,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:739: ##sys#current-module1450 */
t5=((C_word*)t2)[11];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k7942 in k7938 in k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7944,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7948,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],tmp=(C_word)a,a+=12,tmp);
/* eval.scm:739: ##sys#macro-environment1451 */
t5=((C_word*)t2)[9];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k7946 in k7942 in k7938 in k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7948,c,av);}
a=C_alloc(11);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7952,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:739: ##sys#current-environment1452 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k7950 in k7946 in k7942 in k7938 in k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7952,c,av);}
a=C_alloc(8);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7955,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* eval.scm:739: ##sys#current-module1450 */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k7953 in k7950 in k7946 in k7942 in k7938 in k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7955,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:739: ##sys#macro-environment1451 */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7956 in k7953 in k7950 in k7946 in k7942 in k7938 in k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7958,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7961,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:739: ##sys#current-environment1452 */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k7959 in k7956 in k7953 in k7950 in k7946 in k7942 in k7938 in k7935 in k7932 in a7929 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7961,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a7972 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7973,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7979,a[2]=((C_word*)t0)[2],a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7988,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:742: scheme#dynamic-wind */
t4=C_fast_retrieve(lf[160]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=*((C_word*)lf[161]+1);
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* a7978 in a7972 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_7979,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7983,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:745: compile-to-closure */
f_3631(t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_a_i_list(&a,4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE));}

/* k7981 in a7978 in a7972 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7983,c,av);}
/* eval.scm:744: g1484 */
t2=t1;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a7987 in a7972 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7988,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7992,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8003,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:756: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2=av;
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7990 in a7987 in a7972 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7992,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:757: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[98]);
C_word *av2=av;
av2[0]=*((C_word*)lf[98]+1);
av2[1]=t2;
tp(2,av2);}}

/* k7997 in k7990 in a7987 in a7972 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_7999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7999,c,av);}
/* eval.scm:757: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[158]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[158]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k8001 in a7987 in a7972 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8003,c,av);}
/* eval.scm:756: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[159]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[159]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a8004 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_8005,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8009,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:739: ##sys#current-module1450 */
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k8007 in a8004 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8009,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8012,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:739: ##sys#macro-environment1451 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k8010 in k8007 in a8004 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8012,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8015,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:739: ##sys#current-environment1452 */
t5=((C_word*)t2)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k8013 in k8010 in k8007 in a8004 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8015,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8018,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=t1,a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],tmp=(C_word)a,a+=11,tmp);
/* eval.scm:739: ##sys#current-module1450 */
t4=((C_word*)t2)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[2])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t4))(5,av2);}}

/* k8016 in k8013 in k8010 in k8007 in a8004 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_8018,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:739: ##sys#macro-environment1451 */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8019 in k8016 in k8013 in k8010 in k8007 in a8004 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_8021,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* eval.scm:739: ##sys#current-environment1452 */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_TRUE;
((C_proc)C_fast_retrieve_proc(t3))(5,av2);}}

/* k8022 in k8019 in k8016 in k8013 in k8010 in k8007 in a8004 in k7923 in k7920 in ##sys#eval/meta in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8024,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8031(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8031,c,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[162]+1 /* (set! chicken.eval#eval-handler ...) */,t1);
t3=C_mutate((C_word*)lf[163]+1 /* (set! scheme#eval ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8033,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[164]+1 /* (set! chicken.eval#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8043,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11562,a[2]=((C_word)li268),tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11630,a[2]=((C_word)li269),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:797: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t5;
av2[2]=t6;
av2[3]=t7;
C_call_with_values(4,av2);}}

/* scheme#eval in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_8033,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8041,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:787: eval-handler */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[162]);
C_word *av2=av;
av2[0]=*((C_word*)lf[162]+1);
av2[1]=t4;
tp(2,av2);}}

/* k8039 in scheme#eval in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8041,c,av);}{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
C_apply(5,av2);}}

/* chicken.eval#module-environment in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8043,c,av);}
/* eval.scm:792: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[165]);
C_word *av2=av;
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8050(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8050,c,av);}
a=C_alloc(19);
t2=C_mutate((C_word*)lf[69]+1 /* (set! ##sys#decompose-lambda-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8052,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t3=C_a_i_record5(&a,5,lf[168],lf[169],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=C_mutate((C_word*)lf[170]+1 /* (set! scheme#interaction-environment ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8137,a[2]=t3,a[3]=((C_word)li164),tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11546,a[2]=((C_word)li262),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:844: chicken.base#set-record-printer! */
t7=C_fast_retrieve(lf[356]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=lf[168];
av2[3]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* ##sys#decompose-lambda-list in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8052(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_8052,c,av);}
a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8055,a[2]=t2,a[3]=((C_word)li161),tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8065,a[2]=t3,a[3]=t4,a[4]=t6,a[5]=((C_word)li162),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8065(t8,t1,t2,C_SCHEME_END_OF_LIST,C_fix(0));}

/* err in ##sys#decompose-lambda-list in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_8055(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_8055,2,t0,t1);}
t2=C_set_block_item(lf[166] /* ##sys#syntax-error-culprit */,0,C_SCHEME_FALSE);
/* eval.scm:829: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word av2[4];
av2[0]=*((C_word*)lf[71]+1);
av2[1]=t1;
av2[2]=lf[167];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* loop in ##sys#decompose-lambda-list in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_8065(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_8065,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8079,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:832: reverse */
t7=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
if(C_truep(C_i_not(C_blockp(t2)))){
/* eval.scm:833: err */
t6=((C_word*)t0)[3];
f_8055(t6,t1);}
else{
if(C_truep(C_symbolp(t2))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8098,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,t2,t3);
/* eval.scm:834: reverse */
t8=*((C_word*)lf[105]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
if(C_truep(C_i_not(C_pairp(t2)))){
/* eval.scm:835: err */
t6=((C_word*)t0)[3];
f_8055(t6,t1);}
else{
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(0));
t8=C_a_i_cons(&a,2,t7,t3);
/* eval.scm:836: loop */
t10=t1;
t11=t6;
t12=t8;
t13=C_fixnum_plus(t4,C_fix(1));
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}}}}}

/* k8077 in loop in ##sys#decompose-lambda-list in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8079,c,av);}
/* eval.scm:832: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* k8096 in loop in ##sys#decompose-lambda-list in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8098,c,av);}
/* eval.scm:834: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}

/* scheme#interaction-environment in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8137,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_8141,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8144,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* eval.scm:850: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[165]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t2;
av2[2]=lf[351];
av2[3]=lf[352];
tp(4,av2);}}

/* k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8144,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8147,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:851: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[165]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t3;
av2[2]=lf[349];
av2[3]=lf[350];
tp(4,av2);}}

/* k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8147,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8150,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:852: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[165]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t4;
av2[2]=lf[347];
av2[3]=lf[348];
tp(4,av2);}}

/* k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8150,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8153,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:853: chicken.module#module-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[165]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[165]+1);
av2[1]=t4;
av2[2]=lf[345];
av2[3]=lf[346];
tp(4,av2);}}

/* k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_8153,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8155,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11540,a[2]=((C_word*)t2)[4],a[3]=t1,a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* eval.scm:879: strip */
f_8155(t4,C_slot(((C_word*)t2)[2],C_fix(3)));}

/* strip in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_8155(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8155,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[171]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8164,a[2]=t5,a[3]=((C_word)li165),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8164(t7,t1,t2);}

/* foldr1610 in strip in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_8164(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8164,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8195,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8193 in foldr1610 in strip in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8195,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep((C_truep(C_eqp(t2,lf[172]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[173]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[174]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[175]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[176]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[95]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[177]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[178]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[179]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[180]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[181]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[182]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[108]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[183]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[184]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[86]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))?t1:C_a_i_cons(&a,2,((C_word*)t0)[2],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scheme#scheme-report-environment in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8213,c,av);}
t3=C_i_check_fixnum_2(t2,lf[186]);
switch(t2){
case C_fix(4):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(5):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
default:
/* eval.scm:890: ##sys#error */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[186];
av2[3]=lf[187];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* scheme#null-environment in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8238,c,av);}
t3=C_i_check_fixnum_2(t2,lf[189]);
switch(t2){
case C_fix(4):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
case C_fix(5):
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}
default:
/* eval.scm:900: ##sys#error */
t4=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[189];
av2[3]=lf[190];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_8264(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8264,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[192] /* (set! chicken.load#constant2175 ...) */,lf[193]);
t3=C_mutate(&lf[194] /* (set! chicken.load#constant2178 ...) */,lf[195]);
t4=C_mutate(&lf[196] /* (set! chicken.load#constant2208 ...) */,lf[197]);
t5=C_mutate(&lf[198] /* (set! chicken.load#constant2217 ...) */,lf[199]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11512,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:959: chicken.platform#software-type */
t8=C_fast_retrieve(lf[344]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* loop in chicken.load#provided? in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void f_8641(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8641,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8663,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:82: pred */
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k8661 in loop in chicken.load#provided? in k10294 in k10285 in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_8663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8663,c,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* mini-srfi-1.scm:83: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_8641(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_9554(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9554,2,t0,t1);}
a=C_alloc(6);
t2=C_mutate(&lf[200] /* (set! chicken.load#load-library-extension ...) */,t1);
t3=C_mutate((C_word*)lf[201]+1 /* (set! ##sys#load-dynamic-extension ...) */,C_retrieve2(lf[196],C_text("chicken.load#constant2208")));
t4=C_mutate((C_word*)lf[202]+1 /* (set! chicken.load#core-library? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9557,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9571,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:972: chicken.platform#software-version */
t6=C_fast_retrieve(lf[335]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.load#core-library? in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_9557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9557,c,av);}
t3=C_i_memq(t2,C_retrieve2(lf[194],C_text("chicken.load#constant2178")));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t3:C_i_assq(t2,C_retrieve2(lf[192],C_text("chicken.load#constant2175"))));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_9571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9571,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9574,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(t1,lf[332]);
if(C_truep(t3)){
t4=t2;
f_9574(t4,lf[333]);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11469,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11473,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[247]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_NAME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_9574(C_word t0,C_word t1){
C_word tmp;
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_9574,2,t0,t1);}
a=C_alloc(15);
t2=C_mutate(&lf[203] /* (set! chicken.load#default-dynamic-load-libraries ...) */,t1);
t3=C_mutate((C_word*)lf[102]+1 /* (set! ##sys#provide ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9576,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[204]+1 /* (set! ##sys#provided? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9579,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t5=(C_truep(C_fast_retrieve(lf[205]))?lf[206]:lf[207]);
t6=C_mutate(&lf[208] /* (set! chicken.load#path-separators ...) */,t5);
t7=C_mutate(&lf[209] /* (set! chicken.load#path-separator-index/right ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9586,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[210] /* (set! chicken.load#make-relative-pathname ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9624,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9669,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1007: scheme#make-parameter */
t10=C_fast_retrieve(lf[329]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=C_i_debug_modep();
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}

/* ##sys#provide in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_9576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,1)))){
C_save_and_reclaim((void *)f_9576,c,av);}
a=C_alloc(8);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_provide(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#provided? in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_9579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9579,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_providedp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.load#path-separator-index/right in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_9586(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9586,2,t1,t2);}
a=C_alloc(4);
t3=C_i_string_length(t2);
t4=C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9596,a[2]=t2,a[3]=((C_word)li172),tmp=(C_word)a,a+=4,tmp);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
  f_9596(t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in chicken.load#path-separator-index/right in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static C_word f_9596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
t2=C_i_string_ref(((C_word*)t0)[2],t1);
t3=C_retrieve2(lf[208],C_text("chicken.load#path-separators"));
if(C_truep(C_u_i_memq(t2,C_retrieve2(lf[208],C_text("chicken.load#path-separators"))))){
return(t1);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),t1))){
t5=C_fixnum_difference(t1,C_fix(1));
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.load#make-relative-pathname in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void f_9624(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9624,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9628,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_stringp(t2))){
t5=C_i_string_length(t3);
if(C_truep(C_i_fixnum_positivep(t5))){
t6=C_i_string_ref(t3,C_fix(0));
t7=C_retrieve2(lf[208],C_text("chicken.load#path-separators"));
if(C_truep(C_i_not(C_u_i_memq(t6,C_retrieve2(lf[208],C_text("chicken.load#path-separators")))))){
/* eval.scm:1001: path-separator-index/right */
f_9586(t4,t2);}
else{
t8=t4;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_9628(2,av2);}}}
else{
t6=t4;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_9628(2,av2);}}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_9628(2,av2);}}}

/* k9626 in chicken.load#make-relative-pathname in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_9628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9628,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1002: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[213]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[213]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(0);
av2[4]=t1;
tp(5,av2);}}}

/* k9639 in k9626 in chicken.load#make-relative-pathname in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_9641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9641,c,av);}
/* eval.scm:1002: scheme#string-append */
t2=*((C_word*)lf[211]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[212];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 */
static void C_ccall f_9669(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_9669,c,av);}
a=C_alloc(29);
t2=C_mutate((C_word*)lf[214]+1 /* (set! chicken.load#load-verbose ...) */,t1);
t3=C_set_block_item(lf[215] /* ##sys#current-load-filename */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[216] /* ##sys#dload-disabled */,0,C_SCHEME_FALSE);
t5=C_mutate((C_word*)lf[217]+1 /* (set! chicken.load#set-dynamic-load-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9673,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[226] /* (set! chicken.load#c-toplevel ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9773,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t7=*((C_word*)lf[163]+1);
t8=C_fast_retrieve(lf[234]);
t9=C_mutate(&lf[235] /* (set! chicken.load#load/internal ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9787,a[2]=t7,a[3]=t8,a[4]=((C_word)li192),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate(&lf[263] /* (set! chicken.load#evaluator ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10199,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[264]+1 /* (set! scheme#load ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10219,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[265]+1 /* (set! chicken.load#load-relative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10238,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[266]+1 /* (set! chicken.load#load-noisily ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10260,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10287,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_mk_bool(C_USES_SONAME))){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11457,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=C_fix((C_word)C_BINARY_VERSION);
/* ##sys#fixnum->string */
t17=C_fast_retrieve(lf[331]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t17;
av2[1]=t15;
av2[2]=t16;
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t17+1)))(4,av2);}}
else{
t15=t14;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_retrieve2(lf[200],C_text("chicken.load#load-library-extension"));
f_10287(2,av2);}}}

/* chicken.load#set-dynamic-load-mode! in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void C_ccall f_9673(C_word c,C_word *av){
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9673,c,av);}
a=C_alloc(20);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?t2:C_a_i_list1(&a,1,t2));
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9680,a[2]=t1,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9685,a[2]=t11,a[3]=t8,a[4]=t6,a[5]=((C_word)li175),tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_9685(t13,t9,t4);}

/* k9678 in chicken.load#set-dynamic-load-mode! in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_9680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9680,c,av);}
/* eval.scm:1027: ##sys#set-dlopen-flags! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[218]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[218]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)((C_word*)t0)[3])[1];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
tp(4,av2);}}

/* loop in chicken.load#set-dynamic-load-mode! in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void f_9685(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_9685,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9698,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(t3,lf[219]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t6=C_eqp(t3,lf[220]);
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t7=C_eqp(t3,lf[221]);
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_FALSE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
t8=C_eqp(t3,lf[222]);
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
/* eval.scm:1026: loop */
t11=t1;
t12=C_slot(t2,C_fix(1));
t1=t11;
t2=t12;
goto loop;}
else{
/* eval.scm:1025: ##sys#signal-hook */
t9=*((C_word*)lf[223]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t4;
av2[2]=lf[224];
av2[3]=lf[225];
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9696 in loop in chicken.load#set-dynamic-load-mode! in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_9698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9698,c,av);}
/* eval.scm:1026: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9685(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9765 in chicken.load#c-toplevel in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_9767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9767,c,av);}
/* eval.scm:1032: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[231];
tp(4,av2);}}

/* k9769 in chicken.load#c-toplevel in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_9771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9771,c,av);}
/* eval.scm:1033: chicken.internal#string->c-identifier */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[232]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[232]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* chicken.load#c-toplevel in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void f_9773(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_9773,3,t1,t2,t3);}
a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9781,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9785,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_not(t2))){
/* eval.scm:1037: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word av2[4];
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t4;
av2[2]=lf[229];
av2[3]=lf[230];
tp(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9767,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9771,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1033: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[233]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[233]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}}

/* k9779 in chicken.load#c-toplevel in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_9781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9781,c,av);}
/* eval.scm:1037: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[227]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[227]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k9783 in chicken.load#c-toplevel in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_9785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9785,c,av);}
/* eval.scm:1037: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[229];
av2[3]=t1;
tp(4,av2);}}

/* chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in k3574 in ... */
static void f_9787(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,3)))){
C_save_and_reclaim_args((void *)trf_9787,5,t0,t1,t2,t3,t4);}
a=C_alloc(24);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_FALSE:C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_nullp(t12);
t14=(C_truep(t13)?C_SCHEME_FALSE:C_i_car(t12));
t15=C_i_nullp(t12);
t16=(C_truep(t15)?C_SCHEME_END_OF_LIST:C_i_cdr(t12));
t17=C_i_nullp(t16);
t18=(C_truep(t17)?C_SCHEME_FALSE:C_i_car(t16));
t19=C_i_nullp(t16);
t20=(C_truep(t19)?C_SCHEME_END_OF_LIST:C_i_cdr(t16));
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=(C_truep(t3)?t3:((C_word*)t0)[2]);
t30=C_set_block_item(t22,0,t29);
t31=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9830,a[2]=t18,a[3]=((C_word)li178),tmp=(C_word)a,a+=4,tmp));
t32=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9865,a[2]=t26,a[3]=t28,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=t22,a[8]=t6,a[9]=t14,a[10]=t2,a[11]=t24,tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_not(C_fast_retrieve(lf[216])))){
/* eval.scm:1067: chicken.platform#feature? */
t33=C_fast_retrieve(lf[261]);{
C_word av2[3];
av2[0]=t33;
av2[1]=t32;
av2[2]=lf[262];
((C_proc)(void*)(*((C_word*)t33+1)))(3,av2);}}
else{
t33=t32;{
C_word av2[2];
av2[0]=t33;
av2[1]=C_SCHEME_FALSE;
f_9865(2,av2);}}}

/* k9823 */
static void C_ccall f_9825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9825,c,av);}
if(C_truep(t1)){
/* eval.scm:1060: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[227]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[227]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[237];
tp(4,av2);}}
else{
/* eval.scm:1057: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[238];
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}}

/* f_9830 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void f_9830(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_9830,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9834,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9861,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9825,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1055: path-separator-index/right */
f_9586(t5,t2);}

/* k9832 */
static void C_ccall f_9834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_9834,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9837,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9857,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1061: c-toplevel */
f_9773(t3,((C_word*)t0)[3],lf[237]);}

/* k9835 in k9832 */
static void C_ccall f_9837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9837,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1063: c-toplevel */
f_9773(t2,C_SCHEME_FALSE,lf[237]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k9851 in k9835 in k9832 */
static void C_ccall f_9853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9853,c,av);}
/* eval.scm:1063: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9855 in k9832 */
static void C_ccall f_9857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9857,c,av);}
/* eval.scm:1061: ##sys#dload */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9859 */
static void C_ccall f_9861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9861,c,av);}
/* eval.scm:1060: ##sys#make-c-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[227]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[227]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[237];
tp(4,av2);}}

/* k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in k3577 in ... */
static void C_ccall f_9865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9865,c,av);}
a=C_alloc(8);
t2=C_set_block_item(((C_word*)t0)[2],0,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9869,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10094,a[2]=t3,a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1070: scheme#port? */
t5=C_fast_retrieve(lf[260]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in k3580 in ... */
static void C_ccall f_9869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9869,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[3])+1,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9872,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10091,a[2]=t4,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1081: load-verbose */
t6=C_fast_retrieve(lf[214]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in k3583 in ... */
static void C_ccall f_9872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9872,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9875,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t2)[3])[1])){
if(C_truep(((C_word*)((C_word*)t2)[2])[1])){
/* eval.scm:1087: dload */
t4=((C_word*)((C_word*)t2)[11])[1];
f_9830(t4,t3,((C_word*)((C_word*)t2)[3])[1]);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_9875(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_9875(2,av2);}}}

/* k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in k3627 in ... */
static void C_ccall f_9875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_9875,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9883,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word)li191),tmp=(C_word)a,a+=10,tmp);
t4=t3;
f_9883(t4,t2);}}

/* k9876 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void C_ccall f_9878(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9878,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in k8029 in ... */
static void f_9883(C_word t0,C_word t1){
C_word tmp;
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_9883,2,t0,t1);}
a=C_alloc(34);
t2=C_SCHEME_TRUE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)((C_word*)t0)[2])[1];
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9889,a[2]=t9,a[3]=t11,a[4]=t13,a[5]=t3,a[6]=t5,a[7]=t7,a[8]=((C_word)li179),tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9898,a[2]=t0,a[3]=((C_word)li189),tmp=(C_word)a,a+=4,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10060,a[2]=t3,a[3]=t5,a[4]=t7,a[5]=t9,a[6]=t11,a[7]=t13,a[8]=((C_word)li190),tmp=(C_word)a,a+=9,tmp);
/* eval.scm:1090: ##sys#dynamic-wind */
t17=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t17;
av2[1]=t1;
av2[2]=t14;
av2[3]=t15;
av2[4]=t16;
((C_proc)(void*)(*((C_word*)t17+1)))(5,av2);}}

/* a9888 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_9889(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9889,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[239]));
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_fast_retrieve(lf[215]));
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_fast_retrieve(lf[19]));
t5=C_mutate((C_word*)lf[239]+1 /* (set! ##sys#read-error-with-line-number ...) */,((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate((C_word*)lf[215]+1 /* (set! ##sys#current-load-filename ...) */,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate((C_word*)lf[19]+1 /* (set! ##sys#current-source-filename ...) */,((C_word*)((C_word*)t0)[7])[1]);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in k8048 in ... */
static void C_ccall f_9898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9898,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9902,a[2]=((C_word*)t2)[3],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[2],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)((C_word*)t2)[2])[1])){
/* eval.scm:1093: open-input-file */
t4=*((C_word*)lf[250]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[2])[1];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t2)[8];
f_9902(2,av2);}}}

/* k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in k8139 in ... */
static void C_ccall f_9902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9902,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9905,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1094: case-sensitive */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in k8142 in ... */
static void C_ccall f_9905(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_9905,c,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fast_retrieve(lf[240]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9910,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=((C_word)li180),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9917,a[2]=t5,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word)li187),tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10048,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=t4,a[5]=((C_word)li188),tmp=(C_word)a,a+=6,tmp);
/* eval.scm:1096: ##sys#dynamic-wind */
t9=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t2)[9];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a9909 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9910,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9915,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1097: case-sensitive */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9913 in a9909 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in ... */
static void C_ccall f_9915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9915,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in k8145 in ... */
static void C_ccall f_9917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9917,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* eval.scm:1099: scheme#peek-char */
t3=*((C_word*)lf[248]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in k8148 in ... */
static void C_ccall f_9921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_9921,c,av);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_eqp(t1,C_make_character(127));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10039,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10043,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[247]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_dlerror);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9924(2,av2);}}}

/* k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in k8151 in ... */
static void C_ccall f_9924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9924,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9927,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1107: read-with-source-info */
t3=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in k11538 in ... */
static void C_ccall f_9927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_9927,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9932,a[2]=t4,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word)li186),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_9932(t6,((C_word*)t2)[8],t1);}

/* doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in k11530 in ... */
static void f_9932(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9932,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9942,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[8])){
/* eval.scm:1110: printer */
t4=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_9942(2,av2);}}}}

/* k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in k11522 in ... */
static void C_ccall f_9942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_9942,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9954,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word)li183),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9988,a[2]=((C_word*)t0)[9],a[3]=((C_word)li185),tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1111: ##sys#call-with-values */{
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

/* k9943 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in ... */
static void C_ccall f_9945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9945,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* eval.scm:1108: read-with-source-info */
t3=((C_word*)t0)[4];{
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

/* k9950 in k9943 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in ... */
static void C_ccall f_9952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9952,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9932(t2,((C_word*)t0)[3],t1);}

/* a9953 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in ... */
static void C_ccall f_9954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9954,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9961,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* eval.scm:1114: ##sys#start-timer */
t3=*((C_word*)lf[243]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* eval.scm:1115: evalproc */
t2=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[4];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}}

/* k9959 in a9953 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in ... */
static void C_ccall f_9961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9961,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li181),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9972,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1114: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9965 in k9959 in a9953 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in ... */
static void C_ccall f_9966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9966,c,av);}
/* eval.scm:1114: evalproc */
t2=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}

/* a9971 in k9959 in a9953 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in ... */
static void C_ccall f_9972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +7,c,2)))){
C_save_and_reclaim((void*)f_9972,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+7);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9976,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9983,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* eval.scm:1114: ##sys#stop-timer */
t5=*((C_word*)lf[242]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k9974 in a9971 in k9959 in a9953 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in ... */
static void C_ccall f_9976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9976,c,av);}{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
C_apply_values(3,av2);}}

/* k9981 in a9971 in k9959 in a9953 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in ... */
static void C_ccall f_9983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9983,c,av);}
/* eval.scm:1114: ##sys#display-times */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[241]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[241]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a9987 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in k8262 in k11514 in ... */
static void C_ccall f_9988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +6,c,3)))){
C_save_and_reclaim((void*)f_9988,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+6);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
C_word t6;
if(C_truep(((C_word*)t0)[2])){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10005,a[2]=t4,a[3]=((C_word)li184),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_10005(t6,t1,t2);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9995 in for-each-loop2395 in a9987 in k9940 in doloop2385 in k9925 in k9922 in k9919 in a9916 in k9903 in k9900 in a9897 in a9882 in k9873 in k9870 in k9867 in k9863 in chicken.load#load/internal in k9667 in k9572 in k9569 in k9552 in ... */
static void C_ccall f_9997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9997,c,av);}
/* eval.scm:1121: newline */
t2=*((C_word*)lf[244]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_eval_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("eval"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_eval_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2340))){
C_save(t1);
C_rereclaim2(2340*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,360);
lf[0]=C_h_intern(&lf[0],4, C_text("eval"));
lf[1]=C_h_intern(&lf[1],13, C_text("chicken.eval#"));
lf[2]=C_h_intern(&lf[2],21, C_text("##sys#unbound-in-eval"));
lf[3]=C_h_intern(&lf[3],22, C_text("##sys#eval-debug-level"));
lf[5]=C_h_intern(&lf[5],9, C_text("##sys#get"));
lf[6]=C_h_intern(&lf[6],18, C_text("##core#macro-alias"));
lf[7]=C_h_intern(&lf[7],13, C_text("scheme#values"));
lf[8]=C_h_intern(&lf[8],14, C_text("scheme#symbol?"));
lf[9]=C_h_intern(&lf[9],25, C_text("##sys#current-environment"));
lf[10]=C_h_intern(&lf[10],9, C_text("frameinfo"));
lf[11]=C_h_intern(&lf[11],20, C_text("##sys#current-thread"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\074\163\171\156\164\141\170\076\000"));
lf[13]=C_h_intern(&lf[13],30, C_text("chicken.syntax#get-line-number"));
lf[14]=C_h_intern(&lf[14],22, C_text("##sys#make-lambda-info"));
lf[15]=C_h_intern(&lf[15],24, C_text("scheme#get-output-string"));
lf[16]=C_h_intern(&lf[16],12, C_text("scheme#write"));
lf[17]=C_h_intern(&lf[17],25, C_text("scheme#open-output-string"));
lf[18]=C_h_intern(&lf[18],21, C_text("##sys#decorate-lambda"));
lf[19]=C_h_intern(&lf[19],29, C_text("##sys#current-source-filename"));
lf[20]=C_h_intern(&lf[20],18, C_text("##sys#dynamic-wind"));
lf[21]=C_h_intern(&lf[21],23, C_text("##sys#canonicalize-body"));
lf[22]=C_h_intern(&lf[22],13, C_text("scheme#append"));
lf[23]=C_h_intern(&lf[23],12, C_text("##core#begin"));
lf[24]=C_h_intern(&lf[24],29, C_text("##sys#include-forms-from-file"));
lf[25]=C_h_intern(&lf[25],11, C_text("##sys#error"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\165\156\142\157\165\156\144\040\166\141\162\151\141\142\154\145\000"));
lf[27]=C_h_intern(&lf[27],34, C_text("##sys#symbol-has-toplevel-binding?"));
lf[28]=C_h_intern(&lf[28],23, C_text("##sys#alias-global-hook"));
lf[29]=C_h_intern(&lf[29],26, C_text("##sys#syntax-error/context"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\151\154\154\145\147\141\154\040\156\157\156\055\141\164\157\155\151\143\040\157\142\152\145\143\164\000"));
lf[31]=C_h_intern(&lf[31],34, C_text("##sys#update-line-number-database!"));
lf[32]=C_h_intern(&lf[32],12, C_text("##core#quote"));
lf[33]=C_h_intern(&lf[33],27, C_text("chicken.syntax#strip-syntax"));
lf[34]=C_h_intern(&lf[34],13, C_text("##core#syntax"));
lf[35]=C_h_intern(&lf[35],12, C_text("##core#check"));
lf[36]=C_h_intern(&lf[36],16, C_text("##core#immutable"));
lf[37]=C_h_intern(&lf[37],16, C_text("##core#undefined"));
lf[38]=C_h_intern(&lf[38],9, C_text("##core#if"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[41]=C_h_intern(&lf[41],33, C_text("##core#ensure-toplevel-definition"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[43]=C_h_intern(&lf[43],18, C_text("##sys#put/restore!"));
lf[44]=C_h_intern(&lf[44],14, C_text("##sys#override"));
lf[45]=C_h_intern(&lf[45],5, C_text("value"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\071\164\157\160\154\145\166\145\154\040\144\145\146\151\156\151\164\151\157\156\040\151\156\040\156\157\156\055\164\157\160\154\145\166\145\154\040\143\157\156\164\145\170\164\040\146\157\162\040\166\141\162\151\141\142\154\145\000"));
lf[47]=C_h_intern(&lf[47],11, C_text("##core#set!"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\145\156\166\151\162\157\156\155\145\156\164\040\151\163\040\156\157\164\040\155\165\164\141\142\154\145\000"));
lf[49]=C_h_intern(&lf[49],21, C_text("##sys#notices-enabled"));
lf[50]=C_h_intern(&lf[50],12, C_text("##sys#notice"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\141\163\163\151\147\156\155\145\156\164\040\164\157\040\151\155\160\157\162\164\145\144\040\166\141\154\165\145\040\142\151\156\144\151\156\147\000"));
lf[52]=C_h_intern(&lf[52],10, C_text("##core#let"));
lf[53]=C_h_intern(&lf[53],3, C_text("map"));
lf[54]=C_h_intern(&lf[54],12, C_text("scheme#cadar"));
lf[55]=C_h_intern(&lf[55],13, C_text("scheme#cadadr"));
lf[56]=C_h_intern(&lf[56],17, C_text("##sys#make-vector"));
lf[57]=C_h_intern(&lf[57],15, C_text("##sys#extend-se"));
lf[58]=C_h_intern(&lf[58],19, C_text("chicken.base#gensym"));
lf[59]=C_h_intern(&lf[59],14, C_text("##core#letrec*"));
lf[60]=C_h_intern(&lf[60],12, C_text("##sys#append"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[62]=C_h_intern(&lf[62],13, C_text("##core#letrec"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[64]=C_h_intern(&lf[64],13, C_text("##core#lambda"));
lf[65]=C_h_intern(&lf[65],1, C_text("?"));
lf[66]=C_h_intern(&lf[66],12, C_text("##sys#vector"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\142\141\144\040\141\162\147\165\155\145\156\164\040\143\157\165\156\164\000"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\142\141\144\040\141\162\147\165\155\145\156\164\040\143\157\165\156\164\000"));
lf[69]=C_h_intern(&lf[69],27, C_text("##sys#decompose-lambda-list"));
lf[70]=C_h_intern(&lf[70],33, C_text("##sys#expand-extended-lambda-list"));
lf[71]=C_h_intern(&lf[71],18, C_text("##sys#syntax-error"));
lf[72]=C_h_intern(&lf[72],27, C_text("##sys#extended-lambda-list?"));
lf[73]=C_h_intern(&lf[73],18, C_text("##sys#check-syntax"));
lf[74]=C_h_intern(&lf[74],6, C_text("lambda"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[76]=C_h_intern(&lf[76],17, C_text("##core#let-syntax"));
lf[77]=C_h_intern(&lf[77],24, C_text("##sys#ensure-transformer"));
lf[78]=C_h_intern(&lf[78],15, C_text("##sys#eval/meta"));
lf[79]=C_h_intern(&lf[79],20, C_text("##core#letrec-syntax"));
lf[80]=C_h_intern(&lf[80],8, C_text("for-each"));
lf[81]=C_h_intern(&lf[81],20, C_text("##core#define-syntax"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[83]=C_h_intern(&lf[83],30, C_text("##sys#extend-macro-environment"));
lf[84]=C_h_intern(&lf[84],28, C_text("##sys#register-syntax-export"));
lf[85]=C_h_intern(&lf[85],20, C_text("##sys#current-module"));
lf[86]=C_h_intern(&lf[86],6, C_text("syntax"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\145\156\166\151\162\157\156\155\145\156\164\040\151\163\040\156\157\164\040\155\165\164\141\142\154\145\000"));
lf[88]=C_h_intern(&lf[88],29, C_text("##core#define-compiler-syntax"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[90]=C_h_intern(&lf[90],26, C_text("##core#let-compiler-syntax"));
lf[91]=C_h_intern(&lf[91],14, C_text("##core#include"));
lf[92]=C_h_intern(&lf[92],17, C_text("##core#include-ci"));
lf[93]=C_h_intern(&lf[93],23, C_text("##core#let-module-alias"));
lf[94]=C_h_intern(&lf[94],25, C_text("##sys#with-module-aliases"));
lf[95]=C_h_intern(&lf[95],7, C_text("functor"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016"));
lf[97]=C_h_intern(&lf[97],13, C_text("##core#module"));
lf[98]=C_h_intern(&lf[98],23, C_text("##sys#macro-environment"));
lf[99]=C_h_intern(&lf[99],30, C_text("##sys#module-alias-environment"));
lf[100]=C_h_intern(&lf[100],31, C_text("##sys#initial-macro-environment"));
lf[101]=C_h_intern(&lf[101],21, C_text("##sys#undefined-value"));
lf[102]=C_h_intern(&lf[102],13, C_text("##sys#provide"));
lf[103]=C_h_intern(&lf[103],35, C_text("chicken.internal#module-requirement"));
lf[104]=C_h_intern(&lf[104],21, C_text("##sys#finalize-module"));
lf[105]=C_h_intern(&lf[105],14, C_text("scheme#reverse"));
lf[106]=C_h_intern(&lf[106],27, C_text("##sys#with-property-restore"));
lf[107]=C_h_intern(&lf[107],21, C_text("##sys#register-module"));
lf[108]=C_h_intern(&lf[108],6, C_text("module"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\155\157\144\165\154\145\163\040\155\141\171\040\156\157\164\040\142\145\040\156\145\163\164\145\144\000"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\151\156\166\141\154\151\144\040\145\170\160\157\162\164\040\163\171\156\164\141\170\000"));
lf[111]=C_h_intern(&lf[111],18, C_text("##core#loop-lambda"));
lf[112]=C_h_intern(&lf[112],14, C_text("##core#provide"));
lf[113]=C_h_intern(&lf[113],25, C_text("##core#require-for-syntax"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[115]=C_h_intern(&lf[115],27, C_text("chicken.load#load-extension"));
lf[116]=C_h_intern(&lf[116],14, C_text("##core#require"));
lf[117]=C_h_intern(&lf[117],21, C_text("##sys#process-require"));
lf[118]=C_h_intern(&lf[118],26, C_text("##core#elaborationtimeonly"));
lf[119]=C_h_intern(&lf[119],25, C_text("##core#elaborationtimetoo"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[121]=C_h_intern(&lf[121],21, C_text("##core#compiletimetoo"));
lf[122]=C_h_intern(&lf[122],22, C_text("##core#compiletimeonly"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[124]=C_h_intern(&lf[124],14, C_text("##core#declare"));
lf[125]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\144\145\143\154\141\162\141\164\151\157\156\163\040\141\162\145\040\151\147\156\157\162\145\144\040\151\156\040\151\156\164\145\162\160\162\145\164\145\144\040\143\157\144\145\000"));
lf[127]=C_h_intern(&lf[127],20, C_text("##core#define-inline"));
lf[128]=C_h_intern(&lf[128],22, C_text("##core#define-constant"));
lf[129]=C_h_intern(&lf[129],6, C_text("define"));
lf[130]=C_h_intern(&lf[130],16, C_text("##core#primitive"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\143\141\156\156\157\164\040\145\166\141\154\165\141\164\145\040\143\157\155\160\151\154\145\162\055\163\160\145\143\151\141\154\055\146\157\162\155\000"));
lf[132]=C_h_intern(&lf[132],10, C_text("##core#app"));
lf[133]=C_h_intern(&lf[133],10, C_text("##core#the"));
lf[134]=C_h_intern(&lf[134],15, C_text("##core#typecase"));
lf[135]=C_h_intern(&lf[135],4, C_text("else"));
lf[136]=C_h_intern(&lf[136],17, C_text("compiler-typecase"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\070\156\157\040\140\145\154\163\145\055\143\154\141\165\163\145\047\040\151\156\040\165\156\162\145\163\157\154\166\145\144\040\140\143\157\155\160\151\154\145\162\055\164\171\160\145\143\141\163\145\047\040\146\157\162\155\000"));
lf[138]=C_h_intern(&lf[138],20, C_text("##sys#syntax-context"));
lf[139]=C_h_intern(&lf[139],13, C_text("##core#inline"));
lf[140]=C_h_intern(&lf[140],22, C_text("##core#inline_allocate"));
lf[141]=C_h_intern(&lf[141],21, C_text("##core#foreign-lambda"));
lf[142]=C_h_intern(&lf[142],30, C_text("##core#define-foreign-variable"));
lf[143]=C_h_intern(&lf[143],31, C_text("##core#define-external-variable"));
lf[144]=C_h_intern(&lf[144],19, C_text("##core#let-location"));
lf[145]=C_h_intern(&lf[145],24, C_text("##core#foreign-primitive"));
lf[146]=C_h_intern(&lf[146],15, C_text("##core#location"));
lf[147]=C_h_intern(&lf[147],22, C_text("##core#foreign-lambda*"));
lf[148]=C_h_intern(&lf[148],26, C_text("##core#define-foreign-type"));
lf[149]=C_h_intern(&lf[149],15, C_text("##core#callunit"));
lf[150]=C_h_intern(&lf[150],27, C_text("##core#local-specialization"));
lf[151]=C_h_intern(&lf[151],36, C_text("chicken.syntax#expansion-result-hook"));
lf[152]=C_h_intern(&lf[152],21, C_text("chicken.syntax#expand"));
lf[153]=C_h_intern(&lf[153],20, C_text("##sys#srfi-4-vector?"));
lf[154]=C_h_intern(&lf[154],30, C_text("chicken.bytevector#bytevector?"));
lf[155]=C_h_intern(&lf[155],24, C_text("chicken.keyword#keyword?"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\074\145\166\141\154\076\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\155\141\154\146\157\162\155\145\144\040\145\170\160\162\145\163\163\151\157\156\000"));
lf[158]=C_h_intern(&lf[158],28, C_text("##sys#meta-macro-environment"));
lf[159]=C_h_intern(&lf[159],30, C_text("##sys#current-meta-environment"));
lf[160]=C_h_intern(&lf[160],19, C_text("scheme#dynamic-wind"));
lf[161]=C_h_intern(&lf[161],17, C_text("chicken.base#void"));
lf[162]=C_h_intern(&lf[162],25, C_text("chicken.eval#eval-handler"));
lf[163]=C_h_intern(&lf[163],11, C_text("scheme#eval"));
lf[164]=C_h_intern(&lf[164],31, C_text("chicken.eval#module-environment"));
lf[165]=C_h_intern(&lf[165],33, C_text("chicken.module#module-environment"));
lf[166]=C_h_intern(&lf[166],26, C_text("##sys#syntax-error-culprit"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\151\154\154\145\147\141\154\040\154\141\155\142\144\141\055\154\151\163\164\040\163\171\156\164\141\170\000"));
lf[168]=C_h_intern(&lf[168],11, C_text("environment"));
lf[169]=C_h_intern(&lf[169],23, C_text("interaction-environment"));
lf[170]=C_h_intern(&lf[170],30, C_text("scheme#interaction-environment"));
lf[171]=C_h_intern(&lf[171],5, C_text("foldr"));
lf[172]=C_h_intern(&lf[172],11, C_text("cond-expand"));
lf[173]=C_h_intern(&lf[173],16, C_text("define-interface"));
lf[174]=C_h_intern(&lf[174],11, C_text("delay-force"));
lf[175]=C_h_intern(&lf[175],6, C_text("export"));
lf[176]=C_h_intern(&lf[176],13, C_text("export/rename"));
lf[177]=C_h_intern(&lf[177],14, C_text("define-library"));
lf[178]=C_h_intern(&lf[178],6, C_text("import"));
lf[179]=C_h_intern(&lf[179],17, C_text("import-for-syntax"));
lf[180]=C_h_intern(&lf[180],13, C_text("import-syntax"));
lf[181]=C_h_intern(&lf[181],24, C_text("import-syntax-for-syntax"));
lf[182]=C_h_intern(&lf[182],7, C_text("letrec*"));
lf[183]=C_h_intern(&lf[183],8, C_text("reexport"));
lf[184]=C_h_intern(&lf[184],15, C_text("require-library"));
lf[185]=C_h_intern(&lf[185],32, C_text("scheme#scheme-report-environment"));
lf[186]=C_h_intern(&lf[186],25, C_text("scheme-report-environment"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\165\156\163\165\160\160\157\162\164\145\144\040\163\143\150\145\155\145\040\162\145\160\157\162\164\040\145\156\166\151\162\157\156\155\145\156\164\040\166\145\162\163\151\157\156\000"));
lf[188]=C_h_intern(&lf[188],23, C_text("scheme#null-environment"));
lf[189]=C_h_intern(&lf[189],16, C_text("null-environment"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\165\156\163\165\160\160\157\162\164\145\144\040\156\165\154\154\040\145\156\166\151\162\157\156\155\145\156\164\040\166\145\162\163\151\157\156\000"));
lf[191]=C_h_intern(&lf[191],13, C_text("chicken.load#"));
lf[193]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\150\151\143\153\145\156\056\146\157\162\145\151\147\156\376\003\000\000\002\376\001\000\000\031\001\043\043\143\157\162\145\043\162\145\161\165\151\162\145\055\146\157\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\055\146\146\151\055\163\171\156\164\141\170\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\001\000\000\014\001\043\043\143\157\162\145\043\142\145\147\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\043\043\143\157\162\145\043\162\145\161\165\151\162\145\055\146\157\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\055\163\171\156\164\141\170\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\043\043\143\157\162\145\043\162\145\161\165\151\162\145\376\003\000\000\002\376\001\000\000\007\001\154\151\142\162\141\162\171\376\377\016\376\377\016\376\377\016"));
lf[195]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\055\146\146\151\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\014\001\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\001\000\000\017\001\144\141\164\141\055\163\164\162\165\143\164\165\162\145\163\376\003\000\000\002\376\001\000\000\017\001\144\145\142\165\147\147\145\162\055\143\154\151\145\156\164\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\003\000\000\002\376\001\000\000\014\001\145\166\141\154\055\155\157\144\165\154\145\163\376\003\000\000\002\376\001\000\000\006\001\145\170\160\141\156\144\376\003\000\000\002\376\001\000\000\006\001\145\170\164\162\141\163\376\003\000\000\002\376\001\000\000\004\001\146\151\154\145\376\003\000\000\002\376\001\000\000\010\001\151\156\164\145\162\156\141\154\376\003\000\000\002\376\001\000\000\007\001\151\162\162\145\147\145\170\376\003\000\000\002\376\001\000\000\007\001\154\151\142\162\141\162\171\376\003\000\000\002\376\001\000\000\007\001\154\157\154\145\166\145\154\376\003\000\000\002\376\001\000\000\010\001\160\141\164\150\156\141\155\145\376\003\000\000\002\376\001\000\000\004\001\160\157\162\164\376\003\000\000\002\376\001\000\000\005\001\160\157\163\151\170\376\003\000\000\002\376\001\000\000\010\001\160\162\157\146\151\154\145\162\376\003\000\000\002\376\001\000\000\013\001\162\145\141\144\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\004\001\162\145\160\154\376\003\000\000\002\376\001\000\000\011\001\163\143\150\145\144\165\154\145\162\376\003\000\000\002\376\001\000\000\006\001\163\162\146\151\055\064\376\003\000\000\002\376\001\000\000\003\001\164\143\160\376\003\000\000\002\376\001\000\000\005\001\162\067\154\151\142\376\377\016"));
lf[197]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\056\163\157\000"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\056\163\143\155\000"));
lf[201]=C_h_intern(&lf[201],28, C_text("##sys#load-dynamic-extension"));
lf[202]=C_h_intern(&lf[202],26, C_text("chicken.load#core-library?"));
lf[204]=C_h_intern(&lf[204],15, C_text("##sys#provided?"));
lf[205]=C_h_intern(&lf[205],22, C_text("##sys#windows-platform"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\057\376\377\016"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\057\376\377\016"));
lf[211]=C_h_intern(&lf[211],20, C_text("scheme#string-append"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[213]=C_h_intern(&lf[213],15, C_text("##sys#substring"));
lf[214]=C_h_intern(&lf[214],25, C_text("chicken.load#load-verbose"));
lf[215]=C_h_intern(&lf[215],27, C_text("##sys#current-load-filename"));
lf[216]=C_h_intern(&lf[216],20, C_text("##sys#dload-disabled"));
lf[217]=C_h_intern(&lf[217],35, C_text("chicken.load#set-dynamic-load-mode!"));
lf[218]=C_h_intern(&lf[218],23, C_text("##sys#set-dlopen-flags!"));
lf[219]=C_h_intern(&lf[219],6, C_text("global"));
lf[220]=C_h_intern(&lf[220],5, C_text("local"));
lf[221]=C_h_intern(&lf[221],4, C_text("lazy"));
lf[222]=C_h_intern(&lf[222],3, C_text("now"));
lf[223]=C_h_intern(&lf[223],17, C_text("##sys#signal-hook"));
lf[224]=C_h_intern(&lf[224],22, C_text("set-dynamic-load-mode!"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\151\156\166\141\154\151\144\040\144\171\156\141\155\151\143\055\154\157\141\144\040\155\157\144\145\000"));
lf[227]=C_h_intern(&lf[227],19, C_text("##sys#make-c-string"));
lf[228]=C_h_intern(&lf[228],19, C_text("##sys#string-append"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\103\137\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\164\157\160\154\145\166\145\154\000"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\137\164\157\160\154\145\166\145\154\000"));
lf[232]=C_h_intern(&lf[232],37, C_text("chicken.internal#string->c-identifier"));
lf[233]=C_h_intern(&lf[233],27, C_text("##sys#symbol->string/shared"));
lf[234]=C_h_intern(&lf[234],27, C_text("chicken.base#case-sensitive"));
lf[236]=C_h_intern(&lf[236],11, C_text("##sys#dload"));
lf[237]=C_h_intern(&lf[237],4, C_text("load"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\057\000"));
lf[239]=C_h_intern(&lf[239],33, C_text("##sys#read-error-with-line-number"));
lf[240]=C_h_intern(&lf[240],36, C_text("chicken.syntax#read-with-source-info"));
lf[241]=C_h_intern(&lf[241],19, C_text("##sys#display-times"));
lf[242]=C_h_intern(&lf[242],16, C_text("##sys#stop-timer"));
lf[243]=C_h_intern(&lf[243],17, C_text("##sys#start-timer"));
lf[244]=C_h_intern(&lf[244],14, C_text("scheme#newline"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\165\156\141\142\154\145\040\164\157\040\154\157\141\144\040\143\157\155\160\151\154\145\144\040\155\157\144\165\154\145\040\055\040\000"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\165\156\153\156\157\167\156\040\162\145\141\163\157\156\000"));
lf[247]=C_h_intern(&lf[247],19, C_text("##sys#peek-c-string"));
lf[248]=C_h_intern(&lf[248],16, C_text("scheme#peek-char"));
lf[249]=C_h_intern(&lf[249],23, C_text("scheme#close-input-port"));
lf[250]=C_h_intern(&lf[250],22, C_text("scheme#open-input-file"));
lf[251]=C_h_intern(&lf[251],25, C_text("chicken.base#flush-output"));
lf[252]=C_h_intern(&lf[252],14, C_text("scheme#display"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\040\056\056\056\012\000"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\073\040\154\157\141\144\151\156\147\040\000"));
lf[255]=C_h_intern_kw(&lf[255],10, C_text("type-error"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\160\157\162\164\040\157\162\040\163\164\162\151\156\147\000"));
lf[257]=C_h_intern_kw(&lf[257],10, C_text("file-error"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[259]=C_h_intern(&lf[259],18, C_text("##sys#file-exists?"));
lf[260]=C_h_intern(&lf[260],12, C_text("scheme#port?"));
lf[261]=C_h_intern(&lf[261],25, C_text("chicken.platform#feature?"));
lf[262]=C_h_intern_kw(&lf[262],5, C_text("dload"));
lf[264]=C_h_intern(&lf[264],11, C_text("scheme#load"));
lf[265]=C_h_intern(&lf[265],26, C_text("chicken.load#load-relative"));
lf[266]=C_h_intern(&lf[266],25, C_text("chicken.load#load-noisily"));
lf[267]=C_h_intern_kw(&lf[267],3, C_text("env"));
lf[268]=C_h_intern(&lf[268],17, C_text("##sys#get-keyword"));
lf[269]=C_h_intern_kw(&lf[269],7, C_text("printer"));
lf[270]=C_h_intern_kw(&lf[270],4, C_text("time"));
lf[271]=C_h_intern(&lf[271],35, C_text("chicken.load#dynamic-load-libraries"));
lf[272]=C_h_intern(&lf[272],22, C_text("chicken.load#load-unit"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\165\156\141\142\154\145\040\164\157\040\154\157\141\144\040\154\151\142\162\141\162\171\000"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\154\151\142\162\141\162\171\040\156\157\164\040\146\157\165\156\144\000"));
lf[275]=C_h_intern(&lf[275],12, C_text("load-library"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\040\056\056\056\012\000"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\073\040\154\157\141\144\151\156\147\040\154\151\142\162\141\162\171\040\000"));
lf[278]=C_h_intern(&lf[278],25, C_text("chicken.load#load-library"));
lf[279]=C_h_intern(&lf[279],27, C_text("scheme#call-with-input-file"));
lf[280]=C_h_intern(&lf[280],18, C_text("chicken.base#print"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\073\040\151\156\143\154\165\144\151\156\147\040\000"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\040\056\056\056\000"));
lf[283]=C_h_intern(&lf[283],7, C_text("include"));
lf[284]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\143\141\156\156\157\164\040\157\160\145\156\040\146\151\154\145\000"));
lf[285]=C_h_intern(&lf[285],30, C_text("##sys#resolve-include-filename"));
lf[286]=C_h_intern(&lf[286],16, C_text("##sys#setup-mode"));
lf[288]=C_h_intern(&lf[288],22, C_text("chicken.load#find-file"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[290]=C_h_intern(&lf[290],35, C_text("chicken.load#find-dynamic-extension"));
lf[291]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\002\056\000\376\377\016"));
lf[293]=C_h_intern(&lf[293],23, C_text("##sys#include-pathnames"));
lf[294]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\002\056\000\376\377\016"));
lf[295]=C_h_intern(&lf[295],21, C_text("scheme#symbol->string"));
lf[296]=C_h_intern(&lf[296],32, C_text("chicken.platform#repository-path"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\143\141\156\156\157\164\040\154\157\141\144\040\145\170\164\145\156\163\151\157\156\000"));
lf[298]=C_h_intern(&lf[298],20, C_text("chicken.load#require"));
lf[299]=C_h_intern(&lf[299],7, C_text("require"));
lf[300]=C_h_intern(&lf[300],20, C_text("chicken.load#provide"));
lf[301]=C_h_intern(&lf[301],7, C_text("provide"));
lf[302]=C_h_intern(&lf[302],22, C_text("chicken.load#provided?"));
lf[303]=C_h_intern(&lf[303],9, C_text("provided?"));
lf[304]=C_h_intern(&lf[304],6, C_text("static"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[308]=C_h_intern(&lf[308],37, C_text("chicken.condition#print-error-message"));
lf[309]=C_h_intern(&lf[309],40, C_text("chicken.condition#with-exception-handler"));
lf[310]=C_h_intern(&lf[310],37, C_text("scheme#call-with-current-continuation"));
lf[312]=C_h_intern(&lf[312],8, C_text("##sys#gc"));
lf[314]=C_h_intern(&lf[314],19, C_text("##sys#thread-yield!"));
lf[317]=C_h_intern(&lf[317],11, C_text("scheme#read"));
lf[318]=C_h_intern(&lf[318],24, C_text("scheme#open-input-string"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\105\162\162\157\162\072\040\156\157\164\040\145\156\157\165\147\150\040\162\157\157\155\040\146\157\162\040\162\145\163\165\154\164\040\163\164\162\151\156\147\000"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\116\157\040\145\162\162\157\162\000"));
lf[329]=C_h_intern(&lf[329],21, C_text("scheme#make-parameter"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[331]=C_h_intern(&lf[331],20, C_text("##sys#fixnum->string"));
lf[332]=C_h_intern(&lf[332],6, C_text("cygwin"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\015\143\171\147\143\150\151\143\153\145\156\055\060\000\376\377\016"));
lf[334]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\154\151\142\000"));
lf[335]=C_h_intern(&lf[335],33, C_text("chicken.platform#software-version"));
lf[336]=C_h_intern(&lf[336],7, C_text("windows"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\056\144\154\154\000"));
lf[338]=C_h_intern(&lf[338],6, C_text("macosx"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\056\144\171\154\151\142\000"));
lf[340]=C_h_intern(&lf[340],4, C_text("hpux"));
lf[341]=C_h_intern(&lf[341],4, C_text("hppa"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\056\163\154\000"));
lf[343]=C_h_intern(&lf[343],29, C_text("chicken.platform#machine-type"));
lf[344]=C_h_intern(&lf[344],30, C_text("chicken.platform#software-type"));
lf[345]=C_h_intern(&lf[345],16, C_text("scheme.r5rs-null"));
lf[346]=C_h_intern(&lf[346],18, C_text("null-environment/5"));
lf[347]=C_h_intern(&lf[347],16, C_text("scheme.r4rs-null"));
lf[348]=C_h_intern(&lf[348],18, C_text("null-environment/4"));
lf[349]=C_h_intern(&lf[349],11, C_text("scheme.r5rs"));
lf[350]=C_h_intern(&lf[350],27, C_text("scheme-report-environment/5"));
lf[351]=C_h_intern(&lf[351],11, C_text("scheme.r4rs"));
lf[352]=C_h_intern(&lf[352],27, C_text("scheme-report-environment/4"));
lf[353]=C_h_intern(&lf[353],18, C_text("##sys#write-char-0"));
lf[354]=C_h_intern(&lf[354],11, C_text("##sys#print"));
lf[355]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\043\074\145\156\166\151\162\157\156\155\145\156\164\040\000"));
lf[356]=C_h_intern(&lf[356],32, C_text("chicken.base#set-record-printer!"));
lf[357]=C_h_intern(&lf[357],10, C_text("##sys#put!"));
lf[358]=C_h_intern(&lf[358],39, C_text("chicken.internal#default-syntax-imports"));
lf[359]=C_h_intern(&lf[359],32, C_text("chicken.internal#default-imports"));
C_register_lf2(lf,360,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3576,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_modules_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[745] = {
{C_text("f12364:eval_2escm"),(void*)f12364},
{C_text("f_10005:eval_2escm"),(void*)f_10005},
{C_text("f_10015:eval_2escm"),(void*)f_10015},
{C_text("f_10039:eval_2escm"),(void*)f_10039},
{C_text("f_10043:eval_2escm"),(void*)f_10043},
{C_text("f_10048:eval_2escm"),(void*)f_10048},
{C_text("f_10052:eval_2escm"),(void*)f_10052},
{C_text("f_10060:eval_2escm"),(void*)f_10060},
{C_text("f_10079:eval_2escm"),(void*)f_10079},
{C_text("f_10082:eval_2escm"),(void*)f_10082},
{C_text("f_10085:eval_2escm"),(void*)f_10085},
{C_text("f_10091:eval_2escm"),(void*)f_10091},
{C_text("f_10094:eval_2escm"),(void*)f_10094},
{C_text("f_10109:eval_2escm"),(void*)f_10109},
{C_text("f_10112:eval_2escm"),(void*)f_10112},
{C_text("f_10115:eval_2escm"),(void*)f_10115},
{C_text("f_10121:eval_2escm"),(void*)f_10121},
{C_text("f_10133:eval_2escm"),(void*)f_10133},
{C_text("f_10139:eval_2escm"),(void*)f_10139},
{C_text("f_10199:eval_2escm"),(void*)f_10199},
{C_text("f_10213:eval_2escm"),(void*)f_10213},
{C_text("f_10219:eval_2escm"),(void*)f_10219},
{C_text("f_10230:eval_2escm"),(void*)f_10230},
{C_text("f_10238:eval_2escm"),(void*)f_10238},
{C_text("f_10245:eval_2escm"),(void*)f_10245},
{C_text("f_10252:eval_2escm"),(void*)f_10252},
{C_text("f_10260:eval_2escm"),(void*)f_10260},
{C_text("f_10267:eval_2escm"),(void*)f_10267},
{C_text("f_10270:eval_2escm"),(void*)f_10270},
{C_text("f_10277:eval_2escm"),(void*)f_10277},
{C_text("f_10279:eval_2escm"),(void*)f_10279},
{C_text("f_10282:eval_2escm"),(void*)f_10282},
{C_text("f_10287:eval_2escm"),(void*)f_10287},
{C_text("f_10289:eval_2escm"),(void*)f_10289},
{C_text("f_10296:eval_2escm"),(void*)f_10296},
{C_text("f_10298:eval_2escm"),(void*)f_10298},
{C_text("f_10305:eval_2escm"),(void*)f_10305},
{C_text("f_10308:eval_2escm"),(void*)f_10308},
{C_text("f_10311:eval_2escm"),(void*)f_10311},
{C_text("f_10314:eval_2escm"),(void*)f_10314},
{C_text("f_10319:eval_2escm"),(void*)f_10319},
{C_text("f_10333:eval_2escm"),(void*)f_10333},
{C_text("f_10342:eval_2escm"),(void*)f_10342},
{C_text("f_10353:eval_2escm"),(void*)f_10353},
{C_text("f_10360:eval_2escm"),(void*)f_10360},
{C_text("f_10363:eval_2escm"),(void*)f_10363},
{C_text("f_10366:eval_2escm"),(void*)f_10366},
{C_text("f_10379:eval_2escm"),(void*)f_10379},
{C_text("f_10383:eval_2escm"),(void*)f_10383},
{C_text("f_10387:eval_2escm"),(void*)f_10387},
{C_text("f_10389:eval_2escm"),(void*)f_10389},
{C_text("f_10416:eval_2escm"),(void*)f_10416},
{C_text("f_10420:eval_2escm"),(void*)f_10420},
{C_text("f_10423:eval_2escm"),(void*)f_10423},
{C_text("f_10426:eval_2escm"),(void*)f_10426},
{C_text("f_10431:eval_2escm"),(void*)f_10431},
{C_text("f_10442:eval_2escm"),(void*)f_10442},
{C_text("f_10444:eval_2escm"),(void*)f_10444},
{C_text("f_10449:eval_2escm"),(void*)f_10449},
{C_text("f_10460:eval_2escm"),(void*)f_10460},
{C_text("f_10462:eval_2escm"),(void*)f_10462},
{C_text("f_10482:eval_2escm"),(void*)f_10482},
{C_text("f_10492:eval_2escm"),(void*)f_10492},
{C_text("f_10498:eval_2escm"),(void*)f_10498},
{C_text("f_10510:eval_2escm"),(void*)f_10510},
{C_text("f_10517:eval_2escm"),(void*)f_10517},
{C_text("f_10519:eval_2escm"),(void*)f_10519},
{C_text("f_10548:eval_2escm"),(void*)f_10548},
{C_text("f_10560:eval_2escm"),(void*)f_10560},
{C_text("f_10566:eval_2escm"),(void*)f_10566},
{C_text("f_10570:eval_2escm"),(void*)f_10570},
{C_text("f_10573:eval_2escm"),(void*)f_10573},
{C_text("f_10575:eval_2escm"),(void*)f_10575},
{C_text("f_10579:eval_2escm"),(void*)f_10579},
{C_text("f_10582:eval_2escm"),(void*)f_10582},
{C_text("f_10592:eval_2escm"),(void*)f_10592},
{C_text("f_10604:eval_2escm"),(void*)f_10604},
{C_text("f_10611:eval_2escm"),(void*)f_10611},
{C_text("f_10618:eval_2escm"),(void*)f_10618},
{C_text("f_10620:eval_2escm"),(void*)f_10620},
{C_text("f_10633:eval_2escm"),(void*)f_10633},
{C_text("f_10667:eval_2escm"),(void*)f_10667},
{C_text("f_10676:eval_2escm"),(void*)f_10676},
{C_text("f_10692:eval_2escm"),(void*)f_10692},
{C_text("f_10705:eval_2escm"),(void*)f_10705},
{C_text("f_10708:eval_2escm"),(void*)f_10708},
{C_text("f_10720:eval_2escm"),(void*)f_10720},
{C_text("f_10724:eval_2escm"),(void*)f_10724},
{C_text("f_10728:eval_2escm"),(void*)f_10728},
{C_text("f_10731:eval_2escm"),(void*)f_10731},
{C_text("f_10739:eval_2escm"),(void*)f_10739},
{C_text("f_10758:eval_2escm"),(void*)f_10758},
{C_text("f_10768:eval_2escm"),(void*)f_10768},
{C_text("f_10781:eval_2escm"),(void*)f_10781},
{C_text("f_10804:eval_2escm"),(void*)f_10804},
{C_text("f_10823:eval_2escm"),(void*)f_10823},
{C_text("f_10833:eval_2escm"),(void*)f_10833},
{C_text("f_10846:eval_2escm"),(void*)f_10846},
{C_text("f_10869:eval_2escm"),(void*)f_10869},
{C_text("f_10883:eval_2escm"),(void*)f_10883},
{C_text("f_10910:eval_2escm"),(void*)f_10910},
{C_text("f_10979:eval_2escm"),(void*)f_10979},
{C_text("f_10982:eval_2escm"),(void*)f_10982},
{C_text("f_10995:eval_2escm"),(void*)f_10995},
{C_text("f_10998:eval_2escm"),(void*)f_10998},
{C_text("f_11001:eval_2escm"),(void*)f_11001},
{C_text("f_11015:eval_2escm"),(void*)f_11015},
{C_text("f_11051:eval_2escm"),(void*)f_11051},
{C_text("f_11054:eval_2escm"),(void*)f_11054},
{C_text("f_11064:eval_2escm"),(void*)f_11064},
{C_text("f_11066:eval_2escm"),(void*)f_11066},
{C_text("f_11076:eval_2escm"),(void*)f_11076},
{C_text("f_11090:eval_2escm"),(void*)f_11090},
{C_text("f_11101:eval_2escm"),(void*)f_11101},
{C_text("f_11108:eval_2escm"),(void*)f_11108},
{C_text("f_11111:eval_2escm"),(void*)f_11111},
{C_text("f_11116:eval_2escm"),(void*)f_11116},
{C_text("f_11121:eval_2escm"),(void*)f_11121},
{C_text("f_11127:eval_2escm"),(void*)f_11127},
{C_text("f_11133:eval_2escm"),(void*)f_11133},
{C_text("f_11137:eval_2escm"),(void*)f_11137},
{C_text("f_11140:eval_2escm"),(void*)f_11140},
{C_text("f_11144:eval_2escm"),(void*)f_11144},
{C_text("f_11146:eval_2escm"),(void*)f_11146},
{C_text("f_11152:eval_2escm"),(void*)f_11152},
{C_text("f_11158:eval_2escm"),(void*)f_11158},
{C_text("f_11164:eval_2escm"),(void*)f_11164},
{C_text("f_11170:eval_2escm"),(void*)f_11170},
{C_text("f_11174:eval_2escm"),(void*)f_11174},
{C_text("f_11179:eval_2escm"),(void*)f_11179},
{C_text("f_11185:eval_2escm"),(void*)f_11185},
{C_text("f_11189:eval_2escm"),(void*)f_11189},
{C_text("f_11191:eval_2escm"),(void*)f_11191},
{C_text("f_11197:eval_2escm"),(void*)f_11197},
{C_text("f_11205:eval_2escm"),(void*)f_11205},
{C_text("f_11207:eval_2escm"),(void*)f_11207},
{C_text("f_11211:eval_2escm"),(void*)f_11211},
{C_text("f_11216:eval_2escm"),(void*)f_11216},
{C_text("f_11220:eval_2escm"),(void*)f_11220},
{C_text("f_11227:eval_2escm"),(void*)f_11227},
{C_text("f_11231:eval_2escm"),(void*)f_11231},
{C_text("f_11233:eval_2escm"),(void*)f_11233},
{C_text("f_11253:eval_2escm"),(void*)f_11253},
{C_text("f_11259:eval_2escm"),(void*)f_11259},
{C_text("f_11263:eval_2escm"),(void*)f_11263},
{C_text("f_11266:eval_2escm"),(void*)f_11266},
{C_text("f_11273:eval_2escm"),(void*)f_11273},
{C_text("f_11277:eval_2escm"),(void*)f_11277},
{C_text("f_11279:eval_2escm"),(void*)f_11279},
{C_text("f_11283:eval_2escm"),(void*)f_11283},
{C_text("f_11288:eval_2escm"),(void*)f_11288},
{C_text("f_11292:eval_2escm"),(void*)f_11292},
{C_text("f_11295:eval_2escm"),(void*)f_11295},
{C_text("f_11302:eval_2escm"),(void*)f_11302},
{C_text("f_11306:eval_2escm"),(void*)f_11306},
{C_text("f_11310:eval_2escm"),(void*)f_11310},
{C_text("f_11314:eval_2escm"),(void*)f_11314},
{C_text("f_11316:eval_2escm"),(void*)f_11316},
{C_text("f_11322:eval_2escm"),(void*)f_11322},
{C_text("f_11330:eval_2escm"),(void*)f_11330},
{C_text("f_11332:eval_2escm"),(void*)f_11332},
{C_text("f_11338:eval_2escm"),(void*)f_11338},
{C_text("f_11342:eval_2escm"),(void*)f_11342},
{C_text("f_11345:eval_2escm"),(void*)f_11345},
{C_text("f_11352:eval_2escm"),(void*)f_11352},
{C_text("f_11356:eval_2escm"),(void*)f_11356},
{C_text("f_11358:eval_2escm"),(void*)f_11358},
{C_text("f_11362:eval_2escm"),(void*)f_11362},
{C_text("f_11367:eval_2escm"),(void*)f_11367},
{C_text("f_11371:eval_2escm"),(void*)f_11371},
{C_text("f_11378:eval_2escm"),(void*)f_11378},
{C_text("f_11380:eval_2escm"),(void*)f_11380},
{C_text("f_11384:eval_2escm"),(void*)f_11384},
{C_text("f_11389:eval_2escm"),(void*)f_11389},
{C_text("f_11393:eval_2escm"),(void*)f_11393},
{C_text("f_11395:eval_2escm"),(void*)f_11395},
{C_text("f_11410:eval_2escm"),(void*)f_11410},
{C_text("f_11412:eval_2escm"),(void*)f_11412},
{C_text("f_11418:eval_2escm"),(void*)f_11418},
{C_text("f_11443:eval_2escm"),(void*)f_11443},
{C_text("f_11457:eval_2escm"),(void*)f_11457},
{C_text("f_11469:eval_2escm"),(void*)f_11469},
{C_text("f_11473:eval_2escm"),(void*)f_11473},
{C_text("f_11500:eval_2escm"),(void*)f_11500},
{C_text("f_11504:eval_2escm"),(void*)f_11504},
{C_text("f_11508:eval_2escm"),(void*)f_11508},
{C_text("f_11512:eval_2escm"),(void*)f_11512},
{C_text("f_11516:eval_2escm"),(void*)f_11516},
{C_text("f_11524:eval_2escm"),(void*)f_11524},
{C_text("f_11532:eval_2escm"),(void*)f_11532},
{C_text("f_11540:eval_2escm"),(void*)f_11540},
{C_text("f_11546:eval_2escm"),(void*)f_11546},
{C_text("f_11550:eval_2escm"),(void*)f_11550},
{C_text("f_11553:eval_2escm"),(void*)f_11553},
{C_text("f_11562:eval_2escm"),(void*)f_11562},
{C_text("f_11568:eval_2escm"),(void*)f_11568},
{C_text("f_11572:eval_2escm"),(void*)f_11572},
{C_text("f_11575:eval_2escm"),(void*)f_11575},
{C_text("f_11587:eval_2escm"),(void*)f_11587},
{C_text("f_11589:eval_2escm"),(void*)f_11589},
{C_text("f_11595:eval_2escm"),(void*)f_11595},
{C_text("f_11600:eval_2escm"),(void*)f_11600},
{C_text("f_11604:eval_2escm"),(void*)f_11604},
{C_text("f_11607:eval_2escm"),(void*)f_11607},
{C_text("f_11617:eval_2escm"),(void*)f_11617},
{C_text("f_11630:eval_2escm"),(void*)f_11630},
{C_text("f_11635:eval_2escm"),(void*)f_11635},
{C_text("f_11642:eval_2escm"),(void*)f_11642},
{C_text("f_11645:eval_2escm"),(void*)f_11645},
{C_text("f_11660:eval_2escm"),(void*)f_11660},
{C_text("f_11668:eval_2escm"),(void*)f_11668},
{C_text("f_11672:eval_2escm"),(void*)f_11672},
{C_text("f_11675:eval_2escm"),(void*)f_11675},
{C_text("f_11679:eval_2escm"),(void*)f_11679},
{C_text("f_11683:eval_2escm"),(void*)f_11683},
{C_text("f_11686:eval_2escm"),(void*)f_11686},
{C_text("f_11689:eval_2escm"),(void*)f_11689},
{C_text("f_11698:eval_2escm"),(void*)f_11698},
{C_text("f_11708:eval_2escm"),(void*)f_11708},
{C_text("f_11712:eval_2escm"),(void*)f_11712},
{C_text("f_11715:eval_2escm"),(void*)f_11715},
{C_text("f_11718:eval_2escm"),(void*)f_11718},
{C_text("f_11721:eval_2escm"),(void*)f_11721},
{C_text("f_11729:eval_2escm"),(void*)f_11729},
{C_text("f_11738:eval_2escm"),(void*)f_11738},
{C_text("f_3576:eval_2escm"),(void*)f_3576},
{C_text("f_3579:eval_2escm"),(void*)f_3579},
{C_text("f_3582:eval_2escm"),(void*)f_3582},
{C_text("f_3585:eval_2escm"),(void*)f_3585},
{C_text("f_3593:eval_2escm"),(void*)f_3593},
{C_text("f_3606:eval_2escm"),(void*)f_3606},
{C_text("f_3614:eval_2escm"),(void*)f_3614},
{C_text("f_3618:eval_2escm"),(void*)f_3618},
{C_text("f_3621:eval_2escm"),(void*)f_3621},
{C_text("f_3624:eval_2escm"),(void*)f_3624},
{C_text("f_3629:eval_2escm"),(void*)f_3629},
{C_text("f_3631:eval_2escm"),(void*)f_3631},
{C_text("f_3658:eval_2escm"),(void*)f_3658},
{C_text("f_3671:eval_2escm"),(void*)f_3671},
{C_text("f_3693:eval_2escm"),(void*)f_3693},
{C_text("f_3697:eval_2escm"),(void*)f_3697},
{C_text("f_3705:eval_2escm"),(void*)f_3705},
{C_text("f_3711:eval_2escm"),(void*)f_3711},
{C_text("f_3718:eval_2escm"),(void*)f_3718},
{C_text("f_3725:eval_2escm"),(void*)f_3725},
{C_text("f_3727:eval_2escm"),(void*)f_3727},
{C_text("f_3731:eval_2escm"),(void*)f_3731},
{C_text("f_3739:eval_2escm"),(void*)f_3739},
{C_text("f_3756:eval_2escm"),(void*)f_3756},
{C_text("f_3786:eval_2escm"),(void*)f_3786},
{C_text("f_3816:eval_2escm"),(void*)f_3816},
{C_text("f_3830:eval_2escm"),(void*)f_3830},
{C_text("f_3838:eval_2escm"),(void*)f_3838},
{C_text("f_3847:eval_2escm"),(void*)f_3847},
{C_text("f_3855:eval_2escm"),(void*)f_3855},
{C_text("f_3862:eval_2escm"),(void*)f_3862},
{C_text("f_3865:eval_2escm"),(void*)f_3865},
{C_text("f_3880:eval_2escm"),(void*)f_3880},
{C_text("f_3894:eval_2escm"),(void*)f_3894},
{C_text("f_3898:eval_2escm"),(void*)f_3898},
{C_text("f_3903:eval_2escm"),(void*)f_3903},
{C_text("f_3908:eval_2escm"),(void*)f_3908},
{C_text("f_3914:eval_2escm"),(void*)f_3914},
{C_text("f_3927:eval_2escm"),(void*)f_3927},
{C_text("f_3931:eval_2escm"),(void*)f_3931},
{C_text("f_3944:eval_2escm"),(void*)f_3944},
{C_text("f_3951:eval_2escm"),(void*)f_3951},
{C_text("f_3952:eval_2escm"),(void*)f_3952},
{C_text("f_3964:eval_2escm"),(void*)f_3964},
{C_text("f_3970:eval_2escm"),(void*)f_3970},
{C_text("f_3980:eval_2escm"),(void*)f_3980},
{C_text("f_3983:eval_2escm"),(void*)f_3983},
{C_text("f_3990:eval_2escm"),(void*)f_3990},
{C_text("f_4000:eval_2escm"),(void*)f_4000},
{C_text("f_4001:eval_2escm"),(void*)f_4001},
{C_text("f_4006:eval_2escm"),(void*)f_4006},
{C_text("f_4010:eval_2escm"),(void*)f_4010},
{C_text("f_4031:eval_2escm"),(void*)f_4031},
{C_text("f_4063:eval_2escm"),(void*)f_4063},
{C_text("f_4074:eval_2escm"),(void*)f_4074},
{C_text("f_4089:eval_2escm"),(void*)f_4089},
{C_text("f_4108:eval_2escm"),(void*)f_4108},
{C_text("f_4131:eval_2escm"),(void*)f_4131},
{C_text("f_4152:eval_2escm"),(void*)f_4152},
{C_text("f_4178:eval_2escm"),(void*)f_4178},
{C_text("f_4186:eval_2escm"),(void*)f_4186},
{C_text("f_4194:eval_2escm"),(void*)f_4194},
{C_text("f_4202:eval_2escm"),(void*)f_4202},
{C_text("f_4204:eval_2escm"),(void*)f_4204},
{C_text("f_4223:eval_2escm"),(void*)f_4223},
{C_text("f_4225:eval_2escm"),(void*)f_4225},
{C_text("f_4235:eval_2escm"),(void*)f_4235},
{C_text("f_4236:eval_2escm"),(void*)f_4236},
{C_text("f_4255:eval_2escm"),(void*)f_4255},
{C_text("f_4258:eval_2escm"),(void*)f_4258},
{C_text("f_4264:eval_2escm"),(void*)f_4264},
{C_text("f_4279:eval_2escm"),(void*)f_4279},
{C_text("f_4288:eval_2escm"),(void*)f_4288},
{C_text("f_4295:eval_2escm"),(void*)f_4295},
{C_text("f_4303:eval_2escm"),(void*)f_4303},
{C_text("f_4311:eval_2escm"),(void*)f_4311},
{C_text("f_4319:eval_2escm"),(void*)f_4319},
{C_text("f_4327:eval_2escm"),(void*)f_4327},
{C_text("f_4335:eval_2escm"),(void*)f_4335},
{C_text("f_4343:eval_2escm"),(void*)f_4343},
{C_text("f_4345:eval_2escm"),(void*)f_4345},
{C_text("f_4374:eval_2escm"),(void*)f_4374},
{C_text("f_4408:eval_2escm"),(void*)f_4408},
{C_text("f_4418:eval_2escm"),(void*)f_4418},
{C_text("f_4421:eval_2escm"),(void*)f_4421},
{C_text("f_4424:eval_2escm"),(void*)f_4424},
{C_text("f_4425:eval_2escm"),(void*)f_4425},
{C_text("f_4432:eval_2escm"),(void*)f_4432},
{C_text("f_4506:eval_2escm"),(void*)f_4506},
{C_text("f_4509:eval_2escm"),(void*)f_4509},
{C_text("f_4510:eval_2escm"),(void*)f_4510},
{C_text("f_4514:eval_2escm"),(void*)f_4514},
{C_text("f_4528:eval_2escm"),(void*)f_4528},
{C_text("f_4531:eval_2escm"),(void*)f_4531},
{C_text("f_4534:eval_2escm"),(void*)f_4534},
{C_text("f_4535:eval_2escm"),(void*)f_4535},
{C_text("f_4539:eval_2escm"),(void*)f_4539},
{C_text("f_4542:eval_2escm"),(void*)f_4542},
{C_text("f_4580:eval_2escm"),(void*)f_4580},
{C_text("f_4583:eval_2escm"),(void*)f_4583},
{C_text("f_4611:eval_2escm"),(void*)f_4611},
{C_text("f_4617:eval_2escm"),(void*)f_4617},
{C_text("f_4621:eval_2escm"),(void*)f_4621},
{C_text("f_4630:eval_2escm"),(void*)f_4630},
{C_text("f_4634:eval_2escm"),(void*)f_4634},
{C_text("f_4641:eval_2escm"),(void*)f_4641},
{C_text("f_4642:eval_2escm"),(void*)f_4642},
{C_text("f_4646:eval_2escm"),(void*)f_4646},
{C_text("f_4672:eval_2escm"),(void*)f_4672},
{C_text("f_4677:eval_2escm"),(void*)f_4677},
{C_text("f_4689:eval_2escm"),(void*)f_4689},
{C_text("f_4690:eval_2escm"),(void*)f_4690},
{C_text("f_4699:eval_2escm"),(void*)f_4699},
{C_text("f_4726:eval_2escm"),(void*)f_4726},
{C_text("f_4735:eval_2escm"),(void*)f_4735},
{C_text("f_4741:eval_2escm"),(void*)f_4741},
{C_text("f_4744:eval_2escm"),(void*)f_4744},
{C_text("f_4753:eval_2escm"),(void*)f_4753},
{C_text("f_4754:eval_2escm"),(void*)f_4754},
{C_text("f_4770:eval_2escm"),(void*)f_4770},
{C_text("f_4774:eval_2escm"),(void*)f_4774},
{C_text("f_4787:eval_2escm"),(void*)f_4787},
{C_text("f_4790:eval_2escm"),(void*)f_4790},
{C_text("f_4791:eval_2escm"),(void*)f_4791},
{C_text("f_4807:eval_2escm"),(void*)f_4807},
{C_text("f_4811:eval_2escm"),(void*)f_4811},
{C_text("f_4815:eval_2escm"),(void*)f_4815},
{C_text("f_4823:eval_2escm"),(void*)f_4823},
{C_text("f_4836:eval_2escm"),(void*)f_4836},
{C_text("f_4839:eval_2escm"),(void*)f_4839},
{C_text("f_4845:eval_2escm"),(void*)f_4845},
{C_text("f_4846:eval_2escm"),(void*)f_4846},
{C_text("f_4862:eval_2escm"),(void*)f_4862},
{C_text("f_4866:eval_2escm"),(void*)f_4866},
{C_text("f_4870:eval_2escm"),(void*)f_4870},
{C_text("f_4874:eval_2escm"),(void*)f_4874},
{C_text("f_4882:eval_2escm"),(void*)f_4882},
{C_text("f_4890:eval_2escm"),(void*)f_4890},
{C_text("f_4903:eval_2escm"),(void*)f_4903},
{C_text("f_4906:eval_2escm"),(void*)f_4906},
{C_text("f_4912:eval_2escm"),(void*)f_4912},
{C_text("f_4915:eval_2escm"),(void*)f_4915},
{C_text("f_4916:eval_2escm"),(void*)f_4916},
{C_text("f_4932:eval_2escm"),(void*)f_4932},
{C_text("f_4936:eval_2escm"),(void*)f_4936},
{C_text("f_4940:eval_2escm"),(void*)f_4940},
{C_text("f_4944:eval_2escm"),(void*)f_4944},
{C_text("f_4948:eval_2escm"),(void*)f_4948},
{C_text("f_4956:eval_2escm"),(void*)f_4956},
{C_text("f_4964:eval_2escm"),(void*)f_4964},
{C_text("f_4972:eval_2escm"),(void*)f_4972},
{C_text("f_4980:eval_2escm"),(void*)f_4980},
{C_text("f_4993:eval_2escm"),(void*)f_4993},
{C_text("f_4994:eval_2escm"),(void*)f_4994},
{C_text("f_4998:eval_2escm"),(void*)f_4998},
{C_text("f_5001:eval_2escm"),(void*)f_5001},
{C_text("f_5010:eval_2escm"),(void*)f_5010},
{C_text("f_5035:eval_2escm"),(void*)f_5035},
{C_text("f_5040:eval_2escm"),(void*)f_5040},
{C_text("f_5065:eval_2escm"),(void*)f_5065},
{C_text("f_5082:eval_2escm"),(void*)f_5082},
{C_text("f_5086:eval_2escm"),(void*)f_5086},
{C_text("f_5090:eval_2escm"),(void*)f_5090},
{C_text("f_5093:eval_2escm"),(void*)f_5093},
{C_text("f_5099:eval_2escm"),(void*)f_5099},
{C_text("f_5107:eval_2escm"),(void*)f_5107},
{C_text("f_5115:eval_2escm"),(void*)f_5115},
{C_text("f_5117:eval_2escm"),(void*)f_5117},
{C_text("f_5121:eval_2escm"),(void*)f_5121},
{C_text("f_5124:eval_2escm"),(void*)f_5124},
{C_text("f_5129:eval_2escm"),(void*)f_5129},
{C_text("f_5131:eval_2escm"),(void*)f_5131},
{C_text("f_5156:eval_2escm"),(void*)f_5156},
{C_text("f_5165:eval_2escm"),(void*)f_5165},
{C_text("f_5238:eval_2escm"),(void*)f_5238},
{C_text("f_5242:eval_2escm"),(void*)f_5242},
{C_text("f_5262:eval_2escm"),(void*)f_5262},
{C_text("f_5276:eval_2escm"),(void*)f_5276},
{C_text("f_5310:eval_2escm"),(void*)f_5310},
{C_text("f_5360:eval_2escm"),(void*)f_5360},
{C_text("f_5369:eval_2escm"),(void*)f_5369},
{C_text("f_5395:eval_2escm"),(void*)f_5395},
{C_text("f_5422:eval_2escm"),(void*)f_5422},
{C_text("f_5426:eval_2escm"),(void*)f_5426},
{C_text("f_5438:eval_2escm"),(void*)f_5438},
{C_text("f_5452:eval_2escm"),(void*)f_5452},
{C_text("f_5500:eval_2escm"),(void*)f_5500},
{C_text("f_5548:eval_2escm"),(void*)f_5548},
{C_text("f_5582:eval_2escm"),(void*)f_5582},
{C_text("f_5607:eval_2escm"),(void*)f_5607},
{C_text("f_5616:eval_2escm"),(void*)f_5616},
{C_text("f_5657:eval_2escm"),(void*)f_5657},
{C_text("f_5668:eval_2escm"),(void*)f_5668},
{C_text("f_5673:eval_2escm"),(void*)f_5673},
{C_text("f_5683:eval_2escm"),(void*)f_5683},
{C_text("f_5686:eval_2escm"),(void*)f_5686},
{C_text("f_5692:eval_2escm"),(void*)f_5692},
{C_text("f_5702:eval_2escm"),(void*)f_5702},
{C_text("f_5708:eval_2escm"),(void*)f_5708},
{C_text("f_5721:eval_2escm"),(void*)f_5721},
{C_text("f_5727:eval_2escm"),(void*)f_5727},
{C_text("f_5745:eval_2escm"),(void*)f_5745},
{C_text("f_5751:eval_2escm"),(void*)f_5751},
{C_text("f_5764:eval_2escm"),(void*)f_5764},
{C_text("f_5770:eval_2escm"),(void*)f_5770},
{C_text("f_5792:eval_2escm"),(void*)f_5792},
{C_text("f_5798:eval_2escm"),(void*)f_5798},
{C_text("f_5811:eval_2escm"),(void*)f_5811},
{C_text("f_5817:eval_2escm"),(void*)f_5817},
{C_text("f_5839:eval_2escm"),(void*)f_5839},
{C_text("f_5845:eval_2escm"),(void*)f_5845},
{C_text("f_5858:eval_2escm"),(void*)f_5858},
{C_text("f_5864:eval_2escm"),(void*)f_5864},
{C_text("f_5886:eval_2escm"),(void*)f_5886},
{C_text("f_5892:eval_2escm"),(void*)f_5892},
{C_text("f_5905:eval_2escm"),(void*)f_5905},
{C_text("f_5911:eval_2escm"),(void*)f_5911},
{C_text("f_5923:eval_2escm"),(void*)f_5923},
{C_text("f_5927:eval_2escm"),(void*)f_5927},
{C_text("f_5933:eval_2escm"),(void*)f_5933},
{C_text("f_5945:eval_2escm"),(void*)f_5945},
{C_text("f_5949:eval_2escm"),(void*)f_5949},
{C_text("f_5950:eval_2escm"),(void*)f_5950},
{C_text("f_5956:eval_2escm"),(void*)f_5956},
{C_text("f_5978:eval_2escm"),(void*)f_5978},
{C_text("f_5994:eval_2escm"),(void*)f_5994},
{C_text("f_5998:eval_2escm"),(void*)f_5998},
{C_text("f_6002:eval_2escm"),(void*)f_6002},
{C_text("f_6005:eval_2escm"),(void*)f_6005},
{C_text("f_6011:eval_2escm"),(void*)f_6011},
{C_text("f_6019:eval_2escm"),(void*)f_6019},
{C_text("f_6025:eval_2escm"),(void*)f_6025},
{C_text("f_6029:eval_2escm"),(void*)f_6029},
{C_text("f_6032:eval_2escm"),(void*)f_6032},
{C_text("f_6037:eval_2escm"),(void*)f_6037},
{C_text("f_6039:eval_2escm"),(void*)f_6039},
{C_text("f_6064:eval_2escm"),(void*)f_6064},
{C_text("f_6074:eval_2escm"),(void*)f_6074},
{C_text("f_6079:eval_2escm"),(void*)f_6079},
{C_text("f_6087:eval_2escm"),(void*)f_6087},
{C_text("f_6089:eval_2escm"),(void*)f_6089},
{C_text("f_6100:eval_2escm"),(void*)f_6100},
{C_text("f_6109:eval_2escm"),(void*)f_6109},
{C_text("f_6114:eval_2escm"),(void*)f_6114},
{C_text("f_6118:eval_2escm"),(void*)f_6118},
{C_text("f_6122:eval_2escm"),(void*)f_6122},
{C_text("f_6125:eval_2escm"),(void*)f_6125},
{C_text("f_6131:eval_2escm"),(void*)f_6131},
{C_text("f_6139:eval_2escm"),(void*)f_6139},
{C_text("f_6147:eval_2escm"),(void*)f_6147},
{C_text("f_6149:eval_2escm"),(void*)f_6149},
{C_text("f_6153:eval_2escm"),(void*)f_6153},
{C_text("f_6156:eval_2escm"),(void*)f_6156},
{C_text("f_6174:eval_2escm"),(void*)f_6174},
{C_text("f_6178:eval_2escm"),(void*)f_6178},
{C_text("f_6182:eval_2escm"),(void*)f_6182},
{C_text("f_6186:eval_2escm"),(void*)f_6186},
{C_text("f_6201:eval_2escm"),(void*)f_6201},
{C_text("f_6205:eval_2escm"),(void*)f_6205},
{C_text("f_6207:eval_2escm"),(void*)f_6207},
{C_text("f_6261:eval_2escm"),(void*)f_6261},
{C_text("f_6265:eval_2escm"),(void*)f_6265},
{C_text("f_6269:eval_2escm"),(void*)f_6269},
{C_text("f_6284:eval_2escm"),(void*)f_6284},
{C_text("f_6287:eval_2escm"),(void*)f_6287},
{C_text("f_6288:eval_2escm"),(void*)f_6288},
{C_text("f_6307:eval_2escm"),(void*)f_6307},
{C_text("f_6311:eval_2escm"),(void*)f_6311},
{C_text("f_6315:eval_2escm"),(void*)f_6315},
{C_text("f_6318:eval_2escm"),(void*)f_6318},
{C_text("f_6324:eval_2escm"),(void*)f_6324},
{C_text("f_6332:eval_2escm"),(void*)f_6332},
{C_text("f_6340:eval_2escm"),(void*)f_6340},
{C_text("f_6342:eval_2escm"),(void*)f_6342},
{C_text("f_6346:eval_2escm"),(void*)f_6346},
{C_text("f_6349:eval_2escm"),(void*)f_6349},
{C_text("f_6352:eval_2escm"),(void*)f_6352},
{C_text("f_6377:eval_2escm"),(void*)f_6377},
{C_text("f_6379:eval_2escm"),(void*)f_6379},
{C_text("f_6426:eval_2escm"),(void*)f_6426},
{C_text("f_6429:eval_2escm"),(void*)f_6429},
{C_text("f_6432:eval_2escm"),(void*)f_6432},
{C_text("f_6435:eval_2escm"),(void*)f_6435},
{C_text("f_6438:eval_2escm"),(void*)f_6438},
{C_text("f_6445:eval_2escm"),(void*)f_6445},
{C_text("f_6449:eval_2escm"),(void*)f_6449},
{C_text("f_6453:eval_2escm"),(void*)f_6453},
{C_text("f_6470:eval_2escm"),(void*)f_6470},
{C_text("f_6492:eval_2escm"),(void*)f_6492},
{C_text("f_6500:eval_2escm"),(void*)f_6500},
{C_text("f_6536:eval_2escm"),(void*)f_6536},
{C_text("f_6548:eval_2escm"),(void*)f_6548},
{C_text("f_6550:eval_2escm"),(void*)f_6550},
{C_text("f_6564:eval_2escm"),(void*)f_6564},
{C_text("f_6589:eval_2escm"),(void*)f_6589},
{C_text("f_6605:eval_2escm"),(void*)f_6605},
{C_text("f_6614:eval_2escm"),(void*)f_6614},
{C_text("f_6617:eval_2escm"),(void*)f_6617},
{C_text("f_6620:eval_2escm"),(void*)f_6620},
{C_text("f_6623:eval_2escm"),(void*)f_6623},
{C_text("f_6628:eval_2escm"),(void*)f_6628},
{C_text("f_6632:eval_2escm"),(void*)f_6632},
{C_text("f_6635:eval_2escm"),(void*)f_6635},
{C_text("f_6638:eval_2escm"),(void*)f_6638},
{C_text("f_6641:eval_2escm"),(void*)f_6641},
{C_text("f_6645:eval_2escm"),(void*)f_6645},
{C_text("f_6649:eval_2escm"),(void*)f_6649},
{C_text("f_6653:eval_2escm"),(void*)f_6653},
{C_text("f_6657:eval_2escm"),(void*)f_6657},
{C_text("f_6660:eval_2escm"),(void*)f_6660},
{C_text("f_6663:eval_2escm"),(void*)f_6663},
{C_text("f_6666:eval_2escm"),(void*)f_6666},
{C_text("f_6669:eval_2escm"),(void*)f_6669},
{C_text("f_6684:eval_2escm"),(void*)f_6684},
{C_text("f_6690:eval_2escm"),(void*)f_6690},
{C_text("f_6700:eval_2escm"),(void*)f_6700},
{C_text("f_6710:eval_2escm"),(void*)f_6710},
{C_text("f_6713:eval_2escm"),(void*)f_6713},
{C_text("f_6716:eval_2escm"),(void*)f_6716},
{C_text("f_6717:eval_2escm"),(void*)f_6717},
{C_text("f_6723:eval_2escm"),(void*)f_6723},
{C_text("f_6746:eval_2escm"),(void*)f_6746},
{C_text("f_6757:eval_2escm"),(void*)f_6757},
{C_text("f_6761:eval_2escm"),(void*)f_6761},
{C_text("f_6776:eval_2escm"),(void*)f_6776},
{C_text("f_6780:eval_2escm"),(void*)f_6780},
{C_text("f_6784:eval_2escm"),(void*)f_6784},
{C_text("f_6787:eval_2escm"),(void*)f_6787},
{C_text("f_6790:eval_2escm"),(void*)f_6790},
{C_text("f_6793:eval_2escm"),(void*)f_6793},
{C_text("f_6796:eval_2escm"),(void*)f_6796},
{C_text("f_6799:eval_2escm"),(void*)f_6799},
{C_text("f_6802:eval_2escm"),(void*)f_6802},
{C_text("f_6805:eval_2escm"),(void*)f_6805},
{C_text("f_6812:eval_2escm"),(void*)f_6812},
{C_text("f_6819:eval_2escm"),(void*)f_6819},
{C_text("f_6832:eval_2escm"),(void*)f_6832},
{C_text("f_6843:eval_2escm"),(void*)f_6843},
{C_text("f_6876:eval_2escm"),(void*)f_6876},
{C_text("f_6901:eval_2escm"),(void*)f_6901},
{C_text("f_6929:eval_2escm"),(void*)f_6929},
{C_text("f_6963:eval_2escm"),(void*)f_6963},
{C_text("f_6989:eval_2escm"),(void*)f_6989},
{C_text("f_7010:eval_2escm"),(void*)f_7010},
{C_text("f_7039:eval_2escm"),(void*)f_7039},
{C_text("f_7051:eval_2escm"),(void*)f_7051},
{C_text("f_7074:eval_2escm"),(void*)f_7074},
{C_text("f_7087:eval_2escm"),(void*)f_7087},
{C_text("f_7107:eval_2escm"),(void*)f_7107},
{C_text("f_7133:eval_2escm"),(void*)f_7133},
{C_text("f_7151:eval_2escm"),(void*)f_7151},
{C_text("f_7163:eval_2escm"),(void*)f_7163},
{C_text("f_7168:eval_2escm"),(void*)f_7168},
{C_text("f_7176:eval_2escm"),(void*)f_7176},
{C_text("f_7178:eval_2escm"),(void*)f_7178},
{C_text("f_7361:eval_2escm"),(void*)f_7361},
{C_text("f_7366:eval_2escm"),(void*)f_7366},
{C_text("f_7374:eval_2escm"),(void*)f_7374},
{C_text("f_7376:eval_2escm"),(void*)f_7376},
{C_text("f_7382:eval_2escm"),(void*)f_7382},
{C_text("f_7389:eval_2escm"),(void*)f_7389},
{C_text("f_7418:eval_2escm"),(void*)f_7418},
{C_text("f_7447:eval_2escm"),(void*)f_7447},
{C_text("f_7476:eval_2escm"),(void*)f_7476},
{C_text("f_7493:eval_2escm"),(void*)f_7493},
{C_text("f_7519:eval_2escm"),(void*)f_7519},
{C_text("f_7526:eval_2escm"),(void*)f_7526},
{C_text("f_7535:eval_2escm"),(void*)f_7535},
{C_text("f_7554:eval_2escm"),(void*)f_7554},
{C_text("f_7561:eval_2escm"),(void*)f_7561},
{C_text("f_7573:eval_2escm"),(void*)f_7573},
{C_text("f_7574:eval_2escm"),(void*)f_7574},
{C_text("f_7581:eval_2escm"),(void*)f_7581},
{C_text("f_7588:eval_2escm"),(void*)f_7588},
{C_text("f_7601:eval_2escm"),(void*)f_7601},
{C_text("f_7604:eval_2escm"),(void*)f_7604},
{C_text("f_7605:eval_2escm"),(void*)f_7605},
{C_text("f_7612:eval_2escm"),(void*)f_7612},
{C_text("f_7619:eval_2escm"),(void*)f_7619},
{C_text("f_7623:eval_2escm"),(void*)f_7623},
{C_text("f_7637:eval_2escm"),(void*)f_7637},
{C_text("f_7640:eval_2escm"),(void*)f_7640},
{C_text("f_7643:eval_2escm"),(void*)f_7643},
{C_text("f_7644:eval_2escm"),(void*)f_7644},
{C_text("f_7651:eval_2escm"),(void*)f_7651},
{C_text("f_7658:eval_2escm"),(void*)f_7658},
{C_text("f_7662:eval_2escm"),(void*)f_7662},
{C_text("f_7666:eval_2escm"),(void*)f_7666},
{C_text("f_7681:eval_2escm"),(void*)f_7681},
{C_text("f_7684:eval_2escm"),(void*)f_7684},
{C_text("f_7687:eval_2escm"),(void*)f_7687},
{C_text("f_7690:eval_2escm"),(void*)f_7690},
{C_text("f_7691:eval_2escm"),(void*)f_7691},
{C_text("f_7698:eval_2escm"),(void*)f_7698},
{C_text("f_7705:eval_2escm"),(void*)f_7705},
{C_text("f_7709:eval_2escm"),(void*)f_7709},
{C_text("f_7713:eval_2escm"),(void*)f_7713},
{C_text("f_7717:eval_2escm"),(void*)f_7717},
{C_text("f_7728:eval_2escm"),(void*)f_7728},
{C_text("f_7738:eval_2escm"),(void*)f_7738},
{C_text("f_7739:eval_2escm"),(void*)f_7739},
{C_text("f_7750:eval_2escm"),(void*)f_7750},
{C_text("f_7755:eval_2escm"),(void*)f_7755},
{C_text("f_7765:eval_2escm"),(void*)f_7765},
{C_text("f_7767:eval_2escm"),(void*)f_7767},
{C_text("f_7792:eval_2escm"),(void*)f_7792},
{C_text("f_7801:eval_2escm"),(void*)f_7801},
{C_text("f_7826:eval_2escm"),(void*)f_7826},
{C_text("f_7849:eval_2escm"),(void*)f_7849},
{C_text("f_7868:eval_2escm"),(void*)f_7868},
{C_text("f_7918:eval_2escm"),(void*)f_7918},
{C_text("f_7922:eval_2escm"),(void*)f_7922},
{C_text("f_7925:eval_2escm"),(void*)f_7925},
{C_text("f_7930:eval_2escm"),(void*)f_7930},
{C_text("f_7934:eval_2escm"),(void*)f_7934},
{C_text("f_7937:eval_2escm"),(void*)f_7937},
{C_text("f_7940:eval_2escm"),(void*)f_7940},
{C_text("f_7944:eval_2escm"),(void*)f_7944},
{C_text("f_7948:eval_2escm"),(void*)f_7948},
{C_text("f_7952:eval_2escm"),(void*)f_7952},
{C_text("f_7955:eval_2escm"),(void*)f_7955},
{C_text("f_7958:eval_2escm"),(void*)f_7958},
{C_text("f_7961:eval_2escm"),(void*)f_7961},
{C_text("f_7973:eval_2escm"),(void*)f_7973},
{C_text("f_7979:eval_2escm"),(void*)f_7979},
{C_text("f_7983:eval_2escm"),(void*)f_7983},
{C_text("f_7988:eval_2escm"),(void*)f_7988},
{C_text("f_7992:eval_2escm"),(void*)f_7992},
{C_text("f_7999:eval_2escm"),(void*)f_7999},
{C_text("f_8003:eval_2escm"),(void*)f_8003},
{C_text("f_8005:eval_2escm"),(void*)f_8005},
{C_text("f_8009:eval_2escm"),(void*)f_8009},
{C_text("f_8012:eval_2escm"),(void*)f_8012},
{C_text("f_8015:eval_2escm"),(void*)f_8015},
{C_text("f_8018:eval_2escm"),(void*)f_8018},
{C_text("f_8021:eval_2escm"),(void*)f_8021},
{C_text("f_8024:eval_2escm"),(void*)f_8024},
{C_text("f_8031:eval_2escm"),(void*)f_8031},
{C_text("f_8033:eval_2escm"),(void*)f_8033},
{C_text("f_8041:eval_2escm"),(void*)f_8041},
{C_text("f_8043:eval_2escm"),(void*)f_8043},
{C_text("f_8050:eval_2escm"),(void*)f_8050},
{C_text("f_8052:eval_2escm"),(void*)f_8052},
{C_text("f_8055:eval_2escm"),(void*)f_8055},
{C_text("f_8065:eval_2escm"),(void*)f_8065},
{C_text("f_8079:eval_2escm"),(void*)f_8079},
{C_text("f_8098:eval_2escm"),(void*)f_8098},
{C_text("f_8137:eval_2escm"),(void*)f_8137},
{C_text("f_8141:eval_2escm"),(void*)f_8141},
{C_text("f_8144:eval_2escm"),(void*)f_8144},
{C_text("f_8147:eval_2escm"),(void*)f_8147},
{C_text("f_8150:eval_2escm"),(void*)f_8150},
{C_text("f_8153:eval_2escm"),(void*)f_8153},
{C_text("f_8155:eval_2escm"),(void*)f_8155},
{C_text("f_8164:eval_2escm"),(void*)f_8164},
{C_text("f_8195:eval_2escm"),(void*)f_8195},
{C_text("f_8213:eval_2escm"),(void*)f_8213},
{C_text("f_8238:eval_2escm"),(void*)f_8238},
{C_text("f_8264:eval_2escm"),(void*)f_8264},
{C_text("f_8641:eval_2escm"),(void*)f_8641},
{C_text("f_8663:eval_2escm"),(void*)f_8663},
{C_text("f_9554:eval_2escm"),(void*)f_9554},
{C_text("f_9557:eval_2escm"),(void*)f_9557},
{C_text("f_9571:eval_2escm"),(void*)f_9571},
{C_text("f_9574:eval_2escm"),(void*)f_9574},
{C_text("f_9576:eval_2escm"),(void*)f_9576},
{C_text("f_9579:eval_2escm"),(void*)f_9579},
{C_text("f_9586:eval_2escm"),(void*)f_9586},
{C_text("f_9596:eval_2escm"),(void*)f_9596},
{C_text("f_9624:eval_2escm"),(void*)f_9624},
{C_text("f_9628:eval_2escm"),(void*)f_9628},
{C_text("f_9641:eval_2escm"),(void*)f_9641},
{C_text("f_9669:eval_2escm"),(void*)f_9669},
{C_text("f_9673:eval_2escm"),(void*)f_9673},
{C_text("f_9680:eval_2escm"),(void*)f_9680},
{C_text("f_9685:eval_2escm"),(void*)f_9685},
{C_text("f_9698:eval_2escm"),(void*)f_9698},
{C_text("f_9767:eval_2escm"),(void*)f_9767},
{C_text("f_9771:eval_2escm"),(void*)f_9771},
{C_text("f_9773:eval_2escm"),(void*)f_9773},
{C_text("f_9781:eval_2escm"),(void*)f_9781},
{C_text("f_9785:eval_2escm"),(void*)f_9785},
{C_text("f_9787:eval_2escm"),(void*)f_9787},
{C_text("f_9825:eval_2escm"),(void*)f_9825},
{C_text("f_9830:eval_2escm"),(void*)f_9830},
{C_text("f_9834:eval_2escm"),(void*)f_9834},
{C_text("f_9837:eval_2escm"),(void*)f_9837},
{C_text("f_9853:eval_2escm"),(void*)f_9853},
{C_text("f_9857:eval_2escm"),(void*)f_9857},
{C_text("f_9861:eval_2escm"),(void*)f_9861},
{C_text("f_9865:eval_2escm"),(void*)f_9865},
{C_text("f_9869:eval_2escm"),(void*)f_9869},
{C_text("f_9872:eval_2escm"),(void*)f_9872},
{C_text("f_9875:eval_2escm"),(void*)f_9875},
{C_text("f_9878:eval_2escm"),(void*)f_9878},
{C_text("f_9883:eval_2escm"),(void*)f_9883},
{C_text("f_9889:eval_2escm"),(void*)f_9889},
{C_text("f_9898:eval_2escm"),(void*)f_9898},
{C_text("f_9902:eval_2escm"),(void*)f_9902},
{C_text("f_9905:eval_2escm"),(void*)f_9905},
{C_text("f_9910:eval_2escm"),(void*)f_9910},
{C_text("f_9915:eval_2escm"),(void*)f_9915},
{C_text("f_9917:eval_2escm"),(void*)f_9917},
{C_text("f_9921:eval_2escm"),(void*)f_9921},
{C_text("f_9924:eval_2escm"),(void*)f_9924},
{C_text("f_9927:eval_2escm"),(void*)f_9927},
{C_text("f_9932:eval_2escm"),(void*)f_9932},
{C_text("f_9942:eval_2escm"),(void*)f_9942},
{C_text("f_9945:eval_2escm"),(void*)f_9945},
{C_text("f_9952:eval_2escm"),(void*)f_9952},
{C_text("f_9954:eval_2escm"),(void*)f_9954},
{C_text("f_9961:eval_2escm"),(void*)f_9961},
{C_text("f_9966:eval_2escm"),(void*)f_9966},
{C_text("f_9972:eval_2escm"),(void*)f_9972},
{C_text("f_9976:eval_2escm"),(void*)f_9976},
{C_text("f_9983:eval_2escm"),(void*)f_9983},
{C_text("f_9988:eval_2escm"),(void*)f_9988},
{C_text("f_9997:eval_2escm"),(void*)f_9997},
{C_text("toplevel:eval_2escm"),(void*)C_eval_toplevel},
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
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#define-alias 
o|hiding unexported module binding: chicken.eval#d 
o|hiding unexported module binding: chicken.eval#eval-decorator 
o|hiding unexported module binding: chicken.eval#compile-to-closure 
o|hiding unexported module binding: chicken.load#partition 
o|hiding unexported module binding: chicken.load#span 
o|hiding unexported module binding: chicken.load#take 
o|hiding unexported module binding: chicken.load#drop 
o|hiding unexported module binding: chicken.load#split-at 
o|hiding unexported module binding: chicken.load#append-map 
o|hiding unexported module binding: chicken.load#every 
o|hiding unexported module binding: chicken.load#any 
o|hiding unexported module binding: chicken.load#cons* 
o|hiding unexported module binding: chicken.load#concatenate 
o|hiding unexported module binding: chicken.load#delete 
o|hiding unexported module binding: chicken.load#first 
o|hiding unexported module binding: chicken.load#second 
o|hiding unexported module binding: chicken.load#third 
o|hiding unexported module binding: chicken.load#fourth 
o|hiding unexported module binding: chicken.load#fifth 
o|hiding unexported module binding: chicken.load#delete-duplicates 
o|hiding unexported module binding: chicken.load#alist-cons 
o|hiding unexported module binding: chicken.load#filter 
o|hiding unexported module binding: chicken.load#filter-map 
o|hiding unexported module binding: chicken.load#remove 
o|hiding unexported module binding: chicken.load#unzip1 
o|hiding unexported module binding: chicken.load#last 
o|hiding unexported module binding: chicken.load#list-index 
o|hiding unexported module binding: chicken.load#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.load#lset-difference/eq? 
o|hiding unexported module binding: chicken.load#lset-union/eq? 
o|hiding unexported module binding: chicken.load#lset-intersection/eq? 
o|hiding unexported module binding: chicken.load#list-tabulate 
o|hiding unexported module binding: chicken.load#lset<=/eq? 
o|hiding unexported module binding: chicken.load#lset=/eq? 
o|hiding unexported module binding: chicken.load#length+ 
o|hiding unexported module binding: chicken.load#find 
o|hiding unexported module binding: chicken.load#find-tail 
o|hiding unexported module binding: chicken.load#iota 
o|hiding unexported module binding: chicken.load#make-list 
o|hiding unexported module binding: chicken.load#posq 
o|hiding unexported module binding: chicken.load#posv 
o|hiding unexported module binding: chicken.load#constant2175 
o|hiding unexported module binding: chicken.load#constant2178 
o|hiding unexported module binding: chicken.load#constant2182 
o|hiding unexported module binding: chicken.load#constant2187 
o|hiding unexported module binding: chicken.load#constant2193 
o|hiding unexported module binding: chicken.load#constant2200 
o|hiding unexported module binding: chicken.load#constant2208 
o|hiding unexported module binding: chicken.load#constant2217 
o|hiding unexported module binding: chicken.load#load-library-extension 
o|hiding unexported module binding: chicken.load#default-dynamic-load-libraries 
o|hiding unexported module binding: chicken.load#path-separators 
o|hiding unexported module binding: chicken.load#path-separator-index/right 
o|hiding unexported module binding: chicken.load#make-relative-pathname 
o|hiding unexported module binding: chicken.load#toplevel 
o|hiding unexported module binding: chicken.load#c-toplevel 
o|hiding unexported module binding: chicken.load#load/internal 
o|hiding unexported module binding: chicken.load#evaluator 
o|hiding unexported module binding: chicken.load#load-unit 
o|hiding unexported module binding: chicken.load#file-exists? 
o|hiding unexported module binding: chicken.load#find-file 
o|hiding unexported module binding: chicken.load#find-dynamic-extension 
o|hiding unexported module binding: chicken.load#load-extension 
S|applied compiler syntax:
S|  chicken.base#foldl		3
S|  chicken.base#foldr		4
S|  scheme#for-each		7
S|  ##sys#map		4
S|  scheme#map		17
o|eliminated procedure checks: 275 
o|folded constant expression: (scheme#integer->char (quote 127)) 
o|specializations:
o|  1 (scheme#number->string fixnum)
o|  1 (##sys#debug-mode?)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  1 (scheme#eqv? * *)
o|  3 (scheme#memq * list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  1 (scheme#length list)
o|  3 (scheme#cddr (pair * pair))
o|  13 (scheme#car pair)
o|  17 (##sys#check-list (or pair list) *)
o|  1 (scheme#zero? *)
o|  12 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  79 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  26 (scheme#cdr pair)
o|  2 (scheme#cdar (pair pair *))
(o e)|safe calls: 1093 
(o e)|assignments to immediate values: 1 
o|safe globals: (##sys#unbound-in-eval chicken.eval#eval-decorator) 
o|merged explicitly consed rest parameter: rest181184 
o|inlining procedure: k3660 
o|inlining procedure: k3660 
o|inlining procedure: k3698 
o|inlining procedure: k3698 
o|inlining procedure: k3713 
o|inlining procedure: k3713 
o|inlining procedure: k3741 
o|inlining procedure: k3741 
o|contracted procedure: "(eval.scm:106) posq231" 
o|inlining procedure: k3788 
o|inlining procedure: k3788 
o|inlining procedure: k3818 
o|inlining procedure: k3818 
o|inlining procedure: k3832 
o|inlining procedure: k3832 
o|contracted procedure: "(eval.scm:132) chicken.eval#eval-decorator" 
o|inlining procedure: k3595 
o|inlining procedure: k3595 
o|inlining procedure: k3946 
o|inlining procedure: k3946 
o|inlining procedure: k3972 
o|inlining procedure: k3995 
o|inlining procedure: k3995 
o|inlining procedure: k4022 
o|inlining procedure: k4022 
o|inlining procedure: k4035 
o|inlining procedure: k4035 
o|inlining procedure: k4050 
o|inlining procedure: k4050 
o|inlining procedure: k3972 
o|inlining procedure: k4083 
o|inlining procedure: k4083 
o|inlining procedure: k4125 
o|inlining procedure: k4125 
o|substituted constant variable: a4159 
o|substituted constant variable: a4161 
o|substituted constant variable: a4163 
o|substituted constant variable: a4165 
o|inlining procedure: k4166 
o|inlining procedure: k4180 
o|inlining procedure: k4180 
o|inlining procedure: k4196 
o|inlining procedure: k4196 
o|substituted constant variable: a4207 
o|substituted constant variable: a4209 
o|substituted constant variable: a4211 
o|substituted constant variable: a4213 
o|inlining procedure: k4166 
o|inlining procedure: k4220 
o|inlining procedure: k4220 
o|inlining procedure: k4227 
o|inlining procedure: k4227 
o|inlining procedure: k4247 
o|inlining procedure: k4280 
o|inlining procedure: k4297 
o|inlining procedure: k4297 
o|inlining procedure: k4313 
o|inlining procedure: k4313 
o|inlining procedure: k4329 
o|inlining procedure: k4329 
o|substituted constant variable: a4348 
o|substituted constant variable: a4350 
o|substituted constant variable: a4352 
o|substituted constant variable: a4354 
o|substituted constant variable: a4356 
o|substituted constant variable: a4358 
o|substituted constant variable: a4360 
o|inlining procedure: k4280 
o|inlining procedure: k4376 
o|inlining procedure: k4376 
o|inlining procedure: k4402 
o|inlining procedure: k4402 
o|inlining procedure: k4427 
o|inlining procedure: k4427 
o|inlining procedure: k4464 
o|inlining procedure: k4485 
o|inlining procedure: k4485 
o|substituted constant variable: a4567 
o|substituted constant variable: a4569 
o|substituted constant variable: a4571 
o|inlining procedure: k4464 
o|inlining procedure: k4598 
o|inlining procedure: k4622 
o|inlining procedure: k4653 
o|inlining procedure: k4653 
o|inlining procedure: k4622 
o|inlining procedure: k4598 
o|inlining procedure: k4745 
o|inlining procedure: k4745 
o|inlining procedure: k4828 
o|inlining procedure: k4828 
o|inlining procedure: k5012 
o|inlining procedure: k5012 
o|inlining procedure: k5042 
o|inlining procedure: k5042 
o|substituted constant variable: a5074 
o|substituted constant variable: a5076 
o|substituted constant variable: a5078 
o|substituted constant variable: a5080 
o|consed rest parameter at call site: "(eval.scm:315) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k5133 
o|inlining procedure: k5133 
o|inlining procedure: k5167 
o|contracted procedure: "(eval.scm:310) g510519" 
o|inlining procedure: k5167 
o|inlining procedure: k5198 
o|inlining procedure: k5278 
o|contracted procedure: "(eval.scm:365) g673682" 
o|inlining procedure: k5278 
o|inlining procedure: k5312 
o|contracted procedure: "(eval.scm:362) g646655" 
o|inlining procedure: k5312 
o|inlining procedure: k5198 
o|inlining procedure: k5454 
o|contracted procedure: "(eval.scm:382) g822832" 
o|inlining procedure: k5454 
o|inlining procedure: k5502 
o|contracted procedure: "(eval.scm:381) g789799" 
o|inlining procedure: k5502 
o|inlining procedure: k5550 
o|contracted procedure: "(eval.scm:378) g762771" 
o|inlining procedure: k5550 
o|inlining procedure: k5584 
o|inlining procedure: k5584 
o|inlining procedure: k5618 
o|inlining procedure: k5618 
o|inlining procedure: k5649 
o|inlining procedure: k5693 
o|inlining procedure: k5693 
o|inlining procedure: k5742 
o|inlining procedure: k5742 
o|inlining procedure: k5783 
o|inlining procedure: k5783 
o|inlining procedure: k5836 
o|inlining procedure: k5836 
o|inlining procedure: k5877 
o|inlining procedure: k5877 
o|contracted procedure: "(eval.scm:471) fudge-argument-list238" 
o|inlining procedure: k7434 
o|inlining procedure: k7434 
o|inlining procedure: k7449 
o|inlining procedure: k7449 
o|inlining procedure: k7474 
o|inlining procedure: k7474 
o|inlining procedure: k5959 
o|inlining procedure: k5959 
o|substituted constant variable: a5984 
o|substituted constant variable: a5986 
o|substituted constant variable: a5988 
o|substituted constant variable: a5990 
o|substituted constant variable: a5992 
o|consed rest parameter at call site: "(eval.scm:406) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k6021 
o|consed rest parameter at call site: "(eval.scm:406) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k6021 
o|consed rest parameter at call site: "(eval.scm:406) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k6041 
o|inlining procedure: k6041 
o|inlining procedure: k6094 
o|inlining procedure: k6094 
o|inlining procedure: k5649 
o|inlining procedure: k6209 
o|contracted procedure: "(eval.scm:486) g976985" 
o|inlining procedure: k6209 
o|inlining procedure: k6240 
o|inlining procedure: k6354 
o|inlining procedure: k6354 
o|inlining procedure: k6381 
o|contracted procedure: "(eval.scm:500) g10111020" 
o|inlining procedure: k6381 
o|inlining procedure: k6240 
o|inlining procedure: k6471 
o|inlining procedure: k6471 
o|inlining procedure: k6501 
o|inlining procedure: k6501 
o|inlining procedure: k6519 
o|inlining procedure: k6566 
o|contracted procedure: "(eval.scm:550) g10811090" 
o|inlining procedure: k6566 
o|inlining procedure: k6519 
o|substituted constant variable: saved115611571175 
o|inlining procedure: k6702 
o|inlining procedure: k6725 
o|inlining procedure: k6725 
o|inlining procedure: k6702 
o|inlining procedure: k6821 
o|inlining procedure: k6821 
o|inlining procedure: k6848 
o|inlining procedure: k6848 
o|inlining procedure: k6878 
o|inlining procedure: k6878 
o|inlining procedure: k6913 
o|inlining procedure: k6913 
o|inlining procedure: k6955 
o|inlining procedure: k6955 
o|inlining procedure: k6999 
o|inlining procedure: k6999 
o|inlining procedure: k7031 
o|inlining procedure: k7031 
o|inlining procedure: k7055 
o|inlining procedure: k7055 
o|inlining procedure: k7091 
o|removed unused parameter to known procedure: se1330 "(eval.scm:649) compile-call240" 
o|inlining procedure: k7091 
o|inlining procedure: k7121 
o|inlining procedure: k7121 
o|removed unused parameter to known procedure: se1330 "(eval.scm:667) compile-call240" 
o|substituted constant variable: a7183 
o|substituted constant variable: a7185 
o|substituted constant variable: a7187 
o|inlining procedure: k7191 
o|inlining procedure: k7191 
o|inlining procedure: k7203 
o|inlining procedure: k7203 
o|inlining procedure: k7215 
o|inlining procedure: k7215 
o|inlining procedure: k7227 
o|inlining procedure: k7227 
o|inlining procedure: k7239 
o|inlining procedure: k7239 
o|substituted constant variable: a7246 
o|substituted constant variable: a7248 
o|substituted constant variable: a7250 
o|substituted constant variable: a7252 
o|substituted constant variable: a7254 
o|substituted constant variable: a7256 
o|substituted constant variable: a7258 
o|substituted constant variable: a7260 
o|substituted constant variable: a7262 
o|substituted constant variable: a7264 
o|substituted constant variable: a7266 
o|substituted constant variable: a7271 
o|substituted constant variable: a7273 
o|substituted constant variable: a7275 
o|inlining procedure: k7279 
o|inlining procedure: k7279 
o|substituted constant variable: a7286 
o|substituted constant variable: a7288 
o|substituted constant variable: a7290 
o|substituted constant variable: a7292 
o|substituted constant variable: a7297 
o|substituted constant variable: a7299 
o|substituted constant variable: a7301 
o|substituted constant variable: a7303 
o|substituted constant variable: a7305 
o|substituted constant variable: a7307 
o|substituted constant variable: a7309 
o|substituted constant variable: a7311 
o|substituted constant variable: a7313 
o|substituted constant variable: a7315 
o|substituted constant variable: a7317 
o|substituted constant variable: a7319 
o|substituted constant variable: a7321 
o|substituted constant variable: a7323 
o|substituted constant variable: a7325 
o|substituted constant variable: a7327 
o|substituted constant variable: a7329 
o|substituted constant variable: a7331 
o|substituted constant variable: a7333 
o|substituted constant variable: a7335 
o|substituted constant variable: a7337 
o|substituted constant variable: a7339 
o|substituted constant variable: a7341 
o|substituted constant variable: a7343 
o|substituted constant variable: a7345 
o|substituted constant variable: a7347 
o|substituted constant variable: a7349 
o|substituted constant variable: a7351 
o|contracted procedure: "(eval.scm:220) handle-expansion-result235" 
o|inlining procedure: k3860 
o|inlining procedure: k3860 
o|inlining procedure: k4247 
o|removed unused parameter to known procedure: se1330 "(eval.scm:671) compile-call240" 
o|inlining procedure: k7401 
o|inlining procedure: k7401 
o|inlining procedure: k7413 
o|inlining procedure: k7413 
o|inlining procedure: k7425 
o|inlining procedure: k7425 
o|removed unused formal parameters: (se1330) 
o|inlining procedure: k7539 
o|inlining procedure: k7539 
o|inlining procedure: k7565 
o|inlining procedure: k7565 
o|inlining procedure: k7629 
o|inlining procedure: k7629 
o|inlining procedure: k7769 
o|inlining procedure: k7769 
o|inlining procedure: k7803 
o|inlining procedure: k7803 
o|substituted constant variable: a7835 
o|substituted constant variable: a7837 
o|substituted constant variable: a7839 
o|substituted constant variable: a7841 
o|substituted constant variable: a7843 
o|substituted constant variable: a7845 
o|contracted procedure: "(eval.scm:699) checked-length239" 
o|inlining procedure: k7495 
o|inlining procedure: k7495 
o|substituted constant variable: saved145314541468 
o|consed rest parameter at call site: "(eval.scm:745) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k8067 
o|inlining procedure: k8067 
o|inlining procedure: k8089 
o|inlining procedure: k8089 
o|inlining procedure: k8166 
o|contracted procedure: "(eval.scm:855) g16151616" 
o|substituted constant variable: a8181 
o|inlining procedure: k8174 
o|inlining procedure: k8174 
o|inlining procedure: k8166 
o|inlining procedure: k8218 
o|inlining procedure: k8218 
o|substituted constant variable: a8234 
o|substituted constant variable: a8236 
o|inlining procedure: k8243 
o|inlining procedure: k8243 
o|substituted constant variable: a8259 
o|substituted constant variable: a8261 
o|removed side-effect free assignment to unused variable: chicken.load#partition 
o|removed side-effect free assignment to unused variable: chicken.load#span 
o|removed side-effect free assignment to unused variable: chicken.load#drop 
o|removed side-effect free assignment to unused variable: chicken.load#split-at 
o|removed side-effect free assignment to unused variable: chicken.load#append-map 
o|inlining procedure: k8646 
o|inlining procedure: k8646 
o|inlining procedure: k8677 
o|inlining procedure: k8677 
o|removed side-effect free assignment to unused variable: chicken.load#cons* 
o|removed side-effect free assignment to unused variable: chicken.load#concatenate 
o|removed side-effect free assignment to unused variable: chicken.load#first 
o|removed side-effect free assignment to unused variable: chicken.load#second 
o|removed side-effect free assignment to unused variable: chicken.load#third 
o|removed side-effect free assignment to unused variable: chicken.load#fourth 
o|removed side-effect free assignment to unused variable: chicken.load#fifth 
o|removed side-effect free assignment to unused variable: chicken.load#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.load#alist-cons 
o|inlining procedure: k8894 
o|inlining procedure: k8894 
o|inlining procedure: k8886 
o|inlining procedure: k8886 
o|removed side-effect free assignment to unused variable: chicken.load#filter-map 
o|removed side-effect free assignment to unused variable: chicken.load#remove 
o|removed side-effect free assignment to unused variable: chicken.load#unzip1 
o|removed side-effect free assignment to unused variable: chicken.load#last 
o|removed side-effect free assignment to unused variable: chicken.load#list-index 
o|removed side-effect free assignment to unused variable: chicken.load#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset-intersection/eq? 
o|inlining procedure: k9285 
o|inlining procedure: k9285 
o|removed side-effect free assignment to unused variable: chicken.load#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.load#length+ 
o|removed side-effect free assignment to unused variable: chicken.load#find 
o|removed side-effect free assignment to unused variable: chicken.load#find-tail 
o|removed side-effect free assignment to unused variable: chicken.load#iota 
o|removed side-effect free assignment to unused variable: chicken.load#make-list 
o|removed side-effect free assignment to unused variable: chicken.load#posq 
o|removed side-effect free assignment to unused variable: chicken.load#posv 
o|inlining procedure: k9562 
o|inlining procedure: k9562 
o|inlining procedure: k9598 
o|inlining procedure: k9598 
o|inlining procedure: k9629 
o|inlining procedure: k9629 
o|inlining procedure: k9645 
o|substituted constant variable: a9664 
o|inlining procedure: k9645 
o|inlining procedure: k9687 
o|inlining procedure: k9710 
o|inlining procedure: k9710 
o|inlining procedure: k9724 
o|inlining procedure: k9724 
o|substituted constant variable: a9739 
o|substituted constant variable: a9741 
o|substituted constant variable: a9743 
o|substituted constant variable: a9745 
o|inlining procedure: k9687 
o|contracted procedure: "(eval.scm:1037) chicken.load#toplevel" 
o|inlining procedure: k9755 
o|inlining procedure: k9755 
o|merged explicitly consed rest parameter: rest22942297 
o|inlining procedure: k9820 
o|inlining procedure: k9820 
o|inlining procedure: k9838 
o|inlining procedure: k9838 
o|inlining procedure: k9876 
o|inlining procedure: k9876 
o|inlining procedure: k9934 
o|inlining procedure: k9934 
o|inlining procedure: k9956 
o|inlining procedure: k9956 
o|inlining procedure: k9990 
o|inlining procedure: k10007 
o|inlining procedure: k10007 
o|inlining procedure: k9990 
o|inlining procedure: k10044 
o|inlining procedure: k10044 
o|inlining procedure: k10068 
o|inlining procedure: k10068 
o|inlining procedure: k10095 
o|inlining procedure: k10095 
o|inlining procedure: k10116 
o|inlining procedure: k10116 
o|inlining procedure: k10134 
o|inlining procedure: k10134 
o|inlining procedure: k10201 
o|inlining procedure: k10201 
o|consed rest parameter at call site: "(eval.scm:1137) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1141) chicken.load#load/internal" 3 
o|consed rest parameter at call site: "(eval.scm:1144) chicken.load#load/internal" 3 
o|propagated global variable: g24812482 ##sys#string-append 
o|inlining procedure: k10300 
o|inlining procedure: k10300 
o|inlining procedure: k10321 
o|inlining procedure: k10334 
o|inlining procedure: k10334 
o|inlining procedure: k10321 
o|inlining procedure: k10464 
o|inlining procedure: k10464 
o|inlining procedure: k10512 
o|inlining procedure: k10512 
o|inlining procedure: k10521 
o|inlining procedure: k10521 
o|inlining procedure: k10533 
o|inlining procedure: k10533 
o|inlining procedure: k10583 
o|inlining procedure: k10583 
o|inlining procedure: k10593 
o|inlining procedure: k10593 
o|inlining procedure: k10622 
o|inlining procedure: k10622 
o|inlining procedure: k10657 
o|inlining procedure: k10657 
o|inlining procedure: k10669 
o|inlining procedure: k10669 
o|consed rest parameter at call site: "(eval.scm:1261) chicken.load#load/internal" 3 
o|inlining procedure: k10721 
o|inlining procedure: k10721 
o|contracted procedure: "(eval.scm:1256) g26202621" 
o|inlining procedure: k10677 
o|inlining procedure: k10677 
o|inlining procedure: k10693 
o|inlining procedure: k10693 
o|inlining procedure: k10760 
o|contracted procedure: "(eval.scm:1269) g26572679" 
o|propagated global variable: g26872688 chicken.load#load-extension 
o|inlining procedure: k10760 
o|inlining procedure: k10783 
o|contracted procedure: "(eval.scm:1268) g26472664" 
o|inlining procedure: k10783 
o|inlining procedure: k10825 
o|contracted procedure: "(eval.scm:1273) g27102732" 
o|propagated global variable: g27402741 ##sys#provide 
o|inlining procedure: k10825 
o|inlining procedure: k10848 
o|contracted procedure: "(eval.scm:1272) g27002717" 
o|inlining procedure: k10848 
o|inlining procedure: k10885 
o|contracted procedure: "(eval.scm:1276) g27532760" 
o|inlining procedure: k10885 
o|inlining procedure: k10921 
o|inlining procedure: k10921 
o|inlining procedure: k10933 
o|inlining procedure: k10933 
o|inlining procedure: k10954 
o|inlining procedure: k10954 
o|inlining procedure: k10984 
o|inlining procedure: k10984 
o|inlining procedure: k11021 
o|inlining procedure: k11021 
o|inlining procedure: k11036 
o|inlining procedure: k11036 
o|inlining procedure: k11055 
o|inlining procedure: k11055 
o|inlining procedure: k11068 
o|inlining procedure: k11068 
o|inlining procedure: k11102 
o|inlining procedure: k11102 
o|inlining procedure: k11175 
o|inlining procedure: k11175 
o|inlining procedure: k11241 
o|inlining procedure: k11241 
o|propagated global variable: tmp30303032 last-error 
o|inlining procedure: k11401 
o|propagated global variable: tmp30303032 last-error 
o|inlining procedure: k11401 
o|inlining procedure: k11420 
o|inlining procedure: k11420 
o|substituted constant variable: chicken.load#constant2182 
o|substituted constant variable: a11475 
o|substituted constant variable: chicken.load#constant2193 
o|inlining procedure: k11479 
o|substituted constant variable: chicken.load#constant2187 
o|propagated global variable: r1148012109 chicken.load#constant2187 
o|inlining procedure: k11479 
o|substituted constant variable: chicken.load#constant2200 
o|inlining procedure: k11488 
o|substituted constant variable: chicken.load#constant2200 
o|inlining procedure: k11488 
o|substituted constant variable: chicken.load#constant2200 
o|inlining procedure: k11609 
o|inlining procedure: k11609 
o|inlining procedure: k11646 
o|consed rest parameter at call site: "(eval.scm:779) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:780) chicken.eval#compile-to-closure" 3 
o|inlining procedure: k11646 
o|consed rest parameter at call site: "(eval.scm:783) chicken.eval#compile-to-closure" 3 
o|consed rest parameter at call site: "(eval.scm:768) chicken.eval#compile-to-closure" 3 
o|simplifications: ((if . 1)) 
o|replaced variables: 1977 
o|removed binding forms: 490 
o|substituted constant variable: r366111760 
o|substituted constant variable: r378911768 
o|removed call to pure procedure with unused result: "(eval.scm:103) chicken.base#void" 
o|substituted constant variable: r359611775 
o|substituted constant variable: r405111786 
o|substituted constant variable: r465411824 
o|substituted constant variable: r609511884 
o|substituted constant variable: r609511884 
o|removed call to pure procedure with unused result: "(eval.scm:222) chicken.base#void" 
o|inlining procedure: k3860 
o|converted assignments to bindings: (err1583) 
o|substituted constant variable: r816711970 
o|removed side-effect free assignment to unused variable: chicken.load#any 
o|removed side-effect free assignment to unused variable: chicken.load#filter 
o|removed side-effect free assignment to unused variable: chicken.load#list-tabulate 
o|removed side-effect free assignment to unused variable: chicken.load#constant2182 
o|removed side-effect free assignment to unused variable: chicken.load#constant2193 
o|removed side-effect free assignment to unused variable: chicken.load#constant2200 
o|substituted constant variable: r964611992 
o|substituted constant variable: r975611999 
o|contracted procedure: "(eval.scm:1118) g23962403" 
o|substituted constant variable: r1004512019 
o|substituted constant variable: r1004512019 
o|substituted constant variable: r1006912022 
o|substituted constant variable: r1013512028 
o|substituted constant variable: r1033512036 
o|substituted constant variable: r1033512036 
o|inlining procedure: k10397 
o|substituted constant variable: r1051312042 
o|substituted constant variable: r1052212043 
o|substituted constant variable: r1059412050 
o|substituted constant variable: r1062312052 
o|substituted constant variable: r1065812053 
o|substituted constant variable: r1065812053 
o|substituted constant variable: r1065812055 
o|substituted constant variable: r1065812055 
o|converted assignments to bindings: (check2595) 
o|substituted constant variable: r1069412064 
o|contracted procedure: "(eval.scm:1277) chicken.load#every" 
o|substituted constant variable: r1106912091 
o|substituted constant variable: r1110312095 
o|substituted constant variable: r1110312095 
o|substituted constant variable: r1124212101 
o|propagated global variable: r1140212103 last-error 
o|substituted constant variable: r1140212105 
o|substituted constant variable: r1140212105 
o|converted assignments to bindings: (complete2474) 
o|substituted constant variable: chicken.load#constant2187 
o|substituted constant variable: r1148912112 
o|converted assignments to bindings: (strip1604) 
o|simplifications: ((let . 4)) 
o|replaced variables: 139 
o|removed binding forms: 1670 
o|removed conditional forms: 1 
o|contracted procedure: k3732 
o|removed unused formal parameters: (h300 cntr301) 
o|contracted procedure: k4265 
o|removed unused parameter to known procedure: h300 "(eval.scm:412) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:412) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:417) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:417) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:422) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:422) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:427) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:427) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:433) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:433) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:438) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:438) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:444) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:444) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:449) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:449) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:455) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:455) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:460) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:460) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:467) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:467) decorate234" 
o|removed unused parameter to known procedure: h300 "(eval.scm:474) decorate234" 
o|removed unused parameter to known procedure: cntr301 "(eval.scm:474) decorate234" 
o|inlining procedure: k6454 
o|inlining procedure: k3866 
o|inlining procedure: k3866 
o|removed side-effect free assignment to unused variable: chicken.load#constant2187 
o|inlining procedure: k9696 
o|inlining procedure: k9696 
o|inlining procedure: k9696 
o|inlining procedure: k9696 
o|inlining procedure: k9783 
o|inlining procedure: k10122 
o|inlining procedure: k10122 
o|inlining procedure: k10221 
o|propagated global variable: r1140212103 last-error 
o|replaced variables: 4 
o|removed binding forms: 149 
o|contracted procedure: k4259 
o|substituted constant variable: r645512306 
o|substituted constant variable: r978412355 
o|substituted constant variable: r1012312361 
o|substituted constant variable: r1012312361 
o|substituted constant variable: r1022212362 
o|replaced variables: 6 
o|removed binding forms: 16 
o|removed conditional forms: 2 
o|removed binding forms: 7 
o|simplifications: ((if . 54) (##core#call . 721) (let . 28)) 
o|  call simplifications:
o|    ##sys#check-structure
o|    ##sys#size
o|    ##sys#setislot	2
o|    ##sys#check-symbol	4
o|    ##sys#check-string
o|    ##sys#get-keyword
o|    scheme#call-with-current-continuation
o|    scheme#string-length	2
o|    scheme#string-ref
o|    chicken.fixnum#fx<
o|    scheme#memq	3
o|    ##sys#check-fixnum	2
o|    chicken.fixnum#fx>
o|    scheme#procedure?	2
o|    scheme#number?
o|    scheme#boolean?
o|    scheme#char?
o|    scheme#eof-object?	3
o|    chicken.base#bwp-object?
o|    scheme#string?	4
o|    scheme#vector?
o|    ##sys#void
o|    scheme#set-car!
o|    chicken.fixnum#fx=	2
o|    chicken.fixnum#fx-	4
o|    scheme#apply	7
o|    scheme#list	13
o|    ##sys#list	20
o|    ##sys#check-list	15
o|    chicken.fixnum#fx>=	2
o|    scheme#cddr	8
o|    scheme#car	29
o|    scheme#vector	12
o|    scheme#cdr	17
o|    scheme#length	2
o|    scheme#assq	6
o|    scheme#cons	64
o|    scheme#cadr	34
o|    scheme#caddr	8
o|    scheme#cdddr	4
o|    scheme#pair?	39
o|    ##sys#cons	18
o|    scheme#cadddr	4
o|    ##sys#setslot	28
o|    ##sys#immediate?
o|    scheme#not	30
o|    ##sys#make-structure	2
o|    ##sys#slot	141
o|    chicken.fixnum#fx+	6
o|    scheme#values	3
o|    ##sys#call-with-values	8
o|    ##sys#apply	4
o|    scheme#null?	33
o|    scheme#caar
o|    scheme#eq?	109
o|    scheme#symbol?	10
o|contracted procedure: k7911 
o|contracted procedure: k3633 
o|contracted procedure: k7905 
o|contracted procedure: k3636 
o|contracted procedure: k7899 
o|contracted procedure: k3639 
o|contracted procedure: k7893 
o|contracted procedure: k3642 
o|contracted procedure: k7887 
o|contracted procedure: k3645 
o|contracted procedure: k7881 
o|contracted procedure: k3648 
o|contracted procedure: k7875 
o|contracted procedure: k3651 
o|contracted procedure: k7869 
o|contracted procedure: k3654 
o|contracted procedure: k3663 
o|contracted procedure: k3689 
o|contracted procedure: k3679 
o|contracted procedure: k3744 
o|contracted procedure: k3768 
o|contracted procedure: k3772 
o|contracted procedure: k3776 
o|contracted procedure: k3791 
o|contracted procedure: k3812 
o|contracted procedure: k3797 
o|contracted procedure: k3804 
o|contracted procedure: k3808 
o|contracted procedure: k3822 
o|contracted procedure: k3826 
o|contracted procedure: k3839 
o|contracted procedure: k3843 
o|contracted procedure: k3602 
o|contracted procedure: k3598 
o|contracted procedure: k3608 
o|contracted procedure: k3886 
o|contracted procedure: k3890 
o|contracted procedure: k3940 
o|contracted procedure: k3918 
o|contracted procedure: k3933 
o|contracted procedure: k3957 
o|contracted procedure: k3975 
o|contracted procedure: k3987 
o|contracted procedure: k4016 
o|contracted procedure: k4012 
o|contracted procedure: k4019 
o|contracted procedure: k4065 
o|contracted procedure: k4032 
o|contracted procedure: k4038 
o|contracted procedure: k4044 
o|contracted procedure: k4057 
o|contracted procedure: k4053 
o|contracted procedure: k4071 
o|contracted procedure: k4080 
o|contracted procedure: k4086 
o|contracted procedure: k4099 
o|contracted procedure: k4095 
o|contracted procedure: k4105 
o|contracted procedure: k4122 
o|contracted procedure: k4118 
o|contracted procedure: k4114 
o|contracted procedure: k4128 
o|contracted procedure: k4149 
o|contracted procedure: k4145 
o|contracted procedure: k4141 
o|contracted procedure: k4137 
o|contracted procedure: k4169 
o|contracted procedure: k4175 
o|contracted procedure: k4183 
o|contracted procedure: k4191 
o|contracted procedure: k4199 
o|contracted procedure: k4217 
o|contracted procedure: k4230 
o|contracted procedure: k7395 
o|contracted procedure: k4241 
o|contracted procedure: k7391 
o|contracted procedure: k4250 
o|contracted procedure: k3876 
o|contracted procedure: k3857 
o|contracted procedure: k7357 
o|contracted procedure: k4271 
o|contracted procedure: k4283 
o|contracted procedure: k4292 
o|contracted procedure: k4300 
o|contracted procedure: k4308 
o|contracted procedure: k4316 
o|contracted procedure: k4324 
o|contracted procedure: k4332 
o|contracted procedure: k4340 
o|contracted procedure: k4362 
o|contracted procedure: k4368 
o|contracted procedure: k4371 
o|contracted procedure: k4379 
o|contracted procedure: k4386 
o|contracted procedure: k4392 
o|contracted procedure: k4399 
o|contracted procedure: k4405 
o|contracted procedure: k4413 
o|contracted procedure: k4453 
o|contracted procedure: k4439 
o|contracted procedure: k4446 
o|contracted procedure: k4457 
o|contracted procedure: k4461 
o|contracted procedure: k4467 
o|contracted procedure: k4470 
o|contracted procedure: k4473 
o|contracted procedure: k4479 
o|contracted procedure: k4488 
o|contracted procedure: k4495 
o|contracted procedure: k4501 
o|contracted procedure: k4519 
o|contracted procedure: k4523 
o|contracted procedure: k4555 
o|contracted procedure: k4551 
o|contracted procedure: k4547 
o|contracted procedure: k4559 
o|contracted procedure: k4563 
o|contracted procedure: k4575 
o|contracted procedure: k4588 
o|contracted procedure: k4595 
o|contracted procedure: k4601 
o|contracted procedure: k4604 
o|contracted procedure: k4625 
o|contracted procedure: k4650 
o|contracted procedure: k4666 
o|contracted procedure: k4656 
o|contracted procedure: k4683 
o|contracted procedure: k4701 
o|contracted procedure: k4707 
o|contracted procedure: k4710 
o|contracted procedure: k4713 
o|contracted procedure: k4716 
o|contracted procedure: k4727 
o|contracted procedure: k4730 
o|contracted procedure: k4736 
o|contracted procedure: k4748 
o|contracted procedure: k4764 
o|contracted procedure: k4760 
o|contracted procedure: k4776 
o|contracted procedure: k4782 
o|contracted procedure: k4801 
o|contracted procedure: k4797 
o|contracted procedure: k4817 
o|contracted procedure: k4825 
o|contracted procedure: k4831 
o|contracted procedure: k4840 
o|contracted procedure: k4856 
o|contracted procedure: k4852 
o|contracted procedure: k4876 
o|contracted procedure: k4884 
o|contracted procedure: k4892 
o|contracted procedure: k4898 
o|contracted procedure: k4907 
o|contracted procedure: k4926 
o|contracted procedure: k4922 
o|contracted procedure: k4950 
o|contracted procedure: k4958 
o|contracted procedure: k4966 
o|contracted procedure: k4974 
o|contracted procedure: k4977 
o|contracted procedure: k4986 
o|contracted procedure: k5006 
o|contracted procedure: k5015 
o|contracted procedure: k5018 
o|contracted procedure: k5025 
o|contracted procedure: k5029 
o|contracted procedure: k5036 
o|contracted procedure: k5045 
o|contracted procedure: k5048 
o|contracted procedure: k5051 
o|contracted procedure: k5059 
o|contracted procedure: k5067 
o|contracted procedure: k5109 
o|contracted procedure: k5136 
o|contracted procedure: k5139 
o|contracted procedure: k5142 
o|contracted procedure: k5150 
o|contracted procedure: k5158 
o|contracted procedure: k5170 
o|contracted procedure: k5192 
o|contracted procedure: k5188 
o|contracted procedure: k5173 
o|contracted procedure: k5176 
o|contracted procedure: k5184 
o|contracted procedure: k5201 
o|contracted procedure: k5204 
o|contracted procedure: k5221 
o|contracted procedure: k5233 
o|contracted procedure: k5217 
o|contracted procedure: k5213 
o|contracted procedure: k5244 
o|contracted procedure: k5272 
o|contracted procedure: k5268 
o|contracted procedure: k5264 
o|contracted procedure: k5281 
o|contracted procedure: k5303 
o|contracted procedure: k5253 
o|contracted procedure: k5257 
o|contracted procedure: k5299 
o|contracted procedure: k5284 
o|contracted procedure: k5287 
o|contracted procedure: k5295 
o|contracted procedure: k5315 
o|contracted procedure: k5337 
o|contracted procedure: k5230 
o|contracted procedure: k5333 
o|contracted procedure: k5318 
o|contracted procedure: k5321 
o|contracted procedure: k5329 
o|contracted procedure: k5346 
o|contracted procedure: k5349 
o|contracted procedure: k5352 
o|contracted procedure: k5355 
o|contracted procedure: k5361 
o|contracted procedure: k5364 
o|contracted procedure: k5370 
o|contracted procedure: k5381 
o|contracted procedure: k5405 
o|contracted procedure: k5417 
o|contracted procedure: k5401 
o|contracted procedure: k5397 
o|contracted procedure: k5377 
o|contracted procedure: k5428 
o|contracted procedure: k5448 
o|contracted procedure: k5444 
o|contracted procedure: k5440 
o|contracted procedure: k5493 
o|contracted procedure: k5457 
o|contracted procedure: k5483 
o|contracted procedure: k5487 
o|contracted procedure: k5479 
o|contracted procedure: k5460 
o|contracted procedure: k5463 
o|contracted procedure: k5471 
o|contracted procedure: k5475 
o|contracted procedure: k5541 
o|contracted procedure: k5505 
o|contracted procedure: k5531 
o|contracted procedure: k5535 
o|contracted procedure: k5414 
o|contracted procedure: k5527 
o|contracted procedure: k5508 
o|contracted procedure: k5511 
o|contracted procedure: k5519 
o|contracted procedure: k5523 
o|contracted procedure: k5553 
o|contracted procedure: k5575 
o|contracted procedure: k5390 
o|contracted procedure: k5571 
o|contracted procedure: k5556 
o|contracted procedure: k5559 
o|contracted procedure: k5567 
o|contracted procedure: k5587 
o|contracted procedure: k5590 
o|contracted procedure: k5593 
o|contracted procedure: k5601 
o|contracted procedure: k5609 
o|contracted procedure: k5621 
o|contracted procedure: k5643 
o|contracted procedure: k5639 
o|contracted procedure: k5624 
o|contracted procedure: k5627 
o|contracted procedure: k5635 
o|contracted procedure: k5652 
o|contracted procedure: k5658 
o|contracted procedure: k5663 
o|contracted procedure: k5675 
o|contracted procedure: k5678 
o|contracted procedure: k5687 
o|contracted procedure: k5696 
o|contracted procedure: k5718 
o|contracted procedure: k5714 
o|contracted procedure: k5733 
o|contracted procedure: k5739 
o|contracted procedure: k5761 
o|contracted procedure: k5757 
o|contracted procedure: k5780 
o|contracted procedure: k5776 
o|contracted procedure: k5786 
o|contracted procedure: k5808 
o|contracted procedure: k5804 
o|contracted procedure: k5827 
o|contracted procedure: k5823 
o|contracted procedure: k5833 
o|contracted procedure: k5855 
o|contracted procedure: k5851 
o|contracted procedure: k5874 
o|contracted procedure: k5870 
o|contracted procedure: k5880 
o|contracted procedure: k5902 
o|contracted procedure: k5898 
o|contracted procedure: k5917 
o|contracted procedure: k5939 
o|contracted procedure: k7437 
o|inlining procedure: k5947 
o|contracted procedure: k7452 
o|contracted procedure: k7459 
o|contracted procedure: k7455 
o|contracted procedure: k7466 
o|contracted procedure: k7470 
o|contracted procedure: k7477 
o|inlining procedure: k7474 
o|contracted procedure: k5980 
o|contracted procedure: k5962 
o|contracted procedure: k5972 
o|contracted procedure: k6044 
o|contracted procedure: k6047 
o|contracted procedure: k6050 
o|contracted procedure: k6058 
o|contracted procedure: k6066 
o|contracted procedure: k6104 
o|contracted procedure: k6141 
o|contracted procedure: k6159 
o|contracted procedure: k6193 
o|contracted procedure: k6196 
o|contracted procedure: k6212 
o|contracted procedure: k6234 
o|contracted procedure: k6168 
o|contracted procedure: k6230 
o|contracted procedure: k6215 
o|contracted procedure: k6218 
o|contracted procedure: k6226 
o|contracted procedure: k6190 
o|contracted procedure: k6243 
o|contracted procedure: k6246 
o|contracted procedure: k6276 
o|contracted procedure: k6279 
o|contracted procedure: k6294 
o|contracted procedure: k6297 
o|contracted procedure: k6334 
o|contracted procedure: k6357 
o|contracted procedure: k6367 
o|contracted procedure: k6371 
o|contracted procedure: k6384 
o|contracted procedure: k6406 
o|contracted procedure: k6255 
o|contracted procedure: k6402 
o|contracted procedure: k6387 
o|contracted procedure: k6390 
o|contracted procedure: k6398 
o|contracted procedure: k6273 
o|contracted procedure: k6415 
o|contracted procedure: k6418 
o|contracted procedure: k6421 
o|contracted procedure: k6464 
o|contracted procedure: k6454 
o|contracted procedure: k6474 
o|contracted procedure: k6483 
o|contracted procedure: k6494 
o|contracted procedure: k6504 
o|contracted procedure: k6513 
o|contracted procedure: k6522 
o|contracted procedure: k6529 
o|contracted procedure: k6540 
o|contracted procedure: k6543 
o|contracted procedure: k6560 
o|contracted procedure: k6556 
o|contracted procedure: k6569 
o|contracted procedure: k6572 
o|contracted procedure: k6575 
o|contracted procedure: k6583 
o|contracted procedure: k6591 
o|contracted procedure: k6600 
o|contracted procedure: k6606 
o|contracted procedure: k6910 
o|contracted procedure: k6609 
o|contracted procedure: k6696 
o|contracted procedure: k6705 
o|contracted procedure: k6728 
o|contracted procedure: k6734 
o|contracted procedure: k6740 
o|contracted procedure: k6766 
o|contracted procedure: k6770 
o|contracted procedure: k6816 
o|contracted procedure: k6824 
o|contracted procedure: k6836 
o|contracted procedure: k6845 
o|contracted procedure: k6863 
o|contracted procedure: k6854 
o|contracted procedure: k6869 
o|contracted procedure: k6881 
o|contracted procedure: k6884 
o|contracted procedure: k6887 
o|contracted procedure: k6895 
o|contracted procedure: k6903 
o|contracted procedure: k6916 
o|contracted procedure: k6931 
o|contracted procedure: k6923 
o|contracted procedure: k6937 
o|contracted procedure: k6952 
o|contracted procedure: k6948 
o|contracted procedure: k6944 
o|contracted procedure: k6958 
o|contracted procedure: k6968 
o|contracted procedure: k6974 
o|contracted procedure: k6977 
o|contracted procedure: k6990 
o|contracted procedure: k6980 
o|contracted procedure: k7002 
o|contracted procedure: k7005 
o|contracted procedure: k7015 
o|contracted procedure: k7021 
o|contracted procedure: k7028 
o|contracted procedure: k7034 
o|contracted procedure: k7046 
o|contracted procedure: k7058 
o|contracted procedure: k7061 
o|contracted procedure: k7076 
o|contracted procedure: k7068 
o|contracted procedure: k7082 
o|contracted procedure: k7094 
o|contracted procedure: k7101 
o|contracted procedure: k7111 
o|contracted procedure: k7118 
o|contracted procedure: k7124 
o|contracted procedure: k7127 
o|contracted procedure: k7139 
o|contracted procedure: k7153 
o|contracted procedure: k7156 
o|contracted procedure: k7188 
o|contracted procedure: k7194 
o|contracted procedure: k7200 
o|contracted procedure: k7206 
o|contracted procedure: k7212 
o|contracted procedure: k7218 
o|contracted procedure: k7224 
o|contracted procedure: k7230 
o|contracted procedure: k7236 
o|contracted procedure: k7276 
o|contracted procedure: k7353 
o|contracted procedure: k7398 
o|contracted procedure: k7404 
o|contracted procedure: k7410 
o|contracted procedure: k7422 
o|contracted procedure: k7521 
o|contracted procedure: k7527 
o|contracted procedure: k7536 
o|contracted procedure: k7542 
o|contracted procedure: k7551 
o|contracted procedure: k7568 
o|contracted procedure: k7590 
o|contracted procedure: k7596 
o|contracted procedure: k7626 
o|contracted procedure: k7632 
o|contracted procedure: k7670 
o|contracted procedure: k7676 
o|contracted procedure: k7722 
o|contracted procedure: k7725 
o|contracted procedure: k7733 
o|contracted procedure: k7752 
o|contracted procedure: k7760 
o|contracted procedure: k7772 
o|contracted procedure: k7775 
o|contracted procedure: k7778 
o|contracted procedure: k7786 
o|contracted procedure: k7794 
o|contracted procedure: k7806 
o|contracted procedure: k7809 
o|contracted procedure: k7812 
o|contracted procedure: k7820 
o|contracted procedure: k7828 
o|contracted procedure: k7498 
o|contracted procedure: k7504 
o|contracted procedure: k7511 
o|contracted procedure: k7515 
o|contracted procedure: k7846 
o|contracted procedure: k7855 
o|contracted procedure: k7862 
o|contracted procedure: k8070 
o|contracted procedure: k8083 
o|contracted procedure: k8100 
o|contracted procedure: k8106 
o|contracted procedure: k8116 
o|contracted procedure: k8128 
o|contracted procedure: k8120 
o|contracted procedure: k8124 
o|contracted procedure: k8134 
o|contracted procedure: k8157 
o|contracted procedure: k8169 
o|contracted procedure: k8189 
o|contracted procedure: k8178 
o|contracted procedure: k8197 
o|contracted procedure: k8200 
o|contracted procedure: k8203 
o|contracted procedure: k8206 
o|contracted procedure: k8209 
o|contracted procedure: k8215 
o|contracted procedure: k8221 
o|contracted procedure: k8227 
o|contracted procedure: k8240 
o|contracted procedure: k8246 
o|contracted procedure: k8252 
o|contracted procedure: k9559 
o|contracted procedure: k9582 
o|contracted procedure: k9620 
o|contracted procedure: k9592 
o|contracted procedure: k9602 
o|contracted procedure: k9609 
o|contracted procedure: k9616 
o|contracted procedure: k9632 
o|contracted procedure: k9642 
o|contracted procedure: k9649 
o|contracted procedure: k9655 
o|contracted procedure: k9746 
o|contracted procedure: k9675 
o|contracted procedure: k9690 
o|contracted procedure: k9693 
o|contracted procedure: k9703 
o|contracted procedure: k9706 
o|contracted procedure: k970312340 
o|contracted procedure: k9713 
o|contracted procedure: k970312344 
o|contracted procedure: k9720 
o|contracted procedure: k970312348 
o|contracted procedure: k9727 
o|contracted procedure: k970312352 
o|contracted procedure: k9735 
o|contracted procedure: k9758 
o|contracted procedure: k10192 
o|contracted procedure: k9789 
o|contracted procedure: k10186 
o|contracted procedure: k9792 
o|contracted procedure: k10180 
o|contracted procedure: k9795 
o|contracted procedure: k10174 
o|contracted procedure: k9798 
o|contracted procedure: k10168 
o|contracted procedure: k9801 
o|contracted procedure: k10162 
o|contracted procedure: k9804 
o|contracted procedure: k10156 
o|contracted procedure: k9807 
o|contracted procedure: k10150 
o|contracted procedure: k9810 
o|contracted procedure: k9814 
o|contracted procedure: k9844 
o|removed unused formal parameters: (abrt2352) 
o|contracted procedure: k9937 
o|contracted procedure: k10010 
o|contracted procedure: k10020 
o|contracted procedure: k10024 
o|contracted procedure: k10030 
o|removed unused parameter to known procedure: abrt2352 a9882 
o|contracted procedure: k10074 
o|contracted procedure: k10141 
o|contracted procedure: k10098 
o|contracted procedure: k10144 
o|contracted procedure: k10204 
o|contracted procedure: k10210 
o|contracted procedure: k10231 
o|contracted procedure: k10221 
o|contracted procedure: k10253 
o|contracted procedure: k10240 
o|contracted procedure: k10262 
o|contracted procedure: k10324 
o|contracted procedure: k10347 
o|contracted procedure: k10355 
o|contracted procedure: k10409 
o|contracted procedure: k10391 
o|contracted procedure: k10394 
o|contracted procedure: k10403 
o|contracted procedure: k10397 
o|contracted procedure: k10433 
o|contracted procedure: k10488 
o|contracted procedure: k10451 
o|contracted procedure: k10467 
o|contracted procedure: k10470 
o|contracted procedure: k10484 
o|contracted procedure: k10502 
o|contracted procedure: k10524 
o|contracted procedure: k10530 
o|contracted procedure: k10536 
o|contracted procedure: k10543 
o|contracted procedure: k10562 
o|contracted procedure: k10596 
o|contracted procedure: k10625 
o|contracted procedure: k10628 
o|contracted procedure: k10641 
o|contracted procedure: k10645 
o|contracted procedure: k10649 
o|contracted procedure: k10653 
o|contracted procedure: k10660 
o|contracted procedure: k10712 
o|contracted procedure: k10683 
o|contracted procedure: k10696 
o|contracted procedure: k10763 
o|contracted procedure: k10773 
o|contracted procedure: k10777 
o|contracted procedure: k10786 
o|contracted procedure: k10800 
o|contracted procedure: k10789 
o|contracted procedure: k10796 
o|contracted procedure: k10828 
o|contracted procedure: k10838 
o|contracted procedure: k10842 
o|contracted procedure: k10851 
o|contracted procedure: k10865 
o|contracted procedure: k10854 
o|contracted procedure: k10861 
o|contracted procedure: k8643 
o|contracted procedure: k8652 
o|contracted procedure: k8665 
o|contracted procedure: k10888 
o|contracted procedure: k10902 
o|contracted procedure: k10891 
o|contracted procedure: k10898 
o|contracted procedure: k10912 
o|contracted procedure: k10915 
o|contracted procedure: k10918 
o|contracted procedure: k10930 
o|contracted procedure: k10943 
o|contracted procedure: k10947 
o|contracted procedure: k10951 
o|contracted procedure: k10957 
o|contracted procedure: k10967 
o|contracted procedure: k10971 
o|contracted procedure: k10975 
o|contracted procedure: k10987 
o|contracted procedure: k11011 
o|contracted procedure: k11024 
o|contracted procedure: k11030 
o|inlining procedure: k11021 
o|contracted procedure: k11039 
o|inlining procedure: k11021 
o|contracted procedure: k11071 
o|contracted procedure: k11084 
o|contracted procedure: k11092 
o|contracted procedure: k11235 
o|contracted procedure: k11249 
o|contracted procedure: k11238 
o|contracted procedure: k11244 
o|contracted procedure: k11405 
o|contracted procedure: k11414 
o|contracted procedure: k11423 
o|contracted procedure: k11426 
o|contracted procedure: k11429 
o|contracted procedure: k11437 
o|contracted procedure: k11445 
o|contracted procedure: k11460 
o|contracted procedure: k11476 
o|contracted procedure: k11482 
o|contracted procedure: k11491 
o|contracted procedure: k11488 
o|contracted procedure: k11518 
o|contracted procedure: k11526 
o|contracted procedure: k11534 
o|contracted procedure: k11542 
o|contracted procedure: k11558 
o|contracted procedure: k11581 
o|contracted procedure: k11577 
o|contracted procedure: k11612 
o|contracted procedure: k11619 
o|contracted procedure: k11626 
o|contracted procedure: k11754 
o|contracted procedure: k11637 
o|contracted procedure: k11649 
o|contracted procedure: k11652 
o|contracted procedure: k11655 
o|contracted procedure: k11704 
o|contracted procedure: k11733 
o|contracted procedure: k11747 
o|contracted procedure: k11751 
o|contracted procedure: k11743 
o|simplifications: ((let . 230)) 
o|removed binding forms: 657 
(o x)|known list op on rest arg sublist: ##core#rest-length as956 0 
o|contracted procedure: "(eval.scm:1060) dload-path2313" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24412443 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest24412443 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest24532455 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest24532455 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest25352537 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest25352537 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest14991501 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest14991501 0 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|replaced variables: 5 
o|removed binding forms: 1 
o|inlining procedure: k9859 
o|removed binding forms: 2 
o|replaced variables: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop278 0 
o|direct leaf routine/allocation: emit-trace-info232 5 
o|direct leaf routine/allocation: g10341047 0 
o|direct leaf routine/allocation: loop1135 0 
o|direct leaf routine/allocation: loop1318 0 
o|direct leaf routine/allocation: loop2248 0 
o|direct leaf routine/allocation: for-each-loop26462674 0 
o|direct leaf routine/allocation: for-each-loop26992727 0 
o|direct leaf routine/allocation: for-each-loop27522770 0 
o|direct leaf routine/allocation: store-string 0 
o|contracted procedure: k3750 
o|converted assignments to bindings: (loop278) 
o|contracted procedure: "(eval.scm:509) k6360" 
o|converted assignments to bindings: (loop1135) 
o|contracted procedure: k7530 
o|contracted procedure: "(eval.scm:705) k7556" 
o|contracted procedure: "(eval.scm:709) k7576" 
o|contracted procedure: "(eval.scm:714) k7607" 
o|contracted procedure: "(eval.scm:720) k7646" 
o|contracted procedure: "(eval.scm:727) k7693" 
o|contracted procedure: "(eval.scm:731) k7741" 
o|converted assignments to bindings: (loop1318) 
o|converted assignments to bindings: (loop2248) 
o|contracted procedure: k10746 
o|converted assignments to bindings: (for-each-loop26462674) 
o|contracted procedure: k10811 
o|converted assignments to bindings: (for-each-loop26992727) 
o|contracted procedure: k10876 
o|converted assignments to bindings: (for-each-loop27522770) 
o|simplifications: ((let . 7)) 
o|removed binding forms: 12 
o|direct leaf routine/allocation: for-each-loop10331050 0 
o|contracted procedure: k6300 
o|converted assignments to bindings: (for-each-loop10331050) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (doloop15701571 k11570 strip1604 k9552 k9572 complete2474 map-loop24852502 store-result run-safe test2815 loop2829 test-extensions2814 loop1811 for-each-loop27092742 for-each-loop26562689 g26372638 check2595 loop2604 chicken.load#file-exists? doloop25642565 k10306 loop2520 chicken.load#make-relative-pathname chicken.load#evaluator chicken.load#load/internal k10113 dload2314 a9882 for-each-loop23952407 doloop23852386 chicken.load#c-toplevel loop2267 chicken.load#path-separator-index/right foldr16101613 loop1585 err1583 g13861395 map-loop13801398 g14141423 map-loop14081426 emit-syntax-trace-info233 k7037 k7085 g12911292 compile-call240 g11181127 map-loop11121142 k6830 loop1195 loop21200 map-loop10751094 include-file236 map-loop10051023 map-loop970988 map-loop867884 doloop13091310 decorate234 map-loop699716 map-loop726743 map-loop756774 map-loop783804 map-loop816840 map-loop640658 map-loop667688 map-loop504522 map-loop532549 chicken.eval#compile-to-closure g605614 map-loop599617 doloop626627 k4008 k3981 lookup230 compile237 rename229 loop262 g271272 k3669 find-id228) 
o|shared closure containers: 43 
o|shared closure users: 59 
o|calls to known targets: 323 
o|identified direct recursive calls: f_3786 1 
o|identified direct recursive calls: f_3739 1 
o|unused rest argument: v346 f_3952 
o|unused rest argument: v367 f_4001 
o|unused rest argument: v368 f_4006 
o|unused rest argument: v387 f_4178 
o|unused rest argument: v388 f_4186 
o|unused rest argument: v389 f_4194 
o|unused rest argument: v390 f_4202 
o|unused rest argument: v391 f_4204 
o|unused rest argument: v392 f_4223 
o|unused rest argument: v393 f_4225 
o|unused rest argument: v412 f_4236 
o|unused rest argument: v440 f_4295 
o|unused rest argument: v441 f_4303 
o|unused rest argument: v442 f_4311 
o|unused rest argument: v443 f_4319 
o|unused rest argument: v444 f_4327 
o|unused rest argument: v445 f_4335 
o|unused rest argument: v446 f_4343 
o|unused rest argument: v447 f_4345 
o|unused rest argument: v449 f_4374 
o|identified direct recursive calls: f_5165 1 
o|identified direct recursive calls: f_5276 1 
o|identified direct recursive calls: f_5310 1 
o|identified direct recursive calls: f_5452 1 
o|identified direct recursive calls: f_5500 1 
o|identified direct recursive calls: f_5548 1 
o|identified direct recursive calls: f_5616 1 
o|identified direct recursive calls: f_7447 1 
o|identified direct recursive calls: f_6352 1 
o|identified direct recursive calls: f_6843 1 
o|identified direct recursive calls: f_7493 1 
o|unused rest argument: _1333 f_7849 
o|identified direct recursive calls: f_8065 1 
o|identified direct recursive calls: f_8164 1 
o|identified direct recursive calls: f_9596 1 
o|identified direct recursive calls: f_9685 4 
o|unused rest argument: rest24412443 f_10219 
o|unused rest argument: rest24532455 f_10238 
o|unused rest argument: rest25352537 f_10389 
o|identified direct recursive calls: f_10781 1 
o|identified direct recursive calls: f_10846 1 
o|identified direct recursive calls: f_10883 1 
o|unused rest argument: rest14991501 f_11635 
o|fast box initializations: 49 
o|fast global references: 74 
o|fast global assignments: 31 
o|dropping unused closure argument: f_10199 
o|dropping unused closure argument: f_10510 
o|dropping unused closure argument: f_10781 
o|dropping unused closure argument: f_10846 
o|dropping unused closure argument: f_10883 
o|dropping unused closure argument: f_11111 
o|dropping unused closure argument: f_11170 
o|dropping unused closure argument: f_11233 
o|dropping unused closure argument: f_3631 
o|dropping unused closure argument: f_3816 
o|dropping unused closure argument: f_3830 
o|dropping unused closure argument: f_3847 
o|dropping unused closure argument: f_6843 
o|dropping unused closure argument: f_7493 
o|dropping unused closure argument: f_8155 
o|dropping unused closure argument: f_9586 
o|dropping unused closure argument: f_9624 
o|dropping unused closure argument: f_9773 
*/
/* end of file */
