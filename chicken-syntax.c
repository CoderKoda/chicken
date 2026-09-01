/* Generated from chicken-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file chicken-syntax.c
   unit: chicken-syntax
   uses: internal expand library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[301];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,12),40,116,97,107,101,32,108,115,116,32,110,41,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,105,41};
static C_char li2[] C_aligned={C_lihdr(0,0,11),40,103,101,110,118,97,114,115,32,110,41,0,0,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,110,32,112,114,101,118,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,7),40,97,54,48,49,55,41,0};
static C_char li5[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,51,51,56,53,32,103,51,51,57,55,32,103,51,51,57,56,41,0,0,0,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,19),40,98,117,105,108,100,32,118,97,114,115,50,32,118,114,101,115,116,41,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,19),40,97,54,48,50,55,32,118,97,114,115,49,32,118,97,114,115,50,41,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,22),40,97,53,57,57,55,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,14),40,103,51,51,52,50,32,99,32,98,111,100,121,41,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,17),40,102,111,108,100,114,51,51,51,55,32,103,51,51,51,56,41,0,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,22),40,97,54,50,53,57,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,50,57,52,32,103,51,51,48,54,41,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,16),40,97,53,56,56,57,32,102,111,114,109,32,114,32,99,41};
static C_char li14[] C_aligned={C_lihdr(0,0,16),40,97,54,51,50,57,32,102,111,114,109,32,114,32,99,41};
static C_char li15[] C_aligned={C_lihdr(0,0,29),40,103,117,97,114,100,45,97,117,120,32,114,101,114,97,105,115,101,32,98,111,100,121,32,109,111,114,101,41,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,16),40,97,54,51,55,56,32,102,111,114,109,32,114,32,99,41};
static C_char li17[] C_aligned={C_lihdr(0,0,16),40,97,54,55,54,54,32,102,111,114,109,32,114,32,99,41};
static C_char li18[] C_aligned={C_lihdr(0,0,13),40,97,54,56,53,53,32,120,32,114,32,99,41,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,16),40,97,54,56,55,51,32,102,111,114,109,32,114,32,99,41};
static C_char li20[] C_aligned={C_lihdr(0,0,27),40,108,111,111,112,32,120,115,32,118,97,114,115,32,98,115,32,118,97,108,115,32,114,101,115,116,41,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,16),40,97,54,57,51,56,32,102,111,114,109,32,114,32,99,41};
static C_char li22[] C_aligned={C_lihdr(0,0,24),40,108,111,111,112,32,120,115,32,118,97,114,115,32,118,97,108,115,32,114,101,115,116,41};
static C_char li23[] C_aligned={C_lihdr(0,0,16),40,97,55,49,51,51,32,102,111,114,109,32,114,32,99,41};
static C_char li24[] C_aligned={C_lihdr(0,0,13),40,103,50,57,57,54,32,118,110,97,109,101,41,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,7),40,103,51,48,50,50,41,0};
static C_char li26[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,108,111,116,115,32,105,41,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,49,54,32,103,51,48,50,56,41,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,57,57,53,32,103,51,48,48,50,41,0,0,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,54,57,32,103,50,57,56,49,41,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,16),40,97,55,51,48,53,32,102,111,114,109,32,114,32,99,41};
static C_char li31[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,97,114,103,115,32,118,97,114,100,101,102,115,41,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,16),40,97,55,56,49,55,32,102,111,114,109,32,114,32,99,41};
static C_char li33[] C_aligned={C_lihdr(0,0,16),40,97,55,57,55,55,32,102,111,114,109,32,114,32,99,41};
static C_char li34[] C_aligned={C_lihdr(0,0,36),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,110,111,110,45,100,101,102,97,117,108,116,115,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,45),40,109,97,107,101,45,105,102,45,116,114,101,101,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,115,32,98,111,100,121,45,112,114,111,99,32,114,101,115,116,41,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,23),40,112,114,101,102,105,120,45,115,121,109,32,112,114,101,102,105,120,32,115,121,109,41,0};
static C_char li37[] C_aligned={C_lihdr(0,0,9),40,103,50,56,49,51,32,118,41,0,0,0,0,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,11),40,103,50,56,55,48,32,118,97,114,41,0,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,42),40,114,101,99,117,114,32,118,97,114,115,32,100,101,102,97,117,108,116,101,114,45,110,97,109,101,115,32,100,101,102,115,32,110,101,120,116,45,103,117,121,41,0,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,54,52,32,103,50,56,55,54,41,0,0,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,51,53,32,103,50,56,52,55,41,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,48,55,32,103,50,56,49,57,41,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,55,55,32,103,50,55,56,57,41,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,16),40,97,56,48,53,52,32,102,111,114,109,32,114,32,99,41};
static C_char li45[] C_aligned={C_lihdr(0,0,14),40,102,111,108,100,32,98,115,32,108,97,115,116,41,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,16),40,97,56,53,48,50,32,102,111,114,109,32,114,32,99,41};
static C_char li47[] C_aligned={C_lihdr(0,0,24),40,113,117,111,116,105,102,121,45,112,114,111,99,50,54,55,55,32,120,115,32,105,100,41};
static C_char li48[] C_aligned={C_lihdr(0,0,16),40,97,56,54,52,52,32,102,111,114,109,32,114,32,99,41};
static C_char li49[] C_aligned={C_lihdr(0,0,16),40,97,56,55,52,56,32,102,111,114,109,32,114,32,99,41};
static C_char li50[] C_aligned={C_lihdr(0,0,13),40,97,56,55,57,50,32,120,32,114,32,99,41,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,54,50,53,32,103,50,54,51,55,32,103,50,54,51,56,41,0,0,0,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,55,55,32,103,50,53,56,57,41,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,13),40,97,56,56,54,53,32,97,32,95,32,95,41,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,23),40,102,111,108,100,108,50,54,48,49,32,103,50,54,48,50,32,103,50,54,48,48,41,0};
static C_char li55[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,52,56,32,103,50,53,54,48,41,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,50,50,32,103,50,53,51,52,41,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,16),40,97,56,56,49,52,32,102,111,114,109,32,114,32,99,41};
static C_char li58[] C_aligned={C_lihdr(0,0,16),40,102,111,108,100,32,118,98,105,110,100,105,110,103,115,41};
static C_char li59[] C_aligned={C_lihdr(0,0,16),40,97,57,48,55,50,32,102,111,114,109,32,114,32,99,41};
static C_char li60[] C_aligned={C_lihdr(0,0,18),40,97,112,112,101,110,100,42,50,51,50,56,32,105,108,32,108,41,0,0,0,0,0,0};
static C_char li61[] C_aligned={C_lihdr(0,0,17),40,109,97,112,42,50,51,50,57,32,112,114,111,99,32,108,41,0,0,0,0,0,0,0};
static C_char li62[] C_aligned={C_lihdr(0,0,9),40,103,50,51,56,57,32,118,41,0,0,0,0,0,0,0};
static C_char li63[] C_aligned={C_lihdr(0,0,10),40,108,111,111,107,117,112,32,118,41,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,9),40,103,50,52,52,48,32,118,41,0,0,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,51,52,32,103,50,52,52,54,41,0,0,0,0};
static C_char li66[] C_aligned={C_lihdr(0,0,26),40,102,111,108,100,32,108,108,105,115,116,115,32,101,120,112,115,32,108,108,105,115,116,115,50,41,0,0,0,0,0,0};
static C_char li67[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,52,54,57,32,103,50,52,56,49,41,0,0,0,0};
static C_char li68[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,56,51,32,103,50,51,57,53,41,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,32,108,108,105,115,116,115,32,97,99,99,41,0,0,0,0,0,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,51,52,53,32,103,50,51,53,55,41,0,0,0,0};
static C_char li72[] C_aligned={C_lihdr(0,0,16),40,97,57,49,50,54,32,102,111,114,109,32,114,32,99,41};
static C_char li73[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,56,52,32,103,50,50,57,54,41,0,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,50,55,52,32,103,50,50,56,49,41,0,0,0,0,0,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,22),40,97,57,54,52,48,32,118,97,114,115,32,97,114,103,99,32,114,101,115,116,41,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,16),40,97,57,54,48,51,32,102,111,114,109,32,114,32,99,41};
static C_char li77[] C_aligned={C_lihdr(0,0,16),40,97,57,55,51,51,32,102,111,114,109,32,114,32,99,41};
static C_char li78[] C_aligned={C_lihdr(0,0,16),40,97,57,55,53,52,32,102,111,114,109,32,114,32,99,41};
static C_char li79[] C_aligned={C_lihdr(0,0,16),40,97,57,55,56,50,32,102,111,114,109,32,114,32,99,41};
static C_char li80[] C_aligned={C_lihdr(0,0,7),40,97,57,56,50,49,41,0};
static C_char li81[] C_aligned={C_lihdr(0,0,48),40,97,57,56,50,55,32,110,97,109,101,50,50,49,49,32,108,105,98,50,50,49,51,32,95,50,50,49,53,32,95,50,50,49,53,32,95,50,50,49,53,32,95,50,50,49,53,41};
static C_char li82[] C_aligned={C_lihdr(0,0,9),40,103,50,49,57,57,32,120,41,0,0,0,0,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,49,57,51,32,103,50,50,48,53,41,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,13),40,97,57,56,48,54,32,120,32,114,32,99,41,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,9),40,103,49,55,56,52,32,122,41,0,0,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,7),40,103,49,56,49,50,41,0};
static C_char li87[] C_aligned={C_lihdr(0,0,7),40,103,49,56,52,48,41,0};
static C_char li88[] C_aligned={C_lihdr(0,0,14),40,103,49,57,54,51,32,115,32,116,101,109,112,41,0,0};
static C_char li89[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,49,52,57,32,103,50,49,54,49,32,103,50,49,54,50,41,0,0,0,0,0,0};
static C_char li90[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,49,49,51,32,103,50,49,50,53,32,103,50,49,50,54,41,0,0,0,0,0,0};
static C_char li91[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,50,48,55,49,32,103,50,48,56,51,32,103,50,48,56,52,32,103,50,48,56,53,41};
static C_char li92[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,50,48,51,53,32,103,50,48,52,55,32,103,50,48,52,56,41,0,0,0,0,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,57,57,32,103,50,48,49,49,32,103,50,48,49,50,41,0,0,0,0,0,0};
static C_char li94[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,108,111,111,112,49,57,53,55,32,103,49,57,54,57,32,103,49,57,55,48,32,103,49,57,55,49,41};
static C_char li95[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,57,50,54,32,103,49,57,51,56,32,103,49,57,51,57,41,0,0,0,0,0,0};
static C_char li96[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,57,53,32,103,49,57,48,55,32,103,49,57,48,56,41,0,0,0,0,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,56,54,52,32,103,49,56,55,54,32,103,49,56,55,55,41,0,0,0,0,0,0};
static C_char li98[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,56,51,52,32,103,49,56,52,54,41,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,56,48,54,32,103,49,56,49,56,41,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,55,56,32,103,49,55,57,48,41,0,0,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,53,49,32,103,49,55,54,51,41,0,0,0,0};
static C_char li102[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,55,50,52,32,103,49,55,51,54,41,0,0,0,0};
static C_char li103[] C_aligned={C_lihdr(0,0,16),40,97,57,56,56,54,32,102,111,114,109,32,114,32,99,41};
static C_char li104[] C_aligned={C_lihdr(0,0,7),40,103,49,52,50,55,41,0};
static C_char li105[] C_aligned={C_lihdr(0,0,7),40,103,49,52,53,53,41,0};
static C_char li106[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,54,55,56,32,103,49,54,57,48,32,103,49,54,57,49,41,0,0,0,0,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,54,52,50,32,103,49,54,53,52,32,103,49,54,53,53,41,0,0,0,0,0,0};
static C_char li108[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,54,48,54,32,103,49,54,49,56,32,103,49,54,49,57,41,0,0,0,0,0,0};
static C_char li109[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,55,48,32,103,49,53,56,50,32,103,49,53,56,51,41,0,0,0,0,0,0};
static C_char li110[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,53,51,54,32,103,49,53,52,56,32,103,49,53,52,57,41,0,0,0,0,0,0};
static C_char li111[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,110,41};
static C_char li112[] C_aligned={C_lihdr(0,0,26),40,109,97,112,45,108,111,111,112,49,52,55,57,32,103,49,52,57,49,32,103,49,52,57,50,41,0,0,0,0,0,0};
static C_char li113[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,48,48,32,103,49,53,49,50,41,0,0,0,0};
static C_char li114[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,52,57,32,103,49,52,54,49,41,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,50,49,32,103,49,52,51,51,41,0,0,0,0};
static C_char li116[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,57,52,32,103,49,52,48,54,41,0,0,0,0};
static C_char li117[] C_aligned={C_lihdr(0,0,17),40,97,49,48,56,49,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li118[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,53,55,32,103,49,51,54,57,41,0,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,17),40,97,49,49,52,54,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li120[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,50,48,32,103,49,51,51,50,41,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,51,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li122[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,50,56,51,32,103,49,50,57,53,41,0,0,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,17),40,97,49,49,53,57,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,54,52,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,56,53,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li126[] C_aligned={C_lihdr(0,0,17),40,97,49,49,54,57,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li127[] C_aligned={C_lihdr(0,0,12),40,103,49,49,56,52,32,115,108,111,116,41,0,0,0,0};
static C_char li128[] C_aligned={C_lihdr(0,0,18),40,109,97,112,115,108,111,116,115,32,115,108,111,116,115,32,105,41,0,0,0,0,0,0};
static C_char li129[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,55,56,32,103,49,49,57,48,41,0,0,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,14),40,97,49,49,55,57,50,32,120,32,114,32,99,41,0,0};
static C_char li131[] C_aligned={C_lihdr(0,0,17),40,97,49,50,49,56,55,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li132[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,49,49,48,32,108,32,108,101,110,41};
static C_char li133[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,49,49,49,48,32,108,32,108,101,110,41};
static C_char li134[] C_aligned={C_lihdr(0,0,29),40,97,49,50,50,48,52,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char li135[] C_aligned={C_lihdr(0,0,29),40,97,49,50,51,51,50,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char li136[] C_aligned={C_lihdr(0,0,17),40,97,49,50,52,50,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li137[] C_aligned={C_lihdr(0,0,14),40,97,49,50,52,53,56,32,120,32,114,32,99,41,0,0};
static C_char li138[] C_aligned={C_lihdr(0,0,14),40,97,49,50,52,56,56,32,120,32,114,32,99,41,0,0};
static C_char li139[] C_aligned={C_lihdr(0,0,14),40,97,49,50,53,48,53,32,120,32,114,32,99,41,0,0};
static C_char li140[] C_aligned={C_lihdr(0,0,13),40,103,57,57,53,32,99,108,97,117,115,101,41,0,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,19),40,109,97,112,45,108,111,111,112,57,56,57,32,103,49,48,48,49,41,0,0,0,0,0};
static C_char li142[] C_aligned={C_lihdr(0,0,14),40,97,49,50,53,54,53,32,120,32,114,32,99,41,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,23),40,109,97,112,45,108,111,111,112,57,51,53,32,103,57,52,55,32,103,57,52,56,41,0};
static C_char li144[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,57,48,49,32,103,57,49,51,41,0,0,0,0,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,97,110,97,109,101,115,32,105,41};
static C_char li146[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,97,114,103,115,32,97,110,97,109,101,115,32,97,116,121,112,101,115,41,0,0,0,0,0,0,0};
static C_char li147[] C_aligned={C_lihdr(0,0,14),40,97,49,50,54,56,56,32,120,32,114,32,99,41,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,17),40,97,49,51,49,48,54,32,116,121,112,101,32,118,97,114,41,0,0,0,0,0,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,51,52,32,103,56,52,54,41,0,0,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,56,48,54,32,103,56,49,56,41,0,0,0,0,0,0};
static C_char li151[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,53,57,32,108,32,108,101,110,41,0};
static C_char li152[] C_aligned={C_lihdr(0,0,15),40,108,111,111,112,55,53,57,32,108,32,108,101,110,41,0};
static C_char li153[] C_aligned={C_lihdr(0,0,29),40,97,49,51,48,51,56,32,105,110,112,117,116,32,114,101,110,97,109,101,32,99,111,109,112,97,114,101,41,0,0,0};
static C_char li154[] C_aligned={C_lihdr(0,0,14),40,97,49,51,51,50,55,32,120,32,114,32,99,41,0,0};
static C_char li155[] C_aligned={C_lihdr(0,0,8),40,97,49,51,51,56,53,41};
static C_char li156[] C_aligned={C_lihdr(0,0,32),40,97,49,51,51,57,53,32,116,121,112,101,55,49,54,32,112,114,101,100,55,49,56,32,112,117,114,101,55,50,48,41};
static C_char li157[] C_aligned={C_lihdr(0,0,14),40,97,49,51,51,54,53,32,120,32,114,32,99,41,0,0};
static C_char li158[] C_aligned={C_lihdr(0,0,6),40,103,54,52,56,41,0,0};
static C_char li159[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,52,50,32,103,54,53,52,41,0,0,0,0,0,0};
static C_char li160[] C_aligned={C_lihdr(0,0,16),40,112,97,114,115,101,45,99,108,97,117,115,101,32,99,41};
static C_char li161[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,55,51,32,103,54,56,53,41,0,0,0,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,17),40,97,49,51,52,55,54,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,17),40,97,49,51,55,52,57,32,102,111,114,109,32,114,32,99,41,0,0,0,0,0,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_10007)
static void C_ccall f_10007(C_word c,C_word *av) C_noret;
C_noret_decl(f_10018)
static void C_ccall f_10018(C_word c,C_word *av) C_noret;
C_noret_decl(f_10066)
static void C_ccall f_10066(C_word c,C_word *av) C_noret;
C_noret_decl(f_10070)
static void C_ccall f_10070(C_word c,C_word *av) C_noret;
C_noret_decl(f_10082)
static void C_ccall f_10082(C_word c,C_word *av) C_noret;
C_noret_decl(f_10094)
static void C_ccall f_10094(C_word c,C_word *av) C_noret;
C_noret_decl(f_10096)
static void f_10096(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10144)
static void f_10144(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10192)
static void f_10192(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10199)
static void f_10199(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10269)
static C_word f_10269(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3);
C_noret_decl(f_10287)
static void C_ccall f_10287(C_word c,C_word *av) C_noret;
C_noret_decl(f_10291)
static void C_ccall f_10291(C_word c,C_word *av) C_noret;
C_noret_decl(f_10307)
static void C_ccall f_10307(C_word c,C_word *av) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word *av) C_noret;
C_noret_decl(f_10323)
static void C_ccall f_10323(C_word c,C_word *av) C_noret;
C_noret_decl(f_10333)
static void f_10333(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10381)
static void f_10381(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10429)
static void f_10429(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10436)
static void f_10436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10499)
static void f_10499(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10547)
static void f_10547(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10595)
static void f_10595(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10643)
static void f_10643(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10668)
static void C_ccall f_10668(C_word c,C_word *av) C_noret;
C_noret_decl(f_10677)
static void f_10677(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10702)
static void C_ccall f_10702(C_word c,C_word *av) C_noret;
C_noret_decl(f_10711)
static void f_10711(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10736)
static void C_ccall f_10736(C_word c,C_word *av) C_noret;
C_noret_decl(f_10745)
static void f_10745(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10779)
static void f_10779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10815)
static void C_ccall f_10815(C_word c,C_word *av) C_noret;
C_noret_decl(f_10817)
static void C_ccall f_10817(C_word c,C_word *av) C_noret;
C_noret_decl(f_10821)
static void C_ccall f_10821(C_word c,C_word *av) C_noret;
C_noret_decl(f_10835)
static void C_ccall f_10835(C_word c,C_word *av) C_noret;
C_noret_decl(f_10839)
static void f_10839(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10847)
static void C_ccall f_10847(C_word c,C_word *av) C_noret;
C_noret_decl(f_10850)
static void C_ccall f_10850(C_word c,C_word *av) C_noret;
C_noret_decl(f_10854)
static void f_10854(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10862)
static void C_ccall f_10862(C_word c,C_word *av) C_noret;
C_noret_decl(f_10865)
static void C_ccall f_10865(C_word c,C_word *av) C_noret;
C_noret_decl(f_10872)
static void C_ccall f_10872(C_word c,C_word *av) C_noret;
C_noret_decl(f_10896)
static void C_ccall f_10896(C_word c,C_word *av) C_noret;
C_noret_decl(f_10908)
static void C_ccall f_10908(C_word c,C_word *av) C_noret;
C_noret_decl(f_10912)
static void C_ccall f_10912(C_word c,C_word *av) C_noret;
C_noret_decl(f_10924)
static void C_ccall f_10924(C_word c,C_word *av) C_noret;
C_noret_decl(f_10934)
static void f_10934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10982)
static void f_10982(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11040)
static void C_ccall f_11040(C_word c,C_word *av) C_noret;
C_noret_decl(f_11055)
static void C_ccall f_11055(C_word c,C_word *av) C_noret;
C_noret_decl(f_11059)
static void C_ccall f_11059(C_word c,C_word *av) C_noret;
C_noret_decl(f_11071)
static void C_ccall f_11071(C_word c,C_word *av) C_noret;
C_noret_decl(f_11081)
static void f_11081(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11129)
static void f_11129(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11185)
static void C_ccall f_11185(C_word c,C_word *av) C_noret;
C_noret_decl(f_11194)
static void C_ccall f_11194(C_word c,C_word *av) C_noret;
C_noret_decl(f_11201)
static void C_ccall f_11201(C_word c,C_word *av) C_noret;
C_noret_decl(f_11210)
static void C_ccall f_11210(C_word c,C_word *av) C_noret;
C_noret_decl(f_11212)
static void f_11212(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11262)
static void f_11262(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11276)
static void C_ccall f_11276(C_word c,C_word *av) C_noret;
C_noret_decl(f_11282)
static void f_11282(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11330)
static void f_11330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11364)
static void f_11364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11389)
static void C_ccall f_11389(C_word c,C_word *av) C_noret;
C_noret_decl(f_11398)
static void f_11398(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11423)
static void C_ccall f_11423(C_word c,C_word *av) C_noret;
C_noret_decl(f_11432)
static void f_11432(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11468)
static void C_ccall f_11468(C_word c,C_word *av) C_noret;
C_noret_decl(f_11470)
static void C_ccall f_11470(C_word c,C_word *av) C_noret;
C_noret_decl(f_11474)
static void C_ccall f_11474(C_word c,C_word *av) C_noret;
C_noret_decl(f_11495)
static void C_ccall f_11495(C_word c,C_word *av) C_noret;
C_noret_decl(f_11497)
static void f_11497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11533)
static void C_ccall f_11533(C_word c,C_word *av) C_noret;
C_noret_decl(f_11535)
static void C_ccall f_11535(C_word c,C_word *av) C_noret;
C_noret_decl(f_11539)
static void C_ccall f_11539(C_word c,C_word *av) C_noret;
C_noret_decl(f_11560)
static void C_ccall f_11560(C_word c,C_word *av) C_noret;
C_noret_decl(f_11562)
static void f_11562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11598)
static void C_ccall f_11598(C_word c,C_word *av) C_noret;
C_noret_decl(f_11600)
static void C_ccall f_11600(C_word c,C_word *av) C_noret;
C_noret_decl(f_11604)
static void C_ccall f_11604(C_word c,C_word *av) C_noret;
C_noret_decl(f_11625)
static void C_ccall f_11625(C_word c,C_word *av) C_noret;
C_noret_decl(f_11627)
static void f_11627(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11663)
static void C_ccall f_11663(C_word c,C_word *av) C_noret;
C_noret_decl(f_11665)
static void C_ccall f_11665(C_word c,C_word *av) C_noret;
C_noret_decl(f_11669)
static void C_ccall f_11669(C_word c,C_word *av) C_noret;
C_noret_decl(f_11684)
static void C_ccall f_11684(C_word c,C_word *av) C_noret;
C_noret_decl(f_11686)
static void C_ccall f_11686(C_word c,C_word *av) C_noret;
C_noret_decl(f_11698)
static void C_ccall f_11698(C_word c,C_word *av) C_noret;
C_noret_decl(f_11700)
static void C_ccall f_11700(C_word c,C_word *av) C_noret;
C_noret_decl(f_11704)
static void C_ccall f_11704(C_word c,C_word *av) C_noret;
C_noret_decl(f_11726)
static void C_ccall f_11726(C_word c,C_word *av) C_noret;
C_noret_decl(f_11791)
static void C_ccall f_11791(C_word c,C_word *av) C_noret;
C_noret_decl(f_11793)
static void C_ccall f_11793(C_word c,C_word *av) C_noret;
C_noret_decl(f_11797)
static void C_ccall f_11797(C_word c,C_word *av) C_noret;
C_noret_decl(f_11803)
static void C_ccall f_11803(C_word c,C_word *av) C_noret;
C_noret_decl(f_11806)
static void C_ccall f_11806(C_word c,C_word *av) C_noret;
C_noret_decl(f_11809)
static void C_ccall f_11809(C_word c,C_word *av) C_noret;
C_noret_decl(f_11815)
static void C_ccall f_11815(C_word c,C_word *av) C_noret;
C_noret_decl(f_11818)
static void C_ccall f_11818(C_word c,C_word *av) C_noret;
C_noret_decl(f_11821)
static void C_ccall f_11821(C_word c,C_word *av) C_noret;
C_noret_decl(f_11825)
static void f_11825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11838)
static void f_11838(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11853)
static void C_ccall f_11853(C_word c,C_word *av) C_noret;
C_noret_decl(f_11885)
static void C_ccall f_11885(C_word c,C_word *av) C_noret;
C_noret_decl(f_11916)
static void C_ccall f_11916(C_word c,C_word *av) C_noret;
C_noret_decl(f_11918)
static void f_11918(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11934)
static void C_ccall f_11934(C_word c,C_word *av) C_noret;
C_noret_decl(f_11937)
static void C_ccall f_11937(C_word c,C_word *av) C_noret;
C_noret_decl(f_11940)
static void C_ccall f_11940(C_word c,C_word *av) C_noret;
C_noret_decl(f_11954)
static void C_ccall f_11954(C_word c,C_word *av) C_noret;
C_noret_decl(f_11966)
static void C_ccall f_11966(C_word c,C_word *av) C_noret;
C_noret_decl(f_11970)
static void f_11970(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12063)
static void C_ccall f_12063(C_word c,C_word *av) C_noret;
C_noret_decl(f_12067)
static void C_ccall f_12067(C_word c,C_word *av) C_noret;
C_noret_decl(f_12082)
static void C_ccall f_12082(C_word c,C_word *av) C_noret;
C_noret_decl(f_12102)
static void C_ccall f_12102(C_word c,C_word *av) C_noret;
C_noret_decl(f_12108)
static void C_ccall f_12108(C_word c,C_word *av) C_noret;
C_noret_decl(f_12128)
static void C_ccall f_12128(C_word c,C_word *av) C_noret;
C_noret_decl(f_12136)
static void f_12136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12161)
static void C_ccall f_12161(C_word c,C_word *av) C_noret;
C_noret_decl(f_12171)
static void C_ccall f_12171(C_word c,C_word *av) C_noret;
C_noret_decl(f_12178)
static void C_ccall f_12178(C_word c,C_word *av) C_noret;
C_noret_decl(f_12182)
static void C_ccall f_12182(C_word c,C_word *av) C_noret;
C_noret_decl(f_12186)
static void C_ccall f_12186(C_word c,C_word *av) C_noret;
C_noret_decl(f_12188)
static void C_ccall f_12188(C_word c,C_word *av) C_noret;
C_noret_decl(f_12192)
static void C_ccall f_12192(C_word c,C_word *av) C_noret;
C_noret_decl(f_12203)
static void C_ccall f_12203(C_word c,C_word *av) C_noret;
C_noret_decl(f_12205)
static void C_ccall f_12205(C_word c,C_word *av) C_noret;
C_noret_decl(f_12215)
static void C_ccall f_12215(C_word c,C_word *av) C_noret;
C_noret_decl(f_12228)
static void C_ccall f_12228(C_word c,C_word *av) C_noret;
C_noret_decl(f_12244)
static void C_ccall f_12244(C_word c,C_word *av) C_noret;
C_noret_decl(f_12247)
static void C_ccall f_12247(C_word c,C_word *av) C_noret;
C_noret_decl(f_12250)
static void C_ccall f_12250(C_word c,C_word *av) C_noret;
C_noret_decl(f_12256)
static void C_ccall f_12256(C_word c,C_word *av) C_noret;
C_noret_decl(f_12265)
static void f_12265(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12272)
static void C_ccall f_12272(C_word c,C_word *av) C_noret;
C_noret_decl(f_12286)
static void C_ccall f_12286(C_word c,C_word *av) C_noret;
C_noret_decl(f_12293)
static void C_ccall f_12293(C_word c,C_word *av) C_noret;
C_noret_decl(f_12302)
static void f_12302(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12309)
static void C_ccall f_12309(C_word c,C_word *av) C_noret;
C_noret_decl(f_12323)
static void C_ccall f_12323(C_word c,C_word *av) C_noret;
C_noret_decl(f_12331)
static void C_ccall f_12331(C_word c,C_word *av) C_noret;
C_noret_decl(f_12333)
static void C_ccall f_12333(C_word c,C_word *av) C_noret;
C_noret_decl(f_12353)
static void C_ccall f_12353(C_word c,C_word *av) C_noret;
C_noret_decl(f_12367)
static void f_12367(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12380)
static void C_ccall f_12380(C_word c,C_word *av) C_noret;
C_noret_decl(f_12428)
static void C_ccall f_12428(C_word c,C_word *av) C_noret;
C_noret_decl(f_12430)
static void C_ccall f_12430(C_word c,C_word *av) C_noret;
C_noret_decl(f_12434)
static void C_ccall f_12434(C_word c,C_word *av) C_noret;
C_noret_decl(f_12441)
static void C_ccall f_12441(C_word c,C_word *av) C_noret;
C_noret_decl(f_12449)
static void C_ccall f_12449(C_word c,C_word *av) C_noret;
C_noret_decl(f_12457)
static void C_ccall f_12457(C_word c,C_word *av) C_noret;
C_noret_decl(f_12459)
static void C_ccall f_12459(C_word c,C_word *av) C_noret;
C_noret_decl(f_12463)
static void C_ccall f_12463(C_word c,C_word *av) C_noret;
C_noret_decl(f_12466)
static void C_ccall f_12466(C_word c,C_word *av) C_noret;
C_noret_decl(f_12487)
static void C_ccall f_12487(C_word c,C_word *av) C_noret;
C_noret_decl(f_12489)
static void C_ccall f_12489(C_word c,C_word *av) C_noret;
C_noret_decl(f_12493)
static void C_ccall f_12493(C_word c,C_word *av) C_noret;
C_noret_decl(f_12504)
static void C_ccall f_12504(C_word c,C_word *av) C_noret;
C_noret_decl(f_12506)
static void C_ccall f_12506(C_word c,C_word *av) C_noret;
C_noret_decl(f_12510)
static void C_ccall f_12510(C_word c,C_word *av) C_noret;
C_noret_decl(f_12519)
static void C_ccall f_12519(C_word c,C_word *av) C_noret;
C_noret_decl(f_12522)
static void C_ccall f_12522(C_word c,C_word *av) C_noret;
C_noret_decl(f_12525)
static void C_ccall f_12525(C_word c,C_word *av) C_noret;
C_noret_decl(f_12548)
static void C_ccall f_12548(C_word c,C_word *av) C_noret;
C_noret_decl(f_12564)
static void C_ccall f_12564(C_word c,C_word *av) C_noret;
C_noret_decl(f_12566)
static void C_ccall f_12566(C_word c,C_word *av) C_noret;
C_noret_decl(f_12570)
static void C_ccall f_12570(C_word c,C_word *av) C_noret;
C_noret_decl(f_12576)
static void C_ccall f_12576(C_word c,C_word *av) C_noret;
C_noret_decl(f_12579)
static void C_ccall f_12579(C_word c,C_word *av) C_noret;
C_noret_decl(f_12603)
static void f_12603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12607)
static void C_ccall f_12607(C_word c,C_word *av) C_noret;
C_noret_decl(f_12614)
static void C_ccall f_12614(C_word c,C_word *av) C_noret;
C_noret_decl(f_12641)
static void C_ccall f_12641(C_word c,C_word *av) C_noret;
C_noret_decl(f_12643)
static void f_12643(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12668)
static void C_ccall f_12668(C_word c,C_word *av) C_noret;
C_noret_decl(f_12687)
static void C_ccall f_12687(C_word c,C_word *av) C_noret;
C_noret_decl(f_12689)
static void C_ccall f_12689(C_word c,C_word *av) C_noret;
C_noret_decl(f_12699)
static void C_ccall f_12699(C_word c,C_word *av) C_noret;
C_noret_decl(f_12709)
static void C_ccall f_12709(C_word c,C_word *av) C_noret;
C_noret_decl(f_12712)
static void C_ccall f_12712(C_word c,C_word *av) C_noret;
C_noret_decl(f_12715)
static void C_ccall f_12715(C_word c,C_word *av) C_noret;
C_noret_decl(f_12723)
static void f_12723(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12733)
static void C_ccall f_12733(C_word c,C_word *av) C_noret;
C_noret_decl(f_12736)
static void C_ccall f_12736(C_word c,C_word *av) C_noret;
C_noret_decl(f_12778)
static void C_ccall f_12778(C_word c,C_word *av) C_noret;
C_noret_decl(f_12780)
static void f_12780(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12842)
static void f_12842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12863)
static void C_ccall f_12863(C_word c,C_word *av) C_noret;
C_noret_decl(f_12865)
static void f_12865(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12890)
static void C_ccall f_12890(C_word c,C_word *av) C_noret;
C_noret_decl(f_12907)
static void C_ccall f_12907(C_word c,C_word *av) C_noret;
C_noret_decl(f_12909)
static void f_12909(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12927)
static void C_ccall f_12927(C_word c,C_word *av) C_noret;
C_noret_decl(f_12963)
static void f_12963(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12980)
static void C_ccall f_12980(C_word c,C_word *av) C_noret;
C_noret_decl(f_13037)
static void C_ccall f_13037(C_word c,C_word *av) C_noret;
C_noret_decl(f_13039)
static void C_ccall f_13039(C_word c,C_word *av) C_noret;
C_noret_decl(f_13049)
static void C_ccall f_13049(C_word c,C_word *av) C_noret;
C_noret_decl(f_13066)
static void C_ccall f_13066(C_word c,C_word *av) C_noret;
C_noret_decl(f_13087)
static void C_ccall f_13087(C_word c,C_word *av) C_noret;
C_noret_decl(f_13097)
static void C_ccall f_13097(C_word c,C_word *av) C_noret;
C_noret_decl(f_13105)
static void C_ccall f_13105(C_word c,C_word *av) C_noret;
C_noret_decl(f_13107)
static void C_ccall f_13107(C_word c,C_word *av) C_noret;
C_noret_decl(f_13123)
static void C_ccall f_13123(C_word c,C_word *av) C_noret;
C_noret_decl(f_13133)
static void f_13133(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13167)
static void f_13167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13211)
static void C_ccall f_13211(C_word c,C_word *av) C_noret;
C_noret_decl(f_13214)
static void C_ccall f_13214(C_word c,C_word *av) C_noret;
C_noret_decl(f_13217)
static void C_ccall f_13217(C_word c,C_word *av) C_noret;
C_noret_decl(f_13223)
static void C_ccall f_13223(C_word c,C_word *av) C_noret;
C_noret_decl(f_13232)
static void f_13232(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13239)
static void C_ccall f_13239(C_word c,C_word *av) C_noret;
C_noret_decl(f_13253)
static void C_ccall f_13253(C_word c,C_word *av) C_noret;
C_noret_decl(f_13260)
static void C_ccall f_13260(C_word c,C_word *av) C_noret;
C_noret_decl(f_13269)
static void f_13269(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13276)
static void C_ccall f_13276(C_word c,C_word *av) C_noret;
C_noret_decl(f_13288)
static void f_13288(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13299)
static void C_ccall f_13299(C_word c,C_word *av) C_noret;
C_noret_decl(f_13326)
static void C_ccall f_13326(C_word c,C_word *av) C_noret;
C_noret_decl(f_13328)
static void C_ccall f_13328(C_word c,C_word *av) C_noret;
C_noret_decl(f_13332)
static void C_ccall f_13332(C_word c,C_word *av) C_noret;
C_noret_decl(f_13348)
static void C_ccall f_13348(C_word c,C_word *av) C_noret;
C_noret_decl(f_13364)
static void C_ccall f_13364(C_word c,C_word *av) C_noret;
C_noret_decl(f_13366)
static void C_ccall f_13366(C_word c,C_word *av) C_noret;
C_noret_decl(f_13370)
static void C_ccall f_13370(C_word c,C_word *av) C_noret;
C_noret_decl(f_13379)
static void C_ccall f_13379(C_word c,C_word *av) C_noret;
C_noret_decl(f_13386)
static void C_ccall f_13386(C_word c,C_word *av) C_noret;
C_noret_decl(f_13394)
static void C_ccall f_13394(C_word c,C_word *av) C_noret;
C_noret_decl(f_13396)
static void C_ccall f_13396(C_word c,C_word *av) C_noret;
C_noret_decl(f_13421)
static void C_ccall f_13421(C_word c,C_word *av) C_noret;
C_noret_decl(f_13425)
static void f_13425(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13475)
static void C_ccall f_13475(C_word c,C_word *av) C_noret;
C_noret_decl(f_13477)
static void C_ccall f_13477(C_word c,C_word *av) C_noret;
C_noret_decl(f_13481)
static void C_ccall f_13481(C_word c,C_word *av) C_noret;
C_noret_decl(f_13484)
static void C_ccall f_13484(C_word c,C_word *av) C_noret;
C_noret_decl(f_13487)
static void C_ccall f_13487(C_word c,C_word *av) C_noret;
C_noret_decl(f_13490)
static void C_ccall f_13490(C_word c,C_word *av) C_noret;
C_noret_decl(f_13493)
static void C_ccall f_13493(C_word c,C_word *av) C_noret;
C_noret_decl(f_13496)
static void C_ccall f_13496(C_word c,C_word *av) C_noret;
C_noret_decl(f_13498)
static void f_13498(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13508)
static void f_13508(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13533)
static C_word f_13533(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_13547)
static void C_ccall f_13547(C_word c,C_word *av) C_noret;
C_noret_decl(f_13549)
static void f_13549(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13628)
static void C_ccall f_13628(C_word c,C_word *av) C_noret;
C_noret_decl(f_13653)
static void C_ccall f_13653(C_word c,C_word *av) C_noret;
C_noret_decl(f_13660)
static void C_ccall f_13660(C_word c,C_word *av) C_noret;
C_noret_decl(f_13664)
static void C_ccall f_13664(C_word c,C_word *av) C_noret;
C_noret_decl(f_13684)
static void f_13684(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13709)
static void C_ccall f_13709(C_word c,C_word *av) C_noret;
C_noret_decl(f_13748)
static void C_ccall f_13748(C_word c,C_word *av) C_noret;
C_noret_decl(f_13750)
static void C_ccall f_13750(C_word c,C_word *av) C_noret;
C_noret_decl(f_13754)
static void C_ccall f_13754(C_word c,C_word *av) C_noret;
C_noret_decl(f_13757)
static void C_ccall f_13757(C_word c,C_word *av) C_noret;
C_noret_decl(f_13760)
static void C_ccall f_13760(C_word c,C_word *av) C_noret;
C_noret_decl(f_13771)
static void C_ccall f_13771(C_word c,C_word *av) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word *av) C_noret;
C_noret_decl(f_4412)
static void C_ccall f_4412(C_word c,C_word *av) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word *av) C_noret;
C_noret_decl(f_4525)
static void f_4525(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word *av) C_noret;
C_noret_decl(f_4583)
static void f_4583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word *av) C_noret;
C_noret_decl(f_5697)
static void C_ccall f_5697(C_word c,C_word *av) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word *av) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word *av) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word *av) C_noret;
C_noret_decl(f_5710)
static void C_ccall f_5710(C_word c,C_word *av) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word *av) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word *av) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word *av) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word *av) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word *av) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word *av) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word *av) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word *av) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word *av) C_noret;
C_noret_decl(f_5747)
static void C_ccall f_5747(C_word c,C_word *av) C_noret;
C_noret_decl(f_5750)
static void C_ccall f_5750(C_word c,C_word *av) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word *av) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word *av) C_noret;
C_noret_decl(f_5760)
static void C_ccall f_5760(C_word c,C_word *av) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word *av) C_noret;
C_noret_decl(f_5766)
static void C_ccall f_5766(C_word c,C_word *av) C_noret;
C_noret_decl(f_5769)
static void C_ccall f_5769(C_word c,C_word *av) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word *av) C_noret;
C_noret_decl(f_5775)
static void C_ccall f_5775(C_word c,C_word *av) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word *av) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word *av) C_noret;
C_noret_decl(f_5784)
static void C_ccall f_5784(C_word c,C_word *av) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word *av) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word *av) C_noret;
C_noret_decl(f_5793)
static void C_ccall f_5793(C_word c,C_word *av) C_noret;
C_noret_decl(f_5796)
static void C_ccall f_5796(C_word c,C_word *av) C_noret;
C_noret_decl(f_5799)
static void C_ccall f_5799(C_word c,C_word *av) C_noret;
C_noret_decl(f_5803)
static void C_ccall f_5803(C_word c,C_word *av) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word *av) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word *av) C_noret;
C_noret_decl(f_5812)
static void C_ccall f_5812(C_word c,C_word *av) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815(C_word c,C_word *av) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word *av) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word *av) C_noret;
C_noret_decl(f_5830)
static void C_ccall f_5830(C_word c,C_word *av) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word *av) C_noret;
C_noret_decl(f_5836)
static void C_ccall f_5836(C_word c,C_word *av) C_noret;
C_noret_decl(f_5839)
static void C_ccall f_5839(C_word c,C_word *av) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word *av) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word *av) C_noret;
C_noret_decl(f_5848)
static void C_ccall f_5848(C_word c,C_word *av) C_noret;
C_noret_decl(f_5851)
static void C_ccall f_5851(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void C_ccall f_5854(C_word c,C_word *av) C_noret;
C_noret_decl(f_5857)
static void C_ccall f_5857(C_word c,C_word *av) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word *av) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word *av) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word *av) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word *av) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word *av) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word *av) C_noret;
C_noret_decl(f_5880)
static void C_ccall f_5880(C_word c,C_word *av) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word *av) C_noret;
C_noret_decl(f_5890)
static void C_ccall f_5890(C_word c,C_word *av) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word *av) C_noret;
C_noret_decl(f_5896)
static void f_5896(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5902)
static void f_5902(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word *av) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word *av) C_noret;
C_noret_decl(f_5928)
static void C_ccall f_5928(C_word c,C_word *av) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word *av) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word *av) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word *av) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940(C_word c,C_word *av) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word *av) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word *av) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word *av) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word *av) C_noret;
C_noret_decl(f_5955)
static void C_ccall f_5955(C_word c,C_word *av) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word *av) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word *av) C_noret;
C_noret_decl(f_5980)
static void f_5980(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5988)
static void f_5988(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word *av) C_noret;
C_noret_decl(f_6002)
static void C_ccall f_6002(C_word c,C_word *av) C_noret;
C_noret_decl(f_6012)
static void f_6012(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6016)
static void C_ccall f_6016(C_word c,C_word *av) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word *av) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word *av) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word *av) C_noret;
C_noret_decl(f_6032)
static void C_ccall f_6032(C_word c,C_word *av) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word *av) C_noret;
C_noret_decl(f_6056)
static void f_6056(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6104)
static void f_6104(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6157)
static void C_ccall f_6157(C_word c,C_word *av) C_noret;
C_noret_decl(f_6168)
static void C_ccall f_6168(C_word c,C_word *av) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word *av) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word *av) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word *av) C_noret;
C_noret_decl(f_6270)
static void C_ccall f_6270(C_word c,C_word *av) C_noret;
C_noret_decl(f_6272)
static void f_6272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6297)
static void C_ccall f_6297(C_word c,C_word *av) C_noret;
C_noret_decl(f_6328)
static void C_ccall f_6328(C_word c,C_word *av) C_noret;
C_noret_decl(f_6330)
static void C_ccall f_6330(C_word c,C_word *av) C_noret;
C_noret_decl(f_6334)
static void C_ccall f_6334(C_word c,C_word *av) C_noret;
C_noret_decl(f_6377)
static void C_ccall f_6377(C_word c,C_word *av) C_noret;
C_noret_decl(f_6379)
static void C_ccall f_6379(C_word c,C_word *av) C_noret;
C_noret_decl(f_6383)
static void C_ccall f_6383(C_word c,C_word *av) C_noret;
C_noret_decl(f_6386)
static void C_ccall f_6386(C_word c,C_word *av) C_noret;
C_noret_decl(f_6389)
static void C_ccall f_6389(C_word c,C_word *av) C_noret;
C_noret_decl(f_6392)
static void C_ccall f_6392(C_word c,C_word *av) C_noret;
C_noret_decl(f_6395)
static void C_ccall f_6395(C_word c,C_word *av) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word *av) C_noret;
C_noret_decl(f_6401)
static void C_ccall f_6401(C_word c,C_word *av) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word *av) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word *av) C_noret;
C_noret_decl(f_6410)
static void C_ccall f_6410(C_word c,C_word *av) C_noret;
C_noret_decl(f_6413)
static void C_ccall f_6413(C_word c,C_word *av) C_noret;
C_noret_decl(f_6416)
static void C_ccall f_6416(C_word c,C_word *av) C_noret;
C_noret_decl(f_6419)
static void C_ccall f_6419(C_word c,C_word *av) C_noret;
C_noret_decl(f_6422)
static void C_ccall f_6422(C_word c,C_word *av) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word *av) C_noret;
C_noret_decl(f_6428)
static void C_ccall f_6428(C_word c,C_word *av) C_noret;
C_noret_decl(f_6435)
static void f_6435(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6442)
static void f_6442(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6455)
static void C_ccall f_6455(C_word c,C_word *av) C_noret;
C_noret_decl(f_6458)
static void C_ccall f_6458(C_word c,C_word *av) C_noret;
C_noret_decl(f_6477)
static void C_ccall f_6477(C_word c,C_word *av) C_noret;
C_noret_decl(f_6523)
static void C_ccall f_6523(C_word c,C_word *av) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word *av) C_noret;
C_noret_decl(f_6573)
static void C_ccall f_6573(C_word c,C_word *av) C_noret;
C_noret_decl(f_6639)
static void C_ccall f_6639(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6765)
static void C_ccall f_6765(C_word c,C_word *av) C_noret;
C_noret_decl(f_6767)
static void C_ccall f_6767(C_word c,C_word *av) C_noret;
C_noret_decl(f_6771)
static void C_ccall f_6771(C_word c,C_word *av) C_noret;
C_noret_decl(f_6782)
static void C_ccall f_6782(C_word c,C_word *av) C_noret;
C_noret_decl(f_6785)
static void f_6785(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6808)
static void f_6808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word *av) C_noret;
C_noret_decl(f_6837)
static void C_ccall f_6837(C_word c,C_word *av) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word *av) C_noret;
C_noret_decl(f_6854)
static void C_ccall f_6854(C_word c,C_word *av) C_noret;
C_noret_decl(f_6856)
static void C_ccall f_6856(C_word c,C_word *av) C_noret;
C_noret_decl(f_6864)
static void C_ccall f_6864(C_word c,C_word *av) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word *av) C_noret;
C_noret_decl(f_6874)
static void C_ccall f_6874(C_word c,C_word *av) C_noret;
C_noret_decl(f_6878)
static void C_ccall f_6878(C_word c,C_word *av) C_noret;
C_noret_decl(f_6937)
static void C_ccall f_6937(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word *av) C_noret;
C_noret_decl(f_6946)
static void C_ccall f_6946(C_word c,C_word *av) C_noret;
C_noret_decl(f_6949)
static void C_ccall f_6949(C_word c,C_word *av) C_noret;
C_noret_decl(f_6952)
static void C_ccall f_6952(C_word c,C_word *av) C_noret;
C_noret_decl(f_6959)
static void f_6959(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6969)
static void C_ccall f_6969(C_word c,C_word *av) C_noret;
C_noret_decl(f_6972)
static void C_ccall f_6972(C_word c,C_word *av) C_noret;
C_noret_decl(f_6978)
static void C_ccall f_6978(C_word c,C_word *av) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word *av) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word *av) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word *av) C_noret;
C_noret_decl(f_7038)
static void C_ccall f_7038(C_word c,C_word *av) C_noret;
C_noret_decl(f_7041)
static void C_ccall f_7041(C_word c,C_word *av) C_noret;
C_noret_decl(f_7058)
static void C_ccall f_7058(C_word c,C_word *av) C_noret;
C_noret_decl(f_7064)
static void C_ccall f_7064(C_word c,C_word *av) C_noret;
C_noret_decl(f_7081)
static void C_ccall f_7081(C_word c,C_word *av) C_noret;
C_noret_decl(f_7104)
static void C_ccall f_7104(C_word c,C_word *av) C_noret;
C_noret_decl(f_7132)
static void C_ccall f_7132(C_word c,C_word *av) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word *av) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word *av) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word *av) C_noret;
C_noret_decl(f_7144)
static void C_ccall f_7144(C_word c,C_word *av) C_noret;
C_noret_decl(f_7147)
static void C_ccall f_7147(C_word c,C_word *av) C_noret;
C_noret_decl(f_7154)
static void f_7154(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_7164)
static void C_ccall f_7164(C_word c,C_word *av) C_noret;
C_noret_decl(f_7167)
static void C_ccall f_7167(C_word c,C_word *av) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word *av) C_noret;
C_noret_decl(f_7180)
static void C_ccall f_7180(C_word c,C_word *av) C_noret;
C_noret_decl(f_7196)
static void C_ccall f_7196(C_word c,C_word *av) C_noret;
C_noret_decl(f_7206)
static void C_ccall f_7206(C_word c,C_word *av) C_noret;
C_noret_decl(f_7229)
static void C_ccall f_7229(C_word c,C_word *av) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word *av) C_noret;
C_noret_decl(f_7249)
static void C_ccall f_7249(C_word c,C_word *av) C_noret;
C_noret_decl(f_7255)
static void C_ccall f_7255(C_word c,C_word *av) C_noret;
C_noret_decl(f_7304)
static void C_ccall f_7304(C_word c,C_word *av) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word *av) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word *av) C_noret;
C_noret_decl(f_7316)
static void C_ccall f_7316(C_word c,C_word *av) C_noret;
C_noret_decl(f_7319)
static void C_ccall f_7319(C_word c,C_word *av) C_noret;
C_noret_decl(f_7331)
static void C_ccall f_7331(C_word c,C_word *av) C_noret;
C_noret_decl(f_7334)
static void C_ccall f_7334(C_word c,C_word *av) C_noret;
C_noret_decl(f_7337)
static void C_ccall f_7337(C_word c,C_word *av) C_noret;
C_noret_decl(f_7340)
static void C_ccall f_7340(C_word c,C_word *av) C_noret;
C_noret_decl(f_7343)
static void C_ccall f_7343(C_word c,C_word *av) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word *av) C_noret;
C_noret_decl(f_7352)
static void C_ccall f_7352(C_word c,C_word *av) C_noret;
C_noret_decl(f_7361)
static void C_ccall f_7361(C_word c,C_word *av) C_noret;
C_noret_decl(f_7362)
static void f_7362(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word *av) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word *av) C_noret;
C_noret_decl(f_7411)
static void f_7411(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7430)
static void f_7430(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7436)
static void f_7436(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7447)
static void C_ccall f_7447(C_word c,C_word *av) C_noret;
C_noret_decl(f_7451)
static void f_7451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7455)
static void C_ccall f_7455(C_word c,C_word *av) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word *av) C_noret;
C_noret_decl(f_7525)
static void f_7525(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7536)
static void C_ccall f_7536(C_word c,C_word *av) C_noret;
C_noret_decl(f_7611)
static void C_ccall f_7611(C_word c,C_word *av) C_noret;
C_noret_decl(f_7678)
static C_word f_7678(C_word t0,C_word t1);
C_noret_decl(f_7691)
static void C_ccall f_7691(C_word c,C_word *av) C_noret;
C_noret_decl(f_7693)
static void f_7693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7739)
static void f_7739(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7749)
static void C_ccall f_7749(C_word c,C_word *av) C_noret;
C_noret_decl(f_7762)
static void f_7762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word *av) C_noret;
C_noret_decl(f_7804)
static void C_ccall f_7804(C_word c,C_word *av) C_noret;
C_noret_decl(f_7808)
static void C_ccall f_7808(C_word c,C_word *av) C_noret;
C_noret_decl(f_7816)
static void C_ccall f_7816(C_word c,C_word *av) C_noret;
C_noret_decl(f_7818)
static void C_ccall f_7818(C_word c,C_word *av) C_noret;
C_noret_decl(f_7822)
static void C_ccall f_7822(C_word c,C_word *av) C_noret;
C_noret_decl(f_7834)
static void C_ccall f_7834(C_word c,C_word *av) C_noret;
C_noret_decl(f_7837)
static void C_ccall f_7837(C_word c,C_word *av) C_noret;
C_noret_decl(f_7840)
static void C_ccall f_7840(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word *av) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word *av) C_noret;
C_noret_decl(f_7856)
static void f_7856(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7882)
static void C_ccall f_7882(C_word c,C_word *av) C_noret;
C_noret_decl(f_7893)
static void C_ccall f_7893(C_word c,C_word *av) C_noret;
C_noret_decl(f_7976)
static void C_ccall f_7976(C_word c,C_word *av) C_noret;
C_noret_decl(f_7978)
static void C_ccall f_7978(C_word c,C_word *av) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word *av) C_noret;
C_noret_decl(f_7985)
static void C_ccall f_7985(C_word c,C_word *av) C_noret;
C_noret_decl(f_8015)
static void C_ccall f_8015(C_word c,C_word *av) C_noret;
C_noret_decl(f_8025)
static void C_ccall f_8025(C_word c,C_word *av) C_noret;
C_noret_decl(f_8053)
static void C_ccall f_8053(C_word c,C_word *av) C_noret;
C_noret_decl(f_8055)
static void C_ccall f_8055(C_word c,C_word *av) C_noret;
C_noret_decl(f_8059)
static void C_ccall f_8059(C_word c,C_word *av) C_noret;
C_noret_decl(f_8078)
static void C_ccall f_8078(C_word c,C_word *av) C_noret;
C_noret_decl(f_8082)
static void C_ccall f_8082(C_word c,C_word *av) C_noret;
C_noret_decl(f_8086)
static void C_ccall f_8086(C_word c,C_word *av) C_noret;
C_noret_decl(f_8088)
static void f_8088(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8109)
static void C_ccall f_8109(C_word c,C_word *av) C_noret;
C_noret_decl(f_8127)
static void C_ccall f_8127(C_word c,C_word *av) C_noret;
C_noret_decl(f_8135)
static void C_ccall f_8135(C_word c,C_word *av) C_noret;
C_noret_decl(f_8139)
static void C_ccall f_8139(C_word c,C_word *av) C_noret;
C_noret_decl(f_8149)
static void f_8149(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8155)
static void f_8155(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8169)
static void C_ccall f_8169(C_word c,C_word *av) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word *av) C_noret;
C_noret_decl(f_8219)
static void C_ccall f_8219(C_word c,C_word *av) C_noret;
C_noret_decl(f_8227)
static void C_ccall f_8227(C_word c,C_word *av) C_noret;
C_noret_decl(f_8235)
static void C_ccall f_8235(C_word c,C_word *av) C_noret;
C_noret_decl(f_8239)
static void C_ccall f_8239(C_word c,C_word *av) C_noret;
C_noret_decl(f_8242)
static void C_ccall f_8242(C_word c,C_word *av) C_noret;
C_noret_decl(f_8245)
static void C_ccall f_8245(C_word c,C_word *av) C_noret;
C_noret_decl(f_8254)
static void C_ccall f_8254(C_word c,C_word *av) C_noret;
C_noret_decl(f_8255)
static void f_8255(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8263)
static void C_ccall f_8263(C_word c,C_word *av) C_noret;
C_noret_decl(f_8267)
static void C_ccall f_8267(C_word c,C_word *av) C_noret;
C_noret_decl(f_8271)
static void f_8271(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8279)
static void C_ccall f_8279(C_word c,C_word *av) C_noret;
C_noret_decl(f_8285)
static void C_ccall f_8285(C_word c,C_word *av) C_noret;
C_noret_decl(f_8291)
static void C_ccall f_8291(C_word c,C_word *av) C_noret;
C_noret_decl(f_8294)
static void C_ccall f_8294(C_word c,C_word *av) C_noret;
C_noret_decl(f_8297)
static void C_ccall f_8297(C_word c,C_word *av) C_noret;
C_noret_decl(f_8301)
static void f_8301(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8309)
static void C_ccall f_8309(C_word c,C_word *av) C_noret;
C_noret_decl(f_8312)
static void C_ccall f_8312(C_word c,C_word *av) C_noret;
C_noret_decl(f_8315)
static void C_ccall f_8315(C_word c,C_word *av) C_noret;
C_noret_decl(f_8318)
static void C_ccall f_8318(C_word c,C_word *av) C_noret;
C_noret_decl(f_8325)
static void C_ccall f_8325(C_word c,C_word *av) C_noret;
C_noret_decl(f_8351)
static void f_8351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8376)
static void C_ccall f_8376(C_word c,C_word *av) C_noret;
C_noret_decl(f_8385)
static void f_8385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8419)
static void f_8419(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8444)
static void C_ccall f_8444(C_word c,C_word *av) C_noret;
C_noret_decl(f_8453)
static void f_8453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8501)
static void C_ccall f_8501(C_word c,C_word *av) C_noret;
C_noret_decl(f_8503)
static void C_ccall f_8503(C_word c,C_word *av) C_noret;
C_noret_decl(f_8507)
static void C_ccall f_8507(C_word c,C_word *av) C_noret;
C_noret_decl(f_8517)
static void f_8517(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8544)
static void C_ccall f_8544(C_word c,C_word *av) C_noret;
C_noret_decl(f_8547)
static void C_ccall f_8547(C_word c,C_word *av) C_noret;
C_noret_decl(f_8562)
static void C_ccall f_8562(C_word c,C_word *av) C_noret;
C_noret_decl(f_8570)
static void C_ccall f_8570(C_word c,C_word *av) C_noret;
C_noret_decl(f_8579)
static void C_ccall f_8579(C_word c,C_word *av) C_noret;
C_noret_decl(f_8594)
static void C_ccall f_8594(C_word c,C_word *av) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word *av) C_noret;
C_noret_decl(f_8607)
static void C_ccall f_8607(C_word c,C_word *av) C_noret;
C_noret_decl(f_8623)
static void C_ccall f_8623(C_word c,C_word *av) C_noret;
C_noret_decl(f_8643)
static void C_ccall f_8643(C_word c,C_word *av) C_noret;
C_noret_decl(f_8645)
static void C_ccall f_8645(C_word c,C_word *av) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word *av) C_noret;
C_noret_decl(f_8651)
static void C_ccall f_8651(C_word c,C_word *av) C_noret;
C_noret_decl(f_8660)
static void f_8660(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8663)
static void C_ccall f_8663(C_word c,C_word *av) C_noret;
C_noret_decl(f_8672)
static void f_8672(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8688)
static void C_ccall f_8688(C_word c,C_word *av) C_noret;
C_noret_decl(f_8692)
static void C_ccall f_8692(C_word c,C_word *av) C_noret;
C_noret_decl(f_8735)
static void C_ccall f_8735(C_word c,C_word *av) C_noret;
C_noret_decl(f_8747)
static void C_ccall f_8747(C_word c,C_word *av) C_noret;
C_noret_decl(f_8749)
static void C_ccall f_8749(C_word c,C_word *av) C_noret;
C_noret_decl(f_8753)
static void C_ccall f_8753(C_word c,C_word *av) C_noret;
C_noret_decl(f_8756)
static void C_ccall f_8756(C_word c,C_word *av) C_noret;
C_noret_decl(f_8775)
static void C_ccall f_8775(C_word c,C_word *av) C_noret;
C_noret_decl(f_8791)
static void C_ccall f_8791(C_word c,C_word *av) C_noret;
C_noret_decl(f_8793)
static void C_ccall f_8793(C_word c,C_word *av) C_noret;
C_noret_decl(f_8797)
static void C_ccall f_8797(C_word c,C_word *av) C_noret;
C_noret_decl(f_8800)
static void C_ccall f_8800(C_word c,C_word *av) C_noret;
C_noret_decl(f_8813)
static void C_ccall f_8813(C_word c,C_word *av) C_noret;
C_noret_decl(f_8815)
static void C_ccall f_8815(C_word c,C_word *av) C_noret;
C_noret_decl(f_8819)
static void C_ccall f_8819(C_word c,C_word *av) C_noret;
C_noret_decl(f_8833)
static void C_ccall f_8833(C_word c,C_word *av) C_noret;
C_noret_decl(f_8839)
static void C_ccall f_8839(C_word c,C_word *av) C_noret;
C_noret_decl(f_8864)
static void C_ccall f_8864(C_word c,C_word *av) C_noret;
C_noret_decl(f_8866)
static void C_ccall f_8866(C_word c,C_word *av) C_noret;
C_noret_decl(f_8873)
static void C_ccall f_8873(C_word c,C_word *av) C_noret;
C_noret_decl(f_8879)
static void C_ccall f_8879(C_word c,C_word *av) C_noret;
C_noret_decl(f_8883)
static void C_ccall f_8883(C_word c,C_word *av) C_noret;
C_noret_decl(f_8893)
static void C_ccall f_8893(C_word c,C_word *av) C_noret;
C_noret_decl(f_8895)
static void f_8895(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8924)
static void C_ccall f_8924(C_word c,C_word *av) C_noret;
C_noret_decl(f_8943)
static void f_8943(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8977)
static void f_8977(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8995)
static void C_ccall f_8995(C_word c,C_word *av) C_noret;
C_noret_decl(f_9001)
static void f_9001(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9035)
static void f_9035(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9071)
static void C_ccall f_9071(C_word c,C_word *av) C_noret;
C_noret_decl(f_9073)
static void C_ccall f_9073(C_word c,C_word *av) C_noret;
C_noret_decl(f_9077)
static void C_ccall f_9077(C_word c,C_word *av) C_noret;
C_noret_decl(f_9085)
static void C_ccall f_9085(C_word c,C_word *av) C_noret;
C_noret_decl(f_9090)
static void f_9090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9115)
static void C_ccall f_9115(C_word c,C_word *av) C_noret;
C_noret_decl(f_9125)
static void C_ccall f_9125(C_word c,C_word *av) C_noret;
C_noret_decl(f_9127)
static void C_ccall f_9127(C_word c,C_word *av) C_noret;
C_noret_decl(f_9131)
static void C_ccall f_9131(C_word c,C_word *av) C_noret;
C_noret_decl(f_9137)
static void C_ccall f_9137(C_word c,C_word *av) C_noret;
C_noret_decl(f_9158)
static void C_ccall f_9158(C_word c,C_word *av) C_noret;
C_noret_decl(f_9165)
static void C_ccall f_9165(C_word c,C_word *av) C_noret;
C_noret_decl(f_9188)
static void C_ccall f_9188(C_word c,C_word *av) C_noret;
C_noret_decl(f_9192)
static void C_ccall f_9192(C_word c,C_word *av) C_noret;
C_noret_decl(f_9213)
static void C_ccall f_9213(C_word c,C_word *av) C_noret;
C_noret_decl(f_9216)
static void C_ccall f_9216(C_word c,C_word *av) C_noret;
C_noret_decl(f_9220)
static void f_9220(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9228)
static void C_ccall f_9228(C_word c,C_word *av) C_noret;
C_noret_decl(f_9232)
static void C_ccall f_9232(C_word c,C_word *av) C_noret;
C_noret_decl(f_9238)
static void C_ccall f_9238(C_word c,C_word *av) C_noret;
C_noret_decl(f_9239)
static void C_ccall f_9239(C_word c,C_word *av) C_noret;
C_noret_decl(f_9250)
static void C_ccall f_9250(C_word c,C_word *av) C_noret;
C_noret_decl(f_9265)
static void C_ccall f_9265(C_word c,C_word *av) C_noret;
C_noret_decl(f_9267)
static void f_9267(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9286)
static void f_9286(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9294)
static void C_ccall f_9294(C_word c,C_word *av) C_noret;
C_noret_decl(f_9300)
static void C_ccall f_9300(C_word c,C_word *av) C_noret;
C_noret_decl(f_9302)
static void f_9302(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9327)
static void C_ccall f_9327(C_word c,C_word *av) C_noret;
C_noret_decl(f_9351)
static void C_ccall f_9351(C_word c,C_word *av) C_noret;
C_noret_decl(f_9388)
static void C_ccall f_9388(C_word c,C_word *av) C_noret;
C_noret_decl(f_9416)
static void f_9416(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9450)
static void f_9450(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9481)
static void C_ccall f_9481(C_word c,C_word *av) C_noret;
C_noret_decl(f_9488)
static void C_ccall f_9488(C_word c,C_word *av) C_noret;
C_noret_decl(f_9494)
static void f_9494(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9519)
static void C_ccall f_9519(C_word c,C_word *av) C_noret;
C_noret_decl(f_9528)
static void f_9528(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9541)
static void C_ccall f_9541(C_word c,C_word *av) C_noret;
C_noret_decl(f_9566)
static void f_9566(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9602)
static void C_ccall f_9602(C_word c,C_word *av) C_noret;
C_noret_decl(f_9604)
static void C_ccall f_9604(C_word c,C_word *av) C_noret;
C_noret_decl(f_9608)
static void C_ccall f_9608(C_word c,C_word *av) C_noret;
C_noret_decl(f_9615)
static void C_ccall f_9615(C_word c,C_word *av) C_noret;
C_noret_decl(f_9619)
static void C_ccall f_9619(C_word c,C_word *av) C_noret;
C_noret_decl(f_9627)
static void C_ccall f_9627(C_word c,C_word *av) C_noret;
C_noret_decl(f_9641)
static void C_ccall f_9641(C_word c,C_word *av) C_noret;
C_noret_decl(f_9647)
static void C_ccall f_9647(C_word c,C_word *av) C_noret;
C_noret_decl(f_9654)
static void C_ccall f_9654(C_word c,C_word *av) C_noret;
C_noret_decl(f_9660)
static void C_ccall f_9660(C_word c,C_word *av) C_noret;
C_noret_decl(f_9673)
static void f_9673(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9707)
static void f_9707(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9717)
static void C_ccall f_9717(C_word c,C_word *av) C_noret;
C_noret_decl(f_9732)
static void C_ccall f_9732(C_word c,C_word *av) C_noret;
C_noret_decl(f_9734)
static void C_ccall f_9734(C_word c,C_word *av) C_noret;
C_noret_decl(f_9738)
static void C_ccall f_9738(C_word c,C_word *av) C_noret;
C_noret_decl(f_9753)
static void C_ccall f_9753(C_word c,C_word *av) C_noret;
C_noret_decl(f_9755)
static void C_ccall f_9755(C_word c,C_word *av) C_noret;
C_noret_decl(f_9759)
static void C_ccall f_9759(C_word c,C_word *av) C_noret;
C_noret_decl(f_9781)
static void C_ccall f_9781(C_word c,C_word *av) C_noret;
C_noret_decl(f_9783)
static void C_ccall f_9783(C_word c,C_word *av) C_noret;
C_noret_decl(f_9787)
static void C_ccall f_9787(C_word c,C_word *av) C_noret;
C_noret_decl(f_9805)
static void C_ccall f_9805(C_word c,C_word *av) C_noret;
C_noret_decl(f_9807)
static void C_ccall f_9807(C_word c,C_word *av) C_noret;
C_noret_decl(f_9816)
static void f_9816(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9822)
static void C_ccall f_9822(C_word c,C_word *av) C_noret;
C_noret_decl(f_9828)
static void C_ccall f_9828(C_word c,C_word *av) C_noret;
C_noret_decl(f_9847)
static void C_ccall f_9847(C_word c,C_word *av) C_noret;
C_noret_decl(f_9849)
static void f_9849(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9874)
static void C_ccall f_9874(C_word c,C_word *av) C_noret;
C_noret_decl(f_9885)
static void C_ccall f_9885(C_word c,C_word *av) C_noret;
C_noret_decl(f_9887)
static void C_ccall f_9887(C_word c,C_word *av) C_noret;
C_noret_decl(f_9906)
static void C_ccall f_9906(C_word c,C_word *av) C_noret;
C_noret_decl(f_9914)
static void C_ccall f_9914(C_word c,C_word *av) C_noret;
C_noret_decl(f_9923)
static void C_ccall f_9923(C_word c,C_word *av) C_noret;
C_noret_decl(f_9929)
static void C_ccall f_9929(C_word c,C_word *av) C_noret;
C_noret_decl(f_9933)
static void f_9933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9941)
static void C_ccall f_9941(C_word c,C_word *av) C_noret;
C_noret_decl(f_9947)
static void C_ccall f_9947(C_word c,C_word *av) C_noret;
C_noret_decl(f_9951)
static void f_9951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9959)
static void C_ccall f_9959(C_word c,C_word *av) C_noret;
C_noret_decl(f_9962)
static void C_ccall f_9962(C_word c,C_word *av) C_noret;
C_noret_decl(f_9966)
static void f_9966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9974)
static void C_ccall f_9974(C_word c,C_word *av) C_noret;
C_noret_decl(f_9977)
static void C_ccall f_9977(C_word c,C_word *av) C_noret;
C_noret_decl(f_9990)
static void C_ccall f_9990(C_word c,C_word *av) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_extern void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10096)
static void C_ccall trf_10096(C_word c,C_word *av) C_noret;
static void C_ccall trf_10096(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10096(t0,t1,t2,t3);}

C_noret_decl(trf_10144)
static void C_ccall trf_10144(C_word c,C_word *av) C_noret;
static void C_ccall trf_10144(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10144(t0,t1,t2,t3);}

C_noret_decl(trf_10192)
static void C_ccall trf_10192(C_word c,C_word *av) C_noret;
static void C_ccall trf_10192(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_10192(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10199)
static void C_ccall trf_10199(C_word c,C_word *av) C_noret;
static void C_ccall trf_10199(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10199(t0,t1);}

C_noret_decl(trf_10333)
static void C_ccall trf_10333(C_word c,C_word *av) C_noret;
static void C_ccall trf_10333(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10333(t0,t1,t2,t3);}

C_noret_decl(trf_10381)
static void C_ccall trf_10381(C_word c,C_word *av) C_noret;
static void C_ccall trf_10381(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10381(t0,t1,t2,t3);}

C_noret_decl(trf_10429)
static void C_ccall trf_10429(C_word c,C_word *av) C_noret;
static void C_ccall trf_10429(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_10429(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10436)
static void C_ccall trf_10436(C_word c,C_word *av) C_noret;
static void C_ccall trf_10436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10436(t0,t1);}

C_noret_decl(trf_10499)
static void C_ccall trf_10499(C_word c,C_word *av) C_noret;
static void C_ccall trf_10499(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10499(t0,t1,t2,t3);}

C_noret_decl(trf_10547)
static void C_ccall trf_10547(C_word c,C_word *av) C_noret;
static void C_ccall trf_10547(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10547(t0,t1,t2,t3);}

C_noret_decl(trf_10595)
static void C_ccall trf_10595(C_word c,C_word *av) C_noret;
static void C_ccall trf_10595(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10595(t0,t1,t2,t3);}

C_noret_decl(trf_10643)
static void C_ccall trf_10643(C_word c,C_word *av) C_noret;
static void C_ccall trf_10643(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10643(t0,t1,t2);}

C_noret_decl(trf_10677)
static void C_ccall trf_10677(C_word c,C_word *av) C_noret;
static void C_ccall trf_10677(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10677(t0,t1,t2);}

C_noret_decl(trf_10711)
static void C_ccall trf_10711(C_word c,C_word *av) C_noret;
static void C_ccall trf_10711(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10711(t0,t1,t2);}

C_noret_decl(trf_10745)
static void C_ccall trf_10745(C_word c,C_word *av) C_noret;
static void C_ccall trf_10745(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10745(t0,t1,t2);}

C_noret_decl(trf_10779)
static void C_ccall trf_10779(C_word c,C_word *av) C_noret;
static void C_ccall trf_10779(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10779(t0,t1,t2);}

C_noret_decl(trf_10839)
static void C_ccall trf_10839(C_word c,C_word *av) C_noret;
static void C_ccall trf_10839(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10839(t0,t1);}

C_noret_decl(trf_10854)
static void C_ccall trf_10854(C_word c,C_word *av) C_noret;
static void C_ccall trf_10854(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10854(t0,t1);}

C_noret_decl(trf_10934)
static void C_ccall trf_10934(C_word c,C_word *av) C_noret;
static void C_ccall trf_10934(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10934(t0,t1,t2,t3);}

C_noret_decl(trf_10982)
static void C_ccall trf_10982(C_word c,C_word *av) C_noret;
static void C_ccall trf_10982(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10982(t0,t1,t2,t3);}

C_noret_decl(trf_11081)
static void C_ccall trf_11081(C_word c,C_word *av) C_noret;
static void C_ccall trf_11081(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11081(t0,t1,t2,t3);}

C_noret_decl(trf_11129)
static void C_ccall trf_11129(C_word c,C_word *av) C_noret;
static void C_ccall trf_11129(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11129(t0,t1,t2,t3);}

C_noret_decl(trf_11212)
static void C_ccall trf_11212(C_word c,C_word *av) C_noret;
static void C_ccall trf_11212(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11212(t0,t1,t2,t3);}

C_noret_decl(trf_11262)
static void C_ccall trf_11262(C_word c,C_word *av) C_noret;
static void C_ccall trf_11262(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11262(t0,t1,t2);}

C_noret_decl(trf_11282)
static void C_ccall trf_11282(C_word c,C_word *av) C_noret;
static void C_ccall trf_11282(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11282(t0,t1,t2,t3);}

C_noret_decl(trf_11330)
static void C_ccall trf_11330(C_word c,C_word *av) C_noret;
static void C_ccall trf_11330(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11330(t0,t1,t2);}

C_noret_decl(trf_11364)
static void C_ccall trf_11364(C_word c,C_word *av) C_noret;
static void C_ccall trf_11364(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11364(t0,t1,t2);}

C_noret_decl(trf_11398)
static void C_ccall trf_11398(C_word c,C_word *av) C_noret;
static void C_ccall trf_11398(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11398(t0,t1,t2);}

C_noret_decl(trf_11432)
static void C_ccall trf_11432(C_word c,C_word *av) C_noret;
static void C_ccall trf_11432(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11432(t0,t1,t2);}

C_noret_decl(trf_11497)
static void C_ccall trf_11497(C_word c,C_word *av) C_noret;
static void C_ccall trf_11497(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11497(t0,t1,t2);}

C_noret_decl(trf_11562)
static void C_ccall trf_11562(C_word c,C_word *av) C_noret;
static void C_ccall trf_11562(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11562(t0,t1,t2);}

C_noret_decl(trf_11627)
static void C_ccall trf_11627(C_word c,C_word *av) C_noret;
static void C_ccall trf_11627(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11627(t0,t1,t2);}

C_noret_decl(trf_11825)
static void C_ccall trf_11825(C_word c,C_word *av) C_noret;
static void C_ccall trf_11825(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11825(t0,t1,t2);}

C_noret_decl(trf_11838)
static void C_ccall trf_11838(C_word c,C_word *av) C_noret;
static void C_ccall trf_11838(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11838(t0,t1);}

C_noret_decl(trf_11918)
static void C_ccall trf_11918(C_word c,C_word *av) C_noret;
static void C_ccall trf_11918(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11918(t0,t1,t2,t3);}

C_noret_decl(trf_11970)
static void C_ccall trf_11970(C_word c,C_word *av) C_noret;
static void C_ccall trf_11970(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11970(t0,t1);}

C_noret_decl(trf_12136)
static void C_ccall trf_12136(C_word c,C_word *av) C_noret;
static void C_ccall trf_12136(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12136(t0,t1,t2);}

C_noret_decl(trf_12265)
static void C_ccall trf_12265(C_word c,C_word *av) C_noret;
static void C_ccall trf_12265(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12265(t0,t1,t2,t3);}

C_noret_decl(trf_12302)
static void C_ccall trf_12302(C_word c,C_word *av) C_noret;
static void C_ccall trf_12302(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12302(t0,t1,t2,t3);}

C_noret_decl(trf_12367)
static void C_ccall trf_12367(C_word c,C_word *av) C_noret;
static void C_ccall trf_12367(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12367(t0,t1);}

C_noret_decl(trf_12603)
static void C_ccall trf_12603(C_word c,C_word *av) C_noret;
static void C_ccall trf_12603(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12603(t0,t1,t2);}

C_noret_decl(trf_12643)
static void C_ccall trf_12643(C_word c,C_word *av) C_noret;
static void C_ccall trf_12643(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12643(t0,t1,t2);}

C_noret_decl(trf_12723)
static void C_ccall trf_12723(C_word c,C_word *av) C_noret;
static void C_ccall trf_12723(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_12723(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12780)
static void C_ccall trf_12780(C_word c,C_word *av) C_noret;
static void C_ccall trf_12780(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12780(t0,t1,t2,t3);}

C_noret_decl(trf_12842)
static void C_ccall trf_12842(C_word c,C_word *av) C_noret;
static void C_ccall trf_12842(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12842(t0,t1);}

C_noret_decl(trf_12865)
static void C_ccall trf_12865(C_word c,C_word *av) C_noret;
static void C_ccall trf_12865(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12865(t0,t1,t2);}

C_noret_decl(trf_12909)
static void C_ccall trf_12909(C_word c,C_word *av) C_noret;
static void C_ccall trf_12909(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12909(t0,t1,t2,t3);}

C_noret_decl(trf_12963)
static void C_ccall trf_12963(C_word c,C_word *av) C_noret;
static void C_ccall trf_12963(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12963(t0,t1);}

C_noret_decl(trf_13133)
static void C_ccall trf_13133(C_word c,C_word *av) C_noret;
static void C_ccall trf_13133(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13133(t0,t1,t2);}

C_noret_decl(trf_13167)
static void C_ccall trf_13167(C_word c,C_word *av) C_noret;
static void C_ccall trf_13167(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13167(t0,t1,t2);}

C_noret_decl(trf_13232)
static void C_ccall trf_13232(C_word c,C_word *av) C_noret;
static void C_ccall trf_13232(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_13232(t0,t1,t2,t3);}

C_noret_decl(trf_13269)
static void C_ccall trf_13269(C_word c,C_word *av) C_noret;
static void C_ccall trf_13269(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_13269(t0,t1,t2,t3);}

C_noret_decl(trf_13288)
static void C_ccall trf_13288(C_word c,C_word *av) C_noret;
static void C_ccall trf_13288(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13288(t0,t1);}

C_noret_decl(trf_13425)
static void C_ccall trf_13425(C_word c,C_word *av) C_noret;
static void C_ccall trf_13425(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13425(t0,t1);}

C_noret_decl(trf_13498)
static void C_ccall trf_13498(C_word c,C_word *av) C_noret;
static void C_ccall trf_13498(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13498(t0,t1,t2);}

C_noret_decl(trf_13508)
static void C_ccall trf_13508(C_word c,C_word *av) C_noret;
static void C_ccall trf_13508(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_13508(t0,t1);}

C_noret_decl(trf_13549)
static void C_ccall trf_13549(C_word c,C_word *av) C_noret;
static void C_ccall trf_13549(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13549(t0,t1,t2);}

C_noret_decl(trf_13684)
static void C_ccall trf_13684(C_word c,C_word *av) C_noret;
static void C_ccall trf_13684(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_13684(t0,t1,t2);}

C_noret_decl(trf_4525)
static void C_ccall trf_4525(C_word c,C_word *av) C_noret;
static void C_ccall trf_4525(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4525(t0,t1,t2);}

C_noret_decl(trf_4583)
static void C_ccall trf_4583(C_word c,C_word *av) C_noret;
static void C_ccall trf_4583(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4583(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5896)
static void C_ccall trf_5896(C_word c,C_word *av) C_noret;
static void C_ccall trf_5896(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5896(t0,t1,t2);}

C_noret_decl(trf_5902)
static void C_ccall trf_5902(C_word c,C_word *av) C_noret;
static void C_ccall trf_5902(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5902(t0,t1,t2);}

C_noret_decl(trf_5980)
static void C_ccall trf_5980(C_word c,C_word *av) C_noret;
static void C_ccall trf_5980(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5980(t0,t1,t2);}

C_noret_decl(trf_5988)
static void C_ccall trf_5988(C_word c,C_word *av) C_noret;
static void C_ccall trf_5988(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5988(t0,t1,t2,t3);}

C_noret_decl(trf_6012)
static void C_ccall trf_6012(C_word c,C_word *av) C_noret;
static void C_ccall trf_6012(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6012(t0,t1);}

C_noret_decl(trf_6056)
static void C_ccall trf_6056(C_word c,C_word *av) C_noret;
static void C_ccall trf_6056(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6056(t0,t1,t2,t3);}

C_noret_decl(trf_6104)
static void C_ccall trf_6104(C_word c,C_word *av) C_noret;
static void C_ccall trf_6104(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6104(t0,t1,t2,t3);}

C_noret_decl(trf_6272)
static void C_ccall trf_6272(C_word c,C_word *av) C_noret;
static void C_ccall trf_6272(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6272(t0,t1,t2);}

C_noret_decl(trf_6435)
static void C_ccall trf_6435(C_word c,C_word *av) C_noret;
static void C_ccall trf_6435(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6435(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6442)
static void C_ccall trf_6442(C_word c,C_word *av) C_noret;
static void C_ccall trf_6442(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6442(t0,t1);}

C_noret_decl(trf_6785)
static void C_ccall trf_6785(C_word c,C_word *av) C_noret;
static void C_ccall trf_6785(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6785(t0,t1);}

C_noret_decl(trf_6808)
static void C_ccall trf_6808(C_word c,C_word *av) C_noret;
static void C_ccall trf_6808(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6808(t0,t1);}

C_noret_decl(trf_6959)
static void C_ccall trf_6959(C_word c,C_word *av) C_noret;
static void C_ccall trf_6959(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_6959(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7154)
static void C_ccall trf_7154(C_word c,C_word *av) C_noret;
static void C_ccall trf_7154(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_7154(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_7362)
static void C_ccall trf_7362(C_word c,C_word *av) C_noret;
static void C_ccall trf_7362(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7362(t0,t1,t2);}

C_noret_decl(trf_7411)
static void C_ccall trf_7411(C_word c,C_word *av) C_noret;
static void C_ccall trf_7411(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7411(t0,t1,t2,t3);}

C_noret_decl(trf_7430)
static void C_ccall trf_7430(C_word c,C_word *av) C_noret;
static void C_ccall trf_7430(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7430(t0,t1);}

C_noret_decl(trf_7436)
static void C_ccall trf_7436(C_word c,C_word *av) C_noret;
static void C_ccall trf_7436(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7436(t0,t1);}

C_noret_decl(trf_7451)
static void C_ccall trf_7451(C_word c,C_word *av) C_noret;
static void C_ccall trf_7451(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7451(t0,t1);}

C_noret_decl(trf_7525)
static void C_ccall trf_7525(C_word c,C_word *av) C_noret;
static void C_ccall trf_7525(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7525(t0,t1);}

C_noret_decl(trf_7693)
static void C_ccall trf_7693(C_word c,C_word *av) C_noret;
static void C_ccall trf_7693(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7693(t0,t1,t2);}

C_noret_decl(trf_7739)
static void C_ccall trf_7739(C_word c,C_word *av) C_noret;
static void C_ccall trf_7739(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7739(t0,t1,t2);}

C_noret_decl(trf_7762)
static void C_ccall trf_7762(C_word c,C_word *av) C_noret;
static void C_ccall trf_7762(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7762(t0,t1,t2);}

C_noret_decl(trf_7856)
static void C_ccall trf_7856(C_word c,C_word *av) C_noret;
static void C_ccall trf_7856(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7856(t0,t1,t2,t3);}

C_noret_decl(trf_8088)
static void C_ccall trf_8088(C_word c,C_word *av) C_noret;
static void C_ccall trf_8088(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_8088(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8149)
static void C_ccall trf_8149(C_word c,C_word *av) C_noret;
static void C_ccall trf_8149(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_8149(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8155)
static void C_ccall trf_8155(C_word c,C_word *av) C_noret;
static void C_ccall trf_8155(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_8155(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8255)
static void C_ccall trf_8255(C_word c,C_word *av) C_noret;
static void C_ccall trf_8255(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8255(t0,t1,t2);}

C_noret_decl(trf_8271)
static void C_ccall trf_8271(C_word c,C_word *av) C_noret;
static void C_ccall trf_8271(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8271(t0,t1,t2);}

C_noret_decl(trf_8301)
static void C_ccall trf_8301(C_word c,C_word *av) C_noret;
static void C_ccall trf_8301(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8301(t0,t1,t2);}

C_noret_decl(trf_8351)
static void C_ccall trf_8351(C_word c,C_word *av) C_noret;
static void C_ccall trf_8351(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8351(t0,t1,t2);}

C_noret_decl(trf_8385)
static void C_ccall trf_8385(C_word c,C_word *av) C_noret;
static void C_ccall trf_8385(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8385(t0,t1,t2);}

C_noret_decl(trf_8419)
static void C_ccall trf_8419(C_word c,C_word *av) C_noret;
static void C_ccall trf_8419(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8419(t0,t1,t2);}

C_noret_decl(trf_8453)
static void C_ccall trf_8453(C_word c,C_word *av) C_noret;
static void C_ccall trf_8453(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8453(t0,t1,t2);}

C_noret_decl(trf_8517)
static void C_ccall trf_8517(C_word c,C_word *av) C_noret;
static void C_ccall trf_8517(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8517(t0,t1,t2,t3);}

C_noret_decl(trf_8660)
static void C_ccall trf_8660(C_word c,C_word *av) C_noret;
static void C_ccall trf_8660(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8660(t0,t1);}

C_noret_decl(trf_8672)
static void C_ccall trf_8672(C_word c,C_word *av) C_noret;
static void C_ccall trf_8672(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8672(t0,t1);}

C_noret_decl(trf_8895)
static void C_ccall trf_8895(C_word c,C_word *av) C_noret;
static void C_ccall trf_8895(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8895(t0,t1,t2,t3);}

C_noret_decl(trf_8943)
static void C_ccall trf_8943(C_word c,C_word *av) C_noret;
static void C_ccall trf_8943(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8943(t0,t1,t2);}

C_noret_decl(trf_8977)
static void C_ccall trf_8977(C_word c,C_word *av) C_noret;
static void C_ccall trf_8977(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8977(t0,t1,t2,t3);}

C_noret_decl(trf_9001)
static void C_ccall trf_9001(C_word c,C_word *av) C_noret;
static void C_ccall trf_9001(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9001(t0,t1,t2);}

C_noret_decl(trf_9035)
static void C_ccall trf_9035(C_word c,C_word *av) C_noret;
static void C_ccall trf_9035(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9035(t0,t1,t2);}

C_noret_decl(trf_9090)
static void C_ccall trf_9090(C_word c,C_word *av) C_noret;
static void C_ccall trf_9090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9090(t0,t1,t2);}

C_noret_decl(trf_9220)
static void C_ccall trf_9220(C_word c,C_word *av) C_noret;
static void C_ccall trf_9220(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9220(t0,t1,t2);}

C_noret_decl(trf_9267)
static void C_ccall trf_9267(C_word c,C_word *av) C_noret;
static void C_ccall trf_9267(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9267(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9286)
static void C_ccall trf_9286(C_word c,C_word *av) C_noret;
static void C_ccall trf_9286(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9286(t0,t1,t2);}

C_noret_decl(trf_9302)
static void C_ccall trf_9302(C_word c,C_word *av) C_noret;
static void C_ccall trf_9302(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9302(t0,t1,t2);}

C_noret_decl(trf_9416)
static void C_ccall trf_9416(C_word c,C_word *av) C_noret;
static void C_ccall trf_9416(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9416(t0,t1,t2);}

C_noret_decl(trf_9450)
static void C_ccall trf_9450(C_word c,C_word *av) C_noret;
static void C_ccall trf_9450(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9450(t0,t1,t2,t3);}

C_noret_decl(trf_9494)
static void C_ccall trf_9494(C_word c,C_word *av) C_noret;
static void C_ccall trf_9494(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9494(t0,t1,t2);}

C_noret_decl(trf_9528)
static void C_ccall trf_9528(C_word c,C_word *av) C_noret;
static void C_ccall trf_9528(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9528(t0,t1,t2,t3);}

C_noret_decl(trf_9566)
static void C_ccall trf_9566(C_word c,C_word *av) C_noret;
static void C_ccall trf_9566(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9566(t0,t1,t2);}

C_noret_decl(trf_9673)
static void C_ccall trf_9673(C_word c,C_word *av) C_noret;
static void C_ccall trf_9673(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9673(t0,t1,t2);}

C_noret_decl(trf_9707)
static void C_ccall trf_9707(C_word c,C_word *av) C_noret;
static void C_ccall trf_9707(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9707(t0,t1,t2);}

C_noret_decl(trf_9816)
static void C_ccall trf_9816(C_word c,C_word *av) C_noret;
static void C_ccall trf_9816(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9816(t0,t1,t2);}

C_noret_decl(trf_9849)
static void C_ccall trf_9849(C_word c,C_word *av) C_noret;
static void C_ccall trf_9849(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9849(t0,t1,t2);}

C_noret_decl(trf_9933)
static void C_ccall trf_9933(C_word c,C_word *av) C_noret;
static void C_ccall trf_9933(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9933(t0,t1,t2);}

C_noret_decl(trf_9951)
static void C_ccall trf_9951(C_word c,C_word *av) C_noret;
static void C_ccall trf_9951(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9951(t0,t1);}

C_noret_decl(trf_9966)
static void C_ccall trf_9966(C_word c,C_word *av) C_noret;
static void C_ccall trf_9966(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9966(t0,t1);}

/* k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_10007(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10007,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10499,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li95),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10499(t10,t6,((C_word*)t0)[7],((C_word*)t0)[7]);}

/* k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_10018(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(51,c,5)))){
C_save_and_reclaim((void *)f_10018,c,av);}
a=C_alloc(51);
t2=C_a_i_list(&a,4,lf[196],lf[197],C_SCHEME_TRUE,C_SCHEME_TRUE);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10269,a[2]=((C_word*)t0)[2],a[3]=((C_word)li88),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10287,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10429,a[2]=t9,a[3]=t7,a[4]=t13,a[5]=t8,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10429(t15,t11,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[3]);}

/* k10064 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_10066(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,4)))){
C_save_and_reclaim((void *)f_10066,c,av);}
a=C_alloc(28);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10070,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10082,a[2]=t2,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10144,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li90),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10144(t11,t7,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k10068 in k10064 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_10070(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(63,c,1)))){
C_save_and_reclaim((void *)f_10070,c,av);}
a=C_alloc(63);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_list(&a,4,lf[198],((C_word*)t0)[3],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
t7=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t6);
t8=C_a_i_list(&a,3,lf[35],((C_word*)t0)[7],t7);
t9=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[9],t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k10080 in k10064 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_10082(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_10082,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10094,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10096,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li89),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10096(t10,t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10092 in k10080 in k10064 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_10094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10094,c,av);}
/* chicken-syntax.scm:505: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* map-loop2149 in k10080 in k10064 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void f_10096(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10096,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
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

/* map-loop2113 in k10064 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void f_10144(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_10144,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* map-loop2071 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void f_10192(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10192,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10199,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_10199(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_10199(t6,C_SCHEME_FALSE);}}

/* k10197 in map-loop2071 in k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void f_10199(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_10199,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[2],C_fix(0));
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_a_i_list(&a,1,t2);
t5=C_a_i_list(&a,2,t3,t4);
t6=C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=((C_word*)((C_word*)t0)[5])[1];
f_10192(t9,((C_word*)t0)[6],C_slot(((C_word*)t0)[2],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)),C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g1963 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static C_word f_10269(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t4=C_a_i_list(&a,4,t1,t2,C_SCHEME_TRUE,C_SCHEME_FALSE);
t5=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t4,t2);
return(C_a_i_list(&a,2,t3,t5));}

/* k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_10287,c,av);}
a=C_alloc(31);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10291,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10307,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10381,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10381(t11,t7,((C_word*)t0)[10],((C_word*)t0)[8]);}

/* k10289 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_10291(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(46,c,5)))){
C_save_and_reclaim((void *)f_10291,c,av);}
a=C_alloc(46);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[35],t2);
t4=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,lf[36],t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10066,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10192,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li91),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10192(t15,t11,((C_word*)t0)[11],((C_word*)t0)[9],((C_word*)t0)[10]);}

/* k10305 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_10307(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_10307,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10311,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10323,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10333,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10333(t11,t7,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k10309 in k10305 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_10311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10311,c,av);}
/* chicken-syntax.scm:505: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k10321 in k10305 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_10323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_10323,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[199],((C_word*)t0)[2],C_SCHEME_FALSE);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:505: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop2035 in k10305 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void f_10333(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_10333,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,t6,t7,C_SCHEME_FALSE,C_SCHEME_TRUE);
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

/* map-loop1999 in k10285 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void f_10381(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_10381,4,t0,t1,t2,t3);}
a=C_alloc(15);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,1,t6);
t9=C_a_i_list(&a,3,lf[199],t7,t8);
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

/* map-loop1957 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void f_10429(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_10429,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10436,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_10436(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_10436(t6,C_SCHEME_FALSE);}}

/* k10434 in map-loop1957 in k10016 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void f_10436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_10436,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
t2=(
/* chicken-syntax.scm:520: g1963 */
  f_10269(C_a_i(&a,30),((C_word*)t0)[2],C_slot(((C_word*)t0)[3],C_fix(0)),C_slot(((C_word*)t0)[4],C_fix(0)),C_slot(((C_word*)t0)[5],C_fix(0)))
);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_10429(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[3],C_fix(1)),C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}
else{
t2=((C_word*)t0)[8];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[9],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* map-loop1926 in k10005 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void f_10499(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10499,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1895 in k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void f_10547(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10547,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1864 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void f_10595(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_10595,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1834 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void f_10643(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10643,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:504: g1840 */
t4=((C_word*)t0)[4];
f_9966(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10666 in map-loop1834 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_10668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10668,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10643(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1806 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void f_10677(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10677,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:503: g1812 */
t4=((C_word*)t0)[4];
f_9951(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10700 in map-loop1806 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_10702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10702,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10677(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1778 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void f_10711(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10711,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:502: g1784 */
t4=((C_word*)t0)[4];
f_9933(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10734 in map-loop1778 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_10736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10736,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10711(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1751 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void f_10745(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10745,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* map-loop1724 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void f_10779(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10779,3,t0,t1,t2);}
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

/* k10813 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_10815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10815,c,av);}
/* chicken-syntax.scm:456: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[202];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_10817(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_10817,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10821,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:460: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[202];
av2[3]=t2;
av2[4]=lf[203];
tp(5,av2);}}

/* k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_10821(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_10821,c,av);}
a=C_alloc(19);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[39]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10835,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11432,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li116),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_11432(t14,t10,t2);}

/* k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_10835(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_10835,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10839,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11398,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_11398(t11,t7,((C_word*)t0)[5]);}

/* g1427 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void f_10839(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10839,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10847,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:464: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10845 in g1427 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_10847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10847,c,av);}
t2=((C_word*)t0)[2];
/* chicken-syntax.scm:464: r */
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_10850(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_10850,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10854,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10865,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11364,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li114),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_11364(t11,t7,((C_word*)t0)[6]);}

/* g1455 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void f_10854(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10854,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10862,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:465: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k10860 in g1455 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_10862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10862,c,av);}
t2=((C_word*)t0)[2];
/* chicken-syntax.scm:465: r */
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_10865(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_10865,c,av);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11185,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11330,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_11330(t15,t11,((C_word*)t0)[6]);}

/* k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_10872(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,4)))){
C_save_and_reclaim((void *)f_10872,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[39]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11055,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11129,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li109),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11129(t12,t8,((C_word*)t0)[5],((C_word*)t0)[4]);}

/* k10894 in k11038 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_10896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_10896,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[36],t2);
t4=C_a_i_list(&a,4,lf[198],((C_word*)t0)[2],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k10906 in k11038 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_10908(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10908,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10912,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10924,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10934,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li106),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10934(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k10910 in k10906 in k11038 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_10912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10912,c,av);}
/* chicken-syntax.scm:466: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k10922 in k10906 in k11038 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_10924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10924,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[185]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:466: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1678 in k10906 in k11038 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void f_10934(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10934,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
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

/* map-loop1642 in k11038 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void f_10982(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_10982,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
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

/* k11038 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_11040(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_11040,c,av);}
a=C_alloc(36);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[36],t2);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=C_a_i_cons(&a,2,lf[36],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10896,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10908,a[2]=t6,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10982,a[2]=t9,a[3]=t13,a[4]=t10,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_10982(t15,t11,((C_word*)t0)[7],((C_word*)t0)[5]);}

/* k11053 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_11055(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_11055,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11059,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11071,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11081,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li108),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_11081(t11,t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k11057 in k11053 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_11059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11059,c,av);}
/* chicken-syntax.scm:466: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k11069 in k11053 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_11071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11071,c,av);}
a=C_alloc(6);
t2=C_a_i_list(&a,1,lf[185]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:466: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* map-loop1606 in k11053 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void f_11081(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_11081,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
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

/* map-loop1570 in k10870 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void f_11129(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_11129,4,t0,t1,t2,t3);}
a=C_alloc(12);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,3,lf[199],t6,t7);
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

/* k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_11185(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_11185,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t3=C_i_check_list_2(t1,lf[39]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11194,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11282,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[7],a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_11282(t8,t4,((C_word*)t0)[2],t1);}

/* k11192 in k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_11194(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11194,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t7=C_u_i_length(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11262,a[2]=t9,a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_11262(t11,t6,t7);}

/* k11199 in k11192 in k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_11201(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11201,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t3=C_i_check_list_2(t1,lf[39]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11210,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11212,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_11212(t8,t4,((C_word*)t0)[2],t1);}

/* k11208 in k11199 in k11192 in k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_11210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11210,c,av);}
/* chicken-syntax.scm:466: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* map-loop1536 in k11199 in k11192 in k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void f_11212(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_11212,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* loop in k11192 in k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void f_11262(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11262,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11276,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:472: loop */
t6=t4;
t7=C_fixnum_difference(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}}

/* k11274 in loop in k11192 in k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_11276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11276,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1479 in k11183 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void f_11282(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_11282,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,2,t6,t7);
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

/* map-loop1500 in k10863 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void f_11330(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11330,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* map-loop1449 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void f_11364(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11364,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11389,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:465: g1455 */
t4=((C_word*)t0)[4];
f_10854(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11387 in map-loop1449 in k10848 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_11389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11389,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11364(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1421 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void f_11398(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_11398,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:464: g1427 */
t4=((C_word*)t0)[4];
f_10839(t4,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11421 in map-loop1421 in k10833 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_11423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11423,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11398(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1394 in k10819 in a10816 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void f_11432(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11432,3,t0,t1,t2);}
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

/* k11466 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_11468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11468,c,av);}
/* chicken-syntax.scm:447: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[204];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a11469 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_11470(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11470,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11474,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:451: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[204];
av2[3]=t2;
av2[4]=lf[207];
tp(5,av2);}}

/* k11472 in a11469 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_11474(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11474,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_cdr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11495,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11497,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li118),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11497(t12,t8,t6);}

/* k11493 in k11472 in a11469 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_11495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11495,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1357 in k11472 in a11469 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void f_11497(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11497,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[205],t3,C_fast_retrieve(lf[206]));
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

/* k11531 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_11533(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11533,c,av);}
/* chicken-syntax.scm:439: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[208];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a11534 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_11535(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11535,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11539,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:443: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[208];
av2[3]=t2;
av2[4]=lf[210];
tp(5,av2);}}

/* k11537 in a11534 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_11539(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11539,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_cdr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11560,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11562,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li120),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11562(t12,t8,t6);}

/* k11558 in k11537 in a11534 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_11560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11560,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1320 in k11537 in a11534 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void f_11562(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11562,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[209],t3,C_SCHEME_FALSE);
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

/* k11596 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_11598(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11598,c,av);}
/* chicken-syntax.scm:431: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[211];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a11599 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_11600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11600,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11604,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:435: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[211];
av2[3]=t2;
av2[4]=lf[212];
tp(5,av2);}}

/* k11602 in a11599 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_11604(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_11604,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_cdr(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11625,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11627,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li122),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11627(t12,t8,t6);}

/* k11623 in k11602 in a11599 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_11625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11625,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop1283 in k11602 in a11599 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void f_11627(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11627,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[205],t3,C_SCHEME_FALSE);
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

/* k11661 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in ... */
static void C_ccall f_11663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11663,c,av);}
/* chicken-syntax.scm:423: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[213];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a11664 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in ... */
static void C_ccall f_11665(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11665,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11669,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:428: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[213];
av2[3]=t2;
av2[4]=lf[215];
tp(5,av2);}}

/* k11667 in a11664 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_11669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_11669,c,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[214],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k11682 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in ... */
static void C_ccall f_11684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11684,c,av);}
/* chicken-syntax.scm:417: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[216];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a11685 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in ... */
static void C_ccall f_11686(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11686,c,av);}
a=C_alloc(3);
t5=C_i_cdr(t2);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,lf[217],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11696 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in ... */
static void C_ccall f_11698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11698,c,av);}
/* chicken-syntax.scm:398: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[218];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a11699 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in ... */
static void C_ccall f_11700(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11700,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11704,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:403: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[218];
av2[3]=t2;
av2[4]=lf[221];
tp(5,av2);}}

/* k11702 in a11699 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in ... */
static void C_ccall f_11704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_11704,c,av);}
a=C_alloc(15);
t2=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[36],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[57],t5,lf[219]);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11726,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:407: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t3;
av2[2]=lf[218];
av2[3]=((C_word*)t0)[2];
av2[4]=lf[220];
tp(5,av2);}}}

/* k11724 in k11702 in a11699 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in ... */
static void C_ccall f_11726(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_11726,c,av);}
a=C_alloc(24);
t2=((C_word*)t0)[2];
t3=C_i_cadr(((C_word*)t2)[2]);
t4=C_i_caddr(((C_word*)t2)[2]);
t5=C_u_i_cdr(((C_word*)t2)[2]);
t6=C_u_i_cdr(t5);
t7=C_u_i_cdr(t6);
t8=C_i_pairp(t3);
t9=(C_truep(t8)?C_i_nullp(C_u_i_cdr(t3)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_i_car(t3);
t11=C_a_i_list(&a,2,t10,t4);
t12=C_a_i_list(&a,1,t11);
t13=C_a_i_cons(&a,2,t12,t7);
t14=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_a_i_cons(&a,2,lf[35],t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t10=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t4);
t11=C_a_i_cons(&a,2,t3,t7);
t12=C_a_i_cons(&a,2,lf[36],t11);
t13=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list(&a,3,lf[57],t10,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}

/* k11789 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in ... */
static void C_ccall f_11791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11791,c,av);}
/* chicken-syntax.scm:326: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in ... */
static void C_ccall f_11793(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11793,c,av);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11797,a[2]=t2,a[3]=t4,a[4]=C_SCHEME_UNDEFINED,a[5]=t1,a[6]=t3,a[7]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:330: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[222];
av2[3]=t2;
av2[4]=lf[232];
tp(5,av2);}}

/* k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in ... */
static void C_ccall f_11797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11797,c,av);}
a=C_alloc(3);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11803,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:332: chicken.syntax#strip-syntax */
t5=C_fast_retrieve(lf[88]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in ... */
static void C_ccall f_11803(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11803,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11806,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:333: scheme#symbol->string */
t5=*((C_word*)lf[142]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[7];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in ... */
static void C_ccall f_11806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11806,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11809,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=t1,a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12171,a[2]=t3,a[3]=((C_word*)t2)[7],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:334: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t4;
tp(2,av2);}}

/* k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_11809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11809,c,av);}
a=C_alloc(10);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11815,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:339: r */
t4=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[127];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_11815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11815,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11818,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:340: r */
t4=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[231];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_11818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11818,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11821,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:341: r */
t4=((C_word*)t2)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[124];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_11821(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11821,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li127),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[39]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11885,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12136,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li129),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_12136(t12,t8,((C_word*)t0)[4]);}

/* g1184 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void f_11825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11825,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_symbolp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11838,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11853,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:346: c */
t5=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_car(t2);
av2[3]=((C_word*)t0)[3];
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word av2[5];
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t1;
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=t2;
tp(5,av2);}}}}

/* k11836 in g1184 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void f_11838(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_11838,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word av2[5];
av2[0]=*((C_word*)lf[103]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k11851 in g1184 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_11853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11853,c,av);}
if(C_truep(t1)){
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=C_u_i_cdr(((C_word*)t0)[2]);
if(C_truep(C_i_nullp(C_u_i_cdr(t3)))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cadr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}
else{
/* chicken-syntax.scm:352: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[222];
av2[3]=lf[223];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}
else{
t2=((C_word*)t0)[4];
f_11838(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_11838(t2,C_SCHEME_FALSE);}}

/* k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_11885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_11885,c,av);}
a=C_alloc(28);
t2=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12108,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12128,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t5;
av2[2]=lf[230];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}

/* k11914 in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_11916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_11916,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[58],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void f_11918(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_11918,4,t0,t1,t2,t3);}
a=C_alloc(11);
t4=C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_i_symbolp(t5);
t7=C_i_not(t6);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11934,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t7,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t7)){
/* chicken-syntax.scm:370: scheme#symbol->string */
t9=*((C_word*)lf[142]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cadr(t5);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* chicken-syntax.scm:370: scheme#symbol->string */
t9=*((C_word*)lf[142]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}}

/* k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_11934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,5)))){
C_save_and_reclaim((void *)f_11934,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11937,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12067,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:371: scheme#string-append */
t4=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[226];
av2[4]=t1;
av2[5]=lf[227];
((C_proc)(void*)(*((C_word*)t4+1)))(6,av2);}}

/* k11935 in k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_11937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11937,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_11940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12063,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:372: scheme#string-append */
t4=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[225];
av2[4]=((C_word*)t0)[11];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k11938 in k11935 in k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_11940(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(79,c,2)))){
C_save_and_reclaim((void *)f_11940,c,av);}
a=C_alloc(79);
t2=C_a_i_list(&a,2,lf[123],lf[224]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[117],lf[123],t3);
t5=C_a_i_list(&a,2,lf[85],t4);
t6=C_a_i_list(&a,4,lf[120],lf[123],((C_word*)t0)[3],lf[224]);
t7=C_a_i_list(&a,4,lf[36],t2,t5,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11966,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11970,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
t10=t9;
f_11970(t10,C_SCHEME_END_OF_LIST);}
else{
t10=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],t7);
t11=t9;
f_11970(t11,C_a_i_list(&a,1,t10));}}

/* k11952 in k11964 in k11938 in k11935 in k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_11954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11954,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11964 in k11938 in k11935 in k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_11966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11966,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,lf[58],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11954,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:396: mapslots */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11918(t4,t3,C_slot(((C_word*)t0)[4],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)));}

/* k11968 in k11938 in k11935 in k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void f_11970(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(66,0,3)))){
C_save_and_reclaim_args((void *)trf_11970,2,t0,t1);}
a=C_alloc(66);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[117],lf[123],t3);
t5=C_a_i_list(&a,2,lf[85],t4);
t6=C_a_i_list(&a,3,lf[118],lf[123],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[36],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[5],t7,((C_word*)t0)[6]);
t9=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t8);
t10=C_a_i_list(&a,1,t9);
/* chicken-syntax.scm:379: ##sys#append */
t11=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t11;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(4,av2);}}
else{
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[3]);
t4=C_a_i_list(&a,3,lf[117],lf[123],t3);
t5=C_a_i_list(&a,2,lf[85],t4);
t6=C_a_i_list(&a,3,lf[118],lf[123],((C_word*)t0)[4]);
t7=C_a_i_list(&a,4,lf[36],t2,t5,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[8],t7);
t9=C_a_i_list(&a,1,t8);
/* chicken-syntax.scm:379: ##sys#append */
t10=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t10;
av2[1]=((C_word*)t0)[9];
av2[2]=t1;
av2[3]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}}

/* k12061 in k11935 in k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_12063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12063,c,av);}
/* chicken-syntax.scm:372: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k12065 in k11932 in mapslots in k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_12067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12067,c,av);}
/* chicken-syntax.scm:371: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k12080 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_12082(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(52,c,4)))){
C_save_and_reclaim((void *)f_12082,c,av);}
a=C_alloc(52);
t2=C_a_i_list(&a,1,lf[123]);
t3=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t4=C_a_i_list(&a,3,lf[116],lf[123],t3);
t5=C_a_i_list(&a,3,lf[36],t2,t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[3],t1,t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11916,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11918,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word)li128),tmp=(C_word)a,a+=8,tmp));
t11=((C_word*)t9)[1];
f_11918(t11,t7,((C_word*)t0)[9],C_fix(1));}

/* k12100 in k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_12102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12102,c,av);}
/* chicken-syntax.scm:363: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k12106 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_12108(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(43,c,3)))){
C_save_and_reclaim((void *)f_12108,c,av);}
a=C_alloc(43);
t2=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,lf[115],t3);
t5=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[4],t1,t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12102,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[228]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[228]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[229];
tp(4,av2);}}

/* k12126 in k11883 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_12128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12128,c,av);}
/* chicken-syntax.scm:358: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* map-loop1178 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void f_12136(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12136,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:343: g1184 */
t4=((C_word*)t0)[4];
f_11825(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12159 in map-loop1178 in k11819 in k11816 in k11813 in k11807 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_12161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12161,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12136(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12169 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_12171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_12171,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12182,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:336: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_11809(2,av2);}}}

/* k12176 in k12169 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_12178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12178,c,av);}
/* chicken-syntax.scm:335: chicken.base#symbol-append */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[129];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k12180 in k12169 in k11804 in k11801 in k11795 in a11792 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_12182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_12182,c,av);}
/* chicken-syntax.scm:336: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[130]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[130]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k12184 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in ... */
static void C_ccall f_12186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12186,c,av);}
/* chicken-syntax.scm:318: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[233];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12187 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in ... */
static void C_ccall f_12188(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12188,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12192,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:323: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[233];
av2[3]=t2;
av2[4]=lf[235];
tp(5,av2);}}

/* k12190 in a12187 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in ... */
static void C_ccall f_12192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12192,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[234],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12201 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12203,c,av);}
/* chicken-syntax.scm:304: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[236];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12205(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12205,c,av);}
a=C_alloc(10);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12215,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12244,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:306: chicken.internal.syntax-rules#safe-length */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word *av2=av;
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t7;
av2[2]=C_i_car(t5);
tp(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_12215(2,av2);}}}

/* k12213 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_12215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12215,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12228,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: rename1113 */
t5=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[237];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
/* chicken-syntax.scm:306: chicken.internal.syntax-rules#syntax-rules-mismatch */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[238]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[238]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k12226 in k12213 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in ... */
static void C_ccall f_12228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12228,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_12244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_12244,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12247,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12293,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: ##sys#>= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[241]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k12245 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in ... */
static void C_ccall f_12247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12247,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12250,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:306: chicken.internal.syntax-rules#safe-length */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12215(2,av2);}}}

/* k12248 in k12245 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in ... */
static void C_ccall f_12250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_12250,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12256,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:306: ##sys#>= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[241]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k12254 in k12248 in k12245 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in ... */
static void C_ccall f_12256(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12256,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_cdr(((C_word*)t2)[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12265,a[2]=t5,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_12265(t7,((C_word*)t2)[3],t3,((C_word*)t2)[4]);}
else{
t3=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_12215(2,av2);}}}

/* loop1110 in k12254 in k12248 in k12245 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in ... */
static void f_12265(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12265,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12272,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:306: ##sys#= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[240]);
C_word av2[4];
av2[0]=*((C_word*)lf[240]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k12270 in loop1110 in k12254 in k12248 in k12245 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in ... */
static void C_ccall f_12272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12272,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12286,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: ##sys#+ */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[239]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
tp(4,av2);}}}

/* k12284 in k12270 in loop1110 in k12254 in k12248 in k12245 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in ... */
static void C_ccall f_12286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12286,c,av);}
/* chicken-syntax.scm:306: loop1110 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12265(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12291 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in ... */
static void C_ccall f_12293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12293,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12302,a[2]=t4,a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12302(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12247(2,av2);}}}

/* loop1110 in k12291 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in ... */
static void f_12302(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12302,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12309,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:306: ##sys#= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[240]);
C_word av2[4];
av2[0]=*((C_word*)lf[240]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k12307 in loop1110 in k12291 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in ... */
static void C_ccall f_12309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_12309,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12323,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:306: ##sys#+ */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[239]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
tp(4,av2);}}}

/* k12321 in k12307 in loop1110 in k12291 in k12242 in a12204 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in ... */
static void C_ccall f_12323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_12323,c,av);}
/* chicken-syntax.scm:306: loop1110 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_12302(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k12329 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12331,c,av);}
/* chicken-syntax.scm:296: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[243];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12332 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12333(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12333,c,av);}
a=C_alloc(6);
t5=C_i_cdr(t2);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_eqp(C_i_cdr(t5),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12353,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:298: rename1078 */
t10=t3;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[244];
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12367,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t9=C_i_cdr(t5);
t10=C_i_pairp(t9);
t11=t8;
f_12367(t11,(C_truep(t10)?C_eqp(C_i_cdr(t9),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t9=t8;
f_12367(t9,C_SCHEME_FALSE);}}}

/* k12351 in a12332 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12353,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12365 in a12332 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12367(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_12367,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12380,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:298: rename1078 */
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[244];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
/* chicken-syntax.scm:298: chicken.internal.syntax-rules#syntax-rules-mismatch */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[238]);
C_word av2[3];
av2[0]=*((C_word*)lf[238]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k12378 in k12365 in a12332 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_12380(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12380,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12426 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12428,c,av);}
/* chicken-syntax.scm:285: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[245];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12429 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12430(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12430,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12434,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:289: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[245];
av2[3]=t2;
av2[4]=lf[247];
tp(5,av2);}}

/* k12432 in a12429 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12434(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12434,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12441,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:290: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[246];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k12439 in k12432 in a12429 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12441,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12449,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:291: r */
t4=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[127];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k12447 in k12439 in k12432 in a12429 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_12449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12449,c,av);}
a=C_alloc(9);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12455 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12457,c,av);}
/* chicken-syntax.scm:277: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[246];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12458 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12459(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12459,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12463,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:281: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[246];
av2[3]=t2;
av2[4]=lf[250];
tp(5,av2);}}

/* k12461 in a12458 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12463(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12463,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12466,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,lf[58],t3);
/* chicken-syntax.scm:282: ##sys#register-meta-expression */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[249]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[249]+1);
av2[1]=t2;
av2[2]=t4;
tp(3,av2);}}

/* k12464 in k12461 in a12458 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12466,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=C_a_i_cons(&a,2,lf[58],t3);
t5=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[248],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k12485 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12487,c,av);}
/* chicken-syntax.scm:269: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[251];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12488 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12489(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_12489,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12493,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:274: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[251];
av2[3]=t2;
av2[4]=lf[253];
tp(5,av2);}}

/* k12491 in a12488 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12493,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,2,lf[252],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k12502 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12504,c,av);}
/* chicken-syntax.scm:244: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[254];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12505 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12506(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12506,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12510,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:248: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[254];
av2[3]=t2;
av2[4]=lf[262];
tp(5,av2);}}

/* k12508 in a12505 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12510,c,av);}
a=C_alloc(3);
t2=C_i_memq(lf[255],C_fast_retrieve(lf[256]));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[257];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12519,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:251: chicken.syntax#strip-syntax */
t4=C_fast_retrieve(lf[88]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k12517 in k12508 in a12505 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12519,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12522,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:252: r */
t4=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[261];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k12520 in k12517 in k12508 in a12505 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12522,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12525,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:253: chicken.syntax#strip-syntax */
t3=C_fast_retrieve(lf[88]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12523 in k12520 in k12517 in k12508 in a12505 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_12525,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],lf[258]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12548,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:259: chicken.compiler.scrutinizer#check-and-validate-type */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[260]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t4;
av2[2]=t1;
av2[3]=lf[254];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k12546 in k12523 in k12520 in k12517 in k12508 in a12505 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_12548,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[259],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,lf[248],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12562 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12564,c,av);}
/* chicken-syntax.scm:219: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[263];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12566(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_12566,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12570,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:223: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[263];
av2[3]=t2;
av2[4]=lf[265];
tp(5,av2);}}

/* k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12570,c,av);}
a=C_alloc(3);
t2=C_i_memq(lf[255],C_fast_retrieve(lf[256]));
t3=C_mutate(((C_word *)t0)+4,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12576,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:225: chicken.base#gensym */
t5=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12576,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12579,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:226: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[2];
tp(3,av2);}}

/* k12577 in k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12579(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_12579,c,av);}
a=C_alloc(35);
t2=((C_word*)t0)[2];
t3=C_i_cadr(((C_word*)t2)[2]);
t4=C_a_i_list(&a,2,((C_word*)t2)[3],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12603,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[4],a[5]=((C_word)li140),tmp=(C_word)a,a+=6,tmp);
t11=C_u_i_cdr(((C_word*)t2)[2]);
t12=C_u_i_cdr(t11);
t13=C_i_check_list_2(t12,lf[39]);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12641,a[2]=((C_word*)t2)[3],a[3]=t1,a[4]=((C_word*)t2)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12643,a[2]=t8,a[3]=t16,a[4]=t10,a[5]=t9,a[6]=((C_word)li141),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_12643(t18,t14,t12);}

/* g995 in k12577 in k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_12603,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12607,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:232: chicken.syntax#strip-syntax */
t6=C_fast_retrieve(lf[88]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k12605 in g995 in k12577 in k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12607(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_12607,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12614,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t1,lf[81]);
if(C_truep(t4)){
t5=C_u_i_cdr(((C_word*)t2)[2]);
t6=C_a_i_cons(&a,2,lf[58],t5);
t7=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list2(&a,2,lf[81],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
if(C_truep(((C_word*)t2)[4])){
/* chicken-syntax.scm:237: chicken.compiler.scrutinizer#check-and-validate-type */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[260]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=lf[263];
tp(4,av2);}}
else{
t5=C_u_i_cdr(((C_word*)t2)[2]);
t6=C_a_i_cons(&a,2,lf[58],t5);
t7=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list2(&a,2,t1,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}

/* k12612 in k12605 in g995 in k12577 in k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_12614,c,av);}
a=C_alloc(9);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,lf[58],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list2(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12639 in k12577 in k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_12641,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,lf[264],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop989 in k12577 in k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12643(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_12643,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:231: g995 */
t4=((C_word*)t0)[4];
f_12603(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12666 in map-loop989 in k12577 in k12574 in k12568 in a12565 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12668(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12668,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12643(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12685 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12687,c,av);}
/* chicken-syntax.scm:159: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[266];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12689(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12689,c,av);}
a=C_alloc(9);
t5=C_i_memq(lf[255],C_fast_retrieve(lf[256]));
if(C_truep(C_i_not(t5))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=lf[267];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12699,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=t1,a[7]=C_SCHEME_UNDEFINED,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:165: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t6;
av2[2]=lf[266];
av2[3]=t2;
av2[4]=lf[273];
tp(5,av2);}}}

/* k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12699(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12699,c,av);}
a=C_alloc(3);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)t0)+5,t2);
t4=C_i_car(((C_word*)t0)[5]);
t5=C_mutate(((C_word *)t0)+4,t4);
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=C_mutate(((C_word *)t0)+7,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12709,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:169: chicken.base#gensym */
t9=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12709(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12709,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12712,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cdddr(((C_word*)t2)[2]);
if(C_truep(C_i_pairp(t5))){
t6=C_u_i_cdr(((C_word*)t2)[2]);
t7=C_u_i_cdr(t6);
/* chicken-syntax.scm:170: chicken.syntax#strip-syntax */
t8=C_fast_retrieve(lf[88]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t4;
av2[2]=C_u_i_car(t7);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_12712(2,av2);}}}

/* k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_12712,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12715,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:171: r */
t4=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[127];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12715(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12715,c,av);}
a=C_alloc(12);
t2=(C_truep(((C_word*)t0)[2])?C_i_cadddr(((C_word*)t0)[3]):C_i_caddr(((C_word*)t0)[3]));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12723,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t4,a[8]=((C_word*)t0)[6],a[9]=((C_word)li146),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_12723(t6,((C_word*)t0)[7],((C_word*)t0)[8],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12723(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_12723,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:175: scheme#reverse */
t6=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_cdr(t2);
t7=C_a_i_cons(&a,2,t5,t3);
t8=C_a_i_cons(&a,2,lf[271],t4);
/* chicken-syntax.scm:205: loop */
t10=t1;
t11=t6;
t12=t7;
t13=t8;
t1=t10;
t2=t11;
t3=t12;
t4=t13;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12963,a[2]=t2,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_listp(t5))){
t7=C_eqp(C_fix(2),C_u_i_length(t5));
t8=t6;
f_12963(t8,(C_truep(t7)?C_i_symbolp(C_i_car(t5)):C_SCHEME_FALSE));}
else{
t7=t6;
f_12963(t7,C_SCHEME_FALSE);}}}}

/* k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12733,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:176: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_12736,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12907,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12909,a[2]=t4,a[3]=((C_word)li145),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12909(t6,t2,((C_word*)t0)[9],C_fix(1));}

/* k12776 in k12840 in k12905 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_12778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,1)))){
C_save_and_reclaim((void *)f_12778,c,av);}
a=C_alloc(30);
t2=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,4,lf[58],((C_word*)t0)[6],((C_word*)t0)[7],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop935 in k12840 in k12905 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void f_12780(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_12780,4,t0,t1,t2,t3);}
a=C_alloc(21);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list(&a,4,lf[196],t7,C_SCHEME_TRUE,t6);
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

/* k12840 in k12905 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12842(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(60,0,4)))){
C_save_and_reclaim_args((void *)trf_12842,2,t0,t1);}
a=C_alloc(60);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,4,lf[268],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=C_a_i_list(&a,2,lf[269],((C_word*)t0)[4]);
t5=C_a_i_list(&a,2,lf[270],((C_word*)t0)[4]);
t6=C_a_i_list(&a,3,lf[217],t4,t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12778,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t7,a[5]=((C_word*)t0)[8],a[6]=t3,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12780,a[2]=t10,a[3]=t14,a[4]=t11,a[5]=((C_word)li143),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_12780(t16,t12,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k12861 in k12905 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_12863,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
f_12842(t2,C_a_i_list2(&a,2,t1,((C_word*)t0)[3]));}

/* map-loop901 in k12905 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12865(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12865,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_fast_retrieve(lf[260]);
/* chicken-syntax.scm:190: g924 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[260]);
C_word av2[4];
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[266];
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12888 in map-loop901 in k12905 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_12890(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12890,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_12865(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k12905 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12907(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_12907,c,av);}
a=C_alloc(29);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12842,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(C_truep(((C_word*)t0)[9])?C_i_pairp(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(((C_word*)t0)[9],lf[39]);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12863,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12865,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li144),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12865(t14,t10,((C_word*)t0)[9]);}
else{
t5=t3;
f_12842(t5,C_a_i_list1(&a,1,t2));}}

/* loop2 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12909(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_12909,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_a_i_vector1(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12927,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:182: loop2 */
t7=t5;
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k12925 in loop2 in k12734 in k12731 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_12927,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k12961 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_12963(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,5)))){
C_save_and_reclaim_args((void *)trf_12963,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12980,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:211: chicken.compiler.scrutinizer#check-and-validate-type */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[260]);
C_word av2[4];
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=lf[266];
tp(4,av2);}}
else{
/* chicken-syntax.scm:215: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word av2[6];
av2[0]=*((C_word*)lf[103]+1);
av2[1]=((C_word*)t0)[7];
av2[2]=lf[266];
av2[3]=lf[272];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[8];
tp(6,av2);}}}

/* k12978 in k12961 in loop in k12713 in k12710 in k12707 in k12697 in a12688 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_12980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12980,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:207: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12723(t3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);}

/* k13035 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13037,c,av);}
/* chicken-syntax.scm:153: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[274];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13039(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_13039,c,av);}
a=C_alloc(10);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13049,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t5))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13211,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:155: chicken.internal.syntax-rules#safe-length */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word *av2=av;
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t7;
av2[2]=C_i_car(t5);
tp(3,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_13049(2,av2);}}}

/* k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13049(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_13049,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13167,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li150),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_13167(t12,t8,t6);}
else{
/* chicken-syntax.scm:155: chicken.internal.syntax-rules#syntax-rules-mismatch */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[238]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[238]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k13064 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13066(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_13066,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_check_list_2(t6,lf[39]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13133,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_13133(t12,t8,t6);}

/* k13085 in k13064 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_13087,c,av);}
a=C_alloc(7);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13097,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:155: rename762 */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[79];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k13095 in k13085 in k13064 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_13097,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13107,a[2]=((C_word*)t0)[4],a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:155: ##sys#map-n */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[276]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[276]+1);
av2[1]=t2;
av2[2]=t3;
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
tp(5,av2);}}

/* k13103 in k13095 in k13085 in k13064 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_13105,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a13106 in k13095 in k13085 in k13064 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_13107,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13123,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: rename762 */
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[275];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k13121 in a13106 in k13095 in k13085 in k13064 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_13123,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[2],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* map-loop834 in k13064 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13133(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_13133,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=C_i_car(t4);
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

/* map-loop806 in k13047 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13167(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_13167,3,t0,t1,t2);}
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

/* k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_13211,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13260,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: ##sys#>= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[241]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k13212 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13214,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13217,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:155: chicken.internal.syntax-rules#safe-length */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[242]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[242]+1);
av2[1]=t2;
av2[2]=C_i_cdr(((C_word*)t0)[2]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_13049(2,av2);}}}

/* k13215 in k13212 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_13217,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13223,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:155: ##sys#>= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[241]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[241]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
av2[3]=C_fix(0);
tp(4,av2);}}

/* k13221 in k13215 in k13212 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13223(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_13223,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_cdr(((C_word*)t2)[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13232,a[2]=t5,a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_13232(t7,((C_word*)t2)[3],t3,((C_word*)t2)[4]);}
else{
t3=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_13049(2,av2);}}}

/* loop759 in k13221 in k13215 in k13212 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13232(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_13232,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13239,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:155: ##sys#= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[240]);
C_word av2[4];
av2[0]=*((C_word*)lf[240]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k13237 in loop759 in k13221 in k13215 in k13212 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_13239,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13253,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: ##sys#+ */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[239]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(-1);
tp(4,av2);}}}

/* k13251 in k13237 in loop759 in k13221 in k13215 in k13212 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13253,c,av);}
/* chicken-syntax.scm:155: loop759 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_13232(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k13258 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_13260,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13269,a[2]=t4,a[3]=((C_word)li152),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_13269(t6,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_13214(2,av2);}}}

/* loop759 in k13258 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13269(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_13269,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13276,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:155: ##sys#= */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[240]);
C_word av2[4];
av2[0]=*((C_word*)lf[240]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=C_fix(0);
tp(4,av2);}}

/* k13274 in loop759 in k13258 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13276(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_13276,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13288,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_cdr(t2);
t5=C_i_pairp(t4);
t6=t3;
f_13288(t6,(C_truep(t5)?C_eqp(C_i_cdr(t4),C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}
else{
t4=t3;
f_13288(t4,C_SCHEME_FALSE);}}}

/* k13286 in k13274 in loop759 in k13258 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13288(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_13288,2,t0,t1);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_cdr(((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13299,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:155: ##sys#+ */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[239]);
C_word av2[4];
av2[0]=*((C_word*)lf[239]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
av2[3]=C_fix(-1);
tp(4,av2);}}
else{
t3=((C_word*)t2)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13297 in k13286 in k13274 in loop759 in k13258 in k13209 in a13038 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13299,c,av);}
/* chicken-syntax.scm:155: loop759 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_13269(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k13324 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13326(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13326,c,av);}
/* chicken-syntax.scm:142: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[275];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a13327 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13328(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_13328,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13332,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:146: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[275];
av2[3]=t2;
av2[4]=lf[277];
tp(5,av2);}}

/* k13330 in a13327 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_13332,c,av);}
a=C_alloc(3);
t2=C_i_memq(lf[255],C_fast_retrieve(lf[256]));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_caddr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13348,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:149: chicken.compiler.scrutinizer#check-and-validate-type */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[260]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[260]+1);
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=lf[275];
tp(4,av2);}}}

/* k13346 in k13330 in a13327 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_13348,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_i_caddr(((C_word*)t2)[2]);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,4,lf[196],t1,C_SCHEME_TRUE,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k13362 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13364,c,av);}
/* chicken-syntax.scm:119: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[278];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13366(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_13366,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13370,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:123: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[278];
av2[3]=t2;
av2[4]=lf[285];
tp(5,av2);}}

/* k13368 in a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13370,c,av);}
a=C_alloc(3);
t2=C_i_memq(lf[255],C_fast_retrieve(lf[256]));
if(C_truep(C_i_not(t2))){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[279];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13379,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:126: chicken.syntax#strip-syntax */
t4=C_fast_retrieve(lf[88]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k13377 in k13368 in a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13379(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_13379,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=C_u_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13386,a[2]=t1,a[3]=t4,a[4]=((C_word)li155),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13396,a[2]=t4,a[3]=t1,a[4]=((C_word*)t2)[2],a[5]=((C_word)li156),tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:130: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t2)[3];
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* a13385 in k13377 in k13368 in a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_13386,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13394,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:133: chicken.syntax#strip-syntax */
t3=C_fast_retrieve(lf[88]);{
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

/* k13392 in a13385 in k13377 in k13368 in a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_13394,c,av);}
/* chicken-syntax.scm:131: chicken.compiler.scrutinizer#validate-type */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[280]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[280]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* a13395 in k13377 in k13368 in a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13396(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,5)))){
C_save_and_reclaim((void *)f_13396,c,av);}
a=C_alloc(30);
if(C_truep(C_i_not(t2))){
/* chicken-syntax.scm:135: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t1;
av2[2]=lf[278];
av2[3]=lf[281];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}
else{
t5=C_i_cdddr(((C_word*)t0)[4]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[3],t5);
t7=C_a_i_cons(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,2,lf[282],t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13421,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13425,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t11=C_a_i_list(&a,2,lf[284],((C_word*)t0)[2]);
t12=t10;
f_13425(t12,C_a_i_list(&a,1,t11));}
else{
t11=t10;
f_13425(t11,C_SCHEME_END_OF_LIST);}}}

/* k13419 in a13395 in k13377 in k13368 in a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_13421,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[217],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k13423 in a13395 in k13377 in k13368 in a13365 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13425(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_13425,2,t0,t1);}
a=C_alloc(15);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,lf[283],t2);
t4=C_a_i_list(&a,1,t3);
/* chicken-syntax.scm:137: ##sys#append */
t5=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
/* chicken-syntax.scm:137: ##sys#append */
t2=*((C_word*)lf[102]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k13473 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13475,c,av);}
/* chicken-syntax.scm:77: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[288];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13477(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_13477,c,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13481,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=t2,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:82: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[288];
av2[3]=t2;
av2[4]=lf[296];
tp(5,av2);}}

/* k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13481,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13484,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:83: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[295];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13484,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13487,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:84: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[294];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13487(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13487,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13490,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:85: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[293];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13490,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13493,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:86: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[286];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13493,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13496,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:87: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[81];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_13496,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13498,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word)li160),tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13628,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=t1,a[8]=((C_word*)t2)[8],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:99: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[292];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* parse-clause in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13498(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,0,2)))){
C_save_and_reclaim_args((void *)trf_13498,3,t0,t1,t2);}
a=C_alloc(23);
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?C_u_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?C_i_cadr(t2):C_u_i_car(t2));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13508,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=C_a_i_list(&a,2,t5,((C_word*)t0)[6]);
t9=C_a_i_list(&a,1,t8);
t10=C_i_cddr(t2);
t11=C_a_i_cons(&a,2,t9,t10);
t12=t7;
f_13508(t12,C_a_i_cons(&a,2,lf[35],t11));}
else{
t8=C_u_i_cdr(t2);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t8);
t10=t7;
f_13508(t10,C_a_i_cons(&a,2,lf[35],t9));}}

/* k13506 in parse-clause in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13508(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,3)))){
C_save_and_reclaim_args((void *)trf_13508,2,t0,t1);}
a=C_alloc(25);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13533,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li158),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13547,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13549,a[2]=t6,a[3]=t4,a[4]=t10,a[5]=t5,a[6]=((C_word)li159),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_13549(t12,t8,((C_word*)t0)[2]);}}

/* g648 in k13506 in parse-clause in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static C_word f_13533(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,lf[87],t1);
return(C_a_i_list(&a,3,((C_word*)t0)[2],t2,((C_word*)t0)[3]));}

/* k13545 in k13506 in parse-clause in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_13547,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,2,t3,((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* map-loop642 in k13506 in parse-clause in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13549(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(18,0,2)))){
C_save_and_reclaim_args((void *)trf_13549,3,t0,t1,t2);}
a=C_alloc(18);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:96: g648 */
  f_13533(C_a_i(&a,15),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13626 in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13628(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(65,c,3)))){
C_save_and_reclaim((void *)f_13628,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[87],lf[73]);
t3=C_a_i_list(&a,3,lf[116],((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,3,lf[289],((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list(&a,3,((C_word*)t0)[3],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_cddr(((C_word*)t0)[5]);
t13=C_i_check_list_2(t12,lf[39]);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13653,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13684,a[2]=t10,a[3]=t16,a[4]=((C_word*)t0)[9],a[5]=t11,a[6]=((C_word)li161),tmp=(C_word)a,a+=7,tmp));
t18=((C_word*)t16)[1];
f_13684(t18,t14,t12);}

/* k13651 in k13626 in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_13653,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13660,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:104: r */
t3=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[291];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k13658 in k13651 in k13626 in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_13660,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13664,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_assq(((C_word*)t0)[7],((C_word*)t0)[8]))){
/* chicken-syntax.scm:104: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=C_a_i_list(&a,2,lf[290],((C_word*)t0)[6]);
t4=C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=C_a_i_list(&a,1,t4);
/* chicken-syntax.scm:104: ##sys#append */
t6=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k13662 in k13658 in k13651 in k13626 in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_13664,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t2);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[7],t3,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* map-loop673 in k13626 in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void f_13684(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_13684,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:103: g679 */
t4=((C_word*)t0)[4];
f_13498(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k13707 in map-loop673 in k13626 in k13494 in k13491 in k13488 in k13485 in k13482 in k13479 in a13476 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13709(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13709,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_13684(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k13746 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_13748,c,av);}
/* chicken-syntax.scm:56: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[292];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a13749 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13750(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_13750,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13754,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:61: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[292];
av2[3]=t2;
av2[4]=lf[300];
tp(5,av2);}}

/* k13752 in a13749 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13754,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13757,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:62: r */
t3=((C_word*)t0)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[299];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k13755 in k13752 in a13749 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_13757,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13760,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:63: r */
t5=((C_word*)t2)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[63];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k13758 in k13755 in k13752 in a13749 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_13760,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13771,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,a[5]=((C_word*)t2)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:64: r */
t4=((C_word*)t2)[5];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[297];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k13769 in k13758 in k13755 in k13752 in a13749 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_13771(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(114,c,1)))){
C_save_and_reclaim((void *)f_13771,c,av);}
a=C_alloc(114);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[3]);
t6=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],t6);
t8=C_a_i_list(&a,3,lf[36],t4,t7);
t9=C_u_i_cdr(((C_word*)t0)[3]);
t10=C_u_i_cdr(t9);
t11=C_u_i_cdr(t10);
t12=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_cons(&a,2,lf[36],t12);
t14=C_a_i_list(&a,3,lf[55],lf[56],((C_word*)t0)[4]);
t15=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t14);
t16=C_a_i_list(&a,2,((C_word*)t0)[2],t15);
t17=C_a_i_list(&a,3,lf[36],((C_word*)t0)[4],t16);
t18=C_a_i_list(&a,3,lf[57],t13,t17);
t19=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t18);
t20=C_a_i_list(&a,3,lf[298],t8,t19);
t21=C_a_i_list(&a,3,lf[36],t2,t20);
t22=C_a_i_list(&a,2,t1,t21);
t23=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t23;
av2[1]=C_a_i_list(&a,1,t22);
((C_proc)(void*)(*((C_word*)t23+1)))(2,av2);}}

/* k4407 */
static void C_ccall f_4409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4409,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4412,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4410 in k4407 */
static void C_ccall f_4412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4412,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4415,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k4413 in k4410 in k4407 */
static void C_ccall f_4415(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4415,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[1] /* (set! take ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4525,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:54: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2=av;
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
tp(2,av2);}}

/* take in k4413 in k4410 in k4407 */
static void f_4525(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_4525,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4543,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:56: take */
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k4541 in take in k4413 in k4410 in k4407 */
static void C_ccall f_4543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4543,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6024 in a6017 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in ... */
static void f_4583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4583,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4597,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:67: scheme#reverse */
t6=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=C_i_car(t4);
t7=C_a_i_cons(&a,2,t6,t3);
/* mini-srfi-1.scm:68: loop */
t9=t1;
t10=t5;
t11=t7;
t12=C_u_i_cdr(t4);
t1=t9;
t2=t10;
t3=t11;
t4=t12;
goto loop;}}

/* k4595 in loop in k6024 in a6017 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in ... */
static void C_ccall f_4597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4597,c,av);}
/* mini-srfi-1.scm:67: scheme#values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
C_values(4,av2);}}

/* k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5697(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_5697,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5700,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[297],lf[62]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13748,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13750,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:59: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t5;
av2[2]=t6;
tp(3,av2);}}

/* k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5700(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_5700,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5703,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,lf[286],lf[287]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13475,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13477,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:80: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t5;
av2[2]=t6;
tp(3,av2);}}

/* k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5703,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5706,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:111: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=C_fast_retrieve(lf[20]);
tp(4,av2);}}

/* k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5706,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[2]+1 /* (set! ##sys#chicken.condition-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5710,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:117: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2=av;
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5710,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5713,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13364,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13366,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:121: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5713,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5716,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13326,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13328,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:144: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5716,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5719,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13037,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13039,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:155: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5719,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5722,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12687,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12689,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:161: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5722,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5725,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12564,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12566,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:221: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5725,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5728,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12504,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12506,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:246: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5728(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5728,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5731,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:262: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=C_fast_retrieve(lf[20]);
tp(4,av2);}}

/* k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5731,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[3]+1 /* (set! ##sys#chicken.type-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:267: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2=av;
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5735,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5738,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12487,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12489,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:272: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5738,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5741,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12457,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12459,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:279: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5741,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5744,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12428,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12430,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:287: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5744,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5747,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12331,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12333,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:298: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5747,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5750,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12203,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12205,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:306: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 */
static void C_ccall f_5750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5750,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5753,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:310: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=C_fast_retrieve(lf[20]);
tp(4,av2);}}

/* k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in k4407 in ... */
static void C_ccall f_5753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5753,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#chicken.syntax-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:316: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2=av;
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in k4410 in ... */
static void C_ccall f_5757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5757,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5760,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12186,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12188,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:321: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in k4413 in ... */
static void C_ccall f_5760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5760,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5763,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11791,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11793,a[2]=((C_word)li130),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:328: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in k5695 in ... */
static void C_ccall f_5763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5763,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5766,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11698,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11700,a[2]=((C_word)li126),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:401: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in k5698 in ... */
static void C_ccall f_5766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5766,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5769,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11684,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11686,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:419: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in k5701 in ... */
static void C_ccall f_5769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5769,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5772,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11663,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11665,a[2]=((C_word)li124),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:426: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in k5704 in ... */
static void C_ccall f_5772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5772,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5775,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11598,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11600,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:433: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in k5708 in ... */
static void C_ccall f_5775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5775,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5778,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11533,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11535,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:441: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in k5711 in ... */
static void C_ccall f_5778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5778,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5781,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11468,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11470,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:449: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in k5714 in ... */
static void C_ccall f_5781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5781,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5784,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10815,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10817,a[2]=((C_word)li117),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:458: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in k5717 in ... */
static void C_ccall f_5784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5784,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5787,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9885,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9887,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:490: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_5787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5787,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5790,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9805,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9807,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:545: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_5790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5790,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5793,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9781,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9783,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:557: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_5793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5793,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5796,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9753,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9755,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:565: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_5796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5796,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5799,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9732,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9734,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:574: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_5799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5799,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5803,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9602,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9604,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:582: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_5803(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5803,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_mutate((C_word*)lf[5]+1 /* (set! chicken.syntax#define-values-definition ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5806,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9125,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9127,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:599: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t5;
av2[2]=t6;
tp(3,av2);}}

/* k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_5806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5806,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5809,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9071,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9073,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:653: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_5809(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5809,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5812,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8813,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8815,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:668: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_5812(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5812,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5815,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8791,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8793,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:688: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_5815(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_5815,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5818,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[159],lf[160]);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8747,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8749,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:697: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}

/* k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_5818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5818,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5821,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8643,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8645,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:707: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_5821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5821,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5824,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8501,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8503,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:728: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_5824(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,5)))){
C_save_and_reclaim((void *)f_5824,c,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5827,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[133],lf[134]);
t5=C_a_i_cons(&a,2,lf[23],lf[24]);
t6=C_a_i_cons(&a,2,lf[25],lf[26]);
t7=C_a_i_list(&a,3,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8053,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8055,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:835: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t8;
av2[2]=t9;
tp(3,av2);}}

/* k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_5827(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,5)))){
C_save_and_reclaim((void *)f_5827,c,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5830,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[133],lf[134]);
t5=C_a_i_cons(&a,2,lf[23],lf[24]);
t6=C_a_i_cons(&a,2,lf[25],lf[26]);
t7=C_a_i_list(&a,3,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7976,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7978,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:924: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t8;
av2[2]=t9;
tp(3,av2);}}

/* k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_5830(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,5)))){
C_save_and_reclaim((void *)f_5830,c,av);}
a=C_alloc(28);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5833,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[133],lf[134]);
t5=C_a_i_cons(&a,2,lf[23],lf[24]);
t6=C_a_i_cons(&a,2,lf[25],lf[26]);
t7=C_a_i_list(&a,3,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7816,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7818,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:952: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t8;
av2[2]=t9;
tp(3,av2);}}

/* k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_5833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5833,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5836,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7304,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7306,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:984: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_5836(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_5836,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5839,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[75],lf[100]);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7132,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7134,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1082: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}

/* k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_5839(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_5839,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5842,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[75],lf[100]);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6937,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6939,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1115: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t6;
av2[2]=t7;
tp(3,av2);}}

/* k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_5842(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5842,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5845,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6872,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6874,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1156: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_5845(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5845,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5848,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6854,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6856,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1173: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_5848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5848,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5851,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6765,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6767,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1182: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_5851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5851,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5854,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6377,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6379,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1205: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}

/* k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_5854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5854,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5857,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1274: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=C_fast_retrieve(lf[20]);
tp(4,av2);}}

/* k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_5857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5857,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[6]+1 /* (set! ##sys#chicken.base-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1280: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2=av;
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_5861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_5861,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5864,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6328,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6330,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1284: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_5864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5864,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1296: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fast_retrieve(lf[20]);
tp(4,av2);}}

/* k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_5867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5867,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#chicken.time-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1301: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2=av;
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in ... */
static void C_ccall f_5871(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_5871,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,lf[21],lf[22]);
t4=C_a_i_cons(&a,2,lf[23],lf[24]);
t5=C_a_i_cons(&a,2,lf[25],lf[26]);
t6=C_a_i_cons(&a,2,lf[27],lf[28]);
t7=C_a_i_cons(&a,2,lf[29],lf[30]);
t8=C_a_i_list(&a,5,t3,t4,t5,t6,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=t2,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5890,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1310: ##sys#er-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t9;
av2[2]=t10;
tp(3,av2);}}

/* k5872 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_5874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5874,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1368: chicken.internal#macro-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fast_retrieve(lf[20]);
tp(4,av2);}}

/* k5875 in k5872 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static void C_ccall f_5877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,10)))){
C_save_and_reclaim((void *)f_5877,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#scheme.case-lambda-macro-environment ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1372: chicken.platform#register-feature! */
t4=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[10];
av2[3]=lf[11];
av2[4]=lf[12];
av2[5]=lf[13];
av2[6]=lf[14];
av2[7]=lf[15];
av2[8]=lf[16];
av2[9]=lf[17];
av2[10]=lf[18];
((C_proc)(void*)(*((C_word*)t4+1)))(11,av2);}}

/* k5878 in k5875 in k5872 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void C_ccall f_5880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5880,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5886 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_5888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5888,c,av);}
/* chicken-syntax.scm:1303: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_5890(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5890,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5894,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1312: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[32];
av2[3]=t2;
av2[4]=lf[48];
tp(5,av2);}}

/* k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static void C_ccall f_5894(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5894,c,av);}
a=C_alloc(26);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5896,a[2]=((C_word*)t0)[2],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5931,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_cdr(((C_word*)t0)[3]);
t9=C_i_check_list_2(t8,lf[39]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6270,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6272,a[2]=t6,a[3]=t12,a[4]=t7,a[5]=((C_word)li12),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_6272(t14,t10,t8);}

/* genvars in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void f_5896(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5896,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5902,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5902(t6,t1,C_fix(0));}

/* loop in genvars in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in ... */
static void f_5902(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5902,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5916,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5928,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1317: chicken.base#gensym */
t5=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5914 in loop in genvars in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in ... */
static void C_ccall f_5916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5916,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1317: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5902(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k5918 in k5914 in loop in genvars in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in ... */
static void C_ccall f_5920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_5920,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k5926 in loop in genvars in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in ... */
static void C_ccall f_5928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5928,c,av);}
/* chicken-syntax.scm:1317: r */
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

/* k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void C_ccall f_5931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5931,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5934,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=C_SCHEME_UNDEFINED,a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=((C_word*)t0)[4],a[12]=C_SCHEME_UNDEFINED,a[13]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1323: genvars */
t3=((C_word*)t0)[5];
f_5896(t3,t2,t1);}

/* k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in ... */
static void C_ccall f_5934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5934,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+8,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5937,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1324: r */
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[46];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in ... */
static void C_ccall f_5937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5937,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1325: r */
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[45];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in ... */
static void C_ccall f_5940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5940,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5943,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1326: r */
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[21];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in ... */
static void C_ccall f_5943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5943,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+12,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5946,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1327: r */
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[27];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in ... */
static void C_ccall f_5946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5946,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+13,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5949,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1328: r */
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[23];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_5949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5949,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5952,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1329: r */
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[25];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in ... */
static void C_ccall f_5952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5952,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5955,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1330: r */
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[29];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in ... */
static void C_ccall f_5955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5955,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5962,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1332: scheme#append */
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[8];
av2[3]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in ... */
static void C_ccall f_5962(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_5962,c,av);}
a=C_alloc(35);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,2,((C_word*)t2)[2],((C_word*)t2)[3]);
t4=C_a_i_list(&a,2,((C_word*)t2)[4],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_u_i_cdr(((C_word*)t2)[5]);
t7=C_i_check_list_2(t6,lf[34]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5978,a[2]=t5,a[3]=((C_word*)t2)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5980,a[2]=((C_word*)t2)[7],a[3]=((C_word*)t2)[8],a[4]=((C_word*)t2)[9],a[5]=((C_word*)t2)[10],a[6]=((C_word*)t2)[11],a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[12],a[9]=((C_word*)t2)[4],a[10]=((C_word*)t2)[13],a[11]=t10,a[12]=((C_word)li10),tmp=(C_word)a,a+=13,tmp));
t12=((C_word*)t10)[1];
f_5980(t12,t8,t6);}

/* k5976 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in ... */
static void C_ccall f_5978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_5978,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[36],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in ... */
static void f_5980(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_5980,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word)li9),tmp=(C_word)a,a+=12,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6233,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[43];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in ... */
static void f_5988(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_5988,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5998,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word)li8),tmp=(C_word)a,a+=14,tmp);
/* chicken-syntax.scm:1337: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[42]);
C_word av2[4];
av2[0]=*((C_word*)lf[42]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
tp(4,av2);}}

/* a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in ... */
static void C_ccall f_5998(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_5998,c,av);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6002,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],tmp=(C_word)a,a+=17,tmp);
/* chicken-syntax.scm:1340: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[32];
av2[3]=C_i_car(((C_word*)t0)[5]);
av2[4]=lf[41];
tp(5,av2);}}

/* k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in ... */
static void C_ccall f_6002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_6002,c,av);}
a=C_alloc(23);
t2=C_fixnum_difference(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6012,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=C_eqp(t2,C_fix(0));
t5=t3;
f_6012(t5,(C_truep(t4)?C_SCHEME_TRUE:C_a_i_list(&a,3,((C_word*)t0)[14],((C_word*)t0)[15],t2)));}
else{
t4=t3;
f_6012(t4,C_a_i_list(&a,3,((C_word*)t0)[16],((C_word*)t0)[15],t2));}}

/* k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in ... */
static void f_6012(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,4)))){
C_save_and_reclaim_args((void *)trf_6012,2,t0,t1);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6016,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6018,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6028,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word)li7),tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1347: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* k6014 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in ... */
static void C_ccall f_6016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6016,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,lf[37],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a6017 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in ... */
static void C_ccall f_6018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6018,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6026,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1348: take */
f_4525(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6024 in a6017 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in ... */
static void C_ccall f_6026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_6026,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4583,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4583(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,t1);}

/* a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in ... */
static void C_ccall f_6028(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6028,c,av);}
a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6032,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6104,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t6,a[7]=((C_word*)t0)[7],a[8]=((C_word)li6),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6104(t8,t4,t3,((C_word*)t0)[8]);}

/* k6030 in a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in ... */
static void C_ccall f_6032(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_6032,c,av);}
a=C_alloc(17);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[39]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6054,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6056,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li5),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6056(t12,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* k6052 in k6030 in a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in ... */
static void C_ccall f_6054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6054,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],t1,((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop3385 in k6030 in a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in ... */
static void f_6056(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_6056,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
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

/* build in a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in ... */
static void f_6104(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_6104,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[2])){
t4=C_a_i_list(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=C_i_cdr(((C_word*)t0)[3]);
t7=C_a_i_cons(&a,2,t5,t6);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t4=C_i_cddr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_u_i_car(C_u_i_cdr(((C_word*)t0)[3]));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_a_i_cons(&a,2,lf[35],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6157,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6205,a[2]=((C_word*)t0)[7],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1355: chicken.base#gensym */
t6=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6155 in build in a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in ... */
static void C_ccall f_6157(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_6157,c,av);}
a=C_alloc(34);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,2,t1,t5);
t7=C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6168,a[2]=((C_word*)t0)[6],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1359: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_6104(t9,t8,C_u_i_cdr(((C_word*)t0)[2]),t1);}
else{
/* chicken-syntax.scm:1360: build */
t9=((C_word*)((C_word*)t0)[7])[1];
f_6104(t9,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k6166 in k6155 in build in a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in ... */
static void C_ccall f_6168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_6168,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6203 in build in a6027 in k6010 in k6000 in a5997 in g3342 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in ... */
static void C_ccall f_6205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6205,c,av);}
/* chicken-syntax.scm:1355: r */
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

/* k6231 in foldr3337 in k5960 in k5953 in k5950 in k5947 in k5944 in k5941 in k5938 in k5935 in k5932 in k5929 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in ... */
static void C_ccall f_6233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6233,c,av);}
/* chicken-syntax.scm:1335: g3342 */
t2=((C_word*)t0)[2];
f_5988(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* a6259 in map-loop3294 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in ... */
static void C_ccall f_6260(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6260,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k6268 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void C_ccall f_6270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6270,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[47]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop3294 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void f_6272(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_6272,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6260,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1319: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[42]);
C_word av2[4];
av2[0]=*((C_word*)lf[42]+1);
av2[1]=t3;
av2[2]=t5;
av2[3]=t6;
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6295 in map-loop3294 in k5892 in a5889 in k5869 in k5865 in k5862 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in ... */
static void C_ccall f_6297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6297,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6272(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6326 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_6328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6328,c,av);}
/* chicken-syntax.scm:1282: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[51];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a6329 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_6330(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6330,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6334,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1286: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[59];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k6332 in a6329 in k5859 in k5855 in k5852 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_6334(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,1)))){
C_save_and_reclaim((void *)f_6334,c,av);}
a=C_alloc(57);
t2=C_a_i_list(&a,1,lf[52]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t3);
t5=C_a_i_cons(&a,2,lf[36],t4);
t6=C_a_i_list(&a,1,lf[53]);
t7=C_a_i_list(&a,2,lf[54],t6);
t8=C_a_i_list(&a,3,lf[55],lf[56],t1);
t9=C_a_i_list(&a,4,lf[36],t1,t7,t8);
t10=C_a_i_list(&a,3,lf[57],t5,t9);
t11=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list(&a,3,lf[58],t2,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* k6375 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_6377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6377,c,av);}
/* chicken-syntax.scm:1203: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[60];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_6379(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_6379,c,av);}
a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6383,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=t3,a[7]=C_SCHEME_UNDEFINED,a[8]=t4,a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=C_SCHEME_UNDEFINED,a[12]=C_SCHEME_UNDEFINED,a[13]=C_SCHEME_UNDEFINED,a[14]=C_SCHEME_UNDEFINED,a[15]=C_SCHEME_UNDEFINED,a[16]=C_SCHEME_UNDEFINED,a[17]=t1,tmp=(C_word)a,a+=18,tmp);
/* chicken-syntax.scm:1207: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[82];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_6383(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6383,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+9,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6386,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1208: r */
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[81];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_6386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6386,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6389,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1209: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[80];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_6389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6389,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6392,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1210: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[79];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_6392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6392,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6395,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1211: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[78];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in ... */
static void C_ccall f_6395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6395,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6398,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1212: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[77];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_6398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6398,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6401,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1213: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[76];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static void C_ccall f_6401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6401,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6404,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1214: r */
t4=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[75];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void C_ccall f_6404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6404,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+15,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6407,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1215: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[74];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in ... */
static void C_ccall f_6407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6407,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+16,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6410,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1216: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[73];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in ... */
static void C_ccall f_6410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6410,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+12,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6413,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1217: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[72];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in ... */
static void C_ccall f_6413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6413,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6416,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1218: r */
t4=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[71];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in ... */
static void C_ccall f_6416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6416,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+11,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6419,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1219: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[70];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in ... */
static void C_ccall f_6419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6419,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+13,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6422,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1220: r */
t5=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[69];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in ... */
static void C_ccall f_6422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6422,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+14,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6425,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1221: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t4;
av2[2]=lf[60];
av2[3]=((C_word*)t2)[2];
av2[4]=lf[68];
tp(5,av2);}}

/* k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in k5834 in ... */
static void C_ccall f_6425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6425,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6428,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1222: scheme#caadr */
t4=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in k5837 in ... */
static void C_ccall f_6428(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(66,c,5)))){
C_save_and_reclaim((void *)f_6428,c,av);}
a=C_alloc(66);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=C_u_i_car(t3);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(((C_word*)t2)[2]);
t7=C_u_i_cdr(t6);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6435,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=t9,a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word)li15),tmp=(C_word)a,a+=12,tmp));
t11=C_a_i_list(&a,1,((C_word*)t2)[11]);
t12=C_a_i_list(&a,1,((C_word*)t2)[12]);
t13=C_a_i_list(&a,1,((C_word*)t2)[13]);
t14=C_a_i_list(&a,2,t1,((C_word*)t2)[12]);
t15=C_a_i_list(&a,1,t14);
t16=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6739,a[2]=((C_word*)t2)[5],a[3]=t15,a[4]=((C_word*)t2)[14],a[5]=((C_word*)t2)[11],a[6]=t13,a[7]=t12,a[8]=t7,a[9]=((C_word*)t2)[15],a[10]=((C_word*)t2)[16],a[11]=t11,a[12]=((C_word*)t2)[17],tmp=(C_word)a,a+=13,tmp);
t17=C_a_i_list(&a,2,lf[66],((C_word*)t2)[12]);
t18=C_a_i_list(&a,3,((C_word*)t2)[14],C_SCHEME_END_OF_LIST,t17);
t19=C_a_i_list(&a,2,((C_word*)t2)[13],t18);
/* chicken-syntax.scm:1261: guard-aux */
t20=((C_word*)t9)[1];
f_6435(t20,t16,t19,C_i_car(t5),C_u_i_cdr(t5));}

/* guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in ... */
static void f_6435(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_6435,5,t0,t1,t2,t3,t4);}
a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6442,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,a[8]=t2,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_i_pairp(t3))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6639,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1226: c */
t7=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[10];
av2[3]=C_u_i_car(t3);
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t6=t5;
f_6442(t6,C_SCHEME_FALSE);}}

/* k6440 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in ... */
static void f_6442(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6442,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])))){
t3=C_i_cddr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t3))){
t4=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1230: c */
t5=((C_word*)t0)[12];{
C_word av2[4];
av2[0]=t5;
av2[1]=t2;
av2[2]=((C_word*)t0)[13];
av2[3]=C_u_i_car(t4);
((C_proc)C_fast_retrieve_proc(t5))(4,av2);}}
else{
t4=t2;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6455(2,av2);}}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6455(2,av2);}}}
else{
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6455(2,av2);}}}}

/* k6453 in k6440 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in ... */
static void C_ccall f_6455(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_6455,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1231: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[61];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=C_i_pairp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t3)){
if(C_truep(C_i_nullp(((C_word*)t0)[6]))){
t4=C_i_car(((C_word*)t0)[2]);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[10],t4,((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1241: r */
t5=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[61];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}
else{
t4=C_i_pairp(((C_word*)t0)[2]);
t5=(C_truep(t4)?C_i_pairp(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t0)[2]);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[11],t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6573,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[6]))){
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[3],t6,t8,((C_word*)t0)[7]);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1251: guard-aux */
t10=((C_word*)((C_word*)t0)[8])[1];
f_6435(t10,t9,((C_word*)t0)[7],C_i_car(((C_word*)t0)[6]),C_u_i_cdr(((C_word*)t0)[6]));}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}}}

/* k6456 in k6453 in k6440 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in ... */
static void C_ccall f_6458(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,4)))){
C_save_and_reclaim((void *)f_6458,c,av);}
a=C_alloc(44);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=C_i_caddr(((C_word*)t0)[2]);
t6=C_a_i_list(&a,2,t5,t1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6477,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t6,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[6]))){
t8=C_a_i_list(&a,4,((C_word*)t0)[3],t1,t6,((C_word*)t0)[7]);
t9=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[5],t4,t8);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1237: guard-aux */
t8=((C_word*)((C_word*)t0)[8])[1];
f_6435(t8,t7,((C_word*)t0)[7],C_i_car(((C_word*)t0)[6]),C_u_i_cdr(((C_word*)t0)[6]));}}

/* k6475 in k6456 in k6453 in k6440 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in ... */
static void C_ccall f_6477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6477,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6521 in k6453 in k6440 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in ... */
static void C_ccall f_6523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6523,c,av);}
a=C_alloc(16);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6538,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1245: guard-aux */
t6=((C_word*)((C_word*)t0)[6])[1];
f_6435(t6,t5,((C_word*)t0)[7],C_i_car(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[8]));}

/* k6536 in k6521 in k6453 in k6440 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in ... */
static void C_ccall f_6538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_6538,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[3],t1);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6571 in k6453 in k6440 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in ... */
static void C_ccall f_6573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6573,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6637 in guard-aux in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in ... */
static void C_ccall f_6639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6639,c,av);}
t2=((C_word*)t0)[2];
f_6442(t2,(C_truep(t1)?C_i_nullp(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* k6737 in k6426 in k6423 in k6420 in k6417 in k6414 in k6411 in k6408 in k6405 in k6402 in k6399 in k6396 in k6393 in k6390 in k6387 in k6384 in k6381 in a6378 in k5849 in k5846 in k5843 in k5840 in ... */
static void C_ccall f_6739(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(135,c,1)))){
C_save_and_reclaim((void *)f_6739,c,av);}
a=C_alloc(135);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[5],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,2,lf[62],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[7],t7);
t9=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[8]);
t10=C_a_i_cons(&a,2,((C_word*)t0)[4],t9);
t11=C_a_i_list(&a,3,((C_word*)t0)[9],((C_word*)t0)[10],lf[63]);
t12=C_a_i_list(&a,3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t11);
t13=C_a_i_list(&a,2,((C_word*)t0)[5],t12);
t14=C_a_i_list(&a,3,((C_word*)t0)[4],lf[63],t13);
t15=C_a_i_list(&a,3,lf[64],t10,t14);
t16=C_a_i_list(&a,3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t15);
t17=C_a_i_list(&a,3,lf[65],t8,t16);
t18=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[11],t17);
t19=C_a_i_list(&a,2,lf[62],t18);
t20=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t20;
av2[1]=C_a_i_list(&a,1,t19);
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* k6763 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_6765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6765,c,av);}
/* chicken-syntax.scm:1180: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[83];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_6767(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6767,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6771,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1185: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[83];
av2[3]=t2;
av2[4]=lf[94];
tp(5,av2);}}

/* k6769 in a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_6771(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6771,c,av);}
a=C_alloc(9);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?lf[84]:C_i_car(t4));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6782,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1189: r */
t10=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[93];
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}

/* k6780 in k6769 in a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_6782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_6782,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6785,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_stringp(((C_word*)((C_word*)t0)[5])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6837,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1191: chicken.syntax#get-line-number */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t3=t2;
f_6785(t3,C_SCHEME_UNDEFINED);}}

/* k6783 in k6780 in k6769 in a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void f_6785(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,2)))){
C_save_and_reclaim_args((void *)trf_6785,2,t0,t1);}
a=C_alloc(25);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[85],((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6808,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[5]))){
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=t5;
f_6808(t7,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[6])[1],t6));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6827,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1200: chicken.syntax#strip-syntax */
t7=C_fast_retrieve(lf[88]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k6806 in k6783 in k6780 in k6769 in a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void f_6808(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,1)))){
C_save_and_reclaim_args((void *)trf_6808,2,t0,t1);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,lf[86],t1);
t3=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6825 in k6783 in k6780 in k6769 in a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_6827(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_6827,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,2,lf[87],t1);
t3=C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[2];
f_6808(t4,C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[3])[1],t3));}

/* k6835 in k6780 in k6769 in a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_6837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_6837,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6844,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1192: string-append */
t3=*((C_word*)lf[89]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[90];
av2[3]=t1;
av2[4]=lf[91];
av2[5]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
t2=((C_word*)t0)[3];
f_6785(t2,C_SCHEME_FALSE);}}

/* k6842 in k6835 in k6780 in k6769 in a6766 in k5846 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_6844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6844,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=((C_word*)t2)[3];
f_6785(t4,t3);}

/* k6852 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_6854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6854,c,av);}
/* chicken-syntax.scm:1170: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[95];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a6855 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_6856(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6856,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6864,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1175: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[96];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k6862 in a6855 in k5843 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_6864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6864,c,av);}
a=C_alloc(3);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6870 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_6872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6872,c,av);}
/* chicken-syntax.scm:1154: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[97];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a6873 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_6874(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_6874,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6878,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1158: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[97];
av2[3]=t2;
av2[4]=lf[99];
tp(5,av2);}}

/* k6876 in a6873 in k5840 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_6878(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_6878,c,av);}
a=C_alloc(24);
t2=C_i_cadr(((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t2))){
t3=C_u_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_u_i_cdr(((C_word*)t0)[2]);
t6=C_u_i_cdr(t5);
t7=C_a_i_cons(&a,2,t4,t6);
t8=C_a_i_cons(&a,2,lf[36],t7);
t9=C_a_i_list(&a,2,t3,t8);
t10=C_a_i_list(&a,1,t9);
t11=C_u_i_car(t2);
t12=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list(&a,3,lf[98],t10,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,t2,t4);
t6=C_a_i_list(&a,1,t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,3,lf[98],t6,t2);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k6935 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_6937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6937,c,av);}
/* chicken-syntax.scm:1112: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[101];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_6939(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6939,c,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6943,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=t4,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1117: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[75];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_6943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6943,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6946,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1118: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[107];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_6946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6946,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6949,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1119: r */
t5=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[106];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_6949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6949,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6952,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cdr(((C_word*)t2)[2]);
if(C_truep(C_i_nullp(t5))){
/* chicken-syntax.scm:1121: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t4;
av2[2]=lf[101];
av2[3]=lf[105];
av2[4]=((C_word*)t2)[2];
tp(5,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6952(2,av2);}}}

/* k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_6952(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,7)))){
C_save_and_reclaim((void *)f_6952,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6959,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t5,a[5]=((C_word*)t2)[2],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word)li20),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_6959(t7,((C_word*)t2)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void f_6959(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_6959,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6969,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1124: scheme#reverse */
t8=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7038,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:1134: c */
t8=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t8))(4,av2);}}}

/* k6967 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_6969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6969,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1125: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
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

/* k6970 in k6967 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_6972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,2)))){
C_save_and_reclaim((void *)f_6972,c,av);}
a=C_alloc(21);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6978,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7015,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1127: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_a_i_list(&a,3,lf[36],((C_word*)t0)[6],t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6976 in k6970 in k6967 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_6978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6978,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1128: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6987 in k6976 in k6970 in k6967 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in ... */
static void C_ccall f_6989(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6989,c,av);}
a=C_alloc(10);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7005,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[6]);
/* chicken-syntax.scm:1128: ##sys#append */
t6=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k7003 in k6987 in k6976 in k6970 in k6967 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_7005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,1)))){
C_save_and_reclaim((void *)f_7005,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[36],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7013 in k6970 in k6967 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_7015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7015,c,av);}
/* chicken-syntax.scm:1127: r */
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

/* k7036 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_7038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_7038,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7058,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1135: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:1137: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[11];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k7039 in k7036 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_7041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_7041,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1136: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_6959(t5,((C_word*)t0)[6],t2,t3,((C_word*)t0)[7],t4,C_SCHEME_FALSE);}

/* k7056 in k7036 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_7058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7058,c,av);}
/* chicken-syntax.scm:1135: r */
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

/* k7062 in k7036 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_7064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7064,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1139: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6959(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1140: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[101];
av2[3]=lf[104];
av2[4]=((C_word*)t0)[8];
tp(5,av2);}}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7104,a[2]=((C_word*)t0)[9],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1145: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7079 in k7062 in k7036 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_7081(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7081,c,av);}
a=C_alloc(12);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t1,t3);
t5=C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1146: loop */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6959(t7,((C_word*)t0)[6],t2,((C_word*)t0)[7],t5,t6,C_SCHEME_FALSE);}

/* k7102 in k7062 in k7036 in loop in k6950 in k6947 in k6944 in k6941 in a6938 in k5837 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_7104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7104,c,av);}
/* chicken-syntax.scm:1145: r */
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

/* k7130 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_7132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7132,c,av);}
/* chicken-syntax.scm:1079: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[108];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_7134(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7134,c,av);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7138,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=t4,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:1084: r */
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[107];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_7138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7138,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7141,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1085: r */
t4=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[106];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_7141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7141,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7144,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1086: r */
t5=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[75];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_7144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_7144,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7147,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cdr(((C_word*)t2)[2]);
if(C_truep(C_i_nullp(t5))){
/* chicken-syntax.scm:1088: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t4;
av2[2]=lf[108];
av2[3]=lf[110];
av2[4]=((C_word*)t2)[2];
tp(5,av2);}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_7147(2,av2);}}}

/* k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_7147(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_7147,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7154,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t5,a[5]=((C_word*)t2)[2],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word)li22),tmp=(C_word)a,a+=10,tmp));
t7=((C_word*)t5)[1];
f_7154(t7,((C_word*)t2)[8],t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void f_7154(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_7154,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7164,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1091: scheme#reverse */
t7=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7229,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* chicken-syntax.scm:1100: c */
t7=((C_word*)t0)[6];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k7162 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_7164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7164,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:1092: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
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

/* k7165 in k7162 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_7167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7167,c,av);}
a=C_alloc(18);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7173,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7206,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1094: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=C_i_car(t1);
t3=C_a_i_list(&a,2,lf[58],t2);
t4=C_u_i_cdr(t1);
t5=C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[36],((C_word*)t0)[5],t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k7171 in k7165 in k7162 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_7173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7173,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:1095: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7178 in k7171 in k7165 in k7162 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_7180(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7180,c,av);}
a=C_alloc(9);
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7196,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,1,((C_word*)t0)[5]);
/* chicken-syntax.scm:1095: ##sys#append */
t6=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k7194 in k7178 in k7171 in k7165 in k7162 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in ... */
static void C_ccall f_7196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_7196,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[36],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7204 in k7165 in k7162 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_7206(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7206,c,av);}
/* chicken-syntax.scm:1094: r */
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

/* k7227 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_7229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_7229,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7249,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1101: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1103: c */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=C_u_i_car(((C_word*)t0)[2]);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k7230 in k7227 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_7232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_7232,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken-syntax.scm:1102: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7154(t5,((C_word*)t0)[6],t2,t3,t4,C_SCHEME_FALSE);}

/* k7247 in k7227 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_7249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7249,c,av);}
/* chicken-syntax.scm:1101: r */
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

/* k7253 in k7227 in loop in k7145 in k7142 in k7139 in k7136 in a7133 in k5834 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_7255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_7255,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])))){
/* chicken-syntax.scm:1105: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7154(t2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
/* chicken-syntax.scm:1106: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[103]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[108];
av2[3]=lf[109];
av2[4]=((C_word*)t0)[7];
tp(5,av2);}}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[6]);
/* chicken-syntax.scm:1110: loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7154(t5,((C_word*)t0)[4],t2,((C_word*)t0)[5],t4,C_SCHEME_FALSE);}}

/* k7302 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_7304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7304,c,av);}
/* chicken-syntax.scm:981: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[111];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_7306(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7306,c,av);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7310,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:986: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[111];
av2[3]=t2;
av2[4]=lf[132];
tp(5,av2);}}

/* k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_7310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7310,c,av);}
a=C_alloc(3);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7316,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:991: chicken.syntax#strip-syntax */
t5=C_fast_retrieve(lf[88]);{
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

/* k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_7316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_7316,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7319,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7797,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:992: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_7319(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7319,c,av);}
a=C_alloc(16);
t2=C_i_caddr(((C_word*)t0)[2]);
t3=C_i_cadddr(((C_word*)t0)[2]);
t4=C_i_cddddr(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_7331,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t0)[3],a[8]=t2,a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=t3,a[12]=((C_word*)t0)[4],a[13]=((C_word*)t0)[5],a[14]=C_SCHEME_UNDEFINED,a[15]=((C_word*)t0)[6],tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm:1000: r */
t6=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[127];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_7331(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7331,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7334,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1001: r */
t4=((C_word*)t0)[15];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[126];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_7334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7334,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7337,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1002: r */
t5=((C_word*)t2)[15];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[79];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_7337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7337,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7340,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1003: r */
t5=((C_word*)t2)[15];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[125];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_7340(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7340,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7343,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1004: r */
t5=((C_word*)t2)[15];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[124];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_7343(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7343,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+14,t1);
t4=C_i_cdr(((C_word*)t2)[8]);
t5=C_mutate(((C_word *)t2)+3,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7349,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:1006: r */
t7=((C_word*)t2)[15];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[123];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_7349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7349,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_7352,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=t1,a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],a[14]=((C_word*)t2)[13],a[15]=((C_word*)t2)[14],tmp=(C_word)a,a+=16,tmp);
/* chicken-syntax.scm:1007: r */
t4=((C_word*)t2)[15];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[122];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void C_ccall f_7352(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,3)))){
C_save_and_reclaim((void *)f_7352,c,av);}
a=C_alloc(30);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t1,a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7762,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7762(t11,t7,((C_word*)t0)[2]);}

/* k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in ... */
static void C_ccall f_7361(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_7361,c,av);}
a=C_alloc(29);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7362,a[2]=t1,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[113]);
t4=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_7378,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7739,a[2]=t6,a[3]=t2,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7739(t8,t4,((C_word*)t0)[2]);}

/* g2996 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void f_7362(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7362,3,t0,t1,t2);}
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* chicken-syntax.scm:1012: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word av2[5];
av2[0]=*((C_word*)lf[103]+1);
av2[1]=t1;
av2[2]=lf[111];
av2[3]=lf[112];
av2[4]=t2;
tp(5,av2);}}}

/* k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_7378(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(65,c,3)))){
C_save_and_reclaim((void *)f_7378,c,av);}
a=C_alloc(65);
t2=C_a_i_list(&a,2,lf[87],((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t3);
t5=C_u_i_car(((C_word*)t0)[6]);
t6=C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[5]);
t7=C_a_i_list(&a,1,t6);
t8=C_u_i_cdr(((C_word*)t0)[6]);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7678,a[2]=((C_word*)t0)[8],a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp);
t14=C_i_check_list_2(((C_word*)t0)[9],lf[39]);
t15=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7691,a[2]=((C_word*)t0)[7],a[3]=t8,a[4]=((C_word*)t0)[10],a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t5,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=t4,a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7693,a[2]=t13,a[3]=t11,a[4]=t17,a[5]=t12,a[6]=((C_word)li27),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_7693(t19,t15,((C_word*)t0)[9]);}

/* k7407 in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void C_ccall f_7409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_7409,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[58],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in ... */
static void f_7411(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,0,3)))){
C_save_and_reclaim_args((void *)trf_7411,4,t0,t1,t2,t3);}
a=C_alloc(21);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_cddr(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_caddr(t4):C_SCHEME_FALSE);
t8=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7430,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=t2,a[9]=((C_word*)t0)[5],a[10]=t6,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],a[14]=t7,a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_pairp(t7))){
if(C_truep(C_i_pairp(C_u_i_cdr(t7)))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7611,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:1041: c */
t10=((C_word*)t0)[8];{
C_word av2[4];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[121];
av2[3]=C_u_i_car(t7);
((C_proc)C_fast_retrieve_proc(t10))(4,av2);}}
else{
t9=t8;
f_7430(t9,C_SCHEME_FALSE);}}
else{
t9=t8;
f_7430(t9,C_SCHEME_FALSE);}}}

/* k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in ... */
static void f_7430(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(119,0,2)))){
C_save_and_reclaim_args((void *)trf_7430,2,t0,t1);}
a=C_alloc(119);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_a_i_list(&a,2,lf[87],t3);
t5=C_a_i_list(&a,4,lf[117],((C_word*)t0)[2],((C_word*)t0)[4],t4);
t6=C_a_i_list(&a,2,lf[85],t5);
t7=C_a_i_list(&a,3,lf[118],((C_word*)t0)[2],((C_word*)t0)[5]);
t8=C_a_i_list(&a,4,lf[36],t2,t6,t7);
t9=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7436,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t8,tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[10])){
t10=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[16]);
t11=C_a_i_list(&a,2,lf[87],t1);
t12=C_a_i_list(&a,4,lf[117],((C_word*)t0)[2],((C_word*)t0)[4],t11);
t13=C_a_i_list(&a,2,lf[85],t12);
t14=C_a_i_list(&a,4,lf[120],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[16]);
t15=t9;
f_7436(t15,C_a_i_list(&a,4,lf[36],t10,t13,t14));}
else{
t10=t9;
f_7436(t10,C_SCHEME_FALSE);}}

/* k7434 in k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in ... */
static void f_7436(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,3)))){
C_save_and_reclaim_args((void *)trf_7436,2,t0,t1);}
a=C_alloc(34);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_7525,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[2],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
t5=C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[11]);
t6=C_a_i_list(&a,1,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7536,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[16],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[12],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[9])){
t8=C_u_i_cdr(((C_word*)t0)[2]);
/* chicken-syntax.scm:1063: c */
t9=((C_word*)t0)[13];{
C_word av2[4];
av2[0]=t9;
av2[1]=t7;
av2[2]=((C_word*)t0)[9];
av2[3]=C_u_i_car(t8);
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}
else{
t8=t7;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_7536(2,av2);}}}

/* k7445 in k7523 in k7434 in k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in ... */
static void C_ccall f_7447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7447,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7449 in k7523 in k7434 in k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in ... */
static void f_7451(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trf_7451,2,t0,t1);}
a=C_alloc(33);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7455,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(1));
/* chicken-syntax.scm:1074: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_7411(t5,t2,t3,t4);}

/* k7453 in k7449 in k7523 in k7434 in k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in ... */
static void C_ccall f_7455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7455,c,av);}
/* chicken-syntax.scm:1060: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* k7493 in k7523 in k7434 in k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in ... */
static void C_ccall f_7495(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,1)))){
C_save_and_reclaim((void *)f_7495,c,av);}
a=C_alloc(36);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[119],lf[119]);
t5=C_a_i_list(&a,3,t4,((C_word*)t0)[4],((C_word*)t0)[5]);
t6=C_a_i_list(&a,3,((C_word*)t0)[6],t3,t5);
t7=((C_word*)t0)[7];
f_7451(t7,C_a_i_list(&a,1,t6));}
else{
t2=((C_word*)t0)[7];
f_7451(t2,C_SCHEME_END_OF_LIST);}}

/* k7523 in k7434 in k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in ... */
static void f_7525(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(49,0,3)))){
C_save_and_reclaim_args((void *)trf_7525,2,t0,t1);}
a=C_alloc(49);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7447,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7451,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[8])){
if(C_truep(((C_word*)t0)[9])){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7495,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:1068: c */
t6=((C_word*)t0)[14];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[9];
av2[3]=C_i_cadr(((C_word*)t0)[15]);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t5=C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[11]);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,3,((C_word*)t0)[13],t6,((C_word*)t0)[12]);
t8=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[16],t7);
t9=t4;
f_7451(t9,C_a_i_list(&a,1,t8));}}
else{
t5=t4;
f_7451(t5,C_SCHEME_END_OF_LIST);}}

/* k7534 in k7434 in k7428 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in ... */
static void C_ccall f_7536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_7536,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];
f_7525(t3,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t2));}
else{
t2=((C_word*)t0)[5];
f_7525(t2,C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]));}}

/* k7609 in loop in k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in ... */
static void C_ccall f_7611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7611,c,av);}
t2=((C_word*)t0)[2];
f_7430(t2,(C_truep(t1)?C_i_cadr(((C_word*)t0)[3]):C_SCHEME_FALSE));}

/* g3022 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static C_word f_7678(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_memq(t1,((C_word*)t0)[2]);
return((C_truep(t2)?t1:lf[114]));}

/* k7689 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static void C_ccall f_7691(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(101,c,4)))){
C_save_and_reclaim((void *)f_7691,c,av);}
a=C_alloc(101);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[115],t2);
t4=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[7],t5);
t7=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[8]);
t8=C_a_i_list(&a,1,t7);
t9=C_a_i_list(&a,1,((C_word*)t0)[9]);
t10=C_a_i_list(&a,3,lf[116],((C_word*)t0)[9],((C_word*)t0)[2]);
t11=C_a_i_list(&a,3,lf[36],t9,t10);
t12=C_a_i_list(&a,3,((C_word*)t0)[4],t8,t11);
t13=C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[10],t12);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7409,a[2]=t13,a[3]=t6,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7411,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=t16,a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word)li26),tmp=(C_word)a,a+=12,tmp));
t18=((C_word*)t16)[1];
f_7411(t18,t14,((C_word*)t0)[16],C_fix(1));}

/* map-loop3016 in k7376 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static void f_7693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7693,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* chicken-syntax.scm:1024: g3022 */
  f_7678(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t4=C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t4);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t8=t1;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* for-each-loop2995 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void f_7739(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7739,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7749,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:1010: g2996 */
t4=((C_word*)t0)[3];
f_7362(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7747 in for-each-loop2995 in k7359 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static void C_ccall f_7749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7749,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7739(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop2969 in k7350 in k7347 in k7341 in k7338 in k7335 in k7332 in k7329 in k7317 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in ... */
static void f_7762(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7762,3,t0,t1,t2);}
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

/* k7795 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_7797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7797,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7808,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:994: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_7319(2,av2);}}}

/* k7802 in k7795 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_7804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7804,c,av);}
/* chicken-syntax.scm:993: chicken.base#symbol-append */
t2=*((C_word*)lf[128]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[129];
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k7806 in k7795 in k7314 in k7308 in a7305 in k5831 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_7808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7808,c,av);}
/* chicken-syntax.scm:994: ##sys#module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[130]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[130]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7814 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_7816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7816,c,av);}
/* chicken-syntax.scm:947: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[135];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_7818(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_7818,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7822,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:954: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[135];
av2[3]=t2;
av2[4]=lf[137];
tp(5,av2);}}

/* k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_7822(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7822,c,av);}
a=C_alloc(10);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7834,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[4],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:958: r */
t8=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[133];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_7834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7834,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7837,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:959: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[23];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k7835 in k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_7837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7837,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7840,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:960: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[25];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k7838 in k7835 in k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_7840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7840,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7843,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:961: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[93];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k7841 in k7838 in k7835 in k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_7843(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_7843,c,av);}
a=C_alloc(24);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,2,t1,((C_word*)t2)[2]);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7854,a[2]=((C_word*)t2)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7856,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=t7,a[7]=((C_word*)t2)[8],a[8]=((C_word)li31),tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_7856(t9,t5,t1,((C_word*)t2)[9]);}

/* k7852 in k7841 in k7838 in k7835 in k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_7854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7854,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k7841 in k7838 in k7835 in k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void f_7856(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_7856,4,t0,t1,t2,t3);}
a=C_alloc(15);
if(C_truep(C_i_nullp(t3))){
t4=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[35],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7882,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:969: r */
t6=((C_word*)t0)[7];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[136];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}
else{
t5=C_a_i_list(&a,2,t4,t2);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_a_i_cons(&a,2,lf[35],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}

/* k7880 in loop in k7841 in k7838 in k7835 in k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_7882(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(76,c,3)))){
C_save_and_reclaim((void *)f_7882,c,av);}
a=C_alloc(76);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t6=C_a_i_list(&a,4,lf[37],t3,t4,t5);
t7=C_a_i_list(&a,2,t2,t6);
t8=C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t9=C_a_i_list(&a,2,lf[87],C_SCHEME_END_OF_LIST);
t10=C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t11=C_a_i_list(&a,4,lf[37],t8,t9,t10);
t12=C_a_i_list(&a,2,t1,t11);
t13=C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7893,a[2]=((C_word*)t0)[7],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:976: loop */
t15=((C_word*)((C_word*)t0)[8])[1];
f_7856(t15,t14,t1,C_u_i_cdr(((C_word*)t0)[9]));}

/* k7891 in k7880 in loop in k7841 in k7838 in k7835 in k7832 in k7820 in a7817 in k5828 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_7893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7893,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7974 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_7976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7976,c,av);}
/* chicken-syntax.scm:919: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[138];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a7977 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_7978(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_7978,c,av);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7982,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=t1,a[5]=C_SCHEME_UNDEFINED,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:926: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[138];
av2[3]=t2;
av2[4]=lf[139];
tp(5,av2);}}

/* k7980 in a7977 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_7982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7982,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7985,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:927: r */
t3=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k7983 in k7980 in a7977 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_7985(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7985,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=C_i_cadr(((C_word*)t2)[3]);
t5=C_a_i_list(&a,2,((C_word*)t2)[2],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_mutate(((C_word *)t2)+5,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8025,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:929: r */
t9=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[133];
((C_proc)C_fast_retrieve_proc(t9))(3,av2);}}

/* k8013 in k8023 in k7983 in k7980 in a7977 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_8015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8015,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,4,lf[37],((C_word*)t0)[3],((C_word*)t0)[4],t2);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[6],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8023 in k7983 in k7980 in a7977 in k5825 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_8025(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_8025,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,2,t1,((C_word*)t2)[2]);
t4=C_i_cddr(((C_word*)t2)[3]);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8015,a[2]=((C_word*)t2)[2],a[3]=t3,a[4]=t6,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:931: r */
t8=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=lf[23];
((C_proc)C_fast_retrieve_proc(t8))(3,av2);}}

/* k8051 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8053,c,av);}
/* chicken-syntax.scm:830: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[140];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8055(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8055,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8059,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:837: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[140];
av2[3]=t2;
av2[4]=lf[150];
tp(5,av2);}}

/* k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_8059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,6)))){
C_save_and_reclaim((void *)f_8059,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8149,a[2]=((C_word*)t0)[3],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8242,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* chicken-syntax.scm:876: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t8;
av2[2]=lf[140];
av2[3]=t3;
av2[4]=lf[149];
tp(5,av2);}}

/* k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_8078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8078,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8082,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:847: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
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

/* k8080 in k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_8082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_8082,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:848: scheme#reverse */
t3=*((C_word*)lf[38]+1);{
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

/* k8084 in k8080 in k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_8086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_8086,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8088,a[2]=t3,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_8088(t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* recur in k8084 in k8080 in k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in ... */
static void f_8088(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8088,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_i_cdr(t2);
t7=C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8127,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t6,a[7]=t3,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
/* chicken-syntax.scm:853: scheme#reverse */
t9=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t6;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}

/* k8107 in k8133 in k8125 in recur in k8084 in k8080 in k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in ... */
static void C_ccall f_8109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8109,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8125 in recur in k8084 in k8080 in k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in ... */
static void C_ccall f_8127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8127,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8135,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8139,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:854: scheme#reverse */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8133 in k8125 in recur in k8084 in k8080 in k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_8135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(22,c,5)))){
C_save_and_reclaim((void *)f_8135,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8109,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:855: recur */
t6=((C_word*)((C_word*)t0)[6])[1];
f_8088(t6,t5,((C_word*)t0)[7],C_u_i_cdr(((C_word*)t0)[8]),C_u_i_cdr(((C_word*)t0)[9]),C_u_i_car(((C_word*)t0)[8]));}

/* k8137 in k8125 in recur in k8084 in k8080 in k8076 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in ... */
static void C_ccall f_8139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8139,c,av);}
a=C_alloc(3);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
/* chicken-syntax.scm:852: ##sys#append */
t4=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void f_8149(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_8149,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(9);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8155,a[2]=t4,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=((C_word)li34),tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_8155(t9,t1,t2,t3,C_SCHEME_END_OF_LIST);}

/* recur in make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void f_8155(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_8155,5,t0,t1,t2,t3,t4);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8169,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:866: scheme#reverse */
t6=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8239,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,a[6]=C_SCHEME_UNDEFINED,a[7]=t2,a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:868: r */
t7=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[133];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}

/* k8167 in recur in make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_8169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8169,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8193 in k8217 in k8225 in k8233 in k8237 in recur in make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_8195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8195,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,3,lf[35],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,lf[37],((C_word*)t0)[4],((C_word*)t0)[5],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8217 in k8225 in k8233 in k8237 in recur in make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_8219(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_8219,c,av);}
a=C_alloc(27);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8195,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(((C_word*)t0)[7]);
t7=C_u_i_cdr(((C_word*)t0)[8]);
t8=C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[10]);
/* chicken-syntax.scm:872: recur */
t9=((C_word*)((C_word*)t0)[11])[1];
f_8155(t9,t5,t6,t7,t8);}

/* k8225 in k8233 in k8237 in recur in make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_8227(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_8227,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8219,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:871: r */
t5=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[25];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k8233 in k8237 in recur in make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_8235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8235,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,((C_word*)t2)[2],t1);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8227,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=t3,a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],tmp=(C_word)a,a+=12,tmp);
/* chicken-syntax.scm:870: r */
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[23];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k8237 in recur in make-if-tree in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_8239(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8239,c,av);}
a=C_alloc(9);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)t0)+6,t2);
t4=C_i_car(((C_word*)t0)[8]);
t5=C_mutate(((C_word *)t0)+2,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8235,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:869: scheme#reverse */
t7=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8242(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8242,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8245,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:877: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=lf[140];
av2[3]=((C_word*)t0)[5];
av2[4]=lf[148];
tp(5,av2);}}

/* k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_8245(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8245,c,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t2)[2],lf[39]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8254,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[2],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8453,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8453(t12,t8,((C_word*)t2)[2]);}

/* k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_8254(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_8254,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8255,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8271,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
t8=C_i_check_list_2(t1,lf[39]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8285,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8419,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8419(t13,t9,t1);}

/* prefix-sym in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void f_8255(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_8255,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8263,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8267,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:880: scheme#symbol->string */
t6=*((C_word*)lf[142]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k8261 in prefix-sym in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_8263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8263,c,av);}
/* chicken-syntax.scm:880: scheme#string->symbol */
t2=*((C_word*)lf[141]+1);{
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

/* k8265 in prefix-sym in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_8267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8267,c,av);}
/* chicken-syntax.scm:880: scheme#string-append */
t2=*((C_word*)lf[89]+1);{
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

/* g2813 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void f_8271(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8271,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8279,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:885: prefix-sym */
f_8255(t3,lf[143],t2);}

/* k8277 in g2813 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_8279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8279,c,av);}
/* chicken-syntax.scm:885: r */
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

/* k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void C_ccall f_8285(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_8285,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8385,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_8385(t10,t6,((C_word*)t0)[9]);}

/* k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_8291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8291,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+11,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8294,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:889: r */
t4=((C_word*)t0)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[147];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in ... */
static void C_ccall f_8294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8294,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8297,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:892: r */
t5=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[146];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in ... */
static void C_ccall f_8297(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,3)))){
C_save_and_reclaim((void *)f_8297,c,av);}
a=C_alloc(31);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8301,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8312,a[2]=t1,a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[2],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=((C_word*)t2)[11],tmp=(C_word)a,a+=12,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8351,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li40),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_8351(t12,t8,((C_word*)t2)[5]);}

/* g2870 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void f_8301(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8301,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8309,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:894: prefix-sym */
f_8255(t3,lf[144],t2);}

/* k8307 in g2870 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_8309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8309,c,av);}
/* chicken-syntax.scm:894: r */
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

/* k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void C_ccall f_8312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8312,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8078,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[11],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:846: scheme#reverse */
t4=*((C_word*)lf[38]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k8313 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_8315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_8315,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:899: make-if-tree */
t3=((C_word*)t0)[9];
f_8149(t3,t2,((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k8316 in k8313 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in ... */
static void C_ccall f_8318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8318,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* chicken-syntax.scm:902: r */
t3=((C_word*)t0)[9];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[145];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k8323 in k8316 in k8313 in k8310 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in ... */
static void C_ccall f_8325(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_8325,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
t4=C_a_i_cons(&a,2,lf[36],t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[7]);
t7=C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,t1,t7,((C_word*)t0)[9]);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* map-loop2864 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in ... */
static void f_8351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8351,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:894: g2870 */
t4=((C_word*)t0)[4];
f_8301(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8374 in map-loop2864 in k8295 in k8292 in k8289 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in ... */
static void C_ccall f_8376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8376,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8351(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2835 in k8283 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void f_8385(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8385,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* map-loop2807 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in ... */
static void f_8419(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8419,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:885: g2813 */
t4=((C_word*)t0)[4];
f_8271(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8442 in map-loop2807 in k8252 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in ... */
static void C_ccall f_8444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8444,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8419(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2777 in k8243 in k8240 in k8057 in a8054 in k5822 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void f_8453(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8453,3,t0,t1,t2);}
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

/* k8499 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_8501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8501,c,av);}
/* chicken-syntax.scm:726: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[151];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_8503(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8503,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8507,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:730: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[151];
av2[3]=t2;
av2[4]=lf[154];
tp(5,av2);}}

/* k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8507(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8507,c,av);}
a=C_alloc(8);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8517,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=((C_word)li45),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_8517(t8,((C_word*)t0)[4],t2,C_SCHEME_TRUE);}

/* fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void f_8517(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_8517,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,lf[58],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=C_i_pairp(t4);
if(C_truep(C_i_not(t6))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8544,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:739: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word av2[5];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t7;
av2[2]=lf[151];
av2[3]=t4;
av2[4]=lf[152];
tp(5,av2);}}
else{
t7=C_i_cdr(t4);
if(C_truep(C_i_nullp(t7))){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8579,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8604,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:744: chicken.base#gensym */
t10=*((C_word*)lf[33]+1);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8607,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:748: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word av2[5];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t8;
av2[2]=lf[151];
av2[3]=t4;
av2[4]=lf[153];
tp(5,av2);}}}}}

/* k8542 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8544,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8570,a[2]=((C_word*)t0)[6],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:740: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8545 in k8542 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_8547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8547,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8562,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:742: fold */
t5=((C_word*)((C_word*)t0)[4])[1];
f_8517(t5,t4,((C_word*)t0)[5],t1);}

/* k8560 in k8545 in k8542 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in ... */
static void C_ccall f_8562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8562,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8568 in k8542 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_8570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8570,c,av);}
/* chicken-syntax.scm:740: r */
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

/* k8577 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8579,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_list(&a,2,t1,t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8594,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:746: fold */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8517(t6,t5,((C_word*)t0)[5],t1);}

/* k8592 in k8577 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_8594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8594,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8602 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8604,c,av);}
/* chicken-syntax.scm:744: r */
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

/* k8605 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8607(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8607,c,av);}
a=C_alloc(14);
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list(&a,2,t2,t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8623,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:751: fold */
t7=((C_word*)((C_word*)t0)[4])[1];
f_8517(t7,t6,((C_word*)t0)[5],t2);}

/* k8621 in k8605 in fold in k8505 in a8502 in k5819 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in ... */
static void C_ccall f_8623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_8623,c,av);}
a=C_alloc(21);
t2=C_a_i_list(&a,4,lf[37],((C_word*)t0)[2],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8641 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_8643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8643,c,av);}
/* chicken-syntax.scm:705: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[155];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_8645(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_8645,c,av);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8647,a[2]=t4,a[3]=t3,a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
t7=t5=t6;
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8735,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:724: quotify-proc */
t9=t5;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cdr(t2);
av2[3]=lf[155];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* quotify-proc2677 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_8647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8647,c,av);}
a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8651,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:711: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=t2;
av2[4]=lf[157];
tp(5,av2);}}

/* k8649 in quotify-proc2677 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8651(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_8651,c,av);}
a=C_alloc(12);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_pairp(t2);
t4=(C_truep(t3)?C_u_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8660,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_u_i_cdr(t2);
t7=C_u_i_cdr(((C_word*)t0)[2]);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_8660(t9,C_a_i_cons(&a,2,lf[36],t8));}
else{
t6=t5;
f_8660(t6,C_i_cadr(((C_word*)t0)[2]));}}

/* k8658 in k8649 in quotify-proc2677 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void f_8660(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_8660,2,t0,t1);}
a=C_alloc(19);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_pairp(t1);
t4=C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8672,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_8672(t6,t4);}
else{
t6=C_i_car(t1);
t7=C_eqp(lf[36],t6);
if(C_truep(C_i_not(t7))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8688,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8692,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:719: r */
t10=((C_word*)t0)[5];{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=lf[69];
((C_proc)C_fast_retrieve_proc(t10))(3,av2);}}
else{
t8=t5;
f_8672(t8,C_SCHEME_FALSE);}}}

/* k8661 in k8658 in k8649 in quotify-proc2677 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8663,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8670 in k8658 in k8649 in quotify-proc2677 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void f_8672(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,5)))){
C_save_and_reclaim_args((void *)trf_8672,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
/* chicken-syntax.scm:720: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[103]);
C_word av2[6];
av2[0]=*((C_word*)lf[103]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[155];
av2[3]=lf[156];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8686 in k8658 in k8649 in quotify-proc2677 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8688,c,av);}
t2=((C_word*)t0)[2];
f_8672(t2,C_i_not(t1));}

/* k8690 in k8658 in k8649 in quotify-proc2677 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8692,c,av);}
/* chicken-syntax.scm:719: c */
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
av2[3]=C_u_i_car(((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k8733 in a8644 in k5816 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_8735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8735,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[158],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8745 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_8747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8747,c,av);}
/* chicken-syntax.scm:694: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[161];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a8748 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_8749(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8749,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8753,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:699: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[161];
av2[3]=t2;
av2[4]=lf[162];
tp(5,av2);}}

/* k8751 in a8748 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_8753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8753,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8756,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:700: r */
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[93];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k8754 in k8751 in a8748 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_8756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_8756,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=C_i_caddr(((C_word*)t2)[2]);
t4=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8775,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:703: r */
t6=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[159];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k8773 in k8754 in k8751 in a8748 in k5813 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,1)))){
C_save_and_reclaim((void *)f_8775,c,av);}
a=C_alloc(27);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,3,t1,((C_word*)t0)[3],t2);
t4=C_a_i_list(&a,3,lf[36],((C_word*)t0)[3],t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[57],((C_word*)t0)[5],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8789 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_8791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8791,c,av);}
/* chicken-syntax.scm:685: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[163];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a8792 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_8793(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8793,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8797,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:690: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[163];
av2[3]=t2;
av2[4]=lf[166];
tp(5,av2);}}

/* k8795 in a8792 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_8797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8797,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8800,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:691: chicken.internal#check-for-multiple-bindings */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[164]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[164]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
av2[3]=((C_word*)t0)[2];
av2[4]=lf[165];
tp(5,av2);}}

/* k8798 in k8795 in a8792 in k5810 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_8800(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8800,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[98],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8811 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_8813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8813,c,av);}
/* chicken-syntax.scm:666: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[167];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_8815(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8815,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8819,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:670: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[167];
av2[3]=t2;
av2[4]=lf[171];
tp(5,av2);}}

/* k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_8819(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8819,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t2,lf[39]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8833,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9035,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li56),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_9035(t14,t10,t2);}

/* k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_8833(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8833,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8839,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9001,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9001(t10,t6,((C_word*)t0)[4]);}

/* k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_8839(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_8839,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[168]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8873,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8977,a[2]=t9,a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8977(t11,t7,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8862 in foldl2601 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8864,c,av);}
/* chicken-syntax.scm:678: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* a8865 in foldl2601 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8866(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8866,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k8871 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_8873(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_8873,c,av);}
a=C_alloc(14);
t2=C_i_check_list_2(t1,lf[39]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8879,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8943,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8943(t7,t3,t1);}

/* k8877 in k8871 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8879(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_8879,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8883,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[169]);
t8=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8893,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8895,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,a[6]=((C_word)li51),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_8895(t13,t9,((C_word*)t0)[5],((C_word*)t0)[3]);}

/* k8881 in k8877 in k8871 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_8883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_8883,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k8891 in k8877 in k8871 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_8893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8893,c,av);}
/* chicken-syntax.scm:675: ##sys#append */
t2=*((C_word*)lf[102]+1);{
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

/* map-loop2625 in k8877 in k8871 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void f_8895(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_8895,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken-syntax.scm:682: g2631 */
t7=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t3,C_fix(0));
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k8922 in map-loop2625 in k8877 in k8871 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_8924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8924,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8895(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop2577 in k8871 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void f_8943(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_8943,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,t3,lf[170]);
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

/* foldl2601 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void f_8977(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,5)))){
C_save_and_reclaim_args((void *)trf_8977,4,t0,t1,t2,t3);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8995,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8864,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8866,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:678: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[42]);
C_word av2[4];
av2[0]=*((C_word*)lf[42]+1);
av2[1]=t7;
av2[2]=t6;
av2[3]=t8;
tp(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8993 in foldl2601 in k8837 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void C_ccall f_8995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8995,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8977(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop2548 in k8831 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void f_9001(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9001,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* map-loop2522 in k8817 in a8814 in k5807 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void f_9035(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9035,3,t0,t1,t2);}
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

/* k9069 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9071,c,av);}
/* chicken-syntax.scm:651: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[172];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9072 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9073(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9073,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9077,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:655: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[172];
av2[3]=t2;
av2[4]=lf[174];
tp(5,av2);}}

/* k9075 in a9072 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9077,c,av);}
a=C_alloc(5);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9085,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:658: r */
t6=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[173];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k9083 in k9075 in a9072 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_9085(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9085,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9090,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_9090(t5,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* fold in k9083 in k9075 in a9072 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void f_9090(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9090,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,lf[35],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9115,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:663: fold */
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}

/* k9113 in fold in k9083 in k9075 in a9072 in k5804 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_9115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9115,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9123 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_9125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9125,c,av);}
/* chicken-syntax.scm:597: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[173];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_9127(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9127,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9131,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:601: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[173];
av2[3]=t2;
av2[4]=lf[175];
tp(5,av2);}}

/* k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9131(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,4)))){
C_save_and_reclaim((void *)f_9131,c,av);}
a=C_alloc(33);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9137,a[2]=t6,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9165,a[2]=t8,a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
t11=C_set_block_item(t6,0,t9);
t12=C_set_block_item(t8,0,t10);
t13=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t14=t13;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=((C_word*)t15)[1];
t17=C_i_check_list_2(t2,lf[39]);
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9213,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t8,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9566,a[2]=t15,a[3]=t20,a[4]=t16,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t22=((C_word*)t20)[1];
f_9566(t22,t18,t2);}

/* append*2328 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9137(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9137,c,av);}
a=C_alloc(4);
t4=C_i_pairp(t2);
if(C_truep(C_i_not(t4))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_cons(&a,2,t2,t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9158,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:608: append* */
t7=((C_word*)((C_word*)t0)[2])[1];{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=C_u_i_cdr(t2);
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k9156 in append*2328 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_9158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9158,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map*2329 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9165(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9165,c,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_pairp(t3);
if(C_truep(C_i_not(t4))){
/* chicken-syntax.scm:611: proc */
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9188,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:612: proc */
t6=t2;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}}}

/* k9186 in map*2329 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_9188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9188,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9192,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:612: map* */
t3=((C_word*)((C_word*)t0)[3])[1];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_u_i_cdr(((C_word*)t0)[5]);
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}

/* k9190 in k9186 in map*2329 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_9192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9192,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_9213,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9216,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9528,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_9528(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_9216(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_9216,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9220,a[2]=((C_word*)t0)[2],a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp);
t7=C_i_check_list_2(t1,lf[39]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9238,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9494,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li69),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_9494(t12,t8,t1);}

/* g2389 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void f_9220(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9220,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9228,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9232,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:623: chicken.base#gensym */
t5=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k9226 in g2389 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_9228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9228,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9230 in g2389 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_9232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9232,c,av);}
/* chicken-syntax.scm:623: r */
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

/* k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_9238(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_9238,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9239,a[2]=t1,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9250,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9450,a[2]=t5,a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_9450(t7,t3,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* lookup in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_9239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9239,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_cdr(C_i_assq(t2,((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_9250(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_9250,c,av);}
a=C_alloc(21);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9416,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_9416(t10,t6,((C_word*)t0)[7]);}

/* k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_9265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_9265,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word)li66),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_9267(t5,((C_word*)t0)[5],((C_word*)t0)[6],t1,((C_word*)t0)[7]);}

/* fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in ... */
static void f_9267(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(22,0,4)))){
C_save_and_reclaim_args((void *)trf_9267,5,t0,t1,t2,t3,t4);}
a=C_alloc(22);
if(C_truep(C_i_nullp(t2))){
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9286,a[2]=((C_word*)t0)[2],a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9300,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9302,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li65),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_9302(t15,t11,((C_word*)t0)[3]);}
else{
t5=C_i_car(t4);
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_i_nullp(C_i_cdar(t4)):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_caar(t4);
t9=C_i_car(t3);
t10=C_a_i_list(&a,2,t8,t9);
t11=C_a_i_list(&a,1,t10);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9351,a[2]=t1,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:643: fold */
t16=t12;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}
else{
t8=C_i_car(t3);
t9=C_a_i_list(&a,3,lf[36],C_SCHEME_END_OF_LIST,t8);
t10=C_u_i_car(t4);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9388,a[2]=t10,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:649: fold */
t16=t11;
t17=C_i_cdr(t2);
t18=C_u_i_cdr(t3);
t19=C_u_i_cdr(t4);
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2440 in fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void f_9286(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_9286,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9294,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:638: lookup */
t4=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
f_9239(3,av2);}}

/* k9292 in g2440 in fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_9294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9294,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9298 in fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_9300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_9300,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,lf[35],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2434 in fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void f_9302(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9302,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:638: g2440 */
t4=((C_word*)t0)[4];
f_9286(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9325 in map-loop2434 in fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in ... */
static void C_ccall f_9327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9327,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9302(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9349 in fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_9351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9351,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[35],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9386 in fold in k9263 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in ... */
static void C_ccall f_9388(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_9388,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,3,lf[36],((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,3,lf[57],((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* map-loop2469 in k9248 in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void f_9416(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9416,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
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

/* loop in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void f_9450(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_9450,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
/* chicken-syntax.scm:627: scheme#reverse */
t4=*((C_word*)lf[38]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_pairp(t4);
if(C_truep(C_i_not(t5))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9481,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:630: lookup */
t7=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
f_9239(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9488,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:631: map* */
t7=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[3];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}}

/* k9479 in loop in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_9481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9481,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:632: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9450(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* k9486 in loop in k9236 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in ... */
static void C_ccall f_9488(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9488,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* chicken-syntax.scm:632: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9450(t3,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[5]),t2);}

/* map-loop2383 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void f_9494(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9494,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:623: g2389 */
t4=((C_word*)t0)[4];
f_9220(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9517 in map-loop2383 in k9214 in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in ... */
static void C_ccall f_9519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9519,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9494(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* loop in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void f_9528(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_9528,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9541,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(t4))){
/* chicken-syntax.scm:619: scheme#append */
t6=*((C_word*)lf[44]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
if(C_truep(C_i_pairp(t4))){
/* chicken-syntax.scm:620: append* */
t6=((C_word*)((C_word*)t0)[3])[1];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}
else{
t6=C_a_i_cons(&a,2,t4,t3);
/* chicken-syntax.scm:622: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* k9539 in loop in k9211 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_9541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9541,c,av);}
/* chicken-syntax.scm:622: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9528(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),t1);}

/* map-loop2345 in k9129 in a9126 in k5801 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void f_9566(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9566,3,t0,t1,t2);}
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

/* k9600 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_9602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9602,c,av);}
/* chicken-syntax.scm:580: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[176];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_9604(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9604,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9608,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:584: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[176];
av2[3]=t2;
av2[4]=lf[181];
tp(5,av2);}}

/* k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_9608(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_9608,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9619,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9641,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:586: ##sys#decompose-lambda-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[42]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[42]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=t5;
tp(4,av2);}}

/* k9613 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9615,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9617 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_9619,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9627,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:595: ##sys#expand-multiple-values-assignment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[169]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[169]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
tp(4,av2);}}

/* k9625 in k9617 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9627,c,av);}
a=C_alloc(3);
t2=C_a_i_list(&a,1,t1);
/* chicken-syntax.scm:585: ##sys#append */
t3=*((C_word*)lf[102]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* a9640 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9641(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_9641,c,av);}
a=C_alloc(10);
t5=C_i_check_list_2(t2,lf[113]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9660,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9707,a[2]=t8,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_9707(t10,t6,t2);}

/* k9645 in for-each-loop2274 in a9640 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_9647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9647,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9654,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:591: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2=av;
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t3;
tp(2,av2);}}

/* k9652 in k9645 in for-each-loop2274 in a9640 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in ... */
static void C_ccall f_9654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9654,c,av);}
t2=((C_word*)t0)[2];
/* chicken-syntax.scm:591: ##sys#register-export */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[178]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[178]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=t1;
tp(4,av2);}}

/* k9658 in a9640 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9660(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_9660,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9673,a[2]=t4,a[3]=t7,a[4]=t5,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_9673(t9,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* map-loop2284 in k9658 in a9640 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void f_9673(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_9673,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[177],t3);
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

/* for-each-loop2274 in a9640 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void f_9707(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_9707,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9717,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9647,a[2]=t3,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:590: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[179]);
C_word av2[5];
av2[0]=*((C_word*)lf[179]+1);
av2[1]=t5;
av2[2]=t4;
av2[3]=lf[180];
av2[4]=t4;
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9715 in for-each-loop2274 in a9640 in k9606 in a9603 in k5797 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in ... */
static void C_ccall f_9717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9717,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9707(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k9730 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_9732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9732,c,av);}
/* chicken-syntax.scm:572: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[182];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9733 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_9734(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9734,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9738,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:576: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[182];
av2[3]=t2;
av2[4]=lf[183];
tp(5,av2);}}

/* k9736 in a9733 in k5794 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_9738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9738,c,av);}
/* chicken-syntax.scm:577: ##sys#expand-multiple-values-assignment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[169]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[169]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_cadr(((C_word*)t0)[3]);
av2[3]=C_i_caddr(((C_word*)t0)[3]);
tp(4,av2);}}

/* k9751 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_9753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9753,c,av);}
/* chicken-syntax.scm:563: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[184];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9754 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_9755(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9755,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9759,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:567: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[184];
av2[3]=t2;
av2[4]=lf[186];
tp(5,av2);}}

/* k9757 in a9754 in k5791 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_9759(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_9759,c,av);}
a=C_alloc(18);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list(&a,1,lf[185]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=C_a_i_cons(&a,2,lf[58],t5);
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,4,lf[37],t2,t3,t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* k9779 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_9781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9781,c,av);}
/* chicken-syntax.scm:555: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[187];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9782 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_9783(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9783,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9787,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-syntax.scm:559: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[187];
av2[3]=t2;
av2[4]=lf[188];
tp(5,av2);}}

/* k9785 in a9782 in k5788 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_9787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,1)))){
C_save_and_reclaim((void *)f_9787,c,av);}
a=C_alloc(12);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=C_a_i_cons(&a,2,lf[58],t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[37],t2,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k9803 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_9805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9805,c,av);}
/* chicken-syntax.scm:542: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[189];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9806 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_9807(C_word c,C_word *av){
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
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_9807,c,av);}
a=C_alloc(22);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9816,a[2]=t3,a[3]=t4,a[4]=((C_word)li82),tmp=(C_word)a,a+=5,tmp);
t10=C_i_cdr(t2);
t11=C_i_check_list_2(t10,lf[39]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9847,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9849,a[2]=t7,a[3]=t14,a[4]=t9,a[5]=t8,a[6]=((C_word)li83),tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_9849(t16,t12,t10);}

/* g2199 in a9806 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void f_9816(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,8)))){
C_save_and_reclaim_args((void *)trf_9816,3,t0,t1,t2);}
a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9822,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li80),tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9828,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:549: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a9821 in g2199 in a9806 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_9822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9822,c,av);}
/* chicken-syntax.scm:549: ##sys#decompose-import */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[190]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[190]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=lf[96];
tp(6,av2);}}

/* a9827 in g2199 in a9806 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_9828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8;
C_word t9;
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_9828,c,av);}
a=C_alloc(9);
t8=C_i_not(t3);
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=(C_truep(t8)?lf[191]:C_a_i_list(&a,3,lf[192],t3,t2));
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k9845 in a9806 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_9847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9847,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,lf[58],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* map-loop2193 in a9806 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void f_9849(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9849,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:548: g2199 */
t4=((C_word*)t0)[4];
f_9816(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9872 in map-loop2193 in a9806 in k5785 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_9874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9874,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9849(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k9883 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_9885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9885,c,av);}
/* chicken-syntax.scm:488: ##sys#extend-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[31]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[31]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[193];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in k5720 in ... */
static void C_ccall f_9887(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9887,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9906,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken-syntax.scm:496: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2=av;
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t5;
av2[2]=lf[193];
av2[3]=t2;
av2[4]=lf[201];
tp(5,av2);}}

/* k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in k5723 in ... */
static void C_ccall f_9906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_9906,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_u_i_cdr(((C_word*)t0)[2]);
t4=C_u_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9914,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-syntax.scm:499: r */
t6=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[200];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in k5726 in ... */
static void C_ccall f_9914(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9914,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9923,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10779,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li102),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10779(t11,t7,((C_word*)t0)[2]);}

/* k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in k5729 in ... */
static void C_ccall f_9923(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_9923,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9929,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10745,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10745(t10,t6,((C_word*)t0)[6]);}

/* k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in k5733 in ... */
static void C_ccall f_9929(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_9929,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9933,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9947,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10711,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_10711(t12,t8,((C_word*)t0)[3]);}

/* g1784 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void f_9933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9933,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9941,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_symbolp(t2))){
/* chicken-syntax.scm:494: chicken.base#gensym */
t5=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
/* chicken-syntax.scm:495: chicken.base#gensym */
t5=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[194];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k9939 in g1784 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_9941(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9941,c,av);}
t2=((C_word*)t0)[2];
/* chicken-syntax.scm:502: r */
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in k5736 in ... */
static void C_ccall f_9947(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_9947,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9951,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9962,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10677,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10677(t11,t7,((C_word*)t0)[7]);}

/* g1812 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void f_9951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9951,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9959,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:503: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[195];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k9957 in g1812 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9959(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9959,c,av);}
t2=((C_word*)t0)[2];
/* chicken-syntax.scm:503: r */
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in k5739 in ... */
static void C_ccall f_9962(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_9962,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9966,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word)li87),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9977,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10643,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t5,a[6]=((C_word)li98),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10643(t11,t7,((C_word*)t0)[8]);}

/* g1840 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void f_9966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9966,2,t0,t1);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9974,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* chicken-syntax.scm:504: chicken.base#gensym */
t4=*((C_word*)lf[33]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[93];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k9972 in g1840 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9974,c,av);}
t2=((C_word*)t0)[2];
/* chicken-syntax.scm:504: r */
t3=((C_word*)t2)[2];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[3];
av2[2]=t1;
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in k5742 in ... */
static void C_ccall f_9977(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9977,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10595,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_10595(t11,t7,((C_word*)t0)[2],((C_word*)t0)[8]);}

/* k9988 in k9975 in k9960 in k9945 in k9927 in k9921 in k9912 in k9904 in a9886 in k5782 in k5779 in k5776 in k5773 in k5770 in k5767 in k5764 in k5761 in k5758 in k5755 in k5751 in k5748 in k5745 in ... */
static void C_ccall f_9990(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9990,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[39]);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[39]);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10007,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10547,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li96),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10547(t12,t8,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("chicken-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_chicken_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(2892))){
C_save(t1);
C_rereclaim2(2892*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,301);
lf[0]=C_h_intern(&lf[0],14, C_text("chicken-syntax"));
lf[2]=C_h_intern(&lf[2],41, C_text("##sys#chicken.condition-macro-environment"));
lf[3]=C_h_intern(&lf[3],36, C_text("##sys#chicken.type-macro-environment"));
lf[4]=C_h_intern(&lf[4],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[5]=C_h_intern(&lf[5],39, C_text("chicken.syntax#define-values-definition"));
lf[6]=C_h_intern(&lf[6],36, C_text("##sys#chicken.base-macro-environment"));
lf[7]=C_h_intern(&lf[7],36, C_text("##sys#chicken.time-macro-environment"));
lf[8]=C_h_intern(&lf[8],42, C_text("##sys#scheme.case-lambda-macro-environment"));
lf[9]=C_h_intern(&lf[9],34, C_text("chicken.platform#register-feature!"));
lf[10]=C_h_intern(&lf[10],6, C_text("srfi-2"));
lf[11]=C_h_intern(&lf[11],6, C_text("srfi-8"));
lf[12]=C_h_intern(&lf[12],6, C_text("srfi-9"));
lf[13]=C_h_intern(&lf[13],7, C_text("srfi-11"));
lf[14]=C_h_intern(&lf[14],7, C_text("srfi-15"));
lf[15]=C_h_intern(&lf[15],7, C_text("srfi-16"));
lf[16]=C_h_intern(&lf[16],7, C_text("srfi-26"));
lf[17]=C_h_intern(&lf[17],7, C_text("srfi-31"));
lf[18]=C_h_intern(&lf[18],7, C_text("srfi-55"));
lf[19]=C_h_intern(&lf[19],29, C_text("chicken.internal#macro-subset"));
lf[20]=C_h_intern(&lf[20],31, C_text("##sys#default-macro-environment"));
lf[21]=C_h_intern(&lf[21],2, C_text(">="));
lf[22]=C_h_intern(&lf[22],9, C_text("scheme#>="));
lf[23]=C_h_intern(&lf[23],3, C_text("car"));
lf[24]=C_h_intern(&lf[24],10, C_text("scheme#car"));
lf[25]=C_h_intern(&lf[25],3, C_text("cdr"));
lf[26]=C_h_intern(&lf[26],10, C_text("scheme#cdr"));
lf[27]=C_h_intern(&lf[27],3, C_text("eq?"));
lf[28]=C_h_intern(&lf[28],10, C_text("scheme#eq?"));
lf[29]=C_h_intern(&lf[29],6, C_text("length"));
lf[30]=C_h_intern(&lf[30],13, C_text("scheme#length"));
lf[31]=C_h_intern(&lf[31],30, C_text("##sys#extend-macro-environment"));
lf[32]=C_h_intern(&lf[32],11, C_text("case-lambda"));
lf[33]=C_h_intern(&lf[33],19, C_text("chicken.base#gensym"));
lf[34]=C_h_intern(&lf[34],5, C_text("foldr"));
lf[35]=C_h_intern(&lf[35],10, C_text("##core#let"));
lf[36]=C_h_intern(&lf[36],13, C_text("##core#lambda"));
lf[37]=C_h_intern(&lf[37],9, C_text("##core#if"));
lf[38]=C_h_intern(&lf[38],14, C_text("scheme#reverse"));
lf[39]=C_h_intern(&lf[39],3, C_text("map"));
lf[40]=C_h_intern(&lf[40],18, C_text("##sys#check-syntax"));
lf[41]=C_h_intern(&lf[41],11, C_text("lambda-list"));
lf[42]=C_h_intern(&lf[42],27, C_text("##sys#decompose-lambda-list"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\014\001\043\043\143\157\162\145\043\143\150\145\143\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\145\162\162\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\151\155\155\165\164\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\043\043\143\157\162\145\043\161\165\157\164\145\376\003\000\000\002\376\002\000\000\061\156\157\040\155\141\164\143\150\151\156\147\040\143\154\141\165\163\145\040\151\156\040\143\141\154\154\040\164\157\040\047\143\141\163\145\055\154\141\155\142\144\141\047\040\146\157\162\155\000\376\377\016\376\377\016\376\377\016\376\377\016"));
lf[44]=C_h_intern(&lf[44],13, C_text("scheme#append"));
lf[45]=C_h_intern(&lf[45],4, C_text("lvar"));
lf[46]=C_h_intern(&lf[46],4, C_text("rvar"));
lf[47]=C_h_intern(&lf[47],10, C_text("scheme#min"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[49]=C_h_intern(&lf[49],20, C_text("##sys#er-transformer"));
lf[50]=C_h_intern(&lf[50],23, C_text("##sys#macro-environment"));
lf[51]=C_h_intern(&lf[51],4, C_text("time"));
lf[52]=C_h_intern(&lf[52],17, C_text("##sys#start-timer"));
lf[53]=C_h_intern(&lf[53],16, C_text("##sys#stop-timer"));
lf[54]=C_h_intern(&lf[54],19, C_text("##sys#display-times"));
lf[55]=C_h_intern(&lf[55],11, C_text("##sys#apply"));
lf[56]=C_h_intern(&lf[56],12, C_text("##sys#values"));
lf[57]=C_h_intern(&lf[57],22, C_text("##sys#call-with-values"));
lf[58]=C_h_intern(&lf[58],12, C_text("##core#begin"));
lf[59]=C_h_intern(&lf[59],1, C_text("t"));
lf[60]=C_h_intern(&lf[60],5, C_text("guard"));
lf[61]=C_h_intern(&lf[61],4, C_text("temp"));
lf[62]=C_h_intern(&lf[62],37, C_text("scheme#call-with-current-continuation"));
lf[63]=C_h_intern(&lf[63],4, C_text("args"));
lf[64]=C_h_intern(&lf[64],23, C_text("scheme#call-with-values"));
lf[65]=C_h_intern(&lf[65],29, C_text("scheme#with-exception-handler"));
lf[66]=C_h_intern(&lf[66],24, C_text("scheme#raise-continuable"));
lf[67]=C_h_intern(&lf[67],12, C_text("scheme#caadr"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[69]=C_h_intern(&lf[69],6, C_text("lambda"));
lf[70]=C_h_intern(&lf[70],9, C_text("handler-k"));
lf[71]=C_h_intern(&lf[71],7, C_text("guard-k"));
lf[72]=C_h_intern(&lf[72],16, C_text("call-with-values"));
lf[73]=C_h_intern(&lf[73],9, C_text("condition"));
lf[74]=C_h_intern(&lf[74],6, C_text("values"));
lf[75]=C_h_intern(&lf[75],5, C_text("apply"));
lf[76]=C_h_intern(&lf[76],3, C_text("var"));
lf[77]=C_h_intern(&lf[77],2, C_text("or"));
lf[78]=C_h_intern(&lf[78],2, C_text("if"));
lf[79]=C_h_intern(&lf[79],3, C_text("let"));
lf[80]=C_h_intern(&lf[80],5, C_text("begin"));
lf[81]=C_h_intern(&lf[81],4, C_text("else"));
lf[82]=C_h_intern(&lf[82],2, C_text("=>"));
lf[83]=C_h_intern(&lf[83],6, C_text("assert"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\141\163\163\145\162\164\151\157\156\040\146\141\151\154\145\144\000"));
lf[85]=C_h_intern(&lf[85],12, C_text("##core#check"));
lf[86]=C_h_intern(&lf[86],11, C_text("##sys#error"));
lf[87]=C_h_intern(&lf[87],12, C_text("##core#quote"));
lf[88]=C_h_intern(&lf[88],27, C_text("chicken.syntax#strip-syntax"));
lf[89]=C_h_intern(&lf[89],20, C_text("scheme#string-append"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\051\040\000"));
lf[92]=C_h_intern(&lf[92],30, C_text("chicken.syntax#get-line-number"));
lf[93]=C_h_intern(&lf[93],3, C_text("tmp"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[95]=C_h_intern(&lf[95],17, C_text("require-extension"));
lf[96]=C_h_intern(&lf[96],6, C_text("import"));
lf[97]=C_h_intern(&lf[97],3, C_text("rec"));
lf[98]=C_h_intern(&lf[98],14, C_text("##core#letrec*"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[100]=C_h_intern(&lf[100],12, C_text("scheme#apply"));
lf[101]=C_h_intern(&lf[101],4, C_text("cute"));
lf[102]=C_h_intern(&lf[102],12, C_text("##sys#append"));
lf[103]=C_h_intern(&lf[103],18, C_text("##sys#syntax-error"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\164\141\151\154\040\160\141\164\164\145\162\156\163\040\141\146\164\145\162\040\074\056\056\056\076\040\141\162\145\040\156\157\164\040\163\165\160\160\157\162\164\145\144\000"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\171\157\165\040\156\145\145\144\040\164\157\040\163\165\160\160\154\171\040\141\164\040\154\145\141\163\164\040\141\040\160\162\157\143\145\144\165\162\145\000"));
lf[106]=C_h_intern(&lf[106],5, C_text("<...>"));
lf[107]=C_h_intern(&lf[107],2, C_text("<>"));
lf[108]=C_h_intern(&lf[108],3, C_text("cut"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\164\141\151\154\040\160\141\164\164\145\162\156\163\040\141\146\164\145\162\040\074\056\056\056\076\040\141\162\145\040\156\157\164\040\163\165\160\160\157\162\164\145\144\000"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\171\157\165\040\156\145\145\144\040\164\157\040\163\165\160\160\154\171\040\141\164\040\154\145\141\163\164\040\141\040\160\162\157\143\145\144\165\162\145\000"));
lf[111]=C_h_intern(&lf[111],18, C_text("define-record-type"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\165\156\153\156\157\167\156\040\163\154\157\164\040\156\141\155\145\040\151\156\040\143\157\156\163\164\162\165\143\164\157\162\040\144\145\146\151\156\151\164\151\157\156\000"));
lf[113]=C_h_intern(&lf[113],8, C_text("for-each"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[115]=C_h_intern(&lf[115],20, C_text("##sys#make-structure"));
lf[116]=C_h_intern(&lf[116],16, C_text("##sys#structure?"));
lf[117]=C_h_intern(&lf[117],21, C_text("##sys#check-structure"));
lf[118]=C_h_intern(&lf[118],15, C_text("##sys#block-ref"));
lf[119]=C_h_intern(&lf[119],12, C_text("##sys#setter"));
lf[120]=C_h_intern(&lf[120],16, C_text("##sys#block-set!"));
lf[121]=C_h_intern(&lf[121],6, C_text("setter"));
lf[122]=C_h_intern(&lf[122],1, C_text("y"));
lf[123]=C_h_intern(&lf[123],1, C_text("x"));
lf[124]=C_h_intern(&lf[124],31, C_text("chicken.base#getter-with-setter"));
lf[125]=C_h_intern(&lf[125],3, C_text("tag"));
lf[126]=C_h_intern(&lf[126],6, C_text("vector"));
lf[127]=C_h_intern(&lf[127],6, C_text("define"));
lf[128]=C_h_intern(&lf[128],26, C_text("chicken.base#symbol-append"));
lf[129]=C_h_intern(&lf[129],1, C_text("#"));
lf[130]=C_h_intern(&lf[130],17, C_text("##sys#module-name"));
lf[131]=C_h_intern(&lf[131],20, C_text("##sys#current-module"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\000\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\377\001\000\000\000\001\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\001\000\000\001\001\137"));
lf[133]=C_h_intern(&lf[133],5, C_text("null?"));
lf[134]=C_h_intern(&lf[134],12, C_text("scheme#null?"));
lf[135]=C_h_intern(&lf[135],14, C_text("let-optionals*"));
lf[136]=C_h_intern(&lf[136],4, C_text("tmp2"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\001\001\137"));
lf[138]=C_h_intern(&lf[138],8, C_text("optional"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[140]=C_h_intern(&lf[140],13, C_text("let-optionals"));
lf[141]=C_h_intern(&lf[141],21, C_text("scheme#string->symbol"));
lf[142]=C_h_intern(&lf[142],21, C_text("scheme#symbol->string"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\045\000"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\144\145\146\055\000"));
lf[145]=C_h_intern(&lf[145],4, C_text("let*"));
lf[146]=C_h_intern(&lf[146],6, C_text("_%rest"));
lf[147]=C_h_intern(&lf[147],4, C_text("body"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016\376\377\001\000\000\000\000"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[151]=C_h_intern(&lf[151],8, C_text("and-let*"));
lf[152]=C_h_intern(&lf[152],8, C_text("variable"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\001\000\000\001\001\137"));
lf[155]=C_h_intern(&lf[155],13, C_text("define-inline"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\053\151\156\166\141\154\151\144\040\163\165\142\163\164\151\164\165\164\151\157\156\040\146\157\162\155\040\055\040\155\165\163\164\040\142\145\040\154\141\155\142\144\141\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[158]=C_h_intern(&lf[158],20, C_text("##core#define-inline"));
lf[159]=C_h_intern(&lf[159],8, C_text("list-ref"));
lf[160]=C_h_intern(&lf[160],15, C_text("scheme#list-ref"));
lf[161]=C_h_intern(&lf[161],9, C_text("nth-value"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[163]=C_h_intern(&lf[163],7, C_text("letrec*"));
lf[164]=C_h_intern(&lf[164],44, C_text("chicken.internal#check-for-multiple-bindings"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\154\145\164\162\145\143\052\000"));
lf[166]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016\376\377\001\000\000\000\000\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[167]=C_h_intern(&lf[167],13, C_text("letrec-values"));
lf[168]=C_h_intern(&lf[168],5, C_text("foldl"));
lf[169]=C_h_intern(&lf[169],39, C_text("##sys#expand-multiple-values-assignment"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\001\000\000\001\001\137"));
lf[172]=C_h_intern(&lf[172],11, C_text("let*-values"));
lf[173]=C_h_intern(&lf[173],10, C_text("let-values"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\001\001\137"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\001\001\137"));
lf[176]=C_h_intern(&lf[176],13, C_text("define-values"));
lf[177]=C_h_intern(&lf[177],33, C_text("##core#ensure-toplevel-definition"));
lf[178]=C_h_intern(&lf[178],21, C_text("##sys#register-export"));
lf[179]=C_h_intern(&lf[179],9, C_text("##sys#get"));
lf[180]=C_h_intern(&lf[180],18, C_text("##core#macro-alias"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[182]=C_h_intern(&lf[182],11, C_text("set!-values"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[184]=C_h_intern(&lf[184],6, C_text("unless"));
lf[185]=C_h_intern(&lf[185],16, C_text("##core#undefined"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\002"));
lf[187]=C_h_intern(&lf[187],4, C_text("when"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\002"));
lf[189]=C_h_intern(&lf[189],15, C_text("require-library"));
lf[190]=C_h_intern(&lf[190],22, C_text("##sys#decompose-import"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[192]=C_h_intern(&lf[192],14, C_text("##core#require"));
lf[193]=C_h_intern(&lf[193],12, C_text("parameterize"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\160\141\162\141\155\145\164\145\162\000"));
lf[195]=C_h_intern(&lf[195],5, C_text("saved"));
lf[196]=C_h_intern(&lf[196],10, C_text("##core#the"));
lf[197]=C_h_intern(&lf[197],7, C_text("boolean"));
lf[198]=C_h_intern(&lf[198],18, C_text("##sys#dynamic-wind"));
lf[199]=C_h_intern(&lf[199],11, C_text("##core#set!"));
lf[200]=C_h_intern(&lf[200],8, C_text("convert?"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\002"));
lf[202]=C_h_intern(&lf[202],9, C_text("fluid-let"));
lf[203]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\000\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016\376\377\001\000\000\000\000\376\001\000\000\001\001\137"));
lf[204]=C_h_intern(&lf[204],16, C_text("include-relative"));
lf[205]=C_h_intern(&lf[205],14, C_text("##core#include"));
lf[206]=C_h_intern(&lf[206],29, C_text("##sys#current-source-filename"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\001"));
lf[208]=C_h_intern(&lf[208],10, C_text("include-ci"));
lf[209]=C_h_intern(&lf[209],17, C_text("##core#include-ci"));
lf[210]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\001"));
lf[211]=C_h_intern(&lf[211],7, C_text("include"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\001\000\000\000\001"));
lf[213]=C_h_intern(&lf[213],11, C_text("delay-force"));
lf[214]=C_h_intern(&lf[214],18, C_text("##sys#make-promise"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[216]=C_h_intern(&lf[216],7, C_text("declare"));
lf[217]=C_h_intern(&lf[217],14, C_text("##core#declare"));
lf[218]=C_h_intern(&lf[218],7, C_text("receive"));
lf[219]=C_h_intern(&lf[219],10, C_text("##sys#list"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\013\001\154\141\155\142\144\141\055\154\151\163\164\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000"));
lf[222]=C_h_intern(&lf[222],13, C_text("define-record"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\151\156\166\141\154\151\144\040\163\154\157\164\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[224]=C_h_intern(&lf[224],3, C_text("val"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\055\000"));
lf[226]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\055\000"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\163\145\164\041\000"));
lf[228]=C_h_intern(&lf[228],19, C_text("##sys#string-append"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\077\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\155\141\153\145\055\000"));
lf[231]=C_h_intern(&lf[231],19, C_text("chicken.base#setter"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\001\000\000\001\001\137"));
lf[233]=C_h_intern(&lf[233],15, C_text("define-constant"));
lf[234]=C_h_intern(&lf[234],22, C_text("##core#define-constant"));
lf[235]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[236]=C_h_intern(&lf[236],19, C_text("let-compiler-syntax"));
lf[237]=C_h_intern(&lf[237],26, C_text("##core#let-compiler-syntax"));
lf[238]=C_h_intern(&lf[238],51, C_text("chicken.internal.syntax-rules#syntax-rules-mismatch"));
lf[239]=C_h_intern(&lf[239],7, C_text("##sys#+"));
lf[240]=C_h_intern(&lf[240],7, C_text("##sys#="));
lf[241]=C_h_intern(&lf[241],8, C_text("##sys#>="));
lf[242]=C_h_intern(&lf[242],41, C_text("chicken.internal.syntax-rules#safe-length"));
lf[243]=C_h_intern(&lf[243],22, C_text("define-compiler-syntax"));
lf[244]=C_h_intern(&lf[244],29, C_text("##core#define-compiler-syntax"));
lf[245]=C_h_intern(&lf[245],17, C_text("define-for-syntax"));
lf[246]=C_h_intern(&lf[246],16, C_text("begin-for-syntax"));
lf[247]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[248]=C_h_intern(&lf[248],26, C_text("##core#elaborationtimeonly"));
lf[249]=C_h_intern(&lf[249],30, C_text("##sys#register-meta-expression"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000"));
lf[251]=C_h_intern(&lf[251],6, C_text("syntax"));
lf[252]=C_h_intern(&lf[252],13, C_text("##core#syntax"));
lf[253]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[254]=C_h_intern(&lf[254],11, C_text("define-type"));
lf[255]=C_h_intern_kw(&lf[255],9, C_text("compiling"));
lf[256]=C_h_intern(&lf[256],14, C_text("##sys#features"));
lf[257]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[258]=C_h_intern(&lf[258],28, C_text("##compiler#type-abbreviation"));
lf[259]=C_h_intern(&lf[259],18, C_text("##sys#put/restore!"));
lf[260]=C_h_intern(&lf[260],52, C_text("chicken.compiler.scrutinizer#check-and-validate-type"));
lf[261]=C_h_intern(&lf[261],5, C_text("quote"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[263]=C_h_intern(&lf[263],17, C_text("compiler-typecase"));
lf[264]=C_h_intern(&lf[264],15, C_text("##core#typecase"));
lf[265]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001\376\377\001\000\000\000\001"));
lf[266]=C_h_intern(&lf[266],21, C_text("define-specialization"));
lf[267]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[268]=C_h_intern(&lf[268],27, C_text("##core#local-specialization"));
lf[269]=C_h_intern(&lf[269],6, C_text("inline"));
lf[270]=C_h_intern(&lf[270],4, C_text("hide"));
lf[271]=C_h_intern(&lf[271],1, C_text("*"));
lf[272]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\163\171\156\164\141\170\000"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\003\376\001\000\000\001\001\137\376\377\001\000\000\000\000\376\377\001\000\000\000\001"));
lf[274]=C_h_intern(&lf[274],6, C_text("assume"));
lf[275]=C_h_intern(&lf[275],3, C_text("the"));
lf[276]=C_h_intern(&lf[276],11, C_text("##sys#map-n"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[278]=C_h_intern(&lf[278],1, C_text(":"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[280]=C_h_intern(&lf[280],42, C_text("chicken.compiler.scrutinizer#validate-type"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\156\166\141\154\151\144\040\164\171\160\145\040\163\171\156\164\141\170\000"));
lf[282]=C_h_intern(&lf[282],4, C_text("type"));
lf[283]=C_h_intern(&lf[283],9, C_text("predicate"));
lf[284]=C_h_intern(&lf[284],4, C_text("pure"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[286]=C_h_intern(&lf[286],4, C_text("memv"));
lf[287]=C_h_intern(&lf[287],11, C_text("scheme#memv"));
lf[288]=C_h_intern(&lf[288],14, C_text("condition-case"));
lf[289]=C_h_intern(&lf[289],10, C_text("##sys#slot"));
lf[290]=C_h_intern(&lf[290],24, C_text("chicken.condition#signal"));
lf[291]=C_h_intern(&lf[291],4, C_text("cond"));
lf[292]=C_h_intern(&lf[292],17, C_text("handle-exceptions"));
lf[293]=C_h_intern(&lf[293],3, C_text("and"));
lf[294]=C_h_intern(&lf[294],4, C_text("kvar"));
lf[295]=C_h_intern(&lf[295],5, C_text("exvar"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
lf[297]=C_h_intern(&lf[297],30, C_text("call-with-current-continuation"));
lf[298]=C_h_intern(&lf[298],40, C_text("chicken.condition#with-exception-handler"));
lf[299]=C_h_intern(&lf[299],1, C_text("k"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\010\001\166\141\162\151\141\142\154\145\376\003\000\000\002\376\001\000\000\001\001\137\376\001\000\000\001\001\137"));
C_register_lf2(lf,301,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4409,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[680] = {
{C_text("f_10007:chicken_2dsyntax_2escm"),(void*)f_10007},
{C_text("f_10018:chicken_2dsyntax_2escm"),(void*)f_10018},
{C_text("f_10066:chicken_2dsyntax_2escm"),(void*)f_10066},
{C_text("f_10070:chicken_2dsyntax_2escm"),(void*)f_10070},
{C_text("f_10082:chicken_2dsyntax_2escm"),(void*)f_10082},
{C_text("f_10094:chicken_2dsyntax_2escm"),(void*)f_10094},
{C_text("f_10096:chicken_2dsyntax_2escm"),(void*)f_10096},
{C_text("f_10144:chicken_2dsyntax_2escm"),(void*)f_10144},
{C_text("f_10192:chicken_2dsyntax_2escm"),(void*)f_10192},
{C_text("f_10199:chicken_2dsyntax_2escm"),(void*)f_10199},
{C_text("f_10269:chicken_2dsyntax_2escm"),(void*)f_10269},
{C_text("f_10287:chicken_2dsyntax_2escm"),(void*)f_10287},
{C_text("f_10291:chicken_2dsyntax_2escm"),(void*)f_10291},
{C_text("f_10307:chicken_2dsyntax_2escm"),(void*)f_10307},
{C_text("f_10311:chicken_2dsyntax_2escm"),(void*)f_10311},
{C_text("f_10323:chicken_2dsyntax_2escm"),(void*)f_10323},
{C_text("f_10333:chicken_2dsyntax_2escm"),(void*)f_10333},
{C_text("f_10381:chicken_2dsyntax_2escm"),(void*)f_10381},
{C_text("f_10429:chicken_2dsyntax_2escm"),(void*)f_10429},
{C_text("f_10436:chicken_2dsyntax_2escm"),(void*)f_10436},
{C_text("f_10499:chicken_2dsyntax_2escm"),(void*)f_10499},
{C_text("f_10547:chicken_2dsyntax_2escm"),(void*)f_10547},
{C_text("f_10595:chicken_2dsyntax_2escm"),(void*)f_10595},
{C_text("f_10643:chicken_2dsyntax_2escm"),(void*)f_10643},
{C_text("f_10668:chicken_2dsyntax_2escm"),(void*)f_10668},
{C_text("f_10677:chicken_2dsyntax_2escm"),(void*)f_10677},
{C_text("f_10702:chicken_2dsyntax_2escm"),(void*)f_10702},
{C_text("f_10711:chicken_2dsyntax_2escm"),(void*)f_10711},
{C_text("f_10736:chicken_2dsyntax_2escm"),(void*)f_10736},
{C_text("f_10745:chicken_2dsyntax_2escm"),(void*)f_10745},
{C_text("f_10779:chicken_2dsyntax_2escm"),(void*)f_10779},
{C_text("f_10815:chicken_2dsyntax_2escm"),(void*)f_10815},
{C_text("f_10817:chicken_2dsyntax_2escm"),(void*)f_10817},
{C_text("f_10821:chicken_2dsyntax_2escm"),(void*)f_10821},
{C_text("f_10835:chicken_2dsyntax_2escm"),(void*)f_10835},
{C_text("f_10839:chicken_2dsyntax_2escm"),(void*)f_10839},
{C_text("f_10847:chicken_2dsyntax_2escm"),(void*)f_10847},
{C_text("f_10850:chicken_2dsyntax_2escm"),(void*)f_10850},
{C_text("f_10854:chicken_2dsyntax_2escm"),(void*)f_10854},
{C_text("f_10862:chicken_2dsyntax_2escm"),(void*)f_10862},
{C_text("f_10865:chicken_2dsyntax_2escm"),(void*)f_10865},
{C_text("f_10872:chicken_2dsyntax_2escm"),(void*)f_10872},
{C_text("f_10896:chicken_2dsyntax_2escm"),(void*)f_10896},
{C_text("f_10908:chicken_2dsyntax_2escm"),(void*)f_10908},
{C_text("f_10912:chicken_2dsyntax_2escm"),(void*)f_10912},
{C_text("f_10924:chicken_2dsyntax_2escm"),(void*)f_10924},
{C_text("f_10934:chicken_2dsyntax_2escm"),(void*)f_10934},
{C_text("f_10982:chicken_2dsyntax_2escm"),(void*)f_10982},
{C_text("f_11040:chicken_2dsyntax_2escm"),(void*)f_11040},
{C_text("f_11055:chicken_2dsyntax_2escm"),(void*)f_11055},
{C_text("f_11059:chicken_2dsyntax_2escm"),(void*)f_11059},
{C_text("f_11071:chicken_2dsyntax_2escm"),(void*)f_11071},
{C_text("f_11081:chicken_2dsyntax_2escm"),(void*)f_11081},
{C_text("f_11129:chicken_2dsyntax_2escm"),(void*)f_11129},
{C_text("f_11185:chicken_2dsyntax_2escm"),(void*)f_11185},
{C_text("f_11194:chicken_2dsyntax_2escm"),(void*)f_11194},
{C_text("f_11201:chicken_2dsyntax_2escm"),(void*)f_11201},
{C_text("f_11210:chicken_2dsyntax_2escm"),(void*)f_11210},
{C_text("f_11212:chicken_2dsyntax_2escm"),(void*)f_11212},
{C_text("f_11262:chicken_2dsyntax_2escm"),(void*)f_11262},
{C_text("f_11276:chicken_2dsyntax_2escm"),(void*)f_11276},
{C_text("f_11282:chicken_2dsyntax_2escm"),(void*)f_11282},
{C_text("f_11330:chicken_2dsyntax_2escm"),(void*)f_11330},
{C_text("f_11364:chicken_2dsyntax_2escm"),(void*)f_11364},
{C_text("f_11389:chicken_2dsyntax_2escm"),(void*)f_11389},
{C_text("f_11398:chicken_2dsyntax_2escm"),(void*)f_11398},
{C_text("f_11423:chicken_2dsyntax_2escm"),(void*)f_11423},
{C_text("f_11432:chicken_2dsyntax_2escm"),(void*)f_11432},
{C_text("f_11468:chicken_2dsyntax_2escm"),(void*)f_11468},
{C_text("f_11470:chicken_2dsyntax_2escm"),(void*)f_11470},
{C_text("f_11474:chicken_2dsyntax_2escm"),(void*)f_11474},
{C_text("f_11495:chicken_2dsyntax_2escm"),(void*)f_11495},
{C_text("f_11497:chicken_2dsyntax_2escm"),(void*)f_11497},
{C_text("f_11533:chicken_2dsyntax_2escm"),(void*)f_11533},
{C_text("f_11535:chicken_2dsyntax_2escm"),(void*)f_11535},
{C_text("f_11539:chicken_2dsyntax_2escm"),(void*)f_11539},
{C_text("f_11560:chicken_2dsyntax_2escm"),(void*)f_11560},
{C_text("f_11562:chicken_2dsyntax_2escm"),(void*)f_11562},
{C_text("f_11598:chicken_2dsyntax_2escm"),(void*)f_11598},
{C_text("f_11600:chicken_2dsyntax_2escm"),(void*)f_11600},
{C_text("f_11604:chicken_2dsyntax_2escm"),(void*)f_11604},
{C_text("f_11625:chicken_2dsyntax_2escm"),(void*)f_11625},
{C_text("f_11627:chicken_2dsyntax_2escm"),(void*)f_11627},
{C_text("f_11663:chicken_2dsyntax_2escm"),(void*)f_11663},
{C_text("f_11665:chicken_2dsyntax_2escm"),(void*)f_11665},
{C_text("f_11669:chicken_2dsyntax_2escm"),(void*)f_11669},
{C_text("f_11684:chicken_2dsyntax_2escm"),(void*)f_11684},
{C_text("f_11686:chicken_2dsyntax_2escm"),(void*)f_11686},
{C_text("f_11698:chicken_2dsyntax_2escm"),(void*)f_11698},
{C_text("f_11700:chicken_2dsyntax_2escm"),(void*)f_11700},
{C_text("f_11704:chicken_2dsyntax_2escm"),(void*)f_11704},
{C_text("f_11726:chicken_2dsyntax_2escm"),(void*)f_11726},
{C_text("f_11791:chicken_2dsyntax_2escm"),(void*)f_11791},
{C_text("f_11793:chicken_2dsyntax_2escm"),(void*)f_11793},
{C_text("f_11797:chicken_2dsyntax_2escm"),(void*)f_11797},
{C_text("f_11803:chicken_2dsyntax_2escm"),(void*)f_11803},
{C_text("f_11806:chicken_2dsyntax_2escm"),(void*)f_11806},
{C_text("f_11809:chicken_2dsyntax_2escm"),(void*)f_11809},
{C_text("f_11815:chicken_2dsyntax_2escm"),(void*)f_11815},
{C_text("f_11818:chicken_2dsyntax_2escm"),(void*)f_11818},
{C_text("f_11821:chicken_2dsyntax_2escm"),(void*)f_11821},
{C_text("f_11825:chicken_2dsyntax_2escm"),(void*)f_11825},
{C_text("f_11838:chicken_2dsyntax_2escm"),(void*)f_11838},
{C_text("f_11853:chicken_2dsyntax_2escm"),(void*)f_11853},
{C_text("f_11885:chicken_2dsyntax_2escm"),(void*)f_11885},
{C_text("f_11916:chicken_2dsyntax_2escm"),(void*)f_11916},
{C_text("f_11918:chicken_2dsyntax_2escm"),(void*)f_11918},
{C_text("f_11934:chicken_2dsyntax_2escm"),(void*)f_11934},
{C_text("f_11937:chicken_2dsyntax_2escm"),(void*)f_11937},
{C_text("f_11940:chicken_2dsyntax_2escm"),(void*)f_11940},
{C_text("f_11954:chicken_2dsyntax_2escm"),(void*)f_11954},
{C_text("f_11966:chicken_2dsyntax_2escm"),(void*)f_11966},
{C_text("f_11970:chicken_2dsyntax_2escm"),(void*)f_11970},
{C_text("f_12063:chicken_2dsyntax_2escm"),(void*)f_12063},
{C_text("f_12067:chicken_2dsyntax_2escm"),(void*)f_12067},
{C_text("f_12082:chicken_2dsyntax_2escm"),(void*)f_12082},
{C_text("f_12102:chicken_2dsyntax_2escm"),(void*)f_12102},
{C_text("f_12108:chicken_2dsyntax_2escm"),(void*)f_12108},
{C_text("f_12128:chicken_2dsyntax_2escm"),(void*)f_12128},
{C_text("f_12136:chicken_2dsyntax_2escm"),(void*)f_12136},
{C_text("f_12161:chicken_2dsyntax_2escm"),(void*)f_12161},
{C_text("f_12171:chicken_2dsyntax_2escm"),(void*)f_12171},
{C_text("f_12178:chicken_2dsyntax_2escm"),(void*)f_12178},
{C_text("f_12182:chicken_2dsyntax_2escm"),(void*)f_12182},
{C_text("f_12186:chicken_2dsyntax_2escm"),(void*)f_12186},
{C_text("f_12188:chicken_2dsyntax_2escm"),(void*)f_12188},
{C_text("f_12192:chicken_2dsyntax_2escm"),(void*)f_12192},
{C_text("f_12203:chicken_2dsyntax_2escm"),(void*)f_12203},
{C_text("f_12205:chicken_2dsyntax_2escm"),(void*)f_12205},
{C_text("f_12215:chicken_2dsyntax_2escm"),(void*)f_12215},
{C_text("f_12228:chicken_2dsyntax_2escm"),(void*)f_12228},
{C_text("f_12244:chicken_2dsyntax_2escm"),(void*)f_12244},
{C_text("f_12247:chicken_2dsyntax_2escm"),(void*)f_12247},
{C_text("f_12250:chicken_2dsyntax_2escm"),(void*)f_12250},
{C_text("f_12256:chicken_2dsyntax_2escm"),(void*)f_12256},
{C_text("f_12265:chicken_2dsyntax_2escm"),(void*)f_12265},
{C_text("f_12272:chicken_2dsyntax_2escm"),(void*)f_12272},
{C_text("f_12286:chicken_2dsyntax_2escm"),(void*)f_12286},
{C_text("f_12293:chicken_2dsyntax_2escm"),(void*)f_12293},
{C_text("f_12302:chicken_2dsyntax_2escm"),(void*)f_12302},
{C_text("f_12309:chicken_2dsyntax_2escm"),(void*)f_12309},
{C_text("f_12323:chicken_2dsyntax_2escm"),(void*)f_12323},
{C_text("f_12331:chicken_2dsyntax_2escm"),(void*)f_12331},
{C_text("f_12333:chicken_2dsyntax_2escm"),(void*)f_12333},
{C_text("f_12353:chicken_2dsyntax_2escm"),(void*)f_12353},
{C_text("f_12367:chicken_2dsyntax_2escm"),(void*)f_12367},
{C_text("f_12380:chicken_2dsyntax_2escm"),(void*)f_12380},
{C_text("f_12428:chicken_2dsyntax_2escm"),(void*)f_12428},
{C_text("f_12430:chicken_2dsyntax_2escm"),(void*)f_12430},
{C_text("f_12434:chicken_2dsyntax_2escm"),(void*)f_12434},
{C_text("f_12441:chicken_2dsyntax_2escm"),(void*)f_12441},
{C_text("f_12449:chicken_2dsyntax_2escm"),(void*)f_12449},
{C_text("f_12457:chicken_2dsyntax_2escm"),(void*)f_12457},
{C_text("f_12459:chicken_2dsyntax_2escm"),(void*)f_12459},
{C_text("f_12463:chicken_2dsyntax_2escm"),(void*)f_12463},
{C_text("f_12466:chicken_2dsyntax_2escm"),(void*)f_12466},
{C_text("f_12487:chicken_2dsyntax_2escm"),(void*)f_12487},
{C_text("f_12489:chicken_2dsyntax_2escm"),(void*)f_12489},
{C_text("f_12493:chicken_2dsyntax_2escm"),(void*)f_12493},
{C_text("f_12504:chicken_2dsyntax_2escm"),(void*)f_12504},
{C_text("f_12506:chicken_2dsyntax_2escm"),(void*)f_12506},
{C_text("f_12510:chicken_2dsyntax_2escm"),(void*)f_12510},
{C_text("f_12519:chicken_2dsyntax_2escm"),(void*)f_12519},
{C_text("f_12522:chicken_2dsyntax_2escm"),(void*)f_12522},
{C_text("f_12525:chicken_2dsyntax_2escm"),(void*)f_12525},
{C_text("f_12548:chicken_2dsyntax_2escm"),(void*)f_12548},
{C_text("f_12564:chicken_2dsyntax_2escm"),(void*)f_12564},
{C_text("f_12566:chicken_2dsyntax_2escm"),(void*)f_12566},
{C_text("f_12570:chicken_2dsyntax_2escm"),(void*)f_12570},
{C_text("f_12576:chicken_2dsyntax_2escm"),(void*)f_12576},
{C_text("f_12579:chicken_2dsyntax_2escm"),(void*)f_12579},
{C_text("f_12603:chicken_2dsyntax_2escm"),(void*)f_12603},
{C_text("f_12607:chicken_2dsyntax_2escm"),(void*)f_12607},
{C_text("f_12614:chicken_2dsyntax_2escm"),(void*)f_12614},
{C_text("f_12641:chicken_2dsyntax_2escm"),(void*)f_12641},
{C_text("f_12643:chicken_2dsyntax_2escm"),(void*)f_12643},
{C_text("f_12668:chicken_2dsyntax_2escm"),(void*)f_12668},
{C_text("f_12687:chicken_2dsyntax_2escm"),(void*)f_12687},
{C_text("f_12689:chicken_2dsyntax_2escm"),(void*)f_12689},
{C_text("f_12699:chicken_2dsyntax_2escm"),(void*)f_12699},
{C_text("f_12709:chicken_2dsyntax_2escm"),(void*)f_12709},
{C_text("f_12712:chicken_2dsyntax_2escm"),(void*)f_12712},
{C_text("f_12715:chicken_2dsyntax_2escm"),(void*)f_12715},
{C_text("f_12723:chicken_2dsyntax_2escm"),(void*)f_12723},
{C_text("f_12733:chicken_2dsyntax_2escm"),(void*)f_12733},
{C_text("f_12736:chicken_2dsyntax_2escm"),(void*)f_12736},
{C_text("f_12778:chicken_2dsyntax_2escm"),(void*)f_12778},
{C_text("f_12780:chicken_2dsyntax_2escm"),(void*)f_12780},
{C_text("f_12842:chicken_2dsyntax_2escm"),(void*)f_12842},
{C_text("f_12863:chicken_2dsyntax_2escm"),(void*)f_12863},
{C_text("f_12865:chicken_2dsyntax_2escm"),(void*)f_12865},
{C_text("f_12890:chicken_2dsyntax_2escm"),(void*)f_12890},
{C_text("f_12907:chicken_2dsyntax_2escm"),(void*)f_12907},
{C_text("f_12909:chicken_2dsyntax_2escm"),(void*)f_12909},
{C_text("f_12927:chicken_2dsyntax_2escm"),(void*)f_12927},
{C_text("f_12963:chicken_2dsyntax_2escm"),(void*)f_12963},
{C_text("f_12980:chicken_2dsyntax_2escm"),(void*)f_12980},
{C_text("f_13037:chicken_2dsyntax_2escm"),(void*)f_13037},
{C_text("f_13039:chicken_2dsyntax_2escm"),(void*)f_13039},
{C_text("f_13049:chicken_2dsyntax_2escm"),(void*)f_13049},
{C_text("f_13066:chicken_2dsyntax_2escm"),(void*)f_13066},
{C_text("f_13087:chicken_2dsyntax_2escm"),(void*)f_13087},
{C_text("f_13097:chicken_2dsyntax_2escm"),(void*)f_13097},
{C_text("f_13105:chicken_2dsyntax_2escm"),(void*)f_13105},
{C_text("f_13107:chicken_2dsyntax_2escm"),(void*)f_13107},
{C_text("f_13123:chicken_2dsyntax_2escm"),(void*)f_13123},
{C_text("f_13133:chicken_2dsyntax_2escm"),(void*)f_13133},
{C_text("f_13167:chicken_2dsyntax_2escm"),(void*)f_13167},
{C_text("f_13211:chicken_2dsyntax_2escm"),(void*)f_13211},
{C_text("f_13214:chicken_2dsyntax_2escm"),(void*)f_13214},
{C_text("f_13217:chicken_2dsyntax_2escm"),(void*)f_13217},
{C_text("f_13223:chicken_2dsyntax_2escm"),(void*)f_13223},
{C_text("f_13232:chicken_2dsyntax_2escm"),(void*)f_13232},
{C_text("f_13239:chicken_2dsyntax_2escm"),(void*)f_13239},
{C_text("f_13253:chicken_2dsyntax_2escm"),(void*)f_13253},
{C_text("f_13260:chicken_2dsyntax_2escm"),(void*)f_13260},
{C_text("f_13269:chicken_2dsyntax_2escm"),(void*)f_13269},
{C_text("f_13276:chicken_2dsyntax_2escm"),(void*)f_13276},
{C_text("f_13288:chicken_2dsyntax_2escm"),(void*)f_13288},
{C_text("f_13299:chicken_2dsyntax_2escm"),(void*)f_13299},
{C_text("f_13326:chicken_2dsyntax_2escm"),(void*)f_13326},
{C_text("f_13328:chicken_2dsyntax_2escm"),(void*)f_13328},
{C_text("f_13332:chicken_2dsyntax_2escm"),(void*)f_13332},
{C_text("f_13348:chicken_2dsyntax_2escm"),(void*)f_13348},
{C_text("f_13364:chicken_2dsyntax_2escm"),(void*)f_13364},
{C_text("f_13366:chicken_2dsyntax_2escm"),(void*)f_13366},
{C_text("f_13370:chicken_2dsyntax_2escm"),(void*)f_13370},
{C_text("f_13379:chicken_2dsyntax_2escm"),(void*)f_13379},
{C_text("f_13386:chicken_2dsyntax_2escm"),(void*)f_13386},
{C_text("f_13394:chicken_2dsyntax_2escm"),(void*)f_13394},
{C_text("f_13396:chicken_2dsyntax_2escm"),(void*)f_13396},
{C_text("f_13421:chicken_2dsyntax_2escm"),(void*)f_13421},
{C_text("f_13425:chicken_2dsyntax_2escm"),(void*)f_13425},
{C_text("f_13475:chicken_2dsyntax_2escm"),(void*)f_13475},
{C_text("f_13477:chicken_2dsyntax_2escm"),(void*)f_13477},
{C_text("f_13481:chicken_2dsyntax_2escm"),(void*)f_13481},
{C_text("f_13484:chicken_2dsyntax_2escm"),(void*)f_13484},
{C_text("f_13487:chicken_2dsyntax_2escm"),(void*)f_13487},
{C_text("f_13490:chicken_2dsyntax_2escm"),(void*)f_13490},
{C_text("f_13493:chicken_2dsyntax_2escm"),(void*)f_13493},
{C_text("f_13496:chicken_2dsyntax_2escm"),(void*)f_13496},
{C_text("f_13498:chicken_2dsyntax_2escm"),(void*)f_13498},
{C_text("f_13508:chicken_2dsyntax_2escm"),(void*)f_13508},
{C_text("f_13533:chicken_2dsyntax_2escm"),(void*)f_13533},
{C_text("f_13547:chicken_2dsyntax_2escm"),(void*)f_13547},
{C_text("f_13549:chicken_2dsyntax_2escm"),(void*)f_13549},
{C_text("f_13628:chicken_2dsyntax_2escm"),(void*)f_13628},
{C_text("f_13653:chicken_2dsyntax_2escm"),(void*)f_13653},
{C_text("f_13660:chicken_2dsyntax_2escm"),(void*)f_13660},
{C_text("f_13664:chicken_2dsyntax_2escm"),(void*)f_13664},
{C_text("f_13684:chicken_2dsyntax_2escm"),(void*)f_13684},
{C_text("f_13709:chicken_2dsyntax_2escm"),(void*)f_13709},
{C_text("f_13748:chicken_2dsyntax_2escm"),(void*)f_13748},
{C_text("f_13750:chicken_2dsyntax_2escm"),(void*)f_13750},
{C_text("f_13754:chicken_2dsyntax_2escm"),(void*)f_13754},
{C_text("f_13757:chicken_2dsyntax_2escm"),(void*)f_13757},
{C_text("f_13760:chicken_2dsyntax_2escm"),(void*)f_13760},
{C_text("f_13771:chicken_2dsyntax_2escm"),(void*)f_13771},
{C_text("f_4409:chicken_2dsyntax_2escm"),(void*)f_4409},
{C_text("f_4412:chicken_2dsyntax_2escm"),(void*)f_4412},
{C_text("f_4415:chicken_2dsyntax_2escm"),(void*)f_4415},
{C_text("f_4525:chicken_2dsyntax_2escm"),(void*)f_4525},
{C_text("f_4543:chicken_2dsyntax_2escm"),(void*)f_4543},
{C_text("f_4583:chicken_2dsyntax_2escm"),(void*)f_4583},
{C_text("f_4597:chicken_2dsyntax_2escm"),(void*)f_4597},
{C_text("f_5697:chicken_2dsyntax_2escm"),(void*)f_5697},
{C_text("f_5700:chicken_2dsyntax_2escm"),(void*)f_5700},
{C_text("f_5703:chicken_2dsyntax_2escm"),(void*)f_5703},
{C_text("f_5706:chicken_2dsyntax_2escm"),(void*)f_5706},
{C_text("f_5710:chicken_2dsyntax_2escm"),(void*)f_5710},
{C_text("f_5713:chicken_2dsyntax_2escm"),(void*)f_5713},
{C_text("f_5716:chicken_2dsyntax_2escm"),(void*)f_5716},
{C_text("f_5719:chicken_2dsyntax_2escm"),(void*)f_5719},
{C_text("f_5722:chicken_2dsyntax_2escm"),(void*)f_5722},
{C_text("f_5725:chicken_2dsyntax_2escm"),(void*)f_5725},
{C_text("f_5728:chicken_2dsyntax_2escm"),(void*)f_5728},
{C_text("f_5731:chicken_2dsyntax_2escm"),(void*)f_5731},
{C_text("f_5735:chicken_2dsyntax_2escm"),(void*)f_5735},
{C_text("f_5738:chicken_2dsyntax_2escm"),(void*)f_5738},
{C_text("f_5741:chicken_2dsyntax_2escm"),(void*)f_5741},
{C_text("f_5744:chicken_2dsyntax_2escm"),(void*)f_5744},
{C_text("f_5747:chicken_2dsyntax_2escm"),(void*)f_5747},
{C_text("f_5750:chicken_2dsyntax_2escm"),(void*)f_5750},
{C_text("f_5753:chicken_2dsyntax_2escm"),(void*)f_5753},
{C_text("f_5757:chicken_2dsyntax_2escm"),(void*)f_5757},
{C_text("f_5760:chicken_2dsyntax_2escm"),(void*)f_5760},
{C_text("f_5763:chicken_2dsyntax_2escm"),(void*)f_5763},
{C_text("f_5766:chicken_2dsyntax_2escm"),(void*)f_5766},
{C_text("f_5769:chicken_2dsyntax_2escm"),(void*)f_5769},
{C_text("f_5772:chicken_2dsyntax_2escm"),(void*)f_5772},
{C_text("f_5775:chicken_2dsyntax_2escm"),(void*)f_5775},
{C_text("f_5778:chicken_2dsyntax_2escm"),(void*)f_5778},
{C_text("f_5781:chicken_2dsyntax_2escm"),(void*)f_5781},
{C_text("f_5784:chicken_2dsyntax_2escm"),(void*)f_5784},
{C_text("f_5787:chicken_2dsyntax_2escm"),(void*)f_5787},
{C_text("f_5790:chicken_2dsyntax_2escm"),(void*)f_5790},
{C_text("f_5793:chicken_2dsyntax_2escm"),(void*)f_5793},
{C_text("f_5796:chicken_2dsyntax_2escm"),(void*)f_5796},
{C_text("f_5799:chicken_2dsyntax_2escm"),(void*)f_5799},
{C_text("f_5803:chicken_2dsyntax_2escm"),(void*)f_5803},
{C_text("f_5806:chicken_2dsyntax_2escm"),(void*)f_5806},
{C_text("f_5809:chicken_2dsyntax_2escm"),(void*)f_5809},
{C_text("f_5812:chicken_2dsyntax_2escm"),(void*)f_5812},
{C_text("f_5815:chicken_2dsyntax_2escm"),(void*)f_5815},
{C_text("f_5818:chicken_2dsyntax_2escm"),(void*)f_5818},
{C_text("f_5821:chicken_2dsyntax_2escm"),(void*)f_5821},
{C_text("f_5824:chicken_2dsyntax_2escm"),(void*)f_5824},
{C_text("f_5827:chicken_2dsyntax_2escm"),(void*)f_5827},
{C_text("f_5830:chicken_2dsyntax_2escm"),(void*)f_5830},
{C_text("f_5833:chicken_2dsyntax_2escm"),(void*)f_5833},
{C_text("f_5836:chicken_2dsyntax_2escm"),(void*)f_5836},
{C_text("f_5839:chicken_2dsyntax_2escm"),(void*)f_5839},
{C_text("f_5842:chicken_2dsyntax_2escm"),(void*)f_5842},
{C_text("f_5845:chicken_2dsyntax_2escm"),(void*)f_5845},
{C_text("f_5848:chicken_2dsyntax_2escm"),(void*)f_5848},
{C_text("f_5851:chicken_2dsyntax_2escm"),(void*)f_5851},
{C_text("f_5854:chicken_2dsyntax_2escm"),(void*)f_5854},
{C_text("f_5857:chicken_2dsyntax_2escm"),(void*)f_5857},
{C_text("f_5861:chicken_2dsyntax_2escm"),(void*)f_5861},
{C_text("f_5864:chicken_2dsyntax_2escm"),(void*)f_5864},
{C_text("f_5867:chicken_2dsyntax_2escm"),(void*)f_5867},
{C_text("f_5871:chicken_2dsyntax_2escm"),(void*)f_5871},
{C_text("f_5874:chicken_2dsyntax_2escm"),(void*)f_5874},
{C_text("f_5877:chicken_2dsyntax_2escm"),(void*)f_5877},
{C_text("f_5880:chicken_2dsyntax_2escm"),(void*)f_5880},
{C_text("f_5888:chicken_2dsyntax_2escm"),(void*)f_5888},
{C_text("f_5890:chicken_2dsyntax_2escm"),(void*)f_5890},
{C_text("f_5894:chicken_2dsyntax_2escm"),(void*)f_5894},
{C_text("f_5896:chicken_2dsyntax_2escm"),(void*)f_5896},
{C_text("f_5902:chicken_2dsyntax_2escm"),(void*)f_5902},
{C_text("f_5916:chicken_2dsyntax_2escm"),(void*)f_5916},
{C_text("f_5920:chicken_2dsyntax_2escm"),(void*)f_5920},
{C_text("f_5928:chicken_2dsyntax_2escm"),(void*)f_5928},
{C_text("f_5931:chicken_2dsyntax_2escm"),(void*)f_5931},
{C_text("f_5934:chicken_2dsyntax_2escm"),(void*)f_5934},
{C_text("f_5937:chicken_2dsyntax_2escm"),(void*)f_5937},
{C_text("f_5940:chicken_2dsyntax_2escm"),(void*)f_5940},
{C_text("f_5943:chicken_2dsyntax_2escm"),(void*)f_5943},
{C_text("f_5946:chicken_2dsyntax_2escm"),(void*)f_5946},
{C_text("f_5949:chicken_2dsyntax_2escm"),(void*)f_5949},
{C_text("f_5952:chicken_2dsyntax_2escm"),(void*)f_5952},
{C_text("f_5955:chicken_2dsyntax_2escm"),(void*)f_5955},
{C_text("f_5962:chicken_2dsyntax_2escm"),(void*)f_5962},
{C_text("f_5978:chicken_2dsyntax_2escm"),(void*)f_5978},
{C_text("f_5980:chicken_2dsyntax_2escm"),(void*)f_5980},
{C_text("f_5988:chicken_2dsyntax_2escm"),(void*)f_5988},
{C_text("f_5998:chicken_2dsyntax_2escm"),(void*)f_5998},
{C_text("f_6002:chicken_2dsyntax_2escm"),(void*)f_6002},
{C_text("f_6012:chicken_2dsyntax_2escm"),(void*)f_6012},
{C_text("f_6016:chicken_2dsyntax_2escm"),(void*)f_6016},
{C_text("f_6018:chicken_2dsyntax_2escm"),(void*)f_6018},
{C_text("f_6026:chicken_2dsyntax_2escm"),(void*)f_6026},
{C_text("f_6028:chicken_2dsyntax_2escm"),(void*)f_6028},
{C_text("f_6032:chicken_2dsyntax_2escm"),(void*)f_6032},
{C_text("f_6054:chicken_2dsyntax_2escm"),(void*)f_6054},
{C_text("f_6056:chicken_2dsyntax_2escm"),(void*)f_6056},
{C_text("f_6104:chicken_2dsyntax_2escm"),(void*)f_6104},
{C_text("f_6157:chicken_2dsyntax_2escm"),(void*)f_6157},
{C_text("f_6168:chicken_2dsyntax_2escm"),(void*)f_6168},
{C_text("f_6205:chicken_2dsyntax_2escm"),(void*)f_6205},
{C_text("f_6233:chicken_2dsyntax_2escm"),(void*)f_6233},
{C_text("f_6260:chicken_2dsyntax_2escm"),(void*)f_6260},
{C_text("f_6270:chicken_2dsyntax_2escm"),(void*)f_6270},
{C_text("f_6272:chicken_2dsyntax_2escm"),(void*)f_6272},
{C_text("f_6297:chicken_2dsyntax_2escm"),(void*)f_6297},
{C_text("f_6328:chicken_2dsyntax_2escm"),(void*)f_6328},
{C_text("f_6330:chicken_2dsyntax_2escm"),(void*)f_6330},
{C_text("f_6334:chicken_2dsyntax_2escm"),(void*)f_6334},
{C_text("f_6377:chicken_2dsyntax_2escm"),(void*)f_6377},
{C_text("f_6379:chicken_2dsyntax_2escm"),(void*)f_6379},
{C_text("f_6383:chicken_2dsyntax_2escm"),(void*)f_6383},
{C_text("f_6386:chicken_2dsyntax_2escm"),(void*)f_6386},
{C_text("f_6389:chicken_2dsyntax_2escm"),(void*)f_6389},
{C_text("f_6392:chicken_2dsyntax_2escm"),(void*)f_6392},
{C_text("f_6395:chicken_2dsyntax_2escm"),(void*)f_6395},
{C_text("f_6398:chicken_2dsyntax_2escm"),(void*)f_6398},
{C_text("f_6401:chicken_2dsyntax_2escm"),(void*)f_6401},
{C_text("f_6404:chicken_2dsyntax_2escm"),(void*)f_6404},
{C_text("f_6407:chicken_2dsyntax_2escm"),(void*)f_6407},
{C_text("f_6410:chicken_2dsyntax_2escm"),(void*)f_6410},
{C_text("f_6413:chicken_2dsyntax_2escm"),(void*)f_6413},
{C_text("f_6416:chicken_2dsyntax_2escm"),(void*)f_6416},
{C_text("f_6419:chicken_2dsyntax_2escm"),(void*)f_6419},
{C_text("f_6422:chicken_2dsyntax_2escm"),(void*)f_6422},
{C_text("f_6425:chicken_2dsyntax_2escm"),(void*)f_6425},
{C_text("f_6428:chicken_2dsyntax_2escm"),(void*)f_6428},
{C_text("f_6435:chicken_2dsyntax_2escm"),(void*)f_6435},
{C_text("f_6442:chicken_2dsyntax_2escm"),(void*)f_6442},
{C_text("f_6455:chicken_2dsyntax_2escm"),(void*)f_6455},
{C_text("f_6458:chicken_2dsyntax_2escm"),(void*)f_6458},
{C_text("f_6477:chicken_2dsyntax_2escm"),(void*)f_6477},
{C_text("f_6523:chicken_2dsyntax_2escm"),(void*)f_6523},
{C_text("f_6538:chicken_2dsyntax_2escm"),(void*)f_6538},
{C_text("f_6573:chicken_2dsyntax_2escm"),(void*)f_6573},
{C_text("f_6639:chicken_2dsyntax_2escm"),(void*)f_6639},
{C_text("f_6739:chicken_2dsyntax_2escm"),(void*)f_6739},
{C_text("f_6765:chicken_2dsyntax_2escm"),(void*)f_6765},
{C_text("f_6767:chicken_2dsyntax_2escm"),(void*)f_6767},
{C_text("f_6771:chicken_2dsyntax_2escm"),(void*)f_6771},
{C_text("f_6782:chicken_2dsyntax_2escm"),(void*)f_6782},
{C_text("f_6785:chicken_2dsyntax_2escm"),(void*)f_6785},
{C_text("f_6808:chicken_2dsyntax_2escm"),(void*)f_6808},
{C_text("f_6827:chicken_2dsyntax_2escm"),(void*)f_6827},
{C_text("f_6837:chicken_2dsyntax_2escm"),(void*)f_6837},
{C_text("f_6844:chicken_2dsyntax_2escm"),(void*)f_6844},
{C_text("f_6854:chicken_2dsyntax_2escm"),(void*)f_6854},
{C_text("f_6856:chicken_2dsyntax_2escm"),(void*)f_6856},
{C_text("f_6864:chicken_2dsyntax_2escm"),(void*)f_6864},
{C_text("f_6872:chicken_2dsyntax_2escm"),(void*)f_6872},
{C_text("f_6874:chicken_2dsyntax_2escm"),(void*)f_6874},
{C_text("f_6878:chicken_2dsyntax_2escm"),(void*)f_6878},
{C_text("f_6937:chicken_2dsyntax_2escm"),(void*)f_6937},
{C_text("f_6939:chicken_2dsyntax_2escm"),(void*)f_6939},
{C_text("f_6943:chicken_2dsyntax_2escm"),(void*)f_6943},
{C_text("f_6946:chicken_2dsyntax_2escm"),(void*)f_6946},
{C_text("f_6949:chicken_2dsyntax_2escm"),(void*)f_6949},
{C_text("f_6952:chicken_2dsyntax_2escm"),(void*)f_6952},
{C_text("f_6959:chicken_2dsyntax_2escm"),(void*)f_6959},
{C_text("f_6969:chicken_2dsyntax_2escm"),(void*)f_6969},
{C_text("f_6972:chicken_2dsyntax_2escm"),(void*)f_6972},
{C_text("f_6978:chicken_2dsyntax_2escm"),(void*)f_6978},
{C_text("f_6989:chicken_2dsyntax_2escm"),(void*)f_6989},
{C_text("f_7005:chicken_2dsyntax_2escm"),(void*)f_7005},
{C_text("f_7015:chicken_2dsyntax_2escm"),(void*)f_7015},
{C_text("f_7038:chicken_2dsyntax_2escm"),(void*)f_7038},
{C_text("f_7041:chicken_2dsyntax_2escm"),(void*)f_7041},
{C_text("f_7058:chicken_2dsyntax_2escm"),(void*)f_7058},
{C_text("f_7064:chicken_2dsyntax_2escm"),(void*)f_7064},
{C_text("f_7081:chicken_2dsyntax_2escm"),(void*)f_7081},
{C_text("f_7104:chicken_2dsyntax_2escm"),(void*)f_7104},
{C_text("f_7132:chicken_2dsyntax_2escm"),(void*)f_7132},
{C_text("f_7134:chicken_2dsyntax_2escm"),(void*)f_7134},
{C_text("f_7138:chicken_2dsyntax_2escm"),(void*)f_7138},
{C_text("f_7141:chicken_2dsyntax_2escm"),(void*)f_7141},
{C_text("f_7144:chicken_2dsyntax_2escm"),(void*)f_7144},
{C_text("f_7147:chicken_2dsyntax_2escm"),(void*)f_7147},
{C_text("f_7154:chicken_2dsyntax_2escm"),(void*)f_7154},
{C_text("f_7164:chicken_2dsyntax_2escm"),(void*)f_7164},
{C_text("f_7167:chicken_2dsyntax_2escm"),(void*)f_7167},
{C_text("f_7173:chicken_2dsyntax_2escm"),(void*)f_7173},
{C_text("f_7180:chicken_2dsyntax_2escm"),(void*)f_7180},
{C_text("f_7196:chicken_2dsyntax_2escm"),(void*)f_7196},
{C_text("f_7206:chicken_2dsyntax_2escm"),(void*)f_7206},
{C_text("f_7229:chicken_2dsyntax_2escm"),(void*)f_7229},
{C_text("f_7232:chicken_2dsyntax_2escm"),(void*)f_7232},
{C_text("f_7249:chicken_2dsyntax_2escm"),(void*)f_7249},
{C_text("f_7255:chicken_2dsyntax_2escm"),(void*)f_7255},
{C_text("f_7304:chicken_2dsyntax_2escm"),(void*)f_7304},
{C_text("f_7306:chicken_2dsyntax_2escm"),(void*)f_7306},
{C_text("f_7310:chicken_2dsyntax_2escm"),(void*)f_7310},
{C_text("f_7316:chicken_2dsyntax_2escm"),(void*)f_7316},
{C_text("f_7319:chicken_2dsyntax_2escm"),(void*)f_7319},
{C_text("f_7331:chicken_2dsyntax_2escm"),(void*)f_7331},
{C_text("f_7334:chicken_2dsyntax_2escm"),(void*)f_7334},
{C_text("f_7337:chicken_2dsyntax_2escm"),(void*)f_7337},
{C_text("f_7340:chicken_2dsyntax_2escm"),(void*)f_7340},
{C_text("f_7343:chicken_2dsyntax_2escm"),(void*)f_7343},
{C_text("f_7349:chicken_2dsyntax_2escm"),(void*)f_7349},
{C_text("f_7352:chicken_2dsyntax_2escm"),(void*)f_7352},
{C_text("f_7361:chicken_2dsyntax_2escm"),(void*)f_7361},
{C_text("f_7362:chicken_2dsyntax_2escm"),(void*)f_7362},
{C_text("f_7378:chicken_2dsyntax_2escm"),(void*)f_7378},
{C_text("f_7409:chicken_2dsyntax_2escm"),(void*)f_7409},
{C_text("f_7411:chicken_2dsyntax_2escm"),(void*)f_7411},
{C_text("f_7430:chicken_2dsyntax_2escm"),(void*)f_7430},
{C_text("f_7436:chicken_2dsyntax_2escm"),(void*)f_7436},
{C_text("f_7447:chicken_2dsyntax_2escm"),(void*)f_7447},
{C_text("f_7451:chicken_2dsyntax_2escm"),(void*)f_7451},
{C_text("f_7455:chicken_2dsyntax_2escm"),(void*)f_7455},
{C_text("f_7495:chicken_2dsyntax_2escm"),(void*)f_7495},
{C_text("f_7525:chicken_2dsyntax_2escm"),(void*)f_7525},
{C_text("f_7536:chicken_2dsyntax_2escm"),(void*)f_7536},
{C_text("f_7611:chicken_2dsyntax_2escm"),(void*)f_7611},
{C_text("f_7678:chicken_2dsyntax_2escm"),(void*)f_7678},
{C_text("f_7691:chicken_2dsyntax_2escm"),(void*)f_7691},
{C_text("f_7693:chicken_2dsyntax_2escm"),(void*)f_7693},
{C_text("f_7739:chicken_2dsyntax_2escm"),(void*)f_7739},
{C_text("f_7749:chicken_2dsyntax_2escm"),(void*)f_7749},
{C_text("f_7762:chicken_2dsyntax_2escm"),(void*)f_7762},
{C_text("f_7797:chicken_2dsyntax_2escm"),(void*)f_7797},
{C_text("f_7804:chicken_2dsyntax_2escm"),(void*)f_7804},
{C_text("f_7808:chicken_2dsyntax_2escm"),(void*)f_7808},
{C_text("f_7816:chicken_2dsyntax_2escm"),(void*)f_7816},
{C_text("f_7818:chicken_2dsyntax_2escm"),(void*)f_7818},
{C_text("f_7822:chicken_2dsyntax_2escm"),(void*)f_7822},
{C_text("f_7834:chicken_2dsyntax_2escm"),(void*)f_7834},
{C_text("f_7837:chicken_2dsyntax_2escm"),(void*)f_7837},
{C_text("f_7840:chicken_2dsyntax_2escm"),(void*)f_7840},
{C_text("f_7843:chicken_2dsyntax_2escm"),(void*)f_7843},
{C_text("f_7854:chicken_2dsyntax_2escm"),(void*)f_7854},
{C_text("f_7856:chicken_2dsyntax_2escm"),(void*)f_7856},
{C_text("f_7882:chicken_2dsyntax_2escm"),(void*)f_7882},
{C_text("f_7893:chicken_2dsyntax_2escm"),(void*)f_7893},
{C_text("f_7976:chicken_2dsyntax_2escm"),(void*)f_7976},
{C_text("f_7978:chicken_2dsyntax_2escm"),(void*)f_7978},
{C_text("f_7982:chicken_2dsyntax_2escm"),(void*)f_7982},
{C_text("f_7985:chicken_2dsyntax_2escm"),(void*)f_7985},
{C_text("f_8015:chicken_2dsyntax_2escm"),(void*)f_8015},
{C_text("f_8025:chicken_2dsyntax_2escm"),(void*)f_8025},
{C_text("f_8053:chicken_2dsyntax_2escm"),(void*)f_8053},
{C_text("f_8055:chicken_2dsyntax_2escm"),(void*)f_8055},
{C_text("f_8059:chicken_2dsyntax_2escm"),(void*)f_8059},
{C_text("f_8078:chicken_2dsyntax_2escm"),(void*)f_8078},
{C_text("f_8082:chicken_2dsyntax_2escm"),(void*)f_8082},
{C_text("f_8086:chicken_2dsyntax_2escm"),(void*)f_8086},
{C_text("f_8088:chicken_2dsyntax_2escm"),(void*)f_8088},
{C_text("f_8109:chicken_2dsyntax_2escm"),(void*)f_8109},
{C_text("f_8127:chicken_2dsyntax_2escm"),(void*)f_8127},
{C_text("f_8135:chicken_2dsyntax_2escm"),(void*)f_8135},
{C_text("f_8139:chicken_2dsyntax_2escm"),(void*)f_8139},
{C_text("f_8149:chicken_2dsyntax_2escm"),(void*)f_8149},
{C_text("f_8155:chicken_2dsyntax_2escm"),(void*)f_8155},
{C_text("f_8169:chicken_2dsyntax_2escm"),(void*)f_8169},
{C_text("f_8195:chicken_2dsyntax_2escm"),(void*)f_8195},
{C_text("f_8219:chicken_2dsyntax_2escm"),(void*)f_8219},
{C_text("f_8227:chicken_2dsyntax_2escm"),(void*)f_8227},
{C_text("f_8235:chicken_2dsyntax_2escm"),(void*)f_8235},
{C_text("f_8239:chicken_2dsyntax_2escm"),(void*)f_8239},
{C_text("f_8242:chicken_2dsyntax_2escm"),(void*)f_8242},
{C_text("f_8245:chicken_2dsyntax_2escm"),(void*)f_8245},
{C_text("f_8254:chicken_2dsyntax_2escm"),(void*)f_8254},
{C_text("f_8255:chicken_2dsyntax_2escm"),(void*)f_8255},
{C_text("f_8263:chicken_2dsyntax_2escm"),(void*)f_8263},
{C_text("f_8267:chicken_2dsyntax_2escm"),(void*)f_8267},
{C_text("f_8271:chicken_2dsyntax_2escm"),(void*)f_8271},
{C_text("f_8279:chicken_2dsyntax_2escm"),(void*)f_8279},
{C_text("f_8285:chicken_2dsyntax_2escm"),(void*)f_8285},
{C_text("f_8291:chicken_2dsyntax_2escm"),(void*)f_8291},
{C_text("f_8294:chicken_2dsyntax_2escm"),(void*)f_8294},
{C_text("f_8297:chicken_2dsyntax_2escm"),(void*)f_8297},
{C_text("f_8301:chicken_2dsyntax_2escm"),(void*)f_8301},
{C_text("f_8309:chicken_2dsyntax_2escm"),(void*)f_8309},
{C_text("f_8312:chicken_2dsyntax_2escm"),(void*)f_8312},
{C_text("f_8315:chicken_2dsyntax_2escm"),(void*)f_8315},
{C_text("f_8318:chicken_2dsyntax_2escm"),(void*)f_8318},
{C_text("f_8325:chicken_2dsyntax_2escm"),(void*)f_8325},
{C_text("f_8351:chicken_2dsyntax_2escm"),(void*)f_8351},
{C_text("f_8376:chicken_2dsyntax_2escm"),(void*)f_8376},
{C_text("f_8385:chicken_2dsyntax_2escm"),(void*)f_8385},
{C_text("f_8419:chicken_2dsyntax_2escm"),(void*)f_8419},
{C_text("f_8444:chicken_2dsyntax_2escm"),(void*)f_8444},
{C_text("f_8453:chicken_2dsyntax_2escm"),(void*)f_8453},
{C_text("f_8501:chicken_2dsyntax_2escm"),(void*)f_8501},
{C_text("f_8503:chicken_2dsyntax_2escm"),(void*)f_8503},
{C_text("f_8507:chicken_2dsyntax_2escm"),(void*)f_8507},
{C_text("f_8517:chicken_2dsyntax_2escm"),(void*)f_8517},
{C_text("f_8544:chicken_2dsyntax_2escm"),(void*)f_8544},
{C_text("f_8547:chicken_2dsyntax_2escm"),(void*)f_8547},
{C_text("f_8562:chicken_2dsyntax_2escm"),(void*)f_8562},
{C_text("f_8570:chicken_2dsyntax_2escm"),(void*)f_8570},
{C_text("f_8579:chicken_2dsyntax_2escm"),(void*)f_8579},
{C_text("f_8594:chicken_2dsyntax_2escm"),(void*)f_8594},
{C_text("f_8604:chicken_2dsyntax_2escm"),(void*)f_8604},
{C_text("f_8607:chicken_2dsyntax_2escm"),(void*)f_8607},
{C_text("f_8623:chicken_2dsyntax_2escm"),(void*)f_8623},
{C_text("f_8643:chicken_2dsyntax_2escm"),(void*)f_8643},
{C_text("f_8645:chicken_2dsyntax_2escm"),(void*)f_8645},
{C_text("f_8647:chicken_2dsyntax_2escm"),(void*)f_8647},
{C_text("f_8651:chicken_2dsyntax_2escm"),(void*)f_8651},
{C_text("f_8660:chicken_2dsyntax_2escm"),(void*)f_8660},
{C_text("f_8663:chicken_2dsyntax_2escm"),(void*)f_8663},
{C_text("f_8672:chicken_2dsyntax_2escm"),(void*)f_8672},
{C_text("f_8688:chicken_2dsyntax_2escm"),(void*)f_8688},
{C_text("f_8692:chicken_2dsyntax_2escm"),(void*)f_8692},
{C_text("f_8735:chicken_2dsyntax_2escm"),(void*)f_8735},
{C_text("f_8747:chicken_2dsyntax_2escm"),(void*)f_8747},
{C_text("f_8749:chicken_2dsyntax_2escm"),(void*)f_8749},
{C_text("f_8753:chicken_2dsyntax_2escm"),(void*)f_8753},
{C_text("f_8756:chicken_2dsyntax_2escm"),(void*)f_8756},
{C_text("f_8775:chicken_2dsyntax_2escm"),(void*)f_8775},
{C_text("f_8791:chicken_2dsyntax_2escm"),(void*)f_8791},
{C_text("f_8793:chicken_2dsyntax_2escm"),(void*)f_8793},
{C_text("f_8797:chicken_2dsyntax_2escm"),(void*)f_8797},
{C_text("f_8800:chicken_2dsyntax_2escm"),(void*)f_8800},
{C_text("f_8813:chicken_2dsyntax_2escm"),(void*)f_8813},
{C_text("f_8815:chicken_2dsyntax_2escm"),(void*)f_8815},
{C_text("f_8819:chicken_2dsyntax_2escm"),(void*)f_8819},
{C_text("f_8833:chicken_2dsyntax_2escm"),(void*)f_8833},
{C_text("f_8839:chicken_2dsyntax_2escm"),(void*)f_8839},
{C_text("f_8864:chicken_2dsyntax_2escm"),(void*)f_8864},
{C_text("f_8866:chicken_2dsyntax_2escm"),(void*)f_8866},
{C_text("f_8873:chicken_2dsyntax_2escm"),(void*)f_8873},
{C_text("f_8879:chicken_2dsyntax_2escm"),(void*)f_8879},
{C_text("f_8883:chicken_2dsyntax_2escm"),(void*)f_8883},
{C_text("f_8893:chicken_2dsyntax_2escm"),(void*)f_8893},
{C_text("f_8895:chicken_2dsyntax_2escm"),(void*)f_8895},
{C_text("f_8924:chicken_2dsyntax_2escm"),(void*)f_8924},
{C_text("f_8943:chicken_2dsyntax_2escm"),(void*)f_8943},
{C_text("f_8977:chicken_2dsyntax_2escm"),(void*)f_8977},
{C_text("f_8995:chicken_2dsyntax_2escm"),(void*)f_8995},
{C_text("f_9001:chicken_2dsyntax_2escm"),(void*)f_9001},
{C_text("f_9035:chicken_2dsyntax_2escm"),(void*)f_9035},
{C_text("f_9071:chicken_2dsyntax_2escm"),(void*)f_9071},
{C_text("f_9073:chicken_2dsyntax_2escm"),(void*)f_9073},
{C_text("f_9077:chicken_2dsyntax_2escm"),(void*)f_9077},
{C_text("f_9085:chicken_2dsyntax_2escm"),(void*)f_9085},
{C_text("f_9090:chicken_2dsyntax_2escm"),(void*)f_9090},
{C_text("f_9115:chicken_2dsyntax_2escm"),(void*)f_9115},
{C_text("f_9125:chicken_2dsyntax_2escm"),(void*)f_9125},
{C_text("f_9127:chicken_2dsyntax_2escm"),(void*)f_9127},
{C_text("f_9131:chicken_2dsyntax_2escm"),(void*)f_9131},
{C_text("f_9137:chicken_2dsyntax_2escm"),(void*)f_9137},
{C_text("f_9158:chicken_2dsyntax_2escm"),(void*)f_9158},
{C_text("f_9165:chicken_2dsyntax_2escm"),(void*)f_9165},
{C_text("f_9188:chicken_2dsyntax_2escm"),(void*)f_9188},
{C_text("f_9192:chicken_2dsyntax_2escm"),(void*)f_9192},
{C_text("f_9213:chicken_2dsyntax_2escm"),(void*)f_9213},
{C_text("f_9216:chicken_2dsyntax_2escm"),(void*)f_9216},
{C_text("f_9220:chicken_2dsyntax_2escm"),(void*)f_9220},
{C_text("f_9228:chicken_2dsyntax_2escm"),(void*)f_9228},
{C_text("f_9232:chicken_2dsyntax_2escm"),(void*)f_9232},
{C_text("f_9238:chicken_2dsyntax_2escm"),(void*)f_9238},
{C_text("f_9239:chicken_2dsyntax_2escm"),(void*)f_9239},
{C_text("f_9250:chicken_2dsyntax_2escm"),(void*)f_9250},
{C_text("f_9265:chicken_2dsyntax_2escm"),(void*)f_9265},
{C_text("f_9267:chicken_2dsyntax_2escm"),(void*)f_9267},
{C_text("f_9286:chicken_2dsyntax_2escm"),(void*)f_9286},
{C_text("f_9294:chicken_2dsyntax_2escm"),(void*)f_9294},
{C_text("f_9300:chicken_2dsyntax_2escm"),(void*)f_9300},
{C_text("f_9302:chicken_2dsyntax_2escm"),(void*)f_9302},
{C_text("f_9327:chicken_2dsyntax_2escm"),(void*)f_9327},
{C_text("f_9351:chicken_2dsyntax_2escm"),(void*)f_9351},
{C_text("f_9388:chicken_2dsyntax_2escm"),(void*)f_9388},
{C_text("f_9416:chicken_2dsyntax_2escm"),(void*)f_9416},
{C_text("f_9450:chicken_2dsyntax_2escm"),(void*)f_9450},
{C_text("f_9481:chicken_2dsyntax_2escm"),(void*)f_9481},
{C_text("f_9488:chicken_2dsyntax_2escm"),(void*)f_9488},
{C_text("f_9494:chicken_2dsyntax_2escm"),(void*)f_9494},
{C_text("f_9519:chicken_2dsyntax_2escm"),(void*)f_9519},
{C_text("f_9528:chicken_2dsyntax_2escm"),(void*)f_9528},
{C_text("f_9541:chicken_2dsyntax_2escm"),(void*)f_9541},
{C_text("f_9566:chicken_2dsyntax_2escm"),(void*)f_9566},
{C_text("f_9602:chicken_2dsyntax_2escm"),(void*)f_9602},
{C_text("f_9604:chicken_2dsyntax_2escm"),(void*)f_9604},
{C_text("f_9608:chicken_2dsyntax_2escm"),(void*)f_9608},
{C_text("f_9615:chicken_2dsyntax_2escm"),(void*)f_9615},
{C_text("f_9619:chicken_2dsyntax_2escm"),(void*)f_9619},
{C_text("f_9627:chicken_2dsyntax_2escm"),(void*)f_9627},
{C_text("f_9641:chicken_2dsyntax_2escm"),(void*)f_9641},
{C_text("f_9647:chicken_2dsyntax_2escm"),(void*)f_9647},
{C_text("f_9654:chicken_2dsyntax_2escm"),(void*)f_9654},
{C_text("f_9660:chicken_2dsyntax_2escm"),(void*)f_9660},
{C_text("f_9673:chicken_2dsyntax_2escm"),(void*)f_9673},
{C_text("f_9707:chicken_2dsyntax_2escm"),(void*)f_9707},
{C_text("f_9717:chicken_2dsyntax_2escm"),(void*)f_9717},
{C_text("f_9732:chicken_2dsyntax_2escm"),(void*)f_9732},
{C_text("f_9734:chicken_2dsyntax_2escm"),(void*)f_9734},
{C_text("f_9738:chicken_2dsyntax_2escm"),(void*)f_9738},
{C_text("f_9753:chicken_2dsyntax_2escm"),(void*)f_9753},
{C_text("f_9755:chicken_2dsyntax_2escm"),(void*)f_9755},
{C_text("f_9759:chicken_2dsyntax_2escm"),(void*)f_9759},
{C_text("f_9781:chicken_2dsyntax_2escm"),(void*)f_9781},
{C_text("f_9783:chicken_2dsyntax_2escm"),(void*)f_9783},
{C_text("f_9787:chicken_2dsyntax_2escm"),(void*)f_9787},
{C_text("f_9805:chicken_2dsyntax_2escm"),(void*)f_9805},
{C_text("f_9807:chicken_2dsyntax_2escm"),(void*)f_9807},
{C_text("f_9816:chicken_2dsyntax_2escm"),(void*)f_9816},
{C_text("f_9822:chicken_2dsyntax_2escm"),(void*)f_9822},
{C_text("f_9828:chicken_2dsyntax_2escm"),(void*)f_9828},
{C_text("f_9847:chicken_2dsyntax_2escm"),(void*)f_9847},
{C_text("f_9849:chicken_2dsyntax_2escm"),(void*)f_9849},
{C_text("f_9874:chicken_2dsyntax_2escm"),(void*)f_9874},
{C_text("f_9885:chicken_2dsyntax_2escm"),(void*)f_9885},
{C_text("f_9887:chicken_2dsyntax_2escm"),(void*)f_9887},
{C_text("f_9906:chicken_2dsyntax_2escm"),(void*)f_9906},
{C_text("f_9914:chicken_2dsyntax_2escm"),(void*)f_9914},
{C_text("f_9923:chicken_2dsyntax_2escm"),(void*)f_9923},
{C_text("f_9929:chicken_2dsyntax_2escm"),(void*)f_9929},
{C_text("f_9933:chicken_2dsyntax_2escm"),(void*)f_9933},
{C_text("f_9941:chicken_2dsyntax_2escm"),(void*)f_9941},
{C_text("f_9947:chicken_2dsyntax_2escm"),(void*)f_9947},
{C_text("f_9951:chicken_2dsyntax_2escm"),(void*)f_9951},
{C_text("f_9959:chicken_2dsyntax_2escm"),(void*)f_9959},
{C_text("f_9962:chicken_2dsyntax_2escm"),(void*)f_9962},
{C_text("f_9966:chicken_2dsyntax_2escm"),(void*)f_9966},
{C_text("f_9974:chicken_2dsyntax_2escm"),(void*)f_9974},
{C_text("f_9977:chicken_2dsyntax_2escm"),(void*)f_9977},
{C_text("f_9990:chicken_2dsyntax_2escm"),(void*)f_9990},
{C_text("toplevel:chicken_2dsyntax_2escm"),(void*)C_chicken_2dsyntax_toplevel},
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
S|applied compiler syntax:
S|  scheme#for-each		2
S|  ##sys#map		11
S|  chicken.base#foldl		4
S|  scheme#map		45
S|  chicken.base#foldr		4
o|eliminated procedure checks: 785 
o|specializations:
o|  1 (scheme#zero? integer)
o|  1 (scheme#cdadr (pair * (pair pair *)))
o|  1 (chicken.base#add1 *)
o|  2 (scheme#string-append string string)
o|  14 (scheme#cddr (pair * pair))
o|  2 (scheme#length list)
o|  1 (scheme#caddr (pair * (pair * pair)))
o|  5 (scheme#cadr (pair * pair))
o|  4 (scheme#cdddr (pair * (pair * pair)))
o|  1 (scheme#eqv? * *)
o|  40 (##sys#check-list (or pair list) *)
o|  78 (scheme#cdr pair)
o|  26 (scheme#car pair)
(o e)|safe calls: 1559 
o|safe globals: (posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|inlining procedure: k4527 
o|inlining procedure: k4527 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4797 
o|inlining procedure: k4797 
o|inlining procedure: k4828 
o|inlining procedure: k4828 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: delete-duplicates 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k5045 
o|inlining procedure: k5045 
o|inlining procedure: k5037 
o|inlining procedure: k5037 
o|removed side-effect free assignment to unused variable: filter-map 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5436 
o|inlining procedure: k5436 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5904 
o|inlining procedure: k5904 
o|contracted procedure: "(chicken-syntax.scm:1348) split-at" 
o|inlining procedure: k4585 
o|inlining procedure: k4585 
o|inlining procedure: k6033 
o|inlining procedure: k6033 
o|inlining procedure: k6058 
o|inlining procedure: k6058 
o|inlining procedure: k6106 
o|inlining procedure: k6134 
o|inlining procedure: k6134 
o|inlining procedure: k6106 
o|inlining procedure: k6166 
o|inlining procedure: k6166 
o|inlining procedure: k6206 
o|inlining procedure: k6206 
o|inlining procedure: k5982 
o|inlining procedure: k5982 
o|inlining procedure: k6274 
o|contracted procedure: "(chicken-syntax.scm:1318) g33003309" 
o|inlining procedure: k6274 
o|inlining procedure: k6437 
o|inlining procedure: k6437 
o|inlining procedure: k6475 
o|inlining procedure: k6475 
o|inlining procedure: k6502 
o|inlining procedure: k6502 
o|inlining procedure: k6571 
o|inlining procedure: k6571 
o|inlining procedure: k6607 
o|inlining procedure: k6607 
o|inlining procedure: k6634 
o|inlining procedure: k6634 
o|inlining procedure: k6810 
o|inlining procedure: k6810 
o|inlining procedure: k6838 
o|inlining procedure: k6838 
o|inlining procedure: k6882 
o|inlining procedure: k6882 
o|inlining procedure: k6961 
o|inlining procedure: k6961 
o|inlining procedure: k7059 
o|inlining procedure: k7059 
o|inlining procedure: k7156 
o|inlining procedure: k7156 
o|inlining procedure: k7250 
o|inlining procedure: k7250 
o|inlining procedure: k7364 
o|inlining procedure: k7364 
o|inlining procedure: k7413 
o|inlining procedure: k7413 
o|inlining procedure: k7460 
o|inlining procedure: k7460 
o|inlining procedure: k7531 
o|inlining procedure: k7531 
o|inlining procedure: k7600 
o|inlining procedure: k7600 
o|inlining procedure: k7680 
o|inlining procedure: k7680 
o|inlining procedure: k7695 
o|inlining procedure: k7695 
o|inlining procedure: k7741 
o|inlining procedure: k7741 
o|inlining procedure: k7764 
o|inlining procedure: k7764 
o|inlining procedure: k7858 
o|inlining procedure: k7858 
o|removed unused formal parameters: (rename2761) 
o|inlining procedure: k8157 
o|inlining procedure: k8157 
o|removed unused parameter to known procedure: rename2761 "(chicken-syntax.scm:899) make-if-tree2741" 
o|contracted procedure: "(chicken-syntax.scm:897) make-default-procs2740" 
o|inlining procedure: k8090 
o|inlining procedure: k8090 
o|inlining procedure: k8353 
o|inlining procedure: k8353 
o|inlining procedure: k8387 
o|inlining procedure: k8387 
o|inlining procedure: k8421 
o|inlining procedure: k8421 
o|inlining procedure: k8455 
o|inlining procedure: k8455 
o|inlining procedure: k8519 
o|inlining procedure: k8519 
o|inlining procedure: k8571 
o|inlining procedure: k8571 
o|inlining procedure: k8661 
o|inlining procedure: k8661 
o|inlining procedure: k8676 
o|inlining procedure: k8676 
o|inlining procedure: k8897 
o|inlining procedure: k8897 
o|inlining procedure: k8945 
o|contracted procedure: "(chicken-syntax.scm:676) g25832592" 
o|inlining procedure: k8945 
o|inlining procedure: k8979 
o|contracted procedure: "(chicken-syntax.scm:677) g25992604" 
o|inlining procedure: k8979 
o|substituted constant variable: g26002603 
o|inlining procedure: k9003 
o|inlining procedure: k9003 
o|inlining procedure: k9037 
o|inlining procedure: k9037 
o|inlining procedure: k9092 
o|inlining procedure: k9092 
o|inlining procedure: k9139 
o|inlining procedure: k9139 
o|inlining procedure: k9167 
o|inlining procedure: k9167 
o|inlining procedure: k9269 
o|inlining procedure: k9304 
o|inlining procedure: k9304 
o|inlining procedure: k9269 
o|inlining procedure: k9418 
o|contracted procedure: "(chicken-syntax.scm:634) g24752484" 
o|inlining procedure: k9418 
o|inlining procedure: k9452 
o|inlining procedure: k9452 
o|inlining procedure: k9496 
o|inlining procedure: k9496 
o|inlining procedure: k9530 
o|inlining procedure: k9530 
o|inlining procedure: k9553 
o|inlining procedure: k9553 
o|inlining procedure: k9568 
o|inlining procedure: k9568 
o|inlining procedure: k9675 
o|contracted procedure: "(chicken-syntax.scm:593) g22902308" 
o|inlining procedure: k9675 
o|inlining procedure: k9709 
o|contracted procedure: "(chicken-syntax.scm:589) g22752297" 
o|inlining procedure: k9709 
o|inlining procedure: k9830 
o|inlining procedure: k9830 
o|inlining procedure: k9851 
o|inlining procedure: k9851 
o|contracted procedure: "(chicken-syntax.scm:502) pname1716" 
o|inlining procedure: k9892 
o|inlining procedure: k9892 
o|removed unused formal parameters: (z1823) 
o|removed unused formal parameters: (z1851) 
o|inlining procedure: k10098 
o|contracted procedure: "(chicken-syntax.scm:539) g21552165" 
o|inlining procedure: k10098 
o|inlining procedure: k10146 
o|contracted procedure: "(chicken-syntax.scm:537) g21192129" 
o|inlining procedure: k10146 
o|inlining procedure: k10194 
o|contracted procedure: "(chicken-syntax.scm:534) g20772088" 
o|inlining procedure: k10194 
o|inlining procedure: k10244 
o|inlining procedure: k10244 
o|inlining procedure: k10335 
o|contracted procedure: "(chicken-syntax.scm:527) g20412051" 
o|inlining procedure: k10335 
o|inlining procedure: k10383 
o|contracted procedure: "(chicken-syntax.scm:524) g20052015" 
o|inlining procedure: k10383 
o|inlining procedure: k10431 
o|inlining procedure: k10431 
o|inlining procedure: k10481 
o|inlining procedure: k10481 
o|inlining procedure: k10501 
o|inlining procedure: k10501 
o|inlining procedure: k10549 
o|inlining procedure: k10549 
o|inlining procedure: k10597 
o|inlining procedure: k10597 
o|inlining procedure: k10645 
o|removed unused parameter to known procedure: z1851 "(chicken-syntax.scm:504) g18401849" 
o|inlining procedure: k10645 
o|inlining procedure: k10679 
o|removed unused parameter to known procedure: z1823 "(chicken-syntax.scm:503) g18121821" 
o|inlining procedure: k10679 
o|inlining procedure: k10713 
o|inlining procedure: k10713 
o|inlining procedure: k10747 
o|inlining procedure: k10747 
o|inlining procedure: k10781 
o|inlining procedure: k10781 
o|removed unused formal parameters: (x1438) 
o|removed unused formal parameters: (x1466) 
o|inlining procedure: k10936 
o|contracted procedure: "(chicken-syntax.scm:484) g16841694" 
o|inlining procedure: k10936 
o|inlining procedure: k10984 
o|contracted procedure: "(chicken-syntax.scm:482) g16481658" 
o|inlining procedure: k10984 
o|inlining procedure: k11083 
o|contracted procedure: "(chicken-syntax.scm:477) g16121622" 
o|inlining procedure: k11083 
o|inlining procedure: k11131 
o|contracted procedure: "(chicken-syntax.scm:475) g15761586" 
o|inlining procedure: k11131 
o|inlining procedure: k11214 
o|inlining procedure: k11214 
o|inlining procedure: k11264 
o|inlining procedure: k11264 
o|inlining procedure: k11284 
o|inlining procedure: k11284 
o|inlining procedure: k11332 
o|inlining procedure: k11332 
o|inlining procedure: k11366 
o|removed unused parameter to known procedure: x1466 "(chicken-syntax.scm:465) g14551464" 
o|inlining procedure: k11366 
o|inlining procedure: k11400 
o|removed unused parameter to known procedure: x1438 "(chicken-syntax.scm:464) g14271436" 
o|inlining procedure: k11400 
o|inlining procedure: k11434 
o|inlining procedure: k11434 
o|inlining procedure: k11499 
o|contracted procedure: "(chicken-syntax.scm:452) g13631372" 
o|inlining procedure: k11499 
o|inlining procedure: k11564 
o|contracted procedure: "(chicken-syntax.scm:444) g13261335" 
o|inlining procedure: k11564 
o|inlining procedure: k11629 
o|contracted procedure: "(chicken-syntax.scm:436) g12891298" 
o|inlining procedure: k11629 
o|inlining procedure: k11705 
o|inlining procedure: k11705 
o|inlining procedure: k11827 
o|inlining procedure: k11827 
o|inlining procedure: k11848 
o|inlining procedure: k11860 
o|inlining procedure: k11860 
o|inlining procedure: k11848 
o|inlining procedure: k11920 
o|inlining procedure: k11920 
o|inlining procedure: k11980 
o|inlining procedure: k11980 
o|inlining procedure: k12069 
o|inlining procedure: k12069 
o|substituted constant variable: a12104 
o|substituted constant variable: a12129 
o|inlining procedure: k12138 
o|inlining procedure: k12138 
o|inlining procedure: k12210 
o|inlining procedure: k12210 
o|inlining procedure: k12239 
o|inlining procedure: k12267 
o|inlining procedure: k12267 
o|inlining procedure: k12239 
o|inlining procedure: k12304 
o|inlining procedure: k12304 
o|inlining procedure: k12338 
o|inlining procedure: k12338 
o|inlining procedure: k12402 
o|inlining procedure: k12402 
o|inlining procedure: k12511 
o|inlining procedure: k12511 
o|inlining procedure: k12624 
o|inlining procedure: k12624 
o|inlining procedure: k12645 
o|inlining procedure: k12645 
o|inlining procedure: k12691 
o|inlining procedure: k12691 
o|inlining procedure: k12725 
o|inlining procedure: k12782 
o|contracted procedure: "(chicken-syntax.scm:198) g941951" 
o|inlining procedure: k12782 
o|inlining procedure: k12840 
o|inlining procedure: k12867 
o|contracted procedure: "(chicken-syntax.scm:190) g907916" 
o|propagated global variable: g924925 chicken.compiler.scrutinizer#check-and-validate-type 
o|inlining procedure: k12867 
o|inlining procedure: k12840 
o|inlining procedure: k12911 
o|inlining procedure: k12911 
o|inlining procedure: k12725 
o|inlining procedure: k12958 
o|inlining procedure: k12958 
o|inlining procedure: k12995 
o|inlining procedure: k12995 
o|inlining procedure: k13044 
o|inlining procedure: k13135 
o|contracted procedure: "(chicken-syntax.scm:155) g840849" 
o|inlining procedure: k13135 
o|inlining procedure: k13169 
o|contracted procedure: "(chicken-syntax.scm:155) g812821" 
o|inlining procedure: k13169 
o|inlining procedure: k13044 
o|inlining procedure: k13206 
o|inlining procedure: k13234 
o|inlining procedure: k13234 
o|inlining procedure: k13206 
o|inlining procedure: k13271 
o|inlining procedure: k13271 
o|inlining procedure: k13306 
o|inlining procedure: k13306 
o|inlining procedure: k13333 
o|inlining procedure: k13333 
o|inlining procedure: k13371 
o|inlining procedure: k13371 
o|inlining procedure: k13398 
o|inlining procedure: k13398 
o|inlining procedure: k13427 
o|inlining procedure: k13427 
o|inlining procedure: k13509 
o|inlining procedure: k13509 
o|inlining procedure: k13551 
o|inlining procedure: k13551 
o|inlining procedure: k13666 
o|inlining procedure: k13666 
o|inlining procedure: k13686 
o|inlining procedure: k13686 
o|replaced variables: 2254 
o|removed binding forms: 498 
o|substituted constant variable: r452813848 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r590513860 
o|substituted constant variable: r620713876 
o|substituted constant variable: r598313879 
o|converted assignments to bindings: (genvars3286) 
o|substituted constant variable: r660813895 
o|substituted constant variable: r663513897 
o|substituted constant variable: r683913903 
o|substituted constant variable: r741413916 
o|substituted constant variable: r760113925 
o|substituted constant variable: r768113927 
o|substituted constant variable: r809113938 
o|converted assignments to bindings: (make-if-tree2741) 
o|substituted constant variable: r867713963 
o|substituted constant variable: r916813978 
o|substituted constant variable: r983114000 
o|substituted constant variable: r1024514013 
o|substituted constant variable: r1048214021 
o|substituted constant variable: r1126514048 
o|substituted constant variable: r1186114072 
o|substituted constant variable: r1184914073 
o|substituted constant variable: r1224014091 
o|substituted constant variable: r1240314097 
o|substituted constant variable: r1251214098 
o|substituted constant variable: r1269214104 
o|substituted constant variable: r1291214115 
o|substituted constant variable: r1299614121 
o|substituted constant variable: r1320714131 
o|substituted constant variable: r1330714135 
o|substituted constant variable: r1337214138 
o|substituted constant variable: r1342814144 
o|substituted constant variable: r1342814144 
o|substituted constant variable: r1366714150 
o|substituted constant variable: r1366714150 
o|converted assignments to bindings: (parse-clause622) 
o|simplifications: ((let . 3)) 
o|replaced variables: 87 
o|removed binding forms: 1944 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:534) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:504) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:503) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:465) ##sys#slot" 
o|removed call to pure procedure with unused result: "(chicken-syntax.scm:464) ##sys#slot" 
o|removed binding forms: 120 
o|contracted procedure: k10231 
o|contracted procedure: k10670 
o|contracted procedure: k10704 
o|contracted procedure: k11391 
o|contracted procedure: k11425 
o|removed binding forms: 5 
o|removed binding forms: 5 
o|simplifications: ((if . 34) (let . 41) (##core#call . 1315)) 
o|  call simplifications:
o|    scheme#cdddr	2
o|    chicken.fixnum#fx=
o|    scheme#vector
o|    ##sys#pair?	7
o|    ##sys#eq?	7
o|    ##sys#car	13
o|    ##sys#cdr	20
o|    scheme#symbol?	7
o|    scheme#list?	2
o|    scheme#cdar
o|    scheme#caar
o|    scheme#assq	2
o|    scheme#cadddr	2
o|    scheme#cddddr
o|    scheme#not	15
o|    scheme#memq	7
o|    scheme#cadr	45
o|    scheme#string?
o|    scheme#caddr	15
o|    scheme#apply
o|    scheme#eq?	5
o|    ##sys#call-with-values	3
o|    scheme#cddr	8
o|    scheme#cdr	23
o|    ##sys#cons	144
o|    scheme#null?	34
o|    ##sys#check-list	40
o|    scheme#pair?	105
o|    scheme#list	8
o|    ##sys#setslot	53
o|    ##sys#slot	203
o|    scheme#values
o|    ##sys#list	342
o|    chicken.fixnum#fx>=
o|    chicken.fixnum#fx+	3
o|    chicken.fixnum#fx<=	2
o|    scheme#car	53
o|    chicken.fixnum#fx-	4
o|    scheme#cons	132
o|contracted procedure: k4530 
o|contracted procedure: k4537 
o|contracted procedure: k4547 
o|contracted procedure: k6306 
o|contracted procedure: k6310 
o|contracted procedure: k6314 
o|contracted procedure: k6318 
o|contracted procedure: k6322 
o|contracted procedure: k5882 
o|contracted procedure: k5907 
o|contracted procedure: k5922 
o|contracted procedure: k6243 
o|contracted procedure: k6239 
o|contracted procedure: k5968 
o|contracted procedure: k5973 
o|contracted procedure: k5964 
o|contracted procedure: k5985 
o|contracted procedure: k5994 
o|contracted procedure: k6007 
o|contracted procedure: k4588 
o|contracted procedure: k4602 
o|contracted procedure: k4612 
o|contracted procedure: k4606 
o|contracted procedure: k6036 
o|contracted procedure: k6043 
o|contracted procedure: k6046 
o|contracted procedure: k6049 
o|contracted procedure: k6097 
o|contracted procedure: k6061 
o|contracted procedure: k6087 
o|contracted procedure: k6091 
o|contracted procedure: k6083 
o|contracted procedure: k6064 
o|contracted procedure: k6067 
o|contracted procedure: k6075 
o|contracted procedure: k6079 
o|contracted procedure: k6109 
o|contracted procedure: k6131 
o|contracted procedure: k6123 
o|contracted procedure: k6127 
o|contracted procedure: k6119 
o|contracted procedure: k6152 
o|contracted procedure: k6137 
o|contracted procedure: k6146 
o|contracted procedure: k6195 
o|contracted procedure: k6199 
o|contracted procedure: k6183 
o|contracted procedure: k6191 
o|contracted procedure: k6187 
o|contracted procedure: k6162 
o|contracted procedure: k6169 
o|contracted procedure: k6209 
o|contracted procedure: k6220 
o|contracted procedure: k6227 
o|contracted procedure: k6235 
o|contracted procedure: k6247 
o|contracted procedure: k6262 
o|contracted procedure: k6265 
o|contracted procedure: k6277 
o|contracted procedure: k6280 
o|contracted procedure: k6283 
o|contracted procedure: k6291 
o|contracted procedure: k6299 
o|contracted procedure: k6256 
o|contracted procedure: k6339 
o|contracted procedure: k6371 
o|contracted procedure: k6367 
o|contracted procedure: k6347 
o|contracted procedure: k6363 
o|contracted procedure: k6355 
o|contracted procedure: k6359 
o|contracted procedure: k6351 
o|contracted procedure: k6343 
o|contracted procedure: k6447 
o|contracted procedure: k6499 
o|contracted procedure: k6495 
o|contracted procedure: k6463 
o|contracted procedure: k6491 
o|contracted procedure: k6471 
o|inlining procedure: k6467 
o|contracted procedure: k6478 
o|inlining procedure: k6467 
o|contracted procedure: k6485 
o|contracted procedure: k6596 
o|contracted procedure: k6505 
o|contracted procedure: k6511 
o|contracted procedure: k6518 
o|contracted procedure: k6550 
o|contracted procedure: k6546 
o|contracted procedure: k6528 
o|contracted procedure: k6532 
o|contracted procedure: k6540 
o|contracted procedure: k6588 
o|contracted procedure: k6556 
o|contracted procedure: k6563 
o|contracted procedure: k6567 
o|contracted procedure: k6574 
o|contracted procedure: k6581 
o|contracted procedure: k6604 
o|contracted procedure: k6610 
o|contracted procedure: k6626 
o|contracted procedure: k6616 
o|contracted procedure: k6631 
o|contracted procedure: k6657 
o|contracted procedure: k6701 
o|contracted procedure: k6717 
o|contracted procedure: k6759 
o|contracted procedure: k6733 
o|contracted procedure: k6729 
o|contracted procedure: k6725 
o|contracted procedure: k6721 
o|contracted procedure: k6713 
o|contracted procedure: k6709 
o|contracted procedure: k6705 
o|contracted procedure: k6665 
o|contracted procedure: k6697 
o|contracted procedure: k6677 
o|contracted procedure: k6693 
o|contracted procedure: k6689 
o|contracted procedure: k6685 
o|contracted procedure: k6681 
o|contracted procedure: k6673 
o|contracted procedure: k6669 
o|contracted procedure: k6661 
o|contracted procedure: k6653 
o|contracted procedure: k6649 
o|contracted procedure: k6755 
o|contracted procedure: k6751 
o|contracted procedure: k6741 
o|contracted procedure: k6745 
o|contracted procedure: k6772 
o|contracted procedure: k6845 
o|contracted procedure: k6777 
o|contracted procedure: k6829 
o|contracted procedure: k6790 
o|contracted procedure: k6798 
o|contracted procedure: k6802 
o|contracted procedure: k6794 
o|contracted procedure: k6813 
o|contracted procedure: k6821 
o|contracted procedure: k6810 
o|contracted procedure: k6832 
o|contracted procedure: k6866 
o|contracted procedure: k6879 
o|contracted procedure: k6885 
o|contracted procedure: k6908 
o|contracted procedure: k6904 
o|contracted procedure: k6898 
o|contracted procedure: k6892 
o|contracted procedure: k6924 
o|contracted procedure: k6920 
o|contracted procedure: k7122 
o|contracted procedure: k6931 
o|contracted procedure: k6964 
o|contracted procedure: k6999 
o|contracted procedure: k6995 
o|contracted procedure: k6991 
o|contracted procedure: k6983 
o|contracted procedure: k7009 
o|contracted procedure: k7028 
o|contracted procedure: k7024 
o|contracted procedure: k7020 
o|contracted procedure: k7048 
o|contracted procedure: k7052 
o|contracted procedure: k7068 
o|contracted procedure: k7096 
o|contracted procedure: k7088 
o|contracted procedure: k7092 
o|contracted procedure: k7108 
o|contracted procedure: k7118 
o|contracted procedure: k7111 
o|contracted procedure: k7298 
o|contracted procedure: k7126 
o|contracted procedure: k7159 
o|contracted procedure: k7190 
o|contracted procedure: k7186 
o|contracted procedure: k7182 
o|contracted procedure: k7200 
o|contracted procedure: k7221 
o|contracted procedure: k7215 
o|contracted procedure: k7211 
o|contracted procedure: k7239 
o|contracted procedure: k7243 
o|contracted procedure: k7259 
o|contracted procedure: k7276 
o|contracted procedure: k7284 
o|contracted procedure: k7294 
o|contracted procedure: k7287 
o|contracted procedure: k7311 
o|contracted procedure: k7320 
o|contracted procedure: k7323 
o|contracted procedure: k7326 
o|contracted procedure: k7344 
o|contracted procedure: k7353 
o|contracted procedure: k7356 
o|contracted procedure: k7367 
o|contracted procedure: k7373 
o|contracted procedure: k7735 
o|contracted procedure: k7731 
o|contracted procedure: k7387 
o|contracted procedure: k7727 
o|contracted procedure: k7657 
o|contracted procedure: k7675 
o|contracted procedure: k7683 
o|contracted procedure: k7686 
o|contracted procedure: k7671 
o|contracted procedure: k7667 
o|contracted procedure: k7661 
o|contracted procedure: k7653 
o|contracted procedure: k7395 
o|contracted procedure: k7647 
o|contracted procedure: k7631 
o|contracted procedure: k7639 
o|contracted procedure: k7643 
o|contracted procedure: k7635 
o|contracted procedure: k7627 
o|contracted procedure: k7403 
o|contracted procedure: k7399 
o|contracted procedure: k7391 
o|contracted procedure: k7383 
o|contracted procedure: k7416 
o|contracted procedure: k7419 
o|contracted procedure: k7623 
o|contracted procedure: k7422 
o|contracted procedure: k7425 
o|contracted procedure: k7574 
o|contracted procedure: k7594 
o|contracted procedure: k7590 
o|contracted procedure: k7586 
o|contracted procedure: k7578 
o|contracted procedure: k7582 
o|contracted procedure: k7431 
o|contracted procedure: k7441 
o|contracted procedure: k7466 
o|contracted procedure: k7489 
o|contracted procedure: k7477 
o|contracted procedure: k7485 
o|contracted procedure: k7481 
o|contracted procedure: k7473 
o|contracted procedure: k7497 
o|contracted procedure: k7516 
o|contracted procedure: k7512 
o|contracted procedure: k7508 
o|contracted procedure: k7504 
o|contracted procedure: k7547 
o|contracted procedure: k7527 
o|contracted procedure: k7531 
o|contracted procedure: k7554 
o|contracted procedure: k7570 
o|contracted procedure: k7566 
o|contracted procedure: k7558 
o|contracted procedure: k7562 
o|contracted procedure: k7597 
o|contracted procedure: k7603 
o|contracted procedure: k7698 
o|contracted procedure: k7701 
o|contracted procedure: k7704 
o|contracted procedure: k7712 
o|contracted procedure: k7720 
o|contracted procedure: k7744 
o|contracted procedure: k7754 
o|contracted procedure: k7758 
o|contracted procedure: k7767 
o|contracted procedure: k7789 
o|contracted procedure: k7785 
o|contracted procedure: k7770 
o|contracted procedure: k7773 
o|contracted procedure: k7781 
o|contracted procedure: k7958 
o|contracted procedure: k7962 
o|contracted procedure: k7966 
o|contracted procedure: k7810 
o|contracted procedure: k7823 
o|contracted procedure: k7826 
o|contracted procedure: k7954 
o|contracted procedure: k7848 
o|contracted procedure: k7861 
o|contracted procedure: k7868 
o|contracted procedure: k7871 
o|contracted procedure: k7877 
o|contracted procedure: k7927 
o|contracted procedure: k7931 
o|contracted procedure: k7935 
o|contracted procedure: k7923 
o|contracted procedure: k7897 
o|contracted procedure: k7909 
o|contracted procedure: k7913 
o|contracted procedure: k7917 
o|contracted procedure: k7905 
o|contracted procedure: k7901 
o|contracted procedure: k7887 
o|contracted procedure: k7950 
o|contracted procedure: k7946 
o|contracted procedure: k7942 
o|contracted procedure: k8035 
o|contracted procedure: k8039 
o|contracted procedure: k8043 
o|contracted procedure: k7970 
o|contracted procedure: k8031 
o|contracted procedure: k8027 
o|contracted procedure: k7990 
o|contracted procedure: k7998 
o|contracted procedure: k8002 
o|contracted procedure: k8016 
o|contracted procedure: k8005 
o|contracted procedure: k8009 
o|contracted procedure: k7994 
o|contracted procedure: k8487 
o|contracted procedure: k8491 
o|contracted procedure: k8495 
o|contracted procedure: k8047 
o|contracted procedure: k8060 
o|contracted procedure: k8063 
o|contracted procedure: k8160 
o|contracted procedure: k8170 
o|contracted procedure: k8177 
o|contracted procedure: k8229 
o|contracted procedure: k8181 
o|contracted procedure: k8221 
o|contracted procedure: k8205 
o|contracted procedure: k8213 
o|contracted procedure: k8209 
o|contracted procedure: k8189 
o|contracted procedure: k8185 
o|contracted procedure: k8201 
o|contracted procedure: k8246 
o|contracted procedure: k8249 
o|contracted procedure: k8268 
o|contracted procedure: k8280 
o|contracted procedure: k8286 
o|contracted procedure: k8298 
o|contracted procedure: k8331 
o|contracted procedure: k8347 
o|contracted procedure: k8343 
o|contracted procedure: k8339 
o|contracted procedure: k8335 
o|contracted procedure: k8327 
o|contracted procedure: k8093 
o|contracted procedure: k8096 
o|contracted procedure: k8117 
o|contracted procedure: k8129 
o|contracted procedure: k8121 
o|contracted procedure: k8103 
o|contracted procedure: k8145 
o|contracted procedure: k8141 
o|contracted procedure: k8356 
o|contracted procedure: k8359 
o|contracted procedure: k8362 
o|contracted procedure: k8370 
o|contracted procedure: k8378 
o|contracted procedure: k8390 
o|contracted procedure: k8412 
o|contracted procedure: k8408 
o|contracted procedure: k8393 
o|contracted procedure: k8396 
o|contracted procedure: k8404 
o|contracted procedure: k8424 
o|contracted procedure: k8427 
o|contracted procedure: k8430 
o|contracted procedure: k8438 
o|contracted procedure: k8446 
o|contracted procedure: k8458 
o|contracted procedure: k8480 
o|contracted procedure: k8476 
o|contracted procedure: k8461 
o|contracted procedure: k8464 
o|contracted procedure: k8472 
o|contracted procedure: k8508 
o|contracted procedure: k8522 
o|contracted procedure: k8529 
o|contracted procedure: k8532 
o|contracted procedure: k8637 
o|contracted procedure: k8539 
o|contracted procedure: k8564 
o|contracted procedure: k8552 
o|contracted procedure: k8556 
o|contracted procedure: k8633 
o|contracted procedure: k8574 
o|contracted procedure: k8596 
o|contracted procedure: k8584 
o|contracted procedure: k8588 
o|contracted procedure: k8629 
o|contracted procedure: k8625 
o|contracted procedure: k8613 
o|contracted procedure: k8617 
o|contracted procedure: k8652 
o|contracted procedure: k8724 
o|contracted procedure: k8655 
o|contracted procedure: k8704 
o|contracted procedure: k8667 
o|contracted procedure: k8700 
o|contracted procedure: k8696 
o|contracted procedure: k8679 
o|contracted procedure: k8707 
o|contracted procedure: k8714 
o|contracted procedure: k8737 
o|contracted procedure: k8785 
o|contracted procedure: k8741 
o|contracted procedure: k8781 
o|contracted procedure: k8761 
o|contracted procedure: k8777 
o|contracted procedure: k8769 
o|contracted procedure: k8765 
o|contracted procedure: k8807 
o|contracted procedure: k8820 
o|contracted procedure: k8825 
o|contracted procedure: k8828 
o|contracted procedure: k8834 
o|contracted procedure: k8848 
o|contracted procedure: k8868 
o|contracted procedure: k8874 
o|contracted procedure: k8844 
o|contracted procedure: k8885 
o|contracted procedure: k8888 
o|contracted procedure: k8936 
o|contracted procedure: k8900 
o|contracted procedure: k8903 
o|contracted procedure: k8906 
o|contracted procedure: k8914 
o|contracted procedure: k8918 
o|contracted procedure: k8926 
o|contracted procedure: k8930 
o|contracted procedure: k8948 
o|contracted procedure: k8970 
o|contracted procedure: k8966 
o|contracted procedure: k8951 
o|contracted procedure: k8954 
o|contracted procedure: k8962 
o|contracted procedure: k8982 
o|contracted procedure: k8989 
o|contracted procedure: k8997 
o|contracted procedure: k9006 
o|contracted procedure: k9028 
o|contracted procedure: k9024 
o|contracted procedure: k9009 
o|contracted procedure: k9012 
o|contracted procedure: k9020 
o|contracted procedure: k9040 
o|contracted procedure: k9062 
o|contracted procedure: k9058 
o|contracted procedure: k9043 
o|contracted procedure: k9046 
o|contracted procedure: k9054 
o|contracted procedure: k9078 
o|contracted procedure: k9095 
o|contracted procedure: k9102 
o|contracted procedure: k9119 
o|contracted procedure: k9109 
o|contracted procedure: k9132 
o|contracted procedure: k9162 
o|contracted procedure: k9142 
o|contracted procedure: k9152 
o|contracted procedure: k9170 
o|contracted procedure: k9200 
o|contracted procedure: k9176 
o|contracted procedure: k9196 
o|contracted procedure: k9205 
o|contracted procedure: k9208 
o|contracted procedure: k9217 
o|contracted procedure: k9233 
o|contracted procedure: k9245 
o|contracted procedure: k9255 
o|contracted procedure: k9272 
o|contracted procedure: k9283 
o|contracted procedure: k9295 
o|contracted procedure: k9279 
o|contracted procedure: k9307 
o|contracted procedure: k9310 
o|contracted procedure: k9313 
o|contracted procedure: k9321 
o|contracted procedure: k9329 
o|contracted procedure: k9365 
o|contracted procedure: k9369 
o|contracted procedure: k9361 
o|contracted procedure: k9345 
o|contracted procedure: k9353 
o|contracted procedure: k9398 
o|contracted procedure: k9376 
o|contracted procedure: k9380 
o|contracted procedure: k9390 
o|contracted procedure: k9412 
o|contracted procedure: k9401 
o|contracted procedure: k9408 
o|contracted procedure: k9421 
o|contracted procedure: k9443 
o|contracted procedure: k9439 
o|contracted procedure: k9424 
o|contracted procedure: k9427 
o|contracted procedure: k9435 
o|contracted procedure: k9455 
o|contracted procedure: k9461 
o|contracted procedure: k9490 
o|contracted procedure: k9472 
o|inlining procedure: k9464 
o|inlining procedure: k9464 
o|contracted procedure: k9499 
o|contracted procedure: k9502 
o|contracted procedure: k9505 
o|contracted procedure: k9513 
o|contracted procedure: k9521 
o|contracted procedure: k9533 
o|contracted procedure: k9536 
o|contracted procedure: k9547 
o|contracted procedure: k9556 
o|inlining procedure: k9539 
o|contracted procedure: k9571 
o|contracted procedure: k9593 
o|contracted procedure: k9589 
o|contracted procedure: k9574 
o|contracted procedure: k9577 
o|contracted procedure: k9585 
o|contracted procedure: k9621 
o|contracted procedure: k9629 
o|contracted procedure: k9633 
o|contracted procedure: k9637 
o|contracted procedure: k9655 
o|contracted procedure: k9661 
o|contracted procedure: k9678 
o|contracted procedure: k9700 
o|contracted procedure: k9696 
o|contracted procedure: k9681 
o|contracted procedure: k9684 
o|contracted procedure: k9692 
o|contracted procedure: k9712 
o|contracted procedure: k9722 
o|contracted procedure: k9726 
o|contracted procedure: k9743 
o|contracted procedure: k9747 
o|contracted procedure: k9764 
o|contracted procedure: k9768 
o|contracted procedure: k9772 
o|contracted procedure: k9792 
o|contracted procedure: k9796 
o|contracted procedure: k9813 
o|contracted procedure: k9833 
o|contracted procedure: k9839 
o|contracted procedure: k9842 
o|contracted procedure: k9854 
o|contracted procedure: k9857 
o|contracted procedure: k9860 
o|contracted procedure: k9868 
o|contracted procedure: k9876 
o|contracted procedure: k9907 
o|contracted procedure: k9915 
o|contracted procedure: k9918 
o|contracted procedure: k9924 
o|contracted procedure: k9930 
o|contracted procedure: k9895 
o|contracted procedure: k9942 
o|contracted procedure: k9948 
o|contracted procedure: k9963 
o|contracted procedure: k9982 
o|contracted procedure: k9985 
o|contracted procedure: k9996 
o|contracted procedure: k9999 
o|contracted procedure: k10002 
o|contracted procedure: k10013 
o|contracted procedure: k10495 
o|contracted procedure: k10491 
o|contracted procedure: k10024 
o|contracted procedure: k10266 
o|contracted procedure: k10279 
o|contracted procedure: k10275 
o|contracted procedure: k10282 
o|contracted procedure: k10262 
o|contracted procedure: k10258 
o|contracted procedure: k10032 
o|contracted procedure: k10254 
o|contracted procedure: k10036 
o|contracted procedure: k10052 
o|contracted procedure: k10048 
o|contracted procedure: k10044 
o|contracted procedure: k10040 
o|contracted procedure: k10028 
o|contracted procedure: k10020 
o|contracted procedure: k10009 
o|contracted procedure: k9992 
o|contracted procedure: k10072 
o|contracted procedure: k10084 
o|contracted procedure: k10137 
o|contracted procedure: k10101 
o|contracted procedure: k10127 
o|contracted procedure: k10131 
o|contracted procedure: k10123 
o|contracted procedure: k10104 
o|contracted procedure: k10107 
o|contracted procedure: k10115 
o|contracted procedure: k10119 
o|contracted procedure: k10185 
o|contracted procedure: k10149 
o|contracted procedure: k10175 
o|contracted procedure: k10179 
o|contracted procedure: k10171 
o|contracted procedure: k10152 
o|contracted procedure: k10155 
o|contracted procedure: k10163 
o|contracted procedure: k10167 
o|contracted procedure: k10227 
o|contracted procedure: k10235 
o|contracted procedure: k10061 
o|contracted procedure: k10223 
o|contracted procedure: k10200 
o|contracted procedure: k10203 
o|contracted procedure: k10211 
o|contracted procedure: k10215 
o|contracted procedure: k10219 
o|contracted procedure: k10241 
o|contracted procedure: k10247 
o|contracted procedure: k10293 
o|contracted procedure: k10313 
o|contracted procedure: k10329 
o|contracted procedure: k10325 
o|contracted procedure: k10374 
o|contracted procedure: k10338 
o|contracted procedure: k10364 
o|contracted procedure: k10368 
o|contracted procedure: k10360 
o|contracted procedure: k10341 
o|contracted procedure: k10344 
o|contracted procedure: k10352 
o|contracted procedure: k10356 
o|contracted procedure: k10422 
o|contracted procedure: k10386 
o|contracted procedure: k10412 
o|contracted procedure: k10416 
o|contracted procedure: k10302 
o|contracted procedure: k10408 
o|contracted procedure: k10389 
o|contracted procedure: k10392 
o|contracted procedure: k10400 
o|contracted procedure: k10404 
o|contracted procedure: k10437 
o|contracted procedure: k10440 
o|contracted procedure: k10448 
o|contracted procedure: k10452 
o|contracted procedure: k10456 
o|contracted procedure: k10464 
o|contracted procedure: k10468 
o|contracted procedure: k10472 
o|contracted procedure: k10478 
o|contracted procedure: k10484 
o|contracted procedure: k10540 
o|contracted procedure: k10504 
o|contracted procedure: k10530 
o|contracted procedure: k10534 
o|contracted procedure: k10526 
o|contracted procedure: k10507 
o|contracted procedure: k10510 
o|contracted procedure: k10518 
o|contracted procedure: k10522 
o|contracted procedure: k10588 
o|contracted procedure: k10552 
o|contracted procedure: k10578 
o|contracted procedure: k10582 
o|contracted procedure: k10574 
o|contracted procedure: k10555 
o|contracted procedure: k10558 
o|contracted procedure: k10566 
o|contracted procedure: k10570 
o|contracted procedure: k10636 
o|contracted procedure: k10600 
o|contracted procedure: k10626 
o|contracted procedure: k10630 
o|contracted procedure: k10622 
o|contracted procedure: k10603 
o|contracted procedure: k10606 
o|contracted procedure: k10614 
o|contracted procedure: k10618 
o|contracted procedure: k10648 
o|contracted procedure: k10651 
o|contracted procedure: k10654 
o|contracted procedure: k10662 
o|contracted procedure: k10682 
o|contracted procedure: k10685 
o|contracted procedure: k10688 
o|contracted procedure: k10696 
o|contracted procedure: k10716 
o|contracted procedure: k10719 
o|contracted procedure: k10722 
o|contracted procedure: k10730 
o|contracted procedure: k10738 
o|contracted procedure: k10750 
o|contracted procedure: k10772 
o|contracted procedure: k10768 
o|contracted procedure: k10753 
o|contracted procedure: k10756 
o|contracted procedure: k10764 
o|contracted procedure: k10784 
o|contracted procedure: k10806 
o|contracted procedure: k10802 
o|contracted procedure: k10787 
o|contracted procedure: k10790 
o|contracted procedure: k10798 
o|contracted procedure: k10822 
o|contracted procedure: k10827 
o|contracted procedure: k10830 
o|contracted procedure: k10836 
o|contracted procedure: k10851 
o|contracted procedure: k11034 
o|contracted procedure: k10878 
o|contracted procedure: k11030 
o|contracted procedure: k10882 
o|contracted procedure: k10890 
o|contracted procedure: k10886 
o|contracted procedure: k10874 
o|contracted procedure: k10898 
o|contracted procedure: k10914 
o|contracted procedure: k10930 
o|contracted procedure: k10926 
o|contracted procedure: k10975 
o|contracted procedure: k10939 
o|contracted procedure: k10965 
o|contracted procedure: k10969 
o|contracted procedure: k10961 
o|contracted procedure: k10942 
o|contracted procedure: k10945 
o|contracted procedure: k10953 
o|contracted procedure: k10957 
o|contracted procedure: k11023 
o|contracted procedure: k10987 
o|contracted procedure: k11013 
o|contracted procedure: k11017 
o|contracted procedure: k11009 
o|contracted procedure: k10990 
o|contracted procedure: k10993 
o|contracted procedure: k11001 
o|contracted procedure: k11005 
o|contracted procedure: k11042 
o|contracted procedure: k11050 
o|contracted procedure: k11061 
o|contracted procedure: k11077 
o|contracted procedure: k11073 
o|contracted procedure: k11122 
o|contracted procedure: k11086 
o|contracted procedure: k11112 
o|contracted procedure: k11116 
o|contracted procedure: k11108 
o|contracted procedure: k11089 
o|contracted procedure: k11092 
o|contracted procedure: k11100 
o|contracted procedure: k11104 
o|contracted procedure: k11170 
o|contracted procedure: k11134 
o|contracted procedure: k11160 
o|contracted procedure: k11164 
o|contracted procedure: k11156 
o|contracted procedure: k11137 
o|contracted procedure: k11140 
o|contracted procedure: k11148 
o|contracted procedure: k11152 
o|contracted procedure: k11177 
o|contracted procedure: k11180 
o|contracted procedure: k11186 
o|contracted procedure: k11189 
o|contracted procedure: k11196 
o|contracted procedure: k11202 
o|contracted procedure: k11205 
o|contracted procedure: k11253 
o|contracted procedure: k11217 
o|contracted procedure: k11243 
o|contracted procedure: k11247 
o|contracted procedure: k11239 
o|contracted procedure: k11220 
o|contracted procedure: k11223 
o|contracted procedure: k11231 
o|contracted procedure: k11235 
o|contracted procedure: k11267 
o|contracted procedure: k11278 
o|contracted procedure: k11323 
o|contracted procedure: k11287 
o|contracted procedure: k11313 
o|contracted procedure: k11317 
o|contracted procedure: k11309 
o|contracted procedure: k11290 
o|contracted procedure: k11293 
o|contracted procedure: k11301 
o|contracted procedure: k11305 
o|contracted procedure: k11335 
o|contracted procedure: k11357 
o|contracted procedure: k11353 
o|contracted procedure: k11338 
o|contracted procedure: k11341 
o|contracted procedure: k11349 
o|contracted procedure: k11369 
o|contracted procedure: k11372 
o|contracted procedure: k11375 
o|contracted procedure: k11383 
o|contracted procedure: k11403 
o|contracted procedure: k11406 
o|contracted procedure: k11409 
o|contracted procedure: k11417 
o|contracted procedure: k11437 
o|contracted procedure: k11459 
o|contracted procedure: k11455 
o|contracted procedure: k11440 
o|contracted procedure: k11443 
o|contracted procedure: k11451 
o|contracted procedure: k11479 
o|contracted procedure: k11487 
o|contracted procedure: k11490 
o|contracted procedure: k11502 
o|contracted procedure: k11524 
o|contracted procedure: k11520 
o|contracted procedure: k11505 
o|contracted procedure: k11508 
o|contracted procedure: k11516 
o|contracted procedure: k11544 
o|contracted procedure: k11552 
o|contracted procedure: k11555 
o|contracted procedure: k11567 
o|contracted procedure: k11589 
o|contracted procedure: k11585 
o|contracted procedure: k11570 
o|contracted procedure: k11573 
o|contracted procedure: k11581 
o|contracted procedure: k11609 
o|contracted procedure: k11617 
o|contracted procedure: k11620 
o|contracted procedure: k11632 
o|contracted procedure: k11654 
o|contracted procedure: k11650 
o|contracted procedure: k11635 
o|contracted procedure: k11638 
o|contracted procedure: k11646 
o|contracted procedure: k11678 
o|contracted procedure: k11674 
o|contracted procedure: k11692 
o|contracted procedure: k11785 
o|contracted procedure: k11708 
o|contracted procedure: k11719 
o|contracted procedure: k11715 
o|contracted procedure: k11727 
o|contracted procedure: k11730 
o|contracted procedure: k11776 
o|contracted procedure: k11739 
o|contracted procedure: k11758 
o|contracted procedure: k11754 
o|contracted procedure: k11750 
o|contracted procedure: k11746 
o|contracted procedure: k11765 
o|contracted procedure: k11773 
o|contracted procedure: k11769 
o|contracted procedure: k11798 
o|contracted procedure: k11810 
o|contracted procedure: k11822 
o|contracted procedure: k11830 
o|contracted procedure: k11845 
o|contracted procedure: k11857 
o|contracted procedure: k11873 
o|contracted procedure: k11863 
o|inlining procedure: k11836 
o|inlining procedure: k11836 
o|inlining procedure: k11836 
o|contracted procedure: k11880 
o|contracted procedure: k12132 
o|contracted procedure: k11894 
o|contracted procedure: k12122 
o|contracted procedure: k12118 
o|contracted procedure: k12114 
o|contracted procedure: k12110 
o|contracted procedure: k11902 
o|contracted procedure: k12088 
o|contracted procedure: k12096 
o|contracted procedure: k12092 
o|contracted procedure: k12084 
o|contracted procedure: k11910 
o|contracted procedure: k11906 
o|contracted procedure: k11898 
o|contracted procedure: k11890 
o|contracted procedure: k11923 
o|contracted procedure: k11926 
o|contracted procedure: k12076 
o|contracted procedure: k11929 
o|contracted procedure: k12041 
o|contracted procedure: k12057 
o|contracted procedure: k12053 
o|contracted procedure: k12045 
o|contracted procedure: k12049 
o|contracted procedure: k11941 
o|contracted procedure: k11948 
o|contracted procedure: k11956 
o|contracted procedure: k11960 
o|contracted procedure: k11976 
o|contracted procedure: k11972 
o|contracted procedure: k11991 
o|contracted procedure: k12007 
o|contracted procedure: k12003 
o|contracted procedure: k11995 
o|contracted procedure: k11999 
o|contracted procedure: k11987 
o|contracted procedure: k12014 
o|contracted procedure: k12030 
o|contracted procedure: k12026 
o|contracted procedure: k12018 
o|contracted procedure: k12022 
o|contracted procedure: k12037 
o|contracted procedure: k12069 
o|contracted procedure: k12141 
o|contracted procedure: k12144 
o|contracted procedure: k12147 
o|contracted procedure: k12155 
o|contracted procedure: k12163 
o|contracted procedure: k12197 
o|contracted procedure: k12207 
o|contracted procedure: k12216 
o|contracted procedure: k12219 
o|contracted procedure: k12230 
o|contracted procedure: k12236 
o|contracted procedure: k12261 
o|contracted procedure: k12280 
o|contracted procedure: k12288 
o|contracted procedure: k12298 
o|contracted procedure: k12317 
o|contracted procedure: k12325 
o|contracted procedure: k12335 
o|contracted procedure: k12344 
o|contracted procedure: k12359 
o|contracted procedure: k12355 
o|contracted procedure: k12368 
o|contracted procedure: k12390 
o|contracted procedure: k12371 
o|contracted procedure: k12386 
o|contracted procedure: k12382 
o|contracted procedure: k12396 
o|contracted procedure: k12399 
o|contracted procedure: k12405 
o|contracted procedure: k12412 
o|contracted procedure: k12415 
o|contracted procedure: k12422 
o|contracted procedure: k12451 
o|contracted procedure: k12443 
o|contracted procedure: k12471 
o|contracted procedure: k12481 
o|contracted procedure: k12477 
o|contracted procedure: k12498 
o|contracted procedure: k12558 
o|contracted procedure: k12514 
o|contracted procedure: k12534 
o|contracted procedure: k12538 
o|contracted procedure: k12542 
o|contracted procedure: k12530 
o|contracted procedure: k12550 
o|contracted procedure: k12554 
o|contracted procedure: k12571 
o|contracted procedure: k12681 
o|contracted procedure: k12677 
o|contracted procedure: k12584 
o|contracted procedure: k12600 
o|contracted procedure: k12616 
o|contracted procedure: k12621 
o|contracted procedure: k12631 
o|contracted procedure: k12636 
o|contracted procedure: k12596 
o|contracted procedure: k12592 
o|contracted procedure: k12588 
o|contracted procedure: k12648 
o|contracted procedure: k12651 
o|contracted procedure: k12654 
o|contracted procedure: k12662 
o|contracted procedure: k12670 
o|contracted procedure: k13031 
o|contracted procedure: k12694 
o|contracted procedure: k12700 
o|contracted procedure: k12703 
o|contracted procedure: k12716 
o|contracted procedure: k12728 
o|contracted procedure: k12737 
o|contracted procedure: k12836 
o|contracted procedure: k12744 
o|contracted procedure: k12828 
o|contracted procedure: k12832 
o|contracted procedure: k12748 
o|contracted procedure: k12756 
o|contracted procedure: k12764 
o|contracted procedure: k12760 
o|contracted procedure: k12752 
o|contracted procedure: k12821 
o|contracted procedure: k12785 
o|contracted procedure: k12811 
o|contracted procedure: k12815 
o|contracted procedure: k12773 
o|contracted procedure: k12807 
o|contracted procedure: k12788 
o|contracted procedure: k12791 
o|contracted procedure: k12799 
o|contracted procedure: k12803 
o|contracted procedure: k12843 
o|contracted procedure: k12850 
o|contracted procedure: k12858 
o|contracted procedure: k12870 
o|contracted procedure: k12873 
o|contracted procedure: k12876 
o|contracted procedure: k12884 
o|contracted procedure: k12892 
o|contracted procedure: k12914 
o|contracted procedure: k12921 
o|contracted procedure: k12929 
o|contracted procedure: k12933 
o|contracted procedure: k12936 
o|contracted procedure: k12942 
o|contracted procedure: k12951 
o|contracted procedure: k12955 
o|contracted procedure: k12986 
o|contracted procedure: k12970 
o|contracted procedure: k12974 
o|contracted procedure: k12982 
o|contracted procedure: k12992 
o|contracted procedure: k12998 
o|contracted procedure: k13005 
o|contracted procedure: k13027 
o|contracted procedure: k13016 
o|contracted procedure: k13041 
o|contracted procedure: k13050 
o|contracted procedure: k13058 
o|contracted procedure: k13061 
o|contracted procedure: k13067 
o|contracted procedure: k13079 
o|contracted procedure: k13082 
o|contracted procedure: k13088 
o|contracted procedure: k13099 
o|contracted procedure: k13129 
o|contracted procedure: k13125 
o|contracted procedure: k13117 
o|contracted procedure: k13113 
o|contracted procedure: k13138 
o|contracted procedure: k13160 
o|contracted procedure: k13076 
o|contracted procedure: k13156 
o|contracted procedure: k13141 
o|contracted procedure: k13144 
o|contracted procedure: k13152 
o|contracted procedure: k13172 
o|contracted procedure: k13194 
o|contracted procedure: k13190 
o|contracted procedure: k13175 
o|contracted procedure: k13178 
o|contracted procedure: k13186 
o|contracted procedure: k13203 
o|contracted procedure: k13228 
o|contracted procedure: k13247 
o|contracted procedure: k13255 
o|contracted procedure: k13265 
o|contracted procedure: k13283 
o|contracted procedure: k13293 
o|contracted procedure: k13300 
o|contracted procedure: k13303 
o|contracted procedure: k13309 
o|contracted procedure: k13316 
o|contracted procedure: k13320 
o|contracted procedure: k13358 
o|contracted procedure: k13336 
o|contracted procedure: k13350 
o|contracted procedure: k13354 
o|contracted procedure: k13465 
o|contracted procedure: k13374 
o|contracted procedure: k13401 
o|contracted procedure: k13457 
o|contracted procedure: k13453 
o|contracted procedure: k13449 
o|contracted procedure: k13415 
o|contracted procedure: k13411 
o|contracted procedure: k13438 
o|contracted procedure: k13434 
o|contracted procedure: k13427 
o|contracted procedure: k13445 
o|contracted procedure: k13461 
o|contracted procedure: k13738 
o|contracted procedure: k13469 
o|contracted procedure: k13619 
o|contracted procedure: k13614 
o|contracted procedure: k13500 
o|contracted procedure: k13503 
o|contracted procedure: k13512 
o|contracted procedure: k13530 
o|contracted procedure: k13539 
o|contracted procedure: k13542 
o|contracted procedure: k13526 
o|contracted procedure: k13522 
o|contracted procedure: k13554 
o|contracted procedure: k13557 
o|contracted procedure: k13560 
o|contracted procedure: k13568 
o|contracted procedure: k13576 
o|contracted procedure: k13598 
o|contracted procedure: k13590 
o|contracted procedure: k13594 
o|contracted procedure: k13586 
o|contracted procedure: k13605 
o|contracted procedure: k13734 
o|contracted procedure: k13726 
o|contracted procedure: k13730 
o|contracted procedure: k13722 
o|contracted procedure: k13718 
o|contracted procedure: k13638 
o|contracted procedure: k13642 
o|contracted procedure: k13645 
o|contracted procedure: k13648 
o|contracted procedure: k13654 
o|contracted procedure: k13630 
o|contracted procedure: k13634 
o|contracted procedure: k13669 
o|contracted procedure: k13680 
o|contracted procedure: k13676 
o|contracted procedure: k13666 
o|contracted procedure: k13689 
o|contracted procedure: k13692 
o|contracted procedure: k13695 
o|contracted procedure: k13703 
o|contracted procedure: k13711 
o|contracted procedure: k13845 
o|contracted procedure: k13742 
o|contracted procedure: k13777 
o|contracted procedure: k13841 
o|contracted procedure: k13825 
o|contracted procedure: k13837 
o|contracted procedure: k13833 
o|contracted procedure: k13829 
o|contracted procedure: k13785 
o|contracted procedure: k13817 
o|contracted procedure: k13797 
o|contracted procedure: k13813 
o|contracted procedure: k13809 
o|contracted procedure: k13805 
o|contracted procedure: k13801 
o|contracted procedure: k13793 
o|contracted procedure: k13789 
o|contracted procedure: k13781 
o|contracted procedure: k13773 
o|contracted procedure: k13765 
o|simplifications: ((if . 5) (let . 245)) 
o|removed binding forms: 1121 
o|contracted procedure: k9338 
o|substituted constant variable: r1183715293 
o|substituted constant variable: r1183715294 
o|inlining procedure: k11980 
o|inlining procedure: k11980 
o|contracted procedure: k12341 
o|inlining procedure: k12612 
o|inlining procedure: k12612 
o|simplifications: ((let . 1)) 
o|removed binding forms: 4 
o|removed conditional forms: 2 
o|substituted constant variable: r1261315469 
o|replaced variables: 1 
o|removed binding forms: 3 
o|removed binding forms: 2 
o|direct leaf routine/allocation: g30223031 0 
o|direct leaf routine/allocation: g19631974 30 
o|direct leaf routine/allocation: g648657 15 
o|contracted procedure: "(chicken-syntax.scm:1024) k7716" 
o|contracted procedure: "(chicken-syntax.scm:520) k10460" 
o|contracted procedure: "(chicken-syntax.scm:96) k13572" 
o|removed binding forms: 3 
o|customizable procedures: (parse-clause622 map-loop673690 k13506 map-loop642663 k13423 k13286 loop759780 loop759795 map-loop806824 map-loop834852 k12961 loop877 loop2891 map-loop901926 k12840 map-loop935959 g9951004 map-loop9891011 k12365 loop11101131 loop11101141 g11841193 map-loop11781204 k11968 mapslots1214 k11836 map-loop12831304 map-loop13201341 map-loop13571378 map-loop13941411 g14271436 map-loop14211439 g14551464 map-loop14491467 map-loop15001517 map-loop14791524 loop1555 map-loop15361558 map-loop15701594 map-loop16061630 map-loop16421666 map-loop16781702 map-loop17241741 map-loop17511768 g17841793 map-loop17781796 g18121821 map-loop18061824 g18401849 map-loop18341852 map-loop18641883 map-loop18951914 map-loop19261945 k10434 map-loop19571984 map-loop19992023 map-loop20352059 k10197 map-loop20712098 map-loop21132137 map-loop21492173 g21992208 map-loop21932238 for-each-loop22742301 map-loop22842314 map-loop23452362 loop2370 g23892398 map-loop23832401 loop2411 map-loop24692487 fold2421 g24402449 map-loop24342452 fold2503 map-loop25222539 map-loop25482565 foldl26012611 map-loop25772616 map-loop26252644 k8658 k8670 fold2703 map-loop27772794 g28132822 map-loop28072825 map-loop28352852 g28702879 map-loop28642882 recur2747 make-if-tree2741 prefix-sym2801 recur2762 loop2930 map-loop29692986 g29963006 for-each-loop29953009 map-loop30163034 k7428 k7434 k7523 k7449 loop3041 loop3086 loop3116 k6783 k6806 k6440 guard-aux3201 map-loop32943315 genvars3286 foldr33373340 g33423343 k6010 build3362 map-loop33853404 loop147 loop3288 take) 
o|shared closure containers: 40 
o|shared closure users: 120 
o|calls to known targets: 258 
o|identified direct recursive calls: f_4525 1 
o|identified direct recursive calls: f_4583 1 
o|identified direct recursive calls: f_6056 1 
o|identified direct recursive calls: f_5980 1 
o|identified direct recursive calls: f_7693 1 
o|identified direct recursive calls: f_7762 1 
o|identified direct recursive calls: f_8385 1 
o|identified direct recursive calls: f_8453 1 
o|identified direct recursive calls: f_8943 1 
o|identified direct recursive calls: f_9001 1 
o|identified direct recursive calls: f_9035 1 
o|identified direct recursive calls: f_9090 1 
o|identified direct recursive calls: f_9267 2 
o|identified direct recursive calls: f_9416 1 
o|identified direct recursive calls: f_9528 1 
o|identified direct recursive calls: f_9566 1 
o|identified direct recursive calls: f_9673 1 
o|identified direct recursive calls: f_10096 1 
o|identified direct recursive calls: f_10144 1 
o|identified direct recursive calls: f_10333 1 
o|identified direct recursive calls: f_10381 1 
o|identified direct recursive calls: f_10499 1 
o|identified direct recursive calls: f_10547 1 
o|identified direct recursive calls: f_10595 1 
o|identified direct recursive calls: f_10745 1 
o|identified direct recursive calls: f_10779 1 
o|identified direct recursive calls: f_10934 1 
o|identified direct recursive calls: f_10982 1 
o|identified direct recursive calls: f_11081 1 
o|identified direct recursive calls: f_11129 1 
o|identified direct recursive calls: f_11212 1 
o|identified direct recursive calls: f_11262 1 
o|identified direct recursive calls: f_11282 1 
o|identified direct recursive calls: f_11330 1 
o|identified direct recursive calls: f_11432 1 
o|identified direct recursive calls: f_11497 1 
o|identified direct recursive calls: f_11562 1 
o|identified direct recursive calls: f_11627 1 
o|identified direct recursive calls: f_12780 1 
o|identified direct recursive calls: f_12909 1 
o|identified direct recursive calls: f_12723 1 
o|identified direct recursive calls: f_13133 1 
o|identified direct recursive calls: f_13167 1 
o|identified direct recursive calls: f_13549 1 
o|fast box initializations: 82 
o|fast global references: 2 
o|fast global assignments: 1 
o|dropping unused closure argument: f_4525 
o|dropping unused closure argument: f_8255 
*/
/* end of file */
