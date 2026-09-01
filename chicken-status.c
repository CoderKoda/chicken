/* Generated from chicken-status.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-status.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -output-file chicken-status.c
   uses: eval data-structures pathname port irregex extras file library
*/
#include "chicken.h"

#ifndef STATICBUILD
# define STATIC_CHICKEN 0
#else
# define STATIC_CHICKEN 1
#endif
#ifndef DEBUGBUILD
# define DEBUG_CHICKEN 0
#else
# define DEBUG_CHICKEN 1
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_pathname_toplevel)
C_extern void C_ccall C_pathname_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_port_toplevel)
C_extern void C_ccall C_port_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_irregex_toplevel)
C_extern void C_ccall C_irregex_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[149];
static double C_possibly_force_alignment;


C_noret_decl(f5335)
static void C_ccall f5335(C_word c,C_word *av) C_noret;
C_noret_decl(f5342)
static void C_ccall f5342(C_word c,C_word *av) C_noret;
C_noret_decl(f5349)
static void C_ccall f5349(C_word c,C_word *av) C_noret;
C_noret_decl(f_1677)
static void C_ccall f_1677(C_word c,C_word *av) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word *av) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word *av) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word *av) C_noret;
C_noret_decl(f_1689)
static void C_ccall f_1689(C_word c,C_word *av) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word *av) C_noret;
C_noret_decl(f_1695)
static void C_ccall f_1695(C_word c,C_word *av) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word *av) C_noret;
C_noret_decl(f_1701)
static void C_ccall f_1701(C_word c,C_word *av) C_noret;
C_noret_decl(f_1902)
static void f_1902(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1917)
static void f_1917(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1925)
static void f_1925(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word *av) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word *av) C_noret;
C_noret_decl(f_1957)
static void f_1957(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1964)
static void C_ccall f_1964(C_word c,C_word *av) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word *av) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word *av) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word *av) C_noret;
C_noret_decl(f_1989)
static void f_1989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word *av) C_noret;
C_noret_decl(f_2038)
static void f_2038(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2078)
static C_word f_2078(C_word t0);
C_noret_decl(f_2106)
static void f_2106(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2112)
static void f_2112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word *av) C_noret;
C_noret_decl(f_2170)
static void f_2170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word *av) C_noret;
C_noret_decl(f_2198)
static void f_2198(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word *av) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word *av) C_noret;
C_noret_decl(f_2267)
static void f_2267(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2273)
static void f_2273(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word *av) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word *av) C_noret;
C_noret_decl(f_2312)
static void f_2312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2321)
static void f_2321(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2329)
static void f_2329(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word *av) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word *av) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word *av) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word *av) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word *av) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word *av) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word *av) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word *av) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word *av) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word *av) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word *av) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word *av) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word *av) C_noret;
C_noret_decl(f_3083)
static void C_ccall f_3083(C_word c,C_word *av) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word *av) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word *av) C_noret;
C_noret_decl(f_3095)
static void C_ccall f_3095(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word *av) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word *av) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word *av) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word *av) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word *av) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word *av) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word *av) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word *av) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word *av) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word *av) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static C_word f_3273(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3297)
static C_word f_3297(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_3616)
static void f_3616(C_word t0) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word *av) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word *av) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word *av) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word *av) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void f_3693(C_word t0) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void f_3727(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word *av) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word *av) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void f_3782(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word *av) C_noret;
C_noret_decl(f_3803)
static void f_3803(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word *av) C_noret;
C_noret_decl(f_3821)
static void C_ccall f_3821(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void f_3823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3879)
static void C_ccall f_3879(C_word c,C_word *av) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word *av) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word *av) C_noret;
C_noret_decl(f_3893)
static void f_3893(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word *av) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word *av) C_noret;
C_noret_decl(f_3933)
static void C_ccall f_3933(C_word c,C_word *av) C_noret;
C_noret_decl(f_3935)
static void f_3935(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word *av) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word *av) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word *av) C_noret;
C_noret_decl(f_4015)
static void f_4015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word *av) C_noret;
C_noret_decl(f_4030)
static void f_4030(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4040)
static void C_ccall f_4040(C_word c,C_word *av) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word *av) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4090)
static void f_4090(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word *av) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word *av) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word *av) C_noret;
C_noret_decl(f_4110)
static void C_ccall f_4110(C_word c,C_word *av) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4130)
static void C_ccall f_4130(C_word c,C_word *av) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word *av) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word *av) C_noret;
C_noret_decl(f_4158)
static void C_ccall f_4158(C_word c,C_word *av) C_noret;
C_noret_decl(f_4166)
static void f_4166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4176)
static void C_ccall f_4176(C_word c,C_word *av) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4197)
static void f_4197(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word *av) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word *av) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4404)
static void f_4404(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word *av) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word *av) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word *av) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word *av) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word *av) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word *av) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word *av) C_noret;
C_noret_decl(f_4480)
static void f_4480(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word *av) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word *av) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word *av) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word *av) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word *av) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word *av) C_noret;
C_noret_decl(f_4536)
static void f_4536(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word *av) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word *av) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word *av) C_noret;
C_noret_decl(f_4571)
static void C_ccall f_4571(C_word c,C_word *av) C_noret;
C_noret_decl(f_4579)
static void f_4579(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word *av) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word *av) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word *av) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word *av) C_noret;
C_noret_decl(f_4652)
static void f_4652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4662)
static void C_ccall f_4662(C_word c,C_word *av) C_noret;
C_noret_decl(f_4691)
static void f_4691(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4704)
static void f_4704(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word *av) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word *av) C_noret;
C_noret_decl(f_4725)
static void f_4725(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word *av) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word *av) C_noret;
C_noret_decl(f_4848)
static void C_ccall f_4848(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word *av) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word *av) C_noret;
C_noret_decl(f_4899)
static void f_4899(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word *av) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word *av) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word *av) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word *av) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word *av) C_noret;
C_noret_decl(f_4999)
static void C_ccall f_4999(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word *av) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word *av) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word *av) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word *av) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1902)
static void C_ccall trf_1902(C_word c,C_word *av) C_noret;
static void C_ccall trf_1902(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1902(t0,t1,t2,t3);}

C_noret_decl(trf_1917)
static void C_ccall trf_1917(C_word c,C_word *av) C_noret;
static void C_ccall trf_1917(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1917(t0,t1,t2);}

C_noret_decl(trf_1925)
static void C_ccall trf_1925(C_word c,C_word *av) C_noret;
static void C_ccall trf_1925(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_1925(t0,t1,t2,t3);}

C_noret_decl(trf_1957)
static void C_ccall trf_1957(C_word c,C_word *av) C_noret;
static void C_ccall trf_1957(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1957(t0,t1,t2);}

C_noret_decl(trf_1989)
static void C_ccall trf_1989(C_word c,C_word *av) C_noret;
static void C_ccall trf_1989(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1989(t0,t1,t2);}

C_noret_decl(trf_2038)
static void C_ccall trf_2038(C_word c,C_word *av) C_noret;
static void C_ccall trf_2038(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2038(t0,t1,t2);}

C_noret_decl(trf_2106)
static void C_ccall trf_2106(C_word c,C_word *av) C_noret;
static void C_ccall trf_2106(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2106(t0,t1,t2);}

C_noret_decl(trf_2112)
static void C_ccall trf_2112(C_word c,C_word *av) C_noret;
static void C_ccall trf_2112(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2112(t0,t1,t2);}

C_noret_decl(trf_2170)
static void C_ccall trf_2170(C_word c,C_word *av) C_noret;
static void C_ccall trf_2170(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2170(t0,t1,t2);}

C_noret_decl(trf_2198)
static void C_ccall trf_2198(C_word c,C_word *av) C_noret;
static void C_ccall trf_2198(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2198(t0,t1,t2);}

C_noret_decl(trf_2267)
static void C_ccall trf_2267(C_word c,C_word *av) C_noret;
static void C_ccall trf_2267(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2267(t0,t1,t2);}

C_noret_decl(trf_2273)
static void C_ccall trf_2273(C_word c,C_word *av) C_noret;
static void C_ccall trf_2273(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2273(t0,t1,t2);}

C_noret_decl(trf_2312)
static void C_ccall trf_2312(C_word c,C_word *av) C_noret;
static void C_ccall trf_2312(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2312(t0,t1,t2);}

C_noret_decl(trf_2321)
static void C_ccall trf_2321(C_word c,C_word *av) C_noret;
static void C_ccall trf_2321(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2321(t0,t1,t2);}

C_noret_decl(trf_2329)
static void C_ccall trf_2329(C_word c,C_word *av) C_noret;
static void C_ccall trf_2329(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2329(t0,t1,t2,t3);}

C_noret_decl(trf_3616)
static void C_ccall trf_3616(C_word c,C_word *av) C_noret;
static void C_ccall trf_3616(C_word c,C_word *av){
C_word t0=av[0];
f_3616(t0);}

C_noret_decl(trf_3693)
static void C_ccall trf_3693(C_word c,C_word *av) C_noret;
static void C_ccall trf_3693(C_word c,C_word *av){
C_word t0=av[0];
f_3693(t0);}

C_noret_decl(trf_3727)
static void C_ccall trf_3727(C_word c,C_word *av) C_noret;
static void C_ccall trf_3727(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3727(t0,t1,t2);}

C_noret_decl(trf_3782)
static void C_ccall trf_3782(C_word c,C_word *av) C_noret;
static void C_ccall trf_3782(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3782(t0,t1,t2,t3);}

C_noret_decl(trf_3803)
static void C_ccall trf_3803(C_word c,C_word *av) C_noret;
static void C_ccall trf_3803(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3803(t0,t1,t2);}

C_noret_decl(trf_3823)
static void C_ccall trf_3823(C_word c,C_word *av) C_noret;
static void C_ccall trf_3823(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3823(t0,t1,t2);}

C_noret_decl(trf_3893)
static void C_ccall trf_3893(C_word c,C_word *av) C_noret;
static void C_ccall trf_3893(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3893(t0,t1,t2);}

C_noret_decl(trf_3935)
static void C_ccall trf_3935(C_word c,C_word *av) C_noret;
static void C_ccall trf_3935(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3935(t0,t1,t2,t3);}

C_noret_decl(trf_4015)
static void C_ccall trf_4015(C_word c,C_word *av) C_noret;
static void C_ccall trf_4015(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4015(t0,t1,t2);}

C_noret_decl(trf_4030)
static void C_ccall trf_4030(C_word c,C_word *av) C_noret;
static void C_ccall trf_4030(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4030(t0,t1,t2);}

C_noret_decl(trf_4090)
static void C_ccall trf_4090(C_word c,C_word *av) C_noret;
static void C_ccall trf_4090(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4090(t0,t1);}

C_noret_decl(trf_4166)
static void C_ccall trf_4166(C_word c,C_word *av) C_noret;
static void C_ccall trf_4166(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4166(t0,t1,t2);}

C_noret_decl(trf_4197)
static void C_ccall trf_4197(C_word c,C_word *av) C_noret;
static void C_ccall trf_4197(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4197(t0,t1,t2);}

C_noret_decl(trf_4404)
static void C_ccall trf_4404(C_word c,C_word *av) C_noret;
static void C_ccall trf_4404(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4404(t0,t1,t2);}

C_noret_decl(trf_4480)
static void C_ccall trf_4480(C_word c,C_word *av) C_noret;
static void C_ccall trf_4480(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4480(t0,t1,t2);}

C_noret_decl(trf_4536)
static void C_ccall trf_4536(C_word c,C_word *av) C_noret;
static void C_ccall trf_4536(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4536(t0,t1,t2);}

C_noret_decl(trf_4579)
static void C_ccall trf_4579(C_word c,C_word *av) C_noret;
static void C_ccall trf_4579(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4579(t0,t1,t2);}

C_noret_decl(trf_4652)
static void C_ccall trf_4652(C_word c,C_word *av) C_noret;
static void C_ccall trf_4652(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4652(t0,t1,t2);}

C_noret_decl(trf_4691)
static void C_ccall trf_4691(C_word c,C_word *av) C_noret;
static void C_ccall trf_4691(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4691(t0,t1,t2,t3);}

C_noret_decl(trf_4704)
static void C_ccall trf_4704(C_word c,C_word *av) C_noret;
static void C_ccall trf_4704(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4704(t0,t1);}

C_noret_decl(trf_4725)
static void C_ccall trf_4725(C_word c,C_word *av) C_noret;
static void C_ccall trf_4725(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4725(t0,t1);}

C_noret_decl(trf_4899)
static void C_ccall trf_4899(C_word c,C_word *av) C_noret;
static void C_ccall trf_4899(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4899(t0,t1,t2);}

/* f5335 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f5335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5335,c,av);}
C_trace(C_text("chicken-status.scm:211: chicken.base#exit"));
t2=C_fast_retrieve(lf[101]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f5342 in k4868 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f5342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5342,c,av);}
C_trace(C_text("chicken-status.scm:211: chicken.base#exit"));
t2=C_fast_retrieve(lf[101]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* f5349 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f5349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f5349,c,av);}
C_trace(C_text("chicken-status.scm:211: chicken.base#exit"));
t2=C_fast_retrieve(lf[101]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k1675 */
static void C_ccall f_1677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1677,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1680,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1678 in k1675 */
static void C_ccall f_1680(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1680,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5036,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-status.scm:26: ##sys#with-environment"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[148]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[148]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1681 in k1678 in k1675 */
static void C_ccall f_1683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1683,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1686,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1686(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1686,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1689,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1689(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1689,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1692,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1692(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1692,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1695,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1695(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1695,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1698,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1698(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1698,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1701,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1701(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,5)))){
C_save_and_reclaim((void *)f_1701,c,av);}
a=C_alloc(11);
t2=C_mutate(&lf[1] /* (set! main#append-map ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1902,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[5] /* (set! main#any ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2106,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[7] /* (set! main#delete-duplicates ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2267,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[8] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2312,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[9] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t7=C_mutate(&lf[10] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:43: chicken.platform#feature?"));
t9=C_fast_retrieve(lf[144]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[145];
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_1902(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_1902,4,t1,t2,t3,t4);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t4))){
t5=C_i_check_list_2(t3,lf[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1917,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1917(t9,t1,t3);}
else{
t5=C_a_i_cons(&a,2,t3,t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1957,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1957(t9,t1,t5);}}

/* foldr192 in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_1917(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1917,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1944,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g197 in foldr192 in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_1925(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_1925,4,t0,t1,t2,t3);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1933,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:72: proc"));
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k1931 in g197 in foldr192 in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1933,c,av);}
C_trace(C_text("mini-srfi-1.scm:72: scheme#append"));
t2=*((C_word*)lf[3]+1);{
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

/* k1942 in foldr192 in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1944,c,av);}
C_trace(C_text("mini-srfi-1.scm:72: g197"));
t2=((C_word*)t0)[2];
f_1925(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_1957(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_1957,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1964,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("mini-srfi-1.scm:74: any"));
f_2106(t3,*((C_word*)lf[6]+1),t2);}

/* k1962 in loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1964(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1964,c,av);}
a=C_alloc(21);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_i_check_list_2(((C_word*)t0)[4],lf[4]);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2036,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2038,a[2]=t5,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2038(t12,t8,((C_word*)t0)[4]);}}

/* k1969 in k1962 in loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1971(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1971,c,av);}
a=C_alloc(20);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1987,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1989,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_1989(t11,t7,((C_word*)t0)[4]);}

/* k1973 in k1969 in k1962 in loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_1975,c,av);}
C_trace(C_text("mini-srfi-1.scm:76: scheme#append"));
t2=*((C_word*)lf[3]+1);{
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

/* k1985 in k1969 in k1962 in loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_1987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_1987,c,av);}
C_trace(C_text("mini-srfi-1.scm:77: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_1957(t2,((C_word*)t0)[3],t1);}

/* map-loop234 in k1969 in k1962 in loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_1989(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1989,3,t0,t1,t2);}
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

/* k2034 in k1962 in loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2036,c,av);}{
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

/* map-loop207 in k1962 in loop in main#append-map in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2038(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2038,3,t0,t1,t2);}
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

/* loop in k4868 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static C_word f_2078(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_stack_overflow_check;
loop:{}
t2=C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=C_i_car(t1);
t4=C_i_memq(t3,lf[126]);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* main#any in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2106(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2106,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2112,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2112(t7,t1,t3);}

/* loop in main#any in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2112(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2112,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2122,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:88: pred"));
t4=((C_word*)t0)[3];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}}

/* k2120 in loop in main#any in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2122,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("mini-srfi-1.scm:89: loop"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_2112(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[4]));}}

/* loop in k3819 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void f_2170(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2170,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2188,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:101: loop"));
t6=t4;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}

/* k2186 in loop in k3819 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_2188(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2188,c,av);}
C_trace(C_text("mini-srfi-1.scm:101: scheme#append"));
t2=*((C_word*)lf[3]+1);{
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

/* loop in loop in main#delete-duplicates in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2198(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_2198,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:106: test"));
t4=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
av2[3]=C_i_car(t2);
((C_proc)C_fast_retrieve_proc(t4))(4,av2);}}}

/* k2209 in loop in loop in main#delete-duplicates in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2211(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2211,c,av);}
a=C_alloc(4);
if(C_truep(t1)){
C_trace(C_text("mini-srfi-1.scm:107: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_2198(t2,((C_word*)t0)[3],C_u_i_cdr(((C_word*)t0)[4]));}
else{
t2=C_u_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2225,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:109: loop"));
t4=((C_word*)((C_word*)t0)[2])[1];
f_2198(t4,t3,C_u_i_cdr(((C_word*)t0)[4]));}}

/* k2223 in k2209 in loop in loop in main#delete-duplicates in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2225,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#delete-duplicates in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2267(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2267,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2273,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_2273(t7,t1,t2);}

/* loop in main#delete-duplicates in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2273(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,0,3)))){
C_save_and_reclaim_args((void *)trf_2273,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2287,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2300,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2198,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2198(t10,t6,t4);}}

/* k2285 in loop in main#delete-duplicates in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2287(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2287,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2298 in loop in main#delete-duplicates in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2300,c,av);}
C_trace(C_text("mini-srfi-1.scm:123: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_2273(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2312(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2312,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2321,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2321(t8,t1,t3);}

/* foldr339 in main#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2321(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2321,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2350,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g344 in foldr339 in main#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void f_2329(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2329,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2336,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:131: pred"));
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2334 in g344 in foldr339 in main#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2336,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2348 in foldr339 in main#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2350,c,av);}
C_trace(C_text("mini-srfi-1.scm:131: g344"));
t2=((C_word*)t0)[2];
f_2329(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2985(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2985,c,av);}
a=C_alloc(6);
t2=lf[11] /* main#cross-chicken */ =t1;;
t3=lf[12] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[13] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2991,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[14] /* (set! main#chicken-install-program ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2995,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_2999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2999,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3003,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3007(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3007,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3011,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_EXECUTABLE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3015,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INSTALL_PROGRAM_FILE_OPTIONS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3019,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3023,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3027,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_RUN_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 */
static void C_ccall f_3031(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3031,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[16] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_STATIC_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in k1675 in ... */
static void C_ccall f_3035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3035,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in k1678 in ... */
static void C_ccall f_3039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3039,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in k1681 in ... */
static void C_ccall f_3043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3043,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[17] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_TARGET_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_3047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3047,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5034,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:64: chicken.platform#software-type"));
t3=C_fast_retrieve(lf[143]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in ... */
static void C_ccall f_3055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3055,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in ... */
static void C_ccall f_3059(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3059,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[17] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5027,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_CSC_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in ... */
static void C_ccall f_3063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3063,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CSI_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in ... */
static void C_ccall f_3067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_3067,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5019,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_CHICKEN_DO_PROGRAM);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in ... */
static void C_ccall f_3071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3071,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in ... */
static void C_ccall f_3075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3075,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_TARGET_LIBRARIAN_FLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in ... */
static void C_ccall f_3079(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3079,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in ... */
static void C_ccall f_3083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3083,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_EGG_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in ... */
static void C_ccall f_3087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3087,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3091,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in ... */
static void C_ccall f_3091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3091,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_BIN_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in ... */
static void C_ccall f_3095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3095,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in ... */
static void C_ccall f_3099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3099,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3103,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in ... */
static void C_ccall f_3103(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3103,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in ... */
static void C_ccall f_3107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3107,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in ... */
static void C_ccall f_3111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3111,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LDFLAGS);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in ... */
static void C_ccall f_3115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3115,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3119,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CC);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in ... */
static void C_ccall f_3119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3119,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_CXX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in ... */
static void C_ccall f_3123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3123,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5014,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[12],C_text("main#binary-version"));
C_trace(C_text("##sys#fixnum->string"));
t5=C_fast_retrieve(lf[137]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in ... */
static void C_ccall f_3127(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3127,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[20] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3131,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5009,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[12],C_text("main#binary-version"));
C_trace(C_text("##sys#fixnum->string"));
t6=C_fast_retrieve(lf[137]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[12],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in ... */
static void C_ccall f_3131(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3131,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[21] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[22] /* (set! main#+egg-info-extension+ ...) */,lf[23]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:122: chicken.process-context#get-environment-variable"));
t5=C_fast_retrieve(lf[134]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[135];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in ... */
static void C_ccall f_3215(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3215,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3218,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_3218(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:123: chicken.platform#system-cache-directory"));
t4=C_fast_retrieve(lf[133]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in ... */
static void C_ccall f_3218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3218,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[24] /* (set! main#cache-directory ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:131: scheme#string-append"));
t4=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[24],C_text("main#cache-directory"));
av2[3]=lf[130];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in ... */
static void C_ccall f_3222(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3222,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[25] /* (set! main#cache-metadata-directory ...) */,t1);
t3=C_mutate(&lf[26] /* (set! main#get-egg-property ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3273,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[27] /* (set! main#get-egg-property* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3297,tmp=(C_word)a,a+=2,tmp));
t5=lf[28] /* main#host-extensions */ =C_SCHEME_TRUE;;
t6=lf[29] /* main#target-extensions */ =C_SCHEME_TRUE;;
t7=C_mutate(&lf[30] /* (set! main#get-terminal-width ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3616,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4992,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:62: get-terminal-width"));
f_3616(t8);}

/* k3229 in k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_3231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3231,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3237,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-information.scm:34: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[46]);{
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

/* k3235 in k3229 in k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3237(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3237,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(C_truep(t1)?((C_word*)t2)[2]:((C_word*)t2)[3]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3262,a[2]=((C_word*)t2)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("egg-information.scm:38: scheme#with-input-from-file"));
t5=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=*((C_word*)lf[45]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3239 in k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_3241(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3241,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3245,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-information.scm:32: chicken.pathname#pathname-file"));
t4=C_fast_retrieve(lf[49]);{
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

/* k3243 in k3239 in k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3245,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3249,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("egg-information.scm:33: chicken.pathname#pathname-extension"));
t4=C_fast_retrieve(lf[48]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3247 in k3243 in k3239 in k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_3249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3249,c,av);}
C_trace(C_text("egg-information.scm:30: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[47]);{
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

/* k3251 in k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_3253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3253,c,av);}
C_trace(C_text("egg-information.scm:30: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[50];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3260 in k3235 in k3229 in k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_3262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3262,c,av);}
if(C_truep(C_eofp(t1))){
C_trace(C_text("egg-information.scm:40: chicken.base#error"));
t2=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[43];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* main#get-egg-property in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in ... */
static C_word f_3273(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cadr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-egg-property* in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in ... */
static C_word f_3297(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_overflow_check;{}
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_END_OF_LIST:C_i_car(t3));
t6=C_i_assq(t2,t1);
if(C_truep(t6)){
t7=C_i_cdr(t6);
return((C_truep(t7)?t7:t5));}
else{
return(t5);}}

/* main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in ... */
static void f_3616(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3616,1,t1);}
a=C_alloc(4);
t2=*((C_word*)lf[31]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3623,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:55: chicken.port#terminal-port?"));
t4=C_fast_retrieve(lf[36]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=*((C_word*)lf[31]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_3623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3623,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:56: scheme#call-with-current-continuation"));
t4=*((C_word*)lf[35]+1);{
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
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3624 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_3626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3626,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:56: g943"));
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* k3627 in k3624 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3629,c,av);}
if(C_truep(C_i_zerop(t1))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(79);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("chicken-status.scm:59: scheme#min"));
t2=*((C_word*)lf[32]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(79);
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_3638(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_3638,c,av);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3653,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:56: chicken.condition#with-exception-handler"));
t5=C_fast_retrieve(lf[34]);{
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

/* a3643 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,c,2)))){
C_save_and_reclaim((void *)f_3644,c,av);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3650,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-status.scm:56: k940"));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t3;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* a3649 in a3643 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3650,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3652 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3653(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3653,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3659,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:56: ##sys#call-with-values"));{
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

/* a3658 in a3652 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_3659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3659,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3671,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-status.scm:56: ##sys#call-with-values"));{
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

/* a3664 in a3658 in a3652 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3665(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3665,c,av);}
C_trace(C_text("chicken-status.scm:56: chicken.port#terminal-size"));
t2=C_fast_retrieve(lf[33]);{
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

/* a3670 in a3658 in a3652 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3671(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +0,c,1)))){
C_save_and_reclaim((void*)f_3671,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+0);
t2=C_build_rest(&a,c,2,av);
C_word t3;
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_list_ref(t2,C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3676 in a3652 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_3677(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-2)*C_SIZEOF_PAIR +3,c,2)))){
C_save_and_reclaim((void*)f_3677,c,av);}
a=C_alloc((c-2)*C_SIZEOF_PAIR+3);
t2=C_build_rest(&a,c,2,av);
C_word t3;
C_word t4;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:56: k940"));
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

/* a3682 in a3676 in a3652 in a3637 in k3621 in main#get-terminal-width in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3683,c,av);}{
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

/* main#repo-path in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void f_3693(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_3693,1,t1);}
t2=(C_truep(C_retrieve2(lf[11],C_text("main#cross-chicken")))?C_i_not(C_retrieve2(lf[28],C_text("main#host-extensions"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
if(C_truep(t5)){
t6=C_retrieve2(lf[21],C_text("main#target-run-repo"));
C_trace(C_text("chicken-status.scm:66: ##sys#split-path"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word av2[3];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[21],C_text("main#target-run-repo"));
tp(3,av2);}}
else{
t6=C_retrieve2(lf[20],C_text("main#target-repo"));
C_trace(C_text("chicken-status.scm:66: ##sys#split-path"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[39]);
C_word av2[3];
av2[0]=*((C_word*)lf[39]+1);
av2[1]=t1;
av2[2]=C_retrieve2(lf[20],C_text("main#target-repo"));
tp(3,av2);}}}
else{
C_trace(C_text("chicken-status.scm:67: chicken.platform#repository-path"));
t3=C_fast_retrieve(lf[40]);{
C_word av2[2];
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a3720 in k3809 in g1001 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_3721(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3721,c,av);}
t3=C_fast_retrieve(lf[55]);
C_trace(C_text("chicken-status.scm:70: g963"));
t4=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void f_3727(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3727,3,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3731,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace(C_text("chicken-status.scm:72: repo-path"));
f_3693(t4);}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_i_car(t3);
f_3731(2,av2);}}}

/* k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_3731(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3731,c,av);}
a=C_alloc(7);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_retrieve2(lf[22],C_text("main#+egg-info-extension+")):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3743,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3753,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:73: chicken.pathname#make-pathname"));
t10=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=C_SCHEME_FALSE;
av2[3]=((C_word*)t0)[4];
av2[4]=t5;
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k3741 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3743(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3743,c,av);}
a=C_alloc(13);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3231,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3241,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-information.scm:30: chicken.pathname#pathname-directory"));
t5=C_fast_retrieve(lf[51]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3751 in k3729 in main#read-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3753,c,av);}
C_trace(C_text("chicken-status.scm:73: chicken.load#find-file"));
t2=C_fast_retrieve(lf[52]);{
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

/* main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void f_3782(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(22,0,3)))){
C_save_and_reclaim_args((void *)trf_3782,4,t1,t2,t3,t4);}
a=C_alloc(22);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3786,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace(C_text("chicken-status.scm:88: delete-duplicates"));
f_2267(t1,t2,*((C_word*)lf[54]+1));}
else{
if(C_truep(t4)){
t6=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=((C_word*)t8)[1];
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3803,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t11=C_i_check_list_2(t3,lf[4]);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3821,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3823,a[2]=t8,a[3]=t14,a[4]=t10,a[5]=t9,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_3823(t16,t12,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3860,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:84: filter"));
f_2312(t5,t6,t2);}}}

/* k3784 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_3786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3786,c,av);}
C_trace(C_text("chicken-status.scm:88: delete-duplicates"));
f_2267(((C_word*)t0)[2],t1,*((C_word*)lf[54]+1));}

/* g1001 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void f_3803(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3803,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3811,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3815,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:81: chicken.irregex#glob->sre"));
t5=C_fast_retrieve(lf[57]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3809 in g1001 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3811,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3721,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:70: filter"));
f_2312(((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* k3813 in g1001 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3815(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3815,c,av);}
C_trace(C_text("chicken-status.scm:81: chicken.irregex#irregex"));
t2=C_fast_retrieve(lf[56]);{
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

/* k3819 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_3821(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3821,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2170,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2170(t5,((C_word*)t0)[2],t1);}

/* map-loop995 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void f_3823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3823,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-status.scm:80: g1001"));
t4=((C_word*)t0)[4];
f_3803(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3846 in map-loop995 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3848(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3848,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3823(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a3859 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_3860(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3860,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3866,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:86: any"));
f_2106(t1,t3,((C_word*)t0)[2]);}

/* a3865 in a3859 in main#filter-egg-names in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_3866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3866,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_string_equal_p(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3877 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3879,c,av);}
C_trace(C_text("chicken-status.scm:91: delete-duplicates"));
f_2267(((C_word*)t0)[2],t1,*((C_word*)lf[108]+1));}

/* a3880 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3881(C_word c,C_word *av){
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
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(14,c,4)))){
C_save_and_reclaim((void *)f_3881,c,av);}
a=C_alloc(14);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[49]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3888,a[2]=t5,a[3]=t7,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3929,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:95: chicken.pathname#make-pathname"));
t10=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=t2;
av2[3]=lf[110];
av2[4]=C_retrieve2(lf[22],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t10+1)))(5,av2);}}

/* k3886 in a3880 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_3888(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3888,c,av);}
a=C_alloc(8);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3893(t5,((C_word*)t0)[5],t1);}

/* map-loop1033 in k3886 in a3880 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in ... */
static void f_3893(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3893,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-status.scm:94: g1039"));
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

/* k3916 in map-loop1033 in k3886 in a3880 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in ... */
static void C_ccall f_3918(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3918,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3893(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3927 in a3880 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_3929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3929,c,av);}
C_trace(C_text("chicken-status.scm:95: chicken.file#glob"));
t2=C_fast_retrieve(lf[109]);{
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

/* k3931 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_3933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3933,c,av);}
C_trace(C_text("chicken-status.scm:92: append-map"));
f_1902(((C_word*)t0)[2],((C_word*)t0)[3],t1,C_SCHEME_END_OF_LIST);}

/* main#format-string in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void f_3935(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3935,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_SCHEME_FALSE:C_i_car(t4));
t7=C_i_nullp(t4);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t4));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_make_character(32):C_i_car(t8));
t11=C_i_nullp(t8);
t12=(C_truep(t11)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
t13=C_i_string_length(t2);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3954,a[2]=t6,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t15=C_fixnum_difference(t3,t13);
C_trace(C_text("chicken-status.scm:101: scheme#make-string"));
t16=*((C_word*)lf[60]+1);{
C_word av2[4];
av2[0]=t16;
av2[1]=t14;
av2[2]=C_i_fixnum_max(C_fix(0),t15);
av2[3]=t10;
((C_proc)(void*)(*((C_word*)t16+1)))(4,av2);}}

/* k3952 in main#format-string in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_3954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3954,c,av);}
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[59]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[59]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[59]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[59]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
tp(4,av2);}}}

/* main#list-installed-eggs in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_4001,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4005,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
C_trace(C_text("chicken-status.scm:106: repo-path"));
f_3693(t4);}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_i_car(t3);
f_4005(2,av2);}}}

/* k4003 in main#list-installed-eggs in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4005(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4005,c,av);}
a=C_alloc(8);
t2=C_i_nullp(((C_word*)t0)[2]);
t3=(C_truep(t2)?C_SCHEME_END_OF_LIST:C_i_cdr(((C_word*)t0)[2]));
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_retrieve2(lf[22],C_text("main#+egg-info-extension+")):C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4015,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4022,a[2]=t8,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:109: chicken.sort#sort"));
t10=C_fast_retrieve(lf[64]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t10;
av2[1]=t9;
av2[2]=((C_word*)t0)[4];
av2[3]=*((C_word*)lf[65]+1);
((C_proc)(void*)(*((C_word*)t10+1)))(4,av2);}}

/* g1097 in k4003 in main#list-installed-eggs in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void f_4015(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4015,3,t0,t1,t2);}
t3=C_retrieve2(lf[62],C_text("main#list-egg-info"));
C_trace(C_text("chicken-status.scm:108: g1112"));
t4=C_retrieve2(lf[62],C_text("main#list-egg-info"));{
C_word av2[5];
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
av2[4]=((C_word*)t0)[3];
f_4080(5,av2);}}

/* k4020 in k4003 in main#list-installed-eggs in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4022(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4022,c,av);}
a=C_alloc(6);
t2=C_i_check_list_2(t1,lf[63]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4030(t6,((C_word*)t0)[3],t1);}

/* for-each-loop1096 in k4020 in k4003 in main#list-installed-eggs in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void f_4030(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4030,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4040,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-status.scm:108: g1097"));
t4=((C_word*)t0)[3];
f_4015(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4038 in for-each-loop1096 in k4020 in k4003 in main#list-installed-eggs in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4040,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4030(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4080(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_4080,c,av);}
a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4084,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:113: read-info"));
f_3727(t5,t2,C_a_i_list(&a,2,t3,t4));}

/* k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4084(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4084,c,av);}
a=C_alloc(15);
t2=(C_truep(t1)?(
C_trace("chicken-status.scm:114: get-egg-property"),
  f_3273(t1,lf[66],C_SCHEME_END_OF_LIST)
):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4090,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
t4=t3;
f_4090(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4130,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_list2(&a,2,C_retrieve2(lf[25],C_text("main#cache-metadata-directory")),((C_word*)t0)[3]);
C_trace(C_text("chicken-status.scm:116: chicken.pathname#make-pathname"));
t7=C_fast_retrieve(lf[47]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t7;
av2[1]=t5;
av2[2]=t6;
av2[3]=lf[73];
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}}

/* k4088 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void f_4090(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_4090,2,t0,t1);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4097,a[2]=((C_word*)t2)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4114,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:120: scheme#string-append"));
t5=*((C_word*)lf[70]+1);{
C_word av2[4];
av2[0]=t5;
av2[1]=t4;
av2[2]=((C_word*)t2)[3];
av2[3]=lf[71];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k4095 in k4088 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4097(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4097,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4105,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4110,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:123: chicken.string#->string"));
t5=C_fast_retrieve(lf[69]);{
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

/* k4099 in k4095 in k4088 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4101,c,av);}
C_trace(C_text("chicken-status.scm:120: chicken.base#print"));
t2=*((C_word*)lf[67]+1);{
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

/* k4103 in k4095 in k4088 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4105,c,av);}
a=C_alloc(6);
C_trace(C_text("chicken-status.scm:122: format-string"));
f_3935(((C_word*)t0)[2],t1,C_retrieve2(lf[37],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4108 in k4095 in k4088 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4110,c,av);}
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[59]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[59]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[68];
av2[3]=t1;
tp(4,av2);}}

/* k4112 in k4088 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4114,c,av);}
a=C_alloc(6);
C_trace(C_text("chicken-status.scm:120: format-string"));
f_3935(((C_word*)t0)[2],t1,C_retrieve2(lf[37],C_text("main#list-width")),C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* k4115 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4117,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace(C_text("chicken-status.scm:118: scheme#with-input-from-file"));
t3=C_fast_retrieve(lf[44]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=t1;
av2[3]=*((C_word*)lf[45]+1);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}
else{
t3=((C_word*)t0)[2];
f_4090(t3,lf[72]);}}

/* k4118 in k4115 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4120,c,av);}
t2=((C_word*)t0)[2];
f_4090(t2,(C_truep(t1)?t1:lf[72]));}

/* k4128 in k4082 in main#list-egg-info in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4130(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4130,c,av);}
C_trace(C_text("chicken-status.scm:115: chicken.file#file-exists?"));
t2=C_fast_retrieve(lf[46]);{
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

/* k4144 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4146(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4146,c,av);}
a=C_alloc(11);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4191,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4195,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-status.scm:131: chicken.file#directory"));
t5=C_fast_retrieve(lf[106]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_retrieve2(lf[24],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4153 in for-each-loop1139 in k4156 in k4144 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in ... */
static void C_ccall f_4155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4155,c,av);}
C_trace(C_text("chicken-status.scm:130: list-egg-info"));
t2=C_retrieve2(lf[62],C_text("main#list-egg-info"));{
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
av2[4]=lf[105];
f_4080(5,av2);}}

/* k4156 in k4144 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4158(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4158,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[63]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4166(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1139 in k4156 in k4144 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void f_4166(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4166,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4176,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4155,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:130: chicken.pathname#make-pathname"));
t6=C_fast_retrieve(lf[47]);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=C_retrieve2(lf[24],C_text("main#cache-directory"));
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4174 in for-each-loop1139 in k4156 in k4144 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in ... */
static void C_ccall f_4176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4176,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4166(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4189 in k4144 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4191(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4191,c,av);}
C_trace(C_text("chicken-status.scm:131: chicken.sort#sort"));
t2=C_fast_retrieve(lf[64]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[65]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k4193 in k4144 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4195,c,av);}
C_trace(C_text("chicken-status.scm:131: filter-egg-names"));
f_3782(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* main#gather-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void f_4197(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_4197,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4203,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:134: append-map"));
f_1902(t1,t4,t2,C_SCHEME_END_OF_LIST);}

/* a4202 in main#gather-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4203(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4203,c,av);}
t3=C_retrieve2(lf[75],C_text("main#gather-components-rec"));
C_trace(C_text("chicken-status.scm:134: g1164"));
t4=C_retrieve2(lf[75],C_text("main#gather-components-rec"));{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=((C_word*)t0)[2];
f_4209(4,av2);}}

/* main#gather-components-rec in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4209(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_4209,c,av);}
a=C_alloc(12);
t4=C_i_car(t2);
t5=C_eqp(t4,lf[76]);
if(C_truep(t5)){
if(C_truep(C_retrieve2(lf[28],C_text("main#host-extensions")))){
C_trace(C_text("chicken-status.scm:139: gather-components"));
f_4197(t1,C_u_i_cdr(t2),lf[76]);}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}
else{
t6=C_eqp(t4,lf[77]);
if(C_truep(t6)){
if(C_truep(C_retrieve2(lf[29],C_text("main#target-extensions")))){
C_trace(C_text("chicken-status.scm:141: gather-components"));
f_4197(t1,C_u_i_cdr(t2),lf[77]);}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
t7=C_eqp(t4,lf[78]);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_a_i_list3(&a,3,lf[78],t3,t8);
t10=t1;{
C_word *av2=av;
av2[0]=t10;
av2[1]=C_a_i_list1(&a,1,t9);
((C_proc)(void*)(*((C_word*)t10+1)))(2,av2);}}
else{
t8=C_eqp(t4,lf[79]);
if(C_truep(t8)){
t9=C_i_cadr(t2);
t10=C_a_i_list3(&a,3,lf[79],t3,t9);
t11=t1;{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_a_i_list1(&a,1,t10);
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_eqp(t4,lf[80]);
if(C_truep(t9)){
t10=C_i_cadr(t2);
t11=C_a_i_list3(&a,3,lf[80],t3,t10);
t12=t1;{
C_word *av2=av;
av2[0]=t12;
av2[1]=C_a_i_list1(&a,1,t11);
((C_proc)(void*)(*((C_word*)t12+1)))(2,av2);}}
else{
t10=C_eqp(t4,lf[81]);
if(C_truep(t10)){
t11=C_i_cadr(t2);
t12=C_a_i_list3(&a,3,lf[81],t3,t11);
t13=t1;{
C_word *av2=av;
av2[0]=t13;
av2[1]=C_a_i_list1(&a,1,t12);
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t11=C_eqp(t4,lf[82]);
if(C_truep(t11)){
t12=C_i_cadr(t2);
t13=C_a_i_list3(&a,3,lf[82],t3,t12);
t14=t1;{
C_word *av2=av;
av2[0]=t14;
av2[1]=C_a_i_list1(&a,1,t13);
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t12=C_eqp(t4,lf[83]);
if(C_truep(t12)){
t13=C_i_cadr(t2);
t14=C_a_i_list3(&a,3,lf[83],t3,t13);
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_a_i_list1(&a,1,t14);
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}
else{
t13=C_eqp(t4,lf[84]);
if(C_truep(t13)){
t14=C_i_cadr(t2);
t15=C_a_i_list3(&a,3,lf[84],t3,t14);
t16=t1;{
C_word *av2=av;
av2[0]=t16;
av2[1]=C_a_i_list1(&a,1,t15);
((C_proc)(void*)(*((C_word*)t16+1)))(2,av2);}}
else{
t14=C_eqp(t4,lf[85]);
if(C_truep(t14)){
t15=C_i_cadr(t2);
t16=C_a_i_list3(&a,3,lf[85],t3,t15);
t17=t1;{
C_word *av2=av;
av2[0]=t17;
av2[1]=C_a_i_list1(&a,1,t16);
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}
else{
t15=t1;{
C_word *av2=av;
av2[0]=t15;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t15+1)))(2,av2);}}}}}}}}}}}}

/* main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4399(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4399,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4565,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:153: get-terminal-width"));
f_3616(t3);}

/* g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void f_4404(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_4404,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4408,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:156: read-info"));
f_3727(t5,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4408(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4408,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(
C_trace("chicken-status.scm:157: get-egg-property"),
  f_3273(t1,lf[66],C_SCHEME_END_OF_LIST)
);
t4=(
C_trace("chicken-status.scm:158: get-egg-property*"),
  f_3297(t1,lf[87],C_SCHEME_END_OF_LIST)
);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4417,a[2]=t4,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4508,a[2]=t5,a[3]=((C_word*)t2)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4525,a[2]=t6,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:160: scheme#string-append"));
t8=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t2)[4];
av2[3]=lf[94];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
C_trace(C_text("chicken-status.scm:164: chicken.base#print"));
t6=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4417,c,av);}
a=C_alloc(3);
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4423,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:166: gather-components"));
f_4197(t2,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4421 in k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_4423(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4423,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[63]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4480,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4480(t6,((C_word*)t0)[2],t1);}

/* k4430 in for-each-loop1197 in k4421 in k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in ... */
static void C_ccall f_4432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_4432,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4460,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:170: chicken.string#->string"));
t4=C_fast_retrieve(lf[69]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_i_caddr(((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4434 in k4430 in for-each-loop1197 in k4421 in k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in ... */
static void C_ccall f_4436(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,6)))){
C_save_and_reclaim((void *)f_4436,c,av);}
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[76]);
if(C_truep(t3)){
C_trace(C_text("chicken-status.scm:169: chicken.base#print"));
t4=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[88];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[89];
av2[5]=t1;
av2[6]=lf[90];
((C_proc)(void*)(*((C_word*)t4+1)))(7,av2);}}
else{
t4=C_eqp(t2,lf[77]);
if(C_truep(t4)){
C_trace(C_text("chicken-status.scm:169: chicken.base#print"));
t5=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[88];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[89];
av2[5]=t1;
av2[6]=lf[91];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}
else{
C_trace(C_text("chicken-status.scm:169: chicken.base#print"));
t5=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[3];
av2[2]=lf[88];
av2[3]=((C_word*)t0)[4];
av2[4]=lf[89];
av2[5]=t1;
av2[6]=lf[92];
((C_proc)(void*)(*((C_word*)t5+1)))(7,av2);}}}}

/* k4458 in k4430 in for-each-loop1197 in k4421 in k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in ... */
static void C_ccall f_4460(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4460,c,av);}
C_trace(C_text("chicken-status.scm:170: format-string"));
f_3935(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* k4466 in for-each-loop1197 in k4421 in k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in ... */
static void C_ccall f_4468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4468,c,av);}
C_trace(C_text("chicken-status.scm:169: format-string"));
f_3935(((C_word*)t0)[2],t1,C_fix(32),C_SCHEME_END_OF_LIST);}

/* for-each-loop1197 in k4421 in k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in ... */
static void f_4480(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4480,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4490,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4432,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4468,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:169: chicken.string#->string"));
t7=C_fast_retrieve(lf[69]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_i_car(t4);
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4488 in for-each-loop1197 in k4421 in k4415 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in ... */
static void C_ccall f_4490(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4490,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4480(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4506 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4508(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4508,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4512,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4516,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4521,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:162: chicken.string#->string"));
t5=C_fast_retrieve(lf[69]);{
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

/* k4510 in k4506 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_4512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4512,c,av);}
C_trace(C_text("chicken-status.scm:160: chicken.base#print"));
t2=*((C_word*)lf[67]+1);{
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

/* k4514 in k4506 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_4516(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4516,c,av);}
a=C_alloc(6);
C_trace(C_text("chicken-status.scm:161: format-string"));
f_3935(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(46)));}

/* k4519 in k4506 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in ... */
static void C_ccall f_4521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4521,c,av);}
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[59]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[59]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=t1;
tp(4,av2);}}

/* k4523 in k4406 in g1181 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4525(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4525,c,av);}
a=C_alloc(6);
C_trace(C_text("chicken-status.scm:160: format-string"));
f_3935(((C_word*)t0)[2],t1,((C_word*)t0)[3],C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(46)));}

/* for-each-loop1180 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void f_4536(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4536,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4546,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-status.scm:154: g1181"));
t4=((C_word*)t0)[3];
f_4404(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4544 in for-each-loop1180 in k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4546(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4546,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4536(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4563 in main#list-installed-components in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4565(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(45,c,3)))){
C_save_and_reclaim((void *)f_4565,c,av);}
a=C_alloc(45);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4404,a[2]=C_SCHEME_UNDEFINED,a[3]=t3,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
t5=C_i_check_list_2(((C_word*)t0)[2],lf[63]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4536,a[2]=t7,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4536(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* main#list-installed-files in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4567(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4567,c,av);}
a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4571,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4604,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4606,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-status.scm:182: append-map"));
f_1902(t4,t5,t2,C_SCHEME_END_OF_LIST);}

/* k4569 in main#list-installed-files in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4571(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4571,c,av);}
a=C_alloc(5);
t2=C_i_check_list_2(t1,lf[63]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4579,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4579(t6,((C_word*)t0)[2],t1);}

/* for-each-loop1229 in k4569 in main#list-installed-files in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void f_4579(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4579,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4589,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-status.scm:179: g1230"));
t4=*((C_word*)lf[67]+1);{
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

/* k4587 in for-each-loop1229 in k4569 in main#list-installed-files in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4589(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4589,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4579(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4602 in main#list-installed-files in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4604,c,av);}
C_trace(C_text("chicken-status.scm:181: chicken.sort#sort"));
t2=C_fast_retrieve(lf[64]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=*((C_word*)lf[65]+1);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* a4605 in main#list-installed-files in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4606(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4606,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4614,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:184: read-info"));
f_3727(t3,t2,C_SCHEME_END_OF_LIST);}

/* k4612 in a4605 in main#list-installed-files in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4614,c,av);}
C_trace(C_text("chicken-status.scm:184: get-egg-property*"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
C_trace("chicken-status.scm:184: get-egg-property*"),
  f_3297(t1,lf[96],C_SCHEME_END_OF_LIST)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* main#dump-installed-versions in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4616(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4616,c,av);}
a=C_alloc(5);
t3=C_i_check_list_2(t2,lf[63]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4652,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4652(t7,t1,t2);}

/* k4631 in k4642 in for-each-loop1249 in main#dump-installed-versions in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_4633,c,av);}
a=C_alloc(6);
if(C_truep(((C_word*)t0)[2])){
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t1,t2);
C_trace(C_text("chicken-status.scm:192: chicken.pretty-print#pp"));
t4=C_fast_retrieve(lf[98]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[3];
av2[2]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
C_trace(C_text("chicken-status.scm:192: chicken.pretty-print#pp"));
t3=C_fast_retrieve(lf[98]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}

/* k4642 in for-each-loop1249 in main#dump-installed-versions in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4644(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4644,c,av);}
a=C_alloc(4);
t2=(
C_trace("chicken-status.scm:191: get-egg-property"),
  f_3273(t1,lf[66],C_SCHEME_END_OF_LIST)
);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4633,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:192: scheme#string->symbol"));
t4=*((C_word*)lf[99]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* for-each-loop1249 in main#dump-installed-versions in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void f_4652(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4652,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4662,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4644,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:191: read-info"));
f_3727(t5,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4660 in for-each-loop1249 in main#dump-installed-versions in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4662,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4652(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void f_4691(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_4691,4,t0,t1,t2,t3);}
a=C_alloc(9);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4704,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t5=((C_word*)((C_word*)t0)[4])[1];
if(C_truep(t5)){
t6=t4;
f_4704(t6,t5);}
else{
t6=((C_word*)((C_word*)t0)[5])[1];
t7=t4;
f_4704(t7,t6);}}
else{
t5=t4;
f_4704(t5,C_SCHEME_FALSE);}}
else{
t4=C_i_car(t2);
if(C_truep((C_truep(C_i_equalp(t4,lf[111]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[112]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t4,lf[113]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5335,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:197: chicken.base#print"));
t6=*((C_word*)lf[67]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[114];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
if(C_truep(C_i_string_equal_p(t4,lf[115]))){
t5=lf[29] /* main#target-extensions */ =C_SCHEME_FALSE;;
C_trace(C_text("chicken-status.scm:239: loop"));
t14=t1;
t15=C_u_i_cdr(t2);
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t4,lf[116]))){
t5=lf[28] /* main#host-extensions */ =C_SCHEME_FALSE;;
C_trace(C_text("chicken-status.scm:242: loop"));
t14=t1;
t15=C_u_i_cdr(t2);
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t4,lf[117]))){
t5=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
C_trace(C_text("chicken-status.scm:245: loop"));
t14=t1;
t15=C_u_i_cdr(t2);
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t4,lf[118]))){
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
C_trace(C_text("chicken-status.scm:248: loop"));
t14=t1;
t15=C_u_i_cdr(t2);
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t4,lf[119]))){
t5=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
C_trace(C_text("chicken-status.scm:251: loop"));
t14=t1;
t15=C_u_i_cdr(t2);
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t5=C_i_string_equal_p(t4,lf[120]);
t6=(C_truep(t5)?t5:C_i_string_equal_p(t4,lf[121]));
if(C_truep(t6)){
t7=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
C_trace(C_text("chicken-status.scm:254: loop"));
t14=t1;
t15=C_u_i_cdr(t2);
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
t7=C_i_string_equal_p(t4,lf[122]);
t8=(C_truep(t7)?t7:C_i_string_equal_p(t4,lf[123]));
if(C_truep(t8)){
t9=C_set_block_item(((C_word*)t0)[6],0,C_SCHEME_TRUE);
C_trace(C_text("chicken-status.scm:257: loop"));
t14=t1;
t15=C_u_i_cdr(t2);
t16=t3;
t1=t14;
t2=t15;
t3=t16;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t4,lf[124]))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4848,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4855,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:259: chicken.platform#chicken-version"));
t11=C_fast_retrieve(lf[125]);{
C_word av2[2];
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}
else{
t9=C_i_string_length(t4);
t10=(C_truep(C_i_fixnum_positivep(t9))?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(t4,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t10)){
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(t4),C_fix(2)))){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[7],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4944,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:264: scheme#substring"));
t13=*((C_word*)lf[128]+1);{
C_word av2[4];
av2[0]=t13;
av2[1]=t12;
av2[2]=t4;
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}
else{
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5349,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:197: chicken.base#print"));
t12=*((C_word*)lf[67]+1);{
C_word av2[3];
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[114];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}}
else{
t11=C_u_i_cdr(t2);
t12=C_a_i_cons(&a,2,t4,t3);
C_trace(C_text("chicken-status.scm:270: loop"));
t14=t1;
t15=t11;
t16=t12;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}}}}}}}}}}}

/* k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void f_4704(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_4704,2,t0,t1);}
a=C_alloc(5);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4707,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4712,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-status.scm:224: chicken.port#with-output-to-port"));
t4=C_fast_retrieve(lf[103]);{
C_word av2[4];
av2[0]=t4;
av2[1]=t2;
av2[2]=*((C_word*)lf[104]+1);
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-status.scm:127: chicken.file#directory-exists?"));
t4=C_fast_retrieve(lf[107]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[24],C_text("main#cache-directory"));
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=t2;
f_4725(t3,C_retrieve2(lf[97],C_text("main#dump-installed-versions")));}
else{
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t3=C_retrieve2(lf[95],C_text("main#list-installed-files"));
t4=t2;
f_4725(t4,C_retrieve2(lf[95],C_text("main#list-installed-files")));}
else{
t3=t2;
f_4725(t3,(C_truep(((C_word*)((C_word*)t0)[8])[1])?C_retrieve2(lf[86],C_text("main#list-installed-components")):C_retrieve2(lf[61],C_text("main#list-installed-eggs"))));}}}}}

/* k4705 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4707(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4707,c,av);}
C_trace(C_text("chicken-status.scm:226: chicken.base#exit"));
t2=C_fast_retrieve(lf[101]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(1);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* a4711 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4712(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4712,c,av);}
C_trace(C_text("chicken-status.scm:225: g1291"));
t2=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[102];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void f_4725(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,0,3)))){
C_save_and_reclaim_args((void *)trf_4725,2,t0,t1);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4732,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4736,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3879,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3881,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3933,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-status.scm:96: repo-path"));
f_3693(t6);}

/* k4730 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4732,c,av);}
C_trace(C_text("chicken-status.scm:223: g1294"));
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
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4734 in k4723 in k4702 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in ... */
static void C_ccall f_4736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4736,c,av);}
C_trace(C_text("chicken-status.scm:233: filter-egg-names"));
f_3782(((C_word*)t0)[2],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k4846 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4848,c,av);}
C_trace(C_text("chicken-status.scm:260: chicken.base#exit"));
t2=C_fast_retrieve(lf[101]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(0);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k4853 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4855,c,av);}
C_trace(C_text("chicken-status.scm:259: chicken.base#print"));
t2=*((C_word*)lf[67]+1);{
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

/* k4868 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4870(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_4870,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2078,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_2078(t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4895,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4899,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4899(t13,t9,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5342,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:197: chicken.base#print"));
t5=*((C_word*)lf[67]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[114];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4881 in k4868 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4883,c,av);}
C_trace(C_text("chicken-status.scm:266: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4691(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4893 in k4868 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void C_ccall f_4895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4895,c,av);}
C_trace(C_text("chicken-status.scm:266: scheme#append"));
t2=*((C_word*)lf[3]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_u_i_cdr(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop1330 in k4868 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in ... */
static void f_4899(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_4899,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_string(&a,2,C_make_character(45),t3);
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

/* k4942 in loop in k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in ... */
static void C_ccall f_4944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4944,c,av);}
C_trace(C_text("##sys#string->list"));
t2=C_fast_retrieve(lf[127]);{
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

/* k4972 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4974(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4974,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[100]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4978 in k4972 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in ... */
static void C_ccall f_4980(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4980,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4982 in k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in ... */
static void C_ccall f_4984(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,4)))){
C_save_and_reclaim((void *)f_4984,c,av);}
a=C_alloc(20);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4691,a[2]=t9,a[3]=t11,a[4]=t7,a[5]=t3,a[6]=t5,a[7]=t13,tmp=(C_word)a,a+=8,tmp));
t15=((C_word*)t13)[1];
f_4691(t15,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4990 in k3220 in k3216 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in ... */
static void C_ccall f_4992(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(62,c,5)))){
C_save_and_reclaim((void *)f_4992,c,av);}
a=C_alloc(62);
t2=C_s_a_i_minus(&a,2,t1,C_fix(2));
t3=C_s_a_i_quotient(&a,2,t2,C_fix(2));
t4=C_mutate(&lf[37] /* (set! main#list-width ...) */,t3);
t5=C_mutate(&lf[38] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3693,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[41] /* (set! main#read-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3727,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[53] /* (set! main#filter-egg-names ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3782,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[58] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3935,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate(&lf[61] /* (set! main#list-installed-eggs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4001,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[62] /* (set! main#list-egg-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4080,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[74] /* (set! main#gather-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4197,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[75] /* (set! main#gather-components-rec ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4209,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[86] /* (set! main#list-installed-components ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4399,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[95] /* (set! main#list-installed-files ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4567,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate(&lf[97] /* (set! main#dump-installed-versions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4616,tmp=(C_word)a,a+=2,tmp));
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4974,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4984,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-status.scm:272: chicken.process-context#command-line-arguments"));
t18=C_fast_retrieve(lf[129]);{
C_word *av2=av;
av2[0]=t18;
av2[1]=t17;
((C_proc)(void*)(*((C_word*)t18+1)))(2,av2);}}

/* k4997 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in ... */
static void C_ccall f_4999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4999,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace(C_text("egg-environment.scm:123: scheme#string-append"));
t3=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[131];
av2[4]=C_retrieve2(lf[14],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
C_trace(C_text("egg-environment.scm:124: chicken.process-context#current-directory"));
t3=C_fast_retrieve(lf[132]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5000 in k4997 in k3213 in k3129 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in ... */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5002,c,av);}
C_trace(C_text("egg-environment.scm:123: scheme#string-append"));
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[131];
av2[4]=C_retrieve2(lf[14],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5007 in k3125 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in ... */
static void C_ccall f_5009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5009,c,av);}
C_trace(C_text("egg-environment.scm:99: scheme#string-append"));
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[16],C_text("main#default-runlibdir"));
av2[3]=lf[136];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5012 in k3121 in k3117 in k3113 in k3109 in k3105 in k3101 in k3097 in k3093 in k3089 in k3085 in k3081 in k3077 in k3073 in k3069 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in ... */
static void C_ccall f_5014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5014,c,av);}
C_trace(C_text("egg-environment.scm:96: scheme#string-append"));
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[15],C_text("main#default-libdir"));
av2[3]=lf[138];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5017 in k3065 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in ... */
static void C_ccall f_5019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5019,c,av);}
C_trace(C_text("egg-environment.scm:78: scheme#string-append"));
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[17],C_text("main#default-bindir"));
av2[3]=lf[140];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5021 in k3061 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in ... */
static void C_ccall f_5023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5023,c,av);}
C_trace(C_text("egg-environment.scm:75: scheme#string-append"));
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[17],C_text("main#default-bindir"));
av2[3]=lf[141];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5025 in k3057 in k3053 in k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in ... */
static void C_ccall f_5027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5027,c,av);}
C_trace(C_text("egg-environment.scm:72: scheme#string-append"));
t2=*((C_word*)lf[70]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[17],C_text("main#default-bindir"));
av2[3]=lf[142];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k5032 in k3045 in k3041 in k3037 in k3033 in k3029 in k3025 in k3021 in k3017 in k3013 in k3009 in k3005 in k3001 in k2997 in k2993 in k2989 in k2983 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void C_ccall f_5034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_5034,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[18]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[19]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[139]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* a5035 in k1678 in k1675 */
static void C_ccall f_5036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_5036,c,av);}
C_trace(C_text("chicken-status.scm:26: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[146]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[146]+1);
av2[1]=t1;
av2[2]=lf[147];
av2[3]=C_SCHEME_FALSE;
av2[4]=C_SCHEME_END_OF_LIST;
av2[5]=C_SCHEME_END_OF_LIST;
av2[6]=C_SCHEME_END_OF_LIST;
av2[7]=C_SCHEME_END_OF_LIST;
av2[8]=C_SCHEME_END_OF_LIST;
tp(9,av2);}}

/* toplevel */
static int toplevel_initialized=0;
C_main_entry_point

void C_ccall C_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(530))){
C_save(t1);
C_rereclaim2(530*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,149);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[3]=C_h_intern(&lf[3],13, C_text("scheme#append"));
lf[4]=C_h_intern(&lf[4],3, C_text("map"));
lf[6]=C_h_intern(&lf[6],12, C_text("scheme#null?"));
lf[18]=C_h_intern(&lf[18],7, C_text("windows"));
lf[19]=C_h_intern(&lf[19],4, C_text("unix"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\145\147\147\055\151\156\146\157\000"));
lf[31]=C_h_intern(&lf[31],21, C_text("##sys#standard-output"));
lf[32]=C_h_intern(&lf[32],10, C_text("scheme#min"));
lf[33]=C_h_intern(&lf[33],26, C_text("chicken.port#terminal-size"));
lf[34]=C_h_intern(&lf[34],40, C_text("chicken.condition#with-exception-handler"));
lf[35]=C_h_intern(&lf[35],37, C_text("scheme#call-with-current-continuation"));
lf[36]=C_h_intern(&lf[36],27, C_text("chicken.port#terminal-port?"));
lf[39]=C_h_intern(&lf[39],16, C_text("##sys#split-path"));
lf[40]=C_h_intern(&lf[40],32, C_text("chicken.platform#repository-path"));
lf[42]=C_h_intern(&lf[42],18, C_text("chicken.base#error"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\171\145\155\160\164\171\040\145\147\147\055\151\156\146\157\040\146\151\154\145\054\040\160\157\163\163\151\142\154\171\040\144\165\145\040\164\157\040\141\156\040\141\142\157\162\164\145\144\040\145\147\147\055\151\156\163\164\141\154\154\040\055\040\160\154\145\141\163\145\040\162\145\155\157\166\145\040\164\150\145\040\146\151\154\145\040\141\156\144\040\162\145\151\156\163\164\141\154\154\040\164\150\145\040\143\157\162\162\145\163\160\157\156\144\151\156\147\040\145\147\147\000"));
lf[44]=C_h_intern(&lf[44],27, C_text("scheme#with-input-from-file"));
lf[45]=C_h_intern(&lf[45],11, C_text("scheme#read"));
lf[46]=C_h_intern(&lf[46],25, C_text("chicken.file#file-exists?"));
lf[47]=C_h_intern(&lf[47],30, C_text("chicken.pathname#make-pathname"));
lf[48]=C_h_intern(&lf[48],35, C_text("chicken.pathname#pathname-extension"));
lf[49]=C_h_intern(&lf[49],30, C_text("chicken.pathname#pathname-file"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\143\150\151\143\153\145\156\000"));
lf[51]=C_h_intern(&lf[51],35, C_text("chicken.pathname#pathname-directory"));
lf[52]=C_h_intern(&lf[52],22, C_text("chicken.load#find-file"));
lf[54]=C_h_intern(&lf[54],15, C_text("scheme#string=?"));
lf[55]=C_h_intern(&lf[55],30, C_text("chicken.irregex#irregex-search"));
lf[56]=C_h_intern(&lf[56],23, C_text("chicken.irregex#irregex"));
lf[57]=C_h_intern(&lf[57],25, C_text("chicken.irregex#glob->sre"));
lf[59]=C_h_intern(&lf[59],19, C_text("##sys#string-append"));
lf[60]=C_h_intern(&lf[60],18, C_text("scheme#make-string"));
lf[63]=C_h_intern(&lf[63],8, C_text("for-each"));
lf[64]=C_h_intern(&lf[64],17, C_text("chicken.sort#sort"));
lf[65]=C_h_intern(&lf[65],15, C_text("scheme#string<?"));
lf[66]=C_h_intern(&lf[66],7, C_text("version"));
lf[67]=C_h_intern(&lf[67],18, C_text("chicken.base#print"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\040\166\145\162\163\151\157\156\072\040\000"));
lf[69]=C_h_intern(&lf[69],23, C_text("chicken.string#->string"));
lf[70]=C_h_intern(&lf[70],20, C_text("scheme#string-append"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\165\156\153\156\157\167\156\000"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\126\105\122\123\111\117\116\000"));
lf[76]=C_h_intern(&lf[76],4, C_text("host"));
lf[77]=C_h_intern(&lf[77],6, C_text("target"));
lf[78]=C_h_intern(&lf[78],9, C_text("extension"));
lf[79]=C_h_intern(&lf[79],4, C_text("data"));
lf[80]=C_h_intern(&lf[80],21, C_text("generated-source-file"));
lf[81]=C_h_intern(&lf[81],9, C_text("c-include"));
lf[82]=C_h_intern(&lf[82],14, C_text("scheme-include"));
lf[83]=C_h_intern(&lf[83],7, C_text("program"));
lf[84]=C_h_intern(&lf[84],8, C_text("c-object"));
lf[85]=C_h_intern(&lf[85],18, C_text("installed-c-object"));
lf[87]=C_h_intern(&lf[87],10, C_text("components"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[90]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\040\050\150\157\163\164\051\000"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\040\050\164\141\162\147\145\164\051\000"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\040\166\145\162\163\151\157\156\072\040\000"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\040\000"));
lf[96]=C_h_intern(&lf[96],15, C_text("installed-files"));
lf[98]=C_h_intern(&lf[98],23, C_text("chicken.pretty-print#pp"));
lf[99]=C_h_intern(&lf[99],21, C_text("scheme#string->symbol"));
lf[100]=C_h_intern(&lf[100],34, C_text("chicken.base#implicit-exit-handler"));
lf[101]=C_h_intern(&lf[101],17, C_text("chicken.base#exit"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\047\055\143\157\155\160\157\156\145\156\164\163\040\143\141\156\156\157\164\040\142\145\040\165\163\145\144\040\167\151\164\150\040\055\154\151\163\164\056\000"));
lf[103]=C_h_intern(&lf[103],32, C_text("chicken.port#with-output-to-port"));
lf[104]=C_h_intern(&lf[104],20, C_text("##sys#standard-error"));
lf[105]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\145\147\147\000"));
lf[106]=C_h_intern(&lf[106],22, C_text("chicken.file#directory"));
lf[107]=C_h_intern(&lf[107],30, C_text("chicken.file#directory-exists?"));
lf[108]=C_h_intern(&lf[108],13, C_text("scheme#equal?"));
lf[109]=C_h_intern(&lf[109],17, C_text("chicken.file#glob"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\052\000"));
lf[111]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\150\145\154\160\000"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\150\000"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\055\150\145\154\160\000"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\002\000\002\170\165\163\141\147\145\072\040\143\150\151\143\153\145\156\055\163\164\141\164\165\163\040\133\117\120\124\111\117\116\040\056\056\056\135\040\133\116\101\115\105\040\056\056\056\135\012\012\040\040\055\150\040\040\040\055\150\145\154\160\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\164\150\151\163\040\155\145\163\163\141\147\145\012\040\040\040\040\040\040\040\055\166\145\162\163\151\157\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\166\145\162\163\151\157\156\040\141\156\144\040\145\170\151\164\012\040\040\055\143\040\040\040\055\143\157\155\160\157\156\145\156\164\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\154\151\163\164\040\151\156\163\164\141\154\154\145\144\040\143\157\155\160\157\156\145\156\164\163\012\040\040\040\040\040\040\040\055\143\141\143\150\145\144\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\154\151\163\164\040\145\147\147\163\040\151\156\040\143\141\143\150\145\012\040\040\055\146\040\040\040\055\146\151\154\145\163\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\154\151\163\164\040\151\156\163\164\141\154\154\145\144\040\146\151\154\145\163\012\040\040\040\040\040\040\040\055\154\151\163\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\165\155\160\040\151\156\163\164\141\154\154\145\144\040\145\170\164\145\156\163\151\157\156\163\040\141\156\144\040\164\150\145\151\162\040\166\145\162\163\151\157\156\163\040\151\156\040\042\157\166\145\162\162\151\144\145\042\040\146\157\162\155\141\164\012\040\040\040\040\040\040\040\055\155\141\164\143\150\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\164\162\145\141\164\040\116\101\115\105\040\141\163\040\147\154\157\142\040\160\141\164\164\145\162\156\012\040\040\040\040\040\040\040\055\150\157\163\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\150\145\156\040\143\162\157\163\163\055\143\157\155\160\151\154\151\156\147\054\040\157\156\154\171\040\163\150\157\167\040\150\157\163\164\040\145\170\164\145\156\163\151\157\156\163\012\040\040\040\040\040\040\040\055\164\141\162\147\145\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\150\145\156\040\143\162\157\163\163\055\143\157\155\160\151\154\151\156\147\054\040\157\156\154\171\040\163\150\157\167\040\164\141\162\147\145\164\040\145\170\164\145\156\163\151\157\156\163\000"));
lf[115]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\150\157\163\164\000"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\164\141\162\147\145\164\000"));
lf[117]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\155\141\164\143\150\000"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\143\141\143\150\145\144\000"));
lf[119]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\154\151\163\164\000"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\146\000"));
lf[121]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\146\151\154\145\163\000"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\143\000"));
lf[123]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\055\143\157\155\160\157\156\145\156\164\163\000"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\166\145\162\163\151\157\156\000"));
lf[125]=C_h_intern(&lf[125],32, C_text("chicken.platform#chicken-version"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\150\376\003\000\000\002\376\377\012\000\000\146\376\003\000\000\002\376\377\012\000\000\143\376\003\000\000\002\376\377\012\000\000\141\376\377\016"));
lf[127]=C_h_intern(&lf[127],18, C_text("##sys#string->list"));
lf[128]=C_h_intern(&lf[128],16, C_text("scheme#substring"));
lf[129]=C_h_intern(&lf[129],46, C_text("chicken.process-context#command-line-arguments"));
lf[130]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\057\056\143\141\143\150\145\055\155\145\164\141\144\141\164\141\000"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[132]=C_h_intern(&lf[132],41, C_text("chicken.process-context#current-directory"));
lf[133]=C_h_intern(&lf[133],39, C_text("chicken.platform#system-cache-directory"));
lf[134]=C_h_intern(&lf[134],48, C_text("chicken.process-context#get-environment-variable"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\110\111\103\113\105\116\137\105\107\107\137\103\101\103\110\105\000"));
lf[136]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\057\143\150\151\143\153\145\156\057\000"));
lf[137]=C_h_intern(&lf[137],20, C_text("##sys#fixnum->string"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\057\143\150\151\143\153\145\156\057\000"));
lf[139]=C_h_intern(&lf[139],19, C_text("##sys#peek-c-string"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[142]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[143]=C_h_intern(&lf[143],30, C_text("chicken.platform#software-type"));
lf[144]=C_h_intern(&lf[144],25, C_text("chicken.platform#feature?"));
lf[145]=C_h_intern_kw(&lf[145],13, C_text("cross-chicken"));
lf[146]=C_h_intern(&lf[146],30, C_text("##sys#register-compiled-module"));
lf[147]=C_h_intern(&lf[147],4, C_text("main"));
lf[148]=C_h_intern(&lf[148],22, C_text("##sys#with-environment"));
C_register_lf2(lf,149,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1677,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[216] = {
{C_text("f5335:chicken_2dstatus_2escm"),(void*)f5335},
{C_text("f5342:chicken_2dstatus_2escm"),(void*)f5342},
{C_text("f5349:chicken_2dstatus_2escm"),(void*)f5349},
{C_text("f_1677:chicken_2dstatus_2escm"),(void*)f_1677},
{C_text("f_1680:chicken_2dstatus_2escm"),(void*)f_1680},
{C_text("f_1683:chicken_2dstatus_2escm"),(void*)f_1683},
{C_text("f_1686:chicken_2dstatus_2escm"),(void*)f_1686},
{C_text("f_1689:chicken_2dstatus_2escm"),(void*)f_1689},
{C_text("f_1692:chicken_2dstatus_2escm"),(void*)f_1692},
{C_text("f_1695:chicken_2dstatus_2escm"),(void*)f_1695},
{C_text("f_1698:chicken_2dstatus_2escm"),(void*)f_1698},
{C_text("f_1701:chicken_2dstatus_2escm"),(void*)f_1701},
{C_text("f_1902:chicken_2dstatus_2escm"),(void*)f_1902},
{C_text("f_1917:chicken_2dstatus_2escm"),(void*)f_1917},
{C_text("f_1925:chicken_2dstatus_2escm"),(void*)f_1925},
{C_text("f_1933:chicken_2dstatus_2escm"),(void*)f_1933},
{C_text("f_1944:chicken_2dstatus_2escm"),(void*)f_1944},
{C_text("f_1957:chicken_2dstatus_2escm"),(void*)f_1957},
{C_text("f_1964:chicken_2dstatus_2escm"),(void*)f_1964},
{C_text("f_1971:chicken_2dstatus_2escm"),(void*)f_1971},
{C_text("f_1975:chicken_2dstatus_2escm"),(void*)f_1975},
{C_text("f_1987:chicken_2dstatus_2escm"),(void*)f_1987},
{C_text("f_1989:chicken_2dstatus_2escm"),(void*)f_1989},
{C_text("f_2036:chicken_2dstatus_2escm"),(void*)f_2036},
{C_text("f_2038:chicken_2dstatus_2escm"),(void*)f_2038},
{C_text("f_2078:chicken_2dstatus_2escm"),(void*)f_2078},
{C_text("f_2106:chicken_2dstatus_2escm"),(void*)f_2106},
{C_text("f_2112:chicken_2dstatus_2escm"),(void*)f_2112},
{C_text("f_2122:chicken_2dstatus_2escm"),(void*)f_2122},
{C_text("f_2170:chicken_2dstatus_2escm"),(void*)f_2170},
{C_text("f_2188:chicken_2dstatus_2escm"),(void*)f_2188},
{C_text("f_2198:chicken_2dstatus_2escm"),(void*)f_2198},
{C_text("f_2211:chicken_2dstatus_2escm"),(void*)f_2211},
{C_text("f_2225:chicken_2dstatus_2escm"),(void*)f_2225},
{C_text("f_2267:chicken_2dstatus_2escm"),(void*)f_2267},
{C_text("f_2273:chicken_2dstatus_2escm"),(void*)f_2273},
{C_text("f_2287:chicken_2dstatus_2escm"),(void*)f_2287},
{C_text("f_2300:chicken_2dstatus_2escm"),(void*)f_2300},
{C_text("f_2312:chicken_2dstatus_2escm"),(void*)f_2312},
{C_text("f_2321:chicken_2dstatus_2escm"),(void*)f_2321},
{C_text("f_2329:chicken_2dstatus_2escm"),(void*)f_2329},
{C_text("f_2336:chicken_2dstatus_2escm"),(void*)f_2336},
{C_text("f_2350:chicken_2dstatus_2escm"),(void*)f_2350},
{C_text("f_2985:chicken_2dstatus_2escm"),(void*)f_2985},
{C_text("f_2991:chicken_2dstatus_2escm"),(void*)f_2991},
{C_text("f_2995:chicken_2dstatus_2escm"),(void*)f_2995},
{C_text("f_2999:chicken_2dstatus_2escm"),(void*)f_2999},
{C_text("f_3003:chicken_2dstatus_2escm"),(void*)f_3003},
{C_text("f_3007:chicken_2dstatus_2escm"),(void*)f_3007},
{C_text("f_3011:chicken_2dstatus_2escm"),(void*)f_3011},
{C_text("f_3015:chicken_2dstatus_2escm"),(void*)f_3015},
{C_text("f_3019:chicken_2dstatus_2escm"),(void*)f_3019},
{C_text("f_3023:chicken_2dstatus_2escm"),(void*)f_3023},
{C_text("f_3027:chicken_2dstatus_2escm"),(void*)f_3027},
{C_text("f_3031:chicken_2dstatus_2escm"),(void*)f_3031},
{C_text("f_3035:chicken_2dstatus_2escm"),(void*)f_3035},
{C_text("f_3039:chicken_2dstatus_2escm"),(void*)f_3039},
{C_text("f_3043:chicken_2dstatus_2escm"),(void*)f_3043},
{C_text("f_3047:chicken_2dstatus_2escm"),(void*)f_3047},
{C_text("f_3055:chicken_2dstatus_2escm"),(void*)f_3055},
{C_text("f_3059:chicken_2dstatus_2escm"),(void*)f_3059},
{C_text("f_3063:chicken_2dstatus_2escm"),(void*)f_3063},
{C_text("f_3067:chicken_2dstatus_2escm"),(void*)f_3067},
{C_text("f_3071:chicken_2dstatus_2escm"),(void*)f_3071},
{C_text("f_3075:chicken_2dstatus_2escm"),(void*)f_3075},
{C_text("f_3079:chicken_2dstatus_2escm"),(void*)f_3079},
{C_text("f_3083:chicken_2dstatus_2escm"),(void*)f_3083},
{C_text("f_3087:chicken_2dstatus_2escm"),(void*)f_3087},
{C_text("f_3091:chicken_2dstatus_2escm"),(void*)f_3091},
{C_text("f_3095:chicken_2dstatus_2escm"),(void*)f_3095},
{C_text("f_3099:chicken_2dstatus_2escm"),(void*)f_3099},
{C_text("f_3103:chicken_2dstatus_2escm"),(void*)f_3103},
{C_text("f_3107:chicken_2dstatus_2escm"),(void*)f_3107},
{C_text("f_3111:chicken_2dstatus_2escm"),(void*)f_3111},
{C_text("f_3115:chicken_2dstatus_2escm"),(void*)f_3115},
{C_text("f_3119:chicken_2dstatus_2escm"),(void*)f_3119},
{C_text("f_3123:chicken_2dstatus_2escm"),(void*)f_3123},
{C_text("f_3127:chicken_2dstatus_2escm"),(void*)f_3127},
{C_text("f_3131:chicken_2dstatus_2escm"),(void*)f_3131},
{C_text("f_3215:chicken_2dstatus_2escm"),(void*)f_3215},
{C_text("f_3218:chicken_2dstatus_2escm"),(void*)f_3218},
{C_text("f_3222:chicken_2dstatus_2escm"),(void*)f_3222},
{C_text("f_3231:chicken_2dstatus_2escm"),(void*)f_3231},
{C_text("f_3237:chicken_2dstatus_2escm"),(void*)f_3237},
{C_text("f_3241:chicken_2dstatus_2escm"),(void*)f_3241},
{C_text("f_3245:chicken_2dstatus_2escm"),(void*)f_3245},
{C_text("f_3249:chicken_2dstatus_2escm"),(void*)f_3249},
{C_text("f_3253:chicken_2dstatus_2escm"),(void*)f_3253},
{C_text("f_3262:chicken_2dstatus_2escm"),(void*)f_3262},
{C_text("f_3273:chicken_2dstatus_2escm"),(void*)f_3273},
{C_text("f_3297:chicken_2dstatus_2escm"),(void*)f_3297},
{C_text("f_3616:chicken_2dstatus_2escm"),(void*)f_3616},
{C_text("f_3623:chicken_2dstatus_2escm"),(void*)f_3623},
{C_text("f_3626:chicken_2dstatus_2escm"),(void*)f_3626},
{C_text("f_3629:chicken_2dstatus_2escm"),(void*)f_3629},
{C_text("f_3638:chicken_2dstatus_2escm"),(void*)f_3638},
{C_text("f_3644:chicken_2dstatus_2escm"),(void*)f_3644},
{C_text("f_3650:chicken_2dstatus_2escm"),(void*)f_3650},
{C_text("f_3653:chicken_2dstatus_2escm"),(void*)f_3653},
{C_text("f_3659:chicken_2dstatus_2escm"),(void*)f_3659},
{C_text("f_3665:chicken_2dstatus_2escm"),(void*)f_3665},
{C_text("f_3671:chicken_2dstatus_2escm"),(void*)f_3671},
{C_text("f_3677:chicken_2dstatus_2escm"),(void*)f_3677},
{C_text("f_3683:chicken_2dstatus_2escm"),(void*)f_3683},
{C_text("f_3693:chicken_2dstatus_2escm"),(void*)f_3693},
{C_text("f_3721:chicken_2dstatus_2escm"),(void*)f_3721},
{C_text("f_3727:chicken_2dstatus_2escm"),(void*)f_3727},
{C_text("f_3731:chicken_2dstatus_2escm"),(void*)f_3731},
{C_text("f_3743:chicken_2dstatus_2escm"),(void*)f_3743},
{C_text("f_3753:chicken_2dstatus_2escm"),(void*)f_3753},
{C_text("f_3782:chicken_2dstatus_2escm"),(void*)f_3782},
{C_text("f_3786:chicken_2dstatus_2escm"),(void*)f_3786},
{C_text("f_3803:chicken_2dstatus_2escm"),(void*)f_3803},
{C_text("f_3811:chicken_2dstatus_2escm"),(void*)f_3811},
{C_text("f_3815:chicken_2dstatus_2escm"),(void*)f_3815},
{C_text("f_3821:chicken_2dstatus_2escm"),(void*)f_3821},
{C_text("f_3823:chicken_2dstatus_2escm"),(void*)f_3823},
{C_text("f_3848:chicken_2dstatus_2escm"),(void*)f_3848},
{C_text("f_3860:chicken_2dstatus_2escm"),(void*)f_3860},
{C_text("f_3866:chicken_2dstatus_2escm"),(void*)f_3866},
{C_text("f_3879:chicken_2dstatus_2escm"),(void*)f_3879},
{C_text("f_3881:chicken_2dstatus_2escm"),(void*)f_3881},
{C_text("f_3888:chicken_2dstatus_2escm"),(void*)f_3888},
{C_text("f_3893:chicken_2dstatus_2escm"),(void*)f_3893},
{C_text("f_3918:chicken_2dstatus_2escm"),(void*)f_3918},
{C_text("f_3929:chicken_2dstatus_2escm"),(void*)f_3929},
{C_text("f_3933:chicken_2dstatus_2escm"),(void*)f_3933},
{C_text("f_3935:chicken_2dstatus_2escm"),(void*)f_3935},
{C_text("f_3954:chicken_2dstatus_2escm"),(void*)f_3954},
{C_text("f_4001:chicken_2dstatus_2escm"),(void*)f_4001},
{C_text("f_4005:chicken_2dstatus_2escm"),(void*)f_4005},
{C_text("f_4015:chicken_2dstatus_2escm"),(void*)f_4015},
{C_text("f_4022:chicken_2dstatus_2escm"),(void*)f_4022},
{C_text("f_4030:chicken_2dstatus_2escm"),(void*)f_4030},
{C_text("f_4040:chicken_2dstatus_2escm"),(void*)f_4040},
{C_text("f_4080:chicken_2dstatus_2escm"),(void*)f_4080},
{C_text("f_4084:chicken_2dstatus_2escm"),(void*)f_4084},
{C_text("f_4090:chicken_2dstatus_2escm"),(void*)f_4090},
{C_text("f_4097:chicken_2dstatus_2escm"),(void*)f_4097},
{C_text("f_4101:chicken_2dstatus_2escm"),(void*)f_4101},
{C_text("f_4105:chicken_2dstatus_2escm"),(void*)f_4105},
{C_text("f_4110:chicken_2dstatus_2escm"),(void*)f_4110},
{C_text("f_4114:chicken_2dstatus_2escm"),(void*)f_4114},
{C_text("f_4117:chicken_2dstatus_2escm"),(void*)f_4117},
{C_text("f_4120:chicken_2dstatus_2escm"),(void*)f_4120},
{C_text("f_4130:chicken_2dstatus_2escm"),(void*)f_4130},
{C_text("f_4146:chicken_2dstatus_2escm"),(void*)f_4146},
{C_text("f_4155:chicken_2dstatus_2escm"),(void*)f_4155},
{C_text("f_4158:chicken_2dstatus_2escm"),(void*)f_4158},
{C_text("f_4166:chicken_2dstatus_2escm"),(void*)f_4166},
{C_text("f_4176:chicken_2dstatus_2escm"),(void*)f_4176},
{C_text("f_4191:chicken_2dstatus_2escm"),(void*)f_4191},
{C_text("f_4195:chicken_2dstatus_2escm"),(void*)f_4195},
{C_text("f_4197:chicken_2dstatus_2escm"),(void*)f_4197},
{C_text("f_4203:chicken_2dstatus_2escm"),(void*)f_4203},
{C_text("f_4209:chicken_2dstatus_2escm"),(void*)f_4209},
{C_text("f_4399:chicken_2dstatus_2escm"),(void*)f_4399},
{C_text("f_4404:chicken_2dstatus_2escm"),(void*)f_4404},
{C_text("f_4408:chicken_2dstatus_2escm"),(void*)f_4408},
{C_text("f_4417:chicken_2dstatus_2escm"),(void*)f_4417},
{C_text("f_4423:chicken_2dstatus_2escm"),(void*)f_4423},
{C_text("f_4432:chicken_2dstatus_2escm"),(void*)f_4432},
{C_text("f_4436:chicken_2dstatus_2escm"),(void*)f_4436},
{C_text("f_4460:chicken_2dstatus_2escm"),(void*)f_4460},
{C_text("f_4468:chicken_2dstatus_2escm"),(void*)f_4468},
{C_text("f_4480:chicken_2dstatus_2escm"),(void*)f_4480},
{C_text("f_4490:chicken_2dstatus_2escm"),(void*)f_4490},
{C_text("f_4508:chicken_2dstatus_2escm"),(void*)f_4508},
{C_text("f_4512:chicken_2dstatus_2escm"),(void*)f_4512},
{C_text("f_4516:chicken_2dstatus_2escm"),(void*)f_4516},
{C_text("f_4521:chicken_2dstatus_2escm"),(void*)f_4521},
{C_text("f_4525:chicken_2dstatus_2escm"),(void*)f_4525},
{C_text("f_4536:chicken_2dstatus_2escm"),(void*)f_4536},
{C_text("f_4546:chicken_2dstatus_2escm"),(void*)f_4546},
{C_text("f_4565:chicken_2dstatus_2escm"),(void*)f_4565},
{C_text("f_4567:chicken_2dstatus_2escm"),(void*)f_4567},
{C_text("f_4571:chicken_2dstatus_2escm"),(void*)f_4571},
{C_text("f_4579:chicken_2dstatus_2escm"),(void*)f_4579},
{C_text("f_4589:chicken_2dstatus_2escm"),(void*)f_4589},
{C_text("f_4604:chicken_2dstatus_2escm"),(void*)f_4604},
{C_text("f_4606:chicken_2dstatus_2escm"),(void*)f_4606},
{C_text("f_4614:chicken_2dstatus_2escm"),(void*)f_4614},
{C_text("f_4616:chicken_2dstatus_2escm"),(void*)f_4616},
{C_text("f_4633:chicken_2dstatus_2escm"),(void*)f_4633},
{C_text("f_4644:chicken_2dstatus_2escm"),(void*)f_4644},
{C_text("f_4652:chicken_2dstatus_2escm"),(void*)f_4652},
{C_text("f_4662:chicken_2dstatus_2escm"),(void*)f_4662},
{C_text("f_4691:chicken_2dstatus_2escm"),(void*)f_4691},
{C_text("f_4704:chicken_2dstatus_2escm"),(void*)f_4704},
{C_text("f_4707:chicken_2dstatus_2escm"),(void*)f_4707},
{C_text("f_4712:chicken_2dstatus_2escm"),(void*)f_4712},
{C_text("f_4725:chicken_2dstatus_2escm"),(void*)f_4725},
{C_text("f_4732:chicken_2dstatus_2escm"),(void*)f_4732},
{C_text("f_4736:chicken_2dstatus_2escm"),(void*)f_4736},
{C_text("f_4848:chicken_2dstatus_2escm"),(void*)f_4848},
{C_text("f_4855:chicken_2dstatus_2escm"),(void*)f_4855},
{C_text("f_4870:chicken_2dstatus_2escm"),(void*)f_4870},
{C_text("f_4883:chicken_2dstatus_2escm"),(void*)f_4883},
{C_text("f_4895:chicken_2dstatus_2escm"),(void*)f_4895},
{C_text("f_4899:chicken_2dstatus_2escm"),(void*)f_4899},
{C_text("f_4944:chicken_2dstatus_2escm"),(void*)f_4944},
{C_text("f_4974:chicken_2dstatus_2escm"),(void*)f_4974},
{C_text("f_4980:chicken_2dstatus_2escm"),(void*)f_4980},
{C_text("f_4984:chicken_2dstatus_2escm"),(void*)f_4984},
{C_text("f_4992:chicken_2dstatus_2escm"),(void*)f_4992},
{C_text("f_4999:chicken_2dstatus_2escm"),(void*)f_4999},
{C_text("f_5002:chicken_2dstatus_2escm"),(void*)f_5002},
{C_text("f_5009:chicken_2dstatus_2escm"),(void*)f_5009},
{C_text("f_5014:chicken_2dstatus_2escm"),(void*)f_5014},
{C_text("f_5019:chicken_2dstatus_2escm"),(void*)f_5019},
{C_text("f_5023:chicken_2dstatus_2escm"),(void*)f_5023},
{C_text("f_5027:chicken_2dstatus_2escm"),(void*)f_5027},
{C_text("f_5034:chicken_2dstatus_2escm"),(void*)f_5034},
{C_text("f_5036:chicken_2dstatus_2escm"),(void*)f_5036},
{C_text("toplevel:chicken_2dstatus_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#partition 
o|hiding unexported module binding: main#span 
o|hiding unexported module binding: main#take 
o|hiding unexported module binding: main#drop 
o|hiding unexported module binding: main#split-at 
o|hiding unexported module binding: main#append-map 
o|hiding unexported module binding: main#every 
o|hiding unexported module binding: main#any 
o|hiding unexported module binding: main#cons* 
o|hiding unexported module binding: main#concatenate 
o|hiding unexported module binding: main#delete 
o|hiding unexported module binding: main#first 
o|hiding unexported module binding: main#second 
o|hiding unexported module binding: main#third 
o|hiding unexported module binding: main#fourth 
o|hiding unexported module binding: main#fifth 
o|hiding unexported module binding: main#delete-duplicates 
o|hiding unexported module binding: main#alist-cons 
o|hiding unexported module binding: main#filter 
o|hiding unexported module binding: main#filter-map 
o|hiding unexported module binding: main#remove 
o|hiding unexported module binding: main#unzip1 
o|hiding unexported module binding: main#last 
o|hiding unexported module binding: main#list-index 
o|hiding unexported module binding: main#lset-adjoin/eq? 
o|hiding unexported module binding: main#lset-difference/eq? 
o|hiding unexported module binding: main#lset-union/eq? 
o|hiding unexported module binding: main#lset-intersection/eq? 
o|hiding unexported module binding: main#list-tabulate 
o|hiding unexported module binding: main#lset<=/eq? 
o|hiding unexported module binding: main#lset=/eq? 
o|hiding unexported module binding: main#length+ 
o|hiding unexported module binding: main#find 
o|hiding unexported module binding: main#find-tail 
o|hiding unexported module binding: main#iota 
o|hiding unexported module binding: main#make-list 
o|hiding unexported module binding: main#posq 
o|hiding unexported module binding: main#posv 
o|hiding unexported module binding: main#staticbuild 
o|hiding unexported module binding: main#debugbuild 
o|hiding unexported module binding: main#cross-chicken 
o|hiding unexported module binding: main#binary-version 
o|hiding unexported module binding: main#major-version 
o|hiding unexported module binding: main#chicken-install-program 
o|hiding unexported module binding: main#default-cc 
o|hiding unexported module binding: main#default-cxx 
o|hiding unexported module binding: main#default-install-program 
o|hiding unexported module binding: main#default-cflags 
o|hiding unexported module binding: main#default-ldflags 
o|hiding unexported module binding: main#default-install-program-executable-flags 
o|hiding unexported module binding: main#default-install-program-data-flags 
o|hiding unexported module binding: main#default-libs 
o|hiding unexported module binding: main#default-libdir 
o|hiding unexported module binding: main#default-runlibdir 
o|hiding unexported module binding: main#default-slibdir 
o|hiding unexported module binding: main#default-incdir 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-sharedir 
o|hiding unexported module binding: main#default-platform 
o|hiding unexported module binding: main#default-prefix 
o|hiding unexported module binding: main#default-bindir 
o|hiding unexported module binding: main#default-csc 
o|hiding unexported module binding: main#default-csi 
o|hiding unexported module binding: main#default-builder 
o|hiding unexported module binding: main#target-librarian 
o|hiding unexported module binding: main#target-librarian-options 
o|hiding unexported module binding: main#host-prefix 
o|hiding unexported module binding: main#host-repo 
o|hiding unexported module binding: main#host-libdir 
o|hiding unexported module binding: main#host-bindir 
o|hiding unexported module binding: main#host-incdir 
o|hiding unexported module binding: main#host-sharedir 
o|hiding unexported module binding: main#host-libs 
o|hiding unexported module binding: main#host-cflags 
o|hiding unexported module binding: main#host-ldflags 
o|hiding unexported module binding: main#host-cc 
o|hiding unexported module binding: main#host-cxx 
o|hiding unexported module binding: main#target-repo 
o|hiding unexported module binding: main#target-run-repo 
o|hiding unexported module binding: main#+egg-info-extension+ 
o|hiding unexported module binding: main#+egg-extension+ 
o|hiding unexported module binding: main#validate-environment 
o|hiding unexported module binding: main#destination-repository 
o|hiding unexported module binding: main#probe-dir 
o|hiding unexported module binding: main#cache-directory 
o|hiding unexported module binding: main#cache-metadata-directory 
o|hiding unexported module binding: main#+version-file+ 
o|hiding unexported module binding: main#+timestamp-file+ 
o|hiding unexported module binding: main#+status-file+ 
o|hiding unexported module binding: main#locate-egg-file 
o|hiding unexported module binding: main#load-egg-info 
o|hiding unexported module binding: main#get-egg-property 
o|hiding unexported module binding: main#get-egg-property* 
o|hiding unexported module binding: main#get-extension-property/internal 
o|hiding unexported module binding: main#get-extension-property 
o|hiding unexported module binding: main#get-extension-property* 
o|hiding unexported module binding: main#host-extensions 
o|hiding unexported module binding: main#target-extensions 
o|hiding unexported module binding: main#get-terminal-width 
o|hiding unexported module binding: main#list-width 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#read-info 
o|hiding unexported module binding: main#filter-egg-names 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#list-installed-eggs 
o|hiding unexported module binding: main#list-egg-info 
o|hiding unexported module binding: main#list-cached-eggs 
o|hiding unexported module binding: main#gather-components 
o|hiding unexported module binding: main#gather-components-rec 
o|hiding unexported module binding: main#list-installed-components 
o|hiding unexported module binding: main#list-installed-files 
o|hiding unexported module binding: main#dump-installed-versions 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  scheme#for-each		6
S|  chicken.base#foldl		3
S|  scheme#map		6
S|  chicken.base#foldr		3
o|eliminated procedure checks: 83 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#string-length string)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  1 (chicken.base#current-error-port)
o|  4 (scheme#string-append string string)
o|  11 (scheme#string=? * *)
o|  1 (scheme#zero? *)
o|  1 (scheme#current-output-port)
o|  2 (scheme#cdar (pair pair *))
o|  17 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  39 (scheme#cdr pair)
o|  8 (scheme#car pair)
(o e)|safe calls: 499 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|merged explicitly consed rest parameter: lsts187 
o|inlining procedure: k1904 
o|inlining procedure: k1919 
o|inlining procedure: k1919 
o|inlining procedure: k1904 
o|inlining procedure: k1959 
o|inlining procedure: k1959 
o|inlining procedure: k1991 
o|contracted procedure: "(mini-srfi-1.scm:77) g240249" 
o|inlining procedure: k1991 
o|inlining procedure: k2040 
o|contracted procedure: "(mini-srfi-1.scm:76) g213222" 
o|inlining procedure: k2040 
o|inlining procedure: k2083 
o|inlining procedure: k2083 
o|inlining procedure: k2114 
o|inlining procedure: k2114 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|inlining procedure: k2275 
o|inlining procedure: k2275 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2200 
o|inlining procedure: k2200 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2331 
o|inlining procedure: k2331 
o|inlining procedure: k2323 
o|inlining procedure: k2323 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2722 
o|inlining procedure: k2722 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|removed side-effect free assignment to unused variable: main#default-cc 
o|removed side-effect free assignment to unused variable: main#default-cxx 
o|removed side-effect free assignment to unused variable: main#default-install-program 
o|removed side-effect free assignment to unused variable: main#default-cflags 
o|removed side-effect free assignment to unused variable: main#default-ldflags 
o|removed side-effect free assignment to unused variable: main#default-install-program-executable-flags 
o|removed side-effect free assignment to unused variable: main#default-install-program-data-flags 
o|removed side-effect free assignment to unused variable: main#default-libs 
o|removed side-effect free assignment to unused variable: main#default-slibdir 
o|removed side-effect free assignment to unused variable: main#default-incdir 
o|removed side-effect free assignment to unused variable: main#default-sharedir 
o|removed side-effect free assignment to unused variable: main#default-platform 
o|removed side-effect free assignment to unused variable: main#default-prefix 
o|removed side-effect free assignment to unused variable: main#default-csc 
o|removed side-effect free assignment to unused variable: main#default-csi 
o|removed side-effect free assignment to unused variable: main#default-builder 
o|removed side-effect free assignment to unused variable: main#target-librarian 
o|removed side-effect free assignment to unused variable: main#target-librarian-options 
o|removed side-effect free assignment to unused variable: main#host-prefix 
o|removed side-effect free assignment to unused variable: main#host-libdir 
o|removed side-effect free assignment to unused variable: main#host-bindir 
o|removed side-effect free assignment to unused variable: main#host-incdir 
o|removed side-effect free assignment to unused variable: main#host-sharedir 
o|removed side-effect free assignment to unused variable: main#host-libs 
o|removed side-effect free assignment to unused variable: main#host-cflags 
o|removed side-effect free assignment to unused variable: main#host-ldflags 
o|removed side-effect free assignment to unused variable: main#host-cc 
o|removed side-effect free assignment to unused variable: main#host-cxx 
o|removed side-effect free assignment to unused variable: main#validate-environment 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|merged explicitly consed rest parameter: rest809812 
o|inlining procedure: k3284 
o|inlining procedure: k3284 
o|merged explicitly consed rest parameter: rest827830 
o|inlining procedure: k3308 
o|inlining procedure: k3308 
o|inlining procedure: k3326 
o|inlining procedure: k3344 
o|inlining procedure: k3344 
o|inlining procedure: k3361 
o|inlining procedure: k3361 
o|substituted constant variable: a3402 
o|substituted constant variable: a3404 
o|inlining procedure: k3326 
o|inlining procedure: k3412 
o|inlining procedure: k3412 
o|inlining procedure: k3422 
o|inlining procedure: k3440 
o|inlining procedure: k3440 
o|inlining procedure: k3457 
o|inlining procedure: k3457 
o|inlining procedure: k3487 
o|inlining procedure: k3487 
o|substituted constant variable: a3516 
o|substituted constant variable: a3518 
o|substituted constant variable: a3520 
o|inlining procedure: k3422 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|inlining procedure: k3618 
o|substituted constant variable: default-width937 
o|substituted constant variable: default-width937 
o|inlining procedure: k3618 
o|substituted constant variable: default-width937 
o|propagated global variable: cop938 ##sys#standard-output 
o|inlining procedure: k3695 
o|contracted procedure: "(chicken-status.scm:66) main#destination-repository" 
o|inlining procedure: k3179 
o|inlining procedure: k3179 
o|inlining procedure: k3695 
o|merged explicitly consed rest parameter: rest969971 
o|inlining procedure: k3744 
o|contracted procedure: "(chicken-status.scm:74) main#load-egg-info" 
o|inlining procedure: k3263 
o|inlining procedure: k3263 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k3232 
o|inlining procedure: k3232 
o|inlining procedure: k3744 
o|inlining procedure: k3784 
o|inlining procedure: k3784 
o|contracted procedure: "(chicken-status.scm:81) main#grep" 
o|propagated global variable: g963964 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-status.scm:79) main#concatenate" 
o|inlining procedure: k2172 
o|inlining procedure: k2172 
o|inlining procedure: k3825 
o|inlining procedure: k3825 
o|merged explicitly consed rest parameter: rest10611064 
o|inlining procedure: k3955 
o|inlining procedure: k3955 
o|inlining procedure: k4032 
o|inlining procedure: k4032 
o|consed rest parameter at call site: "(chicken-status.scm:122) main#format-string" 3 
o|substituted constant variable: a4106 
o|consed rest parameter at call site: "(chicken-status.scm:120) main#format-string" 3 
o|inlining procedure: k4121 
o|inlining procedure: k4121 
o|substituted constant variable: main#+version-file+ 
o|consed rest parameter at call site: "(chicken-status.scm:114) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:113) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:134) main#append-map" 3 
o|inlining procedure: k4214 
o|inlining procedure: k4214 
o|inlining procedure: k4234 
o|inlining procedure: k4234 
o|inlining procedure: k4242 
o|inlining procedure: k4242 
o|inlining procedure: k4276 
o|inlining procedure: k4276 
o|inlining procedure: k4310 
o|inlining procedure: k4310 
o|inlining procedure: k4344 
o|inlining procedure: k4344 
o|substituted constant variable: a4379 
o|substituted constant variable: a4381 
o|substituted constant variable: a4383 
o|substituted constant variable: a4385 
o|substituted constant variable: a4387 
o|substituted constant variable: a4389 
o|substituted constant variable: a4391 
o|substituted constant variable: a4393 
o|substituted constant variable: a4395 
o|substituted constant variable: a4397 
o|inlining procedure: k4418 
o|inlining procedure: k4482 
o|contracted procedure: "(chicken-status.scm:167) g11981205" 
o|inlining procedure: k4441 
o|inlining procedure: k4441 
o|substituted constant variable: a4454 
o|substituted constant variable: a4456 
o|consed rest parameter at call site: "(chicken-status.scm:170) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:169) main#format-string" 3 
o|inlining procedure: k4482 
o|inlining procedure: k4418 
o|consed rest parameter at call site: "(chicken-status.scm:161) main#format-string" 3 
o|substituted constant variable: a4517 
o|consed rest parameter at call site: "(chicken-status.scm:160) main#format-string" 3 
o|consed rest parameter at call site: "(chicken-status.scm:158) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:157) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:156) main#read-info" 2 
o|inlining procedure: k4538 
o|inlining procedure: k4538 
o|inlining procedure: k4581 
o|inlining procedure: k4581 
o|consed rest parameter at call site: "(chicken-status.scm:184) main#get-egg-property*" 3 
o|consed rest parameter at call site: "(chicken-status.scm:184) main#read-info" 2 
o|consed rest parameter at call site: "(chicken-status.scm:182) main#append-map" 3 
o|inlining procedure: k4654 
o|contracted procedure: "(chicken-status.scm:189) g12501257" 
o|inlining procedure: k4635 
o|inlining procedure: k4635 
o|consed rest parameter at call site: "(chicken-status.scm:191) main#get-egg-property" 3 
o|consed rest parameter at call site: "(chicken-status.scm:191) main#read-info" 2 
o|inlining procedure: k4654 
o|contracted procedure: "(chicken-status.scm:272) main#main" 
o|inlining procedure: k4693 
o|inlining procedure: k4717 
o|contracted procedure: "(chicken-status.scm:227) main#list-cached-eggs" 
o|inlining procedure: k4141 
o|inlining procedure: k4168 
o|contracted procedure: "(chicken-status.scm:128) g11401147" 
o|substituted constant variable: main#+egg-extension+ 
o|inlining procedure: k4168 
o|inlining procedure: k4141 
o|inlining procedure: k4717 
o|contracted procedure: "(chicken-status.scm:233) main#gather-eggs" 
o|inlining procedure: k3895 
o|inlining procedure: k3895 
o|consed rest parameter at call site: "(chicken-status.scm:92) main#append-map" 3 
o|inlining procedure: k4737 
o|propagated global variable: r47385172 main#list-installed-files 
o|inlining procedure: k4737 
o|inlining procedure: k4743 
o|inlining procedure: k4743 
o|inlining procedure: k4693 
o|substituted constant variable: a4762 
o|inlining procedure: k4758 
o|inlining procedure: k4758 
o|substituted constant variable: a4773 
o|substituted constant variable: a4784 
o|inlining procedure: k4780 
o|inlining procedure: k4780 
o|substituted constant variable: a4795 
o|substituted constant variable: a4806 
o|inlining procedure: k4802 
o|inlining procedure: k4802 
o|substituted constant variable: a4817 
o|substituted constant variable: a4831 
o|inlining procedure: k4827 
o|inlining procedure: k4827 
o|substituted constant variable: a4845 
o|inlining procedure: k4856 
o|inlining procedure: k4871 
o|inlining procedure: k4901 
o|contracted procedure: "(chicken-status.scm:266) g13361345" 
o|inlining procedure: k4901 
o|inlining procedure: k4871 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4950 
o|inlining procedure: k4856 
o|substituted constant variable: a4967 
o|substituted constant variable: a4964 
o|substituted constant variable: a4969 
o|substituted constant variable: a4971 
o|inlining procedure: k5000 
o|inlining procedure: k5000 
o|replaced variables: 637 
o|removed binding forms: 211 
o|substituted constant variable: r19205059 
o|substituted constant variable: r19605061 
o|substituted constant variable: r21155069 
o|substituted constant variable: r23245078 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: r36195102 
o|substituted constant variable: mode723 
o|folded constant expression: (scheme#eq? (quote target) (quote target)) 
o|substituted constant variable: r37455112 
o|substituted constant variable: r21735123 
o|substituted constant variable: r41225132 
o|substituted constant variable: r42355136 
o|substituted constant variable: r44425147 
o|substituted constant variable: r44425147 
o|inlining procedure: k4441 
o|inlining procedure: k4441 
o|substituted constant variable: r46365160 
o|substituted constant variable: r46365160 
o|removed side-effect free assignment to unused variable: main#short-options 
o|contracted procedure: "(chicken-status.scm:265) main#every" 
o|replaced variables: 65 
o|removed binding forms: 562 
o|inlining procedure: k3281 
o|inlining procedure: k3305 
o|contracted procedure: k3182 
o|inlining procedure: k3705 
o|propagated global variable: r37065303 main#target-run-repo 
o|inlining procedure: k3705 
o|propagated global variable: r37065304 main#target-repo 
o|inlining procedure: k3705 
o|inlining procedure: k3705 
o|propagated global variable: r37065306 main#host-repo 
o|inlining procedure: k4118 
o|inlining procedure: "(chicken-status.scm:236) main#usage" 
o|inlining procedure: "(chicken-status.scm:268) main#usage" 
o|inlining procedure: "(chicken-status.scm:269) main#usage" 
o|replaced variables: 3 
o|removed binding forms: 73 
o|substituted constant variable: r32825297 
o|substituted constant variable: r32825297 
o|substituted constant variable: r33065300 
o|substituted constant variable: r33065300 
o|substituted constant variable: r3183 
o|substituted constant variable: r41195317 
o|substituted constant variable: r41195317 
o|substituted constant variable: r44425233 
o|substituted constant variable: r44425235 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: code12675333 
o|substituted constant variable: code12675340 
o|inlining procedure: "(mini-srfi-1.scm:82) a4935" 
o|substituted constant variable: code12675347 
o|replaced variables: 4 
o|removed binding forms: 10 
o|removed conditional forms: 4 
o|removed side-effect free assignment to unused variable: main#host-repo 
o|replaced variables: 2 
o|removed binding forms: 14 
o|removed binding forms: 3 
o|simplifications: ((if . 25) (let . 17) (##core#call . 195)) 
o|  call simplifications:
o|    scheme#member
o|    chicken.fixnum#fx>
o|    scheme#string->list
o|    scheme#memq
o|    scheme#string
o|    scheme#-	2
o|    scheme#quotient	2
o|    scheme#caddr
o|    scheme#eq?	13
o|    scheme#list	22
o|    scheme#string-length	2
o|    chicken.fixnum#fx-
o|    chicken.fixnum#fxmax
o|    scheme#eof-object?
o|    scheme#not	2
o|    ##sys#apply
o|    ##sys#call-with-values	2
o|    scheme#list-ref
o|    scheme#assq	2
o|    scheme#cadr	10
o|    scheme#equal?
o|    scheme#null?	23
o|    scheme#car	18
o|    scheme#apply
o|    scheme#cdr	8
o|    scheme#cons	17
o|    ##sys#setslot	5
o|    ##sys#check-list	10
o|    scheme#pair?	13
o|    ##sys#slot	31
o|contracted procedure: k1907 
o|contracted procedure: k1910 
o|contracted procedure: k1922 
o|contracted procedure: k1938 
o|contracted procedure: k1946 
o|contracted procedure: k1953 
o|contracted procedure: k1977 
o|contracted procedure: k1994 
o|contracted procedure: k2016 
o|contracted procedure: k2012 
o|contracted procedure: k1997 
o|contracted procedure: k2000 
o|contracted procedure: k2008 
o|contracted procedure: k2023 
o|contracted procedure: k2031 
o|contracted procedure: k2043 
o|contracted procedure: k2065 
o|contracted procedure: k2061 
o|contracted procedure: k2046 
o|contracted procedure: k2049 
o|contracted procedure: k2057 
o|contracted procedure: k2117 
o|contracted procedure: k2132 
o|contracted procedure: k2278 
o|contracted procedure: k2281 
o|contracted procedure: k2291 
o|contracted procedure: k2203 
o|contracted procedure: k2229 
o|contracted procedure: k2314 
o|contracted procedure: k2326 
o|contracted procedure: k2344 
o|contracted procedure: k2352 
o|contracted procedure: k5028 
o|contracted procedure: k3049 
o|contracted procedure: k3290 
o|contracted procedure: k3275 
o|contracted procedure: k3278 
o|contracted procedure: k3281 
o|contracted procedure: k3314 
o|contracted procedure: k3299 
o|contracted procedure: k3302 
o|contracted procedure: k3305 
o|contracted procedure: k4986 
o|contracted procedure: k3689 
o|contracted procedure: k3698 
o|contracted procedure: k3194 
o|contracted procedure: k3176 
o|contracted procedure: k3766 
o|contracted procedure: k3732 
o|contracted procedure: k3760 
o|contracted procedure: k3735 
o|contracted procedure: k3754 
o|contracted procedure: k3738 
o|contracted procedure: k3257 
o|contracted procedure: k3266 
o|contracted procedure: k3772 
o|contracted procedure: k3790 
o|contracted procedure: k3800 
o|contracted procedure: k3816 
o|contracted procedure: k2175 
o|contracted procedure: k2182 
o|contracted procedure: k3828 
o|contracted procedure: k3831 
o|contracted procedure: k3834 
o|contracted procedure: k3842 
o|contracted procedure: k3850 
o|contracted procedure: k3994 
o|contracted procedure: k3937 
o|contracted procedure: k3988 
o|contracted procedure: k3940 
o|contracted procedure: k3982 
o|contracted procedure: k3943 
o|contracted procedure: k3976 
o|contracted procedure: k3946 
o|contracted procedure: k3949 
o|contracted procedure: k3973 
o|contracted procedure: k3969 
o|contracted procedure: k4064 
o|contracted procedure: k4006 
o|contracted procedure: k4058 
o|contracted procedure: k4009 
o|contracted procedure: k4052 
o|contracted procedure: k4012 
o|contracted procedure: k4023 
o|contracted procedure: k4035 
o|contracted procedure: k4045 
o|contracted procedure: k4049 
o|contracted procedure: k4070 
o|contracted procedure: k4132 
o|contracted procedure: k4211 
o|contracted procedure: k4217 
o|contracted procedure: k4231 
o|contracted procedure: k4245 
o|contracted procedure: k4256 
o|contracted procedure: k4252 
o|contracted procedure: k4262 
o|contracted procedure: k4273 
o|contracted procedure: k4269 
o|contracted procedure: k4279 
o|contracted procedure: k4290 
o|contracted procedure: k4286 
o|contracted procedure: k4296 
o|contracted procedure: k4307 
o|contracted procedure: k4303 
o|contracted procedure: k4313 
o|contracted procedure: k4324 
o|contracted procedure: k4320 
o|contracted procedure: k4330 
o|contracted procedure: k4341 
o|contracted procedure: k4337 
o|contracted procedure: k4347 
o|contracted procedure: k4358 
o|contracted procedure: k4354 
o|contracted procedure: k4364 
o|contracted procedure: k4375 
o|contracted procedure: k4371 
o|contracted procedure: k4559 
o|contracted procedure: k4401 
o|contracted procedure: k4473 
o|contracted procedure: k4485 
o|contracted procedure: k4495 
o|contracted procedure: k4499 
o|contracted procedure: k4438 
o|contracted procedure: k4444 
o|contracted procedure: k4450 
o|contracted procedure: k4462 
o|contracted procedure: k4470 
o|contracted procedure: k4529 
o|contracted procedure: k4541 
o|contracted procedure: k4551 
o|contracted procedure: k4555 
o|contracted procedure: k4572 
o|contracted procedure: k4584 
o|contracted procedure: k4594 
o|contracted procedure: k4598 
o|contracted procedure: k4645 
o|contracted procedure: k4657 
o|contracted procedure: k4667 
o|contracted procedure: k4671 
o|contracted procedure: k4635 
o|inlining procedure: k4627 
o|inlining procedure: k4627 
o|contracted procedure: k4696 
o|contracted procedure: k4159 
o|contracted procedure: k4171 
o|contracted procedure: k4181 
o|contracted procedure: k4185 
o|contracted procedure: k3883 
o|contracted procedure: k3898 
o|contracted procedure: k3901 
o|contracted procedure: k3904 
o|contracted procedure: k3912 
o|contracted procedure: k3920 
o|contracted procedure: k4746 
o|contracted procedure: k4752 
o|contracted procedure: k4818 
o|contracted procedure: k4832 
o|contracted procedure: k4961 
o|contracted procedure: k4859 
o|contracted procedure: k4865 
o|contracted procedure: k4885 
o|contracted procedure: k4904 
o|contracted procedure: k4926 
o|contracted procedure: k4922 
o|contracted procedure: k4907 
o|contracted procedure: k4910 
o|contracted procedure: k4918 
o|contracted procedure: k2080 
o|contracted procedure: k2102 
o|contracted procedure: k2098 
o|contracted procedure: k2089 
o|contracted procedure: k4957 
o|contracted procedure: k5042 
o|contracted procedure: k5046 
o|contracted procedure: k5050 
o|contracted procedure: k5054 
o|simplifications: ((if . 1) (let . 49)) 
o|removed binding forms: 174 
o|substituted constant variable: r5043 
o|substituted constant variable: r5047 
o|substituted constant variable: r5051 
o|substituted constant variable: r5055 
o|replaced variables: 3 
o|removed binding forms: 1 
o|removed binding forms: 5 
o|direct leaf routine/allocation: main#get-egg-property 0 
o|direct leaf routine/allocation: main#get-egg-property* 0 
o|direct leaf routine/allocation: loop263 0 
o|contracted procedure: "(chicken-status.scm:157) k4409" 
o|contracted procedure: "(chicken-status.scm:158) k4412" 
o|contracted procedure: "(chicken-status.scm:191) k4620" 
o|contracted procedure: k4874 
o|converted assignments to bindings: (loop263) 
o|simplifications: ((let . 1) (if . 1)) 
o|removed binding forms: 4 
o|contracted procedure: "(chicken-status.scm:114) k4085" 
o|removed binding forms: 1 
o|customizable procedures: (map-loop13301355 loop1277 k4702 k4723 map-loop10331050 main#filter-egg-names for-each-loop11391150 for-each-loop12491261 for-each-loop12291240 main#get-terminal-width g11811188 for-each-loop11801220 for-each-loop11971214 main#gather-components main#append-map main#read-info k4088 main#format-string g10971104 for-each-loop10961114 g10011010 map-loop9951013 loop295 main#filter main#delete-duplicates main#repo-path foldr339342 g344345 loop302 loop322 loop276 main#any map-loop207225 map-loop234252 loop203 foldr192195 g197198) 
o|shared closure containers: 4 
o|shared closure users: 4 
o|calls to known targets: 97 
o|identified direct recursive calls: f_1917 1 
o|identified direct recursive calls: f_1989 1 
o|identified direct recursive calls: f_2038 1 
o|identified direct recursive calls: f_2321 1 
o|identified direct recursive calls: f_2170 1 
o|identified direct recursive calls: f_2078 1 
o|identified direct recursive calls: f_4899 1 
o|identified direct recursive calls: f_4691 8 
o|fast box initializations: 19 
o|fast global references: 74 
o|fast global assignments: 38 
o|dropping unused closure argument: f_1902 
o|dropping unused closure argument: f_2078 
o|dropping unused closure argument: f_2106 
o|dropping unused closure argument: f_2267 
o|dropping unused closure argument: f_2312 
o|dropping unused closure argument: f_3273 
o|dropping unused closure argument: f_3297 
o|dropping unused closure argument: f_3616 
o|dropping unused closure argument: f_3693 
o|dropping unused closure argument: f_3727 
o|dropping unused closure argument: f_3782 
o|dropping unused closure argument: f_3935 
o|dropping unused closure argument: f_4197 
*/
/* end of file */
