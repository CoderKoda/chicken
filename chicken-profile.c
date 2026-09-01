/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: chicken-profile.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -output-file chicken-profile.c
   uses: eval data-structures internal posix file library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_data_2dstructures_toplevel)
C_extern void C_ccall C_data_2dstructures_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_posix_toplevel)
C_extern void C_ccall C_posix_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_file_toplevel)
C_extern void C_ccall C_file_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[94];
static double C_possibly_force_alignment;


C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word *av) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word *av) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word *av) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word *av) C_noret;
C_noret_decl(f_1274)
static void C_ccall f_1274(C_word c,C_word *av) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word *av) C_noret;
C_noret_decl(f_1280)
static void C_ccall f_1280(C_word c,C_word *av) C_noret;
C_noret_decl(f_1390)
static void f_1390(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word *av) C_noret;
C_noret_decl(f_1900)
static void f_1900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word *av) C_noret;
C_noret_decl(f_2567)
static void f_2567(C_word t0) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word *av) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word *av) C_noret;
C_noret_decl(f_2614)
static void f_2614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2624)
static void f_2624(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word *av) C_noret;
C_noret_decl(f_2634)
static void C_ccall f_2634(C_word c,C_word *av) C_noret;
C_noret_decl(f_2647)
static void C_ccall f_2647(C_word c,C_word *av) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word *av) C_noret;
C_noret_decl(f_2654)
static void C_ccall f_2654(C_word c,C_word *av) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word *av) C_noret;
C_noret_decl(f_2664)
static void f_2664(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void f_2683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word *av) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word *av) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word *av) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word *av) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word *av) C_noret;
C_noret_decl(f_2760)
static void C_ccall f_2760(C_word c,C_word *av) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word *av) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word *av) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word *av) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word *av) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word *av) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word *av) C_noret;
C_noret_decl(f_2929)
static void C_ccall f_2929(C_word c,C_word *av) C_noret;
C_noret_decl(f_2943)
static void f_2943(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2955)
static void C_ccall f_2955(C_word c,C_word *av) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word *av) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word *av) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word *av) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word *av) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word *av) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word *av) C_noret;
C_noret_decl(f_3033)
static void f_3033(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word *av) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word *av) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word *av) C_noret;
C_noret_decl(f_3089)
static void f_3089(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3099)
static void f_3099(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word *av) C_noret;
C_noret_decl(f_3216)
static void f_3216(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word *av) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word *av) C_noret;
C_noret_decl(f_3235)
static void C_ccall f_3235(C_word c,C_word *av) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word *av) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word *av) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word *av) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word *av) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word *av) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word *av) C_noret;
C_noret_decl(f_3280)
static void C_ccall f_3280(C_word c,C_word *av) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word *av) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word *av) C_noret;
C_noret_decl(f_3299)
static void f_3299(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3324)
static void C_ccall f_3324(C_word c,C_word *av) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word *av) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word *av) C_noret;
C_noret_decl(f_3336)
static void C_ccall f_3336(C_word c,C_word *av) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word *av) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word *av) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word *av) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word *av) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word *av) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word *av) C_noret;
C_noret_decl(f_3398)
static void C_ccall f_3398(C_word c,C_word *av) C_noret;
C_noret_decl(f_3409)
static void f_3409(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word *av) C_noret;
C_noret_decl(f_3457)
static void f_3457(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word *av) C_noret;
C_noret_decl(f_3497)
static void f_3497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_3520)
static void f_3520(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3527)
static void f_3527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3553)
static void C_ccall f_3553(C_word c,C_word *av) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word *av) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word *av) C_noret;
C_noret_decl(f_3594)
static void f_3594(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word *av) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word *av) C_noret;
C_noret_decl(f_3630)
static void C_ccall f_3630(C_word c,C_word *av) C_noret;
C_noret_decl(f_3640)
static void f_3640(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3664)
static void f_3664(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word *av) C_noret;
C_noret_decl(f_3690)
static void f_3690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3751)
static void f_3751(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3776)
static void f_3776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word *av) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word *av) C_noret;
C_noret_decl(f_3807)
static void f_3807(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void f_3841(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word *av) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word *av) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word *av) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word *av) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word *av) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word *av) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word *av) C_noret;
C_noret_decl(C_toplevel)
C_extern void C_ccall C_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(va4348)
static void va4348(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1390)
static void C_ccall trf_1390(C_word c,C_word *av) C_noret;
static void C_ccall trf_1390(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1390(t0,t1,t2);}

C_noret_decl(trf_1900)
static void C_ccall trf_1900(C_word c,C_word *av) C_noret;
static void C_ccall trf_1900(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_1900(t0,t1,t2);}

C_noret_decl(trf_2567)
static void C_ccall trf_2567(C_word c,C_word *av) C_noret;
static void C_ccall trf_2567(C_word c,C_word *av){
C_word t0=av[0];
f_2567(t0);}

C_noret_decl(trf_2614)
static void C_ccall trf_2614(C_word c,C_word *av) C_noret;
static void C_ccall trf_2614(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2614(t0,t1,t2);}

C_noret_decl(trf_2624)
static void C_ccall trf_2624(C_word c,C_word *av) C_noret;
static void C_ccall trf_2624(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2624(t0,t1);}

C_noret_decl(trf_2664)
static void C_ccall trf_2664(C_word c,C_word *av) C_noret;
static void C_ccall trf_2664(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2664(t0,t1);}

C_noret_decl(trf_2683)
static void C_ccall trf_2683(C_word c,C_word *av) C_noret;
static void C_ccall trf_2683(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2683(t0,t1);}

C_noret_decl(trf_2943)
static void C_ccall trf_2943(C_word c,C_word *av) C_noret;
static void C_ccall trf_2943(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2943(t0,t1,t2);}

C_noret_decl(trf_3033)
static void C_ccall trf_3033(C_word c,C_word *av) C_noret;
static void C_ccall trf_3033(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3033(t0,t1,t2);}

C_noret_decl(trf_3089)
static void C_ccall trf_3089(C_word c,C_word *av) C_noret;
static void C_ccall trf_3089(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3089(t0,t1,t2,t3);}

C_noret_decl(trf_3099)
static void C_ccall trf_3099(C_word c,C_word *av) C_noret;
static void C_ccall trf_3099(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3099(t0,t1);}

C_noret_decl(trf_3216)
static void C_ccall trf_3216(C_word c,C_word *av) C_noret;
static void C_ccall trf_3216(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3216(t0,t1,t2);}

C_noret_decl(trf_3299)
static void C_ccall trf_3299(C_word c,C_word *av) C_noret;
static void C_ccall trf_3299(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3299(t0,t1);}

C_noret_decl(trf_3409)
static void C_ccall trf_3409(C_word c,C_word *av) C_noret;
static void C_ccall trf_3409(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3409(t0,t1,t2,t3);}

C_noret_decl(trf_3457)
static void C_ccall trf_3457(C_word c,C_word *av) C_noret;
static void C_ccall trf_3457(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3457(t0,t1,t2);}

C_noret_decl(trf_3497)
static void C_ccall trf_3497(C_word c,C_word *av) C_noret;
static void C_ccall trf_3497(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3497(t0,t1,t2);}

C_noret_decl(trf_3520)
static void C_ccall trf_3520(C_word c,C_word *av) C_noret;
static void C_ccall trf_3520(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3520(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3527)
static void C_ccall trf_3527(C_word c,C_word *av) C_noret;
static void C_ccall trf_3527(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3527(t0,t1);}

C_noret_decl(trf_3594)
static void C_ccall trf_3594(C_word c,C_word *av) C_noret;
static void C_ccall trf_3594(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3594(t0,t1,t2);}

C_noret_decl(trf_3640)
static void C_ccall trf_3640(C_word c,C_word *av) C_noret;
static void C_ccall trf_3640(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3640(t0,t1,t2,t3);}

C_noret_decl(trf_3664)
static void C_ccall trf_3664(C_word c,C_word *av) C_noret;
static void C_ccall trf_3664(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3664(t0,t1,t2,t3);}

C_noret_decl(trf_3690)
static void C_ccall trf_3690(C_word c,C_word *av) C_noret;
static void C_ccall trf_3690(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3690(t0,t1,t2);}

C_noret_decl(trf_3751)
static void C_ccall trf_3751(C_word c,C_word *av) C_noret;
static void C_ccall trf_3751(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3751(t0,t1,t2);}

C_noret_decl(trf_3776)
static void C_ccall trf_3776(C_word c,C_word *av) C_noret;
static void C_ccall trf_3776(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3776(t0,t1);}

C_noret_decl(trf_3807)
static void C_ccall trf_3807(C_word c,C_word *av) C_noret;
static void C_ccall trf_3807(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3807(t0,t1,t2);}

C_noret_decl(trf_3841)
static void C_ccall trf_3841(C_word c,C_word *av) C_noret;
static void C_ccall trf_3841(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3841(t0,t1,t2,t3);}

C_noret_decl(trva4348)
static void C_ccall trva4348(C_word c,C_word *av) C_noret;
static void C_ccall trva4348(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
va4348(t0,t1);}

/* k1260 */
static void C_ccall f_1262(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1262,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1263 in k1260 */
static void C_ccall f_1265(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_1265,c,av);}
a=C_alloc(13);
t2=C_a_i_provide(&a,1,lf[0]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3899,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-profile.scm:29: ##sys#with-environment"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[93]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[93]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}

/* k1266 in k1263 in k1260 */
static void C_ccall f_1268(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1268,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_file_toplevel(2,av2);}}

/* k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1271,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1274,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_posix_toplevel(2,av2);}}

/* k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1274(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1274,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_internal_toplevel(2,av2);}}

/* k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1277,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1280,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_data_2dstructures_toplevel(2,av2);}}

/* k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1280(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_1280,c,av);}
a=C_alloc(24);
t2=C_mutate(&lf[1] /* (set! main#take ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1390,tmp=(C_word)a,a+=2,tmp));
t3=lf[2] /* main#file */ =C_SCHEME_FALSE;;
t4=lf[3] /* main#no-unused */ =C_SCHEME_FALSE;;
t5=lf[4] /* main#seconds-digits */ =C_fix(3);;
t6=lf[5] /* main#average-digits */ =C_fix(3);;
t7=lf[6] /* main#percent-digits */ =C_fix(3);;
t8=lf[7] /* main#top */ =C_fix(0);;
t9=C_mutate(&lf[8] /* (set! main#print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2567,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate(&lf[16] /* (set! main#sort-by-calls ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2826,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate(&lf[17] /* (set! main#sort-by-time ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2860,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[18] /* (set! main#sort-by-avg ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2889,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate(&lf[19] /* (set! main#sort-by-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2917,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
t15=C_mutate(&lf[23] /* (set! main#read-profile ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3001,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate(&lf[32] /* (set! main#format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3150,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate(&lf[35] /* (set! main#format-real ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3216,tmp=(C_word)a,a+=2,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3897,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:262: chicken.process-context#command-line-arguments"));
t20=C_fast_retrieve(lf[90]);{
C_word *av2=av;
av2[0]=t20;
av2[1]=t19;
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* main#take in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_1390(C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_1390,3,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_fixnum_less_or_equal_p(t3,C_fix(0)))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1408,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:56: take"));
t7=t5;
t8=C_u_i_cdr(t2);
t9=C_fixnum_difference(t3,C_fix(1));
t1=t7;
t2=t8;
t3=t9;
goto loop;}}

/* k1406 in main#take in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1408,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr290 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_1900(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_1900,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1929,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t4;
t7=C_slot(t2,C_fix(1));
t1=t6;
t2=t7;
goto loop;}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k1927 in foldr290 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_1929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_1929,c,av);}
a=C_alloc(3);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_greaterp(t2,C_fix(0));
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_a_i_cons(&a,2,((C_word*)t0)[2],t1):t1);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* main#print-usage in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_2567(C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,0,2)))){
C_save_and_reclaim_args((void *)trf_2567,1,t1);}
a=C_alloc(27);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2578,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[11],C_SCHEME_END_OF_LIST);
t5=C_a_i_cons(&a,2,C_retrieve2(lf[6],C_text("main#percent-digits")),t4);
t6=C_a_i_cons(&a,2,lf[12],t5);
t7=C_a_i_cons(&a,2,C_retrieve2(lf[5],C_text("main#average-digits")),t6);
t8=C_a_i_cons(&a,2,lf[13],t7);
t9=C_a_i_cons(&a,2,C_retrieve2(lf[4],C_text("main#seconds-digits")),t8);
t10=C_a_i_cons(&a,2,lf[14],t9);
C_trace(C_text("chicken-profile.scm:29: ##sys#print-to-string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=t10;
tp(3,av2);}}

/* k2569 in main#print-usage in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2571(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2571,c,av);}
C_trace(C_text("chicken-profile.scm:76: chicken.base#exit"));
t2=C_fast_retrieve(lf[9]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=C_fix(64);
((C_proc)(void*)(*((C_word*)t2+1)))(3,av2);}}

/* k2576 in main#print-usage in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2578,c,av);}
C_trace(C_text("chicken-profile.scm:55: scheme#display"));
t2=*((C_word*)lf[10]+1);{
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

/* loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_2614(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,0,3)))){
C_save_and_reclaim_args((void *)trf_2614,3,t0,t1,t2);}
a=C_alloc(23);
if(C_truep(C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2624,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
t4=t3;
f_2624(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2631,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:84: chicken.file#glob"));
t5=C_fast_retrieve(lf[68]);{
C_word av2[3];
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[69];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}}
else{
t3=C_i_car(t2);
t4=C_u_i_cdr(t2);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2664,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t10=t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2683,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_truep(C_i_equalp(t3,lf[73]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[74]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t3,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
C_trace(C_text("chicken-profile.scm:104: print-usage"));
f_2567(t11);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[76]))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2723,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2730,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:106: chicken.platform#chicken-version"));
t14=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_i_string_equal_p(t3,lf[79]))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2738,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2745,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:109: chicken.platform#chicken-version"));
t14=C_fast_retrieve(lf[78]);{
C_word av2[2];
av2[0]=t14;
av2[1]=t13;
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
if(C_truep(C_i_string_equal_p(t3,lf[80]))){
t12=lf[3] /* main#no-unused */ =C_SCHEME_TRUE;;
C_trace(C_text("chicken-profile.scm:122: loop"));
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[81]))){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2760,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-profile.scm:112: next-number"));
t13=t8;
f_2683(t13,t12);}
else{
if(C_truep(C_i_string_equal_p(t3,lf[82]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[16],C_text("main#sort-by-calls")));
C_trace(C_text("chicken-profile.scm:122: loop"));
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[83]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[17],C_text("main#sort-by-time")));
C_trace(C_text("chicken-profile.scm:122: loop"));
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[84]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[18],C_text("main#sort-by-avg")));
C_trace(C_text("chicken-profile.scm:122: loop"));
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep(C_i_string_equal_p(t3,lf[85]))){
t12=C_mutate(&lf[22] /* (set! main#sort-by ...) */,C_retrieve2(lf[19],C_text("main#sort-by-name")));
t13=t11;{
C_word av2[2];
av2[0]=t13;
av2[1]=t12;
f_2706(2,av2);}}
else{
if(C_truep(C_i_string_equal_p(t3,lf[86]))){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t5,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-profile.scm:117: next-arg"));
t13=((C_word*)t7)[1];
f_2664(t13,t12);}
else{
t12=C_i_string_length(t3);
t13=C_fixnum_greaterp(t12,C_fix(1));
t14=(C_truep(t13)?C_u_i_char_equalp(C_make_character(45),C_i_string_ref(t3,C_fix(0))):C_SCHEME_FALSE);
if(C_truep(t14)){
C_trace(C_text("chicken-profile.scm:119: chicken.base#error"));
t15=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t15;
av2[1]=t11;
av2[2]=lf[89];
av2[3]=t3;
((C_proc)(void*)(*((C_word*)t15+1)))(4,av2);}}
else{
if(C_truep(C_retrieve2(lf[2],C_text("main#file")))){
C_trace(C_text("chicken-profile.scm:120: print-usage"));
f_2567(t11);}
else{
t15=C_mutate(&lf[2] /* (set! main#file ...) */,t3);
C_trace(C_text("chicken-profile.scm:122: loop"));
t17=t1;
t18=((C_word*)t5)[1];
t1=t17;
t2=t18;
goto loop;}}}}}}}}}}}}}}

/* k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_2624(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_2624,2,t0,t1);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3277,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:205: chicken.base#print"));
t3=*((C_word*)lf[52]+1);{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[63];
av2[3]=C_retrieve2(lf[2],C_text("main#file"));
av2[4]=lf[64];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k2629 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2631(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2631,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t1))){
C_trace(C_text("chicken-profile.scm:86: chicken.base#error"));
t3=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[66];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2649,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("chicken-profile.scm:87: chicken.sort#sort"));
t5=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=t1;
av2[3]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* k2632 in k2629 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2634(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2634,c,av);}
t2=C_mutate(&lf[2] /* (set! main#file ...) */,t1);
t3=((C_word*)t0)[2];
f_2624(t3,t2);}

/* k2645 in k2629 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2647(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2647,c,av);}
t2=C_i_car(t1);
t3=C_mutate(&lf[2] /* (set! main#file ...) */,t2);
t4=((C_word*)t0)[2];
f_2624(t4,t3);}

/* a2648 in k2629 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2649(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2649,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2654,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-profile.scm:89: chicken.file.posix#file-modification-time"));
t5=C_fast_retrieve(lf[67]);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2652 in a2648 in k2629 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2654,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-profile.scm:90: chicken.file.posix#file-modification-time"));
t3=C_fast_retrieve(lf[67]);{
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

/* k2656 in k2652 in a2648 in k2629 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2658(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2658,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_integer_greaterp(((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* next-arg in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_2664(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_2664,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
C_trace(C_text("chicken-profile.scm:96: chicken.base#error"));
t2=*((C_word*)lf[65]+1);{
C_word av2[4];
av2[0]=t2;
av2[1]=t1;
av2[2]=lf[70];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* next-number in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_2683(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_2683,2,t0,t1);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2687,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2703,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:101: next-arg"));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2664(t4,t3);}

/* k2685 in next-number in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2687,c,av);}
if(C_truep(t1)){
if(C_truep(C_i_greaterp(t1,C_fix(0)))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("chicken-profile.scm:102: chicken.base#error"));
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}
else{
C_trace(C_text("chicken-profile.scm:102: chicken.base#error"));
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[71];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2701 in next-number in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2703(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2703,c,av);}
C_trace(C_text("chicken-profile.scm:101: scheme#string->number"));
t2=*((C_word*)lf[72]+1);{
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

/* k2704 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2706(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2706,c,av);}
C_trace(C_text("chicken-profile.scm:122: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_2614(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2721 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2723,c,av);}
C_trace(C_text("chicken-profile.scm:107: chicken.base#exit"));
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2728 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2730,c,av);}
C_trace(C_text("chicken-profile.scm:106: chicken.base#print"));
t2=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[77];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* k2736 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2738,c,av);}
C_trace(C_text("chicken-profile.scm:110: chicken.base#exit"));
t2=C_fast_retrieve(lf[9]);{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2743 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2745,c,av);}
C_trace(C_text("chicken-profile.scm:109: chicken.base#print"));
t2=*((C_word*)lf[52]+1);{
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

/* k2758 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2760,c,av);}
t2=C_mutate(&lf[7] /* (set! main#top ...) */,t1);
C_trace(C_text("chicken-profile.scm:122: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_2614(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* k2794 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2796(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2796,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2943,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_i_string_length(t1);
t4=C_eqp(t3,C_fix(3));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-profile.scm:159: arg-digit"));
t6=t2;
f_2943(t6,t5,C_fix(0));}
else{
C_trace(C_text("chicken-profile.scm:162: chicken.base#error"));
t5=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=((C_word*)t0)[5];
av2[2]=lf[88];
av2[3]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}}

/* main#sort-by-calls in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2826(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2826,c,av);}
t4=C_i_cadr(t2);
t5=C_i_cadr(t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(C_i_eqvp(t4,t5))?C_i_greaterp(C_i_caddr(t2),C_i_caddr(t3)):(C_truep(t4)?(C_truep(t5)?C_i_greaterp(t4,t5):C_SCHEME_TRUE):C_SCHEME_TRUE));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* main#sort-by-time in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2860(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2860,c,av);}
t4=C_i_caddr(t2);
t5=C_i_caddr(t3);
t6=C_i_nequalp(t4,t5);
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(C_truep(t6)?C_i_greaterp(C_i_cadr(t2),C_i_cadr(t3)):C_i_greaterp(t4,t5));
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}

/* main#sort-by-avg in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2889(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2889,c,av);}
t4=C_i_cadddr(t2);
t5=C_i_cadddr(t3);
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=(C_truep(C_i_eqvp(t4,t5))?C_i_greaterp(C_i_caddr(t2),C_i_caddr(t3)):C_i_greaterp(t4,t5));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}

/* main#sort-by-name in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2917(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2917,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2925,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-profile.scm:146: scheme#symbol->string"));
t5=*((C_word*)lf[21]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_car(t2);
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k2923 in main#sort-by-name in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2925,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2929,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-profile.scm:146: scheme#symbol->string"));
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_car(((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k2927 in k2923 in main#sort-by-name in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2929(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2929,c,av);}
C_trace(C_text("chicken-profile.scm:146: scheme#string<?"));
t2=*((C_word*)lf[20]+1);{
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

/* arg-digit in k2794 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_2943(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_2943,3,t0,t1,t2);}
a=C_alloc(10);
t3=C_i_string_ref(((C_word*)t0)[2],t2);
t4=C_fix(C_character_code(t3));
t5=C_a_i_fixnum_difference(&a,2,t4,C_fix(48));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2955,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-profile.scm:154: scheme#<="));{
C_word av2[5];
av2[0]=0;
av2[1]=t6;
av2[2]=C_fix(0);
av2[3]=t5;
av2[4]=C_fix(9);
C_less_or_equal_p(5,av2);}}

/* k2953 in arg-digit in k2794 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2955,c,av);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(C_i_integer_equalp(((C_word*)t0)[3],C_fix(9)))?C_fix(8):((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
C_trace(C_text("chicken-profile.scm:156: chicken.base#error"));
t2=*((C_word*)lf[65]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=lf[87];
av2[3]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}}

/* k2975 in k2794 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2977,c,av);}
a=C_alloc(3);
t2=C_mutate(&lf[4] /* (set! main#seconds-digits ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2981,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:160: arg-digit"));
t4=((C_word*)t0)[5];
f_2943(t4,t3,C_fix(1));}

/* k2979 in k2975 in k2794 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2981(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2981,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_mutate(&lf[5] /* (set! main#average-digits ...) */,t1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2985,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-profile.scm:161: arg-digit"));
t5=((C_word*)t2)[5];
f_2943(t5,t4,C_fix(2));}

/* k2983 in k2979 in k2975 in k2794 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_2985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_2985,c,av);}
t2=C_mutate(&lf[6] /* (set! main#percent-digits ...) */,t1);
C_trace(C_text("chicken-profile.scm:122: loop"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_2614(t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);}

/* main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3001(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_3001,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3005,a[2]=t1,a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-profile.scm:165: scheme#make-vector"));
t3=*((C_word*)lf[31]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_fix(3001);
av2[3]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3005,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3008,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:169: scheme#read"));
t4=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3008(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3008,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_i_symbolp(t1);
t4=(C_truep(t3)?t1:lf[24]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3014,a[2]=((C_word*)t2)[2],a[3]=t4,a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3031,a[2]=((C_word*)t2)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_symbolp(t1))){
C_trace(C_text("chicken-profile.scm:171: scheme#read"));
t7=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t7;
av2[1]=t6;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t7=t6;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t1;
f_3031(2,av2);}}}

/* k3012 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3014(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3014,c,av);}
a=C_alloc(10);
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:179: chicken.internal#hash-table-for-each"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[25]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[25]+1);
av2[1]=t4;
av2[2]=t5;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k3015 in k3012 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_3017,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[4])[1]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3021 in k3012 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3022(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_3022,c,av);}
a=C_alloc(6);
t4=((C_word*)((C_word*)t0)[2])[1];
t5=C_a_i_cons(&a,2,t2,t3);
t6=C_a_i_cons(&a,2,t5,t4);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3031(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3031,c,av);}
a=C_alloc(6);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3033,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3033(t5,((C_word*)t0)[3],t1);}

/* doloop646 in k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3033(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3033,3,t0,t1,t2);}
a=C_alloc(17);
if(C_truep(C_eofp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_i_car(t2);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3072,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t7,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("chicken-profile.scm:176: chicken.internal#hash-table-ref"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[4];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t9;
av2[2]=((C_word*)t0)[3];
av2[3]=C_i_car(t2);
tp(4,av2);}}}

/* k3041 in doloop646 in k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3043(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3043,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:171: scheme#read"));
t3=*((C_word*)lf[26]+1);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3048 in k3041 in doloop646 in k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3050,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)((C_word*)t2)[2])[1];
f_3033(t3,((C_word*)t2)[3],t1);}

/* k3070 in doloop646 in k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3072(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3072,c,av);}
a=C_alloc(12);
t2=(C_truep(t1)?t1:lf[27]);
t3=C_i_cdr(((C_word*)t0)[2]);
t4=C_i_check_list_2(t2,lf[28]);
t5=C_i_check_list_2(t3,lf[28]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3087,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3089,a[2]=((C_word*)t0)[6],a[3]=t8,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3089(t10,t6,t2,t3);}

/* k3085 in k3070 in doloop646 in k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3087,c,av);}
C_trace(C_text("chicken-profile.scm:173: chicken.internal#hash-table-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* map-loop651 in k3070 in doloop646 in k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3089(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,0,2)))){
C_save_and_reclaim_args((void *)trf_3089,4,t0,t1,t2,t3);}
a=C_alloc(39);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
if(C_truep(t7)){
if(C_truep(t8)){
t9=C_s_a_i_plus(&a,2,t7,t8);
t10=t6;
f_3099(t10,C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST));}
else{
t9=t6;
f_3099(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t9=t6;
f_3099(t9,C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST));}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3097 in map-loop651 in k3070 in doloop646 in k3029 in k3006 in k3003 in main#read-profile in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3099(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,3)))){
C_save_and_reclaim_args((void *)trf_3099,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t4=((C_word*)((C_word*)t0)[3])[1];
f_3089(t4,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* main#format-string in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3150(C_word c,C_word *av){
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
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3150,c,av);}
a=C_alloc(5);
t4=C_rest_nullp(c,4);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_get_rest_arg(c,4,av,4,t0));
t6=C_rest_nullp(c,4);
t7=C_rest_nullp(c,5);
t8=(C_truep(t7)?C_make_character(32):C_get_rest_arg(c,5,av,4,t0));
t9=C_rest_nullp(c,5);
t10=C_i_string_length(t2);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3169,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=C_fixnum_difference(t3,t10);
C_trace(C_text("chicken-profile.scm:187: scheme#make-string"));
t13=*((C_word*)lf[34]+1);{
C_word *av2=av;
av2[0]=t13;
av2[1]=t11;
av2[2]=C_i_fixnum_max(C_fix(0),t12);
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t13+1)))(4,av2);}}

/* k3167 in main#format-string in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3169,c,av);}
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}
else{
C_trace(C_text("##sys#string-append"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t1;
tp(4,av2);}}}

/* main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3216(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3216,3,t1,t2,t3);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3220,a[2]=t3,a[3]=t1,a[4]=t2,a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3271,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:193: scheme#truncate"));
t6=*((C_word*)lf[42]+1);{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3218 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3220(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3220,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#number->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3225 in k3218 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3227(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(48,c,2)))){
C_save_and_reclaim((void *)f_3227,c,av);}
a=C_alloc(48);
t2=((C_word*)t0)[2];
t3=C_i_greaterp(((C_word*)t2)[2],C_fix(0));
t4=(C_truep(t3)?lf[36]:lf[37]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3235,a[2]=((C_word*)t2)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3239,a[2]=((C_word*)t2)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3247,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)va4348,a[2]=t8,a[3]=((C_word*)t2)[2],tmp=(C_word)a,a+=4,tmp);
t10=t9;
va4348(t10,C_s_a_i_minus(&a,2,((C_word*)t2)[4],((C_word*)t2)[5]));}

/* k3233 in k3225 in k3218 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3235(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3235,c,av);}
C_trace(C_text("chicken-profile.scm:194: scheme#string-append"));
t2=*((C_word*)lf[38]+1);{
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

/* k3237 in k3225 in k3218 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3239(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_3239,c,av);}
a=C_alloc(29);
t2=C_s_a_i_plus(&a,2,((C_word*)t0)[2],C_fix(1));
C_trace(C_text("chicken-profile.scm:197: scheme#substring"));
t3=*((C_word*)lf[39]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_fix(1);
av2[4]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3245 in k3225 in k3218 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3247(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3247,c,av);}
C_trace(C_text("##sys#number->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_fix(10);
tp(4,av2);}}

/* k3249 in k3225 in k3218 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3251(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3251,c,av);}
C_trace(C_text("chicken-profile.scm:199: scheme#inexact->exact"));
t2=*((C_word*)lf[41]+1);{
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

/* k3261 */
static void C_ccall f_3263(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3263,c,av);}
a=C_alloc(33);
t2=C_s_a_i_times(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("chicken-profile.scm:200: scheme#truncate"));
t3=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3269 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3271(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3271,c,av);}
C_trace(C_text("chicken-profile.scm:193: scheme#inexact->exact"));
t2=*((C_word*)lf[41]+1);{
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

/* k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3277(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3277,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3280,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:206: scheme#with-input-from-file"));
t3=C_fast_retrieve(lf[62]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_retrieve2(lf[2],C_text("main#file"));
av2[3]=C_retrieve2(lf[23],C_text("main#read-profile"));
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3280(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3280,c,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=C_u_i_cdr(t1);
t4=C_eqp(t2,lf[24]);
t5=(C_truep(t4)?(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3867,tmp=(C_word)a,a+=2,tmp):(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3876,tmp=(C_word)a,a+=2,tmp));
t6=C_i_check_list_2(t3,lf[46]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3293,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3841,a[2]=t9,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_3841(t11,t7,t3,C_fix(0));}

/* k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3293(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,3)))){
C_save_and_reclaim((void *)f_3293,c,av);}
a=C_alloc(25);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3296,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3751,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3805,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3807,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_3807(t12,t8,((C_word*)t0)[3]);}

/* k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3296(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3296,c,av);}
a=C_alloc(10);
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3299,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3738,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-profile.scm:230: scheme#<"));{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t5;
av2[2]=C_fix(0);
av2[3]=C_retrieve2(lf[7],C_text("main#top"));
av2[4]=C_i_length(((C_word*)t3)[1]);
C_lessp(5,av2);}}

/* k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3299(C_word t0,C_word t1){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3299,2,t0,t1);}
a=C_alloc(16);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve2(lf[3],C_text("main#no-unused")))){
t7=((C_word*)((C_word*)t0)[2])[1];
t8=C_i_check_list_2(t7,lf[59]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1900,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t12=((C_word*)t10)[1];
f_1900(t12,t6,t7);}
else{
t7=t6;{
C_word av2[2];
av2[0]=t7;
av2[1]=((C_word*)((C_word*)t0)[2])[1];
f_3366(2,av2);}}}

/* k3322 in map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3324,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3328,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_not(((C_word*)t0)[9]))){
t3=t2;{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[57];
f_3328(2,av2);}}
else{
C_trace(C_text("##sys#number->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[40]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[40]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(10);
tp(4,av2);}}}

/* k3326 in k3322 in map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3328(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3328,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3350,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#/-2"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3330 in k3326 in k3322 in map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3332(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3332,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3344,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#/-2"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[9];
av2[3]=C_fix(1000);
tp(4,av2);}}

/* k3334 in k3330 in k3326 in k3322 in map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3336,c,av);}
a=C_alloc(10);
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("chicken-profile.scm:241: format-real"));
f_3216(t2,((C_word*)t0)[9],C_retrieve2(lf[6],C_text("main#percent-digits")));}

/* k3338 in k3334 in k3330 in k3326 in k3322 in map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3340(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3340,c,av);}
a=C_alloc(18);
t2=C_a_i_list5(&a,5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],t1);
t3=C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=((C_word*)((C_word*)t0)[7])[1];
f_3690(t6,((C_word*)t0)[8],C_slot(((C_word*)t0)[9],C_fix(1)));}

/* k3342 in k3330 in k3326 in k3322 in map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3344,c,av);}
C_trace(C_text("chicken-profile.scm:240: format-real"));
f_3216(((C_word*)t0)[2],t1,C_retrieve2(lf[5],C_text("main#average-digits")));}

/* k3348 in k3326 in k3322 in map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3350,c,av);}
C_trace(C_text("chicken-profile.scm:239: format-real"));
f_3216(((C_word*)t0)[2],t1,C_retrieve2(lf[4],C_text("main#seconds-digits")));}

/* k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3366(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,3)))){
C_save_and_reclaim((void *)f_3366,c,av);}
a=C_alloc(13);
t2=C_i_check_list_2(t1,lf[28]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3372,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3690,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3690(t7,t3,t1);}

/* k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3372(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_3372,c,av);}
a=C_alloc(33);
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=C_a_i_list5(&a,5,lf[47],lf[48],lf[49],lf[50],lf[51]);
t4=C_mutate(((C_word *)t0)+2,t3);
t5=C_a_i_list5(&a,5,C_SCHEME_FALSE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE,C_SCHEME_TRUE);
t6=C_mutate(((C_word *)t0)+4,t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#make-string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[55]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[55]+1);
av2[1]=t7;
av2[2]=C_fix(2);
av2[3]=C_make_character(32);
tp(4,av2);}}

/* k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3381(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(30,c,4)))){
C_save_and_reclaim((void *)f_3381,c,av);}
a=C_alloc(30);
t2=((C_word*)t0)[2];
t3=C_a_i_list5(&a,5,C_fix(0),C_fix(0),C_fix(0),C_fix(0),C_fix(0));
t4=C_a_i_cons(&a,2,((C_word*)t2)[2],((C_word*)((C_word*)t2)[3])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3495,a[2]=t1,a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[2],tmp=(C_word)a,a+=7,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3664,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3664(t9,t5,t4,t3);}

/* k3396 in foldl825 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3398(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3398,c,av);}
a=C_alloc(7);
t2=C_i_check_list_2(t1,lf[28]);
t3=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3409,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3409(t7,((C_word*)t0)[5],t1,((C_word*)t0)[2]);}

/* map-loop833 in k3396 in foldl825 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3409(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,3)))){
C_save_and_reclaim_args((void *)trf_3409,4,t0,t1,t2,t3);}
a=C_alloc(7);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("chicken-profile.scm:251: g839"));
t7=*((C_word*)lf[45]+1);{
C_word av2[4];
av2[0]=t7;
av2[1]=t6;
av2[2]=C_slot(t2,C_fix(0));
av2[3]=C_slot(t3,C_fix(0));
((C_proc)(void*)(*((C_word*)t7+1)))(4,av2);}}
else{
t6=t1;{
C_word av2[2];
av2[0]=t6;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3436 in map-loop833 in k3396 in foldl825 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void C_ccall f_3438(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3438,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3409(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)));}

/* map-loop854 in foldl825 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3457(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_3457,3,t0,t1,t2);}
a=C_alloc(3);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_string_length(t3);
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

/* k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3495(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,3)))){
C_save_and_reclaim((void *)f_3495,c,av);}
a=C_alloc(12);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3497,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("chicken-profile.scm:256: print-row"));
t4=t2;
f_3497(t4,t3,((C_word*)t0)[6]);}

/* print-row in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3497(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,0,5)))){
C_save_and_reclaim_args((void *)trf_3497,3,t0,t1,t2);}
a=C_alloc(19);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3505,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=C_retrieve2(lf[32],C_text("main#format-string"));
t9=C_i_check_list_2(t2,lf[28]);
t10=C_i_check_list_2(((C_word*)t0)[2],lf[28]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3518,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3520,a[2]=t6,a[3]=t13,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_3520(t15,t11,t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3503 in print-row in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3505(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3505,c,av);}
C_trace(C_text("chicken-profile.scm:255: chicken.base#print"));
t2=*((C_word*)lf[52]+1);{
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

/* k3516 in print-row in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3518,c,av);}
C_trace(C_text("chicken-profile.scm:255: chicken.string#string-intersperse"));
t2=C_fast_retrieve(lf[53]);{
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

/* map-loop908 in print-row in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3520(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3520,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_3527(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_3527(t6,C_SCHEME_FALSE);}}

/* k3525 in map-loop908 in print-row in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void f_3527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3527,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("chicken-profile.scm:255: g914"));
t3=C_retrieve2(lf[32],C_text("main#format-string"));{
C_word av2[5];
av2[0]=t3;
av2[1]=t2;
av2[2]=C_slot(((C_word*)t0)[5],C_fix(0));
av2[3]=C_slot(((C_word*)t0)[6],C_fix(0));
av2[4]=C_slot(((C_word*)t0)[7],C_fix(0));
f_3150(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_slot(((C_word*)t0)[8],C_fix(1));
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3551 in k3525 in map-loop908 in print-row in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_3553(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3553,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3520(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)),C_slot(((C_word*)t0)[6],C_fix(1)),C_slot(((C_word*)t0)[7],C_fix(1)));}

/* k3581 in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3583(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_3583,c,av);}
a=C_alloc(17);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3619,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_i_check_list_2(((C_word*)t0)[5],lf[46]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3630,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3640,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_3640(t9,t5,((C_word*)t0)[5],C_fix(0));}

/* k3584 in k3581 in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3586(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3586,c,av);}
a=C_alloc(6);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[54]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3594,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3594(t7,((C_word*)t0)[4],t2);}

/* for-each-loop897 in k3584 in k3581 in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 in ... */
static void f_3594(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3594,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3604,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-profile.scm:260: g898"));
t4=((C_word*)t0)[3];
f_3497(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3602 in for-each-loop897 in k3584 in k3581 in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in ... */
static void C_ccall f_3604(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3604,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3594(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3617 in k3581 in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3619(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3619,c,av);}
C_trace(C_text("chicken-profile.scm:257: chicken.base#print"));
t2=*((C_word*)lf[52]+1);{
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

/* k3628 in k3581 in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3630(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_3630,c,av);}
a=C_alloc(39);
t2=C_i_length(((C_word*)t0)[2]);
t3=C_a_i_fixnum_difference(&a,2,t2,C_fix(1));
t4=C_s_a_u_i_integer_times(&a,2,C_fix(2),t3);
t5=C_s_a_i_plus(&a,2,t1,t4);
C_trace(C_text("chicken-profile.scm:257: scheme#make-string"));
t6=*((C_word*)lf[34]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t6;
av2[1]=((C_word*)t0)[3];
av2[2]=t5;
av2[3]=C_make_character(45);
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}

/* foldl948 in k3581 in k3493 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3640(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,0,3)))){
C_save_and_reclaim_args((void *)trf_3640,4,t0,t1,t2,t3);}
a=C_alloc(29);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=C_slot(t2,C_fix(0));
t6=C_s_a_i_plus(&a,2,t3,t5);
t8=t1;
t9=t4;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* foldl825 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3664(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(28,0,3)))){
C_save_and_reclaim_args((void *)trf_3664,4,t0,t1,t2,t3);}
a=C_alloc(28);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3682,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_slot(t2,C_fix(0));
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=C_i_check_list_2(t6,lf[28]);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3398,a[2]=t3,a[3]=t9,a[4]=t10,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3457,a[2]=t13,a[3]=t18,a[4]=t14,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_3457(t20,t16,t6);}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3680 in foldl825 in k3379 in k3370 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3682(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3682,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3664(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* map-loop784 in k3364 in k3297 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3690(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3690,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_i_cadr(t3);
t5=C_i_caddr(t3);
t6=C_i_cadddr(t3);
t7=C_i_cddddr(t3);
t8=C_i_car(t7);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=t8,a[7]=t6,a[8]=t5,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("chicken-profile.scm:237: ##sys#symbol->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[58]);
C_word av2[3];
av2[0]=*((C_word*)lf[58]+1);
av2[1]=t9;
av2[2]=C_i_car(t3);
tp(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3736 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3738,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken-profile.scm:231: take"));
f_1390(t2,((C_word*)((C_word*)t0)[2])[1],C_retrieve2(lf[7],C_text("main#top")));}
else{
t2=((C_word*)t0)[3];
f_3299(t2,C_SCHEME_UNDEFINED);}}

/* k3740 in k3736 in k3294 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3742,c,av);}
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)((C_word*)t2)[2])+1,t1);
t4=((C_word*)t2)[3];
f_3299(t4,t3);}

/* g752 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3751(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_3751,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=C_i_cadr(((C_word*)t0)[3]);
t6=C_i_caddr(((C_word*)t0)[3]);
t7=C_mutate(((C_word *)t0)+5,t6);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3769,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
if(C_truep(C_i_greaterp(t5,C_fix(0)))){
C_trace(C_text("##sys#/-2"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word av2[4];
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
tp(4,av2);}}
else{
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_3769(2,av2);}}}
else{
t9=t8;{
C_word av2[2];
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
f_3769(2,av2);}}}

/* k3767 in g752 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3769(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3769,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=(C_truep(t1)?t1:C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3776,a[2]=t3,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_greaterp(((C_word*)t2)[4],C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3789,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("##sys#/-2"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[56]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t5;
av2[2]=((C_word*)t2)[5];
av2[3]=((C_word*)t2)[4];
tp(4,av2);}}
else{
t5=t4;
f_3776(t5,C_SCHEME_FALSE);}}

/* k3774 in k3767 in g752 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3776(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3776,2,t0,t1);}
a=C_alloc(6);
t2=(C_truep(t1)?C_a_i_list2(&a,2,((C_word*)t0)[2],t1):C_a_i_list2(&a,2,((C_word*)t0)[2],C_fix(0)));
C_trace(C_text("chicken-profile.scm:219: scheme#append"));
t3=*((C_word*)lf[60]+1);{
C_word av2[4];
av2[0]=t3;
av2[1]=((C_word*)t0)[3];
av2[2]=((C_word*)t0)[4];
av2[3]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3787 in k3767 in g752 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,c,1)))){
C_save_and_reclaim((void *)f_3789,c,av);}
a=C_alloc(33);
t2=((C_word*)t0)[2];
f_3776(t2,C_s_a_i_times(&a,2,t1,C_fix(100)));}

/* k3803 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3805,c,av);}
C_trace(C_text("chicken-profile.scm:217: chicken.sort#sort"));
t2=C_fast_retrieve(lf[61]);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_retrieve2(lf[22],C_text("main#sort-by"));
((C_proc)(void*)(*((C_word*)t2+1)))(4,av2);}}

/* map-loop746 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3807(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3807,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("chicken-profile.scm:217: g752"));
t4=((C_word*)t0)[4];
f_3751(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3830 in map-loop746 in k3291 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3832(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3832,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3807(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* foldl729 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void f_3841(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,3)))){
C_save_and_reclaim_args((void *)trf_3841,4,t0,t1,t2,t3);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t4=C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3859,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("chicken-profile.scm:213: g727"));
t6=((C_word*)t0)[3];{
C_word av2[4];
av2[0]=t6;
av2[1]=t5;
av2[2]=t3;
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t6+1)))(4,av2);}}
else{
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3857 in foldl729 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3859,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3841(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* f_3867 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3867,c,av);}
C_trace(C_text("chicken-profile.scm:214: scheme#max"));
t4=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
av2[2]=t2;
av2[3]=C_i_caddr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

/* f_3876 in k3278 in k3275 in k2622 in loop in k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3876(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_3876,c,av);}
a=C_alloc(29);
t4=C_i_caddr(t3);
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_s_a_i_plus(&a,2,t2,t4);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3885 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3887(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3887,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("chicken.base#implicit-exit-handler"));
t3=C_fast_retrieve(lf[44]);{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3891 in k3885 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3893,c,av);}
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3895 in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void C_ccall f_3897(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3897,c,av);}
a=C_alloc(5);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2614,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2614(t5,((C_word*)t0)[2],t1);}

/* a3898 in k1263 in k1260 */
static void C_ccall f_3899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,8)))){
C_save_and_reclaim((void *)f_3899,c,av);}
C_trace(C_text("chicken-profile.scm:29: ##sys#register-compiled-module"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[91]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[91]+1);
av2[1]=t1;
av2[2]=lf[92];
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
if(C_unlikely(!C_demand_2(307))){
C_save(t1);
C_rereclaim2(307*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,94);
lf[0]=C_h_intern(&lf[0],5, C_text("main#"));
lf[9]=C_h_intern(&lf[9],17, C_text("chicken.base#exit"));
lf[10]=C_h_intern(&lf[10],14, C_text("scheme#display"));
lf[11]=C_decode_literal(C_heaptop,C_text("\376\002\000\001\243\051\012\040\055\156\157\055\165\156\165\163\145\144\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\162\145\155\157\166\145\040\160\162\157\143\145\144\165\162\145\163\040\164\150\141\164\040\141\162\145\040\156\145\166\145\162\040\143\141\154\154\145\144\012\040\055\164\157\160\040\116\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\144\151\163\160\154\141\171\040\157\156\154\171\040\164\150\145\040\164\157\160\040\116\040\145\156\164\162\151\145\163\012\040\055\150\145\154\160\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\164\150\151\163\040\164\145\170\164\040\141\156\144\040\145\170\151\164\012\040\055\166\145\162\163\151\157\156\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\166\145\162\163\151\157\156\040\141\156\144\040\145\170\151\164\012\040\055\162\145\154\145\141\163\145\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\150\157\167\040\162\145\154\145\141\163\145\040\156\165\155\142\145\162\040\141\156\144\040\145\170\151\164\012\012\040\106\111\114\105\116\101\115\105\040\144\145\146\141\165\154\164\163\040\164\157\040\164\150\145\040\140\120\122\117\106\111\114\105\056\074\156\165\155\142\145\162\076\047\054\040\163\145\154\145\143\164\151\156\147\040\164\150\145\040\157\156\145\040\167\151\164\150\012\040\164\150\145\040\150\151\147\150\145\163\164\040\155\157\144\151\146\151\143\141\164\151\157\156\040\164\151\155\145\054\040\151\156\040\143\141\163\145\040\155\165\154\164\151\160\154\145\040\160\162\157\146\151\154\145\163\040\145\170\151\163\164\056\012\000"));
lf[12]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[14]=C_decode_literal(C_heaptop,C_text("\376\002\000\001\322\125\163\141\147\145\072\040\143\150\151\143\153\145\156\055\160\162\157\146\151\154\145\040\133\117\120\124\111\117\116\040\056\056\056\135\040\133\106\111\114\105\116\101\115\105\040\056\056\056\135\012\012\040\055\163\157\162\164\055\142\171\055\143\141\154\154\163\040\040\040\040\040\040\040\040\040\040\040\040\163\157\162\164\040\157\165\164\160\165\164\040\142\171\040\143\141\154\154\040\146\162\145\161\165\145\156\143\171\012\040\055\163\157\162\164\055\142\171\055\164\151\155\145\040\040\040\040\040\040\040\040\040\040\040\040\040\163\157\162\164\040\157\165\164\160\165\164\040\142\171\040\160\162\157\143\145\144\165\162\145\040\145\170\145\143\165\164\151\157\156\040\164\151\155\145\012\040\055\163\157\162\164\055\142\171\055\141\166\147\040\040\040\040\040\040\040\040\040\040\040\040\040\040\163\157\162\164\040\157\165\164\160\165\164\040\142\171\040\141\166\145\162\141\147\145\040\160\162\157\143\145\144\165\162\145\040\145\170\145\143\165\164\151\157\156\040\164\151\155\145\012\040\055\163\157\162\164\055\142\171\055\156\141\155\145\040\040\040\040\040\040\040\040\040\040\040\040\040\163\157\162\164\040\157\165\164\160\165\164\040\141\154\160\150\141\142\145\164\151\143\141\154\154\171\040\142\171\040\160\162\157\143\145\144\165\162\145\040\156\141\155\145\012\040\055\144\145\143\151\155\141\154\163\040\104\104\104\040\040\040\040\040\040\040\040\040\040\040\040\040\163\145\164\040\156\165\155\142\145\162\040\157\146\040\144\145\143\151\155\141\154\163\040\146\157\162\040\163\145\143\157\156\144\163\054\040\141\166\145\162\141\147\145\040\141\156\144\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\160\145\162\143\145\156\164\040\143\157\154\165\155\156\163\040\050\164\150\162\145\145\040\144\151\147\151\164\163\054\040\144\145\146\141\165\154\164\072\040\000"));
lf[15]=C_h_intern(&lf[15],21, C_text("##sys#print-to-string"));
lf[20]=C_h_intern(&lf[20],15, C_text("scheme#string<?"));
lf[21]=C_h_intern(&lf[21],21, C_text("scheme#symbol->string"));
lf[24]=C_h_intern(&lf[24],12, C_text("instrumented"));
lf[25]=C_h_intern(&lf[25],36, C_text("chicken.internal#hash-table-for-each"));
lf[26]=C_h_intern(&lf[26],11, C_text("scheme#read"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\000\376\377\016"));
lf[28]=C_h_intern(&lf[28],3, C_text("map"));
lf[29]=C_h_intern(&lf[29],32, C_text("chicken.internal#hash-table-set!"));
lf[30]=C_h_intern(&lf[30],31, C_text("chicken.internal#hash-table-ref"));
lf[31]=C_h_intern(&lf[31],18, C_text("scheme#make-vector"));
lf[33]=C_h_intern(&lf[33],19, C_text("##sys#string-append"));
lf[34]=C_h_intern(&lf[34],18, C_text("scheme#make-string"));
lf[36]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\056\000"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[38]=C_h_intern(&lf[38],20, C_text("scheme#string-append"));
lf[39]=C_h_intern(&lf[39],16, C_text("scheme#substring"));
lf[40]=C_h_intern(&lf[40],20, C_text("##sys#number->string"));
lf[41]=C_h_intern(&lf[41],21, C_text("scheme#inexact->exact"));
lf[42]=C_h_intern(&lf[42],15, C_text("scheme#truncate"));
lf[43]=C_h_intern(&lf[43],11, C_text("scheme#expt"));
lf[44]=C_h_intern(&lf[44],34, C_text("chicken.base#implicit-exit-handler"));
lf[45]=C_h_intern(&lf[45],10, C_text("scheme#max"));
lf[46]=C_h_intern(&lf[46],5, C_text("foldl"));
lf[47]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\160\162\157\143\145\144\165\162\145\000"));
lf[48]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\143\141\154\154\163\000"));
lf[49]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\163\145\143\157\156\144\163\000"));
lf[50]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\141\166\145\162\141\147\145\000"));
lf[51]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\160\145\162\143\145\156\164\000"));
lf[52]=C_h_intern(&lf[52],18, C_text("chicken.base#print"));
lf[53]=C_h_intern(&lf[53],33, C_text("chicken.string#string-intersperse"));
lf[54]=C_h_intern(&lf[54],8, C_text("for-each"));
lf[55]=C_h_intern(&lf[55],17, C_text("##sys#make-string"));
lf[56]=C_h_intern(&lf[56],9, C_text("##sys#/-2"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\157\166\145\162\146\154\157\167\000"));
lf[58]=C_h_intern(&lf[58],20, C_text("##sys#symbol->string"));
lf[59]=C_h_intern(&lf[59],5, C_text("foldr"));
lf[60]=C_h_intern(&lf[60],13, C_text("scheme#append"));
lf[61]=C_h_intern(&lf[61],17, C_text("chicken.sort#sort"));
lf[62]=C_h_intern(&lf[62],27, C_text("scheme#with-input-from-file"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\162\145\141\144\151\156\147\040\140\000"));
lf[64]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\047\040\056\056\056\012\000"));
lf[65]=C_h_intern(&lf[65],18, C_text("chicken.base#error"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\156\157\040\120\122\117\106\111\114\105\163\040\146\157\165\156\144\000"));
lf[67]=C_h_intern(&lf[67],41, C_text("chicken.file.posix#file-modification-time"));
lf[68]=C_h_intern(&lf[68],17, C_text("chicken.file#glob"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\120\122\117\106\111\114\105\056\052\000"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\155\151\163\163\151\156\147\040\141\162\147\165\155\145\156\164\040\164\157\040\157\160\164\151\157\156\000"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\164\157\040\157\160\164\151\157\156\000"));
lf[72]=C_h_intern(&lf[72],21, C_text("scheme#string->number"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\055\150\000"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\055\150\145\154\160\000"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\055\055\150\145\154\160\000"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\166\145\162\163\151\157\156\000"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\143\150\151\143\153\145\156\055\160\162\157\146\151\154\145\040\055\040\126\145\162\163\151\157\156\040\000"));
lf[78]=C_h_intern(&lf[78],32, C_text("chicken.platform#chicken-version"));
lf[79]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\055\162\145\154\145\141\163\145\000"));
lf[80]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\055\156\157\055\165\156\165\163\145\144\000"));
lf[81]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\005\055\164\157\160\000"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\055\163\157\162\164\055\142\171\055\143\141\154\154\163\000"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\163\157\162\164\055\142\171\055\164\151\155\145\000"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\055\163\157\162\164\055\142\171\055\141\166\147\000"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\055\163\157\162\164\055\142\171\055\156\141\155\145\000"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\055\144\145\143\151\155\141\154\163\000"));
lf[87]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\164\157\040\055\144\145\143\151\155\141\154\163\040\157\160\164\151\157\156\000"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\151\156\166\141\154\151\144\040\141\162\147\165\155\145\156\164\040\164\157\040\055\144\145\143\151\155\141\154\163\040\157\160\164\151\157\156\000"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\151\156\166\141\154\151\144\040\157\160\164\151\157\156\000"));
lf[90]=C_h_intern(&lf[90],46, C_text("chicken.process-context#command-line-arguments"));
lf[91]=C_h_intern(&lf[91],30, C_text("##sys#register-compiled-module"));
lf[92]=C_h_intern(&lf[92],4, C_text("main"));
lf[93]=C_h_intern(&lf[93],22, C_text("##sys#with-environment"));
C_register_lf2(lf,94,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1262,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

/* va4348 in k3225 in k3218 in main#format-real in k1278 in k1275 in k1272 in k1269 in k1266 in k1263 in k1260 */
static void va4348(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,3)))){
C_save_and_reclaim_args((void *)trva4348,2,t0,t1);}
a=C_alloc(33);
t2=C_s_a_i_minus(&a,2,t1,C_fix(-1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3263,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("chicken-profile.scm:201: scheme#expt"));
t4=*((C_word*)lf[43]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_fix(10);
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[125] = {
{C_text("f_1262:chicken_2dprofile_2escm"),(void*)f_1262},
{C_text("f_1265:chicken_2dprofile_2escm"),(void*)f_1265},
{C_text("f_1268:chicken_2dprofile_2escm"),(void*)f_1268},
{C_text("f_1271:chicken_2dprofile_2escm"),(void*)f_1271},
{C_text("f_1274:chicken_2dprofile_2escm"),(void*)f_1274},
{C_text("f_1277:chicken_2dprofile_2escm"),(void*)f_1277},
{C_text("f_1280:chicken_2dprofile_2escm"),(void*)f_1280},
{C_text("f_1390:chicken_2dprofile_2escm"),(void*)f_1390},
{C_text("f_1408:chicken_2dprofile_2escm"),(void*)f_1408},
{C_text("f_1900:chicken_2dprofile_2escm"),(void*)f_1900},
{C_text("f_1929:chicken_2dprofile_2escm"),(void*)f_1929},
{C_text("f_2567:chicken_2dprofile_2escm"),(void*)f_2567},
{C_text("f_2571:chicken_2dprofile_2escm"),(void*)f_2571},
{C_text("f_2578:chicken_2dprofile_2escm"),(void*)f_2578},
{C_text("f_2614:chicken_2dprofile_2escm"),(void*)f_2614},
{C_text("f_2624:chicken_2dprofile_2escm"),(void*)f_2624},
{C_text("f_2631:chicken_2dprofile_2escm"),(void*)f_2631},
{C_text("f_2634:chicken_2dprofile_2escm"),(void*)f_2634},
{C_text("f_2647:chicken_2dprofile_2escm"),(void*)f_2647},
{C_text("f_2649:chicken_2dprofile_2escm"),(void*)f_2649},
{C_text("f_2654:chicken_2dprofile_2escm"),(void*)f_2654},
{C_text("f_2658:chicken_2dprofile_2escm"),(void*)f_2658},
{C_text("f_2664:chicken_2dprofile_2escm"),(void*)f_2664},
{C_text("f_2683:chicken_2dprofile_2escm"),(void*)f_2683},
{C_text("f_2687:chicken_2dprofile_2escm"),(void*)f_2687},
{C_text("f_2703:chicken_2dprofile_2escm"),(void*)f_2703},
{C_text("f_2706:chicken_2dprofile_2escm"),(void*)f_2706},
{C_text("f_2723:chicken_2dprofile_2escm"),(void*)f_2723},
{C_text("f_2730:chicken_2dprofile_2escm"),(void*)f_2730},
{C_text("f_2738:chicken_2dprofile_2escm"),(void*)f_2738},
{C_text("f_2745:chicken_2dprofile_2escm"),(void*)f_2745},
{C_text("f_2760:chicken_2dprofile_2escm"),(void*)f_2760},
{C_text("f_2796:chicken_2dprofile_2escm"),(void*)f_2796},
{C_text("f_2826:chicken_2dprofile_2escm"),(void*)f_2826},
{C_text("f_2860:chicken_2dprofile_2escm"),(void*)f_2860},
{C_text("f_2889:chicken_2dprofile_2escm"),(void*)f_2889},
{C_text("f_2917:chicken_2dprofile_2escm"),(void*)f_2917},
{C_text("f_2925:chicken_2dprofile_2escm"),(void*)f_2925},
{C_text("f_2929:chicken_2dprofile_2escm"),(void*)f_2929},
{C_text("f_2943:chicken_2dprofile_2escm"),(void*)f_2943},
{C_text("f_2955:chicken_2dprofile_2escm"),(void*)f_2955},
{C_text("f_2977:chicken_2dprofile_2escm"),(void*)f_2977},
{C_text("f_2981:chicken_2dprofile_2escm"),(void*)f_2981},
{C_text("f_2985:chicken_2dprofile_2escm"),(void*)f_2985},
{C_text("f_3001:chicken_2dprofile_2escm"),(void*)f_3001},
{C_text("f_3005:chicken_2dprofile_2escm"),(void*)f_3005},
{C_text("f_3008:chicken_2dprofile_2escm"),(void*)f_3008},
{C_text("f_3014:chicken_2dprofile_2escm"),(void*)f_3014},
{C_text("f_3017:chicken_2dprofile_2escm"),(void*)f_3017},
{C_text("f_3022:chicken_2dprofile_2escm"),(void*)f_3022},
{C_text("f_3031:chicken_2dprofile_2escm"),(void*)f_3031},
{C_text("f_3033:chicken_2dprofile_2escm"),(void*)f_3033},
{C_text("f_3043:chicken_2dprofile_2escm"),(void*)f_3043},
{C_text("f_3050:chicken_2dprofile_2escm"),(void*)f_3050},
{C_text("f_3072:chicken_2dprofile_2escm"),(void*)f_3072},
{C_text("f_3087:chicken_2dprofile_2escm"),(void*)f_3087},
{C_text("f_3089:chicken_2dprofile_2escm"),(void*)f_3089},
{C_text("f_3099:chicken_2dprofile_2escm"),(void*)f_3099},
{C_text("f_3150:chicken_2dprofile_2escm"),(void*)f_3150},
{C_text("f_3169:chicken_2dprofile_2escm"),(void*)f_3169},
{C_text("f_3216:chicken_2dprofile_2escm"),(void*)f_3216},
{C_text("f_3220:chicken_2dprofile_2escm"),(void*)f_3220},
{C_text("f_3227:chicken_2dprofile_2escm"),(void*)f_3227},
{C_text("f_3235:chicken_2dprofile_2escm"),(void*)f_3235},
{C_text("f_3239:chicken_2dprofile_2escm"),(void*)f_3239},
{C_text("f_3247:chicken_2dprofile_2escm"),(void*)f_3247},
{C_text("f_3251:chicken_2dprofile_2escm"),(void*)f_3251},
{C_text("f_3263:chicken_2dprofile_2escm"),(void*)f_3263},
{C_text("f_3271:chicken_2dprofile_2escm"),(void*)f_3271},
{C_text("f_3277:chicken_2dprofile_2escm"),(void*)f_3277},
{C_text("f_3280:chicken_2dprofile_2escm"),(void*)f_3280},
{C_text("f_3293:chicken_2dprofile_2escm"),(void*)f_3293},
{C_text("f_3296:chicken_2dprofile_2escm"),(void*)f_3296},
{C_text("f_3299:chicken_2dprofile_2escm"),(void*)f_3299},
{C_text("f_3324:chicken_2dprofile_2escm"),(void*)f_3324},
{C_text("f_3328:chicken_2dprofile_2escm"),(void*)f_3328},
{C_text("f_3332:chicken_2dprofile_2escm"),(void*)f_3332},
{C_text("f_3336:chicken_2dprofile_2escm"),(void*)f_3336},
{C_text("f_3340:chicken_2dprofile_2escm"),(void*)f_3340},
{C_text("f_3344:chicken_2dprofile_2escm"),(void*)f_3344},
{C_text("f_3350:chicken_2dprofile_2escm"),(void*)f_3350},
{C_text("f_3366:chicken_2dprofile_2escm"),(void*)f_3366},
{C_text("f_3372:chicken_2dprofile_2escm"),(void*)f_3372},
{C_text("f_3381:chicken_2dprofile_2escm"),(void*)f_3381},
{C_text("f_3398:chicken_2dprofile_2escm"),(void*)f_3398},
{C_text("f_3409:chicken_2dprofile_2escm"),(void*)f_3409},
{C_text("f_3438:chicken_2dprofile_2escm"),(void*)f_3438},
{C_text("f_3457:chicken_2dprofile_2escm"),(void*)f_3457},
{C_text("f_3495:chicken_2dprofile_2escm"),(void*)f_3495},
{C_text("f_3497:chicken_2dprofile_2escm"),(void*)f_3497},
{C_text("f_3505:chicken_2dprofile_2escm"),(void*)f_3505},
{C_text("f_3518:chicken_2dprofile_2escm"),(void*)f_3518},
{C_text("f_3520:chicken_2dprofile_2escm"),(void*)f_3520},
{C_text("f_3527:chicken_2dprofile_2escm"),(void*)f_3527},
{C_text("f_3553:chicken_2dprofile_2escm"),(void*)f_3553},
{C_text("f_3583:chicken_2dprofile_2escm"),(void*)f_3583},
{C_text("f_3586:chicken_2dprofile_2escm"),(void*)f_3586},
{C_text("f_3594:chicken_2dprofile_2escm"),(void*)f_3594},
{C_text("f_3604:chicken_2dprofile_2escm"),(void*)f_3604},
{C_text("f_3619:chicken_2dprofile_2escm"),(void*)f_3619},
{C_text("f_3630:chicken_2dprofile_2escm"),(void*)f_3630},
{C_text("f_3640:chicken_2dprofile_2escm"),(void*)f_3640},
{C_text("f_3664:chicken_2dprofile_2escm"),(void*)f_3664},
{C_text("f_3682:chicken_2dprofile_2escm"),(void*)f_3682},
{C_text("f_3690:chicken_2dprofile_2escm"),(void*)f_3690},
{C_text("f_3738:chicken_2dprofile_2escm"),(void*)f_3738},
{C_text("f_3742:chicken_2dprofile_2escm"),(void*)f_3742},
{C_text("f_3751:chicken_2dprofile_2escm"),(void*)f_3751},
{C_text("f_3769:chicken_2dprofile_2escm"),(void*)f_3769},
{C_text("f_3776:chicken_2dprofile_2escm"),(void*)f_3776},
{C_text("f_3789:chicken_2dprofile_2escm"),(void*)f_3789},
{C_text("f_3805:chicken_2dprofile_2escm"),(void*)f_3805},
{C_text("f_3807:chicken_2dprofile_2escm"),(void*)f_3807},
{C_text("f_3832:chicken_2dprofile_2escm"),(void*)f_3832},
{C_text("f_3841:chicken_2dprofile_2escm"),(void*)f_3841},
{C_text("f_3859:chicken_2dprofile_2escm"),(void*)f_3859},
{C_text("f_3867:chicken_2dprofile_2escm"),(void*)f_3867},
{C_text("f_3876:chicken_2dprofile_2escm"),(void*)f_3876},
{C_text("f_3887:chicken_2dprofile_2escm"),(void*)f_3887},
{C_text("f_3893:chicken_2dprofile_2escm"),(void*)f_3893},
{C_text("f_3897:chicken_2dprofile_2escm"),(void*)f_3897},
{C_text("f_3899:chicken_2dprofile_2escm"),(void*)f_3899},
{C_text("toplevel:chicken_2dprofile_2escm"),(void*)C_toplevel},
{C_text("va4348:chicken_2dprofile_2escm"),(void*)va4348},
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
o|hiding unexported module binding: main#symbol-table-size 
o|hiding unexported module binding: main#sort-by 
o|hiding unexported module binding: main#file 
o|hiding unexported module binding: main#no-unused 
o|hiding unexported module binding: main#seconds-digits 
o|hiding unexported module binding: main#average-digits 
o|hiding unexported module binding: main#percent-digits 
o|hiding unexported module binding: main#top 
o|hiding unexported module binding: main#print-usage 
o|hiding unexported module binding: main#run 
o|hiding unexported module binding: main#sort-by-calls 
o|hiding unexported module binding: main#sort-by-time 
o|hiding unexported module binding: main#sort-by-avg 
o|hiding unexported module binding: main#sort-by-name 
o|hiding unexported module binding: main#set-decimals 
o|hiding unexported module binding: main#make-symbol-table 
o|hiding unexported module binding: main#read-profile 
o|hiding unexported module binding: main#format-string 
o|hiding unexported module binding: main#format-real 
o|hiding unexported module binding: main#write-profile 
S|applied compiler syntax:
S|  scheme#for-each		1
S|  chicken.base#foldl		6
S|  scheme#map		9
S|  chicken.base#foldr		3
o|eliminated procedure checks: 64 
o|folded constant expression: (scheme#char->integer (quote #\0)) 
o|specializations:
o|  1 (scheme#* integer integer)
o|  1 (scheme#make-string fixnum char)
o|  4 (scheme#/ * *)
o|  3 (scheme#number->string *)
o|  2 (scheme#string-append string string)
o|  1 (scheme#= fixnum fixnum)
o|  1 (scheme#= integer integer)
o|  2 (scheme#- fixnum fixnum)
o|  1 (scheme#char=? char char)
o|  1 (scheme#string-ref string fixnum)
o|  1 (scheme#> fixnum fixnum)
o|  9 (scheme#string=? * *)
o|  1 (scheme#> integer integer)
o|  3 (scheme#eqv? * *)
o|  6 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  7 (scheme#car pair)
(o e)|safe calls: 418 
(o e)|assignments to immediate values: 5 
o|dropping redundant toplevel assignment: main#sort-by 
o|removed side-effect free assignment to unused variable: main#partition 
o|removed side-effect free assignment to unused variable: main#span 
o|inlining procedure: k1392 
o|inlining procedure: k1392 
o|removed side-effect free assignment to unused variable: main#drop 
o|removed side-effect free assignment to unused variable: main#split-at 
o|removed side-effect free assignment to unused variable: main#append-map 
o|inlining procedure: k1662 
o|inlining procedure: k1662 
o|inlining procedure: k1693 
o|inlining procedure: k1693 
o|removed side-effect free assignment to unused variable: main#cons* 
o|removed side-effect free assignment to unused variable: main#concatenate 
o|removed side-effect free assignment to unused variable: main#delete-duplicates 
o|inlining procedure: k1910 
o|inlining procedure: k1910 
o|inlining procedure: k1902 
o|inlining procedure: k1902 
o|removed side-effect free assignment to unused variable: main#filter-map 
o|removed side-effect free assignment to unused variable: main#remove 
o|removed side-effect free assignment to unused variable: main#unzip1 
o|removed side-effect free assignment to unused variable: main#last 
o|removed side-effect free assignment to unused variable: main#list-index 
o|removed side-effect free assignment to unused variable: main#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: main#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: main#lset-union/eq? 
o|removed side-effect free assignment to unused variable: main#lset-intersection/eq? 
o|inlining procedure: k2301 
o|inlining procedure: k2301 
o|removed side-effect free assignment to unused variable: main#lset<=/eq? 
o|removed side-effect free assignment to unused variable: main#lset=/eq? 
o|removed side-effect free assignment to unused variable: main#length+ 
o|removed side-effect free assignment to unused variable: main#find 
o|removed side-effect free assignment to unused variable: main#find-tail 
o|removed side-effect free assignment to unused variable: main#iota 
o|removed side-effect free assignment to unused variable: main#make-list 
o|removed side-effect free assignment to unused variable: main#posq 
o|removed side-effect free assignment to unused variable: main#posv 
o|inlining procedure: k2834 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: "(chicken-profile.scm:128) main#third" 
o|inlining procedure: k2834 
o|inlining procedure: k2853 
o|inlining procedure: k2853 
o|inlining procedure: "(chicken-profile.scm:126) main#second" 
o|inlining procedure: "(chicken-profile.scm:125) main#second" 
o|inlining procedure: k2868 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: "(chicken-profile.scm:135) main#second" 
o|inlining procedure: k2868 
o|inlining procedure: "(chicken-profile.scm:133) main#third" 
o|inlining procedure: "(chicken-profile.scm:132) main#third" 
o|inlining procedure: k2897 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: "(chicken-profile.scm:142) main#third" 
o|inlining procedure: k2897 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|inlining procedure: "(chicken-profile.scm:146) main#first" 
o|contracted procedure: "(chicken-profile.scm:181) main#alist-cons" 
o|inlining procedure: k3035 
o|inlining procedure: k3035 
o|inlining procedure: k3091 
o|contracted procedure: "(chicken-profile.scm:175) g657667" 
o|inlining procedure: k3061 
o|inlining procedure: k3061 
o|inlining procedure: k3091 
o|inlining procedure: "(chicken-profile.scm:176) main#first" 
o|inlining procedure: "(chicken-profile.scm:174) main#first" 
o|contracted procedure: "(chicken-profile.scm:168) main#make-symbol-table" 
o|substituted constant variable: main#symbol-table-size 
o|inlining procedure: k3170 
o|inlining procedure: k3170 
o|contracted procedure: "(chicken-profile.scm:262) main#run" 
o|inlining procedure: k2616 
o|contracted procedure: "(chicken-profile.scm:91) main#write-profile" 
o|inlining procedure: k3522 
o|inlining procedure: k3522 
o|inlining procedure: k3572 
o|inlining procedure: k3572 
o|inlining procedure: k3596 
o|inlining procedure: k3596 
o|substituted constant variable: spacing816 
o|substituted constant variable: a3638 
o|substituted constant variable: spacing816 
o|inlining procedure: k3642 
o|inlining procedure: k3642 
o|substituted constant variable: g947950 
o|inlining procedure: k3666 
o|contracted procedure: "(chicken-profile.scm:249) g823828" 
o|inlining procedure: k3411 
o|inlining procedure: k3411 
o|inlining procedure: k3459 
o|inlining procedure: k3459 
o|inlining procedure: k3666 
o|substituted constant variable: spacing816 
o|substituted constant variable: spacing816 
o|substituted constant variable: a3688 
o|inlining procedure: k3692 
o|contracted procedure: "(chicken-profile.scm:232) g790799" 
o|substituted constant variable: a3346 
o|substituted constant variable: a3352 
o|inlining procedure: "(chicken-profile.scm:237) main#first" 
o|contracted procedure: "(chicken-profile.scm:236) main#fifth" 
o|contracted procedure: "(chicken-profile.scm:235) main#fourth" 
o|inlining procedure: "(chicken-profile.scm:234) main#third" 
o|inlining procedure: "(chicken-profile.scm:233) main#second" 
o|inlining procedure: k3692 
o|inlining procedure: "(chicken-profile.scm:243) main#second" 
o|inlining procedure: k3777 
o|inlining procedure: k3777 
o|inlining procedure: k3792 
o|inlining procedure: k3792 
o|inlining procedure: "(chicken-profile.scm:222) main#third" 
o|inlining procedure: "(chicken-profile.scm:221) main#second" 
o|inlining procedure: k3809 
o|inlining procedure: k3809 
o|inlining procedure: k3843 
o|inlining procedure: k3843 
o|substituted constant variable: g728731 
o|inlining procedure: "(chicken-profile.scm:214) main#third" 
o|inlining procedure: "(chicken-profile.scm:215) main#third" 
o|inlining procedure: k2632 
o|inlining procedure: k2632 
o|inlining procedure: "(chicken-profile.scm:87) main#first" 
o|inlining procedure: k2666 
o|inlining procedure: k2666 
o|inlining procedure: k2688 
o|inlining procedure: k2688 
o|inlining procedure: k2616 
o|substituted constant variable: a2720 
o|inlining procedure: k2716 
o|inlining procedure: k2716 
o|substituted constant variable: a2735 
o|substituted constant variable: a2750 
o|inlining procedure: k2746 
o|inlining procedure: k2746 
o|substituted constant variable: a2756 
o|substituted constant variable: a2765 
o|inlining procedure: k2761 
o|inlining procedure: k2761 
o|substituted constant variable: a2771 
o|substituted constant variable: a2777 
o|inlining procedure: k2773 
o|inlining procedure: k2773 
o|substituted constant variable: a2783 
o|substituted constant variable: a2789 
o|inlining procedure: k2785 
o|contracted procedure: "(chicken-profile.scm:117) main#set-decimals" 
o|substituted constant variable: a2949 
o|inlining procedure: k2950 
o|substituted constant variable: a2960 
o|inlining procedure: k2950 
o|inlining procedure: k2968 
o|inlining procedure: k2968 
o|substituted constant variable: a2993 
o|inlining procedure: k2785 
o|inlining procedure: k2806 
o|inlining procedure: k2806 
o|substituted constant variable: a2819 
o|substituted constant variable: a2816 
o|substituted constant variable: a2824 
o|replaced variables: 409 
o|removed binding forms: 144 
o|substituted constant variable: r13933920 
o|removed side-effect free assignment to unused variable: main#every 
o|removed side-effect free assignment to unused variable: main#any 
o|removed side-effect free assignment to unused variable: main#first 
o|removed side-effect free assignment to unused variable: main#second 
o|removed side-effect free assignment to unused variable: main#third 
o|removed side-effect free assignment to unused variable: main#list-tabulate 
o|removed side-effect free assignment to unused variable: main#symbol-table-size 
o|substituted constant variable: r28543945 
o|substituted constant variable: r30624004 
o|substituted constant variable: r35734022 
o|converted assignments to bindings: (print-row894) 
o|contracted procedure: "(chicken-profile.scm:243) main#filter" 
o|substituted constant variable: r19033929 
o|substituted constant variable: r37784057 
o|substituted constant variable: r37784057 
o|substituted constant variable: r37934060 
o|inlining procedure: k2704 
o|inlining procedure: k2704 
o|inlining procedure: k2704 
o|converted assignments to bindings: (arg-digit635) 
o|inlining procedure: k2704 
o|simplifications: ((let . 2)) 
o|replaced variables: 117 
o|removed binding forms: 387 
o|inlining procedure: k3116 
o|inlining procedure: k3116 
o|inlining procedure: k2704 
o|replaced variables: 2 
o|removed binding forms: 127 
o|substituted constant variable: r31174173 
o|substituted constant variable: r31174174 
o|inlining procedure: "(mini-srfi-1.scm:131) a3726" 
o|inlining procedure: k2691 
o|removed binding forms: 3 
o|contracted procedure: "(mini-srfi-1.scm:131) g295296" 
o|substituted constant variable: r26924235 
o|replaced variables: 2 
o|removed binding forms: 4 
o|removed conditional forms: 1 
o|replaced variables: 6 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((let . 1) (if . 18) (##core#call . 193)) 
o|  call simplifications:
o|    scheme#member
o|    chicken.fixnum#fx>
o|    scheme#string-ref
o|    scheme#char->integer
o|    scheme#<=
o|    scheme#eq?	2
o|    scheme#<
o|    scheme#cddddr
o|    scheme#not
o|    scheme#list	10
o|    scheme#length	2
o|    scheme#-
o|    scheme#*	2
o|    scheme#null?	7
o|    scheme#string-length	4
o|    chicken.fixnum#fxmax
o|    scheme#symbol?	2
o|    scheme#eof-object?
o|    scheme#cdr	4
o|    ##sys#check-list	12
o|    scheme#pair?	15
o|    scheme#+	5
o|    ##sys#setslot	6
o|    ##sys#slot	36
o|    scheme#cadddr	3
o|    scheme#=
o|    scheme#cadr	7
o|    scheme#caddr	10
o|    scheme#>	11
o|    chicken.fixnum#fx<=
o|    scheme#car	13
o|    chicken.fixnum#fx-	2
o|    scheme#cons	27
o|contracted procedure: k1395 
o|contracted procedure: k1402 
o|contracted procedure: k1412 
o|contracted procedure: k2604 
o|contracted procedure: k2600 
o|contracted procedure: k2596 
o|contracted procedure: k2592 
o|contracted procedure: k2588 
o|contracted procedure: k2584 
o|contracted procedure: k2580 
o|contracted procedure: k2828 
o|contracted procedure: k2831 
o|contracted procedure: k2843 
o|contracted procedure: k2847 
o|contracted procedure: k2862 
o|contracted procedure: k2865 
o|contracted procedure: k2871 
o|contracted procedure: k2878 
o|contracted procedure: k2882 
o|contracted procedure: k2891 
o|contracted procedure: k2894 
o|contracted procedure: k2906 
o|contracted procedure: k2910 
o|contracted procedure: k2931 
o|contracted procedure: k2935 
o|contracted procedure: k3146 
o|contracted procedure: k3009 
o|contracted procedure: k1887 
o|contracted procedure: k3025 
o|contracted procedure: k3038 
o|contracted procedure: k3052 
o|contracted procedure: k3056 
o|contracted procedure: k3073 
o|contracted procedure: k3076 
o|contracted procedure: k3079 
o|contracted procedure: k3082 
o|contracted procedure: k3130 
o|contracted procedure: k3094 
o|contracted procedure: k3100 
o|contracted procedure: k3108 
o|contracted procedure: k3112 
o|contracted procedure: k3120 
o|contracted procedure: k3124 
o|contracted procedure: k3116 
o|contracted procedure: k3137 
o|contracted procedure: k3140 
o|contracted procedure: k3209 
o|contracted procedure: k3152 
o|contracted procedure: k3203 
o|contracted procedure: k3155 
o|contracted procedure: k3197 
o|contracted procedure: k3158 
o|contracted procedure: k3191 
o|contracted procedure: k3161 
o|contracted procedure: k3164 
o|contracted procedure: k3188 
o|contracted procedure: k3184 
o|contracted procedure: k3264 
o|contracted procedure: k3229 
o|contracted procedure: k3241 
o|contracted procedure: k3253 
o|contracted procedure: k2619 
o|contracted procedure: k3281 
o|contracted procedure: k3864 
o|contracted procedure: k3285 
o|contracted procedure: k3873 
o|contracted procedure: k3882 
o|contracted procedure: k3288 
o|contracted procedure: k3301 
o|contracted procedure: k3367 
o|contracted procedure: k3373 
o|contracted procedure: k3376 
o|contracted procedure: k3382 
o|contracted procedure: k3490 
o|contracted procedure: k3507 
o|contracted procedure: k3510 
o|contracted procedure: k3513 
o|contracted procedure: k3528 
o|contracted procedure: k3531 
o|contracted procedure: k3539 
o|contracted procedure: k3543 
o|contracted procedure: k3547 
o|contracted procedure: k3555 
o|contracted procedure: k3559 
o|contracted procedure: k3563 
o|contracted procedure: k3569 
o|contracted procedure: k3575 
o|contracted procedure: k3587 
o|contracted procedure: k3599 
o|contracted procedure: k3609 
o|contracted procedure: k3613 
o|contracted procedure: k3625 
o|contracted procedure: k3635 
o|contracted procedure: k3621 
o|contracted procedure: k3645 
o|contracted procedure: k3652 
o|contracted procedure: k3660 
o|contracted procedure: k3656 
o|contracted procedure: k3669 
o|contracted procedure: k3676 
o|contracted procedure: k3684 
o|contracted procedure: k3387 
o|contracted procedure: k3390 
o|contracted procedure: k3393 
o|contracted procedure: k3399 
o|contracted procedure: k3402 
o|contracted procedure: k3450 
o|contracted procedure: k3414 
o|contracted procedure: k3417 
o|contracted procedure: k3420 
o|contracted procedure: k3428 
o|contracted procedure: k3432 
o|contracted procedure: k3440 
o|contracted procedure: k3444 
o|contracted procedure: k3462 
o|contracted procedure: k3484 
o|contracted procedure: k3480 
o|contracted procedure: k3465 
o|contracted procedure: k3468 
o|contracted procedure: k3476 
o|contracted procedure: k3695 
o|contracted procedure: k3717 
o|contracted procedure: k3306 
o|contracted procedure: k3309 
o|contracted procedure: k3312 
o|contracted procedure: k1842 
o|contracted procedure: k3315 
o|contracted procedure: k3713 
o|contracted procedure: k3698 
o|contracted procedure: k3701 
o|contracted procedure: k3709 
o|contracted procedure: k3353 
o|contracted procedure: k3361 
o|contracted procedure: k1893 
o|contracted procedure: k1905 
o|contracted procedure: k1923 
o|contracted procedure: k37334228 
o|contracted procedure: k1913 
o|contracted procedure: k1931 
o|contracted procedure: k3744 
o|contracted procedure: k3748 
o|contracted procedure: k3757 
o|contracted procedure: k3760 
o|contracted procedure: k3770 
o|contracted procedure: k3763 
o|contracted procedure: k3780 
o|contracted procedure: k3795 
o|contracted procedure: k3812 
o|contracted procedure: k3815 
o|contracted procedure: k3818 
o|contracted procedure: k3826 
o|contracted procedure: k3834 
o|contracted procedure: k3846 
o|contracted procedure: k3853 
o|contracted procedure: k3861 
o|contracted procedure: k2635 
o|inlining procedure: k2632 
o|contracted procedure: k2659 
o|contracted procedure: k2669 
o|contracted procedure: k2675 
o|contracted procedure: k2679 
o|contracted procedure: k2691 
o|contracted procedure: k2710 
o|inlining procedure: k2704 
o|inlining procedure: k2704 
o|contracted procedure: k2965 
o|contracted procedure: k2946 
o|contracted procedure: k2990 
o|contracted procedure: k2971 
o|contracted procedure: k2821 
o|contracted procedure: k2813 
o|contracted procedure: k2800 
o|contracted procedure: k3905 
o|contracted procedure: k3909 
o|contracted procedure: k3913 
o|contracted procedure: k3917 
o|simplifications: ((##core#call . 2) (if . 4) (let . 55)) 
o|  call simplifications:
o|    scheme#-	2
o|removed binding forms: 173 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest698701 0 
(o x)|known list op on rest arg sublist: ##core#rest-car rest698701 0 
(o x)|known list op on rest arg sublist: ##core#rest-null? rest698701 0 
(o x)|known list op on rest arg sublist: ##core#rest-cdr rest698701 0 
o|contracted procedure: k3257 
o|substituted constant variable: r3906 
o|substituted constant variable: r3910 
o|substituted constant variable: r3914 
o|substituted constant variable: r3918 
o|replaced variables: 3 
o|removed binding forms: 3 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3156 1 
(o x)|known list op on rest arg sublist: ##core#rest-car r3156 1 
(o x)|known list op on rest arg sublist: ##core#rest-null? r3156 1 
(o x)|known list op on rest arg sublist: ##core#rest-cdr r3156 1 
o|removed binding forms: 5 
o|removed binding forms: 2 
o|customizable procedures: (arg-digit635 next-number603 main#print-usage loop590 next-arg602 k2622 foldl729738 g752761 map-loop746775 k3774 k3297 foldr290293 main#format-real map-loop784807 map-loop854871 map-loop833878 foldl825889 foldl948953 print-row894 for-each-loop897960 k3525 map-loop908929 va4348 k3097 map-loop651677 doloop646647 main#take) 
o|shared closure containers: 7 
o|shared closure users: 7 
o|calls to known targets: 69 
o|identified direct recursive calls: f_1390 1 
o|unused rest argument: rest698701 f_3150 
o|identified direct recursive calls: f_3640 1 
o|identified direct recursive calls: f_3457 1 
o|identified direct recursive calls: f_1900 1 
o|identified direct recursive calls: f_2614 5 
o|fast box initializations: 14 
o|fast global references: 29 
o|fast global assignments: 28 
o|dropping unused closure argument: f_1390 
o|dropping unused closure argument: f_2567 
o|dropping unused closure argument: f_3216 
*/
/* end of file */
