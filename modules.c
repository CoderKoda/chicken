/* Generated from modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file modules.c
   unit: modules
   uses: chicken-syntax extras data-structures expand internal library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_extern void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[322];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,19),40,100,101,108,101,116,101,32,120,32,108,115,116,32,116,101,115,116,41,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,6),40,103,51,54,52,41,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,10),40,103,51,53,52,32,120,32,114,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,15),40,102,111,108,100,114,51,52,57,32,103,51,53,48,41,0};
static C_char li5[] C_aligned={C_lihdr(0,0,21),40,102,105,108,116,101,114,45,109,97,112,32,112,114,101,100,32,108,115,116,41,0,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,55,55,54,32,103,55,56,56,41,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,11),40,109,97,112,45,115,101,32,115,101,41,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,199),40,37,109,97,107,101,45,109,111,100,117,108,101,32,108,105,98,114,97,114,121,32,101,120,112,111,114,116,45,108,105,115,116,32,100,101,102,105,110,101,100,45,108,105,115,116,32,101,120,105,115,116,45,108,105,115,116,32,100,101,102,105,110,101,100,45,115,121,110,116,97,120,45,108,105,115,116,32,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,105,109,112,111,114,116,45,102,111,114,109,115,32,109,101,116,97,45,105,109,112,111,114,116,45,102,111,114,109,115,32,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,115,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,105,101,120,112,111,114,116,115,32,115,97,118,101,100,45,101,110,118,105,114,111,110,109,101,110,116,115,32,114,101,110,97,109,101,45,108,105,115,116,41,0};
static C_char li9[] C_aligned={C_lihdr(0,0,15),40,109,111,100,117,108,101,45,110,97,109,101,32,120,41,0};
static C_char li10[] C_aligned={C_lihdr(0,0,16),40,109,111,100,117,108,101,45,108,105,98,114,97,114,121,41};
static C_char li11[] C_aligned={C_lihdr(0,0,20),40,109,111,100,117,108,101,45,101,120,112,111,114,116,45,108,105,115,116,41,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,109,111,100,117,108,101,45,101,120,112,111,114,116,45,108,105,115,116,33,32,120,32,121,41,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,108,105,115,116,41,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,32,121,41,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,19),40,109,111,100,117,108,101,45,101,120,105,115,116,45,108,105,115,116,41,0,0,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,28),40,115,101,116,45,109,111,100,117,108,101,45,101,120,105,115,116,45,108,105,115,116,33,32,120,32,121,41,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,28),40,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,115,121,110,116,97,120,45,108,105,115,116,41,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,37),40,115,101,116,45,109,111,100,117,108,101,45,100,101,102,105,110,101,100,45,115,121,110,116,97,120,45,108,105,115,116,33,32,120,32,121,41,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,25),40,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,32,120,41,0,0,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,32),40,115,101,116,45,109,111,100,117,108,101,45,117,110,100,101,102,105,110,101,100,45,108,105,115,116,33,32,120,32,121,41};
static C_char li21[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,105,109,112,111,114,116,45,102,111,114,109,115,41,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,109,111,100,117,108,101,45,105,109,112,111,114,116,45,102,111,114,109,115,33,32,120,32,121,41,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,26),40,109,111,100,117,108,101,45,109,101,116,97,45,105,109,112,111,114,116,45,102,111,114,109,115,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,109,111,100,117,108,101,45,109,101,116,97,45,105,109,112,111,114,116,45,102,111,114,109,115,33,32,120,32,121,41,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,25),40,109,111,100,117,108,101,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,115,41,0,0,0,0,0,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,34),40,115,101,116,45,109,111,100,117,108,101,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,17),40,109,111,100,117,108,101,45,118,101,120,112,111,114,116,115,41,0,0,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,109,111,100,117,108,101,45,118,101,120,112,111,114,116,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,17),40,109,111,100,117,108,101,45,115,101,120,112,111,114,116,115,41,0,0,0,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,109,111,100,117,108,101,45,115,101,120,112,111,114,116,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,17),40,109,111,100,117,108,101,45,105,101,120,112,111,114,116,115,41,0,0,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,109,111,100,117,108,101,45,105,101,120,112,111,114,116,115,33,32,120,32,121,41,0,0,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,27),40,109,111,100,117,108,101,45,115,97,118,101,100,45,101,110,118,105,114,111,110,109,101,110,116,115,41,0,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,109,111,100,117,108,101,45,115,97,118,101,100,45,101,110,118,105,114,111,110,109,101,110,116,115,33,32,120,32,121,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,20),40,109,111,100,117,108,101,45,114,101,110,97,109,101,45,108,105,115,116,41,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,109,111,100,117,108,101,45,114,101,110,97,109,101,45,108,105,115,116,33,32,120,32,121,41,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,109,111,100,117,108,101,45,101,120,112,111,114,116,115,32,109,41};
static C_char li38[] C_aligned={C_lihdr(0,0,57),40,109,97,107,101,45,109,111,100,117,108,101,32,108,105,98,32,101,120,112,108,105,115,116,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,105,101,120,112,111,114,116,115,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,45,97,108,105,97,115,32,97,108,105,97,115,32,110,97,109,101,41};
static C_char li40[] C_aligned={C_lihdr(0,0,7),40,97,53,55,50,49,41,0};
static C_char li41[] C_aligned={C_lihdr(0,0,7),40,97,53,55,51,56,41,0};
static C_char li42[] C_aligned={C_lihdr(0,0,7),40,97,53,55,52,52,41,0};
static C_char li43[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,48,50,49,32,103,49,48,51,51,41,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,119,105,116,104,45,109,111,100,117,108,101,45,97,108,105,97,115,101,115,32,98,105,110,100,105,110,103,115,32,116,104,117,110,107,41,0,0,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,9),40,103,49,48,54,53,32,97,41,0,0,0,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,110,32,100,111,110,101,41,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,115,111,108,118,101,45,109,111,100,117,108,101,45,110,97,109,101,32,110,97,109,101,32,108,111,99,41,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,110,100,45,109,111,100,117,108,101,32,110,97,109,101,32,46,32,114,101,115,116,41,0};
static C_char li49[] C_aligned={C_lihdr(0,0,9),40,103,49,49,48,51,32,109,41,0,0,0,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,25),40,35,35,115,121,115,35,115,119,105,116,99,104,45,109,111,100,117,108,101,32,109,111,100,41,0,0,0,0,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,7),40,103,49,49,51,54,41,0};
static C_char li52[] C_aligned={C_lihdr(0,0,7),40,103,49,49,50,48,41,0};
static C_char li53[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,49,49,57,32,103,49,49,50,54,41,0,0,0,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,45,108,105,115,116,32,109,111,100,32,101,120,112,115,41,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,49,53,50,32,103,49,49,54,52,41,0,0,0,0};
static C_char li56[] C_aligned={C_lihdr(0,0,45),40,35,35,115,121,115,35,97,100,100,45,116,111,45,101,120,112,111,114,116,47,114,101,110,97,109,101,45,108,105,115,116,32,109,111,100,32,114,101,110,97,109,101,115,41,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,116,111,112,108,101,118,101,108,45,100,101,102,105,110,105,116,105,111,110,45,104,111,111,107,32,115,121,109,32,114,101,110,97,109,101,100,32,101,120,112,111,114,116,101,100,63,41,0,0};
static C_char li58[] C_aligned={C_lihdr(0,0,36),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,101,116,97,45,101,120,112,114,101,115,115,105,111,110,32,101,120,112,41,0,0,0,0};
static C_char li59[] C_aligned={C_lihdr(0,0,30),40,99,104,101,99,107,45,102,111,114,45,114,101,100,101,102,32,115,121,109,32,101,110,118,32,115,101,110,118,41,0,0};
static C_char li60[] C_aligned={C_lihdr(0,0,15),40,102,105,110,100,45,100,117,109,109,121,32,120,108,41,0};
static C_char li61[] C_aligned={C_lihdr(0,0,7),40,103,49,50,49,55,41,0};
static C_char li62[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41,0};
static C_char li63[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,118,97,108,41,0,0,0,0,0,0};
static C_char li64[] C_aligned={C_lihdr(0,0,11),40,97,54,52,50,50,32,120,32,121,41,0,0,0,0,0};
static C_char li65[] C_aligned={C_lihdr(0,0,40),40,35,35,115,121,115,35,117,110,114,101,103,105,115,116,101,114,45,115,121,110,116,97,120,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,41};
static C_char li66[] C_aligned={C_lihdr(0,0,47),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,101,120,112,108,105,115,116,32,46,32,114,101,115,116,41,0};
static C_char li67[] C_aligned={C_lihdr(0,0,9),40,103,49,51,53,52,32,101,41,0,0,0,0,0,0,0};
static C_char li68[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,51,53,51,32,103,49,51,54,48,41,0,0,0,0,0,0,0};
static C_char li69[] C_aligned={C_lihdr(0,0,11),40,108,112,32,115,101,32,115,101,50,41,0,0,0,0,0};
static C_char li70[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,101,115,32,108,97,115,116,45,115,101,32,115,101,50,41,0,0};
static C_char li71[] C_aligned={C_lihdr(0,0,15),40,109,101,114,103,101,45,115,101,32,115,101,115,42,41,0};
static C_char li72[] C_aligned={C_lihdr(0,0,15),40,103,49,52,56,54,32,115,101,120,112,111,114,116,41,0};
static C_char li73[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,51,51,32,103,49,53,52,53,41,0,0,0,0};
static C_char li74[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,115,100,41,0,0,0,0,0,0,0};
static C_char li75[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,56,48,32,103,49,52,57,50,41,0,0,0,0};
static C_char li76[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,52,52,55,32,103,49,52,53,57,41,0,0,0,0};
static C_char li77[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,51,56,57,32,103,49,52,48,49,41,0,0,0,0};
static C_char li78[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li79[] C_aligned={C_lihdr(0,0,7),40,97,54,57,56,48,41,0};
static C_char li80[] C_aligned={C_lihdr(0,0,13),40,97,54,57,56,54,32,46,32,116,109,112,41,0,0,0};
static C_char li81[] C_aligned={C_lihdr(0,0,9),40,97,54,57,55,52,32,120,41,0,0,0,0,0,0,0};
static C_char li82[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,45,114,101,103,105,115,116,114,97,116,105,111,110,32,109,111,100,32,99,111,109,112,105,108,101,45,109,111,100,101,41,0,0,0};
static C_char li83[] C_aligned={C_lihdr(0,0,12),40,103,49,54,50,56,32,115,101,120,112,41,0,0,0,0};
static C_char li84[] C_aligned={C_lihdr(0,0,12),40,103,49,54,51,56,32,110,101,120,112,41,0,0,0,0};
static C_char li85[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,51,55,32,103,49,54,52,52,41,0,0,0,0,0,0,0};
static C_char li86[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,54,50,55,32,103,49,54,51,52,41,0,0,0,0,0,0,0};
static C_char li87[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,53,57,53,32,103,49,54,48,55,41,0,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,10),40,97,55,55,54,53,32,115,101,41,0,0,0,0,0,0};
static C_char li89[] C_aligned={C_lihdr(0,0,10),40,97,55,55,55,55,32,115,101,41,0,0,0,0,0,0};
static C_char li90[] C_aligned={C_lihdr(0,0,75),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,109,112,105,108,101,100,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,105,101,120,112,111,114,116,115,32,118,101,120,112,111,114,116,115,32,115,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li91[] C_aligned={C_lihdr(0,0,10),40,103,49,54,57,54,32,115,101,41,0,0,0,0,0,0};
static C_char li92[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,54,57,48,32,103,49,55,48,50,41,0,0,0,0};
static C_char li93[] C_aligned={C_lihdr(0,0,53),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,99,111,114,101,45,109,111,100,117,108,101,32,110,97,109,101,32,108,105,98,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0,0};
static C_char li94[] C_aligned={C_lihdr(0,0,54),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,112,114,105,109,105,116,105,118,101,45,109,111,100,117,108,101,32,110,97,109,101,32,118,101,120,112,111,114,116,115,32,46,32,114,101,115,116,41,0,0};
static C_char li95[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li96[] C_aligned={C_lihdr(0,0,30),40,102,105,110,100,45,101,120,112,111,114,116,32,115,121,109,32,109,111,100,32,105,110,100,105,114,101,99,116,41,0,0};
static C_char li97[] C_aligned={C_lihdr(0,0,12),40,102,95,57,48,53,50,32,46,32,95,41,0,0,0,0};
static C_char li98[] C_aligned={C_lihdr(0,0,12),40,108,110,45,62,110,117,109,32,108,110,41,0,0,0,0};
static C_char li99[] C_aligned={C_lihdr(0,0,10),40,103,49,56,55,53,32,108,110,41,0,0,0,0,0,0};
static C_char li100[] C_aligned={C_lihdr(0,0,11),40,103,49,56,52,56,32,108,111,99,41,0,0,0,0,0};
static C_char li101[] C_aligned={C_lihdr(0,0,9),40,103,49,57,53,56,32,97,41,0,0,0,0,0,0,0};
static C_char li102[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,57,53,55,32,103,49,57,54,52,41,0,0,0,0,0,0,0};
static C_char li103[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,56,52,55,32,103,49,56,53,52,41,0,0,0,0,0,0,0};
static C_char li104[] C_aligned={C_lihdr(0,0,15),40,103,49,55,56,48,32,105,100,46,108,111,99,115,41,0};
static C_char li105[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,49,55,55,57,32,103,49,55,56,54,41,0,0,0,0,0,0,0};
static C_char li106[] C_aligned={C_lihdr(0,0,9),40,108,112,32,108,111,99,115,41,0,0,0,0,0,0,0};
static C_char li107[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,49,56,49,53,32,103,49,56,50,55,41,0,0,0,0};
static C_char li108[] C_aligned={C_lihdr(0,0,40),40,114,101,112,111,114,116,45,117,110,114,101,115,111,108,118,101,100,45,105,100,101,110,116,105,102,105,101,114,115,32,117,110,107,110,111,119,110,115,41};
static C_char li109[] C_aligned={C_lihdr(0,0,7),40,103,50,48,53,48,41,0};
static C_char li110[] C_aligned={C_lihdr(0,0,9),40,103,50,49,48,53,32,109,41,0,0,0,0,0,0,0};
static C_char li111[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,49,48,52,32,103,50,49,49,49,41,0,0,0,0,0,0,0};
static C_char li112[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,48,54,57,32,103,50,48,56,49,41,0,0,0,0};
static C_char li113[] C_aligned={C_lihdr(0,0,13),40,119,97,114,110,32,109,115,103,32,105,100,41,0,0,0};
static C_char li114[] C_aligned={C_lihdr(0,0,9),40,103,49,51,49,55,32,97,41,0,0,0,0,0,0,0};
static C_char li115[] C_aligned={C_lihdr(0,0,9),40,103,49,51,50,52,32,97,41,0,0,0,0,0,0,0};
static C_char li116[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,50,32,105,101,120,112,111,114,116,115,41};
static C_char li117[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,101,120,112,111,114,116,115,41,0,0};
static C_char li118[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,48,52,57,32,103,50,48,53,54,41,0,0,0,0,0,0,0};
static C_char li119[] C_aligned={C_lihdr(0,0,10),40,102,97,105,108,32,109,115,103,41,0,0,0,0,0,0};
static C_char li120[] C_aligned={C_lihdr(0,0,11),40,105,100,45,115,116,114,105,110,103,41,0,0,0,0,0};
static C_char li121[] C_aligned={C_lihdr(0,0,12),40,103,50,48,52,48,32,116,121,112,101,41,0,0,0,0};
static C_char li122[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,120,108,41,0,0,0,0,0,0,0};
static C_char li123[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,32,109,101,41,0,0,0,0,0,0,0};
static C_char li124[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,121,109,115,41,0,0,0,0,0};
static C_char li125[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,102,105,110,97,108,105,122,101,45,109,111,100,117,108,101,32,109,111,100,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li126[] C_aligned={C_lihdr(0,0,7),40,97,57,48,55,48,41,0};
static C_char li127[] C_aligned={C_lihdr(0,0,7),40,97,57,49,50,54,41,0};
static C_char li128[] C_aligned={C_lihdr(0,0,7),40,97,57,49,51,50,41,0};
static C_char li129[] C_aligned={C_lihdr(0,0,30),40,35,35,115,121,115,35,119,105,116,104,45,101,110,118,105,114,111,110,109,101,110,116,32,116,104,117,110,107,41,0,0};
static C_char li130[] C_aligned={C_lihdr(0,0,7),40,97,57,49,56,49,41,0};
static C_char li131[] C_aligned={C_lihdr(0,0,7),40,97,57,49,56,54,41,0};
static C_char li132[] C_aligned={C_lihdr(0,0,7),40,97,57,49,57,53,41,0};
static C_char li133[] C_aligned={C_lihdr(0,0,7),40,97,57,49,55,53,41,0};
static C_char li134[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,105,109,112,111,114,116,45,108,105,98,114,97,114,121,45,104,111,111,107,32,109,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char li135[] C_aligned={C_lihdr(0,0,36),40,102,105,110,100,45,109,111,100,117,108,101,47,105,109,112,111,114,116,45,108,105,98,114,97,114,121,32,108,105,98,32,108,111,99,41,0,0,0,0};
static C_char li136[] C_aligned={C_lihdr(0,0,17),40,119,97,114,110,32,109,115,103,32,109,111,100,32,105,100,41,0,0,0,0,0,0,0};
static C_char li137[] C_aligned={C_lihdr(0,0,9),40,116,111,115,116,114,32,120,41,0,0,0,0,0,0,0};
static C_char li138[] C_aligned={C_lihdr(0,0,7),40,103,50,50,54,54,41,0};
static C_char li139[] C_aligned={C_lihdr(0,0,9),40,103,50,50,52,56,32,97,41,0,0,0,0,0,0,0};
static C_char li140[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,50,52,50,32,103,50,50,53,52,41,0,0,0,0};
static C_char li141[] C_aligned={C_lihdr(0,0,23),40,101,120,112,111,114,116,45,114,101,110,97,109,101,32,109,111,100,32,108,115,116,41,0};
static C_char li142[] C_aligned={C_lihdr(0,0,21),40,109,111,100,117,108,101,45,105,109,112,111,114,116,115,32,110,97,109,101,41,0,0,0};
static C_char li143[] C_aligned={C_lihdr(0,0,7),40,97,57,52,56,50,41,0};
static C_char li144[] C_aligned={C_lihdr(0,0,10),40,103,50,51,51,51,32,105,100,41,0,0,0,0,0,0};
static C_char li145[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,51,51,50,32,103,50,51,51,57,41,0,0,0,0,0,0,0};
static C_char li146[] C_aligned={C_lihdr(0,0,9),40,103,50,51,53,51,32,97,41,0,0,0,0,0,0,0};
static C_char li147[] C_aligned={C_lihdr(0,0,9),40,103,50,51,53,55,32,97,41,0,0,0,0,0,0,0};
static C_char li148[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,105,100,115,32,118,32,115,32,109,105,115,115,105,110,103,41,0,0};
static C_char li149[] C_aligned={C_lihdr(0,0,60),40,97,57,52,57,50,32,110,97,109,101,50,50,57,52,32,108,105,98,50,50,57,54,32,115,112,101,99,50,50,57,56,32,105,109,112,118,50,51,48,48,32,105,109,112,115,50,51,48,50,32,105,109,112,105,50,51,48,52,41,0,0,0,0};
static C_char li150[] C_aligned={C_lihdr(0,0,7),40,97,57,54,51,50,41,0};
static C_char li151[] C_aligned={C_lihdr(0,0,10),40,103,50,52,49,49,32,105,100,41,0,0,0,0,0,0};
static C_char li152[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,49,48,32,103,50,52,49,55,41,0,0,0,0,0,0,0};
static C_char li153[] C_aligned={C_lihdr(0,0,10),40,103,50,52,51,49,32,105,100,41,0,0,0,0,0,0};
static C_char li154[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,115,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0};
static C_char li155[] C_aligned={C_lihdr(0,0,10),40,103,50,52,51,54,32,105,100,41,0,0,0,0,0,0};
static C_char li156[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,118,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0};
static C_char li157[] C_aligned={C_lihdr(0,0,60),40,97,57,54,52,50,32,110,97,109,101,50,51,54,52,32,108,105,98,50,51,54,54,32,115,112,101,99,50,51,54,56,32,105,109,112,118,50,51,55,48,32,105,109,112,115,50,51,55,50,32,105,109,112,105,50,51,55,52,41,0,0,0,0};
static C_char li158[] C_aligned={C_lihdr(0,0,7),40,97,57,56,49,53,41,0};
static C_char li159[] C_aligned={C_lihdr(0,0,10),40,103,50,52,57,48,32,105,100,41,0,0,0,0,0,0};
static C_char li160[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,52,56,57,32,103,50,52,57,54,41,0,0,0,0,0,0,0};
static C_char li161[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,48,50,32,103,50,53,49,52,41,0,0,0,0};
static C_char li162[] C_aligned={C_lihdr(0,0,9),40,103,50,53,51,54,32,97,41,0,0,0,0,0,0,0};
static C_char li163[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,115,32,105,109,112,115,32,115,32,105,100,115,41,0,0,0,0,0,0};
static C_char li164[] C_aligned={C_lihdr(0,0,9),40,103,50,53,52,49,32,97,41,0,0,0,0,0,0,0};
static C_char li165[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,118,32,105,109,112,118,32,118,32,105,100,115,41,0,0,0,0,0,0};
static C_char li166[] C_aligned={C_lihdr(0,0,60),40,97,57,56,50,53,32,110,97,109,101,50,52,52,51,32,108,105,98,50,52,52,53,32,115,112,101,99,50,52,52,55,32,105,109,112,118,50,52,52,57,32,105,109,112,115,50,52,53,49,32,105,109,112,105,50,52,53,51,41,0,0,0,0};
static C_char li167[] C_aligned={C_lihdr(0,0,8),40,97,49,48,48,54,53,41};
static C_char li168[] C_aligned={C_lihdr(0,0,12),40,114,101,110,97,109,101,32,105,109,112,41,0,0,0,0};
static C_char li169[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,54,48,55,32,103,50,54,49,57,41,0,0,0,0};
static C_char li170[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,53,56,49,32,103,50,53,57,51,41,0,0,0,0};
static C_char li171[] C_aligned={C_lihdr(0,0,61),40,97,49,48,48,55,53,32,110,97,109,101,50,53,52,56,32,108,105,98,50,53,53,48,32,115,112,101,99,50,53,53,50,32,105,109,112,118,50,53,53,52,32,105,109,112,115,50,53,53,54,32,105,109,112,105,50,53,53,56,41,0,0,0};
static C_char li172[] C_aligned={C_lihdr(0,0,9),40,111,117,116,101,114,32,120,41,0,0,0,0,0,0,0};
static C_char li173[] C_aligned={C_lihdr(0,0,9),40,97,57,51,56,51,32,107,41,0,0,0,0,0,0,0};
static C_char li174[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,100,101,99,111,109,112,111,115,101,45,105,109,112,111,114,116,32,120,32,114,32,99,32,108,111,99,41,0,0,0,0,0,0};
static C_char li175[] C_aligned={C_lihdr(0,0,8),40,97,49,48,50,51,48,41};
static C_char li176[] C_aligned={C_lihdr(0,0,50),40,97,49,48,50,51,54,32,110,97,109,101,50,54,54,48,32,95,50,54,54,50,32,115,112,101,99,50,54,54,52,32,118,50,54,54,54,32,115,50,54,54,56,32,105,50,54,55,48,41,0,0,0,0,0,0};
static C_char li177[] C_aligned={C_lihdr(0,0,9),40,103,50,54,53,48,32,120,41,0,0,0,0,0,0,0};
static C_char li178[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,54,52,57,32,103,50,54,53,54,41,0,0,0,0,0,0,0};
static C_char li179[] C_aligned={C_lihdr(0,0,65),40,35,35,115,121,115,35,101,120,112,97,110,100,45,105,109,112,111,114,116,32,120,32,114,32,99,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li180[] C_aligned={C_lihdr(0,0,11),40,103,50,55,49,49,32,105,109,112,41,0,0,0,0,0};
static C_char li181[] C_aligned={C_lihdr(0,0,11),40,103,50,55,50,49,32,105,109,112,41,0,0,0,0,0};
static C_char li182[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,57,50,32,103,50,56,48,52,41,0,0,0,0};
static C_char li183[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,55,54,54,32,103,50,55,55,56,41,0,0,0,0};
static C_char li184[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,52,54,32,103,50,56,53,56,41,0,0,0,0};
static C_char li185[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,56,50,48,32,103,50,56,51,50,41,0,0,0,0};
static C_char li186[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,50,48,32,103,50,55,50,55,41,0,0,0,0,0,0,0};
static C_char li187[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,50,55,49,48,32,103,50,55,49,55,41,0,0,0,0,0,0,0};
static C_char li188[] C_aligned={C_lihdr(0,0,69),40,35,35,115,121,115,35,105,109,112,111,114,116,32,115,112,101,99,32,118,115,118,32,118,115,115,32,118,115,105,32,105,109,112,111,114,116,45,101,110,118,32,109,97,99,114,111,45,101,110,118,32,109,101,116,97,63,32,114,101,101,120,112,63,32,108,111,99,41,0,0,0};
static C_char li189[] C_aligned={C_lihdr(0,0,26),40,109,111,100,117,108,101,45,114,101,110,97,109,101,32,115,121,109,32,112,114,101,102,105,120,41,0,0,0,0,0,0};
static C_char li190[] C_aligned={C_lihdr(0,0,9),40,103,49,50,54,57,32,97,41,0,0,0,0,0,0,0};
static C_char li191[] C_aligned={C_lihdr(0,0,11),40,103,50,57,48,51,32,109,111,100,41,0,0,0,0,0};
static C_char li192[] C_aligned={C_lihdr(0,0,13),40,109,114,101,110,97,109,101,32,115,121,109,41,0,0,0};
static C_char li193[] C_aligned={C_lihdr(0,0,9),40,103,50,57,49,52,32,97,41,0,0,0,0,0,0,0};
static C_char li194[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,97,108,105,97,115,45,103,108,111,98,97,108,45,104,111,111,107,32,115,121,109,32,97,115,115,105,103,110,32,119,104,101,114,101,41,0,0,0,0,0,0};
static C_char li195[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char li196[] C_aligned={C_lihdr(0,0,12),40,105,102,97,99,101,32,110,97,109,101,41,0,0,0,0};
static C_char li197[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,108,115,116,41,0,0,0,0,0};
static C_char li198[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,120,112,115,41,0,0,0,0,0,0};
static C_char li199[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,118,97,108,105,100,97,116,101,45,101,120,112,111,114,116,115,32,101,120,112,115,32,108,111,99,41,0,0,0,0,0,0,0};
static C_char li200[] C_aligned={C_lihdr(0,0,46),40,35,35,115,121,115,35,114,101,103,105,115,116,101,114,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,97,114,103,115,32,102,101,120,112,115,32,98,111,100,121,41,0,0};
static C_char li201[] C_aligned={C_lihdr(0,0,10),40,101,114,114,32,97,114,103,115,41,0,0,0,0,0,0};
static C_char li202[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,50,57,57,50,32,103,51,48,48,52,41,0,0,0,0};
static C_char li203[] C_aligned={C_lihdr(0,0,6),40,109,101,114,114,41,0,0};
static C_char li204[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,50,32,102,97,115,41,0,0,0,0,0};
static C_char li205[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,97,115,32,102,97,115,41,0,0,0};
static C_char li206[] C_aligned={C_lihdr(0,0,43),40,35,35,115,121,115,35,105,110,115,116,97,110,116,105,97,116,101,45,102,117,110,99,116,111,114,32,110,97,109,101,32,102,110,97,109,101,32,97,114,103,115,41,0,0,0,0,0};
static C_char li207[] C_aligned={C_lihdr(0,0,11),40,103,51,48,53,51,32,101,120,112,41,0,0,0,0,0};
static C_char li208[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,48,55,52,32,103,51,48,56,54,41,0,0,0,0};
static C_char li209[] C_aligned={C_lihdr(0,0,25),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,48,53,50,32,103,51,48,53,57,41,0,0,0,0,0,0,0};
static C_char li210[] C_aligned={C_lihdr(0,0,46),40,109,97,116,99,104,45,102,117,110,99,116,111,114,45,97,114,103,117,109,101,110,116,32,110,97,109,101,32,109,110,97,109,101,32,101,120,112,115,32,102,110,97,109,101,41,0,0};
static C_char li211[] C_aligned={C_lihdr(0,0,7),40,103,51,49,49,54,41,0};
static C_char li212[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,49,49,48,32,103,51,49,50,50,41,0,0,0,0};
static C_char li213[] C_aligned={C_lihdr(0,0,21),40,115,101,45,115,117,98,115,101,116,32,110,97,109,101,115,32,101,110,118,41,0,0,0};
static C_char li214[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,109,111,100,117,108,101,35,109,111,100,117,108,101,45,101,110,118,105,114,111,110,109,101,110,116,32,109,110,97,109,101,32,46,32,114,101,115,116,41};
static C_char li215[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,108,115,116,41,0,0,0,0,0,0};
static C_char li216[] C_aligned={C_lihdr(0,0,8),40,100,101,108,109,111,100,41};
static C_char li217[] C_aligned={C_lihdr(0,0,20),40,109,97,112,45,108,111,111,112,51,49,55,48,32,103,51,49,56,50,41,0,0,0,0};
static C_char li218[] C_aligned={C_lihdr(0,0,8),40,97,49,49,54,54,55,41};
static C_char li219[] C_aligned={C_lihdr(0,0,33),40,115,99,104,101,109,101,46,101,118,97,108,35,101,110,118,105,114,111,110,109,101,110,116,32,46,32,115,112,101,99,115,41,0,0,0,0,0,0,0};
static C_char li220[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f12519)
static void C_ccall f12519(C_word c,C_word *av) C_noret;
C_noret_decl(f12523)
static void C_ccall f12523(C_word c,C_word *av) C_noret;
C_noret_decl(f13258)
static void C_ccall f13258(C_word c,C_word *av) C_noret;
C_noret_decl(f13262)
static void C_ccall f13262(C_word c,C_word *av) C_noret;
C_noret_decl(f_10002)
static void f_10002(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10018)
static void C_ccall f_10018(C_word c,C_word *av) C_noret;
C_noret_decl(f_10058)
static void C_ccall f_10058(C_word c,C_word *av) C_noret;
C_noret_decl(f_10061)
static void C_ccall f_10061(C_word c,C_word *av) C_noret;
C_noret_decl(f_10066)
static void C_ccall f_10066(C_word c,C_word *av) C_noret;
C_noret_decl(f_10076)
static void C_ccall f_10076(C_word c,C_word *av) C_noret;
C_noret_decl(f_10080)
static void C_ccall f_10080(C_word c,C_word *av) C_noret;
C_noret_decl(f_10082)
static void f_10082(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10090)
static void C_ccall f_10090(C_word c,C_word *av) C_noret;
C_noret_decl(f_10096)
static void C_ccall f_10096(C_word c,C_word *av) C_noret;
C_noret_decl(f_10100)
static void C_ccall f_10100(C_word c,C_word *av) C_noret;
C_noret_decl(f_10104)
static void C_ccall f_10104(C_word c,C_word *av) C_noret;
C_noret_decl(f_10125)
static void C_ccall f_10125(C_word c,C_word *av) C_noret;
C_noret_decl(f_10135)
static void C_ccall f_10135(C_word c,C_word *av) C_noret;
C_noret_decl(f_10137)
static void f_10137(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10162)
static void C_ccall f_10162(C_word c,C_word *av) C_noret;
C_noret_decl(f_10171)
static void f_10171(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10196)
static void C_ccall f_10196(C_word c,C_word *av) C_noret;
C_noret_decl(f_10214)
static void C_ccall f_10214(C_word c,C_word *av) C_noret;
C_noret_decl(f_10220)
static void C_ccall f_10220(C_word c,C_word *av) C_noret;
C_noret_decl(f_10224)
static void C_ccall f_10224(C_word c,C_word *av) C_noret;
C_noret_decl(f_10225)
static void f_10225(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10231)
static void C_ccall f_10231(C_word c,C_word *av) C_noret;
C_noret_decl(f_10237)
static void C_ccall f_10237(C_word c,C_word *av) C_noret;
C_noret_decl(f_10259)
static void C_ccall f_10259(C_word c,C_word *av) C_noret;
C_noret_decl(f_10261)
static void f_10261(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10271)
static void C_ccall f_10271(C_word c,C_word *av) C_noret;
C_noret_decl(f_10284)
static void C_ccall f_10284(C_word c,C_word *av) C_noret;
C_noret_decl(f_10288)
static void C_ccall f_10288(C_word c,C_word *av) C_noret;
C_noret_decl(f_10291)
static void C_ccall f_10291(C_word c,C_word *av) C_noret;
C_noret_decl(f_10301)
static void f_10301(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word *av) C_noret;
C_noret_decl(f_10339)
static void C_ccall f_10339(C_word c,C_word *av) C_noret;
C_noret_decl(f_10345)
static void C_ccall f_10345(C_word c,C_word *av) C_noret;
C_noret_decl(f_10346)
static void f_10346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10353)
static void C_ccall f_10353(C_word c,C_word *av) C_noret;
C_noret_decl(f_10386)
static void C_ccall f_10386(C_word c,C_word *av) C_noret;
C_noret_decl(f_10392)
static void C_ccall f_10392(C_word c,C_word *av) C_noret;
C_noret_decl(f_10395)
static void f_10395(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10398)
static void C_ccall f_10398(C_word c,C_word *av) C_noret;
C_noret_decl(f_10405)
static void C_ccall f_10405(C_word c,C_word *av) C_noret;
C_noret_decl(f_10409)
static void C_ccall f_10409(C_word c,C_word *av) C_noret;
C_noret_decl(f_10413)
static void C_ccall f_10413(C_word c,C_word *av) C_noret;
C_noret_decl(f_10417)
static void C_ccall f_10417(C_word c,C_word *av) C_noret;
C_noret_decl(f_10420)
static void C_ccall f_10420(C_word c,C_word *av) C_noret;
C_noret_decl(f_10426)
static void C_ccall f_10426(C_word c,C_word *av) C_noret;
C_noret_decl(f_10429)
static void C_ccall f_10429(C_word c,C_word *av) C_noret;
C_noret_decl(f_10436)
static void C_ccall f_10436(C_word c,C_word *av) C_noret;
C_noret_decl(f_10446)
static void C_ccall f_10446(C_word c,C_word *av) C_noret;
C_noret_decl(f_10453)
static void C_ccall f_10453(C_word c,C_word *av) C_noret;
C_noret_decl(f_10464)
static void C_ccall f_10464(C_word c,C_word *av) C_noret;
C_noret_decl(f_10471)
static void C_ccall f_10471(C_word c,C_word *av) C_noret;
C_noret_decl(f_10473)
static void f_10473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10507)
static void f_10507(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10543)
static void C_ccall f_10543(C_word c,C_word *av) C_noret;
C_noret_decl(f_10554)
static void C_ccall f_10554(C_word c,C_word *av) C_noret;
C_noret_decl(f_10568)
static void C_ccall f_10568(C_word c,C_word *av) C_noret;
C_noret_decl(f_10575)
static void C_ccall f_10575(C_word c,C_word *av) C_noret;
C_noret_decl(f_10577)
static void f_10577(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10611)
static void f_10611(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10651)
static void f_10651(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10661)
static void C_ccall f_10661(C_word c,C_word *av) C_noret;
C_noret_decl(f_10674)
static void f_10674(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10684)
static void C_ccall f_10684(C_word c,C_word *av) C_noret;
C_noret_decl(f_10705)
static void C_ccall f_10705(C_word c,C_word *av) C_noret;
C_noret_decl(f_10720)
static void C_ccall f_10720(C_word c,C_word *av) C_noret;
C_noret_decl(f_10730)
static void f_10730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10738)
static void C_ccall f_10738(C_word c,C_word *av) C_noret;
C_noret_decl(f_10742)
static void C_ccall f_10742(C_word c,C_word *av) C_noret;
C_noret_decl(f_10746)
static void C_ccall f_10746(C_word c,C_word *av) C_noret;
C_noret_decl(f_10748)
static void C_ccall f_10748(C_word c,C_word *av) C_noret;
C_noret_decl(f_10751)
static void f_10751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10755)
static void C_ccall f_10755(C_word c,C_word *av) C_noret;
C_noret_decl(f_10759)
static void f_10759(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10766)
static void C_ccall f_10766(C_word c,C_word *av) C_noret;
C_noret_decl(f_10773)
static void C_ccall f_10773(C_word c,C_word *av) C_noret;
C_noret_decl(f_10794)
static void f_10794(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10820)
static void C_ccall f_10820(C_word c,C_word *av) C_noret;
C_noret_decl(f_10822)
static void C_ccall f_10822(C_word c,C_word *av) C_noret;
C_noret_decl(f_10825)
static void f_10825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10831)
static void f_10831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10872)
static void f_10872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10904)
static void C_ccall f_10904(C_word c,C_word *av) C_noret;
C_noret_decl(f_10930)
static void C_ccall f_10930(C_word c,C_word *av) C_noret;
C_noret_decl(f_10951)
static void C_ccall f_10951(C_word c,C_word *av) C_noret;
C_noret_decl(f_10955)
static void C_ccall f_10955(C_word c,C_word *av) C_noret;
C_noret_decl(f_10981)
static void f_10981(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10995)
static void C_ccall f_10995(C_word c,C_word *av) C_noret;
C_noret_decl(f_11037)
static void C_ccall f_11037(C_word c,C_word *av) C_noret;
C_noret_decl(f_11053)
static void C_ccall f_11053(C_word c,C_word *av) C_noret;
C_noret_decl(f_11061)
static void f_11061(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11068)
static void C_ccall f_11068(C_word c,C_word *av) C_noret;
C_noret_decl(f_11078)
static void f_11078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11100)
static void C_ccall f_11100(C_word c,C_word *av) C_noret;
C_noret_decl(f_11102)
static void f_11102(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11141)
static void C_ccall f_11141(C_word c,C_word *av) C_noret;
C_noret_decl(f_11162)
static void f_11162(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11174)
static void f_11174(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11197)
static void C_ccall f_11197(C_word c,C_word *av) C_noret;
C_noret_decl(f_11200)
static void C_ccall f_11200(C_word c,C_word *av) C_noret;
C_noret_decl(f_11211)
static void C_ccall f_11211(C_word c,C_word *av) C_noret;
C_noret_decl(f_11217)
static void C_ccall f_11217(C_word c,C_word *av) C_noret;
C_noret_decl(f_11249)
static void C_ccall f_11249(C_word c,C_word *av) C_noret;
C_noret_decl(f_11252)
static void C_ccall f_11252(C_word c,C_word *av) C_noret;
C_noret_decl(f_11263)
static void C_ccall f_11263(C_word c,C_word *av) C_noret;
C_noret_decl(f_11279)
static void f_11279(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11283)
static void C_ccall f_11283(C_word c,C_word *av) C_noret;
C_noret_decl(f_11290)
static void f_11290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11303)
static void f_11303(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11330)
static void C_ccall f_11330(C_word c,C_word *av) C_noret;
C_noret_decl(f_11343)
static void C_ccall f_11343(C_word c,C_word *av) C_noret;
C_noret_decl(f_11347)
static void C_ccall f_11347(C_word c,C_word *av) C_noret;
C_noret_decl(f_11351)
static void C_ccall f_11351(C_word c,C_word *av) C_noret;
C_noret_decl(f_11355)
static void C_ccall f_11355(C_word c,C_word *av) C_noret;
C_noret_decl(f_11369)
static void C_ccall f_11369(C_word c,C_word *av) C_noret;
C_noret_decl(f_11375)
static void C_ccall f_11375(C_word c,C_word *av) C_noret;
C_noret_decl(f_11377)
static void f_11377(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11402)
static void C_ccall f_11402(C_word c,C_word *av) C_noret;
C_noret_decl(f_11411)
static void f_11411(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11421)
static void C_ccall f_11421(C_word c,C_word *av) C_noret;
C_noret_decl(f_11436)
static void C_ccall f_11436(C_word c,C_word *av) C_noret;
C_noret_decl(f_11439)
static void C_ccall f_11439(C_word c,C_word *av) C_noret;
C_noret_decl(f_11442)
static void C_ccall f_11442(C_word c,C_word *av) C_noret;
C_noret_decl(f_11445)
static void C_ccall f_11445(C_word c,C_word *av) C_noret;
C_noret_decl(f_11448)
static void C_ccall f_11448(C_word c,C_word *av) C_noret;
C_noret_decl(f_11451)
static void C_ccall f_11451(C_word c,C_word *av) C_noret;
C_noret_decl(f_11453)
static void C_ccall f_11453(C_word c,C_word *av) C_noret;
C_noret_decl(f_11458)
static C_word f_11458(C_word t0,C_word t1);
C_noret_decl(f_11470)
static void f_11470(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11505)
static void C_ccall f_11505(C_word c,C_word *av) C_noret;
C_noret_decl(f_11508)
static void C_ccall f_11508(C_word c,C_word *av) C_noret;
C_noret_decl(f_11511)
static void C_ccall f_11511(C_word c,C_word *av) C_noret;
C_noret_decl(f_11514)
static void C_ccall f_11514(C_word c,C_word *av) C_noret;
C_noret_decl(f_11517)
static void C_ccall f_11517(C_word c,C_word *av) C_noret;
C_noret_decl(f_11520)
static void C_ccall f_11520(C_word c,C_word *av) C_noret;
C_noret_decl(f_11523)
static void C_ccall f_11523(C_word c,C_word *av) C_noret;
C_noret_decl(f_11526)
static void C_ccall f_11526(C_word c,C_word *av) C_noret;
C_noret_decl(f_11529)
static void C_ccall f_11529(C_word c,C_word *av) C_noret;
C_noret_decl(f_11532)
static void C_ccall f_11532(C_word c,C_word *av) C_noret;
C_noret_decl(f_11535)
static void C_ccall f_11535(C_word c,C_word *av) C_noret;
C_noret_decl(f_11538)
static void C_ccall f_11538(C_word c,C_word *av) C_noret;
C_noret_decl(f_11541)
static void C_ccall f_11541(C_word c,C_word *av) C_noret;
C_noret_decl(f_11544)
static void C_ccall f_11544(C_word c,C_word *av) C_noret;
C_noret_decl(f_11547)
static void C_ccall f_11547(C_word c,C_word *av) C_noret;
C_noret_decl(f_11550)
static void C_ccall f_11550(C_word c,C_word *av) C_noret;
C_noret_decl(f_11553)
static void C_ccall f_11553(C_word c,C_word *av) C_noret;
C_noret_decl(f_11556)
static void C_ccall f_11556(C_word c,C_word *av) C_noret;
C_noret_decl(f_11559)
static void C_ccall f_11559(C_word c,C_word *av) C_noret;
C_noret_decl(f_11562)
static void C_ccall f_11562(C_word c,C_word *av) C_noret;
C_noret_decl(f_11565)
static void C_ccall f_11565(C_word c,C_word *av) C_noret;
C_noret_decl(f_11567)
static void C_ccall f_11567(C_word c,C_word *av) C_noret;
C_noret_decl(f_11574)
static void C_ccall f_11574(C_word c,C_word *av) C_noret;
C_noret_decl(f_11603)
static void C_ccall f_11603(C_word c,C_word *av) C_noret;
C_noret_decl(f_11607)
static void C_ccall f_11607(C_word c,C_word *av) C_noret;
C_noret_decl(f_11609)
static void C_ccall f_11609(C_word c,C_word *av) C_noret;
C_noret_decl(f_11620)
static void C_ccall f_11620(C_word c,C_word *av) C_noret;
C_noret_decl(f_11628)
static void f_11628(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11655)
static void C_ccall f_11655(C_word c,C_word *av) C_noret;
C_noret_decl(f_11668)
static void C_ccall f_11668(C_word c,C_word *av) C_noret;
C_noret_decl(f_11672)
static void C_ccall f_11672(C_word c,C_word *av) C_noret;
C_noret_decl(f_11675)
static void C_ccall f_11675(C_word c,C_word *av) C_noret;
C_noret_decl(f_11715)
static void C_ccall f_11715(C_word c,C_word *av) C_noret;
C_noret_decl(f_11717)
static void f_11717(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11752)
static void C_ccall f_11752(C_word c,C_word *av) C_noret;
C_noret_decl(f_11755)
static void C_ccall f_11755(C_word c,C_word *av) C_noret;
C_noret_decl(f_11758)
static void C_ccall f_11758(C_word c,C_word *av) C_noret;
C_noret_decl(f_11761)
static void C_ccall f_11761(C_word c,C_word *av) C_noret;
C_noret_decl(f_11764)
static void C_ccall f_11764(C_word c,C_word *av) C_noret;
C_noret_decl(f_11767)
static void C_ccall f_11767(C_word c,C_word *av) C_noret;
C_noret_decl(f_11770)
static void C_ccall f_11770(C_word c,C_word *av) C_noret;
C_noret_decl(f_11774)
static void C_ccall f_11774(C_word c,C_word *av) C_noret;
C_noret_decl(f_11778)
static void C_ccall f_11778(C_word c,C_word *av) C_noret;
C_noret_decl(f_11782)
static void C_ccall f_11782(C_word c,C_word *av) C_noret;
C_noret_decl(f_11786)
static void C_ccall f_11786(C_word c,C_word *av) C_noret;
C_noret_decl(f_11798)
static void C_ccall f_11798(C_word c,C_word *av) C_noret;
C_noret_decl(f_11802)
static void C_ccall f_11802(C_word c,C_word *av) C_noret;
C_noret_decl(f_11806)
static void C_ccall f_11806(C_word c,C_word *av) C_noret;
C_noret_decl(f_11810)
static void C_ccall f_11810(C_word c,C_word *av) C_noret;
C_noret_decl(f_11814)
static void C_ccall f_11814(C_word c,C_word *av) C_noret;
C_noret_decl(f_11818)
static void C_ccall f_11818(C_word c,C_word *av) C_noret;
C_noret_decl(f_11822)
static void C_ccall f_11822(C_word c,C_word *av) C_noret;
C_noret_decl(f_11826)
static void C_ccall f_11826(C_word c,C_word *av) C_noret;
C_noret_decl(f_11830)
static void C_ccall f_11830(C_word c,C_word *av) C_noret;
C_noret_decl(f_11834)
static void C_ccall f_11834(C_word c,C_word *av) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word *av) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word *av) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word *av) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word *av) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word *av) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word *av) C_noret;
C_noret_decl(f_4531)
static void f_4531(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4537)
static void f_4537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word *av) C_noret;
C_noret_decl(f_4564)
static void C_ccall f_4564(C_word c,C_word *av) C_noret;
C_noret_decl(f_4612)
static void f_4612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4626)
static void C_ccall f_4626(C_word c,C_word *av) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word *av) C_noret;
C_noret_decl(f_4695)
static void f_4695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4704)
static void f_4704(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4712)
static void f_4712(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static C_word f_4720(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word *av) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word *av) C_noret;
C_noret_decl(f_5351)
static void f_5351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5376)
static void f_5376(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5387)
static void C_ccall f_5387(C_word c,C_word *av) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word *av) C_noret;
C_noret_decl(f_5397)
static C_word f_5397(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13,C_word t14,C_word t15);
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word *av) C_noret;
C_noret_decl(f_5418)
static C_word f_5418(C_word t0,C_word t1);
C_noret_decl(f_5427)
static C_word f_5427(C_word t0,C_word t1);
C_noret_decl(f_5436)
static void f_5436(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5445)
static C_word f_5445(C_word t0,C_word t1);
C_noret_decl(f_5454)
static void f_5454(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5463)
static C_word f_5463(C_word t0,C_word t1);
C_noret_decl(f_5472)
static void f_5472(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5481)
static C_word f_5481(C_word t0,C_word t1);
C_noret_decl(f_5490)
static void f_5490(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word *av) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word *av) C_noret;
C_noret_decl(f_5517)
static C_word f_5517(C_word t0,C_word t1);
C_noret_decl(f_5526)
static void f_5526(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5535)
static C_word f_5535(C_word t0,C_word t1);
C_noret_decl(f_5544)
static void f_5544(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5553)
static C_word f_5553(C_word t0,C_word t1);
C_noret_decl(f_5562)
static void f_5562(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5571)
static C_word f_5571(C_word t0,C_word t1);
C_noret_decl(f_5580)
static void f_5580(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5589)
static C_word f_5589(C_word t0,C_word t1);
C_noret_decl(f_5598)
static void f_5598(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5607)
static C_word f_5607(C_word t0,C_word t1);
C_noret_decl(f_5616)
static void f_5616(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5625)
static C_word f_5625(C_word t0,C_word t1);
C_noret_decl(f_5634)
static void f_5634(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5643)
static C_word f_5643(C_word t0,C_word t1);
C_noret_decl(f_5652)
static void f_5652(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word *av) C_noret;
C_noret_decl(f_5680)
static C_word f_5680(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6);
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word *av) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word *av) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word *av) C_noret;
C_noret_decl(f_5717)
static void C_ccall f_5717(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word *av) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word *av) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word *av) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word *av) C_noret;
C_noret_decl(f_5749)
static void C_ccall f_5749(C_word c,C_word *av) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word *av) C_noret;
C_noret_decl(f_5776)
static void C_ccall f_5776(C_word c,C_word *av) C_noret;
C_noret_decl(f_5780)
static void C_ccall f_5780(C_word c,C_word *av) C_noret;
C_noret_decl(f_5782)
static void f_5782(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word *av) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word *av) C_noret;
C_noret_decl(f_5826)
static void f_5826(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5834)
static void f_5834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word *av) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word *av) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word *av) C_noret;
C_noret_decl(f_5924)
static void C_ccall f_5924(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word *av) C_noret;
C_noret_decl(f_5933)
static void C_ccall f_5933(C_word c,C_word *av) C_noret;
C_noret_decl(f_5939)
static void C_ccall f_5939(C_word c,C_word *av) C_noret;
C_noret_decl(f_5952)
static void f_5952(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5964)
static void C_ccall f_5964(C_word c,C_word *av) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word *av) C_noret;
C_noret_decl(f_5970)
static void C_ccall f_5970(C_word c,C_word *av) C_noret;
C_noret_decl(f_5986)
static void C_ccall f_5986(C_word c,C_word *av) C_noret;
C_noret_decl(f_5987)
static C_word f_5987(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_5995)
static C_word f_5995(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word *av) C_noret;
C_noret_decl(f_6012)
static void C_ccall f_6012(C_word c,C_word *av) C_noret;
C_noret_decl(f_6019)
static void C_ccall f_6019(C_word c,C_word *av) C_noret;
C_noret_decl(f_6023)
static void C_ccall f_6023(C_word c,C_word *av) C_noret;
C_noret_decl(f_6029)
static void f_6029(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word *av) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word *av) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word *av) C_noret;
C_noret_decl(f_6079)
static void C_ccall f_6079(C_word c,C_word *av) C_noret;
C_noret_decl(f_6081)
static void f_6081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6117)
static void C_ccall f_6117(C_word c,C_word *av) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word *av) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word *av) C_noret;
C_noret_decl(f_6126)
static void C_ccall f_6126(C_word c,C_word *av) C_noret;
C_noret_decl(f_6142)
static void f_6142(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word *av) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word *av) C_noret;
C_noret_decl(f_6166)
static C_word f_6166(C_word t0,C_word t1);
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word *av) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word *av) C_noret;
C_noret_decl(f_6214)
static void f_6214(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6220)
static void C_ccall f_6220(C_word c,C_word *av) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word *av) C_noret;
C_noret_decl(f_6226)
static void C_ccall f_6226(C_word c,C_word *av) C_noret;
C_noret_decl(f_6232)
static void C_ccall f_6232(C_word c,C_word *av) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word *av) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word *av) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word *av) C_noret;
C_noret_decl(f_6275)
static void C_ccall f_6275(C_word c,C_word *av) C_noret;
C_noret_decl(f_6282)
static void C_ccall f_6282(C_word c,C_word *av) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word *av) C_noret;
C_noret_decl(f_6308)
static C_word f_6308(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_6325)
static void C_ccall f_6325(C_word c,C_word *av) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word *av) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word *av) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341(C_word c,C_word *av) C_noret;
C_noret_decl(f_6344)
static void C_ccall f_6344(C_word c,C_word *av) C_noret;
C_noret_decl(f_6347)
static void C_ccall f_6347(C_word c,C_word *av) C_noret;
C_noret_decl(f_6353)
static void C_ccall f_6353(C_word c,C_word *av) C_noret;
C_noret_decl(f_6387)
static void C_ccall f_6387(C_word c,C_word *av) C_noret;
C_noret_decl(f_6391)
static void C_ccall f_6391(C_word c,C_word *av) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word *av) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word *av) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word *av) C_noret;
C_noret_decl(f_6440)
static void C_ccall f_6440(C_word c,C_word *av) C_noret;
C_noret_decl(f_6447)
static void f_6447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6454)
static void f_6454(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6499)
static void C_ccall f_6499(C_word c,C_word *av) C_noret;
C_noret_decl(f_6556)
static void C_ccall f_6556(C_word c,C_word *av) C_noret;
C_noret_decl(f_6561)
static void f_6561(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6569)
static void C_ccall f_6569(C_word c,C_word *av) C_noret;
C_noret_decl(f_6573)
static void C_ccall f_6573(C_word c,C_word *av) C_noret;
C_noret_decl(f_6584)
static void f_6584(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6611)
static void f_6611(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6634)
static void C_ccall f_6634(C_word c,C_word *av) C_noret;
C_noret_decl(f_6648)
static void f_6648(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6673)
static void C_ccall f_6673(C_word c,C_word *av) C_noret;
C_noret_decl(f_6688)
static void f_6688(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word *av) C_noret;
C_noret_decl(f_6717)
static void C_ccall f_6717(C_word c,C_word *av) C_noret;
C_noret_decl(f_6736)
static void C_ccall f_6736(C_word c,C_word *av) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word *av) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word *av) C_noret;
C_noret_decl(f_6765)
static void f_6765(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6769)
static void C_ccall f_6769(C_word c,C_word *av) C_noret;
C_noret_decl(f_6772)
static void C_ccall f_6772(C_word c,C_word *av) C_noret;
C_noret_decl(f_6783)
static void f_6783(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6811)
static void f_6811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word *av) C_noret;
C_noret_decl(f_6830)
static void f_6830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word *av) C_noret;
C_noret_decl(f_6858)
static void f_6858(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6880)
static void C_ccall f_6880(C_word c,C_word *av) C_noret;
C_noret_decl(f_6888)
static void C_ccall f_6888(C_word c,C_word *av) C_noret;
C_noret_decl(f_6922)
static void C_ccall f_6922(C_word c,C_word *av) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word *av) C_noret;
C_noret_decl(f_6941)
static void f_6941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word *av) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word *av) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word *av) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word *av) C_noret;
C_noret_decl(f_7004)
static void C_ccall f_7004(C_word c,C_word *av) C_noret;
C_noret_decl(f_7032)
static void C_ccall f_7032(C_word c,C_word *av) C_noret;
C_noret_decl(f_7036)
static void C_ccall f_7036(C_word c,C_word *av) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word *av) C_noret;
C_noret_decl(f_7044)
static void f_7044(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7048)
static void C_ccall f_7048(C_word c,C_word *av) C_noret;
C_noret_decl(f_7052)
static void f_7052(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7056)
static void C_ccall f_7056(C_word c,C_word *av) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060(C_word c,C_word *av) C_noret;
C_noret_decl(f_7092)
static void f_7092(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7128)
static void C_ccall f_7128(C_word c,C_word *av) C_noret;
C_noret_decl(f_7130)
static void f_7130(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7166)
static void C_ccall f_7166(C_word c,C_word *av) C_noret;
C_noret_decl(f_7178)
static void f_7178(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7210)
static void C_ccall f_7210(C_word c,C_word *av) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word *av) C_noret;
C_noret_decl(f_7235)
static void f_7235(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7259)
static void C_ccall f_7259(C_word c,C_word *av) C_noret;
C_noret_decl(f_7275)
static void C_ccall f_7275(C_word c,C_word *av) C_noret;
C_noret_decl(f_7277)
static void f_7277(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7302)
static void C_ccall f_7302(C_word c,C_word *av) C_noret;
C_noret_decl(f_7364)
static void C_ccall f_7364(C_word c,C_word *av) C_noret;
C_noret_decl(f_7366)
static void f_7366(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7391)
static void f_7391(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7406)
static void C_ccall f_7406(C_word c,C_word *av) C_noret;
C_noret_decl(f_7421)
static void C_ccall f_7421(C_word c,C_word *av) C_noret;
C_noret_decl(f_7442)
static void C_ccall f_7442(C_word c,C_word *av) C_noret;
C_noret_decl(f_7470)
static void C_ccall f_7470(C_word c,C_word *av) C_noret;
C_noret_decl(f_7479)
static void f_7479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7496)
static void C_ccall f_7496(C_word c,C_word *av) C_noret;
C_noret_decl(f_7535)
static void C_ccall f_7535(C_word c,C_word *av) C_noret;
C_noret_decl(f_7538)
static void C_ccall f_7538(C_word c,C_word *av) C_noret;
C_noret_decl(f_7541)
static void C_ccall f_7541(C_word c,C_word *av) C_noret;
C_noret_decl(f_7557)
static void C_ccall f_7557(C_word c,C_word *av) C_noret;
C_noret_decl(f_7567)
static void C_ccall f_7567(C_word c,C_word *av) C_noret;
C_noret_decl(f_7573)
static void C_ccall f_7573(C_word c,C_word *av) C_noret;
C_noret_decl(f_7574)
static void f_7574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7586)
static void C_ccall f_7586(C_word c,C_word *av) C_noret;
C_noret_decl(f_7599)
static void C_ccall f_7599(C_word c,C_word *av) C_noret;
C_noret_decl(f_7600)
static void f_7600(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7612)
static void C_ccall f_7612(C_word c,C_word *av) C_noret;
C_noret_decl(f_7625)
static void C_ccall f_7625(C_word c,C_word *av) C_noret;
C_noret_decl(f_7628)
static void C_ccall f_7628(C_word c,C_word *av) C_noret;
C_noret_decl(f_7644)
static void C_ccall f_7644(C_word c,C_word *av) C_noret;
C_noret_decl(f_7648)
static void C_ccall f_7648(C_word c,C_word *av) C_noret;
C_noret_decl(f_7652)
static void C_ccall f_7652(C_word c,C_word *av) C_noret;
C_noret_decl(f_7654)
static void f_7654(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word *av) C_noret;
C_noret_decl(f_7677)
static void f_7677(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7687)
static void C_ccall f_7687(C_word c,C_word *av) C_noret;
C_noret_decl(f_7711)
static void C_ccall f_7711(C_word c,C_word *av) C_noret;
C_noret_decl(f_7715)
static void C_ccall f_7715(C_word c,C_word *av) C_noret;
C_noret_decl(f_7730)
static void C_ccall f_7730(C_word c,C_word *av) C_noret;
C_noret_decl(f_7732)
static void f_7732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7766)
static void C_ccall f_7766(C_word c,C_word *av) C_noret;
C_noret_decl(f_7778)
static void C_ccall f_7778(C_word c,C_word *av) C_noret;
C_noret_decl(f_7796)
static void C_ccall f_7796(C_word c,C_word *av) C_noret;
C_noret_decl(f_7830)
static void C_ccall f_7830(C_word c,C_word *av) C_noret;
C_noret_decl(f_7837)
static void C_ccall f_7837(C_word c,C_word *av) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word *av) C_noret;
C_noret_decl(f_7859)
static void C_ccall f_7859(C_word c,C_word *av) C_noret;
C_noret_decl(f_7863)
static void C_ccall f_7863(C_word c,C_word *av) C_noret;
C_noret_decl(f_7867)
static void C_ccall f_7867(C_word c,C_word *av) C_noret;
C_noret_decl(f_7880)
static void f_7880(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7902)
static void C_ccall f_7902(C_word c,C_word *av) C_noret;
C_noret_decl(f_7904)
static void f_7904(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7929)
static void C_ccall f_7929(C_word c,C_word *av) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word *av) C_noret;
C_noret_decl(f_7959)
static void f_7959(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7972)
static C_word f_7972(C_word t0,C_word t1);
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word *av) C_noret;
C_noret_decl(f_8043)
static void f_8043(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8047)
static void C_ccall f_8047(C_word c,C_word *av) C_noret;
C_noret_decl(f_8053)
static void C_ccall f_8053(C_word c,C_word *av) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word *av) C_noret;
C_noret_decl(f_8059)
static void C_ccall f_8059(C_word c,C_word *av) C_noret;
C_noret_decl(f_8062)
static void C_ccall f_8062(C_word c,C_word *av) C_noret;
C_noret_decl(f_8063)
static void f_8063(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8070)
static void C_ccall f_8070(C_word c,C_word *av) C_noret;
C_noret_decl(f_8073)
static void C_ccall f_8073(C_word c,C_word *av) C_noret;
C_noret_decl(f_8076)
static void C_ccall f_8076(C_word c,C_word *av) C_noret;
C_noret_decl(f_8077)
static void f_8077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8080)
static void f_8080(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8084)
static void C_ccall f_8084(C_word c,C_word *av) C_noret;
C_noret_decl(f_8110)
static void C_ccall f_8110(C_word c,C_word *av) C_noret;
C_noret_decl(f_8116)
static void C_ccall f_8116(C_word c,C_word *av) C_noret;
C_noret_decl(f_8120)
static void f_8120(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8124)
static void C_ccall f_8124(C_word c,C_word *av) C_noret;
C_noret_decl(f_8130)
static void C_ccall f_8130(C_word c,C_word *av) C_noret;
C_noret_decl(f_8133)
static void C_ccall f_8133(C_word c,C_word *av) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word *av) C_noret;
C_noret_decl(f_8139)
static void C_ccall f_8139(C_word c,C_word *av) C_noret;
C_noret_decl(f_8146)
static void C_ccall f_8146(C_word c,C_word *av) C_noret;
C_noret_decl(f_8162)
static void C_ccall f_8162(C_word c,C_word *av) C_noret;
C_noret_decl(f_8168)
static void C_ccall f_8168(C_word c,C_word *av) C_noret;
C_noret_decl(f_8171)
static void C_ccall f_8171(C_word c,C_word *av) C_noret;
C_noret_decl(f_8178)
static void C_ccall f_8178(C_word c,C_word *av) C_noret;
C_noret_decl(f_8185)
static void C_ccall f_8185(C_word c,C_word *av) C_noret;
C_noret_decl(f_8191)
static void C_ccall f_8191(C_word c,C_word *av) C_noret;
C_noret_decl(f_8194)
static void C_ccall f_8194(C_word c,C_word *av) C_noret;
C_noret_decl(f_8197)
static void C_ccall f_8197(C_word c,C_word *av) C_noret;
C_noret_decl(f_8215)
static void C_ccall f_8215(C_word c,C_word *av) C_noret;
C_noret_decl(f_8218)
static void C_ccall f_8218(C_word c,C_word *av) C_noret;
C_noret_decl(f_8236)
static void C_ccall f_8236(C_word c,C_word *av) C_noret;
C_noret_decl(f_8248)
static void C_ccall f_8248(C_word c,C_word *av) C_noret;
C_noret_decl(f_8251)
static void C_ccall f_8251(C_word c,C_word *av) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word *av) C_noret;
C_noret_decl(f_8264)
static void C_ccall f_8264(C_word c,C_word *av) C_noret;
C_noret_decl(f_8265)
static void f_8265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8272)
static void C_ccall f_8272(C_word c,C_word *av) C_noret;
C_noret_decl(f_8284)
static void f_8284(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8294)
static void C_ccall f_8294(C_word c,C_word *av) C_noret;
C_noret_decl(f_8312)
static void f_8312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8322)
static void C_ccall f_8322(C_word c,C_word *av) C_noret;
C_noret_decl(f_8342)
static void C_ccall f_8342(C_word c,C_word *av) C_noret;
C_noret_decl(f_8349)
static void C_ccall f_8349(C_word c,C_word *av) C_noret;
C_noret_decl(f_8351)
static void f_8351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8361)
static void C_ccall f_8361(C_word c,C_word *av) C_noret;
C_noret_decl(f_8376)
static void C_ccall f_8376(C_word c,C_word *av) C_noret;
C_noret_decl(f_8378)
static void f_8378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8408)
static void C_ccall f_8408(C_word c,C_word *av) C_noret;
C_noret_decl(f_8420)
static void C_ccall f_8420(C_word c,C_word *av) C_noret;
C_noret_decl(f_8423)
static void C_ccall f_8423(C_word c,C_word *av) C_noret;
C_noret_decl(f_8426)
static void C_ccall f_8426(C_word c,C_word *av) C_noret;
C_noret_decl(f_8447)
static void C_ccall f_8447(C_word c,C_word *av) C_noret;
C_noret_decl(f_8449)
static void f_8449(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8485)
static void C_ccall f_8485(C_word c,C_word *av) C_noret;
C_noret_decl(f_8497)
static void f_8497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8526)
static void C_ccall f_8526(C_word c,C_word *av) C_noret;
C_noret_decl(f_8536)
static void C_ccall f_8536(C_word c,C_word *av) C_noret;
C_noret_decl(f_8540)
static void C_ccall f_8540(C_word c,C_word *av) C_noret;
C_noret_decl(f_8550)
static void C_ccall f_8550(C_word c,C_word *av) C_noret;
C_noret_decl(f_8559)
static void C_ccall f_8559(C_word c,C_word *av) C_noret;
C_noret_decl(f_8562)
static void C_ccall f_8562(C_word c,C_word *av) C_noret;
C_noret_decl(f_8565)
static void C_ccall f_8565(C_word c,C_word *av) C_noret;
C_noret_decl(f_8566)
static C_word f_8566(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_8584)
static void C_ccall f_8584(C_word c,C_word *av) C_noret;
C_noret_decl(f_8590)
static void C_ccall f_8590(C_word c,C_word *av) C_noret;
C_noret_decl(f_8593)
static void C_ccall f_8593(C_word c,C_word *av) C_noret;
C_noret_decl(f_8596)
static void C_ccall f_8596(C_word c,C_word *av) C_noret;
C_noret_decl(f_8624)
static void C_ccall f_8624(C_word c,C_word *av) C_noret;
C_noret_decl(f_8631)
static void C_ccall f_8631(C_word c,C_word *av) C_noret;
C_noret_decl(f_8637)
static void C_ccall f_8637(C_word c,C_word *av) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word *av) C_noret;
C_noret_decl(f_8641)
static void f_8641(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8645)
static void C_ccall f_8645(C_word c,C_word *av) C_noret;
C_noret_decl(f_8663)
static void C_ccall f_8663(C_word c,C_word *av) C_noret;
C_noret_decl(f_8669)
static void C_ccall f_8669(C_word c,C_word *av) C_noret;
C_noret_decl(f_8672)
static void C_ccall f_8672(C_word c,C_word *av) C_noret;
C_noret_decl(f_8675)
static void C_ccall f_8675(C_word c,C_word *av) C_noret;
C_noret_decl(f_8686)
static void C_ccall f_8686(C_word c,C_word *av) C_noret;
C_noret_decl(f_8690)
static void C_ccall f_8690(C_word c,C_word *av) C_noret;
C_noret_decl(f_8694)
static void C_ccall f_8694(C_word c,C_word *av) C_noret;
C_noret_decl(f_8698)
static void C_ccall f_8698(C_word c,C_word *av) C_noret;
C_noret_decl(f_8704)
static void f_8704(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8714)
static void C_ccall f_8714(C_word c,C_word *av) C_noret;
C_noret_decl(f_8729)
static void C_ccall f_8729(C_word c,C_word *av) C_noret;
C_noret_decl(f_8733)
static void C_ccall f_8733(C_word c,C_word *av) C_noret;
C_noret_decl(f_8735)
static void f_8735(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8745)
static void f_8745(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8760)
static void C_ccall f_8760(C_word c,C_word *av) C_noret;
C_noret_decl(f_8778)
static void f_8778(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8805)
static void f_8805(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8851)
static void C_ccall f_8851(C_word c,C_word *av) C_noret;
C_noret_decl(f_8860)
static void C_ccall f_8860(C_word c,C_word *av) C_noret;
C_noret_decl(f_8871)
static void f_8871(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8875)
static void C_ccall f_8875(C_word c,C_word *av) C_noret;
C_noret_decl(f_8878)
static void f_8878(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8886)
static void C_ccall f_8886(C_word c,C_word *av) C_noret;
C_noret_decl(f_8907)
static void C_ccall f_8907(C_word c,C_word *av) C_noret;
C_noret_decl(f_8911)
static void f_8911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8919)
static void C_ccall f_8919(C_word c,C_word *av) C_noret;
C_noret_decl(f_8923)
static void C_ccall f_8923(C_word c,C_word *av) C_noret;
C_noret_decl(f_8939)
static void C_ccall f_8939(C_word c,C_word *av) C_noret;
C_noret_decl(f_8943)
static void C_ccall f_8943(C_word c,C_word *av) C_noret;
C_noret_decl(f_8957)
static void C_ccall f_8957(C_word c,C_word *av) C_noret;
C_noret_decl(f_8968)
static void C_ccall f_8968(C_word c,C_word *av) C_noret;
C_noret_decl(f_8994)
static void C_ccall f_8994(C_word c,C_word *av) C_noret;
C_noret_decl(f_8996)
static void f_8996(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9020)
static void C_ccall f_9020(C_word c,C_word *av) C_noret;
C_noret_decl(f_9029)
static void C_ccall f_9029(C_word c,C_word *av) C_noret;
C_noret_decl(f_9044)
static void C_ccall f_9044(C_word c,C_word *av) C_noret;
C_noret_decl(f_9052)
static void C_ccall f_9052(C_word c,C_word *av) C_noret;
C_noret_decl(f_9059)
static void C_ccall f_9059(C_word c,C_word *av) C_noret;
C_noret_decl(f_9063)
static void C_ccall f_9063(C_word c,C_word *av) C_noret;
C_noret_decl(f_9066)
static void C_ccall f_9066(C_word c,C_word *av) C_noret;
C_noret_decl(f_9071)
static void C_ccall f_9071(C_word c,C_word *av) C_noret;
C_noret_decl(f_9075)
static void C_ccall f_9075(C_word c,C_word *av) C_noret;
C_noret_decl(f_9078)
static void C_ccall f_9078(C_word c,C_word *av) C_noret;
C_noret_decl(f_9081)
static void C_ccall f_9081(C_word c,C_word *av) C_noret;
C_noret_decl(f_9084)
static void C_ccall f_9084(C_word c,C_word *av) C_noret;
C_noret_decl(f_9088)
static void C_ccall f_9088(C_word c,C_word *av) C_noret;
C_noret_decl(f_9092)
static void C_ccall f_9092(C_word c,C_word *av) C_noret;
C_noret_decl(f_9096)
static void C_ccall f_9096(C_word c,C_word *av) C_noret;
C_noret_decl(f_9100)
static void C_ccall f_9100(C_word c,C_word *av) C_noret;
C_noret_decl(f_9103)
static void C_ccall f_9103(C_word c,C_word *av) C_noret;
C_noret_decl(f_9106)
static void C_ccall f_9106(C_word c,C_word *av) C_noret;
C_noret_decl(f_9109)
static void C_ccall f_9109(C_word c,C_word *av) C_noret;
C_noret_decl(f_9112)
static void C_ccall f_9112(C_word c,C_word *av) C_noret;
C_noret_decl(f_9127)
static void C_ccall f_9127(C_word c,C_word *av) C_noret;
C_noret_decl(f_9133)
static void C_ccall f_9133(C_word c,C_word *av) C_noret;
C_noret_decl(f_9137)
static void C_ccall f_9137(C_word c,C_word *av) C_noret;
C_noret_decl(f_9140)
static void C_ccall f_9140(C_word c,C_word *av) C_noret;
C_noret_decl(f_9143)
static void C_ccall f_9143(C_word c,C_word *av) C_noret;
C_noret_decl(f_9146)
static void C_ccall f_9146(C_word c,C_word *av) C_noret;
C_noret_decl(f_9149)
static void C_ccall f_9149(C_word c,C_word *av) C_noret;
C_noret_decl(f_9152)
static void C_ccall f_9152(C_word c,C_word *av) C_noret;
C_noret_decl(f_9155)
static void C_ccall f_9155(C_word c,C_word *av) C_noret;
C_noret_decl(f_9158)
static void C_ccall f_9158(C_word c,C_word *av) C_noret;
C_noret_decl(f_9164)
static void C_ccall f_9164(C_word c,C_word *av) C_noret;
C_noret_decl(f_9168)
static void C_ccall f_9168(C_word c,C_word *av) C_noret;
C_noret_decl(f_9176)
static void C_ccall f_9176(C_word c,C_word *av) C_noret;
C_noret_decl(f_9182)
static void C_ccall f_9182(C_word c,C_word *av) C_noret;
C_noret_decl(f_9187)
static void C_ccall f_9187(C_word c,C_word *av) C_noret;
C_noret_decl(f_9191)
static void C_ccall f_9191(C_word c,C_word *av) C_noret;
C_noret_decl(f_9196)
static void C_ccall f_9196(C_word c,C_word *av) C_noret;
C_noret_decl(f_9203)
static void C_ccall f_9203(C_word c,C_word *av) C_noret;
C_noret_decl(f_9207)
static void C_ccall f_9207(C_word c,C_word *av) C_noret;
C_noret_decl(f_9210)
static void f_9210(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9214)
static void C_ccall f_9214(C_word c,C_word *av) C_noret;
C_noret_decl(f_9217)
static void C_ccall f_9217(C_word c,C_word *av) C_noret;
C_noret_decl(f_9225)
static void C_ccall f_9225(C_word c,C_word *av) C_noret;
C_noret_decl(f_9229)
static void C_ccall f_9229(C_word c,C_word *av) C_noret;
C_noret_decl(f_9232)
static void C_ccall f_9232(C_word c,C_word *av) C_noret;
C_noret_decl(f_9235)
static void C_ccall f_9235(C_word c,C_word *av) C_noret;
C_noret_decl(f_9238)
static void C_ccall f_9238(C_word c,C_word *av) C_noret;
C_noret_decl(f_9240)
static void f_9240(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9248)
static void C_ccall f_9248(C_word c,C_word *av) C_noret;
C_noret_decl(f_9252)
static void C_ccall f_9252(C_word c,C_word *av) C_noret;
C_noret_decl(f_9254)
static void f_9254(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9267)
static void C_ccall f_9267(C_word c,C_word *av) C_noret;
C_noret_decl(f_9274)
static void C_ccall f_9274(C_word c,C_word *av) C_noret;
C_noret_decl(f_9298)
static void f_9298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9312)
static void f_9312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9320)
static C_word f_9320(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_9347)
static void f_9347(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9372)
static void C_ccall f_9372(C_word c,C_word *av) C_noret;
C_noret_decl(f_9384)
static void C_ccall f_9384(C_word c,C_word *av) C_noret;
C_noret_decl(f_9387)
static void f_9387(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9391)
static void C_ccall f_9391(C_word c,C_word *av) C_noret;
C_noret_decl(f_9394)
static void C_ccall f_9394(C_word c,C_word *av) C_noret;
C_noret_decl(f_9410)
static void C_ccall f_9410(C_word c,C_word *av) C_noret;
C_noret_decl(f_9418)
static void C_ccall f_9418(C_word c,C_word *av) C_noret;
C_noret_decl(f_9422)
static void C_ccall f_9422(C_word c,C_word *av) C_noret;
C_noret_decl(f_9426)
static void C_ccall f_9426(C_word c,C_word *av) C_noret;
C_noret_decl(f_9443)
static void f_9443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9457)
static void C_ccall f_9457(C_word c,C_word *av) C_noret;
C_noret_decl(f_9475)
static void C_ccall f_9475(C_word c,C_word *av) C_noret;
C_noret_decl(f_9478)
static void C_ccall f_9478(C_word c,C_word *av) C_noret;
C_noret_decl(f_9483)
static void C_ccall f_9483(C_word c,C_word *av) C_noret;
C_noret_decl(f_9493)
static void C_ccall f_9493(C_word c,C_word *av) C_noret;
C_noret_decl(f_9497)
static void C_ccall f_9497(C_word c,C_word *av) C_noret;
C_noret_decl(f_9502)
static void f_9502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9510)
static void f_9510(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9520)
static void C_ccall f_9520(C_word c,C_word *av) C_noret;
C_noret_decl(f_9533)
static void f_9533(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9543)
static void C_ccall f_9543(C_word c,C_word *av) C_noret;
C_noret_decl(f_9561)
static void f_9561(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9583)
static void f_9583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9625)
static void C_ccall f_9625(C_word c,C_word *av) C_noret;
C_noret_decl(f_9628)
static void C_ccall f_9628(C_word c,C_word *av) C_noret;
C_noret_decl(f_9633)
static void C_ccall f_9633(C_word c,C_word *av) C_noret;
C_noret_decl(f_9643)
static void C_ccall f_9643(C_word c,C_word *av) C_noret;
C_noret_decl(f_9647)
static void C_ccall f_9647(C_word c,C_word *av) C_noret;
C_noret_decl(f_9652)
static void f_9652(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9664)
static void f_9664(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9672)
static void f_9672(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9682)
static void C_ccall f_9682(C_word c,C_word *av) C_noret;
C_noret_decl(f_9695)
static void f_9695(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9705)
static void C_ccall f_9705(C_word c,C_word *av) C_noret;
C_noret_decl(f_9723)
static void f_9723(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9735)
static void C_ccall f_9735(C_word c,C_word *av) C_noret;
C_noret_decl(f_9764)
static void f_9764(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9776)
static void C_ccall f_9776(C_word c,C_word *av) C_noret;
C_noret_decl(f_9808)
static void C_ccall f_9808(C_word c,C_word *av) C_noret;
C_noret_decl(f_9811)
static void C_ccall f_9811(C_word c,C_word *av) C_noret;
C_noret_decl(f_9816)
static void C_ccall f_9816(C_word c,C_word *av) C_noret;
C_noret_decl(f_9826)
static void C_ccall f_9826(C_word c,C_word *av) C_noret;
C_noret_decl(f_9830)
static void C_ccall f_9830(C_word c,C_word *av) C_noret;
C_noret_decl(f_9835)
static void f_9835(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9847)
static void f_9847(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9855)
static void f_9855(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9868)
static void C_ccall f_9868(C_word c,C_word *av) C_noret;
C_noret_decl(f_9874)
static void C_ccall f_9874(C_word c,C_word *av) C_noret;
C_noret_decl(f_9887)
static void f_9887(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9897)
static void C_ccall f_9897(C_word c,C_word *av) C_noret;
C_noret_decl(f_9910)
static void f_9910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9949)
static void f_9949(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9965)
static void C_ccall f_9965(C_word c,C_word *av) C_noret;
C_noret_decl(C_modules_toplevel)
C_extern void C_ccall C_modules_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10002)
static void C_ccall trf_10002(C_word c,C_word *av) C_noret;
static void C_ccall trf_10002(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10002(t0,t1,t2);}

C_noret_decl(trf_10082)
static void C_ccall trf_10082(C_word c,C_word *av) C_noret;
static void C_ccall trf_10082(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10082(t0,t1,t2);}

C_noret_decl(trf_10137)
static void C_ccall trf_10137(C_word c,C_word *av) C_noret;
static void C_ccall trf_10137(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10137(t0,t1,t2);}

C_noret_decl(trf_10171)
static void C_ccall trf_10171(C_word c,C_word *av) C_noret;
static void C_ccall trf_10171(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10171(t0,t1,t2);}

C_noret_decl(trf_10225)
static void C_ccall trf_10225(C_word c,C_word *av) C_noret;
static void C_ccall trf_10225(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10225(t0,t1,t2);}

C_noret_decl(trf_10261)
static void C_ccall trf_10261(C_word c,C_word *av) C_noret;
static void C_ccall trf_10261(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10261(t0,t1,t2);}

C_noret_decl(trf_10301)
static void C_ccall trf_10301(C_word c,C_word *av) C_noret;
static void C_ccall trf_10301(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10301(t0,t1,t2);}

C_noret_decl(trf_10346)
static void C_ccall trf_10346(C_word c,C_word *av) C_noret;
static void C_ccall trf_10346(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10346(t0,t1,t2);}

C_noret_decl(trf_10395)
static void C_ccall trf_10395(C_word c,C_word *av) C_noret;
static void C_ccall trf_10395(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10395(t0,t1);}

C_noret_decl(trf_10473)
static void C_ccall trf_10473(C_word c,C_word *av) C_noret;
static void C_ccall trf_10473(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10473(t0,t1,t2);}

C_noret_decl(trf_10507)
static void C_ccall trf_10507(C_word c,C_word *av) C_noret;
static void C_ccall trf_10507(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10507(t0,t1,t2);}

C_noret_decl(trf_10577)
static void C_ccall trf_10577(C_word c,C_word *av) C_noret;
static void C_ccall trf_10577(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10577(t0,t1,t2);}

C_noret_decl(trf_10611)
static void C_ccall trf_10611(C_word c,C_word *av) C_noret;
static void C_ccall trf_10611(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10611(t0,t1,t2);}

C_noret_decl(trf_10651)
static void C_ccall trf_10651(C_word c,C_word *av) C_noret;
static void C_ccall trf_10651(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10651(t0,t1,t2);}

C_noret_decl(trf_10674)
static void C_ccall trf_10674(C_word c,C_word *av) C_noret;
static void C_ccall trf_10674(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10674(t0,t1,t2);}

C_noret_decl(trf_10730)
static void C_ccall trf_10730(C_word c,C_word *av) C_noret;
static void C_ccall trf_10730(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10730(t0,t1,t2);}

C_noret_decl(trf_10751)
static void C_ccall trf_10751(C_word c,C_word *av) C_noret;
static void C_ccall trf_10751(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10751(t0,t1,t2);}

C_noret_decl(trf_10759)
static void C_ccall trf_10759(C_word c,C_word *av) C_noret;
static void C_ccall trf_10759(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10759(t0,t1,t2);}

C_noret_decl(trf_10794)
static void C_ccall trf_10794(C_word c,C_word *av) C_noret;
static void C_ccall trf_10794(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10794(t0,t1,t2);}

C_noret_decl(trf_10825)
static void C_ccall trf_10825(C_word c,C_word *av) C_noret;
static void C_ccall trf_10825(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10825(t0,t1,t2);}

C_noret_decl(trf_10831)
static void C_ccall trf_10831(C_word c,C_word *av) C_noret;
static void C_ccall trf_10831(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10831(t0,t1,t2);}

C_noret_decl(trf_10872)
static void C_ccall trf_10872(C_word c,C_word *av) C_noret;
static void C_ccall trf_10872(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10872(t0,t1,t2);}

C_noret_decl(trf_10981)
static void C_ccall trf_10981(C_word c,C_word *av) C_noret;
static void C_ccall trf_10981(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10981(t0,t1,t2);}

C_noret_decl(trf_11061)
static void C_ccall trf_11061(C_word c,C_word *av) C_noret;
static void C_ccall trf_11061(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11061(t0,t1,t2);}

C_noret_decl(trf_11078)
static void C_ccall trf_11078(C_word c,C_word *av) C_noret;
static void C_ccall trf_11078(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11078(t0,t1);}

C_noret_decl(trf_11102)
static void C_ccall trf_11102(C_word c,C_word *av) C_noret;
static void C_ccall trf_11102(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11102(t0,t1,t2);}

C_noret_decl(trf_11162)
static void C_ccall trf_11162(C_word c,C_word *av) C_noret;
static void C_ccall trf_11162(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11162(t0,t1,t2,t3);}

C_noret_decl(trf_11174)
static void C_ccall trf_11174(C_word c,C_word *av) C_noret;
static void C_ccall trf_11174(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11174(t0,t1,t2);}

C_noret_decl(trf_11279)
static void C_ccall trf_11279(C_word c,C_word *av) C_noret;
static void C_ccall trf_11279(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_11279(t0,t1,t2,t3,t4);}

C_noret_decl(trf_11290)
static void C_ccall trf_11290(C_word c,C_word *av) C_noret;
static void C_ccall trf_11290(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11290(t0,t1,t2);}

C_noret_decl(trf_11303)
static void C_ccall trf_11303(C_word c,C_word *av) C_noret;
static void C_ccall trf_11303(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11303(t0,t1);}

C_noret_decl(trf_11377)
static void C_ccall trf_11377(C_word c,C_word *av) C_noret;
static void C_ccall trf_11377(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11377(t0,t1,t2);}

C_noret_decl(trf_11411)
static void C_ccall trf_11411(C_word c,C_word *av) C_noret;
static void C_ccall trf_11411(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11411(t0,t1,t2);}

C_noret_decl(trf_11470)
static void C_ccall trf_11470(C_word c,C_word *av) C_noret;
static void C_ccall trf_11470(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11470(t0,t1,t2);}

C_noret_decl(trf_11628)
static void C_ccall trf_11628(C_word c,C_word *av) C_noret;
static void C_ccall trf_11628(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11628(t0,t1,t2);}

C_noret_decl(trf_11717)
static void C_ccall trf_11717(C_word c,C_word *av) C_noret;
static void C_ccall trf_11717(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11717(t0,t1,t2);}

C_noret_decl(trf_4531)
static void C_ccall trf_4531(C_word c,C_word *av) C_noret;
static void C_ccall trf_4531(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4531(t0,t1,t2,t3);}

C_noret_decl(trf_4537)
static void C_ccall trf_4537(C_word c,C_word *av) C_noret;
static void C_ccall trf_4537(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4537(t0,t1,t2);}

C_noret_decl(trf_4612)
static void C_ccall trf_4612(C_word c,C_word *av) C_noret;
static void C_ccall trf_4612(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4612(t0,t1,t2);}

C_noret_decl(trf_4695)
static void C_ccall trf_4695(C_word c,C_word *av) C_noret;
static void C_ccall trf_4695(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4695(t0,t1,t2);}

C_noret_decl(trf_4704)
static void C_ccall trf_4704(C_word c,C_word *av) C_noret;
static void C_ccall trf_4704(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4704(t0,t1,t2);}

C_noret_decl(trf_4712)
static void C_ccall trf_4712(C_word c,C_word *av) C_noret;
static void C_ccall trf_4712(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4712(t0,t1,t2,t3);}

C_noret_decl(trf_5351)
static void C_ccall trf_5351(C_word c,C_word *av) C_noret;
static void C_ccall trf_5351(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5351(t0,t1,t2);}

C_noret_decl(trf_5376)
static void C_ccall trf_5376(C_word c,C_word *av) C_noret;
static void C_ccall trf_5376(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5376(t0,t1);}

C_noret_decl(trf_5436)
static void C_ccall trf_5436(C_word c,C_word *av) C_noret;
static void C_ccall trf_5436(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5436(t0,t1,t2,t3);}

C_noret_decl(trf_5454)
static void C_ccall trf_5454(C_word c,C_word *av) C_noret;
static void C_ccall trf_5454(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5454(t0,t1,t2,t3);}

C_noret_decl(trf_5472)
static void C_ccall trf_5472(C_word c,C_word *av) C_noret;
static void C_ccall trf_5472(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5472(t0,t1,t2,t3);}

C_noret_decl(trf_5490)
static void C_ccall trf_5490(C_word c,C_word *av) C_noret;
static void C_ccall trf_5490(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5490(t0,t1,t2,t3);}

C_noret_decl(trf_5526)
static void C_ccall trf_5526(C_word c,C_word *av) C_noret;
static void C_ccall trf_5526(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5526(t0,t1,t2,t3);}

C_noret_decl(trf_5544)
static void C_ccall trf_5544(C_word c,C_word *av) C_noret;
static void C_ccall trf_5544(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5544(t0,t1,t2,t3);}

C_noret_decl(trf_5562)
static void C_ccall trf_5562(C_word c,C_word *av) C_noret;
static void C_ccall trf_5562(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5562(t0,t1,t2,t3);}

C_noret_decl(trf_5580)
static void C_ccall trf_5580(C_word c,C_word *av) C_noret;
static void C_ccall trf_5580(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5580(t0,t1,t2,t3);}

C_noret_decl(trf_5598)
static void C_ccall trf_5598(C_word c,C_word *av) C_noret;
static void C_ccall trf_5598(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5598(t0,t1,t2,t3);}

C_noret_decl(trf_5616)
static void C_ccall trf_5616(C_word c,C_word *av) C_noret;
static void C_ccall trf_5616(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5616(t0,t1,t2,t3);}

C_noret_decl(trf_5634)
static void C_ccall trf_5634(C_word c,C_word *av) C_noret;
static void C_ccall trf_5634(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5634(t0,t1,t2,t3);}

C_noret_decl(trf_5652)
static void C_ccall trf_5652(C_word c,C_word *av) C_noret;
static void C_ccall trf_5652(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5652(t0,t1,t2,t3);}

C_noret_decl(trf_5782)
static void C_ccall trf_5782(C_word c,C_word *av) C_noret;
static void C_ccall trf_5782(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5782(t0,t1,t2);}

C_noret_decl(trf_5826)
static void C_ccall trf_5826(C_word c,C_word *av) C_noret;
static void C_ccall trf_5826(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_5826(t0,t1,t2,t3);}

C_noret_decl(trf_5834)
static void C_ccall trf_5834(C_word c,C_word *av) C_noret;
static void C_ccall trf_5834(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5834(t0,t1,t2);}

C_noret_decl(trf_5952)
static void C_ccall trf_5952(C_word c,C_word *av) C_noret;
static void C_ccall trf_5952(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5952(t0,t1,t2);}

C_noret_decl(trf_6029)
static void C_ccall trf_6029(C_word c,C_word *av) C_noret;
static void C_ccall trf_6029(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6029(t0,t1,t2);}

C_noret_decl(trf_6081)
static void C_ccall trf_6081(C_word c,C_word *av) C_noret;
static void C_ccall trf_6081(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6081(t0,t1,t2);}

C_noret_decl(trf_6142)
static void C_ccall trf_6142(C_word c,C_word *av) C_noret;
static void C_ccall trf_6142(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6142(t0,t1,t2,t3);}

C_noret_decl(trf_6214)
static void C_ccall trf_6214(C_word c,C_word *av) C_noret;
static void C_ccall trf_6214(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6214(t0,t1);}

C_noret_decl(trf_6447)
static void C_ccall trf_6447(C_word c,C_word *av) C_noret;
static void C_ccall trf_6447(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6447(t0,t1,t2);}

C_noret_decl(trf_6454)
static void C_ccall trf_6454(C_word c,C_word *av) C_noret;
static void C_ccall trf_6454(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6454(t0,t1);}

C_noret_decl(trf_6561)
static void C_ccall trf_6561(C_word c,C_word *av) C_noret;
static void C_ccall trf_6561(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6561(t0,t1,t2,t3);}

C_noret_decl(trf_6584)
static void C_ccall trf_6584(C_word c,C_word *av) C_noret;
static void C_ccall trf_6584(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6584(t0,t1,t2);}

C_noret_decl(trf_6611)
static void C_ccall trf_6611(C_word c,C_word *av) C_noret;
static void C_ccall trf_6611(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6611(t0,t1,t2);}

C_noret_decl(trf_6648)
static void C_ccall trf_6648(C_word c,C_word *av) C_noret;
static void C_ccall trf_6648(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6648(t0,t1,t2);}

C_noret_decl(trf_6688)
static void C_ccall trf_6688(C_word c,C_word *av) C_noret;
static void C_ccall trf_6688(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6688(t0,t1,t2);}

C_noret_decl(trf_6765)
static void C_ccall trf_6765(C_word c,C_word *av) C_noret;
static void C_ccall trf_6765(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6765(t0,t1);}

C_noret_decl(trf_6783)
static void C_ccall trf_6783(C_word c,C_word *av) C_noret;
static void C_ccall trf_6783(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6783(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6811)
static void C_ccall trf_6811(C_word c,C_word *av) C_noret;
static void C_ccall trf_6811(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6811(t0,t1,t2);}

C_noret_decl(trf_6830)
static void C_ccall trf_6830(C_word c,C_word *av) C_noret;
static void C_ccall trf_6830(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6830(t0,t1,t2);}

C_noret_decl(trf_6858)
static void C_ccall trf_6858(C_word c,C_word *av) C_noret;
static void C_ccall trf_6858(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_6858(t0,t1,t2,t3);}

C_noret_decl(trf_6941)
static void C_ccall trf_6941(C_word c,C_word *av) C_noret;
static void C_ccall trf_6941(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6941(t0,t1,t2);}

C_noret_decl(trf_7044)
static void C_ccall trf_7044(C_word c,C_word *av) C_noret;
static void C_ccall trf_7044(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7044(t0,t1);}

C_noret_decl(trf_7052)
static void C_ccall trf_7052(C_word c,C_word *av) C_noret;
static void C_ccall trf_7052(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7052(t0,t1);}

C_noret_decl(trf_7092)
static void C_ccall trf_7092(C_word c,C_word *av) C_noret;
static void C_ccall trf_7092(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7092(t0,t1);}

C_noret_decl(trf_7130)
static void C_ccall trf_7130(C_word c,C_word *av) C_noret;
static void C_ccall trf_7130(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7130(t0,t1,t2);}

C_noret_decl(trf_7178)
static void C_ccall trf_7178(C_word c,C_word *av) C_noret;
static void C_ccall trf_7178(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7178(t0,t1,t2);}

C_noret_decl(trf_7235)
static void C_ccall trf_7235(C_word c,C_word *av) C_noret;
static void C_ccall trf_7235(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7235(t0,t1,t2);}

C_noret_decl(trf_7277)
static void C_ccall trf_7277(C_word c,C_word *av) C_noret;
static void C_ccall trf_7277(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7277(t0,t1,t2);}

C_noret_decl(trf_7366)
static void C_ccall trf_7366(C_word c,C_word *av) C_noret;
static void C_ccall trf_7366(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7366(t0,t1,t2);}

C_noret_decl(trf_7391)
static void C_ccall trf_7391(C_word c,C_word *av) C_noret;
static void C_ccall trf_7391(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7391(t0,t1);}

C_noret_decl(trf_7479)
static void C_ccall trf_7479(C_word c,C_word *av) C_noret;
static void C_ccall trf_7479(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7479(t0,t1);}

C_noret_decl(trf_7574)
static void C_ccall trf_7574(C_word c,C_word *av) C_noret;
static void C_ccall trf_7574(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7574(t0,t1,t2);}

C_noret_decl(trf_7600)
static void C_ccall trf_7600(C_word c,C_word *av) C_noret;
static void C_ccall trf_7600(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7600(t0,t1,t2);}

C_noret_decl(trf_7654)
static void C_ccall trf_7654(C_word c,C_word *av) C_noret;
static void C_ccall trf_7654(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7654(t0,t1,t2);}

C_noret_decl(trf_7677)
static void C_ccall trf_7677(C_word c,C_word *av) C_noret;
static void C_ccall trf_7677(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7677(t0,t1,t2);}

C_noret_decl(trf_7732)
static void C_ccall trf_7732(C_word c,C_word *av) C_noret;
static void C_ccall trf_7732(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7732(t0,t1,t2);}

C_noret_decl(trf_7880)
static void C_ccall trf_7880(C_word c,C_word *av) C_noret;
static void C_ccall trf_7880(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7880(t0,t1,t2);}

C_noret_decl(trf_7904)
static void C_ccall trf_7904(C_word c,C_word *av) C_noret;
static void C_ccall trf_7904(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7904(t0,t1,t2);}

C_noret_decl(trf_7959)
static void C_ccall trf_7959(C_word c,C_word *av) C_noret;
static void C_ccall trf_7959(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7959(t0,t1,t2,t3);}

C_noret_decl(trf_8043)
static void C_ccall trf_8043(C_word c,C_word *av) C_noret;
static void C_ccall trf_8043(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8043(t0,t1,t2);}

C_noret_decl(trf_8063)
static void C_ccall trf_8063(C_word c,C_word *av) C_noret;
static void C_ccall trf_8063(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8063(t0,t1,t2);}

C_noret_decl(trf_8077)
static void C_ccall trf_8077(C_word c,C_word *av) C_noret;
static void C_ccall trf_8077(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8077(t0,t1,t2);}

C_noret_decl(trf_8080)
static void C_ccall trf_8080(C_word c,C_word *av) C_noret;
static void C_ccall trf_8080(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8080(t0,t1);}

C_noret_decl(trf_8120)
static void C_ccall trf_8120(C_word c,C_word *av) C_noret;
static void C_ccall trf_8120(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8120(t0,t1,t2);}

C_noret_decl(trf_8265)
static void C_ccall trf_8265(C_word c,C_word *av) C_noret;
static void C_ccall trf_8265(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8265(t0,t1,t2);}

C_noret_decl(trf_8284)
static void C_ccall trf_8284(C_word c,C_word *av) C_noret;
static void C_ccall trf_8284(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8284(t0,t1,t2);}

C_noret_decl(trf_8312)
static void C_ccall trf_8312(C_word c,C_word *av) C_noret;
static void C_ccall trf_8312(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8312(t0,t1,t2);}

C_noret_decl(trf_8351)
static void C_ccall trf_8351(C_word c,C_word *av) C_noret;
static void C_ccall trf_8351(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8351(t0,t1,t2);}

C_noret_decl(trf_8378)
static void C_ccall trf_8378(C_word c,C_word *av) C_noret;
static void C_ccall trf_8378(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8378(t0,t1,t2);}

C_noret_decl(trf_8449)
static void C_ccall trf_8449(C_word c,C_word *av) C_noret;
static void C_ccall trf_8449(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8449(t0,t1,t2);}

C_noret_decl(trf_8497)
static void C_ccall trf_8497(C_word c,C_word *av) C_noret;
static void C_ccall trf_8497(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8497(t0,t1,t2);}

C_noret_decl(trf_8641)
static void C_ccall trf_8641(C_word c,C_word *av) C_noret;
static void C_ccall trf_8641(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8641(t0,t1,t2);}

C_noret_decl(trf_8704)
static void C_ccall trf_8704(C_word c,C_word *av) C_noret;
static void C_ccall trf_8704(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8704(t0,t1,t2);}

C_noret_decl(trf_8735)
static void C_ccall trf_8735(C_word c,C_word *av) C_noret;
static void C_ccall trf_8735(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8735(t0,t1,t2);}

C_noret_decl(trf_8745)
static void C_ccall trf_8745(C_word c,C_word *av) C_noret;
static void C_ccall trf_8745(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8745(t0,t1);}

C_noret_decl(trf_8778)
static void C_ccall trf_8778(C_word c,C_word *av) C_noret;
static void C_ccall trf_8778(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8778(t0,t1,t2);}

C_noret_decl(trf_8805)
static void C_ccall trf_8805(C_word c,C_word *av) C_noret;
static void C_ccall trf_8805(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8805(t0,t1,t2);}

C_noret_decl(trf_8871)
static void C_ccall trf_8871(C_word c,C_word *av) C_noret;
static void C_ccall trf_8871(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8871(t0,t1,t2);}

C_noret_decl(trf_8878)
static void C_ccall trf_8878(C_word c,C_word *av) C_noret;
static void C_ccall trf_8878(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8878(t0,t1);}

C_noret_decl(trf_8911)
static void C_ccall trf_8911(C_word c,C_word *av) C_noret;
static void C_ccall trf_8911(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8911(t0,t1,t2);}

C_noret_decl(trf_8996)
static void C_ccall trf_8996(C_word c,C_word *av) C_noret;
static void C_ccall trf_8996(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8996(t0,t1,t2);}

C_noret_decl(trf_9210)
static void C_ccall trf_9210(C_word c,C_word *av) C_noret;
static void C_ccall trf_9210(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9210(t0,t1,t2);}

C_noret_decl(trf_9240)
static void C_ccall trf_9240(C_word c,C_word *av) C_noret;
static void C_ccall trf_9240(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_9240(t0,t1,t2,t3);}

C_noret_decl(trf_9254)
static void C_ccall trf_9254(C_word c,C_word *av) C_noret;
static void C_ccall trf_9254(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9254(t0,t1,t2);}

C_noret_decl(trf_9298)
static void C_ccall trf_9298(C_word c,C_word *av) C_noret;
static void C_ccall trf_9298(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9298(t0,t1,t2);}

C_noret_decl(trf_9312)
static void C_ccall trf_9312(C_word c,C_word *av) C_noret;
static void C_ccall trf_9312(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9312(t0,t1,t2);}

C_noret_decl(trf_9347)
static void C_ccall trf_9347(C_word c,C_word *av) C_noret;
static void C_ccall trf_9347(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9347(t0,t1,t2);}

C_noret_decl(trf_9387)
static void C_ccall trf_9387(C_word c,C_word *av) C_noret;
static void C_ccall trf_9387(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9387(t0,t1,t2);}

C_noret_decl(trf_9443)
static void C_ccall trf_9443(C_word c,C_word *av) C_noret;
static void C_ccall trf_9443(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9443(t0,t1,t2);}

C_noret_decl(trf_9502)
static void C_ccall trf_9502(C_word c,C_word *av) C_noret;
static void C_ccall trf_9502(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_9502(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9510)
static void C_ccall trf_9510(C_word c,C_word *av) C_noret;
static void C_ccall trf_9510(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9510(t0,t1,t2);}

C_noret_decl(trf_9533)
static void C_ccall trf_9533(C_word c,C_word *av) C_noret;
static void C_ccall trf_9533(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9533(t0,t1,t2);}

C_noret_decl(trf_9561)
static void C_ccall trf_9561(C_word c,C_word *av) C_noret;
static void C_ccall trf_9561(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9561(t0,t1,t2);}

C_noret_decl(trf_9583)
static void C_ccall trf_9583(C_word c,C_word *av) C_noret;
static void C_ccall trf_9583(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9583(t0,t1,t2);}

C_noret_decl(trf_9652)
static void C_ccall trf_9652(C_word c,C_word *av) C_noret;
static void C_ccall trf_9652(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9652(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9664)
static void C_ccall trf_9664(C_word c,C_word *av) C_noret;
static void C_ccall trf_9664(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9664(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9672)
static void C_ccall trf_9672(C_word c,C_word *av) C_noret;
static void C_ccall trf_9672(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9672(t0,t1,t2);}

C_noret_decl(trf_9695)
static void C_ccall trf_9695(C_word c,C_word *av) C_noret;
static void C_ccall trf_9695(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9695(t0,t1,t2);}

C_noret_decl(trf_9723)
static void C_ccall trf_9723(C_word c,C_word *av) C_noret;
static void C_ccall trf_9723(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9723(t0,t1,t2);}

C_noret_decl(trf_9764)
static void C_ccall trf_9764(C_word c,C_word *av) C_noret;
static void C_ccall trf_9764(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9764(t0,t1,t2);}

C_noret_decl(trf_9835)
static void C_ccall trf_9835(C_word c,C_word *av) C_noret;
static void C_ccall trf_9835(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9835(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9847)
static void C_ccall trf_9847(C_word c,C_word *av) C_noret;
static void C_ccall trf_9847(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_9847(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9855)
static void C_ccall trf_9855(C_word c,C_word *av) C_noret;
static void C_ccall trf_9855(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9855(t0,t1,t2);}

C_noret_decl(trf_9887)
static void C_ccall trf_9887(C_word c,C_word *av) C_noret;
static void C_ccall trf_9887(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9887(t0,t1,t2);}

C_noret_decl(trf_9910)
static void C_ccall trf_9910(C_word c,C_word *av) C_noret;
static void C_ccall trf_9910(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9910(t0,t1,t2);}

C_noret_decl(trf_9949)
static void C_ccall trf_9949(C_word c,C_word *av) C_noret;
static void C_ccall trf_9949(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_9949(t0,t1,t2);}

/* f12519 in g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f12519(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f12519,c,av);}
/* modules.scm:888: module-rename */
f_10730(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f12523 in g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f12523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f12523,c,av);}
/* modules.scm:888: module-rename */
f_10730(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* f13258 in k6671 in g1317 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f13258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f13258,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f13262 in g1317 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f13262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f13262,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g2541 in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_10002(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_10002,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10018,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:791: delete */
f_4531(t8,t2,((C_word*)t0)[5],*((C_word*)lf[81]+1));}

/* k10016 in g2541 in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_10018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10018,c,av);}
/* modules.scm:789: loopv */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9835(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_10058,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:795: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[185]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[185]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[192];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10214,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:805: chicken.syntax#strip-syntax */
t3=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_10061,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li167),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10076,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li171),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:796: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a10065 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10066,c,av);}
/* modules.scm:796: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9443(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10076(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10076,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t1,a[8]=t2,a[9]=t3,a[10]=t7,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:797: chicken.syntax#strip-syntax */
t9=C_fast_retrieve(lf[102]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_10080(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_10080,c,av);}
a=C_alloc(37);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10082,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li168),tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[5],lf[5]);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10125,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t3,a[7]=((C_word*)t0)[10],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10171,a[2]=t6,a[3]=t11,a[4]=t2,a[5]=t7,a[6]=((C_word)li170),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_10171(t13,t9,((C_word*)t0)[5]);}

/* rename in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_10082(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_10082,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10090,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10096,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10100,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:801: tostr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_9254(t6,t5,((C_word*)t0)[3]);}

/* k10088 in rename in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_10090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10090,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,t1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k10094 in rename in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_10096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10096,c,av);}
/* modules.scm:800: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[191]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[191]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k10098 in rename in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_10100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10100,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10104,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:801: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[178]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[178]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
tp(3,av2);}}

/* k10102 in k10098 in rename in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_10104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10104,c,av);}
/* modules.scm:801: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[172]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[172]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k10123 in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_10125(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10125,c,av);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[5]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10135,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10137,a[2]=t4,a[3]=t9,a[4]=((C_word*)t0)[8],a[5]=t5,a[6]=((C_word)li169),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10137(t11,t7,((C_word*)t0)[2]);}

/* k10133 in k10123 in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_10135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_10135,c,av);}
/* modules.scm:803: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
av2[6]=t1;
av2[7]=((C_word*)t0)[7];
C_values(8,av2);}}

/* map-loop2607 in k10123 in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void f_10137(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10137,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:803: g2613 */
t4=((C_word*)t0)[4];
f_10082(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10160 in map-loop2607 in k10123 in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_10162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10162,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10137(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop2581 in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_10171(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10171,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:803: g2587 */
t4=((C_word*)t0)[4];
f_10082(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10194 in map-loop2581 in k10078 in a10075 in k10059 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_10196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10196,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_10171(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k10212 in k10056 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10214,c,av);}
/* modules.scm:805: module-imports */
t2=((C_word*)t0)[2];
f_9387(t2,((C_word*)t0)[3],t1);}

/* ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10;
C_word t11;
C_word *a;
if(c!=10) C_bad_argc_2(c,10,t0);
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_10220,c,av);}
a=C_alloc(11);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10224,a[2]=t3,a[3]=t4,a[4]=t9,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:808: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[185]);
C_word *av2=av;
av2[0]=*((C_word*)lf[185]+1);
av2[1]=t10;
av2[2]=t9;
av2[3]=t2;
av2[4]=lf[202];
tp(5,av2);}}

/* k10222 in ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10224(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_10224,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li177),tmp=(C_word)a,a+=10,tmp);
t3=C_i_cdr(((C_word*)t0)[9]);
t4=C_i_check_list_2(t3,lf[72]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10259,a[2]=((C_word*)t0)[10],tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10261,a[2]=t7,a[3]=t2,a[4]=((C_word)li178),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_10261(t9,t5,t3);}

/* g2650 in k10222 in ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10225(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,8)))){
C_save_and_reclaim_args((void *)trf_10225,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10231,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li175),tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10237,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li176),tmp=(C_word)a,a+=9,tmp);
/* modules.scm:811: ##sys#call-with-values */{
C_word av2[4];
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a10230 in g2650 in k10222 in ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10231,c,av);}
/* modules.scm:811: ##sys#decompose-import */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[109]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
tp(6,av2);}}

/* a10236 in g2650 in k10222 in ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10237(C_word c,C_word *av){
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
C_word *a;
if(c!=8) C_bad_argc_2(c,8,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,10)))){
C_save_and_reclaim((void *)f_10237,c,av);}
if(C_truep(C_i_not(t4))){
/* modules.scm:813: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[180]);
C_word *av2=av;
av2[0]=*((C_word*)lf[180]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[199];
av2[4]=t2;
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}
else{
/* modules.scm:814: ##sys#import */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[200]);
C_word *av2;
if(c >= 11) {
  av2=av;
} else {
  av2=C_alloc(11);
}
av2[0]=*((C_word*)lf[200]+1);
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
av2[4]=t6;
av2[5]=t7;
av2[6]=((C_word*)t0)[4];
av2[7]=((C_word*)t0)[5];
av2[8]=((C_word*)t0)[6];
av2[9]=((C_word*)t0)[7];
av2[10]=((C_word*)t0)[2];
tp(11,av2);}}}

/* k10257 in k10222 in ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10259,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[201];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop2649 in k10222 in ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10261(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10261,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10271,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:809: g2650 */
t4=((C_word*)t0)[3];
f_10225(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10269 in for-each-loop2649 in k10222 in ##sys#expand-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10271,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10261(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
C_word t7=av[7];
C_word t8=av[8];
C_word t9=av[9];
C_word t10=av[10];
C_word t11;
C_word t12;
C_word *a;
if(c!=11) C_bad_argc_2(c,11,t0);
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10284,c,av);}
a=C_alloc(12);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10288,a[2]=t6,a[3]=t3,a[4]=t7,a[5]=t4,a[6]=t1,a[7]=t9,a[8]=t5,a[9]=t10,a[10]=t8,a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:819: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t11;
tp(2,av2);}}

/* k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10288,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[10])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10705,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:824: module-meta-import-forms */
  f_5535(C_retrieve2(lf[33],C_text("module-meta-import-forms")),t1)
);
t5=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:824: scheme#append */
t6=*((C_word*)lf[60]+1);{
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
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10720,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:827: module-import-forms */
  f_5517(C_retrieve2(lf[30],C_text("module-import-forms")),t1)
);
t5=C_a_i_list1(&a,1,((C_word*)t0)[11]);
/* modules.scm:827: scheme#append */
t6=*((C_word*)lf[60]+1);{
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
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_10291(2,av2);}}}

/* k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_10291,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10301,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[2],a[6]=((C_word)li180),tmp=(C_word)a,a+=7,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[72]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10345,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10674,a[2]=t6,a[3]=t2,a[4]=((C_word)li187),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_10674(t8,t4,((C_word*)t0)[3]);}

/* g2711 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10301(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_10301,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+4,t1);
t5=C_i_car(((C_word*)t0)[3]);
t6=C_mutate(((C_word *)t0)+2,t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10308,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:834: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[205]);
C_word av2[5];
av2[0]=*((C_word*)lf[205]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[164];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k10306 in g2711 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10308,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10339,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:835: import-env */
t4=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k10337 in k10306 in g2711 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10339,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=C_i_cdr(t2);
t5=C_eqp(t3,t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:838: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[203]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[204];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10345(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_10345,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10346,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[4],a[5]=((C_word)li181),tmp=(C_word)a,a+=6,tmp);
t4=C_i_check_list_2(((C_word*)t2)[5],lf[72]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10392,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10651,a[2]=t7,a[3]=t3,a[4]=((C_word)li186),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_10651(t9,t5,((C_word*)t2)[5]);}

/* g2721 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_10346,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=C_i_car(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10353,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:843: ##sys#put! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[205]);
C_word av2[5];
av2[0]=*((C_word*)lf[205]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[164];
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k10351 in g2721 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10353,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_u_i_car(((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10386,a[2]=t3,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:844: macro-env */
t5=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k10384 in k10351 in g2721 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10386(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10386,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_i_cdr(t2);
t5=C_eqp(t3,t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:846: ##sys#notice */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[203]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[203]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[206];
av2[3]=C_u_i_car(((C_word*)t0)[3]);
tp(4,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_10392,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10395,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[6],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[2],a[6]=((C_word*)t2)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t2)[7])){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10420,a[2]=((C_word*)t2)[8],a[3]=t3,a[4]=((C_word*)t2)[9],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t2)[8])){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_10420(2,av2);}}
else{
/* modules.scm:850: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[180]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[180]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[10];
av2[3]=lf[207];
tp(4,av2);}}}
else{
t4=t3;
f_10395(t4,C_SCHEME_UNDEFINED);}}

/* k10393 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10395(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_10395,2,t0,t1);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10413,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10417,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:871: import-env */
t5=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k10396 in k10393 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_10398,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10409,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:872: macro-env */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k10403 in k10396 in k10393 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10405,c,av);}
/* modules.scm:872: macro-env */
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

/* k10407 in k10396 in k10393 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10409,c,av);}
a=C_alloc(6);
/* modules.scm:872: merge-se */
f_6765(((C_word*)t0)[2],C_a_i_list(&a,2,t1,((C_word*)t0)[3]));}

/* k10411 in k10393 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10413,c,av);}
/* modules.scm:871: import-env */
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

/* k10415 in k10393 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_10417,c,av);}
a=C_alloc(6);
/* modules.scm:871: merge-se */
f_6765(((C_word*)t0)[2],C_a_i_list(&a,2,t1,((C_word*)t0)[3]));}

/* k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10420(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_10420,c,av);}
a=C_alloc(27);
t2=(
/* modules.scm:851: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),((C_word*)t0)[2])
);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10426,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10446,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10543,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(
/* modules.scm:853: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),((C_word*)t0)[2])
);
/* modules.scm:853: scheme#append */
t8=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10554,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(
/* modules.scm:863: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),((C_word*)t0)[2])
);
t7=C_eqp(C_SCHEME_TRUE,t6);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:t6);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10568,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10611,a[2]=t11,a[3]=t15,a[4]=t12,a[5]=((C_word)li185),tmp=(C_word)a,a+=6,tmp));
t17=((C_word*)t15)[1];
f_10611(t17,t13,((C_word*)t0)[6]);}}

/* k10424 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_10426,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10436,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:869: module-iexports */
  f_5607(C_retrieve2(lf[45],C_text("module-iexports")),((C_word*)t0)[3])
);
/* modules.scm:869: merge-se */
f_6765(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[4]));}

/* k10427 in k10424 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_10429,c,av);}
t2=((C_word*)t0)[2];
f_10395(t2,C_SCHEME_UNDEFINED);}

/* k10434 in k10424 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10436,c,av);}
/* modules.scm:867: set-module-iexports! */
t2=C_retrieve2(lf[47],C_text("set-module-iexports!"));
f_5616(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10444 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10446(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10446,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(
/* modules.scm:856: module-exist-list */
  f_5463(C_retrieve2(lf[22],C_text("module-exist-list")),((C_word*)t0)[3])
);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10464,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10507,a[2]=t6,a[3]=t10,a[4]=t7,a[5]=((C_word)li183),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_10507(t12,t8,((C_word*)t0)[5]);}

/* k10451 in k10444 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10453,c,av);}
/* modules.scm:854: set-module-exist-list! */
t2=C_retrieve2(lf[24],C_text("set-module-exist-list!"));
f_5472(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10462 in k10444 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10464(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10464,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10473,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li182),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10473(t10,t6,((C_word*)t0)[4]);}

/* k10469 in k10462 in k10444 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10471,c,av);}
/* modules.scm:856: scheme#append */
t2=*((C_word*)lf[60]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop2792 in k10462 in k10444 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10473(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10473,3,t0,t1,t2);}
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

/* map-loop2766 in k10444 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10507(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10507,3,t0,t1,t2);}
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

/* k10541 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10543,c,av);}
/* modules.scm:853: set-module-sexports! */
t2=C_retrieve2(lf[44],C_text("set-module-sexports!"));
f_5598(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10552 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10554,c,av);}
/* modules.scm:860: set-module-export-list! */
t2=C_retrieve2(lf[17],C_text("set-module-export-list!"));
f_5436(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10566 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10568(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10568,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10577,a[2]=t4,a[3]=t8,a[4]=t5,a[5]=((C_word)li184),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_10577(t10,t6,((C_word*)t0)[4]);}

/* k10573 in k10566 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10575(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10575,c,av);}
/* modules.scm:862: scheme#append */
t2=*((C_word*)lf[60]+1);{
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
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* map-loop2846 in k10566 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10577(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10577,3,t0,t1,t2);}
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

/* map-loop2820 in k10418 in k10390 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10611(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_10611,3,t0,t1,t2);}
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

/* for-each-loop2720 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10651(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10651,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10661,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:840: g2721 */
t4=((C_word*)t0)[3];
f_10346(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10659 in for-each-loop2720 in k10343 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10661,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10651(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2710 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10674(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10674,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10684,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:831: g2711 */
t4=((C_word*)t0)[3];
f_10301(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10682 in for-each-loop2710 in k10289 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10684,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10674(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k10703 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10705,c,av);}
/* modules.scm:822: set-module-meta-import-forms! */
t2=C_retrieve2(lf[35],C_text("set-module-meta-import-forms!"));
f_5544(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k10718 in k10286 in ##sys#import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10720,c,av);}
/* modules.scm:825: set-module-import-forms! */
t2=C_retrieve2(lf[32],C_text("set-module-import-forms!"));
f_5526(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* module-rename in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10730(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_10730,3,t1,t2,t3);}
a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10738,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10742,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:877: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[178]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[178]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k10736 in module-rename in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10738,c,av);}
/* modules.scm:875: ##sys#string->symbol */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[191]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[191]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k10740 in module-rename in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10742,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10746,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:879: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[178]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[178]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k10744 in k10740 in module-rename in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10746,c,av);}
/* modules.scm:876: scheme#string-append */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[208];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10748(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_10748,c,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10751,a[2]=t3,a[3]=t4,a[4]=((C_word)li192),tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_u_i_namespaced_symbolp(t2))){
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10820,a[2]=t2,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:891: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t6;
tp(2,av2);}}}

/* mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_10751,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10755,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:883: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word av2[2];
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
tp(2,av2);}}

/* k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10755,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word)li191),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:883: g2903 */
t3=t2;
f_10759(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10759(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_10759,3,t0,t1,t2);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10766,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f12519,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:888: module-name */
t5=C_retrieve2(lf[11],C_text("module-name"));{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
f_5409(3,av2);}}
else{
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:264: module-undefined-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word av2[3];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f12523,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:888: module-name */
t5=C_retrieve2(lf[11],C_text("module-name"));{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
f_5409(3,av2);}}}}

/* k10764 in g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10766,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:888: module-name */
t3=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
f_5409(3,av2);}}

/* k10771 in k10764 in g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10773,c,av);}
/* modules.scm:888: module-rename */
f_10730(((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* g2914 in k10818 in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10794(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_10794,3,t0,t1,t2);}
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
/* modules.scm:896: mrename */
t4=((C_word*)t0)[2];
f_10751(t4,t1,((C_word*)t0)[3]);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10818 in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10820,c,av);}
a=C_alloc(5);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li193),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:890: g2914 */
t4=t3;
f_10794(t4,((C_word*)t0)[4],t2);}
else{
/* modules.scm:897: mrename */
t3=((C_word*)t0)[3];
f_10751(t3,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10822(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_10822,c,av);}
a=C_alloc(22);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10825,a[2]=t3,a[3]=((C_word)li195),tmp=(C_word)a,a+=4,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10831,a[2]=t5,a[3]=t2,a[4]=((C_word)li196),tmp=(C_word)a,a+=5,tmp));
t10=C_eqp(lf[213],t2);
if(C_truep(t10)){
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* modules.scm:907: iface */
t11=((C_word*)t7)[1];
f_10831(t11,t1,t2);}
else{
t11=C_i_listp(t2);
if(C_truep(C_i_not(t11))){
/* modules.scm:909: err */
t12=((C_word*)t5)[1];
f_10825(t12,t1,C_a_i_list(&a,2,lf[214],t2));}
else{
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10872,a[2]=t5,a[3]=t2,a[4]=t13,a[5]=t7,a[6]=((C_word)li198),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_10872(t15,t1,t2);}}}}

/* err in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10825,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=C_fast_retrieve(lf[180]);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* iface in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10831,3,t0,t1,t2);}
a=C_alloc(9);
t3=C_i_getprop(t2,lf[211],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:905: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10825(t4,t1,C_a_i_list(&a,3,lf[212],t2,((C_word*)t0)[3]));}}

/* loop in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10872(C_word t0,C_word t1,C_word t2){
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
C_word t13;
C_word t14;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_10872,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:914: err */
t4=((C_word*)((C_word*)t0)[2])[1];
f_10825(t4,t1,C_a_i_list(&a,2,lf[215],((C_word*)t0)[3]));}
else{
t4=C_i_car(t2);
if(C_truep(C_i_symbolp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10904,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:917: loop */
t13=t5;
t14=C_u_i_cdr(t2);
t1=t13;
t2=t14;
goto loop;}
else{
t5=C_i_listp(t4);
if(C_truep(C_i_not(t5))){
/* modules.scm:919: err */
t6=((C_word*)((C_word*)t0)[2])[1];
f_10825(t6,t1,C_a_i_list(&a,3,lf[216],t4,((C_word*)t0)[3]));}
else{
t6=C_i_car(t4);
t7=C_eqp(lf[217],t6);
if(C_truep(t7)){
t8=C_u_i_cdr(t4);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10930,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:921: loop */
t13=t9;
t14=C_u_i_cdr(t2);
t1=t13;
t2=t14;
goto loop;}
else{
t8=C_eqp(lf[218],C_u_i_car(t4));
if(C_truep(t8)){
t9=C_i_pairp(C_u_i_cdr(t4));
t10=(C_truep(t9)?C_i_symbolp(C_i_cadr(t4)):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10951,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:924: iface */
t12=((C_word*)((C_word*)t0)[5])[1];
f_10831(t12,t11,C_i_cadr(t4));}
else{
/* modules.scm:925: err */
t11=((C_word*)((C_word*)t0)[2])[1];
f_10825(t11,t1,C_a_i_list(&a,3,lf[219],t4,((C_word*)t0)[3]));}}
else{
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10981,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t10,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word)li197),tmp=(C_word)a,a+=9,tmp));
t12=((C_word*)t10)[1];
f_10981(t12,t1,t4);}}}}}}}

/* k10902 in loop in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10904,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10928 in loop in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10930,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10949 in loop in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_10951,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10955,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:924: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10872(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k10953 in k10949 in loop in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10955,c,av);}
/* modules.scm:924: scheme#append */
t2=*((C_word*)lf[60]+1);{
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

/* loop2 in loop in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_10981(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_10981,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10995,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:928: loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_10872(t4,t3,C_i_cdr(((C_word*)t0)[4]));}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
/* modules.scm:929: loop2 */
t5=t1;
t6=C_u_i_cdr(t2);
t1=t5;
t2=t6;
goto loop;}
else{
/* modules.scm:930: err */
t4=((C_word*)((C_word*)t0)[6])[1];
f_10825(t4,t1,C_a_i_list(&a,3,lf[220],((C_word*)t0)[2],((C_word*)t0)[7]));}}}

/* k10993 in loop2 in loop in ##sys#validate-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_10995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10995,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11037(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,1)))){
C_save_and_reclaim((void *)f_11037,c,av);}
a=C_alloc(14);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t3,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_putprop(&a,3,t2,lf[104],t7);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11053(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11053,c,av);}
a=C_alloc(18);
t5=C_i_getprop(t3,lf[104],C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11061,a[2]=t2,a[3]=((C_word)li201),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11068,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
f_11068(2,av2);}}
else{
/* modules.scm:939: err */
t8=t6;
f_11061(t8,t7,C_a_i_list(&a,2,lf[227],t3));}}

/* err in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11061(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_11061,3,t0,t1,t2);}{
C_word av2[5];
av2[0]=0;
av2[1]=t1;
av2[2]=C_fast_retrieve(lf[180]);
av2[3]=((C_word*)t0)[2];
av2[4]=t2;
C_apply(5,av2);}}

/* k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11068(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_11068,c,av);}
a=C_alloc(23);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_u_i_cdr(((C_word*)t0)[2]);
t5=C_u_i_cdr(t4);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11078,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li203),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11141,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11162,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t6,a[5]=t9,a[6]=((C_word)li205),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_11162(t11,t7,((C_word*)t0)[4],t2);}

/* merr in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11078(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_11078,2,t0,t1);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[5]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11100,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11102,a[2]=t5,a[3]=t10,a[4]=t6,a[5]=((C_word)li202),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11102(t12,t8,((C_word*)t0)[4]);}

/* k11098 in merr in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_11100,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:944: err */
t3=((C_word*)t0)[3];
f_11061(t3,((C_word*)t0)[4],C_a_i_list(&a,3,lf[223],((C_word*)t0)[5],t2));}

/* map-loop2992 in merr in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11102(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11102,3,t0,t1,t2);}
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

/* k11139 in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_11141,c,av);}
a=C_alloc(18);
t2=C_eqp(lf[213],((C_word*)t0)[2]);
t3=(C_truep(t2)?C_a_i_cons(&a,2,C_SCHEME_TRUE,((C_word*)t0)[3]):C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]));
t4=C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=C_a_i_cons(&a,2,lf[224],t4);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[225],t1,t5);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11162(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_11162,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11174,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word)li204),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_11174(t7,t1,t3);}
else{
if(C_truep(C_i_nullp(t3))){
/* modules.scm:963: merr */
t4=((C_word*)t0)[4];
f_11078(t4,t1);}
else{
t4=C_i_car(t3);
t5=C_i_car(t4);
t6=C_u_i_cdr(t4);
t7=C_i_pairp(t5);
t8=(C_truep(t7)?C_i_car(t5):t5);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11249,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],a[8]=t6,a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:971: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word av2[3];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t9;
av2[2]=C_i_car(t2);
tp(3,av2);}}}}

/* loop2 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11174(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_11174,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_cdr(t3);
t6=C_i_caar(t3);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11197,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11217,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:957: scheme#cadar */
t9=*((C_word*)lf[134]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t8;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
/* modules.scm:961: merr */
t5=((C_word*)t0)[5];
f_11078(t5,t1);}}}

/* k11195 in loop2 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_11197,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11200,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:958: match-functor-argument */
f_11279(t2,((C_word*)t0)[6],t1,((C_word*)t0)[7],((C_word*)t0)[8]);}

/* k11198 in k11195 in loop2 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11200,c,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11211,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:959: loop2 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_11174(t4,t3,C_u_i_cdr(((C_word*)t0)[6]));}

/* k11209 in k11198 in k11195 in loop2 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11211,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11215 in loop2 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11217,c,av);}
/* modules.scm:957: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[64]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k11247 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_11249,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11252,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:972: match-functor-argument */
f_11279(t2,((C_word*)t0)[7],t1,((C_word*)t0)[8],((C_word*)t0)[9]);}

/* k11250 in k11247 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11252,c,av);}
a=C_alloc(10);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11263,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:974: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_11162(t4,t3,C_u_i_cdr(((C_word*)t0)[6]),C_u_i_cdr(((C_word*)t0)[7]));}

/* k11261 in k11250 in k11247 in loop in k11066 in ##sys#instantiate-functor in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11263,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11279(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_11279,5,t1,t2,t3,t4,t5);}
a=C_alloc(10);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11283,a[2]=t4,a[3]=t1,a[4]=t5,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11436,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:981: ##sys#resolve-module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[61]);
C_word av2[4];
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t7;
av2[2]=t3;
av2[3]=lf[9];
tp(4,av2);}}

/* k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11283(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_11283,c,av);}
a=C_alloc(21);
t2=C_eqp(((C_word*)t0)[2],lf[213]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11290,a[2]=t1,a[3]=t4,a[4]=((C_word)li207),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11330,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11411,a[2]=t9,a[3]=t5,a[4]=((C_word)li209),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_11411(t11,t7,((C_word*)t0)[2]);}}

/* g3053 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11290,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_symbolp(t2);
t4=(C_truep(t3)?t2:C_i_car(t2));
t5=(
/* modules.scm:987: module-vexports */
  f_5571(C_retrieve2(lf[39],C_text("module-vexports")),((C_word*)t0)[2])
);
t6=C_i_assq(t4,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11303,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_11303(t8,t6);}
else{
t8=(
/* modules.scm:988: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),((C_word*)t0)[2])
);
t9=t7;
f_11303(t9,C_i_assq(t4,t8));}}

/* k11301 in g3053 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11303(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_11303,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11330,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11343,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11347,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:996: scheme#symbol->string */
t4=*((C_word*)lf[149]+1);{
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
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11341 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11343(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11343,c,av);}
/* modules.scm:992: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[180]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[180]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[9];
av2[3]=t1;
tp(4,av2);}}

/* k11345 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11347(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11347,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:997: scheme#symbol->string */
t3=*((C_word*)lf[149]+1);{
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

/* k11349 in k11345 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11351,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:998: scheme#symbol->string */
t3=*((C_word*)lf[149]+1);{
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

/* k11353 in k11349 in k11345 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11355(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11355,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=((C_word*)((C_word*)t0)[2])[1];
t7=C_i_check_list_2(t6,lf[5]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11377,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li208),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_11377(t12,t8,t6);}

/* k11367 in map-loop3074 in k11353 in k11349 in k11345 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11369,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[172]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[172]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[233];
av2[3]=t1;
tp(4,av2);}}

/* k11373 in k11353 in k11349 in k11345 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,11)))){
C_save_and_reclaim((void *)f_11375,c,av);}{
C_word *av2;
if(c >= 12) {
  av2=av;
} else {
  av2=C_alloc(12);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[146]+1);
av2[3]=lf[228];
av2[4]=((C_word*)t0)[3];
av2[5]=lf[229];
av2[6]=lf[230];
av2[7]=((C_word*)t0)[4];
av2[8]=lf[231];
av2[9]=((C_word*)t0)[5];
av2[10]=lf[232];
av2[11]=t1;
C_apply(12,av2);}}

/* map-loop3074 in k11353 in k11349 in k11345 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11377(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_11377,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11369,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:999: scheme#symbol->string */
t6=*((C_word*)lf[149]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11400 in map-loop3074 in k11353 in k11349 in k11345 in k11328 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11402,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_11377(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* for-each-loop3052 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11411(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11411,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11421,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:984: g3053 */
t4=((C_word*)t0)[3];
f_11290(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11419 in for-each-loop3052 in k11281 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11421,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_11411(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k11434 in match-functor-argument in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11436,c,av);}
/* modules.scm:981: ##sys#find-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[9];
tp(5,av2);}}

/* k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_11439,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11834,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1134: scheme#append */
t4=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[319];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11442,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11445,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1140: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[318];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11445,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11448,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1141: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t3;
av2[2]=lf[317];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=((C_word*)t2)[3];
tp(6,av2);}}

/* k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11448,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11451,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1143: ##sys#register-module-alias */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t2;
av2[2]=lf[315];
av2[3]=lf[316];
tp(4,av2);}}

/* k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_11451,c,av);}
a=C_alloc(12);
t2=C_mutate((C_word*)lf[236]+1 /* (set! se-subset ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11453,a[2]=((C_word)li213),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11505,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11826,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11830,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1303: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t5;
tp(2,av2);}}

/* se-subset in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11453(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_11453,c,av);}
a=C_alloc(18);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11458,a[2]=t3,a[3]=((C_word)li211),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t2,lf[5]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11470,a[2]=t8,a[3]=t6,a[4]=t11,a[5]=t7,a[6]=((C_word)li212),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_11470(t13,t1,t2);}

/* g3116 in se-subset in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_11458(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)t0)[2]));}

/* map-loop3110 in se-subset in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_11470(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11470,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:1146: g3116 */
  f_11458(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11505,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11508,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11822,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1307: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11508,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1309: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=t2;
av2[2]=lf[309];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_fast_retrieve(lf[310]);
tp(5,av2);}}

/* k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11511,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1312: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=t2;
av2[2]=lf[307];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_fast_retrieve(lf[308]);
tp(5,av2);}}

/* k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11514,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11818,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1316: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[306];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11517,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11814,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1319: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[304];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11520,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11810,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1322: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[302];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11523,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1324: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[298];
av2[3]=lf[299];
av2[4]=lf[300];
tp(5,av2);}}

/* k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11526,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11529,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11806,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1338: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[296];
av2[3]=C_fast_retrieve(lf[297]);
tp(4,av2);}}

/* k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_11529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11529,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11802,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1341: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[293];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_11532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11532,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11535,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1343: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[290];
av2[3]=lf[251];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_fast_retrieve(lf[291]);
tp(6,av2);}}

/* k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_11535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_11535,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11538,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_assq(lf[286],C_fast_retrieve(lf[235]));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11798,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1354: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t4;
av2[2]=lf[289];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_11538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11538,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11541,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1356: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[284];
av2[3]=lf[251];
av2[4]=lf[285];
tp(5,av2);}}

/* k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in ... */
static void C_ccall f_11541(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11541,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11544,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1363: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[282];
av2[3]=lf[251];
av2[4]=lf[283];
tp(5,av2);}}

/* k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in ... */
static void C_ccall f_11544(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11544,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1390: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[280];
av2[3]=lf[251];
av2[4]=lf[281];
tp(5,av2);}}

/* k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in ... */
static void C_ccall f_11547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11547,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11550,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11786,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1403: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[278];
av2[3]=C_fast_retrieve(lf[279]);
tp(4,av2);}}

/* k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in ... */
static void C_ccall f_11550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11550,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11553,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11782,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1406: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[275];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in ... */
static void C_ccall f_11553(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11553,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1408: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[271];
av2[3]=lf[272];
av2[4]=lf[273];
tp(5,av2);}}

/* k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in ... */
static void C_ccall f_11556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11556,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11559,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11778,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1412: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[270];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in ... */
static void C_ccall f_11559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11559,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11562,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11774,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1415: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=t3;
av2[2]=lf[268];
av2[3]=C_fast_retrieve(lf[253]);
tp(4,av2);}}

/* k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in ... */
static void C_ccall f_11562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11562,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1417: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[265];
av2[3]=lf[251];
av2[4]=lf[266];
tp(5,av2);}}

/* k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in ... */
static void C_ccall f_11565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11565,c,av);}
a=C_alloc(9);
t2=C_mutate((C_word*)lf[237]+1 /* (set! chicken.module#module-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11567,a[2]=((C_word)li214),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[241]+1 /* (set! scheme.eval#environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11603,a[2]=((C_word)li219),tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1461: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t4;
av2[2]=lf[263];
av2[3]=lf[257];
av2[4]=lf[264];
tp(5,av2);}}

/* chicken.module#module-environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in ... */
static void C_ccall f_11567(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_11567,c,av);}
a=C_alloc(5);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?t2:C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11574,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1424: find-module/import-library */
f_9210(t5,t2,lf[238]);}

/* k11572 in chicken.module#module-environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in ... */
static void C_ccall f_11574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11574,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
/* modules.scm:1426: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[180]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[180]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[238];
av2[3]=lf[239];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t2=(
/* modules.scm:1428: module-saved-environments */
  f_5625(C_retrieve2(lf[48],C_text("module-saved-environments")),t1)
);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_record5(&a,5,lf[240],((C_word*)t0)[4],t3,t4,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in ... */
static void C_ccall f_11603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_11603,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+4);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11607,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1436: chicken.base#gensym */
t4=*((C_word*)lf[244]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[245];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in ... */
static void C_ccall f_11607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11607,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11609,a[2]=t1,a[3]=((C_word)li216),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11668,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li218),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1445: scheme#dynamic-wind */
t4=C_fast_retrieve(lf[242]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=*((C_word*)lf[243]+1);
av2[3]=t3;
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* delmod in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in ... */
static void C_ccall f_11609(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_11609,c,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],C_fast_retrieve(lf[66]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11620,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_fast_retrieve(lf[66]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11628,a[2]=t2,a[3]=t6,a[4]=((C_word)li215),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_11628(t8,t3,C_fast_retrieve(lf[66]));}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11618 in delmod in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in ... */
static void C_ccall f_11620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11620,c,av);}
t2=C_mutate((C_word*)lf[66]+1 /* (set! ##sys#module-table ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in delmod in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in ... */
static void f_11628(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_11628,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_slot(t2,C_fix(0));
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_slot(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_slot(t2,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11655,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1444: loop */
t8=t6;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}}}

/* k11653 in loop in delmod in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in ... */
static void C_ccall f_11655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_11655,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a11667 in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in ... */
static void C_ccall f_11668(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_11668,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11672,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11715,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11717,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li217),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_11717(t11,t7,((C_word*)t0)[2]);}

/* k11670 in a11667 in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in ... */
static void C_ccall f_11672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11672,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:1451: ##sys#find-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k11673 in k11670 in a11667 in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in ... */
static void C_ccall f_11675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_11675,c,av);}
a=C_alloc(9);
t2=(
/* modules.scm:1452: module-saved-environments */
  f_5625(C_retrieve2(lf[48],C_text("module-saved-environments")),t1)
);
t3=C_a_i_cons(&a,2,lf[114],((C_word*)t0)[2]);
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_record5(&a,5,lf[240],t3,t4,t5,C_SCHEME_TRUE);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k11713 in a11667 in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in ... */
static void C_ccall f_11715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11715,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=C_a_i_cons(&a,2,lf[9],t3);
/* modules.scm:1449: scheme#eval */
t5=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* map-loop3170 in a11667 in k11605 in scheme.eval#environment in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in ... */
static void f_11717(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11717,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[114],t3);
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

/* k11750 in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in ... */
static void C_ccall f_11752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11752,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1466: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[261];
av2[3]=lf[257];
av2[4]=lf[262];
tp(5,av2);}}

/* k11753 in k11750 in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in ... */
static void C_ccall f_11755(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11755,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1470: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[259];
av2[3]=lf[251];
av2[4]=lf[260];
tp(5,av2);}}

/* k11756 in k11753 in k11750 in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in ... */
static void C_ccall f_11758(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11758,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1474: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[256];
av2[3]=lf[257];
av2[4]=lf[258];
tp(5,av2);}}

/* k11759 in k11756 in k11753 in k11750 in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in ... */
static void C_ccall f_11761(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11761,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11764,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:1478: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[254];
av2[3]=lf[251];
av2[4]=lf[255];
tp(5,av2);}}

/* k11762 in k11759 in k11756 in k11753 in k11750 in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in ... */
static void C_ccall f_11764(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11764,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.base.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[250];
av2[3]=lf[251];
av2[4]=lf[252];
av2[5]=C_fast_retrieve(lf[253]);
tp(6,av2);}}

/* k11765 in k11762 in k11759 in k11756 in k11753 in k11750 in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in ... */
static void C_ccall f_11767(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11767,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11770,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.syntax.import.scm:30: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t2;
av2[2]=lf[246];
av2[3]=lf[247];
av2[4]=lf[248];
av2[5]=C_fast_retrieve(lf[249]);
tp(6,av2);}}

/* k11768 in k11765 in k11762 in k11759 in k11756 in k11753 in k11750 in k11563 in k11560 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in ... */
static void C_ccall f_11770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11770,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k11772 in k11557 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in ... */
static void C_ccall f_11774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11774,c,av);}
/* modules.scm:1414: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[267];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11776 in k11554 in k11551 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in ... */
static void C_ccall f_11778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11778,c,av);}
/* modules.scm:1411: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[269];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11780 in k11548 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in ... */
static void C_ccall f_11782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11782,c,av);}
/* modules.scm:1405: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[274];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11784 in k11545 in k11542 in k11539 in k11536 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in ... */
static void C_ccall f_11786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11786,c,av);}
/* modules.scm:1399: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[276];
av2[3]=lf[251];
av2[4]=lf[277];
av2[5]=t1;
tp(6,av2);}}

/* k11796 in k11533 in k11530 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_11798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_11798,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:1348: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[287];
av2[3]=lf[251];
av2[4]=lf[288];
av2[5]=t2;
tp(6,av2);}}

/* k11800 in k11527 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_11802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11802,c,av);}
/* modules.scm:1340: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[292];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11804 in k11524 in k11521 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_11806(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11806,c,av);}
/* modules.scm:1327: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[294];
av2[3]=lf[251];
av2[4]=lf[295];
av2[5]=t1;
tp(6,av2);}}

/* k11808 in k11518 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11810,c,av);}
/* modules.scm:1321: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[301];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11812 in k11515 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11814,c,av);}
/* modules.scm:1318: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[303];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11816 in k11512 in k11509 in k11506 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11818,c,av);}
/* modules.scm:1315: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[305];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11820 in k11503 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11822,c,av);}
/* modules.scm:1306: ##sys#register-primitive-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[311];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t1;
tp(5,av2);}}

/* k11824 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11826,c,av);}
/* modules.scm:1148: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[312];
av2[3]=lf[251];
av2[4]=lf[313];
av2[5]=t1;
tp(6,av2);}}

/* k11828 in k11449 in k11446 in k11443 in k11440 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11830,c,av);}
/* modules.scm:1298: se-subset */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[236]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[236]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[314];
av2[3]=t1;
tp(4,av2);}}

/* k11832 in k11437 in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_11834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_11834,c,av);}
/* modules.scm:1132: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[316];
av2[3]=lf[251];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}

/* k4023 */
static void C_ccall f_4025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_4025,c,av);}
a=C_alloc(11);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t3;
C_library_toplevel(2,av2);}}

/* k4026 in k4023 */
static void C_ccall f_4028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4028,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k4029 in k4026 in k4023 */
static void C_ccall f_4031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4031,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4034,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4034,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4037,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4037,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4040,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4040(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4040,c,av);}
a=C_alloc(12);
t2=C_mutate(&lf[1] /* (set! delete ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4531,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[2] /* (set! filter-map ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4695,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! map-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5320,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:78: scheme#make-parameter */
t6=C_fast_retrieve(lf[321]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* delete in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_4531(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_4531,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4537,a[2]=t6,a[3]=t4,a[4]=t2,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4537(t8,t1,t3);}

/* loop in delete in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_4537(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4537,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4550,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* mini-srfi-1.scm:106: test */
t4=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k4548 in loop in delete in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4550,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
/* mini-srfi-1.scm:107: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4537(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=C_u_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4564,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:109: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4537(t4,t3,C_u_i_cdr(((C_word*)t0)[4]));}}

/* k4562 in k4548 in loop in delete in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4564(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4564,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k6920 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_4612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4612,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4626,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:123: delete */
f_4531(t6,t3,t4,((C_word*)t0)[3]);}}

/* k4624 in loop in k6920 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_4626,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4637 in loop in k6920 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4639,c,av);}
/* mini-srfi-1.scm:123: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_4612(t2,((C_word*)t0)[3],t1);}

/* filter-map in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_4695(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4695,3,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_check_list_2(t3,lf[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4704,a[2]=t2,a[3]=t6,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4704(t8,t1,t3);}

/* foldr349 in filter-map in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_4704(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_4704,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4712,a[2]=((C_word*)t0)[2],a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4738,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g354 in foldr349 in filter-map in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_4712(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_4712,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4716,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: pred */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4714 in g354 in foldr349 in filter-map in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4716,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4720,a[2]=((C_word*)t0)[2],a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp);
/* mini-srfi-1.scm:135: g364 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
/* mini-srfi-1.scm:135: g364 */
  f_4720(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g364 in k4714 in g354 in foldr349 in filter-map in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_4720(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k4736 in foldr349 in filter-map in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_4738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4738,c,av);}
/* mini-srfi-1.scm:134: g354 */
t2=((C_word*)t0)[2];
f_4712(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-se in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5320(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_5320,c,av);}
a=C_alloc(13);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(t2,lf[5]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5351,a[2]=t5,a[3]=t9,a[4]=t6,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5351(t11,t1,t2);}

/* map-loop776 in map-se in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_5351,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_car(t4);
if(C_truep(C_i_symbolp(C_u_i_cdr(t4)))){
t6=C_u_i_cdr(t4);
t7=t3;
f_5376(t7,C_a_i_cons(&a,2,t5,t6));}
else{
t6=t3;
f_5376(t6,C_a_i_cons(&a,2,t5,lf[6]));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5374 in map-loop776 in map-se in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5376(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5376,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5351(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5387,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[7]+1 /* (set! ##sys#current-module ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:79: scheme#make-parameter */
t4=C_fast_retrieve(lf[321]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5391(C_word c,C_word *av){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(231,c,16)))){
C_save_and_reclaim((void *)f_5391,c,av);}
a=C_alloc(231);
t2=C_mutate((C_word*)lf[8]+1 /* (set! ##sys#module-alias-environment ...) */,t1);
t3=C_a_i_vector1(&a,1,lf[9]);
t4=C_mutate((C_word*)lf[9]+1 /* (set! module ...) */,t3);
t5=C_fast_retrieve(lf[9]);
t6=C_mutate(&lf[10] /* (set! %make-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5397,a[2]=t5,a[3]=((C_word)li8),tmp=(C_word)a,a+=4,tmp));
t7=C_fast_retrieve(lf[9]);
t8=C_fast_retrieve(lf[9]);
t9=C_mutate(&lf[11] /* (set! module-name ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5409,a[2]=t8,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp));
t10=C_fast_retrieve(lf[9]);
t11=C_mutate(&lf[13] /* (set! module-library ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5418,a[2]=t10,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t12=C_fast_retrieve(lf[9]);
t13=C_mutate(&lf[15] /* (set! module-export-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5427,a[2]=t12,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp));
t14=C_fast_retrieve(lf[9]);
t15=C_mutate(&lf[17] /* (set! set-module-export-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5436,a[2]=t14,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t16=C_fast_retrieve(lf[9]);
t17=C_mutate(&lf[19] /* (set! module-defined-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5445,a[2]=t16,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t18=C_fast_retrieve(lf[9]);
t19=C_mutate(&lf[21] /* (set! set-module-defined-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5454,a[2]=t18,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t20=C_fast_retrieve(lf[9]);
t21=C_mutate(&lf[22] /* (set! module-exist-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5463,a[2]=t20,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp));
t22=C_fast_retrieve(lf[9]);
t23=C_mutate(&lf[24] /* (set! set-module-exist-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5472,a[2]=t22,a[3]=((C_word)li16),tmp=(C_word)a,a+=4,tmp));
t24=C_fast_retrieve(lf[9]);
t25=C_mutate(&lf[25] /* (set! module-defined-syntax-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5481,a[2]=t24,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp));
t26=C_fast_retrieve(lf[9]);
t27=C_mutate(&lf[27] /* (set! set-module-defined-syntax-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5490,a[2]=t26,a[3]=((C_word)li18),tmp=(C_word)a,a+=4,tmp));
t28=C_fast_retrieve(lf[9]);
t29=C_mutate((C_word*)lf[28]+1 /* (set! module-undefined-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5499,a[2]=t28,a[3]=((C_word)li19),tmp=(C_word)a,a+=4,tmp));
t30=C_fast_retrieve(lf[9]);
t31=C_mutate((C_word*)lf[29]+1 /* (set! set-module-undefined-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5508,a[2]=t30,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp));
t32=C_fast_retrieve(lf[9]);
t33=C_mutate(&lf[30] /* (set! module-import-forms ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5517,a[2]=t32,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp));
t34=C_fast_retrieve(lf[9]);
t35=C_mutate(&lf[32] /* (set! set-module-import-forms! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5526,a[2]=t34,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t36=C_fast_retrieve(lf[9]);
t37=C_mutate(&lf[33] /* (set! module-meta-import-forms ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5535,a[2]=t36,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp));
t38=C_fast_retrieve(lf[9]);
t39=C_mutate(&lf[35] /* (set! set-module-meta-import-forms! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5544,a[2]=t38,a[3]=((C_word)li24),tmp=(C_word)a,a+=4,tmp));
t40=C_fast_retrieve(lf[9]);
t41=C_mutate(&lf[36] /* (set! module-meta-expressions ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5553,a[2]=t40,a[3]=((C_word)li25),tmp=(C_word)a,a+=4,tmp));
t42=C_fast_retrieve(lf[9]);
t43=C_mutate(&lf[38] /* (set! set-module-meta-expressions! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5562,a[2]=t42,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp));
t44=C_fast_retrieve(lf[9]);
t45=C_mutate(&lf[39] /* (set! module-vexports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5571,a[2]=t44,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp));
t46=C_fast_retrieve(lf[9]);
t47=C_mutate(&lf[41] /* (set! set-module-vexports! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5580,a[2]=t46,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp));
t48=C_fast_retrieve(lf[9]);
t49=C_mutate(&lf[42] /* (set! module-sexports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5589,a[2]=t48,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp));
t50=C_fast_retrieve(lf[9]);
t51=C_mutate(&lf[44] /* (set! set-module-sexports! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5598,a[2]=t50,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp));
t52=C_fast_retrieve(lf[9]);
t53=C_mutate(&lf[45] /* (set! module-iexports ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5607,a[2]=t52,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t54=C_fast_retrieve(lf[9]);
t55=C_mutate(&lf[47] /* (set! set-module-iexports! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5616,a[2]=t54,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp));
t56=C_fast_retrieve(lf[9]);
t57=C_mutate(&lf[48] /* (set! module-saved-environments ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5625,a[2]=t56,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp));
t58=C_fast_retrieve(lf[9]);
t59=C_mutate(&lf[50] /* (set! set-module-saved-environments! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5634,a[2]=t58,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp));
t60=C_fast_retrieve(lf[9]);
t61=C_mutate(&lf[51] /* (set! module-rename-list ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5643,a[2]=t60,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp));
t62=C_fast_retrieve(lf[9]);
t63=C_mutate(&lf[53] /* (set! set-module-rename-list! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5652,a[2]=t62,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp));
t64=C_mutate((C_word*)lf[54]+1 /* (set! ##sys#module-name ...) */,C_retrieve2(lf[11],C_text("module-name")));
t65=C_mutate((C_word*)lf[55]+1 /* (set! ##sys#module-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5662,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate(&lf[56] /* (set! make-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5680,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[57]+1 /* (set! ##sys#register-module-alias ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[58]+1 /* (set! ##sys#with-module-aliases ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5713,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[61]+1 /* (set! ##sys#resolve-module-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5816,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[65]+1 /* (set! ##sys#find-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5863,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t71=C_SCHEME_FALSE;
t72=(*a=C_VECTOR_TYPE|1,a[1]=t71,tmp=(C_word)a,a+=2,tmp);
t73=C_mutate((C_word*)lf[68]+1 /* (set! ##sys#switch-module ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5917,a[2]=t72,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t74=C_mutate((C_word*)lf[71]+1 /* (set! ##sys#add-to-export-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5970,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[73]+1 /* (set! ##sys#add-to-export/rename-list ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6059,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[74]+1 /* (set! ##sys#toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6119,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[75]+1 /* (set! ##sys#register-meta-expression ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6122,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t78=C_mutate(&lf[76] /* (set! check-for-redef ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6142,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[80]+1 /* (set! ##sys#register-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6163,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[86]+1 /* (set! ##sys#register-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6325,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t81=C_mutate((C_word*)lf[88]+1 /* (set! ##sys#unregister-syntax-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6406,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[89]+1 /* (set! ##sys#register-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6499,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate(&lf[90] /* (set! merge-se ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6765,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[95]+1 /* (set! ##sys#compiled-module-registration ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6997,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[103]+1 /* (set! ##sys#register-compiled-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7496,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[116]+1 /* (set! ##sys#register-core-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7830,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t87=C_mutate((C_word*)lf[118]+1 /* (set! ##sys#register-primitive-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7944,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t88=C_mutate(&lf[83] /* (set! find-export ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7959,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[119]+1 /* (set! ##sys#finalize-module ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8037,a[2]=((C_word)li125),tmp=(C_word)a,a+=3,tmp));
t90=C_set_block_item(lf[66] /* ##sys#module-table */,0,C_SCHEME_END_OF_LIST);
t91=C_mutate((C_word*)lf[97]+1 /* (set! ##sys#with-environment ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9059,a[2]=((C_word)li129),tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[168]+1 /* (set! ##sys#import-library-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9164,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t93=C_mutate(&lf[174] /* (set! find-module/import-library ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9210,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t94=C_mutate((C_word*)lf[109]+1 /* (set! ##sys#decompose-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9225,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[198]+1 /* (set! ##sys#expand-import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10220,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[200]+1 /* (set! ##sys#import ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10284,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t97=C_mutate(&lf[82] /* (set! module-rename ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10730,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[209]+1 /* (set! ##sys#alias-global-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10748,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[210]+1 /* (set! ##sys#validate-exports ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10822,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[221]+1 /* (set! ##sys#register-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11037,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[222]+1 /* (set! ##sys#instantiate-functor ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11053,a[2]=((C_word)li206),tmp=(C_word)a,a+=3,tmp));
t102=C_mutate(&lf[226] /* (set! match-functor-argument ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11279,a[2]=((C_word)li210),tmp=(C_word)a,a+=3,tmp));
t103=lf[234];
t104=C_fast_retrieve(lf[235]);
t105=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11439,a[2]=((C_word*)t0)[2],a[3]=t104,a[4]=t103,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:1131: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t105;
av2[2]=lf[320];
av2[3]=lf[251];
av2[4]=t103;
av2[5]=C_fast_retrieve(lf[235]);
tp(6,av2);}}

/* %make-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5397(C_word *a,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13,C_word t14,C_word t15){
C_word tmp;
C_word t16;
C_stack_overflow_check;{}
return(C_a_i_record(&a,16,((C_word*)t0)[2],t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13,t14,t15));}

/* module-name in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5409(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5409,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[12]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* module-library in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[14]);
return(C_i_block_ref(t1,C_fix(2)));}

/* module-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5427(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[16]);
return(C_i_block_ref(t1,C_fix(3)));}

/* set-module-export-list! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5436(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5436,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(3);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-defined-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[20]);
return(C_i_block_ref(t1,C_fix(4)));}

/* set-module-defined-list! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5454(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5454,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(4);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-exist-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[23]);
return(C_i_block_ref(t1,C_fix(5)));}

/* set-module-exist-list! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5472(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5472,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(5);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-defined-syntax-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5481(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[26]);
return(C_i_block_ref(t1,C_fix(6)));}

/* set-module-defined-syntax-list! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5490(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5490,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(6);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-undefined-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5499(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5499,c,av);}
t3=C_i_check_structure_2(t2,((C_word*)t0)[2],lf[28]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_block_ref(t2,C_fix(7));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* set-module-undefined-list! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5508(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5508,c,av);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(7);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-import-forms in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5517(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[31]);
return(C_i_block_ref(t1,C_fix(8)));}

/* set-module-import-forms! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5526(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5526,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(8);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-meta-import-forms in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5535(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[34]);
return(C_i_block_ref(t1,C_fix(9)));}

/* set-module-meta-import-forms! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5544(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5544,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(9);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-meta-expressions in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5553(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[37]);
return(C_i_block_ref(t1,C_fix(10)));}

/* set-module-meta-expressions! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5562(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5562,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(10);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-vexports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5571(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[40]);
return(C_i_block_ref(t1,C_fix(11)));}

/* set-module-vexports! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5580(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5580,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(11);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-sexports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5589(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[43]);
return(C_i_block_ref(t1,C_fix(12)));}

/* set-module-sexports! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5598(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5598,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(12);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-iexports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5607(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[46]);
return(C_i_block_ref(t1,C_fix(13)));}

/* set-module-iexports! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5616(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5616,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(13);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-saved-environments in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5625(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[49]);
return(C_i_block_ref(t1,C_fix(14)));}

/* set-module-saved-environments! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5634(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5634,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(14);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* module-rename-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5643(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=C_i_check_structure_2(t1,((C_word*)t0)[2],lf[52]);
return(C_i_block_ref(t1,C_fix(15)));}

/* set-module-rename-list! in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5652(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5652,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,((C_word*)t0)[2],C_SCHEME_FALSE);
/* modules.scm:97: ##sys#block-set! */
t5=*((C_word*)lf[18]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(15);
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* ##sys#module-exports in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5662(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5662,c,av);}
t3=(
/* modules.scm:123: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),t2)
);
t4=(
/* modules.scm:124: module-vexports */
  f_5571(C_retrieve2(lf[39],C_text("module-vexports")),t2)
);
t5=(
/* modules.scm:125: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),t2)
);
/* modules.scm:122: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
av2[4]=t5;
C_values(5,av2);}}

/* make-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5680(C_word *a,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_stack_overflow_check;{}
t8=C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_i_car(t7));
return((
/* modules.scm:128: %make-module */
  f_5397(C_a_i(&a,17),C_retrieve2(lf[10],C_text("%make-module")),t1,t2,t3,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t4,t5,t6,C_SCHEME_FALSE,t9)
));}

/* ##sys#register-module-alias in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5695(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5695,c,av);}
a=C_alloc(7);
t4=C_a_i_cons(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5711,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:133: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t5;
tp(2,av2);}}

/* k5709 in ##sys#register-module-alias in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5711,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
/* modules.scm:132: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}

/* ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5713(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_5713,c,av);}
a=C_alloc(22);
t4=C_fast_retrieve(lf[8]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5717,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t2,lf[5]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5776,a[2]=t5,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5782,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li43),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_5782(t15,t11,t2);}

/* k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5717(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_5717,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_TRUE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5722,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[3],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5745,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:136: ##sys#dynamic-wind */
t9=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[4];
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a5721 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5722,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
/* modules.scm:136: ##sys#module-alias-environment1012 */
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
f_5726(2,av2);}}}

/* k5724 in a5721 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5726,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5730,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:136: ##sys#module-alias-environment1012 */
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k5728 in k5724 in a5721 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_5730,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5733,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:136: ##sys#module-alias-environment1012 */
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

/* k5731 in k5728 in k5724 in a5721 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5733,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a5738 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5739,c,av);}
/* modules.scm:140: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a5744 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5745,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5749,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:136: ##sys#module-alias-environment1012 */
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k5747 in a5744 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5749,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5752,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:136: ##sys#module-alias-environment1012 */
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

/* k5750 in k5747 in a5744 in k5715 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5752,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5774 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5776,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5780,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:139: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5778 in k5774 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5780,c,av);}
t2=((C_word*)t0)[2];
/* modules.scm:137: scheme#append */
t3=*((C_word*)lf[60]+1);{
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

/* map-loop1021 in ##sys#with-module-aliases in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5782(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5782,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_i_cadr(t3);
t6=C_a_i_cons(&a,2,t4,t5);
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

/* ##sys#resolve-module-name in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5816(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5816,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5824,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:143: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word *av2=av;
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k5822 in ##sys#resolve-module-name in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5824,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5826(t5,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST);}

/* loop in k5822 in ##sys#resolve-module-name in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5826(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_5826,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5861,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:144: ##sys#module-alias-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word av2[2];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t4;
tp(2,av2);}}

/* g1065 in k5859 in loop in k5822 in ##sys#resolve-module-name in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_5834,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(t2);
if(C_truep(C_i_memq(t3,((C_word*)t0)[2]))){
/* modules.scm:148: chicken.base#error */
t4=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[63];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* modules.scm:149: loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5826(t5,t1,t3,t4);}}

/* k5859 in loop in k5822 in ##sys#resolve-module-name in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_5861,c,av);}
a=C_alloc(7);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5834,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li45),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:144: g1065 */
t4=t3;
f_5834(t4,((C_word*)t0)[7],t2);}
else{
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* ##sys#find-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5863(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5863,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_TRUE:C_get_rest_arg(c,3,av,3,t0));
t5=C_rest_nullp(c,3);
t6=C_rest_nullp(c,4);
t7=(C_truep(t6)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,3,t0));
t8=C_rest_nullp(c,4);
t9=C_i_assq(t2,C_fast_retrieve(lf[66]));
if(C_truep(t9)){
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_i_cdr(t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
if(C_truep(t4)){
/* modules.scm:154: chicken.base#error */
t10=*((C_word*)lf[62]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t1;
av2[2]=t7;
av2[3]=lf[67];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5917(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5917,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5964,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:160: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5922 in k5966 in k5962 in ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_5924,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5952,a[2]=((C_word*)t0)[5],a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:161: g1103 */
t4=t3;
f_5952(t4,t2,t1);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)t0)[5]);
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_5927(2,av2);}}}

/* k5925 in k5922 in k5966 in k5962 in ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5927,c,av);}
a=C_alloc(8);
t2=(C_truep(((C_word*)t0)[2])?(
/* modules.scm:166: module-saved-environments */
  f_5625(C_retrieve2(lf[48],C_text("module-saved-environments")),((C_word*)t0)[2])
):((C_word*)((C_word*)t0)[3])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5933,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5939,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:168: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
av2[2]=C_i_car(t2);
tp(3,av2);}}
else{
/* modules.scm:170: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}

/* k5931 in k5925 in k5922 in k5966 in k5962 in ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5933,c,av);}
/* modules.scm:170: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k5937 in k5925 in k5922 in k5966 in k5962 in ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5939,c,av);}
/* modules.scm:169: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[69]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_u_i_cdr(((C_word*)t0)[3]);
tp(3,av2);}}

/* g1103 in k5922 in k5966 in k5962 in ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_5952(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5952,3,t0,t1,t2);}
/* modules.scm:163: set-module-saved-environments! */
t3=C_retrieve2(lf[50],C_text("set-module-saved-environments!"));
f_5634(t3,t1,t2,((C_word*)t0)[2]);}

/* k5962 in ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5964,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5968,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:160: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k5966 in k5962 in ##sys#switch-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_5968,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,((C_word*)t2)[2],t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5924,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:161: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t4;
tp(2,av2);}}

/* ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5970(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5970,c,av);}
a=C_alloc(6);
t4=(
/* modules.scm:173: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),t2)
);
t5=C_eqp(t4,C_SCHEME_TRUE);
if(C_truep(t5)){
t6=(
/* modules.scm:175: module-exist-list */
  f_5463(C_retrieve2(lf[22],C_text("module-exist-list")),t2)
);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5986,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:176: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6057,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:186: scheme#append */
t7=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_5986(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_5986,c,av);}
a=C_alloc(25);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5995,a[2]=t3,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5987,a[2]=t1,a[3]=t4,a[4]=((C_word)li52),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6029,a[2]=t5,a[3]=t9,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_6029(t11,t7,((C_word*)t0)[2]);}

/* g1120 in k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5987(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return((
/* modules.scm:180: g1136 */
  f_5995(C_a_i(&a,3),((C_word*)t0)[3],t2)
));}
else{
t3=C_SCHEME_UNDEFINED;
return(t3);}}

/* g1136 in k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_5995(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* k6007 in k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6009,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6023,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(
/* modules.scm:184: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),((C_word*)t0)[3])
);
/* modules.scm:184: scheme#append */
t5=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k6010 in k6007 in k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_6012,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6019,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:185: scheme#append */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k6017 in k6010 in k6007 in k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6019,c,av);}
/* modules.scm:185: set-module-exist-list! */
t2=C_retrieve2(lf[24],C_text("set-module-exist-list!"));
f_5472(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* k6021 in k6007 in k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6023,c,av);}
/* modules.scm:184: set-module-sexports! */
t2=C_retrieve2(lf[44],C_text("set-module-sexports!"));
f_5598(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* for-each-loop1119 in k5984 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6029(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6029,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:178: g1120 */
  f_5987(C_a_i(&a,3),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t5=t1;
t6=C_slot(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6055 in ##sys#add-to-export-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6057,c,av);}
/* modules.scm:186: set-module-export-list! */
t2=C_retrieve2(lf[17],C_text("set-module-export-list!"));
f_5436(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##sys#add-to-export/rename-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_6059,c,av);}
a=C_alloc(9);
t4=(
/* modules.scm:189: module-rename-list */
  f_5643(C_retrieve2(lf[51],C_text("module-rename-list")),t2)
);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6066,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6117,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:190: scheme#append */
t7=*((C_word*)lf[60]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}

/* k6064 in ##sys#add-to-export/rename-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6066(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6066,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[5]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6081,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6081(t11,t7,((C_word*)t0)[2]);}

/* k6077 in k6064 in ##sys#add-to-export/rename-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6079,c,av);}
/* modules.scm:191: ##sys#add-to-export-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[71]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[71]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* map-loop1152 in k6064 in ##sys#add-to-export/rename-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6081(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6081,3,t0,t1,t2);}
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

/* k6115 in ##sys#add-to-export/rename-list in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6117,c,av);}
/* modules.scm:190: set-module-rename-list! */
t2=C_retrieve2(lf[53],C_text("set-module-rename-list!"));
f_5652(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* ##sys#toplevel-definition-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6119(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6119,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* ##sys#register-meta-expression in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6122,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6126,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:196: ##sys#current-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[7]);
C_word *av2=av;
av2[0]=*((C_word*)lf[7]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6124 in ##sys#register-meta-expression in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6126,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(
/* modules.scm:197: module-meta-expressions */
  f_5553(C_retrieve2(lf[36],C_text("module-meta-expressions")),t1)
);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
/* modules.scm:197: set-module-meta-expressions! */
t4=C_retrieve2(lf[38],C_text("set-module-meta-expressions!"));
f_5562(t4,((C_word*)t0)[3],t1,t3);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* check-for-redef in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6142(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_6142,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_assq(t2,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6149,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
/* modules.scm:201: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word av2[4];
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t6;
av2[2]=lf[79];
av2[3]=t2;
tp(4,av2);}}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_6149(2,av2);}}}

/* k6147 in check-for-redef in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6149,c,av);}
if(C_truep(C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]))){
/* modules.scm:203: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[78];
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6163(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6163,c,av);}
a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6166,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=(
/* modules.scm:211: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),t3)
);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6208,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=C_SCHEME_UNDEFINED,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* modules.scm:212: module-name */
t7=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
f_5409(3,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* find-dummy in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_6166(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_car(t2);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_eqp(t1,C_i_caar(t2)):C_SCHEME_FALSE);
if(C_truep(t5)){
return(C_u_i_car(t2));}
else{
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6208,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6211,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:215: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
av2[3]=lf[85];
tp(4,av2);}}

/* k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6211(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_6211,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6214,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t4=C_eqp(((C_word*)t2)[3],t1);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t3;
f_6214(t6,t5);}
else{
t5=C_i_memq(((C_word*)t2)[3],((C_word*)t2)[2]);
if(C_truep(t5)){
t6=t3;
f_6214(t6,t5);}
else{
t6=(
/* modules.scm:218: find-dummy */
  f_6166(t1,((C_word*)t2)[2])
);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6308,a[2]=((C_word*)t2)[3],a[3]=((C_word)li61),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:217: g1217 */
t8=t3;
f_6214(t8,(
/* modules.scm:217: g1217 */
  f_6308(C_a_i(&a,3),t7,t6)
));}
else{
t7=C_SCHEME_UNDEFINED;
t8=t3;
f_6214(t8,t7);}}}}
else{
t4=t3;
f_6214(t4,C_SCHEME_FALSE);}}

/* k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6214(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6214,2,t0,t1);}
a=C_alloc(7);
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6220,a[2]=((C_word*)t0)[3],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
f_6220(2,av2);}}
else{
/* modules.scm:222: find-export */
f_7959(t3,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_TRUE);}}

/* k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6220,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6223,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:223: module-undefined-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6223,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6226,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6286,a[2]=t3,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:225: module-rename */
f_10730(t4,((C_word*)t2)[2],((C_word*)t2)[6]);}

/* k6224 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_6226,c,av);}
a=C_alloc(10);
t2=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6232,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6282,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:227: delete */
f_4531(t4,t2,((C_word*)t0)[3],*((C_word*)lf[81]+1));}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6232(2,av2);}}}

/* k6230 in k6224 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6232,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6235,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6271,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:228: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6233 in k6230 in k6224 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6235,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6238,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(
/* modules.scm:229: module-exist-list */
  f_5463(C_retrieve2(lf[22],C_text("module-exist-list")),((C_word*)t2)[4])
);
t5=C_a_i_cons(&a,2,((C_word*)t2)[3],t4);
/* modules.scm:229: set-module-exist-list! */
t6=C_retrieve2(lf[24],C_text("set-module-exist-list!"));
f_5472(t6,t3,((C_word*)t2)[4],t5);}

/* k6236 in k6233 in k6230 in k6224 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6238,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(((C_word*)t2)[2])){
t3=C_a_i_cons(&a,2,((C_word*)t2)[3],C_SCHEME_FALSE);
t4=(
/* modules.scm:235: module-defined-list */
  f_5445(C_retrieve2(lf[19],C_text("module-defined-list")),((C_word*)t2)[4])
);
t5=C_a_i_cons(&a,2,t3,t4);
/* modules.scm:232: set-module-defined-list! */
t6=C_retrieve2(lf[21],C_text("set-module-defined-list!"));
f_5454(t6,((C_word*)t2)[5],((C_word*)t2)[4],t5);}
else{
t3=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6269 in k6230 in k6224 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6271,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6275,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:228: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6273 in k6269 in k6230 in k6224 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6275,c,av);}
t2=((C_word*)t0)[2];
/* modules.scm:228: check-for-redef */
f_6142(((C_word*)t2)[2],((C_word*)t2)[3],((C_word*)t2)[4],t1);}

/* k6280 in k6224 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6282,c,av);}
/* modules.scm:227: set-module-undefined-list! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k6284 in k6221 in k6218 in k6212 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6286,c,av);}
/* modules.scm:224: ##sys#toplevel-definition-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[74]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* g1217 in k6209 in k6206 in ##sys#register-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_6308(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
return(C_i_set_cdr(t1,t3));}

/* ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6325(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6325,c,av);}
a=C_alloc(8);
if(C_truep(t3)){
t5=(
/* modules.scm:239: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),t3)
);
t6=C_eqp(C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6335,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t6;
f_6335(2,av2);}}
else{
/* modules.scm:240: find-export */
f_7959(t7,t2,t3,C_SCHEME_TRUE);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6335,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6338,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:241: module-undefined-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6336 in k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6338,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6341,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:242: module-name */
t5=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
f_5409(3,av2);}}

/* k6339 in k6336 in k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6341(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6341,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6344,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_assq(((C_word*)t2)[2],((C_word*)t2)[7]))){
/* modules.scm:244: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t3;
av2[2]=lf[87];
av2[3]=((C_word*)t2)[2];
tp(4,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6344(2,av2);}}}

/* k6342 in k6339 in k6336 in k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6344,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6347,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6387,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:245: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6345 in k6342 in k6339 in k6336 in k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6347(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_6347,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6353,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t2)[6])){
t4=C_a_i_cons(&a,2,((C_word*)t2)[2],((C_word*)t2)[3]);
t5=(
/* modules.scm:251: module-defined-list */
  f_5445(C_retrieve2(lf[19],C_text("module-defined-list")),((C_word*)t2)[4])
);
t6=C_a_i_cons(&a,2,t4,t5);
/* modules.scm:248: set-module-defined-list! */
t7=C_retrieve2(lf[21],C_text("set-module-defined-list!"));
f_5454(t7,t3,((C_word*)t2)[4],t6);}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6353(2,av2);}}}

/* k6351 in k6345 in k6342 in k6339 in k6336 in k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6353(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6353,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(
/* modules.scm:254: module-defined-syntax-list */
  f_5481(C_retrieve2(lf[25],C_text("module-defined-syntax-list")),((C_word*)t0)[4])
);
t4=C_a_i_cons(&a,2,t2,t3);
/* modules.scm:252: set-module-defined-syntax-list! */
t5=C_retrieve2(lf[27],C_text("set-module-defined-syntax-list!"));
f_5490(t5,((C_word*)t0)[5],((C_word*)t0)[4],t4);}

/* k6385 in k6342 in k6339 in k6336 in k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6387,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6391,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:245: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6389 in k6385 in k6342 in k6339 in k6336 in k6333 in ##sys#register-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6391,c,av);}
t2=((C_word*)t0)[2];
/* modules.scm:245: check-for-redef */
f_6142(((C_word*)t2)[2],((C_word*)t2)[3],((C_word*)t2)[4],t1);}

/* ##sys#unregister-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6406(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6406,c,av);}
a=C_alloc(7);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6417,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(
/* modules.scm:260: module-defined-syntax-list */
  f_5481(C_retrieve2(lf[25],C_text("module-defined-syntax-list")),t3)
);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6423,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:260: delete */
f_4531(t4,t2,t5,t6);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k6415 in ##sys#unregister-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6417,c,av);}
/* modules.scm:258: set-module-defined-syntax-list! */
t2=C_retrieve2(lf[27],C_text("set-module-defined-syntax-list!"));
f_5490(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* a6422 in ##sys#unregister-syntax-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6423,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_eqp(t2,C_i_car(t3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k6438 in g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6440(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6440,c,av);}
a=C_alloc(9);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6447,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word)li190),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:265: g1269 */
t4=t3;
f_6447(t4,((C_word*)t0)[4],t2);}
else{
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_list1(&a,1,((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_cons(&a,2,t4,t1);
/* modules.scm:270: set-module-undefined-list! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
tp(4,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t4=C_a_i_cons(&a,2,t3,t1);
/* modules.scm:270: set-module-undefined-list! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[5];
av2[3]=t4;
tp(4,av2);}}}}

/* g1269 in k6438 in g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6447(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_6447,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=C_mutate(((C_word *)t0)+4,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6454,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=C_i_cdr(((C_word*)t0)[2]);
t7=t5;
f_6454(t7,C_i_not(C_i_memq(((C_word*)t0)[3],t6)));}
else{
t6=t5;
f_6454(t6,C_SCHEME_FALSE);}}

/* k6452 in g1269 in k6438 in g2903 in k10753 in mrename in ##sys#alias-global-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6454(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,1)))){
C_save_and_reclaim_args((void *)trf_6454,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_cdr(((C_word*)t2)[2]);
t4=C_a_i_cons(&a,2,((C_word*)t2)[3],t3);
t5=((C_word*)t2)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_set_cdr(((C_word*)t2)[2],t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[4];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* ##sys#register-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6499(C_word c,C_word *av){
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
C_word *a;
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(23,c,1)))){
C_save_and_reclaim((void *)f_6499,c,av);}
a=C_alloc(23);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,5,av,5,t0));
t7=C_rest_nullp(c,5);
t8=C_rest_nullp(c,6);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,6,av,5,t0));
t10=C_rest_nullp(c,6);
t11=(
/* modules.scm:275: make-module */
  f_5680(C_a_i(&a,17),t2,t3,t4,t6,t9,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST)
);
t12=C_a_i_cons(&a,2,t2,t11);
t13=C_a_i_cons(&a,2,t12,C_fast_retrieve(lf[66]));
t14=C_mutate((C_word*)lf[66]+1 /* (set! ##sys#module-table ...) */,t13);
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=t11;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}

/* k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6556(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6556,c,av);}
a=C_alloc(13);
t2=(
/* modules.scm:282: module-defined-list */
  f_5445(C_retrieve2(lf[19],C_text("module-defined-list")),((C_word*)t0)[2])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6561,a[2]=t1,a[3]=((C_word)li113),tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_END_OF_LIST;
f_8631(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6584,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word)li117),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_6584(t8,((C_word*)t0)[4],((C_word*)t0)[3]);}}

/* warn in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6561(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_6561,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6569,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6573,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:285: scheme#symbol->string */
t6=*((C_word*)lf[149]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k6567 in warn in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6569(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6569,c,av);}
/* modules.scm:284: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k6571 in warn in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6573,c,av);}
/* modules.scm:285: scheme#string-append */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[147];
av2[4]=t1;
av2[5]=lf[148];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6584(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_6584,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_symbolp(t3))){
/* modules.scm:291: loop */
t9=t1;
t10=C_u_i_cdr(t2);
t1=t9;
t2=t10;
goto loop;}
else{
t4=C_i_cdar(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6611,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t6,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li116),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6611(t8,t1,t4);}}}

/* loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6611(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6611,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
/* modules.scm:294: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6584(t3,t1,C_i_cdr(((C_word*)t0)[3]));}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6759,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:295: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word av2[2];
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k6632 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_6634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6634,c,av);}
/* modules.scm:297: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6611(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* g1317 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void f_6648(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_6648,3,t0,t1,t2);}
a=C_alloc(13);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6673,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=C_a_i_cons(&a,2,t3,t4);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f13262,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:304: loop2 */
t8=((C_word*)((C_word*)t0)[3])[1];
f_6611(t8,t7,C_u_i_cdr(((C_word*)t0)[2]));}
else{
/* modules.scm:303: module-rename */
f_10730(t5,C_u_i_car(((C_word*)t0)[2]),((C_word*)t0)[4]);}}

/* k6671 in g1317 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_6673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6673,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f13258,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:304: loop2 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_6611(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* g1324 in k6747 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_6688(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_6688,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_cdr(t2);
if(C_truep(C_i_symbolp(t3))){
t4=C_i_car(((C_word*)t0)[2]);
t5=C_u_i_cdr(t2);
t6=C_a_i_cons(&a,2,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6706,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:308: loop2 */
t8=((C_word*)((C_word*)t0)[3])[1];
f_6611(t8,t7,C_u_i_cdr(((C_word*)t0)[2]));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6717,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:310: warn */
t5=((C_word*)t0)[4];
f_6561(t5,t4,lf[151],C_i_car(((C_word*)t0)[2]));}}

/* k6704 in g1324 in k6747 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_6706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_6706,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k6715 in g1324 in k6747 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_6717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6717,c,av);}
/* modules.scm:311: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6611(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k6734 in k6747 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_6736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6736,c,av);}
/* modules.scm:314: loop2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6611(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}

/* k6747 in k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_6749(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6749,c,av);}
a=C_alloc(6);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6688,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li115),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:294: g1324 */
t4=t3;
f_6688(t4,((C_word*)t0)[6],t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6736,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:313: warn */
t4=((C_word*)t0)[5];
f_6561(t4,t3,lf[152],C_u_i_car(((C_word*)t0)[3]));}}

/* k6757 in loop2 in loop in k6554 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_6759,c,av);}
a=C_alloc(7);
if(C_truep(C_i_assq(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:296: warn */
t3=((C_word*)t0)[6];
f_6561(t3,t2,lf[150],C_u_i_car(((C_word*)t0)[5]));}
else{
t2=C_i_assq(C_u_i_car(((C_word*)t0)[5]),((C_word*)t0)[7]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6648,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:294: g1317 */
t4=t3;
f_6648(t4,((C_word*)t0)[4],t2);}
else{
t3=C_u_i_car(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6749,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:305: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
tp(2,av2);}}}}

/* merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6765(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_6765,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6769,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:317: chicken.internal#make-hash-table */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word av2[2];
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
tp(2,av2);}}

/* k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6769,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6772,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:317: scheme#reverse */
t3=*((C_word*)lf[93]+1);{
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

/* k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6772(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_6772,c,av);}
a=C_alloc(7);
t2=C_i_cdr(t1);
t3=C_u_i_car(t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6783,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li70),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6783(t7,((C_word*)t0)[3],t2,C_SCHEME_FALSE,t3);}

/* loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6783(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_6783,5,t0,t1,t2,t3,t4);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_eqp(t3,t5);
t7=(C_truep(t6)?t6:C_i_nullp(C_u_i_car(t2)));
if(C_truep(t7)){
/* modules.scm:321: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t17=t3;
t18=t4;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
goto loop;}
else{
if(C_truep(C_i_not(t3))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6811,a[2]=((C_word*)t0)[3],a[3]=((C_word)li67),tmp=(C_word)a,a+=4,tmp);
t9=C_i_check_list_2(t4,lf[72]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6825,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6830,a[2]=t12,a[3]=t8,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_6830(t14,t10,t4);}
else{
t8=C_u_i_car(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6858,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=((C_word)li69),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_6858(t12,t1,t8,t4);}}}}

/* g1354 in loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6811(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6811,3,t0,t1,t2);}
/* modules.scm:323: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word av2[5];
av2[0]=*((C_word*)lf[91]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=C_i_car(t2);
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}

/* k6823 in loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6825,c,av);}
/* modules.scm:324: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6783(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[5]);}

/* for-each-loop1353 in loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6830(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6830,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6840,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:323: g1354 */
t4=((C_word*)t0)[3];
f_6811(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6838 in for-each-loop1353 in loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6840,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6830(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* lp in loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6858(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_6858,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
/* modules.scm:326: loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6783(t4,t1,C_i_cdr(((C_word*)t0)[3]),C_u_i_car(((C_word*)t0)[3]),t3);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6880,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:327: chicken.internal#hash-table-ref */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[92]);
C_word av2[4];
av2[0]=*((C_word*)lf[92]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=C_i_caar(t2);
tp(4,av2);}}}

/* k6878 in lp in loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6880,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
/* modules.scm:328: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_6858(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6888,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:329: chicken.internal#hash-table-set! */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_caar(((C_word*)t0)[4]);
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}}

/* k6886 in k6878 in lp in loop in k6770 in k6767 in merge-se in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6888,c,av);}
a=C_alloc(3);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
/* modules.scm:330: lp */
t5=((C_word*)((C_word*)t0)[4])[1];
f_6858(t5,((C_word*)t0)[5],t2,t4);}

/* k6920 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6922(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6922,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6933,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=*((C_word*)lf[81]+1);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4612,a[2]=t9,a[3]=t7,a[4]=((C_word)li78),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4612(t11,t6,t1);}

/* k6931 in k6920 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_6933,c,av);}
a=C_alloc(8);
t2=C_i_check_list_2(t1,lf[5]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6941,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_6941(t6,((C_word*)t0)[4],t1);}

/* map-loop1389 in k6931 in k6920 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_6941(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_6941,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,2,lf[108],t3);
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

/* a6974 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6975(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6975,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6981,a[2]=t2,a[3]=((C_word)li79),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6987,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:334: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=t3;
av2[3]=t4;
C_call_with_values(4,av2);}}

/* a6980 in a6974 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6981,c,av);}
/* modules.scm:334: ##sys#decompose-import */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[109]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[109]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=*((C_word*)lf[110]+1);
av2[4]=*((C_word*)lf[81]+1);
av2[5]=lf[9];
tp(6,av2);}}

/* a6986 in a6974 in k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_6987,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_6997(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6997,c,av);}
a=C_alloc(6);
t4=(
/* modules.scm:340: module-defined-list */
  f_5445(C_retrieve2(lf[19],C_text("module-defined-list")),t2)
);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7004,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:341: module-name */
t6=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
f_5409(3,av2);}}

/* k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7004(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_7004,c,av);}
a=C_alloc(16);
t2=(
/* modules.scm:342: module-import-forms */
  f_5517(C_retrieve2(lf[30],C_text("module-import-forms")),((C_word*)t0)[2])
);
t3=(
/* modules.scm:343: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),((C_word*)t0)[2])
);
t4=(
/* modules.scm:344: module-meta-import-forms */
  f_5535(C_retrieve2(lf[33],C_text("module-meta-import-forms")),((C_word*)t0)[2])
);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7032,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7036,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t1,a[7]=t4,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7479,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=C_eqp(((C_word*)t0)[5],lf[111]);
if(C_truep(t8)){
t9=C_i_pairp(t2);
t10=t7;
f_7479(t10,(C_truep(t9)?C_i_pairp(t3):C_SCHEME_FALSE));}
else{
t9=t7;
f_7479(t9,C_SCHEME_FALSE);}}

/* k7030 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_7032,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=C_a_i_cons(&a,2,lf[96],t2);
t4=C_a_i_list(&a,2,lf[97],t3);
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,1,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7036(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7036,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7040,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7044,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_i_pairp(((C_word*)t0)[8]);
t5=(C_truep(t4)?C_i_pairp(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7470,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:351: chicken.syntax#strip-syntax */
t7=C_fast_retrieve(lf[102]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t3;
f_7044(t6,C_SCHEME_END_OF_LIST);}}

/* k7038 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7040,c,av);}
/* modules.scm:345: ##sys#append */
t2=*((C_word*)lf[98]+1);{
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

/* k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7044(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_7044,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7048,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7052,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_i_pairp(((C_word*)t0)[7]);
t5=(C_truep(t4)?C_i_pairp(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7442,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:354: chicken.syntax#strip-syntax */
t7=C_fast_retrieve(lf[102]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=t3;
f_7052(t6,C_SCHEME_END_OF_LIST);}}

/* k7046 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7048,c,av);}
/* modules.scm:345: ##sys#append */
t2=*((C_word*)lf[98]+1);{
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

/* k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7052(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_7052,2,t0,t1);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7056,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
t4=C_i_getprop(((C_word*)t0)[6],lf[104],C_SCHEME_FALSE);
t5=(C_truep(t4)?t4:C_i_pairp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7421,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t7=(
/* modules.scm:357: module-meta-expressions */
  f_5553(C_retrieve2(lf[36],C_text("module-meta-expressions")),((C_word*)t0)[3])
);
/* modules.scm:357: chicken.syntax#strip-syntax */
t8=C_fast_retrieve(lf[102]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t6;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t6=t3;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
f_7060(2,av2);}}}

/* k7054 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7056,c,av);}
/* modules.scm:345: ##sys#append */
t2=*((C_word*)lf[98]+1);{
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

/* k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7060,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7406,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:360: module-name */
t4=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
f_5409(3,av2);}}

/* k7090 in k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7092(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_7092,2,t0,t1);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(
/* modules.scm:392: module-rename-list */
  f_5643(C_retrieve2(lf[51],C_text("module-rename-list")),((C_word*)t0)[2])
);
t7=C_i_check_list_2(t6,lf[5]);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7128,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7130,a[2]=t4,a[3]=t10,a[4]=t5,a[5]=((C_word)li73),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7130(t12,t8,t6);}

/* k7126 in k7090 in k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,3)))){
C_save_and_reclaim((void *)f_7128,c,av);}
a=C_alloc(30);
t2=C_a_i_cons(&a,2,lf[100],t1);
t3=C_a_i_list(&a,8,lf[103],((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);
t4=C_a_i_list(&a,1,t3);
/* modules.scm:345: ##sys#append */
t5=*((C_word*)lf[98]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[8];
av2[2]=((C_word*)t0)[9];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* map-loop1533 in k7090 in k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7130(C_word t0,C_word t1,C_word t2){
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
C_word t13;
C_word t14;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_7130,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=C_a_i_list(&a,2,lf[99],t4);
t6=C_u_i_cdr(t3);
t7=C_a_i_list(&a,2,lf[99],t6);
t8=C_a_i_list(&a,3,lf[101],t5,t7);
t9=C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t9);
t13=t1;
t14=C_slot(t2,C_fix(1));
t1=t13;
t2=t14;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7164 in k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7166,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_7092(t2,C_a_i_cons(&a,2,lf[100],t1));}

/* loop in k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7178(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_7178,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_caar(t2);
if(C_truep(C_i_assq(t3,((C_word*)t0)[2]))){
/* modules.scm:384: loop */
t11=t1;
t12=C_u_i_cdr(t2);
t1=t11;
t2=t12;
goto loop;}
else{
t4=C_i_caar(t2);
t5=C_u_i_car(t2);
t6=C_u_i_car(t5);
t7=C_a_i_list(&a,2,lf[99],t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7220,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=C_u_i_car(t2);
/* modules.scm:387: chicken.syntax#strip-syntax */
t10=C_fast_retrieve(lf[102]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t8;
av2[2]=C_u_i_cdr(t9);
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}

/* k7208 in k7218 in loop in k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_7210,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7218 in loop in k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_7220,c,av);}
a=C_alloc(13);
t2=C_a_i_list(&a,3,lf[101],((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7210,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:388: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_7178(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* g1486 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7235(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7235,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(C_i_pairp(t4))){
t5=C_u_i_car(t2);
t6=C_a_i_list(&a,2,lf[99],t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7259,a[2]=t1,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:374: chicken.syntax#strip-syntax */
t8=C_fast_retrieve(lf[102]);{
C_word av2[3];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_u_i_cdr(t4);
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_a_i_list(&a,2,lf[99],t3);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7257 in g1486 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7259,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,lf[101],((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7273 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7275(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7275,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,lf[100],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7166,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[9]))){
t5=t3;
f_7092(t5,C_a_i_cons(&a,2,lf[100],C_SCHEME_END_OF_LIST));}
else{
t5=(
/* modules.scm:382: module-defined-syntax-list */
  f_5481(C_retrieve2(lf[25],C_text("module-defined-syntax-list")),((C_word*)t0)[2])
);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7178,a[2]=((C_word*)t0)[9],a[3]=t7,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_7178(t9,t4,t5);}}

/* map-loop1480 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7277(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7277,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:370: g1486 */
t4=((C_word*)t0)[4];
f_7235(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7300 in map-loop1480 in k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7302,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7277(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7362 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7364(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,3)))){
C_save_and_reclaim((void *)f_7364,c,av);}
a=C_alloc(37);
t2=C_a_i_cons(&a,2,lf[100],t1);
t3=(
/* modules.scm:368: module-vexports */
  f_5571(C_retrieve2(lf[39],C_text("module-vexports")),((C_word*)t0)[2])
);
t4=C_a_i_list(&a,2,lf[99],t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7235,a[2]=((C_word*)t0)[3],a[3]=((C_word)li72),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(((C_word*)t0)[4],lf[5]);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7277,a[2]=t7,a[3]=t13,a[4]=t9,a[5]=t8,a[6]=((C_word)li75),tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_7277(t15,t11,((C_word*)t0)[4]);}

/* map-loop1447 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7366(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_7366,3,t0,t1,t2);}
a=C_alloc(30);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_cdr(t4);
if(C_truep(C_i_symbolp(t5))){
t6=C_u_i_car(t4);
t7=C_u_i_cdr(t4);
t8=C_a_i_cons(&a,2,t6,t7);
t9=t3;
f_7391(t9,C_a_i_list(&a,2,lf[99],t8));}
else{
t6=C_u_i_car(t4);
t7=C_a_i_list(&a,2,lf[99],t6);
t8=C_a_i_list(&a,2,lf[99],C_SCHEME_END_OF_LIST);
t9=C_u_i_cdr(t4);
t10=t3;
f_7391(t10,C_a_i_list(&a,4,lf[100],t7,t8,t9));}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7389 in map-loop1447 in k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7391(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7391,2,t0,t1);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7366(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k7404 in k7058 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7406(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(34,c,3)))){
C_save_and_reclaim((void *)f_7406,c,av);}
a=C_alloc(34);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,2,lf[99],t1);
t4=(
/* modules.scm:361: module-library */
  f_5418(C_retrieve2(lf[13],C_text("module-library")),((C_word*)t2)[2])
);
t5=C_a_i_list(&a,2,lf[99],t4);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(
/* modules.scm:367: module-iexports */
  f_5607(C_retrieve2(lf[45],C_text("module-iexports")),((C_word*)t2)[2])
);
t11=C_i_check_list_2(t10,lf[5]);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7364,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t3,a[6]=t5,a[7]=((C_word*)t2)[5],a[8]=((C_word*)t2)[6],tmp=(C_word)a,a+=9,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7366,a[2]=t8,a[3]=t14,a[4]=t9,a[5]=((C_word)li76),tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_7366(t16,t12,t10);}

/* k7419 in k7050 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7421(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7421,c,av);}
/* modules.scm:357: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[105]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[105]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k7440 in k7042 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7442,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,lf[106],t1);
t3=((C_word*)t0)[2];
f_7052(t3,C_a_i_list(&a,1,t2));}

/* k7468 in k7034 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_7470,c,av);}
a=C_alloc(18);
t2=C_a_i_cons(&a,2,lf[106],t1);
t3=C_a_i_list(&a,2,lf[99],t2);
t4=C_a_i_list(&a,2,lf[107],t3);
t5=((C_word*)t0)[2];
f_7044(t5,C_a_i_list(&a,1,t4));}

/* k7477 in k7002 in ##sys#compiled-module-registration in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7479(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7479,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6975,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
t4=(
/* modules.scm:335: module-import-forms */
  f_5517(C_retrieve2(lf[30],C_text("module-import-forms")),((C_word*)t0)[3])
);
/* modules.scm:333: filter-map */
f_4695(t2,t3,t4);}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
f_7036(2,av2);}}}

/* ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7496(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5=av[5];
C_word t6=av[6];
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
if(c<7) C_bad_min_argc_2(c,7,t0);
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7496,c,av);}
a=C_alloc(13);
t7=C_rest_nullp(c,7);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,7,av,7,t0));
t9=C_rest_nullp(c,7);
t10=C_rest_nullp(c,8);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,8,av,7,t0));
t12=C_rest_nullp(c,8);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7538,a[2]=t8,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=t4,a[7]=t11,a[8]=t1,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7778,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:408: filter-map */
f_4695(t13,t14,t6);}

/* k7533 in a7765 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7535(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7535,c,av);}
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=C_i_cdr(t2);
if(C_truep(C_i_pairp(t3))){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:404: ##sys#error */
t4=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[114];
av2[3]=lf[115];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
/* modules.scm:404: ##sys#error */
t3=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[114];
av2[3]=lf[115];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}}

/* k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7538,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7541,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7766,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* modules.scm:413: filter-map */
f_4695(t2,t3,((C_word*)t0)[9]);}

/* k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7541(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_7541,c,av);}
a=C_alloc(23);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[5]);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7567,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7732,a[2]=t4,a[3]=t9,a[4]=t5,a[5]=((C_word)li87),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7732(t11,t7,((C_word*)t0)[2]);}

/* k7555 in map-loop1595 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7557(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7557,c,av);}
a=C_alloc(12);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_SCHEME_FALSE,t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t6=((C_word*)((C_word*)t0)[4])[1];
f_7732(t6,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_7567,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:419: scheme#append */
t3=*((C_word*)lf[60]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[9];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7573(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_7573,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7574,a[2]=t1,a[3]=((C_word)li83),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7599,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7677,a[2]=t6,a[3]=t2,a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7677(t8,t4,((C_word*)t0)[2]);}

/* g1628 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7574(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7574,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7586,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t2);
if(C_truep(t5)){
/* modules.scm:430: merge-se */
f_6765(t4,C_a_i_list(&a,2,t5,((C_word*)t0)[2]));}
else{
/* modules.scm:430: merge-se */
f_6765(t4,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7584 in g1628 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7586,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7599(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_7599,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7600,a[2]=((C_word*)t0)[2],a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[72]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7625,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7654,a[2]=t6,a[3]=t2,a[4]=((C_word)li85),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7654(t8,t4,((C_word*)t0)[3]);}

/* g1638 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7600(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_7600,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7612,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cadr(t2);
if(C_truep(t5)){
/* modules.scm:434: merge-se */
f_6765(t4,C_a_i_list(&a,2,t5,((C_word*)t0)[2]));}
else{
/* modules.scm:434: merge-se */
f_6765(t4,C_a_i_list(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]));}}

/* k7610 in g1638 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7612,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k7623 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_7625,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7644,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7652,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:438: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t4;
tp(2,av2);}}

/* k7626 in k7623 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7628,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,C_fast_retrieve(lf[66]));
t4=C_mutate((C_word*)lf[66]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7642 in k7623 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7644,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7648,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:439: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7646 in k7642 in k7623 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7648,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,((C_word*)t2)[2],t1);
/* modules.scm:436: set-module-saved-environments! */
t4=C_retrieve2(lf[50],C_text("set-module-saved-environments!"));
f_5634(t4,((C_word*)t2)[3],((C_word*)t2)[4],t3);}

/* k7650 in k7623 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7652,c,av);}
a=C_alloc(9);
/* modules.scm:438: merge-se */
f_6765(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* for-each-loop1637 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7654(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7654,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7664,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:432: g1638 */
t4=((C_word*)t0)[3];
f_7600(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7662 in for-each-loop1637 in k7597 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7664,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7654(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1627 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7677(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7677,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7687,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:428: g1628 */
t4=((C_word*)t0)[3];
f_7574(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7685 in for-each-loop1627 in k7571 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7687,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7677(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k7709 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7711,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7715,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:425: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7713 in k7709 in k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_7715,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
/* modules.scm:423: merge-se */
f_6765(((C_word*)t2)[2],C_a_i_list(&a,6,((C_word*)t2)[3],t1,((C_word*)t2)[4],((C_word*)t2)[5],((C_word*)t2)[6],((C_word*)t2)[7]));}

/* k7728 in k7565 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7730(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_7730,c,av);}
a=C_alloc(36);
t2=(
/* modules.scm:419: make-module */
  f_5680(C_a_i(&a,17),((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],t1,((C_word*)t0)[5],C_a_i_list(&a,1,((C_word*)t0)[6]))
);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7573,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t4=C_i_nullp(((C_word*)t0)[7]);
t5=C_i_not(t4);
t6=(C_truep(t5)?t5:C_i_not(C_i_nullp(((C_word*)t0)[8])));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7711,a[2]=t3,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:424: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t7;
tp(2,av2);}}
else{
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
f_7573(2,av2);}}}

/* map-loop1595 in k7539 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7732,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7557,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:417: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[112]);
C_word av2[4];
av2[0]=*((C_word*)lf[112]+1);
av2[1]=t5;
av2[2]=C_u_i_cdr(t3);
av2[3]=C_u_i_car(t3);
tp(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7765 in k7536 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7766,c,av);}
a=C_alloc(4);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7535,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:401: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a7777 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7778(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_7778,c,av);}
a=C_alloc(4);
t3=C_i_symbolp(t2);
if(C_truep(C_i_not(t3))){
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7796,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:410: ##sys#ensure-transformer */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[112]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[112]+1);
av2[1]=t5;
av2[2]=C_u_i_cdr(t2);
av2[3]=C_u_i_car(t2);
tp(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7794 in a7777 in ##sys#register-compiled-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_7796,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list3(&a,3,((C_word*)t0)[3],C_SCHEME_FALSE,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7830(C_word c,C_word *av){
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
if(c<5) C_bad_min_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_7830,c,av);}
a=C_alloc(7);
t5=C_rest_nullp(c,5);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_get_rest_arg(c,5,av,5,t0));
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7837,a[2]=t2,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:444: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t7;
tp(2,av2);}}

/* k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7837(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_7837,c,av);}
a=C_alloc(25);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7880,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[3],lf[5]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7902,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7904,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,a[6]=((C_word)li92),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_7904(t12,t8,((C_word*)t0)[3]);}

/* k7841 in k7900 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7843,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,t2,C_fast_retrieve(lf[66]));
t4=C_mutate((C_word*)lf[66]+1 /* (set! ##sys#module-table ...) */,t3);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k7857 in k7900 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7859,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7863,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:462: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k7861 in k7857 in k7900 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7863(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7863,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,((C_word*)t2)[2],t1);
/* modules.scm:457: set-module-saved-environments! */
t4=C_retrieve2(lf[50],C_text("set-module-saved-environments!"));
f_5634(t4,((C_word*)t2)[3],((C_word*)t2)[4],t3);}

/* k7865 in k7900 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_7867,c,av);}
a=C_alloc(9);
t2=(
/* modules.scm:460: module-vexports */
  f_5571(C_retrieve2(lf[39],C_text("module-vexports")),((C_word*)t0)[2])
);
t3=(
/* modules.scm:461: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),((C_word*)t0)[2])
);
/* modules.scm:459: merge-se */
f_6765(((C_word*)t0)[3],C_a_i_list(&a,3,t1,t2,t3));}

/* g1696 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7880(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7880,3,t0,t1,t2);}
if(C_truep(C_i_symbolp(t2))){
t3=C_i_assq(t2,((C_word*)t0)[2]);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* modules.scm:451: ##sys#error */
t4=*((C_word*)lf[113]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=lf[117];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7900 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7902(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_7902,c,av);}
a=C_alloc(31);
t2=(
/* modules.scm:445: make-module */
  f_5680(C_a_i(&a,17),((C_word*)t0)[2],((C_word*)t0)[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[4],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST)
);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7843,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7859,a[2]=C_SCHEME_UNDEFINED,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7867,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:459: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t5;
tp(2,av2);}}

/* map-loop1690 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7904(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_7904,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:448: g1696 */
t4=((C_word*)t0)[4];
f_7880(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k7927 in map-loop1690 in k7835 in ##sys#register-core-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7929,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_7904(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* ##sys#register-primitive-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_7944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_7944,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* modules.scm:469: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word av2[6];
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
av2[5]=C_SCHEME_END_OF_LIST;
tp(6,av2);}}
else{
/* modules.scm:469: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[116]);
C_word av2[6];
av2[0]=*((C_word*)lf[116]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_SCHEME_FALSE;
av2[4]=t3;
av2[5]=C_get_rest_arg(c,4,av,4,t0);
tp(6,av2);}}}

/* find-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_7959(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7959,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(
/* modules.scm:472: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),t3)
);
t6=C_eqp(C_SCHEME_TRUE,t5);
t7=(C_truep(t6)?(
/* modules.scm:473: module-exist-list */
  f_5463(C_retrieve2(lf[22],C_text("module-exist-list")),t3)
):t5);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7972,a[2]=t2,a[3]=t4,a[4]=((C_word)li95),tmp=(C_word)a,a+=5,tmp);
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=(
  f_7972(t8,t7)
);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* loop in find-export in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_7972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_car(t1);
t3=C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
return(t3);}
else{
if(C_truep(C_i_pairp(C_u_i_car(t1)))){
t4=C_i_caar(t1);
t5=C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(t5);}
else{
if(C_truep(((C_word*)t0)[3])){
t6=C_u_i_car(t1);
t7=C_i_memq(((C_word*)t0)[2],C_u_i_cdr(t6));
if(C_truep(t7)){
return(t7);}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}}
else{
t9=C_u_i_cdr(t1);
t1=t9;
goto loop;}}}}

/* ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8037(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_8037,c,av);}
a=C_alloc(17);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9052,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp):C_get_rest_arg(c,3,av,3,t0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8043,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=t2,a[6]=((C_word)li108),tmp=(C_word)a,a+=7,tmp);
t6=(
/* modules.scm:554: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),t2)
);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8550,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* modules.scm:555: module-name */
t8=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t2;
f_5409(3,av2);}}

/* report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8043(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8043,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8047,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:493: scheme#open-output-string */
t6=C_fast_retrieve(lf[129]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8047(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8047,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=C_i_check_port_2(((C_word*)t2)[2],C_fix(2),C_SCHEME_TRUE,lf[120]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8053,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:494: ##sys#print */
t6=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[144];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8053,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8056,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8485,a[2]=t3,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:494: module-name */
t5=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
f_5409(3,av2);}}

/* k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8056,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8059,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:494: ##sys#print */
t3=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[143];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_8059,c,av);}
a=C_alloc(25);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8062,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8376,a[2]=((C_word*)t2)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(((C_word*)t2)[4],lf[5]);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8447,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8449,a[2]=t7,a[3]=t12,a[4]=t8,a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8449(t14,t10,((C_word*)t2)[4]);}

/* k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8062(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_8062,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8063,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word)li104),tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8342,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8351,a[2]=t5,a[3]=t2,a[4]=((C_word)li105),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8351(t7,t3,((C_word*)t0)[4]);}

/* g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8063(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_8063,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+4,t1);
t5=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[120]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8070,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:509: ##sys#print */
t7=*((C_word*)lf[123]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[139];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8070,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8073,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:509: ##sys#print */
t4=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)t2)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8073,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8076,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:509: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t3;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t2)[2];
tp(4,av2);}}

/* k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_8076,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8077,a[2]=((C_word*)t2)[2],a[3]=((C_word)li100),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8215,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:527: scheme#reverse */
t5=*((C_word*)lf[93]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_cdr(((C_word*)t2)[3]);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8077(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_8077,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8080,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?(C_truep(C_u_i_car(t2))?C_u_i_cdr(t2):C_SCHEME_FALSE):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8110,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8120,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=C_SCHEME_UNDEFINED,a[6]=t2,a[7]=((C_word)li99),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:519: g1875 */
t8=t7;
f_8120(t8,t6,t5);}
else{
t7=C_i_pairp(t2);
t8=(C_truep(t7)?C_u_i_cdr(t2):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8162,a[2]=t6,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:524: scheme#open-output-string */
t10=C_fast_retrieve(lf[129]);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8185,a[2]=t6,a[3]=C_SCHEME_UNDEFINED,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:525: scheme#open-output-string */
t10=C_fast_retrieve(lf[129]);{
C_word av2[2];
av2[0]=t10;
av2[1]=t9;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}}

/* ln->num in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8080(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_8080,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8084,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:514: chicken.string#string-split */
t4=C_fast_retrieve(lf[121]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=lf[122];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k8082 in ln->num in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8084,c,av);}
if(C_truep(C_i_pairp(t1))){
t2=C_i_length(t1);
t3=C_eqp(C_fix(2),t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_i_cadr(t1):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k8108 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8110,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_i_check_port_2(((C_word*)t0)[4],C_fix(2),C_SCHEME_TRUE,lf[120]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8116,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:526: ##sys#print */
t5=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[124];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8114 in k8108 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8116,c,av);}
t2=((C_word*)t0)[2];
/* modules.scm:526: ##sys#print */
t3=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* g1875 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8120(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8120,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+5,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8124,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:522: scheme#open-output-string */
t6=C_fast_retrieve(lf[129]);{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k8122 in g1875 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8124(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8124,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=C_i_check_port_2(((C_word*)t2)[3],C_fix(2),C_SCHEME_TRUE,lf[125]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8130,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:522: ##sys#print */
t6=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[128];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k8128 in k8122 in g1875 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_8130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8130,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8133,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:522: ##sys#print */
t4=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)t2)[6]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8131 in k8128 in k8122 in g1875 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_8133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8133,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8136,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:522: ##sys#print */
t3=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[127];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8134 in k8131 in k8128 in k8122 in g1875 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_8136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8136,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8139,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8146,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:522: ln->num */
f_8080(t4,((C_word*)t2)[5]);}

/* k8137 in k8134 in k8131 in k8128 in k8122 in g1875 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in ... */
static void C_ccall f_8139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8139,c,av);}
/* modules.scm:522: scheme#get-output-string */
t2=C_fast_retrieve(lf[126]);{
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

/* k8144 in k8134 in k8131 in k8128 in k8122 in g1875 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in ... */
static void C_ccall f_8146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8146,c,av);}
/* modules.scm:522: ##sys#print */
t2=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8160 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8162,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[125]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8168,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:524: ##sys#print */
t5=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[130];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8166 in k8160 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8168,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8171,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8178,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:524: ln->num */
f_8080(t4,C_i_cdr(((C_word*)t2)[5]));}

/* k8169 in k8166 in k8160 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_8171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8171,c,av);}
/* modules.scm:524: scheme#get-output-string */
t2=C_fast_retrieve(lf[126]);{
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

/* k8176 in k8166 in k8160 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_8178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8178,c,av);}
/* modules.scm:524: ##sys#print */
t2=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8183 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8185,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[125]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8191,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:525: ##sys#print */
t5=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[132];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k8189 in k8183 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8191,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8194,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:525: ##sys#print */
t4=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k8192 in k8189 in k8183 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_8194(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8194,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8197,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:525: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[131]+1);
av2[1]=t2;
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8195 in k8192 in k8189 in k8183 in g1848 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_8197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8197,c,av);}
t2=((C_word*)t0)[2];
/* modules.scm:525: scheme#get-output-string */
t3=C_fast_retrieve(lf[126]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_8215,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8312,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8312(t6,t2,t1);}

/* k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8218,c,av);}
a=C_alloc(5);
t2=C_u_i_car(((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_i_getprop(t2,lf[133],C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[120]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8236,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:532: ##sys#print */
t6=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[138];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8236,c,av);}
a=C_alloc(5);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[120]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8248,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:535: ##sys#print */
t6=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[135];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
t4=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[120]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8264,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:537: ##sys#print */
t6=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[137];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* k8246 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_8248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8248,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8251,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8258,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:535: scheme#cadar */
t5=*((C_word*)lf[134]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k8249 in k8246 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_8251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8251,c,av);}
/* modules.scm:535: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[131]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[131]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(39);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k8256 in k8246 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_8258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8258,c,av);}
/* modules.scm:535: ##sys#print */
t2=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8262 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_8264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_8264,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8265,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[2],a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8284,a[2]=t4,a[3]=t2,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8284(t6,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* g1958 in k8262 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void f_8265(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_8265,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=C_i_check_port_2(((C_word*)t0)[4],C_fix(2),C_SCHEME_TRUE,lf[120]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8272,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:540: ##sys#print */
t7=*((C_word*)lf[123]+1);{
C_word av2[5];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[136];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k8270 in g1958 in k8262 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_8272(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8272,c,av);}
t2=((C_word*)t0)[2];
/* modules.scm:540: ##sys#print */
t3=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=C_i_cadr(((C_word*)t2)[3]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* for-each-loop1957 in k8262 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void f_8284(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8284,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8294,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:538: g1958 */
t4=((C_word*)t0)[3];
f_8265(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8292 in for-each-loop1957 in k8262 in k8234 in k8216 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_8294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8294,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8284(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1847 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8312(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8312,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8322,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:512: g1848 */
t4=((C_word*)t0)[3];
f_8077(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8320 in for-each-loop1847 in k8213 in k8074 in k8071 in k8068 in g1780 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8322,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8312(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8340 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8342,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:544: scheme#get-output-string */
t3=C_fast_retrieve(lf[126]);{
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

/* k8347 in k8340 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8349,c,av);}
/* modules.scm:544: ##sys#error */
t2=*((C_word*)lf[113]+1);{
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

/* for-each-loop1779 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8351,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8361,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:507: g1780 */
t4=((C_word*)t0)[3];
f_8063(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8359 in for-each-loop1779 in k8060 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8361(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8361,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8351(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8374 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8376,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8378,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8378(t5,((C_word*)t0)[3],t1);}

/* lp in k8374 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8378(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8378,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(t3)){
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_u_i_cdr(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8408,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:501: chicken.string#string-split */
t7=C_fast_retrieve(lf[121]);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[142];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
/* modules.scm:505: lp */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}
else{
/* modules.scm:505: lp */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}}}

/* k8406 in lp in k8374 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_8408,c,av);}
a=C_alloc(5);
t2=C_eqp(C_fix(2),C_u_i_length(t1));
if(C_truep(t2)){
t3=C_i_check_port_2(((C_word*)t0)[2],C_fix(2),C_SCHEME_TRUE,lf[120]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8420,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:503: ##sys#print */
t5=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[141];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
/* modules.scm:505: lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8378(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[5]));}}

/* k8418 in k8406 in lp in k8374 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_8420,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:503: ##sys#print */
t3=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8421 in k8418 in k8406 in lp in k8374 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8423,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:503: ##sys#print */
t3=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[140];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k8424 in k8421 in k8418 in k8406 in lp in k8374 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8426,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8445 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8447,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[60]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop1815 in k8057 in k8054 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8449(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_8449,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
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

/* k8483 in k8051 in k8045 in report-unresolved-identifiers in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8485(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8485,c,av);}
/* modules.scm:494: ##sys#print */
t2=*((C_word*)lf[123]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* loop in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8497(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8497,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8540,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:549: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word av2[4];
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=C_i_caar(t2);
av2[3]=lf[164];
tp(4,av2);}}}

/* k8524 in k8534 in k8538 in loop in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8526(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8526,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8534 in k8538 in loop in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_8536,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_i_assq(((C_word*)t2)[2],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8526,a[2]=((C_word*)t2)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:552: loop */
t5=((C_word*)((C_word*)t2)[4])[1];
f_8497(t5,t4,C_u_i_cdr(((C_word*)t2)[5]));}

/* k8538 in loop in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8540(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8540,c,av);}
a=C_alloc(3);
t2=C_eqp(t1,lf[165]);
if(C_truep(t2)){
/* modules.scm:550: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8497(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[5]));}
else{
t3=C_i_caar(((C_word*)t0)[5]);
t4=C_mutate(((C_word *)t0)+2,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8536,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:551: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t5;
tp(2,av2);}}}

/* k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8550(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_8550,c,av);}
a=C_alloc(19);
t2=(
/* modules.scm:556: module-defined-list */
  f_5445(C_retrieve2(lf[19],C_text("module-defined-list")),((C_word*)t0)[2])
);
t3=(
/* modules.scm:557: module-exist-list */
  f_5463(C_retrieve2(lf[22],C_text("module-exist-list")),((C_word*)t0)[2])
);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8559,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
t7=(
/* modules.scm:547: module-defined-syntax-list */
  f_5481(C_retrieve2(lf[25],C_text("module-defined-syntax-list")),((C_word*)t0)[2])
);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8497,a[2]=t9,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_8497(t11,t6,t7);}

/* k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8559(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8559,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8562,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[8]);
if(C_truep(t3)){
t4=(
/* modules.scm:562: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),((C_word*)t0)[4])
);
/* modules.scm:562: merge-se */
f_6765(t2,C_a_i_list(&a,2,t4,t1));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8994,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:563: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t4;
tp(2,av2);}}}

/* k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8562(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_8562,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[9]);
t4=(C_truep(t3)?((C_word*)t0)[2]:((C_word*)t0)[9]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8805,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[11],a[8]=((C_word)li122),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_8805(t8,t2,t4);}

/* k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8565(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_8565,c,av);}
a=C_alloc(19);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8566,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li109),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8584,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* modules.scm:614: module-undefined-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* g2050 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_8566(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;{}
t2=C_i_car(t1);
if(C_truep(C_i_memq(t2,((C_word*)t0)[2]))){
t3=C_SCHEME_UNDEFINED;
return(t3);}
else{
t3=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
return(t4);}}

/* k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8584(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8584,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[72]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8778,a[2]=((C_word*)t0)[11],a[3]=t5,a[4]=((C_word)li118),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_8778(t7,t3,t1);}

/* k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8590,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[9])[1]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8593(2,av2);}}
else{
/* modules.scm:616: report-unresolved-identifiers */
t3=((C_word*)t0)[10];
f_8043(t3,t2,((C_word*)((C_word*)t0)[9])[1]);}}

/* k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8593,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
/* modules.scm:619: ##sys#error */
t3=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[153];
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_8596(2,av2);}}}

/* k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8596(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_8596,c,av);}
a=C_alloc(19);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t7=(
/* modules.scm:280: module-export-list */
  f_5427(C_retrieve2(lf[15],C_text("module-export-list")),((C_word*)t0)[4])
);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6556,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:281: module-name */
t9=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=((C_word*)t0)[4];
f_5409(3,av2);}}

/* k8622 in map-loop2069 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8624,c,av);}
a=C_alloc(3);
t2=C_i_assq(((C_word*)t0)[2],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_8745(t3,C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST));}
else{
/* modules.scm:624: ##sys#error */
t3=*((C_word*)lf[113]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
av2[2]=lf[145];
av2[3]=C_u_i_car(((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8631(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_8631,c,av);}
a=C_alloc(15);
t2=C_i_check_list_2(t1,lf[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8735,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word)li112),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8735(t7,t3,t1);}

/* k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8637,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8729,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:627: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8640(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_8640,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8641,a[2]=t1,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[72]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8663,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8704,a[2]=t6,a[3]=t2,a[4]=((C_word)li111),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_8704(t8,t4,((C_word*)t0)[2]);}

/* g2105 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8641(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_8641,3,t0,t1,t2);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8645,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(t2);
/* modules.scm:632: merge-se */
f_6765(t3,C_a_i_list(&a,2,t4,((C_word*)t0)[2]));}

/* k8643 in g2105 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8645,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_set_car(C_u_i_cdr(((C_word*)t0)[3]),t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8663,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8669,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:643: set-module-vexports! */
t3=C_retrieve2(lf[41],C_text("set-module-vexports!"));
f_5580(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k8667 in k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8669,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8672,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:644: set-module-sexports! */
t4=C_retrieve2(lf[44],C_text("set-module-sexports!"));
f_5598(t4,t3,((C_word*)t2)[3],((C_word*)t2)[5]);}

/* k8670 in k8667 in k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_8672(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8672,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8675,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8698,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t5=(
/* modules.scm:647: module-iexports */
  f_5607(C_retrieve2(lf[45],C_text("module-iexports")),((C_word*)t2)[3])
);
/* modules.scm:647: merge-se */
f_6765(t4,C_a_i_list(&a,2,t5,((C_word*)t2)[6]));}

/* k8673 in k8670 in k8667 in k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_8675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_8675,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8686,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8694,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:650: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8684 in k8673 in k8670 in k8667 in k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_8686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8686,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8690,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:651: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word *av2=av;
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8688 in k8684 in k8673 in k8670 in k8667 in k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in ... */
static void C_ccall f_8690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8690,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,((C_word*)t2)[2],t1);
/* modules.scm:648: set-module-saved-environments! */
t4=C_retrieve2(lf[50],C_text("set-module-saved-environments!"));
f_5634(t4,((C_word*)t2)[3],((C_word*)t2)[4],t3);}

/* k8692 in k8673 in k8670 in k8667 in k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_8694(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8694,c,av);}
a=C_alloc(9);
/* modules.scm:650: merge-se */
f_6765(((C_word*)t0)[2],C_a_i_list(&a,3,t1,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k8696 in k8670 in k8667 in k8661 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_8698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_8698,c,av);}
/* modules.scm:645: set-module-iexports! */
t2=C_retrieve2(lf[47],C_text("set-module-iexports!"));
f_5616(t2,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* for-each-loop2104 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8704(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_8704,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8714,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:630: g2105 */
t4=((C_word*)t0)[3];
f_8641(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k8712 in for-each-loop2104 in k8638 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_8714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8714,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_8704(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k8727 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8729,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8733,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:628: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t3;
tp(2,av2);}}

/* k8731 in k8727 in k8635 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_8733,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
/* modules.scm:626: merge-se */
f_6765(((C_word*)t2)[2],C_a_i_list(&a,6,((C_word*)t2)[3],t1,((C_word*)t2)[4],((C_word*)t2)[5],((C_word*)t2)[6],((C_word*)t2)[7]));}

/* map-loop2069 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8735(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_8735,3,t0,t1,t2);}
a=C_alloc(15);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8745,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8760,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_i_cdr(t5);
if(C_truep(C_i_symbolp(t6))){
t7=t3;
f_8745(t7,C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST));}
else{
t7=C_u_i_car(t5);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8624,a[2]=t7,a[3]=t3,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:623: ##sys#macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[69]);
C_word av2[2];
av2[0]=*((C_word*)lf[69]+1);
av2[1]=t8;
tp(2,av2);}}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8743 in map-loop2069 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8745(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_8745,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8735(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8758 in map-loop2069 in k8629 in k8594 in k8591 in k8588 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8760,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
f_8745(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* for-each-loop2049 in k8582 in k8563 in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8778(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8778,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
/* modules.scm:611: g2050 */
  f_8566(C_a_i(&a,3),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
);
t5=t1;
t6=C_slot(t2,C_fix(1));
t1=t5;
t2=t6;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8805(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_8805,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_symbolp(t3);
t5=(C_truep(t4)?t3:C_i_car(t3));
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8968,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:576: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word av2[4];
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t6;
av2[2]=t5;
av2[3]=lf[164];
tp(4,av2);}}}

/* k8849 in k8858 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_8851,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k8858 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_8860,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8851,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:607: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8805(t4,t3,C_u_i_cdr(((C_word*)t0)[5]));}

/* fail in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8871(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_8871,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8875,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:588: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word av2[3];
av2[0]=*((C_word*)lf[77]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k8873 in fail in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_8875,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* id-string in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8878(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_8878,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8886,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:591: scheme#symbol->string */
t3=*((C_word*)lf[149]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k8884 in id-string in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8886,c,av);}
/* modules.scm:591: scheme#string-append */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[155];
av2[3]=t1;
av2[4]=lf[156];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8905 in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8907,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:592: g2040 */
t3=t2;
f_8911(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep(C_i_not(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8943,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:604: id-string */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8878(t4,t3);}
else{
/* modules.scm:606: bomb */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[162]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[162]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[163];
tp(3,av2);}}}}

/* g2040 in k8905 in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8911(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8911,3,t0,t1,t2);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8919,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8923,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:600: id-string */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8878(t5,t4);}

/* k8917 in g2040 in k8905 in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8919,c,av);}
/* modules.scm:599: fail */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8871(t2,((C_word*)t0)[3],t1);}

/* k8921 in g2040 in k8905 in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_8923,c,av);}
/* modules.scm:599: scheme#string-append */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[157];
av2[3]=t1;
av2[4]=lf[158];
av2[5]=((C_word*)t0)[3];
av2[6]=lf[159];
((C_proc)(void*)(*((C_word*)t2+1)))(7,av2);}}

/* k8937 in k8905 in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_8939,c,av);}
/* modules.scm:603: fail */
t2=((C_word*)((C_word*)t0)[2])[1];
f_8871(t2,((C_word*)t0)[3],t1);}

/* k8941 in k8905 in k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8943,c,av);}
/* modules.scm:603: scheme#string-append */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[160];
av2[3]=t1;
av2[4]=lf[161];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k8955 in k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8957(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8957,c,av);}
a=C_alloc(18);
t2=C_i_assq(((C_word*)t0)[2],t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8871,a[2]=((C_word*)t0)[3],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8878,a[2]=((C_word*)t0)[2],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp));
t9=(C_truep(t2)?C_i_symbolp(C_i_cdr(t2)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_i_cdr(t2);
f_8860(2,av2);}}
else{
if(C_truep(((C_word*)t0)[5])){
/* modules.scm:595: module-rename */
f_10730(((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8907,a[2]=t4,a[3]=t6,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:596: invalid-export */
t11=((C_word*)t0)[7];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
((C_proc)C_fast_retrieve_proc(t11))(3,av2);}}}}

/* k8966 in loop in k8560 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8968(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_8968,c,av);}
a=C_alloc(14);
t2=C_eqp(t1,lf[154]);
if(C_truep(t2)){
/* modules.scm:577: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8805(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
if(C_truep(C_i_assq(((C_word*)t0)[5],((C_word*)t0)[6]))){
/* modules.scm:578: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8805(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t3=C_i_assq(((C_word*)t0)[5],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8860,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_truep(t3)?C_i_symbolp(C_i_cdr(t3)):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_i_cdr(t3);
f_8860(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8957,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[8],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:586: ##sys#current-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[70]);
C_word *av2=av;
av2[0]=*((C_word*)lf[70]+1);
av2[1]=t6;
tp(2,av2);}}}}}

/* k8992 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_8994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8994,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8996,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word)li123),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_8996(t5,((C_word*)t0)[3],t1);}

/* loop in k8992 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_8996(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_8996,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9044,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:565: ##sys#get */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[84]);
C_word av2[4];
av2[0]=*((C_word*)lf[84]+1);
av2[1]=t3;
av2[2]=C_i_caar(t2);
av2[3]=lf[164];
tp(4,av2);}}}

/* k9018 in k9042 in loop in k8992 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9020,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9029,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:568: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_8996(t4,t3,C_u_i_cdr(((C_word*)t0)[2]));}
else{
/* modules.scm:569: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8996(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[2]));}}

/* k9027 in k9018 in k9042 in loop in k8992 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_9029,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k9042 in loop in k8992 in k8557 in k8548 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_9044,c,av);}
a=C_alloc(5);
t2=C_eqp(t1,lf[165]);
if(C_truep(t2)){
/* modules.scm:566: loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_8996(t3,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9020,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* modules.scm:567: find-export */
f_7959(t3,C_i_caar(((C_word*)t0)[4]),((C_word*)t0)[5],C_SCHEME_FALSE);}}

/* f_9052 in ##sys#finalize-module in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9052(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9052,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9059(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9059,c,av);}
a=C_alloc(9);
t3=C_fast_retrieve(lf[7]);
t4=C_fast_retrieve(lf[70]);
t5=C_fast_retrieve(lf[166]);
t6=C_fast_retrieve(lf[69]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9063,a[2]=C_SCHEME_UNDEFINED,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t2,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* modules.scm:662: ##sys#current-meta-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[166]);
C_word *av2=av;
av2[0]=*((C_word*)lf[166]+1);
av2[1]=t7;
tp(2,av2);}}

/* k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9063,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9066,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:664: ##sys#meta-macro-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[167]);
C_word *av2=av;
av2[0]=*((C_word*)lf[167]+1);
av2[1]=t3;
tp(2,av2);}}

/* k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9066(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(37,c,4)))){
C_save_and_reclaim((void *)f_9066,c,av);}
a=C_alloc(37);
t2=((C_word*)t0)[2];
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t2)[2];
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=t1;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_TRUE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9071,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,a[6]=t12,a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[4],a[9]=((C_word*)t2)[5],a[10]=((C_word*)t2)[6],a[11]=((C_word)li126),tmp=(C_word)a,a+=12,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9127,a[2]=((C_word*)t2)[7],a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9133,a[2]=t4,a[3]=t6,a[4]=t8,a[5]=t10,a[6]=((C_word*)t2)[3],a[7]=((C_word*)t2)[4],a[8]=((C_word*)t2)[5],a[9]=((C_word*)t2)[6],a[10]=((C_word)li128),tmp=(C_word)a,a+=11,tmp);
/* modules.scm:659: ##sys#dynamic-wind */
t16=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t16;
av2[1]=((C_word*)t2)[8];
av2[2]=t13;
av2[3]=t14;
av2[4]=t15;
((C_proc)(void*)(*((C_word*)t16+1)))(5,av2);}}

/* a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_9071,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_9075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=C_SCHEME_UNDEFINED,a[10]=((C_word*)t0)[8],a[11]=C_SCHEME_UNDEFINED,a[12]=((C_word*)t0)[9],a[13]=C_SCHEME_UNDEFINED,a[14]=((C_word*)t0)[10],a[15]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:659: ##sys#current-module2139 */
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
f_9075(2,av2);}}}

/* k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_9075,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+15,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9078,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
/* modules.scm:659: ##sys#current-environment2140 */
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
f_9078(2,av2);}}}

/* k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_9078,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+13,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9081,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t2)[6])[1])){
/* modules.scm:659: ##sys#current-meta-environment2141 */
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
f_9081(2,av2);}}}

/* k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_9081,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+11,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9084,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)((C_word*)t2)[6])[1])){
/* modules.scm:659: ##sys#macro-environment2142 */
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
f_9084(2,av2);}}}

/* k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9084,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9088,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:659: ##sys#current-module2139 */
t5=((C_word*)t2)[14];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9088(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_9088,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9092,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],tmp=(C_word)a,a+=15,tmp);
/* modules.scm:659: ##sys#current-environment2140 */
t5=((C_word*)t2)[12];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k9090 in k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_9092,c,av);}
a=C_alloc(14);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9096,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:659: ##sys#current-meta-environment2141 */
t4=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k9094 in k9090 in k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_9096,c,av);}
a=C_alloc(13);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:659: ##sys#macro-environment2142 */
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k9098 in k9094 in k9090 in k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_9100,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9103,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* modules.scm:659: ##sys#current-module2139 */
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

/* k9101 in k9098 in k9094 in k9090 in k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_9103,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:659: ##sys#current-environment2140 */
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

/* k9104 in k9101 in k9098 in k9094 in k9090 in k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_9106(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9106,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:659: ##sys#current-meta-environment2141 */
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

/* k9107 in k9104 in k9101 in k9098 in k9094 in k9090 in k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_9109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9109,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:659: ##sys#macro-environment2142 */
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

/* k9110 in k9107 in k9104 in k9101 in k9098 in k9094 in k9090 in k9086 in k9082 in k9079 in k9076 in k9073 in a9070 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_9112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9112,c,av);}
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a9126 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9127(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9127,c,av);}
/* modules.scm:665: thunk */
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_9133,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9137,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[4],a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[5],a[9]=t1,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:659: ##sys#current-module2139 */
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9137,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9140,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:659: ##sys#current-environment2140 */
t4=((C_word*)t0)[12];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}

/* k9138 in k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9140,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9143,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:659: ##sys#current-meta-environment2141 */
t5=((C_word*)t2)[11];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k9141 in k9138 in k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9143,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9146,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:659: ##sys#macro-environment2142 */
t5=((C_word*)t2)[10];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k9144 in k9141 in k9138 in k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_9146,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9149,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=t1,a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:659: ##sys#current-module2139 */
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

/* k9147 in k9144 in k9141 in k9138 in k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_9149,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:659: ##sys#current-environment2140 */
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

/* k9150 in k9147 in k9144 in k9141 in k9138 in k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9152,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:659: ##sys#current-meta-environment2141 */
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

/* k9153 in k9150 in k9147 in k9144 in k9141 in k9138 in k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_9155,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* modules.scm:659: ##sys#macro-environment2142 */
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

/* k9156 in k9153 in k9150 in k9147 in k9144 in k9141 in k9138 in k9135 in a9132 in k9064 in k9061 in ##sys#with-environment in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9158,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[3]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)t0)[5]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,((C_word*)t0)[7]);
t5=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[9]);
t6=((C_word*)t0)[10];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9164(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_9164,c,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9168,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9203,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9207,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:669: scheme#symbol->string */
t6=*((C_word*)lf[149]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k9166 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9168,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9176,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:671: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[97]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a9175 in k9166 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9176(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_9176,c,av);}
a=C_alloc(18);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9182,a[2]=t5,a[3]=t3,a[4]=((C_word)li130),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9187,a[2]=t0,a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9196,a[2]=t3,a[3]=t5,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp);
/* modules.scm:673: ##sys#dynamic-wind */
t9=*((C_word*)lf[59]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t9;
av2[1]=t1;
av2[2]=t6;
av2[3]=t7;
av2[4]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}

/* a9181 in a9175 in k9166 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9182(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9182,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[169]));
t3=C_mutate((C_word*)lf[169]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* a9186 in a9175 in k9166 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9187,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9191,a[2]=t1,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
/* modules.scm:674: scheme#load */
t4=*((C_word*)lf[170]+1);{
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

/* k9189 in a9186 in a9175 in k9166 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9191,c,av);}
/* modules.scm:675: ##sys#find-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
av2[4]=lf[114];
tp(5,av2);}}

/* a9195 in a9175 in k9166 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9196,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_fast_retrieve(lf[169]));
t3=C_mutate((C_word*)lf[169]+1 /* (set! ##sys#notices-enabled ...) */,((C_word*)((C_word*)t0)[3])[1]);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k9201 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9203,c,av);}
/* modules.scm:668: chicken.load#find-dynamic-extension */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[171]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[171]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_TRUE;
tp(4,av2);}}

/* k9205 in ##sys#import-library-hook in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9207,c,av);}
/* ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[172]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[172]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[173];
tp(4,av2);}}

/* find-module/import-library in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9210(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_9210,3,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9214,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:678: ##sys#resolve-module-name */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[61]);
C_word av2[4];
av2[0]=*((C_word*)lf[61]+1);
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k9212 in find-module/import-library in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9214(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_9214,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9217,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:679: ##sys#find-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[65]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[65]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k9215 in k9212 in find-module/import-library in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9217(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9217,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* modules.scm:680: ##sys#import-library-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[168]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[168]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}

/* ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9225(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9225,c,av);}
a=C_alloc(9);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9229,a[2]=t5,a[3]=t4,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=t2,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* modules.scm:683: r */
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[197];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9229,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9232,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:684: r */
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[196];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9232(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9232,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9235,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:685: r */
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[195];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9235,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9238,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t1,a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:686: r */
t4=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[194];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
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
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,5)))){
C_save_and_reclaim((void *)f_9238,c,av);}
a=C_alloc(31);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9240,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t9=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9254,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[2],a[5]=((C_word)li137),tmp=(C_word)a,a+=6,tmp));
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9298,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9384,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word)li173),tmp=(C_word)a,a+=13,tmp);
/* modules.scm:705: scheme#call-with-current-continuation */
t12=*((C_word*)lf[193]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=((C_word*)t0)[8];
av2[2]=t11;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* warn in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9240(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_9240,4,t1,t2,t3,t4);}
a=C_alloc(8);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9248,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9252,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:688: scheme#symbol->string */
t7=*((C_word*)lf[149]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k9246 in warn in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9248,c,av);}
/* modules.scm:688: ##sys#warn */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[77]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[77]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k9250 in warn in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9252,c,av);}
/* modules.scm:688: scheme#string-append */
t2=*((C_word*)lf[146]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[175];
av2[4]=t1;
av2[5]=lf[176];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* tostr in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9254(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_9254,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t5=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9267,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:691: chicken.keyword#keyword? */
t6=C_fast_retrieve(lf[182]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k9265 in tostr in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9267,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9274,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
/* modules.scm:691: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[178]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[178]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t2)[3]))){
/* modules.scm:692: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[178]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[178]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
tp(3,av2);}}
else{
if(C_truep(C_i_numberp(((C_word*)t2)[3]))){
/* ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[179]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[179]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_fix(10);
tp(4,av2);}}
else{
/* modules.scm:694: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[180]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[180]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[4];
av2[3]=lf[181];
tp(4,av2);}}}}}

/* k9272 in k9265 in tostr in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_9274,c,av);}
/* modules.scm:691: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[172]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[172]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[177];
tp(4,av2);}}

/* export-rename in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9298(C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_9298,3,t1,t2,t3);}
a=C_alloc(18);
t4=(
/* modules.scm:696: module-rename-list */
  f_5643(C_retrieve2(lf[51],C_text("module-rename-list")),t2)
);
if(C_truep(C_i_nullp(t4))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9312,a[2]=t4,a[3]=((C_word)li139),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_list_2(t3,lf[5]);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9347,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=t8,a[6]=((C_word)li140),tmp=(C_word)a,a+=7,tmp));
t14=((C_word*)t12)[1];
f_9347(t14,t1,t3);}}

/* g2248 in export-rename in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9312(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_9312,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_i_car(t2);
t4=C_i_assq(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9320,a[2]=t2,a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp);
/* modules.scm:700: g2266 */
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=(
/* modules.scm:700: g2266 */
  f_9320(C_a_i(&a,3),t5,t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* g2266 in g2248 in export-rename in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static C_word f_9320(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_i_cdr(t1);
t3=C_i_cdr(((C_word*)t0)[2]);
return(C_a_i_cons(&a,2,t2,t3));}

/* map-loop2242 in export-rename in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9347(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9347,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:699: g2248 */
t4=((C_word*)t0)[4];
f_9312(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k9370 in map-loop2242 in export-rename in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9372,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_9347(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9384(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_9384,c,av);}
a=C_alloc(21);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9387,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li142),tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9443,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word)li172),tmp=(C_word)a,a+=13,tmp));
t7=((C_word*)t5)[1];
f_9443(t7,t1,((C_word*)t0)[11]);}

/* module-imports in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9387(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_9387,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9391,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:708: chicken.internal#library-id */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[64]);
C_word av2[3];
av2[0]=*((C_word*)lf[64]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k9389 in module-imports in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9391,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:709: find-module/import-library */
f_9210(t2,t1,((C_word*)t0)[5]);}

/* k9392 in k9389 in module-imports in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9394(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,7)))){
C_save_and_reclaim((void *)f_9394,c,av);}
a=C_alloc(8);
if(C_truep(C_i_not(t1))){
/* modules.scm:711: k */
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[4];
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_FALSE;
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(8,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9410,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* modules.scm:712: module-name */
t3=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
f_5409(3,av2);}}}

/* k9408 in k9392 in k9389 in module-imports in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9410(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9410,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(
/* modules.scm:713: module-library */
  f_5418(C_retrieve2(lf[13],C_text("module-library")),((C_word*)t0)[2])
);
t4=C_mutate(((C_word *)t0)+5,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9418,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* modules.scm:714: module-name */
t6=C_retrieve2(lf[11],C_text("module-name"));{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[2];
f_5409(3,av2);}}

/* k9416 in k9408 in k9392 in k9389 in module-imports in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_9418,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9422,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(
/* modules.scm:715: module-vexports */
  f_5571(C_retrieve2(lf[39],C_text("module-vexports")),((C_word*)t2)[2])
);
/* modules.scm:715: export-rename */
f_9298(t4,((C_word*)t2)[2],t5);}

/* k9420 in k9416 in k9408 in k9392 in k9389 in module-imports in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9422(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_9422,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9426,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=(
/* modules.scm:716: module-sexports */
  f_5589(C_retrieve2(lf[42],C_text("module-sexports")),((C_word*)t2)[2])
);
/* modules.scm:716: export-rename */
f_9298(t3,((C_word*)t2)[2],t4);}

/* k9424 in k9420 in k9416 in k9408 in k9392 in k9389 in module-imports in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_9426,c,av);}
t2=(
/* modules.scm:717: module-iexports */
  f_5607(C_retrieve2(lf[45],C_text("module-iexports")),((C_word*)t0)[2])
);
/* modules.scm:712: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[7];
av2[6]=t1;
av2[7]=t2;
C_values(8,av2);}}

/* outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9443(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_9443,3,t0,t1,t2);}
a=C_alloc(14);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9457,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* modules.scm:720: chicken.syntax#strip-syntax */
t4=C_fast_retrieve(lf[102]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_i_pairp(t2);
if(C_truep(C_i_not(t3))){
/* modules.scm:722: ##sys#syntax-error */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[180]);
C_word av2[5];
av2[0]=*((C_word*)lf[180]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[183];
av2[4]=t2;
tp(5,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9475,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[2],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* modules.scm:725: c */
t6=((C_word*)t0)[7];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[11];
av2[3]=t4;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}}

/* k9455 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9457(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9457,c,av);}
/* modules.scm:720: module-imports */
t2=((C_word*)t0)[2];
f_9387(t2,((C_word*)t0)[3],t1);}

/* k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9475(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_9475,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:726: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[185]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[185]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[186];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* modules.scm:744: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[13];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9478(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9478,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9483,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li143),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9493,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li149),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:727: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9482 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9483(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9483,c,av);}
/* modules.scm:727: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9443(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9493(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9493,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9497,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t5,a[9]=t6,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:728: chicken.syntax#strip-syntax */
t9=C_fast_retrieve(lf[102]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,6)))){
C_save_and_reclaim((void *)f_9497,c,av);}
a=C_alloc(15);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word*)t0)[9],a[12]=((C_word)li148),tmp=(C_word)a,a+=13,tmp));
t5=((C_word*)t3)[1];
f_9502(t5,((C_word*)t0)[10],t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* loop in k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t17;
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(23,0,5)))){
C_save_and_reclaim_args((void *)trf_9502,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9510,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li144),tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(t5,lf[72]);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9520,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9533,a[2]=t10,a[3]=t6,a[4]=((C_word)li145),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_9533(t12,t8,t5);}
else{
t6=C_i_car(t2);
t7=C_i_assq(t6,((C_word*)t0)[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9561,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=t5,a[7]=((C_word)li146),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:730: g2353 */
t9=t8;
f_9561(t9,t1,t7);}
else{
t8=C_i_assq(C_u_i_car(t2),((C_word*)t0)[11]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9583,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[10],a[5]=t3,a[6]=t5,a[7]=((C_word)li147),tmp=(C_word)a,a+=8,tmp);
/* modules.scm:730: g2357 */
t10=t9;
f_9583(t10,t1,t8);}
else{
t9=C_u_i_cdr(t2);
t10=C_u_i_car(t2);
t11=C_a_i_cons(&a,2,t10,t5);
/* modules.scm:743: loop */
t13=t1;
t14=t9;
t15=t3;
t16=t4;
t17=t11;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
t5=t17;
goto loop;}}}}

/* g2333 in loop in k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9510(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9510,3,t0,t1,t2);}
/* modules.scm:733: warn */
f_9240(t1,lf[184],((C_word*)t0)[3],t2);}

/* k9518 in loop in k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9520(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9520,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:735: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2332 in loop in k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9533(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9533,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9543,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:731: g2333 */
t4=((C_word*)t0)[3];
f_9510(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9541 in for-each-loop2332 in loop in k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void C_ccall f_9543(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9543,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9533(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g2353 in loop in k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9561(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_9561,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:738: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9502(t5,t1,t3,t4,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* g2357 in loop in k9495 in a9492 in k9476 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_9583,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
/* modules.scm:741: loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_9502(t5,t1,t3,((C_word*)t0)[5],t4,((C_word*)t0)[6]);}

/* k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9625,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:745: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[185]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[185]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[188];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* modules.scm:767: c */
t3=((C_word*)t0)[10];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9628,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li150),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9643,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li157),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:746: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9632 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9633,c,av);}
/* modules.scm:746: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9443(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9643(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9643,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9647,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t6,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:747: chicken.syntax#strip-syntax */
t9=C_fast_retrieve(lf[102]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_9647,c,av);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word)li156),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_9652(t5,((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_END_OF_LIST,t1);}

/* loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void f_9652(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_9652,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li154),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_9664(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9764,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li155),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:749: g2436 */
t8=t7;
f_9764(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:766: loopv */
t11=t1;
t12=t7;
t13=t9;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* loops in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void f_9664(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_9664,5,t0,t1,t2,t3,t4);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li151),tmp=(C_word)a,a+=5,tmp);
t6=C_i_check_list_2(t4,lf[72]);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9682,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9695,a[2]=t9,a[3]=t5,a[4]=((C_word)li152),tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_9695(t11,t7,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_memq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9723,a[2]=t2,a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=t4,a[6]=((C_word)li153),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:751: g2431 */
t8=t7;
f_9723(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:761: loops */
t12=t1;
t13=t7;
t14=t9;
t15=t4;
t1=t12;
t2=t13;
t3=t14;
t4=t15;
goto loop;}}}

/* g2411 in loops in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_9672(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9672,3,t0,t1,t2);}
/* modules.scm:754: warn */
f_9240(t1,lf[187],((C_word*)t0)[3],t2);}

/* k9680 in loops in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_9682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9682,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:756: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2410 in loops in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_9695(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9695,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9705,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:752: g2411 */
t4=((C_word*)t0)[3];
f_9672(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9703 in for-each-loop2410 in loops in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_9705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9705,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9695(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g2431 in loops in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_9723(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_9723,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9735,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:759: delete */
f_4531(t4,C_i_car(t2),((C_word*)t0)[5],*((C_word*)lf[81]+1));}

/* k9733 in g2431 in loops in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_9735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9735,c,av);}
/* modules.scm:759: loops */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9664(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g2436 in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void f_9764(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_9764,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9776,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* modules.scm:764: delete */
f_4531(t4,C_i_car(t2),((C_word*)t0)[5],*((C_word*)lf[81]+1));}

/* k9774 in g2436 in loopv in k9645 in a9642 in k9626 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void C_ccall f_9776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9776,c,av);}
/* modules.scm:764: loopv */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9652(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_9808,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9811,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* modules.scm:768: ##sys#check-syntax */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[185]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[185]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[190];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* modules.scm:794: c */
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
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t3))(4,av2);}}}

/* k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,8)))){
C_save_and_reclaim((void *)f_9811,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li158),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9826,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word)li166),tmp=(C_word)a,a+=6,tmp);
/* modules.scm:769: ##sys#call-with-values */{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[6];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a9815 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9816,c,av);}
/* modules.scm:769: outer */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9443(t2,t1,C_i_cadr(((C_word*)t0)[3]));}

/* a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9826(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_9826,c,av);}
a=C_alloc(11);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9830,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=t7,a[8]=t6,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* modules.scm:770: chicken.syntax#strip-syntax */
t9=C_fast_retrieve(lf[102]);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_cddr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 */
static void C_ccall f_9830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,5)))){
C_save_and_reclaim((void *)f_9830,c,av);}
a=C_alloc(14);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t3,a[11]=((C_word)li165),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_9835(t5,((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_END_OF_LIST,t1);}

/* loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in k4023 in ... */
static void f_9835(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,0,5)))){
C_save_and_reclaim_args((void *)trf_9835,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t6,a[11]=((C_word)li163),tmp=(C_word)a,a+=12,tmp));
t8=((C_word*)t6)[1];
f_9847(t8,t1,((C_word*)t0)[9],C_SCHEME_END_OF_LIST,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10002,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li164),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:772: g2541 */
t8=t7;
f_10002(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:793: loopv */
t11=t1;
t12=t7;
t13=t9;
t14=t4;
t1=t11;
t2=t12;
t3=t13;
t4=t14;
goto loop;}}}

/* loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in k4026 in ... */
static void f_9847(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,0,4)))){
C_save_and_reclaim_args((void *)trf_9847,5,t0,t1,t2,t3,t4);}
a=C_alloc(30);
if(C_truep(C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li159),tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=C_i_check_list_2(t4,lf[5]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9868,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=t5,tmp=(C_word)a,a+=12,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9910,a[2]=t8,a[3]=t13,a[4]=t9,a[5]=((C_word)li161),tmp=(C_word)a,a+=6,tmp));
t15=((C_word*)t13)[1];
f_9910(t15,t11,t4);}
else{
t5=C_i_caar(t2);
t6=C_i_assq(t5,t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9949,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[10],a[5]=t4,a[6]=((C_word)li162),tmp=(C_word)a,a+=7,tmp);
/* modules.scm:774: g2536 */
t8=t7;
f_9949(t8,t1,t6);}
else{
t7=C_u_i_cdr(t2);
t8=C_u_i_car(t2);
t9=C_a_i_cons(&a,2,t8,t3);
/* modules.scm:786: loops */
t16=t1;
t17=t7;
t18=t9;
t19=t4;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}}}

/* g2490 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void f_9855(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_9855,3,t0,t1,t2);}
/* modules.scm:777: warn */
f_9240(t1,lf[189],((C_word*)t0)[3],t2);}

/* k9866 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void C_ccall f_9868(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_9868,c,av);}
a=C_alloc(18);
t2=C_i_check_list_2(t1,lf[72]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9874,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9887,a[2]=t5,a[3]=((C_word*)t0)[11],a[4]=((C_word)li160),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9887(t7,t3,t1);}

/* k9872 in k9866 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_9874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_9874,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
/* modules.scm:779: scheme#values */{
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=0;
av2[1]=((C_word*)t0)[5];
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
av2[5]=((C_word*)t0)[8];
av2[6]=((C_word*)t0)[9];
av2[7]=((C_word*)t0)[10];
C_values(8,av2);}}

/* for-each-loop2489 in k9866 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void f_9887(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_9887,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9897,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* modules.scm:775: g2490 */
t4=((C_word*)t0)[3];
f_9855(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k9895 in for-each-loop2489 in k9866 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in ... */
static void C_ccall f_9897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_9897,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_9887(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop2502 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void f_9910(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_9910,3,t0,t1,t2);}
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

/* g2536 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in k4029 in ... */
static void f_9949(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_9949,3,t0,t1,t2);}
a=C_alloc(12);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_cadr(t2);
t5=C_i_cdar(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9965,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* modules.scm:784: delete */
f_4531(t8,t2,((C_word*)t0)[5],*((C_word*)lf[81]+1));}

/* k9963 in g2536 in loops in loopv in k9828 in a9825 in k9809 in k9806 in k9623 in k9473 in outer in a9383 in k9236 in k9233 in k9230 in k9227 in ##sys#decompose-import in k5389 in k5385 in k4038 in k4035 in k4032 in ... */
static void C_ccall f_9965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9965,c,av);}
/* modules.scm:782: loops */
t2=((C_word*)((C_word*)t0)[2])[1];
f_9847(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_modules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("modules"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_modules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(13347))){
C_save(t1);
C_rereclaim2(13347*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,322);
lf[0]=C_h_intern(&lf[0],7, C_text("modules"));
lf[3]=C_h_intern(&lf[3],5, C_text("foldr"));
lf[4]=C_h_intern(&lf[4],6, C_text("map-se"));
lf[5]=C_h_intern(&lf[5],3, C_text("map"));
lf[6]=C_h_intern(&lf[6],7, C_text("<macro>"));
lf[7]=C_h_intern(&lf[7],20, C_text("##sys#current-module"));
lf[8]=C_h_intern(&lf[8],30, C_text("##sys#module-alias-environment"));
lf[9]=C_h_intern(&lf[9],6, C_text("module"));
lf[12]=C_h_intern(&lf[12],11, C_text("module-name"));
lf[14]=C_h_intern(&lf[14],14, C_text("module-library"));
lf[16]=C_h_intern(&lf[16],18, C_text("module-export-list"));
lf[18]=C_h_intern(&lf[18],16, C_text("##sys#block-set!"));
lf[20]=C_h_intern(&lf[20],19, C_text("module-defined-list"));
lf[23]=C_h_intern(&lf[23],17, C_text("module-exist-list"));
lf[26]=C_h_intern(&lf[26],26, C_text("module-defined-syntax-list"));
lf[28]=C_h_intern(&lf[28],21, C_text("module-undefined-list"));
lf[29]=C_h_intern(&lf[29],26, C_text("set-module-undefined-list!"));
lf[31]=C_h_intern(&lf[31],19, C_text("module-import-forms"));
lf[34]=C_h_intern(&lf[34],24, C_text("module-meta-import-forms"));
lf[37]=C_h_intern(&lf[37],23, C_text("module-meta-expressions"));
lf[40]=C_h_intern(&lf[40],15, C_text("module-vexports"));
lf[43]=C_h_intern(&lf[43],15, C_text("module-sexports"));
lf[46]=C_h_intern(&lf[46],15, C_text("module-iexports"));
lf[49]=C_h_intern(&lf[49],25, C_text("module-saved-environments"));
lf[52]=C_h_intern(&lf[52],18, C_text("module-rename-list"));
lf[54]=C_h_intern(&lf[54],17, C_text("##sys#module-name"));
lf[55]=C_h_intern(&lf[55],20, C_text("##sys#module-exports"));
lf[57]=C_h_intern(&lf[57],27, C_text("##sys#register-module-alias"));
lf[58]=C_h_intern(&lf[58],25, C_text("##sys#with-module-aliases"));
lf[59]=C_h_intern(&lf[59],18, C_text("##sys#dynamic-wind"));
lf[60]=C_h_intern(&lf[60],13, C_text("scheme#append"));
lf[61]=C_h_intern(&lf[61],25, C_text("##sys#resolve-module-name"));
lf[62]=C_h_intern(&lf[62],18, C_text("chicken.base#error"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\155\157\144\165\154\145\040\141\154\151\141\163\040\162\145\146\145\162\163\040\164\157\040\151\164\163\145\154\146\000"));
lf[64]=C_h_intern(&lf[64],27, C_text("chicken.internal#library-id"));
lf[65]=C_h_intern(&lf[65],17, C_text("##sys#find-module"));
lf[66]=C_h_intern(&lf[66],18, C_text("##sys#module-table"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\155\157\144\165\154\145\040\156\157\164\040\146\157\165\156\144\000"));
lf[68]=C_h_intern(&lf[68],19, C_text("##sys#switch-module"));
lf[69]=C_h_intern(&lf[69],23, C_text("##sys#macro-environment"));
lf[70]=C_h_intern(&lf[70],25, C_text("##sys#current-environment"));
lf[71]=C_h_intern(&lf[71],24, C_text("##sys#add-to-export-list"));
lf[72]=C_h_intern(&lf[72],8, C_text("for-each"));
lf[73]=C_h_intern(&lf[73],31, C_text("##sys#add-to-export/rename-list"));
lf[74]=C_h_intern(&lf[74],30, C_text("##sys#toplevel-definition-hook"));
lf[75]=C_h_intern(&lf[75],30, C_text("##sys#register-meta-expression"));
lf[77]=C_h_intern(&lf[77],10, C_text("##sys#warn"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\162\145\144\145\146\151\156\151\164\151\157\156\040\157\146\040\163\171\156\164\141\170\040\142\151\156\144\151\156\147\000"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\162\145\144\145\146\151\156\151\164\151\157\156\040\157\146\040\166\141\154\165\145\040\142\151\156\144\151\156\147\000"));
lf[80]=C_h_intern(&lf[80],21, C_text("##sys#register-export"));
lf[81]=C_h_intern(&lf[81],10, C_text("scheme#eq?"));
lf[84]=C_h_intern(&lf[84],9, C_text("##sys#get"));
lf[85]=C_h_intern(&lf[85],13, C_text("##r7rs#module"));
lf[86]=C_h_intern(&lf[86],28, C_text("##sys#register-syntax-export"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\165\163\145\040\157\146\040\163\171\156\164\141\170\040\160\162\145\143\145\144\145\163\040\144\145\146\151\156\151\164\151\157\156\000"));
lf[88]=C_h_intern(&lf[88],30, C_text("##sys#unregister-syntax-export"));
lf[89]=C_h_intern(&lf[89],21, C_text("##sys#register-module"));
lf[91]=C_h_intern(&lf[91],32, C_text("chicken.internal#hash-table-set!"));
lf[92]=C_h_intern(&lf[92],31, C_text("chicken.internal#hash-table-ref"));
lf[93]=C_h_intern(&lf[93],14, C_text("scheme#reverse"));
lf[94]=C_h_intern(&lf[94],32, C_text("chicken.internal#make-hash-table"));
lf[95]=C_h_intern(&lf[95],34, C_text("##sys#compiled-module-registration"));
lf[96]=C_h_intern(&lf[96],6, C_text("lambda"));
lf[97]=C_h_intern(&lf[97],22, C_text("##sys#with-environment"));
lf[98]=C_h_intern(&lf[98],12, C_text("##sys#append"));
lf[99]=C_h_intern(&lf[99],5, C_text("quote"));
lf[100]=C_h_intern(&lf[100],11, C_text("scheme#list"));
lf[101]=C_h_intern(&lf[101],11, C_text("scheme#cons"));
lf[102]=C_h_intern(&lf[102],27, C_text("chicken.syntax#strip-syntax"));
lf[103]=C_h_intern(&lf[103],30, C_text("##sys#register-compiled-module"));
lf[104]=C_h_intern(&lf[104],14, C_text("##core#functor"));
lf[105]=C_h_intern(&lf[105],18, C_text("##sys#fast-reverse"));
lf[106]=C_h_intern(&lf[106],13, C_text("import-syntax"));
lf[107]=C_h_intern(&lf[107],11, C_text("scheme#eval"));
lf[108]=C_h_intern(&lf[108],14, C_text("##core#require"));
lf[109]=C_h_intern(&lf[109],22, C_text("##sys#decompose-import"));
lf[110]=C_h_intern(&lf[110],14, C_text("chicken.base#o"));
lf[111]=C_h_intern(&lf[111],6, C_text("static"));
lf[112]=C_h_intern(&lf[112],24, C_text("##sys#ensure-transformer"));
lf[113]=C_h_intern(&lf[113],11, C_text("##sys#error"));
lf[114]=C_h_intern(&lf[114],6, C_text("import"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\143\141\156\156\157\164\040\146\151\156\144\040\151\155\160\154\145\155\145\156\164\141\164\151\157\156\040\157\146\040\162\145\055\145\170\160\157\162\164\145\144\040\163\171\156\164\141\170\000"));
lf[116]=C_h_intern(&lf[116],26, C_text("##sys#register-core-module"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\063\165\156\153\156\157\167\156\040\163\171\156\164\141\170\040\162\145\146\145\162\145\156\143\145\144\040\167\150\151\154\145\040\162\145\147\151\163\164\145\162\151\156\147\040\155\157\144\165\154\145\000"));
lf[118]=C_h_intern(&lf[118],31, C_text("##sys#register-primitive-module"));
lf[119]=C_h_intern(&lf[119],21, C_text("##sys#finalize-module"));
lf[120]=C_h_intern(&lf[120],7, C_text("fprintf"));
lf[121]=C_h_intern(&lf[121],27, C_text("chicken.string#string-split"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\072\000"));
lf[123]=C_h_intern(&lf[123],11, C_text("##sys#print"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\012\040\040\040\040\000"));
lf[125]=C_h_intern(&lf[125],6, C_text("format"));
lf[126]=C_h_intern(&lf[126],24, C_text("scheme#get-output-string"));
lf[127]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\047\040\157\156\040\154\151\156\145\040\000"));
lf[128]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\111\156\040\160\162\157\143\145\144\165\162\145\040\140\000"));
lf[129]=C_h_intern(&lf[129],25, C_text("scheme#open-output-string"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\117\156\040\154\151\156\145\040\000"));
lf[131]=C_h_intern(&lf[131],18, C_text("##sys#write-char-0"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\111\156\040\160\162\157\143\145\144\165\162\145\040\140\000"));
lf[133]=C_h_intern(&lf[133],9, C_text("##core#db"));
lf[134]=C_h_intern(&lf[134],12, C_text("scheme#cadar"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\155\157\144\165\154\145\040\140\000"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\012\040\040\040\040\000"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\157\156\145\040\157\146\040\164\150\145\163\145\040\155\157\144\165\154\145\163\072\000"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\012\040\040\123\165\147\147\145\163\164\151\157\156\072\040\164\162\171\040\151\155\160\157\162\164\151\156\147\040\000"));
lf[139]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\012\012\040\040\125\156\153\156\157\167\156\040\151\144\145\156\164\151\146\151\145\162\040\140\000"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\047\072\000"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\012\040\040\111\156\040\146\151\154\145\040\140\000"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\072\000"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\047\040\150\141\163\040\165\156\162\145\163\157\154\166\145\144\040\151\144\145\156\164\151\146\151\145\162\163\000"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\115\157\144\165\154\145\040\140\000"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\050\151\156\164\145\162\156\141\154\051\040\151\156\144\151\162\145\143\164\040\145\170\160\157\162\164\040\156\157\164\040\146\157\165\156\144\000"));
lf[146]=C_h_intern(&lf[146],20, C_text("scheme#string-append"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\040\151\156\040\155\157\144\165\154\145\040\140\000"));
lf[148]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[149]=C_h_intern(&lf[149],21, C_text("scheme#symbol->string"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\156\144\151\162\145\143\164\040\145\170\160\157\162\164\040\157\146\040\163\171\156\164\141\170\040\142\151\156\144\151\156\147\000"));
lf[151]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\151\156\144\151\162\145\143\164\040\162\145\145\170\160\157\162\164\040\157\146\040\163\171\156\164\141\170\000"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\151\156\144\151\162\145\143\164\040\145\170\160\157\162\164\040\157\146\040\165\156\153\156\157\167\156\040\142\151\156\144\151\156\147\000"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\155\157\144\165\154\145\040\165\156\162\145\163\157\154\166\145\144\000"));
lf[154]=C_h_intern(&lf[154],6, C_text("syntax"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\140\000"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[157]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\141\156\156\157\164\040\145\170\160\157\162\164\040\000"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\040\142\145\143\141\165\163\145\040\151\164\040\151\163\040\000"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[160]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\105\170\160\157\162\164\145\144\040\151\144\145\156\164\151\146\151\145\162\040\000"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\040\150\141\163\040\156\157\164\040\142\145\145\156\040\144\145\146\151\156\145\144\056\000"));
lf[162]=C_h_intern(&lf[162],4, C_text("bomb"));
lf[163]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\146\141\151\154\000"));
lf[164]=C_h_intern(&lf[164],14, C_text("##sys#override"));
lf[165]=C_h_intern(&lf[165],5, C_text("value"));
lf[166]=C_h_intern(&lf[166],30, C_text("##sys#current-meta-environment"));
lf[167]=C_h_intern(&lf[167],28, C_text("##sys#meta-macro-environment"));
lf[168]=C_h_intern(&lf[168],25, C_text("##sys#import-library-hook"));
lf[169]=C_h_intern(&lf[169],21, C_text("##sys#notices-enabled"));
lf[170]=C_h_intern(&lf[170],11, C_text("scheme#load"));
lf[171]=C_h_intern(&lf[171],35, C_text("chicken.load#find-dynamic-extension"));
lf[172]=C_h_intern(&lf[172],19, C_text("##sys#string-append"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\056\151\155\160\157\162\164\000"));
lf[175]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\040\151\156\040\155\157\144\165\154\145\040\140\000"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\072\000"));
lf[178]=C_h_intern(&lf[178],27, C_text("##sys#symbol->string/shared"));
lf[179]=C_h_intern(&lf[179],20, C_text("##sys#number->string"));
lf[180]=C_h_intern(&lf[180],18, C_text("##sys#syntax-error"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\160\162\145\146\151\170\000"));
lf[182]=C_h_intern(&lf[182],24, C_text("chicken.keyword#keyword?"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\151\156\166\141\154\151\144\040\151\155\160\157\162\164\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[184]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\155\160\157\162\164\145\144\040\151\144\145\156\164\151\146\151\145\162\040\144\157\145\163\156\047\164\040\145\170\151\163\164\000"));
lf[185]=C_h_intern(&lf[185],18, C_text("##sys#check-syntax"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\001\000\000\000\000"));
lf[187]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\145\170\143\154\165\144\145\144\040\151\144\145\156\164\151\146\151\145\162\040\144\157\145\163\156\047\164\040\145\170\151\163\164\000"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\001\000\000\000\000"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\162\145\156\141\155\145\144\040\151\144\145\156\164\151\146\151\145\162\040\144\157\145\163\156\047\164\040\145\170\151\163\164\000"));
lf[190]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\377\001\000\000\000\000"));
lf[191]=C_h_intern(&lf[191],20, C_text("##sys#string->symbol"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\003\000\000\002\376\001\000\000\001\001\137\376\377\016"));
lf[193]=C_h_intern(&lf[193],37, C_text("scheme#call-with-current-continuation"));
lf[194]=C_h_intern(&lf[194],6, C_text("prefix"));
lf[195]=C_h_intern(&lf[195],6, C_text("except"));
lf[196]=C_h_intern(&lf[196],6, C_text("rename"));
lf[197]=C_h_intern(&lf[197],4, C_text("only"));
lf[198]=C_h_intern(&lf[198],19, C_text("##sys#expand-import"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\143\141\156\156\157\164\040\151\155\160\157\162\164\040\146\162\157\155\040\165\156\144\145\146\151\156\145\144\040\155\157\144\165\154\145\000"));
lf[200]=C_h_intern(&lf[200],12, C_text("##sys#import"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\377\016"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\137\376\000\000\000\002\376\001\000\000\001\001\137\376\377\001\000\000\000\001"));
lf[203]=C_h_intern(&lf[203],12, C_text("##sys#notice"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\162\145\055\151\155\160\157\162\164\151\156\147\040\141\154\162\145\141\144\171\040\151\155\160\157\162\164\145\144\040\151\144\145\156\164\151\146\151\145\162\000"));
lf[205]=C_h_intern(&lf[205],10, C_text("##sys#put!"));
lf[206]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\162\145\055\151\155\160\157\162\164\151\156\147\040\141\154\162\145\141\144\171\040\151\155\160\157\162\164\145\144\040\163\171\156\164\141\170\000"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\046\140\162\145\145\170\160\157\162\164\047\040\157\156\154\171\040\166\141\154\151\144\040\151\156\163\151\144\145\040\141\040\155\157\144\165\154\145\000"));
lf[208]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[209]=C_h_intern(&lf[209],23, C_text("##sys#alias-global-hook"));
lf[210]=C_h_intern(&lf[210],22, C_text("##sys#validate-exports"));
lf[211]=C_h_intern(&lf[211],16, C_text("##core#interface"));
lf[212]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\165\156\153\156\157\167\156\040\151\156\164\145\162\146\141\143\145\000"));
lf[213]=C_h_intern(&lf[213],1, C_text("*"));
lf[214]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\151\156\166\141\154\151\144\040\145\170\160\157\162\164\163\000"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\151\156\166\141\154\151\144\040\145\170\160\157\162\164\163\000"));
lf[216]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\145\170\160\157\162\164\000"));
lf[217]=C_h_intern_kw(&lf[217],6, C_text("syntax"));
lf[218]=C_h_intern_kw(&lf[218],9, C_text("interface"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\151\156\166\141\154\151\144\040\151\156\164\145\162\146\141\143\145\040\163\160\145\143\151\146\151\143\141\164\151\157\156\000"));
lf[220]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\145\170\160\157\162\164\000"));
lf[221]=C_h_intern(&lf[221],22, C_text("##sys#register-functor"));
lf[222]=C_h_intern(&lf[222],25, C_text("##sys#instantiate-functor"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\141\162\147\165\155\145\156\164\040\154\151\163\164\040\155\151\163\155\141\164\143\150\040\151\156\040\146\165\156\143\164\157\162\040\151\156\163\164\141\156\164\151\141\164\151\157\156\000"));
lf[224]=C_h_intern(&lf[224],13, C_text("##core#module"));
lf[225]=C_h_intern(&lf[225],23, C_text("##core#let-module-alias"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\151\156\163\164\141\156\164\141\164\151\157\156\040\157\146\040\165\156\144\145\146\151\156\145\144\040\146\165\156\143\164\157\162\000"));
lf[228]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\141\162\147\165\155\145\156\164\040\155\157\144\165\154\145\040\140\000"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\047\040\144\157\145\163\040\156\157\164\040\155\141\164\143\150\040\162\145\161\165\151\162\145\144\040\163\151\147\156\141\164\165\162\145\012\000"));
lf[230]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\151\156\040\151\156\163\164\141\156\164\151\141\164\151\157\156\040\140\000"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\047\040\157\146\040\146\165\156\143\164\157\162\040\140\000"));
lf[232]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\070\047\054\040\142\145\143\141\165\163\145\040\164\150\145\040\146\157\154\154\157\167\151\156\147\040\162\145\161\165\151\162\145\144\040\145\170\160\157\162\164\163\040\141\162\145\040\155\151\163\163\151\156\147\072\012\000"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\012\040\040\000"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\156\157\164\376\001\000\000\012\001\163\143\150\145\155\145\043\156\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\142\157\157\154\145\141\156\077\376\001\000\000\017\001\163\143\150\145\155\145\043\142\157\157\154\145\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\161\077\376\001\000\000\012\001\163\143\150\145\155\145\043\145\161\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\161\166\077\376\001\000\000\013\001\163\143\150\145\155\145\043\145\161\166\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\161\165\141\154\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\161\165\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\157\156\163\376\001\000\000\013\001\163\143\150\145\155\145\043\143\157\156\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\141\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\144\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\141\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\141\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\144\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\144\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\156\165\154\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\156\165\154\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\154\151\163\164\077\376\001\000\000\014\001\163\143\150\145\155\145\043\154\151\163\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\013\001\163\143\150\145\155\145\043\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\154\145\156\147\164\150\376\001\000\000\015\001\163\143\150\145\155\145\043\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\164\141\151\154\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\164\141\151\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\154\151\163\164\055\162\145\146\376\001\000\000\017\001\163\143\150\145\155\145\043\154\151\163\164\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\141\160\160\145\156\144\376\001\000\000\015\001\163\143\150\145\155\145\043\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\145\166\145\162\163\145\376\001\000\000\016\001\163\143\150\145\155\145\043\162\145\166\145\162\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\161\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\166\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\145\155\142\145\162\376\001\000\000\015\001\163\143\150\145\155\145\043\155\145\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\161\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\166\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\163\163\157\143\376\001\000\000\014\001\163\143\150\145\155\145\043\141\163\163\157\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\171\155\142\157\154\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\171\155\142\157\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\165\155\142\145\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\156\165\155\142\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\164\145\147\145\162\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\170\141\143\164\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\145\141\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\162\145\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\157\155\160\154\145\170\077\376\001\000\000\017\001\163\143\150\145\155\145\043\143\157\155\160\154\145\170\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\145\170\141\143\164\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\141\164\151\157\156\141\154\077\376\001\000\000\020\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\172\145\162\157\077\376\001\000\000\014\001\163\143\150\145\155\145\043\172\145\162\157\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\157\144\144\077\376\001\000\000\013\001\163\143\150\145\155\145\043\157\144\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\166\145\156\077\376\001\000\000\014\001\163\143\150\145\155\145\043\145\166\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\157\163\151\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\160\157\163\151\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\145\147\141\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\156\145\147\141\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\170\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\155\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\053\376\001\000\000\010\001\163\143\150\145\155\145\043\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\055\376\001\000\000\010\001\163\143\150\145\155\145\043\055\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\052\376\001\000\000\010\001\163\143\150\145\155\145\043\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\057\376\001\000\000\010\001\163\143\150\145\155\145\043\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\075\376\001\000\000\010\001\163\143\150\145\155\145\043\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\076\376\001\000\000\010\001\163\143\150\145\155\145\043\076\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\074\376\001\000\000\010\001\163\143\150\145\155\145\043\074\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\076\075\376\001\000\000\011\001\163\143\150\145\155\145\043\076\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\074\075\376\001\000\000\011\001\163\143\150\145\155\145\043\074\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\161\165\157\164\151\145\156\164\376\001\000\000\017\001\163\143\150\145\155\145\043\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\155\141\151\156\144\145\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\157\144\165\154\157\376\001\000\000\015\001\163\143\150\145\155\145\043\155\157\144\165\154\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\147\143\144\376\001\000\000\012\001\163\143\150\145\155\145\043\147\143\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\143\155\376\001\000\000\012\001\163\143\150\145\155\145\043\154\143\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\141\142\163\376\001\000\000\012\001\163\143\150\145\155\145\043\141\142\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\154\157\157\162\376\001\000\000\014\001\163\143\150\145\155\145\043\146\154\157\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\145\151\154\151\156\147\376\001\000\000\016\001\163\143\150\145\155\145\043\143\145\151\154\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\164\162\165\156\143\141\164\145\376\001\000\000\017\001\163\143\150\145\155\145\043\164\162\165\156\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\157\165\156\144\376\001\000\000\014\001\163\143\150\145\155\145\043\162\157\165\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\141\164\151\157\156\141\154\151\172\145\376\001\000\000\022\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\170\141\143\164\055\076\151\156\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\145\170\141\143\164\055\076\151\156\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\151\156\145\170\141\143\164\055\076\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\055\076\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\170\160\376\001\000\000\012\001\163\143\150\145\155\145\043\145\170\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\157\147\376\001\000\000\012\001\163\143\150\145\155\145\043\154\157\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\170\160\164\376\001\000\000\013\001\163\143\150\145\155\145\043\145\170\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\161\162\164\376\001\000\000\013\001\163\143\150\145\155\145\043\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\163\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\157\163\376\001\000\000\012\001\163\143\150\145\155\145\043\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\164\141\156\376\001\000\000\012\001\163\143\150\145\155\145\043\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\151\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\143\157\163\376\001\000\000\013\001\163\143\150\145\155\145\043\141\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\164\141\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\150\141\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\143\150\141\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\075\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\076\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\074\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\076\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\074\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\074\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\076\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\076\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\074\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\156\165\155\145\162\151\143\077\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\156\165\155\145\162\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\165\160\143\141\163\145\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\144\157\167\156\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\144\157\167\156\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\076\151\156\164\145\147\145\162\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\076\151\156\164\145\147\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\156\164\145\147\145\162\055\076\143\150\141\162\376\001\000\000\024\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\055\076\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\164\162\151\156\147\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\164\162\151\156\147\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\075\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\076\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\074\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\076\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\074\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\075\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\074\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\076\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\076\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\074\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\163\164\162\151\156\147\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\164\162\151\156\147\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\141\160\160\145\156\144\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\157\160\171\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\163\164\162\151\156\147\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\165\142\163\164\162\151\156\147\376\001\000\000\020\001\163\143\150\145\155\145\043\163\165\142\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\166\145\143\164\157\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\166\145\143\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\166\145\143\164\157\162\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\001\000\000\015\001\163\143\150\145\155\145\043\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\001\000\000\015\001\163\143\150\145\155\145\043\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\166\145\143\164\157\162\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\162\157\143\145\144\165\162\145\077\376\001\000\000\021\001\163\143\150\145\155\145\043\160\162\157\143\145\144\165\162\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\160\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\157\162\055\145\141\143\150\376\001\000\000\017\001\163\143\150\145\155\145\043\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\160\160\154\171\376\001\000\000\014\001\163\143\150\145\155\145\043\141\160\160\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\162\143\145\376\001\000\000\014\001\163\143\150\145\155\145\043\146\157\162\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\001\000\000\045\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\151\156\160\165\164\055\160\157\162\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\151\156\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\157\165\164\160\165\164\055\160\157\162\164\077\376\001\000\000\023\001\163\143\150\145\155\145\043\157\165\164\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\031\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\032\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\033\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\034\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\026\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\027\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\027\001\163\143\150\145\155\145\043\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\030\001\163\143\150\145\155\145\043\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\157\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\154\157\141\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\162\145\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\162\145\141\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\144\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\145\145\153\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\160\145\145\153\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\167\162\151\164\145\376\001\000\000\014\001\163\143\150\145\155\145\043\167\162\151\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\144\151\163\160\154\141\171\376\001\000\000\016\001\163\143\150\145\155\145\043\144\151\163\160\154\141\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\143\150\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\167\162\151\164\145\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\145\167\154\151\156\145\376\001\000\000\016\001\163\143\150\145\155\145\043\156\145\167\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\157\146\055\157\142\152\145\143\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\145\157\146\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\001\000\000\033\001\163\143\150\145\155\145\043\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\001\000\000\032\001\163\143\150\145\155\145\043\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\162\145\141\144\171\077\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\162\145\141\144\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\155\141\147\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\151\155\141\147\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\154\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\154\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\001\000\000\027\001\163\143\150\145\155\145\043\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\155\141\153\145\055\160\157\154\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\155\141\153\145\055\160\157\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\156\147\154\145\376\001\000\000\014\001\163\143\150\145\155\145\043\141\156\147\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\155\141\147\156\151\164\165\144\145\376\001\000\000\020\001\163\143\150\145\155\145\043\155\141\147\156\151\164\165\144\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\165\155\145\162\141\164\157\162\376\001\000\000\020\001\163\143\150\145\155\145\043\156\165\155\145\162\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\145\156\157\155\151\156\141\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\144\145\156\157\155\151\156\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\163\143\150\145\155\145\055\162\145\160\157\162\164\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\040\001\163\143\150\145\155\145\043\163\143\150\145\155\145\055\162\145\160\157\162\164\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\156\165\154\154\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\027\001\163\143\150\145\155\145\043\156\165\154\154\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\036\001\163\143\150\145\155\145\043\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[235]=C_h_intern(&lf[235],30, C_text("##sys#scheme-macro-environment"));
lf[236]=C_h_intern(&lf[236],9, C_text("se-subset"));
lf[237]=C_h_intern(&lf[237],33, C_text("chicken.module#module-environment"));
lf[238]=C_h_intern(&lf[238],18, C_text("module-environment"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\165\156\144\145\146\151\156\145\144\040\155\157\144\165\154\145\000"));
lf[240]=C_h_intern(&lf[240],11, C_text("environment"));
lf[241]=C_h_intern(&lf[241],23, C_text("scheme.eval#environment"));
lf[242]=C_h_intern(&lf[242],19, C_text("scheme#dynamic-wind"));
lf[243]=C_h_intern(&lf[243],17, C_text("chicken.base#void"));
lf[244]=C_h_intern(&lf[244],19, C_text("chicken.base#gensym"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\145\156\166\151\162\157\156\155\145\156\164\055\155\157\144\165\154\145\055\000"));
lf[246]=C_h_intern(&lf[246],14, C_text("chicken.syntax"));
lf[247]=C_h_intern(&lf[247],6, C_text("expand"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\170\160\141\156\144\376\001\000\000\025\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\145\170\160\141\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\145\170\160\141\156\144\061\376\001\000\000\026\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\145\170\160\141\156\144\061\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\147\145\164\055\154\151\156\145\055\156\165\155\142\145\162\376\001\000\000\036\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\147\145\164\055\154\151\156\145\055\156\165\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\162\145\141\144\055\167\151\164\150\055\163\157\165\162\143\145\055\151\156\146\157\376\001\000\000\044\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\162\145\141\144\055\167\151\164\150\055\163\157\165\162\143\145\055\151\156\146\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\160\055\163\171\156\164\141\170\376\001\000\000\033\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\163\164\162\151\160\055\163\171\156\164\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\145\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\145\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\151\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\163\171\156\164\141\170\043\151\162\055\155\141\143\162\157\055\164\162\141\156\163\146\157\162\155\145\162\376\377\016"));
lf[249]=C_h_intern(&lf[249],38, C_text("##sys#chicken.syntax-macro-environment"));
lf[250]=C_h_intern(&lf[250],12, C_text("chicken.base"));
lf[251]=C_h_intern(&lf[251],7, C_text("library"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\144\144\061\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\144\144\061\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\141\154\151\163\164\055\162\145\146\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\154\151\163\164\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\141\154\151\163\164\055\165\160\144\141\164\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\154\151\163\164\055\165\160\144\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\141\154\151\163\164\055\165\160\144\141\164\145\041\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\154\151\163\164\055\165\160\144\141\164\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\164\157\155\077\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\164\157\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\142\151\147\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\151\147\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\167\160\055\157\142\152\145\143\164\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\167\160\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\142\165\164\154\141\163\164\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\165\164\154\141\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\141\163\145\055\163\145\156\163\151\164\151\166\145\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\141\163\145\055\163\145\156\163\151\164\151\166\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\156\141\155\145\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\150\141\162\055\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\150\157\160\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\150\157\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\157\155\160\154\145\155\145\156\164\376\001\000\000\027\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\155\160\154\145\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\157\155\160\157\163\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\155\160\157\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\157\155\160\162\145\163\163\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\155\160\162\145\163\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\157\156\152\157\151\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\156\152\157\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\157\156\163\164\141\156\164\154\171\376\001\000\000\027\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\157\156\163\164\141\156\164\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\160\154\170\156\165\155\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\160\154\170\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\144\151\163\152\157\151\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\144\151\163\152\157\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\141\143\150\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\155\145\162\147\145\156\143\171\055\145\170\151\164\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\155\145\162\147\145\156\143\171\055\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\145\156\141\142\154\145\055\167\141\162\156\151\156\147\163\376\001\000\000\034\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\156\141\142\154\145\055\167\141\162\156\151\156\147\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\145\161\165\141\154\075\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\161\165\141\154\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\162\162\157\162\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\162\162\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\145\170\141\143\164\055\151\156\164\145\147\145\162\055\156\164\150\055\162\157\157\164\376\001\000\000\043\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\170\141\143\164\055\151\156\164\145\147\145\162\055\156\164\150\055\162\157\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\170\151\164\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\145\170\151\164\055\150\141\156\144\154\145\162\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\170\151\164\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\151\156\151\164\145\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\156\151\164\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\151\170\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\170\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\154\141\164\164\145\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\141\164\164\145\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\154\151\160\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\151\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\154\157\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\157\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\154\165\163\150\055\157\165\164\160\165\164\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\165\163\150\055\157\165\164\160\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\154\144\154\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\154\144\162\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\147\145\156\163\171\155\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\156\163\171\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\147\145\164\055\143\141\154\154\055\143\150\141\151\156\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\164\055\143\141\154\154\055\143\150\141\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\144\145\156\164\151\164\171\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\144\145\156\164\151\164\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\151\155\160\154\151\143\151\164\055\145\170\151\164\055\150\141\156\144\154\145\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\155\160\154\151\143\151\164\055\145\170\151\164\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\156\146\151\156\151\164\145\077\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\156\146\151\156\151\164\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\151\156\164\145\162\163\160\145\162\163\145\376\001\000\000\030\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\156\164\145\162\163\160\145\162\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\152\157\151\156\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\152\157\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\153\145\171\167\157\162\144\055\163\164\171\154\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\153\145\171\167\157\162\144\055\163\164\171\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\154\151\163\164\055\157\146\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\154\151\163\164\055\157\146\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\141\153\145\055\160\162\157\155\151\163\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\155\141\153\145\055\160\162\157\155\151\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\156\141\156\077\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\156\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\156\157\164\151\143\145\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\156\157\164\151\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\157\376\001\000\000\016\001\143\150\151\143\153\145\156\056\142\141\163\145\043\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\157\156\055\145\170\151\164\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\157\156\055\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\376\001\000\000\041\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\160\157\162\164\055\143\154\157\163\145\144\077\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\157\162\164\055\143\154\157\163\145\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\162\151\156\164\055\143\141\154\154\055\143\150\141\151\156\376\001\000\000\035\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\055\143\141\154\154\055\143\150\141\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\162\151\156\164\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\160\162\151\156\164\052\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\160\162\157\143\145\144\165\162\145\055\151\156\146\157\162\155\141\164\151\157\156\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\157\143\145\144\165\162\145\055\151\156\146\157\162\155\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\162\157\155\151\163\145\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\157\155\151\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\161\165\157\164\151\145\156\164\046\155\157\144\165\154\157\376\001\000\000\034\001\143\150\151\143\153\145\156\056\142\141\163\145\043\161\165\157\164\151\145\156\164\046\155\157\144\165\154\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\161\165\157\164\151\145\156\164\046\162\145\155\141\151\156\144\145\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\161\165\157\164\151\145\156\164\046\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\162\141\163\163\157\143\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\141\163\163\157\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\141\164\156\165\155\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\141\164\156\165\155\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\162\145\143\157\162\144\055\160\162\151\156\164\145\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\145\143\157\162\144\055\160\162\151\156\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\145\164\055\162\145\143\157\162\144\055\160\162\151\156\164\145\162\041\376\001\000\000\040\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\145\164\055\162\145\143\157\162\144\055\160\162\151\156\164\145\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\145\164\164\145\162\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\145\164\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\151\147\156\165\155\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\151\147\156\165\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\163\154\145\145\160\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\154\145\145\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\163\164\162\151\156\147\055\076\165\156\151\156\164\145\162\156\145\144\055\163\171\155\142\157\154\376\001\000\000\046\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\164\162\151\156\147\055\076\165\156\151\156\164\145\162\156\145\144\055\163\171\155\142\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\165\142\061\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\165\142\061\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\165\142\166\145\143\164\157\162\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\165\142\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\171\155\142\157\154\055\141\160\160\145\156\144\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\171\155\142\157\154\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\171\155\142\157\154\055\145\163\143\141\160\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\171\155\142\157\154\055\145\163\143\141\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\164\141\151\154\077\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\164\141\151\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\143\157\160\171\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\162\145\163\151\172\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\166\145\143\164\157\162\055\162\145\163\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\166\157\151\144\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\166\157\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\167\141\162\156\151\156\147\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\141\162\156\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\167\145\141\153\055\143\157\156\163\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\145\141\153\055\143\157\156\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\145\141\153\055\160\141\151\162\077\376\001\000\000\027\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\145\141\153\055\160\141\151\162\077\376\377\016"));
lf[253]=C_h_intern(&lf[253],36, C_text("##sys#chicken.base-macro-environment"));
lf[254]=C_h_intern(&lf[254],11, C_text("scheme.char"));
lf[255]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\074\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\074\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\076\075\077\376\001\000\000\021\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\076\077\376\001\000\000\020\001\163\143\150\145\155\145\043\143\150\141\162\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\144\157\167\156\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\144\157\167\156\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\146\157\154\144\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\146\157\154\144\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\156\165\155\145\162\151\143\077\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\156\165\155\145\162\151\143\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\165\160\143\141\163\145\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\001\000\000\027\001\163\143\150\145\155\145\043\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\151\147\151\164\055\166\141\154\165\145\376\001\000\000\027\001\163\143\150\145\155\145\056\143\150\141\162\043\144\151\147\151\164\055\166\141\154\165\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\074\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\074\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\075\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\076\075\077\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\076\077\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\151\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\144\157\167\156\143\141\163\145\376\001\000\000\026\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\144\157\167\156\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\146\157\154\144\143\141\163\145\376\001\000\000\026\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\157\154\144\143\141\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\165\160\143\141\163\145\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\165\160\143\141\163\145\376\377\016"));
lf[256]=C_h_intern(&lf[256],11, C_text("scheme.repl"));
lf[257]=C_h_intern(&lf[257],4, C_text("eval"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\036\001\163\143\150\145\155\145\043\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[259]=C_h_intern(&lf[259],11, C_text("scheme.read"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\162\145\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\162\145\141\144\376\377\016"));
lf[261]=C_h_intern(&lf[261],11, C_text("scheme.load"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\157\141\144\376\001\000\000\013\001\163\143\150\145\155\145\043\154\157\141\144\376\377\016"));
lf[263]=C_h_intern(&lf[263],11, C_text("scheme.eval"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\001\000\000\013\001\163\143\150\145\155\145\043\145\166\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\027\001\163\143\150\145\155\145\056\145\166\141\154\043\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[265]=C_h_intern(&lf[265],7, C_text("srfi-88"));
lf[266]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\153\145\171\167\157\162\144\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\153\145\171\167\157\162\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\153\145\171\167\157\162\144\055\076\163\164\162\151\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\153\145\171\167\157\162\144\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\076\153\145\171\167\157\162\144\376\001\000\000\037\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\163\164\162\151\156\147\055\076\153\145\171\167\157\162\144\376\377\016"));
lf[267]=C_h_intern(&lf[267],7, C_text("srfi-55"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021\001\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\376\377\016"));
lf[269]=C_h_intern(&lf[269],7, C_text("srfi-31"));
lf[270]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\162\145\143\376\377\016"));
lf[271]=C_h_intern(&lf[271],7, C_text("srfi-28"));
lf[272]=C_h_intern(&lf[272],6, C_text("extras"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\157\162\155\141\164\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\157\162\155\141\164\376\377\016"));
lf[274]=C_h_intern(&lf[274],7, C_text("srfi-26"));
lf[275]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\143\165\164\376\003\000\000\002\376\001\000\000\004\001\143\165\164\145\376\377\016"));
lf[276]=C_h_intern(&lf[276],7, C_text("srfi-17"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\145\164\164\145\162\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\145\164\164\145\162\376\377\016"));
lf[278]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\004\001\163\145\164\041\376\377\016"));
lf[279]=C_h_intern(&lf[279],31, C_text("##sys#default-macro-environment"));
lf[280]=C_h_intern(&lf[280],14, C_text("scheme.inexact"));
lf[281]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\170\160\376\001\000\000\012\001\163\143\150\145\155\145\043\145\170\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\157\147\376\001\000\000\012\001\163\143\150\145\155\145\043\154\157\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\161\162\164\376\001\000\000\013\001\163\143\150\145\155\145\043\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\156\141\156\077\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\156\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\163\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\157\163\376\001\000\000\012\001\163\143\150\145\155\145\043\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\164\141\156\376\001\000\000\012\001\163\143\150\145\155\145\043\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\151\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\143\157\163\376\001\000\000\013\001\163\143\150\145\155\145\043\141\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\164\141\156\376\001\000\000\013\001\163\143\150\145\155\145\043\141\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\151\156\151\164\145\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\156\151\164\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\156\146\151\156\151\164\145\077\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\156\146\151\156\151\164\145\077\376\377\016"));
lf[282]=C_h_intern(&lf[282],10, C_text("scheme.cxr"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\141\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\141\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\141\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\144\144\144\162\376\001\000\000\014\001\163\143\150\145\155\145\043\143\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\141\144\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\141\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\141\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\144\162\376\001\000\000\015\001\163\143\150\145\155\145\043\143\144\144\144\144\162\376\377\016"));
lf[284]=C_h_intern(&lf[284],14, C_text("scheme.complex"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\151\155\141\147\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\151\155\141\147\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\154\055\160\141\162\164\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\154\055\160\141\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\001\000\000\027\001\163\143\150\145\155\145\043\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\155\141\153\145\055\160\157\154\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\155\141\153\145\055\160\157\154\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\156\147\154\145\376\001\000\000\014\001\163\143\150\145\155\145\043\141\156\147\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\155\141\147\156\151\164\165\144\145\376\001\000\000\020\001\163\143\150\145\155\145\043\155\141\147\156\151\164\165\144\145\376\377\016"));
lf[286]=C_h_intern(&lf[286],5, C_text("delay"));
lf[287]=C_h_intern(&lf[287],11, C_text("scheme.lazy"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\157\162\143\145\376\001\000\000\014\001\163\143\150\145\155\145\043\146\157\162\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\162\157\155\151\163\145\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\157\155\151\163\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\141\153\145\055\160\162\157\155\151\163\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\155\141\153\145\055\160\162\157\155\151\163\145\376\377\016"));
lf[289]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\013\001\144\145\154\141\171\055\146\157\162\143\145\376\377\016"));
lf[290]=C_h_intern(&lf[290],18, C_text("scheme.case-lambda"));
lf[291]=C_h_intern(&lf[291],42, C_text("##sys#scheme.case-lambda-macro-environment"));
lf[292]=C_h_intern(&lf[292],7, C_text("srfi-15"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\011\001\146\154\165\151\144\055\154\145\164\376\377\016"));
lf[294]=C_h_intern(&lf[294],7, C_text("srfi-12"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\142\157\162\164\376\001\000\000\027\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\141\142\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\157\156\144\151\164\151\157\156\077\376\001\000\000\034\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\157\156\144\151\164\151\157\156\055\160\162\145\144\151\143\141\164\145\376\001\000\000\045\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\055\160\162\145\144\151\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\055\141\143\143\145\163\163\157\162\376\001\000\000\055\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\055\141\143\143\145\163\163\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\143\165\162\162\145\156\164\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\165\162\162\145\156\164\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\155\141\153\145\055\143\157\155\160\157\163\151\164\145\055\143\157\156\144\151\164\151\157\156\376\001\000\000\052\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\155\141\153\145\055\143\157\155\160\157\163\151\164\145\055\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\155\141\153\145\055\160\162\157\160\145\162\164\171\055\143\157\156\144\151\164\151\157\156\376\001\000\000\051\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\155\141\153\145\055\160\162\157\160\145\162\164\171\055\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\151\147\156\141\154\376\001\000\000\030\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\163\151\147\156\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\050\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\377\016"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\021\001\150\141\156\144\154\145\055\145\170\143\145\160\164\151\157\156\163\376\377\016"));
lf[297]=C_h_intern(&lf[297],41, C_text("##sys#chicken.condition-macro-environment"));
lf[298]=C_h_intern(&lf[298],7, C_text("srfi-10"));
lf[299]=C_h_intern(&lf[299],11, C_text("read-syntax"));
lf[300]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\144\145\146\151\156\145\055\162\145\141\144\145\162\055\143\164\157\162\376\001\000\000\046\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\144\145\146\151\156\145\055\162\145\141\144\145\162\055\143\164\157\162\376\377\016"));
lf[301]=C_h_intern(&lf[301],6, C_text("srfi-9"));
lf[302]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001\144\145\146\151\156\145\055\162\145\143\157\162\144\055\164\171\160\145\376\377\016"));
lf[303]=C_h_intern(&lf[303],6, C_text("srfi-8"));
lf[304]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\162\145\143\145\151\166\145\376\377\016"));
lf[305]=C_h_intern(&lf[305],6, C_text("srfi-2"));
lf[306]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\010\001\141\156\144\055\154\145\164\052\376\377\016"));
lf[307]=C_h_intern(&lf[307],12, C_text("chicken.type"));
lf[308]=C_h_intern(&lf[308],36, C_text("##sys#chicken.type-macro-environment"));
lf[309]=C_h_intern(&lf[309],14, C_text("chicken.module"));
lf[310]=C_h_intern(&lf[310],38, C_text("##sys#chicken.module-macro-environment"));
lf[311]=C_h_intern(&lf[311],23, C_text("chicken.internal.syntax"));
lf[312]=C_h_intern(&lf[312],11, C_text("scheme.base"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\156\157\164\376\001\000\000\012\001\163\143\150\145\155\145\043\156\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\142\157\157\154\145\141\156\077\376\001\000\000\017\001\163\143\150\145\155\145\043\142\157\157\154\145\141\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\145\161\077\376\001\000\000\012\001\163\143\150\145\155\145\043\145\161\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\161\166\077\376\001\000\000\013\001\163\143\150\145\155\145\043\145\161\166\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\161\165\141\154\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\161\165\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\157\156\163\376\001\000\000\013\001\163\143\150\145\155\145\043\143\157\156\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\141\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\143\144\162\376\001\000\000\012\001\163\143\150\145\155\145\043\143\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\141\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\141\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\141\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\144\144\162\376\001\000\000\013\001\163\143\150\145\155\145\043\143\144\144\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\141\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\141\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\144\162\041\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\144\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\156\165\154\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\156\165\154\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\154\151\163\164\077\376\001\000\000\014\001\163\143\150\145\155\145\043\154\151\163\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\001\000\000\013\001\163\143\150\145\155\145\043\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\154\145\156\147\164\150\376\001\000\000\015\001\163\143\150\145\155\145\043\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\164\141\151\154\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\164\141\151\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\154\151\163\164\055\162\145\146\376\001\000\000\017\001\163\143\150\145\155\145\043\154\151\163\164\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\163\145\164\041\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\143\157\160\171\376\001\000\000\020\001\163\143\150\145\155\145\043\154\151\163\164\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\142\157\157\154\145\141\156\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\142\157\157\154\145\141\156\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\171\155\142\157\154\075\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\171\155\142\157\154\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\141\160\160\145\156\144\376\001\000\000\015\001\163\143\150\145\155\145\043\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\145\166\145\162\163\145\376\001\000\000\016\001\163\143\150\145\155\145\043\162\145\166\145\162\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\161\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\155\145\155\166\376\001\000\000\013\001\163\143\150\145\155\145\043\155\145\155\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\145\155\142\145\162\376\001\000\000\015\001\163\143\150\145\155\145\043\155\145\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\161\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\163\163\166\376\001\000\000\013\001\163\143\150\145\155\145\043\141\163\163\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\163\163\157\143\376\001\000\000\014\001\163\143\150\145\155\145\043\141\163\163\157\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\171\155\142\157\154\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\171\155\142\157\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\157\162\164\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\151\156\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\001\000\000\027\001\163\143\150\145\155\145\043\151\156\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\157\165\164\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\001\000\000\030\001\163\143\150\145\155\145\043\157\165\164\160\165\164\055\160\157\162\164\055\157\160\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\141\154\154\055\167\151\164\150\055\160\157\162\164\376\001\000\000\025\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\166\145\143\164\157\162\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\166\145\143\164\157\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\141\160\160\145\156\144\376\001\000\000\024\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\166\145\143\164\157\162\055\155\141\160\376\001\000\000\021\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\166\145\143\164\157\162\055\146\157\162\055\145\141\143\150\376\001\000\000\026\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\164\162\151\156\147\055\155\141\160\376\001\000\000\021\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\146\157\162\055\145\141\143\150\376\001\000\000\026\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\165\155\142\145\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\156\165\155\142\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\164\145\147\145\162\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\145\170\141\143\164\077\376\001\000\000\015\001\163\143\150\145\155\145\043\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\145\141\154\077\376\001\000\000\014\001\163\143\150\145\155\145\043\162\145\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\157\155\160\154\145\170\077\376\001\000\000\017\001\163\143\150\145\155\145\043\143\157\155\160\154\145\170\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\156\145\170\141\143\164\077\376\001\000\000\017\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\141\164\151\157\156\141\154\077\376\001\000\000\020\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\172\145\162\157\077\376\001\000\000\014\001\163\143\150\145\155\145\043\172\145\162\157\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\157\144\144\077\376\001\000\000\013\001\163\143\150\145\155\145\043\157\144\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\166\145\156\077\376\001\000\000\014\001\163\143\150\145\155\145\043\145\166\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\157\163\151\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\160\157\163\151\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\145\147\141\164\151\166\145\077\376\001\000\000\020\001\163\143\150\145\155\145\043\156\145\147\141\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\170\141\143\164\055\151\156\164\145\147\145\162\077\376\001\000\000\025\001\163\143\150\145\155\145\043\145\170\141\143\164\055\151\156\164\145\147\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\164\145\170\164\165\141\154\055\160\157\162\164\077\376\001\000\000\024\001\163\143\150\145\155\145\043\164\145\170\164\165\141\154\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\142\151\156\141\162\171\055\160\157\162\164\077\376\001\000\000\023\001\163\143\150\145\155\145\043\142\151\156\141\162\171\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\170\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\151\156\376\001\000\000\012\001\163\143\150\145\155\145\043\155\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\053\376\001\000\000\010\001\163\143\150\145\155\145\043\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\055\376\001\000\000\010\001\163\143\150\145\155\145\043\055\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\052\376\001\000\000\010\001\163\143\150\145\155\145\043\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\057\376\001\000\000\010\001\163\143\150\145\155\145\043\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\075\376\001\000\000\010\001\163\143\150\145\155\145\043\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\076\376\001\000\000\010\001\163\143\150\145\155\145\043\076\376\003\000\000\002\376\003\000\000\002\376\001\000\000\001\001\074\376\001\000\000\010\001\163\143\150\145\155\145\043\074\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\076\075\376\001\000\000\011\001\163\143\150\145\155\145\043\076\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\074\075\376\001\000\000\011\001\163\143\150\145\155\145\043\074\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\161\165\157\164\151\145\156\164\376\001\000\000\017\001\163\143\150\145\155\145\043\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\155\141\151\156\144\145\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\154\157\157\162\055\161\165\157\164\151\145\156\164\376\001\000\000\025\001\163\143\150\145\155\145\043\146\154\157\157\162\055\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\146\154\157\157\162\055\162\145\155\141\151\156\144\145\162\376\001\000\000\026\001\163\143\150\145\155\145\043\146\154\157\157\162\055\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\164\162\165\156\143\141\164\145\055\161\165\157\164\151\145\156\164\376\001\000\000\017\001\163\143\150\145\155\145\043\161\165\157\164\151\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\164\162\165\156\143\141\164\145\055\162\145\155\141\151\156\144\145\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\154\157\157\162\057\376\001\000\000\015\001\163\143\150\145\155\145\043\146\154\157\157\162\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\164\162\165\156\143\141\164\145\057\376\001\000\000\020\001\163\143\150\145\155\145\043\164\162\165\156\143\141\164\145\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\157\144\165\154\157\376\001\000\000\015\001\163\143\150\145\155\145\043\155\157\144\165\154\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\147\143\144\376\001\000\000\012\001\163\143\150\145\155\145\043\147\143\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\154\143\155\376\001\000\000\012\001\163\143\150\145\155\145\043\154\143\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\141\142\163\376\001\000\000\012\001\163\143\150\145\155\145\043\141\142\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\154\157\157\162\376\001\000\000\014\001\163\143\150\145\155\145\043\146\154\157\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\145\151\154\151\156\147\376\001\000\000\016\001\163\143\150\145\155\145\043\143\145\151\154\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\164\162\165\156\143\141\164\145\376\001\000\000\017\001\163\143\150\145\155\145\043\164\162\165\156\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\157\165\156\144\376\001\000\000\014\001\163\143\150\145\155\145\043\162\157\165\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\141\164\151\157\156\141\154\151\172\145\376\001\000\000\022\001\163\143\150\145\155\145\043\162\141\164\151\157\156\141\154\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\151\156\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\145\170\141\143\164\055\076\151\156\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\170\141\143\164\376\001\000\000\025\001\163\143\150\145\155\145\043\151\156\145\170\141\143\164\055\076\145\170\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\161\165\141\162\145\376\001\000\000\015\001\163\143\150\145\155\145\043\163\161\165\141\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\145\170\141\143\164\055\151\156\164\145\147\145\162\055\163\161\162\164\376\001\000\000\031\001\163\143\150\145\155\145\043\145\170\141\143\164\055\151\156\164\145\147\145\162\055\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\170\160\164\376\001\000\000\013\001\163\143\150\145\155\145\043\145\170\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\001\000\000\025\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\143\150\141\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\143\150\141\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\075\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\076\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\074\077\376\001\000\000\015\001\163\143\150\145\155\145\043\143\150\141\162\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\076\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\074\075\077\376\001\000\000\016\001\163\143\150\145\155\145\043\143\150\141\162\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\076\151\156\164\145\147\145\162\376\001\000\000\024\001\163\143\150\145\155\145\043\143\150\141\162\055\076\151\156\164\145\147\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\156\164\145\147\145\162\055\076\143\150\141\162\376\001\000\000\024\001\163\143\150\145\155\145\043\151\156\164\145\147\145\162\055\076\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\164\162\151\156\147\077\376\001\000\000\016\001\163\143\150\145\155\145\043\163\164\162\151\156\147\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\075\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\076\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\074\077\376\001\000\000\017\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\076\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\076\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\074\075\077\376\001\000\000\020\001\163\143\150\145\155\145\043\163\164\162\151\156\147\074\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\163\164\162\151\156\147\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\155\141\153\145\055\154\151\163\164\376\001\000\000\020\001\163\143\150\145\155\145\043\155\141\153\145\055\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\164\162\151\156\147\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\141\160\160\145\156\144\376\001\000\000\024\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\157\160\171\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\157\160\171\041\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\163\164\162\151\156\147\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\165\142\163\164\162\151\156\147\376\001\000\000\020\001\163\143\150\145\155\145\043\163\165\142\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\166\145\143\164\157\162\077\376\001\000\000\016\001\163\143\150\145\155\145\043\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\166\145\143\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\155\141\153\145\055\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\166\145\143\164\157\162\055\162\145\146\376\001\000\000\021\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\022\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\001\000\000\015\001\163\143\150\145\155\145\043\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\001\000\000\015\001\163\143\150\145\155\145\043\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\024\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\166\145\143\164\157\162\376\001\000\000\023\001\163\143\150\145\155\145\043\154\151\163\164\055\076\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\166\145\143\164\157\162\055\143\157\160\171\376\001\000\000\022\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\143\157\160\171\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\146\151\154\154\041\376\001\000\000\023\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\001\000\000\027\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\141\154\165\145\163\376\001\000\000\015\001\163\143\150\145\155\145\043\166\141\154\165\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\162\157\143\145\144\165\162\145\077\376\001\000\000\021\001\163\143\150\145\155\145\043\160\162\157\143\145\144\165\162\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\160\141\162\141\155\145\164\145\162\376\001\000\000\025\001\163\143\150\145\155\145\043\155\141\153\145\055\160\141\162\141\155\145\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\155\141\160\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\157\162\055\145\141\143\150\376\001\000\000\017\001\163\143\150\145\155\145\043\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\160\160\154\171\376\001\000\000\014\001\163\143\150\145\155\145\043\141\160\160\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\144\171\156\141\155\151\143\055\167\151\156\144\376\001\000\000\023\001\163\143\150\145\155\145\043\144\171\156\141\155\151\143\055\167\151\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\001\000\000\045\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\143\141\154\154\057\143\143\376\001\000\000\045\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\151\156\160\165\164\055\160\157\162\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\151\156\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\157\165\164\160\165\164\055\160\157\162\164\077\376\001\000\000\023\001\163\143\150\145\155\145\043\157\165\164\160\165\164\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\031\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\032\001\163\143\150\145\155\145\043\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\027\001\163\143\150\145\155\145\043\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\030\001\163\143\150\145\155\145\043\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\162\145\141\144\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\145\145\153\055\143\150\141\162\376\001\000\000\020\001\163\143\150\145\155\145\043\160\145\145\153\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\145\141\144\055\163\164\162\151\156\147\376\001\000\000\026\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\160\145\145\153\055\165\070\376\001\000\000\016\001\163\143\150\145\155\145\043\160\145\145\153\055\165\070\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\145\141\164\165\162\145\163\376\001\000\000\017\001\163\143\150\145\155\145\043\146\145\141\164\165\162\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\145\141\144\055\165\070\376\001\000\000\024\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\167\162\151\164\145\055\165\070\376\001\000\000\025\001\143\150\151\143\153\145\156\056\151\157\043\167\162\151\164\145\055\142\171\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\143\150\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\167\162\151\164\145\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\156\145\167\154\151\156\145\376\001\000\000\016\001\163\143\150\145\155\145\043\156\145\167\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\157\146\055\157\142\152\145\143\164\077\376\001\000\000\022\001\163\143\150\145\155\145\043\145\157\146\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\157\146\055\157\142\152\145\143\164\376\001\000\000\021\001\163\143\150\145\155\145\043\145\157\146\055\157\142\152\145\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\146\154\165\163\150\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\165\163\150\055\157\165\164\160\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\154\157\163\145\055\160\157\162\164\376\001\000\000\021\001\163\143\150\145\155\145\043\143\154\157\163\145\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\162\145\141\144\171\077\376\001\000\000\022\001\163\143\150\145\155\145\043\143\150\141\162\055\162\145\141\144\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\070\055\162\145\141\144\171\077\376\001\000\000\020\001\163\143\150\145\155\145\043\165\070\055\162\145\141\144\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\156\165\155\145\162\141\164\157\162\376\001\000\000\020\001\163\143\150\145\155\145\043\156\165\155\145\162\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\145\156\157\155\151\156\141\164\157\162\376\001\000\000\022\001\163\143\150\145\155\145\043\144\145\156\157\155\151\156\141\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\157\160\145\156\055\151\156\160\165\164\055\163\164\162\151\156\147\376\001\000\000\030\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\031\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\157\160\145\156\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\035\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\157\160\145\156\055\151\156\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\034\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\030\001\163\143\150\145\155\145\043\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\147\145\164\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\034\001\163\143\150\145\155\145\043\147\145\164\055\157\165\164\160\165\164\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\035\001\163\143\150\145\155\145\043\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\141\151\163\145\376\001\000\000\014\001\163\143\150\145\155\145\043\162\141\151\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\162\141\151\163\145\055\143\157\156\164\151\156\165\141\142\154\145\376\001\000\000\030\001\163\143\150\145\155\145\043\162\141\151\163\145\055\143\157\156\164\151\156\165\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\162\162\157\162\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\162\162\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\151\154\145\055\145\162\162\157\162\077\376\001\000\000\022\001\163\143\150\145\155\145\043\146\151\154\145\055\145\162\162\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\145\141\144\055\145\162\162\157\162\077\376\001\000\000\022\001\163\143\150\145\155\145\043\162\145\141\144\055\145\162\162\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\145\162\162\157\162\055\157\142\152\145\143\164\077\376\001\000\000\024\001\163\143\150\145\155\145\043\145\162\162\157\162\055\157\142\152\145\143\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\145\162\162\157\162\055\157\142\152\145\143\164\055\155\145\163\163\141\147\145\376\001\000\000\033\001\163\143\150\145\155\145\043\145\162\162\157\162\055\157\142\152\145\143\164\055\155\145\163\163\141\147\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\145\162\162\157\162\055\157\142\152\145\143\164\055\151\162\162\151\164\141\156\164\163\376\001\000\000\035\001\163\143\150\145\155\145\043\145\162\162\157\162\055\157\142\152\145\143\164\055\151\162\162\151\164\141\156\164\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\165\164\146\070\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\163\164\162\151\156\147\055\076\165\164\146\070\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\165\164\146\070\055\076\163\164\162\151\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\165\164\146\070\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\142\171\164\145\163\055\076\163\164\162\151\156\147\376\001\000\000\040\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\163\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\167\162\151\164\145\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\157\043\167\162\151\164\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\142\171\164\145\166\145\143\164\157\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\171\164\145\166\145\143\164\157\162\077\376\001\000\000\036\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\155\141\153\145\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\155\141\153\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\141\160\160\145\156\144\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\165\070\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\165\070\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\142\171\164\145\166\145\143\164\157\162\055\165\070\055\163\145\164\041\376\001\000\000\045\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\165\070\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\032\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\041\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\154\151\156\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\167\162\151\164\145\055\163\164\162\151\156\147\376\001\000\000\023\001\163\143\150\145\155\145\043\167\162\151\164\145\055\163\164\162\151\156\147\376\377\016"));
lf[314]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\006\001\144\145\146\151\156\145\376\003\000\000\002\376\001\000\000\003\001\154\145\164\376\003\000\000\002\376\001\000\000\004\001\154\145\164\052\376\003\000\000\002\376\001\000\000\006\001\154\145\164\162\145\143\376\003\000\000\002\376\001\000\000\007\001\154\145\164\162\145\143\052\376\003\000\000\002\376\001\000\000\012\001\154\145\164\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\015\001\144\145\146\151\156\145\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\013\001\154\145\164\052\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\014\001\160\141\162\141\155\145\164\145\162\151\172\145\376\003\000\000\002\376\001\000\000\004\001\167\150\145\156\376\003\000\000\002\376\001\000\000\006\001\165\156\154\145\163\163\376\003\000\000\002\376\001\000\000\002\001\144\157\376\003\000\000\002\376\001\000\000\006\001\144\145\146\151\156\145\376\003\000\000\002\376\001\000\000\015\001\144\145\146\151\156\145\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\004\001\143\141\163\145\376\003\000\000\002\376\001\000\000\004\001\143\157\156\144\376\003\000\000\002\376\001\000\000\005\001\147\165\141\162\144\376\003\000\000\002\376\001\000\000\022\001\144\145\146\151\156\145\055\162\145\143\157\162\144\055\164\171\160\145\376\003\000\000\002\376\001\000\000\007\001\151\156\143\154\165\144\145\376\003\000\000\002\376\001\000\000\012\001\151\156\143\154\165\144\145\055\143\151\376\003\000\000\002\376\001\000\000\004\001\163\145\164\041\376\003\000\000\002\376\001\000\000\014\001\163\171\156\164\141\170\055\162\165\154\145\163\376\003\000\000\002\376\001\000\000\013\001\143\157\156\144\055\145\170\160\141\156\144\376\003\000\000\002\376\001\000\000\006\001\151\155\160\157\162\164\376\003\000\000\002\376\001\000\000\006\001\145\170\160\157\162\164\376\003\000\000\002\376\001\000\000\005\001\142\145\147\151\156\376\003\000\000\002\376\001\000\000\021\001\151\155\160\157\162\164\055\146\157\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\003\001\141\156\144\376\003\000\000\002\376\001\000\000\002\001\157\162\376\003\000\000\002\376\001\000\000\006\001\154\141\155\142\144\141\376\003\000\000\002\376\001\000\000\002\001\151\146\376\003\000\000\002\376\001\000\000\005\001\161\165\157\164\145\376\003\000\000\002\376\001\000\000\012\001\161\165\141\163\151\161\165\157\164\145\376\003\000\000\002\376\001\000\000\014\001\163\171\156\164\141\170\055\145\162\162\157\162\376\003\000\000\002\376\001\000\000\012\001\154\145\164\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\015\001\154\145\164\162\145\143\055\163\171\156\164\141\170\376\377\016"));
lf[315]=C_h_intern(&lf[315],6, C_text("scheme"));
lf[316]=C_h_intern(&lf[316],11, C_text("scheme.r5rs"));
lf[317]=C_h_intern(&lf[317],16, C_text("scheme.r5rs-null"));
lf[318]=C_h_intern(&lf[318],16, C_text("scheme.r4rs-null"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\144\171\156\141\155\151\143\055\167\151\156\144\376\001\000\000\023\001\163\143\150\145\155\145\043\144\171\156\141\155\151\143\055\167\151\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\001\000\000\013\001\163\143\150\145\155\145\043\145\166\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\166\141\154\165\145\163\376\001\000\000\015\001\163\143\150\145\155\145\043\166\141\154\165\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\001\000\000\027\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\377\016"));
lf[320]=C_h_intern(&lf[320],11, C_text("scheme.r4rs"));
lf[321]=C_h_intern(&lf[321],21, C_text("scheme#make-parameter"));
C_register_lf2(lf,322,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4025,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_chicken_2dsyntax_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[648] = {
{C_text("f12519:modules_2escm"),(void*)f12519},
{C_text("f12523:modules_2escm"),(void*)f12523},
{C_text("f13258:modules_2escm"),(void*)f13258},
{C_text("f13262:modules_2escm"),(void*)f13262},
{C_text("f_10002:modules_2escm"),(void*)f_10002},
{C_text("f_10018:modules_2escm"),(void*)f_10018},
{C_text("f_10058:modules_2escm"),(void*)f_10058},
{C_text("f_10061:modules_2escm"),(void*)f_10061},
{C_text("f_10066:modules_2escm"),(void*)f_10066},
{C_text("f_10076:modules_2escm"),(void*)f_10076},
{C_text("f_10080:modules_2escm"),(void*)f_10080},
{C_text("f_10082:modules_2escm"),(void*)f_10082},
{C_text("f_10090:modules_2escm"),(void*)f_10090},
{C_text("f_10096:modules_2escm"),(void*)f_10096},
{C_text("f_10100:modules_2escm"),(void*)f_10100},
{C_text("f_10104:modules_2escm"),(void*)f_10104},
{C_text("f_10125:modules_2escm"),(void*)f_10125},
{C_text("f_10135:modules_2escm"),(void*)f_10135},
{C_text("f_10137:modules_2escm"),(void*)f_10137},
{C_text("f_10162:modules_2escm"),(void*)f_10162},
{C_text("f_10171:modules_2escm"),(void*)f_10171},
{C_text("f_10196:modules_2escm"),(void*)f_10196},
{C_text("f_10214:modules_2escm"),(void*)f_10214},
{C_text("f_10220:modules_2escm"),(void*)f_10220},
{C_text("f_10224:modules_2escm"),(void*)f_10224},
{C_text("f_10225:modules_2escm"),(void*)f_10225},
{C_text("f_10231:modules_2escm"),(void*)f_10231},
{C_text("f_10237:modules_2escm"),(void*)f_10237},
{C_text("f_10259:modules_2escm"),(void*)f_10259},
{C_text("f_10261:modules_2escm"),(void*)f_10261},
{C_text("f_10271:modules_2escm"),(void*)f_10271},
{C_text("f_10284:modules_2escm"),(void*)f_10284},
{C_text("f_10288:modules_2escm"),(void*)f_10288},
{C_text("f_10291:modules_2escm"),(void*)f_10291},
{C_text("f_10301:modules_2escm"),(void*)f_10301},
{C_text("f_10308:modules_2escm"),(void*)f_10308},
{C_text("f_10339:modules_2escm"),(void*)f_10339},
{C_text("f_10345:modules_2escm"),(void*)f_10345},
{C_text("f_10346:modules_2escm"),(void*)f_10346},
{C_text("f_10353:modules_2escm"),(void*)f_10353},
{C_text("f_10386:modules_2escm"),(void*)f_10386},
{C_text("f_10392:modules_2escm"),(void*)f_10392},
{C_text("f_10395:modules_2escm"),(void*)f_10395},
{C_text("f_10398:modules_2escm"),(void*)f_10398},
{C_text("f_10405:modules_2escm"),(void*)f_10405},
{C_text("f_10409:modules_2escm"),(void*)f_10409},
{C_text("f_10413:modules_2escm"),(void*)f_10413},
{C_text("f_10417:modules_2escm"),(void*)f_10417},
{C_text("f_10420:modules_2escm"),(void*)f_10420},
{C_text("f_10426:modules_2escm"),(void*)f_10426},
{C_text("f_10429:modules_2escm"),(void*)f_10429},
{C_text("f_10436:modules_2escm"),(void*)f_10436},
{C_text("f_10446:modules_2escm"),(void*)f_10446},
{C_text("f_10453:modules_2escm"),(void*)f_10453},
{C_text("f_10464:modules_2escm"),(void*)f_10464},
{C_text("f_10471:modules_2escm"),(void*)f_10471},
{C_text("f_10473:modules_2escm"),(void*)f_10473},
{C_text("f_10507:modules_2escm"),(void*)f_10507},
{C_text("f_10543:modules_2escm"),(void*)f_10543},
{C_text("f_10554:modules_2escm"),(void*)f_10554},
{C_text("f_10568:modules_2escm"),(void*)f_10568},
{C_text("f_10575:modules_2escm"),(void*)f_10575},
{C_text("f_10577:modules_2escm"),(void*)f_10577},
{C_text("f_10611:modules_2escm"),(void*)f_10611},
{C_text("f_10651:modules_2escm"),(void*)f_10651},
{C_text("f_10661:modules_2escm"),(void*)f_10661},
{C_text("f_10674:modules_2escm"),(void*)f_10674},
{C_text("f_10684:modules_2escm"),(void*)f_10684},
{C_text("f_10705:modules_2escm"),(void*)f_10705},
{C_text("f_10720:modules_2escm"),(void*)f_10720},
{C_text("f_10730:modules_2escm"),(void*)f_10730},
{C_text("f_10738:modules_2escm"),(void*)f_10738},
{C_text("f_10742:modules_2escm"),(void*)f_10742},
{C_text("f_10746:modules_2escm"),(void*)f_10746},
{C_text("f_10748:modules_2escm"),(void*)f_10748},
{C_text("f_10751:modules_2escm"),(void*)f_10751},
{C_text("f_10755:modules_2escm"),(void*)f_10755},
{C_text("f_10759:modules_2escm"),(void*)f_10759},
{C_text("f_10766:modules_2escm"),(void*)f_10766},
{C_text("f_10773:modules_2escm"),(void*)f_10773},
{C_text("f_10794:modules_2escm"),(void*)f_10794},
{C_text("f_10820:modules_2escm"),(void*)f_10820},
{C_text("f_10822:modules_2escm"),(void*)f_10822},
{C_text("f_10825:modules_2escm"),(void*)f_10825},
{C_text("f_10831:modules_2escm"),(void*)f_10831},
{C_text("f_10872:modules_2escm"),(void*)f_10872},
{C_text("f_10904:modules_2escm"),(void*)f_10904},
{C_text("f_10930:modules_2escm"),(void*)f_10930},
{C_text("f_10951:modules_2escm"),(void*)f_10951},
{C_text("f_10955:modules_2escm"),(void*)f_10955},
{C_text("f_10981:modules_2escm"),(void*)f_10981},
{C_text("f_10995:modules_2escm"),(void*)f_10995},
{C_text("f_11037:modules_2escm"),(void*)f_11037},
{C_text("f_11053:modules_2escm"),(void*)f_11053},
{C_text("f_11061:modules_2escm"),(void*)f_11061},
{C_text("f_11068:modules_2escm"),(void*)f_11068},
{C_text("f_11078:modules_2escm"),(void*)f_11078},
{C_text("f_11100:modules_2escm"),(void*)f_11100},
{C_text("f_11102:modules_2escm"),(void*)f_11102},
{C_text("f_11141:modules_2escm"),(void*)f_11141},
{C_text("f_11162:modules_2escm"),(void*)f_11162},
{C_text("f_11174:modules_2escm"),(void*)f_11174},
{C_text("f_11197:modules_2escm"),(void*)f_11197},
{C_text("f_11200:modules_2escm"),(void*)f_11200},
{C_text("f_11211:modules_2escm"),(void*)f_11211},
{C_text("f_11217:modules_2escm"),(void*)f_11217},
{C_text("f_11249:modules_2escm"),(void*)f_11249},
{C_text("f_11252:modules_2escm"),(void*)f_11252},
{C_text("f_11263:modules_2escm"),(void*)f_11263},
{C_text("f_11279:modules_2escm"),(void*)f_11279},
{C_text("f_11283:modules_2escm"),(void*)f_11283},
{C_text("f_11290:modules_2escm"),(void*)f_11290},
{C_text("f_11303:modules_2escm"),(void*)f_11303},
{C_text("f_11330:modules_2escm"),(void*)f_11330},
{C_text("f_11343:modules_2escm"),(void*)f_11343},
{C_text("f_11347:modules_2escm"),(void*)f_11347},
{C_text("f_11351:modules_2escm"),(void*)f_11351},
{C_text("f_11355:modules_2escm"),(void*)f_11355},
{C_text("f_11369:modules_2escm"),(void*)f_11369},
{C_text("f_11375:modules_2escm"),(void*)f_11375},
{C_text("f_11377:modules_2escm"),(void*)f_11377},
{C_text("f_11402:modules_2escm"),(void*)f_11402},
{C_text("f_11411:modules_2escm"),(void*)f_11411},
{C_text("f_11421:modules_2escm"),(void*)f_11421},
{C_text("f_11436:modules_2escm"),(void*)f_11436},
{C_text("f_11439:modules_2escm"),(void*)f_11439},
{C_text("f_11442:modules_2escm"),(void*)f_11442},
{C_text("f_11445:modules_2escm"),(void*)f_11445},
{C_text("f_11448:modules_2escm"),(void*)f_11448},
{C_text("f_11451:modules_2escm"),(void*)f_11451},
{C_text("f_11453:modules_2escm"),(void*)f_11453},
{C_text("f_11458:modules_2escm"),(void*)f_11458},
{C_text("f_11470:modules_2escm"),(void*)f_11470},
{C_text("f_11505:modules_2escm"),(void*)f_11505},
{C_text("f_11508:modules_2escm"),(void*)f_11508},
{C_text("f_11511:modules_2escm"),(void*)f_11511},
{C_text("f_11514:modules_2escm"),(void*)f_11514},
{C_text("f_11517:modules_2escm"),(void*)f_11517},
{C_text("f_11520:modules_2escm"),(void*)f_11520},
{C_text("f_11523:modules_2escm"),(void*)f_11523},
{C_text("f_11526:modules_2escm"),(void*)f_11526},
{C_text("f_11529:modules_2escm"),(void*)f_11529},
{C_text("f_11532:modules_2escm"),(void*)f_11532},
{C_text("f_11535:modules_2escm"),(void*)f_11535},
{C_text("f_11538:modules_2escm"),(void*)f_11538},
{C_text("f_11541:modules_2escm"),(void*)f_11541},
{C_text("f_11544:modules_2escm"),(void*)f_11544},
{C_text("f_11547:modules_2escm"),(void*)f_11547},
{C_text("f_11550:modules_2escm"),(void*)f_11550},
{C_text("f_11553:modules_2escm"),(void*)f_11553},
{C_text("f_11556:modules_2escm"),(void*)f_11556},
{C_text("f_11559:modules_2escm"),(void*)f_11559},
{C_text("f_11562:modules_2escm"),(void*)f_11562},
{C_text("f_11565:modules_2escm"),(void*)f_11565},
{C_text("f_11567:modules_2escm"),(void*)f_11567},
{C_text("f_11574:modules_2escm"),(void*)f_11574},
{C_text("f_11603:modules_2escm"),(void*)f_11603},
{C_text("f_11607:modules_2escm"),(void*)f_11607},
{C_text("f_11609:modules_2escm"),(void*)f_11609},
{C_text("f_11620:modules_2escm"),(void*)f_11620},
{C_text("f_11628:modules_2escm"),(void*)f_11628},
{C_text("f_11655:modules_2escm"),(void*)f_11655},
{C_text("f_11668:modules_2escm"),(void*)f_11668},
{C_text("f_11672:modules_2escm"),(void*)f_11672},
{C_text("f_11675:modules_2escm"),(void*)f_11675},
{C_text("f_11715:modules_2escm"),(void*)f_11715},
{C_text("f_11717:modules_2escm"),(void*)f_11717},
{C_text("f_11752:modules_2escm"),(void*)f_11752},
{C_text("f_11755:modules_2escm"),(void*)f_11755},
{C_text("f_11758:modules_2escm"),(void*)f_11758},
{C_text("f_11761:modules_2escm"),(void*)f_11761},
{C_text("f_11764:modules_2escm"),(void*)f_11764},
{C_text("f_11767:modules_2escm"),(void*)f_11767},
{C_text("f_11770:modules_2escm"),(void*)f_11770},
{C_text("f_11774:modules_2escm"),(void*)f_11774},
{C_text("f_11778:modules_2escm"),(void*)f_11778},
{C_text("f_11782:modules_2escm"),(void*)f_11782},
{C_text("f_11786:modules_2escm"),(void*)f_11786},
{C_text("f_11798:modules_2escm"),(void*)f_11798},
{C_text("f_11802:modules_2escm"),(void*)f_11802},
{C_text("f_11806:modules_2escm"),(void*)f_11806},
{C_text("f_11810:modules_2escm"),(void*)f_11810},
{C_text("f_11814:modules_2escm"),(void*)f_11814},
{C_text("f_11818:modules_2escm"),(void*)f_11818},
{C_text("f_11822:modules_2escm"),(void*)f_11822},
{C_text("f_11826:modules_2escm"),(void*)f_11826},
{C_text("f_11830:modules_2escm"),(void*)f_11830},
{C_text("f_11834:modules_2escm"),(void*)f_11834},
{C_text("f_4025:modules_2escm"),(void*)f_4025},
{C_text("f_4028:modules_2escm"),(void*)f_4028},
{C_text("f_4031:modules_2escm"),(void*)f_4031},
{C_text("f_4034:modules_2escm"),(void*)f_4034},
{C_text("f_4037:modules_2escm"),(void*)f_4037},
{C_text("f_4040:modules_2escm"),(void*)f_4040},
{C_text("f_4531:modules_2escm"),(void*)f_4531},
{C_text("f_4537:modules_2escm"),(void*)f_4537},
{C_text("f_4550:modules_2escm"),(void*)f_4550},
{C_text("f_4564:modules_2escm"),(void*)f_4564},
{C_text("f_4612:modules_2escm"),(void*)f_4612},
{C_text("f_4626:modules_2escm"),(void*)f_4626},
{C_text("f_4639:modules_2escm"),(void*)f_4639},
{C_text("f_4695:modules_2escm"),(void*)f_4695},
{C_text("f_4704:modules_2escm"),(void*)f_4704},
{C_text("f_4712:modules_2escm"),(void*)f_4712},
{C_text("f_4716:modules_2escm"),(void*)f_4716},
{C_text("f_4720:modules_2escm"),(void*)f_4720},
{C_text("f_4738:modules_2escm"),(void*)f_4738},
{C_text("f_5320:modules_2escm"),(void*)f_5320},
{C_text("f_5351:modules_2escm"),(void*)f_5351},
{C_text("f_5376:modules_2escm"),(void*)f_5376},
{C_text("f_5387:modules_2escm"),(void*)f_5387},
{C_text("f_5391:modules_2escm"),(void*)f_5391},
{C_text("f_5397:modules_2escm"),(void*)f_5397},
{C_text("f_5409:modules_2escm"),(void*)f_5409},
{C_text("f_5418:modules_2escm"),(void*)f_5418},
{C_text("f_5427:modules_2escm"),(void*)f_5427},
{C_text("f_5436:modules_2escm"),(void*)f_5436},
{C_text("f_5445:modules_2escm"),(void*)f_5445},
{C_text("f_5454:modules_2escm"),(void*)f_5454},
{C_text("f_5463:modules_2escm"),(void*)f_5463},
{C_text("f_5472:modules_2escm"),(void*)f_5472},
{C_text("f_5481:modules_2escm"),(void*)f_5481},
{C_text("f_5490:modules_2escm"),(void*)f_5490},
{C_text("f_5499:modules_2escm"),(void*)f_5499},
{C_text("f_5508:modules_2escm"),(void*)f_5508},
{C_text("f_5517:modules_2escm"),(void*)f_5517},
{C_text("f_5526:modules_2escm"),(void*)f_5526},
{C_text("f_5535:modules_2escm"),(void*)f_5535},
{C_text("f_5544:modules_2escm"),(void*)f_5544},
{C_text("f_5553:modules_2escm"),(void*)f_5553},
{C_text("f_5562:modules_2escm"),(void*)f_5562},
{C_text("f_5571:modules_2escm"),(void*)f_5571},
{C_text("f_5580:modules_2escm"),(void*)f_5580},
{C_text("f_5589:modules_2escm"),(void*)f_5589},
{C_text("f_5598:modules_2escm"),(void*)f_5598},
{C_text("f_5607:modules_2escm"),(void*)f_5607},
{C_text("f_5616:modules_2escm"),(void*)f_5616},
{C_text("f_5625:modules_2escm"),(void*)f_5625},
{C_text("f_5634:modules_2escm"),(void*)f_5634},
{C_text("f_5643:modules_2escm"),(void*)f_5643},
{C_text("f_5652:modules_2escm"),(void*)f_5652},
{C_text("f_5662:modules_2escm"),(void*)f_5662},
{C_text("f_5680:modules_2escm"),(void*)f_5680},
{C_text("f_5695:modules_2escm"),(void*)f_5695},
{C_text("f_5711:modules_2escm"),(void*)f_5711},
{C_text("f_5713:modules_2escm"),(void*)f_5713},
{C_text("f_5717:modules_2escm"),(void*)f_5717},
{C_text("f_5722:modules_2escm"),(void*)f_5722},
{C_text("f_5726:modules_2escm"),(void*)f_5726},
{C_text("f_5730:modules_2escm"),(void*)f_5730},
{C_text("f_5733:modules_2escm"),(void*)f_5733},
{C_text("f_5739:modules_2escm"),(void*)f_5739},
{C_text("f_5745:modules_2escm"),(void*)f_5745},
{C_text("f_5749:modules_2escm"),(void*)f_5749},
{C_text("f_5752:modules_2escm"),(void*)f_5752},
{C_text("f_5776:modules_2escm"),(void*)f_5776},
{C_text("f_5780:modules_2escm"),(void*)f_5780},
{C_text("f_5782:modules_2escm"),(void*)f_5782},
{C_text("f_5816:modules_2escm"),(void*)f_5816},
{C_text("f_5824:modules_2escm"),(void*)f_5824},
{C_text("f_5826:modules_2escm"),(void*)f_5826},
{C_text("f_5834:modules_2escm"),(void*)f_5834},
{C_text("f_5861:modules_2escm"),(void*)f_5861},
{C_text("f_5863:modules_2escm"),(void*)f_5863},
{C_text("f_5917:modules_2escm"),(void*)f_5917},
{C_text("f_5924:modules_2escm"),(void*)f_5924},
{C_text("f_5927:modules_2escm"),(void*)f_5927},
{C_text("f_5933:modules_2escm"),(void*)f_5933},
{C_text("f_5939:modules_2escm"),(void*)f_5939},
{C_text("f_5952:modules_2escm"),(void*)f_5952},
{C_text("f_5964:modules_2escm"),(void*)f_5964},
{C_text("f_5968:modules_2escm"),(void*)f_5968},
{C_text("f_5970:modules_2escm"),(void*)f_5970},
{C_text("f_5986:modules_2escm"),(void*)f_5986},
{C_text("f_5987:modules_2escm"),(void*)f_5987},
{C_text("f_5995:modules_2escm"),(void*)f_5995},
{C_text("f_6009:modules_2escm"),(void*)f_6009},
{C_text("f_6012:modules_2escm"),(void*)f_6012},
{C_text("f_6019:modules_2escm"),(void*)f_6019},
{C_text("f_6023:modules_2escm"),(void*)f_6023},
{C_text("f_6029:modules_2escm"),(void*)f_6029},
{C_text("f_6057:modules_2escm"),(void*)f_6057},
{C_text("f_6059:modules_2escm"),(void*)f_6059},
{C_text("f_6066:modules_2escm"),(void*)f_6066},
{C_text("f_6079:modules_2escm"),(void*)f_6079},
{C_text("f_6081:modules_2escm"),(void*)f_6081},
{C_text("f_6117:modules_2escm"),(void*)f_6117},
{C_text("f_6119:modules_2escm"),(void*)f_6119},
{C_text("f_6122:modules_2escm"),(void*)f_6122},
{C_text("f_6126:modules_2escm"),(void*)f_6126},
{C_text("f_6142:modules_2escm"),(void*)f_6142},
{C_text("f_6149:modules_2escm"),(void*)f_6149},
{C_text("f_6163:modules_2escm"),(void*)f_6163},
{C_text("f_6166:modules_2escm"),(void*)f_6166},
{C_text("f_6208:modules_2escm"),(void*)f_6208},
{C_text("f_6211:modules_2escm"),(void*)f_6211},
{C_text("f_6214:modules_2escm"),(void*)f_6214},
{C_text("f_6220:modules_2escm"),(void*)f_6220},
{C_text("f_6223:modules_2escm"),(void*)f_6223},
{C_text("f_6226:modules_2escm"),(void*)f_6226},
{C_text("f_6232:modules_2escm"),(void*)f_6232},
{C_text("f_6235:modules_2escm"),(void*)f_6235},
{C_text("f_6238:modules_2escm"),(void*)f_6238},
{C_text("f_6271:modules_2escm"),(void*)f_6271},
{C_text("f_6275:modules_2escm"),(void*)f_6275},
{C_text("f_6282:modules_2escm"),(void*)f_6282},
{C_text("f_6286:modules_2escm"),(void*)f_6286},
{C_text("f_6308:modules_2escm"),(void*)f_6308},
{C_text("f_6325:modules_2escm"),(void*)f_6325},
{C_text("f_6335:modules_2escm"),(void*)f_6335},
{C_text("f_6338:modules_2escm"),(void*)f_6338},
{C_text("f_6341:modules_2escm"),(void*)f_6341},
{C_text("f_6344:modules_2escm"),(void*)f_6344},
{C_text("f_6347:modules_2escm"),(void*)f_6347},
{C_text("f_6353:modules_2escm"),(void*)f_6353},
{C_text("f_6387:modules_2escm"),(void*)f_6387},
{C_text("f_6391:modules_2escm"),(void*)f_6391},
{C_text("f_6406:modules_2escm"),(void*)f_6406},
{C_text("f_6417:modules_2escm"),(void*)f_6417},
{C_text("f_6423:modules_2escm"),(void*)f_6423},
{C_text("f_6440:modules_2escm"),(void*)f_6440},
{C_text("f_6447:modules_2escm"),(void*)f_6447},
{C_text("f_6454:modules_2escm"),(void*)f_6454},
{C_text("f_6499:modules_2escm"),(void*)f_6499},
{C_text("f_6556:modules_2escm"),(void*)f_6556},
{C_text("f_6561:modules_2escm"),(void*)f_6561},
{C_text("f_6569:modules_2escm"),(void*)f_6569},
{C_text("f_6573:modules_2escm"),(void*)f_6573},
{C_text("f_6584:modules_2escm"),(void*)f_6584},
{C_text("f_6611:modules_2escm"),(void*)f_6611},
{C_text("f_6634:modules_2escm"),(void*)f_6634},
{C_text("f_6648:modules_2escm"),(void*)f_6648},
{C_text("f_6673:modules_2escm"),(void*)f_6673},
{C_text("f_6688:modules_2escm"),(void*)f_6688},
{C_text("f_6706:modules_2escm"),(void*)f_6706},
{C_text("f_6717:modules_2escm"),(void*)f_6717},
{C_text("f_6736:modules_2escm"),(void*)f_6736},
{C_text("f_6749:modules_2escm"),(void*)f_6749},
{C_text("f_6759:modules_2escm"),(void*)f_6759},
{C_text("f_6765:modules_2escm"),(void*)f_6765},
{C_text("f_6769:modules_2escm"),(void*)f_6769},
{C_text("f_6772:modules_2escm"),(void*)f_6772},
{C_text("f_6783:modules_2escm"),(void*)f_6783},
{C_text("f_6811:modules_2escm"),(void*)f_6811},
{C_text("f_6825:modules_2escm"),(void*)f_6825},
{C_text("f_6830:modules_2escm"),(void*)f_6830},
{C_text("f_6840:modules_2escm"),(void*)f_6840},
{C_text("f_6858:modules_2escm"),(void*)f_6858},
{C_text("f_6880:modules_2escm"),(void*)f_6880},
{C_text("f_6888:modules_2escm"),(void*)f_6888},
{C_text("f_6922:modules_2escm"),(void*)f_6922},
{C_text("f_6933:modules_2escm"),(void*)f_6933},
{C_text("f_6941:modules_2escm"),(void*)f_6941},
{C_text("f_6975:modules_2escm"),(void*)f_6975},
{C_text("f_6981:modules_2escm"),(void*)f_6981},
{C_text("f_6987:modules_2escm"),(void*)f_6987},
{C_text("f_6997:modules_2escm"),(void*)f_6997},
{C_text("f_7004:modules_2escm"),(void*)f_7004},
{C_text("f_7032:modules_2escm"),(void*)f_7032},
{C_text("f_7036:modules_2escm"),(void*)f_7036},
{C_text("f_7040:modules_2escm"),(void*)f_7040},
{C_text("f_7044:modules_2escm"),(void*)f_7044},
{C_text("f_7048:modules_2escm"),(void*)f_7048},
{C_text("f_7052:modules_2escm"),(void*)f_7052},
{C_text("f_7056:modules_2escm"),(void*)f_7056},
{C_text("f_7060:modules_2escm"),(void*)f_7060},
{C_text("f_7092:modules_2escm"),(void*)f_7092},
{C_text("f_7128:modules_2escm"),(void*)f_7128},
{C_text("f_7130:modules_2escm"),(void*)f_7130},
{C_text("f_7166:modules_2escm"),(void*)f_7166},
{C_text("f_7178:modules_2escm"),(void*)f_7178},
{C_text("f_7210:modules_2escm"),(void*)f_7210},
{C_text("f_7220:modules_2escm"),(void*)f_7220},
{C_text("f_7235:modules_2escm"),(void*)f_7235},
{C_text("f_7259:modules_2escm"),(void*)f_7259},
{C_text("f_7275:modules_2escm"),(void*)f_7275},
{C_text("f_7277:modules_2escm"),(void*)f_7277},
{C_text("f_7302:modules_2escm"),(void*)f_7302},
{C_text("f_7364:modules_2escm"),(void*)f_7364},
{C_text("f_7366:modules_2escm"),(void*)f_7366},
{C_text("f_7391:modules_2escm"),(void*)f_7391},
{C_text("f_7406:modules_2escm"),(void*)f_7406},
{C_text("f_7421:modules_2escm"),(void*)f_7421},
{C_text("f_7442:modules_2escm"),(void*)f_7442},
{C_text("f_7470:modules_2escm"),(void*)f_7470},
{C_text("f_7479:modules_2escm"),(void*)f_7479},
{C_text("f_7496:modules_2escm"),(void*)f_7496},
{C_text("f_7535:modules_2escm"),(void*)f_7535},
{C_text("f_7538:modules_2escm"),(void*)f_7538},
{C_text("f_7541:modules_2escm"),(void*)f_7541},
{C_text("f_7557:modules_2escm"),(void*)f_7557},
{C_text("f_7567:modules_2escm"),(void*)f_7567},
{C_text("f_7573:modules_2escm"),(void*)f_7573},
{C_text("f_7574:modules_2escm"),(void*)f_7574},
{C_text("f_7586:modules_2escm"),(void*)f_7586},
{C_text("f_7599:modules_2escm"),(void*)f_7599},
{C_text("f_7600:modules_2escm"),(void*)f_7600},
{C_text("f_7612:modules_2escm"),(void*)f_7612},
{C_text("f_7625:modules_2escm"),(void*)f_7625},
{C_text("f_7628:modules_2escm"),(void*)f_7628},
{C_text("f_7644:modules_2escm"),(void*)f_7644},
{C_text("f_7648:modules_2escm"),(void*)f_7648},
{C_text("f_7652:modules_2escm"),(void*)f_7652},
{C_text("f_7654:modules_2escm"),(void*)f_7654},
{C_text("f_7664:modules_2escm"),(void*)f_7664},
{C_text("f_7677:modules_2escm"),(void*)f_7677},
{C_text("f_7687:modules_2escm"),(void*)f_7687},
{C_text("f_7711:modules_2escm"),(void*)f_7711},
{C_text("f_7715:modules_2escm"),(void*)f_7715},
{C_text("f_7730:modules_2escm"),(void*)f_7730},
{C_text("f_7732:modules_2escm"),(void*)f_7732},
{C_text("f_7766:modules_2escm"),(void*)f_7766},
{C_text("f_7778:modules_2escm"),(void*)f_7778},
{C_text("f_7796:modules_2escm"),(void*)f_7796},
{C_text("f_7830:modules_2escm"),(void*)f_7830},
{C_text("f_7837:modules_2escm"),(void*)f_7837},
{C_text("f_7843:modules_2escm"),(void*)f_7843},
{C_text("f_7859:modules_2escm"),(void*)f_7859},
{C_text("f_7863:modules_2escm"),(void*)f_7863},
{C_text("f_7867:modules_2escm"),(void*)f_7867},
{C_text("f_7880:modules_2escm"),(void*)f_7880},
{C_text("f_7902:modules_2escm"),(void*)f_7902},
{C_text("f_7904:modules_2escm"),(void*)f_7904},
{C_text("f_7929:modules_2escm"),(void*)f_7929},
{C_text("f_7944:modules_2escm"),(void*)f_7944},
{C_text("f_7959:modules_2escm"),(void*)f_7959},
{C_text("f_7972:modules_2escm"),(void*)f_7972},
{C_text("f_8037:modules_2escm"),(void*)f_8037},
{C_text("f_8043:modules_2escm"),(void*)f_8043},
{C_text("f_8047:modules_2escm"),(void*)f_8047},
{C_text("f_8053:modules_2escm"),(void*)f_8053},
{C_text("f_8056:modules_2escm"),(void*)f_8056},
{C_text("f_8059:modules_2escm"),(void*)f_8059},
{C_text("f_8062:modules_2escm"),(void*)f_8062},
{C_text("f_8063:modules_2escm"),(void*)f_8063},
{C_text("f_8070:modules_2escm"),(void*)f_8070},
{C_text("f_8073:modules_2escm"),(void*)f_8073},
{C_text("f_8076:modules_2escm"),(void*)f_8076},
{C_text("f_8077:modules_2escm"),(void*)f_8077},
{C_text("f_8080:modules_2escm"),(void*)f_8080},
{C_text("f_8084:modules_2escm"),(void*)f_8084},
{C_text("f_8110:modules_2escm"),(void*)f_8110},
{C_text("f_8116:modules_2escm"),(void*)f_8116},
{C_text("f_8120:modules_2escm"),(void*)f_8120},
{C_text("f_8124:modules_2escm"),(void*)f_8124},
{C_text("f_8130:modules_2escm"),(void*)f_8130},
{C_text("f_8133:modules_2escm"),(void*)f_8133},
{C_text("f_8136:modules_2escm"),(void*)f_8136},
{C_text("f_8139:modules_2escm"),(void*)f_8139},
{C_text("f_8146:modules_2escm"),(void*)f_8146},
{C_text("f_8162:modules_2escm"),(void*)f_8162},
{C_text("f_8168:modules_2escm"),(void*)f_8168},
{C_text("f_8171:modules_2escm"),(void*)f_8171},
{C_text("f_8178:modules_2escm"),(void*)f_8178},
{C_text("f_8185:modules_2escm"),(void*)f_8185},
{C_text("f_8191:modules_2escm"),(void*)f_8191},
{C_text("f_8194:modules_2escm"),(void*)f_8194},
{C_text("f_8197:modules_2escm"),(void*)f_8197},
{C_text("f_8215:modules_2escm"),(void*)f_8215},
{C_text("f_8218:modules_2escm"),(void*)f_8218},
{C_text("f_8236:modules_2escm"),(void*)f_8236},
{C_text("f_8248:modules_2escm"),(void*)f_8248},
{C_text("f_8251:modules_2escm"),(void*)f_8251},
{C_text("f_8258:modules_2escm"),(void*)f_8258},
{C_text("f_8264:modules_2escm"),(void*)f_8264},
{C_text("f_8265:modules_2escm"),(void*)f_8265},
{C_text("f_8272:modules_2escm"),(void*)f_8272},
{C_text("f_8284:modules_2escm"),(void*)f_8284},
{C_text("f_8294:modules_2escm"),(void*)f_8294},
{C_text("f_8312:modules_2escm"),(void*)f_8312},
{C_text("f_8322:modules_2escm"),(void*)f_8322},
{C_text("f_8342:modules_2escm"),(void*)f_8342},
{C_text("f_8349:modules_2escm"),(void*)f_8349},
{C_text("f_8351:modules_2escm"),(void*)f_8351},
{C_text("f_8361:modules_2escm"),(void*)f_8361},
{C_text("f_8376:modules_2escm"),(void*)f_8376},
{C_text("f_8378:modules_2escm"),(void*)f_8378},
{C_text("f_8408:modules_2escm"),(void*)f_8408},
{C_text("f_8420:modules_2escm"),(void*)f_8420},
{C_text("f_8423:modules_2escm"),(void*)f_8423},
{C_text("f_8426:modules_2escm"),(void*)f_8426},
{C_text("f_8447:modules_2escm"),(void*)f_8447},
{C_text("f_8449:modules_2escm"),(void*)f_8449},
{C_text("f_8485:modules_2escm"),(void*)f_8485},
{C_text("f_8497:modules_2escm"),(void*)f_8497},
{C_text("f_8526:modules_2escm"),(void*)f_8526},
{C_text("f_8536:modules_2escm"),(void*)f_8536},
{C_text("f_8540:modules_2escm"),(void*)f_8540},
{C_text("f_8550:modules_2escm"),(void*)f_8550},
{C_text("f_8559:modules_2escm"),(void*)f_8559},
{C_text("f_8562:modules_2escm"),(void*)f_8562},
{C_text("f_8565:modules_2escm"),(void*)f_8565},
{C_text("f_8566:modules_2escm"),(void*)f_8566},
{C_text("f_8584:modules_2escm"),(void*)f_8584},
{C_text("f_8590:modules_2escm"),(void*)f_8590},
{C_text("f_8593:modules_2escm"),(void*)f_8593},
{C_text("f_8596:modules_2escm"),(void*)f_8596},
{C_text("f_8624:modules_2escm"),(void*)f_8624},
{C_text("f_8631:modules_2escm"),(void*)f_8631},
{C_text("f_8637:modules_2escm"),(void*)f_8637},
{C_text("f_8640:modules_2escm"),(void*)f_8640},
{C_text("f_8641:modules_2escm"),(void*)f_8641},
{C_text("f_8645:modules_2escm"),(void*)f_8645},
{C_text("f_8663:modules_2escm"),(void*)f_8663},
{C_text("f_8669:modules_2escm"),(void*)f_8669},
{C_text("f_8672:modules_2escm"),(void*)f_8672},
{C_text("f_8675:modules_2escm"),(void*)f_8675},
{C_text("f_8686:modules_2escm"),(void*)f_8686},
{C_text("f_8690:modules_2escm"),(void*)f_8690},
{C_text("f_8694:modules_2escm"),(void*)f_8694},
{C_text("f_8698:modules_2escm"),(void*)f_8698},
{C_text("f_8704:modules_2escm"),(void*)f_8704},
{C_text("f_8714:modules_2escm"),(void*)f_8714},
{C_text("f_8729:modules_2escm"),(void*)f_8729},
{C_text("f_8733:modules_2escm"),(void*)f_8733},
{C_text("f_8735:modules_2escm"),(void*)f_8735},
{C_text("f_8745:modules_2escm"),(void*)f_8745},
{C_text("f_8760:modules_2escm"),(void*)f_8760},
{C_text("f_8778:modules_2escm"),(void*)f_8778},
{C_text("f_8805:modules_2escm"),(void*)f_8805},
{C_text("f_8851:modules_2escm"),(void*)f_8851},
{C_text("f_8860:modules_2escm"),(void*)f_8860},
{C_text("f_8871:modules_2escm"),(void*)f_8871},
{C_text("f_8875:modules_2escm"),(void*)f_8875},
{C_text("f_8878:modules_2escm"),(void*)f_8878},
{C_text("f_8886:modules_2escm"),(void*)f_8886},
{C_text("f_8907:modules_2escm"),(void*)f_8907},
{C_text("f_8911:modules_2escm"),(void*)f_8911},
{C_text("f_8919:modules_2escm"),(void*)f_8919},
{C_text("f_8923:modules_2escm"),(void*)f_8923},
{C_text("f_8939:modules_2escm"),(void*)f_8939},
{C_text("f_8943:modules_2escm"),(void*)f_8943},
{C_text("f_8957:modules_2escm"),(void*)f_8957},
{C_text("f_8968:modules_2escm"),(void*)f_8968},
{C_text("f_8994:modules_2escm"),(void*)f_8994},
{C_text("f_8996:modules_2escm"),(void*)f_8996},
{C_text("f_9020:modules_2escm"),(void*)f_9020},
{C_text("f_9029:modules_2escm"),(void*)f_9029},
{C_text("f_9044:modules_2escm"),(void*)f_9044},
{C_text("f_9052:modules_2escm"),(void*)f_9052},
{C_text("f_9059:modules_2escm"),(void*)f_9059},
{C_text("f_9063:modules_2escm"),(void*)f_9063},
{C_text("f_9066:modules_2escm"),(void*)f_9066},
{C_text("f_9071:modules_2escm"),(void*)f_9071},
{C_text("f_9075:modules_2escm"),(void*)f_9075},
{C_text("f_9078:modules_2escm"),(void*)f_9078},
{C_text("f_9081:modules_2escm"),(void*)f_9081},
{C_text("f_9084:modules_2escm"),(void*)f_9084},
{C_text("f_9088:modules_2escm"),(void*)f_9088},
{C_text("f_9092:modules_2escm"),(void*)f_9092},
{C_text("f_9096:modules_2escm"),(void*)f_9096},
{C_text("f_9100:modules_2escm"),(void*)f_9100},
{C_text("f_9103:modules_2escm"),(void*)f_9103},
{C_text("f_9106:modules_2escm"),(void*)f_9106},
{C_text("f_9109:modules_2escm"),(void*)f_9109},
{C_text("f_9112:modules_2escm"),(void*)f_9112},
{C_text("f_9127:modules_2escm"),(void*)f_9127},
{C_text("f_9133:modules_2escm"),(void*)f_9133},
{C_text("f_9137:modules_2escm"),(void*)f_9137},
{C_text("f_9140:modules_2escm"),(void*)f_9140},
{C_text("f_9143:modules_2escm"),(void*)f_9143},
{C_text("f_9146:modules_2escm"),(void*)f_9146},
{C_text("f_9149:modules_2escm"),(void*)f_9149},
{C_text("f_9152:modules_2escm"),(void*)f_9152},
{C_text("f_9155:modules_2escm"),(void*)f_9155},
{C_text("f_9158:modules_2escm"),(void*)f_9158},
{C_text("f_9164:modules_2escm"),(void*)f_9164},
{C_text("f_9168:modules_2escm"),(void*)f_9168},
{C_text("f_9176:modules_2escm"),(void*)f_9176},
{C_text("f_9182:modules_2escm"),(void*)f_9182},
{C_text("f_9187:modules_2escm"),(void*)f_9187},
{C_text("f_9191:modules_2escm"),(void*)f_9191},
{C_text("f_9196:modules_2escm"),(void*)f_9196},
{C_text("f_9203:modules_2escm"),(void*)f_9203},
{C_text("f_9207:modules_2escm"),(void*)f_9207},
{C_text("f_9210:modules_2escm"),(void*)f_9210},
{C_text("f_9214:modules_2escm"),(void*)f_9214},
{C_text("f_9217:modules_2escm"),(void*)f_9217},
{C_text("f_9225:modules_2escm"),(void*)f_9225},
{C_text("f_9229:modules_2escm"),(void*)f_9229},
{C_text("f_9232:modules_2escm"),(void*)f_9232},
{C_text("f_9235:modules_2escm"),(void*)f_9235},
{C_text("f_9238:modules_2escm"),(void*)f_9238},
{C_text("f_9240:modules_2escm"),(void*)f_9240},
{C_text("f_9248:modules_2escm"),(void*)f_9248},
{C_text("f_9252:modules_2escm"),(void*)f_9252},
{C_text("f_9254:modules_2escm"),(void*)f_9254},
{C_text("f_9267:modules_2escm"),(void*)f_9267},
{C_text("f_9274:modules_2escm"),(void*)f_9274},
{C_text("f_9298:modules_2escm"),(void*)f_9298},
{C_text("f_9312:modules_2escm"),(void*)f_9312},
{C_text("f_9320:modules_2escm"),(void*)f_9320},
{C_text("f_9347:modules_2escm"),(void*)f_9347},
{C_text("f_9372:modules_2escm"),(void*)f_9372},
{C_text("f_9384:modules_2escm"),(void*)f_9384},
{C_text("f_9387:modules_2escm"),(void*)f_9387},
{C_text("f_9391:modules_2escm"),(void*)f_9391},
{C_text("f_9394:modules_2escm"),(void*)f_9394},
{C_text("f_9410:modules_2escm"),(void*)f_9410},
{C_text("f_9418:modules_2escm"),(void*)f_9418},
{C_text("f_9422:modules_2escm"),(void*)f_9422},
{C_text("f_9426:modules_2escm"),(void*)f_9426},
{C_text("f_9443:modules_2escm"),(void*)f_9443},
{C_text("f_9457:modules_2escm"),(void*)f_9457},
{C_text("f_9475:modules_2escm"),(void*)f_9475},
{C_text("f_9478:modules_2escm"),(void*)f_9478},
{C_text("f_9483:modules_2escm"),(void*)f_9483},
{C_text("f_9493:modules_2escm"),(void*)f_9493},
{C_text("f_9497:modules_2escm"),(void*)f_9497},
{C_text("f_9502:modules_2escm"),(void*)f_9502},
{C_text("f_9510:modules_2escm"),(void*)f_9510},
{C_text("f_9520:modules_2escm"),(void*)f_9520},
{C_text("f_9533:modules_2escm"),(void*)f_9533},
{C_text("f_9543:modules_2escm"),(void*)f_9543},
{C_text("f_9561:modules_2escm"),(void*)f_9561},
{C_text("f_9583:modules_2escm"),(void*)f_9583},
{C_text("f_9625:modules_2escm"),(void*)f_9625},
{C_text("f_9628:modules_2escm"),(void*)f_9628},
{C_text("f_9633:modules_2escm"),(void*)f_9633},
{C_text("f_9643:modules_2escm"),(void*)f_9643},
{C_text("f_9647:modules_2escm"),(void*)f_9647},
{C_text("f_9652:modules_2escm"),(void*)f_9652},
{C_text("f_9664:modules_2escm"),(void*)f_9664},
{C_text("f_9672:modules_2escm"),(void*)f_9672},
{C_text("f_9682:modules_2escm"),(void*)f_9682},
{C_text("f_9695:modules_2escm"),(void*)f_9695},
{C_text("f_9705:modules_2escm"),(void*)f_9705},
{C_text("f_9723:modules_2escm"),(void*)f_9723},
{C_text("f_9735:modules_2escm"),(void*)f_9735},
{C_text("f_9764:modules_2escm"),(void*)f_9764},
{C_text("f_9776:modules_2escm"),(void*)f_9776},
{C_text("f_9808:modules_2escm"),(void*)f_9808},
{C_text("f_9811:modules_2escm"),(void*)f_9811},
{C_text("f_9816:modules_2escm"),(void*)f_9816},
{C_text("f_9826:modules_2escm"),(void*)f_9826},
{C_text("f_9830:modules_2escm"),(void*)f_9830},
{C_text("f_9835:modules_2escm"),(void*)f_9835},
{C_text("f_9847:modules_2escm"),(void*)f_9847},
{C_text("f_9855:modules_2escm"),(void*)f_9855},
{C_text("f_9868:modules_2escm"),(void*)f_9868},
{C_text("f_9874:modules_2escm"),(void*)f_9874},
{C_text("f_9887:modules_2escm"),(void*)f_9887},
{C_text("f_9897:modules_2escm"),(void*)f_9897},
{C_text("f_9910:modules_2escm"),(void*)f_9910},
{C_text("f_9949:modules_2escm"),(void*)f_9949},
{C_text("f_9965:modules_2escm"),(void*)f_9965},
{C_text("toplevel:modules_2escm"),(void*)C_modules_toplevel},
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
S|  chicken.format#format		3
S|  chicken.format#fprintf		8
S|  scheme#for-each		16
S|  chicken.base#foldl		3
S|  scheme#map		26
S|  chicken.base#foldr		3
o|eliminated procedure checks: 271 
o|specializations:
o|  1 (scheme#cddr (pair * pair))
o|  1 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  3 (scheme#= fixnum fixnum)
o|  1 (scheme#length list)
o|  11 (##sys#check-output-port * * *)
o|  2 (scheme#cdar (pair pair *))
o|  1 (scheme#caar (pair pair *))
o|  1 (scheme#eqv? * *)
o|  11 (##sys#check-list (or pair list) *)
o|  81 (scheme#cdr pair)
o|  38 (scheme#car pair)
(o e)|safe calls: 1125 
(o e)|dropped branches: 2 
(o e)|assignments to immediate values: 1 
o|safe globals: (map-se posv posq make-list iota find-tail find length+ lset=/eq? lset<=/eq? list-tabulate lset-intersection/eq? lset-union/eq? lset-difference/eq? lset-adjoin/eq? list-index last unzip1 remove filter-map filter alist-cons delete-duplicates fifth fourth third second first delete concatenate cons* any every append-map split-at drop take span partition) 
o|removed side-effect free assignment to unused variable: partition 
o|removed side-effect free assignment to unused variable: span 
o|removed side-effect free assignment to unused variable: drop 
o|removed side-effect free assignment to unused variable: split-at 
o|removed side-effect free assignment to unused variable: append-map 
o|inlining procedure: k4422 
o|inlining procedure: k4422 
o|inlining procedure: k4453 
o|inlining procedure: k4453 
o|removed side-effect free assignment to unused variable: cons* 
o|removed side-effect free assignment to unused variable: concatenate 
o|inlining procedure: k4539 
o|inlining procedure: k4539 
o|removed side-effect free assignment to unused variable: first 
o|removed side-effect free assignment to unused variable: second 
o|removed side-effect free assignment to unused variable: third 
o|removed side-effect free assignment to unused variable: fourth 
o|removed side-effect free assignment to unused variable: fifth 
o|removed side-effect free assignment to unused variable: alist-cons 
o|inlining procedure: k4670 
o|inlining procedure: k4670 
o|inlining procedure: k4662 
o|inlining procedure: k4662 
o|inlining procedure: k4717 
o|inlining procedure: k4717 
o|inlining procedure: k4706 
o|inlining procedure: k4706 
o|removed side-effect free assignment to unused variable: remove 
o|removed side-effect free assignment to unused variable: unzip1 
o|removed side-effect free assignment to unused variable: last 
o|removed side-effect free assignment to unused variable: list-index 
o|removed side-effect free assignment to unused variable: lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: lset-difference/eq? 
o|removed side-effect free assignment to unused variable: lset-union/eq? 
o|removed side-effect free assignment to unused variable: lset-intersection/eq? 
o|inlining procedure: k5061 
o|inlining procedure: k5061 
o|removed side-effect free assignment to unused variable: lset<=/eq? 
o|removed side-effect free assignment to unused variable: lset=/eq? 
o|removed side-effect free assignment to unused variable: length+ 
o|removed side-effect free assignment to unused variable: find 
o|removed side-effect free assignment to unused variable: find-tail 
o|removed side-effect free assignment to unused variable: iota 
o|removed side-effect free assignment to unused variable: make-list 
o|removed side-effect free assignment to unused variable: posq 
o|removed side-effect free assignment to unused variable: posv 
o|inlining procedure: k5353 
o|contracted procedure: "(modules.scm:61) g782791" 
o|inlining procedure: k5335 
o|inlining procedure: k5335 
o|inlining procedure: k5353 
o|removed side-effect free assignment to unused variable: module? 
o|merged explicitly consed rest parameter: rest992999 
o|inlining procedure: k5784 
o|contracted procedure: "(modules.scm:138) g10271036" 
o|inlining procedure: k5784 
o|inlining procedure: k5839 
o|inlining procedure: k5839 
o|inlining procedure: k5831 
o|inlining procedure: k5831 
o|inlining procedure: k5880 
o|inlining procedure: k5880 
o|inlining procedure: k5931 
o|inlining procedure: k5931 
o|inlining procedure: k5992 
o|inlining procedure: k5992 
o|inlining procedure: k5975 
o|inlining procedure: k6031 
o|inlining procedure: k6031 
o|inlining procedure: k5975 
o|inlining procedure: k6083 
o|inlining procedure: k6083 
o|inlining procedure: k6127 
o|inlining procedure: k6127 
o|inlining procedure: k6153 
o|inlining procedure: k6153 
o|inlining procedure: k6168 
o|inlining procedure: k6168 
o|inlining procedure: k6200 
o|inlining procedure: k6290 
o|inlining procedure: k6290 
o|inlining procedure: k6305 
o|inlining procedure: k6305 
o|inlining procedure: k6200 
o|inlining procedure: k6327 
o|inlining procedure: k6327 
o|inlining procedure: k6408 
o|inlining procedure: k6408 
o|consed rest parameter at call site: "(modules.scm:275) make-module" 7 
o|merged explicitly consed rest parameter: ses*1337 
o|inlining procedure: k6785 
o|inlining procedure: k6785 
o|inlining procedure: k6805 
o|inlining procedure: k6832 
o|inlining procedure: k6832 
o|inlining procedure: k6805 
o|inlining procedure: k6860 
o|inlining procedure: k6860 
o|inlining procedure: k7132 
o|contracted procedure: "(modules.scm:390) g15391548" 
o|inlining procedure: k7132 
o|inlining procedure: k7164 
o|inlining procedure: k7164 
o|inlining procedure: k7180 
o|inlining procedure: k7180 
o|inlining procedure: k7243 
o|inlining procedure: k7243 
o|inlining procedure: k7279 
o|inlining procedure: k7279 
o|inlining procedure: k7368 
o|contracted procedure: "(modules.scm:363) g14531462" 
o|inlining procedure: k7320 
o|inlining procedure: k7320 
o|inlining procedure: k7368 
o|contracted procedure: "(modules.scm:356) g14411442" 
o|contracted procedure: "(modules.scm:348) compiled-module-dependencies" 
o|inlining procedure: k6943 
o|contracted procedure: "(modules.scm:336) g13951404" 
o|inlining procedure: k6943 
o|contracted procedure: "(modules.scm:337) delete-duplicates" 
o|inlining procedure: k4614 
o|inlining procedure: k4614 
o|inlining procedure: k7486 
o|inlining procedure: k7486 
o|consed rest parameter at call site: "(modules.scm:430) merge-se" 1 
o|inlining procedure: k7591 
o|consed rest parameter at call site: "(modules.scm:430) merge-se" 1 
o|inlining procedure: k7591 
o|consed rest parameter at call site: "(modules.scm:430) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:434) merge-se" 1 
o|inlining procedure: k7617 
o|consed rest parameter at call site: "(modules.scm:434) merge-se" 1 
o|inlining procedure: k7617 
o|consed rest parameter at call site: "(modules.scm:434) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:438) merge-se" 1 
o|inlining procedure: k7656 
o|inlining procedure: k7656 
o|inlining procedure: k7679 
o|inlining procedure: k7679 
o|consed rest parameter at call site: "(modules.scm:423) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:419) make-module" 7 
o|inlining procedure: k7734 
o|contracted procedure: "(modules.scm:416) g16011610" 
o|inlining procedure: k7734 
o|inlining procedure: k7768 
o|contracted procedure: "(modules.scm:413) find-reexport1582" 
o|inlining procedure: k7516 
o|inlining procedure: k7516 
o|inlining procedure: k7768 
o|inlining procedure: k7780 
o|inlining procedure: k7780 
o|consed rest parameter at call site: "(modules.scm:459) merge-se" 1 
o|inlining procedure: k7882 
o|inlining procedure: k7882 
o|consed rest parameter at call site: "(modules.scm:445) make-module" 7 
o|inlining procedure: k7906 
o|inlining procedure: k7906 
o|inlining procedure: k7974 
o|inlining procedure: k7974 
o|inlining procedure: k7986 
o|inlining procedure: k8001 
o|inlining procedure: k8001 
o|inlining procedure: k7986 
o|substituted constant variable: a8049 
o|substituted constant variable: a8050 
o|substituted constant variable: a8066 
o|substituted constant variable: a8067 
o|inlining procedure: k8085 
o|inlining procedure: k8085 
o|substituted constant variable: a8100 
o|substituted constant variable: a8112 
o|substituted constant variable: a8113 
o|substituted constant variable: a8126 
o|substituted constant variable: a8127 
o|substituted constant variable: a8164 
o|substituted constant variable: a8165 
o|inlining procedure: k8154 
o|substituted constant variable: a8187 
o|substituted constant variable: a8188 
o|inlining procedure: k8154 
o|inlining procedure: k8208 
o|inlining procedure: k8208 
o|inlining procedure: k8220 
o|substituted constant variable: a8232 
o|substituted constant variable: a8233 
o|substituted constant variable: a8244 
o|substituted constant variable: a8245 
o|inlining procedure: k8237 
o|substituted constant variable: a8260 
o|substituted constant variable: a8261 
o|substituted constant variable: a8268 
o|substituted constant variable: a8269 
o|inlining procedure: k8237 
o|inlining procedure: k8286 
o|inlining procedure: k8286 
o|substituted constant variable: a8306 
o|contracted procedure: "(modules.scm:531) g19301931" 
o|inlining procedure: k8220 
o|inlining procedure: k8314 
o|inlining procedure: k8314 
o|inlining procedure: k8353 
o|inlining procedure: k8353 
o|inlining procedure: k8380 
o|inlining procedure: k8380 
o|inlining procedure: k8403 
o|substituted constant variable: a8416 
o|substituted constant variable: a8417 
o|substituted constant variable: a8431 
o|inlining procedure: k8403 
o|inlining procedure: k8451 
o|inlining procedure: k8451 
o|inlining procedure: k8568 
o|inlining procedure: k8568 
o|consed rest parameter at call site: "(modules.scm:632) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:650) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:647) merge-se" 1 
o|inlining procedure: k8706 
o|inlining procedure: k8706 
o|consed rest parameter at call site: "(modules.scm:626) merge-se" 1 
o|inlining procedure: k8737 
o|contracted procedure: "(modules.scm:621) g20752084" 
o|inlining procedure: k8602 
o|inlining procedure: k8602 
o|inlining procedure: k8737 
o|contracted procedure: "(modules.scm:625) module-indirect-exports" 
o|inlining procedure: k6574 
o|inlining procedure: k6574 
o|inlining procedure: k6586 
o|inlining procedure: k6586 
o|inlining procedure: k6613 
o|inlining procedure: k6613 
o|inlining procedure: k6671 
o|inlining procedure: k6671 
o|inlining procedure: k6645 
o|inlining procedure: k6645 
o|inlining procedure: k6690 
o|inlining procedure: k6690 
o|inlining procedure: k8780 
o|inlining procedure: k8780 
o|inlining procedure: k8807 
o|inlining procedure: k8807 
o|inlining procedure: k8830 
o|inlining procedure: k8830 
o|inlining procedure: k8858 
o|inlining procedure: k8858 
o|inlining procedure: k8899 
o|inlining procedure: k8899 
o|inlining procedure: k8927 
o|inlining procedure: k8927 
o|consed rest parameter at call site: "(modules.scm:562) merge-se" 1 
o|inlining procedure: k8998 
o|inlining procedure: k8998 
o|inlining procedure: k9015 
o|inlining procedure: k9015 
o|contracted procedure: "(modules.scm:559) filter-sdlist1771" 
o|inlining procedure: k8499 
o|inlining procedure: k8499 
o|substituted constant variable: saved214321442163 
o|substituted constant variable: saved214521462164 
o|inlining procedure: k9169 
o|inlining procedure: k9169 
o|substituted constant variable: a9208 
o|inlining procedure: k9218 
o|inlining procedure: k9218 
o|inlining procedure: k9256 
o|inlining procedure: k9256 
o|inlining procedure: k9275 
o|inlining procedure: k9275 
o|inlining procedure: k9303 
o|inlining procedure: k9317 
o|inlining procedure: k9317 
o|inlining procedure: k9303 
o|inlining procedure: k9349 
o|inlining procedure: k9349 
o|inlining procedure: k9395 
o|inlining procedure: k9395 
o|inlining procedure: k9445 
o|inlining procedure: k9445 
o|inlining procedure: k9470 
o|inlining procedure: k9504 
o|inlining procedure: k9535 
o|inlining procedure: k9535 
o|inlining procedure: k9504 
o|inlining procedure: k9580 
o|inlining procedure: k9580 
o|inlining procedure: k9470 
o|inlining procedure: k9654 
o|inlining procedure: k9666 
o|inlining procedure: k9697 
o|inlining procedure: k9697 
o|inlining procedure: k9666 
o|inlining procedure: k9654 
o|inlining procedure: k9803 
o|inlining procedure: k9837 
o|inlining procedure: k9849 
o|inlining procedure: k9889 
o|inlining procedure: k9889 
o|inlining procedure: k9912 
o|inlining procedure: k9912 
o|inlining procedure: k9849 
o|inlining procedure: k9837 
o|inlining procedure: k9803 
o|inlining procedure: k10139 
o|inlining procedure: k10139 
o|inlining procedure: k10173 
o|inlining procedure: k10173 
o|inlining procedure: k10239 
o|inlining procedure: k10239 
o|inlining procedure: k10263 
o|inlining procedure: k10263 
o|inlining procedure: k10312 
o|inlining procedure: k10322 
o|inlining procedure: k10322 
o|inlining procedure: k10312 
o|inlining procedure: k10357 
o|inlining procedure: k10357 
o|consed rest parameter at call site: "(modules.scm:872) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:871) merge-se" 1 
o|consed rest parameter at call site: "(modules.scm:869) merge-se" 1 
o|inlining procedure: k10475 
o|inlining procedure: k10475 
o|inlining procedure: k10509 
o|inlining procedure: k10509 
o|inlining procedure: k10579 
o|inlining procedure: k10579 
o|inlining procedure: k10613 
o|inlining procedure: k10613 
o|inlining procedure: k10653 
o|inlining procedure: k10653 
o|inlining procedure: k10676 
o|inlining procedure: k10676 
o|inlining procedure: k10696 
o|inlining procedure: k10696 
o|contracted procedure: "(modules.scm:887) register-undefined" 
o|inlining procedure: k6435 
o|inlining procedure: k6449 
o|inlining procedure: k6449 
o|inlining procedure: k6492 
o|inlining procedure: k6492 
o|inlining procedure: k6435 
o|inlining procedure: k10756 
o|inlining procedure: k10756 
o|inlining procedure: k10780 
o|inlining procedure: k10780 
o|inlining procedure: k10802 
o|inlining procedure: k10802 
o|contracted procedure: "(modules.scm:890) g29102911" 
o|merged explicitly consed rest parameter: args2931 
o|inlining procedure: k10838 
o|inlining procedure: k10838 
o|consed rest parameter at call site: "(modules.scm:905) err2929" 1 
o|contracted procedure: "(modules.scm:904) g29362937" 
o|inlining procedure: k10844 
o|inlining procedure: k10844 
o|inlining procedure: k10859 
o|consed rest parameter at call site: "(modules.scm:909) err2929" 1 
o|inlining procedure: k10859 
o|inlining procedure: k10874 
o|inlining procedure: k10874 
o|consed rest parameter at call site: "(modules.scm:914) err2929" 1 
o|inlining procedure: k10892 
o|inlining procedure: k10892 
o|consed rest parameter at call site: "(modules.scm:919) err2929" 1 
o|inlining procedure: k10916 
o|inlining procedure: k10916 
o|inlining procedure: k10939 
o|inlining procedure: k10939 
o|consed rest parameter at call site: "(modules.scm:925) err2929" 1 
o|inlining procedure: k10983 
o|inlining procedure: k10983 
o|consed rest parameter at call site: "(modules.scm:930) err2929" 1 
o|contracted procedure: "(modules.scm:933) g29672968" 
o|merged explicitly consed rest parameter: args2982 
o|consed rest parameter at call site: "(modules.scm:944) err2981" 1 
o|inlining procedure: k11104 
o|inlining procedure: k11104 
o|inlining procedure: k11155 
o|inlining procedure: k11155 
o|inlining procedure: k11164 
o|inlining procedure: k11176 
o|inlining procedure: k11176 
o|removed unused parameter to known procedure: alias3043 "(modules.scm:958) match-functor-argument" 
o|inlining procedure: k11164 
o|removed unused parameter to known procedure: alias3043 "(modules.scm:972) match-functor-argument" 
o|consed rest parameter at call site: "(modules.scm:939) err2981" 1 
o|contracted procedure: "(modules.scm:936) g29772978" 
o|removed unused formal parameters: (alias3043) 
o|inlining procedure: k11284 
o|inlining procedure: k11295 
o|inlining procedure: k11295 
o|inlining procedure: k11284 
o|inlining procedure: k11379 
o|contracted procedure: "(modules.scm:999) g30803089" 
o|substituted constant variable: a11365 
o|inlining procedure: k11379 
o|inlining procedure: k11413 
o|inlining procedure: k11413 
o|inlining procedure: k11472 
o|inlining procedure: k11472 
o|inlining procedure: k11575 
o|inlining procedure: k11575 
o|inlining procedure: k11614 
o|contracted procedure: "(modules.scm:1439) delq3153" 
o|inlining procedure: k11630 
o|inlining procedure: k11630 
o|propagated global variable: lst3157 ##sys#module-table 
o|inlining procedure: k11614 
o|inlining procedure: k11719 
o|contracted procedure: "(modules.scm:1450) g31763185" 
o|inlining procedure: k11719 
o|propagated global variable: r4rs-syntax3101 ##sys#scheme-macro-environment 
o|replaced variables: 1787 
o|removed binding forms: 547 
o|removed side-effect free assignment to unused variable: every 
o|removed side-effect free assignment to unused variable: any 
o|removed side-effect free assignment to unused variable: filter 
o|substituted constant variable: r470711848 
o|removed side-effect free assignment to unused variable: list-tabulate 
o|substituted constant variable: r533611854 
o|substituted constant variable: r533611854 
o|substituted constant variable: r612811884 
o|substituted constant variable: r615411886 
o|substituted constant variable: r616911887 
o|removed call to pure procedure with unused result: "(modules.scm:231) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:246) chicken.base#void" 
o|substituted constant variable: r716511909 
o|substituted constant variable: r716511909 
o|substituted constant variable: r718111913 
o|removed call to pure procedure with unused result: "(modules.scm:376) chicken.base#void" 
o|substituted constant variable: prop1444 
o|substituted constant variable: r748711928 
o|substituted constant variable: r759211931 
o|substituted constant variable: r759211931 
o|substituted constant variable: r761811935 
o|substituted constant variable: r761811935 
o|substituted constant variable: r776911946 
o|substituted constant variable: r778111948 
o|substituted constant variable: r797511953 
o|substituted constant variable: r820911964 
o|converted assignments to bindings: (ln->num1862) 
o|substituted constant variable: prop1933 
o|substituted constant variable: r822111970 
o|substituted constant variable: r840411978 
o|removed call to pure procedure with unused result: "(modules.scm:633) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:636) chicken.base#void" 
o|substituted constant variable: r657511989 
o|substituted constant variable: r658711991 
o|converted assignments to bindings: (warn1299) 
o|substituted constant variable: r880812005 
o|removed call to pure procedure with unused result: "(modules.scm:593) chicken.base#void" 
o|substituted constant variable: r899912017 
o|substituted constant variable: r850012021 
o|converted assignments to bindings: (report-unresolved-identifiers1770) 
o|substituted constant variable: r917012024 
o|converted assignments to bindings: (rename2574) 
o|converted assignments to bindings: (module-imports2277) 
o|substituted constant variable: r1032312075 
o|substituted constant variable: r1031312076 
o|substituted constant variable: r1035812078 
o|removed call to pure procedure with unused result: "(modules.scm:870) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:830) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:829) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:828) chicken.base#void" 
o|substituted constant variable: r649312098 
o|substituted constant variable: r649312098 
o|removed call to pure procedure with unused result: "(modules.scm:885) chicken.base#void" 
o|removed call to pure procedure with unused result: "(modules.scm:894) chicken.base#void" 
o|converted assignments to bindings: (mrename2895) 
o|substituted constant variable: prop2939 
o|substituted constant variable: r1087512113 
o|substituted constant variable: prop2970 
o|substituted constant variable: r1115612125 
o|substituted constant variable: r1115612125 
o|substituted constant variable: r1117712130 
o|converted assignments to bindings: (merr2989) 
o|converted assignments to bindings: (err2981) 
o|substituted constant variable: prop2980 
o|substituted constant variable: r1161512148 
o|converted assignments to bindings: (delmod3152) 
o|simplifications: ((let . 9)) 
o|replaced variables: 112 
o|removed binding forms: 1545 
o|contracted procedure: k6242 
o|contracted procedure: k6348 
o|contracted procedure: k7264 
o|inlining procedure: k7946 
o|inlining procedure: k8088 
o|inlining procedure: k8389 
o|inlining procedure: k8389 
o|inlining procedure: k8389 
o|inlining procedure: k8389 
o|contracted procedure: k8646 
o|contracted procedure: k8664 
o|inlining procedure: k8758 
o|inlining procedure: k8758 
o|contracted procedure: k8893 
o|contracted procedure: k10292 
o|contracted procedure: k10295 
o|contracted procedure: k10298 
o|contracted procedure: k10761 
o|inlining procedure: k10764 
o|inlining procedure: k10764 
o|contracted procedure: k10799 
o|removed binding forms: 137 
o|contracted procedure: k7409 
o|inlining procedure: k7519 
o|substituted constant variable: r794712436 
o|inlining procedure: k7998 
o|substituted constant variable: r808912439 
o|contracted procedure: k8225 
o|substituted constant variable: r839012447 
o|substituted constant variable: r839012447 
o|substituted constant variable: r839012449 
o|substituted constant variable: r839012449 
o|substituted constant variable: r839012451 
o|substituted constant variable: r839012451 
o|substituted constant variable: r839012453 
o|substituted constant variable: r839012453 
o|contracted procedure: k10785 
o|contracted procedure: k10835 
o|contracted procedure: k11057 
o|simplifications: ((let . 1)) 
o|replaced variables: 2 
o|removed binding forms: 20 
o|removed conditional forms: 5 
o|substituted constant variable: r752012585 
o|substituted constant variable: r799912588 
o|substituted constant variable: r799912588 
o|removed binding forms: 9 
o|removed conditional forms: 2 
o|removed binding forms: 2 
o|simplifications: ((if . 33) (##core#call . 768) (let . 59)) 
o|  call simplifications:
o|    scheme#vector
o|    scheme#list?	2
o|    scheme#caddr
o|    scheme#cddr	3
o|    scheme#string?
o|    scheme#number?
o|    scheme#cdar	3
o|    scheme#apply	4
o|    scheme#length	2
o|    scheme#list	7
o|    scheme#set-car!	3
o|    ##sys#call-with-values	6
o|    scheme#list-ref
o|    scheme#equal?
o|    ##sys#cons	23
o|    ##sys#list	27
o|    scheme#not	15
o|    scheme#set-cdr!	2
o|    scheme#caar	15
o|    scheme#eq?	30
o|    scheme#assq	33
o|    scheme#cdr	40
o|    scheme#memq	7
o|    scheme#cadr	15
o|    scheme#values	6
o|    ##sys#check-structure	28
o|    ##sys#block-ref	15
o|    ##sys#make-structure	3
o|    scheme#symbol?	18
o|    ##sys#setslot	23
o|    ##sys#check-list	32
o|    scheme#pair?	62
o|    ##sys#slot	107
o|    scheme#null?	47
o|    scheme#car	65
o|    scheme#cons	119
o|contracted procedure: k4542 
o|contracted procedure: k4568 
o|contracted procedure: k4697 
o|contracted procedure: k4709 
o|contracted procedure: k4732 
o|contracted procedure: k4740 
o|contracted procedure: k5322 
o|contracted procedure: k5344 
o|contracted procedure: k5356 
o|contracted procedure: k5359 
o|contracted procedure: k5362 
o|contracted procedure: k5370 
o|contracted procedure: k5378 
o|contracted procedure: k5331 
o|contracted procedure: k5338 
o|contracted procedure: k5393 
o|contracted procedure: k5411 
o|contracted procedure: k5420 
o|contracted procedure: k5429 
o|contracted procedure: k5438 
o|contracted procedure: k5447 
o|contracted procedure: k5456 
o|contracted procedure: k5465 
o|contracted procedure: k5474 
o|contracted procedure: k5483 
o|contracted procedure: k5492 
o|contracted procedure: k5501 
o|contracted procedure: k5510 
o|contracted procedure: k5519 
o|contracted procedure: k5528 
o|contracted procedure: k5537 
o|contracted procedure: k5546 
o|contracted procedure: k5555 
o|contracted procedure: k5564 
o|contracted procedure: k5573 
o|contracted procedure: k5582 
o|contracted procedure: k5591 
o|contracted procedure: k5600 
o|contracted procedure: k5609 
o|contracted procedure: k5618 
o|contracted procedure: k5627 
o|contracted procedure: k5636 
o|contracted procedure: k5645 
o|contracted procedure: k5654 
o|contracted procedure: k5688 
o|contracted procedure: k5682 
o|contracted procedure: k5705 
o|contracted procedure: k5701 
o|contracted procedure: k5755 
o|contracted procedure: k5771 
o|contracted procedure: k5787 
o|contracted procedure: k5809 
o|contracted procedure: k5764 
o|contracted procedure: k5768 
o|contracted procedure: k5805 
o|contracted procedure: k5790 
o|contracted procedure: k5793 
o|contracted procedure: k5801 
o|contracted procedure: k5828 
o|contracted procedure: k5836 
o|contracted procedure: k5842 
o|contracted procedure: k5852 
o|contracted procedure: k5910 
o|contracted procedure: k5865 
o|contracted procedure: k5904 
o|contracted procedure: k5868 
o|contracted procedure: k5898 
o|contracted procedure: k5871 
o|contracted procedure: k5892 
o|contracted procedure: k5874 
o|contracted procedure: k5877 
o|contracted procedure: k5919 
o|contracted procedure: k5946 
o|contracted procedure: k5978 
o|contracted procedure: k5989 
o|contracted procedure: k5998 
o|contracted procedure: k6004 
o|contracted procedure: k6034 
o|contracted procedure: k6044 
o|contracted procedure: k6048 
o|contracted procedure: k6071 
o|contracted procedure: k6074 
o|contracted procedure: k6086 
o|contracted procedure: k6108 
o|contracted procedure: k6104 
o|contracted procedure: k6089 
o|contracted procedure: k6092 
o|contracted procedure: k6100 
o|contracted procedure: k6134 
o|contracted procedure: k6144 
o|contracted procedure: k6150 
o|contracted procedure: k6171 
o|contracted procedure: k6197 
o|contracted procedure: k6186 
o|contracted procedure: k6193 
o|contracted procedure: k6215 
o|contracted procedure: k6227 
o|contracted procedure: k6253 
o|contracted procedure: k6249 
o|contracted procedure: k6261 
o|contracted procedure: k6293 
o|contracted procedure: k6296 
o|contracted procedure: k6318 
o|contracted procedure: k6314 
o|contracted procedure: k6330 
o|contracted procedure: k6362 
o|contracted procedure: k6358 
o|contracted procedure: k6377 
o|contracted procedure: k6373 
o|contracted procedure: k6392 
o|contracted procedure: k6429 
o|contracted procedure: k6542 
o|contracted procedure: k6501 
o|contracted procedure: k6536 
o|contracted procedure: k6504 
o|contracted procedure: k6530 
o|contracted procedure: k6507 
o|contracted procedure: k6524 
o|contracted procedure: k6510 
o|contracted procedure: k6521 
o|contracted procedure: k6517 
o|contracted procedure: k6777 
o|contracted procedure: k6788 
o|contracted procedure: k6914 
o|contracted procedure: k6794 
o|contracted procedure: k6797 
o|contracted procedure: k6808 
o|contracted procedure: k6817 
o|contracted procedure: k6820 
o|contracted procedure: k6835 
o|contracted procedure: k6845 
o|contracted procedure: k6849 
o|contracted procedure: k6863 
o|contracted procedure: k6870 
o|contracted procedure: k6895 
o|contracted procedure: k6901 
o|contracted procedure: k6905 
o|contracted procedure: k7026 
o|contracted procedure: k7022 
o|contracted procedure: k7018 
o|contracted procedure: k7070 
o|contracted procedure: k7074 
o|contracted procedure: k7315 
o|contracted procedure: k7359 
o|contracted procedure: k7078 
o|contracted procedure: k7082 
o|contracted procedure: k7232 
o|contracted procedure: k7237 
o|contracted procedure: k7240 
o|contracted procedure: k7246 
o|contracted procedure: k7253 
o|contracted procedure: k7270 
o|contracted procedure: k7086 
o|contracted procedure: k7098 
o|contracted procedure: k7123 
o|contracted procedure: k7094 
o|contracted procedure: k7066 
o|contracted procedure: k7062 
o|contracted procedure: k7135 
o|contracted procedure: k7157 
o|contracted procedure: k7117 
o|contracted procedure: k7107 
o|contracted procedure: k7111 
o|contracted procedure: k7153 
o|contracted procedure: k7138 
o|contracted procedure: k7141 
o|contracted procedure: k7149 
o|contracted procedure: k7167 
o|contracted procedure: k7183 
o|contracted procedure: k7228 
o|contracted procedure: k7189 
o|contracted procedure: k7197 
o|contracted procedure: k7214 
o|contracted procedure: k7204 
o|contracted procedure: k7282 
o|contracted procedure: k7285 
o|contracted procedure: k7288 
o|contracted procedure: k7296 
o|contracted procedure: k7304 
o|contracted procedure: k7371 
o|contracted procedure: k7374 
o|contracted procedure: k7377 
o|contracted procedure: k7385 
o|contracted procedure: k7393 
o|contracted procedure: k7353 
o|contracted procedure: k7323 
o|contracted procedure: k7330 
o|contracted procedure: k7341 
o|contracted procedure: k7345 
o|contracted procedure: k7412 
o|contracted procedure: k7443 
o|contracted procedure: k7429 
o|contracted procedure: k7436 
o|contracted procedure: k7471 
o|contracted procedure: k7449 
o|contracted procedure: k7464 
o|contracted procedure: k7460 
o|contracted procedure: k7456 
o|contracted procedure: k6923 
o|contracted procedure: k6934 
o|contracted procedure: k6946 
o|contracted procedure: k6968 
o|contracted procedure: k6964 
o|contracted procedure: k6949 
o|contracted procedure: k6952 
o|contracted procedure: k6960 
o|contracted procedure: k4617 
o|contracted procedure: k4620 
o|contracted procedure: k4630 
o|contracted procedure: k7483 
o|contracted procedure: k7489 
o|contracted procedure: k7823 
o|contracted procedure: k7498 
o|contracted procedure: k7817 
o|contracted procedure: k7501 
o|contracted procedure: k7811 
o|contracted procedure: k7504 
o|contracted procedure: k7805 
o|contracted procedure: k7507 
o|contracted procedure: k7542 
o|contracted procedure: k7562 
o|contracted procedure: k7580 
o|contracted procedure: k7588 
o|contracted procedure: k7594 
o|contracted procedure: k7606 
o|contracted procedure: k7614 
o|contracted procedure: k7620 
o|contracted procedure: k7634 
o|contracted procedure: k7630 
o|contracted procedure: k7638 
o|contracted procedure: k7659 
o|contracted procedure: k7669 
o|contracted procedure: k7673 
o|contracted procedure: k7682 
o|contracted procedure: k7692 
o|contracted procedure: k7696 
o|contracted procedure: k7724 
o|contracted procedure: k7699 
o|contracted procedure: k7720 
o|contracted procedure: k7737 
o|contracted procedure: k7759 
o|contracted procedure: k7551 
o|contracted procedure: k7755 
o|contracted procedure: k7740 
o|contracted procedure: k7743 
o|contracted procedure: k7751 
o|contracted procedure: k7771 
o|contracted procedure: k7513 
o|contracted procedure: k7529 
o|contracted procedure: k7519 
o|contracted procedure: k7802 
o|contracted procedure: k7783 
o|contracted procedure: k7790 
o|contracted procedure: k7937 
o|contracted procedure: k7832 
o|contracted procedure: k7849 
o|contracted procedure: k7845 
o|contracted procedure: k7853 
o|contracted procedure: k7877 
o|contracted procedure: k7885 
o|contracted procedure: k7888 
o|contracted procedure: k7897 
o|contracted procedure: k7909 
o|contracted procedure: k7912 
o|contracted procedure: k7915 
o|contracted procedure: k7923 
o|contracted procedure: k7931 
o|contracted procedure: k7952 
o|contracted procedure: k7946 
o|contracted procedure: k7977 
o|contracted procedure: k8027 
o|contracted procedure: k7980 
o|contracted procedure: k7989 
o|contracted procedure: k8016 
o|contracted procedure: k7992 
o|contracted procedure: k7998 
o|contracted procedure: k8030 
o|contracted procedure: k9049 
o|contracted procedure: k8039 
o|contracted procedure: k8094 
o|contracted procedure: k8102 
o|contracted procedure: k8088 
o|contracted procedure: k8205 
o|contracted procedure: k8105 
o|contracted procedure: k8148 
o|contracted procedure: k8201 
o|contracted procedure: k8157 
o|contracted procedure: k8180 
o|contracted procedure: k8308 
o|contracted procedure: k8240 
o|contracted procedure: k8277 
o|contracted procedure: k8289 
o|contracted procedure: k8299 
o|contracted procedure: k8303 
o|contracted procedure: k8317 
o|contracted procedure: k8327 
o|contracted procedure: k8331 
o|contracted procedure: k8337 
o|contracted procedure: k8356 
o|contracted procedure: k8366 
o|contracted procedure: k8370 
o|contracted procedure: k8383 
o|contracted procedure: k8386 
o|contracted procedure: k8434 
o|contracted procedure: k8400 
o|contracted procedure: k8409 
o|contracted procedure: k8428 
o|contracted procedure: k8439 
o|contracted procedure: k8442 
o|contracted procedure: k8454 
o|contracted procedure: k8476 
o|contracted procedure: k8472 
o|contracted procedure: k8457 
o|contracted procedure: k8460 
o|contracted procedure: k8468 
o|contracted procedure: k8579 
o|contracted procedure: k8571 
o|contracted procedure: k8575 
o|contracted procedure: k8585 
o|contracted procedure: k8597 
o|contracted procedure: k8632 
o|contracted procedure: k8655 
o|contracted procedure: k8658 
o|contracted procedure: k8680 
o|contracted procedure: k8709 
o|contracted procedure: k8719 
o|contracted procedure: k8723 
o|contracted procedure: k8740 
o|contracted procedure: k8746 
o|contracted procedure: k8754 
o|contracted procedure: k8762 
o|contracted procedure: k8626 
o|contracted procedure: k8605 
o|contracted procedure: k8608 
o|contracted procedure: k6577 
o|contracted procedure: k6589 
o|contracted procedure: k6761 
o|contracted procedure: k6595 
o|contracted procedure: k6607 
o|contracted procedure: k6616 
o|contracted procedure: k6623 
o|contracted procedure: k6753 
o|contracted procedure: k6629 
o|contracted procedure: k6642 
o|contracted procedure: k6664 
o|contracted procedure: k6668 
o|inlining procedure: k6654 
o|inlining procedure: k6654 
o|contracted procedure: k6682 
o|contracted procedure: k6728 
o|contracted procedure: k6693 
o|contracted procedure: k6710 
o|contracted procedure: k6700 
o|contracted procedure: k6724 
o|contracted procedure: k8771 
o|contracted procedure: k8783 
o|contracted procedure: k8793 
o|contracted procedure: k8797 
o|contracted procedure: k8975 
o|contracted procedure: k8801 
o|contracted procedure: k8810 
o|contracted procedure: k8813 
o|contracted procedure: k8969 
o|contracted procedure: k8816 
o|contracted procedure: k8822 
o|contracted procedure: k8833 
o|contracted procedure: k8855 
o|contracted procedure: k8845 
o|contracted procedure: k8867 
o|contracted procedure: k8930 
o|contracted procedure: k8951 
o|contracted procedure: k8962 
o|contracted procedure: k8978 
o|contracted procedure: k9001 
o|contracted procedure: k9007 
o|contracted procedure: k9038 
o|contracted procedure: k9046 
o|contracted procedure: k8502 
o|contracted procedure: k8508 
o|contracted procedure: k8530 
o|contracted procedure: k8520 
o|contracted procedure: k8542 
o|contracted procedure: k9259 
o|contracted procedure: k9278 
o|contracted procedure: k9287 
o|contracted procedure: k9306 
o|contracted procedure: k9309 
o|contracted procedure: k9337 
o|contracted procedure: k9314 
o|contracted procedure: k9326 
o|contracted procedure: k9330 
o|contracted procedure: k9340 
o|contracted procedure: k9352 
o|contracted procedure: k9355 
o|contracted procedure: k9358 
o|contracted procedure: k9366 
o|contracted procedure: k9374 
o|contracted procedure: k9398 
o|contracted procedure: k9448 
o|contracted procedure: k10216 
o|contracted procedure: k9461 
o|contracted procedure: k9467 
o|contracted procedure: k9489 
o|contracted procedure: k9507 
o|contracted procedure: k9515 
o|contracted procedure: k9529 
o|contracted procedure: k9525 
o|contracted procedure: k9538 
o|contracted procedure: k9548 
o|contracted procedure: k9552 
o|contracted procedure: k9613 
o|contracted procedure: k9555 
o|contracted procedure: k9567 
o|contracted procedure: k9571 
o|contracted procedure: k9577 
o|contracted procedure: k9589 
o|contracted procedure: k9593 
o|contracted procedure: k9605 
o|contracted procedure: k9617 
o|contracted procedure: k9639 
o|contracted procedure: k9657 
o|contracted procedure: k9669 
o|contracted procedure: k9677 
o|contracted procedure: k9691 
o|contracted procedure: k9687 
o|contracted procedure: k9700 
o|contracted procedure: k9710 
o|contracted procedure: k9714 
o|contracted procedure: k9755 
o|contracted procedure: k9717 
o|contracted procedure: k9729 
o|contracted procedure: k9737 
o|contracted procedure: k9749 
o|contracted procedure: k9796 
o|contracted procedure: k9758 
o|contracted procedure: k9770 
o|contracted procedure: k9778 
o|contracted procedure: k9790 
o|contracted procedure: k9800 
o|contracted procedure: k9822 
o|contracted procedure: k9840 
o|contracted procedure: k9852 
o|contracted procedure: k9860 
o|contracted procedure: k9863 
o|contracted procedure: k9869 
o|contracted procedure: k9883 
o|contracted procedure: k9879 
o|contracted procedure: k9892 
o|contracted procedure: k9902 
o|contracted procedure: k9906 
o|contracted procedure: k9915 
o|contracted procedure: k9937 
o|contracted procedure: k9933 
o|contracted procedure: k9918 
o|contracted procedure: k9921 
o|contracted procedure: k9929 
o|contracted procedure: k9993 
o|contracted procedure: k9943 
o|contracted procedure: k9955 
o|contracted procedure: k9971 
o|contracted procedure: k9975 
o|contracted procedure: k9967 
o|contracted procedure: k9959 
o|contracted procedure: k9987 
o|contracted procedure: k10046 
o|contracted procedure: k9996 
o|contracted procedure: k10008 
o|contracted procedure: k10024 
o|contracted procedure: k10028 
o|contracted procedure: k10020 
o|contracted procedure: k10012 
o|contracted procedure: k10040 
o|contracted procedure: k10050 
o|contracted procedure: k10072 
o|contracted procedure: k10106 
o|contracted procedure: k10113 
o|contracted procedure: k10117 
o|contracted procedure: k10120 
o|contracted procedure: k10127 
o|contracted procedure: k10130 
o|contracted procedure: k10142 
o|contracted procedure: k10145 
o|contracted procedure: k10148 
o|contracted procedure: k10156 
o|contracted procedure: k10164 
o|contracted procedure: k10176 
o|contracted procedure: k10179 
o|contracted procedure: k10182 
o|contracted procedure: k10190 
o|contracted procedure: k10198 
o|contracted procedure: k10205 
o|contracted procedure: k10242 
o|contracted procedure: k10251 
o|contracted procedure: k10254 
o|contracted procedure: k10266 
o|contracted procedure: k10276 
o|contracted procedure: k10280 
o|contracted procedure: k10303 
o|contracted procedure: k10309 
o|contracted procedure: k10333 
o|contracted procedure: k10329 
o|contracted procedure: k10319 
o|contracted procedure: k10340 
o|contracted procedure: k10348 
o|contracted procedure: k10354 
o|contracted procedure: k10378 
o|contracted procedure: k10372 
o|contracted procedure: k10360 
o|contracted procedure: k10387 
o|contracted procedure: k10441 
o|contracted procedure: k10459 
o|contracted procedure: k10466 
o|contracted procedure: k10478 
o|contracted procedure: k10500 
o|contracted procedure: k10496 
o|contracted procedure: k10481 
o|contracted procedure: k10484 
o|contracted procedure: k10492 
o|contracted procedure: k10512 
o|contracted procedure: k10534 
o|contracted procedure: k10530 
o|contracted procedure: k10515 
o|contracted procedure: k10518 
o|contracted procedure: k10526 
o|contracted procedure: k10644 
o|contracted procedure: k10559 
o|contracted procedure: k10563 
o|contracted procedure: k10570 
o|contracted procedure: k10582 
o|contracted procedure: k10604 
o|contracted procedure: k10600 
o|contracted procedure: k10585 
o|contracted procedure: k10588 
o|contracted procedure: k10596 
o|contracted procedure: k10616 
o|contracted procedure: k10638 
o|contracted procedure: k10634 
o|contracted procedure: k10619 
o|contracted procedure: k10622 
o|contracted procedure: k10630 
o|contracted procedure: k10656 
o|contracted procedure: k10666 
o|contracted procedure: k10670 
o|contracted procedure: k10679 
o|contracted procedure: k10689 
o|contracted procedure: k10693 
o|contracted procedure: k10711 
o|contracted procedure: k10726 
o|contracted procedure: k6441 
o|contracted procedure: k6463 
o|contracted procedure: k6459 
o|contracted procedure: k6474 
o|contracted procedure: k6470 
o|contracted procedure: k6484 
o|contracted procedure: k6492 
o|contracted procedure: k10788 
o|contracted procedure: k10796 
o|contracted procedure: k10805 
o|contracted procedure: k10847 
o|contracted procedure: k10853 
o|contracted procedure: k11033 
o|contracted procedure: k10862 
o|contracted procedure: k10877 
o|contracted procedure: k11029 
o|contracted procedure: k10883 
o|contracted procedure: k10889 
o|contracted procedure: k10895 
o|contracted procedure: k11025 
o|contracted procedure: k10910 
o|contracted procedure: k11021 
o|contracted procedure: k10919 
o|contracted procedure: k10936 
o|contracted procedure: k10959 
o|contracted procedure: k10965 
o|contracted procedure: k10972 
o|contracted procedure: k10986 
o|contracted procedure: k10997 
o|contracted procedure: k11015 
o|contracted procedure: k11003 
o|contracted procedure: k11049 
o|contracted procedure: k11045 
o|contracted procedure: k11069 
o|contracted procedure: k11072 
o|contracted procedure: k11084 
o|contracted procedure: k11092 
o|contracted procedure: k11095 
o|contracted procedure: k11088 
o|contracted procedure: k11107 
o|contracted procedure: k11129 
o|contracted procedure: k11125 
o|contracted procedure: k11110 
o|contracted procedure: k11113 
o|contracted procedure: k11121 
o|contracted procedure: k11158 
o|contracted procedure: k11151 
o|contracted procedure: k11147 
o|contracted procedure: k11143 
o|contracted procedure: k11167 
o|contracted procedure: k11179 
o|contracted procedure: k11182 
o|contracted procedure: k11222 
o|contracted procedure: k11188 
o|contracted procedure: k11192 
o|contracted procedure: k11205 
o|contracted procedure: k11228 
o|contracted procedure: k11234 
o|contracted procedure: k11237 
o|contracted procedure: k11241 
o|contracted procedure: k11244 
o|contracted procedure: k11257 
o|contracted procedure: k11269 
o|contracted procedure: k11287 
o|contracted procedure: k11319 
o|contracted procedure: k11292 
o|contracted procedure: k11298 
o|contracted procedure: k11305 
o|contracted procedure: k11325 
o|contracted procedure: k11334 
o|contracted procedure: k11357 
o|contracted procedure: k11370 
o|contracted procedure: k11382 
o|contracted procedure: k11385 
o|contracted procedure: k11388 
o|contracted procedure: k11396 
o|contracted procedure: k11404 
o|contracted procedure: k11416 
o|contracted procedure: k11426 
o|contracted procedure: k11430 
o|contracted procedure: k11455 
o|contracted procedure: k11463 
o|contracted procedure: k11475 
o|contracted procedure: k11478 
o|contracted procedure: k11481 
o|contracted procedure: k11489 
o|contracted procedure: k11497 
o|contracted procedure: k11596 
o|contracted procedure: k11569 
o|contracted procedure: k11578 
o|contracted procedure: k11591 
o|contracted procedure: k11611 
o|contracted procedure: k11633 
o|contracted procedure: k11661 
o|contracted procedure: k11639 
o|contracted procedure: k11649 
o|contracted procedure: k11657 
o|contracted procedure: k11683 
o|contracted procedure: k11687 
o|contracted procedure: k11705 
o|contracted procedure: k11701 
o|contracted procedure: k11697 
o|contracted procedure: k11693 
o|contracted procedure: k11722 
o|contracted procedure: k11744 
o|contracted procedure: k11740 
o|contracted procedure: k11725 
o|contracted procedure: k11728 
o|contracted procedure: k11736 
o|contracted procedure: k11792 
o|contracted procedure: k11788 
o|simplifications: ((if . 5) (let . 209)) 
o|removed binding forms: 657 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10741076 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest10741076 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest10741076 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest10741076 0 
o|contracted procedure: k6177 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest12771281 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest12771281 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest12771281 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest12771281 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15651571 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest15651571 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest15651571 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest15651571 0 
o|contracted procedure: k7702 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest16761680 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest16761680 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest17241727 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest17241727 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest17611763 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest17611763 0 
o|contracted procedure: k8861 
o|contracted procedure: k8890 
o|inlining procedure: k6488 
o|inlining procedure: k6488 
o|contracted procedure: k10942 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest31393141 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest31393141 0 
o|removed binding forms: 6 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5869 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r5869 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r5869 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r5869 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6505 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r6505 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r6505 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r6505 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7502 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r7502 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r7502 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r7502 1 
o|removed binding forms: 1 
o|removed binding forms: 6 
o|direct leaf routine/allocation: g364365 3 
o|direct leaf routine/allocation: %make-module 17 
o|direct leaf routine/allocation: module-library 0 
o|direct leaf routine/allocation: module-export-list 0 
o|direct leaf routine/allocation: module-defined-list 0 
o|direct leaf routine/allocation: module-exist-list 0 
o|direct leaf routine/allocation: module-defined-syntax-list 0 
o|direct leaf routine/allocation: module-import-forms 0 
o|direct leaf routine/allocation: module-meta-import-forms 0 
o|direct leaf routine/allocation: module-meta-expressions 0 
o|direct leaf routine/allocation: module-vexports 0 
o|direct leaf routine/allocation: module-sexports 0 
o|direct leaf routine/allocation: module-iexports 0 
o|direct leaf routine/allocation: module-saved-environments 0 
o|direct leaf routine/allocation: module-rename-list 0 
o|direct leaf routine/allocation: make-module 17 
o|direct leaf routine/allocation: g11361137 3 
o|direct leaf routine/allocation: find-dummy1197 0 
o|direct leaf routine/allocation: g12171218 3 
o|direct leaf routine/allocation: loop1738 0 
o|direct leaf routine/allocation: g20502057 3 
o|direct leaf routine/allocation: g22662267 3 
o|direct leaf routine/allocation: g31163125 0 
o|contracted procedure: "(modules.scm:123) k5668" 
o|contracted procedure: "(modules.scm:124) k5672" 
o|contracted procedure: "(modules.scm:125) k5676" 
o|contracted procedure: "(modules.scm:173) k5972" 
o|contracted procedure: "(modules.scm:175) k5981" 
o|contracted procedure: "(modules.scm:184) k6025" 
o|contracted procedure: "(modules.scm:189) k6061" 
o|contracted procedure: "(modules.scm:197) k6138" 
o|contracted procedure: "(modules.scm:211) k6203" 
o|contracted procedure: "(modules.scm:235) k6257" 
o|contracted procedure: "(modules.scm:229) k6265" 
o|contracted procedure: "(modules.scm:218) k6302" 
o|converted assignments to bindings: (find-dummy1197) 
o|contracted procedure: "(modules.scm:239) k6402" 
o|contracted procedure: "(modules.scm:254) k6366" 
o|contracted procedure: "(modules.scm:251) k6381" 
o|contracted procedure: "(modules.scm:260) k6419" 
o|contracted procedure: "(modules.scm:275) k6513" 
o|contracted procedure: "(modules.scm:340) k6999" 
o|contracted procedure: "(modules.scm:342) k7005" 
o|contracted procedure: "(modules.scm:343) k7008" 
o|contracted procedure: "(modules.scm:344) k7011" 
o|contracted procedure: "(modules.scm:361) k7400" 
o|contracted procedure: "(modules.scm:367) k7356" 
o|contracted procedure: "(modules.scm:368) k7311" 
o|contracted procedure: "(modules.scm:392) k7120" 
o|contracted procedure: "(modules.scm:382) k7174" 
o|contracted procedure: "(modules.scm:357) k7423" 
o|contracted procedure: "(modules.scm:335) k6993" 
o|contracted procedure: "(modules.scm:419) k7568" 
o|contracted procedure: "(modules.scm:445) k7838" 
o|contracted procedure: "(modules.scm:460) k7869" 
o|contracted procedure: "(modules.scm:461) k7873" 
o|contracted procedure: "(modules.scm:472) k7961" 
o|converted assignments to bindings: (loop1738) 
o|contracted procedure: "(modules.scm:554) k8545" 
o|contracted procedure: "(modules.scm:556) k8551" 
o|contracted procedure: "(modules.scm:557) k8554" 
o|contracted procedure: "(modules.scm:647) k8700" 
o|contracted procedure: "(modules.scm:280) k6551" 
o|contracted procedure: "(modules.scm:282) k6557" 
o|contracted procedure: "(modules.scm:611) k8786" 
o|contracted procedure: "(modules.scm:562) k8985" 
o|contracted procedure: "(modules.scm:547) k8493" 
o|contracted procedure: "(modules.scm:696) k9300" 
o|contracted procedure: "(modules.scm:713) k9412" 
o|contracted procedure: "(modules.scm:717) k9428" 
o|contracted procedure: "(modules.scm:716) k9432" 
o|contracted procedure: "(modules.scm:715) k9436" 
o|contracted procedure: "(modules.scm:851) k10421" 
o|contracted procedure: "(modules.scm:869) k10438" 
o|contracted procedure: "(modules.scm:856) k10455" 
o|contracted procedure: "(modules.scm:853) k10545" 
o|contracted procedure: "(modules.scm:863) k10556" 
o|contracted procedure: "(modules.scm:824) k10707" 
o|contracted procedure: "(modules.scm:827) k10722" 
o|contracted procedure: "(modules.scm:987) k11316" 
o|contracted procedure: "(modules.scm:988) k11312" 
o|contracted procedure: "(modules.scm:1146) k11493" 
o|contracted procedure: "(modules.scm:1428) k11584" 
o|contracted procedure: "(modules.scm:1452) k11676" 
o|simplifications: ((let . 2) (if . 2)) 
o|removed binding forms: 59 
o|contracted procedure: "(modules.scm:166) k5928" 
o|contracted procedure: "(modules.scm:473) k7968" 
o|removed binding forms: 2 
o|direct leaf routine with hoistable closures/allocation: g11201127 (g11361137) 3 
o|contracted procedure: "(modules.scm:178) k6037" 
o|removed binding forms: 2 
o|customizable procedures: (map-loop31703191 loop3158 map-loop31103128 g30533060 for-each-loop30523067 map-loop30743092 k11301 loop3016 merr2989 match-functor-argument loop23023 map-loop29923009 err2981 loop22952 loop2940 iface2930 err2929 g29142915 mrename2895 g29032904 g12691270 k6452 set-module-import-forms! set-module-meta-import-forms! g27112728 for-each-loop27102739 g27212744 for-each-loop27202754 map-loop28202837 map-loop28462863 map-loop27662783 map-loop27922809 k10393 g26502657 for-each-loop26492684 map-loop25812598 rename2574 map-loop26072624 tostr2227 g25412542 loopv2469 g25362537 loops2478 map-loop25022519 g24902497 for-each-loop24892526 g24362437 loopv2390 g24312432 loops2399 g24112418 for-each-loop24102421 g23572358 g23532354 loop2320 g23332340 for-each-loop23322343 warn2226 outer2281 module-imports2277 find-module/import-library export-rename2228 g22482257 map-loop22422269 loop1993 loop2007 g20402041 id-string2032 fail2031 loop2015 for-each-loop20492060 report-unresolved-identifiers1770 g13241325 g13171318 warn1299 loop21308 loop1302 k8743 map-loop20692094 g21052114 for-each-loop21042121 set-module-vexports! set-module-iexports! map-loop18151832 lp1791 g17801839 for-each-loop17791984 g18481859 for-each-loop18471923 g19581965 for-each-loop19571974 g18751876 ln->num1862 g16961705 map-loop16901711 map-loop15951613 g16281645 for-each-loop16271651 g16381656 for-each-loop16371662 merge-se k7477 filter-map loop314 map-loop13891410 k7042 k7050 k7389 map-loop14471471 g14861495 map-loop14801513 loop1520 k7090 map-loop15331554 lp1370 g13541361 for-each-loop13531364 loop1340 set-module-defined-syntax-list! k6212 find-export module-rename delete check-for-redef set-module-defined-list! set-module-meta-expressions! set-module-rename-list! map-loop11521169 set-module-export-list! for-each-loop11191139 set-module-sexports! set-module-exist-list! g11031104 set-module-saved-environments! g10651066 loop1056 map-loop10211039 k5374 map-loop776794 foldr349352 g354355 loop294) 
o|shared closure containers: 41 
o|shared closure users: 56 
o|calls to known targets: 347 
o|identified direct recursive calls: f_4704 1 
o|identified direct recursive calls: f_5782 1 
o|unused rest argument: rest10741076 f_5863 
o|identified direct recursive calls: f_6029 1 
o|identified direct recursive calls: f_6081 1 
o|identified direct recursive calls: f_6166 1 
o|unused rest argument: rest12771281 f_6499 
o|identified direct recursive calls: f_6783 1 
o|identified direct recursive calls: f_7130 1 
o|identified direct recursive calls: f_7178 1 
o|identified direct recursive calls: f_6941 1 
o|unused rest argument: rest15651571 f_7496 
o|unused rest argument: rest16761680 f_7830 
o|unused rest argument: rest17241727 f_7944 
o|identified direct recursive calls: f_7972 3 
o|unused rest argument: _1769 f_9052 
o|identified direct recursive calls: f_8378 2 
o|identified direct recursive calls: f_8449 1 
o|identified direct recursive calls: f_6584 1 
o|identified direct recursive calls: f_8778 1 
o|unused rest argument: rest17611763 f_8037 
o|identified direct recursive calls: f_9502 1 
o|identified direct recursive calls: f_9664 1 
o|identified direct recursive calls: f_9652 1 
o|identified direct recursive calls: f_9910 1 
o|identified direct recursive calls: f_9847 1 
o|identified direct recursive calls: f_9835 1 
o|identified direct recursive calls: f_10473 1 
o|identified direct recursive calls: f_10507 1 
o|identified direct recursive calls: f_10577 1 
o|identified direct recursive calls: f_10611 1 
o|identified direct recursive calls: f_10981 1 
o|identified direct recursive calls: f_10872 2 
o|identified direct recursive calls: f_11102 1 
o|identified direct recursive calls: f_11470 1 
o|unused rest argument: rest31393141 f_11567 
o|identified direct recursive calls: f_11628 1 
o|identified direct recursive calls: f_11717 1 
o|fast box initializations: 70 
o|fast global references: 135 
o|fast global assignments: 36 
o|dropping unused closure argument: f_10730 
o|dropping unused closure argument: f_11279 
o|dropping unused closure argument: f_4531 
o|dropping unused closure argument: f_4695 
o|dropping unused closure argument: f_5680 
o|dropping unused closure argument: f_6142 
o|dropping unused closure argument: f_6166 
o|dropping unused closure argument: f_6765 
o|dropping unused closure argument: f_7959 
o|dropping unused closure argument: f_8080 
o|dropping unused closure argument: f_9210 
o|dropping unused closure argument: f_9240 
o|dropping unused closure argument: f_9298 
*/
/* end of file */
