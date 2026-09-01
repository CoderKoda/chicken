/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file extras.c -emit-import-library chicken.format -emit-import-library chicken.pretty-print -emit-import-library chicken.random -emit-import-library chicken.version
   unit: extras
   uses: data-structures library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[132];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,15),40,114,101,97,100,45,109,97,99,114,111,63,32,108,41,0};
static C_char li1[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,13),40,111,117,116,32,115,116,114,32,99,111,108,41,0,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,18),40,119,114,45,101,120,112,114,32,101,120,112,114,32,99,111,108,41,0,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,14),40,119,114,45,108,115,116,32,108,32,99,111,108,41,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,8),40,103,50,48,55,32,97,41};
static C_char li7[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,105,32,106,32,99,111,108,41,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,9),40,103,50,49,57,32,99,110,41,0,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,12),40,119,114,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,14),40,115,112,97,99,101,115,32,110,32,99,111,108,41,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,15),40,105,110,100,101,110,116,32,116,111,32,99,111,108,41,0};
static C_char li12[] C_aligned={C_lihdr(0,0,11),40,97,49,54,54,48,32,115,116,114,41,0,0,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,26),40,112,114,32,111,98,106,32,99,111,108,32,101,120,116,114,97,32,112,112,45,112,97,105,114,41,0,0,0,0,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,24),40,112,112,45,101,120,112,114,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char li15[] C_aligned={C_lihdr(0,0,32),40,112,112,45,99,97,108,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41};
static C_char li16[] C_aligned={C_lihdr(0,0,29),40,112,112,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,32,99,111,108,41,0,0,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,35),40,112,112,45,100,111,119,110,32,108,32,99,111,108,49,32,99,111,108,50,32,101,120,116,114,97,32,112,112,45,105,116,101,109,41,0,0,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,49,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,27),40,116,97,105,108,50,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,32,99,111,108,51,41,0,0,0,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,22),40,116,97,105,108,51,32,114,101,115,116,32,99,111,108,49,32,99,111,108,50,41,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,49),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,32,110,97,109,101,100,63,32,112,112,45,49,32,112,112,45,50,32,112,112,45,51,41,0,0,0,0,0,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,26),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,26),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,22),40,112,112,45,105,102,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,111,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char li27[] C_aligned={C_lihdr(0,0,24),40,112,112,45,99,97,115,101,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41};
static C_char li28[] C_aligned={C_lihdr(0,0,23),40,112,112,45,97,110,100,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char li29[] C_aligned={C_lihdr(0,0,23),40,112,112,45,108,101,116,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0};
static C_char li30[] C_aligned={C_lihdr(0,0,25),40,112,112,45,98,101,103,105,110,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,22),40,112,112,45,100,111,32,101,120,112,114,32,99,111,108,32,101,120,116,114,97,41,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,12),40,115,116,121,108,101,32,104,101,97,100,41,0,0,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,12),40,112,112,32,111,98,106,32,99,111,108,41,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,62),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,32,100,105,115,112,108,97,121,63,32,119,105,100,116,104,32,111,117,116,112,117,116,41,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,9),40,97,50,50,51,52,32,115,41,0,0,0,0,0,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,45),40,99,104,105,99,107,101,110,46,112,114,101,116,116,121,45,112,114,105,110,116,35,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,32,46,32,111,112,116,41,0,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char li38[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,14),40,114,101,99,32,109,115,103,32,97,114,103,115,41,0,0};
static C_char li41[] C_aligned={C_lihdr(0,0,43),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,48,32,108,111,99,32,112,111,114,116,32,109,115,103,32,97,114,103,115,41,0,0,0,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,112,114,105,110,116,102,32,112,111,114,116,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,115,112,114,105,110,116,102,32,102,115,116,114,32,46,32,97,114,103,115,41,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,41),40,99,104,105,99,107,101,110,46,102,111,114,109,97,116,35,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,32,46,32,97,114,103,115,41,0,0,0,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,51),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,115,101,116,45,112,115,101,117,100,111,45,114,97,110,100,111,109,45,115,101,101,100,33,32,98,117,102,32,46,32,114,101,115,116,41,0,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,105,110,116,101,103,101,114,32,110,41};
static C_char li48[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,112,115,101,117,100,111,45,114,97,110,100,111,109,45,114,101,97,108,41,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,114,97,110,100,111,109,35,114,97,110,100,111,109,45,98,121,116,101,115,32,46,32,114,101,115,116,41,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,18),40,109,97,112,45,108,111,111,112,54,53,53,32,103,54,54,55,41,0,0,0,0,0,0};
static C_char li51[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,115,116,97,114,116,32,112,111,115,41};
static C_char li52[] C_aligned={C_lihdr(0,0,17),40,118,101,114,115,105,111,110,45,62,108,105,115,116,32,115,41,0,0,0,0,0,0,0};
static C_char li53[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,112,49,32,112,50,41,0,0,0,0};
static C_char li54[] C_aligned={C_lihdr(0,0,34),40,99,104,105,99,107,101,110,46,118,101,114,115,105,111,110,35,118,101,114,115,105,111,110,62,61,63,32,118,49,32,118,50,41,0,0,0,0,0,0};
static C_char li55[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1001)
static void f_1001(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word *av) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word *av) C_noret;
C_noret_decl(f_1028)
static void f_1028(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word *av) C_noret;
C_noret_decl(f_1046)
static void f_1046(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word *av) C_noret;
C_noret_decl(f_1074)
static void C_ccall f_1074(C_word c,C_word *av) C_noret;
C_noret_decl(f_1090)
static void C_ccall f_1090(C_word c,C_word *av) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word *av) C_noret;
C_noret_decl(f_1103)
static void C_ccall f_1103(C_word c,C_word *av) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word *av) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word *av) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185(C_word c,C_word *av) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word *av) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word *av) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word *av) C_noret;
C_noret_decl(f_1207)
static void C_ccall f_1207(C_word c,C_word *av) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220(C_word c,C_word *av) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word *av) C_noret;
C_noret_decl(f_1241)
static void f_1241(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word *av) C_noret;
C_noret_decl(f_1273)
static void C_ccall f_1273(C_word c,C_word *av) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word *av) C_noret;
C_noret_decl(f_1297)
static void C_ccall f_1297(C_word c,C_word *av) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word *av) C_noret;
C_noret_decl(f_1303)
static void f_1303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1321)
static void C_ccall f_1321(C_word c,C_word *av) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word *av) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word *av) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word *av) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word *av) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word *av) C_noret;
C_noret_decl(f_1385)
static void C_ccall f_1385(C_word c,C_word *av) C_noret;
C_noret_decl(f_1388)
static void C_ccall f_1388(C_word c,C_word *av) C_noret;
C_noret_decl(f_1392)
static void f_1392(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word *av) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word *av) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word *av) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word *av) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word *av) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word *av) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word *av) C_noret;
C_noret_decl(f_1484)
static void C_ccall f_1484(C_word c,C_word *av) C_noret;
C_noret_decl(f_1490)
static void C_ccall f_1490(C_word c,C_word *av) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word *av) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word *av) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word *av) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word *av) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word *av) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word *av) C_noret;
C_noret_decl(f_1540)
static void f_1540(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1543)
static void f_1543(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word *av) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word *av) C_noret;
C_noret_decl(f_1576)
static void f_1576(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word *av) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word *av) C_noret;
C_noret_decl(f_1610)
static void f_1610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1623)
static void C_ccall f_1623(C_word c,C_word *av) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word *av) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word *av) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word *av) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word *av) C_noret;
C_noret_decl(f_1661)
static void C_ccall f_1661(C_word c,C_word *av) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word *av) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word *av) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word *av) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word *av) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word *av) C_noret;
C_noret_decl(f_1762)
static void f_1762(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1766)
static void C_ccall f_1766(C_word c,C_word *av) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word *av) C_noret;
C_noret_decl(f_1788)
static void f_1788(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word *av) C_noret;
C_noret_decl(f_1797)
static void f_1797(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1803)
static void f_1803(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word *av) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word *av) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word *av) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word *av) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word *av) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word *av) C_noret;
C_noret_decl(f_1870)
static void f_1870(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_1873)
static void f_1873(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word *av) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word *av) C_noret;
C_noret_decl(f_1912)
static void f_1912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word *av) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word *av) C_noret;
C_noret_decl(f_1951)
static void f_1951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word *av) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word *av) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word *av) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word *av) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word *av) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word *av) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word *av) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word *av) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word *av) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word *av) C_noret;
C_noret_decl(f_2081)
static void f_2081(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2091)
static void f_2091(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word *av) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word *av) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word *av) C_noret;
C_noret_decl(f_2222)
static void C_ccall f_2222(C_word c,C_word *av) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word *av) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word *av) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word *av) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word *av) C_noret;
C_noret_decl(f_2246)
static void f_2246(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word *av) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word *av) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word *av) C_noret;
C_noret_decl(f_2284)
static void f_2284(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2291)
static C_word f_2291(C_word t0);
C_noret_decl(f_2301)
static void f_2301(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void f_2320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2333)
static void C_ccall f_2333(C_word c,C_word *av) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word *av) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word *av) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word *av) C_noret;
C_noret_decl(f_2397)
static void C_ccall f_2397(C_word c,C_word *av) C_noret;
C_noret_decl(f_2401)
static void C_ccall f_2401(C_word c,C_word *av) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word *av) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word *av) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word *av) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word *av) C_noret;
C_noret_decl(f_2453)
static void C_ccall f_2453(C_word c,C_word *av) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word *av) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word *av) C_noret;
C_noret_decl(f_2498)
static C_word f_2498(C_word t0,C_word t1);
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word *av) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word *av) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word *av) C_noret;
C_noret_decl(f_2579)
static void C_ccall f_2579(C_word c,C_word *av) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word *av) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word *av) C_noret;
C_noret_decl(f_2618)
static void C_ccall f_2618(C_word c,C_word *av) C_noret;
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word *av) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word *av) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word *av) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word *av) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word *av) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word *av) C_noret;
C_noret_decl(f_2701)
static void C_ccall f_2701(C_word c,C_word *av) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word *av) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word *av) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word *av) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word *av) C_noret;
C_noret_decl(f_2783)
static void f_2783(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word *av) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word *av) C_noret;
C_noret_decl(f_2809)
static void f_2809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2843)
static void f_2843(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word *av) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word *av) C_noret;
C_noret_decl(f_2903)
static void C_ccall f_2903(C_word c,C_word *av) C_noret;
C_noret_decl(f_2905)
static void f_2905(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word *av) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word *av) C_noret;
C_noret_decl(f_873)
static void C_ccall f_873(C_word c,C_word *av) C_noret;
C_noret_decl(f_875)
static void f_875(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_878)
static void f_878(C_word t0,C_word t1) C_noret;
C_noret_decl(f_906)
static void f_906(C_word t0,C_word t1) C_noret;
C_noret_decl(f_940)
static C_word f_940(C_word t0);
C_noret_decl(f_979)
static void f_979(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word *av) C_noret;
C_noret_decl(f_998)
static void f_998(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1001)
static void C_ccall trf_1001(C_word c,C_word *av) C_noret;
static void C_ccall trf_1001(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1001(t0,t1,t2,t3);}

C_noret_decl(trf_1028)
static void C_ccall trf_1028(C_word c,C_word *av) C_noret;
static void C_ccall trf_1028(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1028(t0,t1,t2,t3);}

C_noret_decl(trf_1046)
static void C_ccall trf_1046(C_word c,C_word *av) C_noret;
static void C_ccall trf_1046(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1046(t0,t1,t2,t3);}

C_noret_decl(trf_1241)
static void C_ccall trf_1241(C_word c,C_word *av) C_noret;
static void C_ccall trf_1241(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1241(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1303)
static void C_ccall trf_1303(C_word c,C_word *av) C_noret;
static void C_ccall trf_1303(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1303(t0,t1,t2);}

C_noret_decl(trf_1392)
static void C_ccall trf_1392(C_word c,C_word *av) C_noret;
static void C_ccall trf_1392(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1392(t0,t1,t2);}

C_noret_decl(trf_1540)
static void C_ccall trf_1540(C_word c,C_word *av) C_noret;
static void C_ccall trf_1540(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1540(t0,t1,t2,t3);}

C_noret_decl(trf_1543)
static void C_ccall trf_1543(C_word c,C_word *av) C_noret;
static void C_ccall trf_1543(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1543(t0,t1,t2,t3);}

C_noret_decl(trf_1576)
static void C_ccall trf_1576(C_word c,C_word *av) C_noret;
static void C_ccall trf_1576(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1576(t0,t1,t2,t3);}

C_noret_decl(trf_1610)
static void C_ccall trf_1610(C_word c,C_word *av) C_noret;
static void C_ccall trf_1610(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1610(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1762)
static void C_ccall trf_1762(C_word c,C_word *av) C_noret;
static void C_ccall trf_1762(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1762(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1788)
static void C_ccall trf_1788(C_word c,C_word *av) C_noret;
static void C_ccall trf_1788(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1788(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1797)
static void C_ccall trf_1797(C_word c,C_word *av) C_noret;
static void C_ccall trf_1797(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_1797(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1803)
static void C_ccall trf_1803(C_word c,C_word *av) C_noret;
static void C_ccall trf_1803(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1803(t0,t1,t2,t3);}

C_noret_decl(trf_1870)
static void C_ccall trf_1870(C_word c,C_word *av) C_noret;
static void C_ccall trf_1870(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_1870(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_1873)
static void C_ccall trf_1873(C_word c,C_word *av) C_noret;
static void C_ccall trf_1873(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1873(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1912)
static void C_ccall trf_1912(C_word c,C_word *av) C_noret;
static void C_ccall trf_1912(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_1912(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1951)
static void C_ccall trf_1951(C_word c,C_word *av) C_noret;
static void C_ccall trf_1951(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1951(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2081)
static void C_ccall trf_2081(C_word c,C_word *av) C_noret;
static void C_ccall trf_2081(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2081(t0,t1,t2);}

C_noret_decl(trf_2091)
static void C_ccall trf_2091(C_word c,C_word *av) C_noret;
static void C_ccall trf_2091(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2091(t0,t1);}

C_noret_decl(trf_2246)
static void C_ccall trf_2246(C_word c,C_word *av) C_noret;
static void C_ccall trf_2246(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_2246(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2284)
static void C_ccall trf_2284(C_word c,C_word *av) C_noret;
static void C_ccall trf_2284(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2284(t0,t1,t2,t3);}

C_noret_decl(trf_2301)
static void C_ccall trf_2301(C_word c,C_word *av) C_noret;
static void C_ccall trf_2301(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2301(t0,t1);}

C_noret_decl(trf_2320)
static void C_ccall trf_2320(C_word c,C_word *av) C_noret;
static void C_ccall trf_2320(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2320(t0,t1);}

C_noret_decl(trf_2783)
static void C_ccall trf_2783(C_word c,C_word *av) C_noret;
static void C_ccall trf_2783(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2783(t0,t1);}

C_noret_decl(trf_2809)
static void C_ccall trf_2809(C_word c,C_word *av) C_noret;
static void C_ccall trf_2809(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2809(t0,t1,t2);}

C_noret_decl(trf_2843)
static void C_ccall trf_2843(C_word c,C_word *av) C_noret;
static void C_ccall trf_2843(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2843(t0,t1,t2,t3);}

C_noret_decl(trf_2905)
static void C_ccall trf_2905(C_word c,C_word *av) C_noret;
static void C_ccall trf_2905(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2905(t0,t1,t2,t3);}

C_noret_decl(trf_875)
static void C_ccall trf_875(C_word c,C_word *av) C_noret;
static void C_ccall trf_875(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_875(t0,t1,t2,t3,t4);}

C_noret_decl(trf_878)
static void C_ccall trf_878(C_word c,C_word *av) C_noret;
static void C_ccall trf_878(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_878(t0,t1);}

C_noret_decl(trf_906)
static void C_ccall trf_906(C_word c,C_word *av) C_noret;
static void C_ccall trf_906(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_906(t0,t1);}

C_noret_decl(trf_979)
static void C_ccall trf_979(C_word c,C_word *av) C_noret;
static void C_ccall trf_979(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_979(t0,t1,t2,t3);}

C_noret_decl(trf_998)
static void C_ccall trf_998(C_word c,C_word *av) C_noret;
static void C_ccall trf_998(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_998(t0,t1,t2,t3);}

/* wr-expr in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1001(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_1001,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1008,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:76: read-macro? */
f_878(t4,t2);}

/* k1006 in wr-expr in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1008,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1019,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(
/* extras.scm:77: read-macro-prefix */
  f_940(((C_word*)t0)[2])
);
/* extras.scm:77: out */
t5=((C_word*)((C_word*)t0)[6])[1];
f_979(t5,t3,t4,((C_word*)t0)[7]);}
else{
/* extras.scm:78: wr-lst */
t2=((C_word*)((C_word*)t0)[8])[1];
f_1028(t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k1017 in k1006 in wr-expr in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1019,c,av);}
/* extras.scm:77: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_998(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1028(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_1028,4,t0,t1,t2,t3);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=C_u_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1103,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:83: out */
t8=((C_word*)((C_word*)t0)[3])[1];
f_979(t8,t7,lf[15],t3);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_1044(2,av2);}}}
else{
/* extras.scm:89: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_979(t4,t1,lf[16],t3);}}

/* k1042 in wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1044,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1046,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word)li4),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1046(t5,((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* loop in k1042 in wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1046(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,3)))){
C_save_and_reclaim_args((void *)trf_1046,4,t0,t1,t2,t3);}
a=C_alloc(10);
if(C_truep(C_i_not(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1068,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_u_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1074,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:86: out */
t8=((C_word*)((C_word*)t0)[4])[1];
f_979(t8,t7,lf[11],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:87: out */
t4=((C_word*)((C_word*)t0)[4])[1];
f_979(t4,t1,lf[12],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1090,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1094,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:88: out */
t6=((C_word*)((C_word*)t0)[4])[1];
f_979(t6,t5,lf[14],t3);}}}}

/* k1066 in loop in k1042 in wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1068,c,av);}
/* extras.scm:86: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1046(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1072 in loop in k1042 in wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1074,c,av);}
/* extras.scm:86: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_998(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1088 in loop in k1042 in wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1090,c,av);}
/* extras.scm:88: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],lf[13],t1);}

/* k1092 in loop in k1042 in wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1094,c,av);}
/* extras.scm:88: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_998(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1101 in wr-lst in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1103,c,av);}
/* extras.scm:83: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_998(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1153 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1155,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:95: out */
t3=((C_word*)((C_word*)t0)[4])[1];
f_979(t3,t2,lf[19],((C_word*)t0)[5]);}

/* k1157 in k1153 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1159,c,av);}
/* extras.scm:95: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1028(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1183 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1185(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1185,c,av);}
/* extras.scm:97: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1191(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1191,c,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_i_symbolp(((C_word*)t0)[2]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1197,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:99: scheme#open-output-string */
t4=C_fast_retrieve(lf[26]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_closurep(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1220,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:102: ##sys#procedure->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[6])){
/* extras.scm:105: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_979(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:106: out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_979(t4,t3,lf[36],((C_word*)t0)[5]);}}
else{
if(C_truep(C_charp(((C_word*)t0)[2]))){
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=C_fix(1);
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}
else{
t3=C_fix(C_character_code(((C_word*)t0)[2]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1385,a[2]=((C_word*)t0)[3],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:144: out */
t5=((C_word*)((C_word*)t0)[3])[1];
f_979(t5,t4,lf[41],((C_word*)t0)[5]);}}
else{
if(C_truep(C_undefinedp(((C_word*)t0)[2]))){
/* extras.scm:152: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_979(t3,((C_word*)t0)[4],lf[42],((C_word*)t0)[5]);}
else{
if(C_truep(C_unboundvaluep(((C_word*)t0)[2]))){
/* extras.scm:153: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_979(t3,((C_word*)t0)[4],lf[43],((C_word*)t0)[5]);}
else{
if(C_truep(C_immp(((C_word*)t0)[2]))){
/* extras.scm:154: out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_979(t3,((C_word*)t0)[4],lf[44],((C_word*)t0)[5]);}
else{
if(C_truep(C_anypointerp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:155: ##sys#pointer->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[45]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[45]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
if(C_truep(C_structurep(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1474,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:157: scheme#open-output-string */
t4=C_fast_retrieve(lf[26]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1490,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:160: scheme#port? */
t4=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}}}}}}}}

/* k1195 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1197(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1197,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1200,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:100: ##sys#print */
t3=*((C_word*)lf[25]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k1198 in k1195 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1200(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1200,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:101: scheme#get-output-string */
t3=C_fast_retrieve(lf[24]);{
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

/* k1205 in k1198 in k1195 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1207,c,av);}
/* extras.scm:101: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1218 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1220,c,av);}
/* extras.scm:102: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1239,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1241,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word)li7),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1241(t5,((C_word*)t0)[4],C_fix(0),C_fix(0),t1);}

/* loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1241(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,4)))){
C_save_and_reclaim_args((void *)trf_1241,5,t0,t1,t2,t3,t4);}
a=C_alloc(20);
t5=(C_truep(t4)?C_fixnum_lessp(t3,C_i_string_length(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_i_string_ref(((C_word*)t0)[2],t3);
t7=C_u_i_char_equalp(t6,C_make_character(92));
t8=(C_truep(t7)?t7:C_u_i_char_equalp(t6,C_make_character(34)));
if(C_truep(t8)){
t9=C_a_i_fixnum_plus(&a,2,t3,C_fix(1));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1269,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1273,a[2]=((C_word*)t0)[4],a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[4],a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:115: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}
else{
if(C_truep(C_u_i_char_lessp(t6,C_make_character(32)))){
t9=C_fixnum_plus(t3,C_fix(1));
t10=C_fixnum_plus(t3,C_fix(1));
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1297,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t9,a[6]=t10,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1334,a[2]=((C_word*)t0)[4],a[3]=t11,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:121: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}
else{
/* extras.scm:138: loop */
t14=t1;
t15=t2;
t16=C_fixnum_plus(t3,C_fix(1));
t17=t4;
t1=t14;
t2=t15;
t3=t16;
t4=t17;
goto loop;}}}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1350,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1354,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:140: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}}

/* k1267 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1269,c,av);}
/* extras.scm:112: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1241(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1271 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1273,c,av);}
/* extras.scm:114: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],lf[28],t1);}

/* k1275 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1277,c,av);}
/* extras.scm:115: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1295 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1297(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_1297,c,av);}
a=C_alloc(14);
t2=C_u_i_assq(((C_word*)t0)[2],lf[30]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1303,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=((C_word)li6),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:122: g207 */
t5=t4;
f_1303(t5,t3,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1321,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1325,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_fix(C_character_code(((C_word*)t0)[2]));
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k1300 in k1295 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1302,c,av);}
/* extras.scm:118: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1241(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* g207 in k1295 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_1303,3,t0,t1,t2);}
/* extras.scm:131: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_979(t3,t1,C_i_cdr(t2),((C_word*)t0)[3]);}

/* k1319 in k1295 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1321,c,av);}
/* extras.scm:133: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1323 in k1295 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1325(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1325,c,av);}
/* extras.scm:133: scheme#string-append */
t2=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[32];
av2[3]=t1;
av2[4]=lf[33];
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k1332 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1334,c,av);}
/* extras.scm:121: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1348 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1350,c,av);}
/* extras.scm:139: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],lf[35],t1);}

/* k1352 in loop in k1237 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1354,c,av);}
/* extras.scm:140: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1375 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1377,c,av);}
/* extras.scm:142: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1383 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1385,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1388,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:145: chicken.base#char-name */
t4=*((C_word*)lf[40]+1);{
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

/* k1386 in k1383 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1388(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1388,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1392,a[2]=((C_word*)t2)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[3],a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp);
/* extras.scm:145: g219 */
t4=t3;
f_1392(t4,((C_word*)t2)[4],t1);}
else{
t3=C_fixnum_lessp(((C_word*)t2)[5],C_fix(32));
t4=(C_truep(t3)?t3:C_fixnum_greaterp(((C_word*)t2)[5],C_fix(127)));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1419,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#fixnum->string */
t6=C_fast_retrieve(lf[34]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t2)[5];
av2[3]=C_fix(16);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1432,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t5;
av2[2]=C_fix(1);
av2[3]=((C_word*)t2)[6];
tp(4,av2);}}}}

/* g219 in k1386 in k1383 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1392(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_1392,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1400,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:147: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k1398 in g219 in k1386 in k1383 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1400,c,av);}
t2=((C_word*)t0)[2];
/* extras.scm:147: out */
t3=((C_word*)((C_word*)t2)[2])[1];
f_979(t3,((C_word*)t2)[3],t1,((C_word*)t2)[4]);}

/* k1417 in k1386 in k1383 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1419(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1419,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:150: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_979(t3,t2,lf[39],((C_word*)t0)[4]);}

/* k1421 in k1417 in k1386 in k1383 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1423,c,av);}
/* extras.scm:149: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1430 in k1386 in k1383 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1432,c,av);}
/* extras.scm:151: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1463 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1465,c,av);}
/* extras.scm:155: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1472 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1474,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:158: ##sys#user-print-hook */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_SCHEME_TRUE;
av2[4]=t1;
tp(5,av2);}}

/* k1475 in k1472 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1477(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1477,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:159: scheme#get-output-string */
t3=C_fast_retrieve(lf[24]);{
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

/* k1482 in k1475 in k1472 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1484(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1484,c,av);}
/* extras.scm:159: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1488 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1490,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:160: scheme#string-append */
t3=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[47];
av2[3]=C_slot(((C_word*)t0)[5],C_fix(3));
av2[4]=lf[48];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
if(C_truep(C_bytevectorp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1507,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:162: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_979(t3,t2,lf[50],((C_word*)t0)[4]);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:166: ##sys#lambda-info->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[53]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
/* extras.scm:168: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],lf[54],((C_word*)t0)[4]);}}}}

/* k1495 in k1488 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1497,c,av);}
/* extras.scm:160: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1505 in k1488 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1507(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1507,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:163: ##sys#bytevector->list */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[49]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k1512 in k1505 in k1488 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1514,c,av);}
/* extras.scm:163: wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1028(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1522 in k1488 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1524,c,av);}
/* extras.scm:165: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],lf[51],t1);}

/* k1526 in k1488 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_1528,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:167: out */
t3=((C_word*)((C_word*)t0)[2])[1];
f_979(t3,t2,lf[52],((C_word*)t0)[4]);}

/* k1530 in k1526 in k1488 in k1189 in wr in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1532,c,av);}
/* extras.scm:166: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1540(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(154,0,9)))){
C_save_and_reclaim_args((void *)trf_1540,4,t0,t1,t2,t3);}
a=C_alloc(154);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1543,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1576,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li13),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1697,a[2]=t9,a[3]=t11,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=t19,a[7]=t13,a[8]=t39,a[9]=t15,a[10]=((C_word*)t0)[7],a[11]=((C_word)li14),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1762,a[2]=t17,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1788,a[2]=t17,a[3]=((C_word*)t0)[2],a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1797,a[2]=t9,a[3]=t7,a[4]=((C_word*)t0)[2],a[5]=((C_word)li18),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1870,a[2]=t9,a[3]=t7,a[4]=t17,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word)li22),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2010,a[2]=t15,a[3]=t11,a[4]=((C_word)li23),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2016,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li24),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2022,a[2]=t19,a[3]=t11,a[4]=((C_word)li25),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2028,a[2]=t13,a[3]=t21,a[4]=((C_word)li26),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2034,a[2]=t19,a[3]=t11,a[4]=t21,a[5]=((C_word)li27),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2040,a[2]=t13,a[3]=t11,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2046,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li29),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2066,a[2]=t19,a[3]=t11,a[4]=((C_word)li30),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2072,a[2]=t19,a[3]=t21,a[4]=t11,a[5]=((C_word)li31),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2081,a[2]=C_SCHEME_UNDEFINED,a[3]=t23,a[4]=C_SCHEME_UNDEFINED,a[5]=t25,a[6]=t27,a[7]=t29,a[8]=t31,a[9]=t33,a[10]=t35,a[11]=t37,a[12]=((C_word)li32),tmp=(C_word)a,a+=13,tmp));
/* extras.scm:330: pr */
t58=((C_word*)t9)[1];
f_1610(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* spaces in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1543(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,0,4)))){
C_save_and_reclaim_args((void *)trf_1543,4,t0,t1,t2,t3);}
a=C_alloc(34);
if(C_truep(C_i_greaterp(t2,C_fix(0)))){
if(C_truep(C_i_greaterp(t2,C_fix(7)))){
t4=C_s_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1567,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:175: out */
t6=((C_word*)((C_word*)t0)[3])[1];
f_979(t6,t5,lf[57],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1574,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:176: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[5];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t4;
av2[2]=lf[58];
av2[3]=C_fix(0);
av2[4]=t2;
tp(5,av2);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1565 in spaces in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1567,c,av);}
/* extras.scm:175: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1543(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1572 in spaces in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1574,c,av);}
/* extras.scm:176: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* indent in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1576(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_1576,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(t3)){
if(C_truep(C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t5;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
t4=C_s_a_i_minus(&a,2,t2,t3);
/* extras.scm:183: spaces */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1543(t5,t1,t4,t3);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1590 in indent in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1592,c,av);}
if(C_truep(t1)){
/* extras.scm:182: spaces */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1543(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_fix(0));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1597 in indent in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1599,c,av);}
/* extras.scm:182: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* pr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1610(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(101,0,3)))){
C_save_and_reclaim_args((void *)trf_1610,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(101);
t6=C_i_pairp(t2);
t7=(C_truep(t6)?t6:C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1623,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t9,a[6]=t2,a[7]=t5,a[8]=t4,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],tmp=(C_word)a,a+=12,tmp);
t11=C_s_a_i_minus(&a,2,((C_word*)t0)[6],t3);
t12=C_s_a_i_minus(&a,2,t11,t4);
t13=C_s_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm:188: scheme#max */
t14=*((C_word*)lf[61]+1);{
C_word av2[4];
av2[0]=t14;
av2[1]=t10;
av2[2]=t13;
av2[3]=C_fix(50);
((C_proc)(void*)(*((C_word*)t14+1)))(4,av2);}}
else{
/* extras.scm:199: wr */
t8=((C_word*)((C_word*)t0)[7])[1];
f_998(t8,t1,t2,t3);}}

/* k1621 in pr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1623(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,5)))){
C_save_and_reclaim((void *)f_1623,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1626,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1661,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
/* extras.scm:189: generic-write */
f_875(t4,((C_word*)t0)[6],((C_word*)t0)[11],C_SCHEME_FALSE,t5);}

/* k1624 in k1621 in pr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_1626,c,av);}
a=C_alloc(8);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:195: chicken.string#reverse-string-append */
t3=C_fast_retrieve(lf[59]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[6])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
/* extras.scm:197: pp-pair */
t2=((C_word*)t0)[8];{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[5];
av2[4]=((C_word*)t0)[9];
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm:198: scheme#vector->list */
t3=*((C_word*)lf[20]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}}

/* k1637 in k1624 in k1621 in pr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1639,c,av);}
/* extras.scm:195: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k1653 in k1624 in k1621 in pr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1655(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_1655,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:198: out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_979(t3,t2,lf[60],((C_word*)t0)[7]);}

/* k1657 in k1653 in k1624 in k1621 in pr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1659,c,av);}
/* extras.scm:198: pp-list */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1788(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* a1660 in k1621 in pr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1661(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,1)))){
C_save_and_reclaim((void *)f_1661,c,av);}
a=C_alloc(32);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_i_string_length(t2);
t6=C_s_a_i_minus(&a,2,((C_word*)((C_word*)t0)[3])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_greaterp(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* pp-expr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1697(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_1697,c,av);}
a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1704,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[9],tmp=(C_word)a,a+=14,tmp);
/* extras.scm:202: read-macro? */
f_878(t5,t2);}

/* k1702 in pp-expr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_1704,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1715,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(
/* extras.scm:204: read-macro-prefix */
  f_940(((C_word*)t0)[2])
);
/* extras.scm:204: out */
t5=((C_word*)((C_word*)t0)[8])[1];
f_979(t5,t3,t4,((C_word*)t0)[9]);}
else{
t2=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1731,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[11],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* extras.scm:209: style */
t4=((C_word*)((C_word*)t0)[12])[1];
f_2081(t4,t3,t2);}
else{
/* extras.scm:216: pp-list */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1788(t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}}}

/* k1713 in k1702 in pp-expr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1715(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1715,c,av);}
/* extras.scm:203: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1610(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1]);}

/* k1729 in k1702 in pp-expr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1731(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1731,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
/* extras.scm:211: proc */
t2=t1;{
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
((C_proc)C_fast_retrieve_proc(t2))(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1757,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* extras.scm:212: ##sys#symbol->string/shared */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[38]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}}

/* k1755 in k1729 in k1702 in pp-expr in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1757,c,av);}
t2=C_i_string_length(t1);
if(C_truep(C_i_greaterp(t2,C_fix(5)))){
/* extras.scm:214: pp-general */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1870(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[7])[1]);}
else{
/* extras.scm:215: pp-call */
t3=((C_word*)((C_word*)t0)[8])[1];
f_1762(t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)((C_word*)t0)[7])[1]);}}

/* pp-call in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1762(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,3)))){
C_save_and_reclaim_args((void *)trf_1762,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1766,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1786,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:222: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_979(t9,t8,lf[62],t3);}

/* k1764 in pp-call in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_1766,c,av);}
a=C_alloc(29);
if(C_truep(((C_word*)t0)[2])){
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:224: pp-down */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1797(t4,((C_word*)t0)[5],t2,t1,t3,((C_word*)t0)[6],((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1784 in pp-call in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1786,c,av);}
/* extras.scm:222: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_998(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-list in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1788(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_1788,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1792,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:230: out */
t7=((C_word*)((C_word*)t0)[3])[1];
f_979(t7,t6,lf[63],t3);}

/* k1790 in pp-list in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_1792,c,av);}
/* extras.scm:231: pp-down */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1797(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1797(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_1797,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(12);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1803,a[2]=t5,a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=((C_word)li17),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_1803(t10,t1,t2,t3);}

/* loop in pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1803(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(41,0,3)))){
C_save_and_reclaim_args((void *)trf_1803,4,t0,t1,t2,t3);}
a=C_alloc(41);
if(C_truep(t3)){
if(C_truep(C_i_pairp(t2))){
t4=C_u_i_cdr(t2);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1824,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t8=C_u_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[4],a[3]=t7,a[4]=t8,a[5]=t6,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:240: indent */
t10=((C_word*)((C_word*)t0)[6])[1];
f_1576(t10,t9,((C_word*)t0)[7],t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:242: out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_979(t4,t1,lf[64],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1852,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1864,a[2]=((C_word*)t0)[6],a[3]=t5,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1868,a[2]=((C_word*)t0)[8],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:246: indent */
t8=((C_word*)((C_word*)t0)[6])[1];
f_1576(t8,t7,((C_word*)t0)[7],t3);}}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1822 in loop in pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1824,c,av);}
/* extras.scm:239: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1803(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1828 in loop in pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1830(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1830,c,av);}
/* extras.scm:240: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1610(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k1850 in loop in pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1852,c,av);}
/* extras.scm:244: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],lf[65],t1);}

/* k1854 in loop in pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_1856,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
/* extras.scm:245: pr */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1610(t3,((C_word*)t0)[4],((C_word*)t0)[5],t1,t2,((C_word*)t0)[6]);}

/* k1862 in loop in pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1864,c,av);}
/* extras.scm:246: indent */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1576(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k1866 in loop in pp-down in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1868,c,av);}
/* extras.scm:246: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],lf[66],t1);}

/* pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1870(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,0,6)))){
C_save_and_reclaim_args((void *)trf_1870,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(42);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1873,a[2]=t6,a[3]=t4,a[4]=t12,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li19),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1912,a[2]=t7,a[3]=t4,a[4]=t14,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word)li20),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1951,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t8,a[5]=((C_word)li21),tmp=(C_word)a,a+=6,tmp));
t18=C_i_car(t2);
t19=C_u_i_cdr(t2);
t20=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1962,a[2]=t5,a[3]=t19,a[4]=t3,a[5]=t10,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[5],a[3]=t20,a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:273: out */
t22=((C_word*)((C_word*)t0)[6])[1];
f_979(t22,t21,lf[68],t3);}

/* tail1 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1873(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(43,0,5)))){
C_save_and_reclaim_args((void *)trf_1873,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_u_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t8,a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1898,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t7,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:257: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_1576(t13,t12,t5,t4);}
else{
/* extras.scm:258: tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_1912(t7,t1,t2,t3,t4,t5);}}

/* k1892 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1894,c,av);}
/* extras.scm:257: tail2 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1912(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,((C_word*)t0)[6]);}

/* k1896 in tail1 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1898,c,av);}
/* extras.scm:257: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1610(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail2 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
if(C_unlikely(!C_demand(C_calculate_demand(42,0,4)))){
C_save_and_reclaim_args((void *)trf_1912,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(42);
t6=(C_truep(((C_word*)t0)[2])?C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=C_u_i_cdr(t2);
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_s_a_i_plus(&a,2,((C_word*)t0)[3],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1933,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t8,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1937,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t7,a[5]=t10,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:265: indent */
t13=((C_word*)((C_word*)t0)[6])[1];
f_1576(t13,t12,t5,t4);}
else{
/* extras.scm:266: tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_1951(t7,t1,t2,t3,t4);}}

/* k1931 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1933,c,av);}
/* extras.scm:265: tail3 */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1951(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);}

/* k1935 in tail2 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_1937,c,av);}
/* extras.scm:265: pr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_1610(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* tail3 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_1951(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,6)))){
C_save_and_reclaim_args((void *)trf_1951,5,t0,t1,t2,t3,t4);}
/* extras.scm:269: pp-down */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1797(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k1960 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1962(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_1962,c,av);}
a=C_alloc(58);
t2=(C_truep(((C_word*)t0)[2])?C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[3]);
t4=C_u_i_cdr(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:277: out */
t7=((C_word*)((C_word*)t0)[8])[1];
f_979(t7,t6,lf[67],t1);}
else{
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[4],C_fix(2));
t4=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:279: tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1873(t5,((C_word*)t0)[6],((C_word*)t0)[3],t3,t1,t4);}}

/* k1973 in k1960 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(58,c,5)))){
C_save_and_reclaim((void *)f_1975,c,av);}
a=C_alloc(58);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(2));
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm:278: tail1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1873(t4,((C_word*)t0)[4],((C_word*)t0)[5],t2,t1,t3);}

/* k1988 in k1960 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_1990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1990,c,av);}
/* extras.scm:277: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_998(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2006 in pp-general in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2008,c,av);}
/* extras.scm:273: wr */
t2=((C_word*)((C_word*)t0)[2])[1];
f_998(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* pp-expr-list in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2010,c,av);}
/* extras.scm:282: pp-list */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1788(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-lambda in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2016(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2016,c,av);}
/* extras.scm:285: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1870(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-if in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2022(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2022,c,av);}
/* extras.scm:288: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1870(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-cond in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2028,c,av);}
/* extras.scm:291: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1762(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-case in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2034,c,av);}
/* extras.scm:294: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1870(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}

/* pp-and in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_2040,c,av);}
/* extras.scm:297: pp-call */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1762(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-let in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2046(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2046,c,av);}
t5=C_i_cdr(t2);
if(C_truep(C_i_pairp(t5))){
/* extras.scm:302: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1870(t6,t1,t2,t3,t4,C_i_symbolp(C_u_i_car(t5)),((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* extras.scm:302: pp-general */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1870(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[4])[1]);}}

/* pp-begin in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2066,c,av);}
/* extras.scm:305: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1870(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}

/* pp-do in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_2072,c,av);}
/* extras.scm:308: pp-general */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1870(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[4])[1]);}

/* style in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_2081(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_2081,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=C_eqp(((C_word*)t0)[4],lf[69]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2091,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t7=t6;
f_2091(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[79]);
if(C_truep(t7)){
t8=t6;
f_2091(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[80]);
if(C_truep(t8)){
t9=t6;
f_2091(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[81]);
t10=t6;
f_2091(t10,(C_truep(t9)?t9:C_eqp(((C_word*)t0)[4],lf[82])));}}}}

/* k2089 in style in pp in chicken.pretty-print#generic-write in k871 in k868 */
static void f_2091(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_2091,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t2)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_eqp(((C_word*)t2)[4],lf[70]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t2)[4],lf[71]));
if(C_truep(t4)){
t5=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t5;
av2[1]=((C_word*)((C_word*)t2)[5])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t2)[4],lf[72]);
if(C_truep(t5)){
t6=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=((C_word*)((C_word*)t2)[6])[1];
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=C_eqp(((C_word*)t2)[4],lf[73]);
if(C_truep(t6)){
t7=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t7;
av2[1]=((C_word*)((C_word*)t2)[7])[1];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=C_eqp(((C_word*)t2)[4],lf[74]);
t8=(C_truep(t7)?t7:C_eqp(((C_word*)t2)[4],lf[75]));
if(C_truep(t8)){
t9=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t9;
av2[1]=((C_word*)((C_word*)t2)[8])[1];
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}
else{
t9=C_eqp(((C_word*)t2)[4],lf[76]);
if(C_truep(t9)){
t10=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t10;
av2[1]=((C_word*)((C_word*)t2)[9])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t10=C_eqp(((C_word*)t2)[4],lf[77]);
if(C_truep(t10)){
t11=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t11;
av2[1]=((C_word*)((C_word*)t2)[10])[1];
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t11=C_eqp(((C_word*)t2)[4],lf[78]);
t12=((C_word*)t2)[2];{
C_word av2[2];
av2[0]=t12;
av2[1]=(C_truep(t11)?((C_word*)((C_word*)t2)[11])[1]:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}}}}}}}

/* k2205 in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_2207,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:333: pp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1540(t3,t2,((C_word*)t0)[5],C_fix(0));}

/* k2209 in k2205 in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_2211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2211,c,av);}
/* extras.scm:333: out */
t2=((C_word*)((C_word*)t0)[2])[1];
f_979(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2218 in k871 in k868 */
static void C_ccall f_2220(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,6)))){
C_save_and_reclaim((void *)f_2220,c,av);}
a=C_alloc(29);
t2=C_mutate((C_word*)lf[83]+1 /* (set! chicken.pretty-print#pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[84]+1 /* (set! chicken.pretty-print#pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2222,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[87]+1 /* (set! chicken.pretty-print#pp ...) */,C_fast_retrieve(lf[84]));
t5=C_a_i_provide(&a,1,lf[88]);
t6=C_mutate(&lf[89] /* (set! chicken.format#fprintf0 ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2246,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[98]+1 /* (set! chicken.format#fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[100]+1 /* (set! chicken.format#printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2573,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[102]+1 /* (set! chicken.format#sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2579,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[104]+1 /* (set! chicken.format#format ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2628,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:429: chicken.platform#register-feature! */
t12=C_fast_retrieve(lf[129]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[130];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* chicken.pretty-print#pretty-print in k2218 in k871 in k868 */
static void C_ccall f_2222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +8,c,2)))){
C_save_and_reclaim((void*)f_2222,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+8);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_get_rest_arg(c,3,av,3,t0):*((C_word*)lf[85]+1));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2229,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2233,a[2]=t5,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:343: pretty-print-width */
t8=C_fast_retrieve(lf[83]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k2227 in chicken.pretty-print#pretty-print in k2218 in k871 in k868 */
static void C_ccall f_2229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2229,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2231 in chicken.pretty-print#pretty-print in k2218 in k871 in k868 */
static void C_ccall f_2233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2233,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
/* extras.scm:343: generic-write */
f_875(((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,t1,t2);}

/* a2234 in k2231 in chicken.pretty-print#pretty-print in k2218 in k871 in k868 */
static void C_ccall f_2235(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2235,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:343: scheme#display */
t4=*((C_word*)lf[86]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2237 in a2234 in k2231 in chicken.pretty-print#pretty-print in k2218 in k871 in k868 */
static void C_ccall f_2239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2239,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.format#fprintf0 in k2218 in k871 in k868 */
static void f_2246(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_2246,5,t1,t2,t3,t4,t5);}
a=C_alloc(11);
t6=(C_truep(t3)?C_i_check_port_2(t3,C_fix(2),C_SCHEME_TRUE,t2):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2253,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2556,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
/* extras.scm:360: ##sys#tty-port? */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[97]);
C_word av2[3];
av2[0]=*((C_word*)lf[97]+1);
av2[1]=t8;
av2[2]=t3;
tp(3,av2);}}
else{
/* extras.scm:362: scheme#open-output-string */
t9=C_fast_retrieve(lf[26]);{
C_word av2[2];
av2[0]=t9;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2253(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_2253,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=((C_word)li40),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2284(t6,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2254 in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2256,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(((C_word*)t0)[2]))){
/* extras.scm:406: scheme#get-output-string */
t2=C_fast_retrieve(lf[24]);{
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
t2=C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(C_i_not(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2278,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:408: scheme#get-output-string */
t4=C_fast_retrieve(lf[24]);{
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
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* k2276 in k2254 in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_2278,c,av);}
/* extras.scm:408: ##sys#print */
t2=*((C_word*)lf[25]+1);{
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

/* rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void f_2284(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t17;
C_word t18;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,0,2)))){
C_save_and_reclaim_args((void *)trf_2284,4,t0,t1,t2,t3);}
a=C_alloc(30);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_check_string_2(t2,((C_word*)t0)[2]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_u_i_string_length(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2291,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2301,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2320,a[2]=t7,a[3]=t8,a[4]=t10,a[5]=t16,a[6]=((C_word*)t0)[3],a[7]=t12,a[8]=((C_word*)t0)[2],a[9]=((C_word*)t0)[4],a[10]=((C_word)li39),tmp=(C_word)a,a+=11,tmp));
t18=((C_word*)t16)[1];
f_2320(t18,t1);}

/* fetch in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static C_word f_2291(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t1=C_i_string_ref(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t1);}

/* next in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void f_2301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2301,2,t0,t1);}
if(C_truep(C_eqp(((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm:373: ##sys#error */
t2=*((C_word*)lf[90]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[91];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(0));
t3=C_slot(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void f_2320(C_word t0,C_word t1){
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
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_2320,2,t0,t1);}
a=C_alloc(11);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=(
/* extras.scm:379: fetch */
  f_2291(((C_word*)((C_word*)t0)[4])[1])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2333,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(
/* extras.scm:381: fetch */
  f_2291(((C_word*)((C_word*)t0)[4])[1])
);
t7=C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2358,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:383: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2301(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2371,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:384: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2301(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2384,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:385: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2301(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2397,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2401,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:386: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_2301(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2414,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2418,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:387: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_2301(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2431,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:388: next */
t10=((C_word*)((C_word*)t0)[7])[1];
f_2301(t10,t9);
case C_make_character(33):
/* extras.scm:389: ##sys#flush-output */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word av2[3];
av2[0]=*((C_word*)lf[94]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2453,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm:391: next */
t9=((C_word*)((C_word*)t0)[7])[1];
f_2301(t9,t8);
case C_make_character(126):
/* extras.scm:395: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word av2[4];
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=C_make_character(126);
av2[3]=((C_word*)t0)[6];
tp(4,av2);}
default:
t8=C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm:396: scheme#newline */
t10=*((C_word*)lf[95]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(t6))){
t10=(
/* extras.scm:399: fetch */
  f_2291(((C_word*)((C_word*)t0)[4])[1])
);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp);
t12=(
  f_2498(t11,t10)
);
/* extras.scm:405: loop */
t24=t1;
t1=t24;
goto loop;}
else{
/* extras.scm:403: ##sys#error */
t10=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=lf[96];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}}}}
else{
/* extras.scm:404: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word av2[4];
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}

/* k2331 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2333,c,av);}
/* extras.scm:405: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2320(t2,((C_word*)t0)[3]);}

/* k2356 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2358,c,av);}
/* extras.scm:383: scheme#write */
t2=*((C_word*)lf[92]+1);{
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

/* k2369 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2371(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2371,c,av);}
/* extras.scm:384: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2382 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2384,c,av);}
/* extras.scm:385: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k2395 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2397(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2397,c,av);}
/* extras.scm:386: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2399 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2401,c,av);}
/* extras.scm:386: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(2);
tp(4,av2);}}

/* k2412 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2414,c,av);}
/* extras.scm:387: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2416 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2418,c,av);}
/* extras.scm:387: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(8);
tp(4,av2);}}

/* k2429 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2431,c,av);}
/* extras.scm:388: scheme#display */
t2=*((C_word*)lf[86]+1);{
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

/* k2433 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2435,c,av);}
/* extras.scm:388: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[23]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(16);
tp(4,av2);}}

/* k2451 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_2453,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:392: next */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2301(t3,t2);}

/* k2454 in k2451 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2456,c,av);}
a=C_alloc(4);
t2=C_i_check_list_2(t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* extras.scm:394: rec */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2284(t4,t3,((C_word*)t0)[6],t1);}

/* k2460 in k2454 in k2451 in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2462,c,av);}
/* extras.scm:405: loop */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2320(t2,((C_word*)t0)[3]);}

/* skip in loop in rec in k2251 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static C_word f_2498(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_u_i_char_whitespacep(t1))){
t2=(
/* extras.scm:401: fetch */
  f_2291(((C_word*)((C_word*)t0)[2])[1])
);
t5=t2;
t1=t5;
goto loop;}
else{
t2=C_fixnum_difference(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t3=C_set_block_item(((C_word*)t0)[3],0,t2);
return(t3);}}

/* k2554 in chicken.format#fprintf0 in k2218 in k871 in k868 */
static void C_ccall f_2556(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2556,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_2253(2,av2);}}
else{
/* extras.scm:362: scheme#open-output-string */
t2=C_fast_retrieve(lf[26]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* chicken.format#fprintf in k2218 in k871 in k868 */
static void C_ccall f_2567(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-4)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2567,c,av);}
a=C_alloc((c-4)*C_SIZEOF_PAIR+0);
t4=C_build_rest(&a,c,4,av);
C_word t5;
/* extras.scm:411: fprintf0 */
f_2246(t1,lf[99],t2,t3,t4);}

/* chicken.format#printf in k2218 in k871 in k868 */
static void C_ccall f_2573(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2573,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:414: fprintf0 */
f_2246(t1,lf[101],*((C_word*)lf[85]+1),t2,t3);}

/* chicken.format#sprintf in k2218 in k871 in k868 */
static void C_ccall f_2579(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +0,c,5)))){
C_save_and_reclaim((void*)f_2579,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+0);
t3=C_build_rest(&a,c,3,av);
C_word t4;
/* extras.scm:417: fprintf0 */
f_2246(t1,lf[103],C_SCHEME_FALSE,t2,t3);}

/* chicken.format#format in k2218 in k871 in k868 */
static void C_ccall f_2585(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +12,c,3)))){
C_save_and_reclaim((void*)f_2585,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+12);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2593,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_not(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[102]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_booleanp(t2))){{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[100]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t6=C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t7=C_set_block_item(t4,0,t6);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t1;
av2[2]=*((C_word*)lf[102]+1);
av2[3]=((C_word*)t4)[1];
C_apply(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2618,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:424: scheme#output-port? */
t7=C_fast_retrieve(lf[107]);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}}}

/* k2591 in chicken.format#format in k2218 in k871 in k868 */
static void C_ccall f_2593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2593,c,av);}{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}

/* k2616 in chicken.format#format in k2218 in k871 in k868 */
static void C_ccall f_2618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_2618,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=*((C_word*)lf[98]+1);
av2[3]=((C_word*)((C_word*)t0)[3])[1];
C_apply(4,av2);}}
else{
/* extras.scm:426: ##sys#error */
t2=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[105];
av2[3]=lf[106];
av2[4]=((C_word*)t0)[2];
av2[5]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(6,av2);}}}

/* k2626 in k2218 in k871 in k868 */
static void C_ccall f_2628(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_2628,c,av);}
a=C_alloc(32);
t2=C_a_i_provide(&a,1,lf[108]);
t3=C_mutate((C_word*)lf[109]+1 /* (set! chicken.random#set-pseudo-random-seed! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[112]+1 /* (set! chicken.random#pseudo-random-integer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2666,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[115]+1 /* (set! chicken.random#pseudo-random-real ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2682,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t6=C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_RANDOM_STATE_SIZE);
t7=C_mutate((C_word*)lf[116]+1 /* (set! chicken.random#random-bytes ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2685,a[2]=t6,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp));
t8=C_a_i_provide(&a,1,lf[122]);
t9=C_mutate((C_word*)lf[123]+1 /* (set! chicken.version#version>=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2780,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t10=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}

/* chicken.random#set-pseudo-random-seed! in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2630(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_2630,c,av);}
a=C_alloc(7);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,3,t0));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2637,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t6)[1])){
t8=C_i_check_fixnum_2(((C_word*)t6)[1],lf[110]);
if(C_truep(C_fixnum_lessp(((C_word*)t6)[1],C_fix(0)))){
/* extras.scm:442: ##sys#error */
t9=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t7;
av2[2]=lf[110];
av2[3]=lf[111];
av2[4]=((C_word*)t6)[1];
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t9=C_SCHEME_UNDEFINED;
t10=t7;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
f_2637(2,av2);}}}
else{
t8=C_block_size(t2);
t9=C_set_block_item(t6,0,t8);
t10=t7;{
C_word *av2=av;
av2[0]=t10;
av2[1]=t9;
f_2637(2,av2);}}}

/* k2635 in chicken.random#set-pseudo-random-seed! in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2637,c,av);}
t2=C_i_check_bytevector_2(((C_word*)t0)[2],lf[110]);
t3=C_block_size(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_set_random_seed(((C_word*)t0)[2],C_i_fixnum_min(((C_word*)((C_word*)t0)[4])[1],t3));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* chicken.random#pseudo-random-integer in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,4)))){
C_save_and_reclaim((void *)f_2666,c,av);}
a=C_alloc(2);
if(C_truep(C_fixnump(t2))){
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_random_fixnum(t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_not(C_i_bignump(t2)))){
/* extras.scm:454: ##sys#error */
t3=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=lf[113];
av2[3]=lf[114];
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_s_a_u_i_random_int(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* chicken.random#pseudo-random-real in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,1)))){
C_save_and_reclaim((void *)f_2682,c,av);}
a=C_alloc(2);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_random_real(&a,0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.random#random-bytes in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2685(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_2685,c,av);}
a=C_alloc(6);
t2=C_rest_nullp(c,2);
t3=(C_truep(t2)?C_SCHEME_FALSE:C_get_rest_arg(c,2,av,2,t0));
t4=C_rest_nullp(c,2);
t5=C_rest_nullp(c,3);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_get_rest_arg(c,3,av,2,t0));
t7=C_rest_nullp(c,3);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2701,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=C_i_check_fixnum_2(t6,lf[117]);
if(C_truep(C_fixnum_lessp(t6,C_fix(0)))){
/* extras.scm:467: ##sys#error */
t10=*((C_word*)lf[90]+1);{
C_word av2[5];
av2[0]=t10;
av2[1]=t8;
av2[2]=lf[117];
av2[3]=lf[121];
av2[4]=t6;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=t8;{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
f_2701(2,av2);}}}
else{
t9=t8;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
f_2701(2,av2);}}}

/* k2699 in chicken.random#random-bytes in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2701(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_2701,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2720,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_immp(((C_word*)t0)[4]);
if(C_truep(t4)){
if(C_truep(t4)){
/* extras.scm:471: ##sys#error */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[117];
av2[3]=lf[119];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
f_2704(2,av2);}}}
else{
if(C_truep(C_i_not(C_byteblockp(((C_word*)t0)[4])))){
/* extras.scm:471: ##sys#error */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[117];
av2[3]=lf[119];
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[4];
f_2704(2,av2);}}}}
else{
if(C_truep(((C_word*)t0)[2])){
/* extras.scm:474: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
/* extras.scm:474: ##sys#make-bytevector */
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[120]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}}

/* k2702 in k2699 in chicken.random#random-bytes in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2704,c,av);}
a=C_alloc(4);
t2=(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_block_size(t1));
t3=C_random_bytes(t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
/* extras.scm:478: ##sys#error */
t5=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[117];
av2[3]=lf[118];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2709 in k2702 in k2699 in chicken.random#random-bytes in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2711,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2718 in k2699 in chicken.random#random-bytes in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2720,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_2704(2,av2);}}

/* chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2780(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2780,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2783,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
t5=C_i_check_string_2(t2,lf[127]);
t6=C_i_check_string_2(t3,lf[127]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2899,a[2]=t1,a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:506: version->list */
f_2783(t7,t2);}

/* version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void f_2783(C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,4)))){
C_save_and_reclaim_args((void *)trf_2783,2,t1,t2);}
a=C_alloc(18);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_string_length(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2801,a[2]=t5,a[3]=t6,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2843,a[2]=t7,a[3]=t2,a[4]=t10,a[5]=((C_word)li51),tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2843(t12,t8,C_fix(0),C_fix(0));}

/* k2790 in map-loop655 in k2799 in version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2792(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2792,c,av);}
a=C_alloc(3);
t2=(C_truep(t1)?C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST):C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST));
t3=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=((C_word*)((C_word*)t0)[4])[1];
f_2809(t5,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}

/* k2799 in version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2801(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_2801,c,av);}
a=C_alloc(8);
t2=C_i_check_list_2(t1,lf[124]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2809,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word)li50),tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_2809(t6,((C_word*)t0)[4],t1);}

/* map-loop655 in k2799 in version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void f_2809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_2809,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2792,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm:495: scheme#string->number */
t5=*((C_word*)lf[125]+1);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* loop in version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void f_2843(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2843,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[2]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm:498: scheme#substring */
t5=*((C_word*)lf[126]+1);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}
else{
t4=C_i_string_ref(((C_word*)t0)[3],t3);
if(C_truep((C_truep(C_eqp(t4,C_make_character(45)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(92)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(46)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(95)))?C_SCHEME_TRUE:(C_truep(C_eqp(t4,C_make_character(47)))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2872,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm:500: scheme#substring */
t6=*((C_word*)lf[126]+1);{
C_word av2[5];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* extras.scm:503: loop */
t7=t1;
t8=t2;
t9=C_fixnum_plus(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}}

/* k2855 in loop in version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2857,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list1(&a,1,t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2870 in loop in version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_2872,c,av);}
a=C_alloc(4);
t2=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:502: loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2843(t4,t3,t2,t2);}

/* k2877 in k2870 in loop in version->list in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2879,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2897 in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2899,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2903,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* extras.scm:507: version->list */
f_2783(t2,((C_word*)t0)[4]);}

/* k2901 in k2897 in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2903(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2903,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2905,a[2]=t3,a[3]=((C_word)li53),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2905(t5,((C_word*)t0)[2],((C_word*)t0)[3],t1);}

/* loop in k2901 in k2897 in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void f_2905(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2905,4,t0,t1,t2,t3);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_i_nullp(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_nullp(t3);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_numberp(t5))){
t6=C_i_car(t3);
if(C_truep(C_i_numberp(t6))){
t7=C_i_greaterp(C_u_i_car(t2),C_u_i_car(t3));
if(C_truep(t7)){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
if(C_truep(C_i_nequalp(C_u_i_car(t2),C_u_i_car(t3)))){
/* extras.scm:514: loop */
t10=t1;
t11=C_u_i_cdr(t2);
t12=C_u_i_cdr(t3);
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}}
else{
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t6=C_i_car(t3);
t7=C_i_numberp(t6);
if(C_truep(t7)){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2973,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* extras.scm:516: scheme#string>? */
t9=*((C_word*)lf[128]+1);{
C_word av2[4];
av2[0]=t9;
av2[1]=t8;
av2[2]=C_u_i_car(t2);
av2[3]=C_u_i_car(t3);
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}}}}}

/* k2971 in loop in k2901 in k2897 in chicken.version#version>=? in k2626 in k2218 in k871 in k868 */
static void C_ccall f_2973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2973,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_u_i_car(((C_word*)t0)[3]);
t3=C_u_i_car(((C_word*)t0)[4]);
if(C_truep(C_i_string_equal_p(t2,t3))){
/* extras.scm:519: loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2905(t4,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[3]),C_u_i_cdr(((C_word*)t0)[4]));}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k868 */
static void C_ccall f_870(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_870,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k871 in k868 */
static void C_ccall f_873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_873,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[2] /* (set! chicken.pretty-print#generic-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_875,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2220,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm:339: scheme#make-parameter */
t4=C_fast_retrieve(lf[131]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(79);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* chicken.pretty-print#generic-write in k871 in k868 */
static void f_875(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(43,0,4)))){
C_save_and_reclaim_args((void *)trf_875,5,t1,t2,t3,t4,t5);}
a=C_alloc(43);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_878,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_940,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_979,a[2]=t5,a[3]=((C_word)li2),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_998,a[2]=t13,a[3]=t9,a[4]=t11,a[5]=t7,a[6]=t3,a[7]=((C_word)li9),tmp=(C_word)a,a+=8,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1540,a[2]=t11,a[3]=t3,a[4]=t4,a[5]=t13,a[6]=t9,a[7]=t7,a[8]=((C_word)li33),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2207,a[2]=t11,a[3]=t1,a[4]=t15,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[4];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t21;
av2[2]=C_fix(1);
av2[3]=C_make_character(10);
tp(4,av2);}}
else{
/* extras.scm:334: wr */
t21=((C_word*)t13)[1];
f_998(t21,t1,t2,C_fix(0));}}

/* read-macro? in chicken.pretty-print#generic-write in k871 in k868 */
static void f_878(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_878,2,t1,t2);}
a=C_alloc(4);
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=C_eqp(t3,lf[3]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_906,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_906(t7,t5);}
else{
t7=C_eqp(t3,lf[4]);
if(C_truep(t7)){
t8=t6;
f_906(t8,t7);}
else{
t8=C_eqp(t3,lf[5]);
t9=t6;
f_906(t9,(C_truep(t8)?t8:C_eqp(t3,lf[6])));}}}

/* k904 in read-macro? in chicken.pretty-print#generic-write in k871 in k868 */
static void f_906(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,1)))){
C_save_and_reclaim_args((void *)trf_906,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_pairp(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=(C_truep(t2)?C_i_nullp(C_u_i_cdr(((C_word*)t0)[2])):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* read-macro-prefix in chicken.pretty-print#generic-write in k871 in k868 */
static C_word f_940(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_eqp(t2,lf[3]);
if(C_truep(t4)){
return(lf[7]);}
else{
t5=C_eqp(t2,lf[4]);
if(C_truep(t5)){
return(lf[8]);}
else{
t6=C_eqp(t2,lf[5]);
if(C_truep(t6)){
return(lf[9]);}
else{
t7=C_eqp(t2,lf[6]);
return((C_truep(t7)?lf[10]:C_SCHEME_UNDEFINED));}}}}

/* out in chicken.pretty-print#generic-write in k871 in k868 */
static void f_979(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_979,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_989,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:71: output */
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k987 in out in chicken.pretty-print#generic-write in k871 in k868 */
static void C_ccall f_989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_989,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_i_string_length(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_s_a_i_plus(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* wr in chicken.pretty-print#generic-write in k871 in k868 */
static void f_998(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_998,4,t0,t1,t2,t3);}
a=C_alloc(23);
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word)li3),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word)li5),tmp=(C_word)a,a+=5,tmp));
if(C_truep(C_i_pairp(t2))){
/* extras.scm:91: wr-expr */
t9=t4;
f_1001(t9,t1,t2,t3);}
else{
if(C_truep(C_i_nullp(t2))){
/* extras.scm:92: wr-lst */
t9=((C_word*)t6)[1];
f_1028(t9,t1,t2,t3);}
else{
if(C_truep(C_eofp(t2))){
/* extras.scm:93: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_979(t9,t1,lf[17],t3);}
else{
if(C_truep(C_bwpp(t2))){
/* extras.scm:94: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_979(t9,t1,lf[18],t3);}
else{
if(C_truep(C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1155,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* extras.scm:95: scheme#vector->list */
t10=*((C_word*)lf[20]+1);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}
else{
if(C_truep(C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm:96: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_979(t9,t1,lf[21],t3);}
else{
/* extras.scm:96: out */
t9=((C_word*)((C_word*)t0)[4])[1];
f_979(t9,t1,lf[22],t3);}}
else{
if(C_truep(C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1185,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm:97: ##sys#number->string */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[23]);
C_word av2[3];
av2[0]=*((C_word*)lf[23]+1);
av2[1]=t9;
av2[2]=t2;
tp(3,av2);}}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1191,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* extras.scm:98: chicken.keyword#keyword? */
t10=C_fast_retrieve(lf[56]);{
C_word av2[3];
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t10+1)))(3,av2);}}}}}}}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_extras_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("extras"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_extras_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(602))){
C_save(t1);
C_rereclaim2(602*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,132);
lf[0]=C_h_intern(&lf[0],6, C_text("extras"));
lf[1]=C_h_intern(&lf[1],21, C_text("chicken.pretty-print#"));
lf[3]=C_h_intern(&lf[3],5, C_text("quote"));
lf[4]=C_h_intern(&lf[4],10, C_text("quasiquote"));
lf[5]=C_h_intern(&lf[5],7, C_text("unquote"));
lf[6]=C_h_intern(&lf[6],16, C_text("unquote-splicing"));
lf[7]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\047\000"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\140\000"));
lf[9]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\054\000"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\100\000"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\040\056\040\000"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\050\051\000"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\043\041\145\157\146\000"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\043\041\142\167\160\000"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[20]=C_h_intern(&lf[20],19, C_text("scheme#vector->list"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\164\000"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\146\000"));
lf[23]=C_h_intern(&lf[23],20, C_text("##sys#number->string"));
lf[24]=C_h_intern(&lf[24],24, C_text("scheme#get-output-string"));
lf[25]=C_h_intern(&lf[25],11, C_text("##sys#print"));
lf[26]=C_h_intern(&lf[26],25, C_text("scheme#open-output-string"));
lf[27]=C_h_intern(&lf[27],23, C_text("##sys#procedure->string"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\134\000"));
lf[29]=C_h_intern(&lf[29],15, C_text("##sys#substring"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\011\376\002\000\000\003\134\164\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\012\376\002\000\000\003\134\156\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\015\376\002\000\000\003\134\162\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\013\376\002\000\000\003\134\166\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\014\376\002\000\000\003\134\146\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\007\376\002\000\000\003\134\141\000\376\003\000\000\002\376\003\000\000\002\376\377\012\000\000\010\376\002\000\000\003\134\142\000\376\377\016"));
lf[31]=C_h_intern(&lf[31],20, C_text("scheme#string-append"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\134\170\000"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\073\000"));
lf[34]=C_h_intern(&lf[34],20, C_text("##sys#fixnum->string"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\042\000"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\042\000"));
lf[37]=C_h_intern(&lf[37],17, C_text("##sys#make-string"));
lf[38]=C_h_intern(&lf[38],27, C_text("##sys#symbol->string/shared"));
lf[39]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\170\000"));
lf[40]=C_h_intern(&lf[40],22, C_text("chicken.base#char-name"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\043\134\000"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\043\074\165\156\163\160\145\143\151\146\151\145\144\076\000"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\043\074\165\156\142\157\165\156\144\040\166\141\154\165\145\076\000"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\043\074\165\156\160\162\151\156\164\141\142\154\145\040\157\142\152\145\143\164\076\000"));
lf[45]=C_h_intern(&lf[45],21, C_text("##sys#pointer->string"));
lf[46]=C_h_intern(&lf[46],21, C_text("##sys#user-print-hook"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\043\074\160\157\162\164\040\000"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\076\000"));
lf[49]=C_h_intern(&lf[49],22, C_text("##sys#bytevector->list"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\043\165\070\000"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\076\000"));
lf[52]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\043\074\154\141\155\142\144\141\040\151\156\146\157\040\000"));
lf[53]=C_h_intern(&lf[53],25, C_text("##sys#lambda-info->string"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\043\074\165\156\160\162\151\156\164\141\142\154\145\040\157\142\152\145\143\164\076\000"));
lf[55]=C_h_intern(&lf[55],12, C_text("scheme#port?"));
lf[56]=C_h_intern(&lf[56],24, C_text("chicken.keyword#keyword?"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\040\040\040\040\040\040\040\040\000"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\040\040\040\040\040\040\040\040\000"));
lf[59]=C_h_intern(&lf[59],36, C_text("chicken.string#reverse-string-append"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\043\000"));
lf[61]=C_h_intern(&lf[61],10, C_text("scheme#max"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\051\000"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\050\000"));
lf[69]=C_h_intern(&lf[69],6, C_text("lambda"));
lf[70]=C_h_intern(&lf[70],2, C_text("if"));
lf[71]=C_h_intern(&lf[71],4, C_text("set!"));
lf[72]=C_h_intern(&lf[72],4, C_text("cond"));
lf[73]=C_h_intern(&lf[73],4, C_text("case"));
lf[74]=C_h_intern(&lf[74],3, C_text("and"));
lf[75]=C_h_intern(&lf[75],2, C_text("or"));
lf[76]=C_h_intern(&lf[76],3, C_text("let"));
lf[77]=C_h_intern(&lf[77],5, C_text("begin"));
lf[78]=C_h_intern(&lf[78],2, C_text("do"));
lf[79]=C_h_intern(&lf[79],4, C_text("let*"));
lf[80]=C_h_intern(&lf[80],6, C_text("letrec"));
lf[81]=C_h_intern(&lf[81],7, C_text("letrec*"));
lf[82]=C_h_intern(&lf[82],6, C_text("define"));
lf[83]=C_h_intern(&lf[83],39, C_text("chicken.pretty-print#pretty-print-width"));
lf[84]=C_h_intern(&lf[84],33, C_text("chicken.pretty-print#pretty-print"));
lf[85]=C_h_intern(&lf[85],21, C_text("##sys#standard-output"));
lf[86]=C_h_intern(&lf[86],14, C_text("scheme#display"));
lf[87]=C_h_intern(&lf[87],23, C_text("chicken.pretty-print#pp"));
lf[88]=C_h_intern(&lf[88],15, C_text("chicken.format#"));
lf[90]=C_h_intern(&lf[90],11, C_text("##sys#error"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\164\157\157\040\146\145\167\040\141\162\147\165\155\145\156\164\163\040\164\157\040\146\157\162\155\141\164\164\145\144\040\157\165\164\160\165\164\040\160\162\157\143\145\144\165\162\145\000"));
lf[92]=C_h_intern(&lf[92],12, C_text("scheme#write"));
lf[93]=C_h_intern(&lf[93],18, C_text("##sys#write-char-0"));
lf[94]=C_h_intern(&lf[94],18, C_text("##sys#flush-output"));
lf[95]=C_h_intern(&lf[95],14, C_text("scheme#newline"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\040\151\154\154\145\147\141\154\040\146\157\162\155\141\164\055\163\164\162\151\156\147\040\143\150\141\162\141\143\164\145\162\000"));
lf[97]=C_h_intern(&lf[97],15, C_text("##sys#tty-port?"));
lf[98]=C_h_intern(&lf[98],22, C_text("chicken.format#fprintf"));
lf[99]=C_h_intern(&lf[99],7, C_text("fprintf"));
lf[100]=C_h_intern(&lf[100],21, C_text("chicken.format#printf"));
lf[101]=C_h_intern(&lf[101],6, C_text("printf"));
lf[102]=C_h_intern(&lf[102],22, C_text("chicken.format#sprintf"));
lf[103]=C_h_intern(&lf[103],7, C_text("sprintf"));
lf[104]=C_h_intern(&lf[104],21, C_text("chicken.format#format"));
lf[105]=C_h_intern(&lf[105],6, C_text("format"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\154\154\145\147\141\154\040\144\145\163\164\151\156\141\164\151\157\156\000"));
lf[107]=C_h_intern(&lf[107],19, C_text("scheme#output-port?"));
lf[108]=C_h_intern(&lf[108],15, C_text("chicken.random#"));
lf[109]=C_h_intern(&lf[109],38, C_text("chicken.random#set-pseudo-random-seed!"));
lf[110]=C_h_intern(&lf[110],23, C_text("set-pseudo-random-seed!"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\163\151\172\145\000"));
lf[112]=C_h_intern(&lf[112],36, C_text("chicken.random#pseudo-random-integer"));
lf[113]=C_h_intern(&lf[113],21, C_text("pseudo-random-integer"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\142\141\144\040\141\162\147\165\155\145\156\164\040\164\171\160\145\000"));
lf[115]=C_h_intern(&lf[115],33, C_text("chicken.random#pseudo-random-real"));
lf[116]=C_h_intern(&lf[116],27, C_text("chicken.random#random-bytes"));
lf[117]=C_h_intern(&lf[117],12, C_text("random-bytes"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\165\156\141\142\154\145\040\164\157\040\162\145\141\144\040\162\141\156\144\157\155\040\142\171\164\145\163\000"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\151\156\166\141\154\151\144\040\142\165\146\146\145\162\040\164\171\160\145\000"));
lf[120]=C_h_intern(&lf[120],21, C_text("##sys#make-bytevector"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\151\156\166\141\154\151\144\040\163\151\172\145\000"));
lf[122]=C_h_intern(&lf[122],16, C_text("chicken.version#"));
lf[123]=C_h_intern(&lf[123],26, C_text("chicken.version#version>=?"));
lf[124]=C_h_intern(&lf[124],3, C_text("map"));
lf[125]=C_h_intern(&lf[125],21, C_text("scheme#string->number"));
lf[126]=C_h_intern(&lf[126],16, C_text("scheme#substring"));
lf[127]=C_h_intern(&lf[127],10, C_text("version>=?"));
lf[128]=C_h_intern(&lf[128],15, C_text("scheme#string>?"));
lf[129]=C_h_intern(&lf[129],34, C_text("chicken.platform#register-feature!"));
lf[130]=C_h_intern(&lf[130],7, C_text("srfi-28"));
lf[131]=C_h_intern(&lf[131],21, C_text("scheme#make-parameter"));
C_register_lf2(lf,132,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[177] = {
{C_text("f_1001:extras_2escm"),(void*)f_1001},
{C_text("f_1008:extras_2escm"),(void*)f_1008},
{C_text("f_1019:extras_2escm"),(void*)f_1019},
{C_text("f_1028:extras_2escm"),(void*)f_1028},
{C_text("f_1044:extras_2escm"),(void*)f_1044},
{C_text("f_1046:extras_2escm"),(void*)f_1046},
{C_text("f_1068:extras_2escm"),(void*)f_1068},
{C_text("f_1074:extras_2escm"),(void*)f_1074},
{C_text("f_1090:extras_2escm"),(void*)f_1090},
{C_text("f_1094:extras_2escm"),(void*)f_1094},
{C_text("f_1103:extras_2escm"),(void*)f_1103},
{C_text("f_1155:extras_2escm"),(void*)f_1155},
{C_text("f_1159:extras_2escm"),(void*)f_1159},
{C_text("f_1185:extras_2escm"),(void*)f_1185},
{C_text("f_1191:extras_2escm"),(void*)f_1191},
{C_text("f_1197:extras_2escm"),(void*)f_1197},
{C_text("f_1200:extras_2escm"),(void*)f_1200},
{C_text("f_1207:extras_2escm"),(void*)f_1207},
{C_text("f_1220:extras_2escm"),(void*)f_1220},
{C_text("f_1239:extras_2escm"),(void*)f_1239},
{C_text("f_1241:extras_2escm"),(void*)f_1241},
{C_text("f_1269:extras_2escm"),(void*)f_1269},
{C_text("f_1273:extras_2escm"),(void*)f_1273},
{C_text("f_1277:extras_2escm"),(void*)f_1277},
{C_text("f_1297:extras_2escm"),(void*)f_1297},
{C_text("f_1302:extras_2escm"),(void*)f_1302},
{C_text("f_1303:extras_2escm"),(void*)f_1303},
{C_text("f_1321:extras_2escm"),(void*)f_1321},
{C_text("f_1325:extras_2escm"),(void*)f_1325},
{C_text("f_1334:extras_2escm"),(void*)f_1334},
{C_text("f_1350:extras_2escm"),(void*)f_1350},
{C_text("f_1354:extras_2escm"),(void*)f_1354},
{C_text("f_1377:extras_2escm"),(void*)f_1377},
{C_text("f_1385:extras_2escm"),(void*)f_1385},
{C_text("f_1388:extras_2escm"),(void*)f_1388},
{C_text("f_1392:extras_2escm"),(void*)f_1392},
{C_text("f_1400:extras_2escm"),(void*)f_1400},
{C_text("f_1419:extras_2escm"),(void*)f_1419},
{C_text("f_1423:extras_2escm"),(void*)f_1423},
{C_text("f_1432:extras_2escm"),(void*)f_1432},
{C_text("f_1465:extras_2escm"),(void*)f_1465},
{C_text("f_1474:extras_2escm"),(void*)f_1474},
{C_text("f_1477:extras_2escm"),(void*)f_1477},
{C_text("f_1484:extras_2escm"),(void*)f_1484},
{C_text("f_1490:extras_2escm"),(void*)f_1490},
{C_text("f_1497:extras_2escm"),(void*)f_1497},
{C_text("f_1507:extras_2escm"),(void*)f_1507},
{C_text("f_1514:extras_2escm"),(void*)f_1514},
{C_text("f_1524:extras_2escm"),(void*)f_1524},
{C_text("f_1528:extras_2escm"),(void*)f_1528},
{C_text("f_1532:extras_2escm"),(void*)f_1532},
{C_text("f_1540:extras_2escm"),(void*)f_1540},
{C_text("f_1543:extras_2escm"),(void*)f_1543},
{C_text("f_1567:extras_2escm"),(void*)f_1567},
{C_text("f_1574:extras_2escm"),(void*)f_1574},
{C_text("f_1576:extras_2escm"),(void*)f_1576},
{C_text("f_1592:extras_2escm"),(void*)f_1592},
{C_text("f_1599:extras_2escm"),(void*)f_1599},
{C_text("f_1610:extras_2escm"),(void*)f_1610},
{C_text("f_1623:extras_2escm"),(void*)f_1623},
{C_text("f_1626:extras_2escm"),(void*)f_1626},
{C_text("f_1639:extras_2escm"),(void*)f_1639},
{C_text("f_1655:extras_2escm"),(void*)f_1655},
{C_text("f_1659:extras_2escm"),(void*)f_1659},
{C_text("f_1661:extras_2escm"),(void*)f_1661},
{C_text("f_1697:extras_2escm"),(void*)f_1697},
{C_text("f_1704:extras_2escm"),(void*)f_1704},
{C_text("f_1715:extras_2escm"),(void*)f_1715},
{C_text("f_1731:extras_2escm"),(void*)f_1731},
{C_text("f_1757:extras_2escm"),(void*)f_1757},
{C_text("f_1762:extras_2escm"),(void*)f_1762},
{C_text("f_1766:extras_2escm"),(void*)f_1766},
{C_text("f_1786:extras_2escm"),(void*)f_1786},
{C_text("f_1788:extras_2escm"),(void*)f_1788},
{C_text("f_1792:extras_2escm"),(void*)f_1792},
{C_text("f_1797:extras_2escm"),(void*)f_1797},
{C_text("f_1803:extras_2escm"),(void*)f_1803},
{C_text("f_1824:extras_2escm"),(void*)f_1824},
{C_text("f_1830:extras_2escm"),(void*)f_1830},
{C_text("f_1852:extras_2escm"),(void*)f_1852},
{C_text("f_1856:extras_2escm"),(void*)f_1856},
{C_text("f_1864:extras_2escm"),(void*)f_1864},
{C_text("f_1868:extras_2escm"),(void*)f_1868},
{C_text("f_1870:extras_2escm"),(void*)f_1870},
{C_text("f_1873:extras_2escm"),(void*)f_1873},
{C_text("f_1894:extras_2escm"),(void*)f_1894},
{C_text("f_1898:extras_2escm"),(void*)f_1898},
{C_text("f_1912:extras_2escm"),(void*)f_1912},
{C_text("f_1933:extras_2escm"),(void*)f_1933},
{C_text("f_1937:extras_2escm"),(void*)f_1937},
{C_text("f_1951:extras_2escm"),(void*)f_1951},
{C_text("f_1962:extras_2escm"),(void*)f_1962},
{C_text("f_1975:extras_2escm"),(void*)f_1975},
{C_text("f_1990:extras_2escm"),(void*)f_1990},
{C_text("f_2008:extras_2escm"),(void*)f_2008},
{C_text("f_2010:extras_2escm"),(void*)f_2010},
{C_text("f_2016:extras_2escm"),(void*)f_2016},
{C_text("f_2022:extras_2escm"),(void*)f_2022},
{C_text("f_2028:extras_2escm"),(void*)f_2028},
{C_text("f_2034:extras_2escm"),(void*)f_2034},
{C_text("f_2040:extras_2escm"),(void*)f_2040},
{C_text("f_2046:extras_2escm"),(void*)f_2046},
{C_text("f_2066:extras_2escm"),(void*)f_2066},
{C_text("f_2072:extras_2escm"),(void*)f_2072},
{C_text("f_2081:extras_2escm"),(void*)f_2081},
{C_text("f_2091:extras_2escm"),(void*)f_2091},
{C_text("f_2207:extras_2escm"),(void*)f_2207},
{C_text("f_2211:extras_2escm"),(void*)f_2211},
{C_text("f_2220:extras_2escm"),(void*)f_2220},
{C_text("f_2222:extras_2escm"),(void*)f_2222},
{C_text("f_2229:extras_2escm"),(void*)f_2229},
{C_text("f_2233:extras_2escm"),(void*)f_2233},
{C_text("f_2235:extras_2escm"),(void*)f_2235},
{C_text("f_2239:extras_2escm"),(void*)f_2239},
{C_text("f_2246:extras_2escm"),(void*)f_2246},
{C_text("f_2253:extras_2escm"),(void*)f_2253},
{C_text("f_2256:extras_2escm"),(void*)f_2256},
{C_text("f_2278:extras_2escm"),(void*)f_2278},
{C_text("f_2284:extras_2escm"),(void*)f_2284},
{C_text("f_2291:extras_2escm"),(void*)f_2291},
{C_text("f_2301:extras_2escm"),(void*)f_2301},
{C_text("f_2320:extras_2escm"),(void*)f_2320},
{C_text("f_2333:extras_2escm"),(void*)f_2333},
{C_text("f_2358:extras_2escm"),(void*)f_2358},
{C_text("f_2371:extras_2escm"),(void*)f_2371},
{C_text("f_2384:extras_2escm"),(void*)f_2384},
{C_text("f_2397:extras_2escm"),(void*)f_2397},
{C_text("f_2401:extras_2escm"),(void*)f_2401},
{C_text("f_2414:extras_2escm"),(void*)f_2414},
{C_text("f_2418:extras_2escm"),(void*)f_2418},
{C_text("f_2431:extras_2escm"),(void*)f_2431},
{C_text("f_2435:extras_2escm"),(void*)f_2435},
{C_text("f_2453:extras_2escm"),(void*)f_2453},
{C_text("f_2456:extras_2escm"),(void*)f_2456},
{C_text("f_2462:extras_2escm"),(void*)f_2462},
{C_text("f_2498:extras_2escm"),(void*)f_2498},
{C_text("f_2556:extras_2escm"),(void*)f_2556},
{C_text("f_2567:extras_2escm"),(void*)f_2567},
{C_text("f_2573:extras_2escm"),(void*)f_2573},
{C_text("f_2579:extras_2escm"),(void*)f_2579},
{C_text("f_2585:extras_2escm"),(void*)f_2585},
{C_text("f_2593:extras_2escm"),(void*)f_2593},
{C_text("f_2618:extras_2escm"),(void*)f_2618},
{C_text("f_2628:extras_2escm"),(void*)f_2628},
{C_text("f_2630:extras_2escm"),(void*)f_2630},
{C_text("f_2637:extras_2escm"),(void*)f_2637},
{C_text("f_2666:extras_2escm"),(void*)f_2666},
{C_text("f_2682:extras_2escm"),(void*)f_2682},
{C_text("f_2685:extras_2escm"),(void*)f_2685},
{C_text("f_2701:extras_2escm"),(void*)f_2701},
{C_text("f_2704:extras_2escm"),(void*)f_2704},
{C_text("f_2711:extras_2escm"),(void*)f_2711},
{C_text("f_2720:extras_2escm"),(void*)f_2720},
{C_text("f_2780:extras_2escm"),(void*)f_2780},
{C_text("f_2783:extras_2escm"),(void*)f_2783},
{C_text("f_2792:extras_2escm"),(void*)f_2792},
{C_text("f_2801:extras_2escm"),(void*)f_2801},
{C_text("f_2809:extras_2escm"),(void*)f_2809},
{C_text("f_2843:extras_2escm"),(void*)f_2843},
{C_text("f_2857:extras_2escm"),(void*)f_2857},
{C_text("f_2872:extras_2escm"),(void*)f_2872},
{C_text("f_2879:extras_2escm"),(void*)f_2879},
{C_text("f_2899:extras_2escm"),(void*)f_2899},
{C_text("f_2903:extras_2escm"),(void*)f_2903},
{C_text("f_2905:extras_2escm"),(void*)f_2905},
{C_text("f_2973:extras_2escm"),(void*)f_2973},
{C_text("f_870:extras_2escm"),(void*)f_870},
{C_text("f_873:extras_2escm"),(void*)f_873},
{C_text("f_875:extras_2escm"),(void*)f_875},
{C_text("f_878:extras_2escm"),(void*)f_878},
{C_text("f_906:extras_2escm"),(void*)f_906},
{C_text("f_940:extras_2escm"),(void*)f_940},
{C_text("f_979:extras_2escm"),(void*)f_979},
{C_text("f_989:extras_2escm"),(void*)f_989},
{C_text("f_998:extras_2escm"),(void*)f_998},
{C_text("toplevel:extras_2escm"),(void*)C_extras_toplevel},
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
o|hiding unexported module binding: chicken.pretty-print#generic-write 
o|hiding unexported module binding: chicken.format#fprintf0 
S|applied compiler syntax:
S|  scheme#map		1
o|eliminated procedure checks: 17 
o|specializations:
o|  1 (scheme#string=? * *)
o|  1 (scheme#memv (or symbol keyword procedure eof null fixnum char boolean) list)
o|  1 (scheme#< fixnum fixnum)
o|  11 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#string-length string)
o|  1 (##sys#check-output-port * * *)
o|  1 (scheme#current-output-port)
o|  4 (scheme#make-string fixnum char)
o|  2 (scheme#number->string fixnum fixnum)
o|  1 (scheme#assq * (list-of pair))
o|  1 (scheme#char<? char char)
o|  1 (scheme#+ fixnum fixnum)
o|  2 (scheme#char=? char char)
o|  13 (scheme#car pair)
o|  22 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  15 (scheme#cdr pair)
(o e)|safe calls: 237 
(o e)|assignments to immediate values: 6 
o|safe globals: (chicken.pretty-print#generic-write) 
o|inlining procedure: k898 
o|contracted procedure: "(extras.scm:56) length1?126" 
o|inlining procedure: k883 
o|inlining procedure: k883 
o|inlining procedure: k898 
o|inlining procedure: k913 
o|inlining procedure: k913 
o|substituted constant variable: a926 
o|substituted constant variable: a928 
o|substituted constant variable: a930 
o|substituted constant variable: a932 
o|inlining procedure: k946 
o|inlining procedure: k946 
o|inlining procedure: k958 
o|inlining procedure: k958 
o|substituted constant variable: a971 
o|substituted constant variable: a973 
o|substituted constant variable: a975 
o|substituted constant variable: a977 
o|inlining procedure: k981 
o|inlining procedure: k981 
o|inlining procedure: k1003 
o|inlining procedure: "(extras.scm:77) read-macro-body120" 
o|inlining procedure: k1003 
o|inlining procedure: k1030 
o|inlining procedure: k1048 
o|inlining procedure: k1048 
o|inlining procedure: k1075 
o|inlining procedure: k1075 
o|inlining procedure: k1030 
o|inlining procedure: k1107 
o|inlining procedure: k1107 
o|inlining procedure: k1125 
o|inlining procedure: k1125 
o|inlining procedure: k1143 
o|inlining procedure: k1143 
o|inlining procedure: k1170 
o|inlining procedure: k1170 
o|inlining procedure: k1173 
o|inlining procedure: k1173 
o|inlining procedure: k1208 
o|inlining procedure: k1208 
o|inlining procedure: k1227 
o|inlining procedure: k1227 
o|inlining procedure: k1243 
o|substituted constant variable: a1256 
o|substituted constant variable: a1265 
o|substituted constant variable: a1282 
o|inlining procedure: k1278 
o|substituted constant variable: a1299 
o|inlining procedure: k1300 
o|inlining procedure: k1300 
o|substituted constant variable: a1330 
o|inlining procedure: k1278 
o|substituted constant variable: a1343 
o|inlining procedure: k1243 
o|inlining procedure: k1362 
o|substituted constant variable: a1378 
o|inlining procedure: k1389 
o|inlining procedure: k1389 
o|substituted constant variable: a1425 
o|substituted constant variable: a1433 
o|inlining procedure: k1362 
o|inlining procedure: k1444 
o|inlining procedure: k1444 
o|inlining procedure: k1456 
o|inlining procedure: k1456 
o|inlining procedure: k1485 
o|inlining procedure: k1485 
o|inlining procedure: k1515 
o|inlining procedure: k1515 
o|inlining procedure: k1545 
o|inlining procedure: k1545 
o|inlining procedure: k1578 
o|inlining procedure: k1587 
o|inlining procedure: k1587 
o|substituted constant variable: a1600 
o|substituted constant variable: a1601 
o|inlining procedure: k1578 
o|inlining procedure: k1612 
o|inlining procedure: k1640 
o|inlining procedure: k1640 
o|substituted constant variable: max-expr-width251 
o|inlining procedure: k1612 
o|inlining procedure: k1699 
o|inlining procedure: "(extras.scm:203) read-macro-body120" 
o|inlining procedure: k1699 
o|inlining procedure: k1732 
o|inlining procedure: k1732 
o|substituted constant variable: max-call-head-width250 
o|inlining procedure: k1767 
o|inlining procedure: k1767 
o|inlining procedure: k1805 
o|inlining procedure: k1837 
o|inlining procedure: k1837 
o|inlining procedure: k1805 
o|inlining procedure: k1875 
o|inlining procedure: k1875 
o|inlining procedure: k1914 
o|inlining procedure: k1914 
o|inlining procedure: k1963 
o|substituted constant variable: indent-general249 
o|inlining procedure: k1963 
o|substituted constant variable: indent-general249 
o|inlining procedure: k2083 
o|inlining procedure: k2083 
o|inlining procedure: k2101 
o|inlining procedure: k2101 
o|inlining procedure: k2113 
o|inlining procedure: k2113 
o|inlining procedure: k2128 
o|inlining procedure: k2128 
o|substituted constant variable: a2141 
o|substituted constant variable: a2143 
o|substituted constant variable: a2145 
o|substituted constant variable: a2150 
o|substituted constant variable: a2152 
o|substituted constant variable: a2154 
o|substituted constant variable: a2156 
o|substituted constant variable: a2161 
o|substituted constant variable: a2163 
o|inlining procedure: k2167 
o|inlining procedure: k2167 
o|inlining procedure: k2179 
o|inlining procedure: k2179 
o|substituted constant variable: a2186 
o|substituted constant variable: a2188 
o|substituted constant variable: a2190 
o|substituted constant variable: a2192 
o|substituted constant variable: a2194 
o|inlining procedure: k2198 
o|substituted constant variable: a2212 
o|substituted constant variable: a2213 
o|inlining procedure: k2198 
o|inlining procedure: k2257 
o|inlining procedure: k2257 
o|inlining procedure: k2303 
o|inlining procedure: k2303 
o|inlining procedure: k2322 
o|inlining procedure: k2322 
o|inlining procedure: k2346 
o|inlining procedure: k2346 
o|inlining procedure: k2372 
o|inlining procedure: k2372 
o|inlining procedure: k2402 
o|inlining procedure: k2402 
o|inlining procedure: k2436 
o|inlining procedure: k2436 
o|inlining procedure: k2463 
o|inlining procedure: k2463 
o|inlining procedure: k2484 
o|inlining procedure: k2500 
o|inlining procedure: k2500 
o|inlining procedure: k2484 
o|substituted constant variable: a2524 
o|substituted constant variable: a2526 
o|substituted constant variable: a2528 
o|substituted constant variable: a2530 
o|substituted constant variable: a2532 
o|substituted constant variable: a2534 
o|substituted constant variable: a2536 
o|substituted constant variable: a2538 
o|substituted constant variable: a2540 
o|substituted constant variable: a2542 
o|substituted constant variable: a2544 
o|substituted constant variable: a2564 
o|inlining procedure: k2591 
o|propagated global variable: r25923129 chicken.format#sprintf 
o|inlining procedure: k2591 
o|inlining procedure: k2603 
o|propagated global variable: r26043133 chicken.format#sprintf 
o|inlining procedure: k2603 
o|inlining procedure: k2649 
o|inlining procedure: k2649 
o|inlining procedure: k2668 
o|inlining procedure: k2668 
o|inlining procedure: k2709 
o|inlining procedure: k2709 
o|inlining procedure: k2718 
o|inlining procedure: k2718 
o|inlining procedure: k2738 
o|inlining procedure: k2738 
o|inlining procedure: k2744 
o|inlining procedure: k2744 
o|substituted constant variable: a2754 
o|inlining procedure: k2811 
o|contracted procedure: "(extras.scm:495) g661670" 
o|inlining procedure: k2793 
o|inlining procedure: k2793 
o|inlining procedure: k2811 
o|inlining procedure: k2845 
o|inlining procedure: k2845 
o|substituted constant variable: a2865 
o|inlining procedure: k2907 
o|inlining procedure: k2907 
o|inlining procedure: k2922 
o|inlining procedure: k2937 
o|inlining procedure: k2937 
o|inlining procedure: k2922 
o|inlining procedure: k2974 
o|inlining procedure: k2974 
o|simplifications: ((if . 1)) 
o|replaced variables: 677 
o|removed binding forms: 114 
o|substituted constant variable: r8843005 
o|substituted constant variable: r8993006 
o|removed side-effect free assignment to unused variable: read-macro-body120 
o|substituted constant variable: r9473009 
o|substituted constant variable: r9593011 
o|substituted constant variable: r9823014 
o|substituted constant variable: r11713034 
o|substituted constant variable: r11713034 
o|substituted constant variable: r11713036 
o|substituted constant variable: r11713036 
o|substituted constant variable: r15883068 
o|substituted constant variable: r15793069 
o|substituted constant variable: r17683084 
o|substituted constant variable: r18063088 
o|removed side-effect free assignment to unused variable: indent-general249 
o|removed side-effect free assignment to unused variable: max-call-head-width250 
o|removed side-effect free assignment to unused variable: max-expr-width251 
o|inlining procedure: k2331 
o|propagated global variable: a25903130 chicken.format#sprintf 
o|inlining procedure: k2591 
o|propagated global variable: r25923195 chicken.format#printf 
o|propagated global variable: r25923195 chicken.format#printf 
o|inlining procedure: k2591 
o|propagated global variable: r25923197 chicken.format#sprintf 
o|propagated global variable: r25923197 chicken.format#sprintf 
o|inlining procedure: k2591 
o|propagated global variable: r25923199 chicken.format#fprintf 
o|propagated global variable: r25923199 chicken.format#fprintf 
o|converted assignments to bindings: (version->list651) 
o|simplifications: ((let . 1)) 
o|replaced variables: 38 
o|removed binding forms: 564 
o|inlining procedure: k2051 
o|inlining procedure: k2554 
o|inlining procedure: k2832 
o|inlining procedure: k2832 
o|removed binding forms: 62 
o|substituted constant variable: r20523218 
o|substituted constant variable: r25553225 
o|inlining procedure: k2724 
o|replaced variables: 2 
o|removed binding forms: 1 
o|removed conditional forms: 1 
o|replaced variables: 1 
o|removed binding forms: 4 
o|removed binding forms: 1 
o|simplifications: ((if . 28) (let . 16) (##core#call . 190)) 
o|  call simplifications:
o|    scheme#=
o|    scheme#list
o|    ##sys#setslot
o|    ##sys#immediate?
o|    ##sys#check-fixnum	2
o|    ##sys#check-bytevector
o|    ##sys#size	3
o|    scheme#apply	5
o|    ##sys#check-string	3
o|    chicken.fixnum#fx>=	2
o|    scheme#char-upcase
o|    scheme#char-whitespace?	2
o|    chicken.fixnum#fx-
o|    ##sys#check-list	2
o|    scheme#cons	7
o|    scheme#<
o|    scheme#>	6
o|    scheme#-	5
o|    scheme#eof-object?
o|    chicken.base#bwp-object?
o|    scheme#vector?	2
o|    scheme#boolean?	2
o|    scheme#number?	4
o|    scheme#symbol?	3
o|    scheme#procedure?
o|    scheme#string?	2
o|    scheme#char?
o|    ##sys#generic-structure?
o|    ##sys#slot	6
o|    chicken.fixnum#fx>
o|    chicken.fixnum#fx<	4
o|    scheme#string-ref	3
o|    chicken.fixnum#fx+	6
o|    scheme#char->integer	2
o|    scheme#cdr	4
o|    scheme#not	6
o|    scheme#cadr	2
o|    scheme#string-length	5
o|    scheme#+	11
o|    scheme#car	14
o|    scheme#eq?	35
o|    scheme#pair?	13
o|    scheme#null?	15
o|contracted procedure: k894 
o|contracted procedure: k901 
o|contracted procedure: k886 
o|contracted procedure: k910 
o|contracted procedure: k916 
o|contracted procedure: k942 
o|contracted procedure: k949 
o|contracted procedure: k955 
o|contracted procedure: k961 
o|contracted procedure: k967 
o|contracted procedure: k994 
o|contracted procedure: k1013 
o|contracted procedure: k1033 
o|contracted procedure: k1051 
o|contracted procedure: k1057 
o|contracted procedure: k1078 
o|contracted procedure: k1110 
o|contracted procedure: k1119 
o|contracted procedure: k1128 
o|contracted procedure: k1137 
o|contracted procedure: k1146 
o|contracted procedure: k1163 
o|contracted procedure: k1176 
o|contracted procedure: k1192 
o|contracted procedure: k1211 
o|contracted procedure: k1224 
o|contracted procedure: k1249 
o|contracted procedure: k1257 
o|contracted procedure: k1287 
o|contracted procedure: k1291 
o|contracted procedure: k1309 
o|contracted procedure: k1327 
o|contracted procedure: k1339 
o|contracted procedure: k1359 
o|contracted procedure: k1365 
o|contracted procedure: k1380 
o|contracted procedure: k1407 
o|contracted procedure: k1410 
o|contracted procedure: k1469 
o|contracted procedure: k1499 
o|contracted procedure: k1548 
o|contracted procedure: k1554 
o|contracted procedure: k1561 
o|contracted procedure: k1584 
o|contracted procedure: k1606 
o|contracted procedure: k1615 
o|contracted procedure: k1618 
o|contracted procedure: k1630 
o|contracted procedure: k1643 
o|contracted procedure: k1664 
o|contracted procedure: k1675 
o|contracted procedure: k1668 
o|contracted procedure: k1687 
o|contracted procedure: k1683 
o|contracted procedure: k1679 
o|contracted procedure: k1709 
o|contracted procedure: k1720 
o|contracted procedure: k1726 
o|contracted procedure: k1751 
o|contracted procedure: k1741 
o|contracted procedure: k1776 
o|contracted procedure: k1780 
o|contracted procedure: k1811 
o|contracted procedure: k1831 
o|contracted procedure: k1815 
o|contracted procedure: k1840 
o|contracted procedure: k1858 
o|contracted procedure: k1878 
o|contracted procedure: k1881 
o|contracted procedure: k1899 
o|contracted procedure: k1885 
o|contracted procedure: k1917 
o|contracted procedure: k1920 
o|contracted procedure: k1938 
o|contracted procedure: k1924 
o|contracted procedure: k1956 
o|contracted procedure: k1966 
o|contracted procedure: k1969 
o|contracted procedure: k1980 
o|contracted procedure: k1984 
o|contracted procedure: k1995 
o|contracted procedure: k1999 
o|contracted procedure: k2048 
o|contracted procedure: k2057 
o|contracted procedure: k2051 
o|contracted procedure: k2086 
o|contracted procedure: k2095 
o|contracted procedure: k2098 
o|contracted procedure: k2104 
o|contracted procedure: k2110 
o|contracted procedure: k2116 
o|contracted procedure: k2119 
o|contracted procedure: k2125 
o|contracted procedure: k2131 
o|contracted procedure: k2137 
o|contracted procedure: k2164 
o|contracted procedure: k2170 
o|contracted procedure: k2176 
o|contracted procedure: k2240 
o|contracted procedure: k2224 
o|contracted procedure: k2248 
o|contracted procedure: k2260 
o|contracted procedure: k2280 
o|contracted procedure: k2269 
o|contracted procedure: k2286 
o|contracted procedure: k2293 
o|contracted procedure: k2297 
o|contracted procedure: k2309 
o|contracted procedure: k2313 
o|contracted procedure: k2325 
o|contracted procedure: k2548 
o|contracted procedure: k2337 
o|contracted procedure: k2343 
o|contracted procedure: k2349 
o|contracted procedure: k2362 
o|contracted procedure: k2375 
o|contracted procedure: k2388 
o|contracted procedure: k2405 
o|contracted procedure: k2422 
o|contracted procedure: k2439 
o|contracted procedure: k2448 
o|contracted procedure: k2457 
o|contracted procedure: k2466 
o|contracted procedure: k2475 
o|contracted procedure: k2478 
o|contracted procedure: k2487 
o|contracted procedure: k2503 
o|contracted procedure: k2514 
o|contracted procedure: k2594 
o|contracted procedure: k2600 
o|contracted procedure: k2606 
o|contracted procedure: k2610 
o|contracted procedure: k2620 
o|contracted procedure: k2659 
o|contracted procedure: k2632 
o|contracted procedure: k2638 
o|contracted procedure: k2643 
o|contracted procedure: k2646 
o|contracted procedure: k2656 
o|contracted procedure: k2674 
o|contracted procedure: k2773 
o|contracted procedure: k2687 
o|contracted procedure: k2767 
o|contracted procedure: k2690 
o|contracted procedure: k2761 
o|contracted procedure: k2693 
o|contracted procedure: k2755 
o|contracted procedure: k2696 
o|contracted procedure: k2706 
o|contracted procedure: k2721 
o|contracted procedure: k2724 
o|contracted procedure: k2741 
o|contracted procedure: k2747 
o|contracted procedure: k2785 
o|contracted procedure: k2796 
o|contracted procedure: k2802 
o|contracted procedure: k2814 
o|contracted procedure: k2836 
o|contracted procedure: k2817 
o|contracted procedure: k2820 
o|contracted procedure: k2828 
o|contracted procedure: k2848 
o|contracted procedure: k2862 
o|contracted procedure: k2874 
o|contracted procedure: k2884 
o|contracted procedure: k2887 
o|contracted procedure: k2890 
o|contracted procedure: k2910 
o|contracted procedure: k2916 
o|contracted procedure: k3000 
o|contracted procedure: k2925 
o|contracted procedure: k2962 
o|contracted procedure: k2931 
o|contracted procedure: k2934 
o|contracted procedure: k2943 
o|contracted procedure: k2996 
o|contracted procedure: k2965 
o|simplifications: ((if . 1) (let . 58)) 
o|removed binding forms: 177 
o|contracted procedure: k1246 
(o x)|known list op on rest arg sublist: ##core#rest-car opt428 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest576578 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest576578 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest603604 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest603604 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest603604 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest603604 0 
o|removed binding forms: 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2691 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r2691 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r2691 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r2691 1 
o|removed binding forms: 2 
o|direct leaf routine/allocation: read-macro-prefix121 0 
o|direct leaf routine/allocation: fetch476 0 
o|contracted procedure: "(extras.scm:77) k1021" 
o|contracted procedure: "(extras.scm:204) k1717" 
o|contracted procedure: "(extras.scm:379) k2328" 
o|contracted procedure: "(extras.scm:381) k2340" 
o|contracted procedure: "(extras.scm:399) k2494" 
o|contracted procedure: "(extras.scm:401) k2510" 
o|removed binding forms: 6 
o|direct leaf routine/allocation: skip499 0 
o|inlining procedure: k2331 
o|converted assignments to bindings: (skip499) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (version->list651 loop693 loop677 map-loop655686 chicken.format#fprintf0 rec471 next477 loop482 pp124 k2089 tail1311 tail3313 tail2312 indent233 loop293 pp-down238 style252 pp-call236 pp-general239 pr234 chicken.pretty-print#generic-write pp-list237 spaces232 g219220 g207208 loop187 wr-expr167 loop173 read-macro?119 wr-lst168 out122 wr123 k904) 
o|shared closure containers: 3 
o|shared closure users: 3 
o|calls to known targets: 165 
o|identified direct recursive calls: f_1241 1 
o|identified direct recursive calls: f_2498 1 
o|identified direct recursive calls: f_2320 1 
o|unused rest argument: rest576578 f_2630 
o|unused rest argument: rest603604 f_2685 
o|identified direct recursive calls: f_2843 1 
o|identified direct recursive calls: f_2905 1 
o|fast box initializations: 38 
o|fast global references: 5 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2246 
o|dropping unused closure argument: f_2783 
o|dropping unused closure argument: f_875 
o|dropping unused closure argument: f_878 
o|dropping unused closure argument: f_940 
*/
/* end of file */
