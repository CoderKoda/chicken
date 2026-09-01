/* Generated from srfi-4.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: srfi-4.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file srfi-4.c -emit-import-library srfi-4 -emit-import-library chicken.number-vector
   unit: srfi-4
   uses: extras srfi-4 expand library
*/
#include "chicken.h"

#define C_copy_subvector(to, from, start_to, start_from, bytes)   \
  (C_memcpy((C_char *)C_data_pointer(to) + C_unfix(start_to), (C_char *)C_data_pointer(from) + C_unfix(start_from), C_unfix(bytes)), \
    C_SCHEME_UNDEFINED)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_extern void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[332];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,49,54,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,51,50,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,54,52,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,49,50,56,118,101,99,116,111,114,45,108,101,110,103,116,104,32,120,41,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,56,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,49,54,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,51,50,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,54,52,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,49,50,56,118,101,99,116,111,114,45,115,101,116,33,32,120,32,105,32,121,41,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,16),40,101,120,116,45,102,114,101,101,32,98,118,51,50,57,41};
static C_char li24[] C_aligned={C_lihdr(0,0,32),40,97,108,108,111,99,32,108,111,99,32,101,108,101,109,45,115,105,122,101,32,101,108,101,109,115,32,101,120,116,63,41};
static C_char li25[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,114,101,108,101,97,115,101,45,110,117,109,98,101,114,45,118,101,99,116,111,114,32,118,41,0};
static C_char li26[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,51,55,54,41,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,117,56,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41};
static C_char li28[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,49,48,41,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,115,56,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41};
static C_char li30[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,52,52,41,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,117,49,54,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,52,55,56,41,0,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,115,49,54,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,50,41,0,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,117,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,52,54,41,0,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,117,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,56,48,41,0,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,115,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,49,52,41,0,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,115,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,52,57,41,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,102,51,50,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,54,56,53,41,0,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,102,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,50,52,41,0,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,99,54,52,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,55,49,41,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,50),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,109,97,107,101,45,99,49,50,56,118,101,99,116,111,114,32,108,101,110,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,56,49,55,32,112,32,105,41,0};
static C_char li51[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,115,56,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,56,51,48,32,112,32,105,41,0};
static C_char li53[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,117,49,54,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,56,52,51,32,112,32,105,41,0};
static C_char li55[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,115,49,54,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,56,53,54,32,112,32,105,41,0};
static C_char li57[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,117,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li58[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,56,54,57,32,112,32,105,41,0};
static C_char li59[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,115,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li60[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,56,56,50,32,112,32,105,41,0};
static C_char li61[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,117,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li62[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,56,57,53,32,112,32,105,41,0};
static C_char li63[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,115,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,57,48,56,32,112,32,105,41,0};
static C_char li65[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,102,51,50,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li66[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,57,50,49,32,112,32,105,41,0};
static C_char li67[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,102,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li68[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,57,51,54,32,105,32,108,115,116,41,0,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,99,54,52,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,17),40,100,111,108,111,111,112,57,54,48,32,105,32,108,115,116,41,0,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,108,105,115,116,45,62,99,49,50,56,118,101,99,116,111,114,32,108,115,116,41,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,56,118,101,99,116,111,114,32,46,32,120,115,41,0,0,0};
static C_char li73[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,56,118,101,99,116,111,114,32,46,32,120,115,41,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,49,54,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,49,54,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li77[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li80[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,51,50,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li81[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,54,52,118,101,99,116,111,114,32,46,32,120,115,41,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,49,50,56,118,101,99,116,111,114,32,46,32,120,115,41,0};
static C_char li84[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41};
static C_char li85[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li86[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41};
static C_char li87[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li88[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li89[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li90[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,49,54,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li91[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li92[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li94[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li95[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li96[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li98[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li100[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,51,50,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li102[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li103[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li104[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,54,52,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0,0};
static C_char li105[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li106[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,49,50,56,118,101,99,116,111,114,45,62,108,105,115,116,32,118,41,0,0,0,0,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,56,118,101,99,116,111,114,63,32,120,41,0,0,0,0,0};
static C_char li108[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,56,118,101,99,116,111,114,63,32,120,41,0,0,0,0,0};
static C_char li109[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,49,54,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li110[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,49,54,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li111[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li112[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li113[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li114[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,51,50,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li116[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,102,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li117[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,54,52,118,101,99,116,111,114,63,32,120,41,0,0,0,0};
static C_char li118[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,99,49,50,56,118,101,99,116,111,114,63,32,120,41,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,110,117,109,98,101,114,45,118,101,99,116,111,114,63,32,120,41};
static C_char li120[] C_aligned={C_lihdr(0,0,10),40,102,95,52,51,50,55,32,118,41,0,0,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,112,97,99,107,45,99,111,112,121,32,116,97,103,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li122[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,52,53,32,115,116,114,41,0,0,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,110,112,97,99,107,32,116,97,103,32,115,122,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,12),40,102,95,52,51,55,53,32,115,116,114,41,0,0,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,117,110,112,97,99,107,45,99,111,112,121,32,116,97,103,32,115,122,32,108,111,99,41,0,0};
static C_char li126[] C_aligned={C_lihdr(0,0,17),40,102,53,56,53,52,32,118,49,49,52,54,53,56,53,51,41,0,0,0,0,0,0,0};
static C_char li127[] C_aligned={C_lihdr(0,0,17),40,102,53,56,52,55,32,118,49,49,52,54,53,56,52,54,41,0,0,0,0,0,0,0};
static C_char li128[] C_aligned={C_lihdr(0,0,17),40,102,53,56,52,48,32,118,49,49,52,54,53,56,51,57,41,0,0,0,0,0,0,0};
static C_char li129[] C_aligned={C_lihdr(0,0,17),40,102,53,56,51,51,32,118,49,49,52,54,53,56,51,50,41,0,0,0,0,0,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,17),40,102,53,56,50,54,32,118,49,49,52,54,53,56,50,53,41,0,0,0,0,0,0,0};
static C_char li131[] C_aligned={C_lihdr(0,0,17),40,102,53,56,49,57,32,118,49,49,52,54,53,56,49,56,41,0,0,0,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,17),40,102,53,56,49,50,32,118,49,49,52,54,53,56,49,49,41,0,0,0,0,0,0,0};
static C_char li133[] C_aligned={C_lihdr(0,0,17),40,102,53,56,48,53,32,118,49,49,52,54,53,56,48,52,41,0,0,0,0,0,0,0};
static C_char li134[] C_aligned={C_lihdr(0,0,17),40,102,53,55,57,56,32,118,49,49,52,54,53,55,57,55,41,0,0,0,0,0,0,0};
static C_char li135[] C_aligned={C_lihdr(0,0,17),40,102,53,55,57,49,32,118,49,49,52,54,53,55,57,48,41,0,0,0,0,0,0,0};
static C_char li136[] C_aligned={C_lihdr(0,0,17),40,102,53,55,56,52,32,118,49,49,52,54,53,55,56,51,41,0,0,0,0,0,0,0};
static C_char li137[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,110,118,101,99,116,111,114,32,118,32,116,32,101,115,32,102,114,111,109,32,116,111,32,108,111,99,41,0,0,0};
static C_char li138[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,117,56,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0,0};
static C_char li139[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,117,49,54,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li140[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,117,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,117,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,115,56,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,115,49,54,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li144[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,115,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,115,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li146[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,102,51,50,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li147[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,102,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,99,54,52,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,110,117,109,98,101,114,45,118,101,99,116,111,114,35,115,117,98,99,49,50,56,118,101,99,116,111,114,32,118,32,102,114,111,109,32,116,111,41,0};
static C_char li150[] C_aligned={C_lihdr(0,0,9),40,103,49,52,55,54,32,99,41,0,0,0,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,117,115,101,114,45,114,101,97,100,45,104,111,111,107,32,99,104,97,114,32,112,111,114,116,41};
static C_char li152[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,117,115,101,114,45,112,114,105,110,116,45,104,111,111,107,32,120,32,114,101,97,100,97,98,108,101,32,112,111,114,116,41,0};
static C_char li153[] C_aligned={C_lihdr(0,0,11),40,97,52,56,56,48,32,120,32,105,41,0,0,0,0,0};
static C_char li154[] C_aligned={C_lihdr(0,0,11),40,97,52,57,48,48,32,120,32,105,41,0,0,0,0,0};
static C_char li155[] C_aligned={C_lihdr(0,0,11),40,97,52,57,50,48,32,120,32,105,41,0,0,0,0,0};
static C_char li156[] C_aligned={C_lihdr(0,0,11),40,97,52,57,50,51,32,120,32,105,41,0,0,0,0,0};
static C_char li157[] C_aligned={C_lihdr(0,0,11),40,97,52,57,50,54,32,120,32,105,41,0,0,0,0,0};
static C_char li158[] C_aligned={C_lihdr(0,0,11),40,97,52,57,50,57,32,120,32,105,41,0,0,0,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,11),40,97,52,57,51,50,32,120,32,105,41,0,0,0,0,0};
static C_char li160[] C_aligned={C_lihdr(0,0,11),40,97,52,57,51,53,32,120,32,105,41,0,0,0,0,0};
static C_char li161[] C_aligned={C_lihdr(0,0,11),40,97,52,57,51,56,32,120,32,105,41,0,0,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,11),40,97,52,57,52,49,32,120,32,105,41,0,0,0,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,11),40,97,52,57,52,52,32,120,32,105,41,0,0,0,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub330(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word bv=(C_word )(C_a0);
C_free((void *)C_block_item(bv, 1));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub324(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
size_t bytes=(size_t )(size_t)C_num_to_uint64(C_a0);
if (bytes > C_HEADER_SIZE_MASK) C_return(C_SCHEME_FALSE);
C_word *buf = (C_word *)C_malloc(bytes + sizeof(C_header));
if(buf == NULL) C_return(C_SCHEME_FALSE);
C_block_header_init(buf, C_make_header(C_BYTEVECTOR_TYPE, bytes));
C_return(buf);
C_ret:
#undef return

return C_r;}

C_noret_decl(f5784)
static void C_ccall f5784(C_word c,C_word *av) C_noret;
C_noret_decl(f5791)
static void C_ccall f5791(C_word c,C_word *av) C_noret;
C_noret_decl(f5798)
static void C_ccall f5798(C_word c,C_word *av) C_noret;
C_noret_decl(f5805)
static void C_ccall f5805(C_word c,C_word *av) C_noret;
C_noret_decl(f5812)
static void C_ccall f5812(C_word c,C_word *av) C_noret;
C_noret_decl(f5819)
static void C_ccall f5819(C_word c,C_word *av) C_noret;
C_noret_decl(f5826)
static void C_ccall f5826(C_word c,C_word *av) C_noret;
C_noret_decl(f5833)
static void C_ccall f5833(C_word c,C_word *av) C_noret;
C_noret_decl(f5840)
static void C_ccall f5840(C_word c,C_word *av) C_noret;
C_noret_decl(f5847)
static void C_ccall f5847(C_word c,C_word *av) C_noret;
C_noret_decl(f5854)
static void C_ccall f5854(C_word c,C_word *av) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word *av) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word *av) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word *av) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word *av) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word *av) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word *av) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word *av) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word *av) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word *av) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word *av) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word *av) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word *av) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word *av) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word *av) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word *av) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word *av) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word *av) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word *av) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word *av) C_noret;
C_noret_decl(f_1808)
static void C_ccall f_1808(C_word c,C_word *av) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word *av) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word *av) C_noret;
C_noret_decl(f_1817)
static void C_ccall f_1817(C_word c,C_word *av) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word *av) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word *av) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word *av) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word *av) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word *av) C_noret;
C_noret_decl(f_1910)
static void C_ccall f_1910(C_word c,C_word *av) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word *av) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word *av) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word *av) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word *av) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word *av) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word *av) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word *av) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word *av) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word *av) C_noret;
C_noret_decl(f_1958)
static void C_ccall f_1958(C_word c,C_word *av) C_noret;
C_noret_decl(f_1960)
static void f_1960(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word *av) C_noret;
C_noret_decl(f_1973)
static void C_ccall f_1973(C_word c,C_word *av) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word *av) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word *av) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word *av) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word *av) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word *av) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word *av) C_noret;
C_noret_decl(f_2065)
static void C_ccall f_2065(C_word c,C_word *av) C_noret;
C_noret_decl(f_2070)
static C_word f_2070(C_word t0,C_word t1);
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word *av) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word *av) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word *av) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word *av) C_noret;
C_noret_decl(f_2178)
static C_word f_2178(C_word t0,C_word t1);
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word *av) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word *av) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word *av) C_noret;
C_noret_decl(f_2270)
static void C_ccall f_2270(C_word c,C_word *av) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word *av) C_noret;
C_noret_decl(f_2290)
static C_word f_2290(C_word t0,C_word t1);
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word *av) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word *av) C_noret;
C_noret_decl(f_2382)
static void C_ccall f_2382(C_word c,C_word *av) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word *av) C_noret;
C_noret_decl(f_2406)
static C_word f_2406(C_word t0,C_word t1);
C_noret_decl(f_2424)
static void C_ccall f_2424(C_word c,C_word *av) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word *av) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word *av) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word *av) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word *av) C_noret;
C_noret_decl(f_2518)
static C_word f_2518(C_word t0,C_word t1);
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word *av) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word *av) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word *av) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2630)
static C_word f_2630(C_word t0,C_word t1);
C_noret_decl(f_2648)
static void C_ccall f_2648(C_word c,C_word *av) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word *av) C_noret;
C_noret_decl(f_2741)
static void C_ccall f_2741(C_word c,C_word *av) C_noret;
C_noret_decl(f_2746)
static C_word f_2746(C_word t0,C_word t1);
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word *av) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word *av) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word *av) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word *av) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word *av) C_noret;
C_noret_decl(f_2862)
static C_word f_2862(C_word t0,C_word t1);
C_noret_decl(f_2880)
static void C_ccall f_2880(C_word c,C_word *av) C_noret;
C_noret_decl(f_2918)
static void C_ccall f_2918(C_word c,C_word *av) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word *av) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word *av) C_noret;
C_noret_decl(f_2967)
static void f_2967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2972)
static C_word f_2972(C_word t0,C_word t1);
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word *av) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word *av) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void f_3078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3083)
static C_word f_3083(C_word t0,C_word t1);
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word *av) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word *av) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word *av) C_noret;
C_noret_decl(f_3177)
static void C_ccall f_3177(C_word c,C_word *av) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word *av) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word *av) C_noret;
C_noret_decl(f_3206)
static C_word f_3206(C_word t0,C_word t1);
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word *av) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word *av) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word *av) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word *av) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word *av) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word *av) C_noret;
C_noret_decl(f_3342)
static C_word f_3342(C_word t0,C_word t1);
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word *av) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word *av) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word *av) C_noret;
C_noret_decl(f_3425)
static void f_3425(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word *av) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word *av) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word *av) C_noret;
C_noret_decl(f_3461)
static void f_3461(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3485)
static void C_ccall f_3485(C_word c,C_word *av) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3497)
static void f_3497(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word *av) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word *av) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word *av) C_noret;
C_noret_decl(f_3533)
static void f_3533(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word *av) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word *av) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word *av) C_noret;
C_noret_decl(f_3569)
static void f_3569(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3576)
static void C_ccall f_3576(C_word c,C_word *av) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word *av) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word *av) C_noret;
C_noret_decl(f_3605)
static void f_3605(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3612)
static void C_ccall f_3612(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word *av) C_noret;
C_noret_decl(f_3641)
static void f_3641(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word *av) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word *av) C_noret;
C_noret_decl(f_3677)
static void f_3677(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word *av) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word *av) C_noret;
C_noret_decl(f_3713)
static void f_3713(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word *av) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word *av) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word *av) C_noret;
C_noret_decl(f_3749)
static void f_3749(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3787)
static void f_3787(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word *av) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word *av) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word *av) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word *av) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word *av) C_noret;
C_noret_decl(f_3843)
static void C_ccall f_3843(C_word c,C_word *av) C_noret;
C_noret_decl(f_3849)
static void C_ccall f_3849(C_word c,C_word *av) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word *av) C_noret;
C_noret_decl(f_3861)
static void C_ccall f_3861(C_word c,C_word *av) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3873)
static void C_ccall f_3873(C_word c,C_word *av) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word *av) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word *av) C_noret;
C_noret_decl(f_3903)
static void f_3903(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word *av) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word *av) C_noret;
C_noret_decl(f_3933)
static void f_3933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word *av) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word *av) C_noret;
C_noret_decl(f_3963)
static void f_3963(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word *av) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word *av) C_noret;
C_noret_decl(f_3993)
static void f_3993(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word *av) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word *av) C_noret;
C_noret_decl(f_4022)
static void f_4022(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word *av) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void f_4051(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4065)
static void C_ccall f_4065(C_word c,C_word *av) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void f_4080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word *av) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word *av) C_noret;
C_noret_decl(f_4109)
static void f_4109(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void f_4138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word *av) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word *av) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word *av) C_noret;
C_noret_decl(f_4170)
static void f_4170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word *av) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word *av) C_noret;
C_noret_decl(f_4194)
static void C_ccall f_4194(C_word c,C_word *av) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word *av) C_noret;
C_noret_decl(f_4206)
static void f_4206(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4220)
static void C_ccall f_4220(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word *av) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word *av) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word *av) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word *av) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word *av) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word *av) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word *av) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word *av) C_noret;
C_noret_decl(f_4272)
static void C_ccall f_4272(C_word c,C_word *av) C_noret;
C_noret_decl(f_4278)
static void C_ccall f_4278(C_word c,C_word *av) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word *av) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word *av) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word *av) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word *av) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word *av) C_noret;
C_noret_decl(f_4325)
static void f_4325(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word *av) C_noret;
C_noret_decl(f_4343)
static void f_4343(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word *av) C_noret;
C_noret_decl(f_4373)
static void f_4373(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word *av) C_noret;
C_noret_decl(f_4385)
static void C_ccall f_4385(C_word c,C_word *av) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word *av) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word *av) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word *av) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word *av) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word *av) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word *av) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word *av) C_noret;
C_noret_decl(f_4481)
static void C_ccall f_4481(C_word c,C_word *av) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word *av) C_noret;
C_noret_decl(f_4489)
static void C_ccall f_4489(C_word c,C_word *av) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word *av) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word *av) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word *av) C_noret;
C_noret_decl(f_4505)
static void C_ccall f_4505(C_word c,C_word *av) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word *av) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word *av) C_noret;
C_noret_decl(f_4517)
static void C_ccall f_4517(C_word c,C_word *av) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word *av) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word *av) C_noret;
C_noret_decl(f_4529)
static void C_ccall f_4529(C_word c,C_word *av) C_noret;
C_noret_decl(f_4533)
static void C_ccall f_4533(C_word c,C_word *av) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word *av) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word *av) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word *av) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word *av) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word *av) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word *av) C_noret;
C_noret_decl(f_4561)
static void C_ccall f_4561(C_word c,C_word *av) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word *av) C_noret;
C_noret_decl(f_4569)
static void C_ccall f_4569(C_word c,C_word *av) C_noret;
C_noret_decl(f_4573)
static void C_ccall f_4573(C_word c,C_word *av) C_noret;
C_noret_decl(f_4577)
static void C_ccall f_4577(C_word c,C_word *av) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word *av) C_noret;
C_noret_decl(f_4583)
static void f_4583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4596)
static void C_ccall f_4596(C_word c,C_word *av) C_noret;
C_noret_decl(f_4599)
static void C_ccall f_4599(C_word c,C_word *av) C_noret;
C_noret_decl(f_4605)
static void C_ccall f_4605(C_word c,C_word *av) C_noret;
C_noret_decl(f_4618)
static void C_ccall f_4618(C_word c,C_word *av) C_noret;
C_noret_decl(f_4628)
static void C_ccall f_4628(C_word c,C_word *av) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word *av) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word *av) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word *av) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word *av) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word *av) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word *av) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word *av) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word *av) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word *av) C_noret;
C_noret_decl(f_4703)
static void C_ccall f_4703(C_word c,C_word *av) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void f_4736(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word *av) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word *av) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word *av) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word *av) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_4814)
static void C_ccall f_4814(C_word c,C_word *av) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word *av) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word *av) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word *av) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word *av) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word *av) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word *av) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word *av) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d4_toplevel)
C_extern void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1960)
static void C_ccall trf_1960(C_word c,C_word *av) C_noret;
static void C_ccall trf_1960(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1960(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2967)
static void C_ccall trf_2967(C_word c,C_word *av) C_noret;
static void C_ccall trf_2967(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2967(t0,t1);}

C_noret_decl(trf_3078)
static void C_ccall trf_3078(C_word c,C_word *av) C_noret;
static void C_ccall trf_3078(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3078(t0,t1);}

C_noret_decl(trf_3425)
static void C_ccall trf_3425(C_word c,C_word *av) C_noret;
static void C_ccall trf_3425(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3425(t0,t1,t2,t3);}

C_noret_decl(trf_3461)
static void C_ccall trf_3461(C_word c,C_word *av) C_noret;
static void C_ccall trf_3461(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3461(t0,t1,t2,t3);}

C_noret_decl(trf_3497)
static void C_ccall trf_3497(C_word c,C_word *av) C_noret;
static void C_ccall trf_3497(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3497(t0,t1,t2,t3);}

C_noret_decl(trf_3533)
static void C_ccall trf_3533(C_word c,C_word *av) C_noret;
static void C_ccall trf_3533(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3533(t0,t1,t2,t3);}

C_noret_decl(trf_3569)
static void C_ccall trf_3569(C_word c,C_word *av) C_noret;
static void C_ccall trf_3569(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3569(t0,t1,t2,t3);}

C_noret_decl(trf_3605)
static void C_ccall trf_3605(C_word c,C_word *av) C_noret;
static void C_ccall trf_3605(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3605(t0,t1,t2,t3);}

C_noret_decl(trf_3641)
static void C_ccall trf_3641(C_word c,C_word *av) C_noret;
static void C_ccall trf_3641(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3641(t0,t1,t2,t3);}

C_noret_decl(trf_3677)
static void C_ccall trf_3677(C_word c,C_word *av) C_noret;
static void C_ccall trf_3677(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3677(t0,t1,t2,t3);}

C_noret_decl(trf_3713)
static void C_ccall trf_3713(C_word c,C_word *av) C_noret;
static void C_ccall trf_3713(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3713(t0,t1,t2,t3);}

C_noret_decl(trf_3749)
static void C_ccall trf_3749(C_word c,C_word *av) C_noret;
static void C_ccall trf_3749(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3749(t0,t1,t2,t3);}

C_noret_decl(trf_3787)
static void C_ccall trf_3787(C_word c,C_word *av) C_noret;
static void C_ccall trf_3787(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3787(t0,t1,t2,t3);}

C_noret_decl(trf_3903)
static void C_ccall trf_3903(C_word c,C_word *av) C_noret;
static void C_ccall trf_3903(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3903(t0,t1,t2);}

C_noret_decl(trf_3933)
static void C_ccall trf_3933(C_word c,C_word *av) C_noret;
static void C_ccall trf_3933(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3933(t0,t1,t2);}

C_noret_decl(trf_3963)
static void C_ccall trf_3963(C_word c,C_word *av) C_noret;
static void C_ccall trf_3963(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3963(t0,t1,t2);}

C_noret_decl(trf_3993)
static void C_ccall trf_3993(C_word c,C_word *av) C_noret;
static void C_ccall trf_3993(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3993(t0,t1,t2);}

C_noret_decl(trf_4022)
static void C_ccall trf_4022(C_word c,C_word *av) C_noret;
static void C_ccall trf_4022(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4022(t0,t1,t2);}

C_noret_decl(trf_4051)
static void C_ccall trf_4051(C_word c,C_word *av) C_noret;
static void C_ccall trf_4051(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4051(t0,t1,t2);}

C_noret_decl(trf_4080)
static void C_ccall trf_4080(C_word c,C_word *av) C_noret;
static void C_ccall trf_4080(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4080(t0,t1,t2);}

C_noret_decl(trf_4109)
static void C_ccall trf_4109(C_word c,C_word *av) C_noret;
static void C_ccall trf_4109(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4109(t0,t1,t2);}

C_noret_decl(trf_4138)
static void C_ccall trf_4138(C_word c,C_word *av) C_noret;
static void C_ccall trf_4138(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4138(t0,t1,t2);}

C_noret_decl(trf_4170)
static void C_ccall trf_4170(C_word c,C_word *av) C_noret;
static void C_ccall trf_4170(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4170(t0,t1,t2);}

C_noret_decl(trf_4206)
static void C_ccall trf_4206(C_word c,C_word *av) C_noret;
static void C_ccall trf_4206(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4206(t0,t1,t2);}

C_noret_decl(trf_4325)
static void C_ccall trf_4325(C_word c,C_word *av) C_noret;
static void C_ccall trf_4325(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4325(t0,t1,t2);}

C_noret_decl(trf_4343)
static void C_ccall trf_4343(C_word c,C_word *av) C_noret;
static void C_ccall trf_4343(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4343(t0,t1,t2,t3);}

C_noret_decl(trf_4373)
static void C_ccall trf_4373(C_word c,C_word *av) C_noret;
static void C_ccall trf_4373(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4373(t0,t1,t2,t3);}

C_noret_decl(trf_4583)
static void C_ccall trf_4583(C_word c,C_word *av) C_noret;
static void C_ccall trf_4583(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_4583(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4736)
static void C_ccall trf_4736(C_word c,C_word *av) C_noret;
static void C_ccall trf_4736(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4736(t0,t1,t2);}

/* f5784 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5784,c,av);}
t3=C_i_check_structure_2(t2,lf[16],lf[196]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5791 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5791,c,av);}
t3=C_i_check_structure_2(t2,lf[13],lf[194]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5798 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5798,c,av);}
t3=C_i_check_structure_2(t2,lf[88],lf[192]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5805 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5805,c,av);}
t3=C_i_check_structure_2(t2,lf[85],lf[190]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5812 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5812,c,av);}
t3=C_i_check_structure_2(t2,lf[82],lf[188]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5819 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5819,c,av);}
t3=C_i_check_structure_2(t2,lf[76],lf[186]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5826 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5826,c,av);}
t3=C_i_check_structure_2(t2,lf[79],lf[184]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5833 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5833,c,av);}
t3=C_i_check_structure_2(t2,lf[73],lf[182]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5840 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5840,c,av);}
t3=C_i_check_structure_2(t2,lf[69],lf[180]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5847 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5847,c,av);}
t3=C_i_check_structure_2(t2,lf[66],lf[178]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f5854 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f5854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5854,c,av);}
t3=C_i_check_structure_2(t2,lf[63],lf[176]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1721 */
static void C_ccall f_1723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1723,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1724 in k1721 */
static void C_ccall f_1726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_1726,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k1727 in k1724 in k1721 */
static void C_ccall f_1729(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(75,c,5)))){
C_save_and_reclaim((void *)f_1729,c,av);}
a=C_alloc(75);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.number-vector#u8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1731,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! chicken.number-vector#s8vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1734,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! chicken.number-vector#u16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1737,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[5]+1 /* (set! chicken.number-vector#s16vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1740,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[6]+1 /* (set! chicken.number-vector#u32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1743,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[7]+1 /* (set! chicken.number-vector#s32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1746,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[8]+1 /* (set! chicken.number-vector#u64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1749,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[9]+1 /* (set! chicken.number-vector#s64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1752,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[10]+1 /* (set! chicken.number-vector#f32vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1755,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[11]+1 /* (set! chicken.number-vector#f64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1758,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[12]+1 /* (set! chicken.number-vector#c64vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1761,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[15]+1 /* (set! chicken.number-vector#c128vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1775,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[18]+1 /* (set! chicken.number-vector#u8vector-set! ...) */,C_fast_retrieve(lf[19]));
t15=C_mutate((C_word*)lf[20]+1 /* (set! chicken.number-vector#s8vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1790,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[21]+1 /* (set! chicken.number-vector#u16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1793,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[22]+1 /* (set! chicken.number-vector#s16vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1796,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[23]+1 /* (set! chicken.number-vector#u32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1799,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[24]+1 /* (set! chicken.number-vector#s32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[25]+1 /* (set! chicken.number-vector#u64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[26]+1 /* (set! chicken.number-vector#s64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1808,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[27]+1 /* (set! chicken.number-vector#f32vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1811,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[28]+1 /* (set! chicken.number-vector#f64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1814,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[29]+1 /* (set! chicken.number-vector#c64vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1817,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[33]+1 /* (set! chicken.number-vector#c128vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[35]+1 /* (set! chicken.number-vector#u8vector-ref ...) */,C_fast_retrieve(lf[36]));
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4945,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:221: chicken.base#getter-with-setter */
t29=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t29;
av2[1]=t27;
av2[2]=t28;
av2[3]=*((C_word*)lf[20]+1);
av2[4]=lf[331];
((C_proc)(void*)(*((C_word*)t29+1)))(5,av2);}}

/* chicken.number-vector#u8vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1731,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_bytevector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s8vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1734,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s8vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#u16vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1737,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u16vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s16vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1740(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1740,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s16vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#u32vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1743(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1743,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u32vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s32vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1746,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s32vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#u64vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1749,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_u64vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s64vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1752,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_s64vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#f32vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1755,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_f32vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#f64vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1758,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_f64vector_length(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#c64vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1761,c,av);}
t3=C_i_check_structure_2(t2,lf[13],lf[14]);
t4=C_slot(t2,C_fix(1));
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_fixnum_divide(C_i_bytevector_length(t4),C_fix(8));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#c128vector-length in k1727 in k1724 in k1721 */
static void C_ccall f_1775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1775,c,av);}
t3=C_i_check_structure_2(t2,lf[16],lf[17]);
t4=C_slot(t2,C_fix(1));
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_fixnum_divide(C_i_bytevector_length(t4),C_fix(16));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#s8vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1790,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s8vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#u16vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1793,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_u16vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#s16vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1796,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s16vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#u32vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1799,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_u32vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#s32vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1802,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s32vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#u64vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1805,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_u64vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#s64vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1808,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_s64vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#f32vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1811,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_f32vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#f64vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1814,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_f64vector_set(t2,t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#c64vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1817(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1817,c,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[13],lf[30]);
t6=C_slot(t2,C_fix(1));
t7=C_fixnum_divide(C_i_bytevector_length(t6),C_fix(8));
t8=C_i_check_range_2(t3,C_fix(0),t7,lf[30]);
t9=C_i_check_number_2(t4,lf[30]);
t10=C_fixnum_times(t3,C_fix(2));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1841,a[2]=t2,a[3]=t10,a[4]=t3,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:206: scheme#real-part */
t12=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k1839 in chicken.number-vector#c64vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1841(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1841,c,av);}
a=C_alloc(9);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_u_i_f32vector_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=C_fixnum_times(((C_word*)t0)[4],C_fix(2));
t5=C_fixnum_plus(t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1852,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:207: scheme#imag-part */
t7=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k1850 in k1839 in chicken.number-vector#c64vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_1852,c,av);}
a=C_alloc(4);
if(C_truep(C_i_flonump(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_f32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_u_i_int_to_flo(&a,1,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_f32vector_set(((C_word*)t0)[3],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.number-vector#c128vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1862(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_1862,c,av);}
a=C_alloc(7);
t5=C_i_check_structure_2(t2,lf[16],lf[34]);
t6=C_slot(t2,C_fix(1));
t7=C_fixnum_divide(C_i_bytevector_length(t6),C_fix(16));
t8=C_i_check_range_2(t3,C_fix(0),t7,lf[34]);
t9=C_i_check_number_2(t4,lf[34]);
t10=C_fixnum_times(t3,C_fix(2));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1886,a[2]=t2,a[3]=t10,a[4]=t3,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:215: scheme#real-part */
t12=*((C_word*)lf[32]+1);{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k1884 in chicken.number-vector#c128vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1886(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1886,c,av);}
a=C_alloc(9);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_u_i_f64vector_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=C_fixnum_times(((C_word*)t0)[4],C_fix(2));
t5=C_fixnum_plus(t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1897,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:216: scheme#imag-part */
t7=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k1895 in k1884 in chicken.number-vector#c128vector-set! in k1727 in k1724 in k1721 */
static void C_ccall f_1897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_1897,c,av);}
a=C_alloc(4);
if(C_truep(C_i_flonump(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_u_i_f64vector_set(((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_u_i_int_to_flo(&a,1,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_f64vector_set(((C_word*)t0)[3],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1910,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[37]+1 /* (set! chicken.number-vector#s8vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1914,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4942,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:227: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[21]+1);
av2[4]=lf[330];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1914,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[38]+1 /* (set! chicken.number-vector#u16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4939,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:233: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[22]+1);
av2[4]=lf[329];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1918,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[39]+1 /* (set! chicken.number-vector#s16vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4936,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:239: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[23]+1);
av2[4]=lf[328];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1922,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[40]+1 /* (set! chicken.number-vector#u32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4933,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:245: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[24]+1);
av2[4]=lf[327];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1926(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1926,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[41]+1 /* (set! chicken.number-vector#s32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4930,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:251: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[25]+1);
av2[4]=lf[326];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1930,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[42]+1 /* (set! chicken.number-vector#u64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4927,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:257: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[26]+1);
av2[4]=lf[325];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1934,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[43]+1 /* (set! chicken.number-vector#s64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1938,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4924,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:263: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[27]+1);
av2[4]=lf[324];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1938(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1938,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[44]+1 /* (set! chicken.number-vector#f32vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4921,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:269: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[28]+1);
av2[4]=lf[323];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1942,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[45]+1 /* (set! chicken.number-vector#f64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4901,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:275: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[29]+1);
av2[4]=lf[322];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1946,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[46]+1 /* (set! chicken.number-vector#c64vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4881,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:292: chicken.base#getter-with-setter */
t5=*((C_word*)lf[319]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[33]+1);
av2[4]=lf[320];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1950(C_word c,C_word *av){
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
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(273,c,6)))){
C_save_and_reclaim((void *)f_1950,c,av);}
a=C_alloc(273);
t2=C_mutate((C_word*)lf[47]+1 /* (set! chicken.number-vector#c128vector-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1958,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1960,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[53]+1 /* (set! chicken.number-vector#release-number-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1999,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[57]+1 /* (set! chicken.number-vector#make-u8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2014,a[2]=t3,a[3]=t4,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t7=C_mutate((C_word*)lf[62]+1 /* (set! chicken.number-vector#make-s8vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2122,a[2]=t3,a[3]=t4,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp));
t8=C_mutate((C_word*)lf[65]+1 /* (set! chicken.number-vector#make-u16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2234,a[2]=t3,a[3]=t4,a[4]=((C_word)li31),tmp=(C_word)a,a+=5,tmp));
t9=C_mutate((C_word*)lf[68]+1 /* (set! chicken.number-vector#make-s16vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2346,a[2]=t3,a[3]=t4,a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp));
t10=C_mutate((C_word*)lf[72]+1 /* (set! chicken.number-vector#make-u32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2462,a[2]=t3,a[3]=t4,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[75]+1 /* (set! chicken.number-vector#make-u64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2574,a[2]=t3,a[3]=t4,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[78]+1 /* (set! chicken.number-vector#make-s32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2686,a[2]=t3,a[3]=t4,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t13=C_mutate((C_word*)lf[81]+1 /* (set! chicken.number-vector#make-s64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2802,a[2]=t3,a[3]=t4,a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[84]+1 /* (set! chicken.number-vector#make-f32vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2918,a[2]=t3,a[3]=t4,a[4]=((C_word)li43),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[87]+1 /* (set! chicken.number-vector#make-f64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3029,a[2]=t3,a[3]=t4,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t16=C_mutate((C_word*)lf[90]+1 /* (set! chicken.number-vector#make-c64vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3140,a[2]=t3,a[3]=t4,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[92]+1 /* (set! chicken.number-vector#make-c128vector ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3276,a[2]=t3,a[3]=t4,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t18=C_mutate((C_word*)lf[94]+1 /* (set! chicken.number-vector#list->u8vector ...) */,*((C_word*)lf[95]+1));
t19=C_fast_retrieve(lf[62]);
t20=C_mutate((C_word*)lf[96]+1 /* (set! chicken.number-vector#list->s8vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3413,a[2]=t19,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t21=C_fast_retrieve(lf[65]);
t22=C_mutate((C_word*)lf[99]+1 /* (set! chicken.number-vector#list->u16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3449,a[2]=t21,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t23=C_fast_retrieve(lf[68]);
t24=C_mutate((C_word*)lf[101]+1 /* (set! chicken.number-vector#list->s16vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3485,a[2]=t23,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp));
t25=C_fast_retrieve(lf[72]);
t26=C_mutate((C_word*)lf[103]+1 /* (set! chicken.number-vector#list->u32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3521,a[2]=t25,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t27=C_fast_retrieve(lf[78]);
t28=C_mutate((C_word*)lf[105]+1 /* (set! chicken.number-vector#list->s32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3557,a[2]=t27,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));
t29=C_fast_retrieve(lf[75]);
t30=C_mutate((C_word*)lf[107]+1 /* (set! chicken.number-vector#list->u64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3593,a[2]=t29,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp));
t31=C_fast_retrieve(lf[81]);
t32=C_mutate((C_word*)lf[109]+1 /* (set! chicken.number-vector#list->s64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3629,a[2]=t31,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp));
t33=C_fast_retrieve(lf[84]);
t34=C_mutate((C_word*)lf[111]+1 /* (set! chicken.number-vector#list->f32vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3665,a[2]=t33,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t35=C_fast_retrieve(lf[87]);
t36=C_mutate((C_word*)lf[113]+1 /* (set! chicken.number-vector#list->f64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3701,a[2]=t35,a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp));
t37=C_fast_retrieve(lf[90]);
t38=C_mutate((C_word*)lf[115]+1 /* (set! chicken.number-vector#list->c64vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3737,a[2]=t37,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp));
t39=C_fast_retrieve(lf[92]);
t40=C_mutate((C_word*)lf[117]+1 /* (set! chicken.number-vector#list->c128vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3775,a[2]=t39,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t41=C_mutate((C_word*)lf[119]+1 /* (set! chicken.number-vector#u8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3813,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[120]+1 /* (set! chicken.number-vector#s8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3819,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[121]+1 /* (set! chicken.number-vector#u16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[122]+1 /* (set! chicken.number-vector#s16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3831,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[123]+1 /* (set! chicken.number-vector#u32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3837,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[124]+1 /* (set! chicken.number-vector#s32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3843,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[125]+1 /* (set! chicken.number-vector#u64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3849,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[126]+1 /* (set! chicken.number-vector#s64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3855,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[127]+1 /* (set! chicken.number-vector#f32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3861,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[128]+1 /* (set! chicken.number-vector#f64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3867,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[129]+1 /* (set! chicken.number-vector#c64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3873,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[130]+1 /* (set! chicken.number-vector#c128vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3879,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[131]+1 /* (set! chicken.number-vector#u8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3885,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[134]+1 /* (set! chicken.number-vector#s8vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3894,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[136]+1 /* (set! chicken.number-vector#u16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3924,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[138]+1 /* (set! chicken.number-vector#s16vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3954,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[140]+1 /* (set! chicken.number-vector#u32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3984,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[142]+1 /* (set! chicken.number-vector#s32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4013,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[144]+1 /* (set! chicken.number-vector#u64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4042,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[146]+1 /* (set! chicken.number-vector#s64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4071,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[148]+1 /* (set! chicken.number-vector#f32vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4100,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[150]+1 /* (set! chicken.number-vector#f64vector->list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4129,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t63=*((C_word*)lf[12]+1);
t64=C_fast_retrieve(lf[46]);
t65=C_mutate((C_word*)lf[152]+1 /* (set! chicken.number-vector#c64vector->list ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4158,a[2]=t64,a[3]=t63,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp));
t66=*((C_word*)lf[15]+1);
t67=C_fast_retrieve(lf[47]);
t68=C_mutate((C_word*)lf[154]+1 /* (set! chicken.number-vector#c128vector->list ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4194,a[2]=t67,a[3]=t66,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t69=C_mutate((C_word*)lf[156]+1 /* (set! chicken.number-vector#u8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4230,a[2]=((C_word)li107),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[157]+1 /* (set! chicken.number-vector#s8vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4236,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[158]+1 /* (set! chicken.number-vector#u16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4242,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[159]+1 /* (set! chicken.number-vector#s16vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4248,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[160]+1 /* (set! chicken.number-vector#u32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4254,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[161]+1 /* (set! chicken.number-vector#s32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4260,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[162]+1 /* (set! chicken.number-vector#u64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4266,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[163]+1 /* (set! chicken.number-vector#s64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4272,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[164]+1 /* (set! chicken.number-vector#f32vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4278,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate((C_word*)lf[165]+1 /* (set! chicken.number-vector#f64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4284,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[166]+1 /* (set! chicken.number-vector#c64vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[167]+1 /* (set! chicken.number-vector#c128vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4296,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[56]+1 /* (set! chicken.number-vector#number-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4302,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t82=C_mutate(&lf[170] /* (set! chicken.number-vector#pack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4325,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate(&lf[172] /* (set! chicken.number-vector#unpack ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4343,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate(&lf[174] /* (set! chicken.number-vector#unpack-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4373,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t85=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5854,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
t86=C_mutate((C_word*)lf[177]+1 /* (set! chicken.number-vector#s8vector->bytevector/shared ...) */,t85);
t87=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5847,a[2]=((C_word)li127),tmp=(C_word)a,a+=3,tmp);
t88=C_mutate((C_word*)lf[179]+1 /* (set! chicken.number-vector#u16vector->bytevector/shared ...) */,t87);
t89=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5840,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
t90=C_mutate((C_word*)lf[181]+1 /* (set! chicken.number-vector#s16vector->bytevector/shared ...) */,t89);
t91=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5833,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp);
t92=C_mutate((C_word*)lf[183]+1 /* (set! chicken.number-vector#u32vector->bytevector/shared ...) */,t91);
t93=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5826,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
t94=C_mutate((C_word*)lf[185]+1 /* (set! chicken.number-vector#s32vector->bytevector/shared ...) */,t93);
t95=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5819,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
t96=C_mutate((C_word*)lf[187]+1 /* (set! chicken.number-vector#u64vector->bytevector/shared ...) */,t95);
t97=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5812,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp);
t98=C_mutate((C_word*)lf[189]+1 /* (set! chicken.number-vector#s64vector->bytevector/shared ...) */,t97);
t99=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5805,a[2]=((C_word)li133),tmp=(C_word)a,a+=3,tmp);
t100=C_mutate((C_word*)lf[191]+1 /* (set! chicken.number-vector#f32vector->bytevector/shared ...) */,t99);
t101=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5798,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
t102=C_mutate((C_word*)lf[193]+1 /* (set! chicken.number-vector#f64vector->bytevector/shared ...) */,t101);
t103=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5791,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
t104=C_mutate((C_word*)lf[195]+1 /* (set! chicken.number-vector#c64vector->bytevector/shared ...) */,t103);
t105=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5784,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
t106=C_mutate((C_word*)lf[197]+1 /* (set! chicken.number-vector#c128vector->bytevector/shared ...) */,t105);
t107=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:745: pack-copy */
f_4325(t107,lf[63],lf[316]);}

/* ext-free in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1958,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=stub330(C_SCHEME_UNDEFINED,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* alloc in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_1960(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_1960,5,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=C_i_check_fixnum_2(t4,t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1967,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
/* srfi-4.scm:340: ##sys#error */
t8=*((C_word*)lf[48]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
av2[3]=lf[52];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_1967(2,av2);}}}

/* k1965 in alloc in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1967,c,av);}
a=C_alloc(6);
t2=C_i_o_fixnum_times(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1973,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1973(2,av2);}}
else{
/* srfi-4.scm:342: ##sys#error */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[51];
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k1971 in k1965 in alloc in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1973,c,av);}
if(C_truep(((C_word*)t0)[2])){
t2=C_fix((C_word)sizeof(size_t) * CHAR_BIT);
t3=C_i_foreign_unsigned_ranged_integer_argumentp(((C_word*)t0)[3],t2);
t4=stub324(C_SCHEME_UNDEFINED,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* srfi-4.scm:346: ##sys#error */
t5=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=lf[49];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}
else{
/* srfi-4.scm:347: ##sys#allocate-bytevector */
t2=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* chicken.number-vector#release-number-vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_1999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1999,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2006,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:351: number-vector? */
t4=C_fast_retrieve(lf[56]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2004 in chicken.number-vector#release-number-vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2006,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=stub330(C_SCHEME_UNDEFINED,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* srfi-4.scm:353: ##sys#error */
t2=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=lf[55];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}}

/* chicken.number-vector#make-u8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2014(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2014,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2036,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:357: alloc */
f_1960(t12,lf[59],C_fix(1),t2,t7);}

/* k2034 in chicken.number-vector#make-u8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2036,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:358: chicken.gc#set-finalizer! */
t3=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2039(2,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_2039(2,av2);}}}

/* k2037 in k2034 in chicken.number-vector#make-u8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2039,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2065,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2050,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:108: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[59];
tp(4,av2);}}}

/* k2048 in k2037 in k2034 in chicken.number-vector#make-u8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2050,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(8)))){
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:110: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[59];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2065(2,av2);}}}

/* k2063 in k2037 in k2034 in chicken.number-vector#make-u8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2065,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2070,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li26),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2070(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop376 in k2063 in k2037 in k2034 in chicken.number-vector#make-u8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2070(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_setsubbyte(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* chicken.number-vector#make-s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2122(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2122,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2196,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:369: alloc */
f_1960(t12,lf[64],C_fix(1),t2,t7);}

/* k2145 in k2194 in chicken.number-vector#make-s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2147,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2173,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:108: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[64];
tp(4,av2);}}}

/* k2156 in k2145 in k2194 in chicken.number-vector#make-s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2158,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(8)))){
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:110: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[64];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2173(2,av2);}}}

/* k2171 in k2145 in k2194 in chicken.number-vector#make-s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2173,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2178,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2178(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop410 in k2171 in k2145 in k2194 in chicken.number-vector#make-s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2178(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s8vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2194 in chicken.number-vector#make-s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2196,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[63],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:370: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2147(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2147(2,av2);}}}

/* chicken.number-vector#make-u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2234(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2234,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2308,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:381: alloc */
f_1960(t12,lf[67],C_fix(2),t2,t7);}

/* k2257 in k2306 in chicken.number-vector#make-u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2259,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2285,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2270,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:108: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[67];
tp(4,av2);}}}

/* k2268 in k2257 in k2306 in chicken.number-vector#make-u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2270,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(16)))){
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:110: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[67];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2285(2,av2);}}}

/* k2283 in k2257 in k2306 in chicken.number-vector#make-u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2285,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2290,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li30),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2290(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop444 in k2283 in k2257 in k2306 in chicken.number-vector#make-u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2290(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2306 in chicken.number-vector#make-u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2308,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[66],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:382: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2259(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2259(2,av2);}}}

/* chicken.number-vector#make-s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2346(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2346,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2424,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:393: alloc */
f_1960(t12,lf[70],C_fix(2),t2,t7);}

/* k2369 in k2422 in chicken.number-vector#make-s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2371,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2401,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2382,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:114: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[70];
tp(4,av2);}}}

/* k2380 in k2369 in k2422 in chicken.number-vector#make-s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2382,c,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(16),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:116: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[70];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_2401(2,av2);}}}

/* k2399 in k2369 in k2422 in chicken.number-vector#make-s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2401,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2406,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li32),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2406(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop478 in k2399 in k2369 in k2422 in chicken.number-vector#make-s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2406(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s16vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2422 in chicken.number-vector#make-s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2424,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[69],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2371,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:394: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2371(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2371(2,av2);}}}

/* chicken.number-vector#make-u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2462(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2462,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2536,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:405: alloc */
f_1960(t12,lf[74],C_fix(4),t2,t7);}

/* k2485 in k2534 in chicken.number-vector#make-u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2487,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2513,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:108: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[74];
tp(4,av2);}}}

/* k2496 in k2485 in k2534 in chicken.number-vector#make-u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2498,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(32)))){
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:110: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[74];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2513(2,av2);}}}

/* k2511 in k2485 in k2534 in chicken.number-vector#make-u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2513,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2518,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li34),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2518(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop512 in k2511 in k2485 in k2534 in chicken.number-vector#make-u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2518(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2534 in chicken.number-vector#make-u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2536,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[73],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:406: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2487(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2487(2,av2);}}}

/* chicken.number-vector#make-u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2574(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2574,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2648,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:417: alloc */
f_1960(t12,lf[77],C_fix(8),t2,t7);}

/* k2597 in k2646 in chicken.number-vector#make-u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2599,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2610,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:108: ##sys#check-exact-uinteger */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[77];
tp(4,av2);}}}

/* k2608 in k2597 in k2646 in chicken.number-vector#make-u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2610,c,av);}
if(C_truep(C_fixnum_greaterp(C_i_integer_length(((C_word*)t0)[2]),C_fix(64)))){
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:110: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
av2[3]=lf[77];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
f_2625(2,av2);}}}

/* k2623 in k2597 in k2646 in chicken.number-vector#make-u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2625,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2630,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2630(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop546 in k2623 in k2597 in k2646 in chicken.number-vector#make-u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2630(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_u64vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2646 in chicken.number-vector#make-u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2648,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[76],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:418: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2599(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2599(2,av2);}}}

/* chicken.number-vector#make-s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2686(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2686,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2764,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:429: alloc */
f_1960(t12,lf[80],C_fix(4),t2,t7);}

/* k2709 in k2762 in chicken.number-vector#make-s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2711,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2741,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:114: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[80];
tp(4,av2);}}}

/* k2720 in k2709 in k2762 in chicken.number-vector#make-s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2722,c,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(32),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:116: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[80];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_2741(2,av2);}}}

/* k2739 in k2709 in k2762 in chicken.number-vector#make-s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2741,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2746,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2746(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop580 in k2739 in k2709 in k2762 in chicken.number-vector#make-s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2746(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2762 in chicken.number-vector#make-s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2764,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[79],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:430: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2711(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2711(2,av2);}}}

/* chicken.number-vector#make-s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2802(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_2802,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2880,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:441: alloc */
f_1960(t12,lf[83],C_fix(8),t2,t7);}

/* k2825 in k2878 in chicken.number-vector#make-s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2827,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:114: ##sys#check-exact-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[83];
tp(4,av2);}}}

/* k2836 in k2825 in k2878 in chicken.number-vector#make-s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2838,c,av);}
t2=C_i_integer_length(((C_word*)t0)[2]);
t3=C_fixnum_difference(C_fix(64),C_fix(1));
if(C_truep(C_fixnum_greaterp(t2,t3))){
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NUMERIC_RANGE_ERROR);
/* srfi-4.scm:116: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
av2[3]=lf[83];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_2857(2,av2);}}}

/* k2855 in k2825 in k2878 in chicken.number-vector#make-s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2857,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2862,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[2],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2862(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop614 in k2855 in k2825 in k2878 in chicken.number-vector#make-s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2862(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_s64vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2878 in chicken.number-vector#make-s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2880,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[82],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2827,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:442: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2827(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2827(2,av2);}}}

/* chicken.number-vector#make-f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2918(C_word c,C_word *av){
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
C_word t14;
C_word t15;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_2918,c,av);}
a=C_alloc(10);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_rest_nullp(c,3);
t8=C_rest_nullp(c,4);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t10=C_rest_nullp(c,4);
t11=C_rest_nullp(c,5);
t12=(C_truep(t11)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t13=C_rest_nullp(c,5);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2991,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t9,a[6]=t12,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:453: alloc */
f_1960(t14,lf[86],C_fix(4),t2,t9);}

/* k2941 in k2989 in chicken.number-vector#make-f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2943(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_2943,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[4])[1]))){
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2964,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_exact_integerp(t3);
t5=(C_truep(t4)?t4:C_i_flonump(t3));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_2964(2,av2);}}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:105: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t2;
av2[2]=t6;
av2[3]=lf[86];
av2[4]=t3;
tp(5,av2);}}}}

/* k2962 in k2941 in k2989 in chicken.number-vector#make-f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2964,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_flonump(((C_word*)((C_word*)t2)[4])[1]))){
t4=t3;
f_2967(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_mutate(((C_word *)((C_word*)t2)[4])+1,C_a_u_i_int_to_flo(&a,1,((C_word*)((C_word*)t2)[4])[1]));
t5=t3;
f_2967(t5,t4);}}

/* k2965 in k2962 in k2941 in k2989 in chicken.number-vector#make-f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_2967(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2967,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2972,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word)li42),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=(
  f_2972(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop649 in k2965 in k2962 in k2941 in k2989 in chicken.number-vector#make-f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_2972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f32vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k2989 in chicken.number-vector#make-f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_2991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2991,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[85],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:454: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2943(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_2943(2,av2);}}}

/* chicken.number-vector#make-f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3029(C_word c,C_word *av){
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
C_word t14;
C_word t15;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_3029,c,av);}
a=C_alloc(10);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_rest_nullp(c,3);
t8=C_rest_nullp(c,4);
t9=(C_truep(t8)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t10=C_rest_nullp(c,4);
t11=C_rest_nullp(c,5);
t12=(C_truep(t11)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t13=C_rest_nullp(c,5);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3102,a[2]=t6,a[3]=t1,a[4]=t2,a[5]=t9,a[6]=t12,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:467: alloc */
f_1960(t14,lf[89],C_fix(8),t2,t9);}

/* k3052 in k3100 in chicken.number-vector#make-f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3054(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3054,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[4])[1]))){
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_exact_integerp(t3);
t5=(C_truep(t4)?t4:C_i_flonump(t3));
if(C_truep(t5)){
t6=C_SCHEME_UNDEFINED;
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
f_3075(2,av2);}}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:105: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t2;
av2[2]=t6;
av2[3]=lf[89];
av2[4]=t3;
tp(5,av2);}}}}

/* k3073 in k3052 in k3100 in chicken.number-vector#make-f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3075,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_flonump(((C_word*)((C_word*)t2)[4])[1]))){
t4=t3;
f_3078(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_mutate(((C_word *)((C_word*)t2)[4])+1,C_a_u_i_int_to_flo(&a,1,((C_word*)((C_word*)t2)[4])[1]));
t5=t3;
f_3078(t5,t4);}}

/* k3076 in k3073 in k3052 in k3100 in chicken.number-vector#make-f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3078(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3078,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3083,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word)li44),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[5];{
C_word av2[2];
av2[0]=t4;
av2[1]=(
  f_3083(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop685 in k3076 in k3073 in k3052 in k3100 in chicken.number-vector#make-f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_3083(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f64vector_set(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[4])[1]);
t4=C_fixnum_plus(t1,C_fix(1));
t1=t4;
goto loop;}}

/* k3100 in chicken.number-vector#make-f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3102,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[88],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:468: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3054(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3054(2,av2);}}}

/* chicken.number-vector#make-c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3140(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_3140,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3234,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:481: alloc */
f_1960(t12,lf[91],C_fix(4),C_fixnum_times(t2,C_fix(2)),t7);}

/* k3163 in k3232 in chicken.number-vector#make-c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3165,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_times(((C_word*)t0)[5],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3177,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:486: real-part */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3175 in k3163 in k3232 in chicken.number-vector#make-c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3177,c,av);}
a=C_alloc(7);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_mutate(((C_word *)t0)+4,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3183,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:487: imag-part */
t5=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3181 in k3175 in k3163 in k3232 in chicken.number-vector#make-c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3183(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3183,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3201,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t3,a[6]=((C_word*)t2)[5],tmp=(C_word)a,a+=7,tmp);
t5=C_i_exact_integerp(((C_word*)t2)[6]);
t6=(C_truep(t5)?t5:C_i_flonump(((C_word*)t2)[6]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
f_3201(2,av2);}}
else{
t7=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:105: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=t7;
av2[3]=lf[91];
av2[4]=((C_word*)t2)[6];
tp(5,av2);}}}

/* k3199 in k3181 in k3175 in k3163 in k3232 in chicken.number-vector#make-c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3201,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li46),tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_3206(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop724 in k3199 in k3181 in k3175 in k3163 in k3232 in chicken.number-vector#make-c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_3206(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f32vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t4=C_u_i_f32vector_set(((C_word*)t0)[3],t3,((C_word*)t0)[5]);
t6=C_fixnum_plus(t1,C_fix(2));
t1=t6;
goto loop;}}

/* k3232 in chicken.number-vector#make-c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3234,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[13],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:482: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3165(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3165(2,av2);}}}

/* chicken.number-vector#make-c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3276(C_word c,C_word *av){
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
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_3276,c,av);}
a=C_alloc(8);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_rest_nullp(c,5);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_get_rest_arg(c,5,av,3,t0));
t11=C_rest_nullp(c,5);
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3370,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t7,a[6]=t10,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:496: alloc */
f_1960(t12,lf[93],C_fix(8),C_fixnum_times(t2,C_fix(2)),t7);}

/* k3299 in k3368 in chicken.number-vector#make-c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3301,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_fixnum_times(((C_word*)t0)[5],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3313,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:501: real-part */
t4=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k3311 in k3299 in k3368 in chicken.number-vector#make-c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3313(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3313,c,av);}
a=C_alloc(7);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_mutate(((C_word *)t0)+4,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3319,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:502: imag-part */
t5=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3317 in k3311 in k3299 in k3368 in chicken.number-vector#make-c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3319(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3319,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3337,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t3,a[6]=((C_word*)t2)[5],tmp=(C_word)a,a+=7,tmp);
t5=C_i_exact_integerp(((C_word*)t2)[6]);
t6=(C_truep(t5)?t5:C_i_flonump(((C_word*)t2)[6]));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t4;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
f_3337(2,av2);}}
else{
t7=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR);
/* srfi-4.scm:105: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t4;
av2[2]=t7;
av2[3]=lf[93];
av2[4]=((C_word*)t2)[6];
tp(5,av2);}}}

/* k3335 in k3317 in k3311 in k3299 in k3368 in chicken.number-vector#make-c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3337,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_3342(t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* doloop771 in k3335 in k3317 in k3311 in k3299 in k3368 in chicken.number-vector#make-c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static C_word f_3342(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_u_i_f64vector_set(((C_word*)t0)[3],t1,((C_word*)t0)[4]);
t3=C_fixnum_plus(t1,C_fix(1));
t4=C_u_i_f64vector_set(((C_word*)t0)[3],t3,((C_word*)t0)[5]);
t6=C_fixnum_plus(t1,C_fix(2));
t1=t6;
goto loop;}}

/* k3368 in chicken.number-vector#make-c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3370,c,av);}
a=C_alloc(9);
t2=C_a_i_record2(&a,2,lf[16],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(((C_word*)t0)[6])){
/* srfi-4.scm:497: chicken.gc#set-finalizer! */
t4=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3301(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3301(2,av2);}}}

/* chicken.number-vector#list->s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3413(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3413,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[63]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3420,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:535: make-s8vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3418 in chicken.number-vector#list->s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3420,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3425,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3425(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop817 in k3418 in chicken.number-vector#list->s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3425(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3425,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:535: s8vector-set! */
t6=*((C_word*)lf[20]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:535: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[98];
tp(4,av2);}}}}

/* k3430 in doloop817 in k3418 in chicken.number-vector#list->s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3432,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3425(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3449(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3449,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[66]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3456,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:536: make-u16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3454 in chicken.number-vector#list->u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3456,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3461,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3461(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop830 in k3454 in chicken.number-vector#list->u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3461(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3461,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3468,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:536: u16vector-set! */
t6=*((C_word*)lf[21]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:536: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[100];
tp(4,av2);}}}}

/* k3466 in doloop830 in k3454 in chicken.number-vector#list->u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3468,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3461(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3485(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3485,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[69]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3492,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:537: make-s16vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3490 in chicken.number-vector#list->s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3492(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3492,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3497,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3497(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop843 in k3490 in chicken.number-vector#list->s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3497(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3497,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3504,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:537: s16vector-set! */
t6=*((C_word*)lf[22]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:537: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[102];
tp(4,av2);}}}}

/* k3502 in doloop843 in k3490 in chicken.number-vector#list->s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3504,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3497(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3521(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3521,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[73]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3528,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:538: make-u32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3526 in chicken.number-vector#list->u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3528,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3533,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3533(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop856 in k3526 in chicken.number-vector#list->u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3533(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3533,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:538: u32vector-set! */
t6=*((C_word*)lf[23]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:538: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[104];
tp(4,av2);}}}}

/* k3538 in doloop856 in k3526 in chicken.number-vector#list->u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3540,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3533(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3557(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3557,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[79]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3564,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:539: make-s32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3562 in chicken.number-vector#list->s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3564,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3569,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3569(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop869 in k3562 in chicken.number-vector#list->s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3569(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3569,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3576,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:539: s32vector-set! */
t6=*((C_word*)lf[24]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:539: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[106];
tp(4,av2);}}}}

/* k3574 in doloop869 in k3562 in chicken.number-vector#list->s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3576,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3569(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3593(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3593,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[76]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3600,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:540: make-u64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3598 in chicken.number-vector#list->u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3600,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3605,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li60),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3605(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop882 in k3598 in chicken.number-vector#list->u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3605(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3605,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3612,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:540: u64vector-set! */
t6=*((C_word*)lf[25]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:540: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[108];
tp(4,av2);}}}}

/* k3610 in doloop882 in k3598 in chicken.number-vector#list->u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3612,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3605(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3629(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3629,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[82]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3636,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:541: make-s64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k3634 in chicken.number-vector#list->s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3636,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3641,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li62),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3641(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop895 in k3634 in chicken.number-vector#list->s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3641(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3641,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:541: s64vector-set! */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[26]+1));
C_word av2[5];
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
tp(5,av2);}}
else{
/* srfi-4.scm:541: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[110];
tp(4,av2);}}}}

/* k3646 in doloop895 in k3634 in chicken.number-vector#list->s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3648,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3641(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3665(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3665,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[85]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3672,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:542: make-f32vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3670 in chicken.number-vector#list->f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3672,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3677,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3677(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop908 in k3670 in chicken.number-vector#list->f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3677(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3677,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3684,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:542: f32vector-set! */
t6=*((C_word*)lf[27]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:542: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[112];
tp(4,av2);}}}}

/* k3682 in doloop908 in k3670 in chicken.number-vector#list->f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3684,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3677(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3701(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3701,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[88]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3708,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:543: make-f64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3706 in chicken.number-vector#list->f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_3708,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3713,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word)li66),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3713(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop921 in k3706 in chicken.number-vector#list->f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3713(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3713,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3720,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
/* srfi-4.scm:543: f64vector-set! */
t6=*((C_word*)lf[28]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* srfi-4.scm:543: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[4];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[114];
tp(4,av2);}}}}

/* k3718 in doloop921 in k3706 in chicken.number-vector#list->f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3720,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3713(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* chicken.number-vector#list->c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3737(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3737,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[116]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3744,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:552: make-c64vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3742 in chicken.number-vector#list->c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3744,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3749,a[2]=t1,a[3]=t3,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3749(t5,((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);}

/* doloop936 in k3742 in chicken.number-vector#list->c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3749(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3749,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:557: real-part */
t6=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3755 in doloop936 in k3742 in chicken.number-vector#list->c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3757,c,av);}
a=C_alloc(12);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_u_i_f32vector_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3765,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:560: imag-part */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3763 in k3755 in doloop936 in k3742 in chicken.number-vector#list->c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3765,c,av);}
a=C_alloc(4);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_u_i_f32vector_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)((C_word*)t0)[4])[1];
f_3749(t4,((C_word*)t0)[5],C_u_fixnum_plus(((C_word*)t0)[6],C_fix(2)),C_slot(((C_word*)t0)[7],C_fix(1)));}

/* chicken.number-vector#list->c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3775(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3775,c,av);}
a=C_alloc(4);
t3=C_i_check_list_2(t2,lf[118]);
t4=C_i_length(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3782,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:569: make-c128vector */
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3780 in chicken.number-vector#list->c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3782,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3787,a[2]=t1,a[3]=t3,a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3787(t5,((C_word*)t0)[2],C_fix(0),((C_word*)t0)[3]);}

/* doloop960 in k3780 in chicken.number-vector#list->c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3787(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3787,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_eqp(t3,C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:574: real-part */
t6=*((C_word*)lf[32]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k3793 in doloop960 in k3780 in chicken.number-vector#list->c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3795,c,av);}
a=C_alloc(12);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_u_i_f64vector_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:577: imag-part */
t6=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3801 in k3793 in doloop960 in k3780 in chicken.number-vector#list->c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3803,c,av);}
a=C_alloc(4);
t2=(C_truep(C_i_flonump(t1))?t1:C_a_u_i_int_to_flo(&a,1,t1));
t3=C_u_i_f64vector_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)((C_word*)t0)[4])[1];
f_3787(t4,((C_word*)t0)[5],C_u_fixnum_plus(((C_word*)t0)[6],C_fix(2)),C_slot(((C_word*)t0)[7],C_fix(1)));}

/* chicken.number-vector#u8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3813,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:583: list->u8vector */
t3=C_fast_retrieve(lf[94]);{
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

/* chicken.number-vector#s8vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3819,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:586: list->s8vector */
t3=C_fast_retrieve(lf[96]);{
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

/* chicken.number-vector#u16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3825,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:589: list->u16vector */
t3=C_fast_retrieve(lf[99]);{
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

/* chicken.number-vector#s16vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3831,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:592: list->s16vector */
t3=C_fast_retrieve(lf[101]);{
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

/* chicken.number-vector#u32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3837,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:595: list->u32vector */
t3=C_fast_retrieve(lf[103]);{
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

/* chicken.number-vector#s32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3843,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:598: list->s32vector */
t3=C_fast_retrieve(lf[105]);{
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

/* chicken.number-vector#u64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3849,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:601: list->u64vector */
t3=C_fast_retrieve(lf[107]);{
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

/* chicken.number-vector#s64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3855,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:604: list->s64vector */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[109]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* chicken.number-vector#f32vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3861,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:607: list->f32vector */
t3=C_fast_retrieve(lf[111]);{
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

/* chicken.number-vector#f64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3867,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:610: list->f64vector */
t3=C_fast_retrieve(lf[113]);{
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

/* chicken.number-vector#c64vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3873,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:613: list->c64vector */
t3=C_fast_retrieve(lf[115]);{
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

/* chicken.number-vector#c128vector in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,2)))){
C_save_and_reclaim((void*)f_3879,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
/* srfi-4.scm:616: list->c128vector */
t3=C_fast_retrieve(lf[117]);{
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

/* chicken.number-vector#u8vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3885,c,av);}
t3=C_i_check_bytevector_2(t2,lf[132]);
/* srfi-4.scm:641: ##sys#bytevector->list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[133]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[133]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* chicken.number-vector#s8vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3894(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3894,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[63],lf[135]);
t4=C_u_i_s8vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3903,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li85),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3903(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#s8vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3903(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3903,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s8vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3918,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:643: loop */
t6=t4;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k3916 in loop in chicken.number-vector#s8vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3918,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#u16vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3924(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3924,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[66],lf[137]);
t4=C_u_i_u16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3933,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3933(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#u16vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3933,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_u16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3948,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:644: loop */
t6=t4;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k3946 in loop in chicken.number-vector#u16vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3948,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#s16vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3954(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3954,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[69],lf[139]);
t4=C_u_i_s16vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3963,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3963(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#s16vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3963(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3963,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_u_i_s16vector_ref(((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3978,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:645: loop */
t6=t4;
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k3976 in loop in chicken.number-vector#s16vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3978,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#u32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_3984(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3984,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[73],lf[141]);
t4=C_u_i_u32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3993,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3993(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#u32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_3993(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3993,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4007,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:647: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k4005 in loop in chicken.number-vector#u32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4007,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_u32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#s32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4013(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4013,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[79],lf[143]);
t4=C_u_i_s32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4022,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4022(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#s32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4022(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4022,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4036,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:648: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k4034 in loop in chicken.number-vector#s32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4036,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_s32vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#u64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4042(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4042,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[76],lf[145]);
t4=C_u_i_u64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4051,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4051(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#u64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4051(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4051,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4065,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:649: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k4063 in loop in chicken.number-vector#u64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,1)))){
C_save_and_reclaim((void *)f_4065,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_u64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#s64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4071(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4071,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[82],lf[147]);
t4=C_u_i_s64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4080,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4080(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#s64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4080,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4094,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:650: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k4092 in loop in chicken.number-vector#s64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,1)))){
C_save_and_reclaim((void *)f_4094,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_a_u_i_s64vector_ref(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#f32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4100(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4100,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[85],lf[149]);
t4=C_u_i_f32vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4109,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li99),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4109(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#f32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4109,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4123,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:651: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k4121 in loop in chicken.number-vector#f32vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4123,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_flonum(&a,C_ub_i_f32vector_ref(((C_word*)t0)[3],((C_word*)t0)[4])),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#f64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4129(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4129,c,av);}
a=C_alloc(8);
t3=C_i_check_structure_2(t2,lf[88],lf[151]);
t4=C_u_i_f64vector_length(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4138,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4138(t8,t1,C_fix(0));}

/* loop in chicken.number-vector#f64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4138(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4138,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4152,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:652: loop */
t5=t3;
t6=C_fixnum_plus(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}}

/* k4150 in loop in chicken.number-vector#f64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4152,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_flonum(&a,C_ub_i_f64vector_ref(((C_word*)t0)[3],((C_word*)t0)[4])),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#c64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4158,c,av);}
a=C_alloc(5);
t3=C_i_check_structure_2(t2,lf[13],lf[153]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:659: c64vector-length */
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4163 in chicken.number-vector#c64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4165,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4170,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li103),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_4170(t5,((C_word*)t0)[4],C_fix(0));}

/* loop in k4163 in chicken.number-vector#c64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4170(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4170,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4184,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:663: c64vector-ref */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k4182 in loop in k4163 in chicken.number-vector#c64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4184,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4188,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:664: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4170(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k4186 in k4182 in loop in k4163 in chicken.number-vector#c64vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4188,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#c128vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4194,c,av);}
a=C_alloc(5);
t3=C_i_check_structure_2(t2,lf[16],lf[155]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:671: c128vector-length */
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k4199 in chicken.number-vector#c128vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4201,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4206,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word)li105),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_4206(t5,((C_word*)t0)[4],C_fix(0));}

/* loop in k4199 in chicken.number-vector#c128vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4206(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4206,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4220,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:675: c128vector-ref */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k4218 in loop in k4199 in chicken.number-vector#c128vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4220,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4224,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:676: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4206(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k4222 in k4218 in loop in k4199 in chicken.number-vector#c128vector->list in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4224,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#u8vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4230,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_bytevectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s8vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4236,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_s8vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#u16vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4242,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_u16vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s16vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4248,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_s16vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#u32vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4254(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4254,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_u32vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s32vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4260,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_s32vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#u64vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4266,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_u64vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#s64vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4272,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_s64vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#f32vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4278,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_f32vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#f64vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4284,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_f64vectorp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#c64vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4290,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[13]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#c128vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4296(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4296,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_i_structurep(t2,lf[16]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.number-vector#number-vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4302,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4306,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:696: chicken.bytevector#bytevector? */
t4=C_fast_retrieve(lf[169]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4304 in chicken.number-vector#number-vector? in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4306,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* srfi-4.scm:696: ##sys#srfi-4-vector? */
t2=C_fast_retrieve(lf[168]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}}

/* chicken.number-vector#pack-copy in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4325(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4325,3,t1,t2,t3);}
a=C_alloc(5);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4327,a[2]=t2,a[3]=t3,a[4]=((C_word)li120),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_4327 in chicken.number-vector#pack-copy in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4327(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4327,c,av);}
a=C_alloc(4);
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],((C_word*)t0)[3]);
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4337,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:709: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[171]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[171]+1);
av2[1]=t5;
av2[2]=C_block_size(t4);
tp(3,av2);}}

/* k4335 */
static void C_ccall f_4337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4337,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_copy_block(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.number-vector#unpack in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4343(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4343,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4345,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li122),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_4345 in chicken.number-vector#unpack in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4345(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4345,c,av);}
a=C_alloc(3);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
t6=(C_truep(t5)?t5:C_eqp(C_fix(0),C_fixnum_modulo(t4,((C_word*)t0)[3])));
if(C_truep(t6)){
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
/* srfi-4.scm:719: ##sys#error */
t7=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t7;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[173];
av2[4]=((C_word*)t0)[4];
av2[5]=t4;
av2[6]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(7,av2);}}}

/* chicken.number-vector#unpack-copy in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void f_4373(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_4373,4,t1,t2,t3,t4);}
a=C_alloc(6);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4375,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word)li124),tmp=(C_word)a,a+=6,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_4375 in chicken.number-vector#unpack-copy in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4375(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4375,c,av);}
a=C_alloc(8);
t3=C_i_check_bytevector_2(t2,((C_word*)t0)[2]);
t4=C_block_size(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4385,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:725: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[171]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[171]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}

/* k4383 */
static void C_ccall f_4385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4385,c,av);}
a=C_alloc(3);
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_eqp(C_fix(0),C_fixnum_modulo(((C_word*)t0)[3],((C_word*)t0)[2])));
if(C_truep(t3)){
t4=C_copy_block(((C_word*)t0)[4],t1);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record2(&a,2,((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* srfi-4.scm:731: ##sys#error */
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[7];
av2[3]=lf[175];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}}

/* k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4453,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[198]+1 /* (set! chicken.number-vector#s8vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:746: pack-copy */
f_4325(t3,lf[66],lf[315]);}

/* k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4457,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[199]+1 /* (set! chicken.number-vector#u16vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4461,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:747: pack-copy */
f_4325(t3,lf[69],lf[314]);}

/* k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4461,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[200]+1 /* (set! chicken.number-vector#s16vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:748: pack-copy */
f_4325(t3,lf[73],lf[313]);}

/* k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4465,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[201]+1 /* (set! chicken.number-vector#u32vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4469,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:749: pack-copy */
f_4325(t3,lf[79],lf[312]);}

/* k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4469,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[202]+1 /* (set! chicken.number-vector#s32vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4473,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:750: pack-copy */
f_4325(t3,lf[76],lf[311]);}

/* k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4473,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[203]+1 /* (set! chicken.number-vector#u64vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:751: pack-copy */
f_4325(t3,lf[82],lf[310]);}

/* k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4477,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[204]+1 /* (set! chicken.number-vector#s64vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4481,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:752: pack-copy */
f_4325(t3,lf[85],lf[309]);}

/* k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 in ... */
static void C_ccall f_4481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4481,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[205]+1 /* (set! chicken.number-vector#f32vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4485,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:753: pack-copy */
f_4325(t3,lf[88],lf[308]);}

/* k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in ... */
static void C_ccall f_4485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4485,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[206]+1 /* (set! chicken.number-vector#f64vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:754: pack-copy */
f_4325(t3,lf[13],lf[307]);}

/* k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in ... */
static void C_ccall f_4489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4489,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[207]+1 /* (set! chicken.number-vector#c64vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:755: pack-copy */
f_4325(t3,lf[16],lf[306]);}

/* k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in ... */
static void C_ccall f_4493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4493,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[208]+1 /* (set! chicken.number-vector#c128vector->bytevector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:757: unpack */
f_4343(t3,lf[63],C_SCHEME_TRUE,lf[305]);}

/* k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in ... */
static void C_ccall f_4497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4497,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[209]+1 /* (set! chicken.number-vector#bytevector->s8vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:758: unpack */
f_4343(t3,lf[66],C_fix(2),lf[304]);}

/* k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in ... */
static void C_ccall f_4501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4501,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[210]+1 /* (set! chicken.number-vector#bytevector->u16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:759: unpack */
f_4343(t3,lf[69],C_fix(2),lf[303]);}

/* k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in ... */
static void C_ccall f_4505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4505,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[211]+1 /* (set! chicken.number-vector#bytevector->s16vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:760: unpack */
f_4343(t3,lf[73],C_fix(4),lf[302]);}

/* k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in ... */
static void C_ccall f_4509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4509,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[212]+1 /* (set! chicken.number-vector#bytevector->u32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:761: unpack */
f_4343(t3,lf[79],C_fix(4),lf[301]);}

/* k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in k1928 in ... */
static void C_ccall f_4513(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4513,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[213]+1 /* (set! chicken.number-vector#bytevector->s32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:762: unpack */
f_4343(t3,lf[76],C_fix(4),lf[300]);}

/* k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in k1932 in ... */
static void C_ccall f_4517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4517,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[214]+1 /* (set! chicken.number-vector#bytevector->u64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:763: unpack */
f_4343(t3,lf[82],C_fix(4),lf[299]);}

/* k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in k1936 in ... */
static void C_ccall f_4521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4521,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[215]+1 /* (set! chicken.number-vector#bytevector->s64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4525,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:764: unpack */
f_4343(t3,lf[85],C_fix(4),lf[298]);}

/* k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in k1940 in ... */
static void C_ccall f_4525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4525,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[216]+1 /* (set! chicken.number-vector#bytevector->f32vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:765: unpack */
f_4343(t3,lf[88],C_fix(8),lf[297]);}

/* k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in k1944 in ... */
static void C_ccall f_4529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4529,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[217]+1 /* (set! chicken.number-vector#bytevector->f64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4533,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:766: unpack */
f_4343(t3,lf[13],C_fix(8),lf[296]);}

/* k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in k1948 in ... */
static void C_ccall f_4533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4533,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[218]+1 /* (set! chicken.number-vector#bytevector->c64vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4537,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:767: unpack */
f_4343(t3,lf[16],C_fix(16),lf[295]);}

/* k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in k4451 in ... */
static void C_ccall f_4537(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4537,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[219]+1 /* (set! chicken.number-vector#bytevector->c128vector/shared ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:769: unpack-copy */
f_4373(t3,lf[63],C_SCHEME_TRUE,lf[294]);}

/* k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in k4455 in ... */
static void C_ccall f_4541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4541,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[220]+1 /* (set! chicken.number-vector#bytevector->s8vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4545,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:770: unpack-copy */
f_4373(t3,lf[66],C_fix(2),lf[293]);}

/* k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in k4459 in ... */
static void C_ccall f_4545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4545,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[221]+1 /* (set! chicken.number-vector#bytevector->u16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4549,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:771: unpack-copy */
f_4373(t3,lf[69],C_fix(2),lf[292]);}

/* k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in k4463 in ... */
static void C_ccall f_4549(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4549,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[222]+1 /* (set! chicken.number-vector#bytevector->s16vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:772: unpack-copy */
f_4373(t3,lf[73],C_fix(4),lf[291]);}

/* k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in k4467 in ... */
static void C_ccall f_4553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4553,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[223]+1 /* (set! chicken.number-vector#bytevector->u32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:773: unpack-copy */
f_4373(t3,lf[79],C_fix(4),lf[290]);}

/* k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in k4471 in ... */
static void C_ccall f_4557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4557,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[224]+1 /* (set! chicken.number-vector#bytevector->s32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:774: unpack-copy */
f_4373(t3,lf[76],C_fix(4),lf[289]);}

/* k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in k4475 in ... */
static void C_ccall f_4561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4561,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[225]+1 /* (set! chicken.number-vector#bytevector->u64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:775: unpack-copy */
f_4373(t3,lf[82],C_fix(4),lf[288]);}

/* k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in k4479 in ... */
static void C_ccall f_4565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4565,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[226]+1 /* (set! chicken.number-vector#bytevector->s64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:776: unpack-copy */
f_4373(t3,lf[85],C_fix(4),lf[287]);}

/* k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in k4483 in ... */
static void C_ccall f_4569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4569,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[227]+1 /* (set! chicken.number-vector#bytevector->f32vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4573,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:777: unpack-copy */
f_4373(t3,lf[88],C_fix(8),lf[286]);}

/* k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in k4487 in ... */
static void C_ccall f_4573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4573,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[228]+1 /* (set! chicken.number-vector#bytevector->f64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:778: unpack-copy */
f_4373(t3,lf[13],C_fix(8),lf[285]);}

/* k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in k4491 in ... */
static void C_ccall f_4577(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4577,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[229]+1 /* (set! chicken.number-vector#bytevector->c64vector ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:779: unpack-copy */
f_4373(t3,lf[16],C_fix(16),lf[284]);}

/* k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in k4495 in ... */
static void C_ccall f_4581(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(50,c,8)))){
C_save_and_reclaim((void *)f_4581,c,av);}
a=C_alloc(50);
t2=C_mutate((C_word*)lf[230]+1 /* (set! chicken.number-vector#bytevector->c128vector ...) */,t1);
t3=C_mutate(&lf[231] /* (set! chicken.number-vector#subnvector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4583,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[233]+1 /* (set! chicken.number-vector#subu8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4618,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[236]+1 /* (set! chicken.number-vector#subu16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[238]+1 /* (set! chicken.number-vector#subu32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4642,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[240]+1 /* (set! chicken.number-vector#subu64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4648,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[242]+1 /* (set! chicken.number-vector#subs8vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4654,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[244]+1 /* (set! chicken.number-vector#subs16vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4660,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[246]+1 /* (set! chicken.number-vector#subs32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4666,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[248]+1 /* (set! chicken.number-vector#subs64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4672,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[250]+1 /* (set! chicken.number-vector#subf32vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[252]+1 /* (set! chicken.number-vector#subf64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[254]+1 /* (set! chicken.number-vector#subc64vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4690,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[256]+1 /* (set! chicken.number-vector#subc128vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4696,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t16=C_a_i_provide(&a,1,lf[258]);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t17;
C_srfi_2d4_toplevel(2,av2);}}

/* chicken.number-vector#subnvector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void f_4583(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_4583,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(10);
t8=C_i_check_structure_2(t2,t3,t7);
t9=C_slot(t2,C_fix(1));
t10=C_block_size(t9);
t11=C_u_fixnum_divide(t10,t4);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4596,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t9,a[7]=t1,a[8]=t11,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
/* srfi-4.scm:788: ##sys#check-range/including */
t13=C_fast_retrieve(lf[232]);{
C_word av2[6];
av2[0]=t13;
av2[1]=t12;
av2[2]=t5;
av2[3]=C_fix(0);
av2[4]=t11;
av2[5]=t7;
((C_proc)(void*)(*((C_word*)t13+1)))(6,av2);}}

/* k4594 in chicken.number-vector#subnvector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in ... */
static void C_ccall f_4596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_4596,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:789: ##sys#check-range/including */
t3=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[8];
av2[5]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4597 in k4594 in chicken.number-vector#subnvector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in ... */
static void C_ccall f_4599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4599,c,av);}
a=C_alloc(8);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_fixnum_times(((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4605,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-4.scm:791: ##sys#allocate-bytevector */
t5=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4603 in k4597 in k4594 in chicken.number-vector#subnvector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in ... */
static void C_ccall f_4605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4605,c,av);}
a=C_alloc(3);
t2=C_a_i_record2(&a,2,((C_word*)t0)[2],t1);
t3=C_fixnum_times(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_copy_subvector(t1,((C_word*)t0)[5],C_fix(0),t3,((C_word*)t0)[6]);
t5=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.number-vector#subu8vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4618(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_4618,c,av);}
a=C_alloc(7);
t5=C_i_check_bytevector_2(t2,lf[234]);
t6=C_block_size(t2);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4628,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* srfi-4.scm:799: ##sys#check-range/including */
t8=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=C_fix(0);
av2[4]=t6;
av2[5]=lf[234];
((C_proc)(void*)(*((C_word*)t8+1)))(6,av2);}}

/* k4626 in chicken.number-vector#subu8vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in ... */
static void C_ccall f_4628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_4628,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:800: ##sys#check-range/including */
t3=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[6];
av2[5]=lf[234];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}

/* k4629 in k4626 in chicken.number-vector#subu8vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in ... */
static void C_ccall f_4631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4631,c,av);}
/* srfi-4.scm:801: chicken.bytevector#bytevector-copy */
t2=C_fast_retrieve(lf[235]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* chicken.number-vector#subu16vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4636,c,av);}
/* srfi-4.scm:803: subnvector */
f_4583(t1,t2,lf[66],C_fix(2),t3,t4,lf[237]);}

/* chicken.number-vector#subu32vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4642,c,av);}
/* srfi-4.scm:804: subnvector */
f_4583(t1,t2,lf[73],C_fix(4),t3,t4,lf[239]);}

/* chicken.number-vector#subu64vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4648,c,av);}
/* srfi-4.scm:805: subnvector */
f_4583(t1,t2,lf[76],C_fix(8),t3,t4,lf[241]);}

/* chicken.number-vector#subs8vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4654,c,av);}
/* srfi-4.scm:806: subnvector */
f_4583(t1,t2,lf[63],C_fix(1),t3,t4,lf[243]);}

/* chicken.number-vector#subs16vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4660,c,av);}
/* srfi-4.scm:807: subnvector */
f_4583(t1,t2,lf[69],C_fix(2),t3,t4,lf[245]);}

/* chicken.number-vector#subs32vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4666,c,av);}
/* srfi-4.scm:808: subnvector */
f_4583(t1,t2,lf[79],C_fix(4),t3,t4,lf[247]);}

/* chicken.number-vector#subs64vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4672,c,av);}
/* srfi-4.scm:809: subnvector */
f_4583(t1,t2,lf[82],C_fix(8),t3,t4,lf[249]);}

/* chicken.number-vector#subf32vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4678,c,av);}
/* srfi-4.scm:810: subnvector */
f_4583(t1,t2,lf[85],C_fix(4),t3,t4,lf[251]);}

/* chicken.number-vector#subf64vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4684,c,av);}
/* srfi-4.scm:811: subnvector */
f_4583(t1,t2,lf[88],C_fix(8),t3,t4,lf[253]);}

/* chicken.number-vector#subc64vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4690,c,av);}
/* srfi-4.scm:812: subnvector */
f_4583(t1,t2,lf[13],C_fix(8),t3,t4,lf[255]);}

/* chicken.number-vector#subc128vector in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_4696,c,av);}
/* srfi-4.scm:813: subnvector */
f_4583(t1,t2,lf[16],C_fix(16),t3,t4,lf[257]);}

/* k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in k4499 in ... */
static void C_ccall f_4703(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(81,c,5)))){
C_save_and_reclaim((void *)f_4703,c,av);}
a=C_alloc(81);
t2=C_fast_retrieve(lf[259]);
t3=C_a_i_list(&a,24,lf[260],C_fast_retrieve(lf[94]),lf[261],C_fast_retrieve(lf[96]),lf[262],C_fast_retrieve(lf[99]),lf[263],C_fast_retrieve(lf[101]),lf[264],C_fast_retrieve(lf[103]),lf[265],C_fast_retrieve(lf[105]),lf[266],C_fast_retrieve(lf[107]),lf[267],C_fast_retrieve(lf[109]),lf[268],C_fast_retrieve(lf[111]),lf[269],C_fast_retrieve(lf[113]),lf[270],C_fast_retrieve(lf[115]),lf[271],C_fast_retrieve(lf[117]));
t4=C_mutate((C_word*)lf[259]+1 /* (set! ##sys#user-read-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4708,a[2]=t3,a[3]=t2,a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp));
t5=C_fast_retrieve(lf[281]);
t6=C_mutate((C_word*)lf[281]+1 /* (set! ##sys#user-print-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4799,a[2]=t5,a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* ##sys#user-read-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in ... */
static void C_ccall f_4708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4708,c,av);}
a=C_alloc(5);
if(C_truep((C_truep(C_eqp(t2,C_make_character(117)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(115)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(102)))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,C_make_character(99)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4717,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:867: ##sys#read */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[279]);
C_word *av2=av;
av2[0]=*((C_word*)lf[279]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fast_retrieve(lf[280]);
tp(4,av2);}}
else{
/* srfi-4.scm:881: old-hook */
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k4715 in ##sys#user-read-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in ... */
static void C_ccall f_4717(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4717,c,av);}
a=C_alloc(5);
t2=C_i_symbolp(t1);
t3=(C_truep(t2)?t1:C_SCHEME_FALSE);
t4=C_eqp(t3,lf[272]);
t5=(C_truep(t4)?t4:C_eqp(t3,lf[273]));
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_memq(t3,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4736,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:869: g1476 */
t8=t7;
f_4736(t8,((C_word*)t0)[2],t6);}
else{
/* srfi-4.scm:880: ##sys#read-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[277]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[277]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
av2[3]=lf[278];
av2[4]=t3;
tp(5,av2);}}}}

/* g1476 in k4715 in ##sys#user-read-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in ... */
static void f_4736(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4736,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4740,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-4.scm:872: ##sys#read-numvector-data */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[276]);
C_word av2[3];
av2[0]=*((C_word*)lf[276]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k4738 in g1476 in k4715 in ##sys#user-read-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in ... */
static void C_ccall f_4740(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4740,c,av);}
a=C_alloc(4);
t2=C_i_nullp(t1);
t3=(C_truep(t2)?t2:C_i_pairp(t1));
if(C_truep(t3)){
t4=C_i_cadr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4759,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:874: ##sys#canonicalize-number-list! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[274]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[274]+1);
av2[1]=t5;
av2[2]=t1;
tp(3,av2);}}
else{
t4=C_eqp(((C_word*)t0)[4],lf[260]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_chop_bv(C_slot(t1,C_fix(0)));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_cadr(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4779,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:879: ##sys#string->list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[275]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[275]+1);
av2[1]=t6;
av2[2]=t1;
tp(3,av2);}}}}

/* k4757 in k4738 in g1476 in k4715 in ##sys#user-read-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in ... */
static void C_ccall f_4759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4759,c,av);}
/* srfi-4.scm:873: g1487 */
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

/* k4777 in k4738 in g1476 in k4715 in ##sys#user-read-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in ... */
static void C_ccall f_4779(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4779,c,av);}
/* srfi-4.scm:873: g1489 */
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

/* ##sys#user-print-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in k4503 in ... */
static void C_ccall f_4799(C_word c,C_word *av){
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
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(150,c,4)))){
C_save_and_reclaim((void *)f_4799,c,av);}
a=C_alloc(150);
t5=C_slot(t2,C_fix(0));
t6=C_a_i_list(&a,3,lf[282],lf[260],C_fast_retrieve(lf[131]));
t7=C_a_i_list(&a,3,lf[63],lf[261],C_fast_retrieve(lf[134]));
t8=C_a_i_list(&a,3,lf[66],lf[262],C_fast_retrieve(lf[136]));
t9=C_a_i_list(&a,3,lf[69],lf[263],C_fast_retrieve(lf[138]));
t10=C_a_i_list(&a,3,lf[73],lf[264],C_fast_retrieve(lf[140]));
t11=C_a_i_list(&a,3,lf[79],lf[265],C_fast_retrieve(lf[142]));
t12=C_a_i_list(&a,3,lf[76],lf[266],C_fast_retrieve(lf[144]));
t13=C_a_i_list(&a,3,lf[82],lf[267],C_fast_retrieve(lf[146]));
t14=C_a_i_list(&a,3,lf[85],lf[268],C_fast_retrieve(lf[148]));
t15=C_a_i_list(&a,3,lf[88],lf[269],C_fast_retrieve(lf[150]));
t16=C_a_i_list(&a,3,lf[13],lf[270],C_fast_retrieve(lf[152]));
t17=C_a_i_list(&a,3,lf[16],lf[271],C_fast_retrieve(lf[154]));
t18=C_a_i_list(&a,12,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15,t16,t17);
t19=C_u_i_assq(t5,t18);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4811,a[2]=t19,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-4.scm:903: ##sys#print */
t21=*((C_word*)lf[283]+1);{
C_word *av2=av;
av2[0]=t21;
av2[1]=t20;
av2[2]=C_make_character(35);
av2[3]=C_SCHEME_FALSE;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t21+1)))(5,av2);}}
else{
/* srfi-4.scm:906: old-hook */
t20=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t20;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t4;
((C_proc)C_fast_retrieve_proc(t20))(5,av2);}}}

/* k4809 in ##sys#user-print-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in k4507 in ... */
static void C_ccall f_4811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4811,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4814,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* srfi-4.scm:904: ##sys#print */
t3=*((C_word*)lf[283]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4812 in k4809 in ##sys#user-print-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in k4511 in ... */
static void C_ccall f_4814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4814,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_i_caddr(((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4824,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-4.scm:905: g1502 */
t5=t3;{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4822 in k4812 in k4809 in ##sys#user-print-hook in k4701 in k4579 in k4575 in k4571 in k4567 in k4563 in k4559 in k4555 in k4551 in k4547 in k4543 in k4539 in k4535 in k4531 in k4527 in k4523 in k4519 in k4515 in ... */
static void C_ccall f_4824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4824,c,av);}
/* srfi-4.scm:905: ##sys#print */
t2=*((C_word*)lf[283]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* a4880 in k1944 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4881(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4881,c,av);}
a=C_alloc(8);
t4=C_i_check_structure_2(t2,lf[16],lf[317]);
t5=C_slot(t2,C_fix(1));
t6=C_i_bytevector_length(t5);
t7=C_i_check_range_2(t3,C_fix(0),C_u_fixnum_divide(t6,C_fix(16)),lf[317]);
t8=C_fixnum_times(t3,C_fix(2));
t9=C_u_fixnum_plus(t8,C_fix(1));
t10=C_flonum(&a,C_ub_i_f64vector_ref(t2,t9));
/* srfi-4.scm:301: scheme#make-rectangular */
t11=*((C_word*)lf[318]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t1;
av2[2]=C_flonum(&a,C_ub_i_f64vector_ref(t2,t8));
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}

/* a4900 in k1940 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4901(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4901,c,av);}
a=C_alloc(8);
t4=C_i_check_structure_2(t2,lf[13],lf[321]);
t5=C_slot(t2,C_fix(1));
t6=C_i_bytevector_length(t5);
t7=C_i_check_range_2(t3,C_fix(0),C_u_fixnum_divide(t6,C_fix(8)),lf[321]);
t8=C_fixnum_times(t3,C_fix(2));
t9=C_u_fixnum_plus(t8,C_fix(1));
t10=C_flonum(&a,C_ub_i_f32vector_ref(t2,t9));
/* srfi-4.scm:284: scheme#make-rectangular */
t11=*((C_word*)lf[318]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t1;
av2[2]=C_flonum(&a,C_ub_i_f32vector_ref(t2,t8));
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}

/* a4920 in k1936 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4921,c,av);}
a=C_alloc(4);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_f64vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4923 in k1932 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_4924,c,av);}
a=C_alloc(4);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_f32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4926 in k1928 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4927,c,av);}
a=C_alloc(7);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_s64vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4929 in k1924 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_4930,c,av);}
a=C_alloc(7);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_u64vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4932 in k1920 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_4933,c,av);}
a=C_alloc(5);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_s32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4935 in k1916 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_4936,c,av);}
a=C_alloc(5);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_u32vector_ref(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4938 in k1912 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4939,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_s16vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4941 in k1908 in k1727 in k1724 in k1721 */
static void C_ccall f_4942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4942,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_u16vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a4944 in k1727 in k1724 in k1721 */
static void C_ccall f_4945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4945,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_s8vector_ref(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_srfi_2d4_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("srfi-4"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_srfi_2d4_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2170))){
C_save(t1);
C_rereclaim2(2170*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,332);
lf[0]=C_h_intern(&lf[0],6, C_text("srfi-4"));
lf[1]=C_h_intern(&lf[1],22, C_text("chicken.number-vector#"));
lf[2]=C_h_intern(&lf[2],37, C_text("chicken.number-vector#u8vector-length"));
lf[3]=C_h_intern(&lf[3],37, C_text("chicken.number-vector#s8vector-length"));
lf[4]=C_h_intern(&lf[4],38, C_text("chicken.number-vector#u16vector-length"));
lf[5]=C_h_intern(&lf[5],38, C_text("chicken.number-vector#s16vector-length"));
lf[6]=C_h_intern(&lf[6],38, C_text("chicken.number-vector#u32vector-length"));
lf[7]=C_h_intern(&lf[7],38, C_text("chicken.number-vector#s32vector-length"));
lf[8]=C_h_intern(&lf[8],38, C_text("chicken.number-vector#u64vector-length"));
lf[9]=C_h_intern(&lf[9],38, C_text("chicken.number-vector#s64vector-length"));
lf[10]=C_h_intern(&lf[10],38, C_text("chicken.number-vector#f32vector-length"));
lf[11]=C_h_intern(&lf[11],38, C_text("chicken.number-vector#f64vector-length"));
lf[12]=C_h_intern(&lf[12],38, C_text("chicken.number-vector#c64vector-length"));
lf[13]=C_h_intern(&lf[13],9, C_text("c64vector"));
lf[14]=C_h_intern(&lf[14],16, C_text("c64vector-length"));
lf[15]=C_h_intern(&lf[15],39, C_text("chicken.number-vector#c128vector-length"));
lf[16]=C_h_intern(&lf[16],10, C_text("c128vector"));
lf[17]=C_h_intern(&lf[17],17, C_text("c128vector-length"));
lf[18]=C_h_intern(&lf[18],35, C_text("chicken.number-vector#u8vector-set!"));
lf[19]=C_h_intern(&lf[19],37, C_text("chicken.bytevector#bytevector-u8-set!"));
lf[20]=C_h_intern(&lf[20],35, C_text("chicken.number-vector#s8vector-set!"));
lf[21]=C_h_intern(&lf[21],36, C_text("chicken.number-vector#u16vector-set!"));
lf[22]=C_h_intern(&lf[22],36, C_text("chicken.number-vector#s16vector-set!"));
lf[23]=C_h_intern(&lf[23],36, C_text("chicken.number-vector#u32vector-set!"));
lf[24]=C_h_intern(&lf[24],36, C_text("chicken.number-vector#s32vector-set!"));
lf[25]=C_h_intern(&lf[25],36, C_text("chicken.number-vector#u64vector-set!"));
lf[26]=C_h_intern(&lf[26],36, C_text("chicken.number-vector#s64vector-set!"));
lf[27]=C_h_intern(&lf[27],36, C_text("chicken.number-vector#f32vector-set!"));
lf[28]=C_h_intern(&lf[28],36, C_text("chicken.number-vector#f64vector-set!"));
lf[29]=C_h_intern(&lf[29],36, C_text("chicken.number-vector#c64vector-set!"));
lf[30]=C_h_intern(&lf[30],14, C_text("c64vector-set!"));
lf[31]=C_h_intern(&lf[31],16, C_text("scheme#imag-part"));
lf[32]=C_h_intern(&lf[32],16, C_text("scheme#real-part"));
lf[33]=C_h_intern(&lf[33],37, C_text("chicken.number-vector#c128vector-set!"));
lf[34]=C_h_intern(&lf[34],15, C_text("c128vector-set!"));
lf[35]=C_h_intern(&lf[35],34, C_text("chicken.number-vector#u8vector-ref"));
lf[36]=C_h_intern(&lf[36],36, C_text("chicken.bytevector#bytevector-u8-ref"));
lf[37]=C_h_intern(&lf[37],34, C_text("chicken.number-vector#s8vector-ref"));
lf[38]=C_h_intern(&lf[38],35, C_text("chicken.number-vector#u16vector-ref"));
lf[39]=C_h_intern(&lf[39],35, C_text("chicken.number-vector#s16vector-ref"));
lf[40]=C_h_intern(&lf[40],35, C_text("chicken.number-vector#u32vector-ref"));
lf[41]=C_h_intern(&lf[41],35, C_text("chicken.number-vector#s32vector-ref"));
lf[42]=C_h_intern(&lf[42],35, C_text("chicken.number-vector#u64vector-ref"));
lf[43]=C_h_intern(&lf[43],35, C_text("chicken.number-vector#s64vector-ref"));
lf[44]=C_h_intern(&lf[44],35, C_text("chicken.number-vector#f32vector-ref"));
lf[45]=C_h_intern(&lf[45],35, C_text("chicken.number-vector#f64vector-ref"));
lf[46]=C_h_intern(&lf[46],35, C_text("chicken.number-vector#c64vector-ref"));
lf[47]=C_h_intern(&lf[47],36, C_text("chicken.number-vector#c128vector-ref"));
lf[48]=C_h_intern(&lf[48],11, C_text("##sys#error"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\073\156\157\164\040\145\156\157\165\147\150\040\155\145\155\157\162\171\040\055\040\143\141\156\156\157\164\040\141\154\154\157\143\141\164\145\040\145\170\164\145\162\156\141\154\040\156\165\155\142\145\162\040\166\145\143\164\157\162\000"));
lf[50]=C_h_intern(&lf[50],25, C_text("##sys#allocate-bytevector"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\073\157\166\145\162\146\154\157\167\040\055\040\143\141\156\156\157\164\040\141\154\154\157\143\141\164\145\040\164\150\145\040\162\145\161\165\151\162\145\144\040\156\165\155\142\145\162\040\157\146\040\145\154\145\155\145\156\164\163\000"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\163\151\172\145\040\151\163\040\156\145\147\141\164\151\166\145\000"));
lf[53]=C_h_intern(&lf[53],43, C_text("chicken.number-vector#release-number-vector"));
lf[54]=C_h_intern(&lf[54],21, C_text("release-number-vector"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\156\165\155\142\145\162\040\166\145\143\164\157\162\000"));
lf[56]=C_h_intern(&lf[56],36, C_text("chicken.number-vector#number-vector?"));
lf[57]=C_h_intern(&lf[57],35, C_text("chicken.number-vector#make-u8vector"));
lf[58]=C_h_intern(&lf[58],16, C_text("##sys#error-hook"));
lf[59]=C_h_intern(&lf[59],13, C_text("make-u8vector"));
lf[60]=C_h_intern(&lf[60],26, C_text("##sys#check-exact-uinteger"));
lf[61]=C_h_intern(&lf[61],25, C_text("chicken.gc#set-finalizer!"));
lf[62]=C_h_intern(&lf[62],35, C_text("chicken.number-vector#make-s8vector"));
lf[63]=C_h_intern(&lf[63],8, C_text("s8vector"));
lf[64]=C_h_intern(&lf[64],13, C_text("make-s8vector"));
lf[65]=C_h_intern(&lf[65],36, C_text("chicken.number-vector#make-u16vector"));
lf[66]=C_h_intern(&lf[66],9, C_text("u16vector"));
lf[67]=C_h_intern(&lf[67],14, C_text("make-u16vector"));
lf[68]=C_h_intern(&lf[68],36, C_text("chicken.number-vector#make-s16vector"));
lf[69]=C_h_intern(&lf[69],9, C_text("s16vector"));
lf[70]=C_h_intern(&lf[70],14, C_text("make-s16vector"));
lf[71]=C_h_intern(&lf[71],25, C_text("##sys#check-exact-integer"));
lf[72]=C_h_intern(&lf[72],36, C_text("chicken.number-vector#make-u32vector"));
lf[73]=C_h_intern(&lf[73],9, C_text("u32vector"));
lf[74]=C_h_intern(&lf[74],14, C_text("make-u32vector"));
lf[75]=C_h_intern(&lf[75],36, C_text("chicken.number-vector#make-u64vector"));
lf[76]=C_h_intern(&lf[76],9, C_text("u64vector"));
lf[77]=C_h_intern(&lf[77],14, C_text("make-u64vector"));
lf[78]=C_h_intern(&lf[78],36, C_text("chicken.number-vector#make-s32vector"));
lf[79]=C_h_intern(&lf[79],9, C_text("s32vector"));
lf[80]=C_h_intern(&lf[80],14, C_text("make-s32vector"));
lf[81]=C_h_intern(&lf[81],36, C_text("chicken.number-vector#make-s64vector"));
lf[82]=C_h_intern(&lf[82],9, C_text("s64vector"));
lf[83]=C_h_intern(&lf[83],14, C_text("make-s64vector"));
lf[84]=C_h_intern(&lf[84],36, C_text("chicken.number-vector#make-f32vector"));
lf[85]=C_h_intern(&lf[85],9, C_text("f32vector"));
lf[86]=C_h_intern(&lf[86],14, C_text("make-f32vector"));
lf[87]=C_h_intern(&lf[87],36, C_text("chicken.number-vector#make-f64vector"));
lf[88]=C_h_intern(&lf[88],9, C_text("f64vector"));
lf[89]=C_h_intern(&lf[89],14, C_text("make-f64vector"));
lf[90]=C_h_intern(&lf[90],36, C_text("chicken.number-vector#make-c64vector"));
lf[91]=C_h_intern(&lf[91],14, C_text("make-c64vector"));
lf[92]=C_h_intern(&lf[92],37, C_text("chicken.number-vector#make-c128vector"));
lf[93]=C_h_intern(&lf[93],15, C_text("make-c128vector"));
lf[94]=C_h_intern(&lf[94],36, C_text("chicken.number-vector#list->u8vector"));
lf[95]=C_h_intern(&lf[95],22, C_text("##sys#list->bytevector"));
lf[96]=C_h_intern(&lf[96],36, C_text("chicken.number-vector#list->s8vector"));
lf[97]=C_h_intern(&lf[97],29, C_text("##sys#error-not-a-proper-list"));
lf[98]=C_h_intern(&lf[98],14, C_text("list->s8vector"));
lf[99]=C_h_intern(&lf[99],37, C_text("chicken.number-vector#list->u16vector"));
lf[100]=C_h_intern(&lf[100],15, C_text("list->u16vector"));
lf[101]=C_h_intern(&lf[101],37, C_text("chicken.number-vector#list->s16vector"));
lf[102]=C_h_intern(&lf[102],15, C_text("list->s16vector"));
lf[103]=C_h_intern(&lf[103],37, C_text("chicken.number-vector#list->u32vector"));
lf[104]=C_h_intern(&lf[104],15, C_text("list->u32vector"));
lf[105]=C_h_intern(&lf[105],37, C_text("chicken.number-vector#list->s32vector"));
lf[106]=C_h_intern(&lf[106],15, C_text("list->s32vector"));
lf[107]=C_h_intern(&lf[107],37, C_text("chicken.number-vector#list->u64vector"));
lf[108]=C_h_intern(&lf[108],15, C_text("list->u64vector"));
lf[109]=C_h_intern(&lf[109],37, C_text("chicken.number-vector#list->s64vector"));
lf[110]=C_h_intern(&lf[110],15, C_text("list->s64vector"));
lf[111]=C_h_intern(&lf[111],37, C_text("chicken.number-vector#list->f32vector"));
lf[112]=C_h_intern(&lf[112],15, C_text("list->f32vector"));
lf[113]=C_h_intern(&lf[113],37, C_text("chicken.number-vector#list->f64vector"));
lf[114]=C_h_intern(&lf[114],15, C_text("list->f64vector"));
lf[115]=C_h_intern(&lf[115],37, C_text("chicken.number-vector#list->c64vector"));
lf[116]=C_h_intern(&lf[116],15, C_text("list->c64vector"));
lf[117]=C_h_intern(&lf[117],38, C_text("chicken.number-vector#list->c128vector"));
lf[118]=C_h_intern(&lf[118],16, C_text("list->c128vector"));
lf[119]=C_h_intern(&lf[119],30, C_text("chicken.number-vector#u8vector"));
lf[120]=C_h_intern(&lf[120],30, C_text("chicken.number-vector#s8vector"));
lf[121]=C_h_intern(&lf[121],31, C_text("chicken.number-vector#u16vector"));
lf[122]=C_h_intern(&lf[122],31, C_text("chicken.number-vector#s16vector"));
lf[123]=C_h_intern(&lf[123],31, C_text("chicken.number-vector#u32vector"));
lf[124]=C_h_intern(&lf[124],31, C_text("chicken.number-vector#s32vector"));
lf[125]=C_h_intern(&lf[125],31, C_text("chicken.number-vector#u64vector"));
lf[126]=C_h_intern(&lf[126],31, C_text("chicken.number-vector#s64vector"));
lf[127]=C_h_intern(&lf[127],31, C_text("chicken.number-vector#f32vector"));
lf[128]=C_h_intern(&lf[128],31, C_text("chicken.number-vector#f64vector"));
lf[129]=C_h_intern(&lf[129],31, C_text("chicken.number-vector#c64vector"));
lf[130]=C_h_intern(&lf[130],32, C_text("chicken.number-vector#c128vector"));
lf[131]=C_h_intern(&lf[131],36, C_text("chicken.number-vector#u8vector->list"));
lf[132]=C_h_intern(&lf[132],14, C_text("u8vector->list"));
lf[133]=C_h_intern(&lf[133],22, C_text("##sys#bytevector->list"));
lf[134]=C_h_intern(&lf[134],36, C_text("chicken.number-vector#s8vector->list"));
lf[135]=C_h_intern(&lf[135],14, C_text("s8vector->list"));
lf[136]=C_h_intern(&lf[136],37, C_text("chicken.number-vector#u16vector->list"));
lf[137]=C_h_intern(&lf[137],15, C_text("u16vector->list"));
lf[138]=C_h_intern(&lf[138],37, C_text("chicken.number-vector#s16vector->list"));
lf[139]=C_h_intern(&lf[139],15, C_text("s16vector->list"));
lf[140]=C_h_intern(&lf[140],37, C_text("chicken.number-vector#u32vector->list"));
lf[141]=C_h_intern(&lf[141],15, C_text("u32vector->list"));
lf[142]=C_h_intern(&lf[142],37, C_text("chicken.number-vector#s32vector->list"));
lf[143]=C_h_intern(&lf[143],15, C_text("s32vector->list"));
lf[144]=C_h_intern(&lf[144],37, C_text("chicken.number-vector#u64vector->list"));
lf[145]=C_h_intern(&lf[145],15, C_text("u64vector->list"));
lf[146]=C_h_intern(&lf[146],37, C_text("chicken.number-vector#s64vector->list"));
lf[147]=C_h_intern(&lf[147],15, C_text("s64vector->list"));
lf[148]=C_h_intern(&lf[148],37, C_text("chicken.number-vector#f32vector->list"));
lf[149]=C_h_intern(&lf[149],15, C_text("f32vector->list"));
lf[150]=C_h_intern(&lf[150],37, C_text("chicken.number-vector#f64vector->list"));
lf[151]=C_h_intern(&lf[151],15, C_text("f64vector->list"));
lf[152]=C_h_intern(&lf[152],37, C_text("chicken.number-vector#c64vector->list"));
lf[153]=C_h_intern(&lf[153],15, C_text("c64vector->list"));
lf[154]=C_h_intern(&lf[154],38, C_text("chicken.number-vector#c128vector->list"));
lf[155]=C_h_intern(&lf[155],16, C_text("c128vector->list"));
lf[156]=C_h_intern(&lf[156],31, C_text("chicken.number-vector#u8vector?"));
lf[157]=C_h_intern(&lf[157],31, C_text("chicken.number-vector#s8vector?"));
lf[158]=C_h_intern(&lf[158],32, C_text("chicken.number-vector#u16vector?"));
lf[159]=C_h_intern(&lf[159],32, C_text("chicken.number-vector#s16vector?"));
lf[160]=C_h_intern(&lf[160],32, C_text("chicken.number-vector#u32vector?"));
lf[161]=C_h_intern(&lf[161],32, C_text("chicken.number-vector#s32vector?"));
lf[162]=C_h_intern(&lf[162],32, C_text("chicken.number-vector#u64vector?"));
lf[163]=C_h_intern(&lf[163],32, C_text("chicken.number-vector#s64vector?"));
lf[164]=C_h_intern(&lf[164],32, C_text("chicken.number-vector#f32vector?"));
lf[165]=C_h_intern(&lf[165],32, C_text("chicken.number-vector#f64vector?"));
lf[166]=C_h_intern(&lf[166],32, C_text("chicken.number-vector#c64vector?"));
lf[167]=C_h_intern(&lf[167],33, C_text("chicken.number-vector#c128vector?"));
lf[168]=C_h_intern(&lf[168],20, C_text("##sys#srfi-4-vector?"));
lf[169]=C_h_intern(&lf[169],30, C_text("chicken.bytevector#bytevector?"));
lf[171]=C_h_intern(&lf[171],21, C_text("##sys#make-bytevector"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\062\142\171\164\145\166\145\143\164\157\162\040\144\157\145\163\040\156\157\164\040\150\141\166\145\040\143\157\162\162\145\143\164\040\163\151\172\145\040\146\157\162\040\160\141\143\153\151\156\147\000"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\062\142\171\164\145\166\145\143\164\157\162\040\144\157\145\163\040\156\157\164\040\150\141\166\145\040\143\157\162\162\145\143\164\040\163\151\172\145\040\146\157\162\040\160\141\143\153\151\156\147\000"));
lf[176]=C_h_intern(&lf[176],27, C_text("s8vector->bytevector/shared"));
lf[177]=C_h_intern(&lf[177],49, C_text("chicken.number-vector#s8vector->bytevector/shared"));
lf[178]=C_h_intern(&lf[178],28, C_text("u16vector->bytevector/shared"));
lf[179]=C_h_intern(&lf[179],50, C_text("chicken.number-vector#u16vector->bytevector/shared"));
lf[180]=C_h_intern(&lf[180],28, C_text("s16vector->bytevector/shared"));
lf[181]=C_h_intern(&lf[181],50, C_text("chicken.number-vector#s16vector->bytevector/shared"));
lf[182]=C_h_intern(&lf[182],28, C_text("u32vector->bytevector/shared"));
lf[183]=C_h_intern(&lf[183],50, C_text("chicken.number-vector#u32vector->bytevector/shared"));
lf[184]=C_h_intern(&lf[184],28, C_text("s32vector->bytevector/shared"));
lf[185]=C_h_intern(&lf[185],50, C_text("chicken.number-vector#s32vector->bytevector/shared"));
lf[186]=C_h_intern(&lf[186],28, C_text("u64vector->bytevector/shared"));
lf[187]=C_h_intern(&lf[187],50, C_text("chicken.number-vector#u64vector->bytevector/shared"));
lf[188]=C_h_intern(&lf[188],28, C_text("s64vector->bytevector/shared"));
lf[189]=C_h_intern(&lf[189],50, C_text("chicken.number-vector#s64vector->bytevector/shared"));
lf[190]=C_h_intern(&lf[190],28, C_text("f32vector->bytevector/shared"));
lf[191]=C_h_intern(&lf[191],50, C_text("chicken.number-vector#f32vector->bytevector/shared"));
lf[192]=C_h_intern(&lf[192],28, C_text("f64vector->bytevector/shared"));
lf[193]=C_h_intern(&lf[193],50, C_text("chicken.number-vector#f64vector->bytevector/shared"));
lf[194]=C_h_intern(&lf[194],28, C_text("c64vector->bytevector/shared"));
lf[195]=C_h_intern(&lf[195],50, C_text("chicken.number-vector#c64vector->bytevector/shared"));
lf[196]=C_h_intern(&lf[196],29, C_text("c128vector->bytevector/shared"));
lf[197]=C_h_intern(&lf[197],51, C_text("chicken.number-vector#c128vector->bytevector/shared"));
lf[198]=C_h_intern(&lf[198],42, C_text("chicken.number-vector#s8vector->bytevector"));
lf[199]=C_h_intern(&lf[199],43, C_text("chicken.number-vector#u16vector->bytevector"));
lf[200]=C_h_intern(&lf[200],43, C_text("chicken.number-vector#s16vector->bytevector"));
lf[201]=C_h_intern(&lf[201],43, C_text("chicken.number-vector#u32vector->bytevector"));
lf[202]=C_h_intern(&lf[202],43, C_text("chicken.number-vector#s32vector->bytevector"));
lf[203]=C_h_intern(&lf[203],43, C_text("chicken.number-vector#u64vector->bytevector"));
lf[204]=C_h_intern(&lf[204],43, C_text("chicken.number-vector#s64vector->bytevector"));
lf[205]=C_h_intern(&lf[205],43, C_text("chicken.number-vector#f32vector->bytevector"));
lf[206]=C_h_intern(&lf[206],43, C_text("chicken.number-vector#f64vector->bytevector"));
lf[207]=C_h_intern(&lf[207],43, C_text("chicken.number-vector#c64vector->bytevector"));
lf[208]=C_h_intern(&lf[208],44, C_text("chicken.number-vector#c128vector->bytevector"));
lf[209]=C_h_intern(&lf[209],49, C_text("chicken.number-vector#bytevector->s8vector/shared"));
lf[210]=C_h_intern(&lf[210],50, C_text("chicken.number-vector#bytevector->u16vector/shared"));
lf[211]=C_h_intern(&lf[211],50, C_text("chicken.number-vector#bytevector->s16vector/shared"));
lf[212]=C_h_intern(&lf[212],50, C_text("chicken.number-vector#bytevector->u32vector/shared"));
lf[213]=C_h_intern(&lf[213],50, C_text("chicken.number-vector#bytevector->s32vector/shared"));
lf[214]=C_h_intern(&lf[214],50, C_text("chicken.number-vector#bytevector->u64vector/shared"));
lf[215]=C_h_intern(&lf[215],50, C_text("chicken.number-vector#bytevector->s64vector/shared"));
lf[216]=C_h_intern(&lf[216],50, C_text("chicken.number-vector#bytevector->f32vector/shared"));
lf[217]=C_h_intern(&lf[217],50, C_text("chicken.number-vector#bytevector->f64vector/shared"));
lf[218]=C_h_intern(&lf[218],50, C_text("chicken.number-vector#bytevector->c64vector/shared"));
lf[219]=C_h_intern(&lf[219],51, C_text("chicken.number-vector#bytevector->c128vector/shared"));
lf[220]=C_h_intern(&lf[220],42, C_text("chicken.number-vector#bytevector->s8vector"));
lf[221]=C_h_intern(&lf[221],43, C_text("chicken.number-vector#bytevector->u16vector"));
lf[222]=C_h_intern(&lf[222],43, C_text("chicken.number-vector#bytevector->s16vector"));
lf[223]=C_h_intern(&lf[223],43, C_text("chicken.number-vector#bytevector->u32vector"));
lf[224]=C_h_intern(&lf[224],43, C_text("chicken.number-vector#bytevector->s32vector"));
lf[225]=C_h_intern(&lf[225],43, C_text("chicken.number-vector#bytevector->u64vector"));
lf[226]=C_h_intern(&lf[226],43, C_text("chicken.number-vector#bytevector->s64vector"));
lf[227]=C_h_intern(&lf[227],43, C_text("chicken.number-vector#bytevector->f32vector"));
lf[228]=C_h_intern(&lf[228],43, C_text("chicken.number-vector#bytevector->f64vector"));
lf[229]=C_h_intern(&lf[229],43, C_text("chicken.number-vector#bytevector->c64vector"));
lf[230]=C_h_intern(&lf[230],44, C_text("chicken.number-vector#bytevector->c128vector"));
lf[232]=C_h_intern(&lf[232],27, C_text("##sys#check-range/including"));
lf[233]=C_h_intern(&lf[233],33, C_text("chicken.number-vector#subu8vector"));
lf[234]=C_h_intern(&lf[234],11, C_text("subu8vector"));
lf[235]=C_h_intern(&lf[235],34, C_text("chicken.bytevector#bytevector-copy"));
lf[236]=C_h_intern(&lf[236],34, C_text("chicken.number-vector#subu16vector"));
lf[237]=C_h_intern(&lf[237],12, C_text("subu16vector"));
lf[238]=C_h_intern(&lf[238],34, C_text("chicken.number-vector#subu32vector"));
lf[239]=C_h_intern(&lf[239],12, C_text("subu32vector"));
lf[240]=C_h_intern(&lf[240],34, C_text("chicken.number-vector#subu64vector"));
lf[241]=C_h_intern(&lf[241],12, C_text("subu64vector"));
lf[242]=C_h_intern(&lf[242],33, C_text("chicken.number-vector#subs8vector"));
lf[243]=C_h_intern(&lf[243],11, C_text("subs8vector"));
lf[244]=C_h_intern(&lf[244],34, C_text("chicken.number-vector#subs16vector"));
lf[245]=C_h_intern(&lf[245],12, C_text("subs16vector"));
lf[246]=C_h_intern(&lf[246],34, C_text("chicken.number-vector#subs32vector"));
lf[247]=C_h_intern(&lf[247],12, C_text("subs32vector"));
lf[248]=C_h_intern(&lf[248],34, C_text("chicken.number-vector#subs64vector"));
lf[249]=C_h_intern(&lf[249],12, C_text("subs64vector"));
lf[250]=C_h_intern(&lf[250],34, C_text("chicken.number-vector#subf32vector"));
lf[251]=C_h_intern(&lf[251],12, C_text("subf32vector"));
lf[252]=C_h_intern(&lf[252],34, C_text("chicken.number-vector#subf64vector"));
lf[253]=C_h_intern(&lf[253],12, C_text("subf64vector"));
lf[254]=C_h_intern(&lf[254],34, C_text("chicken.number-vector#subc64vector"));
lf[255]=C_h_intern(&lf[255],12, C_text("subc64vector"));
lf[256]=C_h_intern(&lf[256],35, C_text("chicken.number-vector#subc128vector"));
lf[257]=C_h_intern(&lf[257],13, C_text("subc128vector"));
lf[258]=C_h_intern(&lf[258],7, C_text("srfi-4#"));
lf[259]=C_h_intern(&lf[259],20, C_text("##sys#user-read-hook"));
lf[260]=C_h_intern(&lf[260],2, C_text("u8"));
lf[261]=C_h_intern(&lf[261],2, C_text("s8"));
lf[262]=C_h_intern(&lf[262],3, C_text("u16"));
lf[263]=C_h_intern(&lf[263],3, C_text("s16"));
lf[264]=C_h_intern(&lf[264],3, C_text("u32"));
lf[265]=C_h_intern(&lf[265],3, C_text("s32"));
lf[266]=C_h_intern(&lf[266],3, C_text("u64"));
lf[267]=C_h_intern(&lf[267],3, C_text("s64"));
lf[268]=C_h_intern(&lf[268],3, C_text("f32"));
lf[269]=C_h_intern(&lf[269],3, C_text("f64"));
lf[270]=C_h_intern(&lf[270],3, C_text("c64"));
lf[271]=C_h_intern(&lf[271],4, C_text("c128"));
lf[272]=C_h_intern(&lf[272],1, C_text("f"));
lf[273]=C_h_intern(&lf[273],5, C_text("false"));
lf[274]=C_h_intern(&lf[274],31, C_text("##sys#canonicalize-number-list!"));
lf[275]=C_h_intern(&lf[275],18, C_text("##sys#string->list"));
lf[276]=C_h_intern(&lf[276],25, C_text("##sys#read-numvector-data"));
lf[277]=C_h_intern(&lf[277],16, C_text("##sys#read-error"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\151\156\166\141\154\151\144\040\163\150\141\162\160\055\163\151\147\156\040\162\145\141\144\040\163\171\156\164\141\170\000"));
lf[279]=C_h_intern(&lf[279],10, C_text("##sys#read"));
lf[280]=C_h_intern(&lf[280],28, C_text("##sys#default-read-info-hook"));
lf[281]=C_h_intern(&lf[281],21, C_text("##sys#user-print-hook"));
lf[282]=C_h_intern(&lf[282],8, C_text("u8vector"));
lf[283]=C_h_intern(&lf[283],11, C_text("##sys#print"));
lf[284]=C_h_intern(&lf[284],22, C_text("bytevector->c128vector"));
lf[285]=C_h_intern(&lf[285],21, C_text("bytevector->c64vector"));
lf[286]=C_h_intern(&lf[286],21, C_text("bytevector->f64vector"));
lf[287]=C_h_intern(&lf[287],21, C_text("bytevector->f32vector"));
lf[288]=C_h_intern(&lf[288],21, C_text("bytevector->s64vector"));
lf[289]=C_h_intern(&lf[289],21, C_text("bytevector->u64vector"));
lf[290]=C_h_intern(&lf[290],21, C_text("bytevector->s32vector"));
lf[291]=C_h_intern(&lf[291],21, C_text("bytevector->u32vector"));
lf[292]=C_h_intern(&lf[292],21, C_text("bytevector->s16vector"));
lf[293]=C_h_intern(&lf[293],21, C_text("bytevector->u16vector"));
lf[294]=C_h_intern(&lf[294],20, C_text("bytevector->s8vector"));
lf[295]=C_h_intern(&lf[295],29, C_text("bytevector->c128vector/shared"));
lf[296]=C_h_intern(&lf[296],28, C_text("bytevector->c64vector/shared"));
lf[297]=C_h_intern(&lf[297],28, C_text("bytevector->f64vector/shared"));
lf[298]=C_h_intern(&lf[298],28, C_text("bytevector->f32vector/shared"));
lf[299]=C_h_intern(&lf[299],28, C_text("bytevector->s64vector/shared"));
lf[300]=C_h_intern(&lf[300],28, C_text("bytevector->u64vector/shared"));
lf[301]=C_h_intern(&lf[301],28, C_text("bytevector->s32vector/shared"));
lf[302]=C_h_intern(&lf[302],28, C_text("bytevector->u32vector/shared"));
lf[303]=C_h_intern(&lf[303],28, C_text("bytevector->s16vector/shared"));
lf[304]=C_h_intern(&lf[304],28, C_text("bytevector->u16vector/shared"));
lf[305]=C_h_intern(&lf[305],27, C_text("bytevector->s8vector/shared"));
lf[306]=C_h_intern(&lf[306],22, C_text("c128vector->bytevector"));
lf[307]=C_h_intern(&lf[307],21, C_text("c64vector->bytevector"));
lf[308]=C_h_intern(&lf[308],21, C_text("f64vector->bytevector"));
lf[309]=C_h_intern(&lf[309],21, C_text("f32vector->bytevector"));
lf[310]=C_h_intern(&lf[310],21, C_text("s64vector->bytevector"));
lf[311]=C_h_intern(&lf[311],21, C_text("u64vector->bytevector"));
lf[312]=C_h_intern(&lf[312],21, C_text("s32vector->bytevector"));
lf[313]=C_h_intern(&lf[313],21, C_text("u32vector->bytevector"));
lf[314]=C_h_intern(&lf[314],21, C_text("s16vector->bytevector"));
lf[315]=C_h_intern(&lf[315],21, C_text("u16vector->bytevector"));
lf[316]=C_h_intern(&lf[316],20, C_text("s8vector->bytevector"));
lf[317]=C_h_intern(&lf[317],14, C_text("c128vector-ref"));
lf[318]=C_h_intern(&lf[318],23, C_text("scheme#make-rectangular"));
lf[319]=C_h_intern(&lf[319],31, C_text("chicken.base#getter-with-setter"));
lf[320]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[321]=C_h_intern(&lf[321],13, C_text("c64vector-ref"));
lf[322]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[323]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[324]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[326]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[328]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[330]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\050\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\162\145\146\040\166\040\151\051\000"));
C_register_lf2(lf,332,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1723,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[325] = {
{C_text("f5784:srfi_2d4_2escm"),(void*)f5784},
{C_text("f5791:srfi_2d4_2escm"),(void*)f5791},
{C_text("f5798:srfi_2d4_2escm"),(void*)f5798},
{C_text("f5805:srfi_2d4_2escm"),(void*)f5805},
{C_text("f5812:srfi_2d4_2escm"),(void*)f5812},
{C_text("f5819:srfi_2d4_2escm"),(void*)f5819},
{C_text("f5826:srfi_2d4_2escm"),(void*)f5826},
{C_text("f5833:srfi_2d4_2escm"),(void*)f5833},
{C_text("f5840:srfi_2d4_2escm"),(void*)f5840},
{C_text("f5847:srfi_2d4_2escm"),(void*)f5847},
{C_text("f5854:srfi_2d4_2escm"),(void*)f5854},
{C_text("f_1723:srfi_2d4_2escm"),(void*)f_1723},
{C_text("f_1726:srfi_2d4_2escm"),(void*)f_1726},
{C_text("f_1729:srfi_2d4_2escm"),(void*)f_1729},
{C_text("f_1731:srfi_2d4_2escm"),(void*)f_1731},
{C_text("f_1734:srfi_2d4_2escm"),(void*)f_1734},
{C_text("f_1737:srfi_2d4_2escm"),(void*)f_1737},
{C_text("f_1740:srfi_2d4_2escm"),(void*)f_1740},
{C_text("f_1743:srfi_2d4_2escm"),(void*)f_1743},
{C_text("f_1746:srfi_2d4_2escm"),(void*)f_1746},
{C_text("f_1749:srfi_2d4_2escm"),(void*)f_1749},
{C_text("f_1752:srfi_2d4_2escm"),(void*)f_1752},
{C_text("f_1755:srfi_2d4_2escm"),(void*)f_1755},
{C_text("f_1758:srfi_2d4_2escm"),(void*)f_1758},
{C_text("f_1761:srfi_2d4_2escm"),(void*)f_1761},
{C_text("f_1775:srfi_2d4_2escm"),(void*)f_1775},
{C_text("f_1790:srfi_2d4_2escm"),(void*)f_1790},
{C_text("f_1793:srfi_2d4_2escm"),(void*)f_1793},
{C_text("f_1796:srfi_2d4_2escm"),(void*)f_1796},
{C_text("f_1799:srfi_2d4_2escm"),(void*)f_1799},
{C_text("f_1802:srfi_2d4_2escm"),(void*)f_1802},
{C_text("f_1805:srfi_2d4_2escm"),(void*)f_1805},
{C_text("f_1808:srfi_2d4_2escm"),(void*)f_1808},
{C_text("f_1811:srfi_2d4_2escm"),(void*)f_1811},
{C_text("f_1814:srfi_2d4_2escm"),(void*)f_1814},
{C_text("f_1817:srfi_2d4_2escm"),(void*)f_1817},
{C_text("f_1841:srfi_2d4_2escm"),(void*)f_1841},
{C_text("f_1852:srfi_2d4_2escm"),(void*)f_1852},
{C_text("f_1862:srfi_2d4_2escm"),(void*)f_1862},
{C_text("f_1886:srfi_2d4_2escm"),(void*)f_1886},
{C_text("f_1897:srfi_2d4_2escm"),(void*)f_1897},
{C_text("f_1910:srfi_2d4_2escm"),(void*)f_1910},
{C_text("f_1914:srfi_2d4_2escm"),(void*)f_1914},
{C_text("f_1918:srfi_2d4_2escm"),(void*)f_1918},
{C_text("f_1922:srfi_2d4_2escm"),(void*)f_1922},
{C_text("f_1926:srfi_2d4_2escm"),(void*)f_1926},
{C_text("f_1930:srfi_2d4_2escm"),(void*)f_1930},
{C_text("f_1934:srfi_2d4_2escm"),(void*)f_1934},
{C_text("f_1938:srfi_2d4_2escm"),(void*)f_1938},
{C_text("f_1942:srfi_2d4_2escm"),(void*)f_1942},
{C_text("f_1946:srfi_2d4_2escm"),(void*)f_1946},
{C_text("f_1950:srfi_2d4_2escm"),(void*)f_1950},
{C_text("f_1958:srfi_2d4_2escm"),(void*)f_1958},
{C_text("f_1960:srfi_2d4_2escm"),(void*)f_1960},
{C_text("f_1967:srfi_2d4_2escm"),(void*)f_1967},
{C_text("f_1973:srfi_2d4_2escm"),(void*)f_1973},
{C_text("f_1999:srfi_2d4_2escm"),(void*)f_1999},
{C_text("f_2006:srfi_2d4_2escm"),(void*)f_2006},
{C_text("f_2014:srfi_2d4_2escm"),(void*)f_2014},
{C_text("f_2036:srfi_2d4_2escm"),(void*)f_2036},
{C_text("f_2039:srfi_2d4_2escm"),(void*)f_2039},
{C_text("f_2050:srfi_2d4_2escm"),(void*)f_2050},
{C_text("f_2065:srfi_2d4_2escm"),(void*)f_2065},
{C_text("f_2070:srfi_2d4_2escm"),(void*)f_2070},
{C_text("f_2122:srfi_2d4_2escm"),(void*)f_2122},
{C_text("f_2147:srfi_2d4_2escm"),(void*)f_2147},
{C_text("f_2158:srfi_2d4_2escm"),(void*)f_2158},
{C_text("f_2173:srfi_2d4_2escm"),(void*)f_2173},
{C_text("f_2178:srfi_2d4_2escm"),(void*)f_2178},
{C_text("f_2196:srfi_2d4_2escm"),(void*)f_2196},
{C_text("f_2234:srfi_2d4_2escm"),(void*)f_2234},
{C_text("f_2259:srfi_2d4_2escm"),(void*)f_2259},
{C_text("f_2270:srfi_2d4_2escm"),(void*)f_2270},
{C_text("f_2285:srfi_2d4_2escm"),(void*)f_2285},
{C_text("f_2290:srfi_2d4_2escm"),(void*)f_2290},
{C_text("f_2308:srfi_2d4_2escm"),(void*)f_2308},
{C_text("f_2346:srfi_2d4_2escm"),(void*)f_2346},
{C_text("f_2371:srfi_2d4_2escm"),(void*)f_2371},
{C_text("f_2382:srfi_2d4_2escm"),(void*)f_2382},
{C_text("f_2401:srfi_2d4_2escm"),(void*)f_2401},
{C_text("f_2406:srfi_2d4_2escm"),(void*)f_2406},
{C_text("f_2424:srfi_2d4_2escm"),(void*)f_2424},
{C_text("f_2462:srfi_2d4_2escm"),(void*)f_2462},
{C_text("f_2487:srfi_2d4_2escm"),(void*)f_2487},
{C_text("f_2498:srfi_2d4_2escm"),(void*)f_2498},
{C_text("f_2513:srfi_2d4_2escm"),(void*)f_2513},
{C_text("f_2518:srfi_2d4_2escm"),(void*)f_2518},
{C_text("f_2536:srfi_2d4_2escm"),(void*)f_2536},
{C_text("f_2574:srfi_2d4_2escm"),(void*)f_2574},
{C_text("f_2599:srfi_2d4_2escm"),(void*)f_2599},
{C_text("f_2610:srfi_2d4_2escm"),(void*)f_2610},
{C_text("f_2625:srfi_2d4_2escm"),(void*)f_2625},
{C_text("f_2630:srfi_2d4_2escm"),(void*)f_2630},
{C_text("f_2648:srfi_2d4_2escm"),(void*)f_2648},
{C_text("f_2686:srfi_2d4_2escm"),(void*)f_2686},
{C_text("f_2711:srfi_2d4_2escm"),(void*)f_2711},
{C_text("f_2722:srfi_2d4_2escm"),(void*)f_2722},
{C_text("f_2741:srfi_2d4_2escm"),(void*)f_2741},
{C_text("f_2746:srfi_2d4_2escm"),(void*)f_2746},
{C_text("f_2764:srfi_2d4_2escm"),(void*)f_2764},
{C_text("f_2802:srfi_2d4_2escm"),(void*)f_2802},
{C_text("f_2827:srfi_2d4_2escm"),(void*)f_2827},
{C_text("f_2838:srfi_2d4_2escm"),(void*)f_2838},
{C_text("f_2857:srfi_2d4_2escm"),(void*)f_2857},
{C_text("f_2862:srfi_2d4_2escm"),(void*)f_2862},
{C_text("f_2880:srfi_2d4_2escm"),(void*)f_2880},
{C_text("f_2918:srfi_2d4_2escm"),(void*)f_2918},
{C_text("f_2943:srfi_2d4_2escm"),(void*)f_2943},
{C_text("f_2964:srfi_2d4_2escm"),(void*)f_2964},
{C_text("f_2967:srfi_2d4_2escm"),(void*)f_2967},
{C_text("f_2972:srfi_2d4_2escm"),(void*)f_2972},
{C_text("f_2991:srfi_2d4_2escm"),(void*)f_2991},
{C_text("f_3029:srfi_2d4_2escm"),(void*)f_3029},
{C_text("f_3054:srfi_2d4_2escm"),(void*)f_3054},
{C_text("f_3075:srfi_2d4_2escm"),(void*)f_3075},
{C_text("f_3078:srfi_2d4_2escm"),(void*)f_3078},
{C_text("f_3083:srfi_2d4_2escm"),(void*)f_3083},
{C_text("f_3102:srfi_2d4_2escm"),(void*)f_3102},
{C_text("f_3140:srfi_2d4_2escm"),(void*)f_3140},
{C_text("f_3165:srfi_2d4_2escm"),(void*)f_3165},
{C_text("f_3177:srfi_2d4_2escm"),(void*)f_3177},
{C_text("f_3183:srfi_2d4_2escm"),(void*)f_3183},
{C_text("f_3201:srfi_2d4_2escm"),(void*)f_3201},
{C_text("f_3206:srfi_2d4_2escm"),(void*)f_3206},
{C_text("f_3234:srfi_2d4_2escm"),(void*)f_3234},
{C_text("f_3276:srfi_2d4_2escm"),(void*)f_3276},
{C_text("f_3301:srfi_2d4_2escm"),(void*)f_3301},
{C_text("f_3313:srfi_2d4_2escm"),(void*)f_3313},
{C_text("f_3319:srfi_2d4_2escm"),(void*)f_3319},
{C_text("f_3337:srfi_2d4_2escm"),(void*)f_3337},
{C_text("f_3342:srfi_2d4_2escm"),(void*)f_3342},
{C_text("f_3370:srfi_2d4_2escm"),(void*)f_3370},
{C_text("f_3413:srfi_2d4_2escm"),(void*)f_3413},
{C_text("f_3420:srfi_2d4_2escm"),(void*)f_3420},
{C_text("f_3425:srfi_2d4_2escm"),(void*)f_3425},
{C_text("f_3432:srfi_2d4_2escm"),(void*)f_3432},
{C_text("f_3449:srfi_2d4_2escm"),(void*)f_3449},
{C_text("f_3456:srfi_2d4_2escm"),(void*)f_3456},
{C_text("f_3461:srfi_2d4_2escm"),(void*)f_3461},
{C_text("f_3468:srfi_2d4_2escm"),(void*)f_3468},
{C_text("f_3485:srfi_2d4_2escm"),(void*)f_3485},
{C_text("f_3492:srfi_2d4_2escm"),(void*)f_3492},
{C_text("f_3497:srfi_2d4_2escm"),(void*)f_3497},
{C_text("f_3504:srfi_2d4_2escm"),(void*)f_3504},
{C_text("f_3521:srfi_2d4_2escm"),(void*)f_3521},
{C_text("f_3528:srfi_2d4_2escm"),(void*)f_3528},
{C_text("f_3533:srfi_2d4_2escm"),(void*)f_3533},
{C_text("f_3540:srfi_2d4_2escm"),(void*)f_3540},
{C_text("f_3557:srfi_2d4_2escm"),(void*)f_3557},
{C_text("f_3564:srfi_2d4_2escm"),(void*)f_3564},
{C_text("f_3569:srfi_2d4_2escm"),(void*)f_3569},
{C_text("f_3576:srfi_2d4_2escm"),(void*)f_3576},
{C_text("f_3593:srfi_2d4_2escm"),(void*)f_3593},
{C_text("f_3600:srfi_2d4_2escm"),(void*)f_3600},
{C_text("f_3605:srfi_2d4_2escm"),(void*)f_3605},
{C_text("f_3612:srfi_2d4_2escm"),(void*)f_3612},
{C_text("f_3629:srfi_2d4_2escm"),(void*)f_3629},
{C_text("f_3636:srfi_2d4_2escm"),(void*)f_3636},
{C_text("f_3641:srfi_2d4_2escm"),(void*)f_3641},
{C_text("f_3648:srfi_2d4_2escm"),(void*)f_3648},
{C_text("f_3665:srfi_2d4_2escm"),(void*)f_3665},
{C_text("f_3672:srfi_2d4_2escm"),(void*)f_3672},
{C_text("f_3677:srfi_2d4_2escm"),(void*)f_3677},
{C_text("f_3684:srfi_2d4_2escm"),(void*)f_3684},
{C_text("f_3701:srfi_2d4_2escm"),(void*)f_3701},
{C_text("f_3708:srfi_2d4_2escm"),(void*)f_3708},
{C_text("f_3713:srfi_2d4_2escm"),(void*)f_3713},
{C_text("f_3720:srfi_2d4_2escm"),(void*)f_3720},
{C_text("f_3737:srfi_2d4_2escm"),(void*)f_3737},
{C_text("f_3744:srfi_2d4_2escm"),(void*)f_3744},
{C_text("f_3749:srfi_2d4_2escm"),(void*)f_3749},
{C_text("f_3757:srfi_2d4_2escm"),(void*)f_3757},
{C_text("f_3765:srfi_2d4_2escm"),(void*)f_3765},
{C_text("f_3775:srfi_2d4_2escm"),(void*)f_3775},
{C_text("f_3782:srfi_2d4_2escm"),(void*)f_3782},
{C_text("f_3787:srfi_2d4_2escm"),(void*)f_3787},
{C_text("f_3795:srfi_2d4_2escm"),(void*)f_3795},
{C_text("f_3803:srfi_2d4_2escm"),(void*)f_3803},
{C_text("f_3813:srfi_2d4_2escm"),(void*)f_3813},
{C_text("f_3819:srfi_2d4_2escm"),(void*)f_3819},
{C_text("f_3825:srfi_2d4_2escm"),(void*)f_3825},
{C_text("f_3831:srfi_2d4_2escm"),(void*)f_3831},
{C_text("f_3837:srfi_2d4_2escm"),(void*)f_3837},
{C_text("f_3843:srfi_2d4_2escm"),(void*)f_3843},
{C_text("f_3849:srfi_2d4_2escm"),(void*)f_3849},
{C_text("f_3855:srfi_2d4_2escm"),(void*)f_3855},
{C_text("f_3861:srfi_2d4_2escm"),(void*)f_3861},
{C_text("f_3867:srfi_2d4_2escm"),(void*)f_3867},
{C_text("f_3873:srfi_2d4_2escm"),(void*)f_3873},
{C_text("f_3879:srfi_2d4_2escm"),(void*)f_3879},
{C_text("f_3885:srfi_2d4_2escm"),(void*)f_3885},
{C_text("f_3894:srfi_2d4_2escm"),(void*)f_3894},
{C_text("f_3903:srfi_2d4_2escm"),(void*)f_3903},
{C_text("f_3918:srfi_2d4_2escm"),(void*)f_3918},
{C_text("f_3924:srfi_2d4_2escm"),(void*)f_3924},
{C_text("f_3933:srfi_2d4_2escm"),(void*)f_3933},
{C_text("f_3948:srfi_2d4_2escm"),(void*)f_3948},
{C_text("f_3954:srfi_2d4_2escm"),(void*)f_3954},
{C_text("f_3963:srfi_2d4_2escm"),(void*)f_3963},
{C_text("f_3978:srfi_2d4_2escm"),(void*)f_3978},
{C_text("f_3984:srfi_2d4_2escm"),(void*)f_3984},
{C_text("f_3993:srfi_2d4_2escm"),(void*)f_3993},
{C_text("f_4007:srfi_2d4_2escm"),(void*)f_4007},
{C_text("f_4013:srfi_2d4_2escm"),(void*)f_4013},
{C_text("f_4022:srfi_2d4_2escm"),(void*)f_4022},
{C_text("f_4036:srfi_2d4_2escm"),(void*)f_4036},
{C_text("f_4042:srfi_2d4_2escm"),(void*)f_4042},
{C_text("f_4051:srfi_2d4_2escm"),(void*)f_4051},
{C_text("f_4065:srfi_2d4_2escm"),(void*)f_4065},
{C_text("f_4071:srfi_2d4_2escm"),(void*)f_4071},
{C_text("f_4080:srfi_2d4_2escm"),(void*)f_4080},
{C_text("f_4094:srfi_2d4_2escm"),(void*)f_4094},
{C_text("f_4100:srfi_2d4_2escm"),(void*)f_4100},
{C_text("f_4109:srfi_2d4_2escm"),(void*)f_4109},
{C_text("f_4123:srfi_2d4_2escm"),(void*)f_4123},
{C_text("f_4129:srfi_2d4_2escm"),(void*)f_4129},
{C_text("f_4138:srfi_2d4_2escm"),(void*)f_4138},
{C_text("f_4152:srfi_2d4_2escm"),(void*)f_4152},
{C_text("f_4158:srfi_2d4_2escm"),(void*)f_4158},
{C_text("f_4165:srfi_2d4_2escm"),(void*)f_4165},
{C_text("f_4170:srfi_2d4_2escm"),(void*)f_4170},
{C_text("f_4184:srfi_2d4_2escm"),(void*)f_4184},
{C_text("f_4188:srfi_2d4_2escm"),(void*)f_4188},
{C_text("f_4194:srfi_2d4_2escm"),(void*)f_4194},
{C_text("f_4201:srfi_2d4_2escm"),(void*)f_4201},
{C_text("f_4206:srfi_2d4_2escm"),(void*)f_4206},
{C_text("f_4220:srfi_2d4_2escm"),(void*)f_4220},
{C_text("f_4224:srfi_2d4_2escm"),(void*)f_4224},
{C_text("f_4230:srfi_2d4_2escm"),(void*)f_4230},
{C_text("f_4236:srfi_2d4_2escm"),(void*)f_4236},
{C_text("f_4242:srfi_2d4_2escm"),(void*)f_4242},
{C_text("f_4248:srfi_2d4_2escm"),(void*)f_4248},
{C_text("f_4254:srfi_2d4_2escm"),(void*)f_4254},
{C_text("f_4260:srfi_2d4_2escm"),(void*)f_4260},
{C_text("f_4266:srfi_2d4_2escm"),(void*)f_4266},
{C_text("f_4272:srfi_2d4_2escm"),(void*)f_4272},
{C_text("f_4278:srfi_2d4_2escm"),(void*)f_4278},
{C_text("f_4284:srfi_2d4_2escm"),(void*)f_4284},
{C_text("f_4290:srfi_2d4_2escm"),(void*)f_4290},
{C_text("f_4296:srfi_2d4_2escm"),(void*)f_4296},
{C_text("f_4302:srfi_2d4_2escm"),(void*)f_4302},
{C_text("f_4306:srfi_2d4_2escm"),(void*)f_4306},
{C_text("f_4325:srfi_2d4_2escm"),(void*)f_4325},
{C_text("f_4327:srfi_2d4_2escm"),(void*)f_4327},
{C_text("f_4337:srfi_2d4_2escm"),(void*)f_4337},
{C_text("f_4343:srfi_2d4_2escm"),(void*)f_4343},
{C_text("f_4345:srfi_2d4_2escm"),(void*)f_4345},
{C_text("f_4373:srfi_2d4_2escm"),(void*)f_4373},
{C_text("f_4375:srfi_2d4_2escm"),(void*)f_4375},
{C_text("f_4385:srfi_2d4_2escm"),(void*)f_4385},
{C_text("f_4453:srfi_2d4_2escm"),(void*)f_4453},
{C_text("f_4457:srfi_2d4_2escm"),(void*)f_4457},
{C_text("f_4461:srfi_2d4_2escm"),(void*)f_4461},
{C_text("f_4465:srfi_2d4_2escm"),(void*)f_4465},
{C_text("f_4469:srfi_2d4_2escm"),(void*)f_4469},
{C_text("f_4473:srfi_2d4_2escm"),(void*)f_4473},
{C_text("f_4477:srfi_2d4_2escm"),(void*)f_4477},
{C_text("f_4481:srfi_2d4_2escm"),(void*)f_4481},
{C_text("f_4485:srfi_2d4_2escm"),(void*)f_4485},
{C_text("f_4489:srfi_2d4_2escm"),(void*)f_4489},
{C_text("f_4493:srfi_2d4_2escm"),(void*)f_4493},
{C_text("f_4497:srfi_2d4_2escm"),(void*)f_4497},
{C_text("f_4501:srfi_2d4_2escm"),(void*)f_4501},
{C_text("f_4505:srfi_2d4_2escm"),(void*)f_4505},
{C_text("f_4509:srfi_2d4_2escm"),(void*)f_4509},
{C_text("f_4513:srfi_2d4_2escm"),(void*)f_4513},
{C_text("f_4517:srfi_2d4_2escm"),(void*)f_4517},
{C_text("f_4521:srfi_2d4_2escm"),(void*)f_4521},
{C_text("f_4525:srfi_2d4_2escm"),(void*)f_4525},
{C_text("f_4529:srfi_2d4_2escm"),(void*)f_4529},
{C_text("f_4533:srfi_2d4_2escm"),(void*)f_4533},
{C_text("f_4537:srfi_2d4_2escm"),(void*)f_4537},
{C_text("f_4541:srfi_2d4_2escm"),(void*)f_4541},
{C_text("f_4545:srfi_2d4_2escm"),(void*)f_4545},
{C_text("f_4549:srfi_2d4_2escm"),(void*)f_4549},
{C_text("f_4553:srfi_2d4_2escm"),(void*)f_4553},
{C_text("f_4557:srfi_2d4_2escm"),(void*)f_4557},
{C_text("f_4561:srfi_2d4_2escm"),(void*)f_4561},
{C_text("f_4565:srfi_2d4_2escm"),(void*)f_4565},
{C_text("f_4569:srfi_2d4_2escm"),(void*)f_4569},
{C_text("f_4573:srfi_2d4_2escm"),(void*)f_4573},
{C_text("f_4577:srfi_2d4_2escm"),(void*)f_4577},
{C_text("f_4581:srfi_2d4_2escm"),(void*)f_4581},
{C_text("f_4583:srfi_2d4_2escm"),(void*)f_4583},
{C_text("f_4596:srfi_2d4_2escm"),(void*)f_4596},
{C_text("f_4599:srfi_2d4_2escm"),(void*)f_4599},
{C_text("f_4605:srfi_2d4_2escm"),(void*)f_4605},
{C_text("f_4618:srfi_2d4_2escm"),(void*)f_4618},
{C_text("f_4628:srfi_2d4_2escm"),(void*)f_4628},
{C_text("f_4631:srfi_2d4_2escm"),(void*)f_4631},
{C_text("f_4636:srfi_2d4_2escm"),(void*)f_4636},
{C_text("f_4642:srfi_2d4_2escm"),(void*)f_4642},
{C_text("f_4648:srfi_2d4_2escm"),(void*)f_4648},
{C_text("f_4654:srfi_2d4_2escm"),(void*)f_4654},
{C_text("f_4660:srfi_2d4_2escm"),(void*)f_4660},
{C_text("f_4666:srfi_2d4_2escm"),(void*)f_4666},
{C_text("f_4672:srfi_2d4_2escm"),(void*)f_4672},
{C_text("f_4678:srfi_2d4_2escm"),(void*)f_4678},
{C_text("f_4684:srfi_2d4_2escm"),(void*)f_4684},
{C_text("f_4690:srfi_2d4_2escm"),(void*)f_4690},
{C_text("f_4696:srfi_2d4_2escm"),(void*)f_4696},
{C_text("f_4703:srfi_2d4_2escm"),(void*)f_4703},
{C_text("f_4708:srfi_2d4_2escm"),(void*)f_4708},
{C_text("f_4717:srfi_2d4_2escm"),(void*)f_4717},
{C_text("f_4736:srfi_2d4_2escm"),(void*)f_4736},
{C_text("f_4740:srfi_2d4_2escm"),(void*)f_4740},
{C_text("f_4759:srfi_2d4_2escm"),(void*)f_4759},
{C_text("f_4779:srfi_2d4_2escm"),(void*)f_4779},
{C_text("f_4799:srfi_2d4_2escm"),(void*)f_4799},
{C_text("f_4811:srfi_2d4_2escm"),(void*)f_4811},
{C_text("f_4814:srfi_2d4_2escm"),(void*)f_4814},
{C_text("f_4824:srfi_2d4_2escm"),(void*)f_4824},
{C_text("f_4881:srfi_2d4_2escm"),(void*)f_4881},
{C_text("f_4901:srfi_2d4_2escm"),(void*)f_4901},
{C_text("f_4921:srfi_2d4_2escm"),(void*)f_4921},
{C_text("f_4924:srfi_2d4_2escm"),(void*)f_4924},
{C_text("f_4927:srfi_2d4_2escm"),(void*)f_4927},
{C_text("f_4930:srfi_2d4_2escm"),(void*)f_4930},
{C_text("f_4933:srfi_2d4_2escm"),(void*)f_4933},
{C_text("f_4936:srfi_2d4_2escm"),(void*)f_4936},
{C_text("f_4939:srfi_2d4_2escm"),(void*)f_4939},
{C_text("f_4942:srfi_2d4_2escm"),(void*)f_4942},
{C_text("f_4945:srfi_2d4_2escm"),(void*)f_4945},
{C_text("toplevel:srfi_2d4_2escm"),(void*)C_srfi_2d4_toplevel},
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
o|hiding unexported module binding: chicken.number-vector#d 
o|hiding unexported module binding: chicken.number-vector#define-alias 
o|hiding unexported module binding: chicken.number-vector#->f 
o|hiding unexported module binding: chicken.number-vector#list->NNNvector 
o|hiding unexported module binding: chicken.number-vector#NNNvector->list 
o|hiding unexported module binding: chicken.number-vector#pack 
o|hiding unexported module binding: chicken.number-vector#pack-copy 
o|hiding unexported module binding: chicken.number-vector#unpack 
o|hiding unexported module binding: chicken.number-vector#unpack-copy 
o|hiding unexported module binding: chicken.number-vector#subnvector 
o|eliminated procedure checks: 34 
o|specializations:
o|  1 (scheme#assq * (list-of pair))
o|  1 (scheme#memq * list)
o|  8 (chicken.bitwise#integer-length *)
(o e)|safe calls: 457 
o|dropping redundant toplevel assignment: chicken.number-vector#release-number-vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-u8vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-s8vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-u16vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-s16vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-u32vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-u64vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-s32vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-s64vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-f32vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-f64vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-c64vector 
o|dropping redundant toplevel assignment: chicken.number-vector#make-c128vector 
o|safe globals: (chicken.number-vector#u8vector-ref chicken.number-vector#c128vector-set! chicken.number-vector#c64vector-set! chicken.number-vector#f64vector-set! chicken.number-vector#f32vector-set! chicken.number-vector#s64vector-set! chicken.number-vector#u64vector-set! chicken.number-vector#s32vector-set! chicken.number-vector#u32vector-set! chicken.number-vector#s16vector-set! chicken.number-vector#u16vector-set! chicken.number-vector#s8vector-set! chicken.number-vector#u8vector-set! chicken.number-vector#c128vector-length chicken.number-vector#c64vector-length chicken.number-vector#f64vector-length chicken.number-vector#f32vector-length chicken.number-vector#s64vector-length chicken.number-vector#u64vector-length chicken.number-vector#s32vector-length chicken.number-vector#u32vector-length chicken.number-vector#s16vector-length chicken.number-vector#u16vector-length chicken.number-vector#s8vector-length chicken.number-vector#u8vector-length) 
o|inlining procedure: k1853 
o|inlining procedure: k1853 
o|inlining procedure: k1898 
o|inlining procedure: k1898 
o|inlining procedure: k1974 
o|contracted procedure: "(srfi-4.scm:344) ext-alloc322" 
o|inlining procedure: k1974 
o|inlining procedure: k2001 
o|inlining procedure: "(srfi-4.scm:352) ext-free328" 
o|inlining procedure: k2001 
o|inlining procedure: k2040 
o|inlining procedure: k2040 
o|inlining procedure: k2072 
o|inlining procedure: k2072 
o|contracted procedure: "(srfi-4.scm:362) g369370" 
o|inlining procedure: k2051 
o|inlining procedure: k2051 
o|inlining procedure: k2148 
o|inlining procedure: k2148 
o|inlining procedure: k2180 
o|inlining procedure: k2180 
o|contracted procedure: "(srfi-4.scm:374) g403404" 
o|inlining procedure: k2159 
o|inlining procedure: k2159 
o|inlining procedure: k2260 
o|inlining procedure: k2260 
o|inlining procedure: k2292 
o|inlining procedure: k2292 
o|contracted procedure: "(srfi-4.scm:386) g437438" 
o|inlining procedure: k2271 
o|inlining procedure: k2271 
o|inlining procedure: k2372 
o|inlining procedure: k2372 
o|inlining procedure: k2408 
o|inlining procedure: k2408 
o|contracted procedure: "(srfi-4.scm:398) g471472" 
o|inlining procedure: k2383 
o|inlining procedure: k2383 
o|inlining procedure: k2488 
o|inlining procedure: k2488 
o|inlining procedure: k2520 
o|inlining procedure: k2520 
o|contracted procedure: "(srfi-4.scm:410) g505506" 
o|inlining procedure: k2499 
o|inlining procedure: k2499 
o|inlining procedure: k2600 
o|inlining procedure: k2600 
o|inlining procedure: k2632 
o|inlining procedure: k2632 
o|contracted procedure: "(srfi-4.scm:422) g539540" 
o|inlining procedure: k2611 
o|inlining procedure: k2611 
o|inlining procedure: k2712 
o|inlining procedure: k2712 
o|inlining procedure: k2748 
o|inlining procedure: k2748 
o|contracted procedure: "(srfi-4.scm:434) g573574" 
o|inlining procedure: k2723 
o|inlining procedure: k2723 
o|inlining procedure: k2828 
o|inlining procedure: k2828 
o|inlining procedure: k2864 
o|inlining procedure: k2864 
o|contracted procedure: "(srfi-4.scm:446) g607608" 
o|inlining procedure: k2839 
o|inlining procedure: k2839 
o|inlining procedure: k2944 
o|inlining procedure: k2944 
o|inlining procedure: k2974 
o|inlining procedure: k2974 
o|contracted procedure: "(srfi-4.scm:458) g641642" 
o|inlining procedure: k2952 
o|inlining procedure: k2952 
o|inlining procedure: k3055 
o|inlining procedure: k3055 
o|inlining procedure: k3085 
o|inlining procedure: k3085 
o|contracted procedure: "(srfi-4.scm:472) g677678" 
o|inlining procedure: k3063 
o|inlining procedure: k3063 
o|inlining procedure: k3166 
o|inlining procedure: k3166 
o|inlining procedure: k3208 
o|inlining procedure: k3208 
o|contracted procedure: "(srfi-4.scm:488) g725726" 
o|inlining procedure: k3189 
o|inlining procedure: k3189 
o|inlining procedure: k3302 
o|inlining procedure: k3302 
o|inlining procedure: k3344 
o|inlining procedure: k3344 
o|contracted procedure: "(srfi-4.scm:503) g772773" 
o|inlining procedure: k3325 
o|inlining procedure: k3325 
o|inlining procedure: k3427 
o|inlining procedure: k3427 
o|inlining procedure: k3463 
o|inlining procedure: k3463 
o|inlining procedure: k3499 
o|inlining procedure: k3499 
o|inlining procedure: k3535 
o|inlining procedure: k3535 
o|inlining procedure: k3571 
o|inlining procedure: k3571 
o|inlining procedure: k3607 
o|inlining procedure: k3607 
o|inlining procedure: k3643 
o|inlining procedure: k3643 
o|inlining procedure: k3679 
o|inlining procedure: k3679 
o|inlining procedure: k3715 
o|inlining procedure: k3715 
o|inlining procedure: k3751 
o|inlining procedure: k3751 
o|inlining procedure: k3789 
o|inlining procedure: k3789 
o|inlining procedure: k3905 
o|inlining procedure: k3905 
o|inlining procedure: k3935 
o|inlining procedure: k3935 
o|inlining procedure: k3965 
o|inlining procedure: k3965 
o|inlining procedure: k3995 
o|inlining procedure: k3995 
o|inlining procedure: k4024 
o|inlining procedure: k4024 
o|inlining procedure: k4053 
o|inlining procedure: k4053 
o|inlining procedure: k4082 
o|inlining procedure: k4082 
o|inlining procedure: k4111 
o|inlining procedure: k4111 
o|inlining procedure: k4140 
o|inlining procedure: k4140 
o|inlining procedure: k4172 
o|inlining procedure: k4172 
o|inlining procedure: k4208 
o|inlining procedure: k4208 
o|inlining procedure: k4232 
o|inlining procedure: k4232 
o|inlining procedure: k4238 
o|inlining procedure: k4238 
o|inlining procedure: k4244 
o|inlining procedure: k4244 
o|inlining procedure: k4250 
o|inlining procedure: k4250 
o|inlining procedure: k4256 
o|inlining procedure: k4256 
o|inlining procedure: k4262 
o|inlining procedure: k4262 
o|inlining procedure: k4268 
o|inlining procedure: k4268 
o|inlining procedure: k4274 
o|inlining procedure: k4274 
o|inlining procedure: k4280 
o|inlining procedure: k4280 
o|inlining procedure: k4286 
o|inlining procedure: k4286 
o|inlining procedure: k4292 
o|inlining procedure: k4292 
o|inlining procedure: k4298 
o|inlining procedure: k4298 
o|inlining procedure: k4307 
o|inlining procedure: k4307 
o|inlining procedure: k4353 
o|inlining procedure: k4353 
o|inlining procedure: k4386 
o|inlining procedure: k4386 
o|substituted constant variable: a4714 
o|inlining procedure: k4710 
o|inlining procedure: k4741 
o|inlining procedure: k4741 
o|inlining procedure: k4733 
o|inlining procedure: k4733 
o|inlining procedure: k4710 
o|inlining procedure: k4806 
o|inlining procedure: k4806 
o|simplifications: ((if . 1)) 
o|replaced variables: 727 
o|removed binding forms: 339 
o|substituted constant variable: loc373 
o|substituted constant variable: len372 
o|substituted constant variable: loc373 
o|substituted constant variable: loc407 
o|substituted constant variable: len406 
o|substituted constant variable: loc407 
o|substituted constant variable: loc441 
o|substituted constant variable: len440 
o|substituted constant variable: loc441 
o|substituted constant variable: loc475 
o|substituted constant variable: len474 
o|substituted constant variable: loc475 
o|substituted constant variable: loc509 
o|substituted constant variable: len508 
o|substituted constant variable: loc509 
o|substituted constant variable: loc543 
o|substituted constant variable: len542 
o|substituted constant variable: loc543 
o|substituted constant variable: loc577 
o|substituted constant variable: len576 
o|substituted constant variable: loc577 
o|substituted constant variable: loc611 
o|substituted constant variable: len610 
o|substituted constant variable: loc611 
o|substituted constant variable: loc644 
o|substituted constant variable: loc680 
o|substituted constant variable: loc728 
o|substituted constant variable: loc775 
o|substituted constant variable: r39065055 
o|substituted constant variable: r39365057 
o|substituted constant variable: r39665059 
o|substituted constant variable: r39965061 
o|substituted constant variable: r40255063 
o|substituted constant variable: r40545065 
o|substituted constant variable: r40835067 
o|substituted constant variable: r41125069 
o|substituted constant variable: r41415071 
o|substituted constant variable: r41735073 
o|substituted constant variable: r42095075 
o|substituted constant variable: r42335078 
o|substituted constant variable: r42395080 
o|substituted constant variable: r42455082 
o|substituted constant variable: r42515084 
o|substituted constant variable: r42575086 
o|substituted constant variable: r42635088 
o|substituted constant variable: r42695090 
o|substituted constant variable: r42755092 
o|substituted constant variable: r42815094 
o|substituted constant variable: r42875096 
o|substituted constant variable: r42935098 
o|substituted constant variable: r42995100 
o|replaced variables: 104 
o|removed binding forms: 560 
o|inlining procedure: k1977 
o|inlining procedure: k2079 
o|inlining procedure: k2079 
o|inlining procedure: k2187 
o|inlining procedure: k2187 
o|inlining procedure: k2299 
o|inlining procedure: k2299 
o|inlining procedure: k2415 
o|inlining procedure: k2415 
o|inlining procedure: k2527 
o|inlining procedure: k2527 
o|inlining procedure: k2639 
o|inlining procedure: k2639 
o|inlining procedure: k2755 
o|inlining procedure: k2755 
o|inlining procedure: k2871 
o|inlining procedure: k2871 
o|inlining procedure: k2982 
o|inlining procedure: k2982 
o|inlining procedure: k3093 
o|inlining procedure: k3093 
o|inlining procedure: k3225 
o|inlining procedure: k3225 
o|inlining procedure: k3361 
o|inlining procedure: k3361 
o|removed binding forms: 112 
o|substituted constant variable: r20805282 
o|substituted constant variable: r21885286 
o|substituted constant variable: r23005290 
o|substituted constant variable: r24165294 
o|substituted constant variable: r25285298 
o|substituted constant variable: r26405302 
o|substituted constant variable: r27565306 
o|substituted constant variable: r28725310 
o|substituted constant variable: r29835314 
o|substituted constant variable: r30945318 
o|substituted constant variable: r32265322 
o|substituted constant variable: r33625326 
o|replaced variables: 12 
o|removed binding forms: 13 
o|removed conditional forms: 12 
o|removed binding forms: 24 
o|simplifications: ((if . 112) (let . 66) (##core#call . 326)) 
o|  call simplifications:
o|    scheme#list
o|    ##sys#list	13
o|    scheme#caddr
o|    scheme#symbol?
o|    scheme#memq
o|    scheme#pair?
o|    scheme#cadr	3
o|    scheme#eq?	7
o|    ##sys#size	5
o|    scheme#cons	11
o|    ##sys#check-bytevector	4
o|    ##sys#check-list	11
o|    chicken.fixnum#fx>=	13
o|    chicken.fixnum#fx-	4
o|    ##sys#make-structure	14
o|    scheme#car	36
o|    scheme#null?	73
o|    scheme#cdr	36
o|    scheme#not	12
o|    chicken.fixnum#fx>	8
o|    ##sys#check-fixnum
o|    chicken.fixnum#fx<
o|    chicken.fixnum#fx*?
o|    ##sys#foreign-unsigned-ranged-integer-argument
o|    ##sys#check-range	4
o|    ##sys#check-number	2
o|    chicken.fixnum#fx*	10
o|    chicken.fixnum#fx+	17
o|    ##sys#check-structure	20
o|    ##sys#slot	10
o|    chicken.fixnum#fx/	4
o|contracted procedure: k1763 
o|contracted procedure: k1771 
o|contracted procedure: k1777 
o|contracted procedure: k1785 
o|contracted procedure: k1819 
o|contracted procedure: k1822 
o|contracted procedure: k1825 
o|contracted procedure: k1828 
o|contracted procedure: k1831 
o|contracted procedure: k1835 
o|contracted procedure: k1842 
o|contracted procedure: k1857 
o|contracted procedure: k1846 
o|contracted procedure: k1864 
o|contracted procedure: k1867 
o|contracted procedure: k1870 
o|contracted procedure: k1873 
o|contracted procedure: k1876 
o|contracted procedure: k1880 
o|contracted procedure: k1887 
o|contracted procedure: k1902 
o|contracted procedure: k1891 
o|contracted procedure: k1962 
o|contracted procedure: k1968 
o|contracted procedure: k1954 
o|contracted procedure: k1992 
o|contracted procedure: k2115 
o|contracted procedure: k2016 
o|contracted procedure: k2109 
o|contracted procedure: k2019 
o|contracted procedure: k2103 
o|contracted procedure: k2022 
o|contracted procedure: k2097 
o|contracted procedure: k2025 
o|contracted procedure: k2091 
o|contracted procedure: k2028 
o|contracted procedure: k2085 
o|contracted procedure: k2031 
o|contracted procedure: k2043 
o|contracted procedure: k2054 
o|contracted procedure: k2227 
o|contracted procedure: k2124 
o|contracted procedure: k2221 
o|contracted procedure: k2127 
o|contracted procedure: k2215 
o|contracted procedure: k2130 
o|contracted procedure: k2209 
o|contracted procedure: k2133 
o|contracted procedure: k2203 
o|contracted procedure: k2136 
o|contracted procedure: k2197 
o|contracted procedure: k2139 
o|contracted procedure: k2142 
o|contracted procedure: k2151 
o|contracted procedure: k2162 
o|contracted procedure: k2339 
o|contracted procedure: k2236 
o|contracted procedure: k2333 
o|contracted procedure: k2239 
o|contracted procedure: k2327 
o|contracted procedure: k2242 
o|contracted procedure: k2321 
o|contracted procedure: k2245 
o|contracted procedure: k2315 
o|contracted procedure: k2248 
o|contracted procedure: k2309 
o|contracted procedure: k2251 
o|contracted procedure: k2254 
o|contracted procedure: k2263 
o|contracted procedure: k2274 
o|contracted procedure: k2455 
o|contracted procedure: k2348 
o|contracted procedure: k2449 
o|contracted procedure: k2351 
o|contracted procedure: k2443 
o|contracted procedure: k2354 
o|contracted procedure: k2437 
o|contracted procedure: k2357 
o|contracted procedure: k2431 
o|contracted procedure: k2360 
o|contracted procedure: k2425 
o|contracted procedure: k2363 
o|contracted procedure: k2366 
o|contracted procedure: k2375 
o|contracted procedure: k2396 
o|contracted procedure: k2386 
o|contracted procedure: k2567 
o|contracted procedure: k2464 
o|contracted procedure: k2561 
o|contracted procedure: k2467 
o|contracted procedure: k2555 
o|contracted procedure: k2470 
o|contracted procedure: k2549 
o|contracted procedure: k2473 
o|contracted procedure: k2543 
o|contracted procedure: k2476 
o|contracted procedure: k2537 
o|contracted procedure: k2479 
o|contracted procedure: k2482 
o|contracted procedure: k2491 
o|contracted procedure: k2502 
o|contracted procedure: k2679 
o|contracted procedure: k2576 
o|contracted procedure: k2673 
o|contracted procedure: k2579 
o|contracted procedure: k2667 
o|contracted procedure: k2582 
o|contracted procedure: k2661 
o|contracted procedure: k2585 
o|contracted procedure: k2655 
o|contracted procedure: k2588 
o|contracted procedure: k2649 
o|contracted procedure: k2591 
o|contracted procedure: k2594 
o|contracted procedure: k2603 
o|contracted procedure: k2614 
o|contracted procedure: k2795 
o|contracted procedure: k2688 
o|contracted procedure: k2789 
o|contracted procedure: k2691 
o|contracted procedure: k2783 
o|contracted procedure: k2694 
o|contracted procedure: k2777 
o|contracted procedure: k2697 
o|contracted procedure: k2771 
o|contracted procedure: k2700 
o|contracted procedure: k2765 
o|contracted procedure: k2703 
o|contracted procedure: k2706 
o|contracted procedure: k2715 
o|contracted procedure: k2736 
o|contracted procedure: k2726 
o|contracted procedure: k2911 
o|contracted procedure: k2804 
o|contracted procedure: k2905 
o|contracted procedure: k2807 
o|contracted procedure: k2899 
o|contracted procedure: k2810 
o|contracted procedure: k2893 
o|contracted procedure: k2813 
o|contracted procedure: k2887 
o|contracted procedure: k2816 
o|contracted procedure: k2881 
o|contracted procedure: k2819 
o|contracted procedure: k2822 
o|contracted procedure: k2831 
o|contracted procedure: k2852 
o|contracted procedure: k2842 
o|contracted procedure: k3022 
o|contracted procedure: k2920 
o|contracted procedure: k3016 
o|contracted procedure: k2923 
o|contracted procedure: k3010 
o|contracted procedure: k2926 
o|contracted procedure: k3004 
o|contracted procedure: k2929 
o|contracted procedure: k2998 
o|contracted procedure: k2932 
o|contracted procedure: k2992 
o|contracted procedure: k2935 
o|contracted procedure: k2938 
o|contracted procedure: k2947 
o|contracted procedure: k2955 
o|contracted procedure: k3133 
o|contracted procedure: k3031 
o|contracted procedure: k3127 
o|contracted procedure: k3034 
o|contracted procedure: k3121 
o|contracted procedure: k3037 
o|contracted procedure: k3115 
o|contracted procedure: k3040 
o|contracted procedure: k3109 
o|contracted procedure: k3043 
o|contracted procedure: k3103 
o|contracted procedure: k3046 
o|contracted procedure: k3049 
o|contracted procedure: k3058 
o|contracted procedure: k3066 
o|contracted procedure: k3269 
o|contracted procedure: k3142 
o|contracted procedure: k3263 
o|contracted procedure: k3145 
o|contracted procedure: k3257 
o|contracted procedure: k3148 
o|contracted procedure: k3251 
o|contracted procedure: k3151 
o|contracted procedure: k3245 
o|contracted procedure: k3154 
o|contracted procedure: k3239 
o|contracted procedure: k3157 
o|contracted procedure: k3160 
o|contracted procedure: k3169 
o|contracted procedure: k3172 
o|contracted procedure: k3178 
o|contracted procedure: k3184 
o|contracted procedure: k3211 
o|contracted procedure: k3215 
o|contracted procedure: k3222 
o|contracted procedure: k3192 
o|contracted procedure: k3236 
o|contracted procedure: k3405 
o|contracted procedure: k3278 
o|contracted procedure: k3399 
o|contracted procedure: k3281 
o|contracted procedure: k3393 
o|contracted procedure: k3284 
o|contracted procedure: k3387 
o|contracted procedure: k3287 
o|contracted procedure: k3381 
o|contracted procedure: k3290 
o|contracted procedure: k3375 
o|contracted procedure: k3293 
o|contracted procedure: k3296 
o|contracted procedure: k3305 
o|contracted procedure: k3308 
o|contracted procedure: k3314 
o|contracted procedure: k3320 
o|contracted procedure: k3347 
o|contracted procedure: k3351 
o|contracted procedure: k3358 
o|contracted procedure: k3328 
o|contracted procedure: k3372 
o|contracted procedure: k3415 
o|contracted procedure: k3438 
o|contracted procedure: k3451 
o|contracted procedure: k3474 
o|contracted procedure: k3487 
o|contracted procedure: k3510 
o|contracted procedure: k3523 
o|contracted procedure: k3546 
o|contracted procedure: k3559 
o|contracted procedure: k3582 
o|contracted procedure: k3595 
o|contracted procedure: k3618 
o|contracted procedure: k3631 
o|contracted procedure: k3654 
o|contracted procedure: k3667 
o|contracted procedure: k3690 
o|contracted procedure: k3703 
o|contracted procedure: k3726 
o|contracted procedure: k3739 
o|contracted procedure: k3758 
o|contracted procedure: k3766 
o|contracted procedure: k3777 
o|contracted procedure: k3796 
o|contracted procedure: k3804 
o|contracted procedure: k3887 
o|contracted procedure: k3896 
o|contracted procedure: k3908 
o|contracted procedure: k3920 
o|contracted procedure: k3926 
o|contracted procedure: k3938 
o|contracted procedure: k3950 
o|contracted procedure: k3956 
o|contracted procedure: k3968 
o|contracted procedure: k3980 
o|contracted procedure: k3986 
o|contracted procedure: k3998 
o|contracted procedure: k4009 
o|contracted procedure: k4015 
o|contracted procedure: k4027 
o|contracted procedure: k4038 
o|contracted procedure: k4044 
o|contracted procedure: k4056 
o|contracted procedure: k4067 
o|contracted procedure: k4073 
o|contracted procedure: k4085 
o|contracted procedure: k4096 
o|contracted procedure: k4102 
o|contracted procedure: k4114 
o|contracted procedure: k4125 
o|contracted procedure: k4131 
o|contracted procedure: k4143 
o|contracted procedure: k4154 
o|contracted procedure: k4160 
o|contracted procedure: k4175 
o|contracted procedure: k4190 
o|contracted procedure: k4196 
o|contracted procedure: k4211 
o|contracted procedure: k4226 
o|contracted procedure: k4318 
o|contracted procedure: k4329 
o|contracted procedure: k4332 
o|contracted procedure: k4339 
o|contracted procedure: k4347 
o|contracted procedure: k4350 
o|contracted procedure: k4356 
o|contracted procedure: k4359 
o|contracted procedure: k4377 
o|contracted procedure: k4380 
o|contracted procedure: k4389 
o|contracted procedure: k4392 
o|contracted procedure: k4585 
o|contracted procedure: k4588 
o|contracted procedure: k4591 
o|contracted procedure: k4614 
o|contracted procedure: k4600 
o|contracted procedure: k4606 
o|contracted procedure: k4610 
o|contracted procedure: k4620 
o|contracted procedure: k4623 
o|contracted procedure: k4705 
o|contracted procedure: k4792 
o|contracted procedure: k4718 
o|contracted procedure: k4724 
o|contracted procedure: k4727 
o|contracted procedure: k4730 
o|contracted procedure: k4744 
o|contracted procedure: k4747 
o|contracted procedure: k4750 
o|contracted procedure: k4763 
o|contracted procedure: k4767 
o|contracted procedure: k4770 
o|contracted procedure: k4833 
o|contracted procedure: k4837 
o|contracted procedure: k4841 
o|contracted procedure: k4845 
o|contracted procedure: k4849 
o|contracted procedure: k4853 
o|contracted procedure: k4857 
o|contracted procedure: k4861 
o|contracted procedure: k4865 
o|contracted procedure: k4869 
o|contracted procedure: k4873 
o|contracted procedure: k4877 
o|contracted procedure: k4803 
o|contracted procedure: k4819 
o|contracted procedure: k4826 
o|contracted procedure: k4883 
o|contracted procedure: k4897 
o|contracted procedure: k4886 
o|contracted procedure: k4903 
o|contracted procedure: k4917 
o|contracted procedure: k4906 
o|simplifications: ((let . 52)) 
o|removed binding forms: 334 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest352354 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest386388 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest420422 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest454456 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest488490 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest522524 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest556558 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest556558 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest556558 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest556558 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest590592 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest590592 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest590592 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest590592 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest624626 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest624626 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest624626 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest624626 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest660662 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest660662 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest660662 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest660662 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest696698 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest696698 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest696698 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest696698 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest743745 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest743745 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest743745 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest743745 0 
o|inlining procedure: "(srfi-4.scm:743) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:742) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:741) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:740) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:739) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:738) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:737) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:736) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:735) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:734) chicken.number-vector#pack" 
o|inlining procedure: "(srfi-4.scm:733) chicken.number-vector#pack" 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2020 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2020 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2020 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2020 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2128 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2128 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2128 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2128 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2240 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2240 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2240 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2240 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2352 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2352 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2352 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2352 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2468 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2468 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2468 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2468 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2580 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2580 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2580 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2580 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2692 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2692 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2692 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2692 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2808 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2808 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2808 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2808 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2924 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2924 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2924 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2924 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3035 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3035 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3035 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3035 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3146 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3146 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3146 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3146 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3282 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3282 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3282 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3282 1 
o|removed side-effect free assignment to unused variable: chicken.number-vector#pack 
o|substituted constant variable: tag11445780 
o|substituted constant variable: loc11455781 
o|substituted constant variable: tag11445787 
o|substituted constant variable: loc11455788 
o|substituted constant variable: tag11445794 
o|substituted constant variable: loc11455795 
o|substituted constant variable: tag11445801 
o|substituted constant variable: loc11455802 
o|substituted constant variable: tag11445808 
o|substituted constant variable: loc11455809 
o|substituted constant variable: tag11445815 
o|substituted constant variable: loc11455816 
o|substituted constant variable: tag11445822 
o|substituted constant variable: loc11455823 
o|substituted constant variable: tag11445829 
o|substituted constant variable: loc11455830 
o|substituted constant variable: tag11445836 
o|substituted constant variable: loc11455837 
o|substituted constant variable: tag11445843 
o|substituted constant variable: loc11455844 
o|substituted constant variable: tag11445850 
o|substituted constant variable: loc11455851 
o|replaced variables: 11 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2026 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2026 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2026 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2026 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2134 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2134 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2134 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2134 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2246 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2246 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2246 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2246 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2358 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2358 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2358 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2358 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2474 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2474 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2474 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2474 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2586 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2586 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2586 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2586 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2698 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2698 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2698 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2698 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2814 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2814 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2814 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2814 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2930 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r2930 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2930 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2930 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3041 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r3041 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3041 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3041 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3152 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r3152 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3152 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3152 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3288 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r3288 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3288 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3288 2 
o|removed binding forms: 46 
o|contracted procedure: k4407 
o|contracted procedure: k4411 
o|contracted procedure: k4415 
o|contracted procedure: k4419 
o|contracted procedure: k4423 
o|contracted procedure: k4427 
o|contracted procedure: k4431 
o|contracted procedure: k4435 
o|contracted procedure: k4439 
o|contracted procedure: k4443 
o|contracted procedure: k4447 
o|removed binding forms: 35 
o|direct leaf routine/allocation: doloop376377 0 
o|direct leaf routine/allocation: doloop410411 0 
o|direct leaf routine/allocation: doloop444445 0 
o|direct leaf routine/allocation: doloop478479 0 
o|direct leaf routine/allocation: doloop512513 0 
o|direct leaf routine/allocation: doloop546547 0 
o|direct leaf routine/allocation: doloop580581 0 
o|direct leaf routine/allocation: doloop614615 0 
o|direct leaf routine/allocation: doloop649650 0 
o|direct leaf routine/allocation: doloop685686 0 
o|direct leaf routine/allocation: doloop724733 0 
o|direct leaf routine/allocation: doloop771780 0 
o|converted assignments to bindings: (doloop376377) 
o|converted assignments to bindings: (doloop410411) 
o|converted assignments to bindings: (doloop444445) 
o|converted assignments to bindings: (doloop478479) 
o|converted assignments to bindings: (doloop512513) 
o|converted assignments to bindings: (doloop546547) 
o|converted assignments to bindings: (doloop580581) 
o|converted assignments to bindings: (doloop614615) 
o|converted assignments to bindings: (doloop649650) 
o|converted assignments to bindings: (doloop685686) 
o|converted assignments to bindings: (doloop724733) 
o|converted assignments to bindings: (doloop771780) 
o|simplifications: ((let . 12)) 
x|number of unboxed float variables: 0
x|number of inline operations replaced with unboxed ones: 6
o|customizable procedures: (chicken.number-vector#pack-copy chicken.number-vector#unpack chicken.number-vector#unpack-copy g14761477 chicken.number-vector#subnvector loop1098 loop1089 loop1080 loop1073 loop1066 loop1059 loop1052 loop1045 loop1038 loop1031 loop1024 doloop960961 doloop936937 doloop921922 doloop908909 doloop895896 doloop882883 doloop869870 doloop856857 doloop843844 doloop830831 doloop817818 k3076 k2965 alloc335) 
o|shared closure containers: 13 
o|shared closure users: 15 
o|calls to known targets: 143 
o|identified direct recursive calls: f_2070 1 
o|unused rest argument: rest352354 f_2014 
o|identified direct recursive calls: f_2178 1 
o|unused rest argument: rest386388 f_2122 
o|identified direct recursive calls: f_2290 1 
o|unused rest argument: rest420422 f_2234 
o|identified direct recursive calls: f_2406 1 
o|unused rest argument: rest454456 f_2346 
o|identified direct recursive calls: f_2518 1 
o|unused rest argument: rest488490 f_2462 
o|identified direct recursive calls: f_2630 1 
o|unused rest argument: rest522524 f_2574 
o|identified direct recursive calls: f_2746 1 
o|unused rest argument: rest556558 f_2686 
o|identified direct recursive calls: f_2862 1 
o|unused rest argument: rest590592 f_2802 
o|identified direct recursive calls: f_2972 1 
o|unused rest argument: rest624626 f_2918 
o|identified direct recursive calls: f_3083 1 
o|unused rest argument: rest660662 f_3029 
o|identified direct recursive calls: f_3206 1 
o|unused rest argument: rest696698 f_3140 
o|identified direct recursive calls: f_3342 1 
o|unused rest argument: rest743745 f_3276 
o|identified direct recursive calls: f_3903 1 
o|identified direct recursive calls: f_3933 1 
o|identified direct recursive calls: f_3963 1 
o|identified direct recursive calls: f_3993 1 
o|identified direct recursive calls: f_4022 1 
o|identified direct recursive calls: f_4051 1 
o|identified direct recursive calls: f_4080 1 
o|identified direct recursive calls: f_4109 1 
o|identified direct recursive calls: f_4138 1 
o|fast box initializations: 22 
o|fast global references: 44 
o|fast global assignments: 4 
o|dropping unused closure argument: f_1960 
o|dropping unused closure argument: f_4325 
o|dropping unused closure argument: f_4343 
o|dropping unused closure argument: f_4373 
o|dropping unused closure argument: f_4583 
*/
/* end of file */
