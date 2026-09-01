/* Generated from chicken-uninstall.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-uninstall.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -output-file chicken-uninstall.c
   uses: eval data-structures posix pathname port irregex extras file library
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
C_noret_decl(C_posix_toplevel)
C_extern void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
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

static C_word lf[121];
static double C_possibly_force_alignment;


C_noret_decl(f4512)
static void C_ccall f4512(C_word c,C_word *av) C_noret;
C_noret_decl(f4517)
static void C_ccall f4517(C_word c,C_word *av) C_noret;
C_noret_decl(f4524)
static void C_ccall f4524(C_word c,C_word *av) C_noret;
C_noret_decl(f4531)
static void C_ccall f4531(C_word c,C_word *av) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word *av) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word *av) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word *av) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word *av) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word *av) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word *av) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word *av) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word *av) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word *av) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word *av) C_noret;
C_noret_decl(f_1907)
static C_word f_1907(C_word t0);
C_noret_decl(f_1941)
static C_word f_1941(C_word t0,C_word t1);
C_noret_decl(f_1999)
static void f_1999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word *av) C_noret;
C_noret_decl(f_2027)
static void f_2027(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word *av) C_noret;
C_noret_decl(f_2102)
static void f_2102(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word *av) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word *av) C_noret;
C_noret_decl(f_2141)
static void f_2141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2150)
static void f_2150(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2158)
static void f_2158(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word *av) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word *av) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word *av) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word *av) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word *av) C_noret;
C_noret_decl(f_2828)
static void C_ccall f_2828(C_word c,C_word *av) C_noret;
C_noret_decl(f_2832)
static void C_ccall f_2832(C_word c,C_word *av) C_noret;
C_noret_decl(f_2836)
static void C_ccall f_2836(C_word c,C_word *av) C_noret;
C_noret_decl(f_2840)
static void C_ccall f_2840(C_word c,C_word *av) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word *av) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word *av) C_noret;
C_noret_decl(f_2852)
static void C_ccall f_2852(C_word c,C_word *av) C_noret;
C_noret_decl(f_2856)
static void C_ccall f_2856(C_word c,C_word *av) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word *av) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word *av) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word *av) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word *av) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word *av) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word *av) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word *av) C_noret;
C_noret_decl(f_2896)
static void C_ccall f_2896(C_word c,C_word *av) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word *av) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word *av) C_noret;
C_noret_decl(f_2908)
static void C_ccall f_2908(C_word c,C_word *av) C_noret;
C_noret_decl(f_2912)
static void C_ccall f_2912(C_word c,C_word *av) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word *av) C_noret;
C_noret_decl(f_2920)
static void C_ccall f_2920(C_word c,C_word *av) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word *av) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word *av) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word *av) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word *av) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word *av) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word *av) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word *av) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word *av) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word *av) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word *av) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word *av) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word *av) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word *av) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word *av) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word *av) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word *av) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word *av) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word *av) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word *av) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3082)
static void C_ccall f_3082(C_word c,C_word *av) C_noret;
C_noret_decl(f_3091)
static void C_ccall f_3091(C_word c,C_word *av) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word *av) C_noret;
C_noret_decl(f_3454)
static void f_3454(C_word t0) C_noret;
C_noret_decl(f_3462)
static void f_3462(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3476)
static void C_ccall f_3476(C_word c,C_word *av) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word *av) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word *av) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3506)
static void f_3506(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word *av) C_noret;
C_noret_decl(f_3526)
static void f_3526(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word *av) C_noret;
C_noret_decl(f_3563)
static void C_ccall f_3563(C_word c,C_word *av) C_noret;
C_noret_decl(f_3569)
static C_word f_3569(C_word t0,C_word t1);
C_noret_decl(f_3574)
static void f_3574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word *av) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word *av) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3634)
static void f_3634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word *av) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word *av) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word *av) C_noret;
C_noret_decl(f_3650)
static void C_ccall f_3650(C_word c,C_word *av) C_noret;
C_noret_decl(f_3676)
static void C_ccall f_3676(C_word c,C_word *av) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word *av) C_noret;
C_noret_decl(f_3701)
static void f_3701(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3726)
static void C_ccall f_3726(C_word c,C_word *av) C_noret;
C_noret_decl(f_3738)
static void f_3738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word *av) C_noret;
C_noret_decl(f_3790)
static void C_ccall f_3790(C_word c,C_word *av) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word *av) C_noret;
C_noret_decl(f_3800)
static void C_ccall f_3800(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void f_3806(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3831)
static void f_3831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word *av) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word *av) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void f_3866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word *av) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word *av) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word *av) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word *av) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word *av) C_noret;
C_noret_decl(f_3959)
static void f_3959(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3969)
static void C_ccall f_3969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4001)
static void f_4001(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word *av) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word *av) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4038)
static void f_4038(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word *av) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word *av) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word *av) C_noret;
C_noret_decl(f_4158)
static void f_4158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word *av) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word *av) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word *av) C_noret;
C_noret_decl(f_4248)
static void C_ccall f_4248(C_word c,C_word *av) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word *av) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word *av) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word *av) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word *av) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word *av) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word *av) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_1999)
static void C_ccall trf_1999(C_word c,C_word *av) C_noret;
static void C_ccall trf_1999(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1999(t0,t1,t2);}

C_noret_decl(trf_2027)
static void C_ccall trf_2027(C_word c,C_word *av) C_noret;
static void C_ccall trf_2027(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2027(t0,t1,t2);}

C_noret_decl(trf_2102)
static void C_ccall trf_2102(C_word c,C_word *av) C_noret;
static void C_ccall trf_2102(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2102(t0,t1,t2);}

C_noret_decl(trf_2141)
static void C_ccall trf_2141(C_word c,C_word *av) C_noret;
static void C_ccall trf_2141(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2141(t0,t1,t2);}

C_noret_decl(trf_2150)
static void C_ccall trf_2150(C_word c,C_word *av) C_noret;
static void C_ccall trf_2150(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2150(t0,t1,t2);}

C_noret_decl(trf_2158)
static void C_ccall trf_2158(C_word c,C_word *av) C_noret;
static void C_ccall trf_2158(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2158(t0,t1,t2,t3);}

C_noret_decl(trf_3454)
static void C_ccall trf_3454(C_word c,C_word *av) C_noret;
static void C_ccall trf_3454(C_word c,C_word *av){
C_word t0=av[0];
f_3454(t0);}

C_noret_decl(trf_3462)
static void C_ccall trf_3462(C_word c,C_word *av) C_noret;
static void C_ccall trf_3462(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3462(t0,t1);}

C_noret_decl(trf_3506)
static void C_ccall trf_3506(C_word c,C_word *av) C_noret;
static void C_ccall trf_3506(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3506(t0,t1,t2);}

C_noret_decl(trf_3526)
static void C_ccall trf_3526(C_word c,C_word *av) C_noret;
static void C_ccall trf_3526(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3526(t0,t1,t2);}

C_noret_decl(trf_3574)
static void C_ccall trf_3574(C_word c,C_word *av) C_noret;
static void C_ccall trf_3574(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3574(t0,t1,t2);}

C_noret_decl(trf_3634)
static void C_ccall trf_3634(C_word c,C_word *av) C_noret;
static void C_ccall trf_3634(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3634(t0,t1);}

C_noret_decl(trf_3701)
static void C_ccall trf_3701(C_word c,C_word *av) C_noret;
static void C_ccall trf_3701(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3701(t0,t1,t2);}

C_noret_decl(trf_3738)
static void C_ccall trf_3738(C_word c,C_word *av) C_noret;
static void C_ccall trf_3738(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3738(t0,t1,t2);}

C_noret_decl(trf_3806)
static void C_ccall trf_3806(C_word c,C_word *av) C_noret;
static void C_ccall trf_3806(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3806(t0,t1);}

C_noret_decl(trf_3831)
static void C_ccall trf_3831(C_word c,C_word *av) C_noret;
static void C_ccall trf_3831(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3831(t0,t1,t2);}

C_noret_decl(trf_3866)
static void C_ccall trf_3866(C_word c,C_word *av) C_noret;
static void C_ccall trf_3866(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3866(t0,t1);}

C_noret_decl(trf_3959)
static void C_ccall trf_3959(C_word c,C_word *av) C_noret;
static void C_ccall trf_3959(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3959(t0,t1,t2);}

C_noret_decl(trf_4001)
static void C_ccall trf_4001(C_word c,C_word *av) C_noret;
static void C_ccall trf_4001(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4001(t0,t1,t2,t3);}

C_noret_decl(trf_4038)
static void C_ccall trf_4038(C_word c,C_word *av) C_noret;
static void C_ccall trf_4038(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4038(t0,t1);}

C_noret_decl(trf_4158)
static void C_ccall trf_4158(C_word c,C_word *av) C_noret;
static void C_ccall trf_4158(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4158(t0,t1,t2);}

/* f4512 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f4512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4512,c,av);}
C_trace(C_text("chicken-uninstall.scm:153: chicken.base#exit"));
t2=C_fast_retrieve(lf[60]);{
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

/* f4517 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f4517(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4517,c,av);}
C_trace(C_text("chicken-uninstall.scm:153: chicken.base#exit"));
t2=C_fast_retrieve(lf[60]);{
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

/* f4524 in k4127 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f4524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4524,c,av);}
C_trace(C_text("chicken-uninstall.scm:153: chicken.base#exit"));
t2=C_fast_retrieve(lf[60]);{
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

/* f4531 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f4531(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f4531,c,av);}
C_trace(C_text("chicken-uninstall.scm:153: chicken.base#exit"));
t2=C_fast_retrieve(lf[60]);{
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

/* k1501 */
static void C_ccall f_1503(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1503,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1504 in k1501 */
static void C_ccall f_1506(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1506,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1509,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4292,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-uninstall.scm:27: ##sys#with-environment"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[120]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[120]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1507 in k1504 in k1501 */
static void C_ccall f_1509(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1509,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_1512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1512,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_1515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1515,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_irregex_toplevel(2,av2);}}

/* k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_1518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1518,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_port_toplevel(2,av2);}}

/* k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_1521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1521,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_pathname_toplevel(2,av2);}}

/* k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_1524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1524,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_1527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1527,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_1530(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_1530,c,av);}
a=C_alloc(5);
t2=C_mutate(&lf[1] /* (set! main#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2141,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[3] /* (set! main#staticbuild ...) */,C_mk_bool(STATIC_CHICKEN));
t4=C_mutate(&lf[4] /* (set! main#debugbuild ...) */,C_mk_bool(DEBUG_CHICKEN));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:43: chicken.platform#feature?"));
t6=C_fast_retrieve(lf[116]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[117];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* loop in k4127 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static C_word f_1907(C_word t1){
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
t4=C_i_memq(t3,lf[97]);
if(C_truep(C_i_not(t4))){
return(C_SCHEME_FALSE);}
else{
t6=C_u_i_cdr(t1);
t1=t6;
goto loop;}}}

/* loop in a3562 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static C_word f_1941(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t2=(
C_trace("mini-srfi-1.scm:88: pred"),
  f_3569(((C_word*)t0)[2],C_i_car(t1))
);
if(C_truep(t2)){
return(t2);}
else{
t4=C_u_i_cdr(t1);
t1=t4;
goto loop;}}}

/* loop in k3522 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void f_1999(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1999,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2017,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:101: loop"));
t6=t4;
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}

/* k2015 in loop in k3522 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_2017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2017,c,av);}
C_trace(C_text("mini-srfi-1.scm:101: scheme#append"));
t2=*((C_word*)lf[74]+1);{
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

/* loop in loop in k3493 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void f_2027(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_2027,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_i_string_equal_p(((C_word*)t0)[2],t3))){
C_trace(C_text("mini-srfi-1.scm:107: loop"));
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2054,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:109: loop"));
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k2052 in loop in loop in k3493 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in ... */
static void C_ccall f_2054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2054,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* loop in k3493 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void f_2102(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_2102,3,t0,t1,t2);}
a=C_alloc(16);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2116,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2027,a[2]=t3,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_2027(t10,t6,t4);}}

/* k2114 in loop in k3493 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_2116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2116,c,av);}
a=C_alloc(3);
t2=C_i_equalp(((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(C_truep(t2)?((C_word*)t0)[4]:C_a_i_cons(&a,2,((C_word*)t0)[5],t1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2127 in loop in k3493 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_2129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2129,c,av);}
C_trace(C_text("mini-srfi-1.scm:123: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_2102(t2,((C_word*)t0)[3],t1);}

/* main#filter in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void f_2141(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_2141,3,t1,t2,t3);}
a=C_alloc(6);
t4=C_i_check_list_2(t3,lf[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2150,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2150(t8,t1,t3);}

/* foldr329 in main#filter in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void f_2150(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2150,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2179,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g334 in foldr329 in main#filter in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void f_2158(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2158,4,t0,t1,t2,t3);}
a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2165,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:131: pred"));
t5=((C_word*)t0)[2];{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k2163 in g334 in foldr329 in main#filter in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2165,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]):((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2177 in foldr329 in main#filter in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2179,c,av);}
C_trace(C_text("mini-srfi-1.scm:131: g334"));
t2=((C_word*)t0)[2];
f_2158(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2814(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2814,c,av);}
a=C_alloc(6);
t2=lf[5] /* main#cross-chicken */ =t1;;
t3=lf[6] /* main#binary-version */ =C_fix((C_word)C_BINARY_VERSION);;
t4=lf[7] /* main#major-version */ =C_fix((C_word)C_MAJOR_VERSION);;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[111]+1);{
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

/* k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2820,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[8] /* (set! main#chicken-install-program ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[111]+1);{
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

/* k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2824(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2824,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2828,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2832,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2836,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2840,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2844,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2848(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2848,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2852,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 */
static void C_ccall f_2856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2856,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[9] /* (set! main#default-libdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[111]+1);{
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

/* k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in k1501 in ... */
static void C_ccall f_2860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2860,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[10] /* (set! main#default-runlibdir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[111]+1);{
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

/* k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in k1504 in ... */
static void C_ccall f_2864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2864,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in k1507 in ... */
static void C_ccall f_2868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2868,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in k1510 in ... */
static void C_ccall f_2872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2872,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[11] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[111]+1);{
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

/* k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in k1513 in ... */
static void C_ccall f_2876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2876,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4290,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:64: chicken.platform#software-type"));
t3=C_fast_retrieve(lf[115]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in ... */
static void C_ccall f_2884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2884,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in ... */
static void C_ccall f_2888(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2888,c,av);}
a=C_alloc(9);
t2=C_mutate(&lf[11] /* (set! main#default-bindir ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4283,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t5=*((C_word*)lf[111]+1);{
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

/* k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in ... */
static void C_ccall f_2892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2892,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2896,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4279,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[111]+1);{
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

/* k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in ... */
static void C_ccall f_2896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_2896,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4275,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[111]+1);{
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

/* k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in ... */
static void C_ccall f_2900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2900,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in ... */
static void C_ccall f_2904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2904,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2908,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in ... */
static void C_ccall f_2908(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2908,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in ... */
static void C_ccall f_2912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2912,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in ... */
static void C_ccall f_2916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2916,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[15] /* (set! main#host-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2920,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t4=*((C_word*)lf[111]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_LIB_HOME);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in ... */
static void C_ccall f_2920(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2920,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in ... */
static void C_ccall f_2924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2924,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in ... */
static void C_ccall f_2928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2928,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in ... */
static void C_ccall f_2932(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2932,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in ... */
static void C_ccall f_2936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2936,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in ... */
static void C_ccall f_2940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2940,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in ... */
static void C_ccall f_2944(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2944,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in ... */
static void C_ccall f_2948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_2948,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2952,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t3=*((C_word*)lf[111]+1);{
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

/* k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in ... */
static void C_ccall f_2952(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2952,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2956,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4270,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[6],C_text("main#binary-version"));
C_trace(C_text("##sys#fixnum->string"));
t5=C_fast_retrieve(lf[109]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in ... */
static void C_ccall f_2956(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2956,c,av);}
a=C_alloc(6);
t2=C_mutate(&lf[16] /* (set! main#target-repo ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4265,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_retrieve2(lf[6],C_text("main#binary-version"));
C_trace(C_text("##sys#fixnum->string"));
t6=C_fast_retrieve(lf[109]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t4;
av2[2]=C_retrieve2(lf[6],C_text("main#binary-version"));
av2[3]=C_fix(10);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in ... */
static void C_ccall f_2960(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2960,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[17] /* (set! main#target-run-repo ...) */,t1);
t3=C_mutate(&lf[18] /* (set! main#+egg-info-extension+ ...) */,lf[19]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:122: chicken.process-context#get-environment-variable"));
t5=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[107];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2966 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_2968(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2968,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2971,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:106: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[85];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k2969 in k2966 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_2971(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2971,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2974,a[2]=((C_word*)t2)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_not(((C_word*)t2)[3]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2995,a[2]=t3,a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
if(C_truep(t4)){
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_2974(2,av2);}}
else{
C_trace(C_text("egg-environment.scm:108: chicken.base#error"));
t6=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t3;
av2[2]=lf[84];
av2[3]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}}
else{
C_trace(C_text("egg-environment.scm:107: chicken.pathname#absolute-pathname?"));
t6=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}}

/* k2972 in k2969 in k2966 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_2974(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2974,c,av);}
a=C_alloc(3);
t2=C_i_not(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2983,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t2)){
if(C_truep(t2)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
f_4014(2,av2);}}
else{
C_trace(C_text("egg-environment.scm:110: chicken.base#error"));
t4=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[82];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}
else{
C_trace(C_text("egg-environment.scm:109: chicken.pathname#absolute-pathname?"));
t4=C_fast_retrieve(lf[83]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}

/* k2981 in k2972 in k2969 in k2966 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_2983(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2983,c,av);}
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
f_4014(2,av2);}}
else{
C_trace(C_text("egg-environment.scm:110: chicken.base#error"));
t3=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[82];
av2[3]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}}

/* k2993 in k2969 in k2966 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_2995(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2995,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
f_2974(2,av2);}}
else{
C_trace(C_text("egg-environment.scm:108: chicken.base#error"));
t2=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[84];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k3017 in k3460 in main#repo-path in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3019(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3019,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:C_retrieve2(lf[15],C_text("main#host-repo")));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in ... */
static void C_ccall f_3044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3044,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
f_3047(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4255,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:123: chicken.platform#system-cache-directory"));
t4=C_fast_retrieve(lf[106]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_3047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3047,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[20] /* (set! main#cache-directory ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:131: scheme#string-append"));
t4=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_retrieve2(lf[20],C_text("main#cache-directory"));
av2[3]=lf[103];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_3051(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3051,c,av);}
a=C_alloc(3);
t2=lf[21] /* main#host-extensions */ =C_SCHEME_TRUE;;
t3=lf[22] /* main#force-uninstall */ =C_SCHEME_FALSE;;
t4=lf[23] /* main#sudo-uninstall */ =C_SCHEME_FALSE;;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:53: chicken.process-context#get-environment-variable"));
t6=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[102];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3058 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in ... */
static void C_ccall f_3060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3060,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3066,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-information.scm:34: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[42]);{
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

/* k3064 in k3058 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in ... */
static void C_ccall f_3066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3066,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(C_truep(t1)?((C_word*)t2)[2]:((C_word*)t2)[3]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3091,a[2]=((C_word*)t2)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("egg-information.scm:38: scheme#with-input-from-file"));
t5=C_fast_retrieve(lf[50]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t3;
av2[3]=*((C_word*)lf[51]+1);
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3068 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in ... */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3070,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3074,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-information.scm:32: chicken.pathname#pathname-file"));
t4=C_fast_retrieve(lf[54]);{
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

/* k3072 in k3068 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in ... */
static void C_ccall f_3074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3074,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3078,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("egg-information.scm:33: chicken.pathname#pathname-extension"));
t4=C_fast_retrieve(lf[53]);{
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

/* k3076 in k3072 in k3068 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3078,c,av);}
C_trace(C_text("egg-information.scm:30: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[52]);{
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

/* k3080 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in ... */
static void C_ccall f_3082(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3082,c,av);}
C_trace(C_text("egg-information.scm:30: chicken.pathname#make-pathname"));
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
av2[3]=lf[55];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3089 in k3064 in k3058 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3091(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3091,c,av);}
if(C_truep(C_eofp(t1))){
C_trace(C_text("egg-information.scm:40: chicken.base#error"));
t2=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[49];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
f_3856(2,av2);}}}

/* k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in ... */
static void C_ccall f_3449(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3449,c,av);}
a=C_alloc(10);
t2=(C_truep(t1)?t1:lf[24]);
t3=C_mutate(&lf[25] /* (set! main#sudo-program ...) */,t2);
t4=C_mutate(&lf[26] /* (set! main#repo-path ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3454,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[31] /* (set! main#delete-installed-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3866,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4238,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4248,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:199: chicken.process-context#command-line-arguments"));
t8=C_fast_retrieve(lf[101]);{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* main#repo-path in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void f_3454(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3454,1,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3462,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[5],C_text("main#cross-chicken")))){
t3=C_i_not(C_retrieve2(lf[21],C_text("main#host-extensions")));
t4=t2;
f_3462(t4,(C_truep(t3)?lf[27]:lf[30]));}
else{
t3=t2;
f_3462(t3,lf[30]);}}

/* k3460 in main#repo-path in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void f_3462(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3462,2,t0,t1);}
a=C_alloc(3);
t2=C_SCHEME_END_OF_LIST;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_eqp(lf[27],t1);
if(C_truep(t5)){
t6=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t6;
av2[1]=(C_truep(t4)?C_retrieve2(lf[17],C_text("main#target-run-repo")):C_retrieve2(lf[16],C_text("main#target-repo")));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-environment.scm:115: chicken.process-context#get-environment-variable"));
t7=C_fast_retrieve(lf[28]);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[29];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}

/* a3475 in k3512 in g984 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_3476(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3476,c,av);}
t3=C_fast_retrieve(lf[77]);
C_trace(C_text("chicken-uninstall.scm:63: g943"));
t4=C_fast_retrieve(lf[77]);{
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

/* k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3489(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3489,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_3574(t6,t2,t1);}

/* k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3492(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,3)))){
C_save_and_reclaim((void *)f_3492,c,av);}
a=C_alloc(22);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3495,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3506,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=C_i_check_list_2(((C_word*)t0)[4],lf[73]);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3526,a[2]=t5,a[3]=t11,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_3526(t13,t9,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3563,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:73: filter"));
f_2141(t2,t3,t1);}}

/* k3493 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3495(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3495,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2102,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2102(t5,((C_word*)t0)[2],t1);}

/* g984 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void f_3506(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3506,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3514,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:71: chicken.irregex#glob->sre"));
t5=C_fast_retrieve(lf[79]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3512 in g984 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3514(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3514,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3476,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:63: filter"));
f_2141(((C_word*)t0)[2],t2,((C_word*)t0)[3]);}

/* k3516 in g984 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3518,c,av);}
C_trace(C_text("chicken-uninstall.scm:71: chicken.irregex#irregex"));
t2=C_fast_retrieve(lf[78]);{
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

/* k3522 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3524(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3524,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1999,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1999(t5,((C_word*)t0)[2],t1);}

/* map-loop978 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void f_3526(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3526,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-uninstall.scm:70: g984"));
t4=((C_word*)t0)[4];
f_3506(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3549 in map-loop978 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3551(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3551,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3526(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* a3562 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3563(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3563,c,av);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3569,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_1941(t4,((C_word*)t0)[2])
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* a3568 in a3562 in k3490 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static C_word f_3569(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_string_equal_p(t1,((C_word*)t0)[2]));}

/* map-loop951 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void f_3574(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3574,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-uninstall.scm:66: g957"));
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

/* k3597 in map-loop951 in k3487 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3599(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3599,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3574(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3608 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3610(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3610,c,av);}
C_trace(C_text("chicken-uninstall.scm:67: chicken.file#glob"));
t2=C_fast_retrieve(lf[80]);{
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

/* k3612 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3614,c,av);}
C_trace(C_text("chicken-uninstall.scm:67: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[52]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[81];
av2[4]=C_retrieve2(lf[18],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3618 in k3648 in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in ... */
static void C_ccall f_3620(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3620,c,av);}
C_trace(C_text("chicken-uninstall.scm:81: chicken.base#exit"));
t2=C_fast_retrieve(lf[60]);{
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

/* k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3629(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3629,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3634,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3634(t5,((C_word*)t0)[2]);}

/* loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void f_3634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3634,2,t0,t1);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3638,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-uninstall.scm:89: scheme#display"));
t3=*((C_word*)lf[68]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3638(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3638,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3641,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:90: chicken.base#flush-output"));
t3=*((C_word*)lf[67]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_3641(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3641,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3644,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:91: chicken.io#read-line"));
t4=C_fast_retrieve(lf[66]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in ... */
static void C_ccall f_3644(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3644,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3647,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_eofp(((C_word*)t2)[4]))){
C_trace(C_text("chicken-uninstall.scm:93: chicken.base#error"));
t5=*((C_word*)lf[48]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[65];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}
else{
t5=t4;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_3647(2,av2);}}}

/* k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in ... */
static void C_ccall f_3647(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_3647,c,av);}
a=C_alloc(26);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3650,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3738,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3778,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3782,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3786,a[2]=t5,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3790,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3794,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("##sys#string->list"));
t12=C_fast_retrieve(lf[64]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=((C_word*)t2)[4];
((C_proc)(void*)(*((C_word*)t12+1)))(3,av2);}}

/* k3648 in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3650(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3650,c,av);}
a=C_alloc(3);
t2=C_i_string_equal_p(t1,lf[58]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_string_equal_p(t1,lf[59]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:80: chicken.base#print"));
t4=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[61];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}
else{
C_trace(C_text("chicken-uninstall.scm:97: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3634(t3,((C_word*)t0)[2]);}}}

/* k3674 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3676(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3676,c,av);}
C_trace(C_text("chicken-uninstall.scm:84: chicken.base#print"));
t2=*((C_word*)lf[44]+1);{
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

/* k3678 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3680(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3680,c,av);}
C_trace(C_text("chicken-uninstall.scm:84: chicken.string#string-intersperse"));
t2=C_fast_retrieve(lf[70]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[71];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k3697 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3699,c,av);}
C_trace(C_text("chicken-uninstall.scm:85: scheme#append"));
t2=*((C_word*)lf[74]+1);{
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

/* map-loop1019 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void f_3701(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3701,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3726,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-uninstall.scm:86: g1042"));
t4=*((C_word*)lf[36]+1);{
C_word av2[5];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[75];
av2[3]=C_slot(t2,C_fix(0));
av2[4]=lf[76];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3724 in map-loop1019 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void C_ccall f_3726(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3726,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3701(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* left in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void f_3738(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3738,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t2))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_i_car(t2);
if(C_truep(C_u_i_char_whitespacep(t3))){
C_trace(C_text("chicken-uninstall.scm:102: left"));
t7=t1;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}
else{
t4=C_u_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3765,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-uninstall.scm:103: left"));
t7=t5;
t8=C_u_i_cdr(t2);
t1=t7;
t2=t8;
goto loop;}}}

/* k3763 in left in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in ... */
static void C_ccall f_3765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3765,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3776 in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3778,c,av);}
C_trace(C_text("##sys#list->string"));
t2=C_fast_retrieve(lf[62]);{
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

/* k3780 in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3782,c,av);}
C_trace(C_text("chicken-uninstall.scm:104: scheme#reverse"));
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

/* k3784 in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3786,c,av);}
C_trace(C_text("chicken-uninstall.scm:104: left"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3738(t2,((C_word*)t0)[3],t1);}

/* k3788 in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3790,c,av);}
C_trace(C_text("chicken-uninstall.scm:104: scheme#reverse"));
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

/* k3792 in k3645 in k3642 in k3639 in k3636 in loop in k3627 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3794(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3794,c,av);}
C_trace(C_text("chicken-uninstall.scm:104: left"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3738(t2,((C_word*)t0)[3],t1);}

/* k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_3800(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,2)))){
C_save_and_reclaim((void *)f_3800,c,av);}
a=C_alloc(23);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3856,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3060,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3070,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3082,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("egg-information.scm:30: chicken.pathname#pathname-directory"));
t7=C_fast_retrieve(lf[56]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=t1;
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}
else{
t2=((C_word*)((C_word*)t0)[3])[1];
f_3959(t2,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}}

/* k3804 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in ... */
static void f_3806(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_3806,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=C_i_check_list_2(t1,lf[46]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3831,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_3831(t7,t3,t1);}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_3959(t2,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}}

/* k3815 in for-each-loop1081 in k3804 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3817,c,av);}
if(C_truep(t1)){
C_trace(C_text("chicken-uninstall.scm:113: delete-installed-file"));
f_3866(((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t2=((C_word*)((C_word*)t0)[4])[1];
f_3831(t2,((C_word*)t0)[5],C_slot(((C_word*)t0)[6],C_fix(1)));}}

/* k3824 in k3804 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in ... */
static void C_ccall f_3826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3826,c,av);}
C_trace(C_text("chicken-uninstall.scm:115: delete-installed-file"));
f_3866(((C_word*)t0)[2],((C_word*)t0)[3]);}

/* for-each-loop1081 in k3804 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in ... */
static void f_3831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3831,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3817,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("chicken-uninstall.scm:113: chicken.file#file-exists?"));
t6=C_fast_retrieve(lf[42]);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3839 in for-each-loop1081 in k3804 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in ... */
static void C_ccall f_3841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3841,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3831(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3854 in k3798 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in ... */
static void C_ccall f_3856(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3856,c,av);}
t2=C_SCHEME_END_OF_LIST;
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_i_car(t2));
t5=C_i_assq(lf[47],t1);
if(C_truep(t5)){
t6=C_i_cdr(t5);
t7=((C_word*)t0)[2];
f_3806(t7,(C_truep(t6)?t6:t4));}
else{
t6=((C_word*)t0)[2];
f_3806(t6,t4);}}

/* k3858 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_3860(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3860,c,av);}
C_trace(C_text("chicken-uninstall.scm:107: chicken.file#file-exists?"));
t2=C_fast_retrieve(lf[42]);{
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

/* k3862 in k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in ... */
static void C_ccall f_3864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3864,c,av);}
C_trace(C_text("chicken-uninstall.scm:108: chicken.pathname#make-pathname"));
t2=C_fast_retrieve(lf[52]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=((C_word*)t0)[3];
av2[4]=C_retrieve2(lf[18],C_text("main#+egg-info-extension+"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* main#delete-installed-file in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void f_3866(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3866,2,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3922,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-uninstall.scm:118: chicken.file#file-exists?"));
t4=C_fast_retrieve(lf[42]);{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k3883 in k3920 in main#delete-installed-file in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3885,c,av);}
t2=((C_word*)t0)[2];
t3=C_eqp(t1,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}
else{
C_trace(C_text("chicken-uninstall.scm:123: chicken.base#warning"));
t4=C_fast_retrieve(lf[32]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t2)[2];
av2[2]=lf[34];
av2[3]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}}

/* k3897 in k3920 in main#delete-installed-file in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3899,c,av);}
C_trace(C_text("chicken-uninstall.scm:121: chicken.process#system"));
t2=C_fast_retrieve(lf[35]);{
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

/* k3901 in k3920 in main#delete-installed-file in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3903,c,av);}
C_trace(C_text("chicken-uninstall.scm:121: scheme#string-append"));
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[25],C_text("main#sudo-program"));
av2[3]=lf[37];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k3907 in k3920 in main#delete-installed-file in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_3909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3909,c,av);}
if(C_truep(t1)){
C_trace(C_text("chicken-uninstall.scm:125: chicken.file#delete-directory"));
t2=C_fast_retrieve(lf[39]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
C_trace(C_text("chicken-uninstall.scm:127: chicken.file#delete-file"));
t2=C_fast_retrieve(lf[40]);{
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

/* k3920 in main#delete-installed-file in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_3922(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3922,c,av);}
a=C_alloc(9);
if(C_truep(C_i_not(t1))){
C_trace(C_text("chicken-uninstall.scm:119: chicken.base#warning"));
t2=C_fast_retrieve(lf[32]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[33];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=(C_truep(C_retrieve2(lf[23],C_text("main#sudo-uninstall")))?C_eqp(lf[13],C_retrieve2(lf[14],C_text("main#default-platform"))):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3885,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3899,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3903,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:121: chicken.process#qs"));
t6=C_fast_retrieve(lf[38]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-uninstall.scm:124: chicken.file#directory-exists?"));
t4=C_fast_retrieve(lf[41]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}}}

/* k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in ... */
static void C_ccall f_3928(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_3928,c,av);}
a=C_alloc(32);
if(C_truep(C_i_nullp(t1))){
C_trace(C_text("chicken-uninstall.scm:132: chicken.base#print"));
t2=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[45];
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}
else{
t2=C_retrieve2(lf[22],C_text("main#force-uninstall"));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3943,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[22],C_text("main#force-uninstall")))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_retrieve2(lf[22],C_text("main#force-uninstall"));
f_3943(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3676,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3680,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=C_a_i_list1(&a,1,lf[72]);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_i_check_list_2(t1,lf[73]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3699,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3701,a[2]=t10,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_3701(t17,t13,t1);}}}

/* k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in ... */
static void C_ccall f_3943(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3943,c,av);}
a=C_alloc(5);
if(C_truep(t1)){
t2=C_i_check_list_2(((C_word*)t0)[2],lf[46]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3959,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3959(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3946 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3948(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3948,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3800,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3860,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3864,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-uninstall.scm:108: repo-path"));
f_3454(t4);}

/* for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in ... */
static void f_3959(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,3)))){
C_save_and_reclaim_args((void *)trf_3959,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3969,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3948,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("chicken-uninstall.scm:136: chicken.base#print"));
t6=*((C_word*)lf[44]+1);{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[57];
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3967 in for-each-loop1120 in k3941 in k3926 in k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in ... */
static void C_ccall f_3969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3969,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3959(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void f_4001(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4001,4,t0,t1,t2,t3);}
a=C_alloc(8);
if(C_truep(C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4011,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t3))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4512,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:141: chicken.base#print"));
t6=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[87];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}
else{
t5=t4;{
C_word av2[2];
av2[0]=t5;
av2[1]=C_SCHEME_UNDEFINED;
f_4011(2,av2);}}}
else{
t4=C_i_car(t2);
t5=C_i_string_equal_p(t4,lf[88]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4038,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t3,a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_4038(t7,t5);}
else{
t7=C_i_string_equal_p(t4,lf[99]);
t8=t6;
f_4038(t8,(C_truep(t7)?t7:C_i_string_equal_p(t4,lf[100])));}}}

/* k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void C_ccall f_4011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_4011,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4014,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2968,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("egg-environment.scm:105: chicken.process-context#get-environment-variable"));
t4=C_fast_retrieve(lf[28]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[86];
((C_proc)(void*)(*((C_word*)t4+1)))(3,av2);}}

/* k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_4014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4014,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4021,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-uninstall.scm:163: scheme#reverse"));
t4=*((C_word*)lf[63]+1);{
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

/* k4019 in k4012 in k4009 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_4021(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,2)))){
C_save_and_reclaim((void *)f_4021,c,av);}
a=C_alloc(22);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_fast_retrieve(lf[54]);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3489,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t6,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3610,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3614,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:67: repo-path"));
f_3454(t11);}

/* k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in ... */
static void f_4038(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4038,2,t0,t1);}
a=C_alloc(9);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:141: chicken.base#print"));
t3=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[87];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[3],lf[89]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4056,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:171: chicken.platform#chicken-version"));
t4=C_fast_retrieve(lf[90]);{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[3],lf[91]))){
t2=lf[21] /* main#host-extensions */ =C_SCHEME_FALSE;;
C_trace(C_text("chicken-uninstall.scm:175: loop"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_4001(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[3],lf[92]))){
C_trace(C_text("chicken-uninstall.scm:178: loop"));
t2=((C_word*)((C_word*)t0)[4])[1];
f_4001(t2,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[3],lf[93]))){
t2=lf[22] /* main#force-uninstall */ =C_SCHEME_TRUE;;
C_trace(C_text("chicken-uninstall.scm:181: loop"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_4001(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
if(C_truep(C_i_string_equal_p(((C_word*)t0)[3],lf[94]))){
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
C_trace(C_text("chicken-uninstall.scm:184: loop"));
t3=((C_word*)((C_word*)t0)[4])[1];
f_4001(t3,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
t2=C_i_string_equal_p(((C_word*)t0)[3],lf[95]);
t3=(C_truep(t2)?t2:C_i_string_equal_p(((C_word*)t0)[3],lf[96]));
if(C_truep(t3)){
t4=lf[23] /* main#sudo-uninstall */ =C_SCHEME_TRUE;;
C_trace(C_text("chicken-uninstall.scm:187: loop"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_4001(t5,((C_word*)t0)[2],C_u_i_cdr(((C_word*)t0)[5]),((C_word*)t0)[6]);}
else{
t4=C_i_string_length(((C_word*)t0)[3]);
t5=(C_truep(C_i_fixnum_positivep(t4))?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(((C_word*)t0)[3],C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t5)){
if(C_truep(C_fixnum_greaterp(C_u_i_string_length(((C_word*)t0)[3]),C_fix(2)))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4203,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:191: scheme#substring"));
t8=*((C_word*)lf[98]+1);{
C_word av2[4];
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
av2[3]=C_fix(1);
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4531,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:141: chicken.base#print"));
t7=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[87];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}}
else{
t6=C_u_i_cdr(((C_word*)t0)[5]);
t7=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[6]);
C_trace(C_text("chicken-uninstall.scm:197: loop"));
t8=((C_word*)((C_word*)t0)[4])[1];
f_4001(t8,((C_word*)t0)[2],t6,t7);}}}}}}}}}

/* k4047 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_4049(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4049,c,av);}
C_trace(C_text("chicken-uninstall.scm:172: chicken.base#exit"));
t2=C_fast_retrieve(lf[60]);{
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

/* k4054 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_4056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4056,c,av);}
C_trace(C_text("chicken-uninstall.scm:171: chicken.base#print"));
t2=*((C_word*)lf[44]+1);{
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

/* k4127 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_4129(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4129,c,av);}
a=C_alloc(23);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1907,tmp=(C_word)a,a+=2,tmp);
t3=(
  f_1907(t1)
);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4154,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4158,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_4158(t13,t9,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f4524,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-uninstall.scm:141: chicken.base#print"));
t5=*((C_word*)lf[44]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[87];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}

/* k4140 in k4127 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_4142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4142,c,av);}
C_trace(C_text("chicken-uninstall.scm:193: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_4001(t2,((C_word*)t0)[3],t1,((C_word*)t0)[4]);}

/* k4152 in k4127 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void C_ccall f_4154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4154,c,av);}
C_trace(C_text("chicken-uninstall.scm:193: scheme#append"));
t2=*((C_word*)lf[74]+1);{
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

/* map-loop1185 in k4127 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in ... */
static void f_4158(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4158,3,t0,t1,t2);}
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

/* k4201 in k4036 in loop in k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in ... */
static void C_ccall f_4203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4203,c,av);}
C_trace(C_text("##sys#string->list"));
t2=C_fast_retrieve(lf[64]);{
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

/* k4236 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_4238(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4238,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[43]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4242 in k4236 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in ... */
static void C_ccall f_4244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4244,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k4246 in k3447 in k3049 in k3045 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in ... */
static void C_ccall f_4248(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_4248,c,av);}
a=C_alloc(8);
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4001,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4001(t7,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4253 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in ... */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4255,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace(C_text("egg-environment.scm:123: scheme#string-append"));
t3=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[104];
av2[4]=C_retrieve2(lf[8],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}
else{
C_trace(C_text("egg-environment.scm:124: chicken.process-context#current-directory"));
t3=C_fast_retrieve(lf[105]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4256 in k4253 in k3042 in k2958 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in ... */
static void C_ccall f_4258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4258,c,av);}
C_trace(C_text("egg-environment.scm:123: scheme#string-append"));
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=lf[104];
av2[4]=C_retrieve2(lf[8],C_text("main#chicken-install-program"));
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4263 in k2954 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in ... */
static void C_ccall f_4265(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4265,c,av);}
C_trace(C_text("egg-environment.scm:99: scheme#string-append"));
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[10],C_text("main#default-runlibdir"));
av2[3]=lf[108];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4268 in k2950 in k2946 in k2942 in k2938 in k2934 in k2930 in k2926 in k2922 in k2918 in k2914 in k2910 in k2906 in k2902 in k2898 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in ... */
static void C_ccall f_4270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4270,c,av);}
C_trace(C_text("egg-environment.scm:96: scheme#string-append"));
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[9],C_text("main#default-libdir"));
av2[3]=lf[110];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4273 in k2894 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in ... */
static void C_ccall f_4275(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4275,c,av);}
C_trace(C_text("egg-environment.scm:78: scheme#string-append"));
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-bindir"));
av2[3]=lf[112];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4277 in k2890 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in ... */
static void C_ccall f_4279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4279,c,av);}
C_trace(C_text("egg-environment.scm:75: scheme#string-append"));
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-bindir"));
av2[3]=lf[113];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4281 in k2886 in k2882 in k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in ... */
static void C_ccall f_4283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4283,c,av);}
C_trace(C_text("egg-environment.scm:72: scheme#string-append"));
t2=*((C_word*)lf[36]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_retrieve2(lf[11],C_text("main#default-bindir"));
av2[3]=lf[114];
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(5,av2);}}

/* k4288 in k2874 in k2870 in k2866 in k2862 in k2858 in k2854 in k2850 in k2846 in k2842 in k2838 in k2834 in k2830 in k2826 in k2822 in k2818 in k2812 in k1528 in k1525 in k1522 in k1519 in k1516 in ... */
static void C_ccall f_4290(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4290,c,av);}
a=C_alloc(6);
t2=C_eqp(t1,lf[12]);
t3=(C_truep(t2)?C_mk_bool(C_WINDOWS_SHELL):lf[13]);
t4=C_mutate(&lf[14] /* (set! main#default-platform ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#peek-c-string"));
t6=*((C_word*)lf[111]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=C_mpointer(&a,(void*)C_INSTALL_PREFIX);
av2[3]=C_fix(0);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* a4291 in k1504 in k1501 */
static void C_ccall f_4292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_4292,c,av);}
C_trace(C_text("chicken-uninstall.scm:27: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[118]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[118]+1);
av2[1]=t1;
av2[2]=lf[119];
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
if(C_unlikely(!C_demand_2(387))){
C_save(t1);
C_rereclaim2(387*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,121);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[2]=C_h_intern(&lf[2],5, C_text("foldr"));
lf[12]=C_h_intern(&lf[12],7, C_text("windows"));
lf[13]=C_h_intern(&lf[13],4, C_text("unix"));
lf[19]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\145\147\147\055\151\156\146\157\000"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\163\165\144\157\000"));
lf[27]=C_h_intern(&lf[27],6, C_text("target"));
lf[28]=C_h_intern(&lf[28],48, C_text("chicken.process-context#get-environment-variable"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\103\110\111\103\113\105\116\137\111\116\123\124\101\114\114\137\122\105\120\117\123\111\124\117\122\131\000"));
lf[30]=C_h_intern(&lf[30],4, C_text("host"));
lf[32]=C_h_intern(&lf[32],20, C_text("chicken.base#warning"));
lf[33]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\146\151\154\145\040\144\157\145\163\040\156\157\164\040\145\170\151\163\164\000"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\144\145\154\145\164\151\156\147\040\146\151\154\145\040\146\141\151\154\145\144\000"));
lf[35]=C_h_intern(&lf[35],22, C_text("chicken.process#system"));
lf[36]=C_h_intern(&lf[36],20, C_text("scheme#string-append"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\040\162\155\040\055\146\040\055\162\040\055\055\040\000"));
lf[38]=C_h_intern(&lf[38],18, C_text("chicken.process#qs"));
lf[39]=C_h_intern(&lf[39],29, C_text("chicken.file#delete-directory"));
lf[40]=C_h_intern(&lf[40],24, C_text("chicken.file#delete-file"));
lf[41]=C_h_intern(&lf[41],30, C_text("chicken.file#directory-exists?"));
lf[42]=C_h_intern(&lf[42],25, C_text("chicken.file#file-exists?"));
lf[43]=C_h_intern(&lf[43],34, C_text("chicken.base#implicit-exit-handler"));
lf[44]=C_h_intern(&lf[44],18, C_text("chicken.base#print"));
lf[45]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\156\157\164\150\151\156\147\040\164\157\040\162\145\155\157\166\145\056\000"));
lf[46]=C_h_intern(&lf[46],8, C_text("for-each"));
lf[47]=C_h_intern(&lf[47],15, C_text("installed-files"));
lf[48]=C_h_intern(&lf[48],18, C_text("chicken.base#error"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\171\145\155\160\164\171\040\145\147\147\055\151\156\146\157\040\146\151\154\145\054\040\160\157\163\163\151\142\154\171\040\144\165\145\040\164\157\040\141\156\040\141\142\157\162\164\145\144\040\145\147\147\055\151\156\163\164\141\154\154\040\055\040\160\154\145\141\163\145\040\162\145\155\157\166\145\040\164\150\145\040\146\151\154\145\040\141\156\144\040\162\145\151\156\163\164\141\154\154\040\164\150\145\040\143\157\162\162\145\163\160\157\156\144\151\156\147\040\145\147\147\000"));
lf[50]=C_h_intern(&lf[50],27, C_text("scheme#with-input-from-file"));
lf[51]=C_h_intern(&lf[51],11, C_text("scheme#read"));
lf[52]=C_h_intern(&lf[52],30, C_text("chicken.pathname#make-pathname"));
lf[53]=C_h_intern(&lf[53],35, C_text("chicken.pathname#pathname-extension"));
lf[54]=C_h_intern(&lf[54],30, C_text("chicken.pathname#pathname-file"));
lf[55]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\143\150\151\143\153\145\156\000"));
lf[56]=C_h_intern(&lf[56],35, C_text("chicken.pathname#pathname-directory"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\162\145\155\157\166\151\156\147\040\000"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\004\171\145\163\000"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\156\157\000"));
lf[60]=C_h_intern(&lf[60],17, C_text("chicken.base#exit"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\141\142\157\162\164\145\144\056\000"));
lf[62]=C_h_intern(&lf[62],18, C_text("##sys#list->string"));
lf[63]=C_h_intern(&lf[63],14, C_text("scheme#reverse"));
lf[64]=C_h_intern(&lf[64],18, C_text("##sys#string->list"));
lf[65]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\105\117\106\040\055\040\165\163\145\040\140\055\146\157\162\143\145\047\040\164\157\040\160\162\157\143\145\145\144\040\141\156\171\167\141\171\000"));
lf[66]=C_h_intern(&lf[66],20, C_text("chicken.io#read-line"));
lf[67]=C_h_intern(&lf[67],25, C_text("chicken.base#flush-output"));
lf[68]=C_h_intern(&lf[68],14, C_text("scheme#display"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\042\104\157\040\171\157\165\040\167\141\156\164\040\164\157\040\160\162\157\143\145\145\144\077\040\050\171\145\163\057\156\157\051\040\000"));
lf[70]=C_h_intern(&lf[70],33, C_text("chicken.string#string-intersperse"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\054\101\142\157\165\164\040\164\157\040\144\145\154\145\164\145\040\164\150\145\040\146\157\154\154\157\167\151\156\147\040\145\170\164\145\156\163\151\157\156\163\072\012\012\000"));
lf[73]=C_h_intern(&lf[73],3, C_text("map"));
lf[74]=C_h_intern(&lf[74],13, C_text("scheme#append"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\012\000"));
lf[77]=C_h_intern(&lf[77],30, C_text("chicken.irregex#irregex-search"));
lf[78]=C_h_intern(&lf[78],23, C_text("chicken.irregex#irregex"));
lf[79]=C_h_intern(&lf[79],25, C_text("chicken.irregex#glob->sre"));
lf[80]=C_h_intern(&lf[80],17, C_text("chicken.file#glob"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\052\000"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\064\103\110\111\103\113\105\116\137\111\116\123\124\101\114\114\137\120\122\105\106\111\130\040\155\165\163\164\040\142\145\040\141\156\040\141\142\163\157\154\165\164\145\040\160\141\164\150\156\141\155\145\000"));
lf[83]=C_h_intern(&lf[83],35, C_text("chicken.pathname#absolute-pathname?"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\070\103\110\111\103\113\105\116\137\111\116\123\124\101\114\114\137\122\105\120\117\123\111\124\117\122\131\040\155\165\163\164\040\142\145\040\141\156\040\141\142\163\157\154\165\164\145\040\160\141\164\150\156\141\155\145\000"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\110\111\103\113\105\116\137\111\116\123\124\101\114\114\137\120\122\105\106\111\130\000"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\103\110\111\103\113\105\116\137\111\116\123\124\101\114\114\137\122\105\120\117\123\111\124\117\122\131\000"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\002\000\002\055\165\163\141\147\145\072\040\143\150\151\143\153\145\156\055\165\156\151\156\163\164\141\154\154\040\133\117\120\124\111\117\116\040\056\056\056\135\040\133\116\101\115\105\040\056\056\056\135\012\012\040\040\055\150\040\040\040\055\150\145\154\160\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\164\150\151\163\040\155\145\163\163\141\147\145\040\141\156\144\040\145\170\151\164\012\040\040\040\040\040\040\040\055\166\145\162\163\151\157\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\166\145\162\163\151\157\156\040\141\156\144\040\145\170\151\164\012\040\040\040\040\040\040\040\055\146\157\162\143\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\157\156\047\164\040\141\163\153\054\040\144\145\154\145\164\145\040\167\150\141\164\145\166\145\162\040\155\141\164\143\150\145\163\012\040\040\040\040\040\040\040\055\155\141\164\143\150\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\164\162\145\141\164\040\116\101\115\105\040\141\163\040\141\040\147\154\157\142\040\160\141\164\164\145\162\156\012\040\040\055\163\040\040\040\055\163\165\144\157\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\165\163\145\040\145\170\164\145\162\156\141\154\040\143\157\155\155\141\156\144\040\164\157\040\145\154\145\166\141\164\145\040\160\162\151\166\151\154\145\147\145\163\040\146\157\162\040\144\145\154\145\164\151\156\147\040\146\151\154\145\163\012\040\040\040\040\040\040\040\055\150\157\163\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\150\145\156\040\143\162\157\163\163\055\143\157\155\160\151\154\151\156\147\054\040\165\156\151\156\163\164\141\154\154\040\150\157\163\164\040\145\170\164\145\156\163\151\157\156\163\040\157\156\154\171\012\040\040\040\040\040\040\040\055\164\141\162\147\145\164\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\167\150\145\156\040\143\162\157\163\163\055\143\157\155\160\151\154\151\156\147\054\040\165\156\151\156\163\164\141\154\154\040\164\141\162\147\145\164\040\145\170\164\145\156\163\151\157\156\163\040\157\156\154\171\000"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\150\145\154\160\000"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\166\145\162\163\151\157\156\000"));
lf[90]=C_h_intern(&lf[90],32, C_text("chicken.platform#chicken-version"));
lf[91]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\055\164\141\162\147\145\164\000"));
lf[92]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\150\157\163\164\000"));
lf[93]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\146\157\162\143\145\000"));
lf[94]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\155\141\164\143\150\000"));
lf[95]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\163\000"));
lf[96]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\163\165\144\157\000"));
lf[97]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\012\000\000\150\376\003\000\000\002\376\377\012\000\000\163\376\003\000\000\002\376\377\012\000\000\160\376\377\016"));
lf[98]=C_h_intern(&lf[98],16, C_text("scheme#substring"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\150\000"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\055\150\145\154\160\000"));
lf[101]=C_h_intern(&lf[101],46, C_text("chicken.process-context#command-line-arguments"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\123\125\104\117\000"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\057\056\143\141\143\150\145\055\155\145\164\141\144\141\164\141\000"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[105]=C_h_intern(&lf[105],41, C_text("chicken.process-context#current-directory"));
lf[106]=C_h_intern(&lf[106],39, C_text("chicken.platform#system-cache-directory"));
lf[107]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\110\111\103\113\105\116\137\105\107\107\137\103\101\103\110\105\000"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\057\143\150\151\143\153\145\156\057\000"));
lf[109]=C_h_intern(&lf[109],20, C_text("##sys#fixnum->string"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\057\143\150\151\143\153\145\156\057\000"));
lf[111]=C_h_intern(&lf[111],19, C_text("##sys#peek-c-string"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[113]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\057\000"));
lf[115]=C_h_intern(&lf[115],30, C_text("chicken.platform#software-type"));
lf[116]=C_h_intern(&lf[116],25, C_text("chicken.platform#feature?"));
lf[117]=C_h_intern_kw(&lf[117],13, C_text("cross-chicken"));
lf[118]=C_h_intern(&lf[118],30, C_text("##sys#register-compiled-module"));
lf[119]=C_h_intern(&lf[119],4, C_text("main"));
lf[120]=C_h_intern(&lf[120],22, C_text("##sys#with-environment"));
C_register_lf2(lf,121,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1503,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[165] = {
{C_text("f4512:chicken_2duninstall_2escm"),(void*)f4512},
{C_text("f4517:chicken_2duninstall_2escm"),(void*)f4517},
{C_text("f4524:chicken_2duninstall_2escm"),(void*)f4524},
{C_text("f4531:chicken_2duninstall_2escm"),(void*)f4531},
{C_text("f_1503:chicken_2duninstall_2escm"),(void*)f_1503},
{C_text("f_1506:chicken_2duninstall_2escm"),(void*)f_1506},
{C_text("f_1509:chicken_2duninstall_2escm"),(void*)f_1509},
{C_text("f_1512:chicken_2duninstall_2escm"),(void*)f_1512},
{C_text("f_1515:chicken_2duninstall_2escm"),(void*)f_1515},
{C_text("f_1518:chicken_2duninstall_2escm"),(void*)f_1518},
{C_text("f_1521:chicken_2duninstall_2escm"),(void*)f_1521},
{C_text("f_1524:chicken_2duninstall_2escm"),(void*)f_1524},
{C_text("f_1527:chicken_2duninstall_2escm"),(void*)f_1527},
{C_text("f_1530:chicken_2duninstall_2escm"),(void*)f_1530},
{C_text("f_1907:chicken_2duninstall_2escm"),(void*)f_1907},
{C_text("f_1941:chicken_2duninstall_2escm"),(void*)f_1941},
{C_text("f_1999:chicken_2duninstall_2escm"),(void*)f_1999},
{C_text("f_2017:chicken_2duninstall_2escm"),(void*)f_2017},
{C_text("f_2027:chicken_2duninstall_2escm"),(void*)f_2027},
{C_text("f_2054:chicken_2duninstall_2escm"),(void*)f_2054},
{C_text("f_2102:chicken_2duninstall_2escm"),(void*)f_2102},
{C_text("f_2116:chicken_2duninstall_2escm"),(void*)f_2116},
{C_text("f_2129:chicken_2duninstall_2escm"),(void*)f_2129},
{C_text("f_2141:chicken_2duninstall_2escm"),(void*)f_2141},
{C_text("f_2150:chicken_2duninstall_2escm"),(void*)f_2150},
{C_text("f_2158:chicken_2duninstall_2escm"),(void*)f_2158},
{C_text("f_2165:chicken_2duninstall_2escm"),(void*)f_2165},
{C_text("f_2179:chicken_2duninstall_2escm"),(void*)f_2179},
{C_text("f_2814:chicken_2duninstall_2escm"),(void*)f_2814},
{C_text("f_2820:chicken_2duninstall_2escm"),(void*)f_2820},
{C_text("f_2824:chicken_2duninstall_2escm"),(void*)f_2824},
{C_text("f_2828:chicken_2duninstall_2escm"),(void*)f_2828},
{C_text("f_2832:chicken_2duninstall_2escm"),(void*)f_2832},
{C_text("f_2836:chicken_2duninstall_2escm"),(void*)f_2836},
{C_text("f_2840:chicken_2duninstall_2escm"),(void*)f_2840},
{C_text("f_2844:chicken_2duninstall_2escm"),(void*)f_2844},
{C_text("f_2848:chicken_2duninstall_2escm"),(void*)f_2848},
{C_text("f_2852:chicken_2duninstall_2escm"),(void*)f_2852},
{C_text("f_2856:chicken_2duninstall_2escm"),(void*)f_2856},
{C_text("f_2860:chicken_2duninstall_2escm"),(void*)f_2860},
{C_text("f_2864:chicken_2duninstall_2escm"),(void*)f_2864},
{C_text("f_2868:chicken_2duninstall_2escm"),(void*)f_2868},
{C_text("f_2872:chicken_2duninstall_2escm"),(void*)f_2872},
{C_text("f_2876:chicken_2duninstall_2escm"),(void*)f_2876},
{C_text("f_2884:chicken_2duninstall_2escm"),(void*)f_2884},
{C_text("f_2888:chicken_2duninstall_2escm"),(void*)f_2888},
{C_text("f_2892:chicken_2duninstall_2escm"),(void*)f_2892},
{C_text("f_2896:chicken_2duninstall_2escm"),(void*)f_2896},
{C_text("f_2900:chicken_2duninstall_2escm"),(void*)f_2900},
{C_text("f_2904:chicken_2duninstall_2escm"),(void*)f_2904},
{C_text("f_2908:chicken_2duninstall_2escm"),(void*)f_2908},
{C_text("f_2912:chicken_2duninstall_2escm"),(void*)f_2912},
{C_text("f_2916:chicken_2duninstall_2escm"),(void*)f_2916},
{C_text("f_2920:chicken_2duninstall_2escm"),(void*)f_2920},
{C_text("f_2924:chicken_2duninstall_2escm"),(void*)f_2924},
{C_text("f_2928:chicken_2duninstall_2escm"),(void*)f_2928},
{C_text("f_2932:chicken_2duninstall_2escm"),(void*)f_2932},
{C_text("f_2936:chicken_2duninstall_2escm"),(void*)f_2936},
{C_text("f_2940:chicken_2duninstall_2escm"),(void*)f_2940},
{C_text("f_2944:chicken_2duninstall_2escm"),(void*)f_2944},
{C_text("f_2948:chicken_2duninstall_2escm"),(void*)f_2948},
{C_text("f_2952:chicken_2duninstall_2escm"),(void*)f_2952},
{C_text("f_2956:chicken_2duninstall_2escm"),(void*)f_2956},
{C_text("f_2960:chicken_2duninstall_2escm"),(void*)f_2960},
{C_text("f_2968:chicken_2duninstall_2escm"),(void*)f_2968},
{C_text("f_2971:chicken_2duninstall_2escm"),(void*)f_2971},
{C_text("f_2974:chicken_2duninstall_2escm"),(void*)f_2974},
{C_text("f_2983:chicken_2duninstall_2escm"),(void*)f_2983},
{C_text("f_2995:chicken_2duninstall_2escm"),(void*)f_2995},
{C_text("f_3019:chicken_2duninstall_2escm"),(void*)f_3019},
{C_text("f_3044:chicken_2duninstall_2escm"),(void*)f_3044},
{C_text("f_3047:chicken_2duninstall_2escm"),(void*)f_3047},
{C_text("f_3051:chicken_2duninstall_2escm"),(void*)f_3051},
{C_text("f_3060:chicken_2duninstall_2escm"),(void*)f_3060},
{C_text("f_3066:chicken_2duninstall_2escm"),(void*)f_3066},
{C_text("f_3070:chicken_2duninstall_2escm"),(void*)f_3070},
{C_text("f_3074:chicken_2duninstall_2escm"),(void*)f_3074},
{C_text("f_3078:chicken_2duninstall_2escm"),(void*)f_3078},
{C_text("f_3082:chicken_2duninstall_2escm"),(void*)f_3082},
{C_text("f_3091:chicken_2duninstall_2escm"),(void*)f_3091},
{C_text("f_3449:chicken_2duninstall_2escm"),(void*)f_3449},
{C_text("f_3454:chicken_2duninstall_2escm"),(void*)f_3454},
{C_text("f_3462:chicken_2duninstall_2escm"),(void*)f_3462},
{C_text("f_3476:chicken_2duninstall_2escm"),(void*)f_3476},
{C_text("f_3489:chicken_2duninstall_2escm"),(void*)f_3489},
{C_text("f_3492:chicken_2duninstall_2escm"),(void*)f_3492},
{C_text("f_3495:chicken_2duninstall_2escm"),(void*)f_3495},
{C_text("f_3506:chicken_2duninstall_2escm"),(void*)f_3506},
{C_text("f_3514:chicken_2duninstall_2escm"),(void*)f_3514},
{C_text("f_3518:chicken_2duninstall_2escm"),(void*)f_3518},
{C_text("f_3524:chicken_2duninstall_2escm"),(void*)f_3524},
{C_text("f_3526:chicken_2duninstall_2escm"),(void*)f_3526},
{C_text("f_3551:chicken_2duninstall_2escm"),(void*)f_3551},
{C_text("f_3563:chicken_2duninstall_2escm"),(void*)f_3563},
{C_text("f_3569:chicken_2duninstall_2escm"),(void*)f_3569},
{C_text("f_3574:chicken_2duninstall_2escm"),(void*)f_3574},
{C_text("f_3599:chicken_2duninstall_2escm"),(void*)f_3599},
{C_text("f_3610:chicken_2duninstall_2escm"),(void*)f_3610},
{C_text("f_3614:chicken_2duninstall_2escm"),(void*)f_3614},
{C_text("f_3620:chicken_2duninstall_2escm"),(void*)f_3620},
{C_text("f_3629:chicken_2duninstall_2escm"),(void*)f_3629},
{C_text("f_3634:chicken_2duninstall_2escm"),(void*)f_3634},
{C_text("f_3638:chicken_2duninstall_2escm"),(void*)f_3638},
{C_text("f_3641:chicken_2duninstall_2escm"),(void*)f_3641},
{C_text("f_3644:chicken_2duninstall_2escm"),(void*)f_3644},
{C_text("f_3647:chicken_2duninstall_2escm"),(void*)f_3647},
{C_text("f_3650:chicken_2duninstall_2escm"),(void*)f_3650},
{C_text("f_3676:chicken_2duninstall_2escm"),(void*)f_3676},
{C_text("f_3680:chicken_2duninstall_2escm"),(void*)f_3680},
{C_text("f_3699:chicken_2duninstall_2escm"),(void*)f_3699},
{C_text("f_3701:chicken_2duninstall_2escm"),(void*)f_3701},
{C_text("f_3726:chicken_2duninstall_2escm"),(void*)f_3726},
{C_text("f_3738:chicken_2duninstall_2escm"),(void*)f_3738},
{C_text("f_3765:chicken_2duninstall_2escm"),(void*)f_3765},
{C_text("f_3778:chicken_2duninstall_2escm"),(void*)f_3778},
{C_text("f_3782:chicken_2duninstall_2escm"),(void*)f_3782},
{C_text("f_3786:chicken_2duninstall_2escm"),(void*)f_3786},
{C_text("f_3790:chicken_2duninstall_2escm"),(void*)f_3790},
{C_text("f_3794:chicken_2duninstall_2escm"),(void*)f_3794},
{C_text("f_3800:chicken_2duninstall_2escm"),(void*)f_3800},
{C_text("f_3806:chicken_2duninstall_2escm"),(void*)f_3806},
{C_text("f_3817:chicken_2duninstall_2escm"),(void*)f_3817},
{C_text("f_3826:chicken_2duninstall_2escm"),(void*)f_3826},
{C_text("f_3831:chicken_2duninstall_2escm"),(void*)f_3831},
{C_text("f_3841:chicken_2duninstall_2escm"),(void*)f_3841},
{C_text("f_3856:chicken_2duninstall_2escm"),(void*)f_3856},
{C_text("f_3860:chicken_2duninstall_2escm"),(void*)f_3860},
{C_text("f_3864:chicken_2duninstall_2escm"),(void*)f_3864},
{C_text("f_3866:chicken_2duninstall_2escm"),(void*)f_3866},
{C_text("f_3885:chicken_2duninstall_2escm"),(void*)f_3885},
{C_text("f_3899:chicken_2duninstall_2escm"),(void*)f_3899},
{C_text("f_3903:chicken_2duninstall_2escm"),(void*)f_3903},
{C_text("f_3909:chicken_2duninstall_2escm"),(void*)f_3909},
{C_text("f_3922:chicken_2duninstall_2escm"),(void*)f_3922},
{C_text("f_3928:chicken_2duninstall_2escm"),(void*)f_3928},
{C_text("f_3943:chicken_2duninstall_2escm"),(void*)f_3943},
{C_text("f_3948:chicken_2duninstall_2escm"),(void*)f_3948},
{C_text("f_3959:chicken_2duninstall_2escm"),(void*)f_3959},
{C_text("f_3969:chicken_2duninstall_2escm"),(void*)f_3969},
{C_text("f_4001:chicken_2duninstall_2escm"),(void*)f_4001},
{C_text("f_4011:chicken_2duninstall_2escm"),(void*)f_4011},
{C_text("f_4014:chicken_2duninstall_2escm"),(void*)f_4014},
{C_text("f_4021:chicken_2duninstall_2escm"),(void*)f_4021},
{C_text("f_4038:chicken_2duninstall_2escm"),(void*)f_4038},
{C_text("f_4049:chicken_2duninstall_2escm"),(void*)f_4049},
{C_text("f_4056:chicken_2duninstall_2escm"),(void*)f_4056},
{C_text("f_4129:chicken_2duninstall_2escm"),(void*)f_4129},
{C_text("f_4142:chicken_2duninstall_2escm"),(void*)f_4142},
{C_text("f_4154:chicken_2duninstall_2escm"),(void*)f_4154},
{C_text("f_4158:chicken_2duninstall_2escm"),(void*)f_4158},
{C_text("f_4203:chicken_2duninstall_2escm"),(void*)f_4203},
{C_text("f_4238:chicken_2duninstall_2escm"),(void*)f_4238},
{C_text("f_4244:chicken_2duninstall_2escm"),(void*)f_4244},
{C_text("f_4248:chicken_2duninstall_2escm"),(void*)f_4248},
{C_text("f_4255:chicken_2duninstall_2escm"),(void*)f_4255},
{C_text("f_4258:chicken_2duninstall_2escm"),(void*)f_4258},
{C_text("f_4265:chicken_2duninstall_2escm"),(void*)f_4265},
{C_text("f_4270:chicken_2duninstall_2escm"),(void*)f_4270},
{C_text("f_4275:chicken_2duninstall_2escm"),(void*)f_4275},
{C_text("f_4279:chicken_2duninstall_2escm"),(void*)f_4279},
{C_text("f_4283:chicken_2duninstall_2escm"),(void*)f_4283},
{C_text("f_4290:chicken_2duninstall_2escm"),(void*)f_4290},
{C_text("f_4292:chicken_2duninstall_2escm"),(void*)f_4292},
{C_text("toplevel:chicken_2duninstall_2escm"),(void*)C_toplevel},
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
o|hiding unexported module binding: main#force-uninstall 
o|hiding unexported module binding: main#sudo-uninstall 
o|hiding unexported module binding: main#sudo-program 
o|hiding unexported module binding: main#repo-path 
o|hiding unexported module binding: main#grep 
o|hiding unexported module binding: main#gather-eggs 
o|hiding unexported module binding: main#fini 
o|hiding unexported module binding: main#ask 
o|hiding unexported module binding: main#trim 
o|hiding unexported module binding: main#remove-extension 
o|hiding unexported module binding: main#delete-installed-file 
o|hiding unexported module binding: main#uninstall 
o|hiding unexported module binding: main#usage 
o|hiding unexported module binding: main#short-options 
o|hiding unexported module binding: main#main 
S|applied compiler syntax:
S|  scheme#for-each		2
S|  chicken.base#foldl		3
S|  scheme#map		7
S|  chicken.base#foldr		3
o|eliminated procedure checks: 77 
o|specializations:
o|  1 (scheme#> fixnum fixnum)
o|  1 (scheme#string-length string)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#positive? fixnum)
o|  1 (scheme#zero? integer)
o|  13 (scheme#string=? * *)
o|  2 (scheme#cdar (pair pair *))
o|  5 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  2 (scheme#number->string fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  37 (scheme#cdr pair)
o|  9 (scheme#car pair)
(o e)|safe calls: 393 
(o e)|assignments to immediate values: 3 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1912 
o|inlining procedure: k1912 
o|inlining procedure: k1943 
o|inlining procedure: k1943 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#fourth 
o|removed side-effect free assignment to unused variable: main#fifth 
o|removed side-effect free assignment to unused variable: main#alist-cons 
o|inlining procedure: k2160 
o|inlining procedure: k2160 
o|inlining procedure: k2152 
o|inlining procedure: k2152 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2551 
o|inlining procedure: k2551 
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
o|removed side-effect free assignment to unused variable: main#+egg-extension+ 
o|removed side-effect free assignment to unused variable: main#probe-dir 
o|removed side-effect free assignment to unused variable: main#cache-metadata-directory 
o|removed side-effect free assignment to unused variable: main#+version-file+ 
o|removed side-effect free assignment to unused variable: main#+timestamp-file+ 
o|removed side-effect free assignment to unused variable: main#+status-file+ 
o|removed side-effect free assignment to unused variable: main#get-egg-property 
o|inlining procedure: k3155 
o|inlining procedure: k3173 
o|inlining procedure: k3173 
o|inlining procedure: k3190 
o|inlining procedure: k3190 
o|substituted constant variable: a3231 
o|substituted constant variable: a3233 
o|inlining procedure: k3155 
o|inlining procedure: k3241 
o|inlining procedure: k3241 
o|inlining procedure: k3251 
o|inlining procedure: k3269 
o|inlining procedure: k3269 
o|inlining procedure: k3286 
o|inlining procedure: k3286 
o|inlining procedure: k3316 
o|inlining procedure: k3316 
o|substituted constant variable: a3345 
o|substituted constant variable: a3347 
o|substituted constant variable: a3349 
o|inlining procedure: k3251 
o|removed side-effect free assignment to unused variable: main#get-extension-property 
o|removed side-effect free assignment to unused variable: main#get-extension-property* 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|contracted procedure: "(chicken-uninstall.scm:57) main#destination-repository" 
o|inlining procedure: k3008 
o|inlining procedure: k3008 
o|inlining procedure: k3463 
o|inlining procedure: k3463 
o|inlining procedure: k3868 
o|inlining procedure: k3868 
o|inlining procedure: k3886 
o|inlining procedure: k3886 
o|inlining procedure: k3904 
o|inlining procedure: k3904 
o|contracted procedure: "(chicken-uninstall.scm:199) main#main" 
o|inlining procedure: k4003 
o|contracted procedure: "(chicken-uninstall.scm:163) main#uninstall" 
o|inlining procedure: k3929 
o|inlining procedure: k3929 
o|inlining procedure: k3961 
o|contracted procedure: "(chicken-uninstall.scm:134) g11211128" 
o|contracted procedure: "(chicken-uninstall.scm:137) main#remove-extension" 
o|inlining procedure: k3801 
o|inlining procedure: k3833 
o|contracted procedure: "(chicken-uninstall.scm:111) g10821089" 
o|inlining procedure: k3812 
o|inlining procedure: k3812 
o|inlining procedure: k3833 
o|contracted procedure: "(chicken-uninstall.scm:109) main#get-egg-property*" 
o|inlining procedure: k3137 
o|inlining procedure: k3137 
o|contracted procedure: "(chicken-uninstall.scm:109) main#load-egg-info" 
o|inlining procedure: k3092 
o|inlining procedure: k3092 
o|contracted procedure: "(egg-information.scm:37) main#locate-egg-file" 
o|inlining procedure: k3061 
o|inlining procedure: k3061 
o|inlining procedure: k3801 
o|inlining procedure: k3961 
o|propagated global variable: tmp11151117 main#force-uninstall 
o|propagated global variable: tmp11151117 main#force-uninstall 
o|contracted procedure: "(chicken-uninstall.scm:133) main#ask" 
o|substituted constant variable: a3652 
o|inlining procedure: k3653 
o|inlining procedure: k3653 
o|substituted constant variable: a3660 
o|contracted procedure: "(chicken-uninstall.scm:96) main#fini" 
o|contracted procedure: "(chicken-uninstall.scm:94) main#trim" 
o|inlining procedure: k3740 
o|inlining procedure: k3740 
o|inlining procedure: k3703 
o|contracted procedure: "(chicken-uninstall.scm:86) g10251034" 
o|inlining procedure: k3703 
o|contracted procedure: "(chicken-uninstall.scm:130) main#gather-eggs" 
o|contracted procedure: "(chicken-uninstall.scm:77) main#delete-duplicates" 
o|inlining procedure: k2104 
o|inlining procedure: k2104 
o|contracted procedure: "(mini-srfi-1.scm:123) main#delete" 
o|inlining procedure: k2029 
o|inlining procedure: k2029 
o|contracted procedure: "(chicken-uninstall.scm:71) main#grep" 
o|propagated global variable: g943944 chicken.irregex#irregex-search 
o|contracted procedure: "(chicken-uninstall.scm:69) main#concatenate" 
o|inlining procedure: k2001 
o|inlining procedure: k2001 
o|inlining procedure: k3528 
o|inlining procedure: k3528 
o|inlining procedure: k3576 
o|inlining procedure: k3576 
o|contracted procedure: "(chicken-uninstall.scm:162) main#validate-environment" 
o|inlining procedure: k2975 
o|inlining procedure: k2975 
o|inlining procedure: k4003 
o|substituted constant variable: a4035 
o|substituted constant variable: a4046 
o|inlining procedure: k4042 
o|inlining procedure: k4042 
o|substituted constant variable: a4061 
o|substituted constant variable: a4072 
o|removed side-effect free assignment to unused variable: main#target-extensions 
o|inlining procedure: k4068 
o|inlining procedure: k4068 
o|substituted constant variable: a4083 
o|substituted constant variable: a4094 
o|inlining procedure: k4090 
o|inlining procedure: k4090 
o|substituted constant variable: a4105 
o|inlining procedure: k4115 
o|inlining procedure: k4130 
o|inlining procedure: k4160 
o|contracted procedure: "(chicken-uninstall.scm:193) g11911200" 
o|inlining procedure: k4160 
o|inlining procedure: k4130 
o|substituted constant variable: main#short-options 
o|substituted constant variable: a4209 
o|inlining procedure: k4115 
o|substituted constant variable: a4226 
o|substituted constant variable: a4223 
o|substituted constant variable: a4228 
o|substituted constant variable: a4230 
o|inlining procedure: k4231 
o|inlining procedure: k4231 
o|substituted constant variable: a4235 
o|inlining procedure: k4256 
o|inlining procedure: k4256 
o|replaced variables: 414 
o|removed binding forms: 190 
o|substituted constant variable: r21534320 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#get-extension-property/internal 
o|substituted constant variable: r34644342 
o|removed side-effect free assignment to unused variable: main#short-options 
o|substituted constant variable: prop819 
o|substituted constant variable: r38024364 
o|substituted constant variable: code1013 
o|substituted constant variable: r37414368 
o|substituted constant variable: r20024376 
o|contracted procedure: "(chicken-uninstall.scm:75) main#any" 
o|substituted constant variable: r19444315 
o|contracted procedure: "(chicken-uninstall.scm:192) main#every" 
o|replaced variables: 75 
o|removed binding forms: 383 
o|removed conditional forms: 1 
o|inlining procedure: k3839 
o|inlining procedure: k3967 
o|inlining procedure: k3134 
o|inlining procedure: k3967 
o|inlining procedure: k2981 
o|inlining procedure: k2993 
o|inlining procedure: "(chicken-uninstall.scm:161) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:169) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:195) main#usage" 
o|inlining procedure: "(chicken-uninstall.scm:196) main#usage" 
o|replaced variables: 6 
o|removed binding forms: 68 
o|removed side-effect free assignment to unused variable: main#usage 
o|substituted constant variable: r31354463 
o|substituted constant variable: r31354463 
o|substituted constant variable: code11384510 
o|substituted constant variable: code11384515 
o|substituted constant variable: code11384522 
o|inlining procedure: "(mini-srfi-1.scm:82) a4194" 
o|substituted constant variable: code11384529 
o|replaced variables: 6 
o|removed binding forms: 12 
o|removed conditional forms: 1 
o|replaced variables: 2 
o|removed binding forms: 14 
o|removed binding forms: 2 
o|simplifications: ((let . 16) (if . 15) (##core#call . 98)) 
o|  call simplifications:
o|    scheme#string-length
o|    chicken.fixnum#fx>
o|    scheme#memq
o|    scheme#string
o|    scheme#string=?
o|    scheme#equal?
o|    scheme#list	5
o|    ##sys#setslot	4
o|    scheme#string->list	2
o|    scheme#list->string
o|    scheme#char-whitespace?
o|    scheme#eof-object?	2
o|    scheme#assq
o|    scheme#cdr
o|    scheme#not	5
o|    scheme#null?	11
o|    scheme#car	9
o|    scheme#eq?	4
o|    ##sys#check-list	5
o|    scheme#pair?	7
o|    ##sys#slot	21
o|    scheme#cons	13
o|contracted procedure: k2143 
o|contracted procedure: k2155 
o|contracted procedure: k2173 
o|contracted procedure: k2181 
o|contracted procedure: k4284 
o|contracted procedure: k2878 
o|contracted procedure: k3450 
o|contracted procedure: k3023 
o|contracted procedure: k3005 
o|contracted procedure: k3011 
o|contracted procedure: k3463 
o|contracted procedure: k3871 
o|contracted procedure: k3880 
o|contracted procedure: k3889 
o|contracted procedure: k4006 
o|contracted procedure: k3932 
o|contracted procedure: k3952 
o|contracted procedure: k3964 
o|contracted procedure: k3974 
o|contracted procedure: k3978 
o|contracted procedure: k3821 
o|contracted procedure: k3836 
o|contracted procedure: k3846 
o|contracted procedure: k3850 
o|contracted procedure: k38464456 
o|contracted procedure: k39744462 
o|contracted procedure: k3143 
o|contracted procedure: k3128 
o|contracted procedure: k3131 
o|contracted procedure: k3134 
o|contracted procedure: k3086 
o|contracted procedure: k3095 
o|contracted procedure: k39744469 
o|contracted procedure: k3743 
o|contracted procedure: k3769 
o|contracted procedure: k3749 
o|contracted procedure: k3667 
o|contracted procedure: k3682 
o|contracted procedure: k3686 
o|contracted procedure: k3694 
o|contracted procedure: k3706 
o|contracted procedure: k3709 
o|contracted procedure: k3712 
o|contracted procedure: k3720 
o|contracted procedure: k3728 
o|contracted procedure: k3484 
o|contracted procedure: k2107 
o|contracted procedure: k2110 
o|contracted procedure: k2120 
o|contracted procedure: k2032 
o|contracted procedure: k2058 
o|contracted procedure: k2038 
o|contracted procedure: k3503 
o|contracted procedure: k3519 
o|contracted procedure: k2004 
o|contracted procedure: k2011 
o|contracted procedure: k3531 
o|contracted procedure: k3534 
o|contracted procedure: k3537 
o|contracted procedure: k3545 
o|contracted procedure: k3553 
o|contracted procedure: k1946 
o|contracted procedure: k1961 
o|contracted procedure: k3579 
o|contracted procedure: k3582 
o|contracted procedure: k3585 
o|contracted procedure: k3593 
o|contracted procedure: k3601 
o|contracted procedure: k2978 
o|contracted procedure: k2990 
o|contracted procedure: k4022 
o|contracted procedure: k4028 
o|contracted procedure: k4106 
o|contracted procedure: k4220 
o|contracted procedure: k4118 
o|contracted procedure: k4124 
o|contracted procedure: k4144 
o|contracted procedure: k4163 
o|contracted procedure: k4185 
o|contracted procedure: k4181 
o|contracted procedure: k4166 
o|contracted procedure: k4169 
o|contracted procedure: k4177 
o|contracted procedure: k1909 
o|contracted procedure: k1931 
o|contracted procedure: k1927 
o|contracted procedure: k1918 
o|contracted procedure: k4216 
o|contracted procedure: k4298 
o|contracted procedure: k4302 
o|contracted procedure: k4306 
o|contracted procedure: k4310 
o|simplifications: ((let . 36)) 
o|removed binding forms: 92 
o|substituted constant variable: r4299 
o|substituted constant variable: r4303 
o|substituted constant variable: r4307 
o|substituted constant variable: r4311 
o|removed binding forms: 4 
o|direct leaf routine/allocation: a3568 0 
o|direct leaf routine/allocation: loop253 0 
o|contracted procedure: "(mini-srfi-1.scm:88) k1949" 
o|contracted procedure: k4133 
o|converted assignments to bindings: (loop253) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 2 
o|direct leaf routine/allocation: loop266 0 
o|converted assignments to bindings: (loop266) 
o|simplifications: ((let . 1)) 
o|customizable procedures: (k4036 map-loop11851210 loop1144 map-loop951968 g984993 map-loop978996 loop285 main#filter loop292 loop312 map-loop10191044 left1068 loop1051 main#repo-path k3804 for-each-loop10811092 main#delete-installed-file for-each-loop11201132 k3460 foldr329332 g334335) 
o|shared closure containers: 7 
o|shared closure users: 9 
o|calls to known targets: 61 
o|identified direct recursive calls: f_2150 1 
o|identified direct recursive calls: f_3738 2 
o|identified direct recursive calls: f_2027 2 
o|identified direct recursive calls: f_1999 1 
o|identified direct recursive calls: f_1941 1 
o|identified direct recursive calls: f_1907 1 
o|identified direct recursive calls: f_4158 1 
o|fast box initializations: 13 
o|fast global references: 31 
o|fast global assignments: 26 
o|dropping unused closure argument: f_1907 
o|dropping unused closure argument: f_2141 
o|dropping unused closure argument: f_3454 
o|dropping unused closure argument: f_3866 
*/
/* end of file */
