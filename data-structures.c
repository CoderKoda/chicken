/* Generated from data-structures.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: data-structures.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file data-structures.c -emit-import-library chicken.sort -emit-import-library chicken.string
   unit: data-structures
   uses: library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[83];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,8),40,108,111,111,112,32,107,41};
static C_char li1[] C_aligned={C_lihdr(0,0,23),40,114,101,118,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,32,105,41,0};
static C_char li2[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,115,116,114,105,110,103,45,97,112,112,101,110,100,32,108,41};
static C_char li3[] C_aligned={C_lihdr(0,0,39),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,114,101,118,101,114,115,101,45,108,105,115,116,45,62,115,116,114,105,110,103,32,108,41,0};
static C_char li4[] C_aligned={C_lihdr(0,0,27),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,45,62,115,116,114,105,110,103,32,120,41,0,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,16),40,109,97,112,45,108,111,111,112,56,52,32,103,57,54,41};
static C_char li6[] C_aligned={C_lihdr(0,0,28),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,99,111,110,99,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,105,115,116,97,114,116,41,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,37),40,116,114,97,118,101,114,115,101,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,32,116,101,115,116,32,108,111,99,41,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,11),40,97,49,49,51,51,32,105,32,108,41,0,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0,0,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,11),40,97,49,49,52,50,32,105,32,108,41,0,0,0,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,115,116,97,114,116,41,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,54),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,105,110,100,101,120,45,99,105,32,119,104,105,99,104,32,119,104,101,114,101,32,46,32,114,101,115,116,41,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,32,115,49,32,115,50,41,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,111,109,112,97,114,101,51,45,99,105,32,115,49,32,115,50,41,0,0,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,44),40,35,35,115,121,115,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,115,116,97,114,116,49,32,115,116,97,114,116,50,32,110,41,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,117,98,115,116,114,105,110,103,45,99,105,61,63,32,115,49,32,115,50,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,18),40,97,100,100,32,102,114,111,109,32,116,111,32,108,97,115,116,41,0,0,0,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,8),40,115,99,97,110,32,106,41};
static C_char li23[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,105,32,108,97,115,116,32,102,114,111,109,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,115,112,108,105,116,32,115,116,114,32,46,32,100,101,108,115,116,114,45,97,110,100,45,102,108,97,103,41,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,50,32,115,115,50,32,110,50,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,49,32,115,115,32,110,41,0,0,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,105,110,116,101,114,115,112,101,114,115,101,32,115,116,114,115,32,46,32,114,101,115,116,41,0};
static C_char li28[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,10),40,102,95,49,55,50,54,32,99,41,0,0,0,0,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,12),40,105,110,115,116,114,105,110,103,32,115,41,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,10),40,108,111,111,112,32,105,32,106,41,0,0,0,0,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,10),40,102,95,49,57,49,50,32,99,41,0,0,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,47),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,32,115,116,114,32,102,114,111,109,32,46,32,116,111,41,0};
static C_char li34[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,115,32,112,111,115,41,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,109,97,112,41,0,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,25),40,99,111,108,108,101,99,116,32,105,32,102,114,111,109,32,116,111,116,97,108,32,102,115,41,0,0,0,0,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,116,114,97,110,115,108,97,116,101,42,32,115,116,114,32,115,109,97,112,41,0,0,0,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,116,111,116,97,108,32,112,111,115,41};
static C_char li39[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,112,32,115,116,114,32,108,101,110,41,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,116,114,105,110,103,35,115,116,114,105,110,103,45,99,104,111,109,112,32,115,116,114,32,46,32,114,101,115,116,41};
static C_char li41[] C_aligned={C_lihdr(0,0,13),40,100,111,108,111,111,112,53,48,53,32,105,41,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,97,115,116,32,110,101,120,116,41};
static C_char li43[] C_aligned={C_lihdr(0,0,32),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,101,100,63,32,115,101,113,32,108,101,115,115,63,41};
static C_char li44[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,120,32,97,32,121,32,98,41,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,32,97,32,98,32,108,101,115,115,63,41,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,114,32,97,32,98,41,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,115,111,114,116,35,109,101,114,103,101,33,32,97,32,98,32,108,101,115,115,63,41,0};
static C_char li48[] C_aligned={C_lihdr(0,0,8),40,115,116,101,112,32,110,41};
static C_char li49[] C_aligned={C_lihdr(0,0,15),40,100,111,108,111,111,112,53,55,54,32,112,32,105,41,0};
static C_char li50[] C_aligned={C_lihdr(0,0,30),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,33,32,115,101,113,32,108,101,115,115,63,41,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,29),40,99,104,105,99,107,101,110,46,115,111,114,116,35,115,111,114,116,32,115,101,113,32,108,101,115,115,63,41,0,0,0};
static C_char li52[] C_aligned={C_lihdr(0,0,18),40,119,97,108,107,32,101,100,103,101,115,32,115,116,97,116,101,41,0,0,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,33),40,118,105,115,105,116,32,100,97,103,32,110,111,100,101,32,101,100,103,101,115,32,112,97,116,104,32,115,116,97,116,101,41,0,0,0,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,18),40,103,54,49,56,32,114,101,115,117,108,116,32,110,111,100,101,41,0,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,100,97,103,32,115,116,97,116,101,41};
static C_char li56[] C_aligned={C_lihdr(0,0,20),40,102,111,108,100,108,54,50,48,32,103,54,50,49,32,103,54,49,57,41,0,0,0,0};
static C_char li57[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,115,111,114,116,35,116,111,112,111,108,111,103,105,99,97,108,45,115,111,114,116,32,100,97,103,32,112,114,101,100,41};
static C_char li58[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word *av) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word *av) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word *av) C_noret;
C_noret_decl(f_1022)
static void C_ccall f_1022(C_word c,C_word *av) C_noret;
C_noret_decl(f_1024)
static void f_1024(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word *av) C_noret;
C_noret_decl(f_1058)
static void f_1058(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1096)
static void f_1096(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word *av) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word *av) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word *av) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word *av) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word *av) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word *av) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word *av) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word *av) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word *av) C_noret;
C_noret_decl(f_1251)
static void f_1251(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1282)
static void C_ccall f_1282(C_word c,C_word *av) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word *av) C_noret;
C_noret_decl(f_1363)
static void f_1363(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word *av) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word *av) C_noret;
C_noret_decl(f_1471)
static void f_1471(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word *av) C_noret;
C_noret_decl(f_1491)
static void f_1491(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1521)
static void f_1521(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word *av) C_noret;
C_noret_decl(f_1611)
static void f_1611(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word *av) C_noret;
C_noret_decl(f_1629)
static void f_1629(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1718)
static void C_ccall f_1718(C_word c,C_word *av) C_noret;
C_noret_decl(f_1721)
static void f_1721(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word *av) C_noret;
C_noret_decl(f_1732)
static C_word f_1732(C_word t0,C_word t1);
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word *av) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word *av) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word *av) C_noret;
C_noret_decl(f_1777)
static void f_1777(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word *av) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word *av) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word *av) C_noret;
C_noret_decl(f_1946)
static void f_1946(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word *av) C_noret;
C_noret_decl(f_1991)
static void f_1991(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2001)
static void f_2001(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word *av) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word *av) C_noret;
C_noret_decl(f_2039)
static void f_2039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2078)
static void f_2078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word *av) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word *av) C_noret;
C_noret_decl(f_2153)
static void f_2153(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word *av) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word *av) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word *av) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word *av) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word *av) C_noret;
C_noret_decl(f_2264)
static void f_2264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word *av) C_noret;
C_noret_decl(f_2312)
static void f_2312(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word *av) C_noret;
C_noret_decl(f_2342)
static void C_ccall f_2342(C_word c,C_word *av) C_noret;
C_noret_decl(f_2372)
static void f_2372(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word *av) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word *av) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word *av) C_noret;
C_noret_decl(f_2433)
static void C_ccall f_2433(C_word c,C_word *av) C_noret;
C_noret_decl(f_2436)
static void f_2436(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word *av) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word *av) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word *av) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word *av) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word *av) C_noret;
C_noret_decl(f_2560)
static void f_2560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word *av) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word *av) C_noret;
C_noret_decl(f_2611)
static void C_ccall f_2611(C_word c,C_word *av) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word *av) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word *av) C_noret;
C_noret_decl(f_2654)
static void f_2654(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word *av) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word *av) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word *av) C_noret;
C_noret_decl(f_2715)
static void f_2715(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word *av) C_noret;
C_noret_decl(f_2756)
static void C_ccall f_2756(C_word c,C_word *av) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word *av) C_noret;
C_noret_decl(f_2781)
static void C_ccall f_2781(C_word c,C_word *av) C_noret;
C_noret_decl(f_2787)
static void f_2787(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word *av) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void f_2852(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word *av) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word *av) C_noret;
C_noret_decl(f_2890)
static void f_2890(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word *av) C_noret;
C_noret_decl(f_2928)
static void f_2928(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word *av) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word *av) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word *av) C_noret;
C_noret_decl(f_890)
static void f_890(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_904)
static void C_ccall f_904(C_word c,C_word *av) C_noret;
C_noret_decl(f_913)
static C_word f_913(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word *av) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1024)
static void C_ccall trf_1024(C_word c,C_word *av) C_noret;
static void C_ccall trf_1024(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1024(t0,t1,t2);}

C_noret_decl(trf_1058)
static void C_ccall trf_1058(C_word c,C_word *av) C_noret;
static void C_ccall trf_1058(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1058(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1096)
static void C_ccall trf_1096(C_word c,C_word *av) C_noret;
static void C_ccall trf_1096(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1096(t0,t1,t2);}

C_noret_decl(trf_1251)
static void C_ccall trf_1251(C_word c,C_word *av) C_noret;
static void C_ccall trf_1251(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1251(t0,t1);}

C_noret_decl(trf_1363)
static void C_ccall trf_1363(C_word c,C_word *av) C_noret;
static void C_ccall trf_1363(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1363(t0,t1);}

C_noret_decl(trf_1471)
static void C_ccall trf_1471(C_word c,C_word *av) C_noret;
static void C_ccall trf_1471(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1471(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1491)
static void C_ccall trf_1491(C_word c,C_word *av) C_noret;
static void C_ccall trf_1491(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1491(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1521)
static void C_ccall trf_1521(C_word c,C_word *av) C_noret;
static void C_ccall trf_1521(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1521(t0,t1,t2);}

C_noret_decl(trf_1611)
static void C_ccall trf_1611(C_word c,C_word *av) C_noret;
static void C_ccall trf_1611(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1611(t0,t1,t2,t3);}

C_noret_decl(trf_1629)
static void C_ccall trf_1629(C_word c,C_word *av) C_noret;
static void C_ccall trf_1629(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1629(t0,t1,t2,t3);}

C_noret_decl(trf_1721)
static void C_ccall trf_1721(C_word c,C_word *av) C_noret;
static void C_ccall trf_1721(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1721(t0,t1);}

C_noret_decl(trf_1777)
static void C_ccall trf_1777(C_word c,C_word *av) C_noret;
static void C_ccall trf_1777(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1777(t0,t1,t2,t3);}

C_noret_decl(trf_1946)
static void C_ccall trf_1946(C_word c,C_word *av) C_noret;
static void C_ccall trf_1946(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1946(t0,t1,t2,t3);}

C_noret_decl(trf_1991)
static void C_ccall trf_1991(C_word c,C_word *av) C_noret;
static void C_ccall trf_1991(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1991(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2001)
static void C_ccall trf_2001(C_word c,C_word *av) C_noret;
static void C_ccall trf_2001(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2001(t0,t1);}

C_noret_decl(trf_2039)
static void C_ccall trf_2039(C_word c,C_word *av) C_noret;
static void C_ccall trf_2039(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2039(t0,t1,t2);}

C_noret_decl(trf_2078)
static void C_ccall trf_2078(C_word c,C_word *av) C_noret;
static void C_ccall trf_2078(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2078(t0,t1);}

C_noret_decl(trf_2153)
static void C_ccall trf_2153(C_word c,C_word *av) C_noret;
static void C_ccall trf_2153(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2153(t0,t1,t2,t3);}

C_noret_decl(trf_2264)
static void C_ccall trf_2264(C_word c,C_word *av) C_noret;
static void C_ccall trf_2264(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2264(t0,t1,t2);}

C_noret_decl(trf_2312)
static void C_ccall trf_2312(C_word c,C_word *av) C_noret;
static void C_ccall trf_2312(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2312(t0,t1,t2,t3);}

C_noret_decl(trf_2372)
static void C_ccall trf_2372(C_word c,C_word *av) C_noret;
static void C_ccall trf_2372(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_2372(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2436)
static void C_ccall trf_2436(C_word c,C_word *av) C_noret;
static void C_ccall trf_2436(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2436(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2560)
static void C_ccall trf_2560(C_word c,C_word *av) C_noret;
static void C_ccall trf_2560(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2560(t0,t1,t2);}

C_noret_decl(trf_2654)
static void C_ccall trf_2654(C_word c,C_word *av) C_noret;
static void C_ccall trf_2654(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2654(t0,t1,t2,t3);}

C_noret_decl(trf_2715)
static void C_ccall trf_2715(C_word c,C_word *av) C_noret;
static void C_ccall trf_2715(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_2715(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2787)
static void C_ccall trf_2787(C_word c,C_word *av) C_noret;
static void C_ccall trf_2787(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2787(t0,t1,t2,t3);}

C_noret_decl(trf_2852)
static void C_ccall trf_2852(C_word c,C_word *av) C_noret;
static void C_ccall trf_2852(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2852(t0,t1,t2,t3);}

C_noret_decl(trf_2890)
static void C_ccall trf_2890(C_word c,C_word *av) C_noret;
static void C_ccall trf_2890(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2890(t0,t1,t2,t3);}

C_noret_decl(trf_2928)
static void C_ccall trf_2928(C_word c,C_word *av) C_noret;
static void C_ccall trf_2928(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2928(t0,t1,t2,t3);}

C_noret_decl(trf_890)
static void C_ccall trf_890(C_word c,C_word *av) C_noret;
static void C_ccall trf_890(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_890(t0,t1,t2,t3);}

/* k1001 in chicken.string#->string in k883 */
static void C_ccall f_1003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_1003,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1006,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:77: scheme#display */
t3=*((C_word*)lf[10]+1);{
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

/* k1004 in k1001 in chicken.string#->string in k883 */
static void C_ccall f_1006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1006,c,av);}
/* data-structures.scm:78: scheme#get-output-string */
t2=C_fast_retrieve(lf[9]);{
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

/* chicken.string#conc in k883 */
static void C_ccall f_1011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +17,c,3)))){
C_save_and_reclaim((void*)f_1011,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+17);
t2=C_build_rest(&a,c,2,av);
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
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=*((C_word*)lf[6]+1);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1022,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1024,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,a[6]=((C_word)li5),tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_1024(t12,t8,t2);}

/* k1020 in chicken.string#conc in k883 */
static void C_ccall f_1022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1022,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=*((C_word*)lf[13]+1);
av2[3]=t1;
C_apply(4,av2);}}

/* map-loop84 in chicken.string#conc in k883 */
static void f_1024(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_1024,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:82: g90 */
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1047 in map-loop84 in chicken.string#conc in k883 */
static void C_ccall f_1049(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1049,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_1024(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* traverse in k883 */
static void f_1058(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,5)))){
C_save_and_reclaim_args((void *)trf_1058,6,t1,t2,t3,t4,t5,t6);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,t6);
t8=C_i_check_string_2(t3,t6);
t9=C_u_i_string_length(t3);
t10=C_u_i_string_length(t2);
t11=C_fixnum_difference(t9,t10);
t12=C_i_check_fixnum_2(t4,t6);
t13=C_fixnum_greater_or_equal_p(t4,C_fix(0));
t14=(C_truep(t13)?C_fixnum_greater_or_equal_p(t9,t4):C_SCHEME_FALSE);
if(C_truep(t14)){
t15=C_eqp(t10,C_fix(0));
if(C_truep(t15)){
t16=t1;{
C_word av2[2];
av2[0]=t16;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t11,C_fix(0)))){
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1096,a[2]=t11,a[3]=t17,a[4]=t5,a[5]=t10,a[6]=((C_word)li7),tmp=(C_word)a,a+=7,tmp));
t19=((C_word*)t17)[1];
f_1096(t19,t1,t4);}
else{
t16=t1;{
C_word av2[2];
av2[0]=t16;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}}}
else{
t15=C_fix((C_word)C_OUT_OF_BOUNDS_ERROR);
/* data-structures.scm:104: ##sys#error-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[6];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=t15;
av2[3]=t6;
av2[4]=t3;
av2[5]=t4;
tp(6,av2);}}}

/* loop in traverse in k883 */
static void f_1096(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1096,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greaterp(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1109,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:102: test */
t4=((C_word*)t0)[4];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k1107 in loop in traverse in k883 */
static void C_ccall f_1109(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1109,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
/* data-structures.scm:103: loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1096(t2,((C_word*)t0)[2],C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}

/* ##sys#substring-index in k883 */
static void C_ccall f_1128(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1128,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1134,a[2]=t2,a[3]=t3,a[4]=((C_word)li9),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:111: traverse */
f_1058(t1,t2,t3,t4,t5,lf[16]);}

/* a1133 in ##sys#substring-index in k883 */
static void C_ccall f_1134(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1134,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_substring_equal_p(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* ##sys#substring-index-ci in k883 */
static void C_ccall f_1137(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_1137,c,av);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1143,a[2]=t2,a[3]=t3,a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:118: traverse */
f_1058(t1,t2,t3,t4,t5,lf[18]);}

/* a1142 in ##sys#substring-index-ci in k883 */
static void C_ccall f_1143(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1143,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_u_i_substring_ci_equal_p(((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0),t2,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.string#substring-index in k883 */
static void C_ccall f_1146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1146,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* data-structures.scm:124: ##sys#substring-index */
t4=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* data-structures.scm:124: ##sys#substring-index */
t4=*((C_word*)lf[15]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.string#substring-index-ci in k883 */
static void C_ccall f_1161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1161,c,av);}
if(C_truep(C_rest_nullp(c,4))){
/* data-structures.scm:127: ##sys#substring-index-ci */
t4=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
/* data-structures.scm:127: ##sys#substring-index-ci */
t4=*((C_word*)lf[17]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=C_get_rest_arg(c,4,av,4,t0);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}}

/* chicken.string#string-compare3 in k883 */
static void C_ccall f_1176(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1176,c,av);}
t4=C_i_check_string_2(t2,lf[22]);
t5=C_i_check_string_2(t3,lf[22]);
t6=C_u_i_string_length(t2);
t7=C_u_i_string_length(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_utf_compare(t2,t3,C_fix(0),C_fix(0),t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* chicken.string#string-compare3-ci in k883 */
static void C_ccall f_1203(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1203,c,av);}
t4=C_i_check_string_2(t2,lf[24]);
t5=C_i_check_string_2(t3,lf[24]);
t6=C_u_i_string_length(t2);
t7=C_u_i_string_length(t3);
t8=C_fixnum_difference(t6,t7);
t9=C_fixnum_lessp(t8,C_fix(0));
t10=(C_truep(t9)?t6:t7);
t11=C_utf_compare_ci(t2,t3,C_fix(0),C_fix(0),t10);
t12=C_eqp(t11,C_fix(0));
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=(C_truep(t12)?t8:t11);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* ##sys#substring=? in k883 */
static void C_ccall f_1230(C_word c,C_word *av){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1230,c,av);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,lf[26]);
t8=C_i_check_string_2(t3,lf[26]);
t9=C_i_check_fixnum_2(t4,lf[26]);
t10=C_i_check_fixnum_2(t5,lf[26]);
t11=C_u_i_string_length(t2);
t12=C_u_i_string_length(t3);
t13=C_fixnum_difference(t11,t4);
t14=C_fixnum_difference(t12,t5);
t15=C_i_fixnum_min(t13,t14);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1251,a[2]=t11,a[3]=t4,a[4]=t12,a[5]=t5,a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t17=C_fixnum_plus(t15,C_fix(1));
t18=C_i_check_range_2(t6,C_fix(0),t17,lf[26]);
t19=t16;
f_1251(t19,t6);}
else{
t17=t16;
f_1251(t17,t15);}}

/* k1249 in ##sys#substring=? in k883 */
static void f_1251(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_1251,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_check_range_2(((C_word*)t0)[3],C_fix(0),t2,lf[26]);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_i_check_range_2(((C_word*)t0)[5],C_fix(0),t4,lf[26]);
t6=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_u_i_substring_equal_p(((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.string#substring=? in k883 */
static void C_ccall f_1282(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1282,c,av);}
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
if(C_truep(C_rest_nullp(c,6))){
/* data-structures.scm:177: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}
else{
/* data-structures.scm:177: ##sys#substring=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[25]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}}

/* ##sys#substring-ci=? in k883 */
static void C_ccall f_1342(C_word c,C_word *av){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word *a;
if(c!=7) C_bad_argc_2(c,7,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1342,c,av);}
a=C_alloc(9);
t7=C_i_check_string_2(t2,lf[29]);
t8=C_i_check_string_2(t3,lf[29]);
t9=C_i_check_fixnum_2(t4,lf[29]);
t10=C_i_check_fixnum_2(t5,lf[29]);
t11=C_u_i_string_length(t2);
t12=C_u_i_string_length(t3);
t13=C_fixnum_difference(t11,t4);
t14=C_fixnum_difference(t12,t5);
t15=C_i_fixnum_min(t13,t14);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1363,a[2]=t11,a[3]=t4,a[4]=t12,a[5]=t5,a[6]=t1,a[7]=t2,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t17=C_fixnum_plus(t15,C_fix(1));
t18=C_i_check_range_2(t6,C_fix(0),t17,lf[29]);
t19=t16;
f_1363(t19,t6);}
else{
t17=t16;
f_1363(t17,t15);}}

/* k1361 in ##sys#substring-ci=? in k883 */
static void f_1363(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_1363,2,t0,t1);}
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=C_i_check_range_2(((C_word*)t0)[3],C_fix(0),t2,lf[26]);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=C_i_check_range_2(((C_word*)t0)[5],C_fix(0),t4,lf[26]);
t6=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t6;
av2[1]=C_u_i_substring_ci_equal_p(((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[5],t1);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* chicken.string#substring-ci=? in k883 */
static void C_ccall f_1394(C_word c,C_word *av){
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
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1394,c,av);}
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_fix(0):C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_fix(0):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_rest_nullp(c,6);
t11=(C_truep(t10)?C_SCHEME_FALSE:C_get_rest_arg(c,6,av,4,t0));
if(C_truep(C_rest_nullp(c,6))){
/* data-structures.scm:196: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}
else{
/* data-structures.scm:196: ##sys#substring-ci=? */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[28]+1));
C_word av2[7];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=t5;
av2[5]=t8;
av2[6]=t11;
tp(7,av2);}}}

/* chicken.string#string-split in k883 */
static void C_ccall f_1454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +20,c,5)))){
C_save_and_reclaim((void*)f_1454,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+20);
t3=C_build_rest(&a,c,3,av);
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
t4=C_i_check_string_2(t2,lf[32]);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?lf[33]:C_get_rest_arg(c,3,av,3,t0));
t7=C_eqp(C_fix(c - 3),C_fix(2));
t8=(C_truep(t7)?C_i_cadr(t3):C_SCHEME_FALSE);
t9=C_u_i_string_length(t2);
t10=C_i_check_string_2(t6,lf[32]);
t11=C_u_i_string_length(t6);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1471,a[2]=t13,a[3]=t2,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1491,a[2]=t9,a[3]=t13,a[4]=t8,a[5]=t14,a[6]=t2,a[7]=t11,a[8]=t16,a[9]=t6,a[10]=((C_word)li23),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_1491(t18,t1,C_fix(0),C_SCHEME_FALSE,C_fix(0));}

/* add in chicken.string#string-split in k883 */
static void f_1471(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1471,5,t0,t1,t2,t3,t4);}
a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1486,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:211: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k1484 in add in chicken.string#string-split in k883 */
static void C_ccall f_1486(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1486,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* loop in chicken.string#string-split in k883 */
static void f_1491(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1491,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_greaterp(t2,t4);
t7=(C_truep(t6)?t6:((C_word*)t0)[4]);
if(C_truep(t7)){
/* data-structures.scm:218: add */
t8=((C_word*)t0)[5];
f_1471(t8,t5,t4,t2,t3);}
else{
t8=((C_word*)((C_word*)t0)[3])[1];
t9=t1;{
C_word av2[2];
av2[0]=t9;
av2[1]=(C_truep(t8)?t8:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t5=C_i_string_ref(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1521,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t2,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[9],a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t7,a[12]=((C_word)li22),tmp=(C_word)a,a+=13,tmp));
t9=((C_word*)t7)[1];
f_1521(t9,t1,C_fix(0));}}

/* k1499 in loop in chicken.string#string-split in k883 */
static void C_ccall f_1501(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1501,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?t2:C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* scan in loop in chicken.string#string-split in k883 */
static void f_1521(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_1521,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
/* data-structures.scm:223: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1491(t3,t1,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)),((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=C_i_string_ref(((C_word*)t0)[7],t2);
t4=C_eqp(((C_word*)t0)[8],t3);
if(C_truep(t4)){
t5=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t6=C_fixnum_greaterp(((C_word*)t0)[4],((C_word*)t0)[6]);
t7=(C_truep(t6)?t6:((C_word*)t0)[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1560,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:227: add */
t9=((C_word*)t0)[10];
f_1471(t9,t8,((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
/* data-structures.scm:228: loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1491(t8,t1,t5,((C_word*)t0)[5],t5);}}
else{
/* data-structures.scm:229: scan */
t10=t1;
t11=C_fixnum_plus(t2,C_fix(1));
t1=t10;
t2=t11;
goto loop;}}}

/* k1558 in scan in loop in chicken.string#string-split in k883 */
static void C_ccall f_1560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1560,c,av);}
/* data-structures.scm:227: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1491(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[4]);}

/* chicken.string#string-intersperse in k883 */
static void C_ccall f_1590(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1590,c,av);}
a=C_alloc(9);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[36]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_list_2(t2,lf[37]);
t6=C_i_check_string_2(t4,lf[37]);
t7=C_slot(t4,C_fix(0));
t8=C_block_size(t7);
t9=C_fixnum_difference(t8,C_fix(1));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1611,a[2]=t2,a[3]=t9,a[4]=t7,a[5]=t11,a[6]=((C_word)li26),tmp=(C_word)a,a+=7,tmp));
t13=((C_word*)t11)[1];
f_1611(t13,t1,t2,C_fix(0));}

/* loop1 in chicken.string#string-intersperse in k883 */
static void f_1611(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1611,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_eqp(t2,C_SCHEME_END_OF_LIST))){
if(C_truep(C_eqp(((C_word*)t0)[2],C_SCHEME_END_OF_LIST))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=lf[38];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_fixnum_difference(t3,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1624,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:244: ##sys#allocate-bytevector */
t6=*((C_word*)lf[39]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fixnum_plus(t4,C_fix(1));
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
t4=(C_truep(C_blockp(t2))?C_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_slot(t2,C_fix(0));
t6=C_i_check_string_2(t5,lf[37]);
t7=C_slot(t2,C_fix(1));
t8=C_slot(t5,C_fix(0));
t9=C_block_size(t8);
t10=C_fixnum_difference(t9,C_fix(1));
t11=C_fixnum_plus(((C_word*)t0)[3],t3);
/* data-structures.scm:264: loop1 */
t13=t1;
t14=t7;
t15=C_fixnum_plus(t10,t11);
t1=t13;
t2=t14;
t3=t15;
goto loop;}
else{
/* data-structures.scm:267: ##sys#error-not-a-proper-list */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word av2[3];
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}}}

/* k1622 in loop1 in chicken.string#string-intersperse in k883 */
static void C_ccall f_1624(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1624,c,av);}
a=C_alloc(9);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1629,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word)li25),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1629(t5,((C_word*)t0)[4],((C_word*)t0)[5],C_fix(0));}

/* loop2 in k1622 in loop1 in chicken.string#string-intersperse in k883 */
static void f_1629(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1629,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=C_slot(t4,C_fix(0));
t7=C_block_size(t6);
t8=C_fixnum_difference(t7,C_fix(1));
t9=C_copy_memory_with_offset(((C_word*)t0)[2],t6,t3,C_fix(0),t8);
t10=C_fixnum_plus(t3,t8);
if(C_truep(C_eqp(t5,C_SCHEME_END_OF_LIST))){
t11=C_utf_range_length(((C_word*)t0)[2],C_fix(0),t10);
t12=C_a_ustring(&a,2,((C_word*)t0)[2],t11);
t13=t1;{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_copy_memory_with_offset(((C_word*)t0)[2],((C_word*)t0)[3],t10,C_fix(0),((C_word*)t0)[4]);
/* data-structures.scm:260: loop2 */
t14=t1;
t15=t5;
t16=C_fixnum_plus(t10,((C_word*)t0)[4]);
t1=t14;
t2=t15;
t3=t16;
goto loop;}}

/* chicken.string#string-translate in k883 */
static void C_ccall f_1718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_1718,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+12);
t4=C_build_rest(&a,c,4,av);
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1721,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1759,a[2]=t2,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_charp(t3))){
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1912,a[2]=t3,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
f_1759(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1929,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* ##sys#list->string */
t8=C_fast_retrieve(lf[46]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t7=C_i_check_string_2(t3,lf[42]);
/* data-structures.scm:286: instring */
f_1721(t6,t3);}}}

/* instring in chicken.string#string-translate in k883 */
static void f_1721(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1721,2,t1,t2);}
a=C_alloc(5);
t3=C_i_string_length(t2);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1726,a[2]=t3,a[3]=t2,a[4]=((C_word)li29),tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_1726 in instring in chicken.string#string-translate in k883 */
static void C_ccall f_1726(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1726,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word)li28),tmp=(C_word)a,a+=6,tmp);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(
  f_1732(t3,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* loop */
static C_word f_1732(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[2]))){
return(C_SCHEME_FALSE);}
else{
t2=C_i_string_ref(((C_word*)t0)[3],t1);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
return(t1);}
else{
t5=C_fixnum_plus(t1,C_fix(1));
t1=t5;
goto loop;}}}

/* k1757 in chicken.string#string-translate in k883 */
static void C_ccall f_1759(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1759,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1762,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=t1,a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=C_slot(((C_word*)t0)[4],C_fix(0));
if(C_truep(C_charp(t3))){
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_1762(2,av2);}}
else{
if(C_truep(C_i_pairp(t3))){
/* ##sys#list->string */
t4=C_fast_retrieve(lf[46]);{
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
else{
t4=C_i_check_string_2(t3,lf[42]);
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
f_1762(2,av2);}}}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_1762(2,av2);}}}

/* k1760 in k1757 in chicken.string#string-translate in k883 */
static void C_ccall f_1762(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1762,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=C_i_stringp(((C_word*)t0)[4]);
t4=(C_truep(t3)?C_u_i_string_length(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=C_mutate(((C_word *)t0)+5,t4);
t6=C_i_check_string_2(((C_word*)t0)[3],lf[42]);
t7=C_u_i_string_length(((C_word*)t0)[3]);
t8=C_mutate(((C_word *)t0)+2,t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1772,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[2];
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k1770 in k1760 in k1757 in chicken.string#string-translate in k883 */
static void C_ccall f_1772(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_1772,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1777,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=t4,a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[5],a[8]=((C_word*)t2)[6],a[9]=((C_word)li31),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_1777(t6,((C_word*)t2)[7],C_fix(0),C_fix(0));}

/* loop in k1770 in k1760 in k1757 in chicken.string#string-translate in k883 */
static void f_1777(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_1777,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
if(C_truep(C_fixnum_lessp(t3,t2))){
/* data-structures.scm:302: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=t3;
tp(5,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t4=C_i_string_ref(((C_word*)t0)[4],t2);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1799,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:305: from */
t6=((C_word*)t0)[8];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k1797 in loop in k1770 in k1760 in k1757 in chicken.string#string-translate in k883 */
static void C_ccall f_1799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1799,c,av);}
if(C_truep(C_i_not(t1))){
t2=C_i_string_set(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
/* data-structures.scm:308: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1777(t3,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}
else{
if(C_truep(C_i_not(((C_word*)t0)[8]))){
/* data-structures.scm:309: loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1777(t2,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),((C_word*)t0)[3]);}
else{
if(C_truep(C_charp(((C_word*)t0)[8]))){
t2=C_i_string_set(((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[8]);
/* data-structures.scm:312: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1777(t3,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}
else{
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[9]))){
/* data-structures.scm:314: ##sys#error */
t2=*((C_word*)lf[43]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[6];
av2[2]=lf[42];
av2[3]=lf[44];
av2[4]=((C_word*)t0)[7];
av2[5]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}
else{
t2=C_i_string_ref(((C_word*)t0)[8],t1);
t3=C_i_string_set(((C_word*)t0)[2],((C_word*)t0)[3],t2);
/* data-structures.scm:317: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_1777(t4,((C_word*)t0)[6],C_fixnum_plus(((C_word*)t0)[7],C_fix(1)),C_fixnum_plus(((C_word*)t0)[3],C_fix(1)));}}}}}

/* f_1912 in chicken.string#string-translate in k883 */
static void C_ccall f_1912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1912,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1927 in chicken.string#string-translate in k883 */
static void C_ccall f_1929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1929,c,av);}
/* data-structures.scm:283: instring */
f_1721(((C_word*)t0)[3],t1);}

/* k1939 in k2006 in k1999 in collect in chicken.string#string-translate* in k883 */
static void C_ccall f_1941(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1941,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1946,a[2]=t1,a[3]=t3,a[4]=((C_word)li34),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1946(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* loop in k1939 in k2006 in k1999 in collect in chicken.string#string-translate* in k883 */
static void f_1946(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_1946,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=C_utf_length(((C_word*)t0)[2]);
t5=C_a_ustring(&a,2,((C_word*)t0)[2],t4);
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_block_size(t4);
t6=C_fixnum_difference(t5,C_fix(1));
t7=C_copy_memory_with_offset(((C_word*)t0)[2],t4,t3,C_fix(0),t6);
/* data-structures.scm:328: loop */
t9=t1;
t10=C_slot(t2,C_fix(1));
t11=C_fixnum_plus(t3,t6);
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* chicken.string#string-translate* in k883 */
static void C_ccall f_1981(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,6)))){
C_save_and_reclaim((void *)f_1981,c,av);}
a=C_alloc(9);
t4=C_i_check_string_2(t2,lf[48]);
t5=C_i_check_list_2(t3,lf[48]);
t6=C_u_i_string_length(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1991,a[2]=t6,a[3]=t2,a[4]=t8,a[5]=t3,a[6]=((C_word)li36),tmp=(C_word)a,a+=7,tmp));
/* data-structures.scm:362: collect */
t10=((C_word*)t8)[1];
f_1991(t10,t1,C_fix(0),C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* collect in chicken.string#string-translate* in k883 */
static void f_1991(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,4)))){
C_save_and_reclaim_args((void *)trf_1991,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(17);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2001,a[2]=t6,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2034,a[2]=t7,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:338: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t9=t8;
f_2001(t9,C_SCHEME_UNDEFINED);}}
else{
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t7,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=t9,a[10]=((C_word)li35),tmp=(C_word)a,a+=11,tmp));
t11=((C_word*)t9)[1];
f_2039(t11,t1,((C_word*)t0)[5]);}}

/* k1999 in collect in chicken.string#string-translate* in k883 */
static void f_2001(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2001,2,t0,t1);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:341: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word av2[3];
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[4])[1];
tp(3,av2);}}

/* k2006 in k1999 in collect in chicken.string#string-translate* in k883 */
static void C_ccall f_2008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2008,c,av);}
a=C_alloc(4);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1941,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:320: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t3;
av2[2]=C_fixnum_plus(t2,C_fix(1));
tp(3,av2);}}

/* k2032 in collect in chicken.string#string-translate* in k883 */
static void C_ccall f_2034(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2034,c,av);}
a=C_alloc(3);
t2=C_slot(t1,C_fix(0));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_block_size(t2);
t6=C_fixnum_difference(t5,C_fix(1));
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],t6);
t8=C_set_block_item(((C_word*)t0)[3],0,t7);
t9=((C_word*)t0)[4];
f_2001(t9,t8);}

/* loop in collect in chicken.string#string-translate* in k883 */
static void f_2039(C_word t0,C_word t1,C_word t2){
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
C_word t15;
C_word t16;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,5)))){
C_save_and_reclaim_args((void *)trf_2039,3,t0,t1,t2);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t2))){
/* data-structures.scm:344: collect */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1991(t3,t1,C_fixnum_plus(((C_word*)t0)[3],C_fix(1)),((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_i_car(t2);
t4=C_i_car(t3);
t5=C_i_string_length(t4);
t6=C_u_i_cdr(t3);
t7=C_fixnum_plus(((C_word*)t0)[3],t5);
t8=C_fixnum_less_or_equal_p(t7,((C_word*)t0)[7]);
t9=(C_truep(t8)?C_u_i_substring_equal_p(((C_word*)t0)[8],t4,((C_word*)t0)[3],C_fix(0),t5):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_fixnum_plus(((C_word*)t0)[3],t5);
t11=C_slot(t6,C_fix(0));
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2078,a[2]=t11,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t10,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],((C_word*)t0)[4]))){
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:354: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t13;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t13=t12;
f_2078(t13,C_SCHEME_UNDEFINED);}}
else{
/* data-structures.scm:361: loop */
t15=t1;
t16=C_u_i_cdr(t2);
t1=t15;
t2=t16;
goto loop;}}}

/* k2076 in loop in collect in chicken.string#string-translate* in k883 */
static void f_2078(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,5)))){
C_save_and_reclaim_args((void *)trf_2078,2,t0,t1);}
a=C_alloc(3);
t2=C_block_size(((C_word*)t0)[2]);
t3=C_fixnum_difference(t2,C_fix(1));
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],t3);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
/* data-structures.scm:357: collect */
t6=((C_word*)((C_word*)t0)[5])[1];
f_1991(t6,((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[7],t4,t5);}

/* k2121 in loop in collect in chicken.string#string-translate* in k883 */
static void C_ccall f_2123(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2123,c,av);}
a=C_alloc(3);
t2=C_slot(t1,C_fix(0));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_block_size(t2);
t6=C_fixnum_difference(t5,C_fix(1));
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],t6);
t8=C_set_block_item(((C_word*)t0)[3],0,t7);
t9=((C_word*)t0)[4];
f_2078(t9,t8);}

/* chicken.string#string-chop in k883 */
static void C_ccall f_2140(C_word c,C_word *av){
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
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2140,c,av);}
a=C_alloc(8);
t4=C_i_check_string_2(t2,lf[52]);
t5=C_i_check_fixnum_2(t3,lf[52]);
t6=C_u_i_string_length(t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2153,a[2]=t3,a[3]=t2,a[4]=t8,a[5]=((C_word)li38),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_2153(t10,t1,t6,C_fix(0));}

/* loop in chicken.string#string-chop in k883 */
static void f_2153(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_2153,4,t0,t1,t2,t3);}
a=C_alloc(7);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_fixnum_less_or_equal_p(t2,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2173,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* data-structures.scm:373: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=C_fixnum_plus(t3,t2);
tp(5,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2184,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:374: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=C_fixnum_plus(t3,((C_word*)t0)[2]);
tp(5,av2);}}}}

/* k2171 in loop in chicken.string#string-chop in k883 */
static void C_ccall f_2173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2173,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2182 in loop in chicken.string#string-chop in k883 */
static void C_ccall f_2184(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2184,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:374: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2153(t3,t2,C_fixnum_difference(((C_word*)t0)[4],((C_word*)t0)[5]),C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]));}

/* k2186 in k2182 in loop in chicken.string#string-chop in k883 */
static void C_ccall f_2188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2188,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.string#string-chomp in k883 */
static void C_ccall f_2202(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2202,c,av);}
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?lf[54]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[55]);
t6=C_i_check_string_2(t4,lf[55]);
t7=C_u_i_string_length(t2);
t8=C_u_i_string_length(t4);
t9=C_fixnum_difference(t7,t8);
if(C_truep(C_fixnum_greater_or_equal_p(t7,t8))){
if(C_truep(C_u_i_substring_equal_p(t2,t4,t9,C_fix(0),t8))){
/* data-structures.scm:387: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[5];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(0);
av2[4]=t9;
tp(5,av2);}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}
else{
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}}

/* chicken.sort#sorted? in k883 */
static void C_ccall f_2237(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_2237,c,av);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(t2))){
t4=C_block_size(t2);
if(C_truep(C_fixnum_less_or_equal_p(t4,C_fix(1)))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2264,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=t3,a[6]=((C_word)li41),tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2264(t8,t1,C_fix(1));}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2312,a[2]=t7,a[3]=t3,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2312(t9,t1,t4,t5);}}}

/* doloop505 in chicken.sort#sorted? in k883 */
static void f_2264(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_2264,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_nequalp(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2274,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=t3;
f_2274(2,av2);}}
else{
t5=C_i_vector_ref(((C_word*)t0)[4],t2);
t6=C_a_i_fixnum_difference(&a,2,t2,C_fix(1));
/* data-structures.scm:426: less? */
t7=((C_word*)t0)[5];{
C_word av2[4];
av2[0]=t7;
av2[1]=t4;
av2[2]=t5;
av2[3]=C_i_vector_ref(((C_word*)t0)[4],t6);
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}}

/* k2272 in doloop505 in chicken.sort#sorted? in k883 */
static void C_ccall f_2274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_2274,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_nequalp(((C_word*)t0)[3],((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_2264(t3,((C_word*)t0)[2],t2);}}

/* loop in chicken.sort#sorted? in k883 */
static void f_2312(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2312,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:432: less? */
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t3);
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}}

/* k2334 in loop in chicken.sort#sorted? in k883 */
static void C_ccall f_2336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2336,c,av);}
if(C_truep(C_i_not(t1))){
/* data-structures.scm:433: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2312(t2,((C_word*)t0)[3],C_u_i_car(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.sort#merge in k883 */
static void C_ccall f_2342(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,6)))){
C_save_and_reclaim((void *)f_2342,c,av);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t2))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
t6=C_u_i_cdr(t2);
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2372,a[2]=t10,a[3]=t4,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2372(t12,t1,t5,t6,t7,t8);}}}

/* loop in chicken.sort#merge in k883 */
static void f_2372(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2372,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2379,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* data-structures.scm:449: less? */
t7=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=t4;
av2[3]=t2;
((C_proc)C_fast_retrieve_proc(t7))(4,av2);}}

/* k2377 in loop in chicken.sort#merge in k883 */
static void C_ccall f_2379(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_2379,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2399,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:452: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2372(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_i_car(((C_word*)t0)[2]),C_u_i_cdr(((C_word*)t0)[2]));}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2425,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:456: loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2372(t3,t2,C_i_car(((C_word*)t0)[4]),C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[6],((C_word*)t0)[2]);}}}

/* k2397 in k2377 in loop in chicken.sort#merge in k883 */
static void C_ccall f_2399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2399,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2423 in k2377 in loop in chicken.sort#merge in k883 */
static void C_ccall f_2425(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2425,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.sort#merge! in k883 */
static void C_ccall f_2433(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_2433,c,av);}
a=C_alloc(13);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2436,a[2]=t6,a[3]=t4,a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_nullp(t2))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(t3))){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2511,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:481: less? */
t9=t4;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=C_i_car(t3);
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}}}

/* loop in chicken.sort#merge! in k883 */
static void f_2436(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_2436,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2443,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:466: less? */
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_i_car(t4);
av2[3]=C_i_car(t3);
((C_proc)C_fast_retrieve_proc(t6))(4,av2);}}

/* k2441 in loop in chicken.sort#merge! in k883 */
static void C_ccall f_2443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2443,c,av);}
if(C_truep(t1)){
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])))){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[5]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* data-structures.scm:471: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2436(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[3]));}}
else{
t2=C_i_set_cdr(((C_word*)t0)[2],((C_word*)t0)[5]);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[5])))){
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_setslot(((C_word*)t0)[5],C_fix(1),((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* data-structures.scm:477: loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2436(t3,((C_word*)t0)[4],((C_word*)t0)[5],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[3]);}}}

/* k2509 in chicken.sort#merge! in k883 */
static void C_ccall f_2511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_2511,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[3])))){
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),((C_word*)t0)[4]);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:484: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2436(t3,t2,((C_word*)t0)[3],((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[3]));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(C_u_i_cdr(((C_word*)t0)[4])))){
t3=C_i_setslot(((C_word*)t0)[4],C_fix(1),((C_word*)t0)[3]);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
/* data-structures.scm:489: loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2436(t3,t2,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[3]);}}}

/* k2512 in k2509 in chicken.sort#merge! in k883 */
static void C_ccall f_2514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2514,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2530 in k2509 in chicken.sort#merge! in k883 */
static void C_ccall f_2532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2532,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.sort#sort! in k883 */
static void C_ccall f_2557(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_2557,c,av);}
a=C_alloc(17);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2560,a[2]=t3,a[3]=t6,a[4]=t4,a[5]=((C_word)li48),tmp=(C_word)a,a+=6,tmp));
if(C_truep(C_i_vectorp(((C_word*)t4)[1]))){
t8=C_i_vector_length(((C_word*)t4)[1]);
t9=((C_word*)t4)[1];
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2645,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t6,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:528: scheme#vector->list */
t11=*((C_word*)lf[61]+1);{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t4)[1];
((C_proc)(void*)(*((C_word*)t11+1)))(3,av2);}}
else{
/* data-structures.scm:534: step */
t8=((C_word*)t6)[1];
f_2560(t8,t1,C_i_length(((C_word*)t4)[1]));}}

/* step in chicken.sort#sort! in k883 */
static void f_2560(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_2560,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_greaterp(t2,C_fix(2)))){
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2573,a[2]=t2,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:504: step */
t10=t4;
t11=t3;
t1=t10;
t2=t11;
goto loop;}
else{
if(C_truep(C_i_nequalp(t2,C_fix(2)))){
t3=C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=C_i_cadr(((C_word*)((C_word*)t0)[4])[1]);
t5=((C_word*)((C_word*)t0)[4])[1];
t6=C_i_cddr(((C_word*)((C_word*)t0)[4])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2611,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:513: less? */
t9=((C_word*)t0)[2];{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=t4;
av2[3]=t3;
((C_proc)C_fast_retrieve_proc(t9))(4,av2);}}
else{
if(C_truep(C_i_nequalp(t2,C_fix(1)))){
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=C_i_set_cdr(t3,C_SCHEME_END_OF_LIST);
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}}

/* k2571 in step in chicken.sort#sort! in k883 */
static void C_ccall f_2573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,2)))){
C_save_and_reclaim((void *)f_2573,c,av);}
a=C_alloc(34);
t2=C_s_a_i_minus(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2579,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:506: step */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2560(t4,t3,t2);}

/* k2577 in k2571 in step in chicken.sort#sort! in k883 */
static void C_ccall f_2579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2579,c,av);}
/* data-structures.scm:507: merge! */
t2=*((C_word*)lf[59]+1);{
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

/* k2609 in step in chicken.sort#sort! in k883 */
static void C_ccall f_2611(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2611,c,av);}
if(C_truep(t1)){
t2=C_i_set_car(((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_i_set_car(C_u_i_cdr(((C_word*)t0)[2]),((C_word*)t0)[4]);
t4=C_i_cdr(((C_word*)t0)[2]);
t5=C_i_set_cdr(t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2643 in chicken.sort#sort! in k883 */
static void C_ccall f_2645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2645,c,av);}
a=C_alloc(4);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:529: step */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2560(t4,t3,((C_word*)t0)[6]);}

/* k2650 in k2643 in chicken.sort#sort! in k883 */
static void C_ccall f_2652(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2652,c,av);}
a=C_alloc(7);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2654,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2654(t5,((C_word*)t0)[3],t1,C_fix(0));}

/* doloop576 in k2650 in k2643 in chicken.sort#sort! in k883 */
static void f_2654(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2654,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=C_i_vector_set(((C_word*)t0)[2],t3,t4);
t6=C_u_i_cdr(t2);
t7=C_a_i_fixnum_plus(&a,2,t3,C_fix(1));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}

/* chicken.sort#sort in k883 */
static void C_ccall f_2685(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_2685,c,av);}
a=C_alloc(7);
if(C_truep(C_i_vectorp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2703,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:545: scheme#vector->list */
t6=*((C_word*)lf[61]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2710,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:546: scheme#append */
t5=*((C_word*)lf[64]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2697 in chicken.sort#sort in k883 */
static void C_ccall f_2699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2699,c,av);}
/* data-structures.scm:545: scheme#list->vector */
t2=*((C_word*)lf[63]+1);{
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

/* k2701 in chicken.sort#sort in k883 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2703,c,av);}
/* data-structures.scm:545: sort! */
t2=*((C_word*)lf[60]+1);{
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

/* k2708 in chicken.sort#sort in k883 */
static void C_ccall f_2710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2710,c,av);}
/* data-structures.scm:546: sort! */
t2=*((C_word*)lf[60]+1);{
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

/* chicken.sort#topological-sort in k883 */
static void C_ccall f_2712(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(26,c,7)))){
C_save_and_reclaim((void *)f_2712,c,av);}
a=C_alloc(26);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2715,a[2]=t3,a[3]=t5,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2852,a[2]=t3,a[3]=t2,a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
t10=C_i_check_list_2(t2,lf[82]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2881,a[2]=t7,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2928,a[2]=t13,a[3]=t9,a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2928(t15,t11,t2,C_SCHEME_END_OF_LIST);}

/* visit in chicken.sort#topological-sort in k883 */
static void f_2715(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2715,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(10);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2719,a[2]=t3,a[3]=t1,a[4]=t5,a[5]=t6,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=t2,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
/* data-structures.scm:556: chicken.base#alist-ref */
t8=*((C_word*)lf[81]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=t3;
av2[3]=C_i_car(t6);
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k2717 in visit in chicken.sort#topological-sort in k883 */
static void C_ccall f_2719(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2719,c,av);}
a=C_alloc(12);
t2=C_eqp(t1,lf[66]);
if(C_truep(t2)){
t3=C_a_i_cons(&a,2,lf[67],lf[68]);
t4=C_a_i_cons(&a,2,lf[67],lf[69]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:563: scheme#reverse */
t6=*((C_word*)lf[78]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_eqp(t1,lf[79]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[9])){
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[9];
f_2781(2,av2);}}
else{
/* data-structures.scm:569: chicken.base#alist-ref */
t5=*((C_word*)lf[81]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)t0)[8];
av2[4]=((C_word*)t0)[6];
av2[5]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}}}}

/* k2754 in k2766 in k2717 in visit in chicken.sort#topological-sort in k883 */
static void C_ccall f_2756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(31,c,2)))){
C_save_and_reclaim((void *)f_2756,c,av);}
a=C_alloc(31);
t2=C_a_i_cons(&a,2,lf[67],lf[71]);
t3=C_a_i_list(&a,8,((C_word*)t0)[2],lf[72],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,lf[73]);
t4=C_a_i_record3(&a,3,lf[74],lf[75],t3);
/* data-structures.scm:558: chicken.condition#abort */
t5=C_fast_retrieve(lf[76]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[6];
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2766 in k2717 in visit in chicken.sort#topological-sort in k883 */
static void C_ccall f_2768(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2768,c,av);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_cons(&a,2,lf[67],lf[70]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2756,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* data-structures.scm:564: chicken.base#get-call-chain */
t6=C_fast_retrieve(lf[77]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k2779 in k2717 in visit in chicken.sort#topological-sort in k883 */
static void C_ccall f_2781(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_2781,c,av);}
a=C_alloc(20);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[66]);
t3=C_u_i_car(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t2,t3);
t5=C_u_i_cdr(((C_word*)t0)[3]);
t6=C_a_i_cons(&a,2,t4,t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li52),tmp=(C_word)a,a+=9,tmp));
t10=((C_word*)t8)[1];
f_2787(t10,((C_word*)t0)[8],t1,t6);}

/* walk in k2779 in k2717 in visit in chicken.sort#topological-sort in k883 */
static void f_2787(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,6)))){
C_save_and_reclaim_args((void *)trf_2787,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2801,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:573: chicken.base#alist-update! */
t5=C_fast_retrieve(lf[80]);{
C_word av2[6];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
av2[3]=lf[79];
av2[4]=C_i_car(t3);
av2[5]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}
else{
t4=C_i_car(t2);
t5=C_u_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2823,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
/* data-structures.scm:577: visit */
t8=((C_word*)((C_word*)t0)[6])[1];
f_2715(t8,t6,((C_word*)t0)[7],t4,C_SCHEME_FALSE,t7,t3);}}

/* k2799 in walk in k2779 in k2717 in visit in chicken.sort#topological-sort in k883 */
static void C_ccall f_2801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2801,c,av);}
a=C_alloc(6);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,t1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k2821 in walk in k2779 in k2717 in visit in chicken.sort#topological-sort in k883 */
static void C_ccall f_2823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2823,c,av);}
/* data-structures.scm:576: walk */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2787(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* g618 in chicken.sort#topological-sort in k883 */
static void f_2852(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2852,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2864,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t6=C_u_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2870,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:586: chicken.base#alist-ref */
t8=*((C_word*)lf[81]+1);{
C_word av2[5];
av2[0]=t8;
av2[1]=t7;
av2[2]=C_u_i_car(t3);
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t8+1)))(5,av2);}}

/* k2862 in g618 in chicken.sort#topological-sort in k883 */
static void C_ccall f_2864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2864,c,av);}
/* data-structures.scm:584: chicken.base#alist-update! */
t2=C_fast_retrieve(lf[80]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}

/* k2868 in g618 in chicken.sort#topological-sort in k883 */
static void C_ccall f_2870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2870,c,av);}
if(C_truep(t1)){
/* data-structures.scm:585: scheme#append */
t2=*((C_word*)lf[64]+1);{
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
else{
/* data-structures.scm:585: scheme#append */
t2=*((C_word*)lf[64]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2879 in chicken.sort#topological-sort in k883 */
static void C_ccall f_2881(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_2881,c,av);}
a=C_alloc(10);
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2890,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2890(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1],t3);}

/* loop in k2879 in chicken.sort#topological-sort in k883 */
static void f_2890(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_2890,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2911,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_caar(t2);
t7=C_u_i_car(t2);
/* data-structures.scm:596: visit */
t8=((C_word*)((C_word*)t0)[3])[1];
f_2715(t8,t5,t2,t6,C_u_i_cdr(t7),C_SCHEME_END_OF_LIST,t3);}}

/* k2909 in loop in k2879 in chicken.sort#topological-sort in k883 */
static void C_ccall f_2911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2911,c,av);}
/* data-structures.scm:595: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2890(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* foldl620 in chicken.sort#topological-sort in k883 */
static void f_2928(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2928,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2946,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* data-structures.scm:583: g618 */
t6=((C_word*)t0)[3];
f_2852(t6,t5,t3,C_slot(t2,C_fix(0)));}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k2944 in foldl620 in chicken.sort#topological-sort in k883 */
static void C_ccall f_2946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2946,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_2928(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k883 */
static void C_ccall f_885(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(91,c,7)))){
C_save_and_reclaim((void *)f_885,c,av);}
a=C_alloc(91);
t2=C_mutate((C_word*)lf[2]+1 /* (set! chicken.string#reverse-string-append ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_887,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[4]+1 /* (set! chicken.string#reverse-list->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_960,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! chicken.string#->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_966,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[12]+1 /* (set! chicken.string#conc ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1058,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t7=C_mutate((C_word*)lf[15]+1 /* (set! ##sys#substring-index ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1128,a[2]=t6,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[17]+1 /* (set! ##sys#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1137,a[2]=t6,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[19]+1 /* (set! chicken.string#substring-index ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[20]+1 /* (set! chicken.string#substring-index-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1161,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[21]+1 /* (set! chicken.string#string-compare3 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1176,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[23]+1 /* (set! chicken.string#string-compare3-ci ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[25]+1 /* (set! ##sys#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1230,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[27]+1 /* (set! chicken.string#substring=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1282,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[28]+1 /* (set! ##sys#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1342,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[30]+1 /* (set! chicken.string#substring-ci=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1394,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[31]+1 /* (set! chicken.string#string-split ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1454,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[35]+1 /* (set! chicken.string#string-intersperse ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1590,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[41]+1 /* (set! chicken.string#string-translate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1718,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[47]+1 /* (set! chicken.string#string-translate* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1981,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[51]+1 /* (set! chicken.string#string-chop ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2140,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[53]+1 /* (set! chicken.string#string-chomp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2202,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t23=C_a_i_provide(&a,1,lf[56]);
t24=C_mutate((C_word*)lf[57]+1 /* (set! chicken.sort#sorted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[58]+1 /* (set! chicken.sort#merge ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2342,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[59]+1 /* (set! chicken.sort#merge! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2433,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[60]+1 /* (set! chicken.sort#sort! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2557,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[62]+1 /* (set! chicken.sort#sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2685,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[65]+1 /* (set! chicken.sort#topological-sort ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t30=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t30;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t30+1)))(2,av2);}}

/* chicken.string#reverse-string-append in k883 */
static void C_ccall f_887(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_887,c,av);}
a=C_alloc(6);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_890,a[2]=t4,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
/* data-structures.scm:62: rev-string-append */
t6=((C_word*)t4)[1];
f_890(t6,t1,t2,C_fix(0));}

/* rev-string-append in chicken.string#reverse-string-append in k883 */
static void f_890(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_890,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_car(t2);
t5=C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_904,a[2]=t3,a[3]=t5,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* data-structures.scm:54: rev-string-append */
t8=t6;
t9=C_u_i_cdr(t2);
t10=C_fixnum_plus(t3,t5);
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
/* data-structures.scm:61: scheme#make-string */
t4=*((C_word*)lf[3]+1);{
C_word av2[3];
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k902 in rev-string-append in chicken.string#reverse-string-append in k883 */
static void C_ccall f_904(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_904,c,av);}
a=C_alloc(6);
t2=C_i_string_length(t1);
t3=C_fixnum_difference(t2,((C_word*)t0)[2]);
t4=C_fixnum_difference(t3,((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word)li0),tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=(
  f_913(t5,C_fix(0),t4)
);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* loop in k902 in rev-string-append in chicken.string#reverse-string-append in k883 */
static C_word f_913(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_fixnum_lessp(t1,((C_word*)t0)[2]))){
t3=C_i_string_ref(((C_word*)t0)[3],t1);
t4=C_i_string_set(((C_word*)t0)[4],t2,t3);
t6=C_fixnum_plus(t1,C_fix(1));
t7=C_fixnum_plus(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
return(((C_word*)t0)[4]);}}

/* chicken.string#reverse-list->string in k883 */
static void C_ccall f_960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_960,c,av);}
/* data-structures.scm:65: ##sys#reverse-list->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2=av;
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* chicken.string#->string in k883 */
static void C_ccall f_966(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_966,c,av);}
a=C_alloc(8);
if(C_truep(C_i_stringp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(t2))){
/* data-structures.scm:72: scheme#symbol->string */
t3=*((C_word*)lf[7]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_charp(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_string(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_numberp(t2))){
/* data-structures.scm:74: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2=av;
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1003,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* data-structures.scm:76: scheme#open-output-string */
t4=C_fast_retrieve(lf[11]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("data-structures"));
C_check_nursery_minimum(C_calculate_demand(19,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void*)C_data_2dstructures_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(562))){
C_save(t1);
C_rereclaim2(562*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,83);
lf[0]=C_h_intern(&lf[0],15, C_text("data-structures"));
lf[1]=C_h_intern(&lf[1],15, C_text("chicken.string#"));
lf[2]=C_h_intern(&lf[2],36, C_text("chicken.string#reverse-string-append"));
lf[3]=C_h_intern(&lf[3],18, C_text("scheme#make-string"));
lf[4]=C_h_intern(&lf[4],35, C_text("chicken.string#reverse-list->string"));
lf[5]=C_h_intern(&lf[5],26, C_text("##sys#reverse-list->string"));
lf[6]=C_h_intern(&lf[6],23, C_text("chicken.string#->string"));
lf[7]=C_h_intern(&lf[7],21, C_text("scheme#symbol->string"));
lf[8]=C_h_intern(&lf[8],20, C_text("##sys#number->string"));
lf[9]=C_h_intern(&lf[9],24, C_text("scheme#get-output-string"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_h_intern(&lf[11],25, C_text("scheme#open-output-string"));
lf[12]=C_h_intern(&lf[12],19, C_text("chicken.string#conc"));
lf[13]=C_h_intern(&lf[13],20, C_text("scheme#string-append"));
lf[14]=C_h_intern(&lf[14],16, C_text("##sys#error-hook"));
lf[15]=C_h_intern(&lf[15],21, C_text("##sys#substring-index"));
lf[16]=C_h_intern(&lf[16],15, C_text("substring-index"));
lf[17]=C_h_intern(&lf[17],24, C_text("##sys#substring-index-ci"));
lf[18]=C_h_intern(&lf[18],18, C_text("substring-index-ci"));
lf[19]=C_h_intern(&lf[19],30, C_text("chicken.string#substring-index"));
lf[20]=C_h_intern(&lf[20],33, C_text("chicken.string#substring-index-ci"));
lf[21]=C_h_intern(&lf[21],30, C_text("chicken.string#string-compare3"));
lf[22]=C_h_intern(&lf[22],15, C_text("string-compare3"));
lf[23]=C_h_intern(&lf[23],33, C_text("chicken.string#string-compare3-ci"));
lf[24]=C_h_intern(&lf[24],18, C_text("string-compare3-ci"));
lf[25]=C_h_intern(&lf[25],17, C_text("##sys#substring=?"));
lf[26]=C_h_intern(&lf[26],11, C_text("substring=?"));
lf[27]=C_h_intern(&lf[27],26, C_text("chicken.string#substring=?"));
lf[28]=C_h_intern(&lf[28],20, C_text("##sys#substring-ci=?"));
lf[29]=C_h_intern(&lf[29],14, C_text("substring-ci=?"));
lf[30]=C_h_intern(&lf[30],29, C_text("chicken.string#substring-ci=?"));
lf[31]=C_h_intern(&lf[31],27, C_text("chicken.string#string-split"));
lf[32]=C_h_intern(&lf[32],12, C_text("string-split"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\011\012\040\000"));
lf[34]=C_h_intern(&lf[34],15, C_text("##sys#substring"));
lf[35]=C_h_intern(&lf[35],33, C_text("chicken.string#string-intersperse"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[37]=C_h_intern(&lf[37],18, C_text("string-intersperse"));
lf[38]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[39]=C_h_intern(&lf[39],25, C_text("##sys#allocate-bytevector"));
lf[40]=C_h_intern(&lf[40],29, C_text("##sys#error-not-a-proper-list"));
lf[41]=C_h_intern(&lf[41],31, C_text("chicken.string#string-translate"));
lf[42]=C_h_intern(&lf[42],16, C_text("string-translate"));
lf[43]=C_h_intern(&lf[43],11, C_text("##sys#error"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\151\156\166\141\154\151\144\040\164\162\141\156\163\154\141\164\151\157\156\040\144\145\163\164\151\156\141\164\151\157\156\000"));
lf[45]=C_h_intern(&lf[45],17, C_text("##sys#make-string"));
lf[46]=C_h_intern(&lf[46],18, C_text("##sys#list->string"));
lf[47]=C_h_intern(&lf[47],32, C_text("chicken.string#string-translate*"));
lf[48]=C_h_intern(&lf[48],17, C_text("string-translate*"));
lf[49]=C_h_intern(&lf[49],21, C_text("##sys#make-bytevector"));
lf[50]=C_h_intern(&lf[50],18, C_text("##sys#fast-reverse"));
lf[51]=C_h_intern(&lf[51],26, C_text("chicken.string#string-chop"));
lf[52]=C_h_intern(&lf[52],11, C_text("string-chop"));
lf[53]=C_h_intern(&lf[53],27, C_text("chicken.string#string-chomp"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\012\000"));
lf[55]=C_h_intern(&lf[55],12, C_text("string-chomp"));
lf[56]=C_h_intern(&lf[56],13, C_text("chicken.sort#"));
lf[57]=C_h_intern(&lf[57],20, C_text("chicken.sort#sorted?"));
lf[58]=C_h_intern(&lf[58],18, C_text("chicken.sort#merge"));
lf[59]=C_h_intern(&lf[59],19, C_text("chicken.sort#merge!"));
lf[60]=C_h_intern(&lf[60],18, C_text("chicken.sort#sort!"));
lf[61]=C_h_intern(&lf[61],19, C_text("scheme#vector->list"));
lf[62]=C_h_intern(&lf[62],17, C_text("chicken.sort#sort"));
lf[63]=C_h_intern(&lf[63],19, C_text("scheme#list->vector"));
lf[64]=C_h_intern(&lf[64],13, C_text("scheme#append"));
lf[65]=C_h_intern(&lf[65],29, C_text("chicken.sort#topological-sort"));
lf[66]=C_h_intern(&lf[66],4, C_text("grey"));
lf[67]=C_h_intern(&lf[67],3, C_text("exn"));
lf[68]=C_h_intern(&lf[68],7, C_text("message"));
lf[69]=C_h_intern(&lf[69],9, C_text("arguments"));
lf[70]=C_h_intern(&lf[70],10, C_text("call-chain"));
lf[71]=C_h_intern(&lf[71],8, C_text("location"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\143\171\143\154\145\040\144\145\164\145\143\164\145\144\000"));
lf[73]=C_h_intern(&lf[73],16, C_text("topological-sort"));
lf[74]=C_h_intern(&lf[74],9, C_text("condition"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\145\170\156\376\003\000\000\002\376\001\000\000\007\001\162\165\156\164\151\155\145\376\003\000\000\002\376\001\000\000\005\001\143\171\143\154\145\376\377\016"));
lf[76]=C_h_intern(&lf[76],23, C_text("chicken.condition#abort"));
lf[77]=C_h_intern(&lf[77],27, C_text("chicken.base#get-call-chain"));
lf[78]=C_h_intern(&lf[78],14, C_text("scheme#reverse"));
lf[79]=C_h_intern(&lf[79],5, C_text("black"));
lf[80]=C_h_intern(&lf[80],26, C_text("chicken.base#alist-update!"));
lf[81]=C_h_intern(&lf[81],22, C_text("chicken.base#alist-ref"));
lf[82]=C_h_intern(&lf[82],5, C_text("foldl"));
C_register_lf2(lf,83,create_ptable());{}
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_885,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[115] = {
{C_text("f_1003:data_2dstructures_2escm"),(void*)f_1003},
{C_text("f_1006:data_2dstructures_2escm"),(void*)f_1006},
{C_text("f_1011:data_2dstructures_2escm"),(void*)f_1011},
{C_text("f_1022:data_2dstructures_2escm"),(void*)f_1022},
{C_text("f_1024:data_2dstructures_2escm"),(void*)f_1024},
{C_text("f_1049:data_2dstructures_2escm"),(void*)f_1049},
{C_text("f_1058:data_2dstructures_2escm"),(void*)f_1058},
{C_text("f_1096:data_2dstructures_2escm"),(void*)f_1096},
{C_text("f_1109:data_2dstructures_2escm"),(void*)f_1109},
{C_text("f_1128:data_2dstructures_2escm"),(void*)f_1128},
{C_text("f_1134:data_2dstructures_2escm"),(void*)f_1134},
{C_text("f_1137:data_2dstructures_2escm"),(void*)f_1137},
{C_text("f_1143:data_2dstructures_2escm"),(void*)f_1143},
{C_text("f_1146:data_2dstructures_2escm"),(void*)f_1146},
{C_text("f_1161:data_2dstructures_2escm"),(void*)f_1161},
{C_text("f_1176:data_2dstructures_2escm"),(void*)f_1176},
{C_text("f_1203:data_2dstructures_2escm"),(void*)f_1203},
{C_text("f_1230:data_2dstructures_2escm"),(void*)f_1230},
{C_text("f_1251:data_2dstructures_2escm"),(void*)f_1251},
{C_text("f_1282:data_2dstructures_2escm"),(void*)f_1282},
{C_text("f_1342:data_2dstructures_2escm"),(void*)f_1342},
{C_text("f_1363:data_2dstructures_2escm"),(void*)f_1363},
{C_text("f_1394:data_2dstructures_2escm"),(void*)f_1394},
{C_text("f_1454:data_2dstructures_2escm"),(void*)f_1454},
{C_text("f_1471:data_2dstructures_2escm"),(void*)f_1471},
{C_text("f_1486:data_2dstructures_2escm"),(void*)f_1486},
{C_text("f_1491:data_2dstructures_2escm"),(void*)f_1491},
{C_text("f_1501:data_2dstructures_2escm"),(void*)f_1501},
{C_text("f_1521:data_2dstructures_2escm"),(void*)f_1521},
{C_text("f_1560:data_2dstructures_2escm"),(void*)f_1560},
{C_text("f_1590:data_2dstructures_2escm"),(void*)f_1590},
{C_text("f_1611:data_2dstructures_2escm"),(void*)f_1611},
{C_text("f_1624:data_2dstructures_2escm"),(void*)f_1624},
{C_text("f_1629:data_2dstructures_2escm"),(void*)f_1629},
{C_text("f_1718:data_2dstructures_2escm"),(void*)f_1718},
{C_text("f_1721:data_2dstructures_2escm"),(void*)f_1721},
{C_text("f_1726:data_2dstructures_2escm"),(void*)f_1726},
{C_text("f_1732:data_2dstructures_2escm"),(void*)f_1732},
{C_text("f_1759:data_2dstructures_2escm"),(void*)f_1759},
{C_text("f_1762:data_2dstructures_2escm"),(void*)f_1762},
{C_text("f_1772:data_2dstructures_2escm"),(void*)f_1772},
{C_text("f_1777:data_2dstructures_2escm"),(void*)f_1777},
{C_text("f_1799:data_2dstructures_2escm"),(void*)f_1799},
{C_text("f_1912:data_2dstructures_2escm"),(void*)f_1912},
{C_text("f_1929:data_2dstructures_2escm"),(void*)f_1929},
{C_text("f_1941:data_2dstructures_2escm"),(void*)f_1941},
{C_text("f_1946:data_2dstructures_2escm"),(void*)f_1946},
{C_text("f_1981:data_2dstructures_2escm"),(void*)f_1981},
{C_text("f_1991:data_2dstructures_2escm"),(void*)f_1991},
{C_text("f_2001:data_2dstructures_2escm"),(void*)f_2001},
{C_text("f_2008:data_2dstructures_2escm"),(void*)f_2008},
{C_text("f_2034:data_2dstructures_2escm"),(void*)f_2034},
{C_text("f_2039:data_2dstructures_2escm"),(void*)f_2039},
{C_text("f_2078:data_2dstructures_2escm"),(void*)f_2078},
{C_text("f_2123:data_2dstructures_2escm"),(void*)f_2123},
{C_text("f_2140:data_2dstructures_2escm"),(void*)f_2140},
{C_text("f_2153:data_2dstructures_2escm"),(void*)f_2153},
{C_text("f_2173:data_2dstructures_2escm"),(void*)f_2173},
{C_text("f_2184:data_2dstructures_2escm"),(void*)f_2184},
{C_text("f_2188:data_2dstructures_2escm"),(void*)f_2188},
{C_text("f_2202:data_2dstructures_2escm"),(void*)f_2202},
{C_text("f_2237:data_2dstructures_2escm"),(void*)f_2237},
{C_text("f_2264:data_2dstructures_2escm"),(void*)f_2264},
{C_text("f_2274:data_2dstructures_2escm"),(void*)f_2274},
{C_text("f_2312:data_2dstructures_2escm"),(void*)f_2312},
{C_text("f_2336:data_2dstructures_2escm"),(void*)f_2336},
{C_text("f_2342:data_2dstructures_2escm"),(void*)f_2342},
{C_text("f_2372:data_2dstructures_2escm"),(void*)f_2372},
{C_text("f_2379:data_2dstructures_2escm"),(void*)f_2379},
{C_text("f_2399:data_2dstructures_2escm"),(void*)f_2399},
{C_text("f_2425:data_2dstructures_2escm"),(void*)f_2425},
{C_text("f_2433:data_2dstructures_2escm"),(void*)f_2433},
{C_text("f_2436:data_2dstructures_2escm"),(void*)f_2436},
{C_text("f_2443:data_2dstructures_2escm"),(void*)f_2443},
{C_text("f_2511:data_2dstructures_2escm"),(void*)f_2511},
{C_text("f_2514:data_2dstructures_2escm"),(void*)f_2514},
{C_text("f_2532:data_2dstructures_2escm"),(void*)f_2532},
{C_text("f_2557:data_2dstructures_2escm"),(void*)f_2557},
{C_text("f_2560:data_2dstructures_2escm"),(void*)f_2560},
{C_text("f_2573:data_2dstructures_2escm"),(void*)f_2573},
{C_text("f_2579:data_2dstructures_2escm"),(void*)f_2579},
{C_text("f_2611:data_2dstructures_2escm"),(void*)f_2611},
{C_text("f_2645:data_2dstructures_2escm"),(void*)f_2645},
{C_text("f_2652:data_2dstructures_2escm"),(void*)f_2652},
{C_text("f_2654:data_2dstructures_2escm"),(void*)f_2654},
{C_text("f_2685:data_2dstructures_2escm"),(void*)f_2685},
{C_text("f_2699:data_2dstructures_2escm"),(void*)f_2699},
{C_text("f_2703:data_2dstructures_2escm"),(void*)f_2703},
{C_text("f_2710:data_2dstructures_2escm"),(void*)f_2710},
{C_text("f_2712:data_2dstructures_2escm"),(void*)f_2712},
{C_text("f_2715:data_2dstructures_2escm"),(void*)f_2715},
{C_text("f_2719:data_2dstructures_2escm"),(void*)f_2719},
{C_text("f_2756:data_2dstructures_2escm"),(void*)f_2756},
{C_text("f_2768:data_2dstructures_2escm"),(void*)f_2768},
{C_text("f_2781:data_2dstructures_2escm"),(void*)f_2781},
{C_text("f_2787:data_2dstructures_2escm"),(void*)f_2787},
{C_text("f_2801:data_2dstructures_2escm"),(void*)f_2801},
{C_text("f_2823:data_2dstructures_2escm"),(void*)f_2823},
{C_text("f_2852:data_2dstructures_2escm"),(void*)f_2852},
{C_text("f_2864:data_2dstructures_2escm"),(void*)f_2864},
{C_text("f_2870:data_2dstructures_2escm"),(void*)f_2870},
{C_text("f_2881:data_2dstructures_2escm"),(void*)f_2881},
{C_text("f_2890:data_2dstructures_2escm"),(void*)f_2890},
{C_text("f_2911:data_2dstructures_2escm"),(void*)f_2911},
{C_text("f_2928:data_2dstructures_2escm"),(void*)f_2928},
{C_text("f_2946:data_2dstructures_2escm"),(void*)f_2946},
{C_text("f_885:data_2dstructures_2escm"),(void*)f_885},
{C_text("f_887:data_2dstructures_2escm"),(void*)f_887},
{C_text("f_890:data_2dstructures_2escm"),(void*)f_890},
{C_text("f_904:data_2dstructures_2escm"),(void*)f_904},
{C_text("f_913:data_2dstructures_2escm"),(void*)f_913},
{C_text("f_960:data_2dstructures_2escm"),(void*)f_960},
{C_text("f_966:data_2dstructures_2escm"),(void*)f_966},
{C_text("toplevel:data_2dstructures_2escm"),(void*)C_data_2dstructures_toplevel},
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
o|hiding unexported module binding: chicken.string#fragments->string 
S|applied compiler syntax:
S|  chicken.base#foldl		1
S|  scheme#map		1
o|eliminated procedure checks: 27 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#cdar (pair pair *))
o|  2 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#+ fixnum fixnum)
o|  4 (scheme#set-cdr! pair *)
o|  1 (scheme#- fixnum fixnum)
o|  1 (scheme#<= fixnum fixnum)
o|  1 (scheme#vector-length vector)
o|  1 (scheme#make-string fixnum)
o|  1 (scheme#length list)
o|  18 (scheme#string-length string)
o|  1 (##sys#check-list (or pair list) *)
o|  23 (scheme#cdr pair)
o|  4 (scheme#car pair)
(o e)|safe calls: 352 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.sort#topological-sort chicken.sort#sort chicken.sort#sort! chicken.sort#merge! chicken.sort#merge chicken.sort#sorted? chicken.string#string-chomp chicken.string#string-chop chicken.string#string-translate* chicken.string#fragments->string chicken.string#string-translate chicken.string#string-intersperse chicken.string#string-split chicken.string#substring-ci=? ##sys#substring-ci=? chicken.string#substring=? ##sys#substring=? chicken.string#string-compare3-ci chicken.string#string-compare3 chicken.string#substring-index-ci chicken.string#substring-index ##sys#substring-index-ci ##sys#substring-index chicken.string#conc chicken.string#->string chicken.string#reverse-list->string chicken.string#reverse-string-append) 
o|inlining procedure: k892 
o|inlining procedure: k915 
o|inlining procedure: k915 
o|inlining procedure: k892 
o|inlining procedure: k968 
o|inlining procedure: k968 
o|inlining procedure: k983 
o|inlining procedure: k983 
o|inlining procedure: k1026 
o|inlining procedure: k1026 
o|inlining procedure: k1074 
o|inlining procedure: k1086 
o|inlining procedure: k1098 
o|inlining procedure: k1098 
o|inlining procedure: k1086 
o|inlining procedure: k1074 
o|inlining procedure: k1193 
o|inlining procedure: k1193 
o|inlining procedure: k1220 
o|inlining procedure: k1220 
o|inlining procedure: k1476 
o|inlining procedure: k1476 
o|inlining procedure: k1493 
o|inlining procedure: k1493 
o|inlining procedure: k1523 
o|inlining procedure: k1523 
o|inlining procedure: k1545 
o|inlining procedure: k1545 
o|inlining procedure: k1613 
o|inlining procedure: k1646 
o|inlining procedure: k1646 
o|inlining procedure: k1613 
o|inlining procedure: k1734 
o|inlining procedure: k1734 
o|inlining procedure: k1779 
o|inlining procedure: k1779 
o|inlining procedure: k1820 
o|inlining procedure: k1820 
o|inlining procedure: k1853 
o|inlining procedure: k1853 
o|inlining procedure: k1891 
o|inlining procedure: k1891 
o|inlining procedure: k1917 
o|inlining procedure: k1917 
o|inlining procedure: k1993 
o|contracted procedure: "(data-structures.scm:341) chicken.string#fragments->string" 
o|inlining procedure: k1948 
o|inlining procedure: k1948 
o|inlining procedure: k1993 
o|inlining procedure: k2041 
o|inlining procedure: k2041 
o|inlining procedure: k2155 
o|inlining procedure: k2155 
o|inlining procedure: k2218 
o|inlining procedure: k2218 
o|inlining procedure: k2239 
o|inlining procedure: k2239 
o|inlining procedure: k2254 
o|inlining procedure: k2254 
o|inlining procedure: k2266 
o|inlining procedure: k2266 
o|substituted constant variable: a2298 
o|substituted constant variable: a2300 
o|inlining procedure: k2317 
o|inlining procedure: k2317 
o|inlining procedure: k2344 
o|inlining procedure: k2344 
o|inlining procedure: k2374 
o|inlining procedure: k2374 
o|inlining procedure: k2438 
o|inlining procedure: k2438 
o|inlining procedure: k2494 
o|inlining procedure: k2494 
o|inlining procedure: k2506 
o|inlining procedure: k2506 
o|inlining procedure: k2562 
o|inlining procedure: k2562 
o|inlining procedure: k2620 
o|inlining procedure: k2620 
o|inlining procedure: k2633 
o|inlining procedure: k2656 
o|inlining procedure: k2656 
o|substituted constant variable: a2672 
o|inlining procedure: k2633 
o|inlining procedure: k2687 
o|inlining procedure: k2687 
o|inlining procedure: k2720 
o|inlining procedure: k2720 
o|inlining procedure: k2789 
o|inlining procedure: k2789 
o|substituted constant variable: a2844 
o|substituted constant variable: a2846 
o|inlining procedure: k2871 
o|inlining procedure: k2871 
o|inlining procedure: k2892 
o|inlining procedure: k2892 
o|inlining procedure: k2930 
o|inlining procedure: k2930 
o|substituted constant variable: g619622 
o|replaced variables: 560 
o|removed binding forms: 129 
o|substituted constant variable: r10992963 
o|substituted constant variable: r10872965 
o|converted assignments to bindings: (add268) 
o|substituted constant variable: r17352985 
o|converted assignments to bindings: (instring349) 
o|substituted constant variable: r21563003 
o|substituted constant variable: r22403007 
o|substituted constant variable: r22553009 
o|substituted constant variable: r26213028 
o|substituted constant variable: r28723041 
o|substituted constant variable: r28723041 
o|converted assignments to bindings: (traverse108) 
o|simplifications: ((let . 3)) 
o|replaced variables: 20 
o|removed binding forms: 467 
o|inlining procedure: k1148 
o|inlining procedure: k1163 
o|inlining procedure: k1299 
o|inlining procedure: k1411 
o|inlining procedure: k1499 
o|removed binding forms: 30 
o|substituted constant variable: r11493144 
o|substituted constant variable: r11643145 
o|inlining procedure: k2221 
o|inlining procedure: k2221 
o|removed binding forms: 3 
o|substituted constant variable: r22223217 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((let . 17) (if . 26) (##core#call . 323)) 
o|  call simplifications:
o|    scheme#caar
o|    ##sys#cons	4
o|    ##sys#list
o|    ##sys#make-structure
o|    scheme#length
o|    scheme#vector-length
o|    scheme#vector-set!
o|    scheme#>
o|    scheme#cddr
o|    scheme#set-car!	2
o|    scheme#quotient
o|    scheme#-
o|    scheme#set-cdr!	4
o|    scheme#vector?	3
o|    scheme#vector-ref	2
o|    scheme#+
o|    scheme#=	4
o|    scheme#list	4
o|    chicken.fixnum#fx<=	4
o|    scheme#list->string	2
o|    scheme#not	3
o|    ##sys#check-list	3
o|    ##sys#size	8
o|    scheme#cadr	2
o|    scheme#eq?	5
o|    scheme#cdr	10
o|    chicken.fixnum#fxmin	2
o|    ##sys#check-range	6
o|    scheme#null?	34
o|    scheme#car	29
o|    ##sys#check-string	21
o|    ##sys#check-fixnum	6
o|    chicken.fixnum#fx=	4
o|    chicken.fixnum#fx>=	10
o|    chicken.fixnum#fx>	5
o|    scheme#cons	21
o|    ##sys#setslot	6
o|    ##sys#slot	18
o|    scheme#apply
o|    scheme#string?	2
o|    scheme#symbol?
o|    scheme#char?	4
o|    scheme#number?
o|    scheme#string
o|    scheme#pair?	6
o|    scheme#string-length	4
o|    chicken.fixnum#fx-	19
o|    chicken.fixnum#fx<	4
o|    scheme#string-ref	6
o|    scheme#string-set!	4
o|    chicken.fixnum#fx+	37
o|contracted procedure: k895 
o|contracted procedure: k899 
o|contracted procedure: k944 
o|contracted procedure: k940 
o|contracted procedure: k909 
o|contracted procedure: k918 
o|contracted procedure: k936 
o|contracted procedure: k921 
o|contracted procedure: k928 
o|contracted procedure: k932 
o|contracted procedure: k950 
o|contracted procedure: k971 
o|contracted procedure: k977 
o|contracted procedure: k986 
o|contracted procedure: k995 
o|contracted procedure: k1017 
o|contracted procedure: k1029 
o|contracted procedure: k1032 
o|contracted procedure: k1035 
o|contracted procedure: k1043 
o|contracted procedure: k1051 
o|contracted procedure: k1060 
o|contracted procedure: k1063 
o|contracted procedure: k1068 
o|contracted procedure: k1071 
o|contracted procedure: k1121 
o|contracted procedure: k1077 
o|contracted procedure: k1083 
o|contracted procedure: k1089 
o|contracted procedure: k1101 
o|contracted procedure: k1114 
o|contracted procedure: k1154 
o|contracted procedure: k1148 
o|contracted procedure: k1169 
o|contracted procedure: k1163 
o|contracted procedure: k1178 
o|contracted procedure: k1181 
o|contracted procedure: k1186 
o|contracted procedure: k1199 
o|contracted procedure: k1190 
o|contracted procedure: k1196 
o|contracted procedure: k1205 
o|contracted procedure: k1208 
o|contracted procedure: k1213 
o|contracted procedure: k1226 
o|contracted procedure: k1217 
o|contracted procedure: k1223 
o|contracted procedure: k1232 
o|contracted procedure: k1235 
o|contracted procedure: k1238 
o|contracted procedure: k1241 
o|contracted procedure: k1274 
o|contracted procedure: k1278 
o|contracted procedure: k1246 
o|contracted procedure: k1263 
o|contracted procedure: k1252 
o|contracted procedure: k1259 
o|contracted procedure: k1255 
o|contracted procedure: k1270 
o|contracted procedure: k1266 
o|contracted procedure: k1335 
o|contracted procedure: k1284 
o|contracted procedure: k1329 
o|contracted procedure: k1287 
o|contracted procedure: k1323 
o|contracted procedure: k1290 
o|contracted procedure: k1317 
o|contracted procedure: k1293 
o|contracted procedure: k1311 
o|contracted procedure: k1296 
o|contracted procedure: k1305 
o|contracted procedure: k1299 
o|contracted procedure: k1344 
o|contracted procedure: k1347 
o|contracted procedure: k1350 
o|contracted procedure: k1353 
o|contracted procedure: k1386 
o|contracted procedure: k1390 
o|contracted procedure: k1358 
o|contracted procedure: k1375 
o|contracted procedure: k1364 
o|contracted procedure: k1371 
o|contracted procedure: k1367 
o|contracted procedure: k1382 
o|contracted procedure: k1378 
o|contracted procedure: k1447 
o|contracted procedure: k1396 
o|contracted procedure: k1441 
o|contracted procedure: k1399 
o|contracted procedure: k1435 
o|contracted procedure: k1402 
o|contracted procedure: k1429 
o|contracted procedure: k1405 
o|contracted procedure: k1423 
o|contracted procedure: k1408 
o|contracted procedure: k1417 
o|contracted procedure: k1411 
o|contracted procedure: k1456 
o|contracted procedure: k1583 
o|contracted procedure: k1459 
o|contracted procedure: k1575 
o|contracted procedure: k1462 
o|contracted procedure: k1466 
o|contracted procedure: k1473 
o|contracted procedure: k1476 
o|contracted procedure: k1496 
o|contracted procedure: k1505 
o|contracted procedure: k1508 
o|contracted procedure: k1514 
o|contracted procedure: k1526 
o|contracted procedure: k1533 
o|contracted procedure: k1572 
o|contracted procedure: k1539 
o|contracted procedure: k1542 
o|contracted procedure: k1548 
o|contracted procedure: k1551 
o|contracted procedure: k1568 
o|contracted procedure: k1711 
o|contracted procedure: k1592 
o|contracted procedure: k1595 
o|contracted procedure: k1598 
o|contracted procedure: k1601 
o|contracted procedure: k1708 
o|contracted procedure: k1604 
o|contracted procedure: k1619 
o|contracted procedure: k1631 
o|contracted procedure: k1634 
o|contracted procedure: k1637 
o|contracted procedure: k1658 
o|contracted procedure: k1640 
o|contracted procedure: k1643 
o|contracted procedure: k1654 
o|contracted procedure: k1662 
o|contracted procedure: k1668 
o|contracted procedure: k1671 
o|contracted procedure: k1674 
o|contracted procedure: k1681 
o|contracted procedure: k1701 
o|contracted procedure: k1697 
o|contracted procedure: k1689 
o|contracted procedure: k1693 
o|contracted procedure: k1685 
o|contracted procedure: k1723 
o|contracted procedure: k1737 
o|contracted procedure: k1754 
o|contracted procedure: k1743 
o|contracted procedure: k1750 
o|contracted procedure: k1881 
o|contracted procedure: k1763 
o|contracted procedure: k1766 
o|contracted procedure: k1782 
o|contracted procedure: k1788 
o|contracted procedure: k1794 
o|contracted procedure: k1803 
o|contracted procedure: k1806 
o|contracted procedure: k1813 
o|contracted procedure: k1817 
o|contracted procedure: k1823 
o|contracted procedure: k1830 
o|contracted procedure: k1836 
o|contracted procedure: k1839 
o|contracted procedure: k1846 
o|contracted procedure: k1850 
o|contracted procedure: k1856 
o|contracted procedure: k1877 
o|contracted procedure: k1862 
o|contracted procedure: k1869 
o|contracted procedure: k1873 
o|contracted procedure: k1885 
o|contracted procedure: k1888 
o|contracted procedure: k1894 
o|contracted procedure: k1900 
o|contracted procedure: k1906 
o|contracted procedure: k1909 
o|contracted procedure: k1920 
o|contracted procedure: k1930 
o|contracted procedure: k1983 
o|contracted procedure: k1986 
o|contracted procedure: k1996 
o|contracted procedure: k1951 
o|contracted procedure: k1955 
o|contracted procedure: k1973 
o|contracted procedure: k1958 
o|contracted procedure: k1965 
o|contracted procedure: k1969 
o|contracted procedure: k1977 
o|contracted procedure: k2009 
o|contracted procedure: k2012 
o|contracted procedure: k2016 
o|contracted procedure: k2028 
o|contracted procedure: k2024 
o|contracted procedure: k2020 
o|contracted procedure: k2044 
o|contracted procedure: k2051 
o|contracted procedure: k2054 
o|contracted procedure: k2057 
o|contracted procedure: k2060 
o|contracted procedure: k2133 
o|contracted procedure: k2129 
o|contracted procedure: k2067 
o|contracted procedure: k2070 
o|contracted procedure: k2073 
o|contracted procedure: k2095 
o|contracted procedure: k2091 
o|contracted procedure: k2083 
o|contracted procedure: k2087 
o|contracted procedure: k2098 
o|contracted procedure: k2101 
o|contracted procedure: k2105 
o|contracted procedure: k2117 
o|contracted procedure: k2113 
o|contracted procedure: k2109 
o|contracted procedure: k2142 
o|contracted procedure: k2145 
o|contracted procedure: k2158 
o|contracted procedure: k2164 
o|contracted procedure: k2175 
o|contracted procedure: k2190 
o|contracted procedure: k2194 
o|contracted procedure: k2198 
o|contracted procedure: k2230 
o|contracted procedure: k2204 
o|contracted procedure: k2207 
o|contracted procedure: k2210 
o|contracted procedure: k2215 
o|contracted procedure: k2227 
o|contracted procedure: k2242 
o|contracted procedure: k2248 
o|contracted procedure: k2251 
o|contracted procedure: k2257 
o|contracted procedure: k2269 
o|contracted procedure: k2282 
o|contracted procedure: k2289 
o|contracted procedure: k2293 
o|contracted procedure: k2306 
o|contracted procedure: k2314 
o|contracted procedure: k2323 
o|contracted procedure: k2338 
o|contracted procedure: k2347 
o|contracted procedure: k2353 
o|contracted procedure: k2360 
o|contracted procedure: k2366 
o|contracted procedure: k2383 
o|contracted procedure: k2390 
o|contracted procedure: k2401 
o|contracted procedure: k2409 
o|contracted procedure: k2416 
o|contracted procedure: k2427 
o|contracted procedure: k2444 
o|contracted procedure: k2450 
o|contracted procedure: k2465 
o|contracted procedure: k2471 
o|contracted procedure: k2487 
o|contracted procedure: k2491 
o|contracted procedure: k2497 
o|contracted procedure: k2503 
o|contracted procedure: k2515 
o|inlining procedure: k2512 
o|contracted procedure: k2533 
o|inlining procedure: k2530 
o|contracted procedure: k2549 
o|contracted procedure: k2553 
o|contracted procedure: k2565 
o|contracted procedure: k2568 
o|contracted procedure: k2574 
o|contracted procedure: k2586 
o|contracted procedure: k2589 
o|contracted procedure: k2592 
o|contracted procedure: k2596 
o|contracted procedure: k2606 
o|contracted procedure: k2602 
o|contracted procedure: k2612 
o|contracted procedure: k2623 
o|contracted procedure: k2627 
o|contracted procedure: k2630 
o|contracted procedure: k2636 
o|contracted procedure: k2639 
o|contracted procedure: k2659 
o|contracted procedure: k2674 
o|contracted procedure: k2662 
o|contracted procedure: k2681 
o|contracted procedure: k2690 
o|contracted procedure: k2723 
o|contracted procedure: k2738 
o|contracted procedure: k2742 
o|contracted procedure: k2762 
o|contracted procedure: k2746 
o|contracted procedure: k2750 
o|contracted procedure: k2758 
o|contracted procedure: k2734 
o|contracted procedure: k2730 
o|contracted procedure: k2772 
o|contracted procedure: k2835 
o|contracted procedure: k2829 
o|contracted procedure: k2783 
o|contracted procedure: k2792 
o|contracted procedure: k2803 
o|contracted procedure: k2809 
o|contracted procedure: k2812 
o|contracted procedure: k2825 
o|contracted procedure: k2848 
o|contracted procedure: k2858 
o|contracted procedure: k2876 
o|contracted procedure: k2920 
o|contracted procedure: k2924 
o|contracted procedure: k2886 
o|contracted procedure: k2895 
o|contracted procedure: k2905 
o|contracted procedure: k2913 
o|contracted procedure: k2933 
o|contracted procedure: k2940 
o|contracted procedure: k2948 
o|simplifications: ((let . 100)) 
o|removed binding forms: 310 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest146149 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest146149 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest159162 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest159162 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest207210 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest244247 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? delstr-and-flag262 0 
(o x)|known list op on rest arg sublist: ##core#rest-car delstr-and-flag262 0 
(o x)|known list op on rest arg sublist: ##core#rest-length delstr-and-flag262 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest309311 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest309311 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest451453 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest451453 0 
o|inlining procedure: k2599 
o|inlining procedure: k2599 
o|substituted constant variable: r2921 
o|substituted constant variable: r2925 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1288 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1288 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1288 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1288 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1400 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r1400 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1400 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1400 1 
o|removed binding forms: 4 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1294 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1294 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1294 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1294 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1406 2 
(o x)|known list op on rest arg sublist: ##core#rest-car r1406 2 
(o x)|known list op on rest arg sublist: ##core#rest-null? r1406 2 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r1406 2 
o|removed binding forms: 2 
o|removed binding forms: 4 
o|direct leaf routine/allocation: loop64 0 
o|direct leaf routine/allocation: loop353 0 
o|converted assignments to bindings: (loop64) 
o|converted assignments to bindings: (loop353) 
o|simplifications: ((let . 2)) 
o|customizable procedures: (g618623 foldl620630 loop635 visit590 walk606 doloop576577 step554 loop542 loop528 loop512 doloop505506 loop437 loop417 k2076 collect409 k1999 loop398 instring349 loop379 loop1319 loop2328 scan290 loop274 add268 k1361 k1249 traverse108 loop119 map-loop84101 rev-string-append58) 
o|shared closure containers: 1 
o|shared closure users: 1 
o|calls to known targets: 76 
o|identified direct recursive calls: f_913 1 
o|identified direct recursive calls: f_890 1 
o|unused rest argument: rest146149 f_1146 
o|unused rest argument: rest159162 f_1161 
o|unused rest argument: rest207210 f_1282 
o|unused rest argument: rest244247 f_1394 
o|identified direct recursive calls: f_1521 1 
o|identified direct recursive calls: f_1629 1 
o|identified direct recursive calls: f_1611 1 
o|unused rest argument: rest309311 f_1590 
o|identified direct recursive calls: f_1732 1 
o|identified direct recursive calls: f_1946 1 
o|identified direct recursive calls: f_2039 1 
o|unused rest argument: rest451453 f_2202 
o|identified direct recursive calls: f_2560 1 
o|identified direct recursive calls: f_2654 1 
o|fast box initializations: 22 
o|dropping unused closure argument: f_1058 
o|dropping unused closure argument: f_1721 
*/
/* end of file */
