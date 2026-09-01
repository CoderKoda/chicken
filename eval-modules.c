/* Generated from eval-modules.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: eval-modules.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -explicit-use -no-trace -output-file eval-modules.c
   unit: eval-modules
   uses: eval
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[114];
static double C_possibly_force_alignment;
static C_char li0[] C_aligned={C_lihdr(0,0,6),40,97,53,49,49,41,0,0};
static C_char li1[] C_aligned={C_lihdr(0,0,6),40,97,53,48,53,41,0,0};
static C_char li2[] C_aligned={C_lihdr(0,0,6),40,97,53,51,57,41,0,0};
static C_char li3[] C_aligned={C_lihdr(0,0,6),40,97,53,51,51,41,0,0};
static C_char li4[] C_aligned={C_lihdr(0,0,6),40,97,53,54,49,41,0,0};
static C_char li5[] C_aligned={C_lihdr(0,0,6),40,97,53,55,51,41,0,0};
static C_char li6[] C_aligned={C_lihdr(0,0,6),40,97,53,54,55,41,0,0};
static C_char li7[] C_aligned={C_lihdr(0,0,6),40,97,54,48,49,41,0,0};
static C_char li8[] C_aligned={C_lihdr(0,0,6),40,97,53,57,53,41,0,0};
static C_char li9[] C_aligned={C_lihdr(0,0,6),40,97,54,50,57,41,0,0};
static C_char li10[] C_aligned={C_lihdr(0,0,6),40,97,54,50,51,41,0,0};
static C_char li11[] C_aligned={C_lihdr(0,0,6),40,97,54,53,55,41,0,0};
static C_char li12[] C_aligned={C_lihdr(0,0,6),40,97,54,53,49,41,0,0};
static C_char li13[] C_aligned={C_lihdr(0,0,6),40,97,54,56,53,41,0,0};
static C_char li14[] C_aligned={C_lihdr(0,0,6),40,97,54,55,57,41,0,0};
static C_char li15[] C_aligned={C_lihdr(0,0,6),40,97,55,48,55,41,0,0};
static C_char li16[] C_aligned={C_lihdr(0,0,6),40,97,55,49,57,41,0,0};
static C_char li17[] C_aligned={C_lihdr(0,0,6),40,97,55,49,51,41,0,0};
static C_char li18[] C_aligned={C_lihdr(0,0,6),40,97,55,52,55,41,0,0};
static C_char li19[] C_aligned={C_lihdr(0,0,6),40,97,55,52,49,41,0,0};
static C_char li20[] C_aligned={C_lihdr(0,0,6),40,97,55,55,53,41,0,0};
static C_char li21[] C_aligned={C_lihdr(0,0,6),40,97,55,54,57,41,0,0};
static C_char li22[] C_aligned={C_lihdr(0,0,6),40,97,56,48,51,41,0,0};
static C_char li23[] C_aligned={C_lihdr(0,0,6),40,97,55,57,55,41,0,0};
static C_char li24[] C_aligned={C_lihdr(0,0,6),40,97,56,51,49,41,0,0};
static C_char li25[] C_aligned={C_lihdr(0,0,6),40,97,56,50,53,41,0,0};
static C_char li26[] C_aligned={C_lihdr(0,0,6),40,97,56,53,51,41,0,0};
static C_char li27[] C_aligned={C_lihdr(0,0,6),40,97,56,54,53,41,0,0};
static C_char li28[] C_aligned={C_lihdr(0,0,6),40,97,56,53,57,41,0,0};
static C_char li29[] C_aligned={C_lihdr(0,0,6),40,97,56,57,51,41,0,0};
static C_char li30[] C_aligned={C_lihdr(0,0,6),40,97,56,56,55,41,0,0};
static C_char li31[] C_aligned={C_lihdr(0,0,6),40,97,57,50,49,41,0,0};
static C_char li32[] C_aligned={C_lihdr(0,0,6),40,97,57,49,53,41,0,0};
static C_char li33[] C_aligned={C_lihdr(0,0,6),40,97,57,52,57,41,0,0};
static C_char li34[] C_aligned={C_lihdr(0,0,6),40,97,57,52,51,41,0,0};
static C_char li35[] C_aligned={C_lihdr(0,0,6),40,97,57,55,55,41,0,0};
static C_char li36[] C_aligned={C_lihdr(0,0,6),40,97,57,55,49,41,0,0};
static C_char li37[] C_aligned={C_lihdr(0,0,7),40,97,49,48,48,53,41,0};
static C_char li38[] C_aligned={C_lihdr(0,0,6),40,97,57,57,57,41,0,0};
static C_char li39[] C_aligned={C_lihdr(0,0,7),40,97,49,48,51,51,41,0};
static C_char li40[] C_aligned={C_lihdr(0,0,7),40,97,49,48,50,55,41,0};
static C_char li41[] C_aligned={C_lihdr(0,0,7),40,97,49,48,54,49,41,0};
static C_char li42[] C_aligned={C_lihdr(0,0,7),40,97,49,48,53,53,41,0};
static C_char li43[] C_aligned={C_lihdr(0,0,7),40,97,49,48,56,57,41,0};
static C_char li44[] C_aligned={C_lihdr(0,0,7),40,97,49,48,56,51,41,0};
static C_char li45[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,55,41,0};
static C_char li46[] C_aligned={C_lihdr(0,0,7),40,97,49,49,49,49,41,0};
static C_char li47[] C_aligned={C_lihdr(0,0,7),40,97,49,49,52,53,41,0};
static C_char li48[] C_aligned={C_lihdr(0,0,7),40,97,49,49,51,57,41,0};
static C_char li49[] C_aligned={C_lihdr(0,0,7),40,97,49,49,55,51,41,0};
static C_char li50[] C_aligned={C_lihdr(0,0,7),40,97,49,49,54,55,41,0};
static C_char li51[] C_aligned={C_lihdr(0,0,7),40,97,49,50,48,49,41,0};
static C_char li52[] C_aligned={C_lihdr(0,0,7),40,97,49,49,57,53,41,0};
static C_char li53[] C_aligned={C_lihdr(0,0,7),40,97,49,50,50,57,41,0};
static C_char li54[] C_aligned={C_lihdr(0,0,7),40,97,49,50,50,51,41,0};
static C_char li55[] C_aligned={C_lihdr(0,0,7),40,97,49,50,53,55,41,0};
static C_char li56[] C_aligned={C_lihdr(0,0,7),40,97,49,50,53,49,41,0};
static C_char li57[] C_aligned={C_lihdr(0,0,7),40,97,49,50,56,53,41,0};
static C_char li58[] C_aligned={C_lihdr(0,0,7),40,97,49,50,55,57,41,0};
static C_char li59[] C_aligned={C_lihdr(0,0,7),40,97,49,51,49,51,41,0};
static C_char li60[] C_aligned={C_lihdr(0,0,7),40,97,49,51,48,55,41,0};
static C_char li61[] C_aligned={C_lihdr(0,0,7),40,97,49,51,52,49,41,0};
static C_char li62[] C_aligned={C_lihdr(0,0,7),40,97,49,51,51,53,41,0};
static C_char li63[] C_aligned={C_lihdr(0,0,7),40,97,49,51,54,57,41,0};
static C_char li64[] C_aligned={C_lihdr(0,0,7),40,97,49,51,54,51,41,0};
static C_char li65[] C_aligned={C_lihdr(0,0,7),40,97,49,51,57,55,41,0};
static C_char li66[] C_aligned={C_lihdr(0,0,7),40,97,49,51,57,49,41,0};
static C_char li67[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,53,41,0};
static C_char li68[] C_aligned={C_lihdr(0,0,7),40,97,49,52,49,57,41,0};
static C_char li69[] C_aligned={C_lihdr(0,0,7),40,97,49,52,53,51,41,0};
static C_char li70[] C_aligned={C_lihdr(0,0,7),40,97,49,52,52,55,41,0};
static C_char li71[] C_aligned={C_lihdr(0,0,7),40,97,49,52,56,49,41,0};
static C_char li72[] C_aligned={C_lihdr(0,0,7),40,97,49,52,55,53,41,0};
static C_char li73[] C_aligned={C_lihdr(0,0,7),40,97,49,53,48,57,41,0};
static C_char li74[] C_aligned={C_lihdr(0,0,7),40,97,49,53,48,51,41,0};
static C_char li75[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,55,41,0};
static C_char li76[] C_aligned={C_lihdr(0,0,7),40,97,49,53,51,49,41,0};
static C_char li77[] C_aligned={C_lihdr(0,0,7),40,97,49,53,54,53,41,0};
static C_char li78[] C_aligned={C_lihdr(0,0,7),40,97,49,53,53,57,41,0};
static C_char li79[] C_aligned={C_lihdr(0,0,7),40,97,49,53,57,51,41,0};
static C_char li80[] C_aligned={C_lihdr(0,0,7),40,97,49,53,56,55,41,0};
static C_char li81[] C_aligned={C_lihdr(0,0,7),40,97,49,54,50,49,41,0};
static C_char li82[] C_aligned={C_lihdr(0,0,7),40,97,49,54,49,53,41,0};
static C_char li83[] C_aligned={C_lihdr(0,0,7),40,97,49,54,52,57,41,0};
static C_char li84[] C_aligned={C_lihdr(0,0,7),40,97,49,54,52,51,41,0};
static C_char li85[] C_aligned={C_lihdr(0,0,7),40,97,49,54,55,55,41,0};
static C_char li86[] C_aligned={C_lihdr(0,0,7),40,97,49,54,55,49,41,0};
static C_char li87[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,105,109,112,111,114,116,45,108,105,98,114,97,114,121,45,104,111,111,107,32,109,110,97,109,101,41,0,0,0,0,0,0,0};
static C_char li88[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word *av) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word *av) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word *av) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word *av) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word *av) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word *av) C_noret;
C_noret_decl(f_1084)
static void C_ccall f_1084(C_word c,C_word *av) C_noret;
C_noret_decl(f_1090)
static void C_ccall f_1090(C_word c,C_word *av) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word *av) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word *av) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word *av) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word *av) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word *av) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word *av) C_noret;
C_noret_decl(f_1196)
static void C_ccall f_1196(C_word c,C_word *av) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word *av) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word *av) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word *av) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word *av) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word *av) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word *av) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word *av) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word *av) C_noret;
C_noret_decl(f_1336)
static void C_ccall f_1336(C_word c,C_word *av) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word *av) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word *av) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word *av) C_noret;
C_noret_decl(f_1392)
static void C_ccall f_1392(C_word c,C_word *av) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word *av) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word *av) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word *av) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word *av) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word *av) C_noret;
C_noret_decl(f_1476)
static void C_ccall f_1476(C_word c,C_word *av) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word *av) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word *av) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word *av) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word *av) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word *av) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word *av) C_noret;
C_noret_decl(f_1566)
static void C_ccall f_1566(C_word c,C_word *av) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word *av) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word *av) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word *av) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word *av) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word *av) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word *av) C_noret;
C_noret_decl(f_1672)
static void C_ccall f_1672(C_word c,C_word *av) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word *av) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word *av) C_noret;
C_noret_decl(f_504)
static void C_ccall f_504(C_word c,C_word *av) C_noret;
C_noret_decl(f_506)
static void C_ccall f_506(C_word c,C_word *av) C_noret;
C_noret_decl(f_512)
static void C_ccall f_512(C_word c,C_word *av) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word *av) C_noret;
C_noret_decl(f_540)
static void C_ccall f_540(C_word c,C_word *av) C_noret;
C_noret_decl(f_562)
static void C_ccall f_562(C_word c,C_word *av) C_noret;
C_noret_decl(f_568)
static void C_ccall f_568(C_word c,C_word *av) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word *av) C_noret;
C_noret_decl(f_596)
static void C_ccall f_596(C_word c,C_word *av) C_noret;
C_noret_decl(f_602)
static void C_ccall f_602(C_word c,C_word *av) C_noret;
C_noret_decl(f_624)
static void C_ccall f_624(C_word c,C_word *av) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word *av) C_noret;
C_noret_decl(f_652)
static void C_ccall f_652(C_word c,C_word *av) C_noret;
C_noret_decl(f_658)
static void C_ccall f_658(C_word c,C_word *av) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680(C_word c,C_word *av) C_noret;
C_noret_decl(f_686)
static void C_ccall f_686(C_word c,C_word *av) C_noret;
C_noret_decl(f_708)
static void C_ccall f_708(C_word c,C_word *av) C_noret;
C_noret_decl(f_714)
static void C_ccall f_714(C_word c,C_word *av) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word *av) C_noret;
C_noret_decl(f_742)
static void C_ccall f_742(C_word c,C_word *av) C_noret;
C_noret_decl(f_748)
static void C_ccall f_748(C_word c,C_word *av) C_noret;
C_noret_decl(f_770)
static void C_ccall f_770(C_word c,C_word *av) C_noret;
C_noret_decl(f_776)
static void C_ccall f_776(C_word c,C_word *av) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word *av) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word *av) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word *av) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word *av) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word *av) C_noret;
C_noret_decl(f_860)
static void C_ccall f_860(C_word c,C_word *av) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word *av) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word *av) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word *av) C_noret;
C_noret_decl(f_916)
static void C_ccall f_916(C_word c,C_word *av) C_noret;
C_noret_decl(f_922)
static void C_ccall f_922(C_word c,C_word *av) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word *av) C_noret;
C_noret_decl(f_950)
static void C_ccall f_950(C_word c,C_word *av) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word *av) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word *av) C_noret;
C_noret_decl(C_eval_2dmodules_toplevel)
C_extern void C_ccall C_eval_2dmodules_toplevel(C_word c,C_word *av) C_noret;

/* a999 in k502 */
static void C_ccall f_1000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1000,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1006,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
/* chicken.eval.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1005 in a999 in k502 */
static void C_ccall f_1006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1006,c,av);}
/* chicken.eval.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[56];
av2[3]=lf[57];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[58];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1027 in k502 */
static void C_ccall f_1028(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1028,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1034,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp);
/* chicken.load.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1033 in a1027 in k502 */
static void C_ccall f_1034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1034,c,av);}
/* chicken.load.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[59];
av2[3]=lf[57];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[60];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1055 in k502 */
static void C_ccall f_1056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1056,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1062,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp);
/* chicken.locative.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1061 in a1055 in k502 */
static void C_ccall f_1062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1062,c,av);}
/* chicken.locative.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[61];
av2[3]=lf[45];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[62];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1083 in k502 */
static void C_ccall f_1084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1084,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1090,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp);
/* chicken.memory.representation.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1089 in a1083 in k502 */
static void C_ccall f_1090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1090,c,av);}
/* chicken.memory.representation.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[63];
av2[3]=lf[45];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[64];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1111 in k502 */
static void C_ccall f_1112(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1112,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1118,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp);
/* chicken.plist.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1117 in a1111 in k502 */
static void C_ccall f_1118(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1118,c,av);}
/* chicken.plist.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[65];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[66];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1139 in k502 */
static void C_ccall f_1140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1140,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* chicken.pretty-print.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1145 in a1139 in k502 */
static void C_ccall f_1146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1146,c,av);}
/* chicken.pretty-print.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[67];
av2[3]=lf[52];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[68];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1167 in k502 */
static void C_ccall f_1168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1168,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1174,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* chicken.process.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1173 in a1167 in k502 */
static void C_ccall f_1174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1174,c,av);}
/* chicken.process.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[69];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[70];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1195 in k502 */
static void C_ccall f_1196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1196,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1202,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp);
/* chicken.process.signal.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1201 in a1195 in k502 */
static void C_ccall f_1202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1202,c,av);}
/* chicken.process.signal.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[71];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[72];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1223 in k502 */
static void C_ccall f_1224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1224,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1230,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp);
/* chicken.process-context.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1229 in a1223 in k502 */
static void C_ccall f_1230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1230,c,av);}
/* chicken.process-context.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[73];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[74];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1251 in k502 */
static void C_ccall f_1252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1252,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1258,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
/* chicken.process-context.posix.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1257 in a1251 in k502 */
static void C_ccall f_1258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1258,c,av);}
/* chicken.process-context.posix.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[75];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[76];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1279 in k502 */
static void C_ccall f_1280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1280,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1286,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp);
/* chicken.random.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1285 in a1279 in k502 */
static void C_ccall f_1286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1286,c,av);}
/* chicken.random.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[77];
av2[3]=lf[52];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[78];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1307 in k502 */
static void C_ccall f_1308(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1308,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1314,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp);
/* chicken.sort.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1313 in a1307 in k502 */
static void C_ccall f_1314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1314,c,av);}
/* chicken.sort.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[79];
av2[3]=lf[28];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[80];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1335 in k502 */
static void C_ccall f_1336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1336,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1342,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
/* chicken.time.posix.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1341 in a1335 in k502 */
static void C_ccall f_1342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1342,c,av);}
/* chicken.time.posix.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[81];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[82];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1363 in k502 */
static void C_ccall f_1364(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1364,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1370,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp);
/* chicken.continuation.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1369 in a1363 in k502 */
static void C_ccall f_1370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1370,c,av);}
/* chicken.continuation.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[83];
av2[3]=lf[84];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[85];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1391 in k502 */
static void C_ccall f_1392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1392,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1398,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp);
/* chicken.file.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1397 in a1391 in k502 */
static void C_ccall f_1398(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1398,c,av);}
/* chicken.file.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[86];
av2[3]=lf[87];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[88];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1419 in k502 */
static void C_ccall f_1420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1420,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1426,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp);
/* chicken.read-syntax.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1425 in a1419 in k502 */
static void C_ccall f_1426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1426,c,av);}
/* chicken.read-syntax.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[89];
av2[3]=lf[90];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[91];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1447 in k502 */
static void C_ccall f_1448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1448,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1454,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp);
/* chicken.repl.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1453 in a1447 in k502 */
static void C_ccall f_1454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1454,c,av);}
/* chicken.repl.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[92];
av2[3]=lf[93];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[94];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1475 in k502 */
static void C_ccall f_1476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1476,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1482,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp);
/* chicken.tcp.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1481 in a1475 in k502 */
static void C_ccall f_1482(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1482,c,av);}
/* chicken.tcp.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[95];
av2[3]=lf[96];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[97];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1503 in k502 */
static void C_ccall f_1504(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1504,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1510,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
/* chicken.version.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1509 in a1503 in k502 */
static void C_ccall f_1510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1510,c,av);}
/* chicken.version.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[98];
av2[3]=lf[52];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[99];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1531 in k502 */
static void C_ccall f_1532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1532,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1538,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp);
/* chicken.number-vector.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1537 in a1531 in k502 */
static void C_ccall f_1538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1538,c,av);}
/* chicken.number-vector.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[100];
av2[3]=lf[101];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[102];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1559 in k502 */
static void C_ccall f_1560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1560,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1566,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp);
/* srfi-4.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1565 in a1559 in k502 */
static void C_ccall f_1566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1566,c,av);}
/* srfi-4.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[101];
av2[3]=lf[101];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[103];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1587 in k502 */
static void C_ccall f_1588(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1588,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1594,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp);
/* scheme.write.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1593 in a1587 in k502 */
static void C_ccall f_1594(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1594,c,av);}
/* scheme.write.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[104];
av2[3]=lf[105];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[106];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1615 in k502 */
static void C_ccall f_1616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1616,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1622,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp);
/* scheme.time.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1621 in a1615 in k502 */
static void C_ccall f_1622(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1622,c,av);}
/* scheme.time.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[107];
av2[3]=lf[105];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[108];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1643 in k502 */
static void C_ccall f_1644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1644,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1650,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp);
/* scheme.file.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1649 in a1643 in k502 */
static void C_ccall f_1650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1650,c,av);}
/* scheme.file.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[109];
av2[3]=lf[105];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[110];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a1671 in k502 */
static void C_ccall f_1672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1672,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1678,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp);
/* scheme.process-context.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a1677 in a1671 in k502 */
static void C_ccall f_1678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_1678,c,av);}
/* scheme.process-context.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[111];
av2[3]=lf[105];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[112];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* ##sys#import-library-hook in k502 */
static void C_ccall f_1700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1700,c,av);}
t3=C_i_getprop(t2,lf[6],C_SCHEME_FALSE);
if(C_truep(t3)){
/* eval-modules.scm:106: il */
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)C_fast_retrieve_proc(t4))(2,av2);}}
else{
/* eval-modules.scm:107: hook */
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k502 */
static void C_ccall f_504(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(507,c,3)))){
C_save_and_reclaim((void *)f_504,c,av);}
a=C_alloc(507);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_506,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_putprop(&a,3,lf[2],lf[6],t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_534,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_putprop(&a,3,lf[7],lf[6],t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_562,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_putprop(&a,3,lf[10],lf[6],t7);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_568,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp);
t10=C_a_i_putprop(&a,3,lf[12],lf[6],t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_596,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
t12=C_a_i_putprop(&a,3,lf[14],lf[6],t11);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_624,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp);
t14=C_a_i_putprop(&a,3,lf[16],lf[6],t13);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_652,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp);
t16=C_a_i_putprop(&a,3,lf[19],lf[6],t15);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_680,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp);
t18=C_a_i_putprop(&a,3,lf[21],lf[6],t17);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_708,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t20=C_a_i_putprop(&a,3,lf[24],lf[6],t19);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_714,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t22=C_a_i_putprop(&a,3,lf[27],lf[6],t21);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_742,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t24=C_a_i_putprop(&a,3,lf[30],lf[6],t23);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_770,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t26=C_a_i_putprop(&a,3,lf[33],lf[6],t25);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_798,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t28=C_a_i_putprop(&a,3,lf[36],lf[6],t27);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_826,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t30=C_a_i_putprop(&a,3,lf[38],lf[6],t29);
t31=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_854,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp);
t32=C_a_i_putprop(&a,3,lf[41],lf[6],t31);
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_860,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp);
t34=C_a_i_putprop(&a,3,lf[44],lf[6],t33);
t35=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_888,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp);
t36=C_a_i_putprop(&a,3,lf[47],lf[6],t35);
t37=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_916,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp);
t38=C_a_i_putprop(&a,3,lf[49],lf[6],t37);
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_944,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
t40=C_a_i_putprop(&a,3,lf[51],lf[6],t39);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp);
t42=C_a_i_putprop(&a,3,lf[54],lf[6],t41);
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1000,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp);
t44=C_a_i_putprop(&a,3,lf[56],lf[6],t43);
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1028,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp);
t46=C_a_i_putprop(&a,3,lf[59],lf[6],t45);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1056,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t48=C_a_i_putprop(&a,3,lf[61],lf[6],t47);
t49=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1084,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
t50=C_a_i_putprop(&a,3,lf[63],lf[6],t49);
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1112,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp);
t52=C_a_i_putprop(&a,3,lf[65],lf[6],t51);
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp);
t54=C_a_i_putprop(&a,3,lf[67],lf[6],t53);
t55=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1168,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp);
t56=C_a_i_putprop(&a,3,lf[69],lf[6],t55);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1196,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp);
t58=C_a_i_putprop(&a,3,lf[71],lf[6],t57);
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1224,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp);
t60=C_a_i_putprop(&a,3,lf[73],lf[6],t59);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1252,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp);
t62=C_a_i_putprop(&a,3,lf[75],lf[6],t61);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1280,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
t64=C_a_i_putprop(&a,3,lf[77],lf[6],t63);
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1308,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp);
t66=C_a_i_putprop(&a,3,lf[79],lf[6],t65);
t67=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1336,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp);
t68=C_a_i_putprop(&a,3,lf[81],lf[6],t67);
t69=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1364,a[2]=((C_word)li64),tmp=(C_word)a,a+=3,tmp);
t70=C_a_i_putprop(&a,3,lf[83],lf[6],t69);
t71=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1392,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
t72=C_a_i_putprop(&a,3,lf[86],lf[6],t71);
t73=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1420,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t74=C_a_i_putprop(&a,3,lf[89],lf[6],t73);
t75=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1448,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp);
t76=C_a_i_putprop(&a,3,lf[92],lf[6],t75);
t77=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1476,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp);
t78=C_a_i_putprop(&a,3,lf[95],lf[6],t77);
t79=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1504,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp);
t80=C_a_i_putprop(&a,3,lf[98],lf[6],t79);
t81=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1532,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
t82=C_a_i_putprop(&a,3,lf[100],lf[6],t81);
t83=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1560,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp);
t84=C_a_i_putprop(&a,3,lf[101],lf[6],t83);
t85=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1588,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp);
t86=C_a_i_putprop(&a,3,lf[104],lf[6],t85);
t87=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1616,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp);
t88=C_a_i_putprop(&a,3,lf[107],lf[6],t87);
t89=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp);
t90=C_a_i_putprop(&a,3,lf[109],lf[6],t89);
t91=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1672,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
t92=C_a_i_putprop(&a,3,lf[111],lf[6],t91);
t93=C_fast_retrieve(lf[113]);
t94=C_mutate((C_word*)lf[113]+1 /* (set! ##sys#import-library-hook ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1700,a[2]=t93,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t95=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t95;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t95+1)))(2,av2);}}

/* a505 in k502 */
static void C_ccall f_506(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_506,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_512,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp);
/* chicken.bitwise.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a511 in a505 in k502 */
static void C_ccall f_512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_512,c,av);}
/* chicken.bitwise.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[2];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[4];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a533 in k502 */
static void C_ccall f_534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_534,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_540,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
/* chicken.bytevector.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a539 in a533 in k502 */
static void C_ccall f_540(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_540,c,av);}
/* chicken.bytevector.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[7];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[8];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a561 in k502 */
static void C_ccall f_562(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_562,c,av);}
/* chicken.foreign.import.scm:27: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=lf[10];
av2[3]=lf[10];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_fast_retrieve(lf[11]);
tp(6,av2);}}

/* a567 in k502 */
static void C_ccall f_568(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_568,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_574,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp);
/* chicken.fixnum.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a573 in a567 in k502 */
static void C_ccall f_574(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_574,c,av);}
/* chicken.fixnum.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[12];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[13];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a595 in k502 */
static void C_ccall f_596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_596,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_602,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp);
/* chicken.keyword.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a601 in a595 in k502 */
static void C_ccall f_602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_602,c,av);}
/* chicken.keyword.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[14];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[15];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a623 in k502 */
static void C_ccall f_624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_624,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_630,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp);
/* chicken.internal.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a629 in a623 in k502 */
static void C_ccall f_630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_630,c,av);}
/* chicken.internal.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[16];
av2[3]=lf[17];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[18];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a651 in k502 */
static void C_ccall f_652(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_652,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_658,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp);
/* chicken.platform.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a657 in a651 in k502 */
static void C_ccall f_658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_658,c,av);}
/* chicken.platform.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[19];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[20];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a679 in k502 */
static void C_ccall f_680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_680,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_686,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp);
/* chicken.errno.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a685 in a679 in k502 */
static void C_ccall f_686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_686,c,av);}
/* chicken.errno.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[21];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[23];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a707 in k502 */
static void C_ccall f_708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_708,c,av);}
/* chicken.condition.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=lf[24];
av2[3]=lf[24];
av2[4]=lf[25];
av2[5]=C_fast_retrieve(lf[26]);
tp(6,av2);}}

/* a713 in k502 */
static void C_ccall f_714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_714,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_720,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
/* chicken.string.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a719 in a713 in k502 */
static void C_ccall f_720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_720,c,av);}
/* chicken.string.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[27];
av2[3]=lf[28];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[29];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a741 in k502 */
static void C_ccall f_742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_742,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_748,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
/* chicken.irregex.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a747 in a741 in k502 */
static void C_ccall f_748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_748,c,av);}
/* chicken.irregex.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[30];
av2[3]=lf[31];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[32];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a769 in k502 */
static void C_ccall f_770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_770,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_776,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
/* chicken.pathname.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a775 in a769 in k502 */
static void C_ccall f_776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_776,c,av);}
/* chicken.pathname.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[33];
av2[3]=lf[34];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[35];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a797 in k502 */
static void C_ccall f_798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_798,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_804,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
/* chicken.io.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a803 in a797 in k502 */
static void C_ccall f_804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_804,c,av);}
/* chicken.io.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[36];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[37];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a825 in k502 */
static void C_ccall f_826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_826,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_832,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
/* chicken.port.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a831 in a825 in k502 */
static void C_ccall f_832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_832,c,av);}
/* chicken.port.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[38];
av2[3]=lf[39];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[40];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a853 in k502 */
static void C_ccall f_854(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_854,c,av);}
/* chicken.time.import.scm:26: ##sys#register-core-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=lf[41];
av2[3]=lf[3];
av2[4]=lf[42];
av2[5]=C_fast_retrieve(lf[43]);
tp(6,av2);}}

/* a859 in k502 */
static void C_ccall f_860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_860,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_866,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp);
/* chicken.memory.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a865 in a859 in k502 */
static void C_ccall f_866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_866,c,av);}
/* chicken.memory.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[44];
av2[3]=lf[45];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[46];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a887 in k502 */
static void C_ccall f_888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_888,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_894,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp);
/* chicken.file.posix.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a893 in a887 in k502 */
static void C_ccall f_894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_894,c,av);}
/* chicken.file.posix.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[47];
av2[3]=lf[22];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[48];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a915 in k502 */
static void C_ccall f_916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_916,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_922,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp);
/* chicken.flonum.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a921 in a915 in k502 */
static void C_ccall f_922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_922,c,av);}
/* chicken.flonum.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[49];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[50];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a943 in k502 */
static void C_ccall f_944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_944,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_950,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp);
/* chicken.format.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a949 in a943 in k502 */
static void C_ccall f_950(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_950,c,av);}
/* chicken.format.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[51];
av2[3]=lf[52];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[53];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* a971 in k502 */
static void C_ccall f_972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_972,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_978,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp);
/* chicken.gc.import.scm:3: ##sys#with-environment */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}

/* a977 in a971 in k502 */
static void C_ccall f_978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_978,c,av);}
/* chicken.gc.import.scm:5: ##sys#register-compiled-module */
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[1]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[1]+1);
av2[1]=t1;
av2[2]=lf[54];
av2[3]=lf[3];
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=lf[55];
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_eval_2dmodules_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("eval-modules"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_eval_2dmodules_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(18550))){
C_save(t1);
C_rereclaim2(18550*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,114);
lf[0]=C_h_intern(&lf[0],12, C_text("eval-modules"));
lf[1]=C_h_intern(&lf[1],30, C_text("##sys#register-compiled-module"));
lf[2]=C_h_intern(&lf[2],15, C_text("chicken.bitwise"));
lf[3]=C_h_intern(&lf[3],7, C_text("library"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\141\162\151\164\150\155\145\164\151\143\055\163\150\151\146\164\376\001\000\000\040\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\141\162\151\164\150\155\145\164\151\143\055\163\150\151\146\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\151\156\164\145\147\145\162\055\154\145\156\147\164\150\376\001\000\000\036\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\151\156\164\145\147\145\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\142\151\164\055\076\142\157\157\154\145\141\156\376\001\000\000\034\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\055\076\142\157\157\154\145\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\151\164\167\151\163\145\055\156\157\164\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\156\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\151\164\167\151\163\145\055\170\157\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\170\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\151\164\167\151\163\145\055\151\157\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\151\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\151\164\167\151\163\145\055\141\156\144\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\141\156\144\376\377\016"));
lf[5]=C_h_intern(&lf[5],22, C_text("##sys#with-environment"));
lf[6]=C_h_intern(&lf[6],12, C_text("##sys#import"));
lf[7]=C_h_intern(&lf[7],18, C_text("chicken.bytevector"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\142\171\164\145\166\145\143\164\157\162\077\376\001\000\000\036\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\142\171\164\145\166\145\143\164\157\162\075\077\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\155\141\153\145\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\155\141\153\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\142\171\164\145\166\145\143\164\157\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\165\070\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\165\070\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\142\171\164\145\166\145\143\164\157\162\055\165\070\055\163\145\164\041\376\001\000\000\045\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\165\070\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\376\001\000\000\042\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\142\171\164\145\166\145\143\164\157\162\055\141\160\160\145\156\144\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\165\164\146\070\055\076\163\164\162\151\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\165\164\146\070\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\165\164\146\070\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\163\164\162\151\156\147\055\076\165\164\146\070\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\154\141\164\151\156\061\055\076\163\164\162\151\156\147\376\001\000\000\041\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\154\141\164\151\156\061\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\154\141\164\151\156\061\376\001\000\000\041\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\163\164\162\151\156\147\055\076\154\141\164\151\156\061\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\142\171\164\145\163\055\076\163\164\162\151\156\147\376\001\000\000\040\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\163\055\076\163\164\162\151\156\147\376\377\016"));
lf[9]=C_h_intern(&lf[9],26, C_text("##sys#register-core-module"));
lf[10]=C_h_intern(&lf[10],15, C_text("chicken.foreign"));
lf[11]=C_h_intern(&lf[11],35, C_text("##sys#chicken-ffi-macro-environment"));
lf[12]=C_h_intern(&lf[12],14, C_text("chicken.fixnum"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\170\057\077\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\057\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\170\052\077\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\052\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\170\055\077\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\055\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\170\053\077\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\053\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\162\145\155\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\162\145\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\155\157\144\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\155\157\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\147\143\144\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\147\143\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\170\057\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\154\145\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\154\145\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\170\145\166\145\156\077\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\145\166\145\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\170\157\144\144\077\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\157\144\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\163\150\162\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\163\150\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\163\150\154\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\163\150\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\156\157\164\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\156\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\170\157\162\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\170\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\151\157\162\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\151\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\141\156\144\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\141\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\156\145\147\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\156\145\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\155\141\170\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\155\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\170\155\151\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\155\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\170\074\075\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\074\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\170\076\075\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\076\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\170\074\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\074\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\170\076\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\076\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\170\075\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\170\052\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\170\055\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\055\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\170\053\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\151\170\156\165\155\055\160\162\145\143\151\163\151\157\156\376\001\000\000\037\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\151\170\156\165\155\055\160\162\145\143\151\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\151\170\156\165\155\055\142\151\164\163\376\001\000\000\032\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\151\170\156\165\155\055\142\151\164\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\155\157\163\164\055\156\145\147\141\164\151\166\145\055\146\151\170\156\165\155\376\001\000\000\043\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\155\157\163\164\055\156\145\147\141\164\151\166\145\055\146\151\170\156\165\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\155\157\163\164\055\160\157\163\151\164\151\166\145\055\146\151\170\156\165\155\376\001\000\000\043\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\155\157\163\164\055\160\157\163\151\164\151\166\145\055\146\151\170\156\165\155\376\377\016"));
lf[14]=C_h_intern(&lf[14],15, C_text("chicken.keyword"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\153\145\171\167\157\162\144\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\153\145\171\167\157\162\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\147\145\164\055\153\145\171\167\157\162\144\376\001\000\000\033\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\147\145\164\055\153\145\171\167\157\162\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\153\145\171\167\157\162\144\055\076\163\164\162\151\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\153\145\171\167\157\162\144\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\076\153\145\171\167\157\162\144\376\001\000\000\037\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\163\164\162\151\156\147\055\076\153\145\171\167\157\162\144\376\377\016"));
lf[16]=C_h_intern(&lf[16],16, C_text("chicken.internal"));
lf[17]=C_h_intern(&lf[17],8, C_text("internal"));
lf[18]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\163\164\162\151\156\147\055\076\143\055\151\144\145\156\164\151\146\151\145\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\163\164\162\151\156\147\055\076\143\055\151\144\145\156\164\151\146\151\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\154\151\142\162\141\162\171\055\151\144\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\154\151\142\162\141\162\171\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\166\141\154\151\144\055\154\151\142\162\141\162\171\055\163\160\145\143\151\146\151\145\162\077\376\001\000\000\051\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\166\141\154\151\144\055\154\151\142\162\141\162\171\055\163\160\145\143\151\146\151\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\155\157\144\165\154\145\055\162\145\161\165\151\162\145\155\145\156\164\376\001\000\000\043\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\155\157\144\165\154\145\055\162\145\161\165\151\162\145\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\143\150\145\143\153\055\146\157\162\055\155\165\154\164\151\160\154\145\055\142\151\156\144\151\156\147\163\376\001\000\000\054\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\143\150\145\143\153\055\146\157\162\055\155\165\154\164\151\160\154\145\055\142\151\156\144\151\156\147\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\141\143\162\157\055\163\165\142\163\145\164\376\001\000\000\035\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\155\141\143\162\157\055\163\165\142\163\145\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\146\151\170\165\160\055\155\141\143\162\157\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\050\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\146\151\170\165\160\055\155\141\143\162\157\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\155\141\153\145\055\150\141\163\150\055\164\141\142\154\145\376\001\000\000\040\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\155\141\153\145\055\150\141\163\150\055\164\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\150\141\163\150\055\164\141\142\154\145\055\162\145\146\376\001\000\000\037\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\150\141\163\150\055\164\141\142\154\145\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\150\141\163\150\055\164\141\142\154\145\055\163\145\164\041\376\001\000\000\040\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\150\141\163\150\055\164\141\142\154\145\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\150\141\163\150\055\164\141\142\154\145\055\165\160\144\141\164\145\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\150\141\163\150\055\164\141\142\154\145\055\165\160\144\141\164\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\150\141\163\150\055\164\141\142\154\145\055\146\157\162\055\145\141\143\150\376\001\000\000\044\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\150\141\163\150\055\164\141\142\154\145\055\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\150\141\163\150\055\164\141\142\154\145\055\163\151\172\145\376\001\000\000\040\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\150\141\163\150\055\164\141\142\154\145\055\163\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\144\145\146\141\165\154\164\055\151\155\160\157\162\164\163\376\001\000\000\040\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\144\145\146\141\165\154\164\055\151\155\160\157\162\164\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\144\145\146\141\165\154\164\055\163\171\156\164\141\170\055\151\155\160\157\162\164\163\376\001\000\000\047\001\143\150\151\143\153\145\156\056\151\156\164\145\162\156\141\154\043\144\145\146\141\165\154\164\055\163\171\156\164\141\170\055\151\155\160\157\162\164\163\376\377\016"));
lf[19]=C_h_intern(&lf[19],16, C_text("chicken.platform"));
lf[20]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\142\165\151\154\144\055\160\154\141\164\146\157\162\155\376\001\000\000\037\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\142\165\151\154\144\055\160\154\141\164\146\157\162\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\150\151\143\153\145\156\055\166\145\162\163\151\157\156\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\143\150\151\143\153\145\156\055\166\145\162\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\143\150\151\143\153\145\156\055\150\157\155\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\143\150\151\143\153\145\156\055\150\157\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\146\145\141\164\165\162\145\077\376\001\000\000\031\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\146\145\141\164\165\162\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\155\141\143\150\151\156\145\055\142\171\164\145\055\157\162\144\145\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\155\141\143\150\151\156\145\055\142\171\164\145\055\157\162\144\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\141\143\150\151\156\145\055\164\171\160\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\155\141\143\150\151\156\145\055\164\171\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\162\145\160\157\163\151\164\157\162\171\055\160\141\164\150\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\162\145\160\157\163\151\164\157\162\171\055\160\141\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\156\163\164\141\154\154\141\164\151\157\156\055\162\145\160\157\163\151\164\157\162\171\376\001\000\000\050\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\151\156\163\164\141\154\154\141\164\151\157\156\055\162\145\160\157\163\151\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\165\156\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\165\156\162\145\147\151\163\164\145\162\055\146\145\141\164\165\162\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\151\156\143\154\165\144\145\055\160\141\164\150\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\151\156\143\154\165\144\145\055\160\141\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\157\146\164\167\141\162\145\055\164\171\160\145\376\001\000\000\036\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\157\146\164\167\141\162\145\055\164\171\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\157\146\164\167\141\162\145\055\166\145\162\163\151\157\156\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\157\146\164\167\141\162\145\055\166\145\162\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\162\145\164\165\162\156\055\164\157\055\150\157\163\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\162\145\164\165\162\156\055\164\157\055\150\157\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\163\171\163\164\145\155\055\143\157\156\146\151\147\055\144\151\162\145\143\164\157\162\171\376\001\000\000\050\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\171\163\164\145\155\055\143\157\156\146\151\147\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\163\171\163\164\145\155\055\143\141\143\150\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\047\001\143\150\151\143\153\145\156\056\160\154\141\164\146\157\162\155\043\163\171\163\164\145\155\055\143\141\143\150\145\055\144\151\162\145\143\164\157\162\171\376\377\016"));
lf[21]=C_h_intern(&lf[21],13, C_text("chicken.errno"));
lf[22]=C_h_intern(&lf[22],5, C_text("posix"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\170\144\145\166\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\170\144\145\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\145\162\162\156\157\057\167\157\165\154\144\142\154\157\143\153\376\001\000\000\036\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\167\157\165\154\144\142\154\157\143\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\163\162\143\150\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\163\162\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\163\160\151\160\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\163\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\162\157\146\163\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\162\157\146\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\162\141\156\147\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\162\141\156\147\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\160\151\160\145\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\160\145\162\155\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\160\145\162\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\156\170\151\157\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\170\151\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\157\164\164\171\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\164\164\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\162\162\156\157\057\156\157\164\145\155\160\164\171\376\001\000\000\034\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\164\145\155\160\164\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\145\162\162\156\157\057\156\157\164\144\151\162\376\001\000\000\032\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\164\144\151\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\157\163\171\163\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\163\171\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\157\163\160\143\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\163\160\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\157\155\145\155\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\155\145\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\157\154\143\153\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\154\143\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\145\162\162\156\157\057\156\157\145\170\145\143\376\001\000\000\032\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\145\170\145\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\157\145\156\164\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\157\144\145\166\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\157\144\145\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\156\146\151\154\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\145\162\162\156\157\057\156\141\155\145\164\157\157\154\157\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\156\141\155\145\164\157\157\154\157\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\155\154\151\156\153\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\155\154\151\156\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\155\146\151\154\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\155\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\151\163\144\151\162\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\151\163\144\151\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\145\162\162\156\157\057\151\157\376\001\000\000\026\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\151\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\151\156\166\141\154\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\151\156\166\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\151\156\164\162\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\151\156\164\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\151\154\163\145\161\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\151\154\163\145\161\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\146\142\151\147\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\146\142\151\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\146\141\165\154\164\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\146\141\165\154\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\145\170\151\163\164\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\145\170\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\145\162\162\156\157\057\144\157\155\376\001\000\000\027\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\144\157\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\145\162\162\156\157\057\144\145\141\144\154\153\376\001\000\000\032\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\144\145\141\144\154\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\143\150\151\154\144\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\143\150\151\154\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\142\165\163\171\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\142\165\163\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\142\141\144\146\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\142\141\144\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\141\147\141\151\156\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\141\147\141\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\145\162\162\156\157\057\141\143\143\145\163\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\141\143\143\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\145\162\162\156\157\057\062\142\151\147\376\001\000\000\030\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\057\062\142\151\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\145\162\162\156\157\376\001\000\000\023\001\143\150\151\143\153\145\156\056\145\162\162\156\157\043\145\162\162\156\157\376\377\016"));
lf[24]=C_h_intern(&lf[24],17, C_text("chicken.condition"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\141\142\157\162\164\376\001\000\000\027\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\141\142\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\151\147\156\141\154\376\001\000\000\030\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\163\151\147\156\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\143\165\162\162\145\156\164\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\165\162\162\145\156\164\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\160\162\151\156\164\055\145\162\162\157\162\055\155\145\163\163\141\147\145\376\001\000\000\045\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\160\162\151\156\164\055\145\162\162\157\162\055\155\145\163\163\141\147\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\001\000\000\050\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\167\151\164\150\055\145\170\143\145\160\164\151\157\156\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\155\141\153\145\055\160\162\157\160\145\162\164\171\055\143\157\156\144\151\164\151\157\156\376\001\000\000\051\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\155\141\153\145\055\160\162\157\160\145\162\164\171\055\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\155\141\153\145\055\143\157\155\160\157\163\151\164\145\055\143\157\156\144\151\164\151\157\156\376\001\000\000\052\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\155\141\153\145\055\143\157\155\160\157\163\151\164\145\055\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\157\156\144\151\164\151\157\156\376\001\000\000\033\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\157\156\144\151\164\151\157\156\077\376\001\000\000\034\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\157\156\144\151\164\151\157\156\055\076\154\151\163\164\376\001\000\000\041\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\157\156\144\151\164\151\157\156\055\160\162\145\144\151\143\141\164\145\376\001\000\000\045\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\055\160\162\145\144\151\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\055\141\143\143\145\163\163\157\162\376\001\000\000\055\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\055\141\143\143\145\163\163\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\147\145\164\055\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\376\001\000\000\050\001\143\150\151\143\153\145\156\056\143\157\156\144\151\164\151\157\156\043\147\145\164\055\143\157\156\144\151\164\151\157\156\055\160\162\157\160\145\162\164\171\376\377\016"));
lf[26]=C_h_intern(&lf[26],41, C_text("##sys#chicken.condition-macro-environment"));
lf[27]=C_h_intern(&lf[27],14, C_text("chicken.string"));
lf[28]=C_h_intern(&lf[28],15, C_text("data-structures"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\157\156\143\376\001\000\000\023\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\143\157\156\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\055\076\163\164\162\151\156\147\376\001\000\000\027\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\150\157\160\376\001\000\000\032\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\143\150\157\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\150\157\155\160\376\001\000\000\033\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\143\150\157\155\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\143\157\155\160\141\162\145\063\376\001\000\000\036\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\143\157\155\160\141\162\145\063\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\163\164\162\151\156\147\055\143\157\155\160\141\162\145\063\055\143\151\376\001\000\000\041\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\143\157\155\160\141\162\145\063\055\143\151\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\162\145\166\145\162\163\145\055\154\151\163\164\055\076\163\164\162\151\156\147\376\001\000\000\043\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\162\145\166\145\162\163\145\055\154\151\163\164\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\162\145\166\145\162\163\145\055\163\164\162\151\156\147\055\141\160\160\145\156\144\376\001\000\000\044\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\162\145\166\145\162\163\145\055\163\164\162\151\156\147\055\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\163\164\162\151\156\147\055\151\156\164\145\162\163\160\145\162\163\145\376\001\000\000\041\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\151\156\164\145\162\163\160\145\162\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\163\160\154\151\164\376\001\000\000\033\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\163\160\154\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\164\162\151\156\147\055\164\162\141\156\163\154\141\164\145\376\001\000\000\037\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\164\162\141\156\163\154\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\163\164\162\151\156\147\055\164\162\141\156\163\154\141\164\145\052\376\001\000\000\040\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\164\162\151\156\147\055\164\162\141\156\163\154\141\164\145\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\165\142\163\164\162\151\156\147\075\077\376\001\000\000\032\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\165\142\163\164\162\151\156\147\055\143\151\075\077\376\001\000\000\035\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\055\143\151\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\376\001\000\000\036\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\055\143\151\376\001\000\000\041\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\055\143\151\376\377\016"));
lf[30]=C_h_intern(&lf[30],15, C_text("chicken.irregex"));
lf[31]=C_h_intern(&lf[31],7, C_text("irregex"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\151\162\162\145\147\145\170\376\001\000\000\027\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\151\162\162\145\147\145\170\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\076\163\162\145\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\163\164\162\151\156\147\055\076\163\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\155\141\171\142\145\055\163\164\162\151\156\147\055\076\163\162\145\376\001\000\000\041\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\155\141\171\142\145\055\163\164\162\151\156\147\055\076\163\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\162\145\055\076\151\162\162\145\147\145\170\376\001\000\000\034\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\163\162\145\055\076\151\162\162\145\147\145\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\162\162\145\147\145\170\055\156\141\155\145\163\376\001\000\000\035\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\156\141\155\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\151\162\162\145\147\145\170\055\156\165\155\055\163\165\142\155\141\164\143\150\145\163\376\001\000\000\046\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\156\165\155\055\163\165\142\155\141\164\143\150\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\164\162\151\156\147\055\076\151\162\162\145\147\145\170\376\001\000\000\037\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\163\164\162\151\156\147\055\076\151\162\162\145\147\145\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\155\141\153\145\055\151\162\162\145\147\145\170\055\143\150\165\156\153\145\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\155\141\153\145\055\151\162\162\145\147\145\170\055\143\150\165\156\153\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\151\162\162\145\147\145\170\055\145\170\164\162\141\143\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\145\170\164\162\141\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\151\162\162\145\147\145\170\055\146\157\154\144\376\001\000\000\034\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\146\157\154\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\162\162\145\147\145\170\055\155\141\164\143\150\376\001\000\000\035\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\151\162\162\145\147\145\170\055\155\141\164\143\150\077\376\001\000\000\036\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\151\162\162\145\147\145\170\055\163\145\141\162\143\150\376\001\000\000\036\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\163\145\141\162\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\162\162\145\147\145\170\055\163\160\154\151\164\376\001\000\000\035\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\163\160\154\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\151\162\162\145\147\145\170\055\162\145\160\154\141\143\145\376\001\000\000\037\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\162\145\160\154\141\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\151\162\162\145\147\145\170\055\162\145\160\154\141\143\145\057\141\154\154\376\001\000\000\043\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\162\145\160\154\141\143\145\057\141\154\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\151\162\162\145\147\145\170\055\146\157\154\144\057\143\150\165\156\153\145\144\376\001\000\000\044\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\146\157\154\144\057\143\150\165\156\153\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\151\162\162\145\147\145\170\055\155\141\164\143\150\057\143\150\165\156\153\145\144\376\001\000\000\045\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\057\143\150\165\156\153\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\151\162\162\145\147\145\170\055\163\145\141\162\143\150\057\143\150\165\156\153\145\144\376\001\000\000\046\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\163\145\141\162\143\150\057\143\150\165\156\153\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\144\141\164\141\077\376\001\000\000\043\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\144\141\164\141\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\156\141\155\145\163\376\001\000\000\043\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\156\141\155\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\164\141\162\164\055\151\156\144\145\170\376\001\000\000\051\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\164\141\162\164\055\151\156\144\145\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\145\156\144\055\151\156\144\145\170\376\001\000\000\047\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\145\156\144\055\151\156\144\145\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\156\165\155\055\163\165\142\155\141\164\143\150\145\163\376\001\000\000\054\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\156\165\155\055\163\165\142\155\141\164\143\150\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\165\142\163\164\162\151\156\147\376\001\000\000\047\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\165\142\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\166\141\154\151\144\055\151\156\144\145\170\077\376\001\000\000\052\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\166\141\154\151\144\055\151\156\144\145\170\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\164\141\162\164\055\143\150\165\156\153\376\001\000\000\051\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\164\141\162\164\055\143\150\165\156\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\145\156\144\055\143\150\165\156\153\376\001\000\000\047\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\145\156\144\055\143\150\165\156\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\165\142\143\150\165\156\153\376\001\000\000\046\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\155\141\164\143\150\055\163\165\142\143\150\165\156\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\147\154\157\142\055\076\163\162\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\147\154\157\142\055\076\163\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\162\145\055\076\163\164\162\151\156\147\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\163\162\145\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\151\162\162\145\147\145\170\055\157\160\164\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\157\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\151\162\162\145\147\145\170\055\161\165\157\164\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\151\162\162\145\147\145\170\043\151\162\162\145\147\145\170\055\161\165\157\164\145\376\377\016"));
lf[33]=C_h_intern(&lf[33],16, C_text("chicken.pathname"));
lf[34]=C_h_intern(&lf[34],8, C_text("pathname"));
lf[35]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\141\142\163\157\154\165\164\145\055\160\141\164\150\156\141\155\145\077\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\141\142\163\157\154\165\164\145\055\160\141\164\150\156\141\155\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\144\145\143\157\155\160\157\163\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\144\145\143\157\155\160\157\163\145\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\144\145\143\157\155\160\157\163\145\055\160\141\164\150\156\141\155\145\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\144\145\143\157\155\160\157\163\145\055\160\141\164\150\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\144\151\162\145\143\164\157\162\171\055\156\165\154\154\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\144\151\162\145\143\164\157\162\171\055\156\165\154\154\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\155\141\153\145\055\141\142\163\157\154\165\164\145\055\160\141\164\150\156\141\155\145\376\001\000\000\047\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\155\141\153\145\055\141\142\163\157\154\165\164\145\055\160\141\164\150\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\155\141\153\145\055\160\141\164\150\156\141\155\145\376\001\000\000\036\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\155\141\153\145\055\160\141\164\150\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\156\157\162\155\141\154\151\172\145\055\160\141\164\150\156\141\155\145\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\156\157\162\155\141\154\151\172\145\055\160\141\164\150\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\160\141\164\150\156\141\155\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\160\141\164\150\156\141\155\145\055\145\170\164\145\156\163\151\157\156\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\145\170\164\145\156\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\160\141\164\150\156\141\155\145\055\146\151\154\145\376\001\000\000\036\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001\160\141\164\150\156\141\155\145\055\162\145\160\154\141\143\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\053\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\162\145\160\154\141\143\145\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001\160\141\164\150\156\141\155\145\055\162\145\160\154\141\143\145\055\145\170\164\145\156\163\151\157\156\376\001\000\000\053\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\162\145\160\154\141\143\145\055\145\170\164\145\156\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\160\141\164\150\156\141\155\145\055\162\145\160\154\141\143\145\055\146\151\154\145\376\001\000\000\046\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\162\145\160\154\141\143\145\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\160\141\164\150\156\141\155\145\055\163\164\162\151\160\055\144\151\162\145\143\164\157\162\171\376\001\000\000\051\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\163\164\162\151\160\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\160\141\164\150\156\141\155\145\055\163\164\162\151\160\055\145\170\164\145\156\163\151\157\156\376\001\000\000\051\001\143\150\151\143\153\145\156\056\160\141\164\150\156\141\155\145\043\160\141\164\150\156\141\155\145\055\163\164\162\151\160\055\145\170\164\145\156\163\151\157\156\376\377\016"));
lf[36]=C_h_intern(&lf[36],10, C_text("chicken.io"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\154\151\163\164\376\001\000\000\024\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\162\145\141\144\055\142\165\146\146\145\162\145\144\376\001\000\000\030\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\165\146\146\145\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\142\171\164\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\154\151\156\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\162\145\141\144\055\154\151\156\145\163\376\001\000\000\025\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\154\151\156\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\145\141\144\055\163\164\162\151\156\147\376\001\000\000\026\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\162\145\141\144\055\163\164\162\151\156\147\041\376\001\000\000\027\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\163\164\162\151\156\147\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\162\145\141\144\055\164\157\153\145\156\376\001\000\000\025\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\164\157\153\145\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\142\171\164\145\376\001\000\000\025\001\143\150\151\143\153\145\156\056\151\157\043\167\162\151\164\145\055\142\171\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\154\151\156\145\376\001\000\000\025\001\143\150\151\143\153\145\156\056\151\157\043\167\162\151\164\145\055\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\167\162\151\164\145\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\157\043\167\162\151\164\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\376\001\000\000\032\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\041\376\001\000\000\033\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\142\171\164\145\166\145\143\164\157\162\041\376\377\016"));
lf[38]=C_h_intern(&lf[38],12, C_text("chicken.port"));
lf[39]=C_h_intern(&lf[39],4, C_text("port"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\163\164\162\151\156\147\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\157\162\164\043\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\157\162\164\043\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\157\160\171\055\160\157\162\164\376\001\000\000\026\001\143\150\151\143\153\145\156\056\160\157\162\164\043\143\157\160\171\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\155\141\153\145\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\034\001\143\150\151\143\153\145\156\056\160\157\162\164\043\155\141\153\145\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\155\141\153\145\055\142\151\156\141\162\171\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\157\162\164\043\155\141\153\145\055\142\151\156\141\162\171\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\155\141\153\145\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\157\162\164\043\155\141\153\145\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\155\141\153\145\055\142\151\156\141\162\171\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\157\162\164\043\155\141\153\145\055\142\151\156\141\162\171\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\160\157\162\164\055\145\156\143\157\144\151\156\147\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\145\156\143\157\144\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\157\162\164\055\146\157\154\144\376\001\000\000\026\001\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\146\157\154\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\160\157\162\164\055\146\157\162\055\145\141\143\150\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\146\157\162\055\145\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\157\162\164\055\155\141\160\376\001\000\000\025\001\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\155\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\157\162\164\055\156\141\155\145\376\001\000\000\026\001\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\160\157\162\164\055\160\157\163\151\164\151\157\156\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\157\162\164\043\160\157\162\164\055\160\157\163\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\155\141\153\145\055\142\151\144\151\162\145\143\164\151\157\156\141\154\055\160\157\162\164\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\157\162\164\043\155\141\153\145\055\142\151\144\151\162\145\143\164\151\157\156\141\154\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\155\141\153\145\055\142\162\157\141\144\143\141\163\164\055\160\157\162\164\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\157\162\164\043\155\141\153\145\055\142\162\157\141\144\143\141\163\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\155\141\153\145\055\143\157\156\143\141\164\145\156\141\164\145\144\055\160\157\162\164\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\157\162\164\043\155\141\153\145\055\143\157\156\143\141\164\145\156\141\164\145\144\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\145\164\055\142\165\146\146\145\162\151\156\147\055\155\157\144\145\041\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\157\162\164\043\163\145\164\055\142\165\146\146\145\162\151\156\147\055\155\157\144\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\164\145\162\155\151\156\141\154\055\156\141\155\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\157\162\164\043\164\145\162\155\151\156\141\154\055\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\164\145\162\155\151\156\141\154\055\160\157\162\164\077\376\001\000\000\033\001\143\150\151\143\153\145\156\056\160\157\162\164\043\164\145\162\155\151\156\141\154\055\160\157\162\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\164\145\162\155\151\156\141\154\055\163\151\172\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\157\162\164\043\164\145\162\155\151\156\141\154\055\163\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\167\151\164\150\055\145\162\162\157\162\055\157\165\164\160\165\164\055\164\157\055\160\157\162\164\376\001\000\000\046\001\143\150\151\143\153\145\156\056\160\157\162\164\043\167\151\164\150\055\145\162\162\157\162\055\157\165\164\160\165\164\055\164\157\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\160\157\162\164\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\157\162\164\043\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\163\164\162\151\156\147\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\157\162\164\043\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\160\157\162\164\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\157\162\164\043\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\163\164\162\151\156\147\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\157\162\164\043\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\167\151\164\150\055\145\162\162\157\162\055\157\165\164\160\165\164\055\164\157\055\163\164\162\151\156\147\376\001\000\000\050\001\143\150\151\143\153\145\156\056\160\157\162\164\043\167\151\164\150\055\145\162\162\157\162\055\157\165\164\160\165\164\055\164\157\055\163\164\162\151\156\147\376\377\016"));
lf[41]=C_h_intern(&lf[41],12, C_text("chicken.time"));
lf[42]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\143\160\165\055\164\151\155\145\376\001\000\000\025\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\160\165\055\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\165\162\162\145\156\164\055\155\151\154\154\151\163\145\143\157\156\144\163\376\001\000\000\041\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\165\162\162\145\156\164\055\155\151\154\154\151\163\145\143\157\156\144\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\143\165\162\162\145\156\164\055\160\162\157\143\145\163\163\055\155\151\154\154\151\163\145\143\157\156\144\163\376\001\000\000\051\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\165\162\162\145\156\164\055\160\162\157\143\145\163\163\055\155\151\154\154\151\163\145\143\157\156\144\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\165\162\162\145\156\164\055\163\145\143\157\156\144\163\376\001\000\000\034\001\143\150\151\143\153\145\156\056\164\151\155\145\043\143\165\162\162\145\156\164\055\163\145\143\157\156\144\163\376\377\016"));
lf[43]=C_h_intern(&lf[43],36, C_text("##sys#chicken.time-macro-environment"));
lf[44]=C_h_intern(&lf[44],14, C_text("chicken.memory"));
lf[45]=C_h_intern(&lf[45],7, C_text("lolevel"));
lf[46]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\141\144\144\162\145\163\163\055\076\160\157\151\156\164\145\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\141\144\144\162\145\163\163\055\076\160\157\151\156\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\141\154\151\147\156\055\164\157\055\167\157\162\144\376\001\000\000\034\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\141\154\151\147\156\055\164\157\055\167\157\162\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\141\154\154\157\143\141\164\145\376\001\000\000\027\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\141\154\154\157\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\162\145\145\376\001\000\000\023\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\146\162\145\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\155\141\153\145\055\160\157\151\156\164\145\162\055\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\155\141\153\145\055\160\157\151\156\164\145\162\055\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\155\157\166\145\055\155\145\155\157\162\171\041\376\001\000\000\033\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\155\157\166\145\055\155\145\155\157\162\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\157\142\152\145\143\164\055\076\160\157\151\156\164\145\162\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\157\142\152\145\143\164\055\076\160\157\151\156\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\157\151\156\164\145\162\053\376\001\000\000\027\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\076\141\144\144\162\145\163\163\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\076\141\144\144\162\145\163\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\076\157\142\152\145\143\164\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\076\157\142\152\145\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\146\063\062\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\063\062\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\146\063\062\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\063\062\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\146\066\064\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\066\064\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\146\066\064\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\066\064\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\160\157\151\156\164\145\162\055\154\151\153\145\077\376\001\000\000\034\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\154\151\153\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\163\061\066\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\061\066\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\163\061\066\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\061\066\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\163\063\062\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\063\062\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\163\063\062\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\063\062\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\163\066\064\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\066\064\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\163\066\064\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\066\064\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\160\157\151\156\164\145\162\055\163\070\055\162\145\146\376\001\000\000\035\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\070\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\163\070\055\163\145\164\041\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\070\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\160\157\151\156\164\145\162\055\164\141\147\376\001\000\000\032\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\164\141\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\165\061\066\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\061\066\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\165\061\066\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\061\066\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\165\063\062\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\063\062\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\165\063\062\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\063\062\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\165\066\064\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\066\064\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\157\151\156\164\145\162\055\165\066\064\055\163\145\164\041\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\066\064\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\160\157\151\156\164\145\162\055\165\070\055\162\145\146\376\001\000\000\035\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\070\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\165\070\055\163\145\164\041\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\070\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\160\157\151\156\164\145\162\055\166\145\143\164\157\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\146\151\154\154\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\146\151\154\154\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\044\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\162\145\146\376\001\000\000\041\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\042\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\157\151\156\164\145\162\055\166\145\143\164\157\162\077\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\157\151\156\164\145\162\075\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\075\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\157\151\156\164\145\162\077\376\001\000\000\027\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\164\141\147\055\160\157\151\156\164\145\162\376\001\000\000\032\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\164\141\147\055\160\157\151\156\164\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\164\141\147\147\145\144\055\160\157\151\156\164\145\162\077\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\164\141\147\147\145\144\055\160\157\151\156\164\145\162\077\376\377\016"));
lf[47]=C_h_intern(&lf[47],18, C_text("chicken.file.posix"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\162\145\141\164\145\055\146\151\146\157\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\143\162\145\141\164\145\055\146\151\146\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\162\145\141\164\145\055\163\171\155\142\157\154\151\143\055\154\151\156\153\376\001\000\000\047\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\143\162\145\141\164\145\055\163\171\155\142\157\154\151\143\055\154\151\156\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\162\145\141\144\055\163\171\155\142\157\154\151\143\055\154\151\156\153\376\001\000\000\045\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\162\145\141\144\055\163\171\155\142\157\154\151\143\055\154\151\156\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\144\165\160\154\151\143\141\164\145\055\146\151\154\145\156\157\376\001\000\000\043\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\144\165\160\154\151\143\141\164\145\055\146\151\154\145\156\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\143\156\164\154\057\144\165\160\146\144\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\143\156\164\154\057\144\165\160\146\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\143\156\164\154\057\147\145\164\146\144\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\143\156\164\154\057\147\145\164\146\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\143\156\164\154\057\147\145\164\146\154\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\143\156\164\154\057\147\145\164\146\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\143\156\164\154\057\163\145\164\146\144\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\143\156\164\154\057\163\145\164\146\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\143\156\164\154\057\163\145\164\146\154\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\143\156\164\154\057\163\145\164\146\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\151\154\145\055\141\143\143\145\163\163\055\164\151\155\145\376\001\000\000\043\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\141\143\143\145\163\163\055\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\151\154\145\055\143\150\141\156\147\145\055\164\151\155\145\376\001\000\000\043\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\143\150\141\156\147\145\055\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\146\151\154\145\055\155\157\144\151\146\151\143\141\164\151\157\156\055\164\151\155\145\376\001\000\000\051\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\155\157\144\151\146\151\143\141\164\151\157\156\055\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\151\154\145\055\143\154\157\163\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\143\154\157\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\151\154\145\055\143\157\156\164\162\157\154\376\001\000\000\037\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\143\157\156\164\162\157\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\146\151\154\145\055\143\162\145\141\164\151\157\156\055\155\157\144\145\376\001\000\000\045\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\143\162\145\141\164\151\157\156\055\155\157\144\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\151\154\145\055\147\162\157\165\160\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\147\162\157\165\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\151\154\145\055\154\151\156\153\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\154\151\156\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\151\154\145\055\154\157\143\153\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\154\157\143\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\146\151\154\145\055\154\157\143\153\057\142\154\157\143\153\151\156\147\376\001\000\000\045\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\154\157\143\153\057\142\154\157\143\153\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\151\154\145\055\155\153\163\164\145\155\160\376\001\000\000\037\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\155\153\163\164\145\155\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\151\154\145\055\157\160\145\156\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\157\160\145\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\151\154\145\055\157\167\156\145\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\157\167\156\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\151\154\145\055\160\145\162\155\151\163\163\151\157\156\163\376\001\000\000\043\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\160\145\162\155\151\163\163\151\157\156\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\151\154\145\055\160\157\163\151\164\151\157\156\376\001\000\000\040\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\160\157\163\151\164\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\151\154\145\055\162\145\141\144\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\162\145\141\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\151\154\145\055\163\145\154\145\143\164\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\163\145\154\145\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\151\154\145\055\163\151\172\145\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\163\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\151\154\145\055\163\164\141\164\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\163\164\141\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\151\154\145\055\164\162\165\156\143\141\164\145\376\001\000\000\040\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\164\162\165\156\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\146\151\154\145\055\165\156\154\157\143\153\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\165\156\154\157\143\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\151\154\145\055\167\162\151\164\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\167\162\151\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\151\154\145\055\164\171\160\145\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\055\164\171\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\142\154\157\143\153\055\144\145\166\151\143\145\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\142\154\157\143\153\055\144\145\166\151\143\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\150\141\162\141\143\164\145\162\055\144\145\166\151\143\145\077\376\001\000\000\044\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\143\150\141\162\141\143\164\145\162\055\144\145\166\151\143\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\144\151\162\145\143\164\157\162\171\077\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\144\151\162\145\143\164\157\162\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\151\146\157\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\146\157\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\162\145\147\165\154\141\162\055\146\151\154\145\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\162\145\147\165\154\141\162\055\146\151\154\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\157\143\153\145\164\077\376\001\000\000\032\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\157\143\153\145\164\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\171\155\142\157\154\151\143\055\154\151\156\153\077\376\001\000\000\041\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\171\155\142\157\154\151\143\055\154\151\156\153\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\151\154\145\156\157\057\163\164\144\145\162\162\376\001\000\000\040\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\156\157\057\163\164\144\145\162\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\151\154\145\156\157\057\163\164\144\151\156\376\001\000\000\037\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\156\157\057\163\164\144\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\151\154\145\156\157\057\163\164\144\157\165\164\376\001\000\000\040\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\146\151\154\145\156\157\057\163\164\144\157\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\052\376\001\000\000\043\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\052\376\001\000\000\044\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\157\160\145\156\057\141\160\160\145\156\144\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\141\160\160\145\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\157\160\145\156\057\142\151\156\141\162\171\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\142\151\156\141\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\157\160\145\156\057\143\162\145\141\164\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\143\162\145\141\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\157\160\145\156\057\145\170\143\154\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\145\170\143\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\157\160\145\156\057\146\163\171\156\143\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\146\163\171\156\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\157\160\145\156\057\156\157\143\164\164\171\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\156\157\143\164\164\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\157\160\145\156\057\156\157\151\156\150\145\162\151\164\376\001\000\000\041\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\156\157\151\156\150\145\162\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\157\160\145\156\057\156\157\156\142\154\157\143\153\376\001\000\000\040\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\156\157\156\142\154\157\143\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\157\160\145\156\057\162\144\157\156\154\171\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\162\144\157\156\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\157\160\145\156\057\162\144\167\162\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\162\144\167\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\157\160\145\156\057\162\145\141\144\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\162\145\141\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\157\160\145\156\057\163\171\156\143\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\163\171\156\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\157\160\145\156\057\164\145\170\164\376\001\000\000\034\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\164\145\170\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\157\160\145\156\057\164\162\165\156\143\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\164\162\165\156\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\157\160\145\156\057\167\162\151\164\145\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\167\162\151\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\157\160\145\156\057\167\162\157\156\154\171\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\157\160\145\156\057\167\162\157\156\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\162\147\162\160\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\162\147\162\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\162\157\164\150\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\162\157\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\162\165\163\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\162\165\163\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\162\167\170\147\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\162\167\170\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\162\167\170\157\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\162\167\170\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\162\167\170\165\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\162\167\170\165\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\163\147\151\144\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\163\147\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\163\165\151\144\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\163\165\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\163\166\164\170\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\163\166\164\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\167\147\162\160\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\167\147\162\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\167\157\164\150\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\167\157\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\167\165\163\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\167\165\163\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\170\147\162\160\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\170\147\162\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\170\157\164\150\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\170\157\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\145\162\155\057\151\170\165\163\162\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\145\162\155\057\151\170\165\163\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\160\157\162\164\055\076\146\151\154\145\156\157\376\001\000\000\037\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\160\157\162\164\055\076\146\151\154\145\156\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\145\164\055\146\151\154\145\055\147\162\157\165\160\041\376\001\000\000\042\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\164\055\146\151\154\145\055\147\162\157\165\160\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\145\164\055\146\151\154\145\055\157\167\156\145\162\041\376\001\000\000\042\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\164\055\146\151\154\145\055\157\167\156\145\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\163\145\164\055\146\151\154\145\055\160\145\162\155\151\163\163\151\157\156\163\041\376\001\000\000\050\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\164\055\146\151\154\145\055\160\145\162\155\151\163\163\151\157\156\163\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\163\145\164\055\146\151\154\145\055\160\157\163\151\164\151\157\156\041\376\001\000\000\045\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\164\055\146\151\154\145\055\160\157\163\151\164\151\157\156\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\145\164\055\146\151\154\145\055\164\151\155\145\163\041\376\001\000\000\042\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\164\055\146\151\154\145\055\164\151\155\145\163\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\145\153\057\143\165\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\145\153\057\143\165\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\145\153\057\163\145\164\376\001\000\000\033\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\145\153\057\163\145\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\145\145\153\057\145\156\144\376\001\000\000\033\001\143\150\151\143\153\145\156\056\146\151\154\145\056\160\157\163\151\170\043\163\145\145\153\057\145\156\144\376\377\016"));
lf[49]=C_h_intern(&lf[49],14, C_text("chicken.flonum"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\146\154\157\156\165\155\055\160\162\151\156\164\055\160\162\145\143\151\163\151\157\156\376\001\000\000\045\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\160\162\151\156\164\055\160\162\145\143\151\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\160\151\156\164\145\147\145\162\077\376\001\000\000\031\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\151\156\164\145\147\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\141\142\163\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\142\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\163\161\162\164\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\163\161\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\154\157\147\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\154\157\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\145\170\160\164\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\145\170\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\145\170\160\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\145\170\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\160\141\164\141\156\150\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\164\141\156\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\160\141\143\157\163\150\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\143\157\163\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\160\141\163\151\156\150\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\163\151\156\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\164\141\156\150\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\164\141\156\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\143\157\163\150\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\143\157\163\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\163\151\156\150\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\163\151\156\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\160\141\164\141\156\062\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\164\141\156\062\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\141\164\141\156\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\141\143\157\163\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\160\141\163\151\156\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\164\141\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\164\141\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\143\157\163\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\143\157\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\163\151\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\163\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\160\143\145\151\154\151\156\147\376\001\000\000\030\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\143\145\151\154\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\160\162\157\165\156\144\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\162\157\165\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\160\164\162\165\156\143\141\164\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\164\162\165\156\143\141\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\160\146\154\157\157\162\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\146\154\157\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\155\151\156\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\155\151\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\155\141\170\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\155\141\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\156\145\147\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\156\145\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\160\074\075\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\074\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\160\076\075\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\076\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\160\074\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\074\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\160\076\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\076\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\160\075\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\075\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\160\057\077\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\057\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\146\160\147\143\144\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\147\143\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\146\160\052\053\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\052\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\160\057\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\057\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\160\052\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\160\055\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\055\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\146\160\053\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\053\376\003\000\000\002\376\003\000\000\002\376\001\000\000\037\001\146\154\157\156\165\155\055\155\151\156\151\155\165\155\055\144\145\143\151\155\141\154\055\145\170\160\157\156\145\156\164\376\001\000\000\056\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\155\151\156\151\155\165\155\055\144\145\143\151\155\141\154\055\145\170\160\157\156\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\037\001\146\154\157\156\165\155\055\155\141\170\151\155\165\155\055\144\145\143\151\155\141\154\055\145\170\160\157\156\145\156\164\376\001\000\000\056\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\155\141\170\151\155\165\155\055\144\145\143\151\155\141\154\055\145\170\160\157\156\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\146\154\157\156\165\155\055\155\151\156\151\155\165\155\055\145\170\160\157\156\145\156\164\376\001\000\000\046\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\155\151\156\151\155\165\155\055\145\170\160\157\156\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\146\154\157\156\165\155\055\155\141\170\151\155\165\155\055\145\170\160\157\156\145\156\164\376\001\000\000\046\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\155\141\170\151\155\165\155\055\145\170\160\157\156\145\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\146\154\157\156\165\155\055\144\145\143\151\155\141\154\055\160\162\145\143\151\163\151\157\156\376\001\000\000\047\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\144\145\143\151\155\141\154\055\160\162\145\143\151\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\154\157\156\165\155\055\160\162\145\143\151\163\151\157\156\376\001\000\000\037\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\160\162\145\143\151\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\154\157\156\165\155\055\145\160\163\151\154\157\156\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\145\160\163\151\154\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\154\157\156\165\155\055\162\141\144\151\170\376\001\000\000\033\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\154\157\156\165\155\055\162\141\144\151\170\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\151\156\151\155\165\155\055\146\154\157\156\165\155\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\155\151\156\151\155\165\155\055\146\154\157\156\165\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\170\151\155\165\155\055\146\154\157\156\165\155\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\155\141\170\151\155\165\155\055\146\154\157\156\165\155\376\377\016"));
lf[51]=C_h_intern(&lf[51],14, C_text("chicken.format"));
lf[52]=C_h_intern(&lf[52],6, C_text("extras"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\146\157\162\155\141\164\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\157\162\155\141\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\146\160\162\151\156\164\146\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\160\162\151\156\164\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\160\162\151\156\164\146\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\160\162\151\156\164\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\160\162\151\156\164\146\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\163\160\162\151\156\164\146\376\377\016"));
lf[54]=C_h_intern(&lf[54],10, C_text("chicken.gc"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\143\165\162\162\145\156\164\055\147\143\055\155\151\154\154\151\163\145\143\157\156\144\163\376\001\000\000\042\001\143\150\151\143\153\145\156\056\147\143\043\143\165\162\162\145\156\164\055\147\143\055\155\151\154\154\151\163\145\143\157\156\144\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\147\143\376\001\000\000\015\001\143\150\151\143\153\145\156\056\147\143\043\147\143\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\155\145\155\157\162\171\055\163\164\141\164\151\163\164\151\143\163\376\001\000\000\034\001\143\150\151\143\153\145\156\056\147\143\043\155\145\155\157\162\171\055\163\164\141\164\151\163\164\151\143\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\145\164\055\146\151\156\141\154\151\172\145\162\041\376\001\000\000\031\001\143\150\151\143\153\145\156\056\147\143\043\163\145\164\055\146\151\156\141\154\151\172\145\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\146\151\156\141\154\151\172\145\162\376\001\000\000\031\001\143\150\151\143\153\145\156\056\147\143\043\155\141\153\145\055\146\151\156\141\154\151\172\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\141\144\144\055\164\157\055\146\151\156\141\154\151\172\145\162\376\001\000\000\033\001\143\150\151\143\153\145\156\056\147\143\043\141\144\144\055\164\157\055\146\151\156\141\154\151\172\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\145\164\055\147\143\055\162\145\160\157\162\164\041\376\001\000\000\031\001\143\150\151\143\153\145\156\056\147\143\043\163\145\164\055\147\143\055\162\145\160\157\162\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\157\162\143\145\055\146\151\156\141\154\151\172\145\162\163\376\001\000\000\033\001\143\150\151\143\153\145\156\056\147\143\043\146\157\162\143\145\055\146\151\156\141\154\151\172\145\162\163\376\377\016"));
lf[56]=C_h_intern(&lf[56],12, C_text("chicken.eval"));
lf[57]=C_h_intern(&lf[57],4, C_text("eval"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\145\166\141\154\055\150\141\156\144\154\145\162\376\001\000\000\031\001\143\150\151\143\153\145\156\056\145\166\141\154\043\145\166\141\154\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\155\157\144\165\154\145\055\145\156\166\151\162\157\156\155\145\156\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\145\166\141\154\043\155\157\144\165\154\145\055\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[59]=C_h_intern(&lf[59],12, C_text("chicken.load"));
lf[60]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\144\171\156\141\155\151\143\055\154\157\141\144\055\154\151\142\162\141\162\151\145\163\376\001\000\000\043\001\143\150\151\143\153\145\156\056\154\157\141\144\043\144\171\156\141\155\151\143\055\154\157\141\144\055\154\151\142\162\141\162\151\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\163\145\164\055\144\171\156\141\155\151\143\055\154\157\141\144\055\155\157\144\145\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\154\157\141\144\043\163\145\164\055\144\171\156\141\155\151\143\055\154\157\141\144\055\155\157\144\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\157\141\144\055\154\151\142\162\141\162\171\376\001\000\000\031\001\143\150\151\143\153\145\156\056\154\157\141\144\043\154\157\141\144\055\154\151\142\162\141\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\157\141\144\055\156\157\151\163\151\154\171\376\001\000\000\031\001\143\150\151\143\153\145\156\056\154\157\141\144\043\154\157\141\144\055\156\157\151\163\151\154\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\154\157\141\144\055\162\145\154\141\164\151\166\145\376\001\000\000\032\001\143\150\151\143\153\145\156\056\154\157\141\144\043\154\157\141\144\055\162\145\154\141\164\151\166\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\157\141\144\055\166\145\162\142\157\163\145\376\001\000\000\031\001\143\150\151\143\153\145\156\056\154\157\141\144\043\154\157\141\144\055\166\145\162\142\157\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\160\162\157\166\151\144\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\154\157\141\144\043\160\162\157\166\151\144\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\160\162\157\166\151\144\145\144\077\376\001\000\000\026\001\143\150\151\143\153\145\156\056\154\157\141\144\043\160\162\157\166\151\144\145\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\162\145\161\165\151\162\145\376\001\000\000\024\001\143\150\151\143\153\145\156\056\154\157\141\144\043\162\145\161\165\151\162\145\376\377\016"));
lf[61]=C_h_intern(&lf[61],16, C_text("chicken.locative"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\154\157\143\141\164\151\166\145\077\376\001\000\000\032\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\155\141\153\145\055\154\157\143\141\164\151\166\145\376\001\000\000\036\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\155\141\153\145\055\154\157\143\141\164\151\166\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\155\141\153\145\055\167\145\141\153\055\154\157\143\141\164\151\166\145\376\001\000\000\043\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\155\141\153\145\055\167\145\141\153\055\154\157\143\141\164\151\166\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\154\157\143\141\164\151\166\145\055\162\145\146\376\001\000\000\035\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\154\157\143\141\164\151\166\145\055\163\145\164\041\376\001\000\000\036\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\154\157\143\141\164\151\166\145\055\076\157\142\152\145\143\164\376\001\000\000\041\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\076\157\142\152\145\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\154\157\143\141\164\151\166\145\055\151\156\144\145\170\376\001\000\000\037\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\151\156\144\145\170\376\377\016"));
lf[63]=C_h_intern(&lf[63],29, C_text("chicken.memory.representation"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\142\154\157\143\153\055\162\145\146\376\001\000\000\047\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\142\154\157\143\153\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\142\154\157\143\153\055\163\145\164\041\376\001\000\000\050\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\142\154\157\143\153\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\145\170\164\145\156\144\055\160\162\157\143\145\144\165\162\145\376\001\000\000\056\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\145\170\164\145\156\144\055\160\162\157\143\145\144\165\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\145\170\164\145\156\144\145\144\055\160\162\157\143\145\144\165\162\145\077\376\001\000\000\061\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\145\170\164\145\156\144\145\144\055\160\162\157\143\145\144\165\162\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\155\141\153\145\055\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\376\001\000\000\062\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\155\141\153\145\055\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\155\165\164\141\164\145\055\160\162\157\143\145\144\165\162\145\041\376\001\000\000\057\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\155\165\164\141\164\145\055\160\162\157\143\145\144\165\162\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\156\165\155\142\145\162\055\157\146\055\142\171\164\145\163\376\001\000\000\055\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\156\165\155\142\145\162\055\157\146\055\142\171\164\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\156\165\155\142\145\162\055\157\146\055\163\154\157\164\163\376\001\000\000\055\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\156\165\155\142\145\162\055\157\146\055\163\154\157\164\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\157\142\152\145\143\164\055\142\145\143\157\155\145\041\376\001\000\000\054\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\157\142\152\145\143\164\055\142\145\143\157\155\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\157\142\152\145\143\164\055\143\157\160\171\376\001\000\000\051\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\157\142\152\145\143\164\055\143\157\160\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\160\162\157\143\145\144\165\162\145\055\144\141\164\141\376\001\000\000\054\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\160\162\157\143\145\144\165\162\145\055\144\141\164\141\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\162\145\143\157\162\144\055\076\166\145\143\164\157\162\376\001\000\000\054\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\162\145\143\157\162\144\055\076\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\154\145\156\147\164\150\376\001\000\000\064\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\163\154\157\164\376\001\000\000\062\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\163\154\157\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\163\154\157\164\055\163\145\164\041\376\001\000\000\067\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\163\154\157\164\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\164\171\160\145\376\001\000\000\062\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\055\164\171\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\077\376\001\000\000\056\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\145\164\055\160\162\157\143\145\144\165\162\145\055\144\141\164\141\041\376\001\000\000\061\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\163\145\164\055\160\162\157\143\145\144\165\162\145\055\144\141\164\141\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\154\151\153\145\077\376\001\000\000\052\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\166\145\143\164\157\162\055\154\151\153\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\156\165\155\142\145\162\055\166\145\143\164\157\162\055\144\141\164\141\376\001\000\000\060\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\156\165\155\142\145\162\055\166\145\143\164\157\162\055\144\141\164\141\376\377\016"));
lf[65]=C_h_intern(&lf[65],13, C_text("chicken.plist"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\003\001\147\145\164\376\001\000\000\021\001\143\150\151\143\153\145\156\056\160\154\151\163\164\043\147\145\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\147\145\164\055\160\162\157\160\145\162\164\151\145\163\376\001\000\000\034\001\143\150\151\143\153\145\156\056\160\154\151\163\164\043\147\145\164\055\160\162\157\160\145\162\164\151\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\160\165\164\041\376\001\000\000\022\001\143\150\151\143\153\145\156\056\160\154\151\163\164\043\160\165\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\162\145\155\160\162\157\160\041\376\001\000\000\026\001\143\150\151\143\153\145\156\056\160\154\151\163\164\043\162\145\155\160\162\157\160\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\171\155\142\157\154\055\160\154\151\163\164\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\154\151\163\164\043\163\171\155\142\157\154\055\160\154\151\163\164\376\377\016"));
lf[67]=C_h_intern(&lf[67],20, C_text("chicken.pretty-print"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\160\160\376\001\000\000\027\001\143\150\151\143\153\145\156\056\160\162\145\164\164\171\055\160\162\151\156\164\043\160\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\160\162\145\164\164\171\055\160\162\151\156\164\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\145\164\164\171\055\160\162\151\156\164\043\160\162\145\164\164\171\055\160\162\151\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\160\162\145\164\164\171\055\160\162\151\156\164\055\167\151\144\164\150\376\001\000\000\047\001\143\150\151\143\153\145\156\056\160\162\145\164\164\171\055\160\162\151\156\164\043\160\162\145\164\164\171\055\160\162\151\156\164\055\167\151\144\164\150\376\377\016"));
lf[69]=C_h_intern(&lf[69],15, C_text("chicken.process"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\002\001\161\163\376\001\000\000\022\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\161\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\163\171\163\164\145\155\376\001\000\000\026\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\163\171\163\164\145\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\171\163\164\145\155\052\376\001\000\000\027\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\163\171\163\164\145\155\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\160\162\157\143\145\163\163\055\145\170\145\143\165\164\145\376\001\000\000\037\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\145\170\145\143\165\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\160\162\157\143\145\163\163\055\146\157\162\153\376\001\000\000\034\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\146\157\162\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\160\162\157\143\145\163\163\055\162\165\156\376\001\000\000\033\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\162\165\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\160\162\157\143\145\163\163\055\163\151\147\156\141\154\376\001\000\000\036\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\163\151\147\156\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\160\162\157\143\145\163\163\055\163\160\141\167\156\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\163\160\141\167\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\160\162\157\143\145\163\163\055\167\141\151\164\376\001\000\000\034\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\167\141\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\160\151\160\145\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\160\151\160\145\376\001\000\000\045\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\154\157\163\145\055\151\156\160\165\164\055\160\151\160\145\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\143\154\157\163\145\055\151\156\160\165\164\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\154\157\163\145\055\157\165\164\160\165\164\055\160\151\160\145\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\143\154\157\163\145\055\157\165\164\160\165\164\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\162\145\141\164\145\055\160\151\160\145\376\001\000\000\033\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\143\162\145\141\164\145\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\157\160\145\156\055\151\156\160\165\164\055\160\151\160\145\376\001\000\000\037\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\157\160\145\156\055\151\156\160\165\164\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\157\160\145\156\055\157\165\164\160\165\164\055\160\151\160\145\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\157\160\145\156\055\157\165\164\160\165\164\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\160\151\160\145\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\160\151\160\145\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\160\162\157\143\145\163\163\376\001\000\000\027\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\162\157\143\145\163\163\052\376\001\000\000\030\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\160\162\157\143\145\163\163\055\163\154\145\145\160\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\163\154\145\145\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\151\160\145\057\142\165\146\376\001\000\000\030\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\151\160\145\057\142\165\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\160\141\167\156\057\157\166\145\162\154\141\171\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\163\160\141\167\156\057\157\166\145\162\154\141\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\160\141\167\156\057\167\141\151\164\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\163\160\141\167\156\057\167\141\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\160\141\167\156\057\156\157\167\141\151\164\376\001\000\000\034\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\163\160\141\167\156\057\156\157\167\141\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\160\141\167\156\057\156\157\167\141\151\164\157\376\001\000\000\035\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\163\160\141\167\156\057\156\157\167\141\151\164\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\160\141\167\156\057\144\145\164\141\143\150\376\001\000\000\034\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\163\160\141\167\156\057\144\145\164\141\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\160\162\157\143\145\163\163\077\376\001\000\000\030\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\160\162\157\143\145\163\163\055\145\170\151\164\055\163\164\141\164\165\163\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\145\170\151\164\055\163\164\141\164\165\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001\160\162\157\143\145\163\163\055\162\145\164\165\162\156\145\144\055\156\157\162\155\141\154\154\171\077\376\001\000\000\052\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\162\145\164\165\162\156\145\144\055\156\157\162\155\141\154\154\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\160\162\157\143\145\163\163\055\151\156\160\165\164\055\160\157\162\164\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\160\162\157\143\145\163\163\055\157\165\164\160\165\164\055\160\157\162\164\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\160\162\157\143\145\163\163\055\145\162\162\157\162\055\160\157\162\164\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\145\162\162\157\162\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\160\162\157\143\145\163\163\055\151\144\376\001\000\000\032\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\043\160\162\157\143\145\163\163\055\151\144\376\377\016"));
lf[71]=C_h_intern(&lf[71],22, C_text("chicken.process.signal"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\145\164\055\141\154\141\162\155\041\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\145\164\055\141\154\141\162\155\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\145\164\055\163\151\147\156\141\154\055\155\141\163\153\041\376\001\000\000\047\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\145\164\055\163\151\147\156\141\154\055\155\141\163\153\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\155\141\153\145\055\163\151\147\156\141\154\055\150\141\156\144\154\145\162\376\001\000\000\052\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\155\141\153\145\055\163\151\147\156\141\154\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\151\147\156\141\154\055\151\147\156\157\162\145\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\151\147\156\157\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\151\147\156\141\154\055\144\145\146\141\165\154\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\144\145\146\141\165\154\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\145\164\055\163\151\147\156\141\154\055\150\141\156\144\154\145\162\041\376\001\000\000\052\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\145\164\055\163\151\147\156\141\154\055\150\141\156\144\154\145\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\151\147\156\141\154\055\150\141\156\144\154\145\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\150\141\156\144\154\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\055\155\141\163\153\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\155\141\163\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\151\147\156\141\154\055\155\141\163\153\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\155\141\163\153\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\151\147\156\141\154\055\155\141\163\153\145\144\077\376\001\000\000\045\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\155\141\163\153\145\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\151\147\156\141\154\055\165\156\155\141\163\153\041\376\001\000\000\045\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\055\165\156\155\141\163\153\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\141\142\162\164\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\141\142\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\141\154\162\155\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\141\154\162\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\151\147\156\141\154\057\142\162\145\141\153\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\142\162\145\141\153\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\151\147\156\141\154\057\142\165\163\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\142\165\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\143\150\154\144\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\143\150\154\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\143\157\156\164\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\143\157\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\151\147\156\141\154\057\146\160\145\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\146\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\151\147\156\141\154\057\150\165\160\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\150\165\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\151\147\156\141\154\057\151\154\154\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\151\154\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\151\147\156\141\154\057\151\156\164\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\151\156\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\151\147\156\141\154\057\151\157\376\001\000\000\040\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\151\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\153\151\154\154\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\153\151\154\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\160\151\160\145\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\160\151\160\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\160\162\157\146\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\160\162\157\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\161\165\151\164\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\161\165\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\163\145\147\166\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\163\145\147\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\163\164\157\160\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\163\164\157\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\164\145\162\155\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\164\145\162\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\164\162\141\160\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\164\162\141\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\164\163\164\160\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\164\163\164\160\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\151\147\156\141\154\057\165\162\147\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\165\162\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\165\163\162\061\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\165\163\162\061\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\165\163\162\062\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\165\163\162\062\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\151\147\156\141\154\057\166\164\141\154\162\155\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\166\164\141\154\162\155\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\151\147\156\141\154\057\167\151\156\143\150\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\167\151\156\143\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\170\143\160\165\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\170\143\160\165\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\151\147\156\141\154\057\170\146\163\172\376\001\000\000\042\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\057\170\146\163\172\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\151\147\156\141\154\163\055\154\151\163\164\376\001\000\000\043\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\056\163\151\147\156\141\154\043\163\151\147\156\141\154\163\055\154\151\163\164\376\377\016"));
lf[73]=C_h_intern(&lf[73],23, C_text("chicken.process-context"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\141\162\147\166\376\001\000\000\034\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\141\162\147\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\141\162\147\143\053\141\162\147\166\376\001\000\000\041\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\141\162\147\143\053\141\162\147\166\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\143\157\155\155\141\156\144\055\154\151\156\145\055\141\162\147\165\155\145\156\164\163\376\001\000\000\056\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\143\157\155\155\141\156\144\055\154\151\156\145\055\141\162\147\165\155\145\156\164\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\160\162\157\147\162\141\155\055\156\141\155\145\376\001\000\000\044\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\160\162\157\147\162\141\155\055\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\145\170\145\143\165\164\141\142\154\145\055\160\141\164\150\156\141\155\145\376\001\000\000\053\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\145\170\145\143\165\164\141\142\154\145\055\160\141\164\150\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\150\141\156\147\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\050\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\143\150\141\156\147\145\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\165\162\162\145\156\164\055\144\151\162\145\143\164\157\162\171\376\001\000\000\051\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\143\165\162\162\145\156\164\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\376\001\000\000\060\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\163\376\001\000\000\061\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\163\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\041\376\001\000\000\061\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\163\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\165\156\163\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\041\376\001\000\000\063\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\165\156\163\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\041\376\377\016"));
lf[75]=C_h_intern(&lf[75],29, C_text("chicken.process-context.posix"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\150\141\156\147\145\055\144\151\162\145\143\164\157\162\171\052\376\001\000\000\057\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\150\141\156\147\145\055\144\151\162\145\143\164\157\162\171\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\145\164\055\162\157\157\164\055\144\151\162\145\143\164\157\162\171\041\376\001\000\000\061\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\163\145\164\055\162\157\157\164\055\144\151\162\145\143\164\157\162\171\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\147\162\157\165\160\055\151\144\376\001\000\000\070\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\147\162\157\165\160\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\165\163\145\162\055\151\144\376\001\000\000\067\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\165\163\145\162\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\160\162\157\143\145\163\163\055\151\144\376\001\000\000\060\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\160\162\157\143\145\163\163\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\165\162\162\145\156\164\055\147\162\157\165\160\055\151\144\376\001\000\000\056\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\147\162\157\165\160\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\165\162\162\145\156\164\055\165\163\145\162\055\151\144\376\001\000\000\055\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\165\163\145\162\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\160\141\162\145\156\164\055\160\162\157\143\145\163\163\055\151\144\376\001\000\000\057\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\160\141\162\145\156\164\055\160\162\157\143\145\163\163\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\165\162\162\145\156\164\055\165\163\145\162\055\156\141\155\145\376\001\000\000\057\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\165\163\145\162\055\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\165\163\145\162\055\156\141\155\145\376\001\000\000\071\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\165\162\162\145\156\164\055\145\146\146\145\143\164\151\166\145\055\165\163\145\162\055\156\141\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\162\145\141\164\145\055\163\145\163\163\151\157\156\376\001\000\000\054\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\143\162\145\141\164\145\055\163\145\163\163\151\157\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\160\162\157\143\145\163\163\055\147\162\157\165\160\055\151\144\376\001\000\000\056\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\160\162\157\143\145\163\163\055\147\162\157\165\160\055\151\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\165\163\145\162\055\151\156\146\157\162\155\141\164\151\157\156\376\001\000\000\056\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\056\160\157\163\151\170\043\165\163\145\162\055\151\156\146\157\162\155\141\164\151\157\156\376\377\016"));
lf[77]=C_h_intern(&lf[77],14, C_text("chicken.random"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\163\145\164\055\160\163\145\165\144\157\055\162\141\156\144\157\155\055\163\145\145\144\041\376\001\000\000\046\001\143\150\151\143\153\145\156\056\162\141\156\144\157\155\043\163\145\164\055\160\163\145\165\144\157\055\162\141\156\144\157\155\055\163\145\145\144\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\160\163\145\165\144\157\055\162\141\156\144\157\155\055\151\156\164\145\147\145\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\162\141\156\144\157\155\043\160\163\145\165\144\157\055\162\141\156\144\157\155\055\151\156\164\145\147\145\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\160\163\145\165\144\157\055\162\141\156\144\157\155\055\162\145\141\154\376\001\000\000\041\001\143\150\151\143\153\145\156\056\162\141\156\144\157\155\043\160\163\145\165\144\157\055\162\141\156\144\157\155\055\162\145\141\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\162\141\156\144\157\155\055\142\171\164\145\163\376\001\000\000\033\001\143\150\151\143\153\145\156\056\162\141\156\144\157\155\043\162\141\156\144\157\155\055\142\171\164\145\163\376\377\016"));
lf[79]=C_h_intern(&lf[79],12, C_text("chicken.sort"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\155\145\162\147\145\376\001\000\000\022\001\143\150\151\143\153\145\156\056\163\157\162\164\043\155\145\162\147\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001\155\145\162\147\145\041\376\001\000\000\023\001\143\150\151\143\153\145\156\056\163\157\162\164\043\155\145\162\147\145\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\163\157\162\164\376\001\000\000\021\001\143\150\151\143\153\145\156\056\163\157\162\164\043\163\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\163\157\162\164\041\376\001\000\000\022\001\143\150\151\143\153\145\156\056\163\157\162\164\043\163\157\162\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\163\157\162\164\145\144\077\376\001\000\000\024\001\143\150\151\143\153\145\156\056\163\157\162\164\043\163\157\162\164\145\144\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\164\157\160\157\154\157\147\151\143\141\154\055\163\157\162\164\376\001\000\000\035\001\143\150\151\143\153\145\156\056\163\157\162\164\043\164\157\160\157\154\157\147\151\143\141\154\055\163\157\162\164\376\377\016"));
lf[81]=C_h_intern(&lf[81],18, C_text("chicken.time.posix"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\163\145\143\157\156\144\163\055\076\165\164\143\055\164\151\155\145\376\001\000\000\044\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\163\145\143\157\156\144\163\055\076\165\164\143\055\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\165\164\143\055\164\151\155\145\055\076\163\145\143\157\156\144\163\376\001\000\000\044\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\165\164\143\055\164\151\155\145\055\076\163\145\143\157\156\144\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\163\145\143\157\156\144\163\055\076\154\157\143\141\154\055\164\151\155\145\376\001\000\000\046\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\163\145\143\157\156\144\163\055\076\154\157\143\141\154\055\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\145\143\157\156\144\163\055\076\163\164\162\151\156\147\376\001\000\000\042\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\163\145\143\157\156\144\163\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\154\157\143\141\154\055\164\151\155\145\055\076\163\145\143\157\156\144\163\376\001\000\000\046\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\154\157\143\141\154\055\164\151\155\145\055\076\163\145\143\157\156\144\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\164\151\155\145\376\001\000\000\037\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\163\164\162\151\156\147\055\076\164\151\155\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\164\151\155\145\055\076\163\164\162\151\156\147\376\001\000\000\037\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\164\151\155\145\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\154\157\143\141\154\055\164\151\155\145\172\157\156\145\055\141\142\142\162\145\166\151\141\164\151\157\156\376\001\000\000\056\001\143\150\151\143\153\145\156\056\164\151\155\145\056\160\157\163\151\170\043\154\157\143\141\154\055\164\151\155\145\172\157\156\145\055\141\142\142\162\145\166\151\141\164\151\157\156\376\377\016"));
lf[83]=C_h_intern(&lf[83],20, C_text("chicken.continuation"));
lf[84]=C_h_intern(&lf[84],12, C_text("continuation"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\157\156\164\151\156\165\141\164\151\157\156\077\376\001\000\000\042\001\143\150\151\143\153\145\156\056\143\157\156\164\151\156\165\141\164\151\157\156\043\143\157\156\164\151\156\165\141\164\151\157\156\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\157\156\164\151\156\165\141\164\151\157\156\055\143\141\160\164\165\162\145\376\001\000\000\051\001\143\150\151\143\153\145\156\056\143\157\156\164\151\156\165\141\164\151\157\156\043\143\157\156\164\151\156\165\141\164\151\157\156\055\143\141\160\164\165\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\157\156\164\151\156\165\141\164\151\157\156\055\147\162\141\146\164\376\001\000\000\047\001\143\150\151\143\153\145\156\056\143\157\156\164\151\156\165\141\164\151\157\156\043\143\157\156\164\151\156\165\141\164\151\157\156\055\147\162\141\146\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\143\157\156\164\151\156\165\141\164\151\157\156\055\162\145\164\165\162\156\376\001\000\000\050\001\143\150\151\143\153\145\156\056\143\157\156\164\151\156\165\141\164\151\157\156\043\143\157\156\164\151\156\165\141\164\151\157\156\055\162\145\164\165\162\156\376\377\016"));
lf[86]=C_h_intern(&lf[86],12, C_text("chicken.file"));
lf[87]=C_h_intern(&lf[87],4, C_text("file"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\162\145\141\164\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\043\143\162\145\141\164\145\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\144\145\154\145\164\145\055\144\151\162\145\143\164\157\162\171\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\043\144\145\154\145\164\145\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\143\162\145\141\164\145\055\164\145\155\160\157\162\141\162\171\055\146\151\154\145\376\001\000\000\042\001\143\150\151\143\153\145\156\056\146\151\154\145\043\143\162\145\141\164\145\055\164\145\155\160\157\162\141\162\171\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\032\001\143\162\145\141\164\145\055\164\145\155\160\157\162\141\162\171\055\144\151\162\145\143\164\157\162\171\376\001\000\000\047\001\143\150\151\143\153\145\156\056\146\151\154\145\043\143\162\145\141\164\145\055\164\145\155\160\157\162\141\162\171\055\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\145\154\145\164\145\055\146\151\154\145\376\001\000\000\030\001\143\150\151\143\153\145\156\056\146\151\154\145\043\144\145\154\145\164\145\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\144\145\154\145\164\145\055\146\151\154\145\052\376\001\000\000\031\001\143\150\151\143\153\145\156\056\146\151\154\145\043\144\145\154\145\164\145\055\146\151\154\145\052\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\157\160\171\055\146\151\154\145\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\151\154\145\043\143\157\160\171\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\155\157\166\145\055\146\151\154\145\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\151\154\145\043\155\157\166\145\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\145\156\141\155\145\055\146\151\154\145\376\001\000\000\030\001\143\150\151\143\153\145\156\056\146\151\154\145\043\162\145\156\141\155\145\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\151\154\145\055\145\170\151\163\164\163\077\376\001\000\000\031\001\143\150\151\143\153\145\156\056\146\151\154\145\043\146\151\154\145\055\145\170\151\163\164\163\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\144\151\162\145\143\164\157\162\171\055\145\170\151\163\164\163\077\376\001\000\000\036\001\143\150\151\143\153\145\156\056\146\151\154\145\043\144\151\162\145\143\164\157\162\171\055\145\170\151\163\164\163\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\151\154\145\055\162\145\141\144\141\142\154\145\077\376\001\000\000\033\001\143\150\151\143\153\145\156\056\146\151\154\145\043\146\151\154\145\055\162\145\141\144\141\142\154\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\151\154\145\055\167\162\151\164\141\142\154\145\077\376\001\000\000\033\001\143\150\151\143\153\145\156\056\146\151\154\145\043\146\151\154\145\055\167\162\151\164\141\142\154\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\151\154\145\055\145\170\145\143\165\164\141\142\154\145\077\376\001\000\000\035\001\143\150\151\143\153\145\156\056\146\151\154\145\043\146\151\154\145\055\145\170\145\143\165\164\141\142\154\145\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\144\151\162\145\143\164\157\162\171\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\151\154\145\043\144\151\162\145\143\164\157\162\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\151\156\144\055\146\151\154\145\163\376\001\000\000\027\001\143\150\151\143\153\145\156\056\146\151\154\145\043\146\151\156\144\055\146\151\154\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\147\154\157\142\376\001\000\000\021\001\143\150\151\143\153\145\156\056\146\151\154\145\043\147\154\157\142\376\377\016"));
lf[89]=C_h_intern(&lf[89],19, C_text("chicken.read-syntax"));
lf[90]=C_h_intern(&lf[90],11, C_text("read-syntax"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\157\160\171\055\162\145\141\144\055\164\141\142\154\145\376\001\000\000\043\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\143\157\160\171\055\162\145\141\144\055\164\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\162\145\141\144\055\164\141\142\154\145\376\001\000\000\046\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\143\165\162\162\145\156\164\055\162\145\141\144\055\164\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\144\145\146\151\156\145\055\162\145\141\144\145\162\055\143\164\157\162\376\001\000\000\046\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\144\145\146\151\156\145\055\162\145\141\144\145\162\055\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\145\164\055\162\145\141\144\055\163\171\156\164\141\170\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\163\145\164\055\162\145\141\144\055\163\171\156\164\141\170\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\163\145\164\055\163\150\141\162\160\055\162\145\141\144\055\163\171\156\164\141\170\041\376\001\000\000\052\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\163\145\164\055\163\150\141\162\160\055\162\145\141\144\055\163\171\156\164\141\170\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\163\145\164\055\160\141\162\141\155\145\164\145\162\151\172\145\144\055\162\145\141\144\055\163\171\156\164\141\170\041\376\001\000\000\062\001\143\150\151\143\153\145\156\056\162\145\141\144\055\163\171\156\164\141\170\043\163\145\164\055\160\141\162\141\155\145\164\145\162\151\172\145\144\055\162\145\141\144\055\163\171\156\164\141\170\041\376\377\016"));
lf[92]=C_h_intern(&lf[92],12, C_text("chicken.repl"));
lf[93]=C_h_intern(&lf[93],4, C_text("repl"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\161\165\151\164\376\001\000\000\021\001\143\150\151\143\153\145\156\056\162\145\160\154\043\161\165\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\162\145\160\154\376\001\000\000\021\001\143\150\151\143\153\145\156\056\162\145\160\154\043\162\145\160\154\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\162\145\160\154\055\160\162\157\155\160\164\376\001\000\000\030\001\143\150\151\143\153\145\156\056\162\145\160\154\043\162\145\160\154\055\160\162\157\155\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\162\145\163\145\164\376\001\000\000\022\001\143\150\151\143\153\145\156\056\162\145\160\154\043\162\145\163\145\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\162\145\163\145\164\055\150\141\156\144\154\145\162\376\001\000\000\032\001\143\150\151\143\153\145\156\056\162\145\160\154\043\162\145\163\145\164\055\150\141\156\144\154\145\162\376\377\016"));
lf[95]=C_h_intern(&lf[95],11, C_text("chicken.tcp"));
lf[96]=C_h_intern(&lf[96],3, C_text("tcp"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\164\143\160\055\143\154\157\163\145\376\001\000\000\025\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\143\154\157\163\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\164\143\160\055\154\151\163\164\145\156\376\001\000\000\026\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\154\151\163\164\145\156\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\164\143\160\055\143\157\156\156\145\143\164\376\001\000\000\027\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\143\157\156\156\145\143\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\164\143\160\055\141\143\143\145\160\164\376\001\000\000\026\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\141\143\143\145\160\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\164\143\160\055\141\143\143\145\160\164\055\162\145\141\144\171\077\376\001\000\000\035\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\141\143\143\145\160\164\055\162\145\141\144\171\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\164\143\160\055\154\151\163\164\145\156\145\162\077\376\001\000\000\031\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\154\151\163\164\145\156\145\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\164\143\160\055\141\144\144\162\145\163\163\145\163\376\001\000\000\031\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\141\144\144\162\145\163\163\145\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\164\143\160\055\141\142\141\156\144\157\156\055\160\157\162\164\376\001\000\000\034\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\141\142\141\156\144\157\156\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\164\143\160\055\154\151\163\164\145\156\145\162\055\160\157\162\164\376\001\000\000\035\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\154\151\163\164\145\156\145\162\055\160\157\162\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\164\143\160\055\154\151\163\164\145\156\145\162\055\146\151\154\145\156\157\376\001\000\000\037\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\154\151\163\164\145\156\145\162\055\146\151\154\145\156\157\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\164\143\160\055\160\157\162\164\055\156\165\155\142\145\162\163\376\001\000\000\034\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\160\157\162\164\055\156\165\155\142\145\162\163\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\164\143\160\055\142\165\146\146\145\162\055\163\151\172\145\376\001\000\000\033\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\142\165\146\146\145\162\055\163\151\172\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\164\143\160\055\162\145\141\144\055\164\151\155\145\157\165\164\376\001\000\000\034\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\162\145\141\144\055\164\151\155\145\157\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\164\143\160\055\167\162\151\164\145\055\164\151\155\145\157\165\164\376\001\000\000\035\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\167\162\151\164\145\055\164\151\155\145\157\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\164\143\160\055\141\143\143\145\160\164\055\164\151\155\145\157\165\164\376\001\000\000\036\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\141\143\143\145\160\164\055\164\151\155\145\157\165\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\164\143\160\055\143\157\156\156\145\143\164\055\164\151\155\145\157\165\164\376\001\000\000\037\001\143\150\151\143\153\145\156\056\164\143\160\043\164\143\160\055\143\157\156\156\145\143\164\055\164\151\155\145\157\165\164\376\377\016"));
lf[98]=C_h_intern(&lf[98],15, C_text("chicken.version"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\166\145\162\163\151\157\156\076\075\077\376\001\000\000\032\001\143\150\151\143\153\145\156\056\166\145\162\163\151\157\156\043\166\145\162\163\151\157\156\076\075\077\376\377\016"));
lf[100]=C_h_intern(&lf[100],21, C_text("chicken.number-vector"));
lf[101]=C_h_intern(&lf[101],6, C_text("srfi-4"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\146\063\062\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\146\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\146\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\146\066\064\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\146\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\146\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\163\061\066\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\163\061\066\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\061\066\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\163\063\062\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\163\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\163\066\064\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\163\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\142\171\164\145\166\145\143\164\157\162\055\076\163\070\166\145\143\164\157\162\376\001\000\000\052\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\142\171\164\145\166\145\143\164\157\162\055\076\163\070\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\163\070\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\165\061\066\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\165\061\066\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\165\061\066\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\165\063\062\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\165\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\165\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\165\066\064\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\165\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\165\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\142\171\164\145\166\145\143\164\157\162\055\076\143\066\064\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\143\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\142\171\164\145\166\145\143\164\157\162\055\076\143\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\143\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\142\171\164\145\166\145\143\164\157\162\055\076\143\061\062\070\166\145\143\164\157\162\376\001\000\000\054\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\143\061\062\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001\142\171\164\145\166\145\143\164\157\162\055\076\143\061\062\070\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\063\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\076\143\061\062\070\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\063\062\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\146\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\146\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\146\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\063\062\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\063\062\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\066\064\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\146\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\146\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\146\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\066\064\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\066\064\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\070\166\145\143\164\157\162\376\001\000\000\036\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\163\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\052\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\033\001\163\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\070\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\070\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\070\166\145\143\164\157\162\077\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\061\066\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\163\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\163\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\061\066\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\061\066\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\061\066\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\063\062\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\163\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\163\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\063\062\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\063\062\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\066\064\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\163\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\163\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\066\064\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\066\064\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\165\070\166\145\143\164\157\162\376\001\000\000\036\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\070\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\165\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\070\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\070\166\145\143\164\157\162\077\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\061\066\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\165\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\165\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\165\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\061\066\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\061\066\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\165\061\066\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\063\062\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\165\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\165\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\165\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\063\062\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\165\063\062\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\066\064\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\165\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\165\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\165\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\066\064\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\165\066\064\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\143\066\064\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\143\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\034\001\143\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\066\064\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\066\064\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\143\061\062\070\166\145\143\164\157\162\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\143\061\062\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\001\000\000\054\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001\143\061\062\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\001\000\000\063\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\143\061\062\070\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\143\061\062\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\047\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\061\062\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\143\061\062\070\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\143\061\062\070\166\145\143\164\157\162\077\376\001\000\000\041\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\146\063\062\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\146\066\064\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\163\061\066\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\163\063\062\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\163\066\064\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\154\151\163\164\055\076\163\070\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\165\061\066\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\165\063\062\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\154\151\163\164\055\076\165\070\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\165\066\064\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\143\066\064\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\143\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\154\151\163\164\055\076\143\061\062\070\166\145\143\164\157\162\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\143\061\062\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\146\063\062\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\146\066\064\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\163\061\066\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\163\063\062\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\163\066\064\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\155\141\153\145\055\163\070\166\145\143\164\157\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\165\061\066\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\165\063\062\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\165\066\064\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\155\141\153\145\055\165\070\166\145\143\164\157\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\143\066\064\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\143\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\155\141\153\145\055\143\061\062\070\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\143\061\062\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\166\145\143\164\157\162\077\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\156\165\155\142\145\162\055\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\162\145\154\145\141\163\145\055\156\165\155\142\145\162\055\166\145\143\164\157\162\376\001\000\000\053\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\162\145\154\145\141\163\145\055\156\165\155\142\145\162\055\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\146\063\062\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\146\066\064\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\163\061\066\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\163\063\062\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\163\066\064\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\165\142\163\070\166\145\143\164\157\162\376\001\000\000\041\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\165\061\066\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\163\165\142\165\070\166\145\143\164\157\162\376\001\000\000\041\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\165\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\165\063\062\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\165\066\064\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\165\142\143\066\064\166\145\143\164\157\162\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\143\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\165\142\143\061\062\070\166\145\143\164\157\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\165\142\143\061\062\070\166\145\143\164\157\162\376\377\016"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\063\062\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\146\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\063\062\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\063\062\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\146\066\064\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\146\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\146\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\146\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\146\066\064\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\146\066\064\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\163\070\166\145\143\164\157\162\376\001\000\000\036\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\070\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\163\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\070\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\070\166\145\143\164\157\162\077\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\061\066\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\061\066\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\061\066\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\061\066\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\063\062\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\063\062\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\063\062\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\163\066\064\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\163\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\163\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\163\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\163\066\064\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\066\064\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010\001\165\070\166\145\143\164\157\162\376\001\000\000\036\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\070\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\165\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\070\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\070\166\145\143\164\157\162\077\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\061\066\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\165\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\061\066\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\061\066\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\165\061\066\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\063\062\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\165\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\063\062\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\165\063\062\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011\001\165\066\064\166\145\143\164\157\162\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\165\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\165\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\165\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\165\066\064\166\145\143\164\157\162\055\163\145\164\041\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\165\066\064\166\145\143\164\157\162\077\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\146\063\062\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\146\066\064\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\163\061\066\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\163\063\062\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\163\066\064\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\154\151\163\164\055\076\163\070\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\165\061\066\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\165\063\062\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\154\151\163\164\055\076\165\070\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\154\151\163\164\055\076\165\066\064\166\145\143\164\157\162\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\154\151\163\164\055\076\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\146\063\062\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\146\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\146\066\064\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\146\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\163\061\066\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\163\063\062\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\163\066\064\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\155\141\153\145\055\163\070\166\145\143\164\157\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\163\070\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\165\061\066\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\061\066\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\165\063\062\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\063\062\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\155\141\153\145\055\165\066\064\166\145\143\164\157\162\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\066\064\166\145\143\164\157\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\155\141\153\145\055\165\070\166\145\143\164\157\162\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\155\141\153\145\055\165\070\166\145\143\164\157\162\376\377\016"));
lf[104]=C_h_intern(&lf[104],12, C_text("scheme.write"));
lf[105]=C_h_intern(&lf[105],5, C_text("r7lib"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\144\151\163\160\154\141\171\376\001\000\000\024\001\163\143\150\145\155\145\056\167\162\151\164\145\043\144\151\163\160\154\141\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\167\162\151\164\145\376\001\000\000\022\001\163\143\150\145\155\145\056\167\162\151\164\145\043\167\162\151\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\167\162\151\164\145\055\163\150\141\162\145\144\376\001\000\000\031\001\163\143\150\145\155\145\056\167\162\151\164\145\043\167\162\151\164\145\055\163\150\141\162\145\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\167\162\151\164\145\055\163\151\155\160\154\145\376\001\000\000\014\001\163\143\150\145\155\145\043\167\162\151\164\145\376\377\016"));
lf[107]=C_h_intern(&lf[107],11, C_text("scheme.time"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\143\165\162\162\145\156\164\055\163\145\143\157\156\144\376\001\000\000\032\001\163\143\150\145\155\145\056\164\151\155\145\043\143\165\162\162\145\156\164\055\163\145\143\157\156\144\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015\001\143\165\162\162\145\156\164\055\152\151\146\146\171\376\001\000\000\031\001\163\143\150\145\155\145\056\164\151\155\145\043\143\165\162\162\145\156\164\055\152\151\146\146\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\152\151\146\146\151\145\163\055\160\145\162\055\163\145\143\157\156\144\376\001\000\000\036\001\163\143\150\145\155\145\056\164\151\155\145\043\152\151\146\146\151\145\163\055\160\145\162\055\163\145\143\157\156\144\376\377\016"));
lf[109]=C_h_intern(&lf[109],11, C_text("scheme.file"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\146\151\154\145\055\145\170\151\163\164\163\077\376\001\000\000\030\001\163\143\150\145\155\145\056\146\151\154\145\043\146\151\154\145\055\145\170\151\163\164\163\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013\001\144\145\154\145\164\145\055\146\151\154\145\376\001\000\000\030\001\143\150\151\143\153\145\156\056\146\151\154\145\043\144\145\154\145\164\145\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\017\001\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\026\001\163\143\150\145\155\145\043\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\026\001\157\160\145\156\055\142\151\156\141\162\171\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\042\001\163\143\150\145\155\145\056\146\151\154\145\043\157\160\145\156\055\142\151\156\141\162\171\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020\001\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\027\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\027\001\157\160\145\156\055\142\151\156\141\162\171\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\043\001\163\143\150\145\155\145\056\146\151\154\145\043\157\160\145\156\055\142\151\156\141\162\171\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\146\151\154\145\376\001\000\000\033\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025\001\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\146\151\154\145\376\001\000\000\034\001\163\143\150\145\155\145\043\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\024\001\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\001\000\000\033\001\163\143\150\145\155\145\043\167\151\164\150\055\151\156\160\165\164\055\146\162\157\155\055\146\151\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\023\001\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\001\000\000\032\001\163\143\150\145\155\145\043\167\151\164\150\055\157\165\164\160\165\164\055\164\157\055\146\151\154\145\376\377\016"));
lf[111]=C_h_intern(&lf[111],22, C_text("scheme.process-context"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\143\157\155\155\141\156\144\055\154\151\156\145\376\001\000\000\043\001\163\143\150\145\155\145\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\143\157\155\155\141\156\144\055\154\151\156\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\145\155\145\162\147\145\156\143\171\055\145\170\151\164\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\155\145\162\147\145\156\143\171\055\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\145\170\151\164\376\001\000\000\033\001\163\143\150\145\155\145\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\145\170\151\164\376\003\000\000\002\376\003\000\000\002\376\001\000\000\030\001\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\376\001\000\000\060\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\001\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\163\376\001\000\000\061\001\143\150\151\143\153\145\156\056\160\162\157\143\145\163\163\055\143\157\156\164\145\170\164\043\147\145\164\055\145\156\166\151\162\157\156\155\145\156\164\055\166\141\162\151\141\142\154\145\163\376\377\016"));
lf[113]=C_h_intern(&lf[113],25, C_text("##sys#import-library-hook"));
C_register_lf2(lf,114,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_504,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[91] = {
{C_text("f_1000:eval_2dmodules_2escm"),(void*)f_1000},
{C_text("f_1006:eval_2dmodules_2escm"),(void*)f_1006},
{C_text("f_1028:eval_2dmodules_2escm"),(void*)f_1028},
{C_text("f_1034:eval_2dmodules_2escm"),(void*)f_1034},
{C_text("f_1056:eval_2dmodules_2escm"),(void*)f_1056},
{C_text("f_1062:eval_2dmodules_2escm"),(void*)f_1062},
{C_text("f_1084:eval_2dmodules_2escm"),(void*)f_1084},
{C_text("f_1090:eval_2dmodules_2escm"),(void*)f_1090},
{C_text("f_1112:eval_2dmodules_2escm"),(void*)f_1112},
{C_text("f_1118:eval_2dmodules_2escm"),(void*)f_1118},
{C_text("f_1140:eval_2dmodules_2escm"),(void*)f_1140},
{C_text("f_1146:eval_2dmodules_2escm"),(void*)f_1146},
{C_text("f_1168:eval_2dmodules_2escm"),(void*)f_1168},
{C_text("f_1174:eval_2dmodules_2escm"),(void*)f_1174},
{C_text("f_1196:eval_2dmodules_2escm"),(void*)f_1196},
{C_text("f_1202:eval_2dmodules_2escm"),(void*)f_1202},
{C_text("f_1224:eval_2dmodules_2escm"),(void*)f_1224},
{C_text("f_1230:eval_2dmodules_2escm"),(void*)f_1230},
{C_text("f_1252:eval_2dmodules_2escm"),(void*)f_1252},
{C_text("f_1258:eval_2dmodules_2escm"),(void*)f_1258},
{C_text("f_1280:eval_2dmodules_2escm"),(void*)f_1280},
{C_text("f_1286:eval_2dmodules_2escm"),(void*)f_1286},
{C_text("f_1308:eval_2dmodules_2escm"),(void*)f_1308},
{C_text("f_1314:eval_2dmodules_2escm"),(void*)f_1314},
{C_text("f_1336:eval_2dmodules_2escm"),(void*)f_1336},
{C_text("f_1342:eval_2dmodules_2escm"),(void*)f_1342},
{C_text("f_1364:eval_2dmodules_2escm"),(void*)f_1364},
{C_text("f_1370:eval_2dmodules_2escm"),(void*)f_1370},
{C_text("f_1392:eval_2dmodules_2escm"),(void*)f_1392},
{C_text("f_1398:eval_2dmodules_2escm"),(void*)f_1398},
{C_text("f_1420:eval_2dmodules_2escm"),(void*)f_1420},
{C_text("f_1426:eval_2dmodules_2escm"),(void*)f_1426},
{C_text("f_1448:eval_2dmodules_2escm"),(void*)f_1448},
{C_text("f_1454:eval_2dmodules_2escm"),(void*)f_1454},
{C_text("f_1476:eval_2dmodules_2escm"),(void*)f_1476},
{C_text("f_1482:eval_2dmodules_2escm"),(void*)f_1482},
{C_text("f_1504:eval_2dmodules_2escm"),(void*)f_1504},
{C_text("f_1510:eval_2dmodules_2escm"),(void*)f_1510},
{C_text("f_1532:eval_2dmodules_2escm"),(void*)f_1532},
{C_text("f_1538:eval_2dmodules_2escm"),(void*)f_1538},
{C_text("f_1560:eval_2dmodules_2escm"),(void*)f_1560},
{C_text("f_1566:eval_2dmodules_2escm"),(void*)f_1566},
{C_text("f_1588:eval_2dmodules_2escm"),(void*)f_1588},
{C_text("f_1594:eval_2dmodules_2escm"),(void*)f_1594},
{C_text("f_1616:eval_2dmodules_2escm"),(void*)f_1616},
{C_text("f_1622:eval_2dmodules_2escm"),(void*)f_1622},
{C_text("f_1644:eval_2dmodules_2escm"),(void*)f_1644},
{C_text("f_1650:eval_2dmodules_2escm"),(void*)f_1650},
{C_text("f_1672:eval_2dmodules_2escm"),(void*)f_1672},
{C_text("f_1678:eval_2dmodules_2escm"),(void*)f_1678},
{C_text("f_1700:eval_2dmodules_2escm"),(void*)f_1700},
{C_text("f_504:eval_2dmodules_2escm"),(void*)f_504},
{C_text("f_506:eval_2dmodules_2escm"),(void*)f_506},
{C_text("f_512:eval_2dmodules_2escm"),(void*)f_512},
{C_text("f_534:eval_2dmodules_2escm"),(void*)f_534},
{C_text("f_540:eval_2dmodules_2escm"),(void*)f_540},
{C_text("f_562:eval_2dmodules_2escm"),(void*)f_562},
{C_text("f_568:eval_2dmodules_2escm"),(void*)f_568},
{C_text("f_574:eval_2dmodules_2escm"),(void*)f_574},
{C_text("f_596:eval_2dmodules_2escm"),(void*)f_596},
{C_text("f_602:eval_2dmodules_2escm"),(void*)f_602},
{C_text("f_624:eval_2dmodules_2escm"),(void*)f_624},
{C_text("f_630:eval_2dmodules_2escm"),(void*)f_630},
{C_text("f_652:eval_2dmodules_2escm"),(void*)f_652},
{C_text("f_658:eval_2dmodules_2escm"),(void*)f_658},
{C_text("f_680:eval_2dmodules_2escm"),(void*)f_680},
{C_text("f_686:eval_2dmodules_2escm"),(void*)f_686},
{C_text("f_708:eval_2dmodules_2escm"),(void*)f_708},
{C_text("f_714:eval_2dmodules_2escm"),(void*)f_714},
{C_text("f_720:eval_2dmodules_2escm"),(void*)f_720},
{C_text("f_742:eval_2dmodules_2escm"),(void*)f_742},
{C_text("f_748:eval_2dmodules_2escm"),(void*)f_748},
{C_text("f_770:eval_2dmodules_2escm"),(void*)f_770},
{C_text("f_776:eval_2dmodules_2escm"),(void*)f_776},
{C_text("f_798:eval_2dmodules_2escm"),(void*)f_798},
{C_text("f_804:eval_2dmodules_2escm"),(void*)f_804},
{C_text("f_826:eval_2dmodules_2escm"),(void*)f_826},
{C_text("f_832:eval_2dmodules_2escm"),(void*)f_832},
{C_text("f_854:eval_2dmodules_2escm"),(void*)f_854},
{C_text("f_860:eval_2dmodules_2escm"),(void*)f_860},
{C_text("f_866:eval_2dmodules_2escm"),(void*)f_866},
{C_text("f_888:eval_2dmodules_2escm"),(void*)f_888},
{C_text("f_894:eval_2dmodules_2escm"),(void*)f_894},
{C_text("f_916:eval_2dmodules_2escm"),(void*)f_916},
{C_text("f_922:eval_2dmodules_2escm"),(void*)f_922},
{C_text("f_944:eval_2dmodules_2escm"),(void*)f_944},
{C_text("f_950:eval_2dmodules_2escm"),(void*)f_950},
{C_text("f_972:eval_2dmodules_2escm"),(void*)f_972},
{C_text("f_978:eval_2dmodules_2escm"),(void*)f_978},
{C_text("toplevel:eval_2dmodules_2escm"),(void*)C_eval_2dmodules_toplevel},
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
(o e)|safe calls: 169 
o|inlining procedure: k1702 
o|contracted procedure: "(eval-modules.scm:106) g344345" 
o|inlining procedure: k1702 
o|replaced variables: 258 
o|removed binding forms: 3 
o|replaced variables: 2 
o|removed binding forms: 259 
o|removed binding forms: 2 
o|simplifications: ((##core#call . 168)) 
o|  call simplifications:
o|    scheme#list	168
o|contracted procedure: k518 
o|contracted procedure: k522 
o|contracted procedure: k526 
o|contracted procedure: k530 
o|contracted procedure: k546 
o|contracted procedure: k550 
o|contracted procedure: k554 
o|contracted procedure: k558 
o|contracted procedure: k580 
o|contracted procedure: k584 
o|contracted procedure: k588 
o|contracted procedure: k592 
o|contracted procedure: k608 
o|contracted procedure: k612 
o|contracted procedure: k616 
o|contracted procedure: k620 
o|contracted procedure: k636 
o|contracted procedure: k640 
o|contracted procedure: k644 
o|contracted procedure: k648 
o|contracted procedure: k664 
o|contracted procedure: k668 
o|contracted procedure: k672 
o|contracted procedure: k676 
o|contracted procedure: k692 
o|contracted procedure: k696 
o|contracted procedure: k700 
o|contracted procedure: k704 
o|contracted procedure: k726 
o|contracted procedure: k730 
o|contracted procedure: k734 
o|contracted procedure: k738 
o|contracted procedure: k754 
o|contracted procedure: k758 
o|contracted procedure: k762 
o|contracted procedure: k766 
o|contracted procedure: k782 
o|contracted procedure: k786 
o|contracted procedure: k790 
o|contracted procedure: k794 
o|contracted procedure: k810 
o|contracted procedure: k814 
o|contracted procedure: k818 
o|contracted procedure: k822 
o|contracted procedure: k838 
o|contracted procedure: k842 
o|contracted procedure: k846 
o|contracted procedure: k850 
o|contracted procedure: k872 
o|contracted procedure: k876 
o|contracted procedure: k880 
o|contracted procedure: k884 
o|contracted procedure: k900 
o|contracted procedure: k904 
o|contracted procedure: k908 
o|contracted procedure: k912 
o|contracted procedure: k928 
o|contracted procedure: k932 
o|contracted procedure: k936 
o|contracted procedure: k940 
o|contracted procedure: k956 
o|contracted procedure: k960 
o|contracted procedure: k964 
o|contracted procedure: k968 
o|contracted procedure: k984 
o|contracted procedure: k988 
o|contracted procedure: k992 
o|contracted procedure: k996 
o|contracted procedure: k1012 
o|contracted procedure: k1016 
o|contracted procedure: k1020 
o|contracted procedure: k1024 
o|contracted procedure: k1040 
o|contracted procedure: k1044 
o|contracted procedure: k1048 
o|contracted procedure: k1052 
o|contracted procedure: k1068 
o|contracted procedure: k1072 
o|contracted procedure: k1076 
o|contracted procedure: k1080 
o|contracted procedure: k1096 
o|contracted procedure: k1100 
o|contracted procedure: k1104 
o|contracted procedure: k1108 
o|contracted procedure: k1124 
o|contracted procedure: k1128 
o|contracted procedure: k1132 
o|contracted procedure: k1136 
o|contracted procedure: k1152 
o|contracted procedure: k1156 
o|contracted procedure: k1160 
o|contracted procedure: k1164 
o|contracted procedure: k1180 
o|contracted procedure: k1184 
o|contracted procedure: k1188 
o|contracted procedure: k1192 
o|contracted procedure: k1208 
o|contracted procedure: k1212 
o|contracted procedure: k1216 
o|contracted procedure: k1220 
o|contracted procedure: k1236 
o|contracted procedure: k1240 
o|contracted procedure: k1244 
o|contracted procedure: k1248 
o|contracted procedure: k1264 
o|contracted procedure: k1268 
o|contracted procedure: k1272 
o|contracted procedure: k1276 
o|contracted procedure: k1292 
o|contracted procedure: k1296 
o|contracted procedure: k1300 
o|contracted procedure: k1304 
o|contracted procedure: k1320 
o|contracted procedure: k1324 
o|contracted procedure: k1328 
o|contracted procedure: k1332 
o|contracted procedure: k1348 
o|contracted procedure: k1352 
o|contracted procedure: k1356 
o|contracted procedure: k1360 
o|contracted procedure: k1376 
o|contracted procedure: k1380 
o|contracted procedure: k1384 
o|contracted procedure: k1388 
o|contracted procedure: k1404 
o|contracted procedure: k1408 
o|contracted procedure: k1412 
o|contracted procedure: k1416 
o|contracted procedure: k1432 
o|contracted procedure: k1436 
o|contracted procedure: k1440 
o|contracted procedure: k1444 
o|contracted procedure: k1460 
o|contracted procedure: k1464 
o|contracted procedure: k1468 
o|contracted procedure: k1472 
o|contracted procedure: k1488 
o|contracted procedure: k1492 
o|contracted procedure: k1496 
o|contracted procedure: k1500 
o|contracted procedure: k1516 
o|contracted procedure: k1520 
o|contracted procedure: k1524 
o|contracted procedure: k1528 
o|contracted procedure: k1544 
o|contracted procedure: k1548 
o|contracted procedure: k1552 
o|contracted procedure: k1556 
o|contracted procedure: k1572 
o|contracted procedure: k1576 
o|contracted procedure: k1580 
o|contracted procedure: k1584 
o|contracted procedure: k1600 
o|contracted procedure: k1604 
o|contracted procedure: k1608 
o|contracted procedure: k1612 
o|contracted procedure: k1628 
o|contracted procedure: k1632 
o|contracted procedure: k1636 
o|contracted procedure: k1640 
o|contracted procedure: k1656 
o|contracted procedure: k1660 
o|contracted procedure: k1664 
o|contracted procedure: k1668 
o|contracted procedure: k1684 
o|contracted procedure: k1688 
o|contracted procedure: k1692 
o|contracted procedure: k1696 
o|removed binding forms: 168 
o|substituted constant variable: r519 
o|substituted constant variable: r523 
o|substituted constant variable: r527 
o|substituted constant variable: r531 
o|substituted constant variable: r547 
o|substituted constant variable: r551 
o|substituted constant variable: r555 
o|substituted constant variable: r559 
o|substituted constant variable: r581 
o|substituted constant variable: r585 
o|substituted constant variable: r589 
o|substituted constant variable: r593 
o|substituted constant variable: r609 
o|substituted constant variable: r613 
o|substituted constant variable: r617 
o|substituted constant variable: r621 
o|substituted constant variable: r637 
o|substituted constant variable: r641 
o|substituted constant variable: r645 
o|substituted constant variable: r649 
o|substituted constant variable: r665 
o|substituted constant variable: r669 
o|substituted constant variable: r673 
o|substituted constant variable: r677 
o|substituted constant variable: r693 
o|substituted constant variable: r697 
o|substituted constant variable: r701 
o|substituted constant variable: r705 
o|substituted constant variable: r727 
o|substituted constant variable: r731 
o|substituted constant variable: r735 
o|substituted constant variable: r739 
o|substituted constant variable: r755 
o|substituted constant variable: r759 
o|substituted constant variable: r763 
o|substituted constant variable: r767 
o|substituted constant variable: r783 
o|substituted constant variable: r787 
o|substituted constant variable: r791 
o|substituted constant variable: r795 
o|substituted constant variable: r811 
o|substituted constant variable: r815 
o|substituted constant variable: r819 
o|substituted constant variable: r823 
o|substituted constant variable: r839 
o|substituted constant variable: r843 
o|substituted constant variable: r847 
o|substituted constant variable: r851 
o|substituted constant variable: r873 
o|substituted constant variable: r877 
o|substituted constant variable: r881 
o|substituted constant variable: r885 
o|substituted constant variable: r901 
o|substituted constant variable: r905 
o|substituted constant variable: r909 
o|substituted constant variable: r913 
o|substituted constant variable: r929 
o|substituted constant variable: r933 
o|substituted constant variable: r937 
o|substituted constant variable: r941 
o|substituted constant variable: r957 
o|substituted constant variable: r961 
o|substituted constant variable: r965 
o|substituted constant variable: r969 
o|substituted constant variable: r985 
o|substituted constant variable: r989 
o|substituted constant variable: r993 
o|substituted constant variable: r997 
o|substituted constant variable: r1013 
o|substituted constant variable: r1017 
o|substituted constant variable: r1021 
o|substituted constant variable: r1025 
o|substituted constant variable: r1041 
o|substituted constant variable: r1045 
o|substituted constant variable: r1049 
o|substituted constant variable: r1053 
o|substituted constant variable: r1069 
o|substituted constant variable: r1073 
o|substituted constant variable: r1077 
o|substituted constant variable: r1081 
o|substituted constant variable: r1097 
o|substituted constant variable: r1101 
o|substituted constant variable: r1105 
o|substituted constant variable: r1109 
o|substituted constant variable: r1125 
o|substituted constant variable: r1129 
o|substituted constant variable: r1133 
o|substituted constant variable: r1137 
o|substituted constant variable: r1153 
o|substituted constant variable: r1157 
o|substituted constant variable: r1161 
o|substituted constant variable: r1165 
o|substituted constant variable: r1181 
o|substituted constant variable: r1185 
o|substituted constant variable: r1189 
o|substituted constant variable: r1193 
o|substituted constant variable: r1209 
o|substituted constant variable: r1213 
o|substituted constant variable: r1217 
o|substituted constant variable: r1221 
o|substituted constant variable: r1237 
o|substituted constant variable: r1241 
o|substituted constant variable: r1245 
o|substituted constant variable: r1249 
o|substituted constant variable: r1265 
o|substituted constant variable: r1269 
o|substituted constant variable: r1273 
o|substituted constant variable: r1277 
o|substituted constant variable: r1293 
o|substituted constant variable: r1297 
o|substituted constant variable: r1301 
o|substituted constant variable: r1305 
o|substituted constant variable: r1321 
o|substituted constant variable: r1325 
o|substituted constant variable: r1329 
o|substituted constant variable: r1333 
o|substituted constant variable: r1349 
o|substituted constant variable: r1353 
o|substituted constant variable: r1357 
o|substituted constant variable: r1361 
o|substituted constant variable: r1377 
o|substituted constant variable: r1381 
o|substituted constant variable: r1385 
o|substituted constant variable: r1389 
o|substituted constant variable: r1405 
o|substituted constant variable: r1409 
o|substituted constant variable: r1413 
o|substituted constant variable: r1417 
o|substituted constant variable: r1433 
o|substituted constant variable: r1437 
o|substituted constant variable: r1441 
o|substituted constant variable: r1445 
o|substituted constant variable: r1461 
o|substituted constant variable: r1465 
o|substituted constant variable: r1469 
o|substituted constant variable: r1473 
o|substituted constant variable: r1489 
o|substituted constant variable: r1493 
o|substituted constant variable: r1497 
o|substituted constant variable: r1501 
o|substituted constant variable: r1517 
o|substituted constant variable: r1521 
o|substituted constant variable: r1525 
o|substituted constant variable: r1529 
o|substituted constant variable: r1545 
o|substituted constant variable: r1549 
o|substituted constant variable: r1553 
o|substituted constant variable: r1557 
o|substituted constant variable: r1573 
o|substituted constant variable: r1577 
o|substituted constant variable: r1581 
o|substituted constant variable: r1585 
o|substituted constant variable: r1601 
o|substituted constant variable: r1605 
o|substituted constant variable: r1609 
o|substituted constant variable: r1613 
o|substituted constant variable: r1629 
o|substituted constant variable: r1633 
o|substituted constant variable: r1637 
o|substituted constant variable: r1641 
o|substituted constant variable: r1657 
o|substituted constant variable: r1661 
o|substituted constant variable: r1665 
o|substituted constant variable: r1669 
o|substituted constant variable: r1685 
o|substituted constant variable: r1689 
o|substituted constant variable: r1693 
o|substituted constant variable: r1697 
o|removed binding forms: 168 
*/
/* end of file */
