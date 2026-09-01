/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file lolevel.c -emit-import-library chicken.locative -emit-import-library chicken.memory -emit-import-library chicken.memory.representation
   unit: lolevel
   uses: library
*/
#include "chicken.h"

#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[160];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,27),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,32,46,32,108,111,99,41,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,32),40,35,35,115,121,115,35,99,104,101,99,107,45,98,101,99,111,109,101,45,97,108,105,115,116,32,120,32,108,111,99,41};
static C_char li3[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,32,46,32,108,111,99,41,0};
static C_char li4[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,118,101,99,116,111,114,32,120,32,46,32,108,111,99,41,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,32,46,32,108,111,99,41,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,13),40,115,105,122,101,114,114,32,97,114,103,115,41,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,20),40,99,104,101,99,107,110,49,32,110,32,110,109,97,120,32,111,102,102,41,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,110,50,32,110,32,110,109,97,120,32,110,109,97,120,50,32,111,102,102,49,32,111,102,102,50,41};
static C_char li10[] C_aligned={C_lihdr(0,0,16),40,109,111,118,101,32,102,114,111,109,32,116,111,32,110,41};
static C_char li11[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,32,116,111,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,108,108,111,99,97,116,101,32,105,110,116,51,51,48,41};
static C_char li13[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,102,114,101,101,32,99,45,112,111,105,110,116,101,114,51,51,54,41,0,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,63,32,120,41,0,0,0,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,41};
static C_char li16[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,41,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,41,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,41,0,0,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,41,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,61,63,32,112,49,32,112,50,41};
static C_char li21[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,43,32,112,116,114,51,55,56,32,111,102,102,51,55,57,41,0};
static C_char li22[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,41};
static C_char li23[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,32,116,97,103,41,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,116,97,103,32,120,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,112,32,110,41,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,112,32,110,41,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,117,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,115,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,112,32,110,41,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,49,48,41,0,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,109,97,107,101,45,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,110,32,46,32,114,101,115,116,41,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,63,32,120,41,0,0,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,53,50,53,32,112,116,114,115,32,105,41,0,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,32,46,32,112,116,114,115,41,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,53,51,56,41,0,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,102,105,108,108,33,32,112,118,32,112,116,114,41,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,115,101,116,33,32,112,118,32,105,32,112,116,114,41,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,35,112,111,105,110,116,101,114,45,118,101,99,116,111,114,45,108,101,110,103,116,104,32,112,118,41,0,0,0,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,54,52,55,32,105,41,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,8),40,99,111,112,121,32,120,41};
static C_char li47[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,111,98,106,101,99,116,45,99,111,112,121,32,120,41,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,9),40,97,50,49,57,56,32,120,41,0,0,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,11),40,97,50,50,49,52,32,120,32,105,41,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,32,100,97,116,97,41,0,0,0,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,9),40,97,50,50,52,49,32,120,41,0,0,0,0,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,53),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,41,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,9),40,97,50,50,55,52,32,120,41,0,0,0,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,41};
static C_char li55[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,32,120,41,0,0,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,118,101,99,116,111,114,45,108,105,107,101,63,32,120,41,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,41,0,0,0,0,0,0,0};
static C_char li58[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,41,0,0,0,0,0,0,0};
static C_char li59[] C_aligned={C_lihdr(0,0,64),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,32,46,32,97,114,103,115,41};
static C_char li60[] C_aligned={C_lihdr(0,0,57),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,41,0,0};
static C_char li62[] C_aligned={C_lihdr(0,0,56),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,41};
static C_char li63[] C_aligned={C_lihdr(0,0,63),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,32,105,32,121,41,0};
static C_char li64[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,53,51,41,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,41};
static C_char li66[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,41,0,0,0,0,0};
static C_char li67[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,33,32,111,108,100,32,112,114,111,99,41,0,0,0,0,0,0};
static C_char li68[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,109,101,109,111,114,121,46,114,101,112,114,101,115,101,110,116,97,116,105,111,110,35,110,117,109,98,101,114,45,118,101,99,116,111,114,45,100,97,116,97,32,118,41,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,32,46,32,105,110,100,101,120,41,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,32,46,32,105,110,100,101,120,41,0,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,32,121,41,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,37),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,41,0,0,0};
static C_char li73[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,45,105,110,100,101,120,32,120,41,0,0,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,108,111,99,97,116,105,118,101,35,108,111,99,97,116,105,118,101,63,32,120,41,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,11),40,97,50,54,52,51,32,108,111,99,41,0,0,0,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,11),40,97,50,54,52,54,32,120,32,105,41,0,0,0,0,0};
static C_char li77[] C_aligned={C_lihdr(0,0,12),40,97,50,54,55,48,32,112,118,32,105,41,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,9),40,97,50,54,57,48,32,112,41,0,0,0,0,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,9),40,97,50,54,57,51,32,112,41,0,0,0,0,0,0,0};
static C_char li80[] C_aligned={C_lihdr(0,0,9),40,97,50,54,57,54,32,112,41,0,0,0,0,0,0,0};
static C_char li81[] C_aligned={C_lihdr(0,0,9),40,97,50,54,57,57,32,112,41,0,0,0,0,0,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,9),40,97,50,55,48,50,32,112,41,0,0,0,0,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,9),40,97,50,55,48,53,32,112,41,0,0,0,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,9),40,97,50,55,48,56,32,112,41,0,0,0,0,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,9),40,97,50,55,49,49,32,112,41,0,0,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,9),40,97,50,55,49,52,32,112,41,0,0,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,9),40,97,50,55,49,55,32,112,41,0,0,0,0,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub557(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
void * ptr=(void * )C_c_pointer_or_null(C_a2);
*((void **)C_data_pointer(buf) + i) = ptr;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub548(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word buf=(C_word )(C_a0);
unsigned int i=(unsigned int )C_unfix(C_a1);
C_return(*((void **)C_data_pointer(buf) + i));
C_ret:
#undef return

return C_r;}

/* from k1911 */
C_regparm static C_word stub505(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k1712 */
C_regparm static C_word stub391(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub380(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
C_return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
C_regparm static C_word stub365(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
C_return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1624 */
C_regparm static C_word stub337(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1617 */
C_regparm static C_word stub331(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1228 */
C_regparm static C_word stub210(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1200 */
C_regparm static C_word stub194(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1172 */
C_regparm static C_word stub178(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1144 */
C_regparm static C_word stub162(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(f_1008)
static void f_1008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word *av) C_noret;
C_noret_decl(f_1031)
static void C_ccall f_1031(C_word c,C_word *av) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word *av) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word *av) C_noret;
C_noret_decl(f_1089)
static void f_1089(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1102)
static void C_ccall f_1102(C_word c,C_word *av) C_noret;
C_noret_decl(f_1243)
static void C_ccall f_1243(C_word c,C_word *av) C_noret;
C_noret_decl(f_1264)
static void f_1264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1270)
static void f_1270(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1276)
static void f_1276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1292)
static void f_1292(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word *av) C_noret;
C_noret_decl(f_1322)
static void C_ccall f_1322(C_word c,C_word *av) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word *av) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word *av) C_noret;
C_noret_decl(f_1333)
static void f_1333(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word *av) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word *av) C_noret;
C_noret_decl(f_1487)
static void C_ccall f_1487(C_word c,C_word *av) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word *av) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word *av) C_noret;
C_noret_decl(f_1533)
static void C_ccall f_1533(C_word c,C_word *av) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word *av) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word *av) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word *av) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word *av) C_noret;
C_noret_decl(f_1631)
static void C_ccall f_1631(C_word c,C_word *av) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word *av) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word *av) C_noret;
C_noret_decl(f_1654)
static void C_ccall f_1654(C_word c,C_word *av) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word *av) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word *av) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word *av) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1685)
static void C_ccall f_1685(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word *av) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word *av) C_noret;
C_noret_decl(f_1746)
static void C_ccall f_1746(C_word c,C_word *av) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word *av) C_noret;
C_noret_decl(f_1755)
static void C_ccall f_1755(C_word c,C_word *av) C_noret;
C_noret_decl(f_1758)
static void C_ccall f_1758(C_word c,C_word *av) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word *av) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word *av) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word *av) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word *av) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word *av) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word *av) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word *av) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word *av) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word *av) C_noret;
C_noret_decl(f_1848)
static void C_ccall f_1848(C_word c,C_word *av) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word *av) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word *av) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word *av) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word *av) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word *av) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word *av) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word *av) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word *av) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word *av) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word *av) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word *av) C_noret;
C_noret_decl(f_1895)
static void C_ccall f_1895(C_word c,C_word *av) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word *av) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word *av) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word *av) C_noret;
C_noret_decl(f_1936)
static C_word f_1936(C_word t0,C_word t1);
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1983)
static void f_1983(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word *av) C_noret;
C_noret_decl(f_2028)
static C_word f_2028(C_word t0,C_word t1);
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word *av) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word *av) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word *av) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word *av) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word *av) C_noret;
C_noret_decl(f_2116)
static void f_2116(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word *av) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word *av) C_noret;
C_noret_decl(f_2158)
static void f_2158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word *av) C_noret;
C_noret_decl(f_2190)
static void C_ccall f_2190(C_word c,C_word *av) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word *av) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word *av) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word *av) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word *av) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word *av) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word *av) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word *av) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word *av) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word *av) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word *av) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word *av) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word *av) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word *av) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word *av) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word *av) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word *av) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word *av) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word *av) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word *av) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word *av) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word *av) C_noret;
C_noret_decl(f_2470)
static void C_ccall f_2470(C_word c,C_word *av) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word *av) C_noret;
C_noret_decl(f_2494)
static void C_ccall f_2494(C_word c,C_word *av) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word *av) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word *av) C_noret;
C_noret_decl(f_2509)
static C_word f_2509(C_word t0,C_word t1);
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word *av) C_noret;
C_noret_decl(f_2536)
static void C_ccall f_2536(C_word c,C_word *av) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word *av) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word *av) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word *av) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word *av) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word *av) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word *av) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word *av) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word *av) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word *av) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word *av) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word *av) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word *av) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word *av) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word *av) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word *av) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word *av) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word *av) C_noret;
C_noret_decl(f_2691)
static void C_ccall f_2691(C_word c,C_word *av) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word *av) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word *av) C_noret;
C_noret_decl(f_2700)
static void C_ccall f_2700(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word *av) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static void C_ccall f_2715(C_word c,C_word *av) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word *av) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word *av) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word *av) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word *av) C_noret;
C_noret_decl(C_lolevel_toplevel)
C_extern void C_ccall C_lolevel_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1008)
static void C_ccall trf_1008(C_word c,C_word *av) C_noret;
static void C_ccall trf_1008(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1008(t0,t1,t2);}

C_noret_decl(trf_1089)
static void C_ccall trf_1089(C_word c,C_word *av) C_noret;
static void C_ccall trf_1089(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1089(t0,t1);}

C_noret_decl(trf_1264)
static void C_ccall trf_1264(C_word c,C_word *av) C_noret;
static void C_ccall trf_1264(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1264(t0,t1);}

C_noret_decl(trf_1270)
static void C_ccall trf_1270(C_word c,C_word *av) C_noret;
static void C_ccall trf_1270(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1270(t0,t1,t2);}

C_noret_decl(trf_1276)
static void C_ccall trf_1276(C_word c,C_word *av) C_noret;
static void C_ccall trf_1276(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1276(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1292)
static void C_ccall trf_1292(C_word c,C_word *av) C_noret;
static void C_ccall trf_1292(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_1292(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1333)
static void C_ccall trf_1333(C_word c,C_word *av) C_noret;
static void C_ccall trf_1333(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1333(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1983)
static void C_ccall trf_1983(C_word c,C_word *av) C_noret;
static void C_ccall trf_1983(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1983(t0,t1,t2,t3);}

C_noret_decl(trf_2116)
static void C_ccall trf_2116(C_word c,C_word *av) C_noret;
static void C_ccall trf_2116(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2116(t0,t1,t2);}

C_noret_decl(trf_2158)
static void C_ccall trf_2158(C_word c,C_word *av) C_noret;
static void C_ccall trf_2158(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2158(t0,t1,t2);}

/* loop in ##sys#check-become-alist in k977 */
static void f_1008(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,5)))){
C_save_and_reclaim_args((void *)trf_1008,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_i_check_pair_2(t4,((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm:95: ##sys#check-block */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t6;
av2[2]=C_u_i_car(t4);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
/* lolevel.scm:99: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[7];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* k1026 in loop in ##sys#check-become-alist in k977 */
static void C_ccall f_1028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1028,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1031,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:96: ##sys#check-block */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t2;
av2[2]=C_u_i_cdr(((C_word*)t0)[5]);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}

/* k1029 in k1026 in loop in ##sys#check-become-alist in k977 */
static void C_ccall f_1031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1031,c,av);}
/* lolevel.scm:97: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1008(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* ##sys#check-generic-structure in k977 */
static void C_ccall f_1045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_1045,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(C_truep(C_blockp(t2))?C_structurep(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
/* lolevel.scm:105: ##sys#signal-hook */
t5=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=lf[9];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
/* lolevel.scm:105: ##sys#signal-hook */
t5=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[9];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}}

/* ##sys#check-generic-vector in k977 */
static void C_ccall f_1070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_1070,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1089,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_blockp(t2))){
t5=C_specialp(t2);
t6=t4;
f_1089(t6,(C_truep(t5)?C_i_not(t5):C_i_not(C_byteblockp(t2))));}
else{
t5=t4;
f_1089(t5,C_SCHEME_FALSE);}}

/* k1087 in ##sys#check-generic-vector in k977 */
static void f_1089(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1089,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
/* lolevel.scm:113: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=C_u_i_car(((C_word*)t0)[3]);
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
/* lolevel.scm:113: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[11];
av2[5]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}}

/* ##sys#check-pointer in k977 */
static void C_ccall f_1102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_1102,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_i_safe_pointerp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
if(C_truep(C_i_pairp(t3))){
/* lolevel.scm:119: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word av2[6];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=lf[13];
av2[5]=t2;
tp(6,av2);}}
else{
/* lolevel.scm:119: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=lf[13];
av2[5]=t2;
tp(6,av2);}}}}

/* chicken.memory#move-memory! in k977 */
static void C_ccall f_1243(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,7)))){
C_save_and_reclaim((void *)f_1243,c,av);}
a=C_alloc(38);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_fix(0):C_get_rest_arg(c,6,av,4,t0));
t12=C_rest_nullp(c,6);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1264,a[2]=t2,a[3]=t3,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1270,a[2]=t2,a[3]=t3,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t23=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1276,a[2]=t16,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1292,a[2]=t16,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t25=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1319,a[2]=((C_word*)t0)[2],a[3]=t11,a[4]=t8,a[5]=t14,a[6]=t18,a[7]=t20,a[8]=t1,a[9]=t2,a[10]=t3,a[11]=t5,tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm:158: ##sys#check-block */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t25;
av2[2]=t2;
av2[3]=lf[17];
tp(4,av2);}}

/* nosizerr in chicken.memory#move-memory! in k977 */
static void f_1264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_1264,2,t0,t1);}
/* lolevel.scm:143: ##sys#error */
t2=*((C_word*)lf[16]+1);{
C_word av2[6];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[17];
av2[3]=lf[18];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* sizerr in chicken.memory#move-memory! in k977 */
static void f_1270(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,7)))){
C_save_and_reclaim_args((void *)trf_1270,3,t0,t1,t2);}{
C_word av2[8];
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[16]+1);
av2[3]=lf[17];
av2[4]=lf[19];
av2[5]=((C_word*)t0)[2];
av2[6]=((C_word*)t0)[3];
av2[7]=t2;
C_apply(8,av2);}}

/* checkn1 in chicken.memory#move-memory! in k977 */
static void f_1276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1276,5,t0,t1,t2,t3,t4);}
a=C_alloc(6);
t5=C_fixnum_difference(t3,t4);
if(C_truep(C_fixnum_less_or_equal_p(t2,t5))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
/* lolevel.scm:151: sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1270(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* checkn2 in chicken.memory#move-memory! in k977 */
static void f_1292(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1292,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(9);
t7=C_fixnum_difference(t3,t5);
t8=C_fixnum_less_or_equal_p(t2,t7);
t9=(C_truep(t8)?C_fixnum_less_or_equal_p(t2,C_fixnum_difference(t4,t6)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=t1;{
C_word av2[2];
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
/* lolevel.scm:156: sizerr */
t10=((C_word*)((C_word*)t0)[2])[1];
f_1270(t10,t1,C_a_i_list(&a,3,t2,t3,t4));}}

/* k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1319(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1319,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1322,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:159: ##sys#check-block */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[17];
tp(4,av2);}}

/* k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1322,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1325,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t2)[4],C_fix(0)))){
/* lolevel.scm:161: ##sys#error */
t4=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[17];
av2[3]=lf[22];
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1325(2,av2);}}}

/* k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1325,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1328,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t2)[3],C_fix(0)))){
/* lolevel.scm:163: ##sys#error */
t4=*((C_word*)lf[16]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[17];
av2[3]=lf[21];
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1328(2,av2);}}}

/* k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1328(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,5)))){
C_save_and_reclaim((void *)f_1328,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1333,a[2]=((C_word*)t2)[2],a[3]=t4,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word)li10),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_1333(t6,((C_word*)t2)[8],((C_word*)t2)[9],((C_word*)t2)[10],((C_word*)t2)[11]);}

/* move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void f_1333(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1333,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_structurep(t2))){
t5=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t5,((C_word*)t0)[2]))){
/* lolevel.scm:167: move */
t11=t1;
t12=C_slot(t2,C_fix(1));
t13=t3;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t6;
av2[3]=lf[17];
av2[4]=t2;
tp(5,av2);}}}
else{
if(C_truep(C_structurep(t3))){
t5=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t5,((C_word*)t0)[2]))){
/* lolevel.scm:171: move */
t11=t1;
t12=t2;
t13=C_slot(t3,C_fix(1));
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
t6=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t6;
av2[3]=lf[17];
av2[4]=t3;
tp(5,av2);}}}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_slot(t2,C_fix(0));
if(C_truep(t4)){
/* lolevel.scm:175: move */
t11=t1;
t12=t5;
t13=t3;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
t6=C_block_size(t5);
/* lolevel.scm:175: move */
t11=t1;
t12=t5;
t13=t3;
t14=C_fixnum_difference(t6,C_fix(1));
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}
else{
if(C_truep(C_i_stringp(t3))){
t5=C_slot(t3,C_fix(0));
if(C_truep(t4)){
/* lolevel.scm:178: move */
t11=t1;
t12=t2;
t13=t5;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}
else{
t6=C_block_size(t5);
/* lolevel.scm:178: move */
t11=t1;
t12=t2;
t13=t5;
t14=C_fixnum_difference(t6,C_fix(1));
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}
else{
t5=C_i_safe_pointerp(t2);
t6=(C_truep(t5)?t5:C_locativep(t2));
if(C_truep(t6)){
t7=C_i_safe_pointerp(t3);
t8=(C_truep(t7)?t7:C_locativep(t3));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1471,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t10=t9;{
C_word av2[2];
av2[0]=t10;
av2[1]=t4;
f_1471(2,av2);}}
else{
/* lolevel.scm:181: nosizerr */
t10=((C_word*)((C_word*)t0)[6])[1];
f_1264(t10,t9);}}
else{
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1480,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:182: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t9;
av2[2]=t3;
tp(3,av2);}}}
else{
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1507,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:186: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t7;
av2[2]=t2;
tp(3,av2);}}}}}}}

/* k1469 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1471,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub162(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1478 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_1480,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1491,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
/* lolevel.scm:183: checkn1 */
t4=((C_word*)((C_word*)t0)[7])[1];
f_1276(t4,t2,((C_word*)t0)[8],C_block_size(((C_word*)t0)[2]),((C_word*)t0)[5]);}
else{
/* lolevel.scm:183: nosizerr */
t4=((C_word*)((C_word*)t0)[9])[1];
f_1264(t4,t3);}}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=lf[17];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1485 in k1478 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1487,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_pointer_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub194(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1489 in k1478 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1491(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1491,c,av);}
/* lolevel.scm:183: checkn1 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1276(t2,((C_word*)t0)[3],t1,C_block_size(((C_word*)t0)[4]),((C_word*)t0)[5]);}

/* k1505 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1507(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_1507,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[2]);
t3=C_i_safe_pointerp(((C_word*)t0)[3]);
t4=(C_truep(t3)?t3:C_locativep(((C_word*)t0)[3]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1533,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[7])){
/* lolevel.scm:189: checkn1 */
t6=((C_word*)((C_word*)t0)[8])[1];
f_1276(t6,t5,((C_word*)t0)[7],t2,((C_word*)t0)[6]);}
else{
/* lolevel.scm:189: checkn1 */
t6=((C_word*)((C_word*)t0)[8])[1];
f_1276(t6,t5,t2,t2,((C_word*)t0)[6]);}}
else{
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1543,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm:190: ##sys#bytevector? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[20]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[20]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=lf[17];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1531 in k1505 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1533,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_pointer_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub178(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1541 in k1505 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_1543,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_truep(((C_word*)t0)[7])?((C_word*)t0)[7]:((C_word*)t0)[8]);
/* lolevel.scm:191: checkn2 */
t4=((C_word*)((C_word*)t0)[9])[1];
f_1292(t4,t2,t3,((C_word*)t0)[8],C_block_size(((C_word*)t0)[2]),((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR);
/* lolevel.scm:133: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=lf[17];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1548 in k1541 in k1505 in move in k1326 in k1323 in k1320 in k1317 in chicken.memory#move-memory! in k977 */
static void C_ccall f_1550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1550,c,av);}
t2=(C_truep(((C_word*)t0)[2])?C_i_foreign_block_argumentp(((C_word*)t0)[2]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[3])?C_i_foreign_block_argumentp(((C_word*)t0)[3]):C_SCHEME_FALSE);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub210(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_fixnum_argumentp(t1),C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]),C_i_foreign_fixnum_argumentp(((C_word*)t0)[6]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#allocate in k977 */
static void C_ccall f_1614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1614,c,av);}
a=C_alloc(5);
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub331(t3,C_i_foreign_fixnum_argumentp(t2));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#free in k977 */
static void C_ccall f_1621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1621,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?stub337(C_SCHEME_UNDEFINED,C_i_foreign_pointer_argumentp(t2)):stub337(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer? in k977 */
static void C_ccall f_1631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1631,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_safe_pointerp(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer-like? in k977 */
static void C_ccall f_1639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1639,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_specialp(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#address->pointer in k977 */
static void C_ccall f_1650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1650,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1654,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:209: ##sys#check-integer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[30];
tp(4,av2);}}

/* k1652 in chicken.memory#address->pointer in k977 */
static void C_ccall f_1654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1654,c,av);}
/* lolevel.scm:210: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory#pointer->address in k977 */
static void C_ccall f_1659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1659,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1663,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:213: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[34];
tp(4,av2);}}

/* k1661 in chicken.memory#pointer->address in k977 */
static void C_ccall f_1663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1663,c,av);}
/* lolevel.scm:214: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory#object->pointer in k977 */
static void C_ccall f_1668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1668,c,av);}
a=C_alloc(5);
if(C_truep(C_blockp(t2))){
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=stub365(t3,t2);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.memory#pointer->object in k977 */
static void C_ccall f_1679(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1679,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1683,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:221: ##sys#check-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[37];
tp(4,av2);}}

/* k1681 in chicken.memory#pointer->object in k977 */
static void C_ccall f_1683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1683,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_pointer_to_object(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory#pointer=? in k977 */
static void C_ccall f_1685(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1685,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1689,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:225: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2=av;
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[39];
tp(4,av2);}}

/* k1687 in chicken.memory#pointer=? in k977 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1689,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1692,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:226: ##sys#check-special */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[39];
tp(4,av2);}}

/* k1690 in k1687 in chicken.memory#pointer=? in k977 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1692,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_pointer_eqp(((C_word*)t2)[3],((C_word*)t2)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer+ in k977 */
static void C_ccall f_1694(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_1694,c,av);}
a=C_alloc(5);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_fix((C_word)sizeof(int) * CHAR_BIT);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=stub380(t4,t5,C_i_foreign_ranged_integer_argumentp(t3,t6));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* chicken.memory#align-to-word in k977 */
static void C_ccall f_1716(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1716,c,av);}
a=C_alloc(8);
if(C_truep(C_i_integerp(t2))){
t3=C_a_i_bytevector(&a,1,C_fix(6));
t4=C_fix((C_word)sizeof(int) * CHAR_BIT);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=stub391(t3,C_i_foreign_ranged_integer_argumentp(t2,t4));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=(C_truep(C_blockp(t2))?C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:239: ##sys#pointer->address */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2=av;
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}
else{
/* lolevel.scm:241: ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[42];
av2[4]=lf[43];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}}}

/* k1744 in chicken.memory#align-to-word in k977 */
static void C_ccall f_1746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_1746,c,av);}
a=C_alloc(8);
t2=C_a_i_bytevector(&a,1,C_fix(6));
t3=C_fix((C_word)sizeof(int) * CHAR_BIT);
/* lolevel.scm:239: ##sys#address->pointer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=stub391(t2,C_i_foreign_ranged_integer_argumentp(t1,t3));
tp(3,av2);}}

/* chicken.memory#tag-pointer in k977 */
static void C_ccall f_1751(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_1751,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1755,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:249: ##sys#make-tagged-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2=av;
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k1753 in chicken.memory#tag-pointer in k977 */
static void C_ccall f_1755(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1755,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1758,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_blockp(((C_word*)t0)[3]))?C_specialp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_copy_pointer(((C_word*)t0)[3],t1);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:252: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t2;
av2[2]=t4;
av2[3]=lf[45];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k1756 in k1753 in chicken.memory#tag-pointer in k977 */
static void C_ccall f_1758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1758,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory#tagged-pointer? in k977 */
static void C_ccall f_1772(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1772,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
if(C_truep(C_blockp(t2))){
if(C_truep(C_taggedpointerp(t2))){
t5=C_i_not(t4);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(t5)?t5:C_i_equalp(t4,C_slot(t2,C_fix(1))));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* chicken.memory#pointer-tag in k977 */
static void C_ccall f_1803(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1803,c,av);}
t3=(C_truep(C_blockp(t2))?C_specialp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(C_taggedpointerp(t2))?C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR);
/* lolevel.scm:264: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=lf[49];
av2[4]=t2;
tp(5,av2);}}}

/* chicken.memory#pointer-u8-set! in k977 */
static void C_ccall f_1827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1827,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s8-set! in k977 */
static void C_ccall f_1830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1830,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s8_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u16-set! in k977 */
static void C_ccall f_1833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1833,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s16-set! in k977 */
static void C_ccall f_1836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1836,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s16_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u32-set! in k977 */
static void C_ccall f_1839(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1839,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s32-set! in k977 */
static void C_ccall f_1842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1842,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-u64-set! in k977 */
static void C_ccall f_1845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1845,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_u64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-s64-set! in k977 */
static void C_ccall f_1848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1848,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_s64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-f32-set! in k977 */
static void C_ccall f_1851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1851,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_f32_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory#pointer-f64-set! in k977 */
static void C_ccall f_1854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1854,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_pointer_f64_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k1857 in k977 */
static void C_ccall f_1859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1859,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[60]+1 /* (set! chicken.memory#pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1863,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2715,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:289: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[51]+1);
av2[4]=lf[158];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1861 in k1857 in k977 */
static void C_ccall f_1863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1863,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[61]+1 /* (set! chicken.memory#pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:295: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[52]+1);
av2[4]=lf[157];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1867,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[62]+1 /* (set! chicken.memory#pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2709,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:301: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[53]+1);
av2[4]=lf[156];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1871,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[63]+1 /* (set! chicken.memory#pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2706,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:307: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[54]+1);
av2[4]=lf[155];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1875,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[64]+1 /* (set! chicken.memory#pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:313: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[55]+1);
av2[4]=lf[154];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1879,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[65]+1 /* (set! chicken.memory#pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2700,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:319: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[56]+1);
av2[4]=lf[153];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1883,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[66]+1 /* (set! chicken.memory#pointer-u64-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:325: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[57]+1);
av2[4]=lf[152];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1887,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[67]+1 /* (set! chicken.memory#pointer-s64-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:331: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[58]+1);
av2[4]=lf[151];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1891,c,av);}
a=C_alloc(6);
t2=C_mutate((C_word*)lf[68]+1 /* (set! chicken.memory#pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2691,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:337: chicken.base#getter-with-setter */
t5=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t4;
av2[3]=*((C_word*)lf[59]+1);
av2[4]=lf[150];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1895(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_1895,c,av);}
a=C_alloc(25);
t2=C_mutate((C_word*)lf[69]+1 /* (set! chicken.memory#pointer-f64-ref ...) */,t1);
t3=C_a_i_list1(&a,1,lf[70]);
t4=C_mutate((C_word*)lf[71]+1 /* (set! chicken.memory#make-pointer-vector ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=t3,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[75]+1 /* (set! chicken.memory#pointer-vector? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1964,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[76]+1 /* (set! chicken.memory#pointer-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1970,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[77]+1 /* (set! chicken.memory#pointer-vector-fill! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2010,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[79]+1 /* (set! chicken.memory#pointer-vector-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2071,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2671,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:398: chicken.base#getter-with-setter */
t11=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t11;
av2[1]=t9;
av2[2]=t10;
av2[3]=C_fast_retrieve(lf[79]);
av2[4]=lf[149];
((C_proc)(void*)(*((C_word*)t11+1)))(5,av2);}}

/* chicken.memory#make-pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1900(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_1900,c,av);}
a=C_alloc(6);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_fixnum_2(t2,lf[72]);
t6=C_i_foreign_fixnum_argumentp(t2);
t7=stub505(C_SCHEME_UNDEFINED,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1919,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:351: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[74]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[74]+1);
av2[1]=t8;
av2[2]=t7;
tp(3,av2);}}

/* k1917 in chicken.memory#make-pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1919,c,av);}
a=C_alloc(6);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_record3(&a,3,lf[73],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1931,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* lolevel.scm:354: ##sys#check-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[72];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1931(2,av2);}}}}

/* k1929 in k1917 in chicken.memory#make-pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_1931,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1936,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t3=(
  f_1936(t2,C_fix(0))
);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_record3(&a,3,lf[73],((C_word*)t0)[2],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop510 in k1929 in k1917 in chicken.memory#make-pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static C_word f_1936(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=C_i_foreign_fixnum_argumentp(t1);
t3=(C_truep(((C_word*)t0)[3])?stub557(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_i_foreign_pointer_argumentp(((C_word*)t0)[3])):stub557(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_SCHEME_FALSE));
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}

/* chicken.memory#pointer-vector? in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1964,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_structurep(t2,lf[73]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.memory#pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_1970,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
C_word t5;
t3=C_u_i_length(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1975,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:365: make-pointer-vector */
t5=C_fast_retrieve(lf[71]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k1973 in chicken.memory#pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1975(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1975,c,av);}
a=C_alloc(8);
t2=C_slot(t1,C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1983,a[2]=t1,a[3]=t2,a[4]=t4,a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_1983(t6,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop525 in k1973 in chicken.memory#pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void f_1983(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1983,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1996,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm:371: ##sys#check-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[73];
tp(4,av2);}}}

/* k1994 in doloop525 in k1973 in chicken.memory#pointer-vector in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_1996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1996,c,av);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[2]);
t3=(C_truep(((C_word*)t0)[3])?stub557(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_i_foreign_pointer_argumentp(((C_word*)t0)[3])):stub557(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_SCHEME_FALSE));
t4=((C_word*)((C_word*)t0)[5])[1];
f_1983(t4,((C_word*)t0)[6],C_u_i_cdr(((C_word*)t0)[7]),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)));}

/* chicken.memory#pointer-vector-fill! in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2010(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2010,c,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[73],lf[78]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2017,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* lolevel.scm:376: ##sys#check-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[78];
tp(4,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2017(2,av2);}}}

/* k2015 in chicken.memory#pointer-vector-fill! in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2017,c,av);}
a=C_alloc(6);
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_slot(((C_word*)t0)[2],C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2028,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_2028(t4,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* doloop538 in k2015 in chicken.memory#pointer-vector-fill! in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static C_word f_2028(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=C_i_foreign_fixnum_argumentp(t1);
t3=(C_truep(((C_word*)t0)[3])?stub557(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_i_foreign_pointer_argumentp(((C_word*)t0)[3])):stub557(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t2,C_SCHEME_FALSE));
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}

/* chicken.memory#pointer-vector-set! in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2071(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2071,c,av);}
a=C_alloc(6);
t5=C_i_check_structure_2(t2,lf[73],lf[80]);
t6=C_slot(t2,C_fix(1));
t7=C_i_check_range(t3,C_fix(0),t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2081,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
/* lolevel.scm:394: ##sys#check-pointer */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[12]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t8;
av2[2]=t4;
av2[3]=lf[81];
tp(4,av2);}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_2081(2,av2);}}}

/* k2079 in chicken.memory#pointer-vector-set! in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2081,c,av);}
t2=C_slot(((C_word*)t0)[2],C_fix(2));
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(((C_word*)t0)[5])?stub557(C_SCHEME_UNDEFINED,t2,t3,C_i_foreign_pointer_argumentp(((C_word*)t0)[5])):stub557(C_SCHEME_UNDEFINED,t2,t3,C_SCHEME_FALSE));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2099(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,4)))){
C_save_and_reclaim((void *)f_2099,c,av);}
a=C_alloc(34);
t2=C_mutate((C_word*)lf[82]+1 /* (set! chicken.memory#pointer-vector-ref ...) */,t1);
t3=C_mutate((C_word*)lf[83]+1 /* (set! chicken.memory#pointer-vector-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2101,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t4=C_a_i_provide(&a,1,lf[85]);
t5=C_mutate((C_word*)lf[86]+1 /* (set! chicken.memory.representation#object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2110,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t6=C_a_i_vector1(&a,1,lf[89]);
t7=C_mutate(&lf[90] /* (set! chicken.memory.representation#xproc-tag ...) */,t6);
t8=C_mutate((C_word*)lf[91]+1 /* (set! chicken.memory.representation#extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2190,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[95]+1 /* (set! chicken.memory.representation#extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2225,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[97]+1 /* (set! chicken.memory.representation#procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2261,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[98]+1 /* (set! chicken.memory.representation#set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2300,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[101]+1 /* (set! chicken.memory.representation#vector-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2316,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[102]+1 /* (set! chicken.memory.representation#block-set! ...) */,*((C_word*)lf[103]+1));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:478: chicken.base#getter-with-setter */
t15=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t15;
av2[1]=t14;
av2[2]=*((C_word*)lf[147]+1);
av2[3]=*((C_word*)lf[103]+1);
av2[4]=lf[148];
((C_proc)(void*)(*((C_word*)t15+1)))(5,av2);}}

/* chicken.memory#pointer-vector-length in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2101(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2101,c,av);}
t3=C_i_check_structure_2(t2,lf[73],lf[84]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.memory.representation#object-copy in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2110(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2110,c,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2116,a[2]=t4,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2116(t6,t1,t2);}

/* copy in chicken.memory.representation#object-copy in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void f_2116(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2116,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_not(C_blockp(t2)))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* lolevel.scm:429: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word av2[3];
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t1;
av2[2]=C_slot(t2,C_fix(1));
tp(3,av2);}}
else{
t3=C_block_size(t2);
t4=(C_truep(C_byteblockp(t2))?C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2146,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:433: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}}}

/* k2144 in copy in chicken.memory.representation#object-copy in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2146(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_2146,c,av);}
a=C_alloc(13);
t2=C_copy_block(((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[2]))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(C_truep(C_specialp(((C_word*)t0)[2]))?C_fix(1):C_fix(0));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2158(t8,t3,t4);}}

/* k2147 in k2144 in copy in chicken.memory.representation#object-copy in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2149,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* doloop647 in k2144 in copy in chicken.memory.representation#object-copy in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void f_2158(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_2158,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:437: copy */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2116(t4,t3,C_slot(((C_word*)t0)[3],t2));}}

/* k2177 in doloop647 in k2144 in copy in chicken.memory.representation#object-copy in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2179,c,av);}
t2=C_i_setslot(((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=((C_word*)((C_word*)t0)[4])[1];
f_2158(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}

/* chicken.memory.representation#extend-procedure in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2190(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2190,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2194,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:447: ##sys#check-closure */
t5=C_fast_retrieve(lf[93]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[94];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2192 in chicken.memory.representation#extend-procedure in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2194,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2199,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2215,a[2]=((C_word*)t0)[2],a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:448: ##sys#decorate-lambda */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* a2198 in k2192 in chicken.memory.representation#extend-procedure in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2199(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2199,c,av);}
t3=C_i_pairp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_eqp(C_retrieve2(lf[90],C_text("chicken.memory.representation#xproc-tag")),C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a2214 in k2192 in chicken.memory.representation#extend-procedure in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2215(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2215,c,av);}
a=C_alloc(3);
t4=C_a_i_cons(&a,2,C_retrieve2(lf[90],C_text("chicken.memory.representation#xproc-tag")),((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.memory.representation#extended-procedure? in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2225(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2225,c,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2259,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2242,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:454: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[96]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a2241 in chicken.memory.representation#extended-procedure? in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2242(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2242,c,av);}
t3=C_i_pairp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_eqp(C_retrieve2(lf[90],C_text("chicken.memory.representation#xproc-tag")),C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2257 in chicken.memory.representation#extended-procedure? in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2259,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#procedure-data in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2261(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2261,c,av);}
a=C_alloc(6);
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2292,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2275,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:454: ##sys#lambda-decoration */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[96]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[96]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
tp(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a2274 in chicken.memory.representation#procedure-data in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2275(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2275,c,av);}
t3=C_i_pairp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_eqp(C_retrieve2(lf[90],C_text("chicken.memory.representation#xproc-tag")),C_slot(t2,C_fix(0))):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2290 in chicken.memory.representation#procedure-data in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2292,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#set-procedure-data! in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2300(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2300,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2314,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:467: extend-procedure */
t5=C_fast_retrieve(lf[91]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2312 in chicken.memory.representation#set-procedure-data! in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2314,c,av);}
t2=C_eqp(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* lolevel.scm:468: ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[6];
av2[3]=lf[99];
av2[4]=lf[100];
av2[5]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* chicken.memory.representation#vector-like? in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2316(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2316,c,av);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_i_not(t3):C_i_not(C_byteblockp(t2)));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2337(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,5)))){
C_save_and_reclaim((void *)f_2337,c,av);}
a=C_alloc(27);
t2=C_mutate((C_word*)lf[104]+1 /* (set! chicken.memory.representation#block-ref ...) */,t1);
t3=C_mutate((C_word*)lf[105]+1 /* (set! chicken.memory.representation#number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2339,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[107]+1 /* (set! chicken.memory.representation#number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2348,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[110]+1 /* (set! chicken.memory.representation#make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2399,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[113]+1 /* (set! chicken.memory.representation#record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[114]+1 /* (set! chicken.memory.representation#record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2444,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[116]+1 /* (set! chicken.memory.representation#record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2453,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[118]+1 /* (set! chicken.memory.representation#record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2466,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2647,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:530: chicken.base#getter-with-setter */
t12=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t12;
av2[1]=t10;
av2[2]=t11;
av2[3]=C_fast_retrieve(lf[118]);
av2[4]=lf[146];
((C_proc)(void*)(*((C_word*)t12+1)))(5,av2);}}

/* chicken.memory.representation#number-of-slots in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2339,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2343,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:482: ##sys#check-generic-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[106];
tp(4,av2);}}

/* k2341 in chicken.memory.representation#number-of-slots in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2343,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_block_size(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#number-of-bytes in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2348,c,av);}
if(C_truep(C_i_not(C_blockp(t2)))){
/* lolevel.scm:487: ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[6];
av2[3]=lf[108];
av2[4]=lf[109];
av2[5]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
if(C_truep(C_stringp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fixnum_difference(C_block_size(t3),C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_symbolp(t2))){
t3=C_slot(t2,C_fix(1));
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_fixnum_difference(C_block_size(t3),C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_byteblockp(t2))?C_block_size(t2):C_bytes(C_block_size(t2)));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* chicken.memory.representation#make-record-instance in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_2399,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[111]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[112]+1);
av2[3]=t2;
av2[4]=t3;
C_apply(5,av2);}}

/* chicken.memory.representation#record-instance? in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2408(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2408,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=(C_truep(C_blockp(t2))?C_structurep(t2):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_not(t4);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(C_truep(t6)?t6:C_eqp(t4,C_slot(t2,C_fix(0))));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* chicken.memory.representation#record-instance-type in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2444,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:517: ##sys#check-generic-structure */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[115];
tp(4,av2);}}

/* k2446 in chicken.memory.representation#record-instance-type in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2448,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(0));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#record-instance-length in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2453,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2457,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:521: ##sys#check-generic-structure */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[117];
tp(4,av2);}}

/* k2455 in chicken.memory.representation#record-instance-length in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2457,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fixnum_difference(C_block_size(((C_word*)t0)[3]),C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.memory.representation#record-instance-slot-set! in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2466(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2466,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2470,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm:525: ##sys#check-generic-structure */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t5;
av2[2]=t2;
av2[3]=lf[119];
tp(4,av2);}}

/* k2468 in chicken.memory.representation#record-instance-slot-set! in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2470(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2470,c,av);}
t2=C_block_size(((C_word*)t0)[2]);
t3=C_fixnum_difference(t2,C_fix(1));
t4=C_i_check_range_2(((C_word*)t0)[3],C_fix(0),t3,lf[119]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_setslot(((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2492(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,4)))){
C_save_and_reclaim((void *)f_2492,c,av);}
a=C_alloc(35);
t2=C_mutate((C_word*)lf[120]+1 /* (set! chicken.memory.representation#record-instance-slot ...) */,t1);
t3=C_mutate((C_word*)lf[121]+1 /* (set! chicken.memory.representation#record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2494,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[123]+1 /* (set! chicken.memory.representation#object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2532,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[126]+1 /* (set! chicken.memory.representation#mutate-procedure! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[128]+1 /* (set! chicken.memory.representation#number-vector-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2572,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t7=C_a_i_provide(&a,1,lf[132]);
t8=C_mutate((C_word*)lf[133]+1 /* (set! chicken.locative#make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2593,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[136]+1 /* (set! chicken.locative#make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2609,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[138]+1 /* (set! chicken.locative#locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:613: chicken.base#getter-with-setter */
t13=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t13;
av2[1]=t11;
av2[2]=t12;
av2[3]=*((C_word*)lf[138]+1);
av2[4]=lf[144];
((C_proc)(void*)(*((C_word*)t13+1)))(5,av2);}}

/* chicken.memory.representation#record->vector in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2494(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2494,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2498,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:539: ##sys#check-generic-structure */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[122];
tp(4,av2);}}

/* k2496 in chicken.memory.representation#record->vector in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2498(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2498,c,av);}
a=C_alloc(3);
t2=C_block_size(((C_word*)t0)[3]);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2504,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:541: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k2502 in k2496 in chicken.memory.representation#record->vector in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2504,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2509,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_2509(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* doloop753 in k2502 in k2496 in chicken.memory.representation#record->vector in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static C_word f_2509(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(((C_word*)t0)[3]);}
else{
t2=C_slot(((C_word*)t0)[4],t1);
t3=C_i_setslot(((C_word*)t0)[3],t1,t2);
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}

/* chicken.memory.representation#object-become! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2532,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2536,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:550: ##sys#check-become-alist */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[125];
tp(4,av2);}}

/* k2534 in chicken.memory.representation#object-become! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2536,c,av);}
/* lolevel.scm:551: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[124]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[124]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* chicken.memory.representation#mutate-procedure! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2541(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2541,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2545,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:554: ##sys#check-closure */
t5=C_fast_retrieve(lf[93]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[127];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2543 in chicken.memory.representation#mutate-procedure! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_2545,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2548,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:555: ##sys#check-closure */
t3=C_fast_retrieve(lf[93]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=lf[127];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2546 in k2543 in chicken.memory.representation#mutate-procedure! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2548(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2548,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_block_size(((C_word*)t2)[2]);
t4=C_words(t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2555,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:558: ##sys#make-vector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[88]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[88]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}

/* k2553 in k2546 in k2543 in chicken.memory.representation#mutate-procedure! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2555(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_2555,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_copy_block(((C_word*)t2)[2],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2558,a[2]=((C_word*)t2)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2570,a[2]=((C_word*)t2)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:559: proc */
t6=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k2556 in k2553 in k2546 in k2543 in chicken.memory.representation#mutate-procedure! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2558,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2568 in k2553 in k2546 in k2543 in chicken.memory.representation#mutate-procedure! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2570,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
/* lolevel.scm:559: ##sys#become! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[124]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[124]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
tp(3,av2);}}

/* chicken.memory.representation#number-vector-data in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2572(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2572,c,av);}
a=C_alloc(4);
t3=(C_truep(C_blockp(t2))?C_bytevectorp(t2):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2585,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm:569: ##sys#srfi-4-vector? */
t5=C_fast_retrieve(lf[131]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k2583 in chicken.memory.representation#number-vector-data in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2585,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[3],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* lolevel.scm:570: ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[6];
av2[3]=lf[129];
av2[4]=lf[130];
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* chicken.locative#make-locative in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2593,c,av);}
if(C_truep(C_rest_nullp(c,3))){
/* lolevel.scm:605: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word av2[6];
av2[0]=*((C_word*)lf[134]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[135];
tp(6,av2);}}
else{
/* lolevel.scm:605: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word av2[6];
av2[0]=*((C_word*)lf[134]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[135];
tp(6,av2);}}}

/* chicken.locative#make-weak-locative in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2609,c,av);}
if(C_truep(C_rest_nullp(c,3))){
/* lolevel.scm:608: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word av2[6];
av2[0]=*((C_word*)lf[134]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[137];
tp(6,av2);}}
else{
/* lolevel.scm:608: ##sys#make-locative */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word av2[6];
av2[0]=*((C_word*)lf[134]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=C_SCHEME_TRUE;
av2[5]=lf[137];
tp(6,av2);}}}

/* chicken.locative#locative-set! in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2625,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_locative_set(t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2628 in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2630(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2630,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[139]+1 /* (set! chicken.locative#locative-ref ...) */,t1);
t3=C_mutate((C_word*)lf[140]+1 /* (set! chicken.locative#locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2632,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[141]+1 /* (set! chicken.locative#locative-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[142]+1 /* (set! chicken.locative#locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2638,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.locative#locative->object in k2628 in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2632,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_locative_to_object(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.locative#locative-index in k2628 in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2635(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2635,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_locative_index(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.locative#locative? in k2628 in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2638,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(C_blockp(t2))?C_locativep(t2):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2643 in k2490 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2644,c,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_locative_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2646 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2647(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2647,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2651,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm:532: ##sys#check-generic-structure */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[8]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=lf[145];
tp(4,av2);}}

/* k2649 in a2646 in k2335 in k2097 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2651(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2651,c,av);}
t2=C_block_size(((C_word*)t0)[2]);
t3=C_fixnum_difference(t2,C_fix(1));
t4=C_i_check_range_2(((C_word*)t0)[3],C_fix(0),t3,lf[145]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_slot(((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a2670 in k1893 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2671(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,1)))){
C_save_and_reclaim((void *)f_2671,c,av);}
a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[73],lf[80]);
t5=C_slot(t2,C_fix(1));
t6=C_i_check_range(t3,C_fix(0),t5);
t7=C_slot(t2,C_fix(2));
t8=C_a_i_bytevector(&a,1,C_fix(3));
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=stub548(t8,t7,C_i_foreign_fixnum_argumentp(t3));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* a2690 in k1889 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2691(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2691,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2693 in k1885 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,1)))){
C_save_and_reclaim((void *)f_2694,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_f32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2696 in k1881 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2697,c,av);}
a=C_alloc(7);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_s64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2699 in k1877 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,1)))){
C_save_and_reclaim((void *)f_2700,c,av);}
a=C_alloc(7);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_u64_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2702 in k1873 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2703,c,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_s32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2705 in k1869 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2706,c,av);}
a=C_alloc(6);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_u_i_pointer_u32_ref(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2708 in k1865 in k1861 in k1857 in k977 */
static void C_ccall f_2709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2709,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_s16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2711 in k1861 in k1857 in k977 */
static void C_ccall f_2712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2712,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_u16_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2714 in k1857 in k977 */
static void C_ccall f_2715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2715,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_s8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a2717 in k977 */
static void C_ccall f_2718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2718,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_u_i_pointer_u8_ref(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k977 */
static void C_ccall f_979(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(97,c,4)))){
C_save_and_reclaim((void *)f_979,c,av);}
a=C_alloc(97);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_981,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#check-become-alist ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_999,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1045,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[10]+1 /* (set! ##sys#check-generic-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1070,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[12]+1 /* (set! ##sys#check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1102,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t7=lf[14];
t8=C_mutate((C_word*)lf[15]+1 /* (set! chicken.memory#move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1243,a[2]=t7,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[23]+1 /* (set! chicken.memory#allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1614,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[24]+1 /* (set! chicken.memory#free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1621,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[25]+1 /* (set! chicken.memory#pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1631,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[26]+1 /* (set! chicken.memory#pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1639,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[27]+1 /* (set! chicken.memory#address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1650,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[31]+1 /* (set! chicken.memory#pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1659,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[35]+1 /* (set! chicken.memory#object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1668,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[36]+1 /* (set! chicken.memory#pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1679,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[38]+1 /* (set! chicken.memory#pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1685,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[40]+1 /* (set! chicken.memory#pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1694,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[41]+1 /* (set! chicken.memory#align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1716,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[44]+1 /* (set! chicken.memory#tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1751,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[47]+1 /* (set! chicken.memory#tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1772,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[48]+1 /* (set! chicken.memory#pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1803,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[50]+1 /* (set! chicken.memory#pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1827,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[51]+1 /* (set! chicken.memory#pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1830,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[52]+1 /* (set! chicken.memory#pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1833,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[53]+1 /* (set! chicken.memory#pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1836,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[54]+1 /* (set! chicken.memory#pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1839,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[55]+1 /* (set! chicken.memory#pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1842,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[56]+1 /* (set! chicken.memory#pointer-u64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1845,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[57]+1 /* (set! chicken.memory#pointer-s64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1848,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[58]+1 /* (set! chicken.memory#pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1851,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[59]+1 /* (set! chicken.memory#pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1854,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2718,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm:283: chicken.base#getter-with-setter */
t35=*((C_word*)lf[143]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t35;
av2[1]=t33;
av2[2]=t34;
av2[3]=*((C_word*)lf[50]+1);
av2[4]=lf[159];
((C_proc)(void*)(*((C_word*)t35+1)))(5,av2);}}

/* ##sys#check-block in k977 */
static void C_ccall f_981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,4)))){
C_save_and_reclaim((void*)f_981,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR);
if(C_truep(C_i_pairp(t3))){
/* lolevel.scm:84: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word av2[5];
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_get_rest_arg(c,3,av,3,t0);
av2[4]=t2;
tp(5,av2);}}
else{
/* lolevel.scm:84: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[3]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[3]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=C_SCHEME_FALSE;
av2[4]=t2;
tp(5,av2);}}}}

/* ##sys#check-become-alist in k977 */
static void C_ccall f_999(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_999,c,av);}
a=C_alloc(8);
t4=C_i_check_list_2(t2,t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1008,a[2]=t3,a[3]=t6,a[4]=t2,a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1008(t8,t1,t2);}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_lolevel_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("lolevel"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_lolevel_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1034))){
C_save(t1);
C_rereclaim2(1034*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,160);
lf[0]=C_h_intern(&lf[0],7, C_text("lolevel"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.memory#"));
lf[2]=C_h_intern(&lf[2],17, C_text("##sys#check-block"));
lf[3]=C_h_intern(&lf[3],16, C_text("##sys#error-hook"));
lf[4]=C_h_intern(&lf[4],24, C_text("##sys#check-become-alist"));
lf[5]=C_h_intern(&lf[5],17, C_text("##sys#signal-hook"));
lf[6]=C_h_intern_kw(&lf[6],10, C_text("type-error"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\063\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\156\040\141\055\154\151\163\164\040\157\146\040\142\154\157\143\153\040\157\142\152\145\143\164\163\000"));
lf[8]=C_h_intern(&lf[8],29, C_text("##sys#check-generic-structure"));
lf[9]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\163\164\162\165\143\164\165\162\145\000"));
lf[10]=C_h_intern(&lf[10],26, C_text("##sys#check-generic-vector"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\166\145\143\164\157\162\055\154\151\153\145\040\157\142\152\145\143\164\000"));
lf[12]=C_h_intern(&lf[12],19, C_text("##sys#check-pointer"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\160\157\151\156\164\145\162\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004\001\155\155\141\160\376\003\000\000\002\376\001\000\000\010\001\165\070\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\010\001\163\070\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\011\001\146\066\064\166\145\143\164\157\162\376\377\016"));
lf[15]=C_h_intern(&lf[15],27, C_text("chicken.memory#move-memory!"));
lf[16]=C_h_intern(&lf[16],11, C_text("##sys#error"));
lf[17]=C_h_intern(&lf[17],12, C_text("move-memory!"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\156\145\145\144\040\156\165\155\142\145\162\040\157\146\040\142\171\164\145\163\040\164\157\040\155\157\166\145\000"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\156\165\155\142\145\162\040\157\146\040\142\171\164\145\163\040\164\157\040\155\157\166\145\040\164\157\157\040\154\141\162\147\145\000"));
lf[20]=C_h_intern(&lf[20],17, C_text("##sys#bytevector?"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\156\145\147\141\164\151\166\145\040\144\145\163\164\151\156\141\164\151\157\156\040\157\146\146\163\145\164\000"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\156\145\147\141\164\151\166\145\040\163\157\165\162\143\145\040\157\146\146\163\145\164\000"));
lf[23]=C_h_intern(&lf[23],23, C_text("chicken.memory#allocate"));
lf[24]=C_h_intern(&lf[24],19, C_text("chicken.memory#free"));
lf[25]=C_h_intern(&lf[25],23, C_text("chicken.memory#pointer?"));
lf[26]=C_h_intern(&lf[26],28, C_text("chicken.memory#pointer-like?"));
lf[27]=C_h_intern(&lf[27],31, C_text("chicken.memory#address->pointer"));
lf[28]=C_h_intern(&lf[28],22, C_text("##sys#address->pointer"));
lf[29]=C_h_intern(&lf[29],19, C_text("##sys#check-integer"));
lf[30]=C_h_intern(&lf[30],16, C_text("address->pointer"));
lf[31]=C_h_intern(&lf[31],31, C_text("chicken.memory#pointer->address"));
lf[32]=C_h_intern(&lf[32],22, C_text("##sys#pointer->address"));
lf[33]=C_h_intern(&lf[33],19, C_text("##sys#check-special"));
lf[34]=C_h_intern(&lf[34],16, C_text("pointer->address"));
lf[35]=C_h_intern(&lf[35],30, C_text("chicken.memory#object->pointer"));
lf[36]=C_h_intern(&lf[36],30, C_text("chicken.memory#pointer->object"));
lf[37]=C_h_intern(&lf[37],15, C_text("pointer->object"));
lf[38]=C_h_intern(&lf[38],24, C_text("chicken.memory#pointer=?"));
lf[39]=C_h_intern(&lf[39],9, C_text("pointer=?"));
lf[40]=C_h_intern(&lf[40],23, C_text("chicken.memory#pointer+"));
lf[41]=C_h_intern(&lf[41],28, C_text("chicken.memory#align-to-word"));
lf[42]=C_h_intern(&lf[42],13, C_text("align-to-word"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\055\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\160\157\151\156\164\145\162\040\157\162\040\151\156\164\145\147\145\162\000"));
lf[44]=C_h_intern(&lf[44],26, C_text("chicken.memory#tag-pointer"));
lf[45]=C_h_intern(&lf[45],11, C_text("tag-pointer"));
lf[46]=C_h_intern(&lf[46],25, C_text("##sys#make-tagged-pointer"));
lf[47]=C_h_intern(&lf[47],30, C_text("chicken.memory#tagged-pointer?"));
lf[48]=C_h_intern(&lf[48],26, C_text("chicken.memory#pointer-tag"));
lf[49]=C_h_intern(&lf[49],11, C_text("pointer-tag"));
lf[50]=C_h_intern(&lf[50],30, C_text("chicken.memory#pointer-u8-set!"));
lf[51]=C_h_intern(&lf[51],30, C_text("chicken.memory#pointer-s8-set!"));
lf[52]=C_h_intern(&lf[52],31, C_text("chicken.memory#pointer-u16-set!"));
lf[53]=C_h_intern(&lf[53],31, C_text("chicken.memory#pointer-s16-set!"));
lf[54]=C_h_intern(&lf[54],31, C_text("chicken.memory#pointer-u32-set!"));
lf[55]=C_h_intern(&lf[55],31, C_text("chicken.memory#pointer-s32-set!"));
lf[56]=C_h_intern(&lf[56],31, C_text("chicken.memory#pointer-u64-set!"));
lf[57]=C_h_intern(&lf[57],31, C_text("chicken.memory#pointer-s64-set!"));
lf[58]=C_h_intern(&lf[58],31, C_text("chicken.memory#pointer-f32-set!"));
lf[59]=C_h_intern(&lf[59],31, C_text("chicken.memory#pointer-f64-set!"));
lf[60]=C_h_intern(&lf[60],29, C_text("chicken.memory#pointer-u8-ref"));
lf[61]=C_h_intern(&lf[61],29, C_text("chicken.memory#pointer-s8-ref"));
lf[62]=C_h_intern(&lf[62],30, C_text("chicken.memory#pointer-u16-ref"));
lf[63]=C_h_intern(&lf[63],30, C_text("chicken.memory#pointer-s16-ref"));
lf[64]=C_h_intern(&lf[64],30, C_text("chicken.memory#pointer-u32-ref"));
lf[65]=C_h_intern(&lf[65],30, C_text("chicken.memory#pointer-s32-ref"));
lf[66]=C_h_intern(&lf[66],30, C_text("chicken.memory#pointer-u64-ref"));
lf[67]=C_h_intern(&lf[67],30, C_text("chicken.memory#pointer-s64-ref"));
lf[68]=C_h_intern(&lf[68],30, C_text("chicken.memory#pointer-f32-ref"));
lf[69]=C_h_intern(&lf[69],30, C_text("chicken.memory#pointer-f64-ref"));
lf[70]=C_h_intern(&lf[70],5, C_text("unset"));
lf[71]=C_h_intern(&lf[71],34, C_text("chicken.memory#make-pointer-vector"));
lf[72]=C_h_intern(&lf[72],19, C_text("make-pointer-vector"));
lf[73]=C_h_intern(&lf[73],14, C_text("pointer-vector"));
lf[74]=C_h_intern(&lf[74],21, C_text("##sys#make-bytevector"));
lf[75]=C_h_intern(&lf[75],30, C_text("chicken.memory#pointer-vector?"));
lf[76]=C_h_intern(&lf[76],29, C_text("chicken.memory#pointer-vector"));
lf[77]=C_h_intern(&lf[77],35, C_text("chicken.memory#pointer-vector-fill!"));
lf[78]=C_h_intern(&lf[78],20, C_text("pointer-vector-fill!"));
lf[79]=C_h_intern(&lf[79],34, C_text("chicken.memory#pointer-vector-set!"));
lf[80]=C_h_intern(&lf[80],18, C_text("pointer-vector-ref"));
lf[81]=C_h_intern(&lf[81],19, C_text("pointer-vector-set!"));
lf[82]=C_h_intern(&lf[82],33, C_text("chicken.memory#pointer-vector-ref"));
lf[83]=C_h_intern(&lf[83],36, C_text("chicken.memory#pointer-vector-length"));
lf[84]=C_h_intern(&lf[84],21, C_text("pointer-vector-length"));
lf[85]=C_h_intern(&lf[85],30, C_text("chicken.memory.representation#"));
lf[86]=C_h_intern(&lf[86],41, C_text("chicken.memory.representation#object-copy"));
lf[87]=C_h_intern(&lf[87],20, C_text("##sys#string->symbol"));
lf[88]=C_h_intern(&lf[88],17, C_text("##sys#make-vector"));
lf[89]=C_h_intern(&lf[89],8, C_text("extended"));
lf[91]=C_h_intern(&lf[91],46, C_text("chicken.memory.representation#extend-procedure"));
lf[92]=C_h_intern(&lf[92],21, C_text("##sys#decorate-lambda"));
lf[93]=C_h_intern(&lf[93],19, C_text("##sys#check-closure"));
lf[94]=C_h_intern(&lf[94],16, C_text("extend-procedure"));
lf[95]=C_h_intern(&lf[95],49, C_text("chicken.memory.representation#extended-procedure?"));
lf[96]=C_h_intern(&lf[96],23, C_text("##sys#lambda-decoration"));
lf[97]=C_h_intern(&lf[97],44, C_text("chicken.memory.representation#procedure-data"));
lf[98]=C_h_intern(&lf[98],49, C_text("chicken.memory.representation#set-procedure-data!"));
lf[99]=C_h_intern(&lf[99],19, C_text("set-procedure-data!"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\156\040\145\170\164\145\156\144\145\144\040\160\162\157\143\145\144\165\162\145\000"));
lf[101]=C_h_intern(&lf[101],42, C_text("chicken.memory.representation#vector-like?"));
lf[102]=C_h_intern(&lf[102],40, C_text("chicken.memory.representation#block-set!"));
lf[103]=C_h_intern(&lf[103],16, C_text("##sys#block-set!"));
lf[104]=C_h_intern(&lf[104],39, C_text("chicken.memory.representation#block-ref"));
lf[105]=C_h_intern(&lf[105],45, C_text("chicken.memory.representation#number-of-slots"));
lf[106]=C_h_intern(&lf[106],15, C_text("number-of-slots"));
lf[107]=C_h_intern(&lf[107],45, C_text("chicken.memory.representation#number-of-bytes"));
lf[108]=C_h_intern(&lf[108],15, C_text("number-of-bytes"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\063\143\141\156\156\157\164\040\143\157\155\160\165\164\145\040\156\165\155\142\145\162\040\157\146\040\142\171\164\145\163\040\157\146\040\151\155\155\145\144\151\141\164\145\040\157\142\152\145\143\164\000"));
lf[110]=C_h_intern(&lf[110],50, C_text("chicken.memory.representation#make-record-instance"));
lf[111]=C_h_intern(&lf[111],20, C_text("make-record-instance"));
lf[112]=C_h_intern(&lf[112],20, C_text("##sys#make-structure"));
lf[113]=C_h_intern(&lf[113],46, C_text("chicken.memory.representation#record-instance?"));
lf[114]=C_h_intern(&lf[114],50, C_text("chicken.memory.representation#record-instance-type"));
lf[115]=C_h_intern(&lf[115],20, C_text("record-instance-type"));
lf[116]=C_h_intern(&lf[116],52, C_text("chicken.memory.representation#record-instance-length"));
lf[117]=C_h_intern(&lf[117],22, C_text("record-instance-length"));
lf[118]=C_h_intern(&lf[118],55, C_text("chicken.memory.representation#record-instance-slot-set!"));
lf[119]=C_h_intern(&lf[119],25, C_text("record-instance-slot-set!"));
lf[120]=C_h_intern(&lf[120],50, C_text("chicken.memory.representation#record-instance-slot"));
lf[121]=C_h_intern(&lf[121],44, C_text("chicken.memory.representation#record->vector"));
lf[122]=C_h_intern(&lf[122],14, C_text("record->vector"));
lf[123]=C_h_intern(&lf[123],44, C_text("chicken.memory.representation#object-become!"));
lf[124]=C_h_intern(&lf[124],13, C_text("##sys#become!"));
lf[125]=C_h_intern(&lf[125],14, C_text("object-become!"));
lf[126]=C_h_intern(&lf[126],47, C_text("chicken.memory.representation#mutate-procedure!"));
lf[127]=C_h_intern(&lf[127],17, C_text("mutate-procedure!"));
lf[128]=C_h_intern(&lf[128],48, C_text("chicken.memory.representation#number-vector-data"));
lf[129]=C_h_intern(&lf[129],18, C_text("number-vector-data"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\040\055\040\156\157\164\040\141\040\156\165\155\145\162\151\143\040\166\145\143\164\157\162\000"));
lf[131]=C_h_intern(&lf[131],20, C_text("##sys#srfi-4-vector?"));
lf[132]=C_h_intern(&lf[132],17, C_text("chicken.locative#"));
lf[133]=C_h_intern(&lf[133],30, C_text("chicken.locative#make-locative"));
lf[134]=C_h_intern(&lf[134],19, C_text("##sys#make-locative"));
lf[135]=C_h_intern(&lf[135],13, C_text("make-locative"));
lf[136]=C_h_intern(&lf[136],35, C_text("chicken.locative#make-weak-locative"));
lf[137]=C_h_intern(&lf[137],18, C_text("make-weak-locative"));
lf[138]=C_h_intern(&lf[138],30, C_text("chicken.locative#locative-set!"));
lf[139]=C_h_intern(&lf[139],29, C_text("chicken.locative#locative-ref"));
lf[140]=C_h_intern(&lf[140],33, C_text("chicken.locative#locative->object"));
lf[141]=C_h_intern(&lf[141],31, C_text("chicken.locative#locative-index"));
lf[142]=C_h_intern(&lf[142],26, C_text("chicken.locative#locative?"));
lf[143]=C_h_intern(&lf[143],31, C_text("chicken.base#getter-with-setter"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\050\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\162\145\146\040\154\157\143\051\000"));
lf[145]=C_h_intern(&lf[145],20, C_text("record-instance-slot"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\071\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\163\154\157\164\040\170\040\151\051\000"));
lf[147]=C_h_intern(&lf[147],15, C_text("##sys#block-ref"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\142\154\157\143\153\055\162\145\146\040\170\040\151\051\000"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\162\145\146\040\160\166\040\151\051\000"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\066\064\055\162\145\146\040\160\051\000"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\063\062\055\162\145\146\040\160\051\000"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\066\064\055\162\145\146\040\160\051\000"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\066\064\055\162\145\146\040\160\051\000"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\063\062\055\162\145\146\040\160\051\000"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\063\062\055\162\145\146\040\160\051\000"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\061\066\055\162\145\146\040\160\051\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\061\066\055\162\145\146\040\160\051\000"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\070\055\162\145\146\040\160\051\000"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\050\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\070\055\162\145\146\040\160\051\000"));
C_register_lf2(lf,160,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_979,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[155] = {
{C_text("f_1008:lolevel_2escm"),(void*)f_1008},
{C_text("f_1028:lolevel_2escm"),(void*)f_1028},
{C_text("f_1031:lolevel_2escm"),(void*)f_1031},
{C_text("f_1045:lolevel_2escm"),(void*)f_1045},
{C_text("f_1070:lolevel_2escm"),(void*)f_1070},
{C_text("f_1089:lolevel_2escm"),(void*)f_1089},
{C_text("f_1102:lolevel_2escm"),(void*)f_1102},
{C_text("f_1243:lolevel_2escm"),(void*)f_1243},
{C_text("f_1264:lolevel_2escm"),(void*)f_1264},
{C_text("f_1270:lolevel_2escm"),(void*)f_1270},
{C_text("f_1276:lolevel_2escm"),(void*)f_1276},
{C_text("f_1292:lolevel_2escm"),(void*)f_1292},
{C_text("f_1319:lolevel_2escm"),(void*)f_1319},
{C_text("f_1322:lolevel_2escm"),(void*)f_1322},
{C_text("f_1325:lolevel_2escm"),(void*)f_1325},
{C_text("f_1328:lolevel_2escm"),(void*)f_1328},
{C_text("f_1333:lolevel_2escm"),(void*)f_1333},
{C_text("f_1471:lolevel_2escm"),(void*)f_1471},
{C_text("f_1480:lolevel_2escm"),(void*)f_1480},
{C_text("f_1487:lolevel_2escm"),(void*)f_1487},
{C_text("f_1491:lolevel_2escm"),(void*)f_1491},
{C_text("f_1507:lolevel_2escm"),(void*)f_1507},
{C_text("f_1533:lolevel_2escm"),(void*)f_1533},
{C_text("f_1543:lolevel_2escm"),(void*)f_1543},
{C_text("f_1550:lolevel_2escm"),(void*)f_1550},
{C_text("f_1614:lolevel_2escm"),(void*)f_1614},
{C_text("f_1621:lolevel_2escm"),(void*)f_1621},
{C_text("f_1631:lolevel_2escm"),(void*)f_1631},
{C_text("f_1639:lolevel_2escm"),(void*)f_1639},
{C_text("f_1650:lolevel_2escm"),(void*)f_1650},
{C_text("f_1654:lolevel_2escm"),(void*)f_1654},
{C_text("f_1659:lolevel_2escm"),(void*)f_1659},
{C_text("f_1663:lolevel_2escm"),(void*)f_1663},
{C_text("f_1668:lolevel_2escm"),(void*)f_1668},
{C_text("f_1679:lolevel_2escm"),(void*)f_1679},
{C_text("f_1683:lolevel_2escm"),(void*)f_1683},
{C_text("f_1685:lolevel_2escm"),(void*)f_1685},
{C_text("f_1689:lolevel_2escm"),(void*)f_1689},
{C_text("f_1692:lolevel_2escm"),(void*)f_1692},
{C_text("f_1694:lolevel_2escm"),(void*)f_1694},
{C_text("f_1716:lolevel_2escm"),(void*)f_1716},
{C_text("f_1746:lolevel_2escm"),(void*)f_1746},
{C_text("f_1751:lolevel_2escm"),(void*)f_1751},
{C_text("f_1755:lolevel_2escm"),(void*)f_1755},
{C_text("f_1758:lolevel_2escm"),(void*)f_1758},
{C_text("f_1772:lolevel_2escm"),(void*)f_1772},
{C_text("f_1803:lolevel_2escm"),(void*)f_1803},
{C_text("f_1827:lolevel_2escm"),(void*)f_1827},
{C_text("f_1830:lolevel_2escm"),(void*)f_1830},
{C_text("f_1833:lolevel_2escm"),(void*)f_1833},
{C_text("f_1836:lolevel_2escm"),(void*)f_1836},
{C_text("f_1839:lolevel_2escm"),(void*)f_1839},
{C_text("f_1842:lolevel_2escm"),(void*)f_1842},
{C_text("f_1845:lolevel_2escm"),(void*)f_1845},
{C_text("f_1848:lolevel_2escm"),(void*)f_1848},
{C_text("f_1851:lolevel_2escm"),(void*)f_1851},
{C_text("f_1854:lolevel_2escm"),(void*)f_1854},
{C_text("f_1859:lolevel_2escm"),(void*)f_1859},
{C_text("f_1863:lolevel_2escm"),(void*)f_1863},
{C_text("f_1867:lolevel_2escm"),(void*)f_1867},
{C_text("f_1871:lolevel_2escm"),(void*)f_1871},
{C_text("f_1875:lolevel_2escm"),(void*)f_1875},
{C_text("f_1879:lolevel_2escm"),(void*)f_1879},
{C_text("f_1883:lolevel_2escm"),(void*)f_1883},
{C_text("f_1887:lolevel_2escm"),(void*)f_1887},
{C_text("f_1891:lolevel_2escm"),(void*)f_1891},
{C_text("f_1895:lolevel_2escm"),(void*)f_1895},
{C_text("f_1900:lolevel_2escm"),(void*)f_1900},
{C_text("f_1919:lolevel_2escm"),(void*)f_1919},
{C_text("f_1931:lolevel_2escm"),(void*)f_1931},
{C_text("f_1936:lolevel_2escm"),(void*)f_1936},
{C_text("f_1964:lolevel_2escm"),(void*)f_1964},
{C_text("f_1970:lolevel_2escm"),(void*)f_1970},
{C_text("f_1975:lolevel_2escm"),(void*)f_1975},
{C_text("f_1983:lolevel_2escm"),(void*)f_1983},
{C_text("f_1996:lolevel_2escm"),(void*)f_1996},
{C_text("f_2010:lolevel_2escm"),(void*)f_2010},
{C_text("f_2017:lolevel_2escm"),(void*)f_2017},
{C_text("f_2028:lolevel_2escm"),(void*)f_2028},
{C_text("f_2071:lolevel_2escm"),(void*)f_2071},
{C_text("f_2081:lolevel_2escm"),(void*)f_2081},
{C_text("f_2099:lolevel_2escm"),(void*)f_2099},
{C_text("f_2101:lolevel_2escm"),(void*)f_2101},
{C_text("f_2110:lolevel_2escm"),(void*)f_2110},
{C_text("f_2116:lolevel_2escm"),(void*)f_2116},
{C_text("f_2146:lolevel_2escm"),(void*)f_2146},
{C_text("f_2149:lolevel_2escm"),(void*)f_2149},
{C_text("f_2158:lolevel_2escm"),(void*)f_2158},
{C_text("f_2179:lolevel_2escm"),(void*)f_2179},
{C_text("f_2190:lolevel_2escm"),(void*)f_2190},
{C_text("f_2194:lolevel_2escm"),(void*)f_2194},
{C_text("f_2199:lolevel_2escm"),(void*)f_2199},
{C_text("f_2215:lolevel_2escm"),(void*)f_2215},
{C_text("f_2225:lolevel_2escm"),(void*)f_2225},
{C_text("f_2242:lolevel_2escm"),(void*)f_2242},
{C_text("f_2259:lolevel_2escm"),(void*)f_2259},
{C_text("f_2261:lolevel_2escm"),(void*)f_2261},
{C_text("f_2275:lolevel_2escm"),(void*)f_2275},
{C_text("f_2292:lolevel_2escm"),(void*)f_2292},
{C_text("f_2300:lolevel_2escm"),(void*)f_2300},
{C_text("f_2314:lolevel_2escm"),(void*)f_2314},
{C_text("f_2316:lolevel_2escm"),(void*)f_2316},
{C_text("f_2337:lolevel_2escm"),(void*)f_2337},
{C_text("f_2339:lolevel_2escm"),(void*)f_2339},
{C_text("f_2343:lolevel_2escm"),(void*)f_2343},
{C_text("f_2348:lolevel_2escm"),(void*)f_2348},
{C_text("f_2399:lolevel_2escm"),(void*)f_2399},
{C_text("f_2408:lolevel_2escm"),(void*)f_2408},
{C_text("f_2444:lolevel_2escm"),(void*)f_2444},
{C_text("f_2448:lolevel_2escm"),(void*)f_2448},
{C_text("f_2453:lolevel_2escm"),(void*)f_2453},
{C_text("f_2457:lolevel_2escm"),(void*)f_2457},
{C_text("f_2466:lolevel_2escm"),(void*)f_2466},
{C_text("f_2470:lolevel_2escm"),(void*)f_2470},
{C_text("f_2492:lolevel_2escm"),(void*)f_2492},
{C_text("f_2494:lolevel_2escm"),(void*)f_2494},
{C_text("f_2498:lolevel_2escm"),(void*)f_2498},
{C_text("f_2504:lolevel_2escm"),(void*)f_2504},
{C_text("f_2509:lolevel_2escm"),(void*)f_2509},
{C_text("f_2532:lolevel_2escm"),(void*)f_2532},
{C_text("f_2536:lolevel_2escm"),(void*)f_2536},
{C_text("f_2541:lolevel_2escm"),(void*)f_2541},
{C_text("f_2545:lolevel_2escm"),(void*)f_2545},
{C_text("f_2548:lolevel_2escm"),(void*)f_2548},
{C_text("f_2555:lolevel_2escm"),(void*)f_2555},
{C_text("f_2558:lolevel_2escm"),(void*)f_2558},
{C_text("f_2570:lolevel_2escm"),(void*)f_2570},
{C_text("f_2572:lolevel_2escm"),(void*)f_2572},
{C_text("f_2585:lolevel_2escm"),(void*)f_2585},
{C_text("f_2593:lolevel_2escm"),(void*)f_2593},
{C_text("f_2609:lolevel_2escm"),(void*)f_2609},
{C_text("f_2625:lolevel_2escm"),(void*)f_2625},
{C_text("f_2630:lolevel_2escm"),(void*)f_2630},
{C_text("f_2632:lolevel_2escm"),(void*)f_2632},
{C_text("f_2635:lolevel_2escm"),(void*)f_2635},
{C_text("f_2638:lolevel_2escm"),(void*)f_2638},
{C_text("f_2644:lolevel_2escm"),(void*)f_2644},
{C_text("f_2647:lolevel_2escm"),(void*)f_2647},
{C_text("f_2651:lolevel_2escm"),(void*)f_2651},
{C_text("f_2671:lolevel_2escm"),(void*)f_2671},
{C_text("f_2691:lolevel_2escm"),(void*)f_2691},
{C_text("f_2694:lolevel_2escm"),(void*)f_2694},
{C_text("f_2697:lolevel_2escm"),(void*)f_2697},
{C_text("f_2700:lolevel_2escm"),(void*)f_2700},
{C_text("f_2703:lolevel_2escm"),(void*)f_2703},
{C_text("f_2706:lolevel_2escm"),(void*)f_2706},
{C_text("f_2709:lolevel_2escm"),(void*)f_2709},
{C_text("f_2712:lolevel_2escm"),(void*)f_2712},
{C_text("f_2715:lolevel_2escm"),(void*)f_2715},
{C_text("f_2718:lolevel_2escm"),(void*)f_2718},
{C_text("f_979:lolevel_2escm"),(void*)f_979},
{C_text("f_981:lolevel_2escm"),(void*)f_981},
{C_text("f_999:lolevel_2escm"),(void*)f_999},
{C_text("toplevel:lolevel_2escm"),(void*)C_lolevel_toplevel},
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
o|hiding unexported module binding: chicken.memory#pv-buf-ref 
o|hiding unexported module binding: chicken.memory#pv-buf-set! 
o|hiding unexported module binding: chicken.memory.representation#xproc-tag 
o|eliminated procedure checks: 64 
o|specializations:
o|  1 (scheme#length list)
o|  1 (scheme#integer? *)
o|  3 (scheme#cdr pair)
o|  6 (scheme#car pair)
(o e)|safe calls: 228 
o|safe globals: (chicken.memory#pointer-f64-set! chicken.memory#pointer-f32-set! chicken.memory#pointer-s64-set! chicken.memory#pointer-u64-set! chicken.memory#pointer-s32-set! chicken.memory#pointer-u32-set! chicken.memory#pointer-s16-set! chicken.memory#pointer-u16-set! chicken.memory#pointer-s8-set! chicken.memory#pointer-u8-set! chicken.memory#pointer-tag chicken.memory#tagged-pointer? chicken.memory#tag-pointer chicken.memory#align-to-word chicken.memory#pointer+ chicken.memory#pointer=? chicken.memory#pointer->object chicken.memory#object->pointer chicken.memory#pointer->address chicken.memory#address->pointer chicken.memory#pointer-like? chicken.memory#pointer? chicken.memory#free chicken.memory#allocate chicken.memory#move-memory! ##sys#check-pointer ##sys#check-generic-vector ##sys#check-generic-structure ##sys#check-become-alist ##sys#check-block) 
o|inlining procedure: k983 
o|inlining procedure: k983 
o|inlining procedure: k991 
o|inlining procedure: k991 
o|inlining procedure: k1013 
o|inlining procedure: k1013 
o|inlining procedure: k1047 
o|inlining procedure: k1047 
o|inlining procedure: k1062 
o|inlining procedure: k1062 
o|contracted procedure: "(lolevel.scm:104) g126127" 
o|inlining procedure: k1052 
o|inlining procedure: k1052 
o|inlining procedure: k1072 
o|inlining procedure: k1072 
o|inlining procedure: k1094 
o|inlining procedure: k1094 
o|contracted procedure: "(lolevel.scm:112) g134135" 
o|inlining procedure: k1077 
o|inlining procedure: k1084 
o|inlining procedure: k1084 
o|inlining procedure: k1077 
o|inlining procedure: k1104 
o|inlining procedure: k1104 
o|inlining procedure: k1117 
o|inlining procedure: k1117 
o|contracted procedure: "(lolevel.scm:118) g145146" 
o|merged explicitly consed rest parameter: args246 
o|inlining procedure: k1278 
o|inlining procedure: k1278 
o|consed rest parameter at call site: "(lolevel.scm:151) sizerr243" 1 
o|inlining procedure: k1294 
o|inlining procedure: k1294 
o|consed rest parameter at call site: "(lolevel.scm:156) sizerr243" 1 
o|inlining procedure: k1335 
o|inlining procedure: "(lolevel.scm:168) typerr155" 
o|inlining procedure: k1335 
o|inlining procedure: k1367 
o|inlining procedure: k1367 
o|inlining procedure: "(lolevel.scm:172) typerr155" 
o|inlining procedure: k1387 
o|inlining procedure: k1400 
o|inlining procedure: k1400 
o|inlining procedure: k1387 
o|inlining procedure: k1423 
o|inlining procedure: k1423 
o|inlining procedure: k1433 
o|contracted procedure: "(lolevel.scm:181) memmove1151" 
o|inlining procedure: k1475 
o|contracted procedure: "(lolevel.scm:183) memmove3153" 
o|inlining procedure: k1475 
o|inlining procedure: "(lolevel.scm:185) typerr155" 
o|contracted procedure: "(lolevel.scm:180) g285286" 
o|inlining procedure: k1459 
o|inlining procedure: k1459 
o|contracted procedure: "(lolevel.scm:63) g291292" 
o|inlining procedure: k1433 
o|inlining procedure: k1511 
o|contracted procedure: "(lolevel.scm:189) memmove2152" 
o|inlining procedure: k1535 
o|inlining procedure: k1535 
o|inlining procedure: k1511 
o|contracted procedure: "(lolevel.scm:191) memmove4154" 
o|inlining procedure: "(lolevel.scm:194) typerr155" 
o|contracted procedure: "(lolevel.scm:188) g305306" 
o|inlining procedure: k1521 
o|inlining procedure: k1521 
o|contracted procedure: "(lolevel.scm:63) g311312" 
o|inlining procedure: "(lolevel.scm:196) typerr155" 
o|contracted procedure: "(lolevel.scm:179) g272273" 
o|inlining procedure: k1443 
o|inlining procedure: k1443 
o|contracted procedure: "(lolevel.scm:63) g278279" 
o|inlining procedure: k1624 
o|inlining procedure: k1624 
o|contracted procedure: "(lolevel.scm:204) g344345" 
o|contracted procedure: "(lolevel.scm:206) g349350" 
o|inlining procedure: k1643 
o|inlining procedure: k1643 
o|inlining procedure: k1670 
o|contracted procedure: "(lolevel.scm:217) g362363" 
o|inlining procedure: k1670 
o|inlining procedure: k1718 
o|inlining procedure: k1718 
o|contracted procedure: "(lolevel.scm:238) g401402" 
o|inlining procedure: k1730 
o|inlining procedure: k1730 
o|inlining procedure: k1756 
o|inlining procedure: k1756 
o|contracted procedure: "(lolevel.scm:250) g409410" 
o|inlining procedure: k1761 
o|inlining procedure: k1761 
o|inlining procedure: k1777 
o|inlining procedure: k1786 
o|inlining procedure: k1786 
o|inlining procedure: k1777 
o|inlining procedure: k1805 
o|inlining procedure: k1805 
o|contracted procedure: "(lolevel.scm:261) g434435" 
o|inlining procedure: k1810 
o|inlining procedure: k1810 
o|inlining procedure: k1938 
o|inlining procedure: k1938 
o|contracted procedure: "(lolevel.scm:350) words->bytes503" 
o|inlining procedure: k1985 
o|inlining procedure: k1985 
o|inlining procedure: k2030 
o|inlining procedure: k2030 
o|inlining procedure: k2064 
o|inlining procedure: k2064 
o|inlining procedure: k2118 
o|inlining procedure: k2118 
o|inlining procedure: k2147 
o|inlining procedure: k2147 
o|inlining procedure: k2160 
o|inlining procedure: k2160 
o|inlining procedure: k2201 
o|inlining procedure: k2201 
o|inlining procedure: k2227 
o|inlining procedure: k2233 
o|inlining procedure: k2233 
o|contracted procedure: "(lolevel.scm:458) g669670" 
o|inlining procedure: k2244 
o|inlining procedure: k2244 
o|inlining procedure: k2227 
o|inlining procedure: k2263 
o|inlining procedure: k2293 
o|inlining procedure: k2293 
o|contracted procedure: "(lolevel.scm:463) g679680" 
o|inlining procedure: k2277 
o|inlining procedure: k2277 
o|inlining procedure: k2263 
o|inlining procedure: k2302 
o|inlining procedure: k2302 
o|contracted procedure: "(lolevel.scm:473) g690691" 
o|inlining procedure: k2320 
o|inlining procedure: k2327 
o|inlining procedure: k2327 
o|inlining procedure: k2320 
o|inlining procedure: k2350 
o|inlining procedure: k2350 
o|inlining procedure: k2373 
o|inlining procedure: k2373 
o|inlining procedure: k2413 
o|inlining procedure: k2413 
o|contracted procedure: "(lolevel.scm:512) g725726" 
o|inlining procedure: k2418 
o|inlining procedure: k2418 
o|inlining procedure: k2511 
o|inlining procedure: k2511 
o|inlining procedure: k2574 
o|inlining procedure: k2574 
o|inlining procedure: k2599 
o|inlining procedure: k2599 
o|inlining procedure: k2615 
o|inlining procedure: k2615 
o|inlining procedure: k2640 
o|inlining procedure: k2640 
o|contracted procedure: "(lolevel.scm:402) chicken.memory#pv-buf-ref" 
o|replaced variables: 434 
o|removed binding forms: 172 
o|substituted constant variable: r9922724 
o|substituted constant variable: r9922724 
o|substituted constant variable: r10632732 
o|substituted constant variable: r10632732 
o|substituted constant variable: r10532735 
o|substituted constant variable: r10952740 
o|substituted constant variable: r10952740 
o|substituted constant variable: r10782747 
o|substituted constant variable: r11182752 
o|substituted constant variable: r11182752 
o|substituted constant variable: r16252820 
o|substituted constant variable: r16252820 
o|substituted constant variable: r16442823 
o|substituted constant variable: r16712825 
o|substituted constant variable: r17312829 
o|substituted constant variable: r17622835 
o|substituted constant variable: r17782839 
o|substituted constant variable: r18112843 
o|inlining procedure: k1920 
o|substituted constant variable: r20652852 
o|substituted constant variable: r20652852 
o|substituted constant variable: r22022863 
o|substituted constant variable: r22342865 
o|substituted constant variable: r22342866 
o|substituted constant variable: r22452868 
o|substituted constant variable: r22282869 
o|substituted constant variable: r22942872 
o|substituted constant variable: r22782874 
o|substituted constant variable: r22642875 
o|substituted constant variable: r23212883 
o|substituted constant variable: r24142889 
o|substituted constant variable: r24192891 
o|substituted constant variable: r26002896 
o|substituted constant variable: r26002896 
o|substituted constant variable: r26162900 
o|substituted constant variable: r26162900 
o|substituted constant variable: r26412905 
o|replaced variables: 145 
o|removed binding forms: 345 
o|inlining procedure: k1456 
o|inlining procedure: k1518 
o|inlining procedure: k1440 
o|removed binding forms: 150 
o|contracted procedure: k1109 
o|contracted procedure: k1914 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|simplifications: ((if . 37) (##core#call . 181) (let . 21)) 
o|  call simplifications:
o|    scheme#vector
o|    scheme#list	2
o|    ##sys#check-symbol
o|    scheme#cons	2
o|    scheme#symbol?
o|    ##sys#setslot	4
o|    ##sys#check-range	4
o|    ##sys#check-structure	4
o|    ##sys#structure?
o|    ##sys#check-fixnum
o|    scheme#eq?	6
o|    chicken.fixnum#fx>=	4
o|    chicken.fixnum#fx+	7
o|    ##sys#make-structure	2
o|    scheme#equal?
o|    ##sys#foreign-ranged-integer-argument	2
o|    scheme#car	9
o|    scheme#cdr	3
o|    chicken.fixnum#fx<	2
o|    ##sys#generic-structure?	2
o|    scheme#string?	2
o|    ##sys#foreign-block-argument	4
o|    ##sys#foreign-pointer-argument	7
o|    ##sys#foreign-fixnum-argument	16
o|    ##sys#size	16
o|    scheme#memq	2
o|    ##sys#slot	29
o|    chicken.fixnum#fx-	10
o|    chicken.fixnum#fx<=	3
o|    scheme#apply	2
o|    scheme#not	8
o|    ##sys#check-list
o|    scheme#null?	13
o|    ##sys#check-pair
o|    scheme#pair?	8
o|contracted procedure: k994 
o|contracted procedure: k1001 
o|contracted procedure: k1010 
o|contracted procedure: k1019 
o|contracted procedure: k1023 
o|contracted procedure: k1055 
o|contracted procedure: k1065 
o|contracted procedure: k1097 
o|contracted procedure: k1120 
o|contracted procedure: k1607 
o|contracted procedure: k1245 
o|contracted procedure: k1601 
o|contracted procedure: k1248 
o|contracted procedure: k1595 
o|contracted procedure: k1251 
o|contracted procedure: k1589 
o|contracted procedure: k1254 
o|contracted procedure: k1583 
o|contracted procedure: k1257 
o|contracted procedure: k1577 
o|contracted procedure: k1260 
o|contracted procedure: k1288 
o|contracted procedure: k1281 
o|contracted procedure: k1314 
o|contracted procedure: k1303 
o|contracted procedure: k1310 
o|contracted procedure: k1338 
o|contracted procedure: k1358 
o|contracted procedure: k1344 
o|contracted procedure: k1351 
o|contracted procedure: k1364 
o|contracted procedure: k1384 
o|contracted procedure: k1370 
o|contracted procedure: k1377 
o|contracted procedure: k1390 
o|contracted procedure: k1393 
o|contracted procedure: k1407 
o|contracted procedure: k1400 
o|contracted procedure: k1413 
o|contracted procedure: k1416 
o|contracted procedure: k1430 
o|contracted procedure: k1423 
o|contracted procedure: k1446 
o|contracted procedure: k1462 
o|contracted procedure: k1128 
o|contracted procedure: k1132 
o|contracted procedure: k1136 
o|contracted procedure: k1140 
o|contracted procedure: k1144 
o|contracted procedure: k1184 
o|contracted procedure: k1188 
o|contracted procedure: k1192 
o|contracted procedure: k1196 
o|contracted procedure: k1200 
o|contracted procedure: k1493 
o|contracted procedure: k1508 
o|contracted procedure: k1524 
o|contracted procedure: k1156 
o|contracted procedure: k1160 
o|contracted procedure: k1164 
o|contracted procedure: k1168 
o|contracted procedure: k1172 
o|contracted procedure: k1212 
o|contracted procedure: k1216 
o|contracted procedure: k1220 
o|contracted procedure: k1224 
o|contracted procedure: k1228 
o|contracted procedure: k1552 
o|contracted procedure: k1556 
o|contracted procedure: k1565 
o|contracted procedure: k1571 
o|contracted procedure: k1617 
o|contracted procedure: k1624 
o|contracted procedure: k1697 
o|contracted procedure: k1701 
o|contracted procedure: k1712 
o|contracted procedure: k1733 
o|contracted procedure: k1764 
o|contracted procedure: k1796 
o|contracted procedure: k1774 
o|contracted procedure: k1783 
o|contracted procedure: k1793 
o|contracted procedure: k1813 
o|contracted procedure: k1897 
o|contracted procedure: k1957 
o|contracted procedure: k1902 
o|contracted procedure: k1905 
o|contracted procedure: k1911 
o|contracted procedure: k1926 
o|contracted procedure: k1941 
o|contracted procedure: k1951 
o|contracted procedure: k1976 
o|contracted procedure: k1988 
o|contracted procedure: k1991 
o|contracted procedure: k2006 
o|contracted procedure: k2012 
o|contracted procedure: k2018 
o|contracted procedure: k2021 
o|contracted procedure: k2033 
o|contracted procedure: k2043 
o|contracted procedure: k2060 
o|contracted procedure: k2064 
o|contracted procedure: k2073 
o|contracted procedure: k2093 
o|contracted procedure: k2076 
o|contracted procedure: k2086 
o|contracted procedure: k2103 
o|contracted procedure: k2121 
o|contracted procedure: k2127 
o|contracted procedure: k2134 
o|contracted procedure: k2137 
o|contracted procedure: k2140 
o|contracted procedure: k2154 
o|contracted procedure: k2163 
o|contracted procedure: k2166 
o|contracted procedure: k2173 
o|contracted procedure: k2181 
o|contracted procedure: k2186 
o|contracted procedure: k2204 
o|contracted procedure: k2211 
o|contracted procedure: k2221 
o|contracted procedure: k2217 
o|contracted procedure: k2247 
o|contracted procedure: k2254 
o|contracted procedure: k2280 
o|contracted procedure: k2287 
o|contracted procedure: k2305 
o|contracted procedure: k2353 
o|contracted procedure: k2370 
o|contracted procedure: k2366 
o|contracted procedure: k2384 
o|contracted procedure: k2380 
o|contracted procedure: k2394 
o|contracted procedure: k2401 
o|contracted procedure: k2437 
o|contracted procedure: k2410 
o|contracted procedure: k2421 
o|contracted procedure: k2424 
o|contracted procedure: k2434 
o|contracted procedure: k2462 
o|contracted procedure: k2486 
o|contracted procedure: k2482 
o|contracted procedure: k2471 
o|contracted procedure: k2478 
o|contracted procedure: k2499 
o|contracted procedure: k2514 
o|contracted procedure: k2528 
o|contracted procedure: k2517 
o|contracted procedure: k2524 
o|contracted procedure: k2549 
o|contracted procedure: k2564 
o|contracted procedure: k2560 
o|contracted procedure: k2577 
o|contracted procedure: k2602 
o|contracted procedure: k2599 
o|contracted procedure: k2618 
o|contracted procedure: k2615 
o|contracted procedure: k2667 
o|contracted procedure: k2663 
o|contracted procedure: k2652 
o|contracted procedure: k2659 
o|contracted procedure: k2673 
o|contracted procedure: k2687 
o|contracted procedure: k2676 
o|contracted procedure: k2683 
o|contracted procedure: k2053 
o|simplifications: ((if . 9) (let . 71)) 
o|removed binding forms: 166 
(o x)|known list op on rest arg sublist: ##core#rest-car loc102 0 
(o x)|known list op on rest arg sublist: ##core#rest-car loc125 0 
(o x)|known list op on rest arg sublist: ##core#rest-car loc144 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest226229 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest226229 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest226229 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest226229 0 
o|contracted procedure: k1297 
o|inlining procedure: k1489 
o|inlining procedure: "(lolevel.scm:237) align389" 
o|inlining procedure: "(lolevel.scm:239) align389" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest419421 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest419421 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest495497 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest495497 0 
o|inlining procedure: "(lolevel.scm:357) chicken.memory#pv-buf-set!" 
o|inlining procedure: "(lolevel.scm:372) chicken.memory#pv-buf-set!" 
o|inlining procedure: "(lolevel.scm:381) chicken.memory#pv-buf-set!" 
o|inlining procedure: "(lolevel.scm:395) chicken.memory#pv-buf-set!" 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest716718 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest716718 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? index807 0 
(o x)|known list op on rest arg sublist: ##core#rest-car index807 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? index814 0 
(o x)|known list op on rest arg sublist: ##core#rest-car index814 0 
o|removed binding forms: 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1249 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1249 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1249 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1249 1 
o|removed side-effect free assignment to unused variable: chicken.memory#pv-buf-set! 
o|replaced variables: 27 
o|removed binding forms: 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1255 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1255 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1255 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1255 2 
o|inlining procedure: k1740 
o|inlining procedure: k1944 
o|inlining procedure: k1997 
o|inlining procedure: k2036 
o|removed binding forms: 22 
o|simplifications: ((let . 1)) 
o|removed binding forms: 6 
o|direct leaf routine/allocation: doloop510511 0 
o|direct leaf routine/allocation: doloop538539 0 
o|direct leaf routine/allocation: doloop753754 0 
o|contracted procedure: k1920 
o|converted assignments to bindings: (doloop510511) 
o|converted assignments to bindings: (doloop538539) 
o|converted assignments to bindings: (doloop753754) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 1 
o|customizable procedures: (copy638 doloop647648 doloop525526 checkn2245 checkn1244 nosizerr242 move256 sizerr243 k1087 loop108) 
o|shared closure containers: 4 
o|shared closure users: 7 
o|calls to known targets: 32 
o|identified direct recursive calls: f_1333 6 
o|unused rest argument: rest226229 f_1243 
o|unused rest argument: rest419421 f_1772 
o|identified direct recursive calls: f_1936 1 
o|unused rest argument: rest495497 f_1900 
o|identified direct recursive calls: f_2028 1 
o|unused rest argument: rest716718 f_2408 
o|identified direct recursive calls: f_2509 1 
o|unused rest argument: index807 f_2593 
o|unused rest argument: index814 f_2609 
o|fast box initializations: 9 
o|fast global references: 4 
o|fast global assignments: 1 
*/
/* end of file */
