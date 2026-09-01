/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: optimizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -emit-import-library chicken.compiler.optimizer -output-file optimizer.c
   unit: optimizer
   uses: eval data-structures internal support library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_extern void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[233];
static double C_possibly_force_alignment;


C_noret_decl(f_10011)
static void C_ccall f_10011(C_word c,C_word *av) C_noret;
C_noret_decl(f_10035)
static void C_ccall f_10035(C_word c,C_word *av) C_noret;
C_noret_decl(f_10075)
static void C_ccall f_10075(C_word c,C_word *av) C_noret;
C_noret_decl(f_10095)
static void C_ccall f_10095(C_word c,C_word *av) C_noret;
C_noret_decl(f_10099)
static void C_ccall f_10099(C_word c,C_word *av) C_noret;
C_noret_decl(f_10103)
static void C_ccall f_10103(C_word c,C_word *av) C_noret;
C_noret_decl(f_10105)
static void C_ccall f_10105(C_word c,C_word *av) C_noret;
C_noret_decl(f_10111)
static void C_ccall f_10111(C_word c,C_word *av) C_noret;
C_noret_decl(f_10119)
static void C_ccall f_10119(C_word c,C_word *av) C_noret;
C_noret_decl(f_10125)
static void f_10125(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10145)
static void C_ccall f_10145(C_word c,C_word *av) C_noret;
C_noret_decl(f_10149)
static void C_ccall f_10149(C_word c,C_word *av) C_noret;
C_noret_decl(f_10172)
static void C_ccall f_10172(C_word c,C_word *av) C_noret;
C_noret_decl(f_10245)
static void C_ccall f_10245(C_word c,C_word *av) C_noret;
C_noret_decl(f_10248)
static void f_10248(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10252)
static void C_ccall f_10252(C_word c,C_word *av) C_noret;
C_noret_decl(f_10255)
static void C_ccall f_10255(C_word c,C_word *av) C_noret;
C_noret_decl(f_10258)
static void C_ccall f_10258(C_word c,C_word *av) C_noret;
C_noret_decl(f_10273)
static void C_ccall f_10273(C_word c,C_word *av) C_noret;
C_noret_decl(f_10304)
static void C_ccall f_10304(C_word c,C_word *av) C_noret;
C_noret_decl(f_10310)
static void C_ccall f_10310(C_word c,C_word *av) C_noret;
C_noret_decl(f_10316)
static void C_ccall f_10316(C_word c,C_word *av) C_noret;
C_noret_decl(f_10364)
static void C_ccall f_10364(C_word c,C_word *av) C_noret;
C_noret_decl(f_10372)
static void C_ccall f_10372(C_word c,C_word *av) C_noret;
C_noret_decl(f_10376)
static void C_ccall f_10376(C_word c,C_word *av) C_noret;
C_noret_decl(f_10402)
static void C_ccall f_10402(C_word c,C_word *av) C_noret;
C_noret_decl(f_10418)
static void f_10418(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10430)
static void f_10430(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10440)
static void C_ccall f_10440(C_word c,C_word *av) C_noret;
C_noret_decl(f_10459)
static void f_10459(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_10462)
static void f_10462(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_10466)
static void C_ccall f_10466(C_word c,C_word *av) C_noret;
C_noret_decl(f_10469)
static void C_ccall f_10469(C_word c,C_word *av) C_noret;
C_noret_decl(f_10472)
static void C_ccall f_10472(C_word c,C_word *av) C_noret;
C_noret_decl(f_10511)
static void C_ccall f_10511(C_word c,C_word *av) C_noret;
C_noret_decl(f_10529)
static void C_ccall f_10529(C_word c,C_word *av) C_noret;
C_noret_decl(f_10545)
static void C_ccall f_10545(C_word c,C_word *av) C_noret;
C_noret_decl(f_10566)
static void C_ccall f_10566(C_word c,C_word *av) C_noret;
C_noret_decl(f_10600)
static void C_ccall f_10600(C_word c,C_word *av) C_noret;
C_noret_decl(f_10616)
static void C_ccall f_10616(C_word c,C_word *av) C_noret;
C_noret_decl(f_10620)
static void f_10620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10625)
static void C_ccall f_10625(C_word c,C_word *av) C_noret;
C_noret_decl(f_10655)
static void C_ccall f_10655(C_word c,C_word *av) C_noret;
C_noret_decl(f_10659)
static void f_10659(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10664)
static void C_ccall f_10664(C_word c,C_word *av) C_noret;
C_noret_decl(f_10706)
static void f_10706(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10711)
static void C_ccall f_10711(C_word c,C_word *av) C_noret;
C_noret_decl(f_10748)
static void C_ccall f_10748(C_word c,C_word *av) C_noret;
C_noret_decl(f_10752)
static void C_ccall f_10752(C_word c,C_word *av) C_noret;
C_noret_decl(f_10759)
static void C_ccall f_10759(C_word c,C_word *av) C_noret;
C_noret_decl(f_10763)
static void C_ccall f_10763(C_word c,C_word *av) C_noret;
C_noret_decl(f_10791)
static void C_ccall f_10791(C_word c,C_word *av) C_noret;
C_noret_decl(f_10824)
static void C_ccall f_10824(C_word c,C_word *av) C_noret;
C_noret_decl(f_10835)
static void C_ccall f_10835(C_word c,C_word *av) C_noret;
C_noret_decl(f_10848)
static void C_ccall f_10848(C_word c,C_word *av) C_noret;
C_noret_decl(f_10881)
static void C_ccall f_10881(C_word c,C_word *av) C_noret;
C_noret_decl(f_10888)
static void C_ccall f_10888(C_word c,C_word *av) C_noret;
C_noret_decl(f_10890)
static void f_10890(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_10894)
static void C_ccall f_10894(C_word c,C_word *av) C_noret;
C_noret_decl(f_10898)
static void C_ccall f_10898(C_word c,C_word *av) C_noret;
C_noret_decl(f_10904)
static void C_ccall f_10904(C_word c,C_word *av) C_noret;
C_noret_decl(f_10910)
static void f_10910(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10916)
static void C_ccall f_10916(C_word c,C_word *av) C_noret;
C_noret_decl(f_10919)
static void C_ccall f_10919(C_word c,C_word *av) C_noret;
C_noret_decl(f_10925)
static void C_ccall f_10925(C_word c,C_word *av) C_noret;
C_noret_decl(f_10928)
static void C_ccall f_10928(C_word c,C_word *av) C_noret;
C_noret_decl(f_10929)
static void f_10929(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10936)
static void C_ccall f_10936(C_word c,C_word *av) C_noret;
C_noret_decl(f_10939)
static void C_ccall f_10939(C_word c,C_word *av) C_noret;
C_noret_decl(f_10945)
static void C_ccall f_10945(C_word c,C_word *av) C_noret;
C_noret_decl(f_10960)
static void C_ccall f_10960(C_word c,C_word *av) C_noret;
C_noret_decl(f_11002)
static void C_ccall f_11002(C_word c,C_word *av) C_noret;
C_noret_decl(f_11008)
static void C_ccall f_11008(C_word c,C_word *av) C_noret;
C_noret_decl(f_11017)
static void C_ccall f_11017(C_word c,C_word *av) C_noret;
C_noret_decl(f_11020)
static void C_ccall f_11020(C_word c,C_word *av) C_noret;
C_noret_decl(f_11026)
static void C_ccall f_11026(C_word c,C_word *av) C_noret;
C_noret_decl(f_11029)
static void C_ccall f_11029(C_word c,C_word *av) C_noret;
C_noret_decl(f_11037)
static void C_ccall f_11037(C_word c,C_word *av) C_noret;
C_noret_decl(f_11044)
static void C_ccall f_11044(C_word c,C_word *av) C_noret;
C_noret_decl(f_11048)
static void C_ccall f_11048(C_word c,C_word *av) C_noret;
C_noret_decl(f_11056)
static void C_ccall f_11056(C_word c,C_word *av) C_noret;
C_noret_decl(f_11061)
static void f_11061(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11084)
static void f_11084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11111)
static void C_ccall f_11111(C_word c,C_word *av) C_noret;
C_noret_decl(f_11115)
static void C_ccall f_11115(C_word c,C_word *av) C_noret;
C_noret_decl(f_11119)
static void C_ccall f_11119(C_word c,C_word *av) C_noret;
C_noret_decl(f_11123)
static void C_ccall f_11123(C_word c,C_word *av) C_noret;
C_noret_decl(f_11127)
static void C_ccall f_11127(C_word c,C_word *av) C_noret;
C_noret_decl(f_11144)
static void C_ccall f_11144(C_word c,C_word *av) C_noret;
C_noret_decl(f_11153)
static void f_11153(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11163)
static void C_ccall f_11163(C_word c,C_word *av) C_noret;
C_noret_decl(f_11176)
static void C_ccall f_11176(C_word c,C_word *av) C_noret;
C_noret_decl(f_11187)
static void C_ccall f_11187(C_word c,C_word *av) C_noret;
C_noret_decl(f_11189)
static void C_ccall f_11189(C_word c,C_word *av) C_noret;
C_noret_decl(f_11203)
static void f_11203(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11207)
static void C_ccall f_11207(C_word c,C_word *av) C_noret;
C_noret_decl(f_11210)
static void C_ccall f_11210(C_word c,C_word *av) C_noret;
C_noret_decl(f_11213)
static void C_ccall f_11213(C_word c,C_word *av) C_noret;
C_noret_decl(f_11228)
static void C_ccall f_11228(C_word c,C_word *av) C_noret;
C_noret_decl(f_11231)
static void C_ccall f_11231(C_word c,C_word *av) C_noret;
C_noret_decl(f_11256)
static void C_ccall f_11256(C_word c,C_word *av) C_noret;
C_noret_decl(f_11259)
static void C_ccall f_11259(C_word c,C_word *av) C_noret;
C_noret_decl(f_11277)
static void f_11277(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11287)
static void C_ccall f_11287(C_word c,C_word *av) C_noret;
C_noret_decl(f_11290)
static void C_ccall f_11290(C_word c,C_word *av) C_noret;
C_noret_decl(f_11293)
static void C_ccall f_11293(C_word c,C_word *av) C_noret;
C_noret_decl(f_11304)
static void C_ccall f_11304(C_word c,C_word *av) C_noret;
C_noret_decl(f_11316)
static void C_ccall f_11316(C_word c,C_word *av) C_noret;
C_noret_decl(f_11324)
static void C_ccall f_11324(C_word c,C_word *av) C_noret;
C_noret_decl(f_11328)
static void C_ccall f_11328(C_word c,C_word *av) C_noret;
C_noret_decl(f_11351)
static void C_ccall f_11351(C_word c,C_word *av) C_noret;
C_noret_decl(f_11354)
static void C_ccall f_11354(C_word c,C_word *av) C_noret;
C_noret_decl(f_11376)
static void C_ccall f_11376(C_word c,C_word *av) C_noret;
C_noret_decl(f_11401)
static void C_ccall f_11401(C_word c,C_word *av) C_noret;
C_noret_decl(f_11416)
static void f_11416(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11426)
static void C_ccall f_11426(C_word c,C_word *av) C_noret;
C_noret_decl(f_11445)
static void f_11445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11455)
static void C_ccall f_11455(C_word c,C_word *av) C_noret;
C_noret_decl(f_11474)
static void C_ccall f_11474(C_word c,C_word *av) C_noret;
C_noret_decl(f_11514)
static void C_ccall f_11514(C_word c,C_word *av) C_noret;
C_noret_decl(f_11516)
static void C_ccall f_11516(C_word c,C_word *av) C_noret;
C_noret_decl(f_11524)
static void C_ccall f_11524(C_word c,C_word *av) C_noret;
C_noret_decl(f_11526)
static void C_ccall f_11526(C_word c,C_word *av) C_noret;
C_noret_decl(f_11536)
static void C_ccall f_11536(C_word c,C_word *av) C_noret;
C_noret_decl(f_11539)
static void C_ccall f_11539(C_word c,C_word *av) C_noret;
C_noret_decl(f_11557)
static void C_ccall f_11557(C_word c,C_word *av) C_noret;
C_noret_decl(f_11579)
static void C_ccall f_11579(C_word c,C_word *av) C_noret;
C_noret_decl(f_11597)
static void C_ccall f_11597(C_word c,C_word *av) C_noret;
C_noret_decl(f_11605)
static void C_ccall f_11605(C_word c,C_word *av) C_noret;
C_noret_decl(f_11607)
static void f_11607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11615)
static void f_11615(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11627)
static void C_ccall f_11627(C_word c,C_word *av) C_noret;
C_noret_decl(f_11631)
static void C_ccall f_11631(C_word c,C_word *av) C_noret;
C_noret_decl(f_11639)
static void C_ccall f_11639(C_word c,C_word *av) C_noret;
C_noret_decl(f_11643)
static void C_ccall f_11643(C_word c,C_word *av) C_noret;
C_noret_decl(f_11654)
static void C_ccall f_11654(C_word c,C_word *av) C_noret;
C_noret_decl(f_11673)
static void C_ccall f_11673(C_word c,C_word *av) C_noret;
C_noret_decl(f_11677)
static void C_ccall f_11677(C_word c,C_word *av) C_noret;
C_noret_decl(f_11703)
static void C_ccall f_11703(C_word c,C_word *av) C_noret;
C_noret_decl(f_11718)
static void C_ccall f_11718(C_word c,C_word *av) C_noret;
C_noret_decl(f_11722)
static void C_ccall f_11722(C_word c,C_word *av) C_noret;
C_noret_decl(f_11784)
static void C_ccall f_11784(C_word c,C_word *av) C_noret;
C_noret_decl(f_11799)
static void f_11799(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11816)
static void C_ccall f_11816(C_word c,C_word *av) C_noret;
C_noret_decl(f_11822)
static void f_11822(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11835)
static void C_ccall f_11835(C_word c,C_word *av) C_noret;
C_noret_decl(f_11864)
static void C_ccall f_11864(C_word c,C_word *av) C_noret;
C_noret_decl(f_11870)
static void C_ccall f_11870(C_word c,C_word *av) C_noret;
C_noret_decl(f_11883)
static void C_ccall f_11883(C_word c,C_word *av) C_noret;
C_noret_decl(f_11917)
static void C_ccall f_11917(C_word c,C_word *av) C_noret;
C_noret_decl(f_11944)
static void f_11944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11965)
static void C_ccall f_11965(C_word c,C_word *av) C_noret;
C_noret_decl(f_11969)
static void C_ccall f_11969(C_word c,C_word *av) C_noret;
C_noret_decl(f_11977)
static void C_ccall f_11977(C_word c,C_word *av) C_noret;
C_noret_decl(f_11983)
static void f_11983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11996)
static void C_ccall f_11996(C_word c,C_word *av) C_noret;
C_noret_decl(f_12025)
static void C_ccall f_12025(C_word c,C_word *av) C_noret;
C_noret_decl(f_12031)
static void C_ccall f_12031(C_word c,C_word *av) C_noret;
C_noret_decl(f_12044)
static void C_ccall f_12044(C_word c,C_word *av) C_noret;
C_noret_decl(f_12048)
static void C_ccall f_12048(C_word c,C_word *av) C_noret;
C_noret_decl(f_12102)
static void C_ccall f_12102(C_word c,C_word *av) C_noret;
C_noret_decl(f_12126)
static void C_ccall f_12126(C_word c,C_word *av) C_noret;
C_noret_decl(f_12139)
static void C_ccall f_12139(C_word c,C_word *av) C_noret;
C_noret_decl(f_12147)
static void C_ccall f_12147(C_word c,C_word *av) C_noret;
C_noret_decl(f_12185)
static void C_ccall f_12185(C_word c,C_word *av) C_noret;
C_noret_decl(f_12195)
static void f_12195(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12199)
static void C_ccall f_12199(C_word c,C_word *av) C_noret;
C_noret_decl(f_12202)
static void C_ccall f_12202(C_word c,C_word *av) C_noret;
C_noret_decl(f_12205)
static void C_ccall f_12205(C_word c,C_word *av) C_noret;
C_noret_decl(f_12235)
static void C_ccall f_12235(C_word c,C_word *av) C_noret;
C_noret_decl(f_12238)
static void C_ccall f_12238(C_word c,C_word *av) C_noret;
C_noret_decl(f_12241)
static void C_ccall f_12241(C_word c,C_word *av) C_noret;
C_noret_decl(f_12271)
static void C_ccall f_12271(C_word c,C_word *av) C_noret;
C_noret_decl(f_12298)
static void f_12298(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12302)
static void C_ccall f_12302(C_word c,C_word *av) C_noret;
C_noret_decl(f_12305)
static void C_ccall f_12305(C_word c,C_word *av) C_noret;
C_noret_decl(f_12308)
static void C_ccall f_12308(C_word c,C_word *av) C_noret;
C_noret_decl(f_12314)
static void f_12314(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12337)
static void C_ccall f_12337(C_word c,C_word *av) C_noret;
C_noret_decl(f_12352)
static void C_ccall f_12352(C_word c,C_word *av) C_noret;
C_noret_decl(f_12360)
static void C_ccall f_12360(C_word c,C_word *av) C_noret;
C_noret_decl(f_12362)
static void C_ccall f_12362(C_word c,C_word *av) C_noret;
C_noret_decl(f_12412)
static void C_ccall f_12412(C_word c,C_word *av) C_noret;
C_noret_decl(f_12420)
static void C_ccall f_12420(C_word c,C_word *av) C_noret;
C_noret_decl(f_12428)
static void C_ccall f_12428(C_word c,C_word *av) C_noret;
C_noret_decl(f_12436)
static void C_ccall f_12436(C_word c,C_word *av) C_noret;
C_noret_decl(f_12464)
static void C_ccall f_12464(C_word c,C_word *av) C_noret;
C_noret_decl(f_12472)
static void C_ccall f_12472(C_word c,C_word *av) C_noret;
C_noret_decl(f_12498)
static void C_ccall f_12498(C_word c,C_word *av) C_noret;
C_noret_decl(f_12511)
static void C_ccall f_12511(C_word c,C_word *av) C_noret;
C_noret_decl(f_12528)
static void C_ccall f_12528(C_word c,C_word *av) C_noret;
C_noret_decl(f_12532)
static void C_ccall f_12532(C_word c,C_word *av) C_noret;
C_noret_decl(f_12536)
static void C_ccall f_12536(C_word c,C_word *av) C_noret;
C_noret_decl(f_12547)
static void C_ccall f_12547(C_word c,C_word *av) C_noret;
C_noret_decl(f_12551)
static void C_ccall f_12551(C_word c,C_word *av) C_noret;
C_noret_decl(f_12625)
static void C_ccall f_12625(C_word c,C_word *av) C_noret;
C_noret_decl(f_12638)
static void C_ccall f_12638(C_word c,C_word *av) C_noret;
C_noret_decl(f_12644)
static void C_ccall f_12644(C_word c,C_word *av) C_noret;
C_noret_decl(f_12667)
static void C_ccall f_12667(C_word c,C_word *av) C_noret;
C_noret_decl(f_12671)
static void C_ccall f_12671(C_word c,C_word *av) C_noret;
C_noret_decl(f_12675)
static void C_ccall f_12675(C_word c,C_word *av) C_noret;
C_noret_decl(f_12684)
static void C_ccall f_12684(C_word c,C_word *av) C_noret;
C_noret_decl(f_12693)
static void C_ccall f_12693(C_word c,C_word *av) C_noret;
C_noret_decl(f_12697)
static void C_ccall f_12697(C_word c,C_word *av) C_noret;
C_noret_decl(f_12795)
static void C_ccall f_12795(C_word c,C_word *av) C_noret;
C_noret_decl(f_12803)
static void C_ccall f_12803(C_word c,C_word *av) C_noret;
C_noret_decl(f_12808)
static void f_12808(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12818)
static void C_ccall f_12818(C_word c,C_word *av) C_noret;
C_noret_decl(f_12822)
static C_word f_12822(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word *av) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word *av) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word *av) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word *av) C_noret;
C_noret_decl(f_3076)
static void f_3076(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word *av) C_noret;
C_noret_decl(f_3178)
static void f_3178(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word *av) C_noret;
C_noret_decl(f_3230)
static void f_3230(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3236)
static void f_3236(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word *av) C_noret;
C_noret_decl(f_3284)
static void f_3284(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3292)
static void f_3292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word *av) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word *av) C_noret;
C_noret_decl(f_3324)
static void f_3324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3331)
static void C_ccall f_3331(C_word c,C_word *av) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word *av) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word *av) C_noret;
C_noret_decl(f_3354)
static void C_ccall f_3354(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void f_3356(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word *av) C_noret;
C_noret_decl(f_3405)
static void f_3405(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3439)
static void f_3439(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3445)
static void f_3445(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word *av) C_noret;
C_noret_decl(f_3473)
static void f_3473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3479)
static void f_3479(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word *av) C_noret;
C_noret_decl(f_3503)
static void f_3503(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3509)
static void f_3509(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3523)
static void C_ccall f_3523(C_word c,C_word *av) C_noret;
C_noret_decl(f_3559)
static void f_3559(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3565)
static void f_3565(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word *av) C_noret;
C_noret_decl(f_3640)
static void f_3640(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word *av) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word *av) C_noret;
C_noret_decl(f_3679)
static void f_3679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3688)
static void f_3688(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3696)
static void f_3696(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word *av) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word *av) C_noret;
C_noret_decl(f_3732)
static void f_3732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3740)
static void f_3740(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word *av) C_noret;
C_noret_decl(f_3748)
static C_word f_3748(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3805)
static void f_3805(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3845)
static C_word f_3845(C_word t0);
C_noret_decl(f_3904)
static void f_3904(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word *av) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word *av) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word *av) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word *av) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word *av) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word *av) C_noret;
C_noret_decl(f_4367)
static C_word f_4367(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4390)
static void f_4390(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word *av) C_noret;
C_noret_decl(f_4397)
static C_word f_4397(C_word t0);
C_noret_decl(f_4402)
static void f_4402(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4404)
static void f_4404(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4420)
static void f_4420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word *av) C_noret;
C_noret_decl(f_4443)
static void f_4443(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word *av) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word *av) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word *av) C_noret;
C_noret_decl(f_4465)
static void f_4465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word *av) C_noret;
C_noret_decl(f_4471)
static void C_ccall f_4471(C_word c,C_word *av) C_noret;
C_noret_decl(f_4513)
static void f_4513(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word *av) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word *av) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word *av) C_noret;
C_noret_decl(f_4554)
static void C_ccall f_4554(C_word c,C_word *av) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word *av) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word *av) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word *av) C_noret;
C_noret_decl(f_4611)
static void C_ccall f_4611(C_word c,C_word *av) C_noret;
C_noret_decl(f_4618)
static void C_ccall f_4618(C_word c,C_word *av) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word *av) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word *av) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word *av) C_noret;
C_noret_decl(f_4680)
static void f_4680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word *av) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4723)
static void f_4723(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word *av) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word *av) C_noret;
C_noret_decl(f_4749)
static C_word f_4749(C_word t0);
C_noret_decl(f_4753)
static void f_4753(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4767)
static C_word f_4767(C_word t0);
C_noret_decl(f_4790)
static void f_4790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794(C_word c,C_word *av) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word *av) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word *av) C_noret;
C_noret_decl(f_4815)
static void C_ccall f_4815(C_word c,C_word *av) C_noret;
C_noret_decl(f_4821)
static void C_ccall f_4821(C_word c,C_word *av) C_noret;
C_noret_decl(f_4860)
static C_word f_4860(C_word t0,C_word t1);
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4876)
static void f_4876(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4916)
static void C_ccall f_4916(C_word c,C_word *av) C_noret;
C_noret_decl(f_4918)
static void f_4918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word *av) C_noret;
C_noret_decl(f_4937)
static void f_4937(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word *av) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word *av) C_noret;
C_noret_decl(f_5005)
static void C_ccall f_5005(C_word c,C_word *av) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word *av) C_noret;
C_noret_decl(f_5025)
static void C_ccall f_5025(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word *av) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word *av) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word *av) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word *av) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word *av) C_noret;
C_noret_decl(f_5078)
static void C_ccall f_5078(C_word c,C_word *av) C_noret;
C_noret_decl(f_5080)
static void f_5080(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word *av) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word *av) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word *av) C_noret;
C_noret_decl(f_5103)
static void C_ccall f_5103(C_word c,C_word *av) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word *av) C_noret;
C_noret_decl(f_5176)
static void f_5176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word *av) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word *av) C_noret;
C_noret_decl(f_5218)
static void f_5218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5222)
static void C_ccall f_5222(C_word c,C_word *av) C_noret;
C_noret_decl(f_5226)
static void f_5226(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word *av) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word *av) C_noret;
C_noret_decl(f_5238)
static void f_5238(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5242)
static void C_ccall f_5242(C_word c,C_word *av) C_noret;
C_noret_decl(f_5245)
static void C_ccall f_5245(C_word c,C_word *av) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word *av) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word *av) C_noret;
C_noret_decl(f_5263)
static void C_ccall f_5263(C_word c,C_word *av) C_noret;
C_noret_decl(f_5269)
static void C_ccall f_5269(C_word c,C_word *av) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word *av) C_noret;
C_noret_decl(f_5284)
static void C_ccall f_5284(C_word c,C_word *av) C_noret;
C_noret_decl(f_5307)
static void f_5307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5317)
static void f_5317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word *av) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word *av) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word *av) C_noret;
C_noret_decl(f_5373)
static void f_5373(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5388)
static void f_5388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5396)
static void f_5396(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word *av) C_noret;
C_noret_decl(f_5408)
static void f_5408(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word *av) C_noret;
C_noret_decl(f_5443)
static void C_ccall f_5443(C_word c,C_word *av) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454(C_word c,C_word *av) C_noret;
C_noret_decl(f_5472)
static void C_ccall f_5472(C_word c,C_word *av) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word *av) C_noret;
C_noret_decl(f_5490)
static void C_ccall f_5490(C_word c,C_word *av) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word *av) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word *av) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word *av) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word *av) C_noret;
C_noret_decl(f_5532)
static void f_5532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5538)
static void C_ccall f_5538(C_word c,C_word *av) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word *av) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word *av) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word *av) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word *av) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word *av) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word *av) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word *av) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word *av) C_noret;
C_noret_decl(f_5634)
static void C_ccall f_5634(C_word c,C_word *av) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word *av) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word *av) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word *av) C_noret;
C_noret_decl(f_5703)
static void C_ccall f_5703(C_word c,C_word *av) C_noret;
C_noret_decl(f_5710)
static void f_5710(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word *av) C_noret;
C_noret_decl(f_5722)
static void C_ccall f_5722(C_word c,C_word *av) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word *av) C_noret;
C_noret_decl(f_5729)
static void f_5729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word *av) C_noret;
C_noret_decl(f_5746)
static void C_ccall f_5746(C_word c,C_word *av) C_noret;
C_noret_decl(f_5754)
static void C_ccall f_5754(C_word c,C_word *av) C_noret;
C_noret_decl(f_5756)
static void f_5756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5766)
static void C_ccall f_5766(C_word c,C_word *av) C_noret;
C_noret_decl(f_5780)
static void C_ccall f_5780(C_word c,C_word *av) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word *av) C_noret;
C_noret_decl(f_5792)
static void f_5792(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word *av) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word *av) C_noret;
C_noret_decl(f_5820)
static void f_5820(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5823)
static void C_ccall f_5823(C_word c,C_word *av) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word *av) C_noret;
C_noret_decl(f_5838)
static void C_ccall f_5838(C_word c,C_word *av) C_noret;
C_noret_decl(f_5844)
static void f_5844(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5850)
static void C_ccall f_5850(C_word c,C_word *av) C_noret;
C_noret_decl(f_5853)
static void C_ccall f_5853(C_word c,C_word *av) C_noret;
C_noret_decl(f_5854)
static void f_5854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word *av) C_noret;
C_noret_decl(f_5867)
static void C_ccall f_5867(C_word c,C_word *av) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word *av) C_noret;
C_noret_decl(f_5875)
static void C_ccall f_5875(C_word c,C_word *av) C_noret;
C_noret_decl(f_5879)
static void C_ccall f_5879(C_word c,C_word *av) C_noret;
C_noret_decl(f_5886)
static void C_ccall f_5886(C_word c,C_word *av) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word *av) C_noret;
C_noret_decl(f_5911)
static void C_ccall f_5911(C_word c,C_word *av) C_noret;
C_noret_decl(f_5913)
static void f_5913(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word *av) C_noret;
C_noret_decl(f_5945)
static void C_ccall f_5945(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_5968)
static void f_5968(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5985)
static void f_5985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word *av) C_noret;
C_noret_decl(f_5998)
static void C_ccall f_5998(C_word c,C_word *av) C_noret;
C_noret_decl(f_6003)
static void f_6003(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6028)
static void C_ccall f_6028(C_word c,C_word *av) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word *av) C_noret;
C_noret_decl(f_6043)
static void C_ccall f_6043(C_word c,C_word *av) C_noret;
C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word *av) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word *av) C_noret;
C_noret_decl(f_6061)
static void C_ccall f_6061(C_word c,C_word *av) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word *av) C_noret;
C_noret_decl(f_6080)
static void C_ccall f_6080(C_word c,C_word *av) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word *av) C_noret;
C_noret_decl(f_6142)
static void C_ccall f_6142(C_word c,C_word *av) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word *av) C_noret;
C_noret_decl(f_6159)
static void C_ccall f_6159(C_word c,C_word *av) C_noret;
C_noret_decl(f_6165)
static void C_ccall f_6165(C_word c,C_word *av) C_noret;
C_noret_decl(f_6169)
static void C_ccall f_6169(C_word c,C_word *av) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word *av) C_noret;
C_noret_decl(f_6181)
static void f_6181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6191)
static void C_ccall f_6191(C_word c,C_word *av) C_noret;
C_noret_decl(f_6193)
static void f_6193(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word *av) C_noret;
C_noret_decl(f_6229)
static void C_ccall f_6229(C_word c,C_word *av) C_noret;
C_noret_decl(f_6237)
static void C_ccall f_6237(C_word c,C_word *av) C_noret;
C_noret_decl(f_6266)
static void C_ccall f_6266(C_word c,C_word *av) C_noret;
C_noret_decl(f_6279)
static void C_ccall f_6279(C_word c,C_word *av) C_noret;
C_noret_decl(f_6297)
static void C_ccall f_6297(C_word c,C_word *av) C_noret;
C_noret_decl(f_6303)
static void C_ccall f_6303(C_word c,C_word *av) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word *av) C_noret;
C_noret_decl(f_6334)
static void C_ccall f_6334(C_word c,C_word *av) C_noret;
C_noret_decl(f_6338)
static void C_ccall f_6338(C_word c,C_word *av) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word *av) C_noret;
C_noret_decl(f_6348)
static void C_ccall f_6348(C_word c,C_word *av) C_noret;
C_noret_decl(f_6351)
static void C_ccall f_6351(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6372)
static void C_ccall f_6372(C_word c,C_word *av) C_noret;
C_noret_decl(f_6392)
static void C_ccall f_6392(C_word c,C_word *av) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word *av) C_noret;
C_noret_decl(f_6403)
static void C_ccall f_6403(C_word c,C_word *av) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word *av) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word *av) C_noret;
C_noret_decl(f_6439)
static void f_6439(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word *av) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word *av) C_noret;
C_noret_decl(f_6470)
static void C_ccall f_6470(C_word c,C_word *av) C_noret;
C_noret_decl(f_6476)
static void C_ccall f_6476(C_word c,C_word *av) C_noret;
C_noret_decl(f_6486)
static void C_ccall f_6486(C_word c,C_word *av) C_noret;
C_noret_decl(f_6490)
static void C_ccall f_6490(C_word c,C_word *av) C_noret;
C_noret_decl(f_6500)
static void C_ccall f_6500(C_word c,C_word *av) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word *av) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word *av) C_noret;
C_noret_decl(f_6517)
static void C_ccall f_6517(C_word c,C_word *av) C_noret;
C_noret_decl(f_6530)
static void C_ccall f_6530(C_word c,C_word *av) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word *av) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word *av) C_noret;
C_noret_decl(f_6548)
static void C_ccall f_6548(C_word c,C_word *av) C_noret;
C_noret_decl(f_6558)
static void C_ccall f_6558(C_word c,C_word *av) C_noret;
C_noret_decl(f_6562)
static void C_ccall f_6562(C_word c,C_word *av) C_noret;
C_noret_decl(f_6580)
static void C_ccall f_6580(C_word c,C_word *av) C_noret;
C_noret_decl(f_6583)
static void C_ccall f_6583(C_word c,C_word *av) C_noret;
C_noret_decl(f_6592)
static void f_6592(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6599)
static void C_ccall f_6599(C_word c,C_word *av) C_noret;
C_noret_decl(f_6601)
static void f_6601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6626)
static void C_ccall f_6626(C_word c,C_word *av) C_noret;
C_noret_decl(f_6659)
static void C_ccall f_6659(C_word c,C_word *av) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word *av) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word *av) C_noret;
C_noret_decl(f_6680)
static void C_ccall f_6680(C_word c,C_word *av) C_noret;
C_noret_decl(f_6692)
static void f_6692(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6698)
static void C_ccall f_6698(C_word c,C_word *av) C_noret;
C_noret_decl(f_6704)
static void C_ccall f_6704(C_word c,C_word *av) C_noret;
C_noret_decl(f_6713)
static void C_ccall f_6713(C_word c,C_word *av) C_noret;
C_noret_decl(f_6715)
static void f_6715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word *av) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word *av) C_noret;
C_noret_decl(f_6740)
static void C_ccall f_6740(C_word c,C_word *av) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word *av) C_noret;
C_noret_decl(f_6781)
static void C_ccall f_6781(C_word c,C_word *av) C_noret;
C_noret_decl(f_6791)
static void f_6791(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6810)
static void C_ccall f_6810(C_word c,C_word *av) C_noret;
C_noret_decl(f_6818)
static void C_ccall f_6818(C_word c,C_word *av) C_noret;
C_noret_decl(f_6822)
static void C_ccall f_6822(C_word c,C_word *av) C_noret;
C_noret_decl(f_6829)
static void C_ccall f_6829(C_word c,C_word *av) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word *av) C_noret;
C_noret_decl(f_6842)
static void f_6842(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word *av) C_noret;
C_noret_decl(f_6857)
static void C_ccall f_6857(C_word c,C_word *av) C_noret;
C_noret_decl(f_6864)
static void C_ccall f_6864(C_word c,C_word *av) C_noret;
C_noret_decl(f_6907)
static void f_6907(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6913)
static void f_6913(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6923)
static void C_ccall f_6923(C_word c,C_word *av) C_noret;
C_noret_decl(f_6933)
static void C_ccall f_6933(C_word c,C_word *av) C_noret;
C_noret_decl(f_6939)
static void C_ccall f_6939(C_word c,C_word *av) C_noret;
C_noret_decl(f_6967)
static void f_6967(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6973)
static void C_ccall f_6973(C_word c,C_word *av) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word *av) C_noret;
C_noret_decl(f_6980)
static void C_ccall f_6980(C_word c,C_word *av) C_noret;
C_noret_decl(f_6983)
static void C_ccall f_6983(C_word c,C_word *av) C_noret;
C_noret_decl(f_6986)
static void C_ccall f_6986(C_word c,C_word *av) C_noret;
C_noret_decl(f_6989)
static void C_ccall f_6989(C_word c,C_word *av) C_noret;
C_noret_decl(f_6992)
static void C_ccall f_6992(C_word c,C_word *av) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word *av) C_noret;
C_noret_decl(f_7025)
static void C_ccall f_7025(C_word c,C_word *av) C_noret;
C_noret_decl(f_7030)
static void C_ccall f_7030(C_word c,C_word *av) C_noret;
C_noret_decl(f_7058)
static void f_7058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7068)
static void C_ccall f_7068(C_word c,C_word *av) C_noret;
C_noret_decl(f_7096)
static void f_7096(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7136)
static C_word f_7136(C_word t0);
C_noret_decl(f_7140)
static void f_7140(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7147)
static void C_ccall f_7147(C_word c,C_word *av) C_noret;
C_noret_decl(f_7150)
static void C_ccall f_7150(C_word c,C_word *av) C_noret;
C_noret_decl(f_7153)
static void C_ccall f_7153(C_word c,C_word *av) C_noret;
C_noret_decl(f_7162)
static void C_ccall f_7162(C_word c,C_word *av) C_noret;
C_noret_decl(f_7163)
static void f_7163(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7170)
static void C_ccall f_7170(C_word c,C_word *av) C_noret;
C_noret_decl(f_7176)
static void C_ccall f_7176(C_word c,C_word *av) C_noret;
C_noret_decl(f_7179)
static void C_ccall f_7179(C_word c,C_word *av) C_noret;
C_noret_decl(f_7185)
static void f_7185(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7194)
static void C_ccall f_7194(C_word c,C_word *av) C_noret;
C_noret_decl(f_7206)
static void C_ccall f_7206(C_word c,C_word *av) C_noret;
C_noret_decl(f_7212)
static void f_7212(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7221)
static void f_7221(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7228)
static void C_ccall f_7228(C_word c,C_word *av) C_noret;
C_noret_decl(f_7231)
static void C_ccall f_7231(C_word c,C_word *av) C_noret;
C_noret_decl(f_7234)
static void C_ccall f_7234(C_word c,C_word *av) C_noret;
C_noret_decl(f_7249)
static void C_ccall f_7249(C_word c,C_word *av) C_noret;
C_noret_decl(f_7269)
static void C_ccall f_7269(C_word c,C_word *av) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word *av) C_noret;
C_noret_decl(f_7277)
static void C_ccall f_7277(C_word c,C_word *av) C_noret;
C_noret_decl(f_7287)
static void C_ccall f_7287(C_word c,C_word *av) C_noret;
C_noret_decl(f_7306)
static void C_ccall f_7306(C_word c,C_word *av) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word *av) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word *av) C_noret;
C_noret_decl(f_7349)
static void C_ccall f_7349(C_word c,C_word *av) C_noret;
C_noret_decl(f_7353)
static void C_ccall f_7353(C_word c,C_word *av) C_noret;
C_noret_decl(f_7360)
static void C_ccall f_7360(C_word c,C_word *av) C_noret;
C_noret_decl(f_7371)
static void f_7371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7381)
static void C_ccall f_7381(C_word c,C_word *av) C_noret;
C_noret_decl(f_7401)
static void C_ccall f_7401(C_word c,C_word *av) C_noret;
C_noret_decl(f_7404)
static void C_ccall f_7404(C_word c,C_word *av) C_noret;
C_noret_decl(f_7407)
static void C_ccall f_7407(C_word c,C_word *av) C_noret;
C_noret_decl(f_7422)
static void C_ccall f_7422(C_word c,C_word *av) C_noret;
C_noret_decl(f_7424)
static void f_7424(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7430)
static void f_7430(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7454)
static void C_ccall f_7454(C_word c,C_word *av) C_noret;
C_noret_decl(f_7467)
static void f_7467(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7476)
static void C_ccall f_7476(C_word c,C_word *av) C_noret;
C_noret_decl(f_7479)
static void C_ccall f_7479(C_word c,C_word *av) C_noret;
C_noret_decl(f_7480)
static void f_7480(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7490)
static void C_ccall f_7490(C_word c,C_word *av) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word *av) C_noret;
C_noret_decl(f_7506)
static void C_ccall f_7506(C_word c,C_word *av) C_noret;
C_noret_decl(f_7512)
static void C_ccall f_7512(C_word c,C_word *av) C_noret;
C_noret_decl(f_7525)
static void C_ccall f_7525(C_word c,C_word *av) C_noret;
C_noret_decl(f_7539)
static void C_ccall f_7539(C_word c,C_word *av) C_noret;
C_noret_decl(f_7540)
static void f_7540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7547)
static void C_ccall f_7547(C_word c,C_word *av) C_noret;
C_noret_decl(f_7555)
static void C_ccall f_7555(C_word c,C_word *av) C_noret;
C_noret_decl(f_7557)
static void f_7557(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7570)
static void C_ccall f_7570(C_word c,C_word *av) C_noret;
C_noret_decl(f_7581)
static void C_ccall f_7581(C_word c,C_word *av) C_noret;
C_noret_decl(f_7587)
static void C_ccall f_7587(C_word c,C_word *av) C_noret;
C_noret_decl(f_7599)
static void C_ccall f_7599(C_word c,C_word *av) C_noret;
C_noret_decl(f_7602)
static void C_ccall f_7602(C_word c,C_word *av) C_noret;
C_noret_decl(f_7603)
static void f_7603(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7616)
static void f_7616(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7640)
static void f_7640(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7664)
static void C_ccall f_7664(C_word c,C_word *av) C_noret;
C_noret_decl(f_7675)
static void C_ccall f_7675(C_word c,C_word *av) C_noret;
C_noret_decl(f_7687)
static void f_7687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7695)
static void f_7695(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7711)
static void C_ccall f_7711(C_word c,C_word *av) C_noret;
C_noret_decl(f_7731)
static void C_ccall f_7731(C_word c,C_word *av) C_noret;
C_noret_decl(f_7742)
static void C_ccall f_7742(C_word c,C_word *av) C_noret;
C_noret_decl(f_7773)
static void C_ccall f_7773(C_word c,C_word *av) C_noret;
C_noret_decl(f_7782)
static void C_ccall f_7782(C_word c,C_word *av) C_noret;
C_noret_decl(f_7790)
static void f_7790(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7808)
static void C_ccall f_7808(C_word c,C_word *av) C_noret;
C_noret_decl(f_7814)
static void f_7814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word *av) C_noret;
C_noret_decl(f_7837)
static void f_7837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word *av) C_noret;
C_noret_decl(f_7860)
static void f_7860(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7870)
static void C_ccall f_7870(C_word c,C_word *av) C_noret;
C_noret_decl(f_7897)
static void f_7897(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7947)
static void C_ccall f_7947(C_word c,C_word *av) C_noret;
C_noret_decl(f_7949)
static void C_ccall f_7949(C_word c,C_word *av) C_noret;
C_noret_decl(f_7953)
static void C_ccall f_7953(C_word c,C_word *av) C_noret;
C_noret_decl(f_7963)
static void C_ccall f_7963(C_word c,C_word *av) C_noret;
C_noret_decl(f_7972)
static C_word f_7972(C_word t0,C_word t1);
C_noret_decl(f_8062)
static void C_ccall f_8062(C_word c,C_word *av) C_noret;
C_noret_decl(f_8065)
static void C_ccall f_8065(C_word c,C_word *av) C_noret;
C_noret_decl(f_8086)
static void C_ccall f_8086(C_word c,C_word *av) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word *av) C_noret;
C_noret_decl(f_8140)
static void C_ccall f_8140(C_word c,C_word *av) C_noret;
C_noret_decl(f_8144)
static void C_ccall f_8144(C_word c,C_word *av) C_noret;
C_noret_decl(f_8148)
static void C_ccall f_8148(C_word c,C_word *av) C_noret;
C_noret_decl(f_8152)
static void C_ccall f_8152(C_word c,C_word *av) C_noret;
C_noret_decl(f_8181)
static void C_ccall f_8181(C_word c,C_word *av) C_noret;
C_noret_decl(f_8208)
static void C_ccall f_8208(C_word c,C_word *av) C_noret;
C_noret_decl(f_8239)
static void C_ccall f_8239(C_word c,C_word *av) C_noret;
C_noret_decl(f_8256)
static void f_8256(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8280)
static void C_ccall f_8280(C_word c,C_word *av) C_noret;
C_noret_decl(f_8291)
static void C_ccall f_8291(C_word c,C_word *av) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word *av) C_noret;
C_noret_decl(f_8353)
static void C_ccall f_8353(C_word c,C_word *av) C_noret;
C_noret_decl(f_8368)
static void C_ccall f_8368(C_word c,C_word *av) C_noret;
C_noret_decl(f_8376)
static void C_ccall f_8376(C_word c,C_word *av) C_noret;
C_noret_decl(f_8412)
static void C_ccall f_8412(C_word c,C_word *av) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word *av) C_noret;
C_noret_decl(f_8461)
static void C_ccall f_8461(C_word c,C_word *av) C_noret;
C_noret_decl(f_8507)
static void C_ccall f_8507(C_word c,C_word *av) C_noret;
C_noret_decl(f_8522)
static void C_ccall f_8522(C_word c,C_word *av) C_noret;
C_noret_decl(f_8534)
static void C_ccall f_8534(C_word c,C_word *av) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word *av) C_noret;
C_noret_decl(f_8596)
static void C_ccall f_8596(C_word c,C_word *av) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word *av) C_noret;
C_noret_decl(f_8612)
static void C_ccall f_8612(C_word c,C_word *av) C_noret;
C_noret_decl(f_8643)
static void C_ccall f_8643(C_word c,C_word *av) C_noret;
C_noret_decl(f_8664)
static void C_ccall f_8664(C_word c,C_word *av) C_noret;
C_noret_decl(f_8685)
static void C_ccall f_8685(C_word c,C_word *av) C_noret;
C_noret_decl(f_8694)
static void f_8694(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8705)
static void C_ccall f_8705(C_word c,C_word *av) C_noret;
C_noret_decl(f_8714)
static void C_ccall f_8714(C_word c,C_word *av) C_noret;
C_noret_decl(f_8719)
static void f_8719(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8744)
static void C_ccall f_8744(C_word c,C_word *av) C_noret;
C_noret_decl(f_8746)
static void C_ccall f_8746(C_word c,C_word *av) C_noret;
C_noret_decl(f_8786)
static void C_ccall f_8786(C_word c,C_word *av) C_noret;
C_noret_decl(f_8796)
static void f_8796(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8821)
static void C_ccall f_8821(C_word c,C_word *av) C_noret;
C_noret_decl(f_8830)
static void f_8830(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8855)
static void C_ccall f_8855(C_word c,C_word *av) C_noret;
C_noret_decl(f_8919)
static void C_ccall f_8919(C_word c,C_word *av) C_noret;
C_noret_decl(f_8928)
static void C_ccall f_8928(C_word c,C_word *av) C_noret;
C_noret_decl(f_8943)
static void C_ccall f_8943(C_word c,C_word *av) C_noret;
C_noret_decl(f_8951)
static void C_ccall f_8951(C_word c,C_word *av) C_noret;
C_noret_decl(f_8955)
static void C_ccall f_8955(C_word c,C_word *av) C_noret;
C_noret_decl(f_9008)
static void C_ccall f_9008(C_word c,C_word *av) C_noret;
C_noret_decl(f_9031)
static void C_ccall f_9031(C_word c,C_word *av) C_noret;
C_noret_decl(f_9035)
static void C_ccall f_9035(C_word c,C_word *av) C_noret;
C_noret_decl(f_9069)
static void C_ccall f_9069(C_word c,C_word *av) C_noret;
C_noret_decl(f_9115)
static void C_ccall f_9115(C_word c,C_word *av) C_noret;
C_noret_decl(f_9119)
static void C_ccall f_9119(C_word c,C_word *av) C_noret;
C_noret_decl(f_9148)
static void C_ccall f_9148(C_word c,C_word *av) C_noret;
C_noret_decl(f_9173)
static void f_9173(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9177)
static void C_ccall f_9177(C_word c,C_word *av) C_noret;
C_noret_decl(f_9181)
static void C_ccall f_9181(C_word c,C_word *av) C_noret;
C_noret_decl(f_9218)
static void C_ccall f_9218(C_word c,C_word *av) C_noret;
C_noret_decl(f_9248)
static void C_ccall f_9248(C_word c,C_word *av) C_noret;
C_noret_decl(f_9301)
static void C_ccall f_9301(C_word c,C_word *av) C_noret;
C_noret_decl(f_9318)
static void C_ccall f_9318(C_word c,C_word *av) C_noret;
C_noret_decl(f_9322)
static void C_ccall f_9322(C_word c,C_word *av) C_noret;
C_noret_decl(f_9402)
static void C_ccall f_9402(C_word c,C_word *av) C_noret;
C_noret_decl(f_9423)
static void C_ccall f_9423(C_word c,C_word *av) C_noret;
C_noret_decl(f_9431)
static void C_ccall f_9431(C_word c,C_word *av) C_noret;
C_noret_decl(f_9514)
static void C_ccall f_9514(C_word c,C_word *av) C_noret;
C_noret_decl(f_9529)
static void C_ccall f_9529(C_word c,C_word *av) C_noret;
C_noret_decl(f_9582)
static void C_ccall f_9582(C_word c,C_word *av) C_noret;
C_noret_decl(f_9597)
static void C_ccall f_9597(C_word c,C_word *av) C_noret;
C_noret_decl(f_9616)
static void C_ccall f_9616(C_word c,C_word *av) C_noret;
C_noret_decl(f_9625)
static void C_ccall f_9625(C_word c,C_word *av) C_noret;
C_noret_decl(f_9641)
static void f_9641(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9663)
static void C_ccall f_9663(C_word c,C_word *av) C_noret;
C_noret_decl(f_9666)
static void C_ccall f_9666(C_word c,C_word *av) C_noret;
C_noret_decl(f_9669)
static void C_ccall f_9669(C_word c,C_word *av) C_noret;
C_noret_decl(f_9684)
static void C_ccall f_9684(C_word c,C_word *av) C_noret;
C_noret_decl(f_9688)
static void C_ccall f_9688(C_word c,C_word *av) C_noret;
C_noret_decl(f_9698)
static void C_ccall f_9698(C_word c,C_word *av) C_noret;
C_noret_decl(f_9710)
static void C_ccall f_9710(C_word c,C_word *av) C_noret;
C_noret_decl(f_9722)
static void C_ccall f_9722(C_word c,C_word *av) C_noret;
C_noret_decl(f_9726)
static void C_ccall f_9726(C_word c,C_word *av) C_noret;
C_noret_decl(f_9768)
static void C_ccall f_9768(C_word c,C_word *av) C_noret;
C_noret_decl(f_9783)
static void C_ccall f_9783(C_word c,C_word *av) C_noret;
C_noret_decl(f_9791)
static void C_ccall f_9791(C_word c,C_word *av) C_noret;
C_noret_decl(f_9793)
static void C_ccall f_9793(C_word c,C_word *av) C_noret;
C_noret_decl(f_9801)
static void C_ccall f_9801(C_word c,C_word *av) C_noret;
C_noret_decl(f_9813)
static void C_ccall f_9813(C_word c,C_word *av) C_noret;
C_noret_decl(f_9840)
static void C_ccall f_9840(C_word c,C_word *av) C_noret;
C_noret_decl(f_9855)
static void C_ccall f_9855(C_word c,C_word *av) C_noret;
C_noret_decl(f_9876)
static void C_ccall f_9876(C_word c,C_word *av) C_noret;
C_noret_decl(f_9912)
static void C_ccall f_9912(C_word c,C_word *av) C_noret;
C_noret_decl(f_9914)
static void C_ccall f_9914(C_word c,C_word *av) C_noret;
C_noret_decl(f_9949)
static void C_ccall f_9949(C_word c,C_word *av) C_noret;
C_noret_decl(f_9971)
static void C_ccall f_9971(C_word c,C_word *av) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_extern void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_10125)
static void C_ccall trf_10125(C_word c,C_word *av) C_noret;
static void C_ccall trf_10125(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_10125(t0,t1,t2,t3);}

C_noret_decl(trf_10248)
static void C_ccall trf_10248(C_word c,C_word *av) C_noret;
static void C_ccall trf_10248(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_10248(t0,t1,t2,t3,t4);}

C_noret_decl(trf_10418)
static void C_ccall trf_10418(C_word c,C_word *av) C_noret;
static void C_ccall trf_10418(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10418(t0,t1,t2);}

C_noret_decl(trf_10430)
static void C_ccall trf_10430(C_word c,C_word *av) C_noret;
static void C_ccall trf_10430(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10430(t0,t1,t2);}

C_noret_decl(trf_10459)
static void C_ccall trf_10459(C_word c,C_word *av) C_noret;
static void C_ccall trf_10459(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_10459(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_10462)
static void C_ccall trf_10462(C_word c,C_word *av) C_noret;
static void C_ccall trf_10462(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_10462(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_10620)
static void C_ccall trf_10620(C_word c,C_word *av) C_noret;
static void C_ccall trf_10620(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10620(t0,t1);}

C_noret_decl(trf_10659)
static void C_ccall trf_10659(C_word c,C_word *av) C_noret;
static void C_ccall trf_10659(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10659(t0,t1);}

C_noret_decl(trf_10706)
static void C_ccall trf_10706(C_word c,C_word *av) C_noret;
static void C_ccall trf_10706(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10706(t0,t1);}

C_noret_decl(trf_10890)
static void C_ccall trf_10890(C_word c,C_word *av) C_noret;
static void C_ccall trf_10890(C_word c,C_word *av){
C_word t0=av[7];
C_word t1=av[6];
C_word t2=av[5];
C_word t3=av[4];
C_word t4=av[3];
C_word t5=av[2];
C_word t6=av[1];
C_word t7=av[0];
f_10890(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_10910)
static void C_ccall trf_10910(C_word c,C_word *av) C_noret;
static void C_ccall trf_10910(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_10910(t0,t1);}

C_noret_decl(trf_10929)
static void C_ccall trf_10929(C_word c,C_word *av) C_noret;
static void C_ccall trf_10929(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_10929(t0,t1,t2);}

C_noret_decl(trf_11061)
static void C_ccall trf_11061(C_word c,C_word *av) C_noret;
static void C_ccall trf_11061(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11061(t0,t1,t2);}

C_noret_decl(trf_11084)
static void C_ccall trf_11084(C_word c,C_word *av) C_noret;
static void C_ccall trf_11084(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11084(t0,t1,t2);}

C_noret_decl(trf_11153)
static void C_ccall trf_11153(C_word c,C_word *av) C_noret;
static void C_ccall trf_11153(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11153(t0,t1,t2);}

C_noret_decl(trf_11203)
static void C_ccall trf_11203(C_word c,C_word *av) C_noret;
static void C_ccall trf_11203(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11203(t0,t1,t2);}

C_noret_decl(trf_11277)
static void C_ccall trf_11277(C_word c,C_word *av) C_noret;
static void C_ccall trf_11277(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11277(t0,t1,t2);}

C_noret_decl(trf_11416)
static void C_ccall trf_11416(C_word c,C_word *av) C_noret;
static void C_ccall trf_11416(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11416(t0,t1,t2);}

C_noret_decl(trf_11445)
static void C_ccall trf_11445(C_word c,C_word *av) C_noret;
static void C_ccall trf_11445(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11445(t0,t1,t2);}

C_noret_decl(trf_11607)
static void C_ccall trf_11607(C_word c,C_word *av) C_noret;
static void C_ccall trf_11607(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_11607(t0,t1,t2);}

C_noret_decl(trf_11615)
static void C_ccall trf_11615(C_word c,C_word *av) C_noret;
static void C_ccall trf_11615(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_11615(t0,t1,t2,t3);}

C_noret_decl(trf_11799)
static void C_ccall trf_11799(C_word c,C_word *av) C_noret;
static void C_ccall trf_11799(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_11799(t0,t1,t2,t3,t4);}

C_noret_decl(trf_11822)
static void C_ccall trf_11822(C_word c,C_word *av) C_noret;
static void C_ccall trf_11822(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11822(t0,t1);}

C_noret_decl(trf_11944)
static void C_ccall trf_11944(C_word c,C_word *av) C_noret;
static void C_ccall trf_11944(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_11944(t0,t1,t2,t3,t4);}

C_noret_decl(trf_11983)
static void C_ccall trf_11983(C_word c,C_word *av) C_noret;
static void C_ccall trf_11983(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_11983(t0,t1);}

C_noret_decl(trf_12195)
static void C_ccall trf_12195(C_word c,C_word *av) C_noret;
static void C_ccall trf_12195(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_12195(t0,t1,t2,t3);}

C_noret_decl(trf_12298)
static void C_ccall trf_12298(C_word c,C_word *av) C_noret;
static void C_ccall trf_12298(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_12298(t0,t1,t2,t3,t4);}

C_noret_decl(trf_12314)
static void C_ccall trf_12314(C_word c,C_word *av) C_noret;
static void C_ccall trf_12314(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_12314(t0,t1);}

C_noret_decl(trf_12808)
static void C_ccall trf_12808(C_word c,C_word *av) C_noret;
static void C_ccall trf_12808(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_12808(t0,t1,t2);}

C_noret_decl(trf_3076)
static void C_ccall trf_3076(C_word c,C_word *av) C_noret;
static void C_ccall trf_3076(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3076(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3178)
static void C_ccall trf_3178(C_word c,C_word *av) C_noret;
static void C_ccall trf_3178(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3178(t0,t1,t2);}

C_noret_decl(trf_3230)
static void C_ccall trf_3230(C_word c,C_word *av) C_noret;
static void C_ccall trf_3230(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3230(t0,t1,t2);}

C_noret_decl(trf_3236)
static void C_ccall trf_3236(C_word c,C_word *av) C_noret;
static void C_ccall trf_3236(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3236(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3284)
static void C_ccall trf_3284(C_word c,C_word *av) C_noret;
static void C_ccall trf_3284(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3284(t0,t1,t2);}

C_noret_decl(trf_3292)
static void C_ccall trf_3292(C_word c,C_word *av) C_noret;
static void C_ccall trf_3292(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3292(t0,t1,t2,t3);}

C_noret_decl(trf_3324)
static void C_ccall trf_3324(C_word c,C_word *av) C_noret;
static void C_ccall trf_3324(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3324(t0,t1,t2);}

C_noret_decl(trf_3356)
static void C_ccall trf_3356(C_word c,C_word *av) C_noret;
static void C_ccall trf_3356(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3356(t0,t1,t2);}

C_noret_decl(trf_3405)
static void C_ccall trf_3405(C_word c,C_word *av) C_noret;
static void C_ccall trf_3405(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3405(t0,t1,t2);}

C_noret_decl(trf_3439)
static void C_ccall trf_3439(C_word c,C_word *av) C_noret;
static void C_ccall trf_3439(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3439(t0,t1,t2);}

C_noret_decl(trf_3445)
static void C_ccall trf_3445(C_word c,C_word *av) C_noret;
static void C_ccall trf_3445(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3445(t0,t1,t2);}

C_noret_decl(trf_3473)
static void C_ccall trf_3473(C_word c,C_word *av) C_noret;
static void C_ccall trf_3473(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3473(t0,t1,t2);}

C_noret_decl(trf_3479)
static void C_ccall trf_3479(C_word c,C_word *av) C_noret;
static void C_ccall trf_3479(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3479(t0,t1,t2);}

C_noret_decl(trf_3503)
static void C_ccall trf_3503(C_word c,C_word *av) C_noret;
static void C_ccall trf_3503(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3503(t0,t1,t2);}

C_noret_decl(trf_3509)
static void C_ccall trf_3509(C_word c,C_word *av) C_noret;
static void C_ccall trf_3509(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3509(t0,t1,t2,t3);}

C_noret_decl(trf_3559)
static void C_ccall trf_3559(C_word c,C_word *av) C_noret;
static void C_ccall trf_3559(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3559(t0,t1,t2,t3);}

C_noret_decl(trf_3565)
static void C_ccall trf_3565(C_word c,C_word *av) C_noret;
static void C_ccall trf_3565(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3565(t0,t1,t2);}

C_noret_decl(trf_3640)
static void C_ccall trf_3640(C_word c,C_word *av) C_noret;
static void C_ccall trf_3640(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3640(t0,t1,t2);}

C_noret_decl(trf_3679)
static void C_ccall trf_3679(C_word c,C_word *av) C_noret;
static void C_ccall trf_3679(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3679(t0,t1,t2);}

C_noret_decl(trf_3688)
static void C_ccall trf_3688(C_word c,C_word *av) C_noret;
static void C_ccall trf_3688(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3688(t0,t1,t2);}

C_noret_decl(trf_3696)
static void C_ccall trf_3696(C_word c,C_word *av) C_noret;
static void C_ccall trf_3696(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3696(t0,t1,t2,t3);}

C_noret_decl(trf_3732)
static void C_ccall trf_3732(C_word c,C_word *av) C_noret;
static void C_ccall trf_3732(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3732(t0,t1,t2);}

C_noret_decl(trf_3740)
static void C_ccall trf_3740(C_word c,C_word *av) C_noret;
static void C_ccall trf_3740(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3740(t0,t1,t2,t3);}

C_noret_decl(trf_3805)
static void C_ccall trf_3805(C_word c,C_word *av) C_noret;
static void C_ccall trf_3805(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3805(t0,t1,t2);}

C_noret_decl(trf_3904)
static void C_ccall trf_3904(C_word c,C_word *av) C_noret;
static void C_ccall trf_3904(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3904(t0,t1,t2,t3);}

C_noret_decl(trf_4390)
static void C_ccall trf_4390(C_word c,C_word *av) C_noret;
static void C_ccall trf_4390(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4390(t0,t1,t2,t3);}

C_noret_decl(trf_4402)
static void C_ccall trf_4402(C_word c,C_word *av) C_noret;
static void C_ccall trf_4402(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_4402(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4404)
static void C_ccall trf_4404(C_word c,C_word *av) C_noret;
static void C_ccall trf_4404(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4404(t0,t1,t2);}

C_noret_decl(trf_4420)
static void C_ccall trf_4420(C_word c,C_word *av) C_noret;
static void C_ccall trf_4420(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4420(t0,t1,t2);}

C_noret_decl(trf_4443)
static void C_ccall trf_4443(C_word c,C_word *av) C_noret;
static void C_ccall trf_4443(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4443(t0,t1,t2,t3);}

C_noret_decl(trf_4465)
static void C_ccall trf_4465(C_word c,C_word *av) C_noret;
static void C_ccall trf_4465(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4465(t0,t1);}

C_noret_decl(trf_4513)
static void C_ccall trf_4513(C_word c,C_word *av) C_noret;
static void C_ccall trf_4513(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4513(t0,t1);}

C_noret_decl(trf_4680)
static void C_ccall trf_4680(C_word c,C_word *av) C_noret;
static void C_ccall trf_4680(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4680(t0,t1,t2);}

C_noret_decl(trf_4723)
static void C_ccall trf_4723(C_word c,C_word *av) C_noret;
static void C_ccall trf_4723(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4723(t0,t1,t2,t3);}

C_noret_decl(trf_4753)
static void C_ccall trf_4753(C_word c,C_word *av) C_noret;
static void C_ccall trf_4753(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4753(t0,t1);}

C_noret_decl(trf_4790)
static void C_ccall trf_4790(C_word c,C_word *av) C_noret;
static void C_ccall trf_4790(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4790(t0,t1,t2);}

C_noret_decl(trf_4876)
static void C_ccall trf_4876(C_word c,C_word *av) C_noret;
static void C_ccall trf_4876(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4876(t0,t1,t2);}

C_noret_decl(trf_4918)
static void C_ccall trf_4918(C_word c,C_word *av) C_noret;
static void C_ccall trf_4918(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4918(t0,t1,t2);}

C_noret_decl(trf_4937)
static void C_ccall trf_4937(C_word c,C_word *av) C_noret;
static void C_ccall trf_4937(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4937(t0,t1);}

C_noret_decl(trf_5080)
static void C_ccall trf_5080(C_word c,C_word *av) C_noret;
static void C_ccall trf_5080(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5080(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5176)
static void C_ccall trf_5176(C_word c,C_word *av) C_noret;
static void C_ccall trf_5176(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5176(t0,t1);}

C_noret_decl(trf_5218)
static void C_ccall trf_5218(C_word c,C_word *av) C_noret;
static void C_ccall trf_5218(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5218(t0,t1,t2);}

C_noret_decl(trf_5226)
static void C_ccall trf_5226(C_word c,C_word *av) C_noret;
static void C_ccall trf_5226(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5226(t0,t1,t2);}

C_noret_decl(trf_5238)
static void C_ccall trf_5238(C_word c,C_word *av) C_noret;
static void C_ccall trf_5238(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_5238(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5307)
static void C_ccall trf_5307(C_word c,C_word *av) C_noret;
static void C_ccall trf_5307(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5307(t0,t1,t2);}

C_noret_decl(trf_5317)
static void C_ccall trf_5317(C_word c,C_word *av) C_noret;
static void C_ccall trf_5317(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5317(t0,t1);}

C_noret_decl(trf_5373)
static void C_ccall trf_5373(C_word c,C_word *av) C_noret;
static void C_ccall trf_5373(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5373(t0,t1);}

C_noret_decl(trf_5388)
static void C_ccall trf_5388(C_word c,C_word *av) C_noret;
static void C_ccall trf_5388(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5388(t0,t1);}

C_noret_decl(trf_5396)
static void C_ccall trf_5396(C_word c,C_word *av) C_noret;
static void C_ccall trf_5396(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5396(t0,t1,t2);}

C_noret_decl(trf_5408)
static void C_ccall trf_5408(C_word c,C_word *av) C_noret;
static void C_ccall trf_5408(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5408(t0,t1,t2);}

C_noret_decl(trf_5532)
static void C_ccall trf_5532(C_word c,C_word *av) C_noret;
static void C_ccall trf_5532(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5532(t0,t1,t2);}

C_noret_decl(trf_5710)
static void C_ccall trf_5710(C_word c,C_word *av) C_noret;
static void C_ccall trf_5710(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5710(t0,t1);}

C_noret_decl(trf_5729)
static void C_ccall trf_5729(C_word c,C_word *av) C_noret;
static void C_ccall trf_5729(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5729(t0,t1,t2);}

C_noret_decl(trf_5756)
static void C_ccall trf_5756(C_word c,C_word *av) C_noret;
static void C_ccall trf_5756(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5756(t0,t1,t2);}

C_noret_decl(trf_5792)
static void C_ccall trf_5792(C_word c,C_word *av) C_noret;
static void C_ccall trf_5792(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5792(t0,t1);}

C_noret_decl(trf_5820)
static void C_ccall trf_5820(C_word c,C_word *av) C_noret;
static void C_ccall trf_5820(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5820(t0,t1);}

C_noret_decl(trf_5844)
static void C_ccall trf_5844(C_word c,C_word *av) C_noret;
static void C_ccall trf_5844(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5844(t0,t1);}

C_noret_decl(trf_5854)
static void C_ccall trf_5854(C_word c,C_word *av) C_noret;
static void C_ccall trf_5854(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5854(t0,t1,t2);}

C_noret_decl(trf_5913)
static void C_ccall trf_5913(C_word c,C_word *av) C_noret;
static void C_ccall trf_5913(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5913(t0,t1,t2);}

C_noret_decl(trf_5968)
static void C_ccall trf_5968(C_word c,C_word *av) C_noret;
static void C_ccall trf_5968(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_5968(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5985)
static void C_ccall trf_5985(C_word c,C_word *av) C_noret;
static void C_ccall trf_5985(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_5985(t0,t1,t2);}

C_noret_decl(trf_6003)
static void C_ccall trf_6003(C_word c,C_word *av) C_noret;
static void C_ccall trf_6003(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6003(t0,t1,t2);}

C_noret_decl(trf_6181)
static void C_ccall trf_6181(C_word c,C_word *av) C_noret;
static void C_ccall trf_6181(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6181(t0,t1,t2);}

C_noret_decl(trf_6193)
static void C_ccall trf_6193(C_word c,C_word *av) C_noret;
static void C_ccall trf_6193(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6193(t0,t1,t2);}

C_noret_decl(trf_6439)
static void C_ccall trf_6439(C_word c,C_word *av) C_noret;
static void C_ccall trf_6439(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6439(t0,t1);}

C_noret_decl(trf_6592)
static void C_ccall trf_6592(C_word c,C_word *av) C_noret;
static void C_ccall trf_6592(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6592(t0,t1,t2);}

C_noret_decl(trf_6601)
static void C_ccall trf_6601(C_word c,C_word *av) C_noret;
static void C_ccall trf_6601(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6601(t0,t1,t2);}

C_noret_decl(trf_6692)
static void C_ccall trf_6692(C_word c,C_word *av) C_noret;
static void C_ccall trf_6692(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6692(t0,t1);}

C_noret_decl(trf_6715)
static void C_ccall trf_6715(C_word c,C_word *av) C_noret;
static void C_ccall trf_6715(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6715(t0,t1,t2);}

C_noret_decl(trf_6791)
static void C_ccall trf_6791(C_word c,C_word *av) C_noret;
static void C_ccall trf_6791(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6791(t0,t1);}

C_noret_decl(trf_6842)
static void C_ccall trf_6842(C_word c,C_word *av) C_noret;
static void C_ccall trf_6842(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6842(t0,t1);}

C_noret_decl(trf_6907)
static void C_ccall trf_6907(C_word c,C_word *av) C_noret;
static void C_ccall trf_6907(C_word c,C_word *av){
C_word t0=av[8];
C_word t1=av[7];
C_word t2=av[6];
C_word t3=av[5];
C_word t4=av[4];
C_word t5=av[3];
C_word t6=av[2];
C_word t7=av[1];
C_word t8=av[0];
f_6907(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_6913)
static void C_ccall trf_6913(C_word c,C_word *av) C_noret;
static void C_ccall trf_6913(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_6913(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6967)
static void C_ccall trf_6967(C_word c,C_word *av) C_noret;
static void C_ccall trf_6967(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6967(t0,t1);}

C_noret_decl(trf_7058)
static void C_ccall trf_7058(C_word c,C_word *av) C_noret;
static void C_ccall trf_7058(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7058(t0,t1,t2);}

C_noret_decl(trf_7096)
static void C_ccall trf_7096(C_word c,C_word *av) C_noret;
static void C_ccall trf_7096(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7096(t0,t1,t2,t3);}

C_noret_decl(trf_7140)
static void C_ccall trf_7140(C_word c,C_word *av) C_noret;
static void C_ccall trf_7140(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7140(t0,t1,t2,t3);}

C_noret_decl(trf_7163)
static void C_ccall trf_7163(C_word c,C_word *av) C_noret;
static void C_ccall trf_7163(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7163(t0,t1,t2);}

C_noret_decl(trf_7185)
static void C_ccall trf_7185(C_word c,C_word *av) C_noret;
static void C_ccall trf_7185(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7185(t0,t1);}

C_noret_decl(trf_7212)
static void C_ccall trf_7212(C_word c,C_word *av) C_noret;
static void C_ccall trf_7212(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7212(t0,t1);}

C_noret_decl(trf_7221)
static void C_ccall trf_7221(C_word c,C_word *av) C_noret;
static void C_ccall trf_7221(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7221(t0,t1);}

C_noret_decl(trf_7371)
static void C_ccall trf_7371(C_word c,C_word *av) C_noret;
static void C_ccall trf_7371(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7371(t0,t1,t2);}

C_noret_decl(trf_7424)
static void C_ccall trf_7424(C_word c,C_word *av) C_noret;
static void C_ccall trf_7424(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7424(t0,t1,t2,t3);}

C_noret_decl(trf_7430)
static void C_ccall trf_7430(C_word c,C_word *av) C_noret;
static void C_ccall trf_7430(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7430(t0,t1,t2,t3);}

C_noret_decl(trf_7467)
static void C_ccall trf_7467(C_word c,C_word *av) C_noret;
static void C_ccall trf_7467(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7467(t0,t1,t2,t3);}

C_noret_decl(trf_7480)
static void C_ccall trf_7480(C_word c,C_word *av) C_noret;
static void C_ccall trf_7480(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7480(t0,t1,t2);}

C_noret_decl(trf_7540)
static void C_ccall trf_7540(C_word c,C_word *av) C_noret;
static void C_ccall trf_7540(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7540(t0,t1,t2);}

C_noret_decl(trf_7557)
static void C_ccall trf_7557(C_word c,C_word *av) C_noret;
static void C_ccall trf_7557(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7557(t0,t1,t2);}

C_noret_decl(trf_7603)
static void C_ccall trf_7603(C_word c,C_word *av) C_noret;
static void C_ccall trf_7603(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7603(t0,t1,t2,t3);}

C_noret_decl(trf_7616)
static void C_ccall trf_7616(C_word c,C_word *av) C_noret;
static void C_ccall trf_7616(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_7616(t0,t1);}

C_noret_decl(trf_7640)
static void C_ccall trf_7640(C_word c,C_word *av) C_noret;
static void C_ccall trf_7640(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7640(t0,t1,t2);}

C_noret_decl(trf_7687)
static void C_ccall trf_7687(C_word c,C_word *av) C_noret;
static void C_ccall trf_7687(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7687(t0,t1,t2);}

C_noret_decl(trf_7695)
static void C_ccall trf_7695(C_word c,C_word *av) C_noret;
static void C_ccall trf_7695(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7695(t0,t1,t2,t3);}

C_noret_decl(trf_7790)
static void C_ccall trf_7790(C_word c,C_word *av) C_noret;
static void C_ccall trf_7790(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7790(t0,t1,t2,t3);}

C_noret_decl(trf_7814)
static void C_ccall trf_7814(C_word c,C_word *av) C_noret;
static void C_ccall trf_7814(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7814(t0,t1,t2);}

C_noret_decl(trf_7837)
static void C_ccall trf_7837(C_word c,C_word *av) C_noret;
static void C_ccall trf_7837(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_7837(t0,t1,t2);}

C_noret_decl(trf_7860)
static void C_ccall trf_7860(C_word c,C_word *av) C_noret;
static void C_ccall trf_7860(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7860(t0,t1,t2,t3);}

C_noret_decl(trf_7897)
static void C_ccall trf_7897(C_word c,C_word *av) C_noret;
static void C_ccall trf_7897(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_7897(t0,t1,t2,t3);}

C_noret_decl(trf_8256)
static void C_ccall trf_8256(C_word c,C_word *av) C_noret;
static void C_ccall trf_8256(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8256(t0,t1,t2);}

C_noret_decl(trf_8694)
static void C_ccall trf_8694(C_word c,C_word *av) C_noret;
static void C_ccall trf_8694(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_8694(t0,t1);}

C_noret_decl(trf_8719)
static void C_ccall trf_8719(C_word c,C_word *av) C_noret;
static void C_ccall trf_8719(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_8719(t0,t1,t2,t3);}

C_noret_decl(trf_8796)
static void C_ccall trf_8796(C_word c,C_word *av) C_noret;
static void C_ccall trf_8796(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8796(t0,t1,t2);}

C_noret_decl(trf_8830)
static void C_ccall trf_8830(C_word c,C_word *av) C_noret;
static void C_ccall trf_8830(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_8830(t0,t1,t2);}

C_noret_decl(trf_9173)
static void C_ccall trf_9173(C_word c,C_word *av) C_noret;
static void C_ccall trf_9173(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_9173(t0,t1);}

C_noret_decl(trf_9641)
static void C_ccall trf_9641(C_word c,C_word *av) C_noret;
static void C_ccall trf_9641(C_word c,C_word *av){
C_word t0=av[5];
C_word t1=av[4];
C_word t2=av[3];
C_word t3=av[2];
C_word t4=av[1];
C_word t5=av[0];
f_9641(t0,t1,t2,t3,t4,t5);}

/* k10009 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10011(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_10011,c,av);}
a=C_alloc(14);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_fast_retrieve(lf[220]));
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10035,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(C_fast_retrieve(lf[221]),lf[223]);
if(C_truep(t6)){
t7=C_i_cddddr(((C_word*)t0)[2]);
t8=C_i_car(t7);
t9=C_a_i_list1(&a,1,t8);
C_trace(C_text("optimizer.scm:1476: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
av2[2]=lf[54];
av2[3]=t9;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
t7=C_i_cadr(((C_word*)t0)[2]);
t8=C_a_i_list2(&a,2,t7,((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:1480: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
av2[2]=lf[117];
av2[3]=t8;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k10033 in k10009 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_10035,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1472: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10075(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_10075,c,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_length(((C_word*)t0)[3]);
t4=C_i_car(((C_word*)t0)[2]);
if(C_truep(C_i_greater_or_equalp(t3,t4))){
t5=C_i_cadr(((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10095,a[2]=((C_word*)t0)[4],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10099,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1497: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t8;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
tp(3,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k10093 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10095,c,av);}
C_trace(C_text("optimizer.scm:1494: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_10099,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10103,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10105,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10111,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1499: ##sys#call-with-values"));{
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

/* k10101 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10103,c,av);}
a=C_alloc(6);
C_trace(C_text("optimizer.scm:1496: cons*"));
f_3503(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,2,((C_word*)t0)[4],t1));}

/* a10104 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10105,c,av);}
C_trace(C_text("optimizer.scm:1499: split-at"));
f_3230(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a10110 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10111(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10111,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10119,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10125,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_10125(t9,t4,t3,t5);}

/* k10117 in a10110 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10119,c,av);}
C_trace(C_text("optimizer.scm:1500: scheme#append"));
t2=*((C_word*)lf[21]+1);{
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

/* loop in a10110 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10125(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_10125,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10145,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_car(t3);
if(C_truep(C_i_symbolp(t5))){
C_trace(C_text("optimizer.scm:1108: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}
else{
t6=C_i_pairp(t5);
t7=(C_truep(t6)?C_eqp(lf[72],C_u_i_car(t5)):C_SCHEME_FALSE);
if(C_truep(t7)){
C_trace(C_text("optimizer.scm:1109: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word av2[3];
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t4;
av2[2]=C_i_cadr(t5);
tp(3,av2);}}
else{
C_trace(C_text("optimizer.scm:1110: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word av2[3];
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t4;
av2[2]=t5;
tp(3,av2);}}}}}
else{
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10172,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1509: loop"));
t9=t5;
t10=C_u_i_cdr(t2);
t11=C_i_cdr(t3);
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* k10143 in loop in a10110 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10145(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_10145,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10149,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1507: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10125(t3,t2,C_SCHEME_END_OF_LIST,C_u_i_cdr(((C_word*)t0)[4]));}

/* k10147 in k10143 in loop in a10110 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10149,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k10170 in loop in a10110 in k10097 in k10073 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10172,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10245(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,8)))){
C_save_and_reclaim((void *)f_10245,c,av);}
a=C_alloc(39);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10248,a[2]=t17,a[3]=t7,a[4]=t9,a[5]=t11,a[6]=t13,a[7]=t15,a[8]=t3,tmp=(C_word)a,a+=9,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10459,a[2]=t11,a[3]=t3,a[4]=t9,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t20=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10890,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11536,a[2]=t1,a[3]=t5,a[4]=t13,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1747: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t21;
av2[2]=lf[43];
av2[3]=lf[181];
tp(4,av2);}}

/* walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10248(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_10248,5,t0,t1,t2,t3,t4);}
a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10252,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t4,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=C_SCHEME_UNDEFINED,a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("optimizer.scm:1530: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10252,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10255,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1531: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10255(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10255,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+12,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10258,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1532: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}

/* k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10258(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_10258,c,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=C_eqp(t1,lf[24]);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t2)[2]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10273,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t2)[6])){
if(C_truep(C_i_cadr(((C_word*)t2)[2]))){
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10376,a[2]=((C_word*)t2)[5],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t2)[12],a[5]=t4,a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[13],a[8]=t5,a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[14],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:1537: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t6;
av2[2]=((C_word*)t2)[14];
av2[3]=((C_word*)t2)[6];
av2[4]=lf[127];
tp(5,av2);}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}
else{
t4=C_eqp(t1,lf[26]);
if(C_truep(t4)){
C_trace(C_text("optimizer.scm:1551: walk"));
t5=((C_word*)((C_word*)t2)[11])[1];
f_10248(t5,((C_word*)t2)[4],C_i_car(((C_word*)t2)[2]),C_i_car(((C_word*)t2)[12]),C_SCHEME_FALSE);}
else{
t5=C_eqp(t1,lf[20]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10402,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[12],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1553: walk"));
t7=((C_word*)((C_word*)t2)[11])[1];
f_10248(t7,t6,C_i_car(((C_word*)t2)[2]),C_i_car(((C_word*)t2)[12]),((C_word*)t2)[5]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10418,a[2]=((C_word*)t2)[11],tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(((C_word*)t2)[12],lf[17]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10430,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_10430(t11,((C_word*)t2)[4],((C_word*)t2)[12]);}}}}

/* k10271 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_10273,c,av);}
if(C_truep(t1)){
C_trace(C_text("optimizer.scm:1549: transform"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_10890(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[8],((C_word*)((C_word*)t0)[9])[1]);}
else{
C_trace(C_text("optimizer.scm:1550: walk"));
t2=((C_word*)((C_word*)t0)[10])[1];
f_10248(t2,((C_word*)t0)[3],C_SCHEME_FALSE,C_i_car(((C_word*)t0)[11]),C_SCHEME_FALSE);}}

/* k10302 in k10374 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10304(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10304,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
if(C_truep(((C_word*)t2)[3])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10310,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1540: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[10];
av2[3]=((C_word*)t2)[6];
av2[4]=lf[126];
tp(5,av2);}}
else{
t4=((C_word*)t2)[8];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}

/* k10308 in k10302 in k10374 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_10310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_10310,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10316,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:1541: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[10];
av2[3]=((C_word*)t2)[6];
av2[4]=lf[153];
tp(5,av2);}}
else{
t3=((C_word*)t2)[8];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}

/* k10314 in k10308 in k10302 in k10374 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_10316(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10316,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[2],((C_word*)t0)[3]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10364,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10372,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1545: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}
else{
t2=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}

/* k10362 in k10314 in k10308 in k10302 in k10374 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_10364(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_10364,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
t2=C_i_length(((C_word*)t0)[2]);
t3=C_i_length(((C_word*)t0)[3]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[4]);
t6=C_i_car(((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
C_trace(C_text("optimizer.scm:1548: scan"));
t8=((C_word*)((C_word*)t0)[7])[1];
f_10459(t8,((C_word*)t0)[8],t5,t6,((C_word*)t0)[6],((C_word*)t0)[9],t7);}
else{
t5=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}
else{
t2=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}

/* k10370 in k10314 in k10308 in k10302 in k10374 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_10372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_10372,c,av);}
C_trace(C_text("optimizer.scm:1544: chicken.compiler.support#variable-mark"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[82]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[82]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_car(t1);
av2[3]=lf[159];
tp(4,av2);}}

/* k10374 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_10376,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
if(C_truep(C_i_listp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10304,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1539: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[77];
tp(5,av2);}}
else{
t2=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}
else{
t2=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_10273(2,av2);}}}

/* k10400 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_10402,c,av);}
C_trace(C_text("optimizer.scm:1554: walk"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_10248(t2,((C_word*)t0)[3],C_SCHEME_FALSE,C_i_cadr(((C_word*)t0)[4]),C_SCHEME_FALSE);}

/* g2233 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10418(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_10418,3,t0,t1,t2);}
C_trace(C_text("optimizer.scm:1555: walk"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_10248(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* for-each-loop2232 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10430(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_10430,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10440,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1555: g2233"));
t4=((C_word*)t0)[3];
f_10418(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k10438 in for-each-loop2232 in k10256 in k10253 in k10250 in walk in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10440(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_10440,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_10430(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10459(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,0,6)))){
C_save_and_reclaim_args((void *)trf_10459,7,t0,t1,t2,t3,t4,t5,t6);}
a=C_alloc(25);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10462,a[2]=t6,a[3]=t10,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t8,a[7]=t12,a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=t4,a[11]=((C_word*)t0)[5],a[12]=t3,tmp=(C_word)a,a+=13,tmp));
t14=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10881,a[2]=t8,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1634: rec"));
t18=((C_word*)t12)[1];
f_10462(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10462(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,0,2)))){
C_save_and_reclaim_args((void *)trf_10462,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(20);
t6=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_10466,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t3,a[9]=((C_word*)t0)[6],a[10]=C_SCHEME_UNDEFINED,a[11]=((C_word*)t0)[7],a[12]=t5,a[13]=t4,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=t2,tmp=(C_word)a,a+=20,tmp);
C_trace(C_text("optimizer.scm:1561: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t6;
av2[2]=t2;
tp(3,av2);}}

/* k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_10466,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10469,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1562: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[19];
tp(3,av2);}}

/* k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10469(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10469,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10472,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1563: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[19];
tp(3,av2);}}

/* k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10472(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,5)))){
C_save_and_reclaim((void *)f_10472,c,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
t3=C_eqp(t1,lf[18]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t2)[2]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10511,a[2]=((C_word*)t2)[3],a[3]=t4,a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1566: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[7];
av2[3]=t4;
av2[4]=lf[160];
tp(5,av2);}}
else{
t4=C_eqp(t1,lf[24]);
if(C_truep(t4)){
if(C_truep(((C_word*)t2)[8])){
t5=C_i_caddr(((C_word*)t2)[2]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10529,a[2]=((C_word*)t2)[8],a[3]=((C_word*)t2)[9],a[4]=((C_word*)t2)[10],a[5]=((C_word*)t2)[11],a[6]=((C_word*)t2)[12],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1574: ##sys#decompose-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=t5;
av2[3]=t6;
tp(4,av2);}}
else{
t5=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=C_eqp(t1,lf[117]);
if(C_truep(t5)){
if(C_truep(C_i_not(((C_word*)((C_word*)t2)[5])[1]))){
t6=C_i_cadr(((C_word*)t2)[2]);
t7=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t2)[6])[1],t6);
t8=C_mutate(((C_word *)((C_word*)t2)[6])+1,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10566,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[12],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1583: every"));
f_3439(((C_word*)t2)[3],t9,((C_word*)t2)[10]);}
else{
t6=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=C_eqp(t1,lf[97]);
if(C_truep(t6)){
if(C_truep(((C_word*)t2)[13])){
if(C_truep(((C_word*)t2)[14])){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10600,a[2]=((C_word*)t2)[15],a[3]=((C_word*)t2)[8],a[4]=((C_word*)t2)[13],a[5]=((C_word*)t2)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1586: chicken.compiler.support#scan-used-variables"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[161]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[161]+1);
av2[1]=t7;
av2[2]=C_i_car(((C_word*)t2)[10]);
av2[3]=((C_word*)t2)[12];
tp(4,av2);}}
else{
t7=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t7=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t7=C_eqp(t1,lf[162]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10616,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[12],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[10],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:1591: chicken.compiler.support#estimate-foreign-result-size"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[163]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t8;
av2[2]=C_i_cadr(((C_word*)t2)[2]);
tp(3,av2);}}
else{
t8=C_eqp(t1,lf[164]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10655,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[12],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[10],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:1599: chicken.compiler.support#estimate-foreign-result-size"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[163]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[163]+1);
av2[1]=t9;
av2[2]=C_i_car(((C_word*)t2)[2]);
tp(3,av2);}}
else{
t9=C_eqp(t1,lf[25]);
if(C_truep(t9)){
t10=C_i_car(((C_word*)t2)[10]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_10763,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[12],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[10],a[6]=((C_word*)t2)[16],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[17],a[9]=((C_word*)t2)[5],a[10]=((C_word*)t2)[18],a[11]=t10,tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:1608: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t11;
av2[2]=t10;
tp(3,av2);}}
else{
t10=C_eqp(t1,lf[165]);
if(C_truep(t10)){
t11=C_i_cadddr(((C_word*)t2)[2]);
t12=C_i_zerop(t11);
if(C_truep(t12)){
t13=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t13;
av2[1]=t12;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)((C_word*)t2)[5])[1]))){
t13=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t2)[6])[1],t11);
t14=C_mutate(((C_word *)((C_word*)t2)[6])+1,t13);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10791,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[12],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1625: every"));
f_3439(((C_word*)t2)[3],t15,((C_word*)t2)[10]);}
else{
t13=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}}}
else{
t11=C_eqp(t1,lf[26]);
if(C_truep(t11)){
C_trace(C_text("optimizer.scm:1626: rec"));
t12=((C_word*)((C_word*)t2)[11])[1];
f_10462(t12,((C_word*)t2)[3],C_i_car(((C_word*)t2)[10]),C_i_car(((C_word*)t2)[2]),C_SCHEME_FALSE,((C_word*)t2)[12]);}
else{
t12=C_eqp(t1,lf[20]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10824,a[2]=((C_word*)t2)[10],a[3]=((C_word*)t2)[11],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[2],a[6]=((C_word*)t2)[12],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1628: rec"));
t14=((C_word*)((C_word*)t2)[11])[1];
f_10462(t14,t13,C_i_car(((C_word*)t2)[10]),C_i_car(((C_word*)t2)[2]),((C_word*)t2)[19],((C_word*)t2)[12]);}
else{
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10848,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[12],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1630: every"));
f_3439(((C_word*)t2)[3],t13,((C_word*)t2)[10]);}}}}}}}}}}}

/* k10509 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10511(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_10511,c,av);}
a=C_alloc(29);
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_memq(((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_i_not(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[5])[1]))){
t5=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[6])[1],C_fix(2));
t6=C_mutate(((C_word *)((C_word*)t0)[6])+1,t5);
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}}}

/* a10528 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10529(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10529,c,av);}
a=C_alloc(8);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=C_i_car(((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10545,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1578: scheme#append"));
t9=*((C_word*)lf[21]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=t2;
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* k10543 in a10528 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_10545(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10545,c,av);}
C_trace(C_text("optimizer.scm:1578: rec"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_10462(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* a10565 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10566(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10566,c,av);}
C_trace(C_text("optimizer.scm:1583: rec"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_10462(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10598 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10600(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_10600,c,av);}
a=C_alloc(6);
if(C_truep(C_i_nullp(t1))){
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t4=C_a_i_cons(&a,2,t3,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10614 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10616(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,2)))){
C_save_and_reclaim((void *)f_10616,c,av);}
a=C_alloc(35);
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10620,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10620(t4,t2);}
else{
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[6])[1]))){
t4=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t5=C_mutate(((C_word *)((C_word*)t0)[7])+1,t4);
t6=t3;
f_10620(t6,C_SCHEME_TRUE);}
else{
t4=t3;
f_10620(t4,C_SCHEME_FALSE);}}}

/* k10618 in k10614 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void f_10620(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10620,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1597: every"));
f_3439(((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a10624 in k10618 in k10614 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_10625(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10625,c,av);}
C_trace(C_text("optimizer.scm:1597: rec"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_10462(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10653 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10655(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,2)))){
C_save_and_reclaim((void *)f_10655,c,av);}
a=C_alloc(35);
t2=C_i_zerop(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_10659(t4,t2);}
else{
if(C_truep(C_i_not(((C_word*)((C_word*)t0)[6])[1]))){
t4=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[7])[1],t1);
t5=C_mutate(((C_word *)((C_word*)t0)[7])+1,t4);
t6=t3;
f_10659(t6,C_SCHEME_TRUE);}
else{
t4=t3;
f_10659(t4,C_SCHEME_FALSE);}}}

/* k10657 in k10653 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void f_10659(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10659,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1605: every"));
f_3439(((C_word*)t0)[4],t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a10663 in k10657 in k10653 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_10664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10664,c,av);}
C_trace(C_text("optimizer.scm:1605: rec"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_10462(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10704 in k10757 in k10761 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void f_10706(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_10706,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1618: every"));
f_3439(((C_word*)t0)[4],t2,C_i_cdr(((C_word*)t0)[5]));}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a10710 in k10704 in k10757 in k10761 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_10711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10711,c,av);}
C_trace(C_text("optimizer.scm:1618: rec"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_10462(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10746 in k10750 in k10757 in k10761 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_10748(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_10748,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t6=((C_word*)t0)[4];
f_10706(t6,C_SCHEME_TRUE);}

/* k10750 in k10757 in k10761 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_10752(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10752,c,av);}
a=C_alloc(5);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10748,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1614: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t3=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t4=((C_word*)t0)[4];
f_10706(t4,C_SCHEME_TRUE);}}

/* k10757 in k10761 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_10759(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_10759,c,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,((C_word*)t0)[6]);
if(C_truep(t4)){
t5=((C_word*)((C_word*)t0)[7])[1];
if(C_truep(C_i_zerop(t5))){
t6=C_i_cadr(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10752,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1613: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t7;
av2[2]=t6;
tp(3,av2);}}
else{
t6=t3;
f_10706(t6,C_SCHEME_FALSE);}}
else{
t5=t3;
f_10706(t5,C_eqp(t2,((C_word*)t0)[10]));}}

/* k10761 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_10763,c,av);}
a=C_alloc(11);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10759,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:1609: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[11];
tp(3,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a10790 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10791,c,av);}
C_trace(C_text("optimizer.scm:1625: rec"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_10462(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10822 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_10824,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1629: scheme#append"));
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10833 in k10822 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_10835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10835,c,av);}
C_trace(C_text("optimizer.scm:1629: rec"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_10462(t2,((C_word*)t0)[3],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* a10847 in k10470 in k10467 in k10464 in rec in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_10848,c,av);}
C_trace(C_text("optimizer.scm:1630: rec"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_10462(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[3]);}

/* k10879 in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_10881,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1635: delete"));
f_3559(t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1],*((C_word*)lf[42]+1));}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k10886 in k10879 in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10888(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_10888,c,av);}
a=C_alloc(3);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_length(t2);
t4=C_i_length(t1);
t5=C_eqp(t3,t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4135,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("mini-srfi-1.scm:197: every"));
f_3439(((C_word*)t0)[3],t6,t2);}
else{
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10890(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,5)))){
C_save_and_reclaim_args((void *)trf_10890,8,t0,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(19);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10894,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t3,a[5]=t6,a[6]=t5,a[7]=t1,a[8]=t4,a[9]=t2,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11514,a[2]=t8,a[3]=t3,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11516,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1639: ##sys#make-promise"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[178]);
C_word av2[3];
av2[0]=*((C_word*)lf[178]+1);
av2[1]=t9;
av2[2]=t10;
tp(3,av2);}}
else{
C_trace(C_text("optimizer.scm:1640: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[6];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t8;
av2[2]=lf[31];
av2[3]=lf[180];
av2[4]=t3;
av2[5]=t7;
tp(6,av2);}}}

/* k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_10894,c,av);}
a=C_alloc(10);
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:1642: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}

/* k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10898(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_10898,c,av);}
a=C_alloc(18);
t2=C_i_caddr(t1);
t3=C_i_length(t2);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_10904,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[2],a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=C_SCHEME_UNDEFINED,a[11]=C_SCHEME_UNDEFINED,a[12]=C_SCHEME_UNDEFINED,a[13]=t5,a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],tmp=(C_word)a,a+=16,tmp);
C_trace(C_text("optimizer.scm:1645: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[3];
av2[4]=lf[153];
tp(5,av2);}}

/* k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10904(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_10904,c,av);}
a=C_alloc(5);
t2=C_mutate(((C_word *)t0)+11,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_mutate(((C_word *)t0)+10,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10910,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[2]))){
t7=C_eqp(C_u_i_length(((C_word*)t0)[2]),C_fix(4));
t8=t6;
f_10910(t8,(C_truep(t7)?C_i_listp(C_i_caddr(((C_word*)t0)[2])):C_SCHEME_FALSE));}
else{
t7=t6;
f_10910(t7,C_SCHEME_FALSE);}}

/* k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_10910(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_10910,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_car(((C_word*)t2)[2]);
t4=C_mutate(((C_word *)t2)+3,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10916,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1649: scheme#caaddr"));
t6=*((C_word*)lf[175]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t2)[2];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
C_trace(C_text("optimizer.scm:1745: chicken.compiler.support#bomb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[170]);
C_word av2[4];
av2[0]=*((C_word*)lf[170]+1);
av2[1]=((C_word*)t2)[9];
av2[2]=lf[176];
av2[3]=((C_word*)t2)[2];
tp(4,av2);}}}

/* k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_10916(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10916,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+12,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10919,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1650: scheme#cdaddr"));
t5=*((C_word*)lf[174]+1);{
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

/* k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_10919(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10919,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=C_i_setslot(C_u_i_cdr(t3),C_fix(0),t1);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_10925,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("optimizer.scm:1654: chicken.compiler.support#node-class-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[168]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[168]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[15];
av2[3]=lf[97];
tp(4,av2);}}

/* k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_10925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_10925,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_10928,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11474,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:1657: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[14];
tp(3,av2);}}

/* k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_10928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_10928,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10929,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11002,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11176,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1719: filter"));
f_3679(t3,t4,((C_word*)t0)[10]);}

/* g2351 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void f_10929(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_10929,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t1);
t4=C_i_cdr(t2);
t5=C_mutate(((C_word *)t0)+4,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10936,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1704: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k10934 in g2351 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_10936(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_10936,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10939,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1705: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}

/* k10937 in k10934 in g2351 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_10939(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_10939,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_i_cdr(t1);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_cadr(t1):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10945,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t5,a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
t7=C_i_cdr(((C_word*)t2)[2]);
t8=C_i_length(t7);
t9=C_eqp(((C_word*)t2)[7],t8);
if(C_truep(t9)){
t10=t6;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_SCHEME_UNDEFINED;
f_10945(2,av2);}}
else{
C_trace(C_text("optimizer.scm:1709: chicken.compiler.support#quit-compiling"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[166]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[166]+1);
av2[1]=t6;
av2[2]=lf[167];
av2[3]=((C_word*)t2)[8];
tp(4,av2);}}}

/* k10943 in k10937 in k10934 in g2351 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_10945(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_10945,c,av);}
a=C_alloc(20);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10960,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list4(&a,4,C_SCHEME_TRUE,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7]);
t5=C_u_i_car(((C_word*)t0)[2]);
t6=C_i_cddr(((C_word*)t0)[2]);
t7=C_a_i_cons(&a,2,t5,t6);
C_trace(C_text("optimizer.scm:1715: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[165];
av2[3]=t4;
av2[4]=t7;
tp(5,av2);}}

/* k10958 in k10943 in k10937 in k10934 in g2351 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in ... */
static void C_ccall f_10960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_10960,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1712: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[148]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
tp(4,av2);}}

/* k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_11002(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11002,c,av);}
a=C_alloc(12);
t2=C_i_check_list_2(t1,lf[17]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11008,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11153,a[2]=t5,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_11153(t7,t3,t1);}

/* k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_11008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11008,c,av);}
a=C_alloc(3);
t2=(C_truep(((C_word*)t0)[4])?C_i_pairp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11017,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1726: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_11017(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11017,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11020,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1727: chicken.compiler.support#copy-node!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
av2[3]=((C_word*)t2)[5];
tp(4,av2);}}

/* k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_11020(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_11020,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=C_i_check_list_2(((C_word*)t2)[2],lf[10]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11026,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11084,a[2]=t6,a[3]=((C_word*)t2)[5],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_11084(t8,t4,((C_word*)t2)[2]);}

/* k11024 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in ... */
static void C_ccall f_11026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_11026,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1738: chicken.compiler.support#copy-node!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t2;
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k11027 in k11024 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in ... */
static void C_ccall f_11029(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11029,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11061,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_11061(t5,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k11035 in for-each-loop2476 in k11027 in k11024 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in ... */
static void C_ccall f_11037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_11037,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11044,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1743: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k11042 in k11035 in for-each-loop2476 in k11027 in k11024 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in ... */
static void C_ccall f_11044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11044,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11048,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1743: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k11046 in k11042 in k11035 in for-each-loop2476 in k11027 in k11024 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in ... */
static void C_ccall f_11048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11048,c,av);}
t2=((C_word*)t0)[2];
t3=C_i_set_car(((C_word*)t2)[2],t1);
t4=((C_word*)((C_word*)t2)[3])[1];
f_11061(t4,((C_word*)t2)[4],C_slot(((C_word*)t2)[5],C_fix(1)));}

/* k11054 in for-each-loop2476 in k11027 in k11024 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in ... */
static void C_ccall f_11056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11056,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:1742: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}

/* for-each-loop2476 in k11027 in k11024 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in ... */
static void f_11061(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_11061,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11037,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11056,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1742: chicken.base#gensym"));
t7=*((C_word*)lf[112]+1);{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* foldr2462 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in ... */
static void f_11084(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_11084,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11144,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11109 in k11125 in k11142 in foldr2462 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in ... */
static void C_ccall f_11111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11111,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_a_i_list2(&a,2,t1,((C_word*)t2)[2]);
C_trace(C_text("optimizer.scm:1731: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=lf[20];
av2[3]=((C_word*)t2)[4];
av2[4]=t3;
tp(5,av2);}}

/* k11113 in k11125 in k11142 in foldr2462 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in ... */
static void C_ccall f_11115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11115,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11119,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1734: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k11117 in k11113 in k11125 in k11142 in foldr2462 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in ... */
static void C_ccall f_11119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11119,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11123,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1734: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}

/* k11121 in k11117 in k11113 in k11125 in k11142 in foldr2462 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in ... */
static void C_ccall f_11123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11123,c,av);}
C_trace(C_text("optimizer.scm:1734: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k11125 in k11142 in foldr2462 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in ... */
static void C_ccall f_11127(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11127,c,av);}
a=C_alloc(8);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11111,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11115,a[2]=t3,a[3]=C_SCHEME_UNDEFINED,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1734: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k11142 in foldr2462 in k11018 in k11015 in k11006 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in ... */
static void C_ccall f_11144(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11144,c,av);}
a=C_alloc(8);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_list1(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11127,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1733: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=C_u_i_cdr(((C_word*)t0)[2]);
tp(3,av2);}}

/* for-each-loop2350 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void f_11153(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11153,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11163,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1701: g2351"));
t4=((C_word*)t0)[3];
f_10929(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11161 in for-each-loop2350 in k11000 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_11163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11163,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_11153(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* a11175 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_11176(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11176,c,av);}
a=C_alloc(6);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11187,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11189,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1721: any"));
f_3473(t4,t5,((C_word*)((C_word*)t0)[2])[1]);}

/* k11185 in a11175 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_11187(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11187,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a11188 in a11175 in k10926 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_11189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11189,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_eqp(C_i_cdr(t2),((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void f_11203(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,2)))){
C_save_and_reclaim_args((void *)trf_11203,3,t0,t1,t2);}
a=C_alloc(13);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_11207,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=C_SCHEME_UNDEFINED,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("optimizer.scm:1658: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_11207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11207,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+11,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11210,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1659: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_11210(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11210,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11213,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1660: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}

/* k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_11213(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_11213,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=C_eqp(t1,lf[25]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t2)[2]);
t5=C_i_cadr(((C_word*)t2)[2]);
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_11228,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[2],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=t4,a[12]=t5,tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("optimizer.scm:1664: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t6;
av2[2]=t4;
tp(3,av2);}}
else{
t4=C_eqp(t1,lf[20]);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t2)[11]);
t6=C_i_car(((C_word*)t2)[2]);
if(C_truep(C_i_memq(t5,((C_word*)t2)[12]))){
t7=((C_word*)((C_word*)t2)[9])[1];
t8=C_a_i_cons(&a,2,t5,t6);
t9=C_a_i_cons(&a,2,t8,t7);
t10=C_mutate(((C_word *)((C_word*)t2)[9])+1,t9);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11401,a[2]=((C_word*)t2)[10],a[3]=((C_word*)t2)[7],a[4]=((C_word*)t2)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1694: chicken.compiler.support#copy-node!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=t11;
av2[2]=C_i_cadr(((C_word*)t2)[2]);
av2[3]=((C_word*)t2)[5];
tp(4,av2);}}
else{
t7=C_i_check_list_2(((C_word*)t2)[2],lf[17]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11416,a[2]=t9,a[3]=((C_word*)t2)[10],tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_11416(t11,((C_word*)t2)[7],((C_word*)t2)[2]);}}
else{
t5=C_i_check_list_2(((C_word*)t2)[2],lf[17]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11445,a[2]=t7,a[3]=((C_word*)t2)[10],tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_11445(t9,((C_word*)t2)[7],((C_word*)t2)[2]);}}}

/* k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in ... */
static void C_ccall f_11228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_11228,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_11231,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("optimizer.scm:1665: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
tp(3,av2);}}

/* k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in ... */
static void C_ccall f_11231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_11231,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_11376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("optimizer.scm:1666: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[12];
tp(3,av2);}}

/* k11254 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in ... */
static void C_ccall f_11256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_11256,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list2(&a,2,C_SCHEME_TRUE,((C_word*)t0)[5]);
C_trace(C_text("optimizer.scm:1671: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
tp(4,av2);}}

/* k11257 in k11254 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in ... */
static void C_ccall f_11259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11259,c,av);}
C_trace(C_text("optimizer.scm:1672: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[148]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_i_cddr(((C_word*)t0)[4]);
tp(4,av2);}}

/* g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in ... */
static void f_11277(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_11277,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t1);
t4=C_i_cdr(t2);
t5=C_mutate(((C_word *)t0)+8,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11328,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1676: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[8];
tp(3,av2);}}

/* k11285 in k11326 in g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in ... */
static void C_ccall f_11287(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_11287,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11290,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11316,a[2]=t3,a[3]=((C_word*)t2)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11324,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1678: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[8];
tp(3,av2);}}

/* k11288 in k11285 in k11326 in g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in ... */
static void C_ccall f_11290(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_11290,c,av);}
a=C_alloc(16);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11293,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11304,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list2(&a,2,C_SCHEME_FALSE,((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:1681: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[169];
av2[3]=t4;
av2[4]=C_i_cddr(((C_word*)t0)[7]);
tp(5,av2);}}

/* k11291 in k11288 in k11285 in k11326 in g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in ... */
static void C_ccall f_11293(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11293,c,av);}
C_trace(C_text("optimizer.scm:1682: rec"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_11203(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k11302 in k11288 in k11285 in k11326 in g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in ... */
static void C_ccall f_11304(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11304,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("optimizer.scm:1679: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[148]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
tp(4,av2);}}

/* k11314 in k11285 in k11326 in g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in ... */
static void C_ccall f_11316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11316,c,av);}
C_trace(C_text("optimizer.scm:1678: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k11322 in k11285 in k11326 in g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in ... */
static void C_ccall f_11324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11324,c,av);}
C_trace(C_text("optimizer.scm:1678: take"));
f_3178(((C_word*)t0)[2],C_i_caddr(t1),C_fix(1));}

/* k11326 in g2384 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in ... */
static void C_ccall f_11328(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11328,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_i_car(t1);
t4=C_mutate(((C_word *)t2)+4,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1677: chicken.compiler.support#node-class-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[168]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[168]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[5];
av2[3]=lf[20];
tp(4,av2);}}

/* k11349 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in ... */
static void C_ccall f_11351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_11351,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11354,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1686: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_END_OF_LIST;
tp(4,av2);}}

/* k11352 in k11349 in k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in ... */
static void C_ccall f_11354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11354,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("optimizer.scm:1687: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[148]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_i_cdr(((C_word*)t2)[4]);
tp(4,av2);}}

/* k11374 in k11229 in k11226 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in ... */
static void C_ccall f_11376(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_11376,c,av);}
a=C_alloc(15);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_eqp(((C_word*)t0)[3],t3);
if(C_truep(t4)){
t5=((C_word*)((C_word*)t0)[4])[1];
t6=C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,t6,t5);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t9=C_i_car(((C_word*)t0)[6]);
t10=C_eqp(((C_word*)t0)[7],t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11256,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1670: chicken.compiler.support#node-class-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[168]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[168]+1);
av2[1]=t11;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[169];
tp(4,av2);}}
else{
t11=C_i_car(((C_word*)t0)[6]);
t12=C_i_assq(t11,((C_word*)((C_word*)t0)[11])[1]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11277,a[2]=((C_word*)t0)[12],a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[9],a[8]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:1669: g2384"));
t14=t13;
f_11277(t14,((C_word*)t0)[8],t12);}
else{
C_trace(C_text("optimizer.scm:1683: chicken.compiler.support#bomb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[170]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[170]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=lf[171];
av2[3]=((C_word*)t0)[6];
tp(4,av2);}}}}
else{
t5=C_i_car(((C_word*)t0)[2]);
t6=C_eqp(((C_word*)t0)[7],t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11351,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1685: chicken.compiler.support#node-class-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[168]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[168]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
av2[3]=lf[172];
tp(4,av2);}}
else{
C_trace(C_text("optimizer.scm:1688: chicken.compiler.support#bomb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[170]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[170]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=lf[173];
tp(3,av2);}}}}
else{
t3=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k11399 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in ... */
static void C_ccall f_11401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11401,c,av);}
C_trace(C_text("optimizer.scm:1695: rec"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_11203(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* for-each-loop2405 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in ... */
static void f_11416(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11416,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11426,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1696: g2406"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_11203(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11424 in for-each-loop2405 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in ... */
static void C_ccall f_11426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11426,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_11416(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop2422 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in ... */
static void f_11445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_11445,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11455,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1698: g2423"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_11203(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k11453 in for-each-loop2422 in k11211 in k11208 in k11205 in rec in k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in ... */
static void C_ccall f_11455(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11455,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_11445(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k11472 in k10923 in k10917 in k10914 in k10908 in k10902 in k10896 in k10892 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_11474(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_11474,c,av);}
a=C_alloc(11);
t2=C_i_car(t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_11203(t6,((C_word*)t0)[8],t2);}

/* k11512 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_11514,c,av);}
C_trace(C_text("optimizer.scm:1639: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[31];
av2[3]=lf[177];
av2[4]=((C_word*)t0)[3];
av2[5]=t1;
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}

/* a11515 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_11516,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11524,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11526,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1639: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t2;
av2[2]=t3;
av2[3]=*((C_word*)lf[179]+1);
C_call_with_values(4,av2);}}

/* k11522 in a11515 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_11524,c,av);}
C_trace(C_text("optimizer.scm:1639: ##sys#make-promise"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[178]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[178]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* a11525 in a11515 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11526(C_word c,C_word *av){
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
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_11526,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[51]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3805,a[2]=t4,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3805(t10,t1,((C_word*)t0)[2]);}

/* k11534 in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_11536,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11539,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1748: walk"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_10248(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k11537 in k11534 in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11539(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11539,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11557(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11557,c,av);}
a=C_alloc(9);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11677,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t1,a[6]=t8,a[7]=t9,a[8]=t4,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:976: membership-test-operators"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2=av;
av2[0]=*((C_word*)lf[12]+1);
av2[1]=t10;
tp(2,av2);}}

/* k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11579(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,3)))){
C_save_and_reclaim((void *)f_11579,c,av);}
a=C_alloc(24);
t2=C_i_cdr(((C_word*)t0)[2]);
t3=C_a_i_list1(&a,1,t2);
t4=C_a_i_list1(&a,1,t1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11597,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11605,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11607,a[2]=t3,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_11607(t10,t6,((C_word*)t0)[8]);}

/* k11595 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11597,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:981: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k11603 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11605,c,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace(C_text("optimizer.scm:985: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[19];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
tp(5,av2);}}

/* foldr1641 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_11607(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11607,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11654,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
C_trace(C_text("optimizer.scm:996: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word av2[3];
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t1;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}}

/* g1646 in foldr1641 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_11615(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_11615,4,t0,t1,t2,t3);}
a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11627,a[2]=C_SCHEME_UNDEFINED,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11639,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:993: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k11625 in g1646 in foldr1641 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_11627,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11631,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:994: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}

/* k11629 in k11625 in g1646 in foldr1641 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11631(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_11631,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_a_i_list3(&a,3,((C_word*)t2)[2],t1,((C_word*)t2)[3]);
C_trace(C_text("optimizer.scm:990: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t2)[4];
av2[2]=lf[34];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t3;
tp(5,av2);}}

/* k11637 in g1646 in foldr1641 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_11639,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11643,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:993: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k11641 in k11637 in g1646 in foldr1641 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11643,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:993: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[54];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k11652 in foldr1641 in k11577 in k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_11654,c,av);}
C_trace(C_text("optimizer.scm:988: g1646"));
t2=((C_word*)t0)[2];
f_11615(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k11671 in k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11673(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_11673,c,av);}
a=C_alloc(9);
if(C_truep(C_i_lessp(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:979: chicken.base#gensym"));
t3=*((C_word*)lf[112]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k11675 in a11556 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_11677,c,av);}
a=C_alloc(10);
t2=C_i_assoc(((C_word*)t0)[2],t1);
if(C_truep(t2)){
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=C_i_length(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_11673,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:978: membership-unfold-limit"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2=av;
av2[0]=*((C_word*)lf[13]+1);
av2[1]=t4;
tp(2,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a11702 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11703(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_11703,c,av);}
a=C_alloc(7);
if(C_truep(t3)){
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11718,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,a[6]=t9,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:964: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2=av;
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t11;
av2[2]=t10;
tp(3,av2);}}
else{
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* k11716 in a11702 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11718(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_11718,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11722,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list3(&a,3,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:965: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=lf[34];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t3;
tp(5,av2);}}

/* k11720 in k11716 in a11702 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11722,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:962: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11784(C_word c,C_word *av){
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
C_word t9;
C_word t10;
C_word *a;
if(c!=9) C_bad_argc_2(c,9,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_11784,c,av);}
a=C_alloc(8);
if(C_truep(t3)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_11883,a[2]=t7,a[3]=t5,a[4]=t6,a[5]=t4,a[6]=t1,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:925: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2=av;
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t9;
av2[2]=t2;
av2[3]=t4;
av2[4]=lf[126];
tp(5,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}

/* loop in k11881 in a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_11799(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_11799,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11816,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:931: scheme#reverse"));
t6=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11822,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11870,a[2]=t5,a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:933: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t6;
av2[2]=C_i_car(t2);
tp(3,av2);}}}

/* k11814 in loop in k11881 in a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11816,c,av);}
C_trace(C_text("optimizer.scm:929: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k11820 in loop in k11881 in a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_11822(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11822,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11835,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:937: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word av2[5];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[54];
av2[3]=t4;
av2[4]=((C_word*)t0)[7];
tp(5,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
C_trace(C_text("optimizer.scm:943: loop"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_11799(t5,((C_word*)t0)[5],t2,t4,((C_word*)t0)[8]);}}

/* k11833 in k11820 in loop in k11881 in a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11835,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("optimizer.scm:936: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11799(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,C_SCHEME_TRUE);}

/* k11862 in k11868 in loop in k11881 in a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_11864,c,av);}
t2=((C_word*)t0)[2];
f_11822(t2,C_eqp(((C_word*)t0)[3],C_i_car(t1)));}

/* k11868 in loop in k11881 in a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_11870,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:935: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=C_u_i_car(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_11822(t3,C_SCHEME_FALSE);}}

/* k11881 in a11783 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11883(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11883,c,av);}
a=C_alloc(9);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11799,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_11799(t7,((C_word*)t0)[6],((C_word*)t0)[7],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11917(C_word c,C_word *av){
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
C_word t13;
C_word *a;
if(c!=11) C_bad_argc_2(c,11,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_11917,c,av);}
a=C_alloc(11);
if(C_truep(t3)){
t11=C_eqp(t4,t8);
if(C_truep(C_i_not(t11))){
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12048,a[2]=t7,a[3]=t9,a[4]=t8,a[5]=t5,a[6]=t6,a[7]=t4,a[8]=t1,a[9]=t10,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:888: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2=av;
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t12;
av2[2]=t2;
av2[3]=t8;
av2[4]=lf[87];
tp(5,av2);}}
else{
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}}
else{
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}

/* loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_11944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_11944,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11965,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:895: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11983,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t4,tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12031,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:901: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t6;
av2[2]=C_i_car(t2);
tp(3,av2);}}}

/* k11963 in loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11965(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_11965,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11969,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11977,a[2]=t2,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:899: scheme#reverse"));
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k11967 in k11963 in loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_11969,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:893: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k11975 in k11963 in loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_11977,c,av);}
C_trace(C_text("optimizer.scm:896: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k11981 in loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_11983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_11983,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:905: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word av2[5];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[54];
av2[3]=t4;
av2[4]=((C_word*)t0)[7];
tp(5,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
C_trace(C_text("optimizer.scm:911: loop"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_11944(t5,((C_word*)t0)[5],t2,t4,((C_word*)t0)[8]);}}

/* k11994 in k11981 in loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_11996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_11996,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("optimizer.scm:904: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11944(t3,((C_word*)t0)[4],((C_word*)t0)[5],t2,C_SCHEME_TRUE);}

/* k12023 in k12029 in loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12025,c,av);}
t2=((C_word*)t0)[2];
f_11983(t2,C_eqp(((C_word*)t0)[3],C_i_car(t1)));}

/* k12029 in loop in k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_12031,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12025,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:903: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=C_u_i_car(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_11983(t3,C_SCHEME_FALSE);}}

/* k12042 in k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12044(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_12044,c,av);}
a=C_alloc(11);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_11944(t7,((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t4=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12046 in a11916 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_12048,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:889: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=((C_word*)t0)[7];
av2[4]=lf[126];
tp(5,av2);}}
else{
t2=((C_word*)t0)[8];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a12101 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12102(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12102,c,av);}
a=C_alloc(10);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12147,a[2]=t5,a[3]=t8,a[4]=t9,a[5]=t1,a[6]=t7,a[7]=t6,a[8]=t2,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:868: eq-inline-operator"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2=av;
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t10;
tp(2,av2);}}

/* k12124 in k12137 in k12145 in a12101 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12126,c,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);
C_trace(C_text("optimizer.scm:870: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[19];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
tp(5,av2);}}

/* k12137 in k12145 in a12101 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12139(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12139,c,av);}
a=C_alloc(9);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:872: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=lf[54];
av2[3]=t5;
av2[4]=((C_word*)t0)[7];
tp(5,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12145 in a12101 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_12147,c,av);}
a=C_alloc(8);
t2=C_i_equalp(((C_word*)t0)[2],t1);
if(C_truep(C_i_not(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12139,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:869: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
av2[4]=lf[126];
tp(5,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12185(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_12185,c,av);}
a=C_alloc(9);
t6=C_a_i_list1(&a,1,t4);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12195,a[2]=t8,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_12195(t10,t1,t6,t5);}

/* loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_12195(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_12195,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12199,a[2]=C_SCHEME_UNDEFINED,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:803: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=t3;
tp(3,av2);}}

/* k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12199,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12202,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:804: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12202(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12202,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12205,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:805: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[7];
tp(3,av2);}}

/* k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12205(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_12205,c,av);}
a=C_alloc(10);
t2=C_eqp(((C_word*)t0)[2],lf[20]);
if(C_truep(t2)){
t3=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_nullp(t3))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=C_SCHEME_UNDEFINED,a[8]=((C_word*)t0)[7],a[9]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:808: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=C_i_car(((C_word*)t0)[3]);
av2[4]=lf[132];
tp(5,av2);}}
else{
t4=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12235(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12235,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12238,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:812: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}

/* k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12238,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12241,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=t1,a[9]=((C_word*)t2)[8],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:813: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}

/* k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12241(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12241,c,av);}
a=C_alloc(7);
t2=C_eqp(t1,lf[29]);
if(C_truep(t2)){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
C_trace(C_text("optimizer.scm:814: loop1"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_12195(t5,((C_word*)t0)[5],t4,C_i_cadr(((C_word*)t0)[6]));}
else{
t3=C_eqp(t1,lf[26]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12271,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:816: scheme#reverse"));
t5=*((C_word*)lf[4]+1);{
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
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}

/* k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_12271(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,5)))){
C_save_and_reclaim((void *)f_12271,c,av);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t1))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_car(t1);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[3]);
t6=C_a_i_list1(&a,1,t5);
t7=C_u_i_cdr(t1);
t8=C_i_cadr(((C_word*)t0)[4]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12298,a[2]=t10,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_12298(t12,((C_word*)t0)[6],t6,t7,t8);}
else{
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void f_12298(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,2)))){
C_save_and_reclaim_args((void *)trf_12298,5,t0,t1,t2,t3,t4);}
a=C_alloc(11);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12302,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=t4,a[8]=C_SCHEME_UNDEFINED,a[9]=C_SCHEME_UNDEFINED,a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:822: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=t4;
tp(3,av2);}}

/* k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_12302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12302,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+8,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12305,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:823: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_12305(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12305,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12308,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:824: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[7];
tp(3,av2);}}

/* k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_12308(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_12308,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12314,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=t1,a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],tmp=(C_word)a,a+=9,tmp);
t4=C_eqp(((C_word*)t2)[8],lf[20]);
if(C_truep(t4)){
t5=C_i_cdr(((C_word*)t2)[9]);
if(C_truep(C_i_nullp(t5))){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12436,a[2]=((C_word*)t2)[5],a[3]=t3,a[4]=t1,a[5]=((C_word*)t2)[10],a[6]=((C_word*)t2)[9],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:827: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t6;
av2[2]=((C_word*)t2)[10];
av2[3]=C_i_car(((C_word*)t2)[9]);
av2[4]=lf[132];
tp(5,av2);}}
else{
t6=t3;
f_12314(t6,C_SCHEME_FALSE);}}
else{
t5=t3;
f_12314(t5,C_SCHEME_FALSE);}}

/* k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void f_12314(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_12314,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:832: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[6]);
tp(3,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12352,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12362,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("optimizer.scm:836: ##sys#call-with-values"));{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[4];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}}

/* k12335 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_12337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12337,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
C_trace(C_text("optimizer.scm:832: loop2"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_12298(t4,((C_word*)t0)[4],t3,C_i_cdr(((C_word*)t0)[5]),C_i_cadr(((C_word*)t0)[6]));}

/* a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_12352(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_12352,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12360,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:837: scheme#reverse"));
t3=*((C_word*)lf[4]+1);{
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

/* k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in ... */
static void C_ccall f_12360(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_12360,c,av);}
a=C_alloc(21);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_i_check_list_2(((C_word*)t0)[2],lf[51]);
t9=C_i_check_list_2(t1,lf[51]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7422,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7897,a[2]=t6,a[3]=t12,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_7897(t14,t10,((C_word*)t0)[2],t1);}

/* a12361 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_12362(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12362,c,av);}
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t2:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k12410 in k12418 in k12426 in k12434 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in ... */
static void C_ccall f_12412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_12412,c,av);}
t2=((C_word*)t0)[2];
f_12314(t2,C_eqp(((C_word*)t0)[3],C_i_car(t1)));}

/* k12418 in k12426 in k12434 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in ... */
static void C_ccall f_12420(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12420,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[26],t1);
if(C_truep(t3)){
t4=C_u_i_car(((C_word*)t2)[2]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12412,a[2]=((C_word*)t2)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:831: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t5;
av2[2]=C_i_car(((C_word*)t2)[4]);
tp(3,av2);}}
else{
t4=((C_word*)t2)[3];
f_12314(t4,C_SCHEME_FALSE);}}

/* k12426 in k12434 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_12428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12428,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12420,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:830: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];
f_12314(t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_12314(t2,C_SCHEME_FALSE);}}

/* k12434 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_12436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_12436,c,av);}
a=C_alloc(5);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:828: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=C_i_car(((C_word*)t0)[6]);
av2[4]=lf[126];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];
f_12314(t2,C_SCHEME_FALSE);}}

/* k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12464(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12464,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(C_i_not(t1))){
t3=C_i_car(((C_word*)t2)[6]);
t4=C_mutate(((C_word *)t2)+9,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12235,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:811: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}
else{
t3=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_12472,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12464,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:809: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=C_i_car(((C_word*)t0)[2]);
av2[4]=lf[126];
tp(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a12497 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12498(C_word c,C_word *av){
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
C_word t11=av[11];
C_word t12;
C_word t13;
C_word *a;
if(c!=12) C_bad_argc_2(c,12,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_12498,c,av);}
a=C_alloc(11);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12551,a[2]=t5,a[3]=t10,a[4]=t1,a[5]=t9,a[6]=t11,a[7]=t7,a[8]=t6,a[9]=t2,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:777: eq-inline-operator"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2=av;
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t12;
tp(2,av2);}}

/* k12509 in k12549 in a12497 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12511(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_12511,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12547,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:779: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
av2[3]=((C_word*)t0)[9];
av2[4]=lf[126];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12526 in k12545 in k12509 in k12549 in a12497 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_12528,c,av);}
C_trace(C_text("optimizer.scm:780: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[35];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k12530 in k12545 in k12509 in k12549 in a12497 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_12532,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12536,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:784: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k12534 in k12530 in k12545 in k12509 in k12549 in a12497 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12536(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_12536,c,av);}
a=C_alloc(9);
C_trace(C_text("optimizer.scm:783: cons*"));
f_3503(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,3,t1,((C_word*)t0)[4],((C_word*)t0)[5]));}

/* k12545 in k12509 in k12549 in a12497 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12547(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,2)))){
C_save_and_reclaim((void *)f_12547,c,av);}
a=C_alloc(42);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_a_i_list1(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12528,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12532,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:783: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12549 in a12497 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_12551,c,av);}
a=C_alloc(10);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12511,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:778: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12625(C_word c,C_word *av){
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
C_word t11=av[11];
C_word t12=av[12];
C_word t13=av[13];
C_word t14=av[14];
C_word t15;
C_word t16;
C_word *a;
if(c!=15) C_bad_argc_2(c,15,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_12625,c,av);}
a=C_alloc(13);
t15=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_12697,a[2]=t7,a[3]=t10,a[4]=t11,a[5]=t14,a[6]=t1,a[7]=t9,a[8]=t8,a[9]=t4,a[10]=t2,a[11]=t6,a[12]=t5,tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("optimizer.scm:750: eq-inline-operator"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[11]);
C_word *av2=av;
av2[0]=*((C_word*)lf[11]+1);
av2[1]=t15;
tp(2,av2);}}

/* k12636 in k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_12638,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12644,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:752: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k12642 in k12636 in k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_12644,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12693,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:753: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[9];
av2[3]=((C_word*)t2)[11];
av2[4]=lf[126];
tp(5,av2);}}
else{
t3=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k12665 in k12682 in k12691 in k12642 in k12636 in k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12667,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12671,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:759: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k12669 in k12665 in k12682 in k12691 in k12642 in k12636 in k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_12671,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12675,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:761: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k12673 in k12669 in k12665 in k12682 in k12691 in k12642 in k12636 in k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_12675,c,av);}
a=C_alloc(18);
t2=C_a_i_list6(&a,6,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:755: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[7];
av2[2]=lf[35];
av2[3]=lf[200];
av2[4]=t2;
tp(5,av2);}}

/* k12682 in k12691 in k12642 in k12636 in k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12684(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12684,c,av);}
a=C_alloc(8);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:758: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[8];
tp(3,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12691 in k12642 in k12636 in k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12693(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_12693,c,av);}
a=C_alloc(9);
t2=C_i_length(t1);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:754: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[10];
av2[4]=lf[126];
tp(5,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k12695 in a12624 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12697(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_12697,c,av);}
a=C_alloc(12);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12638,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:751: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[201]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[201]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
tp(3,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12795(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_12795,c,av);}
a=C_alloc(9);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12803,a[2]=t4,a[3]=t6,a[4]=t3,a[5]=t5,a[6]=t2,a[7]=t7,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:718: chicken.internal#hash-table-ref"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[53]);
C_word *av2=av;
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t8;
av2[2]=C_retrieve2(lf[155],C_text("chicken.compiler.optimizer#substitution-table"));
av2[3]=t4;
tp(4,av2);}}

/* k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12803(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_12803,c,av);}
a=C_alloc(11);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12808,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_12808(t6,((C_word*)t0)[8],t2);}

/* loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_12808(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,2)))){
C_save_and_reclaim_args((void *)trf_12808,3,t0,t1,t2);}
a=C_alloc(19);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12818,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_caar(t2);
t5=C_u_i_car(t2);
t6=C_u_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7972,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
switch(t4){
case C_fix(1):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8062,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t6,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1117: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}
case C_fix(2):
if(C_truep(((C_word*)t0)[5])){
t8=C_i_length(((C_word*)t0)[4]);
t9=C_i_car(t6);
if(C_truep(C_i_nequalp(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8181,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1135: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(3):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8239,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1148: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(4):
if(C_truep(((C_word*)t0)[5])){
if(C_truep(C_fast_retrieve(lf[220]))){
t8=C_i_length(((C_word*)t0)[4]);
t9=C_eqp(C_fix(2),t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8353,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=C_SCHEME_UNDEFINED,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1161: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(5):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8412,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1173: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(6):
t8=C_i_caddr(t6);
t9=(C_truep(t8)?t8:C_fast_retrieve(lf[220]));
if(C_truep(t9)){
if(C_truep(((C_word*)t0)[5])){
t10=C_i_length(((C_word*)t0)[4]);
t11=C_eqp(C_fix(1),t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8507,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1188: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t12=t3;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(7):
t8=C_i_cadddr(t6);
t9=(C_truep(t8)?t8:C_fast_retrieve(lf[220]));
if(C_truep(t9)){
if(C_truep(((C_word*)t0)[5])){
t10=C_i_length(((C_word*)t0)[4]);
t11=C_i_car(t6);
if(C_truep(C_i_nequalp(t10,t11))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8581,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1200: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t12=t3;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(8):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8643,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1210: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(9):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8664,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1217: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(10):
if(C_truep(((C_word*)t0)[5])){
t8=C_i_cadddr(t6);
t9=(C_truep(t8)?t8:C_fast_retrieve(lf[220]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8919,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[6],a[4]=C_SCHEME_UNDEFINED,a[5]=t3,a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t0)[4],a[8]=t6,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:1248: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(11):
if(C_truep(((C_word*)t0)[5])){
t8=C_i_caddr(t6);
t9=(C_truep(t8)?t8:C_fast_retrieve(lf[220]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9008,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1265: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(12):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9069,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1278: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(13):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9148,a[2]=t6,a[3]=t7,a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:1292: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(14):
if(C_truep(((C_word*)t0)[5])){
t8=C_i_cadr(t6);
t9=C_i_length(((C_word*)t0)[4]);
if(C_truep(C_i_nequalp(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9218,a[2]=t6,a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1304: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(15):
if(C_truep(((C_word*)t0)[5])){
t8=C_i_length(((C_word*)t0)[4]);
t9=C_eqp(C_fix(1),t8);
if(C_truep(t9)){
t10=C_fast_retrieve(lf[220]);
t11=(C_truep(C_fast_retrieve(lf[220]))?C_fast_retrieve(lf[220]):C_i_cadddr(t6));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9301,a[2]=t6,a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1321: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t12=t3;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(16):
t8=C_i_car(t6);
t9=C_i_length(((C_word*)t0)[4]);
t10=C_i_caddr(t6);
t11=C_i_cadddr(t6);
t12=C_i_cddddr(t6);
t13=C_i_pairp(t12);
t14=(C_truep(t13)?C_i_car(C_i_cddddr(t6)):C_SCHEME_FALSE);
if(C_truep(((C_word*)t0)[5])){
t15=C_i_not(t8);
t16=(C_truep(t15)?t15:C_i_nequalp(t9,t8));
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9402,a[2]=t10,a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t11,a[6]=t9,a[7]=((C_word*)t0)[4],a[8]=t14,a[9]=t6,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:1346: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t17;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t17=t3;{
C_word av2[2];
av2[0]=t17;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t15=t3;{
C_word av2[2];
av2[0]=t15;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(17):
if(C_truep(((C_word*)t0)[5])){
t8=C_i_length(((C_word*)t0)[4]);
t9=C_i_car(t6);
if(C_truep(C_i_nequalp(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9514,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1366: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t10;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t10=t3;{
C_word av2[2];
av2[0]=t10;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(18):
if(C_truep(((C_word*)t0)[5])){
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9582,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1380: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(19):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9616,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1386: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(20):
t8=C_i_length(((C_word*)t0)[4]);
t9=C_i_cadddr(t6);
t10=(C_truep(t9)?t9:C_fast_retrieve(lf[220]));
if(C_truep(t10)){
if(C_truep(((C_word*)t0)[5])){
t11=C_i_car(t6);
if(C_truep(C_i_nequalp(t8,t11))){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9768,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=t6,a[5]=t8,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1418: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t12;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t12=t3;{
C_word av2[2];
av2[0]=t12;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t11=t3;{
C_word av2[2];
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t11=t3;{
C_word av2[2];
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(21):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9840,a[2]=t6,a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1436: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(22):
t8=C_i_car(t6);
t9=C_i_length(((C_word*)t0)[4]);
t10=C_i_cadddr(t6);
if(C_truep(((C_word*)t0)[5])){
if(C_truep(C_i_nequalp(t9,t8))){
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10011,a[2]=t6,a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t10,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1470: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t11;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t11=t3;{
C_word av2[2];
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t11=t3;{
C_word av2[2];
av2[0]=t11;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
case C_fix(23):
if(C_truep(((C_word*)t0)[5])){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10075,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1491: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word av2[3];
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t8=t3;{
C_word av2[2];
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}
default:
C_trace(C_text("optimizer.scm:1511: chicken.compiler.support#bomb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[170]);
C_word av2[3];
av2[0]=*((C_word*)lf[170]+1);
av2[1]=t3;
av2[2]=lf[231];
tp(3,av2);}}}}

/* k12816 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_12818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(38,c,2)))){
C_save_and_reclaim((void *)f_12818,c,av);}
a=C_alloc(38);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12822,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:719: g1444"));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
C_trace("optimizer.scm:719: g1444"),
  f_12822(C_a_i(&a,35),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
C_trace(C_text("optimizer.scm:728: loop"));
t2=((C_word*)((C_word*)t0)[4])[1];
f_12808(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[5]));}}

/* g1444 in k12816 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_12822(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
t2=C_i_assq(((C_word*)t0)[2],C_retrieve2(lf[46],C_text("chicken.compiler.optimizer#simplified-ops")));
if(C_truep(t2)){
t3=C_i_cdr(t2);
t4=C_s_a_i_plus(&a,2,t3,C_fix(1));
t5=C_i_set_cdr(t2,t4);
return(t1);}
else{
t3=C_retrieve2(lf[46],C_text("chicken.compiler.optimizer#simplified-ops"));
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],C_fix(1));
t5=C_a_i_cons(&a,2,t4,C_retrieve2(lf[46],C_text("chicken.compiler.optimizer#simplified-ops")));
t6=C_mutate(&lf[46] /* (set! chicken.compiler.optimizer#simplified-ops ...) */,t5);
return(t1);}}

/* k3054 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3056,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k3057 in k3054 */
static void C_ccall f_3059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3059,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k3060 in k3057 in k3054 */
static void C_ccall f_3062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3062,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3065,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3068,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3068(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,5)))){
C_save_and_reclaim((void *)f_3068,c,av);}
a=C_alloc(33);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.optimizer#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3178,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[3] /* (set! chicken.compiler.optimizer#split-at ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3230,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[5] /* (set! chicken.compiler.optimizer#every ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3439,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[6] /* (set! chicken.compiler.optimizer#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3473,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[7] /* (set! chicken.compiler.optimizer#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3503,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[8] /* (set! chicken.compiler.optimizer#delete ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3559,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[9] /* (set! chicken.compiler.optimizer#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3679,tmp=(C_word)a,a+=2,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4350,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:53: scheme#make-parameter"));
t12=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* loop in a5525 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3076(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3076,5,t0,t1,t2,t3,t4);}
a=C_alloc(7);
if(C_truep(C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3090,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:43: scheme#reverse"));
t6=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3100,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("mini-srfi-1.scm:44: pred"));
t6=((C_word*)t0)[3];
f_5532(t6,t5,C_i_car(t4));}}

/* k3088 in loop in a5525 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3090,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:43: scheme#reverse"));
t3=*((C_word*)lf[4]+1);{
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

/* k3092 in k3088 in loop in a5525 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3094,c,av);}
C_trace(C_text("mini-srfi-1.scm:43: scheme#values"));{
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
C_values(4,av2);}}

/* k3098 in loop in a5525 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3100(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3100,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
C_trace(C_text("mini-srfi-1.scm:44: loop"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3076(t4,((C_word*)t0)[5],t3,((C_word*)t0)[6],C_u_i_cdr(((C_word*)t0)[2]));}
else{
t2=C_u_i_car(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[6]);
C_trace(C_text("mini-srfi-1.scm:45: loop"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3076(t4,((C_word*)t0)[5],((C_word*)t0)[3],t3,C_u_i_cdr(((C_word*)t0)[2]));}}

/* chicken.compiler.optimizer#take in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3178(C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3178,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3196,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:56: take"));
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k3194 in chicken.compiler.optimizer#take in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3196(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3196,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.optimizer#split-at in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3230(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,5)))){
C_save_and_reclaim_args((void *)trf_3230,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3236,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3236(t7,t1,t3,C_SCHEME_END_OF_LIST,t2);}

/* loop in chicken.compiler.optimizer#split-at in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3236(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_3236,5,t0,t1,t2,t3,t4);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3250,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:67: scheme#reverse"));
t6=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=C_fixnum_difference(t2,C_fix(1));
t6=C_i_car(t4);
t7=C_a_i_cons(&a,2,t6,t3);
C_trace(C_text("mini-srfi-1.scm:68: loop"));
t9=t1;
t10=t5;
t11=t7;
t12=C_u_i_cdr(t4);
t1=t9;
t2=t10;
t3=t11;
t4=t12;
goto loop;}}

/* k3248 in loop in chicken.compiler.optimizer#split-at in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3250(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3250,c,av);}
C_trace(C_text("mini-srfi-1.scm:67: scheme#values"));{
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

/* foldr117 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void f_3284(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3284,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3311,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g122 in foldr117 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void f_3292(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3292,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3300,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:72: proc"));
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
f_7581(3,av2);}}

/* k3298 in g122 in foldr117 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_3300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3300,c,av);}
C_trace(C_text("mini-srfi-1.scm:72: scheme#append"));
t2=*((C_word*)lf[21]+1);{
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

/* k3309 in foldr117 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void C_ccall f_3311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3311,c,av);}
C_trace(C_text("mini-srfi-1.scm:72: g122"));
t2=((C_word*)t0)[2];
f_3292(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void f_3324(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3324,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3331,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("mini-srfi-1.scm:74: any"));
f_3473(t3,*((C_word*)lf[208]+1),t2);}

/* k3329 in loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void C_ccall f_3331(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,3)))){
C_save_and_reclaim((void *)f_3331,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[51]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3403,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3405,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3405(t12,t8,((C_word*)t0)[4]);}}

/* k3336 in k3329 in loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_3338(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_3338,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3342,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3354,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3356,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_3356(t11,t7,((C_word*)t0)[4]);}

/* k3340 in k3336 in k3329 in loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in ... */
static void C_ccall f_3342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3342,c,av);}
C_trace(C_text("mini-srfi-1.scm:76: scheme#append"));
t2=*((C_word*)lf[21]+1);{
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

/* k3352 in k3336 in k3329 in loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in ... */
static void C_ccall f_3354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3354,c,av);}
C_trace(C_text("mini-srfi-1.scm:77: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3324(t2,((C_word*)t0)[3],t1);}

/* map-loop159 in k3336 in k3329 in loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in ... */
static void f_3356(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3356,3,t0,t1,t2);}
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

/* k3401 in k3329 in loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_3403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3403,c,av);}{
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

/* map-loop132 in k3329 in loop in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void f_3405(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3405,3,t0,t1,t2);}
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

/* chicken.compiler.optimizer#every in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3439(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3439,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3445,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3445(t7,t1,t3);}

/* loop in chicken.compiler.optimizer#every in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3445(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3445,3,t0,t1,t2);}
a=C_alloc(5);
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3467,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:82: pred"));
t5=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}}

/* k3465 in loop in chicken.compiler.optimizer#every in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3467,c,av);}
if(C_truep(C_i_not(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("mini-srfi-1.scm:83: loop"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_3445(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* chicken.compiler.optimizer#any in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3473(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3473,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3479,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3479(t7,t1,t3);}

/* loop in chicken.compiler.optimizer#any in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3479(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3479,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3489,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:88: pred"));
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k3487 in loop in chicken.compiler.optimizer#any in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3489,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("mini-srfi-1.scm:89: loop"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_3479(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* chicken.compiler.optimizer#cons* in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3503(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_3503,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3509,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3509(t7,t1,t2,t3);}

/* loop in chicken.compiler.optimizer#cons* in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3509(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,3)))){
C_save_and_reclaim_args((void *)trf_3509,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3523,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:95: loop"));
t6=t4;
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t1=t6;
t2=t7;
t3=t8;
goto loop;}}

/* k3521 in loop in chicken.compiler.optimizer#cons* in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3523(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3523,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.optimizer#delete in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3559(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3559,4,t1,t2,t3,t4);}
a=C_alloc(7);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3565,a[2]=t6,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3565(t8,t1,t3);}

/* loop in chicken.compiler.optimizer#delete in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3565(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3565,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:106: test"));
t4=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k3576 in loop in chicken.compiler.optimizer#delete in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3578,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
C_trace(C_text("mini-srfi-1.scm:107: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3565(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=C_u_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:109: loop"));
t4=((C_word*)((C_word*)t0)[2])[1];
f_3565(t4,t3,C_u_i_cdr(((C_word*)t0)[4]));}}

/* k3590 in k3576 in loop in chicken.compiler.optimizer#delete in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3592,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3640(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_3640,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3654,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3667,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:123: delete"));
f_3559(t6,t3,t4,((C_word*)t0)[3]);}}

/* k3652 in loop in k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3654,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3665 in loop in k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3667(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3667,c,av);}
C_trace(C_text("mini-srfi-1.scm:123: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3640(t2,((C_word*)t0)[3],t1);}

/* chicken.compiler.optimizer#filter in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3679(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3679,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[10]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3688,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_3688(t8,t1,t3);}

/* foldr264 in chicken.compiler.optimizer#filter in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3688(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3688,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3717,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g269 in foldr264 in chicken.compiler.optimizer#filter in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3696(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3696,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3703,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:131: pred"));
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k3701 in g269 in foldr264 in chicken.compiler.optimizer#filter in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3703,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3715 in foldr264 in chicken.compiler.optimizer#filter in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_3717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3717,c,av);}
C_trace(C_text("mini-srfi-1.scm:131: g269"));
t2=((C_word*)t0)[2];
f_3696(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* foldr282 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void f_3732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3732,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3766,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g287 in foldr282 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void f_3740(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3740,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3744,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:135: pred"));
t5=((C_word*)t0)[2];
f_7557(t5,t4,t2);}

/* k3742 in g287 in foldr282 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in ... */
static void C_ccall f_3744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3744,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("mini-srfi-1.scm:135: g297"));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
C_trace("mini-srfi-1.scm:135: g297"),
  f_3748(C_a_i(&a,3),t2,t1)
);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g297 in k3742 in g287 in foldr282 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in ... */
static C_word f_3748(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k3764 in foldr282 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3766,c,av);}
C_trace(C_text("mini-srfi-1.scm:134: g287"));
t2=((C_word*)t0)[2];
f_3740(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop310 in a11525 in a11515 in transform in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3805(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3805,3,t0,t1,t2);}
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

/* loop in k4537 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_3845(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
return(C_u_i_car(t1));}
else{
t4=C_u_i_cdr(t1);
t1=t4;
goto loop;}}

/* loop in k5174 in a5162 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_3904(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_3904,4,t0,t1,t2,t3);}
a=C_alloc(3);
if(C_truep(C_i_nullp(t2))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
if(C_truep(C_i_memq(t4,t3))){
C_trace(C_text("mini-srfi-1.scm:160: loop"));
t9=t1;
t10=C_u_i_cdr(t2);
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t5=C_u_i_cdr(t2);
t6=C_u_i_car(t2);
t7=C_a_i_cons(&a,2,t6,t3);
C_trace(C_text("mini-srfi-1.scm:161: loop"));
t9=t1;
t10=t5;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* a4116 in a7556 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4117,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_memq(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a4134 in k10886 in k10879 in scan in chicken.compiler.optimizer#transform-direct-lambdas! in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4135,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_memq(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4350,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[11]+1 /* (set! chicken.compiler.optimizer#eq-inline-operator ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:54: scheme#make-parameter"));
t4=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4354,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[12]+1 /* (set! chicken.compiler.optimizer#membership-test-operators ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4358,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:55: scheme#make-parameter"));
t4=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4358,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[13]+1 /* (set! chicken.compiler.optimizer#membership-unfold-limit ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:56: scheme#make-parameter"));
t4=C_fast_retrieve(lf[232]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4362(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4362,c,av);}
a=C_alloc(5);
t2=C_mutate((C_word*)lf[14]+1 /* (set! chicken.compiler.optimizer#default-optimization-passes ...) */,t1);
t3=C_mutate((C_word*)lf[15]+1 /* (set! chicken.compiler.optimizer#scan-toplevel-assignments ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4364,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4715,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:151: scheme#make-vector"));
t5=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4364(C_word c,C_word *av){
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
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(49,c,5)))){
C_save_and_reclaim((void *)f_4364,c,av);}
a=C_alloc(49);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4367,a[2]=t8,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4397,a[2]=t8,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4402,a[2]=t10,a[3]=t20,tmp=(C_word)a,a+=4,tmp));
t25=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4443,a[2]=t10,a[3]=t6,a[4]=t16,a[5]=t18,a[6]=t20,a[7]=t14,a[8]=t12,tmp=(C_word)a,a+=9,tmp));
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4661,a[2]=t4,a[3]=t1,a[4]=t20,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:128: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t26;
av2[2]=lf[43];
av2[3]=lf[44];
tp(4,av2);}}

/* mark in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_4367(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;{}
t2=C_i_not(((C_word*)((C_word*)t0)[2])[1]);
t3=(C_truep(t2)?C_i_not(C_i_memq(t1,((C_word*)((C_word*)t0)[3])[1])):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
return(t5);}
else{
t4=C_SCHEME_UNDEFINED;
return(t4);}}

/* remember in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4390(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_4390,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4395,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:72: chicken.base#alist-update!"));
t5=C_fast_retrieve(lf[16]);{
C_word av2[5];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=t3;
av2[4]=((C_word*)((C_word*)t0)[2])[1];
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}

/* k4393 in remember in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4395(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4395,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* touch in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_4397(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
return(t2);}

/* scan-each in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4402(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_4402,5,t0,t1,t2,t3,t4);}
a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4404,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=C_i_check_list_2(t2,lf[17]);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4420,a[2]=t8,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_4420(t10,t1,t2);}

/* g588 in scan-each in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4404(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_4404,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
t3=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
C_trace(C_text("optimizer.scm:81: scan"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4443(t4,t1,t2,((C_word*)t0)[5]);}
else{
C_trace(C_text("optimizer.scm:81: scan"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_4443(t3,t1,t2,((C_word*)t0)[5]);}}

/* for-each-loop587 in scan-each in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4420(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4420,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4430,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:79: g588"));
t4=((C_word*)t0)[3];
f_4404(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4428 in for-each-loop587 in scan-each in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4430,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4420(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4443(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,2)))){
C_save_and_reclaim_args((void *)trf_4443,4,t0,t1,t2,t3);}
a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4447,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=C_SCHEME_UNDEFINED,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t2,a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
C_trace(C_text("optimizer.scm:85: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4447,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4450,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:86: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[12];
tp(3,av2);}}

/* k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4450(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4450,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4453,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:87: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[12];
tp(3,av2);}}

/* k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4453(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4453,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=C_eqp(t1,lf[18]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t2)[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4465,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_i_memq(t4,((C_word*)t2)[5]);
t7=C_i_not(t6);
t8=(C_truep(t7)?C_i_not(C_i_memq(t4,((C_word*)((C_word*)t2)[6])[1])):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t2)[6])[1]);
t10=C_mutate(((C_word *)((C_word*)t2)[6])+1,t9);
t11=t5;
f_4465(t11,t10);}
else{
t9=t5;
f_4465(t9,C_SCHEME_UNDEFINED);}}
else{
t4=C_eqp(t1,lf[19]);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4513,a[2]=((C_word*)t2)[7],a[3]=((C_word*)t2)[8],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[9],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[10],a[8]=t1,a[9]=((C_word*)t2)[2],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[6],a[14]=((C_word*)t2)[3],tmp=(C_word)a,a+=15,tmp);
if(C_truep(t4)){
t6=t5;
f_4513(t6,t4);}
else{
t6=C_eqp(t1,lf[34]);
t7=t5;
f_4513(t7,(C_truep(t6)?t6:C_eqp(t1,lf[35])));}}}

/* k4463 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4465,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4471,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:94: filter"));
f_3679(t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k4467 in k4463 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4469(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4469,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a4470 in k4463 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4471(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4471,c,av);}
t3=C_i_car(t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_not(C_eqp(t3,((C_word*)t0)[2]));
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4513(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_4513,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:97: scan"));
t3=((C_word*)((C_word*)t0)[7])[1];
f_4443(t3,t2,C_i_car(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
t2=C_eqp(((C_word*)t0)[8],lf[20]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4539,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4554,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:102: chicken.base#butlast"));
t5=C_fast_retrieve(lf[22]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t3=C_eqp(((C_word*)t0)[8],lf[23]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[8],lf[24]));
if(C_truep(t4)){
t5=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_eqp(((C_word*)t0)[8],lf[25]);
if(C_truep(t5)){
C_trace(C_text("optimizer.scm:107: touch"));
t6=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t6;
av2[1]=(
C_trace("optimizer.scm:107: touch"),
  f_4397(((C_word*)((C_word*)t0)[2])[1])
);
((C_proc)C_fast_retrieve_proc(t6))(2,av2);}}
else{
t6=C_eqp(((C_word*)t0)[8],lf[26]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t0)[9]);
t8=C_i_car(((C_word*)t0)[5]);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4587,a[2]=t7,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:112: scan"));
t10=((C_word*)((C_word*)t0)[7])[1];
f_4443(t10,t9,t8,((C_word*)t0)[6]);}
else{
C_trace(C_text("optimizer.scm:126: scan-each"));
t7=((C_word*)((C_word*)t0)[3])[1];
f_4402(t7,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],C_SCHEME_FALSE);}}}}}}

/* k4514 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4516,c,av);}
t2=(
C_trace("optimizer.scm:98: touch"),
  f_4397(((C_word*)((C_word*)t0)[2])[1])
);
C_trace(C_text("optimizer.scm:99: scan-each"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4402(t3,((C_word*)t0)[4],C_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6],C_SCHEME_TRUE);}

/* k4537 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4539(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4539,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3845,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_3845(((C_word*)t0)[2])
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4550,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:103: scheme#append"));
t5=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4548 in k4537 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4550(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4550,c,av);}
C_trace(C_text("optimizer.scm:103: scan"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4443(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k4552 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4554,c,av);}
C_trace(C_text("optimizer.scm:102: scan-each"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4402(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],C_SCHEME_FALSE);}

/* k4585 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4587,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:113: chicken.base#alist-ref"));
t3=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
av2[3]=((C_word*)((C_word*)t0)[9])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k4588 in k4585 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_4590,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_truep(t1)?C_i_not(C_i_memq(((C_word*)t0)[2],((C_word*)((C_word*)t0)[8])[1])):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4611,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:119: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=lf[31];
av2[3]=lf[32];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
t4=t2;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_4593(2,av2);}}}

/* k4591 in k4588 in k4585 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4593,c,av);}
a=C_alloc(3);
if(C_truep(C_i_memq(((C_word*)t0)[2],((C_word*)t0)[3]))){
C_trace(C_text("optimizer.scm:124: remember"));
t2=((C_word*)((C_word*)t0)[4])[1];
f_4390(t2,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t2=(
C_trace("optimizer.scm:123: mark"),
  f_4367(C_a_i(&a,3),((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[2])
);
C_trace(C_text("optimizer.scm:124: remember"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_4390(t3,((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[6]);}}

/* k4609 in k4588 in k4585 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4611(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4611,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4618,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:121: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k4616 in k4609 in k4588 in k4585 in k4511 in k4451 in k4448 in k4445 in scan in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4618,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("optimizer.scm:120: chicken.compiler.support#copy-node!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[27]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[27]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=t1;
av2[3]=((C_word*)t2)[3];
tp(4,av2);}}

/* k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4661(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_4661,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4664,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:129: scan"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_4443(t3,t2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4664(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4664,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4667,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4711,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=*((C_word*)lf[42]+1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3640,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3640(t9,t3,t4);}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_4667(2,av2);}}}

/* k4665 in k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4667(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4667,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
t4=C_i_check_list_2(t3,lf[17]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4680,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_4680(t8,((C_word*)t2)[3],t3);}

/* for-each-loop569 in k4665 in k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4680(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4680,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_fast_retrieve(lf[39]);
C_trace(C_text("optimizer.scm:132: g646"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word av2[4];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[40];
tp(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4688 in for-each-loop569 in k4665 in k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4690,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4680(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4709 in k4662 in k4659 in chicken.compiler.optimizer#scan-toplevel-assignments in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4711,c,av);}
C_trace(C_text("optimizer.scm:131: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[31];
av2[3]=lf[41];
av2[4]=t1;
tp(5,av2);}}

/* k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4715(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(52,c,9)))){
C_save_and_reclaim((void *)f_4715,c,av);}
a=C_alloc(52);
t2=C_mutate(&lf[45] /* (set! chicken.compiler.optimizer#simplifications ...) */,t1);
t3=lf[46] /* chicken.compiler.optimizer#simplified-ops */ =C_SCHEME_END_OF_LIST;;
t4=lf[47] /* chicken.compiler.optimizer#broken-constant-nodes */ =C_SCHEME_END_OF_LIST;;
t5=lf[48] /* chicken.compiler.optimizer#inline-history */ =C_SCHEME_END_OF_LIST;;
t6=C_mutate((C_word*)lf[49]+1 /* (set! chicken.compiler.optimizer#perform-high-level-optimizations ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4720,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7401,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=C_a_i_list(&a,1,lf[217]);
t9=C_a_i_list(&a,2,lf[18],t8);
t10=C_a_i_cons(&a,2,lf[218],lf[219]);
t11=C_a_i_cons(&a,2,t9,t10);
t12=C_a_i_cons(&a,2,lf[205],t11);
t13=C_a_i_cons(&a,2,lf[25],t12);
t14=C_a_i_list(&a,4,lf[217],lf[218],lf[219],lf[205]);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12795,tmp=(C_word)a,a+=2,tmp);
t16=C_a_i_list(&a,3,t13,t14,t15);
t17=C_a_i_list(&a,1,t16);
C_trace(C_text("optimizer.scm:709: chicken.internal#hash-table-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[157]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[157]+1);
av2[1]=t7;
av2[2]=C_retrieve2(lf[45],C_text("chicken.compiler.optimizer#simplifications"));
av2[3]=lf[25];
av2[4]=t17;
tp(5,av2);}}

/* chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4720(C_word c,C_word *av){
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
C_word *a;
if(c!=9) C_bad_argc_2(c,9,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(124,c,9)))){
C_save_and_reclaim((void *)f_4720,c,av);}
a=C_alloc(124);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_fix(0);
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_END_OF_LIST;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_END_OF_LIST;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
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
t39=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4723,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4749,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t41=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4753,tmp=(C_word)a,a+=2,tmp));
t42=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4790,a[2]=t18,a[3]=t24,a[4]=t28,a[5]=t3,a[6]=t8,tmp=(C_word)a,a+=7,tmp));
t43=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4918,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t24,a[5]=t22,a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t44=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5080,a[2]=t20,a[3]=t28,a[4]=t12,a[5]=t24,a[6]=t32,a[7]=t30,a[8]=t36,tmp=(C_word)a,a+=9,tmp));
t45=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5218,a[2]=t3,a[3]=t34,a[4]=t22,tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t36,0,(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5238,a[2]=t24,a[3]=C_SCHEME_UNDEFINED,a[4]=t22,a[5]=C_SCHEME_UNDEFINED,a[6]=t14,a[7]=C_SCHEME_UNDEFINED,a[8]=t34,a[9]=t10,a[10]=t32,a[11]=C_SCHEME_UNDEFINED,a[12]=C_SCHEME_UNDEFINED,a[13]=t38,a[14]=C_SCHEME_UNDEFINED,a[15]=t3,a[16]=t26,a[17]=t16,a[18]=t5,a[19]=t6,a[20]=t7,a[21]=t4,tmp=(C_word)a,a+=22,tmp));
t47=C_set_block_item(t38,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6907,a[2]=t26,a[3]=t32,tmp=(C_word)a,a+=4,tmp));
t48=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6967,a[2]=t1,a[3]=t20,a[4]=t12,a[5]=t10,a[6]=t14,a[7]=t18,a[8]=t32,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t49=C_SCHEME_FALSE;
t50=(*a=C_VECTOR_TYPE|1,a[1]=t49,tmp=(C_word)a,a+=2,tmp);
t51=C_fix(0);
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_SCHEME_UNDEFINED;
t56=(*a=C_VECTOR_TYPE|1,a[1]=t55,tmp=(C_word)a,a+=2,tmp);
t57=C_set_block_item(t54,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7136,a[2]=t50,tmp=(C_word)a,a+=3,tmp));
t58=C_set_block_item(t56,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7140,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t59=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7147,a[2]=t48,a[3]=t50,a[4]=t52,a[5]=t54,a[6]=t3,a[7]=t56,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:661: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t59;
av2[2]=lf[43];
av2[3]=lf[154];
tp(4,av2);}}

/* test in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4723(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4723,4,t0,t1,t2,t3);}
C_trace(C_text("optimizer.scm:167: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word av2[5];
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k4735 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4737(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(36,c,2)))){
C_save_and_reclaim((void *)f_4737,c,av);}
a=C_alloc(36);
t2=C_eqp(lf[72],t1);
if(C_truep(t2)){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_s_a_i_plus(&a,2,t3,C_fix(1)));
t5=(
C_trace("optimizer.scm:236: touch"),
  f_4749(((C_word*)((C_word*)t0)[3])[1])
);
t6=C_u_i_car(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:169: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t7;
av2[2]=t6;
tp(3,av2);}}
else{
C_trace(C_text("optimizer.scm:227: simplify"));
t3=((C_word*)((C_word*)t0)[9])[1];
f_4790(t3,((C_word*)t0)[10],((C_word*)t0)[11]);}}

/* k4745 in k4735 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4747,c,av);}
t2=C_i_car(t1);
t3=(C_truep(t2)?C_i_cadr(((C_word*)t0)[2]):C_i_caddr(((C_word*)t0)[2]));
C_trace(C_text("optimizer.scm:237: walk"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5080(t4,((C_word*)t0)[4],t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* touch in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_4749(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;{}
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* invalidate-gae! in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4753(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,2)))){
C_save_and_reclaim_args((void *)trf_4753,2,t1,t2);}
a=C_alloc(2);
t3=C_i_check_list_2(t2,lf[17]);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4767,tmp=(C_word)a,a+=2,tmp);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(
  f_4767(t2)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* for-each-loop697 in invalidate-gae! in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_4767(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_set_cdr(t2,C_SCHEME_FALSE);
t5=C_slot(t1,C_fix(1));
t1=t5;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4790,3,t0,t1,t2);}
a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4794,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4916,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:177: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4794,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4805,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:178: any"));
f_3473(t2,t3,t1);}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4795 in k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4797(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4797,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4804 in k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4805(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_4805,c,av);}
a=C_alloc(10);
t3=C_i_cadr(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4815,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:180: chicken.compiler.support#match-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=C_i_car(t2);
av2[4]=t3;
tp(5,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4813 in a4804 in k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4815(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,3)))){
C_save_and_reclaim((void *)f_4815,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4860,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_i_check_list_2(((C_word*)t0)[7],lf[51]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4874,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4876,a[2]=t8,a[3]=t6,a[4]=t12,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4876(t14,t10,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4819 in k4813 in a4804 in k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4821(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,2)))){
C_save_and_reclaim((void *)f_4821,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=C_i_caar(((C_word*)t0)[2]);
t3=C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_s_a_i_plus(&a,2,t4,C_fix(1));
t6=C_i_set_cdr(t3,t5);
t7=(
C_trace("optimizer.scm:188: touch"),
  f_4749(((C_word*)((C_word*)t0)[4])[1])
);
C_trace(C_text("optimizer.scm:189: simplify"));
t8=((C_word*)((C_word*)t0)[5])[1];
f_4790(t8,((C_word*)t0)[6],t1);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
t5=C_a_i_cons(&a,2,t2,C_fix(1));
t6=C_a_i_cons(&a,2,t5,t4);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=(
C_trace("optimizer.scm:188: touch"),
  f_4749(((C_word*)((C_word*)t0)[4])[1])
);
C_trace(C_text("optimizer.scm:189: simplify"));
t9=((C_word*)((C_word*)t0)[5])[1];
f_4790(t9,((C_word*)t0)[6],t1);}}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g737 in k4813 in a4804 in k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_4860(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_cdr(C_i_assq(t1,((C_word*)t0)[2])));}

/* k4872 in k4813 in a4804 in k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_4874,c,av);}{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=((C_word*)t0)[5];
av2[5]=t1;
C_apply(6,av2);}}

/* map-loop731 in k4813 in a4804 in k4792 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4876(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4876,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=(
C_trace("optimizer.scm:182: g737"),
  f_4860(((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k4914 in simplify in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4916,c,av);}
C_trace(C_text("optimizer.scm:176: chicken.internal#hash-table-ref"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[53]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[53]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[45],C_text("chicken.compiler.optimizer#simplifications"));
av2[3]=t1;
tp(4,av2);}}

/* maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4918(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4918,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5078,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:198: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k4923 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4925,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_4937(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4937,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
if(C_truep(((C_word*)t2)[4])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5049,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:206: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}
else{
t4=((C_word*)t2)[6];{
C_word av2[2];
av2[0]=t4;
av2[1]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4971 in k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_4973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4973,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=C_i_car(t1);
if(C_truep(t2)){
t3=C_u_i_cdr(t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:214: test"));
t5=((C_word*)((C_word*)t0)[8])[1];
f_4723(t5,t4,((C_word*)t0)[6],lf[58]);}
else{
t4=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4993 in k5027 in k4971 in k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_4995(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4995,c,av);}
a=C_alloc(9);
t2=(
C_trace("optimizer.scm:218: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5005,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5017,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:220: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k5003 in k4993 in k5027 in k4971 in k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_5005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5005,c,av);}
C_trace(C_text("optimizer.scm:219: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k5015 in k4993 in k5027 in k4971 in k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_5017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5017,c,av);}
a=C_alloc(6);
t2=C_i_cdr(t1);
C_trace(C_text("optimizer.scm:220: cons*"));
f_3503(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,2,((C_word*)t0)[4],t2));}

/* k5019 in k5027 in k4971 in k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_5021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_5021,c,av);}
C_trace(C_text("optimizer.scm:216: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[55];
av2[3]=lf[56];
av2[4]=t1;
av2[5]=((C_word*)t0)[3];
av2[6]=((C_word*)t0)[4];
tp(7,av2);}}

/* k5023 in k5027 in k4971 in k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_5025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5025,c,av);}
C_trace(C_text("optimizer.scm:217: chicken.compiler.support#call-info"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k5027 in k4971 in k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_5029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,2)))){
C_save_and_reclaim((void *)f_5029,c,av);}
a=C_alloc(17);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4995,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5021,a[2]=t2,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5025,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:217: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}
else{
t2=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5031 in k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5033,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
if(C_truep(C_i_not(t1))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4973,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:211: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[9];
av2[3]=((C_word*)t2)[6];
av2[4]=lf[59];
tp(5,av2);}}
else{
t3=((C_word*)t2)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5035 in k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5037,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(C_i_not(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5033,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:210: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[9];
av2[3]=((C_word*)t2)[6];
av2[4]=lf[60];
tp(5,av2);}}
else{
t3=((C_word*)t2)[7];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5039 in k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5041(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5041,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+6,t2);
if(C_truep(((C_word*)t0)[6])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5037,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:209: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[61];
tp(5,av2);}}
else{
t4=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5043 in k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5045,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[18],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5041,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:208: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}
else{
t4=((C_word*)t2)[6];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5047 in k4935 in k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5049(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5049,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_i_car(t1);
t4=C_mutate(((C_word *)t2)+9,t3);
if(C_truep(((C_word*)t2)[9])){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5045,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:207: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}
else{
t5=((C_word*)t2)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5072 in k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5074(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5074,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4937,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_truep(C_i_equalp(t2,lf[62]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t2,lf[63]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t3;
f_4937(t4,lf[64]);}
else{
if(C_truep((C_truep(C_i_equalp(t2,lf[65]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t2,lf[66]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=t3;
f_4937(t4,lf[67]);}
else{
if(C_truep((C_truep(C_i_equalp(t2,lf[68]))?C_SCHEME_TRUE:C_SCHEME_FALSE))){
t4=t3;
f_4937(t4,lf[69]);}
else{
t4=C_i_member(t2,lf[70]);
t5=t3;
f_4937(t5,(C_truep(t4)?lf[71]:C_SCHEME_FALSE));}}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5076 in maybe-replace-rest-arg-calls in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5078(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_5078,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[54],t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4925,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5074,a[2]=((C_word*)t2)[4],a[3]=t4,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[2],a[7]=((C_word*)t2)[5],a[8]=((C_word*)t2)[6],a[9]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:199: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[3];
tp(3,av2);}}
else{
t5=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5080(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_5080,5,t0,t1,t2,t3,t4);}
a=C_alloc(14);
if(C_truep(C_i_memq(t2,C_retrieve2(lf[47],C_text("chicken.compiler.optimizer#broken-constant-nodes"))))){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t4,a[10]=C_SCHEME_UNDEFINED,a[11]=((C_word*)t0)[7],a[12]=t5,a[13]=((C_word*)t0)[2],tmp=(C_word)a,a+=14,tmp);
C_trace(C_text("optimizer.scm:229: walk1"));
t7=((C_word*)((C_word*)t0)[8])[1];
f_5238(t7,t6,t2,t3,t4);}}

/* k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5094,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+10,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5097,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:230: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[10];
tp(3,av2);}}

/* k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5097(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5097,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5100,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:231: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[10];
tp(3,av2);}}

/* k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5100(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,5)))){
C_save_and_reclaim((void *)f_5100,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5103,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(t1,lf[19]);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t2)[4]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4737,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[6],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[7],a[6]=t3,a[7]=((C_word*)t2)[8],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[2],a[10]=((C_word*)t2)[3],a[11]=((C_word*)t2)[10],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:168: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t6;
av2[2]=t5;
tp(3,av2);}}
else{
t5=C_eqp(t1,lf[54]);
if(C_truep(t5)){
C_trace(C_text("optimizer.scm:244: maybe-replace-rest-arg-calls"));
t6=((C_word*)((C_word*)t2)[11])[1];
f_4918(t6,t3,((C_word*)t2)[10]);}
else{
t6=C_eqp(t1,lf[25]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t2)[4]);
t8=C_i_cddr(((C_word*)t2)[4]);
t9=C_a_i_cons(&a,2,t7,t8);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5163,a[2]=((C_word*)t2)[10],a[3]=((C_word*)t2)[12],a[4]=((C_word*)t2)[13],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:247: chicken.compiler.support#maybe-constant-fold-call"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[74]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[74]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[10];
av2[3]=t9;
av2[4]=t10;
tp(5,av2);}}
else{
C_trace(C_text("optimizer.scm:227: simplify"));
t7=((C_word*)((C_word*)t2)[2])[1];
f_4790(t7,((C_word*)t2)[3],((C_word*)t2)[10]);}}}}

/* k5101 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5103,c,av);}
C_trace(C_text("optimizer.scm:227: simplify"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4790(t2,((C_word*)t0)[3],t1);}

/* a5162 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5163(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5163,c,av);}
a=C_alloc(4);
if(C_truep(C_i_not(t2))){
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5176,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=t5;
f_5176(t6,C_SCHEME_UNDEFINED);}
else{
t6=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_FALSE);
t7=t5;
f_5176(t7,t6);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t5=(
C_trace("optimizer.scm:258: touch"),
  f_4749(((C_word*)((C_word*)t0)[5])[1])
);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5187,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:260: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2=av;
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t6;
av2[2]=t3;
tp(3,av2);}}}

/* k5174 in a5162 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5176(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_5176,2,t0,t1);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5180,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve2(lf[47],C_text("chicken.compiler.optimizer#broken-constant-nodes"));
t4=C_a_i_list(&a,1,((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3904,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_3904(t8,t2,t4,C_retrieve2(lf[47],C_text("chicken.compiler.optimizer#broken-constant-nodes")));}

/* k5178 in k5174 in a5162 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5180,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[47] /* (set! chicken.compiler.optimizer#broken-constant-nodes ...) */,t1);
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k5185 in a5162 in k5098 in k5095 in k5092 in walk in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5187(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5187,c,av);}
a=C_alloc(9);
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_a_i_list2(&a,2,t3,t1);
C_trace(C_text("optimizer.scm:261: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=t2;
av2[4]=t4;
tp(5,av2);}}

/* replace-var in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_5218,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5222,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:268: test"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4723(t4,t3,t2,lf[76]);}

/* k5220 in replace-var in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_5222,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:268: g831"));
t3=t2;
f_5226(t3,((C_word*)t0)[5],t1);}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* g831 in k5220 in replace-var in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5226(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5226,3,t0,t1,t2);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5230,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:270: replace-var"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_5218(t4,t3,t2);}

/* k5228 in g831 in k5220 in replace-var in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5230(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_5230,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:272: chicken.compiler.support#db-put!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[75]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[76];
av2[5]=t1;
tp(6,av2);}}

/* k5231 in k5228 in g831 in k5220 in replace-var in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5233,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5238(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_5238,5,t0,t1,t2,t3,t4);}
a=C_alloc(3);
t5=C_mutate(((C_word *)t0)+7,t4);
t6=C_mutate(((C_word *)t0)+12,t3);
t7=C_mutate(((C_word *)t0)+14,t2);
t8=C_mutate(((C_word *)t0)+3,t1);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5242,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:277: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[14];
tp(3,av2);}}

/* k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5242(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5242,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+11,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5245,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:278: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[14];
tp(3,av2);}}

/* k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5245(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5245,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5248,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:279: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[14];
tp(3,av2);}}

/* k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5248(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,8)))){
C_save_and_reclaim((void *)f_5248,c,av);}
a=C_alloc(20);
t2=((C_word*)t0)[2];
t3=C_eqp(t1,lf[18]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5257,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:283: replace-var"));
t5=((C_word*)((C_word*)t2)[8])[1];
f_5218(t5,t4,C_i_car(((C_word*)t2)[5]));}
else{
t4=C_eqp(t1,lf[20]);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t2)[5]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5370,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[9],a[4]=((C_word*)t2)[10],a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[11],a[7]=((C_word*)t2)[12],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[5],a[10]=t5,a[11]=((C_word*)t2)[4],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:304: test"));
t7=((C_word*)((C_word*)t2)[4])[1];
f_4723(t7,t6,t5,lf[88]);}
else{
t5=C_eqp(t1,lf[24]);
if(C_truep(t5)){
t6=C_i_caddr(((C_word*)t2)[5]);
t7=C_i_car(((C_word*)t2)[5]);
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5515,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[11],a[6]=t7,a[7]=((C_word*)t2)[12],a[8]=((C_word*)t2)[10],a[9]=((C_word*)t2)[3],a[10]=t6,a[11]=((C_word*)t2)[13],a[12]=((C_word*)t2)[14],a[13]=t1,tmp=(C_word)a,a+=14,tmp);
C_trace(C_text("optimizer.scm:322: test"));
t9=((C_word*)((C_word*)t2)[4])[1];
f_4723(t9,t8,t7,lf[96]);}
else{
t6=C_eqp(t1,lf[97]);
if(C_truep(t6)){
C_trace(C_text("optimizer.scm:355: walk-generic"));
t7=((C_word*)((C_word*)t2)[13])[1];
f_6907(t7,((C_word*)t2)[3],((C_word*)t2)[14],t1,((C_word*)t2)[5],((C_word*)t2)[11],((C_word*)t2)[12],C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}
else{
t7=C_eqp(t1,lf[25]);
if(C_truep(t7)){
t8=C_i_car(((C_word*)t2)[11]);
t9=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5688,a[2]=((C_word*)t2)[11],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[15],a[5]=((C_word*)t2)[12],a[6]=((C_word*)t2)[10],a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[13],a[10]=((C_word*)t2)[14],a[11]=t1,a[12]=((C_word*)t2)[5],a[13]=t8,a[14]=((C_word*)t2)[16],a[15]=((C_word*)t2)[4],a[16]=((C_word*)t2)[17],a[17]=((C_word*)t2)[18],a[18]=((C_word*)t2)[19],a[19]=((C_word*)t2)[20],tmp=(C_word)a,a+=20,tmp);
C_trace(C_text("optimizer.scm:359: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t9;
av2[2]=t8;
tp(3,av2);}}
else{
t8=C_eqp(t1,lf[26]);
if(C_truep(t8)){
t9=C_i_car(((C_word*)t2)[5]);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6659,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t9,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[5],a[8]=((C_word*)t2)[10],a[9]=((C_word*)t2)[11],a[10]=((C_word*)t2)[12],a[11]=((C_word*)t2)[15],a[12]=((C_word*)t2)[21],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("optimizer.scm:546: test"));
t11=((C_word*)((C_word*)t2)[4])[1];
f_4723(t11,t10,t9,lf[87]);}
else{
t9=C_eqp(t1,lf[67]);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6842,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=t1,a[6]=((C_word*)t2)[13],a[7]=((C_word*)t2)[14],a[8]=((C_word*)t2)[11],a[9]=((C_word*)t2)[12],a[10]=((C_word*)t2)[7],a[11]=((C_word*)t2)[4],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t9)){
t11=t10;
f_6842(t11,t9);}
else{
t11=C_eqp(t1,lf[64]);
if(C_truep(t11)){
t12=t10;
f_6842(t12,t11);}
else{
t12=C_eqp(t1,lf[69]);
t13=t10;
f_6842(t13,(C_truep(t12)?t12:C_eqp(t1,lf[71])));}}}}}}}}}

/* k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5257(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5257,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5263,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:284: test"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_4723(t4,t3,((C_word*)t0)[5],lf[84]);}

/* k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5263(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_5263,c,av);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(
C_trace("optimizer.scm:285: touch"),
  f_4749(((C_word*)((C_word*)t2)[2])[1])
);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5269,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:286: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t4;
av2[2]=lf[31];
av2[3]=lf[78];
av2[4]=((C_word*)t2)[5];
tp(5,av2);}}
else{
t3=C_i_car(((C_word*)t2)[6]);
t4=C_eqp(((C_word*)t2)[5],t3);
if(C_truep(C_i_not(t4))){
t5=(
C_trace("optimizer.scm:289: touch"),
  f_4749(((C_word*)((C_word*)t2)[2])[1])
);
t6=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t2)[7])[1],C_fix(1));
t7=C_mutate(((C_word *)((C_word*)t2)[7])+1,t6);
C_trace(C_text("optimizer.scm:291: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}
else{
t5=C_i_assq(((C_word*)t2)[5],((C_word*)t2)[8]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5307,a[2]=((C_word*)t2)[5],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:284: g859"));
t7=t6;
f_5307(t7,((C_word*)t2)[3],t5);}
else{
C_trace(C_text("optimizer.scm:300: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}}}}

/* k5267 in k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5269,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5280,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5284,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:287: test"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4723(t4,t3,((C_word*)t0)[4],lf[77]);}

/* k5278 in k5267 in k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5280,c,av);}
C_trace(C_text("optimizer.scm:287: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_car(t1);
tp(3,av2);}}

/* k5282 in k5267 in k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5284,c,av);}
C_trace(C_text("optimizer.scm:287: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* g859 in k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_5307,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5317,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5337,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:296: chicken.compiler.support#variable-mark"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[82]);
C_word av2[4];
av2[0]=*((C_word*)lf[82]+1);
av2[1]=t5;
av2[2]=t3;
av2[3]=lf[83];
tp(4,av2);}}
else{
t5=t4;
f_5317(t5,C_SCHEME_FALSE);}}

/* k5315 in g859 in k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,5)))){
C_save_and_reclaim_args((void *)trf_5317,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:297: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[6];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[80];
av2[4]=((C_word*)t0)[4];
av2[5]=((C_word*)t0)[3];
tp(6,av2);}}
else{
C_trace(C_text("optimizer.scm:299: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}}

/* k5318 in k5315 in g859 in k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5320(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5320,c,av);}
C_trace(C_text("optimizer.scm:298: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k5335 in g859 in k5261 in k5255 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5337(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5337,c,av);}
t2=((C_word*)t0)[2];
f_5317(t2,C_i_not(C_eqp(lf[81],t1)));}

/* k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_5370,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5373,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_5373(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5490,a[2]=t2,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:305: test"));
t4=((C_word*)((C_word*)t0)[11])[1];
f_4723(t4,t3,((C_word*)t0)[10],lf[87]);}}

/* k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5373(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,4)))){
C_save_and_reclaim_args((void *)trf_5373,2,t0,t1);}
a=C_alloc(29);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(
C_trace("optimizer.scm:307: touch"),
  f_4749(((C_word*)((C_word*)t2)[2])[1])
);
t4=((C_word*)((C_word*)t2)[3])[1];
t5=C_mutate(((C_word *)((C_word*)t2)[3])+1,C_s_a_i_plus(&a,2,t4,C_fix(1)));
C_trace(C_text("optimizer.scm:309: walk"));
t6=((C_word*)((C_word*)t2)[4])[1];
f_5080(t6,((C_word*)t2)[5],C_i_cadr(((C_word*)t2)[6]),((C_word*)t2)[7],((C_word*)t2)[8]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5388,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[7],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[9],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5443,a[2]=((C_word*)t2)[10],a[3]=t3,a[4]=((C_word*)t2)[8],a[5]=((C_word*)t2)[6],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5480,a[2]=((C_word*)t2)[11],a[3]=t4,a[4]=((C_word*)t2)[6],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:311: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=C_i_car(((C_word*)t2)[6]);
tp(3,av2);}}}

/* k5386 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5388(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_5388,2,t0,t1);}
a=C_alloc(22);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=C_i_check_list_2(((C_word*)t0)[4],lf[51]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5408,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_5408(t12,t8,((C_word*)t0)[4]);}

/* g890 in k5386 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5396(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5396,3,t0,t1,t2);}
C_trace(C_text("optimizer.scm:317: g907"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_5080(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5404 in k5386 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5406,c,av);}
C_trace(C_text("optimizer.scm:317: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* map-loop884 in k5386 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5408(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_5408,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:317: g890"));
t4=((C_word*)t0)[4];
f_5396(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5431 in map-loop884 in k5386 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5433(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5433,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_5408(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5441 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5443,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:314: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[5]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];
f_5388(t2,((C_word*)t0)[4]);}}

/* k5452 in k5441 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_5454,c,av);}
a=C_alloc(6);
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];
f_5388(t4,C_a_i_cons(&a,2,t3,((C_word*)t0)[4]));}

/* k5470 in k5478 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5472(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_5472,c,av);}
C_trace(C_text("optimizer.scm:312: test"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4723(t2,((C_word*)t0)[3],C_i_car(t1),lf[85]);}

/* k5478 in k5371 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5480(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_5480,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:312: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=C_i_car(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5443(2,av2);}}}

/* k5488 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_5490,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5497,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:306: test"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4723(t3,t2,((C_word*)t0)[4],lf[86]);}
else{
t2=((C_word*)t0)[2];
f_5373(t2,C_SCHEME_FALSE);}}

/* k5495 in k5488 in k5368 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5497(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5497,c,av);}
t2=((C_word*)t0)[2];
f_5373(t2,C_i_not(t1));}

/* k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,5)))){
C_save_and_reclaim((void *)f_5515,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:323: ##sys#decompose-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
av2[3]=t2;
tp(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5607,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("optimizer.scm:339: test"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4723(t3,t2,((C_word*)t0)[6],lf[92]);}}

/* a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5520(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_5520,c,av);}
a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t3,a[9]=t4,a[10]=((C_word*)t0)[2],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:326: ##sys#call-with-values"));{
C_word *av2=av;
av2[0]=0;
av2[1]=t1;
av2[2]=t5;
av2[3]=t6;
C_call_with_values(4,av2);}}

/* a5525 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5526(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_5526,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3076,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3076(t6,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);}

/* a5531 in a5525 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_5532,3,t0,t1,t2);}
C_trace(C_text("optimizer.scm:326: test"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_4723(t3,t1,t2,lf[89]);}

/* a5537 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5538(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_5538,c,av);}
a=C_alloc(12);
t4=(
C_trace("optimizer.scm:327: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5545,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:328: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t5;
av2[2]=lf[31];
av2[3]=lf[93];
av2[4]=t2;
tp(5,av2);}}

/* k5543 in a5537 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5545(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,3)))){
C_save_and_reclaim((void *)f_5545,c,av);}
a=C_alloc(16);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5580,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5587,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[10])){
C_trace(C_text("optimizer.scm:332: test"));
t6=((C_word*)((C_word*)t0)[11])[1];
f_4723(t6,t5,((C_word*)t0)[5],lf[92]);}
else{
t6=t5;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_5587(2,av2);}}}

/* k5558 in k5578 in k5543 in a5537 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5560(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5560,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:329: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[24];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
tp(5,av2);}}

/* k5578 in k5543 in a5537 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5580(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5580,c,av);}
a=C_alloc(19);
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[6]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
C_trace(C_text("optimizer.scm:338: walk"));
t7=((C_word*)((C_word*)t0)[9])[1];
f_5080(t7,t4,t5,t6,C_SCHEME_END_OF_LIST);}

/* k5585 in k5543 in a5537 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_5587,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:333: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[91];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
C_trace(C_text("optimizer.scm:336: chicken.compiler.support#build-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}

/* k5588 in k5585 in k5543 in a5537 in a5519 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5590(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_5590,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
C_trace(C_text("optimizer.scm:335: chicken.compiler.support#build-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k5605 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,8)))){
C_save_and_reclaim((void *)f_5607,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:340: ##sys#decompose-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=((C_word*)t0)[8];
av2[2]=((C_word*)t0)[9];
av2[3]=t2;
tp(4,av2);}}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
C_trace(C_text("optimizer.scm:352: walk-generic"));
t3=((C_word*)((C_word*)t0)[10])[1];
f_6907(t3,((C_word*)t0)[8],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[3],((C_word*)t0)[4],t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}}

/* a5611 in k5605 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5612(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,4)))){
C_save_and_reclaim((void *)f_5612,c,av);}
a=C_alloc(10);
t5=(
C_trace("optimizer.scm:343: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:344: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2=av;
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t6;
av2[2]=lf[31];
av2[3]=lf[95];
av2[4]=t4;
tp(5,av2);}}

/* k5617 in a5611 in k5605 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5619(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,4)))){
C_save_and_reclaim((void *)f_5619,c,av);}
a=C_alloc(39);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5654,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
t5=C_s_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1));
C_trace(C_text("optimizer.scm:349: chicken.compiler.support#build-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[9];
av2[3]=t5;
av2[4]=C_SCHEME_FALSE;
tp(5,av2);}}

/* k5632 in k5652 in k5617 in a5611 in k5605 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5634,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:345: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[24];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
tp(5,av2);}}

/* k5652 in k5617 in a5611 in k5605 in k5513 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5654(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5654,c,av);}
a=C_alloc(19);
t2=C_i_cadddr(((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,((C_word*)t0)[3],((C_word*)t0)[4],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5634,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[6]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)t0)[8]);
C_trace(C_text("optimizer.scm:351: walk"));
t7=((C_word*)((C_word*)t0)[9])[1];
f_5080(t7,t4,t5,t6,C_SCHEME_END_OF_LIST);}

/* k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5688(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,8)))){
C_save_and_reclaim((void *)f_5688,c,av);}
a=C_alloc(30);
t2=C_eqp(t1,lf[18]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=C_SCHEME_UNDEFINED,a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
C_trace(C_text("optimizer.scm:363: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[13];
tp(3,av2);}}
else{
t3=C_eqp(t1,lf[24]);
if(C_truep(t3)){
if(C_truep(C_i_car(((C_word*)t0)[12]))){
C_trace(C_text("optimizer.scm:537: walk-generic"));
t4=((C_word*)((C_word*)t0)[9])[1];
f_6907(t4,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[8],C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6580,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t5=C_i_cdr(((C_word*)t0)[12]);
t6=C_a_i_cons(&a,2,C_SCHEME_TRUE,t5);
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6592,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6599,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6601,a[2]=t9,a[3]=t14,a[4]=t11,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_6601(t16,t12,((C_word*)t0)[2]);}}
else{
C_trace(C_text("optimizer.scm:542: walk-generic"));
t4=((C_word*)((C_word*)t0)[9])[1];
f_6907(t4,((C_word*)t0)[7],((C_word*)t0)[10],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[8],C_SCHEME_TRUE);}}}

/* k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5700(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_5700,c,av);}
a=C_alloc(27);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_5703,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=t1,a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],a[14]=((C_word*)t2)[13],a[15]=((C_word*)t2)[14],a[16]=((C_word*)t2)[15],a[17]=((C_word*)t2)[16],a[18]=((C_word*)t2)[17],a[19]=((C_word*)t2)[18],a[20]=((C_word*)t2)[19],a[21]=((C_word*)t2)[20],tmp=(C_word)a,a+=22,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6558,a[2]=t3,a[3]=((C_word*)t2)[16],a[4]=((C_word*)t2)[13],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:365: test"));
t5=((C_word*)((C_word*)t2)[16])[1];
f_4723(t5,t4,((C_word*)t2)[13],lf[127]);}

/* k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(30,c,3)))){
C_save_and_reclaim((void *)f_5703,c,av);}
a=C_alloc(30);
t2=C_u_i_cdr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_5710,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[2],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],tmp=(C_word)a,a+=24,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6517,a[2]=t3,a[3]=((C_word*)t0)[17],a[4]=t1,a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:369: test"));
t5=((C_word*)((C_word*)t0)[17])[1];
f_4723(t5,t4,((C_word*)t0)[14],lf[87]);}

/* k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_5710(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_5710,2,t0,t1);}
a=C_alloc(17);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
C_trace(C_text("optimizer.scm:374: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5789,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:393: chicken.compiler.support#variable-mark"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[82]);
C_word av2[4];
av2[0]=*((C_word*)lf[82]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[16];
av2[3]=lf[128];
tp(4,av2);}}}

/* k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_5713,c,av);}
a=C_alloc(17);
t2=C_i_caddr(t1);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
C_trace(C_text("optimizer.scm:376: chicken.compiler.support#check-signature"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[104]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[104]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[16];
av2[3]=((C_word*)t0)[8];
av2[4]=t2;
tp(5,av2);}}

/* k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_5722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5722,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:377: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[101];
av2[4]=((C_word*)t0)[11];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5780,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[15],a[7]=((C_word*)t0)[16],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:388: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[102];
av2[3]=lf[103];
av2[4]=((C_word*)t0)[11];
tp(5,av2);}}}

/* k5723 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_5725(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,3)))){
C_save_and_reclaim((void *)f_5725,c,av);}
a=C_alloc(19);
t2=(
C_trace("optimizer.scm:378: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5729,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(((C_word*)t0)[4],lf[17]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5756,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_5756(t9,t5,((C_word*)t0)[4]);}

/* g972 in k5723 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void f_5729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_5729,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[75]);
C_trace(C_text("optimizer.scm:379: g987"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[75]);
C_word av2[6];
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[98];
av2[5]=C_SCHEME_TRUE;
tp(6,av2);}}

/* k5737 in k5723 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_5739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_5739,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5754,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:383: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
tp(3,av2);}}

/* k5744 in k5737 in k5723 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_5746(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5746,c,av);}
C_trace(C_text("optimizer.scm:381: walk"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_5080(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5752 in k5737 in k5723 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_5754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5754,c,av);}
C_trace(C_text("optimizer.scm:382: chicken.compiler.support#inline-lambda-bindings"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[99]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[99]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_i_car(t1);
av2[5]=C_SCHEME_FALSE;
av2[6]=((C_word*)t0)[5];
av2[7]=*((C_word*)lf[100]+1);
tp(8,av2);}}

/* for-each-loop971 in k5723 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void f_5756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5756,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5766,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:379: g972"));
t4=((C_word*)t0)[3];
f_5729(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5764 in for-each-loop971 in k5723 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_5766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5766,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5756(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k5778 in k5720 in k5711 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_5780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5780,c,av);}
C_trace(C_text("optimizer.scm:392: walk-generic"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_6907(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}

/* k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_5789(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5789,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5792,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6510,a[2]=t3,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[8],a[5]=((C_word*)t2)[19],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:394: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=C_i_car(((C_word*)t2)[8]);
tp(3,av2);}}
else{
t4=t3;
f_5792(t4,C_SCHEME_FALSE);}}

/* k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void f_5792(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_5792,2,t0,t1);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5795,a[2]=((C_word*)t2)[8],a[3]=((C_word*)t2)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:406: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[5];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[31];
av2[3]=lf[105];
av2[4]=((C_word*)t2)[10];
tp(5,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5820,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t2)[9])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6403,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:415: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}
else{
t4=t3;
f_5820(t4,C_SCHEME_FALSE);}}}

/* k5793 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_5795(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5795,c,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5814,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:413: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k5812 in k5793 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_5814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5814,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:410: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void f_5820(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_5820,2,t0,t1);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5823,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:417: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6348,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[6],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[15],a[7]=((C_word*)t2)[9],a[8]=((C_word*)t2)[14],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t2)[9])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6396,a[2]=t3,a[3]=((C_word*)t2)[9],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:523: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word av2[3];
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}
else{
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6348(2,av2);}}}}

/* k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_5823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_5823,c,av);}
a=C_alloc(25);
t2=((C_word*)t0)[2];
t3=C_i_caddr(t1);
t4=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_5831,a[2]=t1,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[11],a[6]=((C_word*)t2)[12],a[7]=((C_word*)t2)[13],a[8]=((C_word*)t2)[14],a[9]=((C_word*)t2)[15],a[10]=((C_word*)t2)[7],a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[2],a[13]=((C_word*)t2)[5],a[14]=t3,a[15]=((C_word*)t2)[8],a[16]=((C_word*)t2)[9],a[17]=((C_word*)t2)[16],a[18]=((C_word*)t2)[17],a[19]=((C_word*)t2)[18],a[20]=((C_word*)t2)[19],a[21]=((C_word*)t2)[20],a[22]=((C_word*)t2)[21],a[23]=((C_word*)t2)[22],a[24]=((C_word*)t2)[23],tmp=(C_word)a,a+=25,tmp);
C_trace(C_text("optimizer.scm:419: ##sys#decompose-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[94]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[94]+1);
av2[1]=((C_word*)t2)[6];
av2[2]=t3;
av2[3]=t4;
tp(4,av2);}}

/* a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_5831(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_5831,c,av);}
a=C_alloc(32);
t5=C_i_car(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_5838,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t5,a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=t1,a[18]=((C_word*)t0)[2],a[19]=((C_word*)t0)[17],a[20]=t3,a[21]=((C_word*)t0)[18],a[22]=((C_word*)t0)[19],a[23]=((C_word*)t0)[20],a[24]=t2,a[25]=((C_word*)t0)[21],a[26]=((C_word*)t0)[22],a[27]=((C_word*)t0)[23],a[28]=((C_word*)t0)[24],tmp=(C_word)a,a+=29,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6342,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:423: chicken.compiler.support#variable-mark"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[82]);
C_word *av2=av;
av2[0]=*((C_word*)lf[82]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[17];
av2[3]=lf[123];
tp(4,av2);}}

/* k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_5838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_5838,c,av);}
a=C_alloc(39);
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_5844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=t1,a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[26])){
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6279,a[2]=t1,a[3]=((C_word*)t0)[18],a[4]=((C_word*)t0)[27],a[5]=t2,a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[28],a[10]=((C_word*)t0)[19],a[11]=((C_word*)t0)[23],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:425: test"));
t4=((C_word*)((C_word*)t0)[23])[1];
f_4723(t4,t3,((C_word*)t0)[19],lf[121]);}
else{
t3=t2;
f_5844(t3,C_SCHEME_FALSE);}}

/* k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void f_5844(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,4)))){
C_save_and_reclaim_args((void *)trf_5844,2,t0,t1);}
a=C_alloc(23);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_5850,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
C_trace(C_text("optimizer.scm:437: chicken.compiler.support#check-signature"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[104]);
C_word av2[5];
av2[0]=*((C_word*)lf[104]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[20];
av2[3]=((C_word*)t0)[15];
av2[4]=((C_word*)t0)[14];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[22],a[15]=((C_word*)t0)[23],a[16]=((C_word*)t0)[2],a[17]=((C_word*)t0)[10],a[18]=((C_word*)t0)[24],a[19]=((C_word*)t0)[25],a[20]=((C_word*)t0)[26],a[21]=((C_word*)t0)[14],a[22]=((C_word*)t0)[11],tmp=(C_word)a,a+=23,tmp);
C_trace(C_text("optimizer.scm:467: test"));
t3=((C_word*)((C_word*)t0)[24])[1];
f_4723(t3,t2,((C_word*)t0)[11],lf[96]);}}

/* k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_5850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,6)))){
C_save_and_reclaim((void *)f_5850,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(C_truep(((C_word*)t0)[18])?lf[109]:lf[110]);
C_trace(C_text("optimizer.scm:438: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[102];
av2[3]=t3;
av2[4]=((C_word*)t0)[10];
av2[5]=((C_word*)t0)[11];
av2[6]=C_i_cadddr(((C_word*)t0)[19]);
tp(7,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5945,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:462: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[102];
av2[3]=lf[111];
av2[4]=((C_word*)t0)[10];
tp(5,av2);}}}

/* k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_5853(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_5853,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5854,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_check_list_2(((C_word*)t0)[3],lf[17]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5864,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5913,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_5913(t8,t4,((C_word*)t0)[3]);}

/* g1065 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void f_5854(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,5)))){
C_save_and_reclaim_args((void *)trf_5854,3,t0,t1,t2);}
t3=C_fast_retrieve(lf[75]);
C_trace(C_text("optimizer.scm:443: g1080"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[75]);
C_word av2[6];
av2[0]=*((C_word*)lf[75]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[98];
av2[5]=C_SCHEME_TRUE;
tp(6,av2);}}

/* k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void C_ccall f_5864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5864,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5867,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:445: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[31];
av2[3]=lf[108];
av2[4]=((C_word*)t2)[10];
tp(5,av2);}}

/* k5865 in k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void C_ccall f_5867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_5867,c,av);}
a=C_alloc(17);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_5872,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[9],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[14],a[14]=((C_word*)t2)[15],a[15]=((C_word*)t2)[2],a[16]=((C_word*)t2)[16],tmp=(C_word)a,a+=17,tmp);
C_trace(C_text("optimizer.scm:446: scheme#call-with-current-continuation"));
t4=*((C_word*)lf[107]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[17];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* a5871 in k5865 in k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in ... */
static void C_ccall f_5872(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_5872,c,av);}
a=C_alloc(26);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5875,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=t1,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5911,a[2]=t4,a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:455: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2=av;
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[16];
tp(3,av2);}}

/* cfk in a5871 in k5865 in k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void C_ccall f_5875(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_5875,c,av);}
a=C_alloc(11);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5879,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:449: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[102];
av2[3]=lf[106];
av2[4]=((C_word*)t0)[10];
av2[5]=t2;
tp(6,av2);}}

/* k5877 in cfk in a5871 in k5865 in k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in ... */
static void C_ccall f_5879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,8)))){
C_save_and_reclaim((void *)f_5879,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:453: walk-generic"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_6907(t3,t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_TRUE);}

/* k5884 in k5877 in cfk in a5871 in k5865 in k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in ... */
static void C_ccall f_5886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5886,c,av);}
C_trace(C_text("optimizer.scm:453: return"));
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

/* k5887 in a5871 in k5865 in k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void C_ccall f_5889(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5889,c,av);}
a=C_alloc(6);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_retrieve2(lf[48],C_text("chicken.compiler.optimizer#inline-history"));
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t5=C_a_i_cons(&a,2,t4,C_retrieve2(lf[48],C_text("chicken.compiler.optimizer#inline-history")));
t6=C_mutate(&lf[48] /* (set! chicken.compiler.optimizer#inline-history ...) */,t5);
t7=(
C_trace("optimizer.scm:459: touch"),
  f_4749(((C_word*)((C_word*)t0)[4])[1])
);
C_trace(C_text("optimizer.scm:460: walk"));
t8=((C_word*)((C_word*)t0)[5])[1];
f_5080(t8,((C_word*)t0)[6],t1,((C_word*)t0)[2],((C_word*)t0)[7]);}

/* k5909 in a5871 in k5865 in k5862 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void C_ccall f_5911(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,7)))){
C_save_and_reclaim((void *)f_5911,c,av);}
C_trace(C_text("optimizer.scm:454: chicken.compiler.support#inline-lambda-bindings"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[99]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[99]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=C_i_car(t1);
av2[5]=C_SCHEME_TRUE;
av2[6]=((C_word*)t0)[5];
av2[7]=((C_word*)t0)[6];
tp(8,av2);}}

/* for-each-loop1064 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void f_5913(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_5913,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5923,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:443: g1065"));
t4=((C_word*)t0)[3];
f_5854(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5921 in for-each-loop1064 in k5851 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void C_ccall f_5923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5923,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_5913(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k5943 in k5848 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_5945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5945,c,av);}
C_trace(C_text("optimizer.scm:466: walk-generic"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_6907(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}

/* k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_5954(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,8)))){
C_save_and_reclaim((void *)f_5954,c,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t2,((C_word*)t0)[3]))){
C_trace(C_text("optimizer.scm:469: walk-generic"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_6907(t3,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5968,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[15],a[9]=t4,a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[18],tmp=(C_word)a,a+=13,tmp));
t6=((C_word*)t4)[1];
f_5968(t6,((C_word*)t0)[5],((C_word*)t0)[19],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6266,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[21],tmp=(C_word)a,a+=17,tmp);
C_trace(C_text("optimizer.scm:496: test"));
t3=((C_word*)((C_word*)t0)[18])[1];
f_4723(t3,t2,((C_word*)t0)[22],lf[92]);}}

/* loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void f_5968(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,0,3)))){
C_save_and_reclaim_args((void *)trf_5968,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(24);
t6=C_i_nullp(t2);
t7=(C_truep(t6)?t6:C_i_zerop(t3));
if(C_truep(t7)){
t8=(
C_trace("optimizer.scm:472: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5985,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6039,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=t11,a[8]=t13,a[9]=t12,tmp=(C_word)a,a+=10,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6043,a[2]=t14,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:477: scheme#reverse"));
t16=*((C_word*)lf[4]+1);{
C_word av2[3];
av2[0]=t16;
av2[1]=t15;
av2[2]=t5;
((C_proc)(void*)(*((C_word*)t16+1)))(3,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6049,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[9],a[7]=t4,a[8]=t5,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
C_trace(C_text("optimizer.scm:480: test"));
t9=((C_word*)((C_word*)t0)[12])[1];
f_4723(t9,t8,C_i_car(t2),lf[89]);}}

/* g1120 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void f_5985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_5985,3,t0,t1,t2);}
C_trace(C_text("optimizer.scm:474: g1137"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_5080(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k5993 in k6037 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void C_ccall f_5995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5995,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:478: invalidate-gae!"));
f_4753(t2,((C_word*)t0)[5]);}

/* k5996 in k5993 in k6037 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in ... */
static void C_ccall f_5998(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5998,c,av);}
C_trace(C_text("optimizer.scm:479: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* map-loop1114 in k6037 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void f_6003(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6003,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6028,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:474: g1120"));
t4=((C_word*)t0)[4];
f_5985(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6026 in map-loop1114 in k6037 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in ... */
static void C_ccall f_6028(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6028,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6003(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6037 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void C_ccall f_6039(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_6039,c,av);}
a=C_alloc(17);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5995,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6003,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6003(t7,t3,t2);}

/* k6041 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void C_ccall f_6043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6043,c,av);}
C_trace(C_text("optimizer.scm:477: scheme#append"));
t2=*((C_word*)lf[21]+1);{
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

/* k6047 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void C_ccall f_6049(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,5)))){
C_save_and_reclaim((void *)f_6049,c,av);}
a=C_alloc(32);
if(C_truep(t1)){
t2=(
C_trace("optimizer.scm:481: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6055,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:482: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[31];
av2[3]=lf[115];
av2[4]=C_u_i_car(((C_word*)t0)[4]);
av2[5]=((C_word*)t0)[13];
tp(6,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[4]);
t3=C_s_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
t4=C_i_cdr(((C_word*)t0)[7]);
t5=C_u_i_car(((C_word*)t0)[7]);
t6=C_a_i_cons(&a,2,t5,((C_word*)t0)[8]);
C_trace(C_text("optimizer.scm:492: loop"));
t7=((C_word*)((C_word*)t0)[6])[1];
f_5968(t7,((C_word*)t0)[3],t2,t3,t4,t6);}}

/* k6053 in k6047 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void C_ccall f_6055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6055,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:485: chicken.compiler.support#expression-has-side-effects?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[114]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[6]);
av2[3]=((C_word*)t0)[11];
tp(4,av2);}}

/* k6059 in k6053 in k6047 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in ... */
static void C_ccall f_6061(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,5)))){
C_save_and_reclaim((void *)f_6061,c,av);}
a=C_alloc(29);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6092,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:488: chicken.base#gensym"));
t3=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[113];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t2=C_u_i_cdr(((C_word*)t0)[3]);
t3=C_s_a_i_minus(&a,2,((C_word*)t0)[4],C_fix(1));
C_trace(C_text("optimizer.scm:491: loop"));
t4=((C_word*)((C_word*)t0)[5])[1];
f_5968(t4,((C_word*)t0)[2],t2,t3,C_u_i_cdr(((C_word*)t0)[6]),((C_word*)t0)[7]);}}

/* k6074 in k6090 in k6059 in k6053 in k6047 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in ... */
static void C_ccall f_6076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(34,c,5)))){
C_save_and_reclaim((void *)f_6076,c,av);}
a=C_alloc(34);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6080,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_u_i_cdr(((C_word*)t0)[4]);
t4=C_s_a_i_minus(&a,2,((C_word*)t0)[5],C_fix(1));
C_trace(C_text("optimizer.scm:490: loop"));
t5=((C_word*)((C_word*)t0)[6])[1];
f_5968(t5,t2,t3,t4,C_u_i_cdr(((C_word*)t0)[7]),((C_word*)t0)[8]);}

/* k6078 in k6074 in k6090 in k6059 in k6053 in k6047 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in ... */
static void C_ccall f_6080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6080,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:486: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k6090 in k6059 in k6053 in k6047 in loop in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void C_ccall f_6092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_6092,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_a_i_list1(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6076,a[2]=((C_word*)t2)[2],a[3]=t3,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],a[8]=((C_word*)t2)[7],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:489: walk"));
t5=((C_word*)((C_word*)t2)[8])[1];
f_5080(t5,t4,C_u_i_car(((C_word*)t2)[6]),((C_word*)t2)[9],((C_word*)t2)[10]);}

/* k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void C_ccall f_6142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,8)))){
C_save_and_reclaim((void *)f_6142,c,av);}
a=C_alloc(12);
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_i_lessp(t2,t1))){
C_trace(C_text("optimizer.scm:500: walk-generic"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6907(t3,((C_word*)t0)[4],t1,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6154,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:502: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[31];
av2[3]=lf[118];
av2[4]=((C_word*)t0)[14];
av2[5]=t1;
tp(6,av2);}}}

/* k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void C_ccall f_6154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6154,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6165,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:503: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[11];
av2[2]=t2;
av2[3]=t3;
C_call_with_values(4,av2);}}

/* a6158 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in ... */
static void C_ccall f_6159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6159,c,av);}
C_trace(C_text("optimizer.scm:503: split-at"));
f_3230(t1,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in ... */
static void C_ccall f_6165(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,4)))){
C_save_and_reclaim((void *)f_6165,c,av);}
a=C_alloc(39);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6169,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6229,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word*)t0)[8],a[5]=t7,a[6]=t9,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6237,a[2]=t10,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace(C_text("optimizer.scm:513: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2=av;
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t11;
av2[2]=C_SCHEME_END_OF_LIST;
tp(3,av2);}}
else{
t12=C_i_length(t3);
t13=C_a_i_fixnum_times(&a,2,C_fix(3),t12);
t14=C_a_i_list2(&a,2,lf[116],t13);
C_trace(C_text("optimizer.scm:514: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t11;
av2[2]=lf[117];
av2[3]=t14;
av2[4]=t3;
tp(5,av2);}}}

/* k6167 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void C_ccall f_6169(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6169,c,av);}
a=C_alloc(7);
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6176,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:519: invalidate-gae!"));
f_4753(t4,((C_word*)t0)[5]);}

/* k6174 in k6167 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in ... */
static void C_ccall f_6176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6176,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g1170 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void f_6181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6181,3,t0,t1,t2);}
C_trace(C_text("optimizer.scm:507: g1187"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_5080(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6189 in k6227 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in ... */
static void C_ccall f_6191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6191,c,av);}
C_trace(C_text("optimizer.scm:504: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* map-loop1164 in k6227 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in ... */
static void f_6193(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6193,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:507: g1170"));
t4=((C_word*)t0)[4];
f_6181(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6216 in map-loop1164 in k6227 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in ... */
static void C_ccall f_6218(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6218,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6193(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6227 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void C_ccall f_6229(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_6229,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6191,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[5],a[3]=t5,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6193(t7,t3,t2);}

/* k6235 in a6164 in k6152 in k6140 in k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in ... */
static void C_ccall f_6237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6237,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:509: scheme#append"));
t3=*((C_word*)lf[21]+1);{
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

/* k6264 in k5952 in k5842 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_6266(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,8)))){
C_save_and_reclaim((void *)f_6266,c,av);}
a=C_alloc(15);
t2=(C_truep(t1)?C_i_not(C_i_memq(((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1])):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6142,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[3],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("optimizer.scm:498: chicken.compiler.support#llist-length"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[119]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[119]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[16];
tp(3,av2);}}
else{
C_trace(C_text("optimizer.scm:521: walk-generic"));
t3=((C_word*)((C_word*)t0)[5])[1];
f_6907(t3,((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[7],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],C_SCHEME_TRUE);}}

/* k6277 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_6279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6279,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6338,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:426: test"));
t3=((C_word*)((C_word*)t0)[11])[1];
f_4723(t3,t2,((C_word*)t0)[7],lf[98]);}
else{
t2=((C_word*)t0)[5];
f_5844(t2,C_SCHEME_FALSE);}}

/* k6295 in k6332 in k6336 in k6277 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in ... */
static void C_ccall f_6297(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_6297,c,av);}
a=C_alloc(16);
t2=C_eqp(t1,lf[81]);
t3=(C_truep(t2)?C_SCHEME_FALSE:(C_truep(((C_word*)t0)[2])?((C_word*)t0)[2]:C_i_lessp(C_i_cadddr(((C_word*)t0)[3]),((C_word*)t0)[4])));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6303,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(((C_word*)t0)[8]);
t6=C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7096,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7096(t10,t4,C_retrieve2(lf[48],C_text("chicken.compiler.optimizer#inline-history")),C_fix(0));}
else{
t4=((C_word*)t0)[5];
f_5844(t4,C_SCHEME_FALSE);}}

/* k6301 in k6295 in k6332 in k6336 in k6277 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void C_ccall f_6303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_6303,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_5844(t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:434: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[102];
av2[3]=lf[120];
av2[4]=((C_word*)t0)[3];
av2[5]=((C_word*)t0)[4];
av2[6]=C_u_i_car(((C_word*)t0)[5]);
tp(7,av2);}}}

/* k6307 in k6301 in k6295 in k6332 in k6336 in k6277 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in ... */
static void C_ccall f_6309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6309,c,av);}
t2=((C_word*)t0)[2];
f_5844(t2,C_SCHEME_FALSE);}

/* k6332 in k6336 in k6277 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_6334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6334,c,av);}
a=C_alloc(10);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:428: chicken.compiler.support#variable-mark"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[82]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[82]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[10];
av2[3]=lf[83];
tp(4,av2);}}
else{
t2=((C_word*)t0)[5];
f_5844(t2,C_SCHEME_FALSE);}}

/* k6336 in k6277 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_6338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_6338,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
if(C_truep(C_i_not(t1))){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6334,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("optimizer.scm:427: test"));
t4=((C_word*)((C_word*)t2)[11])[1];
f_4723(t4,t3,((C_word*)t2)[7],lf[92]);}
else{
t3=((C_word*)t2)[5];
f_5844(t3,C_SCHEME_FALSE);}}

/* k6340 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_6342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6342,c,av);}
C_trace(C_text("optimizer.scm:423: chicken.compiler.support#node?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[122]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[122]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
tp(3,av2);}}

/* k6346 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_6348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,8)))){
C_save_and_reclaim((void *)f_6348,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6372,a[2]=t2,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:527: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}
else{
C_trace(C_text("optimizer.scm:534: walk-generic"));
t2=((C_word*)((C_word*)t0)[10])[1];
f_6907(t2,((C_word*)t0)[3],((C_word*)t0)[11],((C_word*)t0)[12],((C_word*)t0)[8],((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5],C_SCHEME_TRUE);}}

/* k6349 in k6346 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_6351(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6351,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_u_i_cdr(((C_word*)t0)[6]);
t4=C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
C_trace(C_text("optimizer.scm:529: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t2;
av2[2]=lf[25];
av2[3]=((C_word*)t0)[8];
av2[4]=t4;
tp(5,av2);}}

/* k6356 in k6349 in k6346 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6358,c,av);}
C_trace(C_text("optimizer.scm:528: walk"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_5080(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k6370 in k6346 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_6372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_6372,c,av);}
C_trace(C_text("optimizer.scm:526: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[102];
av2[3]=lf[124];
av2[4]=((C_word*)t0)[3];
av2[5]=C_i_car(t1);
tp(6,av2);}}

/* k6390 in k6394 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_6392(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6392,c,av);}
C_trace(C_text("optimizer.scm:524: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[125]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_car(t1);
tp(3,av2);}}

/* k6394 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_6396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6396,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6392,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:524: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6348(2,av2);}}}

/* k6401 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_6403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6403,c,av);}
t2=((C_word*)t0)[2];
f_5820(t2,C_eqp(lf[24],t1));}

/* k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_6418(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6418,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6490,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:398: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_5792(t3,C_SCHEME_FALSE);}}

/* k6434 in k6484 in k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_6436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6436,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6439,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t4=t3;
f_6439(t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6476,a[2]=t3,a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:401: test"));
t5=((C_word*)((C_word*)t2)[5])[1];
f_4723(t5,t4,C_u_i_car(((C_word*)t2)[6]),lf[126]);}}

/* k6437 in k6434 in k6484 in k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in ... */
static void f_6439(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6439,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6451,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:404: any"));
f_3473(t2,t3,C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=((C_word*)t0)[2];
f_5792(t2,C_SCHEME_FALSE);}}

/* k6447 in k6437 in k6434 in k6484 in k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_6449(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6449,c,av);}
t2=((C_word*)t0)[2];
f_5792(t2,C_i_not(t1));}

/* a6450 in k6437 in k6434 in k6484 in k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_6451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6451,c,av);}
t3=C_fast_retrieve(lf[114]);
C_trace(C_text("optimizer.scm:404: g1024"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[114]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
tp(4,av2);}}

/* k6468 in k6474 in k6434 in k6484 in k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_6470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6470,c,av);}
t2=((C_word*)t0)[2];
f_6439(t2,C_i_not(t1));}

/* k6474 in k6434 in k6484 in k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_6476(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6476,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6470,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:402: test"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4723(t3,t2,C_u_i_car(((C_word*)t0)[4]),lf[58]);}
else{
t2=((C_word*)t0)[2];
f_6439(t2,C_SCHEME_FALSE);}}

/* k6484 in k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_6486(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6486,c,av);}
a=C_alloc(3);
t2=C_i_caddr(t1);
t3=C_mutate(((C_word *)t0)+6,t2);
if(C_truep(((C_word*)t0)[6])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6436,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:400: test"));
t5=((C_word*)((C_word*)t0)[5])[1];
f_4723(t5,t4,C_i_car(((C_word*)t0)[6]),lf[89]);}
else{
t4=((C_word*)t0)[2];
f_5792(t4,C_SCHEME_FALSE);}}

/* k6488 in k6416 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_6490(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6490,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[24],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6486,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:399: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
tp(3,av2);}}
else{
t4=((C_word*)t2)[2];
f_5792(t4,C_SCHEME_FALSE);}}

/* k6498 in k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_6500(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6500,c,av);}
if(C_truep(C_i_not(t1))){
C_trace(C_text("optimizer.scm:397: test"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4723(t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[77]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_6418(2,av2);}}}

/* k6502 in k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_6504(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6504,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=C_i_car(t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6418,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6500,a[2]=((C_word*)t2)[5],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:396: test"));
t6=((C_word*)((C_word*)t2)[5])[1];
f_4723(t6,t5,t3,lf[127]);}
else{
t4=((C_word*)t2)[2];
f_5792(t4,C_SCHEME_FALSE);}}

/* k6508 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_6510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6510,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6504,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:395: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=C_u_i_car(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_5792(t3,C_SCHEME_FALSE);}}

/* k6515 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6517,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:370: test"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4723(t3,t2,((C_word*)t0)[5],lf[86]);}
else{
t2=((C_word*)t0)[2];
f_5710(t2,C_SCHEME_FALSE);}}

/* k6528 in k6540 in k6515 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_6530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6530,c,av);}
t2=((C_word*)t0)[2];
f_5710(t2,C_i_not(t1));}

/* k6536 in k6540 in k6515 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_6538(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6538,c,av);}
C_trace(C_text("optimizer.scm:372: test"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4723(t2,((C_word*)t0)[3],C_i_car(t1),lf[98]);}

/* k6540 in k6515 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6542(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_6542,c,av);}
a=C_alloc(7);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6538,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:372: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=((C_word*)t0)[2];
f_5710(t2,C_SCHEME_FALSE);}}

/* k6546 in k6556 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6548(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6548,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_5703(2,av2);}}
else{
C_trace(C_text("optimizer.scm:367: test"));
t3=((C_word*)((C_word*)t2)[3])[1];
f_4723(t3,((C_word*)t2)[2],((C_word*)t2)[4],lf[129]);}}

/* k6556 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6558(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6558,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6548,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:366: test"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4723(t3,t2,((C_word*)t0)[4],lf[77]);}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5703(2,av2);}}}

/* k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6562(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6562,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+13,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5700,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:364: chicken.compiler.support#call-info"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[57]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[57]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[12];
av2[3]=((C_word*)t0)[13];
tp(4,av2);}}

/* k6578 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6580,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6583,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:540: invalidate-gae!"));
f_4753(t2,((C_word*)t0)[4]);}

/* k6581 in k6578 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6583(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6583,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* g1211 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6592(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_6592,3,t0,t1,t2);}
C_trace(C_text("optimizer.scm:539: g1228"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_5080(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k6597 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6599,c,av);}
C_trace(C_text("optimizer.scm:538: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* map-loop1205 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_6601,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:539: g1211"));
t4=((C_word*)t0)[4];
f_6592(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6624 in map-loop1205 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6626(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6626,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6601(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6659(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6659,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(
C_trace("optimizer.scm:547: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6665,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6671,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:548: test"));
t5=((C_word*)((C_word*)t0)[5])[1];
f_4723(t5,t4,((C_word*)t0)[4],lf[85]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6680,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:551: test"));
t3=((C_word*)((C_word*)t0)[5])[1];
f_4723(t3,t2,((C_word*)t0)[4],lf[76]);}}

/* k6663 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6665,c,av);}
C_trace(C_text("optimizer.scm:550: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k6669 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6671,c,av);}
if(C_truep(t1)){
C_trace(C_text("optimizer.scm:549: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[102];
av2[3]=lf[130];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
C_trace(C_text("optimizer.scm:550: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}}

/* k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_6680,c,av);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(
C_trace("optimizer.scm:552: touch"),
  f_4749(((C_word*)((C_word*)t2)[2])[1])
);
C_trace(C_text("optimizer.scm:553: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t2)[3];
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6692,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6833,a[2]=t3,a[3]=((C_word*)t2)[9],a[4]=((C_word*)t2)[11],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[12],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:554: test"));
t5=((C_word*)((C_word*)t2)[5])[1];
f_4723(t5,t4,((C_word*)t2)[4],lf[85]);}}

/* k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6692(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_6692,2,t0,t1);}
a=C_alloc(10);
if(C_truep(t1)){
t2=(
C_trace("optimizer.scm:559: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6698,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:560: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[5];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[31];
av2[3]=lf[131];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6704,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6781,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:563: walk"));
t4=((C_word*)((C_word*)t0)[8])[1];
f_5080(t4,t3,C_i_car(((C_word*)t0)[9]),((C_word*)t0)[10],((C_word*)t0)[5]);}}

/* k6696 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6698,c,av);}
C_trace(C_text("optimizer.scm:561: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k6702 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6704(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6704,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:565: test"));
t3=((C_word*)((C_word*)t0)[5])[1];
f_4723(t3,t2,((C_word*)t0)[2],lf[85]);}

/* k6711 in k6737 in k6702 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6713(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6713,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop1257 in k6737 in k6702 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_6715,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6725,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:564: g1258"));
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6723 in for-each-loop1257 in k6737 in k6702 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_6725(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6725,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6715(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k6737 in k6702 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_6739,c,av);}
a=C_alloc(13);
t2=(C_truep(t1)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp));
t3=C_i_check_list_2(((C_word*)t0)[3],lf[17]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6713,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6715,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6715(t8,t4,((C_word*)t0)[3]);}

/* f_6740 in k6737 in k6702 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6740(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6740,c,av);}
t3=C_i_cdr(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_set_i_slot(t2,C_fix(1),C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* f_6757 in k6737 in k6702 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6757(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6757,c,av);}
t3=C_i_car(t2);
t4=C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_set_i_slot(t2,C_fix(1),C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k6779 in k6690 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_6781,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:563: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[26];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
tp(5,av2);}}

/* k6789 in k6831 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6791(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6791,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6822,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:556: test"));
t3=((C_word*)((C_word*)t0)[5])[1];
f_4723(t3,t2,((C_word*)t0)[6],lf[132]);}
else{
t2=((C_word*)t0)[2];
f_6692(t2,C_SCHEME_FALSE);}}

/* k6808 in k6816 in k6820 in k6789 in k6831 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_6810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6810,c,av);}
t2=((C_word*)t0)[2];
f_6692(t2,C_i_not(t1));}

/* k6816 in k6820 in k6789 in k6831 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6818(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_6818,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:558: chicken.compiler.support#expression-has-side-effects?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[114]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[114]+1);
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t2=((C_word*)t0)[2];
f_6692(t2,C_SCHEME_FALSE);}}

/* k6820 in k6789 in k6831 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6822,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
if(C_truep(C_i_not(t1))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6818,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:557: test"));
t4=((C_word*)((C_word*)t2)[5])[1];
f_4723(t4,t3,((C_word*)t2)[6],lf[126]);}
else{
t3=((C_word*)t2)[2];
f_6692(t3,C_SCHEME_FALSE);}}

/* k6827 in k6831 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6829,c,av);}
t2=((C_word*)t0)[2];
f_6791(t2,C_i_not(t1));}

/* k6831 in k6678 in k6657 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6833(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_6833,c,av);}
a=C_alloc(10);
t2=C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_6791(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6829,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:555: chicken.compiler.support#variable-visible?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[133]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[133]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
av2[3]=((C_word*)t0)[7];
tp(4,av2);}}}

/* k6840 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6842(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,8)))){
C_save_and_reclaim_args((void *)trf_6842,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("optimizer.scm:583: test"));
t4=((C_word*)((C_word*)t0)[11])[1];
f_4723(t4,t3,t2,lf[60]);}
else{
C_trace(C_text("optimizer.scm:591: walk-generic"));
t2=((C_word*)((C_word*)t0)[6])[1];
f_6907(t2,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[9],((C_word*)t0)[10],C_SCHEME_FALSE);}}

/* k6849 in k6840 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6851(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,8)))){
C_save_and_reclaim((void *)f_6851,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(
C_trace("optimizer.scm:584: touch"),
  f_4749(((C_word*)((C_word*)t0)[2])[1])
);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6857,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:585: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[31];
av2[3]=lf[135];
av2[4]=((C_word*)t0)[6];
av2[5]=((C_word*)t0)[4];
tp(6,av2);}}
else{
C_trace(C_text("optimizer.scm:589: walk-generic"));
t2=((C_word*)((C_word*)t0)[7])[1];
f_6907(t2,((C_word*)t0)[3],((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[9],((C_word*)t0)[10],((C_word*)t0)[11],C_SCHEME_FALSE);}}

/* k6855 in k6849 in k6840 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6857,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:587: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k6862 in k6855 in k6849 in k6840 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6864,c,av);}
C_trace(C_text("optimizer.scm:587: chicken.compiler.support#replace-rest-op-with-list-ops"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[134]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[134]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}

/* walk-generic in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6907(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,0,5)))){
C_save_and_reclaim_args((void *)trf_6907,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
a=C_alloc(13);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6913,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t8,a[6]=((C_word*)t0)[2],a[7]=t7,a[8]=t10,a[9]=((C_word*)t0)[3],a[10]=t6,tmp=(C_word)a,a+=11,tmp));
t12=((C_word*)t10)[1];
f_6913(t12,t1,C_SCHEME_TRUE,t5,C_SCHEME_END_OF_LIST);}

/* lp in walk-generic in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6913(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_6913,5,t0,t1,t2,t3,t4);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6923,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
C_trace(C_text("optimizer.scm:598: invalidate-gae!"));
f_4753(t5,((C_word*)t0)[7]);}
else{
t6=t5;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_6923(2,av2);}}}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6939,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[8],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:602: walk"));
t6=((C_word*)((C_word*)t0)[9])[1];
f_5080(t6,t5,C_i_car(t3),((C_word*)t0)[10],((C_word*)t0)[7]);}}

/* k6921 in lp in walk-generic in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6923(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6923,c,av);}
a=C_alloc(5);
if(C_truep(((C_word*)t0)[2])){
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:600: scheme#reverse"));
t3=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k6931 in k6921 in lp in walk-generic in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6933,c,av);}
C_trace(C_text("optimizer.scm:600: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* k6937 in lp in walk-generic in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6939(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6939,c,av);}
a=C_alloc(3);
t2=(C_truep(((C_word*)t0)[2])?C_eqp(t1,C_u_i_car(((C_word*)t0)[3])):C_SCHEME_FALSE);
t3=C_u_i_cdr(((C_word*)t0)[3]);
t4=C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
C_trace(C_text("optimizer.scm:603: lp"));
t5=((C_word*)((C_word*)t0)[5])[1];
f_6913(t5,((C_word*)t0)[6],t2,t3,t4);}

/* k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_6967(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_6967,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
C_trace(C_text("optimizer.scm:607: scheme#values"));{
C_word av2[4];
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[9];
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6973,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:609: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[4];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[43];
av2[3]=lf[146];
tp(4,av2);}}}

/* k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6973(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6973,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=lf[46] /* chicken.compiler.optimizer#simplified-ops */ =C_SCHEME_END_OF_LIST;;
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6977,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:611: walk"));
t5=((C_word*)((C_word*)t2)[8])[1];
f_5080(t5,t4,((C_word*)t2)[9],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6977,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6980,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[7])[1]))){
C_trace(C_text("optimizer.scm:612: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[145];
av2[4]=((C_word*)((C_word*)t0)[7])[1];
tp(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6980(2,av2);}}}

/* k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_6980,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6983,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(C_retrieve2(lf[46],C_text("chicken.compiler.optimizer#simplified-ops"))))){
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7021,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("optimizer.scm:614: chicken.compiler.support#with-debugging-output"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[144]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[144]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=t3;
tp(4,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6983(2,av2);}}}

/* k6981 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_6983,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6986,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t2)[7])[1],C_fix(0)))){
C_trace(C_text("optimizer.scm:625: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t3;
av2[2]=lf[31];
av2[3]=lf[138];
av2[4]=((C_word*)((C_word*)t2)[7])[1];
tp(5,av2);}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_6986(2,av2);}}}

/* k6984 in k6981 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6986(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6986,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[6])[1],C_fix(0)))){
C_trace(C_text("optimizer.scm:626: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[137];
av2[4]=((C_word*)((C_word*)t0)[6])[1];
tp(5,av2);}}
else{
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_UNDEFINED;
f_6989(2,av2);}}}

/* k6987 in k6984 in k6981 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6989(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_6989,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[5])[1],C_fix(0)))){
C_trace(C_text("optimizer.scm:627: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[136];
av2[4]=((C_word*)((C_word*)t0)[5])[1];
tp(5,av2);}}
else{
C_trace(C_text("optimizer.scm:628: scheme#values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
C_values(4,av2);}}}

/* k6990 in k6987 in k6984 in k6981 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_6992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_6992,c,av);}
C_trace(C_text("optimizer.scm:628: scheme#values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)((C_word*)t0)[4])[1];
C_values(4,av2);}}

/* a7020 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7021,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7025,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:617: chicken.base#print"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[143];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k7023 in a7020 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7025(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_7025,c,av);}
a=C_alloc(5);
t2=C_retrieve2(lf[46],C_text("chicken.compiler.optimizer#simplified-ops"));
t3=C_i_check_list_2(C_retrieve2(lf[46],C_text("chicken.compiler.optimizer#simplified-ops")),lf[17]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7058,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_7058(t7,((C_word*)t0)[2],C_retrieve2(lf[46],C_text("chicken.compiler.optimizer#simplified-ops")));}

/* k7028 in for-each-loop1313 in k7023 in a7020 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7030,c,av);}
if(C_truep(C_i_greaterp(C_u_i_cdr(((C_word*)t0)[2]),C_fix(1)))){
C_trace(C_text("optimizer.scm:622: chicken.base#print"));
t2=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=C_make_character(9);
av2[3]=C_u_i_cdr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
C_trace(C_text("optimizer.scm:623: scheme#newline"));
t2=*((C_word*)lf[140]+1);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* for-each-loop1313 in k7023 in a7020 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_7058(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_7058,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7068,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7030,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:620: chicken.base#print*"));
t6=*((C_word*)lf[141]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[142];
av2[3]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7066 in for-each-loop1313 in k7023 in a7020 in k6978 in k6975 in k6971 in k6965 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7068,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7058(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in k6295 in k6332 in k6336 in k6277 in k5836 in a5830 in k5821 in k5818 in k5790 in k5787 in k5708 in k5701 in k5698 in k6560 in k5686 in k5246 in k5243 in k5240 in walk1 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in ... */
static void f_7096(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_7096,4,t0,t1,t2,t3);}
a=C_alloc(29);
t4=C_i_nullp(t2);
if(C_truep(t4)){
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
t5=C_i_car(t2);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t5))){
if(C_truep(C_i_lessp(t3,((C_word*)t0)[3]))){
t6=C_u_i_cdr(t2);
t7=C_s_a_i_plus(&a,2,t3,C_fix(1));
C_trace(C_text("optimizer.scm:644: loop"));
t9=t1;
t10=t6;
t11=t7;
t1=t9;
t2=t10;
t3=t11;
goto loop;}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
C_trace(C_text("optimizer.scm:645: loop"));
t9=t1;
t10=C_u_i_cdr(t2);
t11=t3;
t1=t9;
t2=t10;
t3=t11;
goto loop;}}}

/* touch in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_7136(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_overflow_check;{}
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* test in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_7140(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_7140,4,t0,t1,t2,t3);}
C_trace(C_text("optimizer.scm:659: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[50]);
C_word av2[5];
av2[0]=*((C_word*)lf[50]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=t3;
tp(5,av2);}}

/* k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_7147,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7150,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7162,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:664: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[125]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[125]+1);
av2[1]=t3;
av2[2]=lf[152];
tp(3,av2);}}

/* k7148 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7150,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7153,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_greaterp(((C_word*)((C_word*)t0)[4])[1],C_fix(0)))){
C_trace(C_text("optimizer.scm:702: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[147];
av2[4]=((C_word*)((C_word*)t0)[4])[1];
tp(5,av2);}}
else{
t3=((C_word*)t0)[2];
f_6967(t3,((C_word*)((C_word*)t0)[3])[1]);}}

/* k7151 in k7148 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7153,c,av);}
t2=((C_word*)t0)[2];
f_6967(t2,((C_word*)((C_word*)t0)[3])[1]);}

/* k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_7162,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7163,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7360,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:700: test"));
t4=((C_word*)((C_word*)t0)[5])[1];
f_7140(t4,t3,lf[152],lf[153]);}
else{
t2=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_7150(2,av2);}}}

/* g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_7163(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7163,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t1);
t4=C_i_cdr(t2);
t5=C_mutate(((C_word *)t0)+5,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7170,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:668: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7170(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7170,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7353,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:669: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=C_i_cadr(((C_word*)t2)[6]);
tp(3,av2);}}

/* k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_7176,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("optimizer.scm:671: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[7];
av2[3]=((C_word*)t0)[8];
av2[4]=lf[126];
tp(5,av2);}}

/* k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7179(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7179,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7185,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_length(((C_word*)t0)[6]);
t6=C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7329,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:675: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[8];
tp(3,av2);}}
else{
t7=t2;
f_7185(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_7185(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_7185(t3,C_SCHEME_FALSE);}}

/* k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_7185(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7185,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7310,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:676: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word av2[3];
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[8];
tp(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 in ... */
static void C_ccall f_7194(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7194,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_i_listp(((C_word*)t2)[2]);
t4=(C_truep(t3)?C_i_nullp(C_i_cdr(((C_word*)t2)[2])):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t2)[2]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7206,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=t1,a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:682: chicken.compiler.support#db-get-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[151]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[151]+1);
av2[1]=t6;
av2[2]=((C_word*)t2)[9];
av2[3]=t5;
av2[4]=lf[126];
tp(5,av2);}}
else{
t5=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in ... */
static void C_ccall f_7206(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_7206,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7212,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_length(t1);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7287,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:684: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t5=t2;
f_7212(t5,C_SCHEME_FALSE);}}

/* k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void f_7212(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7212,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7277,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:686: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word av2[3];
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[6];
tp(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[3];{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7219 in k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void f_7221(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(37,0,3)))){
C_save_and_reclaim_args((void *)trf_7221,2,t0,t1);}
a=C_alloc(37);
if(C_truep(t1)){
t2=C_s_a_i_plus(&a,2,((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:694: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[149]);
C_word av2[4];
av2[0]=*((C_word*)lf[149]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[7];
av2[3]=lf[150];
tp(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7226 in k7219 in k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_7228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7228,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:695: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[148]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
av2[3]=C_i_cdr(((C_word*)t0)[7]);
tp(4,av2);}}

/* k7229 in k7226 in k7219 in k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in ... */
static void C_ccall f_7231(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7231,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7234,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7249,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:698: scheme#reverse"));
t5=*((C_word*)lf[4]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_u_i_cdr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k7232 in k7229 in k7226 in k7219 in k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_7234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7234,c,av);}
C_trace(C_text("optimizer.scm:699: touch"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
C_trace("optimizer.scm:699: touch"),
  f_7136(((C_word*)((C_word*)t0)[3])[1])
);
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k7247 in k7229 in k7226 in k7219 in k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in ... */
static void C_ccall f_7249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7249,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:696: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[148]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
tp(4,av2);}}

/* k7267 in k7271 in k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in ... */
static void C_ccall f_7269(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7269,c,av);}
t2=((C_word*)t0)[2];
f_7221(t2,C_eqp(((C_word*)t0)[3],C_i_car(t1)));}

/* k7271 in k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in ... */
static void C_ccall f_7273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_7273,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:689: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_7221(t3,C_SCHEME_FALSE);}}

/* k7275 in k7210 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in ... */
static void C_ccall f_7277(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,2)))){
C_save_and_reclaim((void *)f_7277,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=C_i_car(t1);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7221,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7273,a[2]=t4,a[3]=((C_word*)t2)[9],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:688: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k7285 in k7204 in k7192 in k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in ... */
static void C_ccall f_7287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7287,c,av);}
t2=((C_word*)t0)[2];
f_7212(t2,C_eqp(lf[19],t1));}

/* k7304 in k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7306(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7306,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+6,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7194,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:678: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* k7308 in k7183 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_7310,c,av);}
a=C_alloc(10);
t2=((C_word*)t0)[2];
t3=C_i_caddr(t1);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7306,a[2]=t3,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t2)[5],a[8]=((C_word*)t2)[6],a[9]=((C_word*)t2)[7],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:677: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[37]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[37]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[8];
tp(3,av2);}}

/* k7327 in k7177 in k7174 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7329(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7329,c,av);}
t2=((C_word*)t0)[2];
f_7185(t2,C_eqp(lf[24],t1));}

/* k7347 in k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7349,c,av);}
if(C_truep(C_i_not(t1))){
C_trace(C_text("optimizer.scm:670: test"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_7140(t2,((C_word*)t0)[3],((C_word*)t0)[4],lf[77]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_7176(2,av2);}}}

/* k7351 in k7168 in g1379 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7353(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7353,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=C_i_car(t1);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7176,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7349,a[2]=((C_word*)t2)[8],a[3]=t4,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:670: test"));
t6=((C_word*)((C_word*)t2)[8])[1];
f_7140(t6,t5,t3,lf[127]);}

/* k7358 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7360(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_7360,c,av);}
a=C_alloc(6);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_i_check_list_2(t2,lf[17]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7371,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7371(t7,((C_word*)t0)[3],t2);}

/* for-each-loop1378 in k7358 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_7371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7371,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7381,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:665: g1379"));
t4=((C_word*)t0)[3];
f_7163(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7379 in for-each-loop1378 in k7358 in k7160 in k7145 in chicken.compiler.optimizer#perform-high-level-optimizations in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7381,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7371(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7401(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(594,c,15)))){
C_save_and_reclaim((void *)f_7401,c,av);}
a=C_alloc(594);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[192]);
t4=C_a_i_list(&a,1,lf[190]);
t5=C_a_i_list(&a,1,lf[193]);
t6=C_a_i_list(&a,2,lf[18],t5);
t7=C_a_i_list(&a,1,lf[194]);
t8=C_a_i_list(&a,2,lf[72],t7);
t9=C_a_i_list(&a,4,lf[54],t4,t6,t8);
t10=C_a_i_list(&a,1,lf[192]);
t11=C_a_i_list(&a,2,lf[18],t10);
t12=C_a_i_list(&a,1,lf[195]);
t13=C_a_i_list(&a,1,lf[190]);
t14=C_a_i_list(&a,1,lf[193]);
t15=C_a_i_list(&a,2,lf[18],t14);
t16=C_a_i_list(&a,1,lf[196]);
t17=C_a_i_list(&a,2,lf[72],t16);
t18=C_a_i_list(&a,4,lf[54],t13,t15,t17);
t19=C_a_i_list(&a,1,lf[195]);
t20=C_a_i_list(&a,2,lf[18],t19);
t21=C_a_i_list(&a,5,lf[19],lf[184],t20,lf[197],lf[198]);
t22=C_a_i_list(&a,4,lf[20],t12,t18,t21);
t23=C_a_i_list(&a,5,lf[19],lf[188],t11,lf[199],t22);
t24=C_a_i_list(&a,4,lf[20],t3,t9,t23);
t25=C_a_i_list(&a,11,lf[193],lf[192],lf[195],lf[190],lf[194],lf[196],lf[199],lf[197],lf[188],lf[184],lf[198]);
t26=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12625,tmp=(C_word)a,a+=2,tmp);
t27=C_a_i_list(&a,3,t24,t25,t26);
t28=C_a_i_list(&a,1,lf[183]);
t29=C_a_i_list(&a,1,lf[190]);
t30=C_a_i_list(&a,1,lf[193]);
t31=C_a_i_list(&a,2,lf[18],t30);
t32=C_a_i_list(&a,1,lf[202]);
t33=C_a_i_list(&a,2,lf[72],t32);
t34=C_a_i_list(&a,4,lf[54],t29,t31,t33);
t35=C_a_i_list(&a,1,lf[183]);
t36=C_a_i_list(&a,2,lf[18],t35);
t37=C_a_i_list(&a,1,lf[203]);
t38=C_a_i_list(&a,1,lf[193]);
t39=C_a_i_list(&a,2,lf[18],t38);
t40=C_a_i_cons(&a,2,t39,lf[204]);
t41=C_a_i_cons(&a,2,t37,t40);
t42=C_a_i_cons(&a,2,lf[35],t41);
t43=C_a_i_list(&a,5,lf[19],lf[205],t36,lf[206],t42);
t44=C_a_i_list(&a,4,lf[20],t28,t34,t43);
t45=C_a_i_list(&a,8,lf[183],lf[190],lf[193],lf[202],lf[205],lf[206],lf[203],lf[204]);
t46=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12498,tmp=(C_word)a,a+=2,tmp);
t47=C_a_i_list(&a,3,t44,t45,t46);
t48=C_a_i_list(&a,1,lf[192]);
t49=C_a_i_list(&a,2,lf[29],C_SCHEME_END_OF_LIST);
t50=C_a_i_list(&a,4,lf[20],t48,t49,lf[207]);
t51=C_a_i_list(&a,2,lf[192],lf[207]);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12185,tmp=(C_word)a,a+=2,tmp);
t53=C_a_i_list(&a,3,t50,t51,t52);
t54=C_a_i_list(&a,1,lf[183]);
t55=C_a_i_list(&a,1,lf[190]);
t56=C_a_i_cons(&a,2,t55,lf[211]);
t57=C_a_i_cons(&a,2,lf[54],t56);
t58=C_a_i_list(&a,1,lf[183]);
t59=C_a_i_list(&a,2,lf[18],t58);
t60=C_a_i_list(&a,5,lf[19],lf[205],t59,lf[189],lf[185]);
t61=C_a_i_list(&a,4,lf[20],t54,t57,t60);
t62=C_a_i_list(&a,6,lf[183],lf[190],lf[211],lf[205],lf[189],lf[185]);
t63=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12102,tmp=(C_word)a,a+=2,tmp);
t64=C_a_i_list(&a,3,t61,t62,t63);
t65=C_a_i_list(&a,1,lf[183]);
t66=C_a_i_list(&a,1,lf[212]);
t67=C_a_i_cons(&a,2,t66,lf[213]);
t68=C_a_i_cons(&a,2,lf[54],t67);
t69=C_a_i_list(&a,1,lf[214]);
t70=C_a_i_list(&a,2,lf[18],t69);
t71=C_a_i_list(&a,1,lf[215]);
t72=C_a_i_cons(&a,2,t71,lf[216]);
t73=C_a_i_cons(&a,2,lf[54],t72);
t74=C_a_i_list(&a,4,lf[25],lf[43],t70,t73);
t75=C_a_i_list(&a,4,lf[20],t65,t68,t74);
t76=C_a_i_list(&a,7,lf[183],lf[212],lf[213],lf[43],lf[214],lf[215],lf[216]);
t77=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11917,tmp=(C_word)a,a+=2,tmp);
t78=C_a_i_list(&a,3,t75,t76,t77);
t79=C_a_i_list(&a,1,lf[183]);
t80=C_a_i_list(&a,1,lf[190]);
t81=C_a_i_cons(&a,2,t80,lf[213]);
t82=C_a_i_cons(&a,2,lf[54],t81);
t83=C_a_i_cons(&a,2,lf[43],lf[216]);
t84=C_a_i_cons(&a,2,lf[25],t83);
t85=C_a_i_list(&a,4,lf[20],t79,t82,t84);
t86=C_a_i_list(&a,5,lf[183],lf[190],lf[213],lf[43],lf[216]);
t87=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11784,tmp=(C_word)a,a+=2,tmp);
t88=C_a_i_list(&a,3,t85,t86,t87);
t89=C_a_i_list(&a,6,t27,t47,t53,t64,t78,t88);
C_trace(C_text("optimizer.scm:709: chicken.internal#hash-table-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[157]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[157]+1);
av2[1]=t2;
av2[2]=C_retrieve2(lf[45],C_text("chicken.compiler.optimizer#simplifications"));
av2[3]=lf[20];
av2[4]=t89;
tp(5,av2);}}

/* k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7404(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(166,c,11)))){
C_save_and_reclaim((void *)f_7404,c,av);}
a=C_alloc(166);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_list(&a,1,lf[183]);
t4=C_a_i_list(&a,2,lf[18],t3);
t5=C_a_i_list(&a,4,lf[25],lf[184],t4,lf[185]);
t6=C_a_i_list(&a,1,lf[183]);
t7=C_a_i_list(&a,2,lf[18],t6);
t8=C_a_i_list(&a,4,lf[25],lf[186],t7,lf[187]);
t9=C_a_i_list(&a,5,lf[19],lf[188],lf[189],t5,t8);
t10=C_a_i_list(&a,7,lf[188],lf[184],lf[186],lf[189],lf[185],lf[187],lf[183]);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11703,tmp=(C_word)a,a+=2,tmp);
t12=C_a_i_list(&a,3,t9,t10,t11);
t13=C_a_i_list(&a,1,lf[190]);
t14=C_a_i_list(&a,1,lf[191]);
t15=C_a_i_list(&a,2,lf[72],t14);
t16=C_a_i_list(&a,4,lf[54],t13,lf[189],t15);
t17=C_a_i_list(&a,5,lf[19],lf[188],t16,lf[185],lf[187]);
t18=C_a_i_list(&a,6,lf[188],lf[190],lf[189],lf[191],lf[185],lf[187]);
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11557,tmp=(C_word)a,a+=2,tmp);
t20=C_a_i_list(&a,3,t17,t18,t19);
t21=C_a_i_list(&a,2,t12,t20);
C_trace(C_text("optimizer.scm:709: chicken.internal#hash-table-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[157]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[157]+1);
av2[1]=t2;
av2[2]=C_retrieve2(lf[45],C_text("chicken.compiler.optimizer#simplifications"));
av2[3]=lf[19];
av2[4]=t21;
tp(5,av2);}}

/* k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7407(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_7407,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7947,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1091: scheme#make-vector"));
t3=*((C_word*)lf[182]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(301);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in ... */
static void C_ccall f_7422(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_7422,c,av);}
a=C_alloc(21);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7424,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7479,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7860,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_7860(t8,t4,((C_word*)t0)[3],((C_word*)t0)[6]);}

/* find-path in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in ... */
static void f_7424(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_7424,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7430,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7430(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* find in find-path in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in ... */
static void f_7430(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7430,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_memq(t2,t3);
if(C_truep(C_i_not(t4))){
t5=C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
t6=C_i_cdr(t5);
t7=C_i_memq(((C_word*)t0)[3],t6);
if(C_truep(t7)){
t8=t1;{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_a_i_cons(&a,2,t2,t3);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7454,a[2]=((C_word*)t0)[4],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1014: any"));
f_3473(t1,t9,t6);}}
else{
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* a7453 in find in find-path in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in ... */
static void C_ccall f_7454(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7454,c,av);}
C_trace(C_text("optimizer.scm:1014: find"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_7430(t3,t1,t2,((C_word*)t0)[3]);}

/* g1693 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in ... */
static void f_7467(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7467,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7476,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1018: chicken.compiler.support#scan-used-variables"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[161]);
C_word av2[4];
av2[0]=*((C_word*)lf[161]+1);
av2[1]=t4;
av2[2]=t3;
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k7474 in g1693 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in ... */
static void C_ccall f_7476(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7476,c,av);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t4=C_a_i_cons(&a,2,t3,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in ... */
static void C_ccall f_7479(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7479,c,av);}
a=C_alloc(25);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7480,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7539,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7837,a[2]=t9,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_7837(t11,t7,((C_word*)t0)[3]);}

/* g1733 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in ... */
static void f_7480(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,3)))){
C_save_and_reclaim_args((void *)trf_7480,3,t0,t1,t2);}
a=C_alloc(11);
t3=C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(C_i_not(t3))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7490,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7512,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1027: filter"));
f_3679(t4,t5,((C_word*)t0)[5]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k7488 in g1733 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in ... */
static void C_ccall f_7490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_7490,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7506,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1030: chicken.base#gensym"));
t4=*((C_word*)lf[112]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k7496 in k7504 in k7488 in g1733 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void C_ccall f_7498(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7498,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k7504 in k7488 in g1733 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void C_ccall f_7506(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_7506,c,av);}
a=C_alloc(16);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,((C_word*)t2)[2],((C_word*)t2)[3]);
t4=((C_word*)((C_word*)t2)[4])[1];
t5=C_a_i_cons(&a,2,t1,t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=C_mutate(((C_word *)((C_word*)t2)[4])+1,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7498,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[6],tmp=(C_word)a,a+=4,tmp);
t9=C_a_i_list1(&a,1,((C_word*)t2)[2]);
C_trace(C_text("optimizer.scm:1031: scheme#append"));
t10=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t8;
av2[2]=t9;
av2[3]=((C_word*)t2)[3];
av2[4]=((C_word*)((C_word*)t2)[5])[1];
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* a7511 in g1733 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in ... */
static void C_ccall f_7512(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7512,c,av);}
a=C_alloc(6);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(C_i_not(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7525,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1028: find-path"));
t5=((C_word*)t0)[3];
f_7424(t5,t4,((C_word*)t0)[2],t2);}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7523 in a7511 in g1733 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void C_ccall f_7525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7525,c,av);}
if(C_truep(t1)){
C_trace(C_text("optimizer.scm:1028: find-path"));
t2=((C_word*)t0)[2];
f_7424(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in ... */
static void C_ccall f_7539(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_7539,c,av);}
a=C_alloc(22);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7540,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_i_check_list_2(t5,lf[17]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7814,a[2]=t9,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_7814(t11,t7,t5);}

/* g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in ... */
static void f_7540(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,0,3)))){
C_save_and_reclaim_args((void *)trf_7540,3,t0,t1,t2);}
a=C_alloc(20);
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7547,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7581,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=C_u_i_cdr(t2);
t7=C_SCHEME_END_OF_LIST;
if(C_truep(C_i_nullp(t7))){
t8=C_i_check_list_2(t6,lf[10]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3284,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_3284(t12,t4,t6);}
else{
t8=C_a_i_cons(&a,2,t6,t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3324,a[2]=t10,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t12=((C_word*)t10)[1];
f_3324(t12,t4,t8);}}

/* k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void C_ccall f_7547(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_7547,c,av);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7555,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7557,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=((C_word*)((C_word*)t0)[6])[1];
t5=C_i_check_list_2(t4,lf[10]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_3732(t9,t2,t4);}

/* k7553 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void C_ccall f_7555(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_7555,c,av);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t4=C_a_i_cons(&a,2,t3,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* a7556 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void f_7557(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7557,3,t0,t1,t2);}
a=C_alloc(7);
t3=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(C_i_not(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7570,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("mini-srfi-1.scm:193: every"));
f_3439(t4,t6,t5);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7568 in a7556 in k7545 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_7570(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_7570,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_u_i_car(((C_word*)t0)[3]):C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a7580 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void C_ccall f_7581(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7581,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7587,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1041: filter"));
f_3679(t1,t3,((C_word*)t0)[3]);}

/* a7586 in a7580 in g1757 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void C_ccall f_7587(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7587,c,av);}
C_trace(C_text("optimizer.scm:1041: find-path"));
t3=((C_word*)t0)[2];
f_7424(t3,t1,((C_word*)t0)[3],t2);}

/* k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in ... */
static void C_ccall f_7599(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_7599,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1053: chicken.sort#topological-sort"));
t3=C_fast_retrieve(lf[210]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
av2[3]=*((C_word*)lf[42]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void C_ccall f_7602(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_7602,c,av);}
a=C_alloc(18);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7603,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7773,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7790,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_7790(t9,t5,t1,((C_word*)t0)[6]);}

/* g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void f_7603(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_7603,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=C_i_assq(t3,((C_word*)((C_word*)t0)[2])[1]);
t5=C_i_cdr(t4);
t6=C_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7616,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_nullp(C_u_i_cdr(t5)))){
t8=C_i_assq(t6,((C_word*)((C_word*)t0)[5])[1]);
t9=C_i_cdr(t8);
t10=t7;
f_7616(t10,C_i_not(C_i_memq(t6,t9)));}
else{
t8=t7;
f_7616(t8,C_SCHEME_FALSE);}}

/* k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void f_7616(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,4)))){
C_save_and_reclaim_args((void *)trf_7616,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=C_i_assq(((C_word*)t0)[2],((C_word*)t0)[4]);
t5=C_i_cdr(t4);
t6=C_a_i_list2(&a,2,t5,((C_word*)t0)[5]);
C_trace(C_text("optimizer.scm:1065: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word av2[5];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[7];
av2[4]=t6;
tp(5,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7640,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7640(t5,((C_word*)t0)[6],((C_word*)t0)[7]);}}

/* foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in ... */
static void f_7640(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_7640,3,t0,t1,t2);}
a=C_alloc(7);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7675,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=t4;
t9=C_slot(t2,C_fix(1));
t1=t8;
t2=t9;
goto loop;}
else{
t3=C_i_check_list_2(((C_word*)t0)[3],lf[10]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7687,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7687(t7,t1,((C_word*)t0)[3]);}}

/* k7662 in k7673 in foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in ... */
static void C_ccall f_7664(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7664,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("optimizer.scm:1069: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k7673 in foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in ... */
static void C_ccall f_7675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_7675,c,av);}
a=C_alloc(8);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7664,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1071: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[29];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* foldr1819 in foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in ... */
static void f_7687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,0,4)))){
C_save_and_reclaim_args((void *)trf_7687,3,t0,t1,t2);}
a=C_alloc(11);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7695,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7742,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t7=t5;
t8=C_slot(t2,C_fix(1));
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g1824 in foldr1819 in foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in ... */
static void f_7695(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_7695,4,t0,t1,t2,t3);}
a=C_alloc(3);
t4=C_mutate(((C_word *)t0)+2,t3);
t5=C_mutate(((C_word *)t0)+4,t2);
t6=C_mutate(((C_word *)t0)+3,t1);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7731,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1075: chicken.base#gensym"));
t8=*((C_word*)lf[112]+1);{
C_word av2[2];
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k7709 in k7729 in g1824 in foldr1819 in foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in ... */
static void C_ccall f_7711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_7711,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("optimizer.scm:1074: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k7729 in g1824 in foldr1819 in foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in ... */
static void C_ccall f_7731(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_7731,c,av);}
a=C_alloc(14);
t2=((C_word*)t0)[2];
t3=C_a_i_list1(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7711,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t2)[4]);
t6=C_i_assq(((C_word*)t2)[4],((C_word*)t2)[5]);
t7=C_i_cdr(t6);
t8=C_a_i_list1(&a,1,t7);
C_trace(C_text("optimizer.scm:1076: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=lf[26];
av2[3]=t5;
av2[4]=t8;
tp(5,av2);}}

/* k7740 in foldr1819 in foldr1806 in k7614 in g1786 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in ... */
static void C_ccall f_7742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7742,c,av);}
C_trace(C_text("optimizer.scm:1072: g1824"));
t2=((C_word*)t0)[2];
f_7695(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k7771 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void C_ccall f_7773(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_7773,c,av);}
a=C_alloc(4);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7782,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1084: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t2;
av2[2]=lf[31];
av2[3]=lf[209];
av2[4]=((C_word*)((C_word*)t0)[2])[1];
tp(5,av2);}}
else{
C_trace(C_text("optimizer.scm:1086: scheme#values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_SCHEME_FALSE;
C_values(4,av2);}}}

/* k7780 in k7771 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_7782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7782,c,av);}
C_trace(C_text("optimizer.scm:1085: scheme#values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
C_values(4,av2);}}

/* foldl1788 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in ... */
static void f_7790(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_7790,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7808,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1058: g1786"));
t6=((C_word*)t0)[3];
f_7603(t6,t5,t3,C_slot(t2,C_fix(0)));}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7806 in foldl1788 in k7600 in k7597 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in ... */
static void C_ccall f_7808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7808,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7790(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* for-each-loop1756 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in ... */
static void f_7814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7814,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7824,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1036: g1757"));
t4=((C_word*)t0)[3];
f_7540(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7822 in for-each-loop1756 in k7537 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in ... */
static void C_ccall f_7824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7824,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7814(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1732 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in ... */
static void f_7837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_7837,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7847,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1024: g1733"));
t4=((C_word*)t0)[3];
f_7480(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k7845 in for-each-loop1732 in k7477 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in ... */
static void C_ccall f_7847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_7847,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7837(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* for-each-loop1692 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in ... */
static void f_7860(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_7860,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7870,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1017: g1693"));
t7=((C_word*)t0)[3];
f_7467(t7,t6,C_slot(t2,C_fix(0)),C_slot(t3,C_fix(0)));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k7868 in for-each-loop1692 in k7420 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in ... */
static void C_ccall f_7870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_7870,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_7860(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)),C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1661 in k12358 in a12351 in k12312 in k12306 in k12303 in k12300 in loop2 in k12269 in k12239 in k12236 in k12233 in k12462 in k12470 in k12203 in k12200 in k12197 in loop1 in a12184 in k7399 in k4713 in k4360 in ... */
static void f_7897(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_7897,4,t0,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_cons(&a,2,t6,t7);
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

/* k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7947(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7947,c,av);}
a=C_alloc(4);
t2=C_mutate(&lf[155] /* (set! chicken.compiler.optimizer#substitution-table ...) */,t1);
t3=C_mutate((C_word*)lf[156]+1 /* (set! chicken.compiler.optimizer#rewrite ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7949,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[158]+1 /* (set! chicken.compiler.optimizer#transform-direct-lambdas! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10245,tmp=(C_word)a,a+=2,tmp));
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* chicken.compiler.optimizer#rewrite in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_7949,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7953,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1094: chicken.internal#hash-table-ref"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[53]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t4;
av2[2]=C_retrieve2(lf[155],C_text("chicken.compiler.optimizer#substitution-table"));
av2[3]=t2;
tp(4,av2);}}

/* k7951 in chicken.compiler.optimizer#rewrite in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7953(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_7953,c,av);}
a=C_alloc(7);
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_a_i_list1(&a,1,((C_word*)t0)[4]);
C_trace(C_text("optimizer.scm:1095: scheme#append"));
t5=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t2;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k7961 in k7951 in chicken.compiler.optimizer#rewrite in k7945 in k7405 in k7402 in k7399 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_7963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_7963,c,av);}
C_trace(C_text("optimizer.scm:1095: chicken.internal#hash-table-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[157]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[157]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[155],C_text("chicken.compiler.optimizer#substitution-table"));
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* argc-ok? in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static C_word f_7972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
t2=C_i_not(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_fixnump(t1);
t4=(C_truep(t3)?C_eqp(t1,C_i_length(((C_word*)t0)[2])):C_SCHEME_FALSE);
if(C_truep(t4)){
return(t4);}
else{
if(C_truep(C_i_pairp(t1))){
t5=f_7972(t0,C_u_i_car(t1));
if(C_truep(t5)){
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}}}

/* k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
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
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8062,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8065,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_length(((C_word*)t0)[6]);
t4=C_i_car(((C_word*)t0)[5]);
if(C_truep(C_i_nequalp(t3,t4))){
t5=C_i_car(((C_word*)t0)[6]);
t6=C_i_cadr(((C_word*)t0)[6]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8152,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t6,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1121: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t7;
av2[2]=t5;
tp(3,av2);}}
else{
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_8065(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8063 in k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8065(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8065,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_12818(2,av2);}}
else{
if(C_truep(((C_word*)t2)[3])){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8086,a[2]=((C_word*)t2)[4],a[3]=((C_word*)t2)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_i_cadr(((C_word*)t2)[5]);
t6=C_a_i_list1(&a,1,t5);
C_trace(C_text("optimizer.scm:1128: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=lf[54];
av2[3]=t6;
av2[4]=((C_word*)t2)[6];
tp(5,av2);}}
else{
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}}

/* k8084 in k8063 in k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8086,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1126: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8134 in k8142 in k8138 in k8146 in k8150 in k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8136(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8136,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1124: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8138 in k8146 in k8150 in k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8140,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8144,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1123: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k8142 in k8138 in k8146 in k8150 in k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8144,c,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8136,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1124: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_8065(2,av2);}}}

/* k8146 in k8150 in k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8148(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_8148,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[18],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8140,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1123: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}
else{
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_8065(2,av2);}}}

/* k8150 in k8060 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8152,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[18],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8148,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1122: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_8065(2,av2);}}}

/* k8179 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8181(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_8181,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_fast_retrieve(lf[220]));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[3]);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8208,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_i_cadr(((C_word*)t0)[2]);
t8=C_a_i_list1(&a,1,t7);
C_trace(C_text("optimizer.scm:1142: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t6;
av2[2]=lf[54];
av2[3]=t8;
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8206 in k8179 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8208(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8208,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1138: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8237 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
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
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_8239,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nequalp(C_i_length(((C_word*)t0)[3]),C_i_cadr(((C_word*)t0)[2])));
if(C_truep(t4)){
t5=C_i_check_list_2(((C_word*)t0)[3],lf[10]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8256,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8256(t9,((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* foldr1917 in k8237 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_8256(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_8256,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8291,a[2]=t3,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8310,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1153: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t4;
av2[2]=C_i_car(((C_word*)t0)[4]);
tp(3,av2);}}}

/* k8278 in k8289 in foldr1917 in k8237 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8280(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8280,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_a_i_list1(&a,1,t1);
t4=C_a_i_list2(&a,2,((C_word*)t2)[2],((C_word*)t2)[3]);
C_trace(C_text("optimizer.scm:1152: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t2)[4];
av2[2]=lf[20];
av2[3]=t3;
av2[4]=t4;
tp(5,av2);}}

/* k8289 in foldr1917 in k8237 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8291,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8280,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1152: chicken.base#gensym"));
t4=*((C_word*)lf[112]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k8308 in foldr1917 in k8237 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8310,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1153: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8351 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8353(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8353,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[6]);
t3=C_a_i_list2(&a,2,C_SCHEME_FALSE,t2);
t4=C_mutate(((C_word *)t0)+5,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8368,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1163: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t5;
av2[2]=C_i_car(((C_word*)t0)[6]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8366 in k8351 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8368(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8368,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_i_car(((C_word*)t2)[2]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8376,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=((C_word*)t2)[3],a[5]=t3,a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[5],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("optimizer.scm:1166: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t4;
av2[2]=C_i_cadr(((C_word*)t2)[6]);
tp(3,av2);}}

/* k8374 in k8366 in k8351 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8376(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8376,c,av);}
a=C_alloc(15);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_a_i_list5(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1,t2);
C_trace(C_text("optimizer.scm:1162: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[7];
av2[4]=t3;
tp(5,av2);}}

/* k8410 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8412(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_8412,c,av);}
a=C_alloc(16);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[3]);
t5=C_i_not(t4);
t6=(C_truep(t5)?t5:C_eqp(t4,C_fast_retrieve(lf[221])));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8445,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t9=C_i_car(((C_word*)t0)[3]);
t10=C_a_i_list1(&a,1,t9);
t11=C_i_car(((C_word*)t0)[2]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8461,a[2]=t11,a[3]=t8,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1181: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t12;
av2[2]=C_i_cadr(((C_word*)t0)[3]);
tp(3,av2);}}
else{
t7=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8443 in k8410 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8445,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1177: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8459 in k8410 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8461,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1179: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[54];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8505 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
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
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,4)))){
C_save_and_reclaim((void *)f_8507,c,av);}
a=C_alloc(18);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(((C_word*)t0)[4]);
t5=C_a_i_list1(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8534,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(((C_word*)t0)[4]);
t8=C_a_i_list1(&a,1,t7);
C_trace(C_text("optimizer.scm:1192: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t6;
av2[2]=lf[54];
av2[3]=t8;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8520 in k8505 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8522,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1189: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8532 in k8505 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8534(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8534,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:1191: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
tp(5,av2);}}

/* k8579 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8581(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_8581,c,av);}
a=C_alloc(19);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list1(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8604,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8612,a[2]=t6,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1205: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t7;
av2[2]=C_i_caddr(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8594 in k8579 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8596,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1201: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8602 in k8579 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_8604,c,av);}
C_trace(C_text("optimizer.scm:1203: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k8610 in k8579 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_8612,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:1204: scheme#append"));
t3=*((C_word*)lf[21]+1);{
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

/* k8641 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_8643,c,av);}
if(C_truep(t1)){
C_trace(C_text("optimizer.scm:1209: g1956"));
t2=C_i_car(((C_word*)t0)[2]);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[5];
av2[5]=((C_word*)t0)[6];
((C_proc)C_fast_retrieve_proc(t2))(6,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8664(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_8664,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_lessp(t2,C_fix(2)))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8685,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1219: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t4;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
t3=(C_truep(C_fast_retrieve(lf[220]))?C_i_not(C_eqp(C_fast_retrieve(lf[221]),lf[222])):C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8694,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=t4;
f_8694(t5,t3);}
else{
t5=C_eqp(C_fast_retrieve(lf[221]),lf[223]);
t6=(C_truep(t5)?C_i_caddr(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t4;
f_8694(t7,t6);}
else{
t7=C_eqp(C_fast_retrieve(lf[221]),lf[225]);
t8=t4;
f_8694(t8,(C_truep(t7)?C_i_cadddr(((C_word*)t0)[5]):C_SCHEME_FALSE));}}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8683 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8685,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1219: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_8694(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,3)))){
C_save_and_reclaim_args((void *)trf_8694,2,t0,t1);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8705,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8830,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8830(t11,t7,((C_word*)t2)[2]);}
else{
t3=((C_word*)t2)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8705(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_8705,c,av);}
a=C_alloc(20);
t2=((C_word*)t0)[2];
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[79]);
t8=C_i_check_list_2(t1,lf[51]);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8714,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8796,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8796(t13,t9,t1);}

/* k8712 in k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8714(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8714,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8719,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8719(t5,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* loop in k8712 in k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_8719(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,0,4)))){
C_save_and_reclaim_args((void *)trf_8719,4,t0,t1,t2,t3);}
a=C_alloc(14);
if(C_truep(C_i_nullp(t2))){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=C_eqp(C_fast_retrieve(lf[221]),lf[223]);
t6=(C_truep(t5)?C_i_car(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
t7=C_a_i_list1(&a,1,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8744,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8746,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1236: chicken.compiler.support#fold-boolean"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[224]);
C_word av2[4];
av2[0]=*((C_word*)lf[224]+1);
av2[1]=t8;
av2[2]=t9;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
t4=C_i_car(t3);
t5=C_a_i_list1(&a,1,t4);
t6=C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8786,a[2]=t6,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1242: loop"));
t11=t7;
t12=C_u_i_cdr(t2);
t13=C_u_i_cdr(t3);
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* k8742 in loop in k8712 in k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8744,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1228: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a8745 in loop in k8712 in k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8746(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8746,c,av);}
a=C_alloc(6);
t4=C_a_i_list2(&a,2,t2,t3);
C_trace(C_text("optimizer.scm:1237: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=lf[54];
av2[3]=((C_word*)t0)[2];
av2[4]=t4;
tp(5,av2);}}

/* k8784 in loop in k8712 in k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_8786,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1239: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* map-loop2001 in k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_8796(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8796,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1224: g2007"));
t4=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8819 in map-loop2001 in k8703 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8821(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8821,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8796(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* map-loop1973 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_8830(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_8830,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8855,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("optimizer.scm:1223: chicken.base#gensym"));
t4=*((C_word*)lf[112]+1);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k8853 in map-loop1973 in k8692 in k8662 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8855(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8855,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_8830(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k8917 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_8919,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8928,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1250: scheme#<"));{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=C_fix(0);
av2[3]=t2;
av2[4]=C_fix(3);
C_lessp(5,av2);}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8926 in k8917 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8928(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_8928,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_car(((C_word*)t2)[8]);
t4=C_a_i_list2(&a,2,C_SCHEME_FALSE,t3);
t5=C_mutate(((C_word *)t2)+6,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8943,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1252: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t6;
av2[2]=C_i_car(((C_word*)t2)[8]);
tp(3,av2);}}
else{
t3=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k8941 in k8926 in k8917 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8943(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_8943,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=C_i_car(((C_word*)t2)[7]);
t5=C_mutate(((C_word *)t2)+4,t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8951,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1255: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t6;
av2[2]=C_i_cadr(((C_word*)t2)[8]);
tp(3,av2);}}

/* k8949 in k8941 in k8926 in k8917 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8951(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_8951,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8955,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t1,a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
t4=C_i_cdr(((C_word*)t2)[7]);
if(C_truep(C_i_nullp(t4))){
C_trace(C_text("optimizer.scm:1257: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t2)[8]);
tp(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_cadr(((C_word*)t2)[7]);
f_8955(2,av2);}}}

/* k8953 in k8949 in k8941 in k8926 in k8917 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_8955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_8955,c,av);}
a=C_alloc(15);
t2=C_a_i_list5(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
C_trace(C_text("optimizer.scm:1251: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[6];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[7];
av2[4]=t2;
tp(5,av2);}}

/* k9006 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9008(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_9008,c,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_not(t2);
t4=(C_truep(t3)?t3:C_i_nequalp(C_i_length(((C_word*)t0)[3]),C_i_car(((C_word*)t0)[2])));
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9031,a[2]=((C_word*)t0)[4],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9035,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1270: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t8;
av2[2]=C_i_cadr(((C_word*)t0)[2]);
tp(3,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9029 in k9006 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9031,c,av);}
C_trace(C_text("optimizer.scm:1269: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k9033 in k9006 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9035,c,av);}
a=C_alloc(6);
C_trace(C_text("optimizer.scm:1270: cons*"));
f_3503(((C_word*)t0)[2],t1,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k9067 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9069(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,4)))){
C_save_and_reclaim((void *)f_9069,c,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_fast_retrieve(lf[220]));
if(C_truep(t3)){
t4=C_i_length(((C_word*)t0)[3]);
t5=C_i_caddr(((C_word*)t0)[2]);
if(C_truep(C_i_less_or_equalp(t4,t5))){
t6=C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t8=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
C_trace(C_text("optimizer.scm:1283: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=lf[25];
av2[3]=t7;
av2[4]=t8;
tp(5,av2);}}
else{
t7=C_i_car(((C_word*)t0)[2]);
t8=C_a_i_list2(&a,2,C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9115,a[2]=((C_word*)t0)[5],a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9119,a[2]=t9,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1285: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t10;
av2[2]=C_i_car(((C_word*)t0)[2]);
tp(3,av2);}}}
else{
t6=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t4=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9113 in k9067 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9115,c,av);}
C_trace(C_text("optimizer.scm:1284: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k9117 in k9067 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9119,c,av);}
a=C_alloc(6);
C_trace(C_text("optimizer.scm:1285: cons*"));
f_3503(((C_word*)t0)[2],t1,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k9146 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9148(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_9148,c,av);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_caddr(((C_word*)t0)[2]);
t3=(C_truep(t2)?t2:C_fast_retrieve(lf[220]));
if(C_truep(t3)){
t4=(
C_trace("optimizer.scm:1294: argc-ok?"),
  f_7972(((C_word*)t0)[3],C_i_car(((C_word*)t0)[2]))
);
if(C_truep(t4)){
t5=C_i_cadr(((C_word*)t0)[2]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9173,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[7]))){
t7=C_u_i_cdr(((C_word*)t0)[7]);
t8=t6;
f_9173(t8,C_a_i_cons(&a,2,C_SCHEME_TRUE,t7));}
else{
t7=t6;
f_9173(t7,((C_word*)t0)[7]);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9171 in k9146 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_9173(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,4)))){
C_save_and_reclaim_args((void *)trf_9173,2,t0,t1);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9177,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9181,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list2(&a,2,((C_word*)t0)[5],C_SCHEME_TRUE);
C_trace(C_text("optimizer.scm:1297: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word av2[5];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[226];
av2[3]=t4;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k9175 in k9171 in k9146 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9177,c,av);}
C_trace(C_text("optimizer.scm:1296: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k9179 in k9171 in k9146 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9181,c,av);}
a=C_alloc(6);
C_trace(C_text("optimizer.scm:1297: cons*"));
f_3503(((C_word*)t0)[2],t1,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k9216 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9218(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_9218,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(C_fast_retrieve(lf[221]),t2);
if(C_truep(t3)){
t4=C_i_cadddr(((C_word*)t0)[2]);
t5=(C_truep(t4)?t4:C_fast_retrieve(lf[220]));
if(C_truep(t5)){
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9248,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_truep(C_fast_retrieve(lf[220]))?C_i_cadddr(((C_word*)t0)[2]):C_i_caddr(((C_word*)t0)[2]));
t9=C_a_i_list1(&a,1,t8);
C_trace(C_text("optimizer.scm:1310: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t7;
av2[2]=lf[54];
av2[3]=t9;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
t6=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9246 in k9216 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9248,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1307: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k9299 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9301(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9301,c,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(C_fast_retrieve(lf[221]),t2);
if(C_truep(t3)){
t4=C_i_caddr(((C_word*)t0)[2]);
t5=C_a_i_list2(&a,2,C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9322,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1324: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t7;
av2[2]=C_i_caddr(((C_word*)t0)[2]);
tp(3,av2);}}
else{
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_eqp(C_fast_retrieve(lf[221]),t4);
if(C_truep(t5)){
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[5]);
C_trace(C_text("optimizer.scm:1326: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=t6;
av2[4]=t7;
tp(5,av2);}}
else{
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9316 in k9299 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9318,c,av);}
C_trace(C_text("optimizer.scm:1323: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k9320 in k9299 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9322(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_9322,c,av);}
a=C_alloc(6);
C_trace(C_text("optimizer.scm:1324: cons*"));
f_3503(((C_word*)t0)[2],t1,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k9400 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9402(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_9402,c,av);}
a=C_alloc(14);
if(C_truep(t1)){
t2=C_fast_retrieve(lf[220]);
t3=(C_truep(C_fast_retrieve(lf[220]))?C_fast_retrieve(lf[220]):((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9431,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t7=(C_truep(((C_word*)t0)[8])?(C_truep(C_i_fixnum_positivep(((C_word*)t0)[6]))?C_fixnum_less_or_equal_p(((C_word*)t0)[6],C_fix(8)):C_SCHEME_FALSE):C_SCHEME_FALSE);
if(C_truep(t7)){
C_trace(C_text("optimizer.scm:1354: chicken.string#conc"));
t8=C_fast_retrieve(lf[227]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t6;
av2[2]=C_i_cadr(((C_word*)t0)[9]);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t8=t6;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_i_cadr(((C_word*)t0)[9]);
f_9431(2,av2);}}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9421 in k9400 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9423,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1348: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k9429 in k9400 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9431(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(68,c,4)))){
C_save_and_reclaim((void *)f_9431,c,av);}
a=C_alloc(68);
t2=C_eqp(C_SCHEME_TRUE,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=C_a_i_fixnum_plus(&a,2,((C_word*)t0)[3],C_fix(1));
t4=C_a_i_list2(&a,2,t1,t3);
C_trace(C_text("optimizer.scm:1351: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[117];
av2[3]=t4;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_u_i_car(((C_word*)t0)[2]);
t4=C_i_cadr(((C_word*)t0)[2]);
t5=C_s_a_i_times(&a,2,((C_word*)t0)[3],t4);
t6=C_s_a_i_plus(&a,2,t3,t5);
t7=C_a_i_list2(&a,2,t1,t6);
C_trace(C_text("optimizer.scm:1351: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[117];
av2[3]=t7;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
t3=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("optimizer.scm:1351: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[117];
av2[3]=t3;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}}

/* k9512 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9514(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_9514,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fast_retrieve(lf[220]))){
t4=C_i_cddr(((C_word*)t0)[4]);
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_caddr(((C_word*)t0)[4]):C_i_cadr(((C_word*)t0)[4]));
t7=C_a_i_list1(&a,1,t6);
C_trace(C_text("optimizer.scm:1370: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[54];
av2[3]=t7;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list1(&a,1,t4);
C_trace(C_text("optimizer.scm:1370: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=lf[54];
av2[3]=t5;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9527 in k9512 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9529,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1367: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k9580 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9582(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_9582,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9597,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1381: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t3;
av2[2]=C_i_car(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9595 in k9580 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9597,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1381: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9616(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_9616,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9625,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1388: scheme#reverse"));
t4=*((C_word*)lf[4]+1);{
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
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9625(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_9625,c,av);}
a=C_alloc(6);
t2=C_i_car(t1);
t3=C_i_cadr(t1);
t4=C_u_i_cdr(t1);
t5=C_u_i_cdr(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9641,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_9641(t9,((C_word*)t0)[3],t2,t3,t5,((C_word*)t0)[4]);}

/* lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void f_9641(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_9641,6,t0,t1,t2,t3,t4,t5);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t4))){
t6=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9663,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1396: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word av2[3];
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9666,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=C_SCHEME_UNDEFINED,a[7]=t5,a[8]=t2,a[9]=((C_word*)t0)[2],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("optimizer.scm:1397: chicken.base#gensym"));
t7=*((C_word*)lf[112]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[229];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* k9661 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9663,c,av);}
a=C_alloc(12);
t2=C_a_i_list4(&a,4,t1,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);
C_trace(C_text("optimizer.scm:1394: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[6];
av2[4]=t2;
tp(5,av2);}}

/* k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_9666,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9669,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1398: chicken.base#gensym"));
t4=*((C_word*)lf[112]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[228];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k9667 in k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(40,c,2)))){
C_save_and_reclaim((void *)f_9669,c,av);}
a=C_alloc(40);
t2=((C_word*)t0)[2];
t3=C_a_i_list1(&a,1,t1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9684,a[2]=((C_word*)t2)[2],a[3]=t3,a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t5=C_a_i_list1(&a,1,((C_word*)t2)[6]);
t6=C_a_i_list4(&a,4,t1,C_SCHEME_TRUE,t5,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9710,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9722,a[2]=((C_word*)t2)[7],a[3]=((C_word*)t2)[8],a[4]=t7,a[5]=t8,a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1406: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t9;
av2[2]=((C_word*)t2)[9];
tp(3,av2);}}

/* k9682 in k9667 in k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9684(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9684,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9688,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=C_u_i_cdr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9698,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1410: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k9686 in k9682 in k9667 in k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9688(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9688,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1399: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[20];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k9696 in k9682 in k9667 in k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,5)))){
C_save_and_reclaim((void *)f_9698,c,av);}
C_trace(C_text("optimizer.scm:1407: lp"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_9641(t2,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t1);}

/* k9708 in k9667 in k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9710(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_9710,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:1402: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[24];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
tp(5,av2);}}

/* k9720 in k9667 in k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9722(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_9722,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9726,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("optimizer.scm:1406: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[79]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[79]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* k9724 in k9720 in k9667 in k9664 in lp in k9623 in k9614 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9726,c,av);}
a=C_alloc(12);
t2=C_a_i_list4(&a,4,((C_word*)t0)[2],((C_word*)t0)[3],t1,((C_word*)t0)[4]);
C_trace(C_text("optimizer.scm:1404: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[6];
av2[4]=t2;
tp(5,av2);}}

/* k9766 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9768(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_9768,c,av);}
a=C_alloc(22);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9783,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_i_cadr(((C_word*)t0)[4]);
t5=C_a_i_list1(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9791,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9793,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9801,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1424: ##sys#call-with-values"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t6;
av2[2]=t7;
av2[3]=t8;
C_call_with_values(4,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9781 in k9766 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9783,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1419: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k9789 in k9766 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9791(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_9791,c,av);}
C_trace(C_text("optimizer.scm:1422: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[54];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a9792 in k9766 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_9793,c,av);}
a=C_alloc(5);
t2=C_a_i_fixnum_difference(&a,2,((C_word*)t0)[2],C_fix(1));
C_trace(C_text("optimizer.scm:1424: split-at"));
f_3230(t1,((C_word*)t0)[3],t2);}

/* a9800 in k9766 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9801(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9801,c,av);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9813,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1426: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2=av;
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t4;
av2[2]=C_i_caddr(((C_word*)t0)[2]);
tp(3,av2);}}

/* k9811 in a9800 in k9766 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_9813,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("optimizer.scm:1425: scheme#append"));
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9840(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_9840,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_cddddr(((C_word*)t0)[2]);
t4=C_i_car(t3);
t5=C_i_cadddr(((C_word*)t0)[2]);
t6=(C_truep(C_fast_retrieve(lf[220]))?C_i_caddr(((C_word*)t0)[2]):C_i_cadr(((C_word*)t0)[2]));
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9855,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t6,a[6]=t5,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9949,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("optimizer.scm:1442: filter"));
f_3679(t7,t8,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_12818(2,av2);}}}

/* k9853 in k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9855(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9855,c,av);}
a=C_alloc(13);
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1447: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[73]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[73]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
C_trace(C_text("optimizer.scm:1449: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}
else{
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9914,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1455: chicken.compiler.support#fold-inner"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[230]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[230]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=t1;
tp(4,av2);}}}}

/* k9874 in k9853 in k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9876,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1447: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k9910 in k9853 in k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_9912,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("optimizer.scm:1451: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[25];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a9913 in k9853 in k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9914(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_9914,c,av);}
a=C_alloc(12);
t4=C_eqp(C_fast_retrieve(lf[221]),lf[223]);
if(C_truep(t4)){
t5=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t6=C_a_i_list2(&a,2,t2,t3);
C_trace(C_text("optimizer.scm:1458: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=lf[54];
av2[3]=t5;
av2[4]=t6;
tp(5,av2);}}
else{
t5=C_a_i_list2(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t6=C_a_i_list2(&a,2,t2,t3);
C_trace(C_text("optimizer.scm:1459: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t1;
av2[2]=lf[117];
av2[3]=t5;
av2[4]=t6;
tp(5,av2);}}}

/* a9948 in k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9949(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_9949,c,av);}
a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9975,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("optimizer.scm:1444: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[36]);
C_word *av2=av;
av2[0]=*((C_word*)lf[36]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k9969 in k9973 in a9948 in k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9971(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_9971,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_eqp(((C_word*)t0)[3],t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k9973 in a9948 in k9838 in loop in k12801 in a12794 in k4713 in k4360 in k4356 in k4352 in k4348 in k3066 in k3063 in k3060 in k3057 in k3054 */
static void C_ccall f_9975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_9975,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[72],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("optimizer.scm:1445: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[38]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[38]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_optimizer_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("optimizer"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_optimizer_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1215))){
C_save(t1);
C_rereclaim2(1215*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,233);
lf[0]=C_h_intern(&lf[0],9, C_text("optimizer"));
lf[1]=C_h_intern(&lf[1],27, C_text("chicken.compiler.optimizer#"));
lf[4]=C_h_intern(&lf[4],14, C_text("scheme#reverse"));
lf[10]=C_h_intern(&lf[10],5, C_text("foldr"));
lf[11]=C_h_intern(&lf[11],45, C_text("chicken.compiler.optimizer#eq-inline-operator"));
lf[12]=C_h_intern(&lf[12],52, C_text("chicken.compiler.optimizer#membership-test-operators"));
lf[13]=C_h_intern(&lf[13],50, C_text("chicken.compiler.optimizer#membership-unfold-limit"));
lf[14]=C_h_intern(&lf[14],54, C_text("chicken.compiler.optimizer#default-optimization-passes"));
lf[15]=C_h_intern(&lf[15],52, C_text("chicken.compiler.optimizer#scan-toplevel-assignments"));
lf[16]=C_h_intern(&lf[16],26, C_text("chicken.base#alist-update!"));
lf[17]=C_h_intern(&lf[17],8, C_text("for-each"));
lf[18]=C_h_intern(&lf[18],15, C_text("##core#variable"));
lf[19]=C_h_intern(&lf[19],2, C_text("if"));
lf[20]=C_h_intern(&lf[20],3, C_text("let"));
lf[21]=C_h_intern(&lf[21],13, C_text("scheme#append"));
lf[22]=C_h_intern(&lf[22],20, C_text("chicken.base#butlast"));
lf[23]=C_h_intern(&lf[23],6, C_text("lambda"));
lf[24]=C_h_intern(&lf[24],13, C_text("##core#lambda"));
lf[25]=C_h_intern(&lf[25],11, C_text("##core#call"));
lf[26]=C_h_intern(&lf[26],4, C_text("set!"));
lf[27]=C_h_intern(&lf[27],35, C_text("chicken.compiler.support#copy-node!"));
lf[28]=C_h_intern(&lf[28],34, C_text("chicken.compiler.support#make-node"));
lf[29]=C_h_intern(&lf[29],16, C_text("##core#undefined"));
lf[30]=C_h_intern(&lf[30],34, C_text("chicken.compiler.support#debugging"));
lf[31]=C_h_intern(&lf[31],1, C_text("o"));
lf[32]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\047\144\162\157\160\160\151\156\147\040\162\145\144\165\156\144\141\156\164\040\164\157\160\154\145\166\145\154\040\141\163\163\151\147\156\155\145\156\164\000"));
lf[33]=C_h_intern(&lf[33],22, C_text("chicken.base#alist-ref"));
lf[34]=C_h_intern(&lf[34],11, C_text("##core#cond"));
lf[35]=C_h_intern(&lf[35],13, C_text("##core#switch"));
lf[36]=C_h_intern(&lf[36],35, C_text("chicken.compiler.support#node-class"));
lf[37]=C_h_intern(&lf[37],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[38]=C_h_intern(&lf[38],40, C_text("chicken.compiler.support#node-parameters"));
lf[39]=C_h_intern(&lf[39],38, C_text("chicken.compiler.support#mark-variable"));
lf[40]=C_h_intern(&lf[40],23, C_text("##compiler#always-bound"));
lf[41]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\163\141\146\145\040\147\154\157\142\141\154\163\000"));
lf[42]=C_h_intern(&lf[42],10, C_text("scheme#eq?"));
lf[43]=C_h_intern(&lf[43],1, C_text("p"));
lf[44]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\163\143\141\156\156\151\156\147\040\164\157\160\154\145\166\145\154\040\141\163\163\151\147\156\155\145\156\164\163\056\056\056\000"));
lf[49]=C_h_intern(&lf[49],59, C_text("chicken.compiler.optimizer#perform-high-level-optimizations"));
lf[50]=C_h_intern(&lf[50],31, C_text("chicken.compiler.support#db-get"));
lf[51]=C_h_intern(&lf[51],3, C_text("map"));
lf[52]=C_h_intern(&lf[52],35, C_text("chicken.compiler.support#match-node"));
lf[53]=C_h_intern(&lf[53],31, C_text("chicken.internal#hash-table-ref"));
lf[54]=C_h_intern(&lf[54],13, C_text("##core#inline"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\157\376\003\000\000\002\376\001\000\000\001\001\170\376\377\016"));
lf[56]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\153\156\157\167\156\040\154\151\163\164\040\157\160\040\157\156\040\162\145\163\164\040\141\162\147\040\163\165\142\154\151\163\164\000"));
lf[57]=C_h_intern(&lf[57],34, C_text("chicken.compiler.support#call-info"));
lf[58]=C_h_intern(&lf[58],8, C_text("assigned"));
lf[59]=C_h_intern(&lf[59],8, C_text("rest-cdr"));
lf[60]=C_h_intern(&lf[60],15, C_text("consed-rest-arg"));
lf[61]=C_h_intern(&lf[61],8, C_text("captured"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\151\137\143\141\162\000"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\165\137\151\137\143\141\162\000"));
lf[64]=C_h_intern(&lf[64],15, C_text("##core#rest-car"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\151\137\143\144\162\000"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\165\137\151\137\143\144\162\000"));
lf[67]=C_h_intern(&lf[67],15, C_text("##core#rest-cdr"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\156\165\154\154\160\000"));
lf[69]=C_h_intern(&lf[69],17, C_text("##core#rest-null?"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\013\103\137\151\137\154\145\156\147\164\150\000\376\003\000\000\002\376\002\000\000\015\103\137\165\137\151\137\154\145\156\147\164\150\000\376\377\016"));
lf[71]=C_h_intern(&lf[71],18, C_text("##core#rest-length"));
lf[72]=C_h_intern(&lf[72],5, C_text("quote"));
lf[73]=C_h_intern(&lf[73],30, C_text("chicken.compiler.support#qnode"));
lf[74]=C_h_intern(&lf[74],49, C_text("chicken.compiler.support#maybe-constant-fold-call"));
lf[75]=C_h_intern(&lf[75],32, C_text("chicken.compiler.support#db-put!"));
lf[76]=C_h_intern(&lf[76],10, C_text("replacable"));
lf[77]=C_h_intern(&lf[77],5, C_text("value"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\163\165\142\163\164\151\164\165\164\145\144\040\143\157\156\163\164\141\156\164\040\166\141\162\151\141\142\154\145\000"));
lf[79]=C_h_intern(&lf[79],32, C_text("chicken.compiler.support#varnode"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\160\162\157\160\141\147\141\164\145\144\040\147\154\157\142\141\154\040\166\141\162\151\141\142\154\145\000"));
lf[81]=C_h_intern(&lf[81],2, C_text("no"));
lf[82]=C_h_intern(&lf[82],38, C_text("chicken.compiler.support#variable-mark"));
lf[83]=C_h_intern(&lf[83],17, C_text("##compiler#inline"));
lf[84]=C_h_intern(&lf[84],11, C_text("collapsable"));
lf[85]=C_h_intern(&lf[85],6, C_text("global"));
lf[86]=C_h_intern(&lf[86],9, C_text("replacing"));
lf[87]=C_h_intern(&lf[87],12, C_text("contractable"));
lf[88]=C_h_intern(&lf[88],9, C_text("removable"));
lf[89]=C_h_intern(&lf[89],6, C_text("unused"));
lf[90]=C_h_intern(&lf[90],42, C_text("chicken.compiler.support#build-lambda-list"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\155\145\162\147\145\144\040\145\170\160\154\151\143\151\164\154\171\040\143\157\156\163\145\144\040\162\145\163\164\040\160\141\162\141\155\145\164\145\162\000"));
lf[92]=C_h_intern(&lf[92],13, C_text("explicit-rest"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\162\145\155\157\166\145\144\040\165\156\165\163\145\144\040\146\157\162\155\141\154\040\160\141\162\141\155\145\164\145\162\163\000"));
lf[94]=C_h_intern(&lf[94],27, C_text("##sys#decompose-lambda-list"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\050\155\145\162\147\145\144\040\145\170\160\154\151\143\151\164\154\171\040\143\157\156\163\145\144\040\162\145\163\164\040\160\141\162\141\155\145\164\145\162\000"));
lf[96]=C_h_intern(&lf[96],21, C_text("has-unused-parameters"));
lf[97]=C_h_intern(&lf[97],20, C_text("##core#direct_lambda"));
lf[98]=C_h_intern(&lf[98],13, C_text("inline-target"));
lf[99]=C_h_intern(&lf[99],47, C_text("chicken.compiler.support#inline-lambda-bindings"));
lf[100]=C_h_intern(&lf[100],17, C_text("chicken.base#void"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\143\157\156\164\162\141\143\164\145\144\040\160\162\157\143\145\144\165\162\145\000"));
lf[102]=C_h_intern(&lf[102],1, C_text("i"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\077\156\157\164\040\143\157\156\164\162\141\143\164\151\156\147\040\160\162\157\143\145\144\165\162\145\040\142\145\143\141\165\163\145\040\141\162\147\165\155\145\156\164\040\154\151\163\164\040\144\157\145\163\040\156\157\164\040\155\141\164\143\150\000"));
lf[104]=C_h_intern(&lf[104],40, C_text("chicken.compiler.support#check-signature"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\062\162\145\155\157\166\145\144\040\143\141\154\154\040\164\157\040\160\165\162\145\040\160\162\157\143\145\144\165\162\145\040\167\151\164\150\040\165\156\165\163\145\144\040\162\145\163\165\154\164\000"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\071\156\157\164\040\151\156\154\151\156\151\156\147\040\160\162\157\143\145\144\165\162\145\040\142\145\143\141\165\163\145\040\151\164\040\162\145\146\145\162\163\040\164\157\040\143\157\156\164\162\141\143\164\141\142\154\145\000"));
lf[107]=C_h_intern(&lf[107],37, C_text("scheme#call-with-current-continuation"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\151\156\154\151\156\151\156\147\040\160\162\157\143\145\144\165\162\145\000"));
lf[109]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\147\154\157\142\141\154\040\151\156\154\151\156\151\156\147\000"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\151\156\154\151\156\151\156\147\000"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\074\156\157\164\040\151\156\154\151\156\151\156\147\040\160\162\157\143\145\144\165\162\145\040\142\145\143\141\165\163\145\040\141\162\147\165\155\145\156\164\040\154\151\163\164\040\144\157\145\163\040\156\157\164\040\155\141\164\143\150\000"));
lf[112]=C_h_intern(&lf[112],19, C_text("chicken.base#gensym"));
lf[113]=C_h_intern(&lf[113],1, C_text("t"));
lf[114]=C_h_intern(&lf[114],53, C_text("chicken.compiler.support#expression-has-side-effects?"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\162\145\155\157\166\145\144\040\165\156\165\163\145\144\040\160\141\162\141\155\145\164\145\162\040\164\157\040\153\156\157\167\156\040\160\162\157\143\145\144\165\162\145\000"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\141\137\151\137\154\151\163\164\000"));
lf[117]=C_h_intern(&lf[117],22, C_text("##core#inline_allocate"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\043\143\157\156\163\145\144\040\162\145\163\164\040\160\141\162\141\155\145\164\145\162\040\141\164\040\143\141\154\154\040\163\151\164\145\000"));
lf[119]=C_h_intern(&lf[119],37, C_text("chicken.compiler.support#llist-length"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\156\157\164\040\151\156\154\151\156\151\156\147\040\141\163\040\165\156\162\157\154\154\055\154\151\155\151\164\040\151\163\040\145\170\143\145\145\144\145\144\000"));
lf[121]=C_h_intern(&lf[121],9, C_text("inlinable"));
lf[122]=C_h_intern(&lf[122],30, C_text("chicken.compiler.support#node?"));
lf[123]=C_h_intern(&lf[123],24, C_text("##compiler#inline-global"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\041\151\156\154\151\156\151\156\147\040\143\141\154\154\040\164\157\040\151\156\164\162\151\156\163\151\143\040\141\154\151\141\163\000"));
lf[125]=C_h_intern(&lf[125],35, C_text("chicken.compiler.support#intrinsic?"));
lf[126]=C_h_intern(&lf[126],10, C_text("references"));
lf[127]=C_h_intern(&lf[127],7, C_text("unknown"));
lf[128]=C_h_intern(&lf[128],15, C_text("##compiler#pure"));
lf[129]=C_h_intern(&lf[129],11, C_text("local-value"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\162\145\155\157\166\151\156\147\040\147\154\157\142\141\154\040\143\157\156\164\162\141\143\164\141\142\154\145\000"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\067\162\145\155\157\166\145\144\040\163\151\144\145\055\145\146\146\145\143\164\040\146\162\145\145\040\141\163\163\151\147\156\155\145\156\164\040\164\157\040\165\156\165\163\145\144\040\166\141\162\151\141\142\154\145\000"));
lf[132]=C_h_intern(&lf[132],16, C_text("inline-transient"));
lf[133]=C_h_intern(&lf[133],42, C_text("chicken.compiler.support#variable-visible?"));
lf[134]=C_h_intern(&lf[134],54, C_text("chicken.compiler.support#replace-rest-op-with-list-ops"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\067\162\145\163\145\164\164\151\156\147\040\162\145\163\164\040\157\160\040\146\157\162\040\145\170\160\154\151\143\151\164\154\171\040\143\157\156\163\145\144\040\162\145\163\164\040\160\141\162\141\155\145\164\145\162\000"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\162\145\155\157\166\145\144\040\143\157\156\144\151\164\151\157\156\141\154\040\146\157\162\155\163\000"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\162\145\155\157\166\145\144\040\142\151\156\144\151\156\147\040\146\157\162\155\163\000"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\162\145\160\154\141\143\145\144\040\166\141\162\151\141\142\154\145\163\000"));
lf[139]=C_h_intern(&lf[139],18, C_text("chicken.base#print"));
lf[140]=C_h_intern(&lf[140],14, C_text("scheme#newline"));
lf[141]=C_h_intern(&lf[141],19, C_text("chicken.base#print*"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\040\040\040\040\000"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\040\040\143\141\154\154\040\163\151\155\160\154\151\146\151\143\141\164\151\157\156\163\072\000"));
lf[144]=C_h_intern(&lf[144],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[145]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\163\151\155\160\154\151\146\151\143\141\164\151\157\156\163\000"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\164\162\141\166\145\162\163\141\154\040\160\150\141\163\145\056\056\056\000"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\122\145\155\157\166\145\144\040\140\156\157\164\047\040\146\157\162\155\163\000"));
lf[148]=C_h_intern(&lf[148],49, C_text("chicken.compiler.support#node-subexpressions-set!"));
lf[149]=C_h_intern(&lf[149],45, C_text("chicken.compiler.support#node-parameters-set!"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\006\001\376\377\016"));
lf[151]=C_h_intern(&lf[151],36, C_text("chicken.compiler.support#db-get-list"));
lf[152]=C_h_intern(&lf[152],3, C_text("not"));
lf[153]=C_h_intern(&lf[153],10, C_text("call-sites"));
lf[154]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\160\162\145\055\157\160\164\151\155\151\172\141\164\151\157\156\040\160\150\141\163\145\056\056\056\000"));
lf[156]=C_h_intern(&lf[156],34, C_text("chicken.compiler.optimizer#rewrite"));
lf[157]=C_h_intern(&lf[157],32, C_text("chicken.internal#hash-table-set!"));
lf[158]=C_h_intern(&lf[158],52, C_text("chicken.compiler.optimizer#transform-direct-lambdas!"));
lf[159]=C_h_intern(&lf[159],26, C_text("##compiler#callback-lambda"));
lf[160]=C_h_intern(&lf[160],5, C_text("boxed"));
lf[161]=C_h_intern(&lf[161],44, C_text("chicken.compiler.support#scan-used-variables"));
lf[162]=C_h_intern(&lf[162],17, C_text("##core#inline_ref"));
lf[163]=C_h_intern(&lf[163],53, C_text("chicken.compiler.support#estimate-foreign-result-size"));
lf[164]=C_h_intern(&lf[164],21, C_text("##core#inline_loc_ref"));
lf[165]=C_h_intern(&lf[165],18, C_text("##core#direct_call"));
lf[166]=C_h_intern(&lf[166],39, C_text("chicken.compiler.support#quit-compiling"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\074\153\156\157\167\156\040\160\162\157\143\145\144\165\162\145\040\143\141\154\154\145\144\040\167\151\164\150\040\167\162\157\156\147\040\156\165\155\142\145\162\040\157\146\040\141\162\147\165\155\145\156\164\163\072\040\140\176\101\047\000"));
lf[168]=C_h_intern(&lf[168],40, C_text("chicken.compiler.support#node-class-set!"));
lf[169]=C_h_intern(&lf[169],14, C_text("##core#recurse"));
lf[170]=C_h_intern(&lf[170],29, C_text("chicken.compiler.support#bomb"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\155\151\163\163\151\156\147\040\153\166\141\162\000"));
lf[172]=C_h_intern(&lf[172],13, C_text("##core#return"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\142\141\144\040\143\141\154\154\040\050\154\145\141\146\051\000"));
lf[174]=C_h_intern(&lf[174],13, C_text("scheme#cdaddr"));
lf[175]=C_h_intern(&lf[175],13, C_text("scheme#caaddr"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\151\156\166\141\154\151\144\040\160\141\162\141\155\145\164\145\162\040\154\151\163\164\000"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\067\144\151\162\145\143\164\040\154\145\141\146\040\162\157\165\164\151\156\145\040\167\151\164\150\040\150\157\151\163\164\141\142\154\145\040\143\154\157\163\165\162\145\163\057\141\154\154\157\143\141\164\151\157\156\000"));
lf[178]=C_h_intern(&lf[178],18, C_text("##sys#make-promise"));
lf[179]=C_h_intern(&lf[179],10, C_text("##sys#list"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\037\144\151\162\145\143\164\040\154\145\141\146\040\162\157\165\164\151\156\145\057\141\154\154\157\143\141\164\151\157\156\000"));
lf[181]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\051\144\151\162\145\143\164\040\154\145\141\146\040\162\157\165\164\151\156\145\040\157\160\164\151\155\151\172\141\164\151\157\156\040\160\141\163\163\056\056\056\000"));
lf[182]=C_h_intern(&lf[182],18, C_text("scheme#make-vector"));
lf[183]=C_h_intern(&lf[183],3, C_text("var"));
lf[184]=C_h_intern(&lf[184],2, C_text("d2"));
lf[185]=C_h_intern(&lf[185],1, C_text("y"));
lf[186]=C_h_intern(&lf[186],2, C_text("d3"));
lf[187]=C_h_intern(&lf[187],1, C_text("z"));
lf[188]=C_h_intern(&lf[188],2, C_text("d1"));
lf[189]=C_h_intern(&lf[189],1, C_text("x"));
lf[190]=C_h_intern(&lf[190],2, C_text("op"));
lf[191]=C_h_intern(&lf[191],5, C_text("clist"));
lf[192]=C_h_intern(&lf[192],4, C_text("var1"));
lf[193]=C_h_intern(&lf[193],4, C_text("var0"));
lf[194]=C_h_intern(&lf[194],6, C_text("const1"));
lf[195]=C_h_intern(&lf[195],4, C_text("var2"));
lf[196]=C_h_intern(&lf[196],6, C_text("const2"));
lf[197]=C_h_intern(&lf[197],5, C_text("body2"));
lf[198]=C_h_intern(&lf[198],4, C_text("rest"));
lf[199]=C_h_intern(&lf[199],5, C_text("body1"));
lf[200]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\002\376\377\016"));
lf[201]=C_h_intern(&lf[201],35, C_text("chicken.compiler.support#immediate?"));
lf[202]=C_h_intern(&lf[202],5, C_text("const"));
lf[203]=C_h_intern(&lf[203],1, C_text("n"));
lf[204]=C_h_intern(&lf[204],7, C_text("clauses"));
lf[205]=C_h_intern(&lf[205],1, C_text("d"));
lf[206]=C_h_intern(&lf[206],4, C_text("body"));
lf[207]=C_h_intern(&lf[207],4, C_text("more"));
lf[208]=C_h_intern(&lf[208],12, C_text("scheme#null?"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\143\157\156\166\145\162\164\145\144\040\141\163\163\151\147\156\155\145\156\164\163\040\164\157\040\142\151\156\144\151\156\147\163\000"));
lf[210]=C_h_intern(&lf[210],29, C_text("chicken.sort#topological-sort"));
lf[211]=C_h_intern(&lf[211],4, C_text("args"));
lf[212]=C_h_intern(&lf[212],3, C_text("op1"));
lf[213]=C_h_intern(&lf[213],5, C_text("args1"));
lf[214]=C_h_intern(&lf[214],4, C_text("kvar"));
lf[215]=C_h_intern(&lf[215],3, C_text("op2"));
lf[216]=C_h_intern(&lf[216],5, C_text("args2"));
lf[217]=C_h_intern(&lf[217],1, C_text("a"));
lf[218]=C_h_intern(&lf[218],1, C_text("b"));
lf[219]=C_h_intern(&lf[219],1, C_text("c"));
lf[220]=C_h_intern(&lf[220],31, C_text("chicken.compiler.support#unsafe"));
lf[221]=C_h_intern(&lf[221],36, C_text("chicken.compiler.support#number-type"));
lf[222]=C_h_intern(&lf[222],7, C_text("generic"));
lf[223]=C_h_intern(&lf[223],6, C_text("fixnum"));
lf[224]=C_h_intern(&lf[224],37, C_text("chicken.compiler.support#fold-boolean"));
lf[225]=C_h_intern(&lf[225],6, C_text("flonum"));
lf[226]=C_h_intern(&lf[226],11, C_text("##core#proc"));
lf[227]=C_h_intern(&lf[227],19, C_text("chicken.string#conc"));
lf[228]=C_h_intern(&lf[228],2, C_text("va"));
lf[229]=C_h_intern(&lf[229],1, C_text("r"));
lf[230]=C_h_intern(&lf[230],35, C_text("chicken.compiler.support#fold-inner"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\142\141\144\040\164\171\160\145\040\050\157\160\164\151\155\151\172\145\051\000"));
lf[232]=C_h_intern(&lf[232],21, C_text("scheme#make-parameter"));
C_register_lf2(lf,233,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3056,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[719] = {
{C_text("f_10011:optimizer_2escm"),(void*)f_10011},
{C_text("f_10035:optimizer_2escm"),(void*)f_10035},
{C_text("f_10075:optimizer_2escm"),(void*)f_10075},
{C_text("f_10095:optimizer_2escm"),(void*)f_10095},
{C_text("f_10099:optimizer_2escm"),(void*)f_10099},
{C_text("f_10103:optimizer_2escm"),(void*)f_10103},
{C_text("f_10105:optimizer_2escm"),(void*)f_10105},
{C_text("f_10111:optimizer_2escm"),(void*)f_10111},
{C_text("f_10119:optimizer_2escm"),(void*)f_10119},
{C_text("f_10125:optimizer_2escm"),(void*)f_10125},
{C_text("f_10145:optimizer_2escm"),(void*)f_10145},
{C_text("f_10149:optimizer_2escm"),(void*)f_10149},
{C_text("f_10172:optimizer_2escm"),(void*)f_10172},
{C_text("f_10245:optimizer_2escm"),(void*)f_10245},
{C_text("f_10248:optimizer_2escm"),(void*)f_10248},
{C_text("f_10252:optimizer_2escm"),(void*)f_10252},
{C_text("f_10255:optimizer_2escm"),(void*)f_10255},
{C_text("f_10258:optimizer_2escm"),(void*)f_10258},
{C_text("f_10273:optimizer_2escm"),(void*)f_10273},
{C_text("f_10304:optimizer_2escm"),(void*)f_10304},
{C_text("f_10310:optimizer_2escm"),(void*)f_10310},
{C_text("f_10316:optimizer_2escm"),(void*)f_10316},
{C_text("f_10364:optimizer_2escm"),(void*)f_10364},
{C_text("f_10372:optimizer_2escm"),(void*)f_10372},
{C_text("f_10376:optimizer_2escm"),(void*)f_10376},
{C_text("f_10402:optimizer_2escm"),(void*)f_10402},
{C_text("f_10418:optimizer_2escm"),(void*)f_10418},
{C_text("f_10430:optimizer_2escm"),(void*)f_10430},
{C_text("f_10440:optimizer_2escm"),(void*)f_10440},
{C_text("f_10459:optimizer_2escm"),(void*)f_10459},
{C_text("f_10462:optimizer_2escm"),(void*)f_10462},
{C_text("f_10466:optimizer_2escm"),(void*)f_10466},
{C_text("f_10469:optimizer_2escm"),(void*)f_10469},
{C_text("f_10472:optimizer_2escm"),(void*)f_10472},
{C_text("f_10511:optimizer_2escm"),(void*)f_10511},
{C_text("f_10529:optimizer_2escm"),(void*)f_10529},
{C_text("f_10545:optimizer_2escm"),(void*)f_10545},
{C_text("f_10566:optimizer_2escm"),(void*)f_10566},
{C_text("f_10600:optimizer_2escm"),(void*)f_10600},
{C_text("f_10616:optimizer_2escm"),(void*)f_10616},
{C_text("f_10620:optimizer_2escm"),(void*)f_10620},
{C_text("f_10625:optimizer_2escm"),(void*)f_10625},
{C_text("f_10655:optimizer_2escm"),(void*)f_10655},
{C_text("f_10659:optimizer_2escm"),(void*)f_10659},
{C_text("f_10664:optimizer_2escm"),(void*)f_10664},
{C_text("f_10706:optimizer_2escm"),(void*)f_10706},
{C_text("f_10711:optimizer_2escm"),(void*)f_10711},
{C_text("f_10748:optimizer_2escm"),(void*)f_10748},
{C_text("f_10752:optimizer_2escm"),(void*)f_10752},
{C_text("f_10759:optimizer_2escm"),(void*)f_10759},
{C_text("f_10763:optimizer_2escm"),(void*)f_10763},
{C_text("f_10791:optimizer_2escm"),(void*)f_10791},
{C_text("f_10824:optimizer_2escm"),(void*)f_10824},
{C_text("f_10835:optimizer_2escm"),(void*)f_10835},
{C_text("f_10848:optimizer_2escm"),(void*)f_10848},
{C_text("f_10881:optimizer_2escm"),(void*)f_10881},
{C_text("f_10888:optimizer_2escm"),(void*)f_10888},
{C_text("f_10890:optimizer_2escm"),(void*)f_10890},
{C_text("f_10894:optimizer_2escm"),(void*)f_10894},
{C_text("f_10898:optimizer_2escm"),(void*)f_10898},
{C_text("f_10904:optimizer_2escm"),(void*)f_10904},
{C_text("f_10910:optimizer_2escm"),(void*)f_10910},
{C_text("f_10916:optimizer_2escm"),(void*)f_10916},
{C_text("f_10919:optimizer_2escm"),(void*)f_10919},
{C_text("f_10925:optimizer_2escm"),(void*)f_10925},
{C_text("f_10928:optimizer_2escm"),(void*)f_10928},
{C_text("f_10929:optimizer_2escm"),(void*)f_10929},
{C_text("f_10936:optimizer_2escm"),(void*)f_10936},
{C_text("f_10939:optimizer_2escm"),(void*)f_10939},
{C_text("f_10945:optimizer_2escm"),(void*)f_10945},
{C_text("f_10960:optimizer_2escm"),(void*)f_10960},
{C_text("f_11002:optimizer_2escm"),(void*)f_11002},
{C_text("f_11008:optimizer_2escm"),(void*)f_11008},
{C_text("f_11017:optimizer_2escm"),(void*)f_11017},
{C_text("f_11020:optimizer_2escm"),(void*)f_11020},
{C_text("f_11026:optimizer_2escm"),(void*)f_11026},
{C_text("f_11029:optimizer_2escm"),(void*)f_11029},
{C_text("f_11037:optimizer_2escm"),(void*)f_11037},
{C_text("f_11044:optimizer_2escm"),(void*)f_11044},
{C_text("f_11048:optimizer_2escm"),(void*)f_11048},
{C_text("f_11056:optimizer_2escm"),(void*)f_11056},
{C_text("f_11061:optimizer_2escm"),(void*)f_11061},
{C_text("f_11084:optimizer_2escm"),(void*)f_11084},
{C_text("f_11111:optimizer_2escm"),(void*)f_11111},
{C_text("f_11115:optimizer_2escm"),(void*)f_11115},
{C_text("f_11119:optimizer_2escm"),(void*)f_11119},
{C_text("f_11123:optimizer_2escm"),(void*)f_11123},
{C_text("f_11127:optimizer_2escm"),(void*)f_11127},
{C_text("f_11144:optimizer_2escm"),(void*)f_11144},
{C_text("f_11153:optimizer_2escm"),(void*)f_11153},
{C_text("f_11163:optimizer_2escm"),(void*)f_11163},
{C_text("f_11176:optimizer_2escm"),(void*)f_11176},
{C_text("f_11187:optimizer_2escm"),(void*)f_11187},
{C_text("f_11189:optimizer_2escm"),(void*)f_11189},
{C_text("f_11203:optimizer_2escm"),(void*)f_11203},
{C_text("f_11207:optimizer_2escm"),(void*)f_11207},
{C_text("f_11210:optimizer_2escm"),(void*)f_11210},
{C_text("f_11213:optimizer_2escm"),(void*)f_11213},
{C_text("f_11228:optimizer_2escm"),(void*)f_11228},
{C_text("f_11231:optimizer_2escm"),(void*)f_11231},
{C_text("f_11256:optimizer_2escm"),(void*)f_11256},
{C_text("f_11259:optimizer_2escm"),(void*)f_11259},
{C_text("f_11277:optimizer_2escm"),(void*)f_11277},
{C_text("f_11287:optimizer_2escm"),(void*)f_11287},
{C_text("f_11290:optimizer_2escm"),(void*)f_11290},
{C_text("f_11293:optimizer_2escm"),(void*)f_11293},
{C_text("f_11304:optimizer_2escm"),(void*)f_11304},
{C_text("f_11316:optimizer_2escm"),(void*)f_11316},
{C_text("f_11324:optimizer_2escm"),(void*)f_11324},
{C_text("f_11328:optimizer_2escm"),(void*)f_11328},
{C_text("f_11351:optimizer_2escm"),(void*)f_11351},
{C_text("f_11354:optimizer_2escm"),(void*)f_11354},
{C_text("f_11376:optimizer_2escm"),(void*)f_11376},
{C_text("f_11401:optimizer_2escm"),(void*)f_11401},
{C_text("f_11416:optimizer_2escm"),(void*)f_11416},
{C_text("f_11426:optimizer_2escm"),(void*)f_11426},
{C_text("f_11445:optimizer_2escm"),(void*)f_11445},
{C_text("f_11455:optimizer_2escm"),(void*)f_11455},
{C_text("f_11474:optimizer_2escm"),(void*)f_11474},
{C_text("f_11514:optimizer_2escm"),(void*)f_11514},
{C_text("f_11516:optimizer_2escm"),(void*)f_11516},
{C_text("f_11524:optimizer_2escm"),(void*)f_11524},
{C_text("f_11526:optimizer_2escm"),(void*)f_11526},
{C_text("f_11536:optimizer_2escm"),(void*)f_11536},
{C_text("f_11539:optimizer_2escm"),(void*)f_11539},
{C_text("f_11557:optimizer_2escm"),(void*)f_11557},
{C_text("f_11579:optimizer_2escm"),(void*)f_11579},
{C_text("f_11597:optimizer_2escm"),(void*)f_11597},
{C_text("f_11605:optimizer_2escm"),(void*)f_11605},
{C_text("f_11607:optimizer_2escm"),(void*)f_11607},
{C_text("f_11615:optimizer_2escm"),(void*)f_11615},
{C_text("f_11627:optimizer_2escm"),(void*)f_11627},
{C_text("f_11631:optimizer_2escm"),(void*)f_11631},
{C_text("f_11639:optimizer_2escm"),(void*)f_11639},
{C_text("f_11643:optimizer_2escm"),(void*)f_11643},
{C_text("f_11654:optimizer_2escm"),(void*)f_11654},
{C_text("f_11673:optimizer_2escm"),(void*)f_11673},
{C_text("f_11677:optimizer_2escm"),(void*)f_11677},
{C_text("f_11703:optimizer_2escm"),(void*)f_11703},
{C_text("f_11718:optimizer_2escm"),(void*)f_11718},
{C_text("f_11722:optimizer_2escm"),(void*)f_11722},
{C_text("f_11784:optimizer_2escm"),(void*)f_11784},
{C_text("f_11799:optimizer_2escm"),(void*)f_11799},
{C_text("f_11816:optimizer_2escm"),(void*)f_11816},
{C_text("f_11822:optimizer_2escm"),(void*)f_11822},
{C_text("f_11835:optimizer_2escm"),(void*)f_11835},
{C_text("f_11864:optimizer_2escm"),(void*)f_11864},
{C_text("f_11870:optimizer_2escm"),(void*)f_11870},
{C_text("f_11883:optimizer_2escm"),(void*)f_11883},
{C_text("f_11917:optimizer_2escm"),(void*)f_11917},
{C_text("f_11944:optimizer_2escm"),(void*)f_11944},
{C_text("f_11965:optimizer_2escm"),(void*)f_11965},
{C_text("f_11969:optimizer_2escm"),(void*)f_11969},
{C_text("f_11977:optimizer_2escm"),(void*)f_11977},
{C_text("f_11983:optimizer_2escm"),(void*)f_11983},
{C_text("f_11996:optimizer_2escm"),(void*)f_11996},
{C_text("f_12025:optimizer_2escm"),(void*)f_12025},
{C_text("f_12031:optimizer_2escm"),(void*)f_12031},
{C_text("f_12044:optimizer_2escm"),(void*)f_12044},
{C_text("f_12048:optimizer_2escm"),(void*)f_12048},
{C_text("f_12102:optimizer_2escm"),(void*)f_12102},
{C_text("f_12126:optimizer_2escm"),(void*)f_12126},
{C_text("f_12139:optimizer_2escm"),(void*)f_12139},
{C_text("f_12147:optimizer_2escm"),(void*)f_12147},
{C_text("f_12185:optimizer_2escm"),(void*)f_12185},
{C_text("f_12195:optimizer_2escm"),(void*)f_12195},
{C_text("f_12199:optimizer_2escm"),(void*)f_12199},
{C_text("f_12202:optimizer_2escm"),(void*)f_12202},
{C_text("f_12205:optimizer_2escm"),(void*)f_12205},
{C_text("f_12235:optimizer_2escm"),(void*)f_12235},
{C_text("f_12238:optimizer_2escm"),(void*)f_12238},
{C_text("f_12241:optimizer_2escm"),(void*)f_12241},
{C_text("f_12271:optimizer_2escm"),(void*)f_12271},
{C_text("f_12298:optimizer_2escm"),(void*)f_12298},
{C_text("f_12302:optimizer_2escm"),(void*)f_12302},
{C_text("f_12305:optimizer_2escm"),(void*)f_12305},
{C_text("f_12308:optimizer_2escm"),(void*)f_12308},
{C_text("f_12314:optimizer_2escm"),(void*)f_12314},
{C_text("f_12337:optimizer_2escm"),(void*)f_12337},
{C_text("f_12352:optimizer_2escm"),(void*)f_12352},
{C_text("f_12360:optimizer_2escm"),(void*)f_12360},
{C_text("f_12362:optimizer_2escm"),(void*)f_12362},
{C_text("f_12412:optimizer_2escm"),(void*)f_12412},
{C_text("f_12420:optimizer_2escm"),(void*)f_12420},
{C_text("f_12428:optimizer_2escm"),(void*)f_12428},
{C_text("f_12436:optimizer_2escm"),(void*)f_12436},
{C_text("f_12464:optimizer_2escm"),(void*)f_12464},
{C_text("f_12472:optimizer_2escm"),(void*)f_12472},
{C_text("f_12498:optimizer_2escm"),(void*)f_12498},
{C_text("f_12511:optimizer_2escm"),(void*)f_12511},
{C_text("f_12528:optimizer_2escm"),(void*)f_12528},
{C_text("f_12532:optimizer_2escm"),(void*)f_12532},
{C_text("f_12536:optimizer_2escm"),(void*)f_12536},
{C_text("f_12547:optimizer_2escm"),(void*)f_12547},
{C_text("f_12551:optimizer_2escm"),(void*)f_12551},
{C_text("f_12625:optimizer_2escm"),(void*)f_12625},
{C_text("f_12638:optimizer_2escm"),(void*)f_12638},
{C_text("f_12644:optimizer_2escm"),(void*)f_12644},
{C_text("f_12667:optimizer_2escm"),(void*)f_12667},
{C_text("f_12671:optimizer_2escm"),(void*)f_12671},
{C_text("f_12675:optimizer_2escm"),(void*)f_12675},
{C_text("f_12684:optimizer_2escm"),(void*)f_12684},
{C_text("f_12693:optimizer_2escm"),(void*)f_12693},
{C_text("f_12697:optimizer_2escm"),(void*)f_12697},
{C_text("f_12795:optimizer_2escm"),(void*)f_12795},
{C_text("f_12803:optimizer_2escm"),(void*)f_12803},
{C_text("f_12808:optimizer_2escm"),(void*)f_12808},
{C_text("f_12818:optimizer_2escm"),(void*)f_12818},
{C_text("f_12822:optimizer_2escm"),(void*)f_12822},
{C_text("f_3056:optimizer_2escm"),(void*)f_3056},
{C_text("f_3059:optimizer_2escm"),(void*)f_3059},
{C_text("f_3062:optimizer_2escm"),(void*)f_3062},
{C_text("f_3065:optimizer_2escm"),(void*)f_3065},
{C_text("f_3068:optimizer_2escm"),(void*)f_3068},
{C_text("f_3076:optimizer_2escm"),(void*)f_3076},
{C_text("f_3090:optimizer_2escm"),(void*)f_3090},
{C_text("f_3094:optimizer_2escm"),(void*)f_3094},
{C_text("f_3100:optimizer_2escm"),(void*)f_3100},
{C_text("f_3178:optimizer_2escm"),(void*)f_3178},
{C_text("f_3196:optimizer_2escm"),(void*)f_3196},
{C_text("f_3230:optimizer_2escm"),(void*)f_3230},
{C_text("f_3236:optimizer_2escm"),(void*)f_3236},
{C_text("f_3250:optimizer_2escm"),(void*)f_3250},
{C_text("f_3284:optimizer_2escm"),(void*)f_3284},
{C_text("f_3292:optimizer_2escm"),(void*)f_3292},
{C_text("f_3300:optimizer_2escm"),(void*)f_3300},
{C_text("f_3311:optimizer_2escm"),(void*)f_3311},
{C_text("f_3324:optimizer_2escm"),(void*)f_3324},
{C_text("f_3331:optimizer_2escm"),(void*)f_3331},
{C_text("f_3338:optimizer_2escm"),(void*)f_3338},
{C_text("f_3342:optimizer_2escm"),(void*)f_3342},
{C_text("f_3354:optimizer_2escm"),(void*)f_3354},
{C_text("f_3356:optimizer_2escm"),(void*)f_3356},
{C_text("f_3403:optimizer_2escm"),(void*)f_3403},
{C_text("f_3405:optimizer_2escm"),(void*)f_3405},
{C_text("f_3439:optimizer_2escm"),(void*)f_3439},
{C_text("f_3445:optimizer_2escm"),(void*)f_3445},
{C_text("f_3467:optimizer_2escm"),(void*)f_3467},
{C_text("f_3473:optimizer_2escm"),(void*)f_3473},
{C_text("f_3479:optimizer_2escm"),(void*)f_3479},
{C_text("f_3489:optimizer_2escm"),(void*)f_3489},
{C_text("f_3503:optimizer_2escm"),(void*)f_3503},
{C_text("f_3509:optimizer_2escm"),(void*)f_3509},
{C_text("f_3523:optimizer_2escm"),(void*)f_3523},
{C_text("f_3559:optimizer_2escm"),(void*)f_3559},
{C_text("f_3565:optimizer_2escm"),(void*)f_3565},
{C_text("f_3578:optimizer_2escm"),(void*)f_3578},
{C_text("f_3592:optimizer_2escm"),(void*)f_3592},
{C_text("f_3640:optimizer_2escm"),(void*)f_3640},
{C_text("f_3654:optimizer_2escm"),(void*)f_3654},
{C_text("f_3667:optimizer_2escm"),(void*)f_3667},
{C_text("f_3679:optimizer_2escm"),(void*)f_3679},
{C_text("f_3688:optimizer_2escm"),(void*)f_3688},
{C_text("f_3696:optimizer_2escm"),(void*)f_3696},
{C_text("f_3703:optimizer_2escm"),(void*)f_3703},
{C_text("f_3717:optimizer_2escm"),(void*)f_3717},
{C_text("f_3732:optimizer_2escm"),(void*)f_3732},
{C_text("f_3740:optimizer_2escm"),(void*)f_3740},
{C_text("f_3744:optimizer_2escm"),(void*)f_3744},
{C_text("f_3748:optimizer_2escm"),(void*)f_3748},
{C_text("f_3766:optimizer_2escm"),(void*)f_3766},
{C_text("f_3805:optimizer_2escm"),(void*)f_3805},
{C_text("f_3845:optimizer_2escm"),(void*)f_3845},
{C_text("f_3904:optimizer_2escm"),(void*)f_3904},
{C_text("f_4117:optimizer_2escm"),(void*)f_4117},
{C_text("f_4135:optimizer_2escm"),(void*)f_4135},
{C_text("f_4350:optimizer_2escm"),(void*)f_4350},
{C_text("f_4354:optimizer_2escm"),(void*)f_4354},
{C_text("f_4358:optimizer_2escm"),(void*)f_4358},
{C_text("f_4362:optimizer_2escm"),(void*)f_4362},
{C_text("f_4364:optimizer_2escm"),(void*)f_4364},
{C_text("f_4367:optimizer_2escm"),(void*)f_4367},
{C_text("f_4390:optimizer_2escm"),(void*)f_4390},
{C_text("f_4395:optimizer_2escm"),(void*)f_4395},
{C_text("f_4397:optimizer_2escm"),(void*)f_4397},
{C_text("f_4402:optimizer_2escm"),(void*)f_4402},
{C_text("f_4404:optimizer_2escm"),(void*)f_4404},
{C_text("f_4420:optimizer_2escm"),(void*)f_4420},
{C_text("f_4430:optimizer_2escm"),(void*)f_4430},
{C_text("f_4443:optimizer_2escm"),(void*)f_4443},
{C_text("f_4447:optimizer_2escm"),(void*)f_4447},
{C_text("f_4450:optimizer_2escm"),(void*)f_4450},
{C_text("f_4453:optimizer_2escm"),(void*)f_4453},
{C_text("f_4465:optimizer_2escm"),(void*)f_4465},
{C_text("f_4469:optimizer_2escm"),(void*)f_4469},
{C_text("f_4471:optimizer_2escm"),(void*)f_4471},
{C_text("f_4513:optimizer_2escm"),(void*)f_4513},
{C_text("f_4516:optimizer_2escm"),(void*)f_4516},
{C_text("f_4539:optimizer_2escm"),(void*)f_4539},
{C_text("f_4550:optimizer_2escm"),(void*)f_4550},
{C_text("f_4554:optimizer_2escm"),(void*)f_4554},
{C_text("f_4587:optimizer_2escm"),(void*)f_4587},
{C_text("f_4590:optimizer_2escm"),(void*)f_4590},
{C_text("f_4593:optimizer_2escm"),(void*)f_4593},
{C_text("f_4611:optimizer_2escm"),(void*)f_4611},
{C_text("f_4618:optimizer_2escm"),(void*)f_4618},
{C_text("f_4661:optimizer_2escm"),(void*)f_4661},
{C_text("f_4664:optimizer_2escm"),(void*)f_4664},
{C_text("f_4667:optimizer_2escm"),(void*)f_4667},
{C_text("f_4680:optimizer_2escm"),(void*)f_4680},
{C_text("f_4690:optimizer_2escm"),(void*)f_4690},
{C_text("f_4711:optimizer_2escm"),(void*)f_4711},
{C_text("f_4715:optimizer_2escm"),(void*)f_4715},
{C_text("f_4720:optimizer_2escm"),(void*)f_4720},
{C_text("f_4723:optimizer_2escm"),(void*)f_4723},
{C_text("f_4737:optimizer_2escm"),(void*)f_4737},
{C_text("f_4747:optimizer_2escm"),(void*)f_4747},
{C_text("f_4749:optimizer_2escm"),(void*)f_4749},
{C_text("f_4753:optimizer_2escm"),(void*)f_4753},
{C_text("f_4767:optimizer_2escm"),(void*)f_4767},
{C_text("f_4790:optimizer_2escm"),(void*)f_4790},
{C_text("f_4794:optimizer_2escm"),(void*)f_4794},
{C_text("f_4797:optimizer_2escm"),(void*)f_4797},
{C_text("f_4805:optimizer_2escm"),(void*)f_4805},
{C_text("f_4815:optimizer_2escm"),(void*)f_4815},
{C_text("f_4821:optimizer_2escm"),(void*)f_4821},
{C_text("f_4860:optimizer_2escm"),(void*)f_4860},
{C_text("f_4874:optimizer_2escm"),(void*)f_4874},
{C_text("f_4876:optimizer_2escm"),(void*)f_4876},
{C_text("f_4916:optimizer_2escm"),(void*)f_4916},
{C_text("f_4918:optimizer_2escm"),(void*)f_4918},
{C_text("f_4925:optimizer_2escm"),(void*)f_4925},
{C_text("f_4937:optimizer_2escm"),(void*)f_4937},
{C_text("f_4973:optimizer_2escm"),(void*)f_4973},
{C_text("f_4995:optimizer_2escm"),(void*)f_4995},
{C_text("f_5005:optimizer_2escm"),(void*)f_5005},
{C_text("f_5017:optimizer_2escm"),(void*)f_5017},
{C_text("f_5021:optimizer_2escm"),(void*)f_5021},
{C_text("f_5025:optimizer_2escm"),(void*)f_5025},
{C_text("f_5029:optimizer_2escm"),(void*)f_5029},
{C_text("f_5033:optimizer_2escm"),(void*)f_5033},
{C_text("f_5037:optimizer_2escm"),(void*)f_5037},
{C_text("f_5041:optimizer_2escm"),(void*)f_5041},
{C_text("f_5045:optimizer_2escm"),(void*)f_5045},
{C_text("f_5049:optimizer_2escm"),(void*)f_5049},
{C_text("f_5074:optimizer_2escm"),(void*)f_5074},
{C_text("f_5078:optimizer_2escm"),(void*)f_5078},
{C_text("f_5080:optimizer_2escm"),(void*)f_5080},
{C_text("f_5094:optimizer_2escm"),(void*)f_5094},
{C_text("f_5097:optimizer_2escm"),(void*)f_5097},
{C_text("f_5100:optimizer_2escm"),(void*)f_5100},
{C_text("f_5103:optimizer_2escm"),(void*)f_5103},
{C_text("f_5163:optimizer_2escm"),(void*)f_5163},
{C_text("f_5176:optimizer_2escm"),(void*)f_5176},
{C_text("f_5180:optimizer_2escm"),(void*)f_5180},
{C_text("f_5187:optimizer_2escm"),(void*)f_5187},
{C_text("f_5218:optimizer_2escm"),(void*)f_5218},
{C_text("f_5222:optimizer_2escm"),(void*)f_5222},
{C_text("f_5226:optimizer_2escm"),(void*)f_5226},
{C_text("f_5230:optimizer_2escm"),(void*)f_5230},
{C_text("f_5233:optimizer_2escm"),(void*)f_5233},
{C_text("f_5238:optimizer_2escm"),(void*)f_5238},
{C_text("f_5242:optimizer_2escm"),(void*)f_5242},
{C_text("f_5245:optimizer_2escm"),(void*)f_5245},
{C_text("f_5248:optimizer_2escm"),(void*)f_5248},
{C_text("f_5257:optimizer_2escm"),(void*)f_5257},
{C_text("f_5263:optimizer_2escm"),(void*)f_5263},
{C_text("f_5269:optimizer_2escm"),(void*)f_5269},
{C_text("f_5280:optimizer_2escm"),(void*)f_5280},
{C_text("f_5284:optimizer_2escm"),(void*)f_5284},
{C_text("f_5307:optimizer_2escm"),(void*)f_5307},
{C_text("f_5317:optimizer_2escm"),(void*)f_5317},
{C_text("f_5320:optimizer_2escm"),(void*)f_5320},
{C_text("f_5337:optimizer_2escm"),(void*)f_5337},
{C_text("f_5370:optimizer_2escm"),(void*)f_5370},
{C_text("f_5373:optimizer_2escm"),(void*)f_5373},
{C_text("f_5388:optimizer_2escm"),(void*)f_5388},
{C_text("f_5396:optimizer_2escm"),(void*)f_5396},
{C_text("f_5406:optimizer_2escm"),(void*)f_5406},
{C_text("f_5408:optimizer_2escm"),(void*)f_5408},
{C_text("f_5433:optimizer_2escm"),(void*)f_5433},
{C_text("f_5443:optimizer_2escm"),(void*)f_5443},
{C_text("f_5454:optimizer_2escm"),(void*)f_5454},
{C_text("f_5472:optimizer_2escm"),(void*)f_5472},
{C_text("f_5480:optimizer_2escm"),(void*)f_5480},
{C_text("f_5490:optimizer_2escm"),(void*)f_5490},
{C_text("f_5497:optimizer_2escm"),(void*)f_5497},
{C_text("f_5515:optimizer_2escm"),(void*)f_5515},
{C_text("f_5520:optimizer_2escm"),(void*)f_5520},
{C_text("f_5526:optimizer_2escm"),(void*)f_5526},
{C_text("f_5532:optimizer_2escm"),(void*)f_5532},
{C_text("f_5538:optimizer_2escm"),(void*)f_5538},
{C_text("f_5545:optimizer_2escm"),(void*)f_5545},
{C_text("f_5560:optimizer_2escm"),(void*)f_5560},
{C_text("f_5580:optimizer_2escm"),(void*)f_5580},
{C_text("f_5587:optimizer_2escm"),(void*)f_5587},
{C_text("f_5590:optimizer_2escm"),(void*)f_5590},
{C_text("f_5607:optimizer_2escm"),(void*)f_5607},
{C_text("f_5612:optimizer_2escm"),(void*)f_5612},
{C_text("f_5619:optimizer_2escm"),(void*)f_5619},
{C_text("f_5634:optimizer_2escm"),(void*)f_5634},
{C_text("f_5654:optimizer_2escm"),(void*)f_5654},
{C_text("f_5688:optimizer_2escm"),(void*)f_5688},
{C_text("f_5700:optimizer_2escm"),(void*)f_5700},
{C_text("f_5703:optimizer_2escm"),(void*)f_5703},
{C_text("f_5710:optimizer_2escm"),(void*)f_5710},
{C_text("f_5713:optimizer_2escm"),(void*)f_5713},
{C_text("f_5722:optimizer_2escm"),(void*)f_5722},
{C_text("f_5725:optimizer_2escm"),(void*)f_5725},
{C_text("f_5729:optimizer_2escm"),(void*)f_5729},
{C_text("f_5739:optimizer_2escm"),(void*)f_5739},
{C_text("f_5746:optimizer_2escm"),(void*)f_5746},
{C_text("f_5754:optimizer_2escm"),(void*)f_5754},
{C_text("f_5756:optimizer_2escm"),(void*)f_5756},
{C_text("f_5766:optimizer_2escm"),(void*)f_5766},
{C_text("f_5780:optimizer_2escm"),(void*)f_5780},
{C_text("f_5789:optimizer_2escm"),(void*)f_5789},
{C_text("f_5792:optimizer_2escm"),(void*)f_5792},
{C_text("f_5795:optimizer_2escm"),(void*)f_5795},
{C_text("f_5814:optimizer_2escm"),(void*)f_5814},
{C_text("f_5820:optimizer_2escm"),(void*)f_5820},
{C_text("f_5823:optimizer_2escm"),(void*)f_5823},
{C_text("f_5831:optimizer_2escm"),(void*)f_5831},
{C_text("f_5838:optimizer_2escm"),(void*)f_5838},
{C_text("f_5844:optimizer_2escm"),(void*)f_5844},
{C_text("f_5850:optimizer_2escm"),(void*)f_5850},
{C_text("f_5853:optimizer_2escm"),(void*)f_5853},
{C_text("f_5854:optimizer_2escm"),(void*)f_5854},
{C_text("f_5864:optimizer_2escm"),(void*)f_5864},
{C_text("f_5867:optimizer_2escm"),(void*)f_5867},
{C_text("f_5872:optimizer_2escm"),(void*)f_5872},
{C_text("f_5875:optimizer_2escm"),(void*)f_5875},
{C_text("f_5879:optimizer_2escm"),(void*)f_5879},
{C_text("f_5886:optimizer_2escm"),(void*)f_5886},
{C_text("f_5889:optimizer_2escm"),(void*)f_5889},
{C_text("f_5911:optimizer_2escm"),(void*)f_5911},
{C_text("f_5913:optimizer_2escm"),(void*)f_5913},
{C_text("f_5923:optimizer_2escm"),(void*)f_5923},
{C_text("f_5945:optimizer_2escm"),(void*)f_5945},
{C_text("f_5954:optimizer_2escm"),(void*)f_5954},
{C_text("f_5968:optimizer_2escm"),(void*)f_5968},
{C_text("f_5985:optimizer_2escm"),(void*)f_5985},
{C_text("f_5995:optimizer_2escm"),(void*)f_5995},
{C_text("f_5998:optimizer_2escm"),(void*)f_5998},
{C_text("f_6003:optimizer_2escm"),(void*)f_6003},
{C_text("f_6028:optimizer_2escm"),(void*)f_6028},
{C_text("f_6039:optimizer_2escm"),(void*)f_6039},
{C_text("f_6043:optimizer_2escm"),(void*)f_6043},
{C_text("f_6049:optimizer_2escm"),(void*)f_6049},
{C_text("f_6055:optimizer_2escm"),(void*)f_6055},
{C_text("f_6061:optimizer_2escm"),(void*)f_6061},
{C_text("f_6076:optimizer_2escm"),(void*)f_6076},
{C_text("f_6080:optimizer_2escm"),(void*)f_6080},
{C_text("f_6092:optimizer_2escm"),(void*)f_6092},
{C_text("f_6142:optimizer_2escm"),(void*)f_6142},
{C_text("f_6154:optimizer_2escm"),(void*)f_6154},
{C_text("f_6159:optimizer_2escm"),(void*)f_6159},
{C_text("f_6165:optimizer_2escm"),(void*)f_6165},
{C_text("f_6169:optimizer_2escm"),(void*)f_6169},
{C_text("f_6176:optimizer_2escm"),(void*)f_6176},
{C_text("f_6181:optimizer_2escm"),(void*)f_6181},
{C_text("f_6191:optimizer_2escm"),(void*)f_6191},
{C_text("f_6193:optimizer_2escm"),(void*)f_6193},
{C_text("f_6218:optimizer_2escm"),(void*)f_6218},
{C_text("f_6229:optimizer_2escm"),(void*)f_6229},
{C_text("f_6237:optimizer_2escm"),(void*)f_6237},
{C_text("f_6266:optimizer_2escm"),(void*)f_6266},
{C_text("f_6279:optimizer_2escm"),(void*)f_6279},
{C_text("f_6297:optimizer_2escm"),(void*)f_6297},
{C_text("f_6303:optimizer_2escm"),(void*)f_6303},
{C_text("f_6309:optimizer_2escm"),(void*)f_6309},
{C_text("f_6334:optimizer_2escm"),(void*)f_6334},
{C_text("f_6338:optimizer_2escm"),(void*)f_6338},
{C_text("f_6342:optimizer_2escm"),(void*)f_6342},
{C_text("f_6348:optimizer_2escm"),(void*)f_6348},
{C_text("f_6351:optimizer_2escm"),(void*)f_6351},
{C_text("f_6358:optimizer_2escm"),(void*)f_6358},
{C_text("f_6372:optimizer_2escm"),(void*)f_6372},
{C_text("f_6392:optimizer_2escm"),(void*)f_6392},
{C_text("f_6396:optimizer_2escm"),(void*)f_6396},
{C_text("f_6403:optimizer_2escm"),(void*)f_6403},
{C_text("f_6418:optimizer_2escm"),(void*)f_6418},
{C_text("f_6436:optimizer_2escm"),(void*)f_6436},
{C_text("f_6439:optimizer_2escm"),(void*)f_6439},
{C_text("f_6449:optimizer_2escm"),(void*)f_6449},
{C_text("f_6451:optimizer_2escm"),(void*)f_6451},
{C_text("f_6470:optimizer_2escm"),(void*)f_6470},
{C_text("f_6476:optimizer_2escm"),(void*)f_6476},
{C_text("f_6486:optimizer_2escm"),(void*)f_6486},
{C_text("f_6490:optimizer_2escm"),(void*)f_6490},
{C_text("f_6500:optimizer_2escm"),(void*)f_6500},
{C_text("f_6504:optimizer_2escm"),(void*)f_6504},
{C_text("f_6510:optimizer_2escm"),(void*)f_6510},
{C_text("f_6517:optimizer_2escm"),(void*)f_6517},
{C_text("f_6530:optimizer_2escm"),(void*)f_6530},
{C_text("f_6538:optimizer_2escm"),(void*)f_6538},
{C_text("f_6542:optimizer_2escm"),(void*)f_6542},
{C_text("f_6548:optimizer_2escm"),(void*)f_6548},
{C_text("f_6558:optimizer_2escm"),(void*)f_6558},
{C_text("f_6562:optimizer_2escm"),(void*)f_6562},
{C_text("f_6580:optimizer_2escm"),(void*)f_6580},
{C_text("f_6583:optimizer_2escm"),(void*)f_6583},
{C_text("f_6592:optimizer_2escm"),(void*)f_6592},
{C_text("f_6599:optimizer_2escm"),(void*)f_6599},
{C_text("f_6601:optimizer_2escm"),(void*)f_6601},
{C_text("f_6626:optimizer_2escm"),(void*)f_6626},
{C_text("f_6659:optimizer_2escm"),(void*)f_6659},
{C_text("f_6665:optimizer_2escm"),(void*)f_6665},
{C_text("f_6671:optimizer_2escm"),(void*)f_6671},
{C_text("f_6680:optimizer_2escm"),(void*)f_6680},
{C_text("f_6692:optimizer_2escm"),(void*)f_6692},
{C_text("f_6698:optimizer_2escm"),(void*)f_6698},
{C_text("f_6704:optimizer_2escm"),(void*)f_6704},
{C_text("f_6713:optimizer_2escm"),(void*)f_6713},
{C_text("f_6715:optimizer_2escm"),(void*)f_6715},
{C_text("f_6725:optimizer_2escm"),(void*)f_6725},
{C_text("f_6739:optimizer_2escm"),(void*)f_6739},
{C_text("f_6740:optimizer_2escm"),(void*)f_6740},
{C_text("f_6757:optimizer_2escm"),(void*)f_6757},
{C_text("f_6781:optimizer_2escm"),(void*)f_6781},
{C_text("f_6791:optimizer_2escm"),(void*)f_6791},
{C_text("f_6810:optimizer_2escm"),(void*)f_6810},
{C_text("f_6818:optimizer_2escm"),(void*)f_6818},
{C_text("f_6822:optimizer_2escm"),(void*)f_6822},
{C_text("f_6829:optimizer_2escm"),(void*)f_6829},
{C_text("f_6833:optimizer_2escm"),(void*)f_6833},
{C_text("f_6842:optimizer_2escm"),(void*)f_6842},
{C_text("f_6851:optimizer_2escm"),(void*)f_6851},
{C_text("f_6857:optimizer_2escm"),(void*)f_6857},
{C_text("f_6864:optimizer_2escm"),(void*)f_6864},
{C_text("f_6907:optimizer_2escm"),(void*)f_6907},
{C_text("f_6913:optimizer_2escm"),(void*)f_6913},
{C_text("f_6923:optimizer_2escm"),(void*)f_6923},
{C_text("f_6933:optimizer_2escm"),(void*)f_6933},
{C_text("f_6939:optimizer_2escm"),(void*)f_6939},
{C_text("f_6967:optimizer_2escm"),(void*)f_6967},
{C_text("f_6973:optimizer_2escm"),(void*)f_6973},
{C_text("f_6977:optimizer_2escm"),(void*)f_6977},
{C_text("f_6980:optimizer_2escm"),(void*)f_6980},
{C_text("f_6983:optimizer_2escm"),(void*)f_6983},
{C_text("f_6986:optimizer_2escm"),(void*)f_6986},
{C_text("f_6989:optimizer_2escm"),(void*)f_6989},
{C_text("f_6992:optimizer_2escm"),(void*)f_6992},
{C_text("f_7021:optimizer_2escm"),(void*)f_7021},
{C_text("f_7025:optimizer_2escm"),(void*)f_7025},
{C_text("f_7030:optimizer_2escm"),(void*)f_7030},
{C_text("f_7058:optimizer_2escm"),(void*)f_7058},
{C_text("f_7068:optimizer_2escm"),(void*)f_7068},
{C_text("f_7096:optimizer_2escm"),(void*)f_7096},
{C_text("f_7136:optimizer_2escm"),(void*)f_7136},
{C_text("f_7140:optimizer_2escm"),(void*)f_7140},
{C_text("f_7147:optimizer_2escm"),(void*)f_7147},
{C_text("f_7150:optimizer_2escm"),(void*)f_7150},
{C_text("f_7153:optimizer_2escm"),(void*)f_7153},
{C_text("f_7162:optimizer_2escm"),(void*)f_7162},
{C_text("f_7163:optimizer_2escm"),(void*)f_7163},
{C_text("f_7170:optimizer_2escm"),(void*)f_7170},
{C_text("f_7176:optimizer_2escm"),(void*)f_7176},
{C_text("f_7179:optimizer_2escm"),(void*)f_7179},
{C_text("f_7185:optimizer_2escm"),(void*)f_7185},
{C_text("f_7194:optimizer_2escm"),(void*)f_7194},
{C_text("f_7206:optimizer_2escm"),(void*)f_7206},
{C_text("f_7212:optimizer_2escm"),(void*)f_7212},
{C_text("f_7221:optimizer_2escm"),(void*)f_7221},
{C_text("f_7228:optimizer_2escm"),(void*)f_7228},
{C_text("f_7231:optimizer_2escm"),(void*)f_7231},
{C_text("f_7234:optimizer_2escm"),(void*)f_7234},
{C_text("f_7249:optimizer_2escm"),(void*)f_7249},
{C_text("f_7269:optimizer_2escm"),(void*)f_7269},
{C_text("f_7273:optimizer_2escm"),(void*)f_7273},
{C_text("f_7277:optimizer_2escm"),(void*)f_7277},
{C_text("f_7287:optimizer_2escm"),(void*)f_7287},
{C_text("f_7306:optimizer_2escm"),(void*)f_7306},
{C_text("f_7310:optimizer_2escm"),(void*)f_7310},
{C_text("f_7329:optimizer_2escm"),(void*)f_7329},
{C_text("f_7349:optimizer_2escm"),(void*)f_7349},
{C_text("f_7353:optimizer_2escm"),(void*)f_7353},
{C_text("f_7360:optimizer_2escm"),(void*)f_7360},
{C_text("f_7371:optimizer_2escm"),(void*)f_7371},
{C_text("f_7381:optimizer_2escm"),(void*)f_7381},
{C_text("f_7401:optimizer_2escm"),(void*)f_7401},
{C_text("f_7404:optimizer_2escm"),(void*)f_7404},
{C_text("f_7407:optimizer_2escm"),(void*)f_7407},
{C_text("f_7422:optimizer_2escm"),(void*)f_7422},
{C_text("f_7424:optimizer_2escm"),(void*)f_7424},
{C_text("f_7430:optimizer_2escm"),(void*)f_7430},
{C_text("f_7454:optimizer_2escm"),(void*)f_7454},
{C_text("f_7467:optimizer_2escm"),(void*)f_7467},
{C_text("f_7476:optimizer_2escm"),(void*)f_7476},
{C_text("f_7479:optimizer_2escm"),(void*)f_7479},
{C_text("f_7480:optimizer_2escm"),(void*)f_7480},
{C_text("f_7490:optimizer_2escm"),(void*)f_7490},
{C_text("f_7498:optimizer_2escm"),(void*)f_7498},
{C_text("f_7506:optimizer_2escm"),(void*)f_7506},
{C_text("f_7512:optimizer_2escm"),(void*)f_7512},
{C_text("f_7525:optimizer_2escm"),(void*)f_7525},
{C_text("f_7539:optimizer_2escm"),(void*)f_7539},
{C_text("f_7540:optimizer_2escm"),(void*)f_7540},
{C_text("f_7547:optimizer_2escm"),(void*)f_7547},
{C_text("f_7555:optimizer_2escm"),(void*)f_7555},
{C_text("f_7557:optimizer_2escm"),(void*)f_7557},
{C_text("f_7570:optimizer_2escm"),(void*)f_7570},
{C_text("f_7581:optimizer_2escm"),(void*)f_7581},
{C_text("f_7587:optimizer_2escm"),(void*)f_7587},
{C_text("f_7599:optimizer_2escm"),(void*)f_7599},
{C_text("f_7602:optimizer_2escm"),(void*)f_7602},
{C_text("f_7603:optimizer_2escm"),(void*)f_7603},
{C_text("f_7616:optimizer_2escm"),(void*)f_7616},
{C_text("f_7640:optimizer_2escm"),(void*)f_7640},
{C_text("f_7664:optimizer_2escm"),(void*)f_7664},
{C_text("f_7675:optimizer_2escm"),(void*)f_7675},
{C_text("f_7687:optimizer_2escm"),(void*)f_7687},
{C_text("f_7695:optimizer_2escm"),(void*)f_7695},
{C_text("f_7711:optimizer_2escm"),(void*)f_7711},
{C_text("f_7731:optimizer_2escm"),(void*)f_7731},
{C_text("f_7742:optimizer_2escm"),(void*)f_7742},
{C_text("f_7773:optimizer_2escm"),(void*)f_7773},
{C_text("f_7782:optimizer_2escm"),(void*)f_7782},
{C_text("f_7790:optimizer_2escm"),(void*)f_7790},
{C_text("f_7808:optimizer_2escm"),(void*)f_7808},
{C_text("f_7814:optimizer_2escm"),(void*)f_7814},
{C_text("f_7824:optimizer_2escm"),(void*)f_7824},
{C_text("f_7837:optimizer_2escm"),(void*)f_7837},
{C_text("f_7847:optimizer_2escm"),(void*)f_7847},
{C_text("f_7860:optimizer_2escm"),(void*)f_7860},
{C_text("f_7870:optimizer_2escm"),(void*)f_7870},
{C_text("f_7897:optimizer_2escm"),(void*)f_7897},
{C_text("f_7947:optimizer_2escm"),(void*)f_7947},
{C_text("f_7949:optimizer_2escm"),(void*)f_7949},
{C_text("f_7953:optimizer_2escm"),(void*)f_7953},
{C_text("f_7963:optimizer_2escm"),(void*)f_7963},
{C_text("f_7972:optimizer_2escm"),(void*)f_7972},
{C_text("f_8062:optimizer_2escm"),(void*)f_8062},
{C_text("f_8065:optimizer_2escm"),(void*)f_8065},
{C_text("f_8086:optimizer_2escm"),(void*)f_8086},
{C_text("f_8136:optimizer_2escm"),(void*)f_8136},
{C_text("f_8140:optimizer_2escm"),(void*)f_8140},
{C_text("f_8144:optimizer_2escm"),(void*)f_8144},
{C_text("f_8148:optimizer_2escm"),(void*)f_8148},
{C_text("f_8152:optimizer_2escm"),(void*)f_8152},
{C_text("f_8181:optimizer_2escm"),(void*)f_8181},
{C_text("f_8208:optimizer_2escm"),(void*)f_8208},
{C_text("f_8239:optimizer_2escm"),(void*)f_8239},
{C_text("f_8256:optimizer_2escm"),(void*)f_8256},
{C_text("f_8280:optimizer_2escm"),(void*)f_8280},
{C_text("f_8291:optimizer_2escm"),(void*)f_8291},
{C_text("f_8310:optimizer_2escm"),(void*)f_8310},
{C_text("f_8353:optimizer_2escm"),(void*)f_8353},
{C_text("f_8368:optimizer_2escm"),(void*)f_8368},
{C_text("f_8376:optimizer_2escm"),(void*)f_8376},
{C_text("f_8412:optimizer_2escm"),(void*)f_8412},
{C_text("f_8445:optimizer_2escm"),(void*)f_8445},
{C_text("f_8461:optimizer_2escm"),(void*)f_8461},
{C_text("f_8507:optimizer_2escm"),(void*)f_8507},
{C_text("f_8522:optimizer_2escm"),(void*)f_8522},
{C_text("f_8534:optimizer_2escm"),(void*)f_8534},
{C_text("f_8581:optimizer_2escm"),(void*)f_8581},
{C_text("f_8596:optimizer_2escm"),(void*)f_8596},
{C_text("f_8604:optimizer_2escm"),(void*)f_8604},
{C_text("f_8612:optimizer_2escm"),(void*)f_8612},
{C_text("f_8643:optimizer_2escm"),(void*)f_8643},
{C_text("f_8664:optimizer_2escm"),(void*)f_8664},
{C_text("f_8685:optimizer_2escm"),(void*)f_8685},
{C_text("f_8694:optimizer_2escm"),(void*)f_8694},
{C_text("f_8705:optimizer_2escm"),(void*)f_8705},
{C_text("f_8714:optimizer_2escm"),(void*)f_8714},
{C_text("f_8719:optimizer_2escm"),(void*)f_8719},
{C_text("f_8744:optimizer_2escm"),(void*)f_8744},
{C_text("f_8746:optimizer_2escm"),(void*)f_8746},
{C_text("f_8786:optimizer_2escm"),(void*)f_8786},
{C_text("f_8796:optimizer_2escm"),(void*)f_8796},
{C_text("f_8821:optimizer_2escm"),(void*)f_8821},
{C_text("f_8830:optimizer_2escm"),(void*)f_8830},
{C_text("f_8855:optimizer_2escm"),(void*)f_8855},
{C_text("f_8919:optimizer_2escm"),(void*)f_8919},
{C_text("f_8928:optimizer_2escm"),(void*)f_8928},
{C_text("f_8943:optimizer_2escm"),(void*)f_8943},
{C_text("f_8951:optimizer_2escm"),(void*)f_8951},
{C_text("f_8955:optimizer_2escm"),(void*)f_8955},
{C_text("f_9008:optimizer_2escm"),(void*)f_9008},
{C_text("f_9031:optimizer_2escm"),(void*)f_9031},
{C_text("f_9035:optimizer_2escm"),(void*)f_9035},
{C_text("f_9069:optimizer_2escm"),(void*)f_9069},
{C_text("f_9115:optimizer_2escm"),(void*)f_9115},
{C_text("f_9119:optimizer_2escm"),(void*)f_9119},
{C_text("f_9148:optimizer_2escm"),(void*)f_9148},
{C_text("f_9173:optimizer_2escm"),(void*)f_9173},
{C_text("f_9177:optimizer_2escm"),(void*)f_9177},
{C_text("f_9181:optimizer_2escm"),(void*)f_9181},
{C_text("f_9218:optimizer_2escm"),(void*)f_9218},
{C_text("f_9248:optimizer_2escm"),(void*)f_9248},
{C_text("f_9301:optimizer_2escm"),(void*)f_9301},
{C_text("f_9318:optimizer_2escm"),(void*)f_9318},
{C_text("f_9322:optimizer_2escm"),(void*)f_9322},
{C_text("f_9402:optimizer_2escm"),(void*)f_9402},
{C_text("f_9423:optimizer_2escm"),(void*)f_9423},
{C_text("f_9431:optimizer_2escm"),(void*)f_9431},
{C_text("f_9514:optimizer_2escm"),(void*)f_9514},
{C_text("f_9529:optimizer_2escm"),(void*)f_9529},
{C_text("f_9582:optimizer_2escm"),(void*)f_9582},
{C_text("f_9597:optimizer_2escm"),(void*)f_9597},
{C_text("f_9616:optimizer_2escm"),(void*)f_9616},
{C_text("f_9625:optimizer_2escm"),(void*)f_9625},
{C_text("f_9641:optimizer_2escm"),(void*)f_9641},
{C_text("f_9663:optimizer_2escm"),(void*)f_9663},
{C_text("f_9666:optimizer_2escm"),(void*)f_9666},
{C_text("f_9669:optimizer_2escm"),(void*)f_9669},
{C_text("f_9684:optimizer_2escm"),(void*)f_9684},
{C_text("f_9688:optimizer_2escm"),(void*)f_9688},
{C_text("f_9698:optimizer_2escm"),(void*)f_9698},
{C_text("f_9710:optimizer_2escm"),(void*)f_9710},
{C_text("f_9722:optimizer_2escm"),(void*)f_9722},
{C_text("f_9726:optimizer_2escm"),(void*)f_9726},
{C_text("f_9768:optimizer_2escm"),(void*)f_9768},
{C_text("f_9783:optimizer_2escm"),(void*)f_9783},
{C_text("f_9791:optimizer_2escm"),(void*)f_9791},
{C_text("f_9793:optimizer_2escm"),(void*)f_9793},
{C_text("f_9801:optimizer_2escm"),(void*)f_9801},
{C_text("f_9813:optimizer_2escm"),(void*)f_9813},
{C_text("f_9840:optimizer_2escm"),(void*)f_9840},
{C_text("f_9855:optimizer_2escm"),(void*)f_9855},
{C_text("f_9876:optimizer_2escm"),(void*)f_9876},
{C_text("f_9912:optimizer_2escm"),(void*)f_9912},
{C_text("f_9914:optimizer_2escm"),(void*)f_9914},
{C_text("f_9949:optimizer_2escm"),(void*)f_9949},
{C_text("f_9971:optimizer_2escm"),(void*)f_9971},
{C_text("f_9975:optimizer_2escm"),(void*)f_9975},
{C_text("toplevel:optimizer_2escm"),(void*)C_optimizer_toplevel},
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
o|hiding unexported module binding: chicken.compiler.optimizer#partition 
o|hiding unexported module binding: chicken.compiler.optimizer#span 
o|hiding unexported module binding: chicken.compiler.optimizer#take 
o|hiding unexported module binding: chicken.compiler.optimizer#drop 
o|hiding unexported module binding: chicken.compiler.optimizer#split-at 
o|hiding unexported module binding: chicken.compiler.optimizer#append-map 
o|hiding unexported module binding: chicken.compiler.optimizer#every 
o|hiding unexported module binding: chicken.compiler.optimizer#any 
o|hiding unexported module binding: chicken.compiler.optimizer#cons* 
o|hiding unexported module binding: chicken.compiler.optimizer#concatenate 
o|hiding unexported module binding: chicken.compiler.optimizer#delete 
o|hiding unexported module binding: chicken.compiler.optimizer#first 
o|hiding unexported module binding: chicken.compiler.optimizer#second 
o|hiding unexported module binding: chicken.compiler.optimizer#third 
o|hiding unexported module binding: chicken.compiler.optimizer#fourth 
o|hiding unexported module binding: chicken.compiler.optimizer#fifth 
o|hiding unexported module binding: chicken.compiler.optimizer#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.optimizer#alist-cons 
o|hiding unexported module binding: chicken.compiler.optimizer#filter 
o|hiding unexported module binding: chicken.compiler.optimizer#filter-map 
o|hiding unexported module binding: chicken.compiler.optimizer#remove 
o|hiding unexported module binding: chicken.compiler.optimizer#unzip1 
o|hiding unexported module binding: chicken.compiler.optimizer#last 
o|hiding unexported module binding: chicken.compiler.optimizer#list-index 
o|hiding unexported module binding: chicken.compiler.optimizer#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.optimizer#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.optimizer#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.optimizer#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.optimizer#list-tabulate 
o|hiding unexported module binding: chicken.compiler.optimizer#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.optimizer#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.optimizer#length+ 
o|hiding unexported module binding: chicken.compiler.optimizer#find 
o|hiding unexported module binding: chicken.compiler.optimizer#find-tail 
o|hiding unexported module binding: chicken.compiler.optimizer#iota 
o|hiding unexported module binding: chicken.compiler.optimizer#make-list 
o|hiding unexported module binding: chicken.compiler.optimizer#posq 
o|hiding unexported module binding: chicken.compiler.optimizer#posv 
o|hiding unexported module binding: chicken.compiler.optimizer#simplifications 
o|hiding unexported module binding: chicken.compiler.optimizer#simplified-ops 
o|hiding unexported module binding: chicken.compiler.optimizer#broken-constant-nodes 
o|hiding unexported module binding: chicken.compiler.optimizer#inline-history 
o|hiding unexported module binding: chicken.compiler.optimizer#within-unrolling-limit 
o|hiding unexported module binding: chicken.compiler.optimizer#perform-pre-optimization! 
o|hiding unexported module binding: chicken.compiler.optimizer#register-simplifications 
o|hiding unexported module binding: chicken.compiler.optimizer#reorganize-recursive-bindings 
o|hiding unexported module binding: chicken.compiler.optimizer#substitution-table 
o|hiding unexported module binding: chicken.compiler.optimizer#simplify-named-call 
S|applied compiler syntax:
S|  scheme#for-each		16
S|  chicken.base#foldl		4
S|  scheme#map		11
S|  chicken.base#foldr		8
o|eliminated procedure checks: 214 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|eliminated procedure checks: 1 
o|specializations:
o|  1 (scheme#set-car! pair *)
o|  1 (scheme#length list)
o|  1 (chicken.base#sub1 fixnum)
o|  2 (scheme#cddr (pair * pair))
o|  1 (scheme#> fixnum fixnum)
o|  1 (chicken.base#add1 fixnum)
o|  1 (scheme#<= fixnum fixnum)
o|  1 (scheme#positive? fixnum)
o|  1 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#< fixnum fixnum)
o|  1 (scheme#cdar (pair pair *))
o|  16 (scheme#= fixnum fixnum)
o|  2 (scheme#set-cdr! pair *)
o|  1 (scheme#* fixnum fixnum)
o|  3 (chicken.base#sub1 *)
o|  5 (scheme#zero? *)
o|  8 (chicken.base#add1 *)
o|  65 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#eqv? * *)
o|  14 (##sys#check-list (or pair list) *)
o|  53 (scheme#cdr pair)
o|  26 (scheme#car pair)
(o e)|safe calls: 1366 
(o e)|assignments to immediate values: 9 
o|safe globals: (chicken.compiler.optimizer#posv chicken.compiler.optimizer#posq chicken.compiler.optimizer#make-list chicken.compiler.optimizer#iota chicken.compiler.optimizer#find-tail chicken.compiler.optimizer#find chicken.compiler.optimizer#length+ chicken.compiler.optimizer#lset=/eq? chicken.compiler.optimizer#lset<=/eq? chicken.compiler.optimizer#list-tabulate chicken.compiler.optimizer#lset-intersection/eq? chicken.compiler.optimizer#lset-union/eq? chicken.compiler.optimizer#lset-difference/eq? chicken.compiler.optimizer#lset-adjoin/eq? chicken.compiler.optimizer#list-index chicken.compiler.optimizer#last chicken.compiler.optimizer#unzip1 chicken.compiler.optimizer#remove chicken.compiler.optimizer#filter-map chicken.compiler.optimizer#filter chicken.compiler.optimizer#alist-cons chicken.compiler.optimizer#delete-duplicates chicken.compiler.optimizer#fifth chicken.compiler.optimizer#fourth chicken.compiler.optimizer#third chicken.compiler.optimizer#second chicken.compiler.optimizer#first chicken.compiler.optimizer#delete chicken.compiler.optimizer#concatenate chicken.compiler.optimizer#cons* chicken.compiler.optimizer#any chicken.compiler.optimizer#every chicken.compiler.optimizer#append-map chicken.compiler.optimizer#split-at chicken.compiler.optimizer#drop chicken.compiler.optimizer#take chicken.compiler.optimizer#span chicken.compiler.optimizer#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#span 
o|inlining procedure: k3180 
o|inlining procedure: k3180 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#drop 
o|inlining procedure: k3238 
o|inlining procedure: k3238 
o|inlining procedure: k3450 
o|inlining procedure: k3450 
o|inlining procedure: k3481 
o|inlining procedure: k3481 
o|merged explicitly consed rest parameter: xs213 
o|inlining procedure: k3511 
o|inlining procedure: k3511 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#concatenate 
o|inlining procedure: k3567 
o|inlining procedure: k3567 
o|inlining procedure: k3698 
o|inlining procedure: k3698 
o|inlining procedure: k3690 
o|inlining procedure: k3690 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#lset-intersection/eq? 
o|inlining procedure: k4089 
o|inlining procedure: k4089 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#posv 
o|inlining procedure: k4369 
o|inlining procedure: k4369 
o|inlining procedure: k4406 
o|inlining procedure: k4406 
o|inlining procedure: k4422 
o|inlining procedure: k4422 
o|inlining procedure: k4454 
o|inlining procedure: "(optimizer.scm:90) chicken.compiler.optimizer#first" 
o|inlining procedure: k4454 
o|inlining procedure: "(optimizer.scm:97) chicken.compiler.optimizer#first" 
o|inlining procedure: k4531 
o|contracted procedure: "(optimizer.scm:103) chicken.compiler.optimizer#last" 
o|inlining procedure: k3847 
o|inlining procedure: k3847 
o|inlining procedure: k4531 
o|inlining procedure: k4564 
o|inlining procedure: k4564 
o|inlining procedure: k4594 
o|inlining procedure: k4594 
o|inlining procedure: "(optimizer.scm:111) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:110) chicken.compiler.optimizer#first" 
o|substituted constant variable: a4630 
o|substituted constant variable: a4632 
o|substituted constant variable: a4637 
o|substituted constant variable: a4639 
o|substituted constant variable: a4641 
o|inlining procedure: k4645 
o|inlining procedure: k4645 
o|substituted constant variable: a4652 
o|substituted constant variable: a4654 
o|substituted constant variable: a4656 
o|substituted constant variable: a4658 
o|inlining procedure: k4682 
o|contracted procedure: "(optimizer.scm:132) g570638" 
o|propagated global variable: g646647 chicken.compiler.support#mark-variable 
o|inlining procedure: k4682 
o|contracted procedure: "(optimizer.scm:131) chicken.compiler.optimizer#delete-duplicates" 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|inlining procedure: k4769 
o|contracted procedure: "(optimizer.scm:173) g698705" 
o|inlining procedure: k4769 
o|inlining procedure: k4798 
o|inlining procedure: k4798 
o|inlining procedure: k4810 
o|inlining procedure: k4822 
o|inlining procedure: k4822 
o|inlining procedure: k4878 
o|inlining procedure: k4878 
o|inlining procedure: "(optimizer.scm:181) chicken.compiler.optimizer#third" 
o|inlining procedure: "(optimizer.scm:180) chicken.compiler.optimizer#first" 
o|inlining procedure: k4810 
o|inlining procedure: "(optimizer.scm:179) chicken.compiler.optimizer#second" 
o|inlining procedure: k4926 
o|inlining procedure: k4926 
o|inlining procedure: k4932 
o|inlining procedure: k4944 
o|inlining procedure: k4956 
o|inlining procedure: k4968 
o|inlining procedure: k4980 
o|inlining procedure: k4990 
o|consed rest parameter at call site: "(optimizer.scm:220) chicken.compiler.optimizer#cons*" 2 
o|inlining procedure: k4990 
o|inlining procedure: k4980 
o|inlining procedure: k4968 
o|inlining procedure: k4956 
o|inlining procedure: "(optimizer.scm:208) chicken.compiler.optimizer#first" 
o|inlining procedure: k4944 
o|inlining procedure: "(optimizer.scm:206) chicken.compiler.optimizer#first" 
o|inlining procedure: k5053 
o|inlining procedure: k5053 
o|inlining procedure: k5065 
o|inlining procedure: k5065 
o|inlining procedure: k4932 
o|inlining procedure: k5082 
o|inlining procedure: k5082 
o|inlining procedure: k5101 
o|inlining procedure: k5122 
o|inlining procedure: k5122 
o|contracted procedure: "(optimizer.scm:237) node-value681" 
o|inlining procedure: "(optimizer.scm:169) chicken.compiler.optimizer#first" 
o|contracted procedure: "(optimizer.scm:234) constant-node?680" 
o|inlining procedure: k5101 
o|inlining procedure: k5149 
o|inlining procedure: k5165 
o|contracted procedure: "(optimizer.scm:255) chicken.compiler.optimizer#lset-adjoin/eq?" 
o|inlining procedure: k3906 
o|inlining procedure: k3906 
o|propagated global variable: lst352 chicken.compiler.optimizer#broken-constant-nodes 
o|inlining procedure: k5165 
o|inlining procedure: k5149 
o|substituted constant variable: a5212 
o|substituted constant variable: a5214 
o|substituted constant variable: a5216 
o|inlining procedure: k5223 
o|inlining procedure: k5223 
o|inlining procedure: k5249 
o|inlining procedure: k5285 
o|inlining procedure: k5285 
o|inlining procedure: k5312 
o|inlining procedure: k5312 
o|inlining procedure: "(optimizer.scm:288) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:283) chicken.compiler.optimizer#first" 
o|inlining procedure: k5249 
o|inlining procedure: k5365 
o|inlining procedure: "(optimizer.scm:309) chicken.compiler.optimizer#second" 
o|inlining procedure: k5365 
o|inlining procedure: k5410 
o|inlining procedure: k5410 
o|inlining procedure: "(optimizer.scm:314) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:314) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:312) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:312) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:311) chicken.compiler.optimizer#first" 
o|inlining procedure: k5485 
o|inlining procedure: k5485 
o|inlining procedure: "(optimizer.scm:303) chicken.compiler.optimizer#first" 
o|inlining procedure: k5498 
o|contracted procedure: "(optimizer.scm:326) chicken.compiler.optimizer#partition" 
o|inlining procedure: k3078 
o|inlining procedure: k3078 
o|inlining procedure: "(optimizer.scm:338) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:337) chicken.compiler.optimizer#fourth" 
o|inlining procedure: "(optimizer.scm:331) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:331) chicken.compiler.optimizer#first" 
o|inlining procedure: k5602 
o|inlining procedure: "(optimizer.scm:351) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:350) chicken.compiler.optimizer#fourth" 
o|inlining procedure: "(optimizer.scm:348) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:347) chicken.compiler.optimizer#first" 
o|inlining procedure: k5602 
o|inlining procedure: "(optimizer.scm:321) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:320) chicken.compiler.optimizer#third" 
o|inlining procedure: k5498 
o|inlining procedure: k5677 
o|inlining procedure: k5705 
o|propagated global variable: g987988 chicken.compiler.support#db-put! 
o|inlining procedure: "(optimizer.scm:383) chicken.compiler.optimizer#first" 
o|inlining procedure: k5758 
o|inlining procedure: k5758 
o|inlining procedure: "(optimizer.scm:375) chicken.compiler.optimizer#third" 
o|inlining procedure: k5705 
o|inlining procedure: k5815 
o|inlining procedure: k5839 
o|propagated global variable: g10801081 chicken.compiler.support#db-put! 
o|inlining procedure: "(optimizer.scm:455) chicken.compiler.optimizer#first" 
o|inlining procedure: k5915 
o|inlining procedure: k5915 
o|inlining procedure: "(optimizer.scm:442) chicken.compiler.optimizer#fourth" 
o|inlining procedure: k5839 
o|inlining procedure: k5955 
o|inlining procedure: k5955 
o|inlining procedure: k5970 
o|inlining procedure: k6005 
o|inlining procedure: k6005 
o|inlining procedure: k5970 
o|inlining procedure: k6056 
o|inlining procedure: k6056 
o|inlining procedure: k6134 
o|inlining procedure: k6195 
o|inlining procedure: k6195 
o|inlining procedure: k6235 
o|inlining procedure: k6235 
o|substituted constant variable: a6252 
o|inlining procedure: k6134 
o|inlining procedure: k6274 
o|inlining procedure: k6286 
o|inlining procedure: k6304 
o|inlining procedure: k6304 
o|contracted procedure: "(optimizer.scm:432) chicken.compiler.optimizer#within-unrolling-limit" 
o|inlining procedure: k7101 
o|inlining procedure: k7101 
o|inlining procedure: k7110 
o|inlining procedure: k7110 
o|inlining procedure: k6319 
o|inlining procedure: k6319 
o|inlining procedure: "(optimizer.scm:431) chicken.compiler.optimizer#fourth" 
o|substituted constant variable: a6330 
o|inlining procedure: k6286 
o|inlining procedure: k6274 
o|inlining procedure: "(optimizer.scm:422) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:418) chicken.compiler.optimizer#third" 
o|inlining procedure: k5815 
o|inlining procedure: "(optimizer.scm:527) chicken.compiler.optimizer#first" 
o|inlining procedure: k6376 
o|inlining procedure: "(optimizer.scm:524) chicken.compiler.optimizer#first" 
o|inlining procedure: k6376 
o|inlining procedure: k6407 
o|inlining procedure: k6419 
o|inlining procedure: k6431 
o|propagated global variable: g10241025 chicken.compiler.support#expression-has-side-effects? 
o|inlining procedure: k6458 
o|inlining procedure: k6458 
o|inlining procedure: k6431 
o|inlining procedure: "(optimizer.scm:399) chicken.compiler.optimizer#third" 
o|inlining procedure: k6419 
o|inlining procedure: "(optimizer.scm:395) chicken.compiler.optimizer#first" 
o|inlining procedure: k6407 
o|inlining procedure: k6518 
o|inlining procedure: "(optimizer.scm:372) chicken.compiler.optimizer#first" 
o|inlining procedure: k6518 
o|inlining procedure: k6549 
o|inlining procedure: k6549 
o|inlining procedure: "(optimizer.scm:363) chicken.compiler.optimizer#first" 
o|inlining procedure: k6563 
o|inlining procedure: k6603 
o|inlining procedure: k6603 
o|inlining procedure: "(optimizer.scm:536) chicken.compiler.optimizer#first" 
o|inlining procedure: k6563 
o|substituted constant variable: a6642 
o|substituted constant variable: a6644 
o|inlining procedure: k5677 
o|inlining procedure: k6654 
o|inlining procedure: k6654 
o|inlining procedure: k6687 
o|inlining procedure: k6687 
o|inlining procedure: k6717 
o|inlining procedure: k6717 
o|inlining procedure: k6742 
o|substituted constant variable: a6752 
o|inlining procedure: k6742 
o|inlining procedure: k6759 
o|substituted constant variable: a6769 
o|inlining procedure: k6759 
o|inlining procedure: k6792 
o|inlining procedure: "(optimizer.scm:558) chicken.compiler.optimizer#first" 
o|inlining procedure: k6792 
o|inlining procedure: "(optimizer.scm:545) chicken.compiler.optimizer#first" 
o|inlining procedure: k6834 
o|inlining procedure: "(optimizer.scm:576) chicken.compiler.optimizer#first" 
o|inlining procedure: k6834 
o|inlining procedure: k6874 
o|inlining procedure: k6874 
o|substituted constant variable: a6887 
o|substituted constant variable: a6889 
o|substituted constant variable: a6891 
o|substituted constant variable: a6893 
o|substituted constant variable: a6895 
o|substituted constant variable: a6897 
o|substituted constant variable: a6899 
o|substituted constant variable: a6901 
o|substituted constant variable: a6903 
o|substituted constant variable: a6905 
o|inlining procedure: k6915 
o|inlining procedure: k6915 
o|inlining procedure: k6962 
o|inlining procedure: k6962 
o|inlining procedure: k7060 
o|contracted procedure: "(optimizer.scm:618) g13141321" 
o|inlining procedure: k7031 
o|inlining procedure: k7031 
o|inlining procedure: k7060 
o|propagated global variable: g13201322 chicken.compiler.optimizer#simplified-ops 
o|contracted procedure: "(optimizer.scm:606) chicken.compiler.optimizer#perform-pre-optimization!" 
o|inlining procedure: k7151 
o|inlining procedure: k7151 
o|inlining procedure: k7180 
o|inlining procedure: k7207 
o|inlining procedure: "(optimizer.scm:689) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:686) chicken.compiler.optimizer#first" 
o|inlining procedure: k7207 
o|substituted constant variable: a7288 
o|inlining procedure: "(optimizer.scm:677) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:676) chicken.compiler.optimizer#third" 
o|inlining procedure: k7180 
o|inlining procedure: k7311 
o|substituted constant variable: a7330 
o|inlining procedure: k7311 
o|substituted constant variable: a7335 
o|inlining procedure: "(optimizer.scm:669) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:669) chicken.compiler.optimizer#second" 
o|inlining procedure: k7373 
o|inlining procedure: k7373 
o|merged explicitly consed rest parameter: ss1426 
o|inlining procedure: k10259 
o|inlining procedure: "(optimizer.scm:1550) chicken.compiler.optimizer#first" 
o|inlining procedure: k10284 
o|inlining procedure: k10296 
o|inlining procedure: k10311 
o|inlining procedure: k10320 
o|inlining procedure: k10332 
o|inlining procedure: "(optimizer.scm:1548) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1548) chicken.compiler.optimizer#first" 
o|inlining procedure: k10332 
o|inlining procedure: "(optimizer.scm:1545) chicken.compiler.optimizer#first" 
o|inlining procedure: k10320 
o|inlining procedure: k10311 
o|inlining procedure: k10296 
o|inlining procedure: k10284 
o|inlining procedure: "(optimizer.scm:1536) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1534) chicken.compiler.optimizer#third" 
o|inlining procedure: k10259 
o|inlining procedure: "(optimizer.scm:1551) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1551) chicken.compiler.optimizer#first" 
o|inlining procedure: k10394 
o|inlining procedure: "(optimizer.scm:1554) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1553) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1553) chicken.compiler.optimizer#first" 
o|inlining procedure: k10394 
o|inlining procedure: k10432 
o|inlining procedure: k10432 
o|substituted constant variable: a10453 
o|substituted constant variable: a10455 
o|substituted constant variable: a10457 
o|inlining procedure: k10473 
o|inlining procedure: k10491 
o|inlining procedure: k10491 
o|inlining procedure: "(optimizer.scm:1565) chicken.compiler.optimizer#first" 
o|inlining procedure: k10473 
o|inlining procedure: k10518 
o|inlining procedure: "(optimizer.scm:1578) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1575) chicken.compiler.optimizer#third" 
o|inlining procedure: k10518 
o|inlining procedure: k10546 
o|inlining procedure: "(optimizer.scm:1582) chicken.compiler.optimizer#second" 
o|inlining procedure: k10546 
o|inlining procedure: k10581 
o|inlining procedure: k10587 
o|inlining procedure: k10587 
o|inlining procedure: "(optimizer.scm:1586) chicken.compiler.optimizer#first" 
o|inlining procedure: k10581 
o|inlining procedure: k10605 
o|inlining procedure: k10630 
o|inlining procedure: k10630 
o|inlining procedure: "(optimizer.scm:1591) chicken.compiler.optimizer#second" 
o|inlining procedure: k10605 
o|inlining procedure: k10650 
o|inlining procedure: k10650 
o|inlining procedure: k10669 
o|inlining procedure: k10669 
o|inlining procedure: "(optimizer.scm:1599) chicken.compiler.optimizer#first" 
o|inlining procedure: k10683 
o|inlining procedure: k10698 
o|inlining procedure: k10698 
o|inlining procedure: k10723 
o|inlining procedure: "(optimizer.scm:1614) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1612) chicken.compiler.optimizer#second" 
o|inlining procedure: k10723 
o|inlining procedure: "(optimizer.scm:1609) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1607) chicken.compiler.optimizer#first" 
o|inlining procedure: k10683 
o|inlining procedure: k10774 
o|inlining procedure: k10774 
o|inlining procedure: "(optimizer.scm:1620) chicken.compiler.optimizer#fourth" 
o|inlining procedure: k10796 
o|inlining procedure: "(optimizer.scm:1626) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1626) chicken.compiler.optimizer#first" 
o|inlining procedure: k10796 
o|inlining procedure: k10819 
o|inlining procedure: "(optimizer.scm:1629) chicken.compiler.optimizer#second" 
o|inlining procedure: k10819 
o|inlining procedure: "(optimizer.scm:1628) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1628) chicken.compiler.optimizer#first" 
o|substituted constant variable: a10854 
o|substituted constant variable: a10856 
o|substituted constant variable: a10858 
o|substituted constant variable: a10860 
o|substituted constant variable: a10862 
o|substituted constant variable: a10864 
o|substituted constant variable: a10866 
o|substituted constant variable: a10868 
o|substituted constant variable: a10870 
o|substituted constant variable: a10872 
o|inlining procedure: k10876 
o|contracted procedure: "(optimizer.scm:1635) chicken.compiler.optimizer#lset=/eq?" 
o|inlining procedure: k4125 
o|inlining procedure: k4125 
o|inlining procedure: k10876 
o|inlining procedure: "(optimizer.scm:1714) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1707) chicken.compiler.optimizer#second" 
o|inlining procedure: k10905 
o|inlining procedure: k11063 
o|contracted procedure: "(optimizer.scm:1739) g24772484" 
o|inlining procedure: k11063 
o|inlining procedure: k11086 
o|contracted procedure: "(optimizer.scm:1729) g24672468" 
o|inlining procedure: "(optimizer.scm:1733) chicken.compiler.optimizer#first" 
o|inlining procedure: k11086 
o|inlining procedure: k11155 
o|inlining procedure: k11155 
o|inlining procedure: k11214 
o|inlining procedure: k11238 
o|inlining procedure: "(optimizer.scm:1678) chicken.compiler.optimizer#third" 
o|inlining procedure: "(optimizer.scm:1676) chicken.compiler.optimizer#first" 
o|inlining procedure: k11274 
o|inlining procedure: k11274 
o|inlining procedure: "(optimizer.scm:1673) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1669) chicken.compiler.optimizer#first" 
o|inlining procedure: k11238 
o|inlining procedure: "(optimizer.scm:1684) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1667) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1663) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1662) chicken.compiler.optimizer#first" 
o|inlining procedure: k11214 
o|inlining procedure: k11389 
o|inlining procedure: "(optimizer.scm:1694) chicken.compiler.optimizer#second" 
o|inlining procedure: k11389 
o|inlining procedure: k11418 
o|inlining procedure: k11418 
o|inlining procedure: "(optimizer.scm:1691) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1690) chicken.compiler.optimizer#first" 
o|inlining procedure: k11447 
o|inlining procedure: k11447 
o|substituted constant variable: a11468 
o|substituted constant variable: a11470 
o|inlining procedure: "(optimizer.scm:1657) chicken.compiler.optimizer#first" 
o|inlining procedure: k10905 
o|inlining procedure: k11485 
o|inlining procedure: k11485 
o|substituted constant variable: a11500 
o|inlining procedure: "(optimizer.scm:1643) chicken.compiler.optimizer#third" 
o|contracted procedure: "(optimizer.scm:1639) chicken.compiler.optimizer#unzip1" 
o|inlining procedure: k3807 
o|contracted procedure: "(mini-srfi-1.scm:143) g316325" 
o|inlining procedure: k3807 
o|consed rest parameter at call site: "(optimizer.scm:948) chicken.compiler.optimizer#register-simplifications" 2 
o|inlining procedure: k11562 
o|inlining procedure: k11574 
o|inlining procedure: k11609 
o|inlining procedure: k11609 
o|inlining procedure: k11574 
o|inlining procedure: k11562 
o|inlining procedure: k11705 
o|inlining procedure: k11705 
o|consed rest parameter at call site: "(optimizer.scm:731) chicken.compiler.optimizer#register-simplifications" 2 
o|inlining procedure: k11786 
o|inlining procedure: k11801 
o|inlining procedure: k11801 
o|substituted constant variable: a11875 
o|inlining procedure: k11786 
o|inlining procedure: k11919 
o|inlining procedure: k11928 
o|inlining procedure: k11946 
o|inlining procedure: k11946 
o|substituted constant variable: a12036 
o|inlining procedure: k11928 
o|inlining procedure: k11919 
o|inlining procedure: k12104 
o|substituted constant variable: a12131 
o|inlining procedure: k12104 
o|inlining procedure: k12206 
o|inlining procedure: k12218 
o|inlining procedure: k12242 
o|inlining procedure: "(optimizer.scm:814) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:814) chicken.compiler.optimizer#first" 
o|inlining procedure: k12242 
o|inlining procedure: k12272 
o|inlining procedure: k12309 
o|inlining procedure: "(optimizer.scm:834) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:832) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:832) chicken.compiler.optimizer#first" 
o|inlining procedure: k12309 
o|contracted procedure: "(optimizer.scm:837) chicken.compiler.optimizer#reorganize-recursive-bindings" 
o|inlining procedure: k7432 
o|inlining procedure: k7432 
o|inlining procedure: k7482 
o|inlining procedure: k7514 
o|inlining procedure: k7514 
o|inlining procedure: k7482 
o|inlining procedure: k7559 
o|contracted procedure: "(optimizer.scm:1047) chicken.compiler.optimizer#lset<=/eq?" 
o|inlining procedure: k7559 
o|contracted procedure: "(optimizer.scm:1046) chicken.compiler.optimizer#filter-map" 
o|inlining procedure: k3745 
o|inlining procedure: k3745 
o|inlining procedure: k3734 
o|inlining procedure: k3734 
o|contracted procedure: "(optimizer.scm:1040) chicken.compiler.optimizer#append-map" 
o|inlining procedure: k3271 
o|inlining procedure: k3286 
o|inlining procedure: k3286 
o|inlining procedure: k3271 
o|inlining procedure: k3326 
o|inlining procedure: k3326 
o|inlining procedure: k3358 
o|contracted procedure: "(mini-srfi-1.scm:77) g165174" 
o|inlining procedure: k3358 
o|inlining procedure: k3407 
o|contracted procedure: "(mini-srfi-1.scm:76) g138147" 
o|inlining procedure: k3407 
o|inlining procedure: k7611 
o|inlining procedure: k7611 
o|inlining procedure: k7642 
o|contracted procedure: "(optimizer.scm:1067) g18111812" 
o|inlining procedure: k7642 
o|inlining procedure: k7689 
o|inlining procedure: k7689 
o|inlining procedure: k7774 
o|inlining procedure: k7774 
o|inlining procedure: k7792 
o|inlining procedure: k7792 
o|inlining procedure: k7816 
o|inlining procedure: k7816 
o|inlining procedure: k7839 
o|inlining procedure: k7839 
o|inlining procedure: k7862 
o|inlining procedure: k7862 
o|inlining procedure: k7899 
o|inlining procedure: k7899 
o|inlining procedure: k12364 
o|inlining procedure: k12364 
o|inlining procedure: k12370 
o|inlining procedure: k12382 
o|inlining procedure: k12394 
o|inlining procedure: "(optimizer.scm:831) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:831) chicken.compiler.optimizer#first" 
o|inlining procedure: k12394 
o|inlining procedure: "(optimizer.scm:830) chicken.compiler.optimizer#first" 
o|inlining procedure: k12382 
o|inlining procedure: "(optimizer.scm:828) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:827) chicken.compiler.optimizer#first" 
o|inlining procedure: k12370 
o|inlining procedure: "(optimizer.scm:821) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:819) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:818) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:818) chicken.compiler.optimizer#first" 
o|inlining procedure: k12272 
o|substituted constant variable: a12458 
o|substituted constant variable: a12460 
o|inlining procedure: "(optimizer.scm:810) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:809) chicken.compiler.optimizer#first" 
o|inlining procedure: k12218 
o|inlining procedure: "(optimizer.scm:808) chicken.compiler.optimizer#first" 
o|inlining procedure: k12206 
o|inlining procedure: k12500 
o|inlining procedure: k12512 
o|consed rest parameter at call site: "(optimizer.scm:783) chicken.compiler.optimizer#cons*" 2 
o|inlining procedure: k12512 
o|substituted constant variable: a12539 
o|inlining procedure: k12500 
o|inlining procedure: k12627 
o|inlining procedure: k12639 
o|inlining procedure: k12651 
o|inlining procedure: k12651 
o|substituted constant variable: a12676 
o|substituted constant variable: a12685 
o|inlining procedure: k12639 
o|inlining procedure: k12627 
o|consed rest parameter at call site: "(optimizer.scm:712) chicken.compiler.optimizer#register-simplifications" 2 
o|inlining procedure: k12810 
o|inlining procedure: k12810 
o|inlining procedure: k12827 
o|inlining procedure: k12827 
o|contracted procedure: "(optimizer.scm:720) chicken.compiler.optimizer#simplify-named-call" 
o|inlining procedure: k7977 
o|inlining procedure: k7977 
o|inlining procedure: k7986 
o|inlining procedure: k7986 
o|inlining procedure: k8051 
o|inlining procedure: k8066 
o|inlining procedure: k8066 
o|inlining procedure: "(optimizer.scm:1128) chicken.compiler.optimizer#second" 
o|inlining procedure: k8104 
o|inlining procedure: k8116 
o|inlining procedure: k8116 
o|inlining procedure: k8104 
o|inlining procedure: "(optimizer.scm:1120) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1119) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1118) chicken.compiler.optimizer#first" 
o|inlining procedure: k8051 
o|inlining procedure: k8167 
o|inlining procedure: k8176 
o|inlining procedure: "(optimizer.scm:1142) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1137) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1136) chicken.compiler.optimizer#third" 
o|inlining procedure: k8176 
o|inlining procedure: "(optimizer.scm:1134) chicken.compiler.optimizer#first" 
o|inlining procedure: k8167 
o|inlining procedure: k8225 
o|inlining procedure: k8234 
o|inlining procedure: k8258 
o|contracted procedure: "(optimizer.scm:1150) g19221923" 
o|inlining procedure: k8258 
o|inlining procedure: "(optimizer.scm:1153) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1149) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1149) chicken.compiler.optimizer#second" 
o|inlining procedure: k8234 
o|inlining procedure: k8225 
o|inlining procedure: k8336 
o|inlining procedure: k8342 
o|inlining procedure: "(optimizer.scm:1167) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1166) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1165) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1163) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1162) chicken.compiler.optimizer#first" 
o|inlining procedure: k8342 
o|substituted constant variable: a8393 
o|inlining procedure: k8336 
o|inlining procedure: k8398 
o|inlining procedure: k8407 
o|inlining procedure: k8419 
o|inlining procedure: "(optimizer.scm:1181) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1180) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1179) chicken.compiler.optimizer#first" 
o|inlining procedure: k8419 
o|inlining procedure: "(optimizer.scm:1175) chicken.compiler.optimizer#third" 
o|substituted constant variable: a8473 
o|inlining procedure: k8407 
o|inlining procedure: k8398 
o|inlining procedure: k8484 
o|inlining procedure: k8496 
o|inlining procedure: "(optimizer.scm:1192) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1191) chicken.compiler.optimizer#first" 
o|inlining procedure: k8496 
o|substituted constant variable: a8547 
o|inlining procedure: k8484 
o|inlining procedure: "(optimizer.scm:1185) chicken.compiler.optimizer#third" 
o|inlining procedure: k8552 
o|inlining procedure: k8567 
o|inlining procedure: k8576 
o|inlining procedure: "(optimizer.scm:1205) chicken.compiler.optimizer#third" 
o|inlining procedure: "(optimizer.scm:1203) chicken.compiler.optimizer#second" 
o|inlining procedure: k8576 
o|inlining procedure: "(optimizer.scm:1199) chicken.compiler.optimizer#first" 
o|inlining procedure: k8567 
o|inlining procedure: "(optimizer.scm:1197) chicken.compiler.optimizer#fourth" 
o|inlining procedure: k8552 
o|inlining procedure: k8635 
o|inlining procedure: "(optimizer.scm:1211) chicken.compiler.optimizer#first" 
o|inlining procedure: k8635 
o|inlining procedure: k8650 
o|inlining procedure: k8659 
o|inlining procedure: k8686 
o|inlining procedure: k8721 
o|inlining procedure: k8756 
o|inlining procedure: "(optimizer.scm:1234) chicken.compiler.optimizer#first" 
o|inlining procedure: k8756 
o|inlining procedure: "(optimizer.scm:1235) chicken.compiler.optimizer#second" 
o|inlining procedure: k8721 
o|inlining procedure: k8798 
o|inlining procedure: k8798 
o|inlining procedure: k8832 
o|contracted procedure: "(optimizer.scm:1223) g19791988" 
o|inlining procedure: k8832 
o|inlining procedure: k8686 
o|inlining procedure: k8866 
o|inlining procedure: k8866 
o|inlining procedure: "(optimizer.scm:1222) chicken.compiler.optimizer#fourth" 
o|inlining procedure: "(optimizer.scm:1221) chicken.compiler.optimizer#third" 
o|substituted constant variable: a8895 
o|inlining procedure: k8659 
o|inlining procedure: k8650 
o|inlining procedure: k8902 
o|inlining procedure: k8914 
o|inlining procedure: k8953 
o|inlining procedure: "(optimizer.scm:1257) chicken.compiler.optimizer#third" 
o|inlining procedure: k8953 
o|inlining procedure: "(optimizer.scm:1258) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1255) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1254) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1252) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1251) chicken.compiler.optimizer#first" 
o|inlining procedure: k8914 
o|inlining procedure: "(optimizer.scm:1247) chicken.compiler.optimizer#fourth" 
o|inlining procedure: k8902 
o|inlining procedure: k8985 
o|inlining procedure: k8994 
o|inlining procedure: k9012 
o|consed rest parameter at call site: "(optimizer.scm:1270) chicken.compiler.optimizer#cons*" 2 
o|inlining procedure: "(optimizer.scm:1270) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1269) chicken.compiler.optimizer#second" 
o|inlining procedure: k9012 
o|inlining procedure: "(optimizer.scm:1268) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1266) chicken.compiler.optimizer#first" 
o|inlining procedure: k8994 
o|inlining procedure: "(optimizer.scm:1264) chicken.compiler.optimizer#third" 
o|inlining procedure: k8985 
o|inlining procedure: k9061 
o|inlining procedure: k9070 
o|inlining procedure: k9088 
o|inlining procedure: k9088 
o|consed rest parameter at call site: "(optimizer.scm:1285) chicken.compiler.optimizer#cons*" 2 
o|inlining procedure: "(optimizer.scm:1285) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1284) chicken.compiler.optimizer#first" 
o|substituted constant variable: a9129 
o|inlining procedure: "(optimizer.scm:1281) chicken.compiler.optimizer#third" 
o|inlining procedure: k9070 
o|inlining procedure: "(optimizer.scm:1279) chicken.compiler.optimizer#second" 
o|inlining procedure: k9061 
o|inlining procedure: k9134 
o|inlining procedure: k9143 
o|inlining procedure: k9158 
o|consed rest parameter at call site: "(optimizer.scm:1297) chicken.compiler.optimizer#cons*" 2 
o|inlining procedure: "(optimizer.scm:1295) chicken.compiler.optimizer#second" 
o|inlining procedure: k9158 
o|inlining procedure: "(optimizer.scm:1294) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1293) chicken.compiler.optimizer#third" 
o|inlining procedure: k9143 
o|inlining procedure: k9134 
o|inlining procedure: k9204 
o|inlining procedure: k9213 
o|inlining procedure: k9225 
o|inlining procedure: k9254 
o|inlining procedure: "(optimizer.scm:1312) chicken.compiler.optimizer#fourth" 
o|inlining procedure: k9254 
o|inlining procedure: "(optimizer.scm:1312) chicken.compiler.optimizer#third" 
o|inlining procedure: k9225 
o|inlining procedure: "(optimizer.scm:1306) chicken.compiler.optimizer#fourth" 
o|inlining procedure: "(optimizer.scm:1305) chicken.compiler.optimizer#first" 
o|inlining procedure: k9213 
o|inlining procedure: "(optimizer.scm:1303) chicken.compiler.optimizer#second" 
o|inlining procedure: k9204 
o|inlining procedure: k9275 
o|inlining procedure: k9284 
o|inlining procedure: k9296 
o|consed rest parameter at call site: "(optimizer.scm:1324) chicken.compiler.optimizer#cons*" 2 
o|inlining procedure: "(optimizer.scm:1324) chicken.compiler.optimizer#third" 
o|inlining procedure: "(optimizer.scm:1323) chicken.compiler.optimizer#third" 
o|inlining procedure: k9331 
o|inlining procedure: k9331 
o|inlining procedure: "(optimizer.scm:1325) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1322) chicken.compiler.optimizer#first" 
o|inlining procedure: k9296 
o|propagated global variable: tmp20842086 chicken.compiler.support#unsafe 
o|propagated global variable: tmp20842086 chicken.compiler.support#unsafe 
o|inlining procedure: "(optimizer.scm:1320) chicken.compiler.optimizer#fourth" 
o|inlining procedure: k9284 
o|substituted constant variable: a9359 
o|inlining procedure: k9275 
o|inlining procedure: k9385 
o|inlining procedure: k9397 
o|inlining procedure: k9433 
o|inlining procedure: k9433 
o|inlining procedure: "(optimizer.scm:1354) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1355) chicken.compiler.optimizer#second" 
o|inlining procedure: k9472 
o|substituted constant variable: a9480 
o|inlining procedure: k9472 
o|propagated global variable: tmp21052107 chicken.compiler.support#unsafe 
o|propagated global variable: tmp21052107 chicken.compiler.support#unsafe 
o|inlining procedure: k9397 
o|inlining procedure: k9385 
o|inlining procedure: "(optimizer.scm:1342) chicken.compiler.optimizer#fourth" 
o|inlining procedure: "(optimizer.scm:1341) chicken.compiler.optimizer#third" 
o|inlining procedure: "(optimizer.scm:1339) chicken.compiler.optimizer#first" 
o|inlining procedure: k9494 
o|inlining procedure: k9503 
o|inlining procedure: k9535 
o|inlining procedure: "(optimizer.scm:1372) chicken.compiler.optimizer#third" 
o|inlining procedure: k9535 
o|inlining procedure: "(optimizer.scm:1373) chicken.compiler.optimizer#second" 
o|inlining procedure: k9503 
o|inlining procedure: "(optimizer.scm:1365) chicken.compiler.optimizer#first" 
o|inlining procedure: k9494 
o|inlining procedure: k9568 
o|inlining procedure: k9577 
o|inlining procedure: "(optimizer.scm:1381) chicken.compiler.optimizer#first" 
o|inlining procedure: k9577 
o|inlining procedure: k9568 
o|inlining procedure: k9602 
o|inlining procedure: k9611 
o|inlining procedure: k9643 
o|inlining procedure: k9643 
o|substituted constant variable: a9735 
o|inlining procedure: k9611 
o|inlining procedure: k9602 
o|inlining procedure: k9745 
o|inlining procedure: k9757 
o|inlining procedure: "(optimizer.scm:1426) chicken.compiler.optimizer#third" 
o|inlining procedure: "(optimizer.scm:1423) chicken.compiler.optimizer#second" 
o|inlining procedure: k9757 
o|inlining procedure: "(optimizer.scm:1417) chicken.compiler.optimizer#first" 
o|inlining procedure: k9745 
o|inlining procedure: "(optimizer.scm:1415) chicken.compiler.optimizer#fourth" 
o|inlining procedure: k9826 
o|inlining procedure: k9835 
o|inlining procedure: k9877 
o|inlining procedure: "(optimizer.scm:1449) chicken.compiler.optimizer#first" 
o|inlining procedure: k9877 
o|inlining procedure: k9916 
o|inlining procedure: k9916 
o|inlining procedure: k9955 
o|inlining procedure: "(optimizer.scm:1445) chicken.compiler.optimizer#first" 
o|inlining procedure: k9955 
o|inlining procedure: "(optimizer.scm:1440) chicken.compiler.optimizer#third" 
o|inlining procedure: "(optimizer.scm:1440) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1439) chicken.compiler.optimizer#fourth" 
o|inlining procedure: "(optimizer.scm:1437) chicken.compiler.optimizer#first" 
o|inlining procedure: k9835 
o|inlining procedure: k9826 
o|inlining procedure: k9997 
o|inlining procedure: k10006 
o|inlining procedure: k10033 
o|inlining procedure: k10033 
o|inlining procedure: "(optimizer.scm:1482) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1471) chicken.compiler.optimizer#third" 
o|inlining procedure: k10006 
o|inlining procedure: k9997 
o|inlining procedure: "(optimizer.scm:1467) chicken.compiler.optimizer#fourth" 
o|inlining procedure: "(optimizer.scm:1465) chicken.compiler.optimizer#first" 
o|inlining procedure: k10061 
o|inlining procedure: k10070 
o|consed rest parameter at call site: "(optimizer.scm:1496) chicken.compiler.optimizer#cons*" 2 
o|inlining procedure: k10127 
o|contracted procedure: "(optimizer.scm:1507) defarg1870" 
o|inlining procedure: k8018 
o|inlining procedure: k8018 
o|inlining procedure: k10127 
o|inlining procedure: "(optimizer.scm:1497) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1495) chicken.compiler.optimizer#second" 
o|inlining procedure: "(optimizer.scm:1493) chicken.compiler.optimizer#first" 
o|inlining procedure: "(optimizer.scm:1492) chicken.compiler.optimizer#first" 
o|inlining procedure: k10070 
o|inlining procedure: k10061 
o|substituted constant variable: a10199 
o|substituted constant variable: a10201 
o|substituted constant variable: a10203 
o|substituted constant variable: a10205 
o|substituted constant variable: a10207 
o|substituted constant variable: a10209 
o|substituted constant variable: a10211 
o|substituted constant variable: a10213 
o|substituted constant variable: a10215 
o|substituted constant variable: a10217 
o|substituted constant variable: a10219 
o|substituted constant variable: a10221 
o|substituted constant variable: a10223 
o|substituted constant variable: a10225 
o|substituted constant variable: a10227 
o|substituted constant variable: a10229 
o|substituted constant variable: a10231 
o|substituted constant variable: a10233 
o|substituted constant variable: a10235 
o|substituted constant variable: a10237 
o|substituted constant variable: a10239 
o|substituted constant variable: a10241 
o|substituted constant variable: a10243 
o|replaced variables: 2809 
o|removed binding forms: 392 
o|substituted constant variable: r318112877 
o|substituted constant variable: r348212883 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#fourth 
o|substituted constant variable: r369112892 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#list-tabulate 
o|substituted constant variable: r482312959 
o|substituted constant variable: r481112972 
o|substituted constant variable: r499112986 
o|substituted constant variable: r498112987 
o|substituted constant variable: r496912988 
o|substituted constant variable: r495712989 
o|substituted constant variable: r494512995 
o|substituted constant variable: r505413001 
o|substituted constant variable: r506613003 
o|substituted constant variable: r506613004 
o|substituted constant variable: r493313005 
o|inlining procedure: k5101 
o|inlining procedure: k5171 
o|inlining procedure: k5171 
o|inlining procedure: k5101 
o|substituted constant variable: r548613081 
o|converted assignments to bindings: (cfk1088) 
o|substituted constant variable: r630513192 
o|substituted constant variable: r711113196 
o|substituted constant variable: r628713204 
o|substituted constant variable: r627513205 
o|substituted constant variable: r637713228 
o|substituted constant variable: r645913233 
o|substituted constant variable: r643213234 
o|substituted constant variable: r642013240 
o|substituted constant variable: r640813246 
o|substituted constant variable: r651913253 
o|inlining procedure: k6663 
o|substituted constant variable: r679313287 
o|substituted constant variable: r731213339 
o|substituted constant variable: r1033313373 
o|substituted constant variable: r1032113379 
o|substituted constant variable: r1031213380 
o|substituted constant variable: r1029713381 
o|substituted constant variable: r1028513382 
o|substituted constant variable: r1051913443 
o|substituted constant variable: r1058813452 
o|substituted constant variable: r1058813453 
o|substituted constant variable: r1058213459 
o|substituted constant variable: r1063113461 
o|substituted constant variable: r1063113462 
o|substituted constant variable: r1065113470 
o|substituted constant variable: r1067013471 
o|substituted constant variable: r1067013472 
o|substituted constant variable: r1069913480 
o|substituted constant variable: r1072413481 
o|inlining procedure: k10730 
o|inlining procedure: k10730 
o|substituted constant variable: r1072413492 
o|substituted constant variable: r1082013529 
o|substituted constant variable: r412613542 
o|substituted constant variable: r1087713543 
o|substituted constant variable: r1148613640 
o|inlining procedure: "(optimizer.scm:948) chicken.compiler.optimizer#register-simplifications" 
o|substituted constant variable: r1157513652 
o|substituted constant variable: r1156313653 
o|substituted constant variable: r1170613655 
o|inlining procedure: "(optimizer.scm:731) chicken.compiler.optimizer#register-simplifications" 
o|substituted constant variable: r1178713659 
o|substituted constant variable: r1192913664 
o|substituted constant variable: r1192013665 
o|substituted constant variable: r1210513667 
o|substituted constant variable: r743313701 
o|substituted constant variable: r751513704 
o|substituted constant variable: r756013707 
o|substituted constant variable: r373513711 
o|substituted constant variable: r328713714 
o|substituted constant variable: r332713716 
o|converted assignments to bindings: (find-path1701) 
o|substituted constant variable: r1236513741 
o|substituted constant variable: r1239513755 
o|substituted constant variable: r1238313761 
o|substituted constant variable: r1237113772 
o|substituted constant variable: r1227313793 
o|substituted constant variable: r1221913804 
o|substituted constant variable: r1220713810 
o|substituted constant variable: r1251313813 
o|substituted constant variable: r1250113814 
o|substituted constant variable: r1265213818 
o|substituted constant variable: r1264013819 
o|substituted constant variable: r1262813820 
o|inlining procedure: "(optimizer.scm:712) chicken.compiler.optimizer#register-simplifications" 
o|substituted constant variable: r1281113821 
o|substituted constant variable: r798713830 
o|substituted constant variable: r811713841 
o|substituted constant variable: r810513842 
o|substituted constant variable: r817713876 
o|substituted constant variable: r816813882 
o|substituted constant variable: r823513902 
o|substituted constant variable: r834313931 
o|substituted constant variable: r833713932 
o|substituted constant variable: r842013951 
o|substituted constant variable: r840813957 
o|substituted constant variable: r849713971 
o|substituted constant variable: r848513972 
o|substituted constant variable: r857713991 
o|substituted constant variable: r856813997 
o|substituted constant variable: r863614010 
o|substituted constant variable: r868714034 
o|substituted constant variable: r866014047 
o|substituted constant variable: r891514085 
o|substituted constant variable: r890314091 
o|substituted constant variable: r901314105 
o|substituted constant variable: r899514116 
o|substituted constant variable: r907114142 
o|substituted constant variable: r906214148 
o|substituted constant variable: r915914157 
o|substituted constant variable: r914414168 
o|substituted constant variable: r922614187 
o|substituted constant variable: r921414198 
o|substituted constant variable: r920514204 
o|substituted constant variable: r933214219 
o|substituted constant variable: r929714230 
o|substituted constant variable: r928514236 
o|inlining procedure: k9433 
o|substituted constant variable: r947314255 
o|substituted constant variable: r939814256 
o|substituted constant variable: r938614257 
o|substituted constant variable: r950414289 
o|substituted constant variable: r957814303 
o|substituted constant variable: r956914304 
o|substituted constant variable: r961214309 
o|substituted constant variable: r975814323 
o|substituted constant variable: r974614329 
o|substituted constant variable: r995614353 
o|substituted constant variable: r995614353 
o|folded constant expression: (scheme#not (quote #f)) 
o|substituted constant variable: r983614375 
o|substituted constant variable: r1000714393 
o|substituted constant variable: r999814394 
o|substituted constant variable: r1007114431 
o|simplifications: ((let . 2)) 
o|replaced variables: 1085 
o|removed binding forms: 2246 
o|inlining procedure: k4831 
o|inlining procedure: "(optimizer.scm:187) chicken.compiler.optimizer#alist-cons" 
o|inlining procedure: k4795 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: k4923 
o|inlining procedure: "(optimizer.scm:314) chicken.compiler.optimizer#alist-cons" 
o|inlining procedure: "(optimizer.scm:458) chicken.compiler.optimizer#alist-cons" 
o|inlining procedure: k6990 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#register-simplifications 
o|inlining procedure: "(optimizer.scm:1588) chicken.compiler.optimizer#alist-cons" 
o|substituted constant variable: r107241348114543 
o|substituted constant variable: r107241348114546 
o|inlining procedure: "(optimizer.scm:1668) chicken.compiler.optimizer#alist-cons" 
o|inlining procedure: "(optimizer.scm:1693) chicken.compiler.optimizer#alist-cons" 
o|substituted constant variable: class142514576 
o|substituted constant variable: class142514584 
o|inlining procedure: "(optimizer.scm:1018) chicken.compiler.optimizer#alist-cons" 
o|inlining procedure: "(optimizer.scm:1030) chicken.compiler.optimizer#alist-cons" 
o|inlining procedure: "(optimizer.scm:1044) chicken.compiler.optimizer#alist-cons" 
o|substituted constant variable: class142514647 
o|inlining procedure: "(optimizer.scm:726) chicken.compiler.optimizer#alist-cons" 
o|removed call to pure procedure with unused result: "(optimizer.scm:1223) ##sys#slot" 
o|inlining procedure: "(optimizer.scm:1343) chicken.compiler.optimizer#fifth" 
o|inlining procedure: "(optimizer.scm:1438) chicken.compiler.optimizer#fifth" 
o|inlining procedure: "(optimizer.scm:1478) chicken.compiler.optimizer#fifth" 
o|replaced variables: 8 
o|removed binding forms: 851 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.optimizer#alist-cons 
o|substituted constant variable: y25514712 
o|substituted constant variable: r479614719 
o|substituted constant variable: r479614719 
o|substituted constant variable: r492414722 
o|substituted constant variable: r492414722 
o|substituted constant variable: r492414725 
o|substituted constant variable: r492414725 
o|substituted constant variable: r492414728 
o|substituted constant variable: r492414728 
o|substituted constant variable: r492414731 
o|substituted constant variable: r492414731 
o|substituted constant variable: r492414734 
o|substituted constant variable: r492414734 
o|substituted constant variable: r492414737 
o|substituted constant variable: r492414737 
o|substituted constant variable: r492414740 
o|substituted constant variable: r492414740 
o|substituted constant variable: r492414743 
o|substituted constant variable: r492414743 
o|substituted constant variable: r492414746 
o|substituted constant variable: r492414746 
o|substituted constant variable: r492414749 
o|substituted constant variable: r492414749 
o|substituted constant variable: r492414752 
o|substituted constant variable: r492414752 
o|substituted constant variable: r492414755 
o|substituted constant variable: r492414755 
o|substituted constant variable: x25414825 
o|substituted constant variable: y25514905 
o|contracted procedure: k8857 
o|inlining procedure: k9538 
o|replaced variables: 34 
o|removed binding forms: 43 
o|removed conditional forms: 13 
o|substituted constant variable: r953915073 
o|removed binding forms: 53 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|simplifications: ((if . 45) (let . 38) (##core#call . 1180)) 
o|  call simplifications:
o|    scheme#>=
o|    scheme#symbol?
o|    chicken.fixnum#fx>
o|    scheme#cddddr	4
o|    scheme#*
o|    scheme#<=
o|    chicken.fixnum#fx<
o|    scheme#=	10
o|    chicken.base#fixnum?
o|    chicken.fixnum#fx=
o|    ##sys#cons	17
o|    ##sys#list	87
o|    scheme#assoc
o|    scheme#set-car!
o|    scheme#list?	5
o|    scheme#>	5
o|    scheme#length	39
o|    scheme#<	6
o|    ##sys#call-with-values	6
o|    scheme#cadddr	15
o|    scheme#+	8
o|    scheme#cddr	6
o|    scheme#member	4
o|    scheme#list	133
o|    scheme#cadr	51
o|    scheme#caddr	29
o|    ##sys#setslot	14
o|    scheme#apply	2
o|    scheme#caar	2
o|    scheme#assq	10
o|    scheme#set-cdr!	3
o|    scheme#equal?	6
o|    scheme#cdr	36
o|    scheme#eq?	139
o|    scheme#memq	16
o|    ##sys#check-list	26
o|    scheme#pair?	53
o|    ##sys#slot	86
o|    scheme#null?	31
o|    scheme#not	59
o|    scheme#values	7
o|    chicken.fixnum#fx<=	3
o|    scheme#car	163
o|    chicken.fixnum#fx-	2
o|    scheme#cons	87
o|contracted procedure: k3183 
o|contracted procedure: k3190 
o|contracted procedure: k3200 
o|contracted procedure: k3241 
o|contracted procedure: k3255 
o|contracted procedure: k3265 
o|contracted procedure: k3259 
o|contracted procedure: k3447 
o|contracted procedure: k3456 
o|contracted procedure: k3469 
o|contracted procedure: k3484 
o|contracted procedure: k3499 
o|contracted procedure: k3514 
o|contracted procedure: k3525 
o|contracted procedure: k3570 
o|contracted procedure: k3596 
o|contracted procedure: k3681 
o|contracted procedure: k3693 
o|contracted procedure: k3711 
o|contracted procedure: k3719 
o|contracted procedure: k4376 
o|contracted procedure: k4379 
o|contracted procedure: k4386 
o|contracted procedure: k4413 
o|contracted procedure: k4425 
o|contracted procedure: k4435 
o|contracted procedure: k4439 
o|contracted procedure: k4457 
o|contracted procedure: k4460 
o|contracted procedure: k4481 
o|contracted procedure: k4477 
o|contracted procedure: k4488 
o|contracted procedure: k4502 
o|contracted procedure: k4491 
o|contracted procedure: k4498 
o|contracted procedure: k4508 
o|contracted procedure: k4524 
o|contracted procedure: k4528 
o|contracted procedure: k4534 
o|contracted procedure: k3860 
o|contracted procedure: k3850 
o|contracted procedure: k4558 
o|contracted procedure: k4561 
o|contracted procedure: k4567 
o|contracted procedure: k4576 
o|contracted procedure: k4579 
o|contracted procedure: k4582 
o|contracted procedure: k4600 
o|contracted procedure: k4623 
o|contracted procedure: k4642 
o|contracted procedure: k4673 
o|contracted procedure: k4685 
o|contracted procedure: k4695 
o|contracted procedure: k4699 
o|contracted procedure: k4702 
o|contracted procedure: k3645 
o|contracted procedure: k3648 
o|contracted procedure: k3658 
o|contracted procedure: k4760 
o|contracted procedure: k4772 
o|contracted procedure: k4786 
o|contracted procedure: k4775 
o|contracted procedure: k4782 
o|contracted procedure: k4807 
o|contracted procedure: k4825 
o|contracted procedure: k4828 
o|contracted procedure: k4845 
o|contracted procedure: k4831 
o|contracted procedure: k367514716 
o|contracted procedure: k4849 
o|contracted procedure: k4853 
o|contracted procedure: k4857 
o|contracted procedure: k4866 
o|contracted procedure: k4869 
o|contracted procedure: k4881 
o|contracted procedure: k4884 
o|contracted procedure: k4887 
o|contracted procedure: k4895 
o|contracted procedure: k4903 
o|contracted procedure: k4910 
o|contracted procedure: k4920 
o|contracted procedure: k4929 
o|contracted procedure: k4941 
o|contracted procedure: k4947 
o|contracted procedure: k4953 
o|contracted procedure: k4959 
o|contracted procedure: k4965 
o|contracted procedure: k4977 
o|contracted procedure: k4987 
o|contracted procedure: k5007 
o|contracted procedure: k5011 
o|contracted procedure: k5050 
o|contracted procedure: k5056 
o|contracted procedure: k5062 
o|contracted procedure: k5068 
o|contracted procedure: k5085 
o|contracted procedure: k5104 
o|contracted procedure: k5137 
o|contracted procedure: k5110 
o|contracted procedure: k5125 
o|contracted procedure: k5122 
o|contracted procedure: k5143 
o|contracted procedure: k5152 
o|contracted procedure: k5204 
o|contracted procedure: k5208 
o|contracted procedure: k5159 
o|contracted procedure: k5168 
o|contracted procedure: k3909 
o|contracted procedure: k3935 
o|contracted procedure: k3915 
o|contracted procedure: k3929 
o|contracted procedure: k5192 
o|contracted procedure: k5200 
o|contracted procedure: k5196 
o|contracted procedure: k5252 
o|contracted procedure: k5274 
o|contracted procedure: k5349 
o|contracted procedure: k5345 
o|contracted procedure: k5288 
o|contracted procedure: k5295 
o|contracted procedure: k5301 
o|contracted procedure: k5309 
o|contracted procedure: k5331 
o|contracted procedure: k5353 
o|contracted procedure: k5359 
o|contracted procedure: k5362 
o|contracted procedure: k5383 
o|contracted procedure: k5393 
o|contracted procedure: k5401 
o|contracted procedure: k5413 
o|contracted procedure: k5416 
o|contracted procedure: k5419 
o|contracted procedure: k5427 
o|contracted procedure: k5435 
o|contracted procedure: k5448 
o|contracted procedure: k367514768 
o|contracted procedure: k5456 
o|contracted procedure: k5459 
o|contracted procedure: k5466 
o|contracted procedure: k5474 
o|contracted procedure: k5482 
o|contracted procedure: k5501 
o|contracted procedure: k5504 
o|contracted procedure: k5507 
o|contracted procedure: k3081 
o|contracted procedure: k3105 
o|contracted procedure: k3116 
o|contracted procedure: k3124 
o|contracted procedure: k5570 
o|contracted procedure: k5574 
o|contracted procedure: k5582 
o|contracted procedure: k5550 
o|contracted procedure: k5554 
o|contracted procedure: k5562 
o|contracted procedure: k5566 
o|contracted procedure: k5644 
o|contracted procedure: k5648 
o|contracted procedure: k5656 
o|contracted procedure: k5624 
o|contracted procedure: k5628 
o|contracted procedure: k5636 
o|contracted procedure: k5640 
o|contracted procedure: k5665 
o|contracted procedure: k5671 
o|contracted procedure: k5680 
o|contracted procedure: k5683 
o|contracted procedure: k5692 
o|contracted procedure: k5695 
o|contracted procedure: k5714 
o|contracted procedure: k5734 
o|contracted procedure: k5748 
o|contracted procedure: k5761 
o|contracted procedure: k5771 
o|contracted procedure: k5775 
o|contracted procedure: k5800 
o|contracted procedure: k5808 
o|contracted procedure: k5804 
o|contracted procedure: k5824 
o|contracted procedure: k5833 
o|contracted procedure: k5859 
o|contracted procedure: k5901 
o|contracted procedure: k367514785 
o|contracted procedure: k5891 
o|propagated global variable: z25614782 chicken.compiler.optimizer#inline-history 
o|contracted procedure: k5905 
o|contracted procedure: k5918 
o|contracted procedure: k5928 
o|contracted procedure: k5932 
o|contracted procedure: k5936 
o|contracted procedure: k5940 
o|contracted procedure: k6131 
o|contracted procedure: k5958 
o|contracted procedure: k5973 
o|contracted procedure: k5976 
o|contracted procedure: k5982 
o|contracted procedure: k5990 
o|contracted procedure: k6008 
o|contracted procedure: k6011 
o|contracted procedure: k6014 
o|contracted procedure: k6022 
o|contracted procedure: k6030 
o|contracted procedure: k6066 
o|contracted procedure: k6070 
o|contracted procedure: k6103 
o|contracted procedure: k6116 
o|contracted procedure: k6120 
o|contracted procedure: k6126 
o|contracted procedure: k6258 
o|contracted procedure: k6146 
o|contracted procedure: k6171 
o|contracted procedure: k6178 
o|contracted procedure: k6186 
o|contracted procedure: k6198 
o|contracted procedure: k6201 
o|contracted procedure: k6204 
o|contracted procedure: k6212 
o|contracted procedure: k6220 
o|contracted procedure: k6231 
o|contracted procedure: k6238 
o|contracted procedure: k6254 
o|contracted procedure: k6248 
o|contracted procedure: k6271 
o|contracted procedure: k6283 
o|contracted procedure: k6289 
o|contracted procedure: k6313 
o|contracted procedure: k7089 
o|contracted procedure: k7098 
o|contracted procedure: k7129 
o|contracted procedure: k7107 
o|contracted procedure: k7113 
o|contracted procedure: k6316 
o|contracted procedure: k6326 
o|contracted procedure: k6360 
o|contracted procedure: k6366 
o|contracted procedure: k6379 
o|contracted procedure: k6386 
o|contracted procedure: k6404 
o|contracted procedure: k6410 
o|contracted procedure: k6422 
o|contracted procedure: k6428 
o|contracted procedure: k6461 
o|contracted procedure: k6480 
o|contracted procedure: k6491 
o|contracted procedure: k6512 
o|contracted procedure: k6521 
o|contracted procedure: k6532 
o|contracted procedure: k6543 
o|contracted procedure: k6566 
o|contracted procedure: k6572 
o|contracted procedure: k6635 
o|contracted procedure: k6585 
o|contracted procedure: k6589 
o|contracted procedure: k6606 
o|contracted procedure: k6609 
o|contracted procedure: k6612 
o|contracted procedure: k6620 
o|contracted procedure: k6628 
o|contracted procedure: k6648 
o|contracted procedure: k6651 
o|contracted procedure: k6705 
o|contracted procedure: k6754 
o|contracted procedure: k6745 
o|contracted procedure: k6771 
o|contracted procedure: k6762 
o|contracted procedure: k6708 
o|contracted procedure: k6720 
o|contracted procedure: k6730 
o|contracted procedure: k6734 
o|contracted procedure: k6775 
o|contracted procedure: k6783 
o|contracted procedure: k6786 
o|contracted procedure: k6795 
o|contracted procedure: k6801 
o|contracted procedure: k6812 
o|contracted procedure: k6837 
o|contracted procedure: k6843 
o|contracted procedure: k6871 
o|contracted procedure: k6877 
o|contracted procedure: k6918 
o|contracted procedure: k6944 
o|contracted procedure: k6950 
o|contracted procedure: k6959 
o|contracted procedure: k6996 
o|contracted procedure: k7002 
o|contracted procedure: k7008 
o|contracted procedure: k7014 
o|contracted procedure: k7051 
o|contracted procedure: k7063 
o|contracted procedure: k7073 
o|contracted procedure: k7077 
o|contracted procedure: k7034 
o|contracted procedure: k7048 
o|propagated global variable: g13201322 chicken.compiler.optimizer#simplified-ops 
o|contracted procedure: k7080 
o|contracted procedure: k7154 
o|contracted procedure: k7165 
o|contracted procedure: k7171 
o|contracted procedure: k7186 
o|contracted procedure: k7189 
o|contracted procedure: k7201 
o|contracted procedure: k7213 
o|contracted procedure: k7223 
o|contracted procedure: k7243 
o|contracted procedure: k7239 
o|contracted procedure: k7253 
o|contracted procedure: k7256 
o|contracted procedure: k7263 
o|contracted procedure: k7290 
o|contracted procedure: k7278 
o|contracted procedure: k7293 
o|contracted procedure: k7300 
o|contracted procedure: k7337 
o|contracted procedure: k7314 
o|contracted procedure: k7332 
o|contracted procedure: k7320 
o|contracted procedure: k7340 
o|contracted procedure: k7355 
o|contracted procedure: k7361 
o|contracted procedure: k7364 
o|contracted procedure: k7376 
o|contracted procedure: k7386 
o|contracted procedure: k7390 
o|contracted procedure: k7954 
o|contracted procedure: k7965 
o|contracted procedure: k10262 
o|contracted procedure: k10265 
o|contracted procedure: k10281 
o|contracted procedure: k10287 
o|contracted procedure: k10293 
o|contracted procedure: k10299 
o|contracted procedure: k10323 
o|contracted procedure: k10329 
o|contracted procedure: k10354 
o|contracted procedure: k10358 
o|contracted procedure: k10335 
o|contracted procedure: k10342 
o|contracted procedure: k10346 
o|contracted procedure: k10350 
o|contracted procedure: k10366 
o|contracted procedure: k10380 
o|contracted procedure: k10387 
o|contracted procedure: k10391 
o|contracted procedure: k10397 
o|contracted procedure: k10407 
o|contracted procedure: k10411 
o|contracted procedure: k10415 
o|contracted procedure: k10423 
o|contracted procedure: k10435 
o|contracted procedure: k10445 
o|contracted procedure: k10449 
o|contracted procedure: k10476 
o|contracted procedure: k10479 
o|contracted procedure: k10482 
o|contracted procedure: k10505 
o|contracted procedure: k10488 
o|contracted procedure: k10497 
o|contracted procedure: k10501 
o|contracted procedure: k10515 
o|contracted procedure: k10525 
o|contracted procedure: k10532 
o|contracted procedure: k10539 
o|contracted procedure: k10549 
o|contracted procedure: k10555 
o|contracted procedure: k10572 
o|contracted procedure: k10559 
o|contracted procedure: k10578 
o|contracted procedure: k10590 
o|contracted procedure: k367514815 
o|contracted procedure: k10594 
o|contracted procedure: k10602 
o|contracted procedure: k10608 
o|contracted procedure: k10633 
o|contracted procedure: k10637 
o|contracted procedure: k10641 
o|contracted procedure: k10647 
o|contracted procedure: k10672 
o|contracted procedure: k10676 
o|contracted procedure: k10680 
o|contracted procedure: k10686 
o|contracted procedure: k10689 
o|contracted procedure: k10695 
o|contracted procedure: k10701 
o|contracted procedure: k10717 
o|contracted procedure: k10720 
o|contracted procedure: k10727 
o|contracted procedure: k10734 
o|contracted procedure: k10742 
o|contracted procedure: k10738 
o|contracted procedure: k10767 
o|contracted procedure: k10770 
o|contracted procedure: k10780 
o|contracted procedure: k10784 
o|contracted procedure: k10799 
o|contracted procedure: k10806 
o|contracted procedure: k10810 
o|contracted procedure: k10816 
o|contracted procedure: k10829 
o|contracted procedure: k10837 
o|contracted procedure: k10841 
o|contracted procedure: k4141 
o|contracted procedure: k4145 
o|contracted procedure: k4128 
o|contracted procedure: k11502 
o|contracted procedure: k10899 
o|contracted procedure: k10911 
o|contracted procedure: k10920 
o|contracted procedure: k10931 
o|contracted procedure: k10997 
o|contracted procedure: k10990 
o|contracted procedure: k10940 
o|contracted procedure: k10954 
o|contracted procedure: k10950 
o|contracted procedure: k10962 
o|contracted procedure: k10972 
o|contracted procedure: k10966 
o|contracted procedure: k10987 
o|contracted procedure: k10983 
o|contracted procedure: k10975 
o|contracted procedure: k11003 
o|contracted procedure: k11012 
o|contracted procedure: k11021 
o|contracted procedure: k11066 
o|contracted procedure: k11080 
o|contracted procedure: k11032 
o|contracted procedure: k11069 
o|contracted procedure: k11076 
o|contracted procedure: k11050 
o|contracted procedure: k11089 
o|contracted procedure: k11138 
o|contracted procedure: k11131 
o|contracted procedure: k11098 
o|contracted procedure: k11102 
o|contracted procedure: k11105 
o|contracted procedure: k11146 
o|contracted procedure: k11158 
o|contracted procedure: k11168 
o|contracted procedure: k11172 
o|contracted procedure: k11178 
o|contracted procedure: k11195 
o|contracted procedure: k11199 
o|contracted procedure: k11217 
o|contracted procedure: k11220 
o|contracted procedure: k11223 
o|contracted procedure: k11235 
o|contracted procedure: k11370 
o|contracted procedure: k11241 
o|contracted procedure: k367514830 
o|contracted procedure: k11245 
o|contracted procedure: k11340 
o|contracted procedure: k11251 
o|contracted procedure: k11264 
o|contracted procedure: k11268 
o|contracted procedure: k11336 
o|contracted procedure: k11271 
o|contracted procedure: k11279 
o|contracted procedure: k11282 
o|contracted procedure: k11298 
o|contracted procedure: k11306 
o|contracted procedure: k11310 
o|contracted procedure: k11318 
o|contracted procedure: k11366 
o|contracted procedure: k11346 
o|contracted procedure: k11359 
o|contracted procedure: k11380 
o|contracted procedure: k11383 
o|contracted procedure: k11386 
o|contracted procedure: k11392 
o|contracted procedure: k367514837 
o|contracted procedure: k11396 
o|contracted procedure: k11406 
o|contracted procedure: k11409 
o|contracted procedure: k11421 
o|contracted procedure: k11431 
o|contracted procedure: k11435 
o|contracted procedure: k11438 
o|contracted procedure: k11450 
o|contracted procedure: k11460 
o|contracted procedure: k11464 
o|contracted procedure: k11482 
o|contracted procedure: k11488 
o|contracted procedure: k11495 
o|contracted procedure: k11505 
o|contracted procedure: k3790 
o|contracted procedure: k3798 
o|contracted procedure: k3810 
o|contracted procedure: k3832 
o|contracted procedure: k3828 
o|contracted procedure: k3813 
o|contracted procedure: k3816 
o|contracted procedure: k3824 
o|contracted procedure: k11748 
o|contracted procedure: k11744 
o|contracted procedure: k11728 
o|contracted procedure: k11740 
o|contracted procedure: k11736 
o|contracted procedure: k11732 
o|contracted procedure: k11695 
o|contracted procedure: k11699 
o|contracted procedure: k11712 
o|contracted procedure: k11724 
o|contracted procedure: k11541 
o|contracted procedure: k11683 
o|contracted procedure: k11691 
o|contracted procedure: k11687 
o|contracted procedure: k11679 
o|contracted procedure: k11549 
o|contracted procedure: k11553 
o|contracted procedure: k11559 
o|contracted procedure: k11565 
o|contracted procedure: k11667 
o|contracted procedure: k11571 
o|contracted procedure: k11663 
o|contracted procedure: k11580 
o|contracted procedure: k11587 
o|contracted procedure: k11591 
o|contracted procedure: k11599 
o|contracted procedure: k11612 
o|contracted procedure: k11621 
o|contracted procedure: k11633 
o|contracted procedure: k11648 
o|contracted procedure: k11656 
o|contracted procedure: k11545 
o|contracted procedure: k12699 
o|contracted procedure: k12763 
o|contracted procedure: k12779 
o|contracted procedure: k12767 
o|contracted procedure: k12775 
o|contracted procedure: k12771 
o|contracted procedure: k12703 
o|contracted procedure: k12759 
o|contracted procedure: k12711 
o|contracted procedure: k12719 
o|contracted procedure: k12739 
o|contracted procedure: k12755 
o|contracted procedure: k12743 
o|contracted procedure: k12751 
o|contracted procedure: k12747 
o|contracted procedure: k12723 
o|contracted procedure: k12735 
o|contracted procedure: k12731 
o|contracted procedure: k12727 
o|contracted procedure: k12715 
o|contracted procedure: k12707 
o|contracted procedure: k12617 
o|contracted procedure: k12621 
o|contracted procedure: k12630 
o|contracted procedure: k12687 
o|contracted procedure: k12648 
o|contracted procedure: k12678 
o|contracted procedure: k12654 
o|contracted procedure: k12661 
o|contracted procedure: k11752 
o|contracted procedure: k12553 
o|contracted procedure: k12597 
o|contracted procedure: k12613 
o|contracted procedure: k12601 
o|contracted procedure: k12609 
o|contracted procedure: k12605 
o|contracted procedure: k12557 
o|contracted procedure: k12593 
o|contracted procedure: k12565 
o|contracted procedure: k12577 
o|contracted procedure: k12589 
o|contracted procedure: k12585 
o|contracted procedure: k12581 
o|contracted procedure: k12573 
o|contracted procedure: k12569 
o|contracted procedure: k12561 
o|contracted procedure: k12490 
o|contracted procedure: k12494 
o|contracted procedure: k12503 
o|contracted procedure: k12541 
o|contracted procedure: k12515 
o|contracted procedure: k12522 
o|contracted procedure: k11756 
o|contracted procedure: k12482 
o|contracted procedure: k12486 
o|contracted procedure: k12177 
o|contracted procedure: k12181 
o|contracted procedure: k12191 
o|contracted procedure: k12209 
o|contracted procedure: k12478 
o|contracted procedure: k12215 
o|contracted procedure: k12221 
o|contracted procedure: k12227 
o|contracted procedure: k12230 
o|contracted procedure: k12245 
o|contracted procedure: k12260 
o|contracted procedure: k12252 
o|contracted procedure: k12256 
o|contracted procedure: k12266 
o|contracted procedure: k12275 
o|contracted procedure: k12450 
o|contracted procedure: k12454 
o|contracted procedure: k12281 
o|contracted procedure: k12446 
o|contracted procedure: k12288 
o|contracted procedure: k12294 
o|contracted procedure: k12331 
o|contracted procedure: k12319 
o|contracted procedure: k12323 
o|contracted procedure: k12327 
o|contracted procedure: k12339 
o|contracted procedure: k12345 
o|contracted procedure: k7411 
o|contracted procedure: k7414 
o|contracted procedure: k7417 
o|contracted procedure: k7464 
o|contracted procedure: k7435 
o|contracted procedure: k7460 
o|contracted procedure: k7438 
o|contracted procedure: k7441 
o|contracted procedure: k7447 
o|contracted procedure: k367514860 
o|contracted procedure: k7470 
o|contracted procedure: k7534 
o|contracted procedure: k7485 
o|contracted procedure: k7508 
o|contracted procedure: k367514867 
o|contracted procedure: k7492 
o|contracted procedure: k7500 
o|contracted procedure: k7530 
o|contracted procedure: k7517 
o|contracted procedure: k7542 
o|contracted procedure: k367514874 
o|contracted procedure: k7549 
o|contracted procedure: k7577 
o|contracted procedure: k7562 
o|contracted procedure: k7573 
o|contracted procedure: k3725 
o|contracted procedure: k3737 
o|contracted procedure: k3760 
o|contracted procedure: k3768 
o|contracted procedure: k3274 
o|contracted procedure: k3277 
o|contracted procedure: k3289 
o|contracted procedure: k3305 
o|contracted procedure: k3313 
o|contracted procedure: k3320 
o|contracted procedure: k3344 
o|contracted procedure: k3361 
o|contracted procedure: k3383 
o|contracted procedure: k3379 
o|contracted procedure: k3364 
o|contracted procedure: k3367 
o|contracted procedure: k3375 
o|contracted procedure: k3390 
o|contracted procedure: k3398 
o|contracted procedure: k3410 
o|contracted procedure: k3432 
o|contracted procedure: k3428 
o|contracted procedure: k3413 
o|contracted procedure: k3416 
o|contracted procedure: k3424 
o|contracted procedure: k7594 
o|contracted procedure: k7768 
o|contracted procedure: k7605 
o|contracted procedure: k7608 
o|contracted procedure: k7618 
o|contracted procedure: k7633 
o|contracted procedure: k7629 
o|contracted procedure: k7625 
o|contracted procedure: k7645 
o|contracted procedure: k7669 
o|contracted procedure: k7654 
o|contracted procedure: k7658 
o|contracted procedure: k7677 
o|contracted procedure: k7680 
o|contracted procedure: k7692 
o|contracted procedure: k7701 
o|contracted procedure: k7705 
o|contracted procedure: k7713 
o|contracted procedure: k7725 
o|contracted procedure: k7721 
o|contracted procedure: k7717 
o|contracted procedure: k7736 
o|contracted procedure: k7744 
o|contracted procedure: k7747 
o|contracted procedure: k7762 
o|contracted procedure: k7758 
o|contracted procedure: k7754 
o|contracted procedure: k7777 
o|contracted procedure: k7795 
o|contracted procedure: k7802 
o|contracted procedure: k7810 
o|contracted procedure: k7819 
o|contracted procedure: k7829 
o|contracted procedure: k7833 
o|contracted procedure: k7842 
o|contracted procedure: k7852 
o|contracted procedure: k7856 
o|contracted procedure: k7890 
o|contracted procedure: k7865 
o|contracted procedure: k7875 
o|contracted procedure: k7879 
o|contracted procedure: k7883 
o|contracted procedure: k7887 
o|contracted procedure: k7938 
o|contracted procedure: k7902 
o|contracted procedure: k7928 
o|contracted procedure: k7932 
o|contracted procedure: k7924 
o|contracted procedure: k7905 
o|contracted procedure: k7908 
o|contracted procedure: k7916 
o|contracted procedure: k7920 
o|contracted procedure: k12367 
o|contracted procedure: k12442 
o|contracted procedure: k12373 
o|contracted procedure: k12379 
o|contracted procedure: k12385 
o|contracted procedure: k12391 
o|contracted procedure: k12397 
o|contracted procedure: k12406 
o|contracted procedure: k12414 
o|contracted procedure: k12422 
o|contracted procedure: k12430 
o|contracted procedure: k12438 
o|contracted procedure: k12466 
o|contracted procedure: k12474 
o|contracted procedure: k11760 
o|contracted procedure: k12149 
o|contracted procedure: k12173 
o|contracted procedure: k12169 
o|contracted procedure: k12153 
o|contracted procedure: k12165 
o|contracted procedure: k12161 
o|contracted procedure: k12157 
o|contracted procedure: k12094 
o|contracted procedure: k12098 
o|contracted procedure: k12141 
o|contracted procedure: k12107 
o|contracted procedure: k12133 
o|contracted procedure: k12113 
o|contracted procedure: k12120 
o|contracted procedure: k12128 
o|contracted procedure: k11764 
o|contracted procedure: k12054 
o|contracted procedure: k12090 
o|contracted procedure: k12086 
o|contracted procedure: k12058 
o|contracted procedure: k12082 
o|contracted procedure: k12066 
o|contracted procedure: k12078 
o|contracted procedure: k12074 
o|contracted procedure: k12070 
o|contracted procedure: k12062 
o|contracted procedure: k11909 
o|contracted procedure: k11913 
o|contracted procedure: k12050 
o|contracted procedure: k11925 
o|contracted procedure: k11931 
o|contracted procedure: k12038 
o|contracted procedure: k11937 
o|contracted procedure: k11949 
o|contracted procedure: k11959 
o|contracted procedure: k11971 
o|contracted procedure: k11990 
o|contracted procedure: k11998 
o|contracted procedure: k12007 
o|contracted procedure: k12012 
o|contracted procedure: k12019 
o|contracted procedure: k12033 
o|contracted procedure: k11768 
o|contracted procedure: k11885 
o|contracted procedure: k11905 
o|contracted procedure: k11901 
o|contracted procedure: k11889 
o|contracted procedure: k11897 
o|contracted procedure: k11893 
o|contracted procedure: k11776 
o|contracted procedure: k11780 
o|contracted procedure: k11877 
o|contracted procedure: k11792 
o|contracted procedure: k11804 
o|contracted procedure: k11829 
o|contracted procedure: k11837 
o|contracted procedure: k11846 
o|contracted procedure: k11851 
o|contracted procedure: k11858 
o|contracted procedure: k11872 
o|contracted procedure: k11772 
o|contracted procedure: k12874 
o|contracted procedure: k12866 
o|contracted procedure: k12870 
o|contracted procedure: k12862 
o|contracted procedure: k12858 
o|contracted procedure: k12787 
o|contracted procedure: k12791 
o|contracted procedure: k12804 
o|contracted procedure: k12813 
o|contracted procedure: k12824 
o|contracted procedure: k12835 
o|contracted procedure: k12827 
o|contracted procedure: k367514909 
o|contracted procedure: k12839 
o|propagated global variable: z25614906 chicken.compiler.optimizer#simplified-ops 
o|contracted procedure: k12851 
o|contracted procedure: k7974 
o|contracted procedure: k7989 
o|contracted procedure: k8005 
o|contracted procedure: k8012 
o|contracted procedure: k8054 
o|contracted procedure: k8076 
o|contracted procedure: k8080 
o|contracted procedure: k8092 
o|contracted procedure: k8088 
o|contracted procedure: k8154 
o|contracted procedure: k8158 
o|contracted procedure: k8095 
o|contracted procedure: k8098 
o|contracted procedure: k8101 
o|contracted procedure: k8107 
o|contracted procedure: k8113 
o|contracted procedure: k8119 
o|contracted procedure: k8126 
o|contracted procedure: k8130 
o|contracted procedure: k8164 
o|contracted procedure: k8218 
o|contracted procedure: k8222 
o|contracted procedure: k8173 
o|contracted procedure: k8185 
o|contracted procedure: k8188 
o|contracted procedure: k8191 
o|contracted procedure: k8198 
o|contracted procedure: k8202 
o|contracted procedure: k8214 
o|contracted procedure: k8210 
o|contracted procedure: k8228 
o|contracted procedure: k8327 
o|contracted procedure: k8243 
o|contracted procedure: k8249 
o|contracted procedure: k8261 
o|contracted procedure: k8285 
o|contracted procedure: k8270 
o|contracted procedure: k8274 
o|contracted procedure: k8293 
o|contracted procedure: k8300 
o|contracted procedure: k8304 
o|contracted procedure: k8312 
o|contracted procedure: k8319 
o|contracted procedure: k8323 
o|contracted procedure: k8333 
o|contracted procedure: k8395 
o|contracted procedure: k8345 
o|contracted procedure: k8390 
o|contracted procedure: k8358 
o|contracted procedure: k8370 
o|contracted procedure: k8378 
o|contracted procedure: k8362 
o|contracted procedure: k8382 
o|contracted procedure: k8386 
o|contracted procedure: k8401 
o|contracted procedure: k8475 
o|contracted procedure: k8416 
o|contracted procedure: k8422 
o|contracted procedure: k8425 
o|contracted procedure: k8428 
o|contracted procedure: k8435 
o|contracted procedure: k8439 
o|contracted procedure: k8467 
o|contracted procedure: k8447 
o|contracted procedure: k8455 
o|contracted procedure: k8451 
o|contracted procedure: k8463 
o|contracted procedure: k8481 
o|contracted procedure: k8487 
o|contracted procedure: k8490 
o|contracted procedure: k8549 
o|contracted procedure: k8499 
o|contracted procedure: k8512 
o|contracted procedure: k8516 
o|contracted procedure: k8544 
o|contracted procedure: k8524 
o|contracted procedure: k8528 
o|contracted procedure: k8540 
o|contracted procedure: k8536 
o|contracted procedure: k8555 
o|contracted procedure: k8561 
o|contracted procedure: k8564 
o|contracted procedure: k8622 
o|contracted procedure: k8626 
o|contracted procedure: k8573 
o|contracted procedure: k8586 
o|contracted procedure: k8590 
o|contracted procedure: k8618 
o|contracted procedure: k8598 
o|contracted procedure: k8606 
o|contracted procedure: k8614 
o|contracted procedure: k8632 
o|contracted procedure: k8644 
o|contracted procedure: k8653 
o|contracted procedure: k8892 
o|contracted procedure: k8668 
o|contracted procedure: k8675 
o|contracted procedure: k8679 
o|contracted procedure: k8695 
o|contracted procedure: k8706 
o|contracted procedure: k8709 
o|contracted procedure: k8724 
o|contracted procedure: k8731 
o|contracted procedure: k8759 
o|contracted procedure: k8756 
o|contracted procedure: k8739 
o|contracted procedure: k8735 
o|contracted procedure: k8752 
o|contracted procedure: k8792 
o|contracted procedure: k8772 
o|contracted procedure: k8780 
o|contracted procedure: k8776 
o|contracted procedure: k8801 
o|contracted procedure: k8804 
o|contracted procedure: k8807 
o|contracted procedure: k8815 
o|contracted procedure: k8823 
o|contracted procedure: k8835 
o|contracted procedure: k8838 
o|contracted procedure: k8841 
o|contracted procedure: k8849 
o|contracted procedure: k8878 
o|contracted procedure: k8863 
o|contracted procedure: k8872 
o|contracted procedure: k8888 
o|contracted procedure: k8899 
o|contracted procedure: k8908 
o|contracted procedure: k8911 
o|contracted procedure: k8920 
o|contracted procedure: k8982 
o|contracted procedure: k8933 
o|contracted procedure: k8945 
o|contracted procedure: k8937 
o|contracted procedure: k8970 
o|contracted procedure: k8956 
o|contracted procedure: k8963 
o|contracted procedure: k8974 
o|contracted procedure: k8978 
o|contracted procedure: k8988 
o|contracted procedure: k8997 
o|contracted procedure: k9000 
o|contracted procedure: k9009 
o|contracted procedure: k9015 
o|contracted procedure: k9041 
o|contracted procedure: k9025 
o|contracted procedure: k9037 
o|contracted procedure: k9048 
o|contracted procedure: k9052 
o|contracted procedure: k9058 
o|contracted procedure: k9073 
o|contracted procedure: k9076 
o|contracted procedure: k9079 
o|contracted procedure: k9131 
o|contracted procedure: k9085 
o|contracted procedure: k9091 
o|contracted procedure: k9098 
o|contracted procedure: k9102 
o|contracted procedure: k9125 
o|contracted procedure: k9109 
o|contracted procedure: k9121 
o|contracted procedure: k9137 
o|contracted procedure: k9152 
o|contracted procedure: k9155 
o|contracted procedure: k9164 
o|contracted procedure: k9183 
o|contracted procedure: k9186 
o|contracted procedure: k9195 
o|contracted procedure: k9201 
o|contracted procedure: k9268 
o|contracted procedure: k9272 
o|contracted procedure: k9210 
o|contracted procedure: k9264 
o|contracted procedure: k9222 
o|contracted procedure: k9228 
o|contracted procedure: k9231 
o|contracted procedure: k9238 
o|contracted procedure: k9242 
o|contracted procedure: k9254 
o|contracted procedure: k9250 
o|contracted procedure: k9278 
o|contracted procedure: k9361 
o|contracted procedure: k9287 
o|contracted procedure: k9293 
o|contracted procedure: k9353 
o|contracted procedure: k9305 
o|contracted procedure: k9328 
o|contracted procedure: k9312 
o|contracted procedure: k9324 
o|contracted procedure: k9349 
o|contracted procedure: k9334 
o|contracted procedure: k9341 
o|contracted procedure: k9345 
o|contracted procedure: k9367 
o|contracted procedure: k9370 
o|contracted procedure: k9373 
o|contracted procedure: k9376 
o|contracted procedure: k9379 
o|contracted procedure: k9391 
o|contracted procedure: k9394 
o|contracted procedure: k9406 
o|contracted procedure: k9413 
o|contracted procedure: k9417 
o|contracted procedure: k9436 
o|inlining procedure: k9425 
o|contracted procedure: k9443 
o|contracted procedure: k9456 
o|contracted procedure: k9452 
o|contracted procedure: k9433 
o|inlining procedure: k9425 
o|contracted procedure: k9459 
o|contracted procedure: k9466 
o|contracted procedure: k9491 
o|contracted procedure: k9484 
o|contracted procedure: k363014922 
o|contracted procedure: k9497 
o|contracted procedure: k9555 
o|contracted procedure: k9559 
o|contracted procedure: k9506 
o|contracted procedure: k9519 
o|contracted procedure: k9523 
o|contracted procedure: k9531 
o|contracted procedure: k9551 
o|contracted procedure: k9538 
o|contracted procedure: k9565 
o|contracted procedure: k9574 
o|contracted procedure: k9587 
o|contracted procedure: k9591 
o|contracted procedure: k9599 
o|contracted procedure: k9605 
o|contracted procedure: k9732 
o|contracted procedure: k9620 
o|contracted procedure: k9630 
o|contracted procedure: k9634 
o|contracted procedure: k9646 
o|contracted procedure: k9653 
o|contracted procedure: k9657 
o|contracted procedure: k9674 
o|contracted procedure: k9678 
o|contracted procedure: k9690 
o|contracted procedure: k9728 
o|contracted procedure: k9700 
o|contracted procedure: k9704 
o|contracted procedure: k9712 
o|contracted procedure: k9716 
o|contracted procedure: k9739 
o|contracted procedure: k9742 
o|contracted procedure: k9748 
o|contracted procedure: k9751 
o|contracted procedure: k9823 
o|contracted procedure: k9760 
o|contracted procedure: k9773 
o|contracted procedure: k9777 
o|contracted procedure: k9819 
o|contracted procedure: k9785 
o|contracted procedure: k9807 
o|contracted procedure: k9815 
o|contracted procedure: k9829 
o|contracted procedure: k9841 
o|contracted procedure: k363014929 
o|contracted procedure: k9844 
o|contracted procedure: k9847 
o|contracted procedure: k9850 
o|contracted procedure: k9859 
o|contracted procedure: k9866 
o|contracted procedure: k9870 
o|contracted procedure: k9945 
o|contracted procedure: k9880 
o|contracted procedure: k9887 
o|contracted procedure: k9895 
o|contracted procedure: k9891 
o|contracted procedure: k9902 
o|contracted procedure: k9906 
o|contracted procedure: k9919 
o|contracted procedure: k9926 
o|contracted procedure: k9930 
o|contracted procedure: k9937 
o|contracted procedure: k9941 
o|contracted procedure: k9958 
o|contracted procedure: k9965 
o|contracted procedure: k9955 
o|contracted procedure: k9985 
o|contracted procedure: k9988 
o|contracted procedure: k9991 
o|contracted procedure: k9994 
o|contracted procedure: k10003 
o|contracted procedure: k10015 
o|contracted procedure: k10018 
o|contracted procedure: k10025 
o|contracted procedure: k10029 
o|contracted procedure: k10036 
o|contracted procedure: k363014934 
o|contracted procedure: k10047 
o|contracted procedure: k10043 
o|contracted procedure: k10058 
o|contracted procedure: k10054 
o|contracted procedure: k10064 
o|contracted procedure: k10076 
o|contracted procedure: k10188 
o|contracted procedure: k10192 
o|contracted procedure: k10082 
o|contracted procedure: k10184 
o|contracted procedure: k10089 
o|contracted procedure: k10121 
o|contracted procedure: k10130 
o|contracted procedure: k10136 
o|contracted procedure: k10153 
o|contracted procedure: k8021 
o|contracted procedure: k8043 
o|contracted procedure: k8030 
o|contracted procedure: k8037 
o|contracted procedure: k10159 
o|contracted procedure: k10166 
o|contracted procedure: k10176 
o|contracted procedure: k10180 
o|contracted procedure: k12783 
o|simplifications: ((if . 16) (let . 331)) 
o|removed binding forms: 1108 
o|contracted procedure: k4372 
o|contracted procedure: k4484 
o|contracted procedure: k4606 
o|substituted constant variable: r5008 
o|contracted procedure: k6137 
o|contracted procedure: k6298 
o|contracted procedure: k7198 
o|contracted procedure: k7980 
o|contracted procedure: k8246 
o|contracted procedure: k8689 
o|contracted procedure: k9018 
o|contracted procedure: k9382 
o|contracted procedure: k9425 
o|inlining procedure: k9535 
o|inlining procedure: k9535 
o|replaced variables: 5 
o|removed binding forms: 12 
o|removed binding forms: 5 
o|direct leaf routine/allocation: mark562 3 
o|direct leaf routine/allocation: touch564 0 
o|direct leaf routine/allocation: loop337 0 
o|direct leaf routine/allocation: touch682 0 
o|direct leaf routine/allocation: for-each-loop697715 0 
o|direct leaf routine/allocation: g737746 0 
o|direct leaf routine/allocation: touch1371 0 
o|direct leaf routine/allocation: g297298 3 
o|direct leaf routine/allocation: g14441445 35 
o|direct leaf routine/allocation: argc-ok?1869 0 
o|contracted procedure: "(optimizer.scm:98) k4517" 
o|contracted procedure: k4544 
o|converted assignments to bindings: (loop337) 
o|contracted procedure: "(optimizer.scm:123) k4594" 
o|converted assignments to bindings: (for-each-loop697715) 
o|contracted procedure: "(optimizer.scm:188) k4834" 
o|contracted procedure: "(optimizer.scm:188) k483414709" 
o|contracted procedure: "(optimizer.scm:182) k4899" 
o|contracted procedure: "(optimizer.scm:218) k4996" 
o|contracted procedure: "(optimizer.scm:236) k5115" 
o|contracted procedure: "(optimizer.scm:258) k5182" 
o|contracted procedure: "(optimizer.scm:285) k5264" 
o|contracted procedure: "(optimizer.scm:289) k5291" 
o|contracted procedure: "(optimizer.scm:307) k5374" 
o|contracted procedure: "(optimizer.scm:327) k5540" 
o|contracted procedure: "(optimizer.scm:343) k5614" 
o|contracted procedure: "(optimizer.scm:378) k5726" 
o|contracted procedure: "(optimizer.scm:459) k5894" 
o|contracted procedure: "(optimizer.scm:472) k5979" 
o|contracted procedure: "(optimizer.scm:481) k6050" 
o|contracted procedure: "(optimizer.scm:547) k6660" 
o|contracted procedure: "(optimizer.scm:552) k6681" 
o|contracted procedure: "(optimizer.scm:559) k6693" 
o|contracted procedure: "(optimizer.scm:584) k6852" 
o|contracted procedure: "(optimizer.scm:1294) k9161" 
o|converted assignments to bindings: (argc-ok?1869) 
o|simplifications: ((let . 3)) 
o|removed binding forms: 23 
o|customizable procedures: (loop2186 lp2125 k9171 k8692 map-loop19731991 map-loop20012018 loop2025 foldr19171920 loop1436 k11820 loop1593 k11981 loop1570 k12312 map-loop16611680 g16931715 for-each-loop16921720 g17331740 for-each-loop17321748 g17571764 for-each-loop17561774 g17861791 foldl17881833 k7614 foldr18191822 g18241825 foldr18061809 map-loop132150 map-loop159177 loop128 foldr117120 g122123 foldr282285 g287288 a7556 find-path1701 find1704 loop21519 loop11497 foldr16411644 g16461647 map-loop310328 k10908 for-each-loop24222432 for-each-loop24052415 g23842385 rec2358 g23512438 for-each-loop23502450 foldr24622465 for-each-loop24762489 k10704 k10657 k10618 chicken.compiler.optimizer#every rec2255 g22332240 for-each-loop22322243 scan2204 walk2203 transform2205 g13791386 for-each-loop13781414 test1372 k7183 k7210 k7219 k6965 for-each-loop13131325 lp1298 k6840 k6789 k6690 for-each-loop12571269 g12111220 map-loop12051230 k5708 k6437 k5790 k5818 loop1354 k5842 g11701179 map-loop11641189 chicken.compiler.optimizer#split-at loop1099 g11201129 map-loop11141139 invalidate-gae!683 g10651072 for-each-loop10641082 g972979 for-each-loop971989 walk-generic689 a5531 loop71 k5371 k5386 g890899 map-loop884909 g859860 k5315 g831832 replace-var687 walk1688 k5174 loop354 maybe-replace-rest-arg-calls685 walk686 k4935 test679 chicken.compiler.optimizer#cons* chicken.compiler.optimizer#any map-loop731749 simplify684 chicken.compiler.optimizer#delete loop247 for-each-loop569648 k4511 remember563 scan-each565 k4463 chicken.compiler.optimizer#filter g588595 for-each-loop587599 scan566 foldr264267 g269270 loop227 loop214 loop201 loop188 loop104 chicken.compiler.optimizer#take) 
o|shared closure containers: 55 
o|shared closure users: 84 
o|calls to known targets: 502 
o|identified direct recursive calls: f_3178 1 
o|identified direct recursive calls: f_3236 1 
o|identified direct recursive calls: f_3509 1 
o|identified direct recursive calls: f_3688 1 
o|identified direct recursive calls: f_3845 1 
o|identified direct recursive calls: f_4767 1 
o|identified direct recursive calls: f_4876 1 
o|identified direct recursive calls: f_3904 2 
o|identified direct recursive calls: f_7096 2 
o|identified direct recursive calls: f_11084 1 
o|identified direct recursive calls: f_3805 1 
o|identified direct recursive calls: f_11607 1 
o|identified direct recursive calls: f_3732 1 
o|identified direct recursive calls: f_3284 1 
o|identified direct recursive calls: f_3356 1 
o|identified direct recursive calls: f_3405 1 
o|identified direct recursive calls: f_7687 1 
o|identified direct recursive calls: f_7640 1 
o|identified direct recursive calls: f_7897 1 
o|identified direct recursive calls: f_7972 1 
o|identified direct recursive calls: f_8256 1 
o|identified direct recursive calls: f_8719 1 
o|identified direct recursive calls: f_10125 1 
o|fast box initializations: 77 
o|fast global references: 52 
o|fast global assignments: 16 
o|dropping unused closure argument: f_3178 
o|dropping unused closure argument: f_3230 
o|dropping unused closure argument: f_3439 
o|dropping unused closure argument: f_3473 
o|dropping unused closure argument: f_3503 
o|dropping unused closure argument: f_3559 
o|dropping unused closure argument: f_3679 
o|dropping unused closure argument: f_3845 
o|dropping unused closure argument: f_4753 
o|dropping unused closure argument: f_4767 
*/
/* end of file */
