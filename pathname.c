/* Generated from pathname.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: pathname.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file pathname.c -emit-import-library chicken.pathname
   unit: pathname
   uses: data-structures irregex library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_extern void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[73];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,63,32,112,110,41};
static C_char li1[] C_aligned={C_lihdr(0,0,8),40,108,112,32,108,101,110,41};
static C_char li2[] C_aligned={C_lihdr(0,0,31),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,99,104,111,112,45,112,100,115,32,115,116,114,41,0};
static C_char li3[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,115,116,114,115,41,0,0,0,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,16),40,99,111,110,99,45,100,105,114,115,32,100,105,114,115,41};
static C_char li5[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,105,122,101,45,100,105,114,115,32,100,105,114,115,41};
static C_char li6[] C_aligned={C_lihdr(0,0,33),40,95,109,97,107,101,45,112,97,116,104,110,97,109,101,32,108,111,99,32,100,105,114,32,102,105,108,101,32,101,120,116,41,0,0,0,0,0,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,58),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,109,97,107,101,45,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,32,100,105,114,115,32,102,105,108,101,32,46,32,114,101,115,116,41,0,0,0,0,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,15),40,115,116,114,105,112,45,112,100,115,32,100,105,114,41,0};
static C_char li10[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,112,97,116,104,110,97,109,101,32,112,110,41};
static C_char li11[] C_aligned={C_lihdr(0,0,7),40,97,49,48,49,52,41,0};
static C_char li12[] C_aligned={C_lihdr(0,0,29),40,97,49,48,50,48,32,100,105,114,50,52,51,32,102,105,108,101,50,52,53,32,101,120,116,50,52,55,41,0,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,100,105,114,101,99,116,111,114,121,32,112,110,41};
static C_char li14[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,57,41,0};
static C_char li15[] C_aligned={C_lihdr(0,0,29),40,97,49,48,51,53,32,100,105,114,50,53,55,32,102,105,108,101,50,53,57,32,101,120,116,50,54,49,41,0,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,35),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,102,105,108,101,32,112,110,41,0,0,0,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,7),40,97,49,48,52,52,41,0};
static C_char li18[] C_aligned={C_lihdr(0,0,29),40,97,49,48,53,48,32,100,105,114,50,55,49,32,102,105,108,101,50,55,51,32,101,120,116,50,55,53,41,0,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,40),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,101,120,116,101,110,115,105,111,110,32,112,110,41};
static C_char li20[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,57,41,0};
static C_char li21[] C_aligned={C_lihdr(0,0,29),40,97,49,48,54,53,32,100,105,114,50,56,53,32,102,105,108,101,50,56,55,32,101,120,116,50,56,57,41,0,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,100,105,114,101,99,116,111,114,121,32,112,110,41,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,7),40,97,49,48,55,55,41,0};
static C_char li24[] C_aligned={C_lihdr(0,0,29),40,97,49,48,56,51,32,100,105,114,50,57,57,32,102,105,108,101,51,48,49,32,101,120,116,51,48,51,41,0,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,46),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,115,116,114,105,112,45,101,120,116,101,110,115,105,111,110,32,112,110,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,7),40,97,49,48,57,53,41,0};
static C_char li27[] C_aligned={C_lihdr(0,0,27),40,97,49,49,48,49,32,95,51,49,52,32,102,105,108,101,51,49,54,32,101,120,116,51,49,56,41,0,0,0,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,100,105,114,101,99,116,111,114,121,32,112,110,32,100,105,114,41,0,0,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,51,41,0};
static C_char li30[] C_aligned={C_lihdr(0,0,26),40,97,49,49,49,57,32,100,105,114,51,50,57,32,95,51,51,49,32,101,120,116,51,51,51,41,0,0,0,0,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,102,105,108,101,32,112,110,32,102,105,108,101,41};
static C_char li32[] C_aligned={C_lihdr(0,0,7),40,97,49,49,51,49,41,0};
static C_char li33[] C_aligned={C_lihdr(0,0,27),40,97,49,49,51,55,32,100,105,114,51,52,52,32,102,105,108,101,51,52,54,32,95,51,52,56,41,0,0,0,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,52),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,112,97,116,104,110,97,109,101,45,114,101,112,108,97,99,101,45,101,120,116,101,110,115,105,111,110,32,112,110,32,101,120,116,41,0,0,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,15),40,97,100,100,112,97,114,116,32,112,97,114,116,115,41,0};
static C_char li36[] C_aligned={C_lihdr(0,0,8),40,103,51,57,57,32,112,41};
static C_char li37[] C_aligned={C_lihdr(0,0,23),40,102,111,114,45,101,97,99,104,45,108,111,111,112,51,57,56,32,103,52,48,53,41,0};
static C_char li38[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,105,32,112,114,101,118,32,112,97,114,116,115,41,0,0,0,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,49),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,110,111,114,109,97,108,105,122,101,45,112,97,116,104,110,97,109,101,32,112,97,116,104,32,46,32,114,101,115,116,41,0,0,0,0,0,0,0};
static C_char li40[] C_aligned={C_lihdr(0,0,48),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,115,112,108,105,116,45,100,105,114,101,99,116,111,114,121,32,108,111,99,32,100,105,114,32,107,101,101,112,63,41};
static C_char li41[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char li42[] C_aligned={C_lihdr(0,0,38),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,105,114,101,99,116,111,114,121,45,110,117,108,108,63,32,100,105,114,41,0,0};
static C_char li43[] C_aligned={C_lihdr(0,0,42),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,100,101,99,111,109,112,111,115,101,45,100,105,114,101,99,116,111,114,121,32,100,105,114,41,0,0,0,0,0,0};
static C_char li44[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char li45[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char li46[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char li47[] C_aligned={C_lihdr(0,0,44),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,97,98,115,111,108,117,116,101,45,112,97,116,104,110,97,109,101,45,114,111,111,116,32,112,110,41,0,0,0,0};
static C_char li48[] C_aligned={C_lihdr(0,0,33),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,111,114,105,103,105,110,32,114,116,41,0,0,0,0,0,0,0};
static C_char li49[] C_aligned={C_lihdr(0,0,36),40,99,104,105,99,107,101,110,46,112,97,116,104,110,97,109,101,35,114,111,111,116,45,100,105,114,101,99,116,111,114,121,32,114,116,41,0,0,0,0};
static C_char li50[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word *av) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word *av) C_noret;
C_noret_decl(f_1015)
static void C_ccall f_1015(C_word c,C_word *av) C_noret;
C_noret_decl(f_1021)
static void C_ccall f_1021(C_word c,C_word *av) C_noret;
C_noret_decl(f_1024)
static void C_ccall f_1024(C_word c,C_word *av) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word *av) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word *av) C_noret;
C_noret_decl(f_1039)
static void C_ccall f_1039(C_word c,C_word *av) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word *av) C_noret;
C_noret_decl(f_1051)
static void C_ccall f_1051(C_word c,C_word *av) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word *av) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word *av) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word *av) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word *av) C_noret;
C_noret_decl(f_1078)
static void C_ccall f_1078(C_word c,C_word *av) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word *av) C_noret;
C_noret_decl(f_1090)
static void C_ccall f_1090(C_word c,C_word *av) C_noret;
C_noret_decl(f_1096)
static void C_ccall f_1096(C_word c,C_word *av) C_noret;
C_noret_decl(f_1102)
static void C_ccall f_1102(C_word c,C_word *av) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word *av) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word *av) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word *av) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word *av) C_noret;
C_noret_decl(f_1132)
static void C_ccall f_1132(C_word c,C_word *av) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word *av) C_noret;
C_noret_decl(f_1148)
static C_word f_1148(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word *av) C_noret;
C_noret_decl(f_1202)
static void f_1202(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1212)
static void f_1212(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word *av) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word *av) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word *av) C_noret;
C_noret_decl(f_1243)
static void f_1243(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word *av) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word *av) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word *av) C_noret;
C_noret_decl(f_1263)
static void C_ccall f_1263(C_word c,C_word *av) C_noret;
C_noret_decl(f_1266)
static void f_1266(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1273)
static void C_ccall f_1273(C_word c,C_word *av) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1292)
static void f_1292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1302)
static void C_ccall f_1302(C_word c,C_word *av) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word *av) C_noret;
C_noret_decl(f_1337)
static void f_1337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word *av) C_noret;
C_noret_decl(f_1389)
static void f_1389(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word *av) C_noret;
C_noret_decl(f_1440)
static void f_1440(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word *av) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word *av) C_noret;
C_noret_decl(f_1463)
static C_word f_1463(C_word t0);
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word *av) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word *av) C_noret;
C_noret_decl(f_1536)
static void C_ccall f_1536(C_word c,C_word *av) C_noret;
C_noret_decl(f_1539)
static void C_ccall f_1539(C_word c,C_word *av) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word *av) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word *av) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word *av) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word *av) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word *av) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word *av) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word *av) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word *av) C_noret;
C_noret_decl(f_1603)
static void C_ccall f_1603(C_word c,C_word *av) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word *av) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word *av) C_noret;
C_noret_decl(f_612)
static void C_ccall f_612(C_word c,C_word *av) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word *av) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word *av) C_noret;
C_noret_decl(f_624)
static void f_624(C_word t0,C_word t1) C_noret;
C_noret_decl(f_626)
static void C_ccall f_626(C_word c,C_word *av) C_noret;
C_noret_decl(f_637)
static void C_ccall f_637(C_word c,C_word *av) C_noret;
C_noret_decl(f_639)
static void f_639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_652)
static void f_652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_659)
static void f_659(C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void f_700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_709)
static void f_709(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word *av) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word *av) C_noret;
C_noret_decl(f_751)
static void f_751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_782)
static void f_782(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word *av) C_noret;
C_noret_decl(f_812)
static void f_812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_828)
static void f_828(C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word *av) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word *av) C_noret;
C_noret_decl(f_878)
static void C_ccall f_878(C_word c,C_word *av) C_noret;
C_noret_decl(f_889)
static void C_ccall f_889(C_word c,C_word *av) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word *av) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word *av) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word *av) C_noret;
C_noret_decl(f_917)
static void C_ccall f_917(C_word c,C_word *av) C_noret;
C_noret_decl(f_918)
static void f_918(C_word t0,C_word t1) C_noret;
C_noret_decl(f_925)
static void C_ccall f_925(C_word c,C_word *av) C_noret;
C_noret_decl(f_939)
static void C_ccall f_939(C_word c,C_word *av) C_noret;
C_noret_decl(f_955)
static void C_ccall f_955(C_word c,C_word *av) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word *av) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word *av) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word *av) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word *av) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word *av) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word *av) C_noret;
C_noret_decl(f_994)
static void C_ccall f_994(C_word c,C_word *av) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1202)
static void C_ccall trf_1202(C_word c,C_word *av) C_noret;
static void C_ccall trf_1202(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_1202(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1212)
static void C_ccall trf_1212(C_word c,C_word *av) C_noret;
static void C_ccall trf_1212(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1212(t0,t1);}

C_noret_decl(trf_1243)
static void C_ccall trf_1243(C_word c,C_word *av) C_noret;
static void C_ccall trf_1243(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1243(t0,t1,t2);}

C_noret_decl(trf_1266)
static void C_ccall trf_1266(C_word c,C_word *av) C_noret;
static void C_ccall trf_1266(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1266(t0,t1);}

C_noret_decl(trf_1292)
static void C_ccall trf_1292(C_word c,C_word *av) C_noret;
static void C_ccall trf_1292(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1292(t0,t1,t2);}

C_noret_decl(trf_1337)
static void C_ccall trf_1337(C_word c,C_word *av) C_noret;
static void C_ccall trf_1337(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1337(t0,t1);}

C_noret_decl(trf_1389)
static void C_ccall trf_1389(C_word c,C_word *av) C_noret;
static void C_ccall trf_1389(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_1389(t0,t1);}

C_noret_decl(trf_1440)
static void C_ccall trf_1440(C_word c,C_word *av) C_noret;
static void C_ccall trf_1440(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1440(t0,t1,t2,t3);}

C_noret_decl(trf_624)
static void C_ccall trf_624(C_word c,C_word *av) C_noret;
static void C_ccall trf_624(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_624(t0,t1);}

C_noret_decl(trf_639)
static void C_ccall trf_639(C_word c,C_word *av) C_noret;
static void C_ccall trf_639(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_639(t0,t1);}

C_noret_decl(trf_652)
static void C_ccall trf_652(C_word c,C_word *av) C_noret;
static void C_ccall trf_652(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_652(t0,t1,t2);}

C_noret_decl(trf_659)
static void C_ccall trf_659(C_word c,C_word *av) C_noret;
static void C_ccall trf_659(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_659(t0,t1);}

C_noret_decl(trf_700)
static void C_ccall trf_700(C_word c,C_word *av) C_noret;
static void C_ccall trf_700(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_700(t0,t1);}

C_noret_decl(trf_709)
static void C_ccall trf_709(C_word c,C_word *av) C_noret;
static void C_ccall trf_709(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_709(t0,t1,t2);}

C_noret_decl(trf_751)
static void C_ccall trf_751(C_word c,C_word *av) C_noret;
static void C_ccall trf_751(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_751(t0,t1,t2);}

C_noret_decl(trf_782)
static void C_ccall trf_782(C_word c,C_word *av) C_noret;
static void C_ccall trf_782(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_782(t0,t1,t2,t3,t4);}

C_noret_decl(trf_812)
static void C_ccall trf_812(C_word c,C_word *av) C_noret;
static void C_ccall trf_812(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_812(t0,t1);}

C_noret_decl(trf_828)
static void C_ccall trf_828(C_word c,C_word *av) C_noret;
static void C_ccall trf_828(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_828(t0,t1);}

C_noret_decl(trf_918)
static void C_ccall trf_918(C_word c,C_word *av) C_noret;
static void C_ccall trf_918(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_918(t0,t1);}

/* k1003 in k978 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1005,c,av);}
/* pathname.scm:186: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* chicken.pathname#pathname-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1009,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1015,a[2]=t2,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1021,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:190: ##sys#call-with-values */{
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

/* a1014 in chicken.pathname#pathname-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1015,c,av);}
/* pathname.scm:190: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1020 in chicken.pathname#pathname-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1021(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1021,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-file in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1024,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1030,a[2]=t2,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1036,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:195: ##sys#call-with-values */{
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

/* a1029 in chicken.pathname#pathname-file in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1030,c,av);}
/* pathname.scm:195: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1035 in chicken.pathname#pathname-file in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1036(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1036,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1039,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1045,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1051,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:200: ##sys#call-with-values */{
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

/* a1044 in chicken.pathname#pathname-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1045,c,av);}
/* pathname.scm:200: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1050 in chicken.pathname#pathname-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1051(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1051,c,av);}
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.pathname#pathname-strip-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1054,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1060,a[2]=t2,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1066,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:205: ##sys#call-with-values */{
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

/* a1059 in chicken.pathname#pathname-strip-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1060,c,av);}
/* pathname.scm:205: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1065 in chicken.pathname#pathname-strip-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1066,c,av);}
/* pathname.scm:206: make-pathname */
t5=C_fast_retrieve(lf[19]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-strip-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(7,c,5)))){
C_save_and_reclaim((void *)f_1072,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1078,a[2]=t2,a[3]=((C_word)li23),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1084,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:210: ##sys#call-with-values */{
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

/* a1077 in chicken.pathname#pathname-strip-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1078,c,av);}
/* pathname.scm:210: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1083 in chicken.pathname#pathname-strip-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4=av[4];
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1084,c,av);}
/* pathname.scm:211: make-pathname */
t5=C_fast_retrieve(lf[19]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.pathname#pathname-replace-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1090(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1090,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1096,a[2]=t2,a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1102,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:215: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1095 in chicken.pathname#pathname-replace-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1096,c,av);}
/* pathname.scm:215: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1101 in chicken.pathname#pathname-replace-directory in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1102(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1102,c,av);}
/* pathname.scm:216: make-pathname */
t5=C_fast_retrieve(lf[19]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t3;
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-file in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1108(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1108,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1114,a[2]=t2,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1120,a[2]=t3,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:220: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1113 in chicken.pathname#pathname-replace-file in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1114,c,av);}
/* pathname.scm:220: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1119 in chicken.pathname#pathname-replace-file in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1120(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1120,c,av);}
/* pathname.scm:221: make-pathname */
t5=C_fast_retrieve(lf[19]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* chicken.pathname#pathname-replace-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1126(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,5)))){
C_save_and_reclaim((void *)f_1126,c,av);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1132,a[2]=t2,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1138,a[2]=t3,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:225: ##sys#call-with-values */{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t4;
av2[3]=t5;
C_call_with_values(4,av2);}}

/* a1131 in chicken.pathname#pathname-replace-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1132,c,av);}
/* pathname.scm:225: decompose-pathname */
t2=C_fast_retrieve(lf[29]);{
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

/* a1137 in chicken.pathname#pathname-replace-extension in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1138(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1138,c,av);}
/* pathname.scm:226: make-pathname */
t5=C_fast_retrieve(lf[19]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t1;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* addpart in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static C_word f_1148(C_word *a,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
if(C_truep(C_i_string_equal_p(lf[44],t1))){
return(t2);}
else{
if(C_truep(C_i_string_equal_p(lf[45],t1))){
t3=C_i_nullp(t2);
if(C_truep(t3)){
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(lf[46],t4);
return((C_truep(t5)?C_a_i_cons(&a,2,t1,t2):C_i_cdr(t2)));}}
else{
return(C_a_i_cons(&a,2,t1,t2));}}}

/* chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1183(C_word c,C_word *av){
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
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_1183,c,av);}
a=C_alloc(16);
t3=C_rest_nullp(c,3);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_get_rest_arg(c,3,av,3,t0));
t5=C_i_check_string_2(t2,lf[48]);
t6=C_u_i_string_length(t2);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1202,a[2]=t6,a[3]=t8,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t12,a[8]=t4,a[9]=((C_word)li38),tmp=(C_word)a,a+=10,tmp));
t14=((C_word*)t12)[1];
f_1202(t14,t1,C_fix(0),C_fix(0),C_SCHEME_END_OF_LIST);}

/* loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1202(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_1202,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1212,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(t2,t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1328,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:250: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[6];
av2[3]=t3;
av2[4]=t2;
tp(5,av2);}}
else{
t7=t6;
f_1212(t7,C_SCHEME_UNDEFINED);}}
else{
t6=C_i_string_ref(((C_word*)t0)[6],t2);
t7=C_eqp(t6,C_make_character(47));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1337,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[3])[1]))){
t9=C_eqp(t2,t3);
if(C_truep(t9)){
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[49]);
t11=t8;
f_1337(t11,t10);}
else{
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[57]);
t11=t8;
f_1337(t11,t10);}}
else{
t9=t8;
f_1337(t9,C_SCHEME_UNDEFINED);}}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1389,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(((C_word*)t5)[1]))){
t9=C_i_string_ref(((C_word*)t0)[6],t2);
t10=t8;
f_1389(t10,(C_truep(C_u_i_char_equalp(t9,C_make_character(58)))?C_eqp(((C_word*)t0)[8],lf[42]):C_SCHEME_FALSE));}
else{
t9=t8;
f_1389(t9,C_SCHEME_FALSE);}}}}

/* k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1212(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_1212,2,t0,t1);}
a=C_alloc(8);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[7])[1]))){
t2=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[49]);
if(C_truep(t2)){
t3=C_a_i_string(&a,1,C_make_character(47));
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* pathname.scm:253: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[4];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=lf[50];
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* pathname.scm:253: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[4];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=t3;
tp(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1236,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:254: scheme#open-output-string */
t3=C_fast_retrieve(lf[56]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_1236,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1239,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[2],a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[5],a[8]=((C_word*)t2)[6],tmp=(C_word)a,a+=9,tmp);
/* pathname.scm:255: ##sys#fast-reverse */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[7])[1];
tp(3,av2);}}

/* k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_1239,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1242,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:256: scheme#display */
t4=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(((C_word*)t0)[3]);
av2[3]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1242(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1242,c,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1243,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[2],a[5]=((C_word)li36),tmp=(C_word)a,a+=6,tmp);
t4=C_u_i_cdr(((C_word*)t2)[3]);
t5=C_i_check_list_2(t4,lf[53]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1257,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[2],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],tmp=(C_word)a,a+=8,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1292,a[2]=t8,a[3]=t3,a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1292(t10,t6,t4);}

/* g399 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1243(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_1243,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1247,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:259: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word av2[4];
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t5;
av2[2]=C_make_character(47);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k1245 in g399 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1247,c,av);}
t2=((C_word*)t0)[2];
/* pathname.scm:260: scheme#display */
t3=*((C_word*)lf[51]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k1255 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_1257,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1260,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(((C_word*)t0)[6],((C_word*)t0)[7]);
if(C_truep(t3)){
/* pathname.scm:262: ##sys#write-char-0 */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t2;
av2[2]=C_make_character(47);
av2[3]=((C_word*)t0)[5];
tp(4,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_1260(2,av2);}}}

/* k1258 in k1255 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1260,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:263: scheme#get-output-string */
t3=C_fast_retrieve(lf[54]);{
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

/* k1261 in k1258 in k1255 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1263(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_1263,c,av);}
a=C_alloc(19);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1266,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[49]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1280,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_string(&a,1,C_make_character(47));
/* pathname.scm:265: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t6;
av2[2]=t7;
av2[3]=((C_word*)t3)[1];
tp(4,av2);}}
else{
t6=t4;
f_1266(t6,C_SCHEME_UNDEFINED);}}

/* k1264 in k1261 in k1258 in k1255 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1266(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_1266,2,t0,t1);}
a=C_alloc(4);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1273,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:267: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[4];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[2])[1];
av2[3]=((C_word*)((C_word*)t0)[3])[1];
tp(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k1271 in k1264 in k1261 in k1258 in k1255 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1273,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k1278 in k1261 in k1258 in k1255 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1280,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];
f_1266(t3,t2);}

/* for-each-loop398 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_1292,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1302,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:257: g399 */
t4=((C_word*)t0)[3];
f_1243(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k1300 in for-each-loop398 in k1240 in k1237 in k1234 in k1210 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1302,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_1292(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k1326 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_1328,c,av);}
a=C_alloc(9);
t2=(
/* pathname.scm:250: addpart */
  f_1148(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[4];
f_1212(t4,t3);}

/* k1335 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_1337,2,t0,t1);}
a=C_alloc(8);
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
/* pathname.scm:273: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1202(t3,((C_word*)t0)[5],C_fixnum_plus(((C_word*)t0)[2],C_fix(1)),C_fixnum_plus(((C_word*)t0)[2],C_fix(1)),((C_word*)((C_word*)t0)[6])[1]);}
else{
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t4=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1373,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* pathname.scm:276: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k1371 in k1335 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_1373,c,av);}
a=C_alloc(9);
t2=(
/* pathname.scm:276: addpart */
  f_1148(C_a_i(&a,9),t1,((C_word*)((C_word*)t0)[3])[1])
);
/* pathname.scm:274: loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1202(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t2);}

/* k1387 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1389(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_1389,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:280: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_fix(0);
av2[4]=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
tp(5,av2);}}
else{
/* pathname.scm:282: loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1202(t2,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),((C_word*)t0)[7],((C_word*)((C_word*)t0)[8])[1]);}}

/* k1391 in k1387 in loop in chicken.pathname#normalize-pathname in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_1393,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
/* pathname.scm:281: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1202(t3,((C_word*)t0)[4],C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_fixnum_plus(((C_word*)t0)[5],C_fix(1)),C_SCHEME_END_OF_LIST);}

/* chicken.pathname#split-directory in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_1440(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_1440,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t3,t2);
if(C_truep(C_fast_retrieve(lf[24]))){
/* pathname.scm:290: chicken.string#string-split */
t6=C_fast_retrieve(lf[59]);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[60];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}
else{
/* pathname.scm:290: chicken.string#string-split */
t6=C_fast_retrieve(lf[59]);{
C_word av2[5];
av2[0]=t6;
av2[1]=t1;
av2[2]=t3;
av2[3]=lf[61];
av2[4]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}}

/* chicken.pathname#directory-null? in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1453,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1461,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(t2))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t2;
f_1461(2,av2);}}
else{
/* pathname.scm:296: split-directory */
f_1440(t3,lf[65],t2,C_SCHEME_TRUE);}}

/* k1459 in chicken.pathname#directory-null? in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1461,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1463,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
  f_1463(t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* loop in k1459 in chicken.pathname#directory-null? in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static C_word f_1463(C_word t1){
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
if(C_truep((C_truep(C_i_equalp(t3,lf[63]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[64]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=C_u_i_cdr(t1);
t1=t5;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* chicken.pathname#decompose-directory in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1493(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_1493,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1536,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:322: split-directory */
f_1440(t3,lf[67],t2,C_SCHEME_FALSE);}

/* k1530 in k1547 in k1540 in k1537 in k1534 in chicken.pathname#decompose-directory in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_1532,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
/* pathname.scm:325: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
C_values(5,av2);}}

/* k1534 in chicken.pathname#decompose-directory in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1536,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1539,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:323: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[2];
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k1537 in k1534 in chicken.pathname#decompose-directory in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1539,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1542,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:324: root-origin */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[3]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[3];
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k1540 in k1537 in k1534 in chicken.pathname#decompose-directory in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_1542,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1549,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:325: root-directory */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[4]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=lf[4];
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}

/* k1547 in k1540 in k1537 in k1534 in chicken.pathname#decompose-directory in k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1549(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_1549,c,av);}
a=C_alloc(6);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(C_truep(t3)?((C_word*)t0)[2]:C_SCHEME_FALSE);
if(C_truep(C_i_not(((C_word*)t0)[3]))){
/* pathname.scm:325: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t4;
C_values(5,av2);}}
else{
t5=C_i_car(t4);
t6=C_i_string_length(((C_word*)t0)[3]);
if(C_truep(C_i_not(C_u_i_substring_equal_p(((C_word*)t0)[3],t5,C_fix(0),C_fix(0),t6)))){
/* pathname.scm:325: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t4;
C_values(5,av2);}}
else{
t7=C_u_i_cdr(t4);
t8=C_i_string_length(t5);
t9=C_eqp(t6,t8);
if(C_truep(t9)){
/* pathname.scm:325: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=t7;
C_values(5,av2);}}
else{
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1532,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:321: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t10;
av2[2]=t5;
av2[3]=t6;
av2[4]=t8;
tp(5,av2);}}}}}

/* k1569 in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_1571(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,5)))){
C_save_and_reclaim((void *)f_1571,c,av);}
a=C_alloc(17);
t2=C_eqp(t1,lf[41]);
t3=(C_truep(t2)?lf[42]:lf[43]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1148,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
t5=C_mutate((C_word*)lf[47]+1 /* (set! chicken.pathname#normalize-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1183,a[2]=t3,a[3]=t4,a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate(&lf[58] /* (set! chicken.pathname#split-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1440,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[62]+1 /* (set! chicken.pathname#directory-null? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1453,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[66]+1 /* (set! chicken.pathname#decompose-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1493,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}

/* k1572 in k616 in k613 in k610 */
static void C_ccall f_1574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1574,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1576,a[2]=t1,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1582,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1591,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_624(t5,t4);}

/* chicken.pathname#absolute-pathname-root in k1572 in k616 in k613 in k610 */
static void C_ccall f_1576(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1576,c,av);}
/* pathname.scm:73: chicken.irregex#irregex-match */
t3=C_fast_retrieve(lf[70]);{
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

/* chicken.pathname#root-origin in k1572 in k616 in k613 in k610 */
static void C_ccall f_1582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1582,c,av);}
if(C_truep(t2)){
/* pathname.scm:74: chicken.irregex#irregex-match-substring */
t3=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* chicken.pathname#root-directory in k1572 in k616 in k613 in k610 */
static void C_ccall f_1591(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1591,c,av);}
if(C_truep(t2)){
/* pathname.scm:75: chicken.irregex#irregex-match-substring */
t3=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1599 in k616 in k613 in k610 */
static void C_ccall f_1601(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_1601,c,av);}
a=C_alloc(10);
t2=C_mutate(&lf[2] /* (set! chicken.pathname#absolute-pathname-root ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1603,a[2]=t1,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate(&lf[3] /* (set! chicken.pathname#root-origin ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1609,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[4] /* (set! chicken.pathname#root-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1612,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t0)[2];
f_624(t5,t4);}

/* chicken.pathname#absolute-pathname-root in k1599 in k616 in k613 in k610 */
static void C_ccall f_1603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1603,c,av);}
/* pathname.scm:77: chicken.irregex#irregex-match */
t3=C_fast_retrieve(lf[70]);{
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

/* chicken.pathname#root-origin in k1599 in k616 in k613 in k610 */
static void C_ccall f_1609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_1609,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.pathname#root-directory in k1599 in k616 in k613 in k610 */
static void C_ccall f_1612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1612,c,av);}
if(C_truep(t2)){
/* pathname.scm:79: chicken.irregex#irregex-match-substring */
t3=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k610 */
static void C_ccall f_612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_612,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k613 in k610 */
static void C_ccall f_615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_615,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_library_toplevel(2,av2);}}

/* k616 in k613 in k610 */
static void C_ccall f_618(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_618,c,av);}
a=C_alloc(6);
t2=lf[2] /* chicken.pathname#absolute-pathname-root */ =C_SCHEME_UNDEFINED;;
t3=lf[3] /* chicken.pathname#root-origin */ =C_SCHEME_UNDEFINED;;
t4=lf[4] /* chicken.pathname#root-directory */ =C_SCHEME_UNDEFINED;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[24]))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1574,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:72: chicken.irregex#irregex */
t7=C_fast_retrieve(lf[69]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[71];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:76: chicken.irregex#irregex */
t7=C_fast_retrieve(lf[69]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[72];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k622 in k616 in k613 in k610 */
static void f_624(C_word t0,C_word t1){
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
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(36,0,6)))){
C_save_and_reclaim_args((void *)trf_624,2,t0,t1);}
a=C_alloc(36);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.pathname#absolute-pathname? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_626,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[8] /* (set! chicken.pathname#chop-pds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_639,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_700,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t11=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_751,a[2]=t5,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_782,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[19]+1 /* (set! chicken.pathname#make-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_859,a[2]=t9,a[3]=t7,a[4]=((C_word)li7),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[20]+1 /* (set! chicken.pathname#make-absolute-pathname ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_878,a[2]=t9,a[3]=t7,a[4]=((C_word)li8),tmp=(C_word)a,a+=5,tmp));
t15=(C_truep(C_fast_retrieve(lf[24]))?lf[25]:lf[26]);
t16=(C_truep(C_fast_retrieve(lf[24]))?lf[27]:lf[28]);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_914,a[2]=((C_word*)t0)[2],a[3]=t16,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:161: chicken.irregex#irregex */
t18=C_fast_retrieve(lf[69]);{
C_word av2[3];
av2[0]=t18;
av2[1]=t17;
av2[2]=t15;
((C_proc)(void*)(*((C_word*)t18+1)))(3,av2);}}

/* chicken.pathname#absolute-pathname? in k622 in k616 in k613 in k610 */
static void C_ccall f_626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_626,c,av);}
a=C_alloc(3);
t3=C_i_check_string_2(t2,lf[6]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_637,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:83: absolute-pathname-root */
{C_proc tp=(C_proc)C_fast_retrieve_proc(lf[2]);
C_word *av2=av;
av2[0]=lf[2];
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k635 in chicken.pathname#absolute-pathname? in k622 in k616 in k613 in k610 */
static void C_ccall f_637(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_637,c,av);}
/* pathname.scm:83: chicken.irregex#irregex-match-data? */
t2=C_fast_retrieve(lf[7]);{
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

/* chicken.pathname#chop-pds in k622 in k616 in k613 in k610 */
static void f_639(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_639,2,t1,t2);}
a=C_alloc(7);
if(C_truep(t2)){
t3=C_i_string_length(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_652,a[2]=t5,a[3]=t2,a[4]=((C_word)li1),tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_652(t7,t1,t3);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* lp in chicken.pathname#chop-pds in k622 in k616 in k613 in k610 */
static void f_652(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_652,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_659,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(t2,C_fix(1)))){
t4=C_fixnum_difference(t2,C_fix(1));
t5=t3;
f_659(t5,C_eqp(C_make_character(47),C_i_string_ref(((C_word*)t0)[3],t4)));}
else{
t4=t3;
f_659(t4,C_SCHEME_FALSE);}}

/* k657 in lp in chicken.pathname#chop-pds in k622 in k616 in k613 in k610 */
static void f_659(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_659,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:93: lp */
t2=((C_word*)((C_word*)t0)[2])[1];
f_652(t2,((C_word*)t0)[3],C_fixnum_difference(((C_word*)t0)[4],C_fix(1)));}
else{
t2=C_i_string_length(((C_word*)t0)[5]);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[4],t2))){
/* pathname.scm:95: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(0);
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}}

/* conc-dirs in k622 in k616 in k613 in k610 */
static void f_700(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_700,2,t1,t2);}
a=C_alloc(6);
t3=C_i_check_list_2(t2,lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_709,a[2]=t5,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_709(t7,t1,t2);}

/* loop in conc-dirs in k622 in k616 in k613 in k610 */
static void f_709(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_709,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=lf[11];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_i_string_length(t3);
t5=C_eqp(t4,C_fix(0));
if(C_truep(t5)){
/* pathname.scm:110: loop */
t8=t1;
t9=C_u_i_cdr(t2);
t1=t8;
t2=t9;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_737,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:112: chop-pds */
f_639(t6,C_u_i_car(t2));}}}

/* k735 in loop in conc-dirs in k622 in k616 in k613 in k610 */
static void C_ccall f_737(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_737,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:114: loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_709(t3,t2,C_u_i_cdr(((C_word*)t0)[4]));}

/* k739 in k735 in loop in conc-dirs in k622 in k616 in k613 in k610 */
static void C_ccall f_741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_741,c,av);}
/* pathname.scm:111: scheme#string-append */
t2=*((C_word*)lf[12]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[13];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* canonicalize-dirs in k622 in k616 in k613 in k610 */
static void f_751(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_751,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nullp(t2));
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=lf[14];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_stringp(t2))){
t5=C_a_i_list1(&a,1,t2);
/* pathname.scm:118: conc-dirs */
f_700(t1,t5);}
else{
/* pathname.scm:119: conc-dirs */
f_700(t1,t2);}}}

/* _make-pathname in k622 in k616 in k613 in k610 */
static void f_782(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_782,5,t1,t2,t3,t4,t5);}
a=C_alloc(10);
t6=(C_truep(t5)?t5:lf[15]);
t7=(C_truep(t4)?t4:lf[16]);
t8=C_i_check_string_2(t3,t2);
t9=C_i_check_string_2(t7,t2);
t10=C_i_check_string_2(t6,t2);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_805,a[2]=t1,a[3]=t3,a[4]=C_SCHEME_UNDEFINED,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_828,a[2]=t11,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(C_u_i_string_length(t3),C_fix(1)))){
t13=C_fixnum_greater_or_equal_p(C_u_i_string_length(t7),C_fix(1));
t14=t12;
f_828(t14,(C_truep(t13)?C_eqp(C_make_character(47),C_i_string_ref(t7,C_fix(0))):C_SCHEME_FALSE));}
else{
t13=t12;
f_828(t13,C_SCHEME_FALSE);}}

/* k803 in _make-pathname in k622 in k616 in k613 in k610 */
static void C_ccall f_805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_805,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_812,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(((C_word*)t0)[5]),C_fix(0)))){
t4=C_i_string_ref(((C_word*)t0)[5],C_fix(0));
t5=t3;
f_812(t5,C_i_not(C_u_i_char_equalp(t4,C_make_character(46))));}
else{
t4=t3;
f_812(t4,C_SCHEME_FALSE);}}

/* k810 in k803 in _make-pathname in k622 in k616 in k613 in k610 */
static void f_812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_812,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
/* pathname.scm:127: scheme#string-append */
t3=*((C_word*)lf[12]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=((C_word*)t2)[4];
av2[4]=lf[17];
av2[5]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}
else{
/* pathname.scm:127: scheme#string-append */
t3=*((C_word*)lf[12]+1);{
C_word av2[6];
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=((C_word*)t2)[4];
av2[4]=lf[18];
av2[5]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(6,av2);}}}

/* k826 in _make-pathname in k622 in k616 in k613 in k610 */
static void f_828(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_828,2,t0,t1);}
if(C_truep(t1)){
/* pathname.scm:132: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(1);
av2[4]=C_u_i_string_length(((C_word*)t0)[3]);
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
f_805(2,av2);}}}

/* chicken.pathname#make-pathname in k622 in k616 in k613 in k610 */
static void C_ccall f_859(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_859,c,av);}
a=C_alloc(6);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_870,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:142: canonicalize-dirs */
t7=((C_word*)((C_word*)t0)[3])[1];
f_751(t7,t6,t2);}

/* k868 in chicken.pathname#make-pathname in k622 in k616 in k613 in k610 */
static void C_ccall f_870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_870,c,av);}
/* pathname.scm:142: _make-pathname */
f_782(((C_word*)t0)[3],lf[10],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* chicken.pathname#make-absolute-pathname in k622 in k616 in k613 in k610 */
static void C_ccall f_878(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_878,c,av);}
a=C_alloc(6);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_889,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:148: canonicalize-dirs */
t7=((C_word*)((C_word*)t0)[3])[1];
f_751(t7,t6,t2);}

/* k887 in chicken.pathname#make-absolute-pathname in k622 in k616 in k613 in k610 */
static void C_ccall f_889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_889,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_892,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* pathname.scm:149: absolute-pathname? */
t4=C_fast_retrieve(lf[5]);{
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

/* k890 in k887 in chicken.pathname#make-absolute-pathname in k622 in k616 in k613 in k610 */
static void C_ccall f_892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_892,c,av);}
t2=((C_word*)t0)[2];
/* pathname.scm:146: _make-pathname */
f_782(((C_word*)t2)[3],lf[21],t1,((C_word*)t2)[4],((C_word*)t2)[5]);}

/* k893 in k887 in chicken.pathname#make-absolute-pathname in k622 in k616 in k613 in k610 */
static void C_ccall f_895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_895,c,av);}
if(C_truep(t1)){
/* pathname.scm:146: _make-pathname */
f_782(((C_word*)t0)[3],lf[21],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
/* pathname.scm:151: ##sys#string-append */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[7];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}}

/* k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_914(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_914,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_917,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:162: chicken.irregex#irregex */
t3=C_fast_retrieve(lf[69]);{
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

/* k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_917(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,4)))){
C_save_and_reclaim((void *)f_917,c,av);}
a=C_alloc(36);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_918,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[29]+1 /* (set! chicken.pathname#decompose-pathname ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_939,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word)li10),tmp=(C_word)a,a+=6,tmp));
t4=C_mutate((C_word*)lf[33]+1 /* (set! chicken.pathname#pathname-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1009,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[34]+1 /* (set! chicken.pathname#pathname-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1024,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[35]+1 /* (set! chicken.pathname#pathname-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1039,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[36]+1 /* (set! chicken.pathname#pathname-strip-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1054,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[37]+1 /* (set! chicken.pathname#pathname-strip-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1072,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[38]+1 /* (set! chicken.pathname#pathname-replace-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1090,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[39]+1 /* (set! chicken.pathname#pathname-replace-file ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1108,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[40]+1 /* (set! chicken.pathname#pathname-replace-extension ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1126,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1571,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:231: chicken.platform#software-version */
t13=C_fast_retrieve(lf[68]);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}

/* strip-pds in k915 in k912 in k622 in k616 in k613 in k610 */
static void f_918(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_918,2,t1,t2);}
a=C_alloc(4);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_925,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:166: chop-pds */
f_639(t3,t2);}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k923 in strip-pds in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_925,c,av);}
t2=C_i_string_length(t1);
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
/* pathname.scm:169: ##sys#substring */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(0);
av2[4]=C_fix(1);
tp(5,av2);}}}

/* chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_939(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_939,c,av);}
a=C_alloc(6);
t3=C_i_check_string_2(t2,lf[30]);
t4=C_eqp(C_fix(0),C_u_i_string_length(t2));
if(C_truep(t4)){
/* pathname.scm:173: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_955,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* pathname.scm:174: chicken.irregex#irregex-search */
t6=C_fast_retrieve(lf[32]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}

/* k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_955,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_965,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_977,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:177: chicken.irregex#irregex-match-substring */
t4=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:180: chicken.irregex#irregex-search */
t3=C_fast_retrieve(lf[32]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k963 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_965(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_965,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_969,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:178: chicken.irregex#irregex-match-substring */
t4=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k967 in k963 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_969,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_973,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* pathname.scm:179: chicken.irregex#irregex-match-substring */
t4=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=C_fix(4);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k971 in k967 in k963 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_973,c,av);}
/* pathname.scm:176: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
C_values(5,av2);}}

/* k975 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_977,c,av);}
/* pathname.scm:177: strip-pds */
f_918(((C_word*)t0)[3],t1);}

/* k978 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_980,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_990,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_998,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:183: chicken.irregex#irregex-match-substring */
t4=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=t1;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* pathname.scm:186: strip-pds */
f_918(t2,((C_word*)t0)[4]);}}

/* k988 in k978 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_990,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_994,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* pathname.scm:184: chicken.irregex#irregex-match-substring */
t3=C_fast_retrieve(lf[31]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(2);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k992 in k988 in k978 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_994,c,av);}
/* pathname.scm:182: scheme#values */{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_FALSE;
C_values(5,av2);}}

/* k996 in k978 in k953 in chicken.pathname#decompose-pathname in k915 in k912 in k622 in k616 in k613 in k610 */
static void C_ccall f_998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_998,c,av);}
/* pathname.scm:183: strip-pds */
f_918(((C_word*)t0)[3],t1);}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_pathname_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("pathname"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_pathname_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(322))){
C_save(t1);
C_rereclaim2(322*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,73);
lf[0]=C_h_intern(&lf[0],8, C_text("pathname"));
lf[1]=C_h_intern(&lf[1],17, C_text("chicken.pathname#"));
lf[5]=C_h_intern(&lf[5],35, C_text("chicken.pathname#absolute-pathname?"));
lf[6]=C_h_intern(&lf[6],18, C_text("absolute-pathname?"));
lf[7]=C_h_intern(&lf[7],35, C_text("chicken.irregex#irregex-match-data?"));
lf[9]=C_h_intern(&lf[9],15, C_text("##sys#substring"));
lf[10]=C_h_intern(&lf[10],13, C_text("make-pathname"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[12]=C_h_intern(&lf[12],20, C_text("scheme#string-append"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[16]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[19]=C_h_intern(&lf[19],30, C_text("chicken.pathname#make-pathname"));
lf[20]=C_h_intern(&lf[20],39, C_text("chicken.pathname#make-absolute-pathname"));
lf[21]=C_h_intern(&lf[21],22, C_text("make-absolute-pathname"));
lf[22]=C_h_intern(&lf[22],19, C_text("##sys#string-append"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[24]=C_h_intern(&lf[24],22, C_text("##sys#windows-platform"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\047\136\050\056\052\133\134\057\134\134\135\051\077\050\133\136\134\057\134\134\135\053\051\050\134\056\050\133\136\134\057\134\134\056\135\053\051\051\044\000"));
lf[26]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\136\050\056\052\057\051\077\050\133\136\057\135\053\051\050\134\056\050\133\136\057\056\135\053\051\051\044\000"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\136\050\056\052\133\134\057\134\134\135\051\077\050\050\134\056\051\077\133\136\134\057\134\134\135\053\051\044\000"));
lf[28]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\136\050\056\052\057\051\077\050\050\134\056\051\077\133\136\057\135\053\051\044\000"));
lf[29]=C_h_intern(&lf[29],35, C_text("chicken.pathname#decompose-pathname"));
lf[30]=C_h_intern(&lf[30],18, C_text("decompose-pathname"));
lf[31]=C_h_intern(&lf[31],39, C_text("chicken.irregex#irregex-match-substring"));
lf[32]=C_h_intern(&lf[32],30, C_text("chicken.irregex#irregex-search"));
lf[33]=C_h_intern(&lf[33],35, C_text("chicken.pathname#pathname-directory"));
lf[34]=C_h_intern(&lf[34],30, C_text("chicken.pathname#pathname-file"));
lf[35]=C_h_intern(&lf[35],35, C_text("chicken.pathname#pathname-extension"));
lf[36]=C_h_intern(&lf[36],41, C_text("chicken.pathname#pathname-strip-directory"));
lf[37]=C_h_intern(&lf[37],41, C_text("chicken.pathname#pathname-strip-extension"));
lf[38]=C_h_intern(&lf[38],43, C_text("chicken.pathname#pathname-replace-directory"));
lf[39]=C_h_intern(&lf[39],38, C_text("chicken.pathname#pathname-replace-file"));
lf[40]=C_h_intern(&lf[40],43, C_text("chicken.pathname#pathname-replace-extension"));
lf[41]=C_h_intern(&lf[41],5, C_text("mingw"));
lf[42]=C_h_intern(&lf[42],7, C_text("windows"));
lf[43]=C_h_intern(&lf[43],4, C_text("unix"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\056\000"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\056\056\000"));
lf[47]=C_h_intern(&lf[47],35, C_text("chicken.pathname#normalize-pathname"));
lf[48]=C_h_intern(&lf[48],18, C_text("normalize-pathname"));
lf[49]=C_h_intern(&lf[49],3, C_text("abs"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[51]=C_h_intern(&lf[51],14, C_text("scheme#display"));
lf[52]=C_h_intern(&lf[52],18, C_text("##sys#write-char-0"));
lf[53]=C_h_intern(&lf[53],8, C_text("for-each"));
lf[54]=C_h_intern(&lf[54],24, C_text("scheme#get-output-string"));
lf[55]=C_h_intern(&lf[55],18, C_text("##sys#fast-reverse"));
lf[56]=C_h_intern(&lf[56],25, C_text("scheme#open-output-string"));
lf[57]=C_h_intern(&lf[57],3, C_text("rel"));
lf[59]=C_h_intern(&lf[59],27, C_text("chicken.string#string-split"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\057\134\000"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[62]=C_h_intern(&lf[62],32, C_text("chicken.pathname#directory-null?"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[65]=C_h_intern(&lf[65],15, C_text("directory-null?"));
lf[66]=C_h_intern(&lf[66],36, C_text("chicken.pathname#decompose-directory"));
lf[67]=C_h_intern(&lf[67],19, C_text("decompose-directory"));
lf[68]=C_h_intern(&lf[68],33, C_text("chicken.platform#software-version"));
lf[69]=C_h_intern(&lf[69],23, C_text("chicken.irregex#irregex"));
lf[70]=C_h_intern(&lf[70],29, C_text("chicken.irregex#irregex-match"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\050\133\101\055\132\141\055\172\135\072\051\077\050\133\134\057\134\134\135\051\056\052\000"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\050\057\051\056\052\000"));
C_register_lf2(lf,73,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_612,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[106] = {
{C_text("f_1005:pathname_2escm"),(void*)f_1005},
{C_text("f_1009:pathname_2escm"),(void*)f_1009},
{C_text("f_1015:pathname_2escm"),(void*)f_1015},
{C_text("f_1021:pathname_2escm"),(void*)f_1021},
{C_text("f_1024:pathname_2escm"),(void*)f_1024},
{C_text("f_1030:pathname_2escm"),(void*)f_1030},
{C_text("f_1036:pathname_2escm"),(void*)f_1036},
{C_text("f_1039:pathname_2escm"),(void*)f_1039},
{C_text("f_1045:pathname_2escm"),(void*)f_1045},
{C_text("f_1051:pathname_2escm"),(void*)f_1051},
{C_text("f_1054:pathname_2escm"),(void*)f_1054},
{C_text("f_1060:pathname_2escm"),(void*)f_1060},
{C_text("f_1066:pathname_2escm"),(void*)f_1066},
{C_text("f_1072:pathname_2escm"),(void*)f_1072},
{C_text("f_1078:pathname_2escm"),(void*)f_1078},
{C_text("f_1084:pathname_2escm"),(void*)f_1084},
{C_text("f_1090:pathname_2escm"),(void*)f_1090},
{C_text("f_1096:pathname_2escm"),(void*)f_1096},
{C_text("f_1102:pathname_2escm"),(void*)f_1102},
{C_text("f_1108:pathname_2escm"),(void*)f_1108},
{C_text("f_1114:pathname_2escm"),(void*)f_1114},
{C_text("f_1120:pathname_2escm"),(void*)f_1120},
{C_text("f_1126:pathname_2escm"),(void*)f_1126},
{C_text("f_1132:pathname_2escm"),(void*)f_1132},
{C_text("f_1138:pathname_2escm"),(void*)f_1138},
{C_text("f_1148:pathname_2escm"),(void*)f_1148},
{C_text("f_1183:pathname_2escm"),(void*)f_1183},
{C_text("f_1202:pathname_2escm"),(void*)f_1202},
{C_text("f_1212:pathname_2escm"),(void*)f_1212},
{C_text("f_1236:pathname_2escm"),(void*)f_1236},
{C_text("f_1239:pathname_2escm"),(void*)f_1239},
{C_text("f_1242:pathname_2escm"),(void*)f_1242},
{C_text("f_1243:pathname_2escm"),(void*)f_1243},
{C_text("f_1247:pathname_2escm"),(void*)f_1247},
{C_text("f_1257:pathname_2escm"),(void*)f_1257},
{C_text("f_1260:pathname_2escm"),(void*)f_1260},
{C_text("f_1263:pathname_2escm"),(void*)f_1263},
{C_text("f_1266:pathname_2escm"),(void*)f_1266},
{C_text("f_1273:pathname_2escm"),(void*)f_1273},
{C_text("f_1280:pathname_2escm"),(void*)f_1280},
{C_text("f_1292:pathname_2escm"),(void*)f_1292},
{C_text("f_1302:pathname_2escm"),(void*)f_1302},
{C_text("f_1328:pathname_2escm"),(void*)f_1328},
{C_text("f_1337:pathname_2escm"),(void*)f_1337},
{C_text("f_1373:pathname_2escm"),(void*)f_1373},
{C_text("f_1389:pathname_2escm"),(void*)f_1389},
{C_text("f_1393:pathname_2escm"),(void*)f_1393},
{C_text("f_1440:pathname_2escm"),(void*)f_1440},
{C_text("f_1453:pathname_2escm"),(void*)f_1453},
{C_text("f_1461:pathname_2escm"),(void*)f_1461},
{C_text("f_1463:pathname_2escm"),(void*)f_1463},
{C_text("f_1493:pathname_2escm"),(void*)f_1493},
{C_text("f_1532:pathname_2escm"),(void*)f_1532},
{C_text("f_1536:pathname_2escm"),(void*)f_1536},
{C_text("f_1539:pathname_2escm"),(void*)f_1539},
{C_text("f_1542:pathname_2escm"),(void*)f_1542},
{C_text("f_1549:pathname_2escm"),(void*)f_1549},
{C_text("f_1571:pathname_2escm"),(void*)f_1571},
{C_text("f_1574:pathname_2escm"),(void*)f_1574},
{C_text("f_1576:pathname_2escm"),(void*)f_1576},
{C_text("f_1582:pathname_2escm"),(void*)f_1582},
{C_text("f_1591:pathname_2escm"),(void*)f_1591},
{C_text("f_1601:pathname_2escm"),(void*)f_1601},
{C_text("f_1603:pathname_2escm"),(void*)f_1603},
{C_text("f_1609:pathname_2escm"),(void*)f_1609},
{C_text("f_1612:pathname_2escm"),(void*)f_1612},
{C_text("f_612:pathname_2escm"),(void*)f_612},
{C_text("f_615:pathname_2escm"),(void*)f_615},
{C_text("f_618:pathname_2escm"),(void*)f_618},
{C_text("f_624:pathname_2escm"),(void*)f_624},
{C_text("f_626:pathname_2escm"),(void*)f_626},
{C_text("f_637:pathname_2escm"),(void*)f_637},
{C_text("f_639:pathname_2escm"),(void*)f_639},
{C_text("f_652:pathname_2escm"),(void*)f_652},
{C_text("f_659:pathname_2escm"),(void*)f_659},
{C_text("f_700:pathname_2escm"),(void*)f_700},
{C_text("f_709:pathname_2escm"),(void*)f_709},
{C_text("f_737:pathname_2escm"),(void*)f_737},
{C_text("f_741:pathname_2escm"),(void*)f_741},
{C_text("f_751:pathname_2escm"),(void*)f_751},
{C_text("f_782:pathname_2escm"),(void*)f_782},
{C_text("f_805:pathname_2escm"),(void*)f_805},
{C_text("f_812:pathname_2escm"),(void*)f_812},
{C_text("f_828:pathname_2escm"),(void*)f_828},
{C_text("f_859:pathname_2escm"),(void*)f_859},
{C_text("f_870:pathname_2escm"),(void*)f_870},
{C_text("f_878:pathname_2escm"),(void*)f_878},
{C_text("f_889:pathname_2escm"),(void*)f_889},
{C_text("f_892:pathname_2escm"),(void*)f_892},
{C_text("f_895:pathname_2escm"),(void*)f_895},
{C_text("f_914:pathname_2escm"),(void*)f_914},
{C_text("f_917:pathname_2escm"),(void*)f_917},
{C_text("f_918:pathname_2escm"),(void*)f_918},
{C_text("f_925:pathname_2escm"),(void*)f_925},
{C_text("f_939:pathname_2escm"),(void*)f_939},
{C_text("f_955:pathname_2escm"),(void*)f_955},
{C_text("f_965:pathname_2escm"),(void*)f_965},
{C_text("f_969:pathname_2escm"),(void*)f_969},
{C_text("f_973:pathname_2escm"),(void*)f_973},
{C_text("f_977:pathname_2escm"),(void*)f_977},
{C_text("f_980:pathname_2escm"),(void*)f_980},
{C_text("f_990:pathname_2escm"),(void*)f_990},
{C_text("f_994:pathname_2escm"),(void*)f_994},
{C_text("f_998:pathname_2escm"),(void*)f_998},
{C_text("toplevel:pathname_2escm"),(void*)C_pathname_toplevel},
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
o|hiding unexported module binding: chicken.pathname#d 
o|hiding unexported module binding: chicken.pathname#define-alias 
o|hiding unexported module binding: chicken.pathname#absolute-pathname-root 
o|hiding unexported module binding: chicken.pathname#root-origin 
o|hiding unexported module binding: chicken.pathname#root-directory 
o|hiding unexported module binding: chicken.pathname#chop-pds 
o|hiding unexported module binding: chicken.pathname#split-directory 
S|applied compiler syntax:
S|  scheme#for-each		1
o|eliminated procedure checks: 10 
o|specializations:
o|  3 (scheme#string=? * *)
o|  2 (scheme#char=? char char)
o|  3 (scheme#string-ref string fixnum)
o|  6 (scheme#string-length string)
o|  1 (scheme#car pair)
o|  5 (scheme#cdr pair)
o|  1 (scheme#zero? integer)
(o e)|safe calls: 148 
o|dropping redundant toplevel assignment: chicken.pathname#make-pathname 
o|dropping redundant toplevel assignment: chicken.pathname#make-absolute-pathname 
o|safe globals: (chicken.pathname#root-directory chicken.pathname#root-origin chicken.pathname#absolute-pathname-root) 
o|inlining procedure: k641 
o|inlining procedure: k654 
o|inlining procedure: k654 
o|contracted procedure: "(pathname.scm:92) g155156" 
o|inlining procedure: k641 
o|inlining procedure: k711 
o|inlining procedure: k711 
o|inlining procedure: k753 
o|inlining procedure: k753 
o|inlining procedure: k807 
o|inlining procedure: k807 
o|substituted constant variable: a822 
o|substituted constant variable: a823 
o|inlining procedure: k837 
o|substituted constant variable: a853 
o|contracted procedure: "(pathname.scm:131) g192193" 
o|inlining procedure: k837 
o|inlining procedure: k890 
o|inlining procedure: k890 
o|inlining procedure: k920 
o|inlining procedure: k920 
o|inlining procedure: k944 
o|inlining procedure: k944 
o|inlining procedure: k981 
o|inlining procedure: k981 
o|substituted constant variable: a1153 
o|inlining procedure: k1150 
o|inlining procedure: k1150 
o|substituted constant variable: a1158 
o|inlining procedure: k1160 
o|inlining procedure: k1160 
o|substituted constant variable: a1175 
o|inlining procedure: k1204 
o|inlining procedure: k1222 
o|inlining procedure: k1222 
o|substituted constant variable: sep379 
o|substituted constant variable: sep379 
o|inlining procedure: k1267 
o|inlining procedure: k1267 
o|substituted constant variable: sep379 
o|substituted constant variable: sep379 
o|inlining procedure: k1294 
o|inlining procedure: k1294 
o|inlining procedure: k1204 
o|inlining procedure: k1338 
o|inlining procedure: k1338 
o|inlining procedure: k1378 
o|inlining procedure: k1378 
o|inlining procedure: k1384 
o|inlining procedure: k1384 
o|substituted constant variable: a1425 
o|inlining procedure: k1419 
o|inlining procedure: k1419 
o|contracted procedure: "(pathname.scm:269) pds?380" 
o|inlining procedure: k1449 
o|inlining procedure: k1449 
o|inlining procedure: k1468 
o|inlining procedure: k1468 
o|contracted procedure: "(pathname.scm:325) strip-origin-prefix446" 
o|inlining procedure: k1498 
o|inlining procedure: k1498 
o|inlining procedure: k1520 
o|inlining procedure: k1520 
o|inlining procedure: k1584 
o|inlining procedure: k1584 
o|inlining procedure: k1593 
o|inlining procedure: k1593 
o|inlining procedure: k1614 
o|inlining procedure: k1614 
o|replaced variables: 273 
o|removed binding forms: 81 
o|substituted constant variable: r6421623 
o|substituted constant variable: r7121624 
o|substituted constant variable: r7541626 
o|substituted constant variable: r8081628 
o|substituted constant variable: r8081628 
o|substituted constant variable: r8081630 
o|substituted constant variable: r8081630 
o|substituted constant variable: r8381633 
o|substituted constant variable: r9211639 
o|substituted constant variable: r13791660 
o|substituted constant variable: r13791662 
o|substituted constant variable: r14201667 
o|substituted constant variable: r14501668 
o|substituted constant variable: r14501668 
o|substituted constant variable: r14501670 
o|substituted constant variable: r14501670 
o|converted assignments to bindings: (addpart358) 
o|substituted constant variable: r15851679 
o|substituted constant variable: r15941681 
o|substituted constant variable: r16151683 
o|simplifications: ((let . 1)) 
o|replaced variables: 24 
o|removed binding forms: 235 
o|inlining procedure: k1219 
o|inlining procedure: k1551 
o|inlining procedure: k1551 
o|inlining procedure: k1551 
o|removed binding forms: 37 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 3 
o|simplifications: ((if . 13) (let . 12) (##core#call . 101)) 
o|  call simplifications:
o|    scheme#list?
o|    scheme#member
o|    chicken.fixnum#fx+	8
o|    scheme#pair?
o|    ##sys#slot	2
o|    scheme#string	2
o|    scheme#cdr
o|    scheme#cons	3
o|    ##sys#call-with-values	8
o|    chicken.fixnum#fx=	5
o|    scheme#values	8
o|    chicken.fixnum#fx>	3
o|    scheme#not	6
o|    scheme#string?
o|    scheme#list
o|    ##sys#check-list	2
o|    scheme#null?	10
o|    scheme#car	8
o|    chicken.fixnum#fx>=	4
o|    scheme#string-ref	2
o|    scheme#eq?	8
o|    scheme#string-length	6
o|    chicken.fixnum#fx<
o|    chicken.fixnum#fx-	2
o|    ##sys#check-string	7
o|contracted procedure: k628 
o|contracted procedure: k648 
o|contracted procedure: k664 
o|contracted procedure: k677 
o|contracted procedure: k670 
o|contracted procedure: k680 
o|contracted procedure: k696 
o|contracted procedure: k692 
o|contracted procedure: k702 
o|contracted procedure: k714 
o|contracted procedure: k717 
o|contracted procedure: k747 
o|contracted procedure: k723 
o|contracted procedure: k756 
o|contracted procedure: k759 
o|contracted procedure: k765 
o|contracted procedure: k772 
o|contracted procedure: k784 
o|contracted procedure: k787 
o|contracted procedure: k790 
o|contracted procedure: k793 
o|contracted procedure: k796 
o|contracted procedure: k813 
o|contracted procedure: k834 
o|contracted procedure: k840 
o|contracted procedure: k871 
o|contracted procedure: k861 
o|contracted procedure: k899 
o|contracted procedure: k880 
o|contracted procedure: k906 
o|contracted procedure: k909 
o|contracted procedure: k936 
o|contracted procedure: k929 
o|contracted procedure: k941 
o|contracted procedure: k947 
o|contracted procedure: k1565 
o|contracted procedure: k1144 
o|contracted procedure: k1163 
o|inlining procedure: k1166 
o|contracted procedure: k1177 
o|inlining procedure: k1166 
o|contracted procedure: k1433 
o|contracted procedure: k1185 
o|contracted procedure: k1194 
o|contracted procedure: k1207 
o|contracted procedure: k1216 
o|contracted procedure: k1228 
o|contracted procedure: k1219 
o|contracted procedure: k1252 
o|contracted procedure: k1274 
o|contracted procedure: k1282 
o|contracted procedure: k1285 
o|contracted procedure: k1297 
o|contracted procedure: k1307 
o|contracted procedure: k1311 
o|contracted procedure: k1315 
o|contracted procedure: k1318 
o|contracted procedure: k1430 
o|contracted procedure: k1332 
o|contracted procedure: k1341 
o|contracted procedure: k1348 
o|contracted procedure: k1352 
o|contracted procedure: k1359 
o|contracted procedure: k1363 
o|contracted procedure: k1374 
o|contracted procedure: k1381 
o|contracted procedure: k1398 
o|contracted procedure: k1402 
o|contracted procedure: k1406 
o|contracted procedure: k1413 
o|contracted procedure: k1416 
o|contracted procedure: k1442 
o|contracted procedure: k1465 
o|contracted procedure: k1483 
o|contracted procedure: k1474 
o|contracted procedure: k1486 
o|contracted procedure: k1562 
o|contracted procedure: k1558 
o|contracted procedure: k1555 
o|contracted procedure: k1501 
o|contracted procedure: k1504 
o|contracted procedure: k1507 
o|contracted procedure: k1513 
o|contracted procedure: k1517 
o|contracted procedure: k1523 
o|contracted procedure: k1551 
o|simplifications: ((if . 1) (let . 28)) 
o|removed binding forms: 84 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest202205 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest202205 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest214217 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest214217 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest371373 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest371373 0 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 2 
o|direct leaf routine/allocation: addpart358 9 
o|direct leaf routine/allocation: loop437 0 
o|contracted procedure: "(pathname.scm:250) k1322" 
o|contracted procedure: "(pathname.scm:276) k1367" 
o|converted assignments to bindings: (loop437) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|customizable procedures: (k622 chicken.pathname#split-directory k1387 k1335 loop385 k1210 g399406 for-each-loop398410 k1264 strip-pds233 canonicalize-dirs162 _make-pathname163 k826 k810 conc-dirs161 chicken.pathname#chop-pds loop165 k657 lp148) 
o|shared closure containers: 7 
o|shared closure users: 7 
o|calls to known targets: 47 
o|identified direct recursive calls: f_709 1 
o|unused rest argument: rest202205 f_859 
o|unused rest argument: rest214217 f_878 
o|unused rest argument: rest371373 f_1183 
o|identified direct recursive calls: f_1463 1 
o|fast box initializations: 7 
o|fast global references: 8 
o|fast global assignments: 11 
o|dropping unused closure argument: f_1148 
o|dropping unused closure argument: f_1440 
o|dropping unused closure argument: f_1463 
o|dropping unused closure argument: f_639 
o|dropping unused closure argument: f_700 
o|dropping unused closure argument: f_782 
o|dropping unused closure argument: f_918 
*/
/* end of file */
