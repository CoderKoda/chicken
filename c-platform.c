/* Generated from c-platform.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: c-platform.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -emit-import-library chicken.compiler.c-platform -output-file c-platform.c
   unit: c-platform
   uses: eval internal compiler support optimizer library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_internal_toplevel)
C_extern void C_ccall C_internal_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_extern void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_extern void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_extern void C_ccall C_optimizer_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[952];
static double C_possibly_force_alignment;


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
C_noret_decl(f_2136)
static void f_2136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2142)
static void f_2142(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_2478)
static C_word f_2478(C_word t0);
C_noret_decl(f_2720)
static void f_2720(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2734)
static void C_ccall f_2734(C_word c,C_word *av) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word *av) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word *av) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word *av) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word *av) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word *av) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word *av) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word *av) C_noret;
C_noret_decl(f_3027)
static void C_ccall f_3027(C_word c,C_word *av) C_noret;
C_noret_decl(f_3029)
static void f_3029(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word *av) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word *av) C_noret;
C_noret_decl(f_3086)
static void C_ccall f_3086(C_word c,C_word *av) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word *av) C_noret;
C_noret_decl(f_3097)
static void C_ccall f_3097(C_word c,C_word *av) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word *av) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word *av) C_noret;
C_noret_decl(f_3124)
static void f_3124(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void f_3127(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word *av) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word *av) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word *av) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word *av) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word *av) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word *av) C_noret;
C_noret_decl(f_3199)
static void C_ccall f_3199(C_word c,C_word *av) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word *av) C_noret;
C_noret_decl(f_3233)
static void C_ccall f_3233(C_word c,C_word *av) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word *av) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word *av) C_noret;
C_noret_decl(f_3245)
static void C_ccall f_3245(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word *av) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word *av) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word *av) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word *av) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word *av) C_noret;
C_noret_decl(f_3316)
static void f_3316(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word *av) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word *av) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word *av) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word *av) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word *av) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word *av) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word *av) C_noret;
C_noret_decl(f_3415)
static void C_ccall f_3415(C_word c,C_word *av) C_noret;
C_noret_decl(f_3423)
static void C_ccall f_3423(C_word c,C_word *av) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word *av) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word *av) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word *av) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word *av) C_noret;
C_noret_decl(f_3444)
static void f_3444(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word *av) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word *av) C_noret;
C_noret_decl(f_3481)
static void C_ccall f_3481(C_word c,C_word *av) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word *av) C_noret;
C_noret_decl(f_3515)
static void C_ccall f_3515(C_word c,C_word *av) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word *av) C_noret;
C_noret_decl(f_3521)
static void C_ccall f_3521(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word *av) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word *av) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word *av) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word *av) C_noret;
C_noret_decl(f_3557)
static void C_ccall f_3557(C_word c,C_word *av) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word *av) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word *av) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word *av) C_noret;
C_noret_decl(f_3623)
static void C_ccall f_3623(C_word c,C_word *av) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word *av) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word *av) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word *av) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word *av) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word *av) C_noret;
C_noret_decl(f_3685)
static void C_ccall f_3685(C_word c,C_word *av) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word *av) C_noret;
C_noret_decl(f_3700)
static void C_ccall f_3700(C_word c,C_word *av) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word *av) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word *av) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word *av) C_noret;
C_noret_decl(f_3716)
static void C_ccall f_3716(C_word c,C_word *av) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3727)
static void C_ccall f_3727(C_word c,C_word *av) C_noret;
C_noret_decl(f_3730)
static void C_ccall f_3730(C_word c,C_word *av) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word *av) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word *av) C_noret;
C_noret_decl(f_3739)
static void C_ccall f_3739(C_word c,C_word *av) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word *av) C_noret;
C_noret_decl(f_3745)
static void C_ccall f_3745(C_word c,C_word *av) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word *av) C_noret;
C_noret_decl(f_3751)
static void C_ccall f_3751(C_word c,C_word *av) C_noret;
C_noret_decl(f_3754)
static void C_ccall f_3754(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word *av) C_noret;
C_noret_decl(f_3763)
static void C_ccall f_3763(C_word c,C_word *av) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word *av) C_noret;
C_noret_decl(f_3769)
static void C_ccall f_3769(C_word c,C_word *av) C_noret;
C_noret_decl(f_3772)
static void C_ccall f_3772(C_word c,C_word *av) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word *av) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word *av) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word *av) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word *av) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word *av) C_noret;
C_noret_decl(f_3790)
static void C_ccall f_3790(C_word c,C_word *av) C_noret;
C_noret_decl(f_3793)
static void C_ccall f_3793(C_word c,C_word *av) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word *av) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word *av) C_noret;
C_noret_decl(f_3802)
static void C_ccall f_3802(C_word c,C_word *av) C_noret;
C_noret_decl(f_3805)
static void C_ccall f_3805(C_word c,C_word *av) C_noret;
C_noret_decl(f_3808)
static void C_ccall f_3808(C_word c,C_word *av) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word *av) C_noret;
C_noret_decl(f_3814)
static void C_ccall f_3814(C_word c,C_word *av) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word *av) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word *av) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word *av) C_noret;
C_noret_decl(f_3826)
static void C_ccall f_3826(C_word c,C_word *av) C_noret;
C_noret_decl(f_3829)
static void C_ccall f_3829(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_3835)
static void C_ccall f_3835(C_word c,C_word *av) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word *av) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word *av) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word *av) C_noret;
C_noret_decl(f_3847)
static void C_ccall f_3847(C_word c,C_word *av) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word *av) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word *av) C_noret;
C_noret_decl(f_3856)
static void C_ccall f_3856(C_word c,C_word *av) C_noret;
C_noret_decl(f_3859)
static void C_ccall f_3859(C_word c,C_word *av) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word *av) C_noret;
C_noret_decl(f_3865)
static void C_ccall f_3865(C_word c,C_word *av) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word *av) C_noret;
C_noret_decl(f_3871)
static void C_ccall f_3871(C_word c,C_word *av) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word *av) C_noret;
C_noret_decl(f_3877)
static void C_ccall f_3877(C_word c,C_word *av) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word *av) C_noret;
C_noret_decl(f_3883)
static void C_ccall f_3883(C_word c,C_word *av) C_noret;
C_noret_decl(f_3886)
static void C_ccall f_3886(C_word c,C_word *av) C_noret;
C_noret_decl(f_3889)
static void C_ccall f_3889(C_word c,C_word *av) C_noret;
C_noret_decl(f_3892)
static void C_ccall f_3892(C_word c,C_word *av) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word *av) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word *av) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word *av) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word *av) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word *av) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word *av) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word *av) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word *av) C_noret;
C_noret_decl(f_3925)
static void C_ccall f_3925(C_word c,C_word *av) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3934)
static void C_ccall f_3934(C_word c,C_word *av) C_noret;
C_noret_decl(f_3937)
static void C_ccall f_3937(C_word c,C_word *av) C_noret;
C_noret_decl(f_3940)
static void C_ccall f_3940(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word *av) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word *av) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word *av) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word *av) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word *av) C_noret;
C_noret_decl(f_3961)
static void C_ccall f_3961(C_word c,C_word *av) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word *av) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word *av) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word *av) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word *av) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word *av) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word *av) C_noret;
C_noret_decl(f_3982)
static void C_ccall f_3982(C_word c,C_word *av) C_noret;
C_noret_decl(f_3985)
static void C_ccall f_3985(C_word c,C_word *av) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word *av) C_noret;
C_noret_decl(f_3991)
static void C_ccall f_3991(C_word c,C_word *av) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word *av) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word *av) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word *av) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word *av) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word *av) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word *av) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word *av) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word *av) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word *av) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word *av) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word *av) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word *av) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word *av) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word *av) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word *av) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word *av) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word *av) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word *av) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word *av) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word *av) C_noret;
C_noret_decl(f_4054)
static void C_ccall f_4054(C_word c,C_word *av) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word *av) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word *av) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word *av) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word *av) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word *av) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word *av) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word *av) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word *av) C_noret;
C_noret_decl(f_4081)
static void C_ccall f_4081(C_word c,C_word *av) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word *av) C_noret;
C_noret_decl(f_4087)
static void C_ccall f_4087(C_word c,C_word *av) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word *av) C_noret;
C_noret_decl(f_4093)
static void C_ccall f_4093(C_word c,C_word *av) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word *av) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word *av) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word *av) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word *av) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word *av) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word *av) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word *av) C_noret;
C_noret_decl(f_4117)
static void C_ccall f_4117(C_word c,C_word *av) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word *av) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word *av) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word *av) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word *av) C_noret;
C_noret_decl(f_4132)
static void C_ccall f_4132(C_word c,C_word *av) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word *av) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word *av) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word *av) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word *av) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word *av) C_noret;
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word *av) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word *av) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word *av) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word *av) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word *av) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word *av) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word *av) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word *av) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word *av) C_noret;
C_noret_decl(f_4180)
static void C_ccall f_4180(C_word c,C_word *av) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word *av) C_noret;
C_noret_decl(f_4186)
static void C_ccall f_4186(C_word c,C_word *av) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word *av) C_noret;
C_noret_decl(f_4192)
static void C_ccall f_4192(C_word c,C_word *av) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word *av) C_noret;
C_noret_decl(f_4198)
static void C_ccall f_4198(C_word c,C_word *av) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word *av) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word *av) C_noret;
C_noret_decl(f_4207)
static void C_ccall f_4207(C_word c,C_word *av) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word *av) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word *av) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word *av) C_noret;
C_noret_decl(f_4219)
static void C_ccall f_4219(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word *av) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word *av) C_noret;
C_noret_decl(f_4231)
static void C_ccall f_4231(C_word c,C_word *av) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word *av) C_noret;
C_noret_decl(f_4237)
static void C_ccall f_4237(C_word c,C_word *av) C_noret;
C_noret_decl(f_4240)
static void C_ccall f_4240(C_word c,C_word *av) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word *av) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word *av) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word *av) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word *av) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word *av) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word *av) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word *av) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word *av) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word *av) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word *av) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word *av) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word *av) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word *av) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word *av) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word *av) C_noret;
C_noret_decl(f_4297)
static void C_ccall f_4297(C_word c,C_word *av) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word *av) C_noret;
C_noret_decl(f_4303)
static void C_ccall f_4303(C_word c,C_word *av) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word *av) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word *av) C_noret;
C_noret_decl(f_4312)
static void C_ccall f_4312(C_word c,C_word *av) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word *av) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word *av) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word *av) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word *av) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word *av) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word *av) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word *av) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word *av) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word *av) C_noret;
C_noret_decl(f_4342)
static void C_ccall f_4342(C_word c,C_word *av) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word *av) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word *av) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word *av) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word *av) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word *av) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word *av) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word *av) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word *av) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word *av) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word *av) C_noret;
C_noret_decl(f_4375)
static void C_ccall f_4375(C_word c,C_word *av) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word *av) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word *av) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word *av) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word *av) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word *av) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word *av) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word *av) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word *av) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word *av) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word *av) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word *av) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word *av) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word *av) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word *av) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word *av) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word *av) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word *av) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word *av) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word *av) C_noret;
C_noret_decl(f_4435)
static void C_ccall f_4435(C_word c,C_word *av) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word *av) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word *av) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word *av) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word *av) C_noret;
C_noret_decl(f_4450)
static void C_ccall f_4450(C_word c,C_word *av) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word *av) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word *av) C_noret;
C_noret_decl(f_4459)
static void C_ccall f_4459(C_word c,C_word *av) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word *av) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word *av) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word *av) C_noret;
C_noret_decl(f_4471)
static void C_ccall f_4471(C_word c,C_word *av) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word *av) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word *av) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word *av) C_noret;
C_noret_decl(f_4519)
static void f_4519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4530)
static void C_ccall f_4530(C_word c,C_word *av) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word *av) C_noret;
C_noret_decl(f_4555)
static void C_ccall f_4555(C_word c,C_word *av) C_noret;
C_noret_decl(f_4568)
static void C_ccall f_4568(C_word c,C_word *av) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4596)
static void C_ccall f_4596(C_word c,C_word *av) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word *av) C_noret;
C_noret_decl(f_4612)
static void C_ccall f_4612(C_word c,C_word *av) C_noret;
C_noret_decl(f_4615)
static void C_ccall f_4615(C_word c,C_word *av) C_noret;
C_noret_decl(f_4618)
static void C_ccall f_4618(C_word c,C_word *av) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word *av) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word *av) C_noret;
C_noret_decl(f_4627)
static void C_ccall f_4627(C_word c,C_word *av) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word *av) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word *av) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word *av) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word *av) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word *av) C_noret;
C_noret_decl(f_4645)
static void C_ccall f_4645(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word *av) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word *av) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word *av) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word *av) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word *av) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word *av) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word *av) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word *av) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word *av) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word *av) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word *av) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word *av) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word *av) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word *av) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word *av) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word *av) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word *av) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word *av) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word *av) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word *av) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word *av) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word *av) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word *av) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word *av) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word *av) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word *av) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word *av) C_noret;
C_noret_decl(f_4735)
static void C_ccall f_4735(C_word c,C_word *av) C_noret;
C_noret_decl(f_4738)
static void C_ccall f_4738(C_word c,C_word *av) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word *av) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word *av) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word *av) C_noret;
C_noret_decl(f_4750)
static void C_ccall f_4750(C_word c,C_word *av) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word *av) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word *av) C_noret;
C_noret_decl(f_4759)
static void C_ccall f_4759(C_word c,C_word *av) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word *av) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word *av) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word *av) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word *av) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word *av) C_noret;
C_noret_decl(f_4780)
static void C_ccall f_4780(C_word c,C_word *av) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word *av) C_noret;
C_noret_decl(f_4786)
static void C_ccall f_4786(C_word c,C_word *av) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word *av) C_noret;
C_noret_decl(f_4792)
static void C_ccall f_4792(C_word c,C_word *av) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word *av) C_noret;
C_noret_decl(f_4798)
static void C_ccall f_4798(C_word c,C_word *av) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word *av) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word *av) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word *av) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word *av) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word *av) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word *av) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word *av) C_noret;
C_noret_decl(f_4822)
static void C_ccall f_4822(C_word c,C_word *av) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word *av) C_noret;
C_noret_decl(f_4828)
static void C_ccall f_4828(C_word c,C_word *av) C_noret;
C_noret_decl(f_4831)
static void C_ccall f_4831(C_word c,C_word *av) C_noret;
C_noret_decl(f_4834)
static void C_ccall f_4834(C_word c,C_word *av) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word *av) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word *av) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word *av) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word *av) C_noret;
C_noret_decl(f_4849)
static void C_ccall f_4849(C_word c,C_word *av) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word *av) C_noret;
C_noret_decl(f_4855)
static void C_ccall f_4855(C_word c,C_word *av) C_noret;
C_noret_decl(f_4858)
static void C_ccall f_4858(C_word c,C_word *av) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word *av) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word *av) C_noret;
C_noret_decl(f_4867)
static void C_ccall f_4867(C_word c,C_word *av) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word *av) C_noret;
C_noret_decl(f_4873)
static void C_ccall f_4873(C_word c,C_word *av) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word *av) C_noret;
C_noret_decl(f_4879)
static void C_ccall f_4879(C_word c,C_word *av) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word *av) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word *av) C_noret;
C_noret_decl(f_4888)
static void C_ccall f_4888(C_word c,C_word *av) C_noret;
C_noret_decl(f_4891)
static void C_ccall f_4891(C_word c,C_word *av) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word *av) C_noret;
C_noret_decl(f_4897)
static void C_ccall f_4897(C_word c,C_word *av) C_noret;
C_noret_decl(f_4900)
static void C_ccall f_4900(C_word c,C_word *av) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word *av) C_noret;
C_noret_decl(f_4906)
static void C_ccall f_4906(C_word c,C_word *av) C_noret;
C_noret_decl(f_4909)
static void C_ccall f_4909(C_word c,C_word *av) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word *av) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word *av) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word *av) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word *av) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word *av) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word *av) C_noret;
C_noret_decl(f_4930)
static void C_ccall f_4930(C_word c,C_word *av) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word *av) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word *av) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word *av) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word *av) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word *av) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word *av) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word *av) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word *av) C_noret;
C_noret_decl(f_4957)
static void C_ccall f_4957(C_word c,C_word *av) C_noret;
C_noret_decl(f_4960)
static void C_ccall f_4960(C_word c,C_word *av) C_noret;
C_noret_decl(f_4963)
static void C_ccall f_4963(C_word c,C_word *av) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word *av) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word *av) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word *av) C_noret;
C_noret_decl(f_4975)
static void C_ccall f_4975(C_word c,C_word *av) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word *av) C_noret;
C_noret_decl(f_4981)
static void C_ccall f_4981(C_word c,C_word *av) C_noret;
C_noret_decl(f_4984)
static void C_ccall f_4984(C_word c,C_word *av) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word *av) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word *av) C_noret;
C_noret_decl(f_4993)
static void C_ccall f_4993(C_word c,C_word *av) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word *av) C_noret;
C_noret_decl(f_4999)
static void C_ccall f_4999(C_word c,C_word *av) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word *av) C_noret;
C_noret_decl(f_5005)
static void C_ccall f_5005(C_word c,C_word *av) C_noret;
C_noret_decl(f_5008)
static void C_ccall f_5008(C_word c,C_word *av) C_noret;
C_noret_decl(f_5011)
static void C_ccall f_5011(C_word c,C_word *av) C_noret;
C_noret_decl(f_5014)
static void C_ccall f_5014(C_word c,C_word *av) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word *av) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word *av) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word *av) C_noret;
C_noret_decl(f_5026)
static void C_ccall f_5026(C_word c,C_word *av) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word *av) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word *av) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word *av) C_noret;
C_noret_decl(f_5038)
static void C_ccall f_5038(C_word c,C_word *av) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word *av) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word *av) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word *av) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word *av) C_noret;
C_noret_decl(f_5053)
static void C_ccall f_5053(C_word c,C_word *av) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word *av) C_noret;
C_noret_decl(f_5059)
static void C_ccall f_5059(C_word c,C_word *av) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word *av) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word *av) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068(C_word c,C_word *av) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word *av) C_noret;
C_noret_decl(f_5074)
static void C_ccall f_5074(C_word c,C_word *av) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word *av) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word *av) C_noret;
C_noret_decl(f_5083)
static void C_ccall f_5083(C_word c,C_word *av) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word *av) C_noret;
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word *av) C_noret;
C_noret_decl(f_5092)
static void C_ccall f_5092(C_word c,C_word *av) C_noret;
C_noret_decl(f_5095)
static void C_ccall f_5095(C_word c,C_word *av) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word *av) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word *av) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word *av) C_noret;
C_noret_decl(f_5107)
static void C_ccall f_5107(C_word c,C_word *av) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word *av) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word *av) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word *av) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word *av) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word *av) C_noret;
C_noret_decl(f_5125)
static void C_ccall f_5125(C_word c,C_word *av) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word *av) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word *av) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word *av) C_noret;
C_noret_decl(f_5137)
static void C_ccall f_5137(C_word c,C_word *av) C_noret;
C_noret_decl(f_5140)
static void C_ccall f_5140(C_word c,C_word *av) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word *av) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word *av) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word *av) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word *av) C_noret;
C_noret_decl(f_5155)
static void C_ccall f_5155(C_word c,C_word *av) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word *av) C_noret;
C_noret_decl(f_5161)
static void C_ccall f_5161(C_word c,C_word *av) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word *av) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word *av) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word *av) C_noret;
C_noret_decl(f_5173)
static void C_ccall f_5173(C_word c,C_word *av) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word *av) C_noret;
C_noret_decl(f_5179)
static void C_ccall f_5179(C_word c,C_word *av) C_noret;
C_noret_decl(f_5181)
static void C_ccall f_5181(C_word c,C_word *av) C_noret;
C_noret_decl(f_5203)
static void C_ccall f_5203(C_word c,C_word *av) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word *av) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word *av) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word *av) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word *av) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word *av) C_noret;
C_noret_decl(f_5258)
static void f_5258(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word *av) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word *av) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word *av) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word *av) C_noret;
C_noret_decl(f_5291)
static void C_ccall f_5291(C_word c,C_word *av) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word *av) C_noret;
C_noret_decl(f_5327)
static void C_ccall f_5327(C_word c,C_word *av) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word *av) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word *av) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word *av) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word *av) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word *av) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word *av) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word *av) C_noret;
C_noret_decl(f_5405)
static void C_ccall f_5405(C_word c,C_word *av) C_noret;
C_noret_decl(f_5413)
static void C_ccall f_5413(C_word c,C_word *av) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word *av) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word *av) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word *av) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word *av) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word *av) C_noret;
C_noret_decl(f_5432)
static void C_ccall f_5432(C_word c,C_word *av) C_noret;
C_noret_decl(f_5435)
static void C_ccall f_5435(C_word c,C_word *av) C_noret;
C_noret_decl(f_5438)
static void C_ccall f_5438(C_word c,C_word *av) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word *av) C_noret;
C_noret_decl(f_5444)
static void C_ccall f_5444(C_word c,C_word *av) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word *av) C_noret;
C_noret_decl(f_5450)
static void C_ccall f_5450(C_word c,C_word *av) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word *av) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word *av) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word *av) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word *av) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word *av) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word *av) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word *av) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word *av) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word *av) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word *av) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word *av) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word *av) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word *av) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word *av) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word *av) C_noret;
C_noret_decl(f_5640)
static void C_ccall f_5640(C_word c,C_word *av) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word *av) C_noret;
C_noret_decl(f_5674)
static void f_5674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word *av) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word *av) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word *av) C_noret;
C_noret_decl(f_5727)
static void C_ccall f_5727(C_word c,C_word *av) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word *av) C_noret;
C_noret_decl(f_5756)
static void C_ccall f_5756(C_word c,C_word *av) C_noret;
C_noret_decl(f_5766)
static void C_ccall f_5766(C_word c,C_word *av) C_noret;
C_noret_decl(f_5780)
static void C_ccall f_5780(C_word c,C_word *av) C_noret;
C_noret_decl(f_5784)
static void C_ccall f_5784(C_word c,C_word *av) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word *av) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word *av) C_noret;
C_noret_decl(f_5825)
static void f_5825(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word *av) C_noret;
C_noret_decl(f_5857)
static void C_ccall f_5857(C_word c,C_word *av) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word *av) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word *av) C_noret;
C_noret_decl(f_5899)
static void C_ccall f_5899(C_word c,C_word *av) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word *av) C_noret;
C_noret_decl(f_5929)
static void C_ccall f_5929(C_word c,C_word *av) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word *av) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word *av) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word *av) C_noret;
C_noret_decl(f_5977)
static void C_ccall f_5977(C_word c,C_word *av) C_noret;
C_noret_decl(f_5992)
static void C_ccall f_5992(C_word c,C_word *av) C_noret;
C_noret_decl(f_6023)
static void C_ccall f_6023(C_word c,C_word *av) C_noret;
C_noret_decl(f_6051)
static void C_ccall f_6051(C_word c,C_word *av) C_noret;
C_noret_decl(f_6053)
static void C_ccall f_6053(C_word c,C_word *av) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word *av) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word *av) C_noret;
C_noret_decl(f_6097)
static void C_ccall f_6097(C_word c,C_word *av) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word *av) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word *av) C_noret;
C_noret_decl(f_6120)
static void C_ccall f_6120(C_word c,C_word *av) C_noret;
C_noret_decl(f_6141)
static void C_ccall f_6141(C_word c,C_word *av) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word *av) C_noret;
C_noret_decl(f_6185)
static void C_ccall f_6185(C_word c,C_word *av) C_noret;
C_noret_decl(f_6192)
static void f_6192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6203)
static void C_ccall f_6203(C_word c,C_word *av) C_noret;
C_noret_decl(f_6224)
static void C_ccall f_6224(C_word c,C_word *av) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word *av) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word *av) C_noret;
C_noret_decl(f_6256)
static void C_ccall f_6256(C_word c,C_word *av) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word *av) C_noret;
C_noret_decl(f_6262)
static void C_ccall f_6262(C_word c,C_word *av) C_noret;
C_noret_decl(f_6278)
static void C_ccall f_6278(C_word c,C_word *av) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word *av) C_noret;
C_noret_decl(f_6302)
static void C_ccall f_6302(C_word c,C_word *av) C_noret;
C_noret_decl(f_6305)
static void f_6305(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6308)
static void f_6308(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6323)
static void C_ccall f_6323(C_word c,C_word *av) C_noret;
C_noret_decl(f_6335)
static void C_ccall f_6335(C_word c,C_word *av) C_noret;
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word *av) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word *av) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word *av) C_noret;
C_noret_decl(f_6368)
static void C_ccall f_6368(C_word c,C_word *av) C_noret;
C_noret_decl(f_6372)
static void C_ccall f_6372(C_word c,C_word *av) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word *av) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word *av) C_noret;
C_noret_decl(f_6410)
static void C_ccall f_6410(C_word c,C_word *av) C_noret;
C_noret_decl(f_6414)
static void C_ccall f_6414(C_word c,C_word *av) C_noret;
C_noret_decl(f_6418)
static void C_ccall f_6418(C_word c,C_word *av) C_noret;
C_noret_decl(f_6427)
static void C_ccall f_6427(C_word c,C_word *av) C_noret;
C_noret_decl(f_6431)
static void C_ccall f_6431(C_word c,C_word *av) C_noret;
C_noret_decl(f_6433)
static void f_6433(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6443)
static void C_ccall f_6443(C_word c,C_word *av) C_noret;
C_noret_decl(f_6456)
static void f_6456(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word *av) C_noret;
C_noret_decl(C_c_2dplatform_toplevel)
C_extern void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2136)
static void C_ccall trf_2136(C_word c,C_word *av) C_noret;
static void C_ccall trf_2136(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2136(t0,t1,t2);}

C_noret_decl(trf_2142)
static void C_ccall trf_2142(C_word c,C_word *av) C_noret;
static void C_ccall trf_2142(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_2142(t0,t1,t2,t3);}

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

C_noret_decl(trf_2720)
static void C_ccall trf_2720(C_word c,C_word *av) C_noret;
static void C_ccall trf_2720(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2720(t0,t1,t2);}

C_noret_decl(trf_3029)
static void C_ccall trf_3029(C_word c,C_word *av) C_noret;
static void C_ccall trf_3029(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3029(t0,t1,t2,t3);}

C_noret_decl(trf_3124)
static void C_ccall trf_3124(C_word c,C_word *av) C_noret;
static void C_ccall trf_3124(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3124(t0,t1);}

C_noret_decl(trf_3127)
static void C_ccall trf_3127(C_word c,C_word *av) C_noret;
static void C_ccall trf_3127(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3127(t0,t1);}

C_noret_decl(trf_3316)
static void C_ccall trf_3316(C_word c,C_word *av) C_noret;
static void C_ccall trf_3316(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3316(t0,t1,t2);}

C_noret_decl(trf_3444)
static void C_ccall trf_3444(C_word c,C_word *av) C_noret;
static void C_ccall trf_3444(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3444(t0,t1,t2,t3);}

C_noret_decl(trf_4519)
static void C_ccall trf_4519(C_word c,C_word *av) C_noret;
static void C_ccall trf_4519(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4519(t0,t1);}

C_noret_decl(trf_5258)
static void C_ccall trf_5258(C_word c,C_word *av) C_noret;
static void C_ccall trf_5258(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5258(t0,t1);}

C_noret_decl(trf_5674)
static void C_ccall trf_5674(C_word c,C_word *av) C_noret;
static void C_ccall trf_5674(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5674(t0,t1);}

C_noret_decl(trf_5825)
static void C_ccall trf_5825(C_word c,C_word *av) C_noret;
static void C_ccall trf_5825(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_5825(t0,t1);}

C_noret_decl(trf_6192)
static void C_ccall trf_6192(C_word c,C_word *av) C_noret;
static void C_ccall trf_6192(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6192(t0,t1);}

C_noret_decl(trf_6305)
static void C_ccall trf_6305(C_word c,C_word *av) C_noret;
static void C_ccall trf_6305(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6305(t0,t1);}

C_noret_decl(trf_6308)
static void C_ccall trf_6308(C_word c,C_word *av) C_noret;
static void C_ccall trf_6308(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_6308(t0,t1);}

C_noret_decl(trf_6433)
static void C_ccall trf_6433(C_word c,C_word *av) C_noret;
static void C_ccall trf_6433(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6433(t0,t1,t2);}

C_noret_decl(trf_6456)
static void C_ccall trf_6456(C_word c,C_word *av) C_noret;
static void C_ccall trf_6456(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_6456(t0,t1,t2);}

/* k1684 */
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
C_eval_toplevel(2,av2);}}

/* k1687 in k1684 */
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
C_internal_toplevel(2,av2);}}

/* k1690 in k1687 in k1684 */
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
C_optimizer_toplevel(2,av2);}}

/* k1693 in k1690 in k1687 in k1684 */
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
C_support_toplevel(2,av2);}}

/* k1696 in k1693 in k1690 in k1687 in k1684 */
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
C_compiler_toplevel(2,av2);}}

/* k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_1701,c,av);}
a=C_alloc(23);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.c-platform#cons* ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2136,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[3] /* (set! chicken.compiler.c-platform#filter ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2312,tmp=(C_word)a,a+=2,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:56: chicken.compiler.optimizer#default-optimization-passes"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[951]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[951]+1);
av2[1]=t6;
av2[2]=C_fix(3);
tp(3,av2);}}

/* chicken.compiler.c-platform#cons* in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_2136(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_2136,3,t1,t2,t3);}
a=C_alloc(5);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2142,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_2142(t7,t1,t2,t3);}

/* loop in chicken.compiler.c-platform#cons* in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_2142(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim_args((void *)trf_2142,4,t0,t1,t2,t3);}
a=C_alloc(4);
if(C_truep(C_i_nullp(t3))){
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2156,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:95: loop"));
t6=t4;
t7=C_i_car(t3);
t8=C_u_i_cdr(t3);
t1=t6;
t2=t7;
t3=t8;
goto loop;}}

/* k2154 in loop in chicken.compiler.c-platform#cons* in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_2156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2156,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* chicken.compiler.c-platform#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
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
t4=C_i_check_list_2(t3,lf[4]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2321,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2321(t8,t1,t3);}

/* foldr264 in chicken.compiler.c-platform#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
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

/* g269 in foldr264 in chicken.compiler.c-platform#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
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

/* k2334 in g269 in foldr264 in chicken.compiler.c-platform#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
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

/* k2348 in foldr264 in chicken.compiler.c-platform#filter in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_2350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_2350,c,av);}
C_trace(C_text("mini-srfi-1.scm:131: g269"));
t2=((C_word*)t0)[2];
f_2329(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1);}

/* loop in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static C_word f_2478(C_word t1){
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

/* loop in k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void f_2720(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_2720,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_SCHEME_END_OF_LIST;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2734,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("mini-srfi-1.scm:190: proc"));
t4=((C_word*)t0)[4];
f_5258(t4,t3);}}

/* k2732 in loop in k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_ccall f_2734(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_2734,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("mini-srfi-1.scm:190: loop"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2720(t3,t2,C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}

/* k2736 in k2732 in loop in k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_2738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2738,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_2982(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2982,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[5]+1 /* (set! chicken.compiler.c-platform#default-declarations ...) */,lf[6]);
t3=C_mutate((C_word*)lf[7]+1 /* (set! chicken.compiler.c-platform#default-profiling-declarations ...) */,lf[8]);
t4=C_mutate((C_word*)lf[9]+1 /* (set! chicken.compiler.c-platform#default-units ...) */,lf[10]);
t5=C_set_block_item(lf[11] /* chicken.compiler.c-platform#words-per-flonum */,0,C_fix(4));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:87: chicken.compiler.optimizer#eq-inline-operator"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[949]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[949]+1);
av2[1]=t6;
av2[2]=lf[950];
tp(3,av2);}}

/* k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_2990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2990,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:88: chicken.compiler.optimizer#membership-test-operators"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[947]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[947]+1);
av2[1]=t2;
av2[2]=lf[948];
tp(3,av2);}}

/* k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_2993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2993,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:91: chicken.compiler.optimizer#membership-unfold-limit"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[946]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[946]+1);
av2[1]=t2;
av2[2]=C_fix(20);
tp(3,av2);}}

/* k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_2996(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,3)))){
C_save_and_reclaim((void *)f_2996,c,av);}
a=C_alloc(15);
t2=C_mutate((C_word*)lf[12]+1 /* (set! chicken.compiler.c-platform#target-include-file ...) */,lf[13]);
t3=C_mutate((C_word*)lf[14]+1 /* (set! chicken.compiler.c-platform#valid-compiler-options ...) */,lf[15]);
t4=C_mutate((C_word*)lf[16]+1 /* (set! chicken.compiler.c-platform#valid-compiler-options-with-argument ...) */,lf[17]);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6456,a[2]=t7,a[3]=t11,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_6456(t13,t9,lf[945]);}

/* k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3011,c,av);}
a=C_alloc(3);
t2=C_mutate((C_word*)lf[18]+1 /* (set! chicken.compiler.core#default-standard-bindings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:260: scheme#append"));
t4=*((C_word*)lf[37]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[940];
av2[3]=lf[941];
av2[4]=lf[942];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3018(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_3018,c,av);}
a=C_alloc(8);
t2=C_mutate((C_word*)lf[19]+1 /* (set! chicken.compiler.core#default-extended-bindings ...) */,t1);
t3=C_mutate((C_word*)lf[20]+1 /* (set! chicken.compiler.core#internal-bindings ...) */,lf[21]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6433,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_6433(t8,t4,lf[939]);}

/* k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,5)))){
C_save_and_reclaim((void *)f_3027,c,av);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3029,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6431,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:318: op1"));
f_3029(t4,lf[934],lf[935],lf[936]);}

/* op1 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_3029(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,6)))){
C_save_and_reclaim_args((void *)trf_3029,4,t1,t2,t3,t4);}
a=C_alloc(5);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3031,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* f_3031 in op1 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3031(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,4)))){
C_save_and_reclaim((void *)f_3031,c,av);}
a=C_alloc(19);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3053,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(lf[24],C_fast_retrieve(lf[25]));
if(C_truep(t10)){
t11=(C_truep(C_fast_retrieve(lf[26]))?C_a_i_list1(&a,1,((C_word*)t0)[2]):C_a_i_list1(&a,1,((C_word*)t0)[3]));
C_trace(C_text("c-platform.scm:314: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t9;
av2[2]=lf[27];
av2[3]=t11;
av2[4]=t5;
tp(5,av2);}}
else{
t11=C_a_i_list2(&a,2,((C_word*)t0)[4],C_fix(36));
t12=C_i_car(t5);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3086,a[2]=t12,a[3]=t9,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:317: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2=av;
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t13;
av2[2]=C_fix(1);
tp(3,av2);}}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3051 */
static void C_ccall f_3053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3053,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:309: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k3084 */
static void C_ccall f_3086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3086,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:315: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[28];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3094(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3094,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3097,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6427,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:319: op1"));
f_3029(t3,lf[930],lf[931],lf[932]);}

/* k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3097,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3099,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:342: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=lf[833];
av2[3]=C_fix(8);
av2[4]=t2;
tp(5,av2);}}

/* eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3099(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3099,c,av);}
a=C_alloc(13);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3115,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3245,a[2]=t4,a[3]=t10,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:329: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t11;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3115(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_3115,c,av);}
a=C_alloc(10);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3124,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3199,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:333: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}}

/* k3122 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_3124(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3124,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_3127(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3172,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:336: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[3];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k3125 in k3122 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_3127(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3127,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:341: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[5];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=lf[27];
av2[3]=lf[30];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3140 in k3125 in k3122 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3142(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3142,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:339: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k3152 in k3166 in k3170 in k3122 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3154,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];
f_3127(t3,(C_truep(t1)?t1:C_i_not(C_i_numberp(((C_word*)t2)[3]))));}

/* k3166 in k3170 in k3122 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3168(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3168,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3154,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:338: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k3170 in k3122 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3172(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3172,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3168,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:337: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3127(t3,C_SCHEME_FALSE);}}

/* k3179 in k3193 in k3197 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3181,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];
f_3124(t3,(C_truep(t1)?t1:C_i_not(C_i_numberp(((C_word*)t2)[3]))));}

/* k3193 in k3197 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3195(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3195,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3181,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:335: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k3197 in k3113 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3199(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3199,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3195,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:334: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3124(t3,C_SCHEME_FALSE);}}

/* k3227 in k3235 in k3231 in k3239 in k3243 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3229(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3229,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:332: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k3231 in k3239 in k3243 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3233(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3233,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3237,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:331: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k3235 in k3231 in k3239 in k3243 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3237,c,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:332: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_3115(2,av2);}}}

/* k3239 in k3243 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3241(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3241,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[35],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3233,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:331: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}
else{
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_3115(2,av2);}}}

/* k3243 in eqv?-id in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3245(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3245,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3241,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:330: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3115(2,av2);}}}

/* k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3253(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3253,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:343: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[831];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_3256,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6262,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:345: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[928];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3259(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3259,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3261,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3439,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:400: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=lf[925];
av2[3]=C_fix(8);
av2[4]=t2;
tp(5,av2);}}

/* rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3261(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3261,c,av);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t5))){
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2478,tmp=(C_word)a,a+=2,tmp);
t7=(
  f_2478(t5)
);
t8=C_u_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3436,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t7,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("c-platform.scm:380: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t9;
av2[2]=t7;
tp(3,av2);}}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3287 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3289,c,av);}
C_trace(C_text("c-platform.scm:381: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k3295 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3297,c,av);}
a=C_alloc(6);
C_trace(C_text("c-platform.scm:383: cons*"));
f_2136(((C_word*)t0)[2],((C_word*)t0)[3],C_a_i_list(&a,2,((C_word*)t0)[4],t1));}

/* k3312 in k3350 in k3354 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void C_ccall f_3314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3314,c,av);}
C_trace(C_text("c-platform.scm:385: scheme#append"));
t2=*((C_word*)lf[37]+1);{
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

/* map-loop704 in k3350 in k3354 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void f_3316(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3316,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:385: g710"));
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

/* k3339 in map-loop704 in k3350 in k3354 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in ... */
static void C_ccall f_3341(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3341,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_3316(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k3350 in k3354 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_3352(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3352,c,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=C_i_check_list_2(t2,lf[36]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3316,a[2]=((C_word*)t0)[4],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_3316(t8,t4,t2);}

/* k3354 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3356(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3356,c,av);}
a=C_alloc(12);
t2=C_i_cdr(t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=C_fast_retrieve(lf[29]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3352,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,a[5]=t7,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("c-platform.scm:385: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t8;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k3357 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3359(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3359,c,av);}
a=C_alloc(12);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3377,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:398: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t4;
av2[2]=lf[39];
av2[3]=lf[40];
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}}

/* k3371 in k3357 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_3373(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3373,c,av);}
C_trace(C_text("c-platform.scm:396: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* k3375 in k3357 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_3377(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3377,c,av);}
a=C_alloc(6);
C_trace(C_text("c-platform.scm:398: cons*"));
f_2136(((C_word*)t0)[2],t1,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]));}

/* k3398 in k3421 in k3430 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void C_ccall f_3400(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3400,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_mutate(((C_word *)t2)+5,t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3415,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:393: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t5;
av2[2]=lf[39];
av2[3]=lf[43];
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}
else{
t3=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3359(2,av2);}}}

/* k3413 in k3398 in k3421 in k3430 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in ... */
static void C_ccall f_3415(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3415,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_i_cadr(((C_word*)t2)[2]);
t4=C_a_i_list3(&a,3,t1,((C_word*)t2)[3],t3);
C_trace(C_text("c-platform.scm:391: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t2)[4];
av2[2]=lf[23];
av2[3]=((C_word*)t2)[5];
av2[4]=t4;
tp(5,av2);}}

/* k3421 in k3430 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_3423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3423,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
if(C_truep((C_truep(C_eqp(t2,lf[41]))?C_SCHEME_TRUE:(C_truep(C_eqp(t2,lf[42]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3400,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:390: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[44]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3359(2,av2);}}}

/* k3430 in k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3432(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3432,c,av);}
a=C_alloc(6);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=C_i_length(((C_word*)t0)[2]);
t4=C_eqp(C_fix(2),t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:388: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_3359(2,av2);}}}
else{
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_3359(2,av2);}}}

/* k3434 in rewrite-apply in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3436(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3436,c,av);}
a=C_alloc(16);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=C_a_i_list1(&a,1,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3289,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_i_car(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3297,a[2]=t4,a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3356,a[2]=t6,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:385: chicken.base#butlast"));
t8=C_fast_retrieve(lf[38]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t8+1)))(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:386: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}}

/* k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3439(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3439,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3442,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:401: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[924];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3442(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_3442,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3444,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:422: rewrite-c..r"));
f_3444(t3,lf[921],lf[922],lf[923]);}

/* rewrite-c..r in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_3444(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,6)))){
C_save_and_reclaim_args((void *)trf_3444,4,t1,t2,t3,t4);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3450,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:405: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word av2[5];
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=C_fix(8);
av2[4]=t5;
tp(5,av2);}}

/* a3449 in rewrite-c..r in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_3450(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_3450,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3462,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:411: scheme#call-with-current-continuation"));
t9=*((C_word*)lf[45]+1);{
C_word *av2=av;
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* a3461 in a3449 in rewrite-c..r in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void C_ccall f_3462(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_3462,c,av);}
a=C_alloc(11);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3481,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_truep(C_fast_retrieve(lf[26]))?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_a_i_list1(&a,1,((C_word*)t0)[4]);
C_trace(C_text("c-platform.scm:418: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t5;
av2[2]=lf[27];
av2[3]=t7;
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
if(C_truep(((C_word*)t0)[5])){
t7=C_a_i_list1(&a,1,((C_word*)t0)[5]);
C_trace(C_text("c-platform.scm:419: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t5;
av2[2]=lf[27];
av2[3]=t7;
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}
else{
C_trace(C_text("c-platform.scm:420: return"));
t7=t2;{
C_word *av2=av;
av2[0]=t7;
av2[1]=t5;
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}}}

/* k3479 in a3461 in a3449 in rewrite-c..r in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in ... */
static void C_ccall f_3481(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3481,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:414: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_3512(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3512,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3515,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:423: rewrite-c..r"));
f_3444(t2,lf[918],lf[919],lf[920]);}

/* k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_3515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3515,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3518,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:424: rewrite-c..r"));
f_3444(t3,lf[915],lf[916],lf[917]);}

/* k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void C_ccall f_3518(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3518,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3521,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:425: rewrite-c..r"));
f_3444(t3,lf[912],lf[913],lf[914]);}

/* k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in ... */
static void C_ccall f_3521(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3521,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3524,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:426: rewrite-c..r"));
f_3444(t3,lf[888],lf[910],lf[911]);}

/* k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in ... */
static void C_ccall f_3524(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3524,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3527,a[2]=((C_word*)t2)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:427: rewrite-c..r"));
f_3444(t3,lf[867],lf[908],lf[909]);}

/* k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in ... */
static void C_ccall f_3527(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3527,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3528,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3554,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:434: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=lf[906];
av2[3]=C_fix(8);
av2[4]=t2;
tp(5,av2);}}

/* rvalues in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in ... */
static void C_ccall f_3528(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3528,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(1));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=C_a_i_cons(&a,2,t4,t5);
C_trace(C_text("c-platform.scm:433: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t1;
av2[2]=lf[23];
av2[3]=t8;
av2[4]=t9;
tp(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in ... */
static void C_ccall f_3554(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3554,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3557,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:435: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[42];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in ... */
static void C_ccall f_3557(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_3557,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3559,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:466: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=lf[902];
av2[3]=C_fix(8);
av2[4]=t2;
tp(5,av2);}}

/* rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in ... */
static void C_ccall f_3559(C_word c,C_word *av){
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
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3559,c,av);}
a=C_alloc(7);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3716,a[2]=t1,a[3]=t8,a[4]=t9,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("c-platform.scm:444: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t10;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in ... */
static void C_ccall f_3593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3593,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
if(C_truep(((C_word*)t0)[7])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3704,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:448: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in ... */
static void C_ccall f_3620(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3620,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3623,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:453: chicken.base#gensym"));
t5=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[55];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in ... */
static void C_ccall f_3623(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3623,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3626,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t1,a[6]=((C_word*)t2)[5],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3693,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:454: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[7];
tp(3,av2);}}

/* k3624 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in ... */
static void C_ccall f_3626(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3626,c,av);}
a=C_alloc(15);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3685,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:459: chicken.base#gensym"));
t5=*((C_word*)lf[50]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[51];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3639 in k3624 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in ... */
static void C_ccall f_3641(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3641,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3645,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3657,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:465: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k3643 in k3639 in k3624 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in ... */
static void C_ccall f_3645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3645,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:455: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[48];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k3655 in k3639 in k3624 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in ... */
static void C_ccall f_3657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3657,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:463: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k3667 in k3683 in k3624 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in ... */
static void C_ccall f_3669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3669,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("c-platform.scm:457: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[47];
av2[3]=((C_word*)t0)[3];
av2[4]=t2;
tp(5,av2);}}

/* k3679 in k3683 in k3624 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in ... */
static void C_ccall f_3681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_3681,c,av);}
a=C_alloc(9);
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],((C_word*)t0)[3],t1);
C_trace(C_text("c-platform.scm:460: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[5];
av2[4]=t2;
tp(5,av2);}}

/* k3683 in k3624 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in ... */
static void C_ccall f_3685(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,2)))){
C_save_and_reclaim((void *)f_3685,c,av);}
a=C_alloc(28);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=C_a_i_list4(&a,4,t1,C_SCHEME_FALSE,t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:462: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k3691 in k3621 in k3618 in k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in ... */
static void C_ccall f_3693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3693,c,av);}
C_trace(C_text("c-platform.scm:454: chicken.compiler.support#debugging"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[52]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[52]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[53];
av2[3]=lf[54];
av2[4]=t1;
tp(5,av2);}}

/* k3698 in k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in ... */
static void C_ccall f_3700(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3700,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_i_caddr(t1);
if(C_truep(C_i_listp(t3))){
t4=C_eqp(C_fix(2),C_u_i_length(t3));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3620,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:452: chicken.base#gensym"));
t6=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t5=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3702 in k3591 in k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in ... */
static void C_ccall f_3704(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3704,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[47],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3700,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:449: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[7];
tp(3,av2);}}
else{
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3706 in k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in ... */
static void C_ccall f_3708(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3708,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
t3=C_i_car(t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3593,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[5],a[7]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("c-platform.scm:447: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
av2[3]=t3;
av2[4]=lf[57];
tp(5,av2);}}
else{
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3710 in k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in ... */
static void C_ccall f_3712(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3712,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[35],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3708,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:446: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}
else{
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3714 in rewrite-c-w-v in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in ... */
static void C_ccall f_3716(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3716,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3712,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:445: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in ... */
static void C_ccall f_3724(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3724,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3727,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:467: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[899];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in ... */
static void C_ccall f_3727(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3727,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:469: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[906];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[907];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in ... */
static void C_ccall f_3730(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3730,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3733,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:470: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[42];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[905];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in ... */
static void C_ccall f_3733(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3733,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3736,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:471: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[902];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[904];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in ... */
static void C_ccall f_3736(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3736,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3739,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:472: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[902];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[903];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in k3025 in ... */
static void C_ccall f_3739(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3739,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:473: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[899];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[901];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in k3092 in ... */
static void C_ccall f_3742(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3742,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3745,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:474: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[899];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[900];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in k3095 in ... */
static void C_ccall f_3745(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3745,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3748,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:475: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[897];
av2[3]=C_fix(13);
av2[4]=C_fix(2);
av2[5]=lf[898];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in k3251 in ... */
static void C_ccall f_3748(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3748,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3751,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:477: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[850];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[896];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in k3254 in ... */
static void C_ccall f_3751(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3751,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3754,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:478: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[848];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[895];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in k3257 in ... */
static void C_ccall f_3754(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3754,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:479: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[846];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[894];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in k3437 in ... */
static void C_ccall f_3757(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3757,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3760,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:480: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[892];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[893];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in k3440 in ... */
static void C_ccall f_3760(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3760,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:481: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[890];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[891];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in k3510 in ... */
static void C_ccall f_3763(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3763,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3766,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:482: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[888];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[889];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in k3513 in ... */
static void C_ccall f_3766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3766,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3769,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:483: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[886];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[887];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in k3516 in ... */
static void C_ccall f_3769(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3769,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3772,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:484: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[884];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[885];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in k3519 in ... */
static void C_ccall f_3772(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3772,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3775,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:485: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[882];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[883];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in k3522 in ... */
static void C_ccall f_3775(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3775,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3778,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:486: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[844];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[881];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in k3525 in ... */
static void C_ccall f_3778(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3778,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3781,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:487: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[879];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[880];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in k3552 in ... */
static void C_ccall f_3781(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3781,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:488: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[877];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[878];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in k3555 in ... */
static void C_ccall f_3784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3784,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3787,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:489: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[875];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[876];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in k3722 in ... */
static void C_ccall f_3787(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3787,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3790,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:490: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[873];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[874];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in k3725 in ... */
static void C_ccall f_3790(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3790,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:491: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[871];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[872];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in k3728 in ... */
static void C_ccall f_3793(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3793,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:492: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[869];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[870];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in k3731 in ... */
static void C_ccall f_3796(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3796,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:493: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[867];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[868];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in k3734 in ... */
static void C_ccall f_3799(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3799,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3802,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:494: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[865];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[866];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in k3737 in ... */
static void C_ccall f_3802(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3802,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:495: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[863];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[864];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in k3740 in ... */
static void C_ccall f_3805(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3805,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3808,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:496: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[861];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[862];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in k3743 in ... */
static void C_ccall f_3808(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3808,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3811,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:497: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[859];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[860];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in k3746 in ... */
static void C_ccall f_3811(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3811,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3814,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:498: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[857];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[858];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in k3749 in ... */
static void C_ccall f_3814(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3814,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3817,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:499: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[855];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[856];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in k3752 in ... */
static void C_ccall f_3817(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3817,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3820,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:500: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[853];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[854];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in k3755 in ... */
static void C_ccall f_3820(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3820,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3823,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:501: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[842];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[852];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in k3758 in ... */
static void C_ccall f_3823(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3823,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3826,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:503: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[850];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[851];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in k3761 in ... */
static void C_ccall f_3826(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3826,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3829,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:504: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[848];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[849];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in k3764 in ... */
static void C_ccall f_3829(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3829,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:505: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[846];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[847];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in k3767 in ... */
static void C_ccall f_3832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3832,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3835,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:506: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[844];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[845];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in k3770 in ... */
static void C_ccall f_3835(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3835,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3838,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:507: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[842];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[843];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in k3773 in ... */
static void C_ccall f_3838(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3838,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:509: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[839];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[841];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in k3776 in ... */
static void C_ccall f_3841(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3841,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3844,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:510: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[839];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[840];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in k3779 in ... */
static void C_ccall f_3844(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3844,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3847,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:512: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[837];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[838];
tp(6,av2);}}

/* k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in k3782 in ... */
static void C_ccall f_3847(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3847,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3850,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:513: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[835];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[836];
tp(6,av2);}}

/* k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in k3785 in ... */
static void C_ccall f_3850(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3850,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3853,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:514: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[833];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[834];
tp(6,av2);}}

/* k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in k3788 in ... */
static void C_ccall f_3853(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_3853,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:515: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[831];
av2[3]=C_fix(1);
av2[4]=C_fix(2);
av2[5]=lf[832];
tp(6,av2);}}

/* k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in k3791 in ... */
static void C_ccall f_3856(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3856,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:517: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[828];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[830];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in k3794 in ... */
static void C_ccall f_3859(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3859,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3862,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:518: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[828];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[829];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in k3797 in ... */
static void C_ccall f_3862(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3862,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:519: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[826];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[827];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in k3800 in ... */
static void C_ccall f_3865(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3865,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:520: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[824];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[825];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in k3803 in ... */
static void C_ccall f_3868(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3868,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:521: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[822];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[823];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in k3806 in ... */
static void C_ccall f_3871(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3871,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:522: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[820];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[821];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in k3809 in ... */
static void C_ccall f_3874(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3874,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:523: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[818];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[819];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in k3812 in ... */
static void C_ccall f_3877(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3877,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:524: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[816];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[817];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in k3815 in ... */
static void C_ccall f_3880(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3880,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:525: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[814];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[815];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in k3818 in ... */
static void C_ccall f_3883(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3883,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3886,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:526: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[812];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[813];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in k3821 in ... */
static void C_ccall f_3886(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3886,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:527: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[810];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[811];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in k3824 in ... */
static void C_ccall f_3889(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3889,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:528: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[808];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[809];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in k3827 in ... */
static void C_ccall f_3892(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3892,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:529: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[806];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[807];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in k3830 in ... */
static void C_ccall f_3895(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3895,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:530: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[804];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[805];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in k3833 in ... */
static void C_ccall f_3898(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3898,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:531: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[802];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[803];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in k3836 in ... */
static void C_ccall f_3901(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3901,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:532: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[800];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[801];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in k3839 in ... */
static void C_ccall f_3904(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3904,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:533: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[798];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[799];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in k3842 in ... */
static void C_ccall f_3907(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3907,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:534: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[796];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[797];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in k3845 in ... */
static void C_ccall f_3910(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3910,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:535: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[794];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[795];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in k3848 in ... */
static void C_ccall f_3913(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3913,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:536: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[792];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[793];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in k3851 in ... */
static void C_ccall f_3916(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3916,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3919,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:537: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[790];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[791];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in k3854 in ... */
static void C_ccall f_3919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3919,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:538: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[788];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[789];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in k3857 in ... */
static void C_ccall f_3922(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3922,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3925,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:539: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[786];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[787];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in k3860 in ... */
static void C_ccall f_3925(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3925,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:540: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[784];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[785];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in k3863 in ... */
static void C_ccall f_3928(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3928,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3931,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:541: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[782];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[783];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in k3866 in ... */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3931,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:542: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[780];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[781];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in k3869 in ... */
static void C_ccall f_3934(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3934,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:543: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[778];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[779];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in k3872 in ... */
static void C_ccall f_3937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3937,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3940,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:544: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[776];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[777];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in k3875 in ... */
static void C_ccall f_3940(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3940,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3943,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:545: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[774];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[775];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in k3878 in ... */
static void C_ccall f_3943(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3943,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3946,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:546: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[772];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[773];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in k3881 in ... */
static void C_ccall f_3946(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3946,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:547: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[770];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[771];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in k3884 in ... */
static void C_ccall f_3949(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3949,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3952,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:548: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[768];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[769];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in k3887 in ... */
static void C_ccall f_3952(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3952,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3955,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:549: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[766];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[767];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in k3890 in ... */
static void C_ccall f_3955(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3955,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:550: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[764];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[765];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in k3893 in ... */
static void C_ccall f_3958(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3958,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3961,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:551: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[762];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[763];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in k3896 in ... */
static void C_ccall f_3961(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3961,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:552: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[760];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[761];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in k3899 in ... */
static void C_ccall f_3964(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3964,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3967,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:553: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[758];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[759];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in k3902 in ... */
static void C_ccall f_3967(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3967,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:554: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[756];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[757];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in k3905 in ... */
static void C_ccall f_3970(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3970,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:555: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[754];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[755];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in k3908 in ... */
static void C_ccall f_3973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3973,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:556: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[752];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[753];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in k3911 in ... */
static void C_ccall f_3976(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3976,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:557: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[750];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[751];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in k3914 in ... */
static void C_ccall f_3979(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3979,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:558: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[748];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[749];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in k3917 in ... */
static void C_ccall f_3982(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3982,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:559: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[746];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[747];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in k3920 in ... */
static void C_ccall f_3985(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3985,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3988,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:560: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[744];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[745];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in k3923 in ... */
static void C_ccall f_3988(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3988,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3991,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:561: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[742];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[743];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in k3926 in ... */
static void C_ccall f_3991(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3991,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3994,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:562: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[740];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[741];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in k3929 in ... */
static void C_ccall f_3994(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3994,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:563: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[737];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[739];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in k3932 in ... */
static void C_ccall f_3997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_3997,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4000,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:564: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[737];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[738];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in k3935 in ... */
static void C_ccall f_4000(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4000,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4003,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:565: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[734];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[736];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in k3938 in ... */
static void C_ccall f_4003(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4003,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:566: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[734];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[735];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in k3941 in ... */
static void C_ccall f_4006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4006,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:567: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[732];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[733];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in k3944 in ... */
static void C_ccall f_4009(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4009,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:568: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[730];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[731];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in k3947 in ... */
static void C_ccall f_4012(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4012,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4015,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:569: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[725];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[729];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in k3950 in ... */
static void C_ccall f_4015(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4015,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:570: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[727];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[728];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in k3953 in ... */
static void C_ccall f_4018(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4018,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4021,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:571: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[725];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[726];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in k3956 in ... */
static void C_ccall f_4021(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4021,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4024,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:572: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[722];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[724];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in k3959 in ... */
static void C_ccall f_4024(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4024,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:573: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[722];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[723];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in ... */
static void C_ccall f_4027(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4027,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:574: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[719];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[721];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in k3965 in ... */
static void C_ccall f_4030(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4030,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:575: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[719];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[720];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in k3968 in ... */
static void C_ccall f_4033(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4033,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:576: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[716];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[718];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in k3971 in ... */
static void C_ccall f_4036(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4036,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:577: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[716];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[717];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in k3974 in ... */
static void C_ccall f_4039(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4039,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:578: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[713];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[715];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in k3977 in ... */
static void C_ccall f_4042(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4042,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:579: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[713];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[714];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in k3980 in ... */
static void C_ccall f_4045(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4045,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4048,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:580: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[710];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[712];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in k3983 in ... */
static void C_ccall f_4048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4048,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4051,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:581: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[710];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[711];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in k3986 in ... */
static void C_ccall f_4051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4051,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4054,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:582: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[707];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[709];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in k3989 in ... */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4054,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:583: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[707];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[708];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in k3992 in ... */
static void C_ccall f_4057(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4057,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:584: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[704];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[706];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in k3995 in ... */
static void C_ccall f_4060(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4060,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:585: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[704];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[705];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in k3998 in ... */
static void C_ccall f_4063(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4063,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4066,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:586: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[702];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[703];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in k4001 in ... */
static void C_ccall f_4066(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4066,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:587: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[700];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[701];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in k4004 in ... */
static void C_ccall f_4069(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4069,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:588: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[698];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[699];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in k4007 in ... */
static void C_ccall f_4072(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4072,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4075,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:589: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[696];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[697];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in k4010 in ... */
static void C_ccall f_4075(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4075,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4078,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:590: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[694];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[695];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in k4013 in ... */
static void C_ccall f_4078(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4078,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4081,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:591: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[692];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[693];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in k4016 in ... */
static void C_ccall f_4081(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4081,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:592: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[690];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[691];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in k4019 in ... */
static void C_ccall f_4084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4084,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:593: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[688];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[689];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4022 in ... */
static void C_ccall f_4087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4087,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:594: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[686];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[687];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in ... */
static void C_ccall f_4090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4090,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4093,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:595: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[684];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[685];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in k4028 in ... */
static void C_ccall f_4093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4093,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:596: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[682];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[683];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in k4031 in ... */
static void C_ccall f_4096(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4096,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4099,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:597: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[680];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[681];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in k4034 in ... */
static void C_ccall f_4099(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4099,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:598: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[678];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[679];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in k4037 in ... */
static void C_ccall f_4102(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4102,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:599: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[676];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[677];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in k4040 in ... */
static void C_ccall f_4105(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4105,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4108,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:600: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[674];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[675];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in k4043 in ... */
static void C_ccall f_4108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4108,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:601: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[672];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[673];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in k4046 in ... */
static void C_ccall f_4111(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4111,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4114,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:602: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[670];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[671];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in k4049 in ... */
static void C_ccall f_4114(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4114,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4117,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:603: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[668];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[669];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in ... */
static void C_ccall f_4117(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4117,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:604: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[666];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[667];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in ... */
static void C_ccall f_4120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4120,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:605: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[664];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[665];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in ... */
static void C_ccall f_4123(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4123,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:606: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[662];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[663];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in ... */
static void C_ccall f_4126(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4126,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:607: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[660];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[661];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in ... */
static void C_ccall f_4129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4129,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4132,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:608: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[658];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[659];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in ... */
static void C_ccall f_4132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4132,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:609: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[656];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[657];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in ... */
static void C_ccall f_4135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4135,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:610: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[654];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[655];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in ... */
static void C_ccall f_4138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4138,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4141,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:611: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[652];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[653];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in ... */
static void C_ccall f_4141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4141,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:612: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[650];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[651];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in k4079 in ... */
static void C_ccall f_4144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4144,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4147,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:613: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[648];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[649];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in k4082 in ... */
static void C_ccall f_4147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4147,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:614: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[646];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[647];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in k4085 in ... */
static void C_ccall f_4150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4150,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:615: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[644];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[645];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in k4088 in ... */
static void C_ccall f_4153(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4153,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4156,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:616: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[642];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[643];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in k4091 in ... */
static void C_ccall f_4156(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4156,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:617: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[640];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[641];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in k4094 in ... */
static void C_ccall f_4159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4159,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:618: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[638];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[639];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in k4097 in ... */
static void C_ccall f_4162(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4162,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:619: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[636];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[637];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in k4100 in ... */
static void C_ccall f_4165(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4165,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4168,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:620: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[634];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[635];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in k4103 in ... */
static void C_ccall f_4168(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4168,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:621: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[632];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[633];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in k4106 in ... */
static void C_ccall f_4171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4171,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:622: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[630];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[631];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in k4109 in ... */
static void C_ccall f_4174(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4174,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:624: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[626];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(2);
av2[6]=lf[628];
av2[7]=lf[629];
tp(8,av2);}}

/* k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in k4112 in ... */
static void C_ccall f_4177(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4177,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4180,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:625: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[626];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[627];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in k4115 in ... */
static void C_ccall f_4180(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4180,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4183,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:626: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[622];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(2);
av2[6]=lf[624];
av2[7]=lf[625];
tp(8,av2);}}

/* k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in k4118 in ... */
static void C_ccall f_4183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4183,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:627: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[622];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[623];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in k4121 in ... */
static void C_ccall f_4186(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4186,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4189,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:628: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[619];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[620];
av2[6]=lf[621];
tp(7,av2);}}

/* k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in k4124 in ... */
static void C_ccall f_4189(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4189,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4192,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:629: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[616];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[617];
av2[6]=lf[618];
tp(7,av2);}}

/* k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in k4127 in ... */
static void C_ccall f_4192(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4192,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:630: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[614];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[615];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in k4130 in ... */
static void C_ccall f_4195(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4195,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4198,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:631: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[612];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[613];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in k4133 in ... */
static void C_ccall f_4198(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4198,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:633: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[609];
av2[3]=C_fix(4);
av2[4]=lf[299];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in k4136 in ... */
static void C_ccall f_4201(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4201,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4204,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:634: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[606];
av2[3]=C_fix(4);
av2[4]=lf[299];
av2[5]=C_fix(1);
tp(6,av2);}}

/* k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in k4139 in ... */
static void C_ccall f_4204(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4204,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4207,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:635: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[609];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[610];
av2[6]=lf[611];
tp(7,av2);}}

/* k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in k4142 in ... */
static void C_ccall f_4207(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4207,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:636: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[606];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[607];
av2[6]=lf[608];
tp(7,av2);}}

/* k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in k4145 in ... */
static void C_ccall f_4210(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4210,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:638: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[603];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(1);
av2[6]=lf[604];
av2[7]=lf[605];
tp(8,av2);}}

/* k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in k4148 in ... */
static void C_ccall f_4213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4213,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4216,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:640: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[599];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in k4151 in ... */
static void C_ccall f_4216(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4216,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4219,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:641: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[595];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in k4154 in ... */
static void C_ccall f_4219(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4219,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:642: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[591];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in k4157 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4222,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:644: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[599];
av2[3]=C_fix(21);
av2[4]=C_fix(-1);
av2[5]=lf[600];
av2[6]=lf[601];
av2[7]=lf[602];
av2[8]=C_fix(5);
tp(9,av2);}}

/* k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in k4160 in ... */
static void C_ccall f_4225(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4225,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4228,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:645: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[595];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[596];
av2[6]=lf[597];
av2[7]=lf[598];
av2[8]=C_fix(5);
tp(9,av2);}}

/* k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in k4163 in ... */
static void C_ccall f_4228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4228,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:646: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[591];
av2[3]=C_fix(21);
av2[4]=C_fix(0);
av2[5]=lf[592];
av2[6]=lf[593];
av2[7]=lf[594];
av2[8]=C_fix(5);
tp(9,av2);}}

/* k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in k4166 in ... */
static void C_ccall f_4231(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4231,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:648: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[588];
av2[3]=C_fix(22);
av2[4]=C_fix(1);
av2[5]=lf[589];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
av2[8]=lf[590];
tp(9,av2);}}

/* k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in k4169 in ... */
static void C_ccall f_4234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4234,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4237,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:650: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[586];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[587];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in k4172 in ... */
static void C_ccall f_4237(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4237,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4240,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:651: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[584];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[585];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in k4175 in ... */
static void C_ccall f_4240(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4240,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:652: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[582];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[583];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in k4178 in ... */
static void C_ccall f_4243(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4243,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:653: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[580];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[581];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in k4181 in ... */
static void C_ccall f_4246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4246,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4249,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:654: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[578];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[579];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in k4184 in ... */
static void C_ccall f_4249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4249,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:655: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[576];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[577];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in k4187 in ... */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4252,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:656: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[574];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[575];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in k4190 in ... */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4255,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:657: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[572];
av2[3]=C_fix(16);
av2[4]=C_fix(3);
av2[5]=lf[573];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in k4193 in ... */
static void C_ccall f_4258(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4258,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4261,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:659: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[568];
av2[3]=C_fix(5);
av2[4]=lf[571];
av2[5]=C_fix(0);
av2[6]=lf[24];
tp(7,av2);}}

/* k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in k4196 in ... */
static void C_ccall f_4261(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4261,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4264,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:660: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[568];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[570];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in k4199 in ... */
static void C_ccall f_4264(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4264,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:661: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[568];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[569];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in k4202 in ... */
static void C_ccall f_4267(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4267,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4270,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:662: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[564];
av2[3]=C_fix(5);
av2[4]=lf[567];
av2[5]=C_fix(0);
av2[6]=lf[24];
tp(7,av2);}}

/* k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in k4205 in ... */
static void C_ccall f_4270(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4270,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4273,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:663: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[564];
av2[3]=C_fix(5);
av2[4]=lf[566];
av2[5]=C_fix(0);
av2[6]=lf[393];
tp(7,av2);}}

/* k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in k4208 in ... */
static void C_ccall f_4273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4273,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:664: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[564];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[565];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in k4211 in ... */
static void C_ccall f_4276(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4276,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4279,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:665: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[560];
av2[3]=C_fix(5);
av2[4]=lf[563];
av2[5]=C_fix(0);
av2[6]=lf[24];
tp(7,av2);}}

/* k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in k4214 in ... */
static void C_ccall f_4279(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4279,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4282,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:666: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[560];
av2[3]=C_fix(5);
av2[4]=lf[562];
av2[5]=C_fix(0);
av2[6]=lf[393];
tp(7,av2);}}

/* k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in k4217 in ... */
static void C_ccall f_4282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4282,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4285,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:667: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[560];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[561];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in k4220 in ... */
static void C_ccall f_4285(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4285,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:669: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[550];
av2[3]=C_fix(6);
av2[4]=lf[558];
av2[5]=lf[559];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in k4223 in ... */
static void C_ccall f_4288(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4288,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4291,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:670: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[555];
av2[3]=C_fix(6);
av2[4]=lf[556];
av2[5]=lf[557];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in k4226 in ... */
static void C_ccall f_4291(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4291,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:671: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[552];
av2[3]=C_fix(6);
av2[4]=lf[553];
av2[5]=lf[554];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in k4229 in ... */
static void C_ccall f_4294(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4294,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4297,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:673: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[550];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[551];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in k4232 in ... */
static void C_ccall f_4297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4297,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4300,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:674: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[548];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[549];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in k4235 in ... */
static void C_ccall f_4300(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4300,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:675: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[546];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[547];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in k4238 in ... */
static void C_ccall f_4303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4303,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4306,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:677: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[532];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[545];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in k4241 in ... */
static void C_ccall f_4306(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4306,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:678: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[530];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[544];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in k4244 in ... */
static void C_ccall f_4309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4309,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:679: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[528];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[543];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in k4247 in ... */
static void C_ccall f_4312(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4312,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:680: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[526];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[542];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in k4250 in ... */
static void C_ccall f_4315(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4315,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:681: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[524];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[541];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in k4253 in ... */
static void C_ccall f_4318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4318,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:682: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[522];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[540];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in k4256 in ... */
static void C_ccall f_4321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4321,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:683: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[520];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[539];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in k4259 in ... */
static void C_ccall f_4324(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4324,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4327,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:684: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[518];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[538];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in k4262 in ... */
static void C_ccall f_4327(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4327,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:685: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[516];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[537];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in k4265 in ... */
static void C_ccall f_4330(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4330,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:686: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[514];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[536];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in k4268 in ... */
static void C_ccall f_4333(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4333,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:687: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[512];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[535];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in k4271 in ... */
static void C_ccall f_4336(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4336,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4339,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:688: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[510];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[534];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in k4274 in ... */
static void C_ccall f_4339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4339,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4342,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:689: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[532];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[533];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in k4277 in ... */
static void C_ccall f_4342(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4342,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:690: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[530];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[531];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in k4280 in ... */
static void C_ccall f_4345(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4345,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4348,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:691: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[528];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[529];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in k4283 in ... */
static void C_ccall f_4348(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4348,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:692: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[526];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[527];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in k4286 in ... */
static void C_ccall f_4351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4351,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:693: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[524];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[525];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in k4289 in ... */
static void C_ccall f_4354(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4354,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:694: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[522];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[523];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in k4292 in ... */
static void C_ccall f_4357(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4357,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:695: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[520];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[521];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in k4295 in ... */
static void C_ccall f_4360(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4360,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4363,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:696: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[518];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[519];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in k4298 in ... */
static void C_ccall f_4363(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4363,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:697: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[516];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[517];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in k4301 in ... */
static void C_ccall f_4366(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4366,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:698: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[514];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[515];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in k4304 in ... */
static void C_ccall f_4369(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4369,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:699: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[512];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[513];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in k4307 in ... */
static void C_ccall f_4372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4372,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4375,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:700: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[510];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[511];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in k4310 in ... */
static void C_ccall f_4375(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4375,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4378,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:701: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[507];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[509];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in k4313 in ... */
static void C_ccall f_4378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4378,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:702: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[507];
av2[3]=C_fix(2);
av2[4]=C_fix(4);
av2[5]=lf[508];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4316 in ... */
static void C_ccall f_4381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4381,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:703: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[504];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[506];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in ... */
static void C_ccall f_4384(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4384,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:704: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[504];
av2[3]=C_fix(2);
av2[4]=C_fix(4);
av2[5]=lf[505];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in ... */
static void C_ccall f_4387(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4387,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:706: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[442];
av2[3]=C_fix(9);
av2[4]=lf[502];
av2[5]=lf[503];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
tp(8,av2);}}

/* k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in ... */
static void C_ccall f_4390(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4390,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:707: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[440];
av2[3]=C_fix(9);
av2[4]=lf[500];
av2[5]=lf[501];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in ... */
static void C_ccall f_4393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4393,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:708: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[438];
av2[3]=C_fix(9);
av2[4]=lf[498];
av2[5]=lf[499];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in ... */
static void C_ccall f_4396(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4396,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:709: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[436];
av2[3]=C_fix(9);
av2[4]=lf[496];
av2[5]=lf[497];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in ... */
static void C_ccall f_4399(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4399,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:710: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[434];
av2[3]=C_fix(9);
av2[4]=lf[494];
av2[5]=lf[495];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in k4337 in ... */
static void C_ccall f_4402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4402,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4405,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:712: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[493];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[99];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in k4340 in ... */
static void C_ccall f_4405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4405,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:713: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[491];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[492];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in k4343 in ... */
static void C_ccall f_4408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4408,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:714: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[489];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[490];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in k4346 in ... */
static void C_ccall f_4411(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4411,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:715: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[488];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[299];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in k4349 in ... */
static void C_ccall f_4414(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4414,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4417,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:716: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[487];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[299];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in k4352 in ... */
static void C_ccall f_4417(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4417,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:717: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[486];
av2[3]=C_fix(11);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[343];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in k4355 in ... */
static void C_ccall f_4420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4420,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:718: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[484];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[485];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in k4358 in ... */
static void C_ccall f_4423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4423,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:719: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[482];
av2[3]=C_fix(11);
av2[4]=C_fix(2);
av2[5]=lf[483];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in k4361 in ... */
static void C_ccall f_4426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4426,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:720: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[480];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[481];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in k4364 in ... */
static void C_ccall f_4429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4429,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:721: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[478];
av2[3]=C_fix(11);
av2[4]=C_fix(1);
av2[5]=lf[479];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in k4367 in ... */
static void C_ccall f_4432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4432,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:723: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[476];
av2[3]=C_fix(11);
av2[4]=C_fix(3);
av2[5]=lf[299];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in k4370 in ... */
static void C_ccall f_4435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4435,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:724: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[476];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[477];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in k4373 in ... */
static void C_ccall f_4438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4438,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:726: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[472];
av2[3]=C_fix(12);
av2[4]=lf[475];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
tp(7,av2);}}

/* k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in k4376 in ... */
static void C_ccall f_4441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4441,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4444,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:727: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[471];
av2[3]=C_fix(12);
av2[4]=lf[474];
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(2);
tp(7,av2);}}

/* k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in k4379 in ... */
static void C_ccall f_4444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4444,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:728: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[473];
av2[3]=C_fix(12);
av2[4]=C_SCHEME_FALSE;
av2[5]=C_SCHEME_TRUE;
av2[6]=C_fix(1);
tp(7,av2);}}

/* k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in k4382 in ... */
static void C_ccall f_4447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4447,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:730: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[472];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in ... */
static void C_ccall f_4450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4450,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:731: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[471];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in ... */
static void C_ccall f_4453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4453,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:733: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[472];
av2[3]=C_fix(18);
av2[4]=C_fix(0);
tp(5,av2);}}

/* k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in ... */
static void C_ccall f_4456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4456,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:734: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[471];
av2[3]=C_fix(18);
av2[4]=C_fix(1);
tp(5,av2);}}

/* k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in ... */
static void C_ccall f_4459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4459,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:735: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[352];
av2[3]=C_fix(18);
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}

/* k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in ... */
static void C_ccall f_4462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4462,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6116,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:737: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[432];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in ... */
static void C_ccall f_4465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4465,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4468,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5992,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:767: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[430];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in ... */
static void C_ccall f_4468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4468,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4471,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5868,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:803: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_4471(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_4471,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4473,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4606,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:865: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=lf[457];
av2[3]=C_fix(8);
av2[4]=t2;
tp(5,av2);}}

/* rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_4473(C_word c,C_word *av){
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
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4473,c,av);}
a=C_alloc(7);
t6=C_eqp(C_fast_retrieve(lf[25]),lf[24]);
if(C_truep(t6)){
t7=C_i_length(t5);
if(C_truep(C_fixnum_greater_or_equal_p(t7,C_fix(2)))){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4568,a[2]=t8,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4570,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:849: filter"));
f_2312(t9,t10,C_u_i_cdr(t5));}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k4508 in k4566 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in ... */
static void C_ccall f_4510(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4510,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:855: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a4511 in k4566 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in ... */
static void C_ccall f_4512(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_4512,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4519,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4555,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:861: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k4517 in a4511 in k4566 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void f_4519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_4519,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:862: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[3];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t2;
av2[2]=C_fix(1);
tp(3,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
C_trace(C_text("c-platform.scm:863: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[5];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[59];
av2[4]=t2;
tp(5,av2);}}}

/* k4528 in k4517 in a4511 in k4566 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in ... */
static void C_ccall f_4530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4530,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:862: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[58];
av2[4]=t2;
tp(5,av2);}}

/* k4549 in k4553 in a4511 in k4566 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in ... */
static void C_ccall f_4551(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4551,c,av);}
t2=((C_word*)t0)[2];
f_4519(t2,C_eqp(C_fix(2),C_i_car(t1)));}

/* k4553 in a4511 in k4566 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void C_ccall f_4555(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4555,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4551,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:861: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_4519(t3,C_SCHEME_FALSE);}}

/* k4566 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_4568(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_4568,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(2)))){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4510,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4512,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:859: chicken.compiler.support#fold-inner"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
tp(4,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a4569 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_4570(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4570,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4596,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:851: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k4590 in k4594 in a4569 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void C_ccall f_4592(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4592,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_eqp(C_fix(1),t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k4594 in a4569 in rewrite-div in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in ... */
static void C_ccall f_4596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4596,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4592,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:852: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_4606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4606,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4609,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:866: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[460];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_4609(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4609,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4612,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5791,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:868: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[452];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in ... */
static void C_ccall f_4612(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4612,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4615,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:886: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[430];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void C_ccall f_4615(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4615,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4618,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:887: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in ... */
static void C_ccall f_4618(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4618,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:888: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[432];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in ... */
static void C_ccall f_4621(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_4621,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4624,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:889: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[457];
av2[3]=C_fix(19);
tp(4,av2);}}

/* k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in ... */
static void C_ccall f_4624(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4624,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:891: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[430];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[456];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(29);
tp(8,av2);}}

/* k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in ... */
static void C_ccall f_4627(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4627,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:892: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[455];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(29);
tp(8,av2);}}

/* k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in ... */
static void C_ccall f_4630(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4630,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4633,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:893: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[432];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[454];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(33);
tp(8,av2);}}

/* k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in ... */
static void C_ccall f_4633(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4633,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4636,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:894: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[452];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[453];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
tp(8,av2);}}

/* k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in ... */
static void C_ccall f_4636(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4636,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:895: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[405];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[451];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
tp(8,av2);}}

/* k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in ... */
static void C_ccall f_4639(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4639,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4642,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:896: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[449];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[450];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
tp(8,av2);}}

/* k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in ... */
static void C_ccall f_4642(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4642,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4645,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:898: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[442];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[448];
tp(6,av2);}}

/* k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in ... */
static void C_ccall f_4645(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4645,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:899: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[440];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[447];
tp(6,av2);}}

/* k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in ... */
static void C_ccall f_4648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4648,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4651,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:900: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[438];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[446];
tp(6,av2);}}

/* k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in ... */
static void C_ccall f_4651(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4651,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4654,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:901: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[436];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[445];
tp(6,av2);}}

/* k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in ... */
static void C_ccall f_4654(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4654,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:902: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[434];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[444];
tp(6,av2);}}

/* k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in ... */
static void C_ccall f_4657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4657,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4660,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:904: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[442];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[443];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in k4463 in ... */
static void C_ccall f_4660(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4660,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:905: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[440];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[441];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in k4466 in ... */
static void C_ccall f_4663(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4663,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4666,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:906: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[438];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[439];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in k4469 in ... */
static void C_ccall f_4666(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4666,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4669,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:907: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[436];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[437];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in k4604 in ... */
static void C_ccall f_4669(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4669,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:908: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[434];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[435];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in k4607 in ... */
static void C_ccall f_4672(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4672,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:910: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[432];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[433];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in k4610 in ... */
static void C_ccall f_4675(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4675,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:911: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[430];
av2[3]=C_fix(13);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[431];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in k4613 in ... */
static void C_ccall f_4678(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4678,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4681,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:912: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[427];
av2[3]=C_fix(13);
av2[4]=lf[428];
av2[5]=lf[429];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in k4616 in ... */
static void C_ccall f_4681(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4681,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:914: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[424];
av2[3]=C_fix(13);
av2[4]=lf[425];
av2[5]=lf[426];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in k4619 in ... */
static void C_ccall f_4684(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4684,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:915: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[422];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[423];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in k4622 in ... */
static void C_ccall f_4687(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4687,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:916: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[420];
av2[3]=C_fix(13);
av2[4]=C_fix(4);
av2[5]=lf[421];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in k4625 in ... */
static void C_ccall f_4690(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4690,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:917: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[418];
av2[3]=C_fix(13);
av2[4]=C_fix(4);
av2[5]=lf[419];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in k4628 in ... */
static void C_ccall f_4693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4693,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:918: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[416];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[417];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in k4631 in ... */
static void C_ccall f_4696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4696,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:919: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[414];
av2[3]=C_fix(13);
av2[4]=C_fix(0);
av2[5]=lf[415];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in k4634 in ... */
static void C_ccall f_4699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4699,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:920: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[412];
av2[3]=C_fix(13);
av2[4]=C_fix(1);
av2[5]=lf[413];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in k4637 in ... */
static void C_ccall f_4702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4702,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:922: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[403];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(1);
av2[6]=lf[410];
av2[7]=lf[411];
tp(8,av2);}}

/* k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in k4640 in ... */
static void C_ccall f_4705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4705,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:923: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[401];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(1);
av2[6]=lf[408];
av2[7]=lf[409];
tp(8,av2);}}

/* k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in k4643 in ... */
static void C_ccall f_4708(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4708,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:924: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[405];
av2[3]=C_fix(14);
av2[4]=lf[24];
av2[5]=C_fix(2);
av2[6]=lf[406];
av2[7]=lf[407];
tp(8,av2);}}

/* k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in k4646 in ... */
static void C_ccall f_4711(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4711,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:926: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[403];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[404];
tp(6,av2);}}

/* k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in k4649 in ... */
static void C_ccall f_4714(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4714,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:927: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[401];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[402];
tp(6,av2);}}

/* k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in k4652 in ... */
static void C_ccall f_4717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4717,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:929: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[399];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[400];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in k4655 in ... */
static void C_ccall f_4720(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4720,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:930: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[397];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[398];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in k4658 in ... */
static void C_ccall f_4723(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4723,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:932: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[395];
av2[3]=C_fix(15);
av2[4]=lf[393];
av2[5]=lf[24];
av2[6]=lf[396];
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in k4661 in ... */
static void C_ccall f_4726(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4726,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:933: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[394];
av2[3]=C_fix(15);
av2[4]=lf[393];
av2[5]=lf[24];
av2[6]=lf[363];
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in k4664 in ... */
static void C_ccall f_4729(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4729,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:934: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[392];
av2[3]=C_fix(15);
av2[4]=lf[393];
av2[5]=lf[24];
av2[6]=lf[366];
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in k4667 in ... */
static void C_ccall f_4732(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4732,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:936: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[390];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[391];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in k4670 in ... */
static void C_ccall f_4735(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4735,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:937: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[388];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[389];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in k4673 in ... */
static void C_ccall f_4738(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4738,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:938: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[386];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[387];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in k4676 in ... */
static void C_ccall f_4741(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4741,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:939: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[384];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[385];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in k4679 in ... */
static void C_ccall f_4744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4744,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:940: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[382];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[383];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in k4682 in ... */
static void C_ccall f_4747(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4747,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:941: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[380];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[381];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4685 in ... */
static void C_ccall f_4750(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4750,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:942: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[378];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[379];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in ... */
static void C_ccall f_4753(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4753,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:943: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[376];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[377];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in ... */
static void C_ccall f_4756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4756,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:944: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[374];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[375];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in ... */
static void C_ccall f_4759(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4759,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4762,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:945: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[372];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[373];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in k4697 in ... */
static void C_ccall f_4762(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4762,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:946: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[370];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[371];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in k4700 in ... */
static void C_ccall f_4765(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4765,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:947: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[368];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[369];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in k4703 in ... */
static void C_ccall f_4768(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4768,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4771,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:948: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[366];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[367];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in k4706 in ... */
static void C_ccall f_4771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4771,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:949: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[361];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[365];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in k4709 in ... */
static void C_ccall f_4774(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4774,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:950: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[363];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[364];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in k4712 in ... */
static void C_ccall f_4777(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4777,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:951: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[361];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[362];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in k4715 in ... */
static void C_ccall f_4780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4780,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:953: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[359];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[360];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
tp(8,av2);}}

/* k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in k4718 in ... */
static void C_ccall f_4783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4783,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4786,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:954: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[357];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[358];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
tp(8,av2);}}

/* k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in k4721 in ... */
static void C_ccall f_4786(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4786,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:955: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[355];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[356];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(3);
tp(8,av2);}}

/* k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in k4724 in ... */
static void C_ccall f_4789(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4789,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4792,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:956: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[352];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[353];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[354];
av2[8]=C_SCHEME_TRUE;
tp(9,av2);}}

/* k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in k4727 in ... */
static void C_ccall f_4792(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4792,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:957: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[349];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[350];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[351];
tp(8,av2);}}

/* k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in k4730 in ... */
static void C_ccall f_4795(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4795,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:958: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[347];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[348];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
tp(9,av2);}}

/* k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in k4733 in ... */
static void C_ccall f_4798(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4798,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4801,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:959: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[345];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[346];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
tp(8,av2);}}

/* k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in k4736 in ... */
static void C_ccall f_4801(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_4801,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:960: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[343];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[344];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_SCHEME_TRUE;
av2[8]=C_SCHEME_TRUE;
tp(9,av2);}}

/* k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in k4739 in ... */
static void C_ccall f_4804(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4804,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4807,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:961: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[340];
av2[3]=C_fix(16);
av2[4]=C_SCHEME_FALSE;
av2[5]=lf[341];
av2[6]=C_SCHEME_TRUE;
av2[7]=lf[342];
tp(8,av2);}}

/* k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in k4742 in ... */
static void C_ccall f_4807(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4807,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4810,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:962: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[338];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[339];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
tp(8,av2);}}

/* k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in k4745 in ... */
static void C_ccall f_4810(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4810,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:963: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[336];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[337];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in k4748 in ... */
static void C_ccall f_4813(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4813,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:964: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[334];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[335];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(2);
tp(8,av2);}}

/* k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in k4751 in ... */
static void C_ccall f_4816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4816,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:965: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[332];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[333];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(6);
tp(8,av2);}}

/* k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in k4754 in ... */
static void C_ccall f_4819(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4819,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4822,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:967: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[330];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[331];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in k4757 in ... */
static void C_ccall f_4822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4822,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4825,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:968: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[328];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[329];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in k4760 in ... */
static void C_ccall f_4825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4825,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4828,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:969: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[326];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[327];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in k4763 in ... */
static void C_ccall f_4828(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4828,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4831,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:970: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[324];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[325];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in k4766 in ... */
static void C_ccall f_4831(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4831,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4834,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:971: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[322];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[323];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in k4769 in ... */
static void C_ccall f_4834(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4834,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4837,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:972: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[320];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[321];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in k4772 in ... */
static void C_ccall f_4837(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4837,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4840,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:973: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[318];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[319];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in k4775 in ... */
static void C_ccall f_4840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4840,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:974: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[316];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[317];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in k4778 in ... */
static void C_ccall f_4843(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4843,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4846,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:975: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[314];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[315];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in k4781 in ... */
static void C_ccall f_4846(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4846,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4849,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:976: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[312];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[313];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in k4784 in ... */
static void C_ccall f_4849(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4849,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:977: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[310];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[311];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in k4787 in ... */
static void C_ccall f_4852(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4852,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4855,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:978: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[308];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[309];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in k4790 in ... */
static void C_ccall f_4855(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4855,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4858,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:982: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[306];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[307];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(5);
tp(8,av2);}}

/* k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in k4793 in ... */
static void C_ccall f_4858(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4858,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4861,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:983: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[304];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[305];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fix(5);
tp(8,av2);}}

/* k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in k4796 in ... */
static void C_ccall f_4861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4861,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:985: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[302];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[303];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in k4799 in ... */
static void C_ccall f_4864(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_4864,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:986: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[300];
av2[3]=C_fix(16);
av2[4]=C_fix(1);
av2[5]=lf[301];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in k4802 in ... */
static void C_ccall f_4867(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4867,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5734,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:988: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[299];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in ... */
static void C_ccall f_4870(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4870,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1006: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[294];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[295];
av2[6]=lf[296];
tp(7,av2);}}

/* k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in ... */
static void C_ccall f_4873(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4873,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1007: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[291];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[292];
av2[6]=lf[293];
tp(7,av2);}}

/* k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in ... */
static void C_ccall f_4876(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4876,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4879,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1008: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[289];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[290];
tp(6,av2);}}

/* k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in ... */
static void C_ccall f_4879(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4879,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4882,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1009: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[287];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[288];
tp(6,av2);}}

/* k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in ... */
static void C_ccall f_4882(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4882,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1010: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[284];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[285];
av2[6]=lf[286];
tp(7,av2);}}

/* k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in ... */
static void C_ccall f_4885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4885,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4888,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1011: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[281];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[282];
av2[6]=lf[283];
tp(7,av2);}}

/* k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in ... */
static void C_ccall f_4888(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4888,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4891,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1012: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[278];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[279];
av2[6]=lf[280];
tp(7,av2);}}

/* k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in ... */
static void C_ccall f_4891(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4891,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4894,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1013: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[275];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[276];
av2[6]=lf[277];
tp(7,av2);}}

/* k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in ... */
static void C_ccall f_4894(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4894,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4897,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1014: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[272];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[273];
av2[6]=lf[274];
tp(7,av2);}}

/* k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in ... */
static void C_ccall f_4897(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4897,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1015: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[269];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[270];
av2[6]=lf[271];
tp(7,av2);}}

/* k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in ... */
static void C_ccall f_4900(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4900,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4903,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1016: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[267];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[268];
tp(6,av2);}}

/* k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in ... */
static void C_ccall f_4903(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_4903,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4906,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5612,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:1018: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[266];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in ... */
static void C_ccall f_4906(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4906,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4909,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1052: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[259];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[260];
tp(6,av2);}}

/* k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in ... */
static void C_ccall f_4909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4909,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1053: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[257];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[258];
tp(6,av2);}}

/* k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in ... */
static void C_ccall f_4912(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4912,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1054: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[255];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[256];
tp(6,av2);}}

/* k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in ... */
static void C_ccall f_4915(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4915,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4918,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1055: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[253];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[254];
tp(6,av2);}}

/* k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in ... */
static void C_ccall f_4918(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4918,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1056: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[251];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[252];
tp(6,av2);}}

/* k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in ... */
static void C_ccall f_4921(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4921,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1057: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[249];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[250];
tp(6,av2);}}

/* k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in ... */
static void C_ccall f_4924(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4924,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1058: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[247];
av2[3]=C_fix(17);
av2[4]=C_fix(3);
av2[5]=lf[248];
tp(6,av2);}}

/* k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in ... */
static void C_ccall f_4927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4927,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1059: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[244];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[245];
av2[6]=lf[246];
tp(7,av2);}}

/* k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in ... */
static void C_ccall f_4930(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4930,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1060: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[242];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[243];
tp(6,av2);}}

/* k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in ... */
static void C_ccall f_4933(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4933,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1061: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[240];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[241];
tp(6,av2);}}

/* k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in ... */
static void C_ccall f_4936(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4936,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1062: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[237];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[238];
av2[6]=lf[239];
tp(7,av2);}}

/* k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in ... */
static void C_ccall f_4939(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4939,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1063: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[235];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[236];
tp(6,av2);}}

/* k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in ... */
static void C_ccall f_4942(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4942,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1064: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[232];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[234];
tp(6,av2);}}

/* k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in ... */
static void C_ccall f_4945(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4945,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1065: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[232];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[233];
tp(6,av2);}}

/* k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in ... */
static void C_ccall f_4948(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4948,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1066: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[230];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[231];
tp(6,av2);}}

/* k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in ... */
static void C_ccall f_4951(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4951,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1067: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[228];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[229];
tp(6,av2);}}

/* k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in k4889 in ... */
static void C_ccall f_4954(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4954,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1068: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[226];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[227];
tp(6,av2);}}

/* k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in k4892 in ... */
static void C_ccall f_4957(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4957,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1069: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[224];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[225];
tp(6,av2);}}

/* k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in k4895 in ... */
static void C_ccall f_4960(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4960,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1070: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[222];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[223];
tp(6,av2);}}

/* k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in k4898 in ... */
static void C_ccall f_4963(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4963,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1071: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[220];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[221];
tp(6,av2);}}

/* k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in k4901 in ... */
static void C_ccall f_4966(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4966,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1072: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[218];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[219];
tp(6,av2);}}

/* k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in k4904 in ... */
static void C_ccall f_4969(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4969,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1073: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[216];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[217];
tp(6,av2);}}

/* k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in k4907 in ... */
static void C_ccall f_4972(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4972,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1074: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[214];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[215];
tp(6,av2);}}

/* k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in k4910 in ... */
static void C_ccall f_4975(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4975,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1075: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[212];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[213];
tp(6,av2);}}

/* k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in k4913 in ... */
static void C_ccall f_4978(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4978,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1076: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[210];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[211];
tp(6,av2);}}

/* k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in k4916 in ... */
static void C_ccall f_4981(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_4981,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1077: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[208];
av2[3]=C_fix(17);
av2[4]=C_fix(2);
av2[5]=lf[209];
tp(6,av2);}}

/* k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in k4919 in ... */
static void C_ccall f_4984(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4984,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1079: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[206];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[207];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in k4922 in ... */
static void C_ccall f_4987(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4987,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1082: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[203];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[205];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in k4925 in ... */
static void C_ccall f_4990(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4990,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1083: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[203];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[204];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in k4928 in ... */
static void C_ccall f_4993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4993,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1084: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[200];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[202];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in k4931 in ... */
static void C_ccall f_4996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4996,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1085: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[200];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[201];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in k4934 in ... */
static void C_ccall f_4999(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_4999,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1086: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[197];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[199];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in k4937 in ... */
static void C_ccall f_5002(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5002,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1087: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[197];
av2[3]=C_fix(2);
av2[4]=C_fix(2);
av2[5]=lf[198];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in k4940 in ... */
static void C_ccall f_5005(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5005,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1089: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[195];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[196];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
tp(8,av2);}}

/* k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in k4943 in ... */
static void C_ccall f_5008(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5008,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1090: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[193];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[194];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fix(5);
tp(8,av2);}}

/* k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in k4946 in ... */
static void C_ccall f_5011(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5011,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1092: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[190];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[192];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in k4949 in ... */
static void C_ccall f_5014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5014,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1093: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[190];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[191];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in k4952 in ... */
static void C_ccall f_5017(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5017,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1094: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[187];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[189];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in k4955 in ... */
static void C_ccall f_5020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5020,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1095: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[187];
av2[3]=C_fix(16);
av2[4]=C_fix(2);
av2[5]=lf[188];
av2[6]=C_SCHEME_TRUE;
av2[7]=C_fast_retrieve(lf[11]);
tp(8,av2);}}

/* k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in k4958 in ... */
static void C_ccall f_5023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5023,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1097: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[184];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[186];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in k4961 in ... */
static void C_ccall f_5026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5026,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1098: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[184];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[185];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in k4964 in ... */
static void C_ccall f_5029(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5029,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1099: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[181];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[183];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in k4967 in ... */
static void C_ccall f_5032(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5032,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1100: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[181];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[182];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in k4970 in ... */
static void C_ccall f_5035(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5035,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5038,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1101: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[178];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[180];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in k4973 in ... */
static void C_ccall f_5038(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5038,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1102: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[178];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[179];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in k4976 in ... */
static void C_ccall f_5041(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5041,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1103: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[175];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[177];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in k4979 in ... */
static void C_ccall f_5044(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5044,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1104: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[175];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[176];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in k4982 in ... */
static void C_ccall f_5047(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5047,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1105: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[172];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[174];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in k4985 in ... */
static void C_ccall f_5050(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5050,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1106: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[172];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[173];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in k4988 in ... */
static void C_ccall f_5053(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5053,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1107: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[169];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[171];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in k4991 in ... */
static void C_ccall f_5056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5056,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1108: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[169];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[170];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in k4994 in ... */
static void C_ccall f_5059(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5059,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1109: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[166];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[168];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in k4997 in ... */
static void C_ccall f_5062(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5062,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5065,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1110: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[166];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[167];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in k5000 in ... */
static void C_ccall f_5065(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5065,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5068,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1111: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[163];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[165];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in k5003 in ... */
static void C_ccall f_5068(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5068,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5071,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1112: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[163];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[164];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in k5006 in ... */
static void C_ccall f_5071(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5071,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5074,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1113: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[160];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[162];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in k5009 in ... */
static void C_ccall f_5074(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5074,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5077,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1114: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[160];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[161];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in k5012 in ... */
static void C_ccall f_5077(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5077,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1115: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[157];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[159];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in k5015 in ... */
static void C_ccall f_5080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5080,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1116: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[157];
av2[3]=C_fix(2);
av2[4]=C_fix(3);
av2[5]=lf[158];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in k5018 in ... */
static void C_ccall f_5083(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5083,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1118: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[154];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[156];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in k5021 in ... */
static void C_ccall f_5086(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5086,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5089,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1119: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[154];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[155];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in k5024 in ... */
static void C_ccall f_5089(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5089,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5092,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1120: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[151];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[153];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in k5027 in ... */
static void C_ccall f_5092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5092,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5095,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1121: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[151];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[152];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in k5030 in ... */
static void C_ccall f_5095(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5095,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1122: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[148];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[150];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in k5033 in ... */
static void C_ccall f_5098(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5098,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5101,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1123: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[148];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[149];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in k5036 in ... */
static void C_ccall f_5101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5101,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1124: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[145];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[147];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in k5039 in ... */
static void C_ccall f_5104(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5104,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1125: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[145];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[146];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in k5042 in ... */
static void C_ccall f_5107(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5107,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1126: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[142];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[144];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in k5045 in ... */
static void C_ccall f_5110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5110,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1127: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[142];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[143];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in k5048 in ... */
static void C_ccall f_5113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5113,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5116,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1128: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[139];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[141];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in k5051 in ... */
static void C_ccall f_5116(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5116,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5119,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1129: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[139];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[140];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in k5054 in ... */
static void C_ccall f_5119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5119,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1130: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[136];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[138];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in k5057 in ... */
static void C_ccall f_5122(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5122,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1131: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[136];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[137];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in k5060 in ... */
static void C_ccall f_5125(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5125,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1132: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[133];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[135];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in k5063 in ... */
static void C_ccall f_5128(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5128,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1133: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[133];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[134];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in k5066 in ... */
static void C_ccall f_5131(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5131,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1134: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[130];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[132];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in k5069 in ... */
static void C_ccall f_5134(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5134,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1135: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[130];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[131];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in k5072 in ... */
static void C_ccall f_5137(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5137,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1136: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[127];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[129];
av2[6]=C_SCHEME_FALSE;
tp(7,av2);}}

/* k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in k5075 in ... */
static void C_ccall f_5140(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5140,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1137: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[127];
av2[3]=C_fix(2);
av2[4]=C_fix(1);
av2[5]=lf[128];
av2[6]=C_SCHEME_TRUE;
tp(7,av2);}}

/* k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in k5078 in ... */
static void C_ccall f_5143(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5143,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5146,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1139: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[125];
av2[3]=C_fix(17);
av2[4]=C_fix(1);
av2[5]=lf[126];
tp(6,av2);}}

/* k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in k5081 in ... */
static void C_ccall f_5146(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5146,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5149,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1141: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[123];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[124];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in k5084 in ... */
static void C_ccall f_5149(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5149,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5152,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1142: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[121];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[122];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in k5087 in ... */
static void C_ccall f_5152(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5152,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5155,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1143: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[119];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[120];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in k5090 in ... */
static void C_ccall f_5155(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5155,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1144: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[117];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[118];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in k5093 in ... */
static void C_ccall f_5158(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5158,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5161,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1145: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[115];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[116];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in k5096 in ... */
static void C_ccall f_5161(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5161,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5164,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1146: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[113];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[114];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in k5099 in ... */
static void C_ccall f_5164(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5164,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1147: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[111];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[112];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in k5102 in ... */
static void C_ccall f_5167(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5167,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5170,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1148: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[109];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[110];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in k5105 in ... */
static void C_ccall f_5170(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5170,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5173,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1149: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[107];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[108];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in k5108 in ... */
static void C_ccall f_5173(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5173,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1150: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[105];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[106];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in k5111 in ... */
static void C_ccall f_5176(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5176,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5179,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1151: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[103];
av2[3]=C_fix(7);
av2[4]=C_fix(1);
av2[5]=lf[104];
av2[6]=C_fix(1);
av2[7]=C_SCHEME_FALSE;
tp(8,av2);}}

/* k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in k5114 in ... */
static void C_ccall f_5179(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5179,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5181,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5286,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:1179: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=lf[102];
av2[3]=C_fix(8);
av2[4]=t2;
tp(5,av2);}}

/* rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in ... */
static void C_ccall f_5181(C_word c,C_word *av){
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
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5181,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
if(C_truep(C_i_pairp(t5))){
t7=C_i_car(t5);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5283,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:1160: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t8;
av2[2]=t7;
tp(3,av2);}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_5203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_5203,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5279,a[2]=t1,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t2)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("c-platform.scm:1162: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}

/* k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_5218(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5218,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5221,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_pairp(C_u_i_cdr(((C_word*)t2)[6])))){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cadr(((C_word*)t2)[6]);
f_5221(2,av2);}}
else{
C_trace(C_text("c-platform.scm:1167: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=lf[62];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}}
else{
t3=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_5221(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,3)))){
C_save_and_reclaim((void *)f_5221,c,av);}
a=C_alloc(41);
t2=C_a_i_list1(&a,1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5236,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5248,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=C_a_i_fixnum_plus(&a,2,((C_word*)t0)[5],C_fix(1));
t7=C_a_i_list2(&a,2,lf[61],t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5256,a[2]=t5,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5258,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[5],a[3]=t11,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_2720(t13,t8,C_fix(0));}

/* k5234 in k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_5236(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5236,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1168: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[48];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5246 in k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_5248(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5248,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1172: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5254 in k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_5256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5256,c,av);}
C_trace(C_text("c-platform.scm:1175: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[28];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* a5257 in k5219 in k5216 in k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void f_5258(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,2)))){
C_save_and_reclaim_args((void *)trf_5258,2,t0,t1);}
C_trace(C_text("c-platform.scm:1178: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word av2[3];
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k5277 in k5201 in k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_5279(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5279,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+5,t2);
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5218,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1164: scheme#<="));{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t4;
av2[2]=C_fix(0);
av2[3]=((C_word*)t0)[5];
av2[4]=C_fix(32);
C_less_or_equal_p(5,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5281 in rewrite-make-vector in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in ... */
static void C_ccall f_5283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5283,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5203,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1161: chicken.base#gensym"));
t4=*((C_word*)lf[50]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in k5117 in ... */
static void C_ccall f_5286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5286,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1180: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[101];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in k5120 in ... */
static void C_ccall f_5289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,6)))){
C_save_and_reclaim((void *)f_5289,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5291,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5413,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:1202: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t3;
av2[2]=lf[45];
av2[3]=C_fix(8);
av2[4]=t2;
tp(5,av2);}}

/* rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_5291(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5291,c,av);}
a=C_alloc(6);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5405,a[2]=t8,a[3]=t4,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:1187: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t9;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_5310(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5310,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
if(C_truep(((C_word*)t0)[6])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5393,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1189: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a5326 in k5387 in k5391 in k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_ccall f_5327(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_5327,c,av);}
a=C_alloc(7);
if(C_truep(C_i_nequalp(t3,C_fix(2)))){
t5=(C_truep(t4)?t4:C_i_cadr(((C_word*)t0)[2]));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("c-platform.scm:1196: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2=av;
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t6;
av2[2]=((C_word*)t0)[5];
av2[3]=t5;
av2[4]=lf[65];
tp(5,av2);}}
else{
t5=t1;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k5368 in k5372 in k5376 in k5380 in a5326 in k5387 in k5391 in k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in ... */
static void C_ccall f_5370(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,4)))){
C_save_and_reclaim((void *)f_5370,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];
t3=C_a_i_list3(&a,3,((C_word*)t2)[2],((C_word*)t2)[3],t1);
C_trace(C_text("c-platform.scm:1199: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t2)[4];
av2[2]=lf[23];
av2[3]=((C_word*)t2)[5];
av2[4]=t3;
tp(5,av2);}}

/* k5372 in k5376 in k5380 in a5326 in k5387 in k5391 in k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in ... */
static void C_ccall f_5374(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5374,c,av);}
a=C_alloc(6);
if(C_truep(C_i_not(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=C_mutate(((C_word *)t0)+5,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5370,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1201: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t4;
av2[2]=C_SCHEME_FALSE;
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5376 in k5380 in a5326 in k5387 in k5391 in k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in ... */
static void C_ccall f_5378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5378,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(C_i_not(t1))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5374,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:1198: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
av2[3]=((C_word*)t2)[6];
av2[4]=lf[63];
tp(5,av2);}}
else{
t3=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5380 in a5326 in k5387 in k5391 in k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_5382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5382,c,av);}
a=C_alloc(3);
if(C_truep(C_i_not(t1))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5378,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1197: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[5];
av2[3]=((C_word*)t0)[6];
av2[4]=lf[64];
tp(5,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k5387 in k5391 in k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_5389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,5)))){
C_save_and_reclaim((void *)f_5389,c,av);}
a=C_alloc(6);
t2=C_i_caddr(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5327,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:1191: ##sys#decompose-lambda-list"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[66]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[66]+1);
av2[1]=((C_word*)t0)[5];
av2[2]=t2;
av2[3]=t3;
tp(4,av2);}}

/* k5391 in k5308 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_5393(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_5393,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[47],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5389,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:1190: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[6];
tp(3,av2);}}
else{
t4=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k5399 in k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_5401(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5401,c,av);}
C_trace(C_text("c-platform.scm:1188: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[56]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[56]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=C_i_car(t1);
av2[4]=lf[57];
tp(5,av2);}}

/* k5403 in rewrite-call/cc in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_5405(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5405,c,av);}
a=C_alloc(11);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5310,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5401,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:1188: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}
else{
t3=((C_word*)t0)[5];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in k5123 in ... */
static void C_ccall f_5413(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_5413,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5416,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1203: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[100];
av2[3]=C_fix(8);
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}

/* k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in k5126 in ... */
static void C_ccall f_5416(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5416,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5420,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5547,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:1233: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[99];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_5420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5420,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5423,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1247: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[97];
av2[3]=C_fix(3);
av2[4]=lf[96];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_5423(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5423,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1248: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[95];
av2[3]=C_fix(3);
av2[4]=lf[96];
av2[5]=C_SCHEME_FALSE;
tp(6,av2);}}

/* k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_5426(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5426,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1249: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[94];
av2[3]=C_fix(3);
av2[4]=lf[84];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_ccall f_5429(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5429,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5432,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1250: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[93];
av2[3]=C_fix(3);
av2[4]=lf[81];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_5432(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,5)))){
C_save_and_reclaim((void *)f_5432,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5435,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1251: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[91];
av2[3]=C_fix(3);
av2[4]=lf[92];
av2[5]=C_fix(0);
tp(6,av2);}}

/* k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in ... */
static void C_ccall f_5435(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5435,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5507,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:1253: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[90];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in ... */
static void C_ccall f_5438(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,6)))){
C_save_and_reclaim((void *)f_5438,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5441,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5467,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:1265: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[87];
av2[3]=C_fix(8);
av2[4]=t3;
tp(5,av2);}}

/* k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in ... */
static void C_ccall f_5441(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5441,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5444,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1277: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[82];
av2[3]=C_fix(23);
av2[4]=C_fix(0);
av2[5]=lf[83];
av2[6]=lf[84];
tp(7,av2);}}

/* k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in ... */
static void C_ccall f_5444(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5444,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1278: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[79];
av2[3]=C_fix(23);
av2[4]=C_fix(1);
av2[5]=lf[80];
av2[6]=lf[81];
tp(7,av2);}}

/* k5445 in k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in ... */
static void C_ccall f_5447(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_5447,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5450,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1279: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[77];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[78];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
tp(9,av2);}}

/* k5448 in k5445 in k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in ... */
static void C_ccall f_5450(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,8)))){
C_save_and_reclaim((void *)f_5450,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1280: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 9) {
  av2=av;
} else {
  av2=C_alloc(9);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[75];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[76];
av2[6]=C_fix(0);
av2[7]=C_fix(0);
av2[8]=C_SCHEME_FALSE;
tp(9,av2);}}

/* k5451 in k5448 in k5445 in k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in ... */
static void C_ccall f_5453(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5453,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1281: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[73];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[74];
av2[6]=C_fix(0);
tp(7,av2);}}

/* k5454 in k5451 in k5448 in k5445 in k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in ... */
static void C_ccall f_5456(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,6)))){
C_save_and_reclaim((void *)f_5456,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5459,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1282: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 7) {
  av2=av;
} else {
  av2=C_alloc(7);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[71];
av2[3]=C_fix(23);
av2[4]=C_fix(2);
av2[5]=lf[72];
av2[6]=C_fix(0);
tp(7,av2);}}

/* k5457 in k5454 in k5451 in k5448 in k5445 in k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in ... */
static void C_ccall f_5459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5459,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1284: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[69];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[70];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
tp(8,av2);}}

/* k5460 in k5457 in k5454 in k5451 in k5448 in k5445 in k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in ... */
static void C_ccall f_5462(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,7)))){
C_save_and_reclaim((void *)f_5462,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5465,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1285: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 8) {
  av2=av;
} else {
  av2=C_alloc(8);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=t2;
av2[2]=lf[67];
av2[3]=C_fix(7);
av2[4]=C_fix(2);
av2[5]=lf[68];
av2[6]=C_SCHEME_FALSE;
av2[7]=C_SCHEME_TRUE;
tp(8,av2);}}

/* k5463 in k5460 in k5457 in k5454 in k5451 in k5448 in k5445 in k5442 in k5439 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in ... */
static void C_ccall f_5465(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5465,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a5466 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in ... */
static void C_ccall f_5467(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5467,c,av);}
a=C_alloc(11);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5489,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(C_fast_retrieve(lf[25]),lf[24]);
t11=(C_truep(t10)?C_a_i_list1(&a,1,lf[85]):C_a_i_list1(&a,1,lf[86]));
C_trace(C_text("c-platform.scm:1272: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t9;
av2[2]=lf[27];
av2[3]=t11;
av2[4]=t5;
tp(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5487 in a5466 in k5436 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in ... */
static void C_ccall f_5489(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5489,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1269: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a5506 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in ... */
static void C_ccall f_5507(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5507,c,av);}
a=C_alloc(11);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5529,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_eqp(C_fast_retrieve(lf[25]),lf[24]);
t11=(C_truep(t10)?C_a_i_list1(&a,1,lf[88]):C_a_i_list1(&a,1,lf[89]));
C_trace(C_text("c-platform.scm:1260: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t9;
av2[2]=lf[27];
av2[3]=t11;
av2[4]=t5;
tp(5,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5527 in a5506 in k5433 in k5430 in k5427 in k5424 in k5421 in k5418 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in ... */
static void C_ccall f_5529(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5529,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1257: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a5546 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in k5129 in ... */
static void C_ccall f_5547(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5547,c,av);}
a=C_alloc(5);
t6=C_i_length(t5);
t7=C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=C_i_car(t5);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5605,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:1239: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t9;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5570 in k5599 in k5603 in a5546 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in ... */
static void C_ccall f_5572(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_5572,c,av);}
a=C_alloc(8);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=C_i_assq(((C_word*)t2)[2],lf[98]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5593,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:1245: chicken.compiler.support#varnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[49]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[49]+1);
av2[1]=t5;
av2[2]=C_i_cdr(t3);
tp(3,av2);}}
else{
t4=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}
else{
t3=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k5591 in k5570 in k5599 in k5603 in a5546 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in ... */
static void C_ccall f_5593(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5593,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1243: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5599 in k5603 in a5546 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in ... */
static void C_ccall f_5601(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5601,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5572,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1241: chicken.compiler.support#intrinsic?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[44]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[44]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[2];
tp(3,av2);}}

/* k5603 in a5546 in k5414 in k5411 in k5287 in k5284 in k5177 in k5174 in k5171 in k5168 in k5165 in k5162 in k5159 in k5156 in k5153 in k5150 in k5147 in k5144 in k5141 in k5138 in k5135 in k5132 in ... */
static void C_ccall f_5605(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_5605,c,av);}
a=C_alloc(5);
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5601,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:1240: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in ... */
static void C_ccall f_5612(C_word c,C_word *av){
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
C_word t11;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_5612,c,av);}
a=C_alloc(10);
t6=C_i_length(t5);
t7=C_eqp(C_fix(2),t6);
if(C_truep(t7)){
t8=C_i_cadr(t5);
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5727,a[2]=t4,a[3]=t1,a[4]=t9,a[5]=t5,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("c-platform.scm:1034: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t10;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5638 in k5725 in a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in ... */
static void C_ccall f_5640(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,4)))){
C_save_and_reclaim((void *)f_5640,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1031: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t3;
tp(5,av2);}}
else{
t3=C_eqp(C_fast_retrieve(lf[25]),lf[24]);
if(C_truep(t3)){
C_trace(C_text("c-platform.scm:1046: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t2;
av2[2]=lf[27];
av2[3]=lf[261];
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}
else{
t4=C_a_i_list2(&a,2,lf[262],C_fix(5));
C_trace(C_text("c-platform.scm:1048: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t2;
av2[2]=lf[28];
av2[3]=t4;
av2[4]=((C_word*)t0)[5];
tp(5,av2);}}}}

/* k5641 in k5638 in k5725 in a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in ... */
static void C_ccall f_5643(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5643,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1031: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5672 in k5721 in k5725 in a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in ... */
static void f_5674(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(33,0,4)))){
C_save_and_reclaim_args((void *)trf_5674,2,t0,t1);}
a=C_alloc(33);
if(C_truep(t1)){
if(C_truep(C_i_negativep(((C_word*)t0)[2]))){
t2=C_i_car(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5696,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_s_a_i_negate(&a,1,((C_word*)t0)[2]);
C_trace(C_text("c-platform.scm:1041: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[3];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=t4;
tp(3,av2);}}
else{
t2=C_i_car(((C_word*)t0)[3]);
t3=C_a_i_list2(&a,2,t2,((C_word*)t0)[5]);
C_trace(C_text("c-platform.scm:1042: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[5];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=lf[27];
av2[3]=lf[264];
av2[4]=t3;
tp(5,av2);}}}
else{
t2=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_5640(2,av2);}}}

/* k5694 in k5672 in k5721 in k5725 in a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in ... */
static void C_ccall f_5696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5696,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:1039: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[263];
av2[4]=t2;
tp(5,av2);}}

/* k5717 in k5721 in k5725 in a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in ... */
static void C_ccall f_5719(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5719,c,av);}
t2=((C_word*)t0)[2];
f_5674(t2,C_i_not(t1));}

/* k5721 in k5725 in a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in ... */
static void C_ccall f_5723(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5723,c,av);}
a=C_alloc(9);
t2=C_i_car(t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5674,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5719,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1037: chicken.compiler.support#big-fixnum?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[265]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[265]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}
else{
t4=t3;
f_5674(t4,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5640(2,av2);}}}

/* k5725 in a5611 in k4901 in k4898 in k4895 in k4892 in k4889 in k4886 in k4883 in k4880 in k4877 in k4874 in k4871 in k4868 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in ... */
static void C_ccall f_5727(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_5727,c,av);}
a=C_alloc(11);
t2=C_eqp(lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=C_eqp(C_fast_retrieve(lf[25]),lf[24]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5723,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:1036: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}
else{
t5=t3;{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_SCHEME_FALSE;
f_5640(2,av2);}}}
else{
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_5640(2,av2);}}}

/* a5733 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in k4805 in ... */
static void C_ccall f_5734(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word t13;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5734,c,av);}
a=C_alloc(16);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(3));
if(C_truep(t7)){
t8=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5756,a[2]=t4,a[3]=t1,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_i_caddr(t5);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5766,a[2]=t9,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5784,a[2]=t11,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:1000: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t12;
av2[2]=t10;
tp(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k5754 in a5733 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in ... */
static void C_ccall f_5756(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5756,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:994: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5764 in a5733 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in ... */
static void C_ccall f_5766(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_5766,c,av);}
if(C_truep(t1)){
C_trace(C_text("c-platform.scm:997: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[27];
av2[3]=lf[297];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}
else{
C_trace(C_text("c-platform.scm:997: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[27];
av2[3]=lf[298];
av2[4]=((C_word*)t0)[3];
tp(5,av2);}}}

/* k5778 in k5782 in a5733 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in ... */
static void C_ccall f_5780(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_5780,c,av);}
C_trace(C_text("c-platform.scm:1001: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_i_car(t1);
tp(3,av2);}}

/* k5782 in a5733 in k4865 in k4862 in k4859 in k4856 in k4853 in k4850 in k4847 in k4844 in k4841 in k4838 in k4835 in k4832 in k4829 in k4826 in k4823 in k4820 in k4817 in k4814 in k4811 in k4808 in ... */
static void C_ccall f_5784(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5784,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5780,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:1001: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_5766(2,av2);}}}

/* a5790 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in ... */
static void C_ccall f_5791(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_5791,c,av);}
a=C_alloc(16);
t6=C_eqp(lf[24],C_fast_retrieve(lf[25]));
if(C_truep(t6)){
t7=C_i_length(t5);
t8=C_eqp(t7,C_fix(2));
if(C_truep(t8)){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=C_i_cadr(t5);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5822,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5825,a[2]=t5,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5861,a[2]=t12,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:879: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t13;
av2[2]=t10;
tp(3,av2);}}
else{
t9=t1;{
C_word *av2=av;
av2[0]=t9;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t9+1)))(2,av2);}}}
else{
t7=t1;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}

/* k5820 in a5790 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void C_ccall f_5822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5822,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:875: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5823 in a5790 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void f_5825(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_5825,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5840,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:883: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[3];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=C_fix(1);
tp(3,av2);}}
else{
C_trace(C_text("c-platform.scm:884: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[5];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[459];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}}

/* k5838 in k5823 in a5790 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in ... */
static void C_ccall f_5840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5840,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:881: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[458];
av2[4]=t2;
tp(5,av2);}}

/* k5855 in k5859 in a5790 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in ... */
static void C_ccall f_5857(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5857,c,av);}
t2=((C_word*)t0)[2];
f_5825(t2,C_eqp(C_fix(2),C_i_car(t1)));}

/* k5859 in a5790 in k4607 in k4604 in k4469 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in ... */
static void C_ccall f_5861(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5861,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5857,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:880: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_5825(t3,C_SCHEME_FALSE);}}

/* a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_5868(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5868,c,av);}
a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?t6:C_i_not(C_eqp(C_fast_retrieve(lf[25]),lf[24])));
if(C_truep(t7)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_i_cdr(t5);
if(C_truep(C_i_nullp(t8))){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5899,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fast_retrieve(lf[26]))){
C_trace(C_text("c-platform.scm:817: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[461];
av2[4]=t5;
tp(5,av2);}}
else{
C_trace(C_text("c-platform.scm:817: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[462];
av2[4]=t5;
tp(5,av2);}}}
else{
t9=C_u_i_car(t5);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5952,a[2]=t9,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5954,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:823: filter"));
f_2312(t10,t11,C_u_i_cdr(t5));}}}

/* k5897 in a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_5899(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5899,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:814: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k5925 in k5950 in a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_5927(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5927,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:829: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a5928 in k5950 in a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_5929(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_5929,c,av);}
a=C_alloc(6);
t4=(C_truep(C_fast_retrieve(lf[26]))?lf[463]:lf[464]);
t5=C_a_i_list2(&a,2,t2,t3);
C_trace(C_text("c-platform.scm:835: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t1;
av2[2]=lf[27];
av2[3]=t4;
av2[4]=t5;
tp(5,av2);}}

/* k5950 in a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_5952(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_5952,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(2)))){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5929,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:833: chicken.compiler.support#fold-inner"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
tp(4,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a5953 in a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_5954(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5954,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5977,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:825: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k5971 in k5975 in a5953 in a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in ... */
static void C_ccall f_5973(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5973,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_i_zerop(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k5975 in a5953 in a5867 in k4466 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_5977(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_5977,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5973,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:826: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in ... */
static void C_ccall f_5992(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_5992,c,av);}
a=C_alloc(8);
t6=C_i_nullp(t5);
t7=(C_truep(t6)?t6:C_i_not(C_eqp(C_fast_retrieve(lf[25]),lf[24])));
if(C_truep(t7)){
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=C_i_cdr(t5);
if(C_truep(C_i_nullp(t8))){
t9=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6023,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fast_retrieve(lf[26]))){
C_trace(C_text("c-platform.scm:780: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[465];
av2[4]=t5;
tp(5,av2);}}
else{
C_trace(C_text("c-platform.scm:780: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2=av;
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t10;
av2[2]=lf[27];
av2[3]=lf[466];
av2[4]=t5;
tp(5,av2);}}}
else{
t9=C_u_i_car(t5);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6076,a[2]=t9,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6078,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:786: filter"));
f_2312(t10,t11,C_u_i_cdr(t5));}}}

/* k6021 in a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_6023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6023,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:777: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k6049 in k6074 in a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_6051(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6051,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:792: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a6052 in k6074 in a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_6053(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6053,c,av);}
a=C_alloc(6);
t4=(C_truep(C_fast_retrieve(lf[26]))?lf[467]:lf[468]);
t5=C_a_i_list2(&a,2,t2,t3);
C_trace(C_text("c-platform.scm:798: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t1;
av2[2]=lf[27];
av2[3]=t4;
av2[4]=t5;
tp(5,av2);}}

/* k6074 in a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_6076(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,4)))){
C_save_and_reclaim((void *)f_6076,c,av);}
a=C_alloc(13);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(2)))){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6053,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:796: chicken.compiler.support#fold-inner"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=t2;
tp(4,av2);}}
else{
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* a6077 in a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_6078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6078,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6101,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:788: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k6095 in k6099 in a6077 in a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_6097(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6097,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_i_zerop(t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6099 in a6077 in a5991 in k4463 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_6101(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6101,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6097,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:789: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in ... */
static void C_ccall f_6116(C_word c,C_word *av){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,3)))){
C_save_and_reclaim((void *)f_6116,c,av);}
a=C_alloc(6);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6120,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6234,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:746: filter"));
f_2312(t6,t7,t5);}

/* k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in ... */
static void C_ccall f_6120(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6120,c,av);}
a=C_alloc(10);
if(C_truep(C_i_nullp(t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:751: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=C_fix(0);
tp(3,av2);}}
else{
t2=C_i_cdr(t1);
if(C_truep(C_i_nullp(t2))){
t3=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t4=C_i_car(t1);
t5=C_a_i_list2(&a,2,((C_word*)t0)[2],t4);
C_trace(C_text("c-platform.scm:753: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=t3;
av2[4]=t5;
tp(5,av2);}}
else{
t3=C_eqp(C_fast_retrieve(lf[25]),lf[24]);
if(C_truep(t3)){
t4=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6185,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("c-platform.scm:759: chicken.compiler.support#fold-inner"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[60]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[60]+1);
av2[1]=t5;
av2[2]=t6;
av2[3]=t1;
tp(4,av2);}}
else{
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}}}

/* k6139 in k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_6141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6141,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:751: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k6181 in k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_6183(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6183,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:755: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* a6184 in k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_6185(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_6185,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6192,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6228,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:761: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t5;
av2[2]=t3;
tp(3,av2);}}

/* k6190 in a6184 in k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void f_6192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_6192,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:762: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word av2[3];
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t2;
av2[2]=C_fix(1);
tp(3,av2);}}
else{
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],((C_word*)t0)[4]);
C_trace(C_text("c-platform.scm:763: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[5];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[470];
av2[4]=t2;
tp(5,av2);}}}

/* k6201 in k6190 in a6184 in k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_6203(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6203,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:762: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[27];
av2[3]=lf[469];
av2[4]=t2;
tp(5,av2);}}

/* k6222 in k6226 in a6184 in k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in ... */
static void C_ccall f_6224(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6224,c,av);}
t2=((C_word*)t0)[2];
f_6192(t2,C_eqp(C_fix(2),C_i_car(t1)));}

/* k6226 in a6184 in k6118 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_6228(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6228,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:761: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_6192(t3,C_SCHEME_FALSE);}}

/* a6233 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in ... */
static void C_ccall f_6234(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6234,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6260,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:748: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k6254 in k6258 in a6233 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in ... */
static void C_ccall f_6256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6256,c,av);}
t2=C_i_car(t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_not(C_eqp(C_fix(1),t2));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k6258 in a6233 in a6115 in k4460 in k4457 in k4454 in k4451 in k4448 in k4445 in k4442 in k4439 in k4436 in k4433 in k4430 in k4427 in k4424 in k4421 in k4418 in k4415 in k4412 in k4409 in k4406 in ... */
static void C_ccall f_6260(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_6260,c,av);}
a=C_alloc(3);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:749: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_TRUE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6262(C_word c,C_word *av){
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
C_word t11;
C_word t12;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_6262,c,av);}
a=C_alloc(13);
t6=C_i_length(t5);
t7=C_eqp(t6,C_fix(2));
if(C_truep(t7)){
t8=C_i_car(t5);
t9=C_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6278,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t9,a[6]=t8,tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6418,a[2]=t4,a[3]=t10,a[4]=t9,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:354: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2=av;
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t11;
av2[2]=t8;
tp(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6278(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_6278,c,av);}
a=C_alloc(15);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6305,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6372,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:358: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}}

/* k6282 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6284(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,4)))){
C_save_and_reclaim((void *)f_6284,c,av);}
a=C_alloc(8);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:369: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=lf[27];
av2[3]=lf[926];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}}

/* k6300 in k6282 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6302(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6302,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:367: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k6303 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_6305(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_6305,2,t0,t1);}
a=C_alloc(9);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_6308(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6349,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:361: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word av2[3];
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k6306 in k6303 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_6308(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_6308,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:366: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word av2[5];
av2[0]=*((C_word*)lf[22]+1);
av2[1]=t3;
av2[2]=lf[27];
av2[3]=lf[927];
av2[4]=((C_word*)t0)[4];
tp(5,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_6284(2,av2);}}}

/* k6321 in k6306 in k6303 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_6323(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6323,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:364: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k6333 in k6343 in k6347 in k6303 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void C_ccall f_6335(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6335,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];
f_6308(t3,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t2)[3])));}

/* k6343 in k6347 in k6303 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_6345(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6345,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6335,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:363: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k6347 in k6303 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6349(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6349,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6345,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:362: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_6308(t3,C_SCHEME_FALSE);}}

/* k6356 in k6366 in k6370 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_6358(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_6358,c,av);}
t2=((C_word*)t0)[2];
t3=((C_word*)t2)[2];
f_6305(t3,(C_truep(t1)?t1:C_i_symbolp(((C_word*)t2)[3])));}

/* k6366 in k6370 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6368(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6368,c,av);}
a=C_alloc(3);
t2=C_i_car(t1);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6358,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:360: chicken.compiler.support#immediate?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[32]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[32]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k6370 in k6276 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6372(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_6372,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[31],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6368,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("c-platform.scm:359: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_6305(t3,C_SCHEME_FALSE);}}

/* k6400 in k6408 in k6404 in k6412 in k6416 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in ... */
static void C_ccall f_6402(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_6402,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("c-platform.scm:357: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[22]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[22]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[23];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k6404 in k6412 in k6416 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_6406,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6410,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:356: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k6408 in k6404 in k6412 in k6416 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 in ... */
static void C_ccall f_6410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_6410,c,av);}
a=C_alloc(8);
if(C_truep(C_i_equalp(((C_word*)t0)[2],t1))){
t2=C_a_i_list1(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6402,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:357: chicken.compiler.support#qnode"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[29]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[29]+1);
av2[1]=t3;
av2[2]=C_SCHEME_TRUE;
tp(3,av2);}}
else{
t2=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
f_6278(2,av2);}}}

/* k6412 in k6416 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6414(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6414,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[35],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6406,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("c-platform.scm:356: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[33]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[33]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}
else{
t4=((C_word*)t2)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
f_6278(2,av2);}}}

/* k6416 in a6261 in k3254 in k3251 in k3095 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
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
t2=C_eqp(lf[35],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6414,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("c-platform.scm:355: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[34]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[34]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
f_6278(2,av2);}}}

/* k6425 in k3092 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6427,c,av);}
C_trace(C_text("c-platform.scm:319: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[929];
av2[3]=C_fix(8);
av2[4]=t1;
tp(5,av2);}}

/* k6429 in k3025 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6431(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_6431,c,av);}
C_trace(C_text("c-platform.scm:318: chicken.compiler.optimizer#rewrite"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[46]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[46]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[933];
av2[3]=C_fix(8);
av2[4]=t1;
tp(5,av2);}}

/* for-each-loop600 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_6433(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,4)))){
C_save_and_reclaim_args((void *)trf_6433,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6443,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_fast_retrieve(lf[937]);
C_trace(C_text("c-platform.scm:290: g616"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[937]);
C_word av2[5];
av2[0]=*((C_word*)lf[937]+1);
av2[1]=t3;
av2[2]=t4;
av2[3]=lf[938];
av2[4]=C_SCHEME_TRUE;
tp(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k6441 in for-each-loop600 in k3016 in k3009 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6443(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_6443,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_6433(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* map-loop562 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void f_6456(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_6456,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("c-platform.scm:127: chicken.base#symbol-append"));
t4=*((C_word*)lf[943]+1);{
C_word av2[4];
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[944];
av2[3]=C_slot(t2,C_fix(0));
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[4],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k6479 in map-loop562 in k2994 in k2991 in k2988 in k2980 in k1699 in k1696 in k1693 in k1690 in k1687 in k1684 */
static void C_ccall f_6481(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_6481,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_6456(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_c_2dplatform_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("c-platform"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_c_2dplatform_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(10112))){
C_save(t1);
C_rereclaim2(10112*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,952);
lf[0]=C_h_intern(&lf[0],10, C_text("c-platform"));
lf[1]=C_h_intern(&lf[1],28, C_text("chicken.compiler.c-platform#"));
lf[4]=C_h_intern(&lf[4],5, C_text("foldr"));
lf[5]=C_h_intern(&lf[5],48, C_text("chicken.compiler.c-platform#default-declarations"));
lf[6]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\014\001\141\154\167\141\171\163\055\142\157\165\156\144\376\003\000\000\002\376\001\000\000\024\001\043\043\163\171\163\043\163\164\141\156\144\141\162\144\055\151\156\160\165\164\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\163\164\141\156\144\141\162\144\055\157\165\164\160\165\164\376\003\000\000\002\376\001\000\000\024\001\043\043\163\171\163\043\163\164\141\156\144\141\162\144\055\145\162\162\157\162\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\165\156\144\145\146\151\156\145\144\055\166\141\154\165\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\142\157\165\156\144\055\164\157\055\160\162\157\143\145\144\165\162\145\376\003\000\000\002\376\001\000\000\016\001\043\043\163\171\163\043\146\157\162\055\145\141\143\150\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\155\141\160\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\160\162\151\156\164\376\003\000\000\002\376\001\000\000\014\001\043\043\163\171\163\043\163\145\164\164\145\162\376\003\000\000\002\376\001\000\000\015\001\043\043\163\171\163\043\163\145\164\163\154\157\164\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\144\171\156\141\155\151\143\055\167\151\156\144\376\003\000\000\002\376\001\000\000\026\001\043\043\163\171\163\043\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\163\164\141\162\164\055\164\151\155\145\162\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\163\164\157\160\055\164\151\155\145\162\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\147\143\144\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\154\143\155\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\163\164\162\165\143\164\165\162\145\077\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\163\154\157\164\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\141\154\154\157\143\141\164\145\055\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\031\001\043\043\163\171\163\043\141\154\154\157\143\141\164\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\154\151\163\164\055\076\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\017\001\043\043\163\171\163\043\142\154\157\143\153\055\162\145\146\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\142\154\157\143\153\055\163\145\164\041\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\154\151\163\164\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\143\157\156\163\376\003\000\000\002\376\001\000\000\014\001\043\043\163\171\163\043\141\160\160\145\156\144\376\003\000\000\002\376\001\000\000\014\001\043\043\163\171\163\043\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\033\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\143\150\141\162\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\146\151\170\156\165\155\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\146\154\157\156\165\155\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\145\162\162\157\162\376\003\000\000\002\376\001\000\000\023\001\043\043\163\171\163\043\160\145\145\153\055\143\055\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\033\001\043\043\163\171\163\043\160\145\145\153\055\156\157\156\156\165\154\154\055\143\055\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\034\001\043\043\163\171\163\043\160\145\145\153\055\141\156\144\055\146\162\145\145\055\143\055\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\044\001\043\043\163\171\163\043\160\145\145\153\055\141\156\144\055\146\162\145\145\055\156\157\156\156\165\154\154\055\143\055\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\034\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\142\154\157\143\153\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\163\164\162\151\156\147\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\163\171\155\142\157\154\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\036\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\160\157\151\156\164\145\162\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\044\001\043\043\163\171\163\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\377\016\376\377\016"));
lf[7]=C_h_intern(&lf[7],58, C_text("chicken.compiler.c-platform#default-profiling-declarations"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\043\043\143\157\162\145\043\144\145\143\154\141\162\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\165\163\145\163\376\003\000\000\002\376\001\000\000\010\001\160\162\157\146\151\154\145\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\142\157\165\156\144\055\164\157\055\160\162\157\143\145\144\165\162\145\376\003\000\000\002\376\001\000\000\023\001\043\043\163\171\163\043\160\162\157\146\151\154\145\055\145\156\164\162\171\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\160\162\157\146\151\154\145\055\145\170\151\164\376\003\000\000\002\376\001\000\000\033\001\043\043\163\171\163\043\162\145\147\151\163\164\145\162\055\160\162\157\146\151\154\145\055\151\156\146\157\376\003\000\000\002\376\001\000\000\036\001\043\043\163\171\163\043\163\145\164\055\160\162\157\146\151\154\145\055\151\156\146\157\055\166\145\143\164\157\162\041\376\377\016\376\377\016\376\377\016"));
lf[9]=C_h_intern(&lf[9],41, C_text("chicken.compiler.c-platform#default-units"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\007\001\154\151\142\162\141\162\171\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\377\016"));
lf[11]=C_h_intern(&lf[11],44, C_text("chicken.compiler.c-platform#words-per-flonum"));
lf[12]=C_h_intern(&lf[12],47, C_text("chicken.compiler.c-platform#target-include-file"));
lf[13]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\143\150\151\143\153\145\156\056\150\000"));
lf[14]=C_h_intern(&lf[14],50, C_text("chicken.compiler.c-platform#valid-compiler-options"));
lf[15]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001\055\150\145\154\160\376\003\000\000\002\376\001\000\000\001\001\150\376\003\000\000\002\376\001\000\000\004\001\150\145\154\160\376\003\000\000\002\376\001\000\000\007\001\166\145\162\163\151\157\156\376\003\000\000\002\376\001\000\000\007\001\166\145\162\142\157\163\145\376\003\000\000\002\376\001\000\000\014\001\145\170\160\154\151\143\151\164\055\165\163\145\376\003\000\000\002\376\001\000\000\010\001\156\157\055\164\162\141\143\145\376\003\000\000\002\376\001\000\000\013\001\156\157\055\167\141\162\156\151\156\147\163\376\003\000\000\002\376\001\000\000\006\001\165\156\163\141\146\145\376\003\000\000\002\376\001\000\000\005\001\142\154\157\143\153\376\003\000\000\002\376\001\000\000\014\001\143\150\145\143\153\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\011\001\164\157\055\163\164\144\157\165\164\376\003\000\000\002\376\001\000\000\025\001\156\157\055\165\163\165\141\154\055\151\156\164\145\147\162\141\164\151\157\156\163\376\003\000\000\002\376\001\000\000\020\001\143\141\163\145\055\151\156\163\145\156\163\151\164\151\166\145\376\003\000\000\002\376\001\000\000\016\001\156\157\055\154\141\155\142\144\141\055\151\156\146\157\376\003\000\000\002\376\001\000\000\007\001\160\162\157\146\151\154\145\376\003\000\000\002\376\001\000\000\006\001\151\156\154\151\156\145\376\003\000\000\002\376\001\000\000\024\001\153\145\145\160\055\163\150\141\144\157\167\145\144\055\155\141\143\162\157\163\376\003\000\000\002\376\001\000\000\021\001\151\147\156\157\162\145\055\162\145\160\157\163\151\164\157\162\171\376\003\000\000\002\376\001\000\000\021\001\146\151\170\156\165\155\055\141\162\151\164\150\155\145\164\151\143\376\003\000\000\002\376\001\000\000\022\001\144\151\163\141\142\154\145\055\151\156\164\145\162\162\165\160\164\163\376\003\000\000\002\376\001\000\000\026\001\157\160\164\151\155\151\172\145\055\154\145\141\146\055\162\157\165\164\151\156\145\163\376\003\000\000\002\376\001\000\000\016\001\143\157\155\160\151\154\145\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\014\001\164\141\147\055\160\157\151\156\164\145\162\163\376\003\000\000\002\376\001\000\000\022\001\141\143\143\165\155\165\154\141\164\145\055\160\162\157\146\151\154\145\376\003\000\000\002\376\001\000\000\035\001\144\151\163\141\142\154\145\055\163\164\141\143\153\055\157\166\145\162\146\154\157\167\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\003\001\162\141\167\376\003\000\000\002\376\001\000\000\012\001\163\160\145\143\151\141\154\151\172\145\376\003\000\000\002\376\001\000\000\036\001\145\155\151\164\055\145\170\164\145\162\156\141\154\055\160\162\157\164\157\164\171\160\145\163\055\146\151\162\163\164\376\003\000\000\002\376\001\000\000\007\001\162\145\154\145\141\163\145\376\003\000\000\002\376\001\000\000\005\001\154\157\143\141\154\376\003\000\000\002\376\001\000\000\015\001\151\156\154\151\156\145\055\147\154\157\142\141\154\376\003\000\000\002\376\001\000\000\014\001\141\156\141\154\171\172\145\055\157\156\154\171\376\003\000\000\002\376\001\000\000\007\001\144\171\156\141\155\151\143\376\003\000\000\002\376\001\000\000\006\001\163\164\141\164\151\143\376\003\000\000\002\376\001\000\000\016\001\156\157\055\141\162\147\143\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\023\001\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\027\001\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\376\003\000\000\002\376\001\000\000\051\001\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\055\146\157\162\055\164\157\160\154\145\166\145\154\055\142\151\156\144\151\156\147\163\376\003\000\000\002\376\001\000\000\017\001\156\157\055\142\157\165\156\144\055\143\150\145\143\153\163\376\003\000\000\002\376\001\000\000\046\001\156\157\055\160\162\157\143\145\144\165\162\145\055\143\150\145\143\153\163\055\146\157\162\055\165\163\165\141\154\055\142\151\156\144\151\156\147\163\376\003\000\000\002\376\001\000\000\022\001\156\157\055\143\157\155\160\151\154\145\162\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\027\001\156\157\055\160\141\162\145\156\164\150\145\163\145\163\055\163\171\156\157\156\171\155\163\376\003\000\000\002\376\001\000\000\013\001\162\067\162\163\055\163\171\156\164\141\170\376\003\000\000\002\376\001\000\000\031\001\145\155\151\164\055\141\154\154\055\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\143\164\055\164\171\160\145\163\376\003\000\000\002\376\001\000\000\004\001\154\146\141\062\376\003\000\000\002\376\001\000\000\012\001\144\145\142\165\147\055\151\156\146\157\376\003\000\000\002\376\001\000\000\033\001\162\145\147\145\156\145\162\141\164\145\055\151\155\160\157\162\164\055\154\151\142\162\141\162\151\145\163\376\003\000\000\002\376\001\000\000\012\001\163\145\164\165\160\055\155\157\144\145\376\003\000\000\002\376\001\000\000\023\001\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\376\003\000\000\002\376\001\000\000\026\001\156\157\055\155\157\144\165\154\145\055\162\145\147\151\163\164\162\141\164\151\157\156\376\377\016"));
lf[16]=C_h_intern(&lf[16],64, C_text("chicken.compiler.c-platform#valid-compiler-options-with-argument"));
lf[17]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001\144\145\142\165\147\376\003\000\000\002\376\001\000\000\004\001\154\151\156\153\376\003\000\000\002\376\001\000\000\016\001\145\155\151\164\055\154\151\156\153\055\146\151\154\145\376\003\000\000\002\376\001\000\000\013\001\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\001\000\000\014\001\151\156\143\154\165\144\145\055\160\141\164\150\376\003\000\000\002\376\001\000\000\011\001\150\145\141\160\055\163\151\172\145\376\003\000\000\002\376\001\000\000\012\001\163\164\141\143\153\055\163\151\172\145\376\003\000\000\002\376\001\000\000\004\001\165\156\151\164\376\003\000\000\002\376\001\000\000\004\001\165\163\145\163\376\003\000\000\002\376\001\000\000\006\001\155\157\144\165\154\145\376\003\000\000\002\376\001\000\000\015\001\153\145\171\167\157\162\144\055\163\164\171\154\145\376\003\000\000\002\376\001\000\000\021\001\162\145\161\165\151\162\145\055\145\170\164\145\156\163\151\157\156\376\003\000\000\002\376\001\000\000\014\001\151\156\154\151\156\145\055\154\151\155\151\164\376\003\000\000\002\376\001\000\000\014\001\160\162\157\146\151\154\145\055\156\141\155\145\376\003\000\000\002\376\001\000\000\007\001\160\162\145\154\165\144\145\376\003\000\000\002\376\001\000\000\010\001\160\157\163\164\154\165\144\145\376\003\000\000\002\376\001\000\000\010\001\160\162\157\154\157\147\165\145\376\003\000\000\002\376\001\000\000\010\001\145\160\151\154\157\147\165\145\376\003\000\000\002\376\001\000\000\007\001\156\165\162\163\145\162\171\376\003\000\000\002\376\001\000\000\006\001\145\170\164\145\156\144\376\003\000\000\002\376\001\000\000\007\001\146\145\141\164\165\162\145\376\003\000\000\002\376\001\000\000\012\001\156\157\055\146\145\141\164\165\162\145\376\003\000\000\002\376\001\000\000\014\001\165\156\162\157\154\154\055\154\151\155\151\164\376\003\000\000\002\376\001\000\000\020\001\145\155\151\164\055\151\156\154\151\156\145\055\146\151\154\145\376\003\000\000\002\376\001\000\000\023\001\143\157\156\163\165\154\164\055\151\156\154\151\156\145\055\146\151\154\145\376\003\000\000\002\376\001\000\000\017\001\145\155\151\164\055\164\171\160\145\163\055\146\151\154\145\376\003\000\000\002\376\001\000\000\022\001\143\157\156\163\165\154\164\055\164\171\160\145\163\055\146\151\154\145\376\003\000\000\002\376\001\000\000\023\001\145\155\151\164\055\151\155\160\157\162\164\055\154\151\142\162\141\162\171\376\377\016"));
lf[18]=C_h_intern(&lf[18],47, C_text("chicken.compiler.core#default-standard-bindings"));
lf[19]=C_h_intern(&lf[19],47, C_text("chicken.compiler.core#default-extended-bindings"));
lf[20]=C_h_intern(&lf[20],39, C_text("chicken.compiler.core#internal-bindings"));
lf[21]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\163\154\157\164\376\003\000\000\002\376\001\000\000\015\001\043\043\163\171\163\043\163\145\164\163\154\157\164\376\003\000\000\002\376\001\000\000\017\001\043\043\163\171\163\043\142\154\157\143\153\055\162\145\146\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\142\154\157\143\153\055\163\145\164\041\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\057\055\062\376\003\000\000\002\376\001\000\000\044\001\043\043\163\171\163\043\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\163\151\172\145\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\142\171\164\145\376\003\000\000\002\376\001\000\000\016\001\043\043\163\171\163\043\160\157\151\156\164\145\162\077\376\003\000\000\002\376\001\000\000\030\001\043\043\163\171\163\043\147\145\156\145\162\151\143\055\163\164\162\165\143\164\165\162\145\077\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\163\164\162\165\143\164\165\162\145\077\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\143\150\145\143\153\055\163\164\162\165\143\164\165\162\145\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\143\150\145\143\153\055\156\165\155\142\145\162\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\143\150\145\143\153\055\154\151\163\164\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\143\150\145\143\153\055\160\141\151\162\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\143\150\145\143\153\055\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\143\150\145\143\153\055\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\023\001\043\043\163\171\163\043\143\150\145\143\153\055\142\157\157\154\145\141\156\376\003\000\000\002\376\001\000\000\024\001\043\043\163\171\163\043\143\150\145\143\153\055\154\157\143\141\164\151\166\145\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\143\150\145\143\153\055\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\143\150\145\143\153\055\162\141\156\147\145\376\003\000\000\002\376\001\000\000\032\001\043\043\163\171\163\043\143\150\145\143\153\055\162\141\156\147\145\057\151\156\164\145\162\156\141\154\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\143\150\145\143\153\055\160\157\162\164\376\003\000\000\002\376\001\000\000\026\001\043\043\163\171\163\043\143\150\145\143\153\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\027\001\043\043\163\171\163\043\143\150\145\143\153\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\143\150\145\143\153\055\157\160\145\156\055\160\157\162\164\376\003\000\000\002\376\001\000\000\026\001\043\043\163\171\163\043\143\150\145\143\153\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\163\151\147\156\141\154\055\150\157\157\153\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\143\150\145\143\153\055\143\150\141\162\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\143\150\145\143\153\055\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\026\001\043\043\163\171\163\043\143\150\145\143\153\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\154\151\163\164\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\143\157\156\163\376\003\000\000\002\376\001\000\000\026\001\043\043\163\171\163\043\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\154\157\156\165\155\055\151\156\055\146\151\170\156\165\155\055\162\141\156\147\145\077\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\151\155\155\145\144\151\141\164\145\077\376\003\000\000\002\376\001\000\000\024\001\043\043\163\171\163\043\143\157\156\164\145\170\164\055\163\167\151\164\143\150\376\003\000\000\002\376\001\000\000\024\001\043\043\163\171\163\043\155\141\153\145\055\163\164\162\165\143\164\165\162\145\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\141\160\160\154\171\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\141\160\160\154\171\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\047\001\143\150\151\143\153\145\156\056\143\157\156\164\151\156\165\141\164\151\157\156\043\143\157\156\164\151\156\165\141\164\151\157\156\055\147\162\141\146\164\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\142\171\164\145\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\155\141\153\145\055\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\014\001\043\043\163\171\163\043\163\145\164\164\145\162\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\143\141\162\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\143\144\162\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\160\141\151\162\077\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\145\161\077\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\154\151\163\164\077\376\003\000\000\002\376\001\000\000\015\001\043\043\163\171\163\043\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\145\161\166\077\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\147\145\164\055\153\145\171\167\157\162\144\376\003\000\000\002\376\001\000\000\033\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\143\150\141\162\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\146\151\170\156\165\155\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\146\154\157\156\165\155\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\034\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\142\154\157\143\153\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\045\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\163\164\162\165\143\164\055\167\162\141\160\160\145\162\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\163\164\162\151\156\147\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\036\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\160\157\151\156\164\145\162\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\166\157\151\144\376\003\000\000\002\376\001\000\000\045\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\162\141\156\147\145\144\055\151\156\164\145\147\145\162\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\056\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\165\156\163\151\147\156\145\144\055\162\141\156\147\145\144\055\151\156\164\145\147\145\162\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\160\145\145\153\055\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\016\001\043\043\163\171\163\043\163\145\164\151\163\154\157\164\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\160\157\153\145\055\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\160\145\162\155\141\156\145\156\164\077\376\003\000\000\002\376\001\000\000\014\001\043\043\163\171\163\043\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\160\157\153\145\055\144\157\165\142\154\145\376\003\000\000\002\376\001\000\000\023\001\043\043\163\171\163\043\151\156\164\145\162\156\055\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\024\001\043\043\163\171\163\043\151\156\164\145\162\156\055\153\145\171\167\157\162\144\376\003\000\000\002\376\001\000\000\023\001\043\043\163\171\163\043\156\165\154\154\055\160\157\151\156\164\145\162\077\376\003\000\000\002\376\001\000\000\017\001\043\043\163\171\163\043\160\145\145\153\055\142\171\164\145\376\003\000\000\002\376\001\000\000\035\001\043\043\163\171\163\043\146\157\162\145\151\147\156\055\163\171\155\142\157\154\055\141\162\147\165\155\145\156\164\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\142\165\146\146\145\162\055\076\163\164\162\151\156\147\041\376\003\000\000\002\376\001\000\000\033\001\043\043\163\171\163\043\163\171\155\142\157\154\055\076\163\164\162\151\156\147\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\024\001\043\043\163\171\163\043\142\165\146\146\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\031\001\043\043\163\171\163\043\163\164\162\151\156\147\055\076\163\171\155\142\157\154\055\156\141\155\145\376\003\000\000\002\376\001\000\000\026\001\043\043\163\171\163\043\142\171\164\145\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\001\000\000\026\001\043\043\163\171\163\043\154\151\163\164\055\076\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\155\141\153\145\055\142\171\164\145\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\022\001\043\043\163\171\163\043\146\151\154\145\055\145\170\151\163\164\163\077\376\003\000\000\002\376\001\000\000\025\001\043\043\163\171\163\043\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\376\003\000\000\002\376\001\000\000\030\001\043\043\163\171\163\043\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\055\143\151\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\154\143\155\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\147\143\144\376\377\016"));
lf[22]=C_h_intern(&lf[22],34, C_text("chicken.compiler.support#make-node"));
lf[23]=C_h_intern(&lf[23],11, C_text("##core#call"));
lf[24]=C_h_intern(&lf[24],6, C_text("fixnum"));
lf[25]=C_h_intern(&lf[25],36, C_text("chicken.compiler.support#number-type"));
lf[26]=C_h_intern(&lf[26],31, C_text("chicken.compiler.support#unsafe"));
lf[27]=C_h_intern(&lf[27],13, C_text("##core#inline"));
lf[28]=C_h_intern(&lf[28],22, C_text("##core#inline_allocate"));
lf[29]=C_h_intern(&lf[29],30, C_text("chicken.compiler.support#qnode"));
lf[30]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\006\103\137\145\161\160\000\376\377\016"));
lf[31]=C_h_intern(&lf[31],5, C_text("quote"));
lf[32]=C_h_intern(&lf[32],35, C_text("chicken.compiler.support#immediate?"));
lf[33]=C_h_intern(&lf[33],40, C_text("chicken.compiler.support#node-parameters"));
lf[34]=C_h_intern(&lf[34],35, C_text("chicken.compiler.support#node-class"));
lf[35]=C_h_intern(&lf[35],15, C_text("##core#variable"));
lf[36]=C_h_intern(&lf[36],3, C_text("map"));
lf[37]=C_h_intern(&lf[37],13, C_text("scheme#append"));
lf[38]=C_h_intern(&lf[38],20, C_text("chicken.base#butlast"));
lf[39]=C_h_intern(&lf[39],11, C_text("##core#proc"));
lf[40]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\010\103\137\141\160\160\154\171\000\376\003\000\000\002\376\377\006\001\376\377\016"));
lf[41]=C_h_intern(&lf[41],6, C_text("values"));
lf[42]=C_h_intern(&lf[42],12, C_text("##sys#values"));
lf[43]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\017\103\137\141\160\160\154\171\137\166\141\154\165\145\163\000\376\003\000\000\002\376\377\006\001\376\377\016"));
lf[44]=C_h_intern(&lf[44],35, C_text("chicken.compiler.support#intrinsic?"));
lf[45]=C_h_intern(&lf[45],37, C_text("scheme#call-with-current-continuation"));
lf[46]=C_h_intern(&lf[46],34, C_text("chicken.compiler.optimizer#rewrite"));
lf[47]=C_h_intern(&lf[47],13, C_text("##core#lambda"));
lf[48]=C_h_intern(&lf[48],3, C_text("let"));
lf[49]=C_h_intern(&lf[49],32, C_text("chicken.compiler.support#varnode"));
lf[50]=C_h_intern(&lf[50],19, C_text("chicken.base#gensym"));
lf[51]=C_h_intern(&lf[51],2, C_text("f_"));
lf[52]=C_h_intern(&lf[52],34, C_text("chicken.compiler.support#debugging"));
lf[53]=C_h_intern(&lf[53],1, C_text("o"));
lf[54]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\052\162\145\155\157\166\151\156\147\040\163\151\156\147\154\145\055\166\141\154\165\145\144\040\140\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\047\000"));
lf[55]=C_h_intern(&lf[55],1, C_text("r"));
lf[56]=C_h_intern(&lf[56],31, C_text("chicken.compiler.support#db-get"));
lf[57]=C_h_intern(&lf[57],5, C_text("value"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\025\103\137\146\151\170\156\165\155\137\163\150\151\146\164\137\162\151\147\150\164\000\376\377\016"));
lf[59]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\020\103\137\146\151\170\156\165\155\137\144\151\166\151\144\145\000\376\377\016"));
lf[60]=C_h_intern(&lf[60],35, C_text("chicken.compiler.support#fold-inner"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\141\137\151\137\166\145\143\164\157\162\000"));
lf[62]=C_h_intern(&lf[62],16, C_text("##core#undefined"));
lf[63]=C_h_intern(&lf[63],16, C_text("inline-transient"));
lf[64]=C_h_intern(&lf[64],8, C_text("assigned"));
lf[65]=C_h_intern(&lf[65],10, C_text("references"));
lf[66]=C_h_intern(&lf[66],27, C_text("##sys#decompose-lambda-list"));
lf[67]=C_h_intern(&lf[67],17, C_text("##sys#get-keyword"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\147\145\164\137\153\145\171\167\157\162\144\000"));
lf[69]=C_h_intern(&lf[69],27, C_text("chicken.keyword#get-keyword"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\147\145\164\137\153\145\171\167\157\162\144\000"));
lf[71]=C_h_intern(&lf[71],33, C_text("chicken.string#substring-index-ci"));
lf[72]=C_h_intern(&lf[72],24, C_text("##sys#substring-index-ci"));
lf[73]=C_h_intern(&lf[73],30, C_text("chicken.string#substring-index"));
lf[74]=C_h_intern(&lf[74],21, C_text("##sys#substring-index"));
lf[75]=C_h_intern(&lf[75],29, C_text("chicken.string#substring-ci=?"));
lf[76]=C_h_intern(&lf[76],20, C_text("##sys#substring-ci=?"));
lf[77]=C_h_intern(&lf[77],26, C_text("chicken.string#substring=?"));
lf[78]=C_h_intern(&lf[78],17, C_text("##sys#substring=?"));
lf[79]=C_h_intern(&lf[79],17, C_text("scheme#write-char"));
lf[80]=C_h_intern(&lf[80],21, C_text("##sys#write-char/port"));
lf[81]=C_h_intern(&lf[81],21, C_text("##sys#standard-output"));
lf[82]=C_h_intern(&lf[82],16, C_text("scheme#read-char"));
lf[83]=C_h_intern(&lf[83],20, C_text("##sys#read-char/port"));
lf[84]=C_h_intern(&lf[84],20, C_text("##sys#standard-input"));
lf[85]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\146\151\170\156\165\155\137\154\145\156\147\164\150\000"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\151\156\164\145\147\145\162\137\154\145\156\147\164\150\000"));
lf[87]=C_h_intern(&lf[87],30, C_text("chicken.bitwise#integer-length"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\165\137\151\137\142\151\164\137\164\157\137\142\157\157\154\000"));
lf[89]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\142\151\164\137\164\157\137\142\157\157\154\000"));
lf[90]=C_h_intern(&lf[90],28, C_text("chicken.bitwise#bit->boolean"));
lf[91]=C_h_intern(&lf[91],31, C_text("chicken.base#current-error-port"));
lf[92]=C_h_intern(&lf[92],20, C_text("##sys#standard-error"));
lf[93]=C_h_intern(&lf[93],26, C_text("scheme#current-output-port"));
lf[94]=C_h_intern(&lf[94],25, C_text("scheme#current-input-port"));
lf[95]=C_h_intern(&lf[95],10, C_text("##sys#void"));
lf[96]=C_h_intern(&lf[96],21, C_text("##sys#undefined-value"));
lf[97]=C_h_intern(&lf[97],17, C_text("chicken.base#void"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\143\150\145\155\145\043\143\141\162\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\141\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\163\143\150\145\155\145\043\143\144\162\376\001\000\000\017\001\163\143\150\145\155\145\043\163\145\164\055\143\144\162\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\162\145\146\376\001\000\000\022\001\163\143\150\145\155\145\043\163\164\162\151\156\147\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\162\145\146\376\001\000\000\022\001\163\143\150\145\155\145\043\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\165\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\163\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\146\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\162\145\146\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\162\145\146\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\043\143\061\062\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\070\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\070\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\035\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\070\055\162\145\146\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\070\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\061\066\055\162\145\146\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\061\066\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\061\066\055\162\145\146\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\061\066\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\063\062\055\162\145\146\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\063\062\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\063\062\055\162\145\146\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\063\062\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\063\062\055\162\145\146\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\063\062\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\066\064\055\162\145\146\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\066\064\055\163\145\164\041\376\003\000\000\002\376\003\000\000\002\376\001\000\000\047\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\142\154\157\143\153\055\162\145\146\376\001\000\000\050\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\142\154\157\143\153\055\163\145\164\041\376\377\016"));
lf[99]=C_h_intern(&lf[99],12, C_text("##sys#setter"));
lf[100]=C_h_intern(&lf[100],14, C_text("scheme#call/cc"));
lf[101]=C_h_intern(&lf[101],17, C_text("##sys#make-vector"));
lf[102]=C_h_intern(&lf[102],18, C_text("scheme#make-vector"));
lf[103]=C_h_intern(&lf[103],51, C_text("chicken.number-vector#c128vector->bytevector/shared"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[105]=C_h_intern(&lf[105],50, C_text("chicken.number-vector#c64vector->bytevector/shared"));
lf[106]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[107]=C_h_intern(&lf[107],50, C_text("chicken.number-vector#f64vector->bytevector/shared"));
lf[108]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[109]=C_h_intern(&lf[109],50, C_text("chicken.number-vector#f32vector->bytevector/shared"));
lf[110]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[111]=C_h_intern(&lf[111],50, C_text("chicken.number-vector#s64vector->bytevector/shared"));
lf[112]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[113]=C_h_intern(&lf[113],50, C_text("chicken.number-vector#u64vector->bytevector/shared"));
lf[114]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[115]=C_h_intern(&lf[115],50, C_text("chicken.number-vector#s32vector->bytevector/shared"));
lf[116]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[117]=C_h_intern(&lf[117],50, C_text("chicken.number-vector#u32vector->bytevector/shared"));
lf[118]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[119]=C_h_intern(&lf[119],50, C_text("chicken.number-vector#s16vector->bytevector/shared"));
lf[120]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[121]=C_h_intern(&lf[121],50, C_text("chicken.number-vector#u16vector->bytevector/shared"));
lf[122]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[123]=C_h_intern(&lf[123],49, C_text("chicken.number-vector#s8vector->bytevector/shared"));
lf[124]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[125]=C_h_intern(&lf[125],18, C_text("chicken.base#atom?"));
lf[126]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\156\157\164\137\160\141\151\162\137\160\000"));
lf[127]=C_h_intern(&lf[127],38, C_text("chicken.number-vector#f64vector-length"));
lf[128]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\146\066\064\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[129]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\146\066\064\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[130]=C_h_intern(&lf[130],38, C_text("chicken.number-vector#f32vector-length"));
lf[131]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\146\063\062\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[132]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\146\063\062\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[133]=C_h_intern(&lf[133],38, C_text("chicken.number-vector#s64vector-length"));
lf[134]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\163\066\064\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[135]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\163\066\064\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[136]=C_h_intern(&lf[136],38, C_text("chicken.number-vector#u64vector-length"));
lf[137]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\165\066\064\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[138]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\165\066\064\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[139]=C_h_intern(&lf[139],38, C_text("chicken.number-vector#s32vector-length"));
lf[140]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\163\063\062\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[141]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\163\063\062\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[142]=C_h_intern(&lf[142],38, C_text("chicken.number-vector#u32vector-length"));
lf[143]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\165\063\062\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[144]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\165\063\062\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[145]=C_h_intern(&lf[145],38, C_text("chicken.number-vector#s16vector-length"));
lf[146]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\163\061\066\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[147]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\163\061\066\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[148]=C_h_intern(&lf[148],38, C_text("chicken.number-vector#u16vector-length"));
lf[149]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\165\061\066\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[150]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\165\061\066\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[151]=C_h_intern(&lf[151],37, C_text("chicken.number-vector#s8vector-length"));
lf[152]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\151\137\163\070\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[153]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\163\070\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[154]=C_h_intern(&lf[154],37, C_text("chicken.number-vector#u8vector-length"));
lf[155]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\151\137\142\171\164\145\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[156]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\103\137\165\137\151\137\142\171\164\145\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[157]=C_h_intern(&lf[157],36, C_text("chicken.number-vector#f64vector-set!"));
lf[158]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\146\066\064\166\145\143\164\157\162\137\163\145\164\000"));
lf[159]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\146\066\064\166\145\143\164\157\162\137\163\145\164\000"));
lf[160]=C_h_intern(&lf[160],36, C_text("chicken.number-vector#f32vector-set!"));
lf[161]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\146\063\062\166\145\143\164\157\162\137\163\145\164\000"));
lf[162]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\146\063\062\166\145\143\164\157\162\137\163\145\164\000"));
lf[163]=C_h_intern(&lf[163],36, C_text("chicken.number-vector#s64vector-set!"));
lf[164]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\163\066\064\166\145\143\164\157\162\137\163\145\164\000"));
lf[165]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\163\066\064\166\145\143\164\157\162\137\163\145\164\000"));
lf[166]=C_h_intern(&lf[166],36, C_text("chicken.number-vector#u64vector-set!"));
lf[167]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\165\066\064\166\145\143\164\157\162\137\163\145\164\000"));
lf[168]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\165\066\064\166\145\143\164\157\162\137\163\145\164\000"));
lf[169]=C_h_intern(&lf[169],36, C_text("chicken.number-vector#s32vector-set!"));
lf[170]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\163\063\062\166\145\143\164\157\162\137\163\145\164\000"));
lf[171]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\163\063\062\166\145\143\164\157\162\137\163\145\164\000"));
lf[172]=C_h_intern(&lf[172],36, C_text("chicken.number-vector#u32vector-set!"));
lf[173]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\165\063\062\166\145\143\164\157\162\137\163\145\164\000"));
lf[174]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\165\063\062\166\145\143\164\157\162\137\163\145\164\000"));
lf[175]=C_h_intern(&lf[175],36, C_text("chicken.number-vector#s16vector-set!"));
lf[176]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\163\061\066\166\145\143\164\157\162\137\163\145\164\000"));
lf[177]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\163\061\066\166\145\143\164\157\162\137\163\145\164\000"));
lf[178]=C_h_intern(&lf[178],36, C_text("chicken.number-vector#u16vector-set!"));
lf[179]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\165\061\066\166\145\143\164\157\162\137\163\145\164\000"));
lf[180]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\165\061\066\166\145\143\164\157\162\137\163\145\164\000"));
lf[181]=C_h_intern(&lf[181],35, C_text("chicken.number-vector#s8vector-set!"));
lf[182]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\163\070\166\145\143\164\157\162\137\163\145\164\000"));
lf[183]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\165\137\151\137\163\070\166\145\143\164\157\162\137\163\145\164\000"));
lf[184]=C_h_intern(&lf[184],35, C_text("chicken.number-vector#u8vector-set!"));
lf[185]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\165\070\166\145\143\164\157\162\137\163\145\164\000"));
lf[186]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\165\137\151\137\165\070\166\145\143\164\157\162\137\163\145\164\000"));
lf[187]=C_h_intern(&lf[187],35, C_text("chicken.number-vector#f64vector-ref"));
lf[188]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\141\137\151\137\146\066\064\166\145\143\164\157\162\137\162\145\146\000"));
lf[189]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\141\137\165\137\151\137\146\066\064\166\145\143\164\157\162\137\162\145\146\000"));
lf[190]=C_h_intern(&lf[190],35, C_text("chicken.number-vector#f32vector-ref"));
lf[191]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\141\137\151\137\146\063\062\166\145\143\164\157\162\137\162\145\146\000"));
lf[192]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\141\137\165\137\151\137\146\063\062\166\145\143\164\157\162\137\162\145\146\000"));
lf[193]=C_h_intern(&lf[193],35, C_text("chicken.number-vector#s32vector-ref"));
lf[194]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\141\137\151\137\163\063\062\166\145\143\164\157\162\137\162\145\146\000"));
lf[195]=C_h_intern(&lf[195],35, C_text("chicken.number-vector#u32vector-ref"));
lf[196]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\141\137\151\137\165\063\062\166\145\143\164\157\162\137\162\145\146\000"));
lf[197]=C_h_intern(&lf[197],35, C_text("chicken.number-vector#s16vector-ref"));
lf[198]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\163\061\066\166\145\143\164\157\162\137\162\145\146\000"));
lf[199]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\163\061\066\166\145\143\164\157\162\137\162\145\146\000"));
lf[200]=C_h_intern(&lf[200],35, C_text("chicken.number-vector#u16vector-ref"));
lf[201]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\165\061\066\166\145\143\164\157\162\137\162\145\146\000"));
lf[202]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\165\061\066\166\145\143\164\157\162\137\162\145\146\000"));
lf[203]=C_h_intern(&lf[203],34, C_text("chicken.number-vector#s8vector-ref"));
lf[204]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\163\070\166\145\143\164\157\162\137\162\145\146\000"));
lf[205]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\165\137\151\137\163\070\166\145\143\164\157\162\137\162\145\146\000"));
lf[206]=C_h_intern(&lf[206],36, C_text("chicken.bytevector#bytevector-length"));
lf[207]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\142\154\157\143\153\137\163\151\172\145\000"));
lf[208]=C_h_intern(&lf[208],46, C_text("##sys#foreign-unsigned-ranged-integer-argument"));
lf[209]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\056\103\137\151\137\146\157\162\145\151\147\156\137\165\156\163\151\147\156\145\144\137\162\141\156\147\145\144\137\151\156\164\145\147\145\162\137\141\162\147\165\155\145\156\164\160\000"));
lf[210]=C_h_intern(&lf[210],37, C_text("##sys#foreign-ranged-integer-argument"));
lf[211]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\103\137\151\137\146\157\162\145\151\147\156\137\162\141\156\147\145\144\137\151\156\164\145\147\145\162\137\141\162\147\165\155\145\156\164\160\000"));
lf[212]=C_h_intern(&lf[212],30, C_text("##sys#foreign-pointer-argument"));
lf[213]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\103\137\151\137\146\157\162\145\151\147\156\137\160\157\151\156\164\145\162\137\141\162\147\165\155\145\156\164\160\000"));
lf[214]=C_h_intern(&lf[214],29, C_text("##sys#foreign-string-argument"));
lf[215]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\163\164\162\151\156\147\137\141\162\147\165\155\145\156\164\160\000"));
lf[216]=C_h_intern(&lf[216],37, C_text("##sys#foreign-struct-wrapper-argument"));
lf[217]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\103\137\151\137\146\157\162\145\151\147\156\137\163\164\162\165\143\164\137\167\162\141\160\160\145\162\137\141\162\147\165\155\145\156\164\160\000"));
lf[218]=C_h_intern(&lf[218],29, C_text("##sys#foreign-symbol-argument"));
lf[219]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\163\171\155\142\157\154\137\141\162\147\165\155\145\156\164\160\000"));
lf[220]=C_h_intern(&lf[220],28, C_text("##sys#foreign-block-argument"));
lf[221]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\103\137\151\137\146\157\162\145\151\147\156\137\142\154\157\143\153\137\141\162\147\165\155\145\156\164\160\000"));
lf[222]=C_h_intern(&lf[222],29, C_text("##sys#foreign-flonum-argument"));
lf[223]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\146\154\157\156\165\155\137\141\162\147\165\155\145\156\164\160\000"));
lf[224]=C_h_intern(&lf[224],27, C_text("##sys#foreign-char-argument"));
lf[225]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\103\137\151\137\146\157\162\145\151\147\156\137\143\150\141\162\137\141\162\147\165\155\145\156\164\160\000"));
lf[226]=C_h_intern(&lf[226],29, C_text("##sys#foreign-fixnum-argument"));
lf[227]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\146\151\170\156\165\155\137\141\162\147\165\155\145\156\164\160\000"));
lf[228]=C_h_intern(&lf[228],30, C_text("chicken.locative#locative-set!"));
lf[229]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\154\157\143\141\164\151\166\145\137\163\145\164\000"));
lf[230]=C_h_intern(&lf[230],31, C_text("chicken.locative#locative-index"));
lf[231]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\154\157\143\141\164\151\166\145\137\151\156\144\145\170\000"));
lf[232]=C_h_intern(&lf[232],33, C_text("chicken.locative#locative->object"));
lf[233]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\151\137\154\157\143\141\164\151\166\145\137\164\157\137\157\142\152\145\143\164\000"));
lf[234]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\151\137\154\157\143\141\164\151\166\145\137\164\157\137\157\142\152\145\143\164\000"));
lf[235]=C_h_intern(&lf[235],16, C_text("##sys#immediate?"));
lf[236]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\151\155\155\160\000"));
lf[237]=C_h_intern(&lf[237],19, C_text("##sys#null-pointer?"));
lf[238]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\156\165\154\154\137\160\157\151\156\164\145\162\160\000"));
lf[239]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\156\165\154\154\137\160\157\151\156\164\145\162\160\000"));
lf[240]=C_h_intern(&lf[240],16, C_text("##sys#permanent?"));
lf[241]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\160\145\162\155\141\156\145\156\164\160\000"));
lf[242]=C_h_intern(&lf[242],18, C_text("scheme#string-ci=?"));
lf[243]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\151\137\163\164\162\151\156\147\137\143\151\137\145\161\165\141\154\137\160\000"));
lf[244]=C_h_intern(&lf[244],15, C_text("scheme#string=?"));
lf[245]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\163\164\162\151\156\147\137\145\161\165\141\154\137\160\000"));
lf[246]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\165\137\151\137\163\164\162\151\156\147\137\145\161\165\141\154\137\160\000"));
lf[247]=C_h_intern(&lf[247],17, C_text("##sys#poke-double"));
lf[248]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\160\157\153\145\137\144\157\165\142\154\145\000"));
lf[249]=C_h_intern(&lf[249],18, C_text("##sys#poke-integer"));
lf[250]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\160\157\153\145\137\151\156\164\145\147\145\162\000"));
lf[251]=C_h_intern(&lf[251],14, C_text("##sys#setislot"));
lf[252]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\163\145\164\137\151\137\163\154\157\164\000"));
lf[253]=C_h_intern(&lf[253],30, C_text("chicken.memory#pointer->object"));
lf[254]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\160\157\151\156\164\145\162\137\164\157\137\157\142\152\145\143\164\000"));
lf[255]=C_h_intern(&lf[255],15, C_text("##sys#peek-byte"));
lf[256]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\160\145\145\153\137\142\171\164\145\000"));
lf[257]=C_h_intern(&lf[257],17, C_text("##sys#peek-fixnum"));
lf[258]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\160\145\145\153\137\146\151\170\156\165\155\000"));
lf[259]=C_h_intern(&lf[259],10, C_text("##sys#byte"));
lf[260]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\163\165\142\142\171\164\145\000"));
lf[261]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\034\103\137\151\137\146\151\170\156\165\155\137\141\162\151\164\150\155\145\164\151\143\137\163\150\151\146\164\000\376\377\016"));
lf[262]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\163\137\141\137\151\137\141\162\151\164\150\155\145\164\151\143\137\163\150\151\146\164\000"));
lf[263]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\025\103\137\146\151\170\156\165\155\137\163\150\151\146\164\137\162\151\147\150\164\000\376\377\016"));
lf[264]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\024\103\137\146\151\170\156\165\155\137\163\150\151\146\164\137\154\145\146\164\000\376\377\016"));
lf[265]=C_h_intern(&lf[265],36, C_text("chicken.compiler.support#big-fixnum?"));
lf[266]=C_h_intern(&lf[266],32, C_text("chicken.bitwise#arithmetic-shift"));
lf[267]=C_h_intern(&lf[267],20, C_text("chicken.fixnum#fxrem"));
lf[268]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\035\103\137\151\137\146\151\170\156\165\155\137\162\145\155\141\151\156\144\145\162\137\143\150\145\143\153\145\144\000"));
lf[269]=C_h_intern(&lf[269],20, C_text("chicken.fixnum#fxmod"));
lf[270]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\146\151\170\156\165\155\137\155\157\144\165\154\157\000"));
lf[271]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\165\137\146\151\170\156\165\155\137\155\157\144\165\154\157\000"));
lf[272]=C_h_intern(&lf[272],18, C_text("chicken.fixnum#fx/"));
lf[273]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\146\151\170\156\165\155\137\144\151\166\151\144\145\000"));
lf[274]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\165\137\146\151\170\156\165\155\137\144\151\166\151\144\145\000"));
lf[275]=C_h_intern(&lf[275],20, C_text("chicken.fixnum#fxior"));
lf[276]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\146\151\170\156\165\155\137\157\162\000"));
lf[277]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\165\137\146\151\170\156\165\155\137\157\162\000"));
lf[278]=C_h_intern(&lf[278],20, C_text("chicken.fixnum#fxand"));
lf[279]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\141\156\144\000"));
lf[280]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\165\137\146\151\170\156\165\155\137\141\156\144\000"));
lf[281]=C_h_intern(&lf[281],20, C_text("chicken.fixnum#fxxor"));
lf[282]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\170\157\162\000"));
lf[283]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\170\157\162\000"));
lf[284]=C_h_intern(&lf[284],20, C_text("chicken.fixnum#fxneg"));
lf[285]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\146\151\170\156\165\155\137\156\145\147\141\164\145\000"));
lf[286]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\165\137\146\151\170\156\165\155\137\156\145\147\141\164\145\000"));
lf[287]=C_h_intern(&lf[287],20, C_text("chicken.fixnum#fxshr"));
lf[288]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\146\151\170\156\165\155\137\163\150\151\146\164\137\162\151\147\150\164\000"));
lf[289]=C_h_intern(&lf[289],20, C_text("chicken.fixnum#fxshl"));
lf[290]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\146\151\170\156\165\155\137\163\150\151\146\164\137\154\145\146\164\000"));
lf[291]=C_h_intern(&lf[291],18, C_text("chicken.fixnum#fx-"));
lf[292]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\146\151\170\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000"));
lf[293]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\146\151\170\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000"));
lf[294]=C_h_intern(&lf[294],18, C_text("chicken.fixnum#fx+"));
lf[295]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\146\151\170\156\165\155\137\160\154\165\163\000"));
lf[296]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\165\137\146\151\170\156\165\155\137\160\154\165\163\000"));
lf[297]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\017\103\137\151\137\163\145\164\137\151\137\163\154\157\164\000\376\377\016"));
lf[298]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\014\103\137\151\137\163\145\164\163\154\157\164\000\376\377\016"));
lf[299]=C_h_intern(&lf[299],13, C_text("##sys#setslot"));
lf[300]=C_h_intern(&lf[300],30, C_text("chicken.memory#pointer-f64-ref"));
lf[301]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\103\137\141\137\165\137\151\137\160\157\151\156\164\145\162\137\146\066\064\137\162\145\146\000"));
lf[302]=C_h_intern(&lf[302],30, C_text("chicken.memory#pointer-f32-ref"));
lf[303]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\103\137\141\137\165\137\151\137\160\157\151\156\164\145\162\137\146\063\062\137\162\145\146\000"));
lf[304]=C_h_intern(&lf[304],30, C_text("chicken.memory#pointer-s32-ref"));
lf[305]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\103\137\141\137\165\137\151\137\160\157\151\156\164\145\162\137\163\063\062\137\162\145\146\000"));
lf[306]=C_h_intern(&lf[306],30, C_text("chicken.memory#pointer-u32-ref"));
lf[307]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\103\137\141\137\165\137\151\137\160\157\151\156\164\145\162\137\165\063\062\137\162\145\146\000"));
lf[308]=C_h_intern(&lf[308],31, C_text("chicken.memory#pointer-f64-set!"));
lf[309]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\146\066\064\137\163\145\164\000"));
lf[310]=C_h_intern(&lf[310],31, C_text("chicken.memory#pointer-f32-set!"));
lf[311]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\146\063\062\137\163\145\164\000"));
lf[312]=C_h_intern(&lf[312],31, C_text("chicken.memory#pointer-s32-set!"));
lf[313]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\163\063\062\137\163\145\164\000"));
lf[314]=C_h_intern(&lf[314],31, C_text("chicken.memory#pointer-u32-set!"));
lf[315]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\165\063\062\137\163\145\164\000"));
lf[316]=C_h_intern(&lf[316],31, C_text("chicken.memory#pointer-s16-set!"));
lf[317]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\163\061\066\137\163\145\164\000"));
lf[318]=C_h_intern(&lf[318],31, C_text("chicken.memory#pointer-u16-set!"));
lf[319]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\165\061\066\137\163\145\164\000"));
lf[320]=C_h_intern(&lf[320],30, C_text("chicken.memory#pointer-s8-set!"));
lf[321]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\165\137\151\137\160\157\151\156\164\145\162\137\163\070\137\163\145\164\000"));
lf[322]=C_h_intern(&lf[322],30, C_text("chicken.memory#pointer-u8-set!"));
lf[323]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\165\137\151\137\160\157\151\156\164\145\162\137\165\070\137\163\145\164\000"));
lf[324]=C_h_intern(&lf[324],30, C_text("chicken.memory#pointer-s16-ref"));
lf[325]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\163\061\066\137\162\145\146\000"));
lf[326]=C_h_intern(&lf[326],30, C_text("chicken.memory#pointer-u16-ref"));
lf[327]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\165\137\151\137\160\157\151\156\164\145\162\137\165\061\066\137\162\145\146\000"));
lf[328]=C_h_intern(&lf[328],29, C_text("chicken.memory#pointer-s8-ref"));
lf[329]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\165\137\151\137\160\157\151\156\164\145\162\137\163\070\137\162\145\146\000"));
lf[330]=C_h_intern(&lf[330],29, C_text("chicken.memory#pointer-u8-ref"));
lf[331]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\165\137\151\137\160\157\151\156\164\145\162\137\165\070\137\162\145\146\000"));
lf[332]=C_h_intern(&lf[332],29, C_text("chicken.locative#locative-ref"));
lf[333]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\141\137\151\137\154\157\143\141\164\151\166\145\137\162\145\146\000"));
lf[334]=C_h_intern(&lf[334],23, C_text("chicken.memory#pointer+"));
lf[335]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\141\137\165\137\151\137\160\157\151\156\164\145\162\137\151\156\143\000"));
lf[336]=C_h_intern(&lf[336],31, C_text("chicken.memory#pointer->address"));
lf[337]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\141\137\151\137\160\157\151\156\164\145\162\137\164\157\137\141\144\144\162\145\163\163\000"));
lf[338]=C_h_intern(&lf[338],31, C_text("chicken.memory#address->pointer"));
lf[339]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\141\137\151\137\141\144\144\162\145\163\163\137\164\157\137\160\157\151\156\164\145\162\000"));
lf[340]=C_h_intern(&lf[340],13, C_text("scheme#string"));
lf[341]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\141\137\151\137\163\164\162\151\156\147\000"));
lf[342]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\007\376\003\000\000\002\376\377\001\000\000\000\001\376\377\016"));
lf[343]=C_h_intern(&lf[343],20, C_text("##sys#make-structure"));
lf[344]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\141\137\151\137\162\145\143\157\162\144\000"));
lf[345]=C_h_intern(&lf[345],12, C_text("##sys#vector"));
lf[346]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\141\137\151\137\166\145\143\164\157\162\000"));
lf[347]=C_h_intern(&lf[347],13, C_text("scheme#vector"));
lf[348]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\141\137\151\137\166\145\143\164\157\162\000"));
lf[349]=C_h_intern(&lf[349],10, C_text("##sys#list"));
lf[350]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\141\137\151\137\154\151\163\164\000"));
lf[351]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016"));
lf[352]=C_h_intern(&lf[352],11, C_text("scheme#list"));
lf[353]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\141\137\151\137\154\151\163\164\000"));
lf[354]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\000\376\003\000\000\002\376\377\001\000\000\000\003\376\377\016"));
lf[355]=C_h_intern(&lf[355],22, C_text("chicken.base#weak-cons"));
lf[356]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\141\137\151\137\167\145\141\153\137\143\157\156\163\000"));
lf[357]=C_h_intern(&lf[357],10, C_text("##sys#cons"));
lf[358]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\141\137\151\137\143\157\156\163\000"));
lf[359]=C_h_intern(&lf[359],11, C_text("scheme#cons"));
lf[360]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\141\137\151\137\143\157\156\163\000"));
lf[361]=C_h_intern(&lf[361],22, C_text("chicken.flonum#fpround"));
lf[362]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\146\154\157\157\162\000"));
lf[363]=C_h_intern(&lf[363],24, C_text("chicken.flonum#fpceiling"));
lf[364]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\141\137\151\137\146\154\157\156\165\155\137\143\145\151\154\151\156\147\000"));
lf[365]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\162\157\165\156\144\000"));
lf[366]=C_h_intern(&lf[366],25, C_text("chicken.flonum#fptruncate"));
lf[367]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\141\137\151\137\146\154\157\156\165\155\137\164\162\165\156\143\141\164\145\000"));
lf[368]=C_h_intern(&lf[368],20, C_text("chicken.flonum#fpabs"));
lf[369]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\141\142\163\000"));
lf[370]=C_h_intern(&lf[370],21, C_text("chicken.flonum#fpsqrt"));
lf[371]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\163\161\162\164\000"));
lf[372]=C_h_intern(&lf[372],20, C_text("chicken.flonum#fplog"));
lf[373]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\154\157\147\000"));
lf[374]=C_h_intern(&lf[374],21, C_text("chicken.flonum#fpexpt"));
lf[375]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\145\170\160\164\000"));
lf[376]=C_h_intern(&lf[376],20, C_text("chicken.flonum#fpexp"));
lf[377]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\145\170\160\000"));
lf[378]=C_h_intern(&lf[378],22, C_text("chicken.flonum#fpatan2"));
lf[379]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\062\000"));
lf[380]=C_h_intern(&lf[380],21, C_text("chicken.flonum#fpatan"));
lf[381]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\000"));
lf[382]=C_h_intern(&lf[382],21, C_text("chicken.flonum#fpacos"));
lf[383]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\143\157\163\000"));
lf[384]=C_h_intern(&lf[384],21, C_text("chicken.flonum#fpasin"));
lf[385]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\163\151\156\000"));
lf[386]=C_h_intern(&lf[386],20, C_text("chicken.flonum#fptan"));
lf[387]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\164\141\156\000"));
lf[388]=C_h_intern(&lf[388],20, C_text("chicken.flonum#fpcos"));
lf[389]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\143\157\163\000"));
lf[390]=C_h_intern(&lf[390],20, C_text("chicken.flonum#fpsin"));
lf[391]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\163\151\156\000"));
lf[392]=C_h_intern(&lf[392],15, C_text("scheme#truncate"));
lf[393]=C_h_intern(&lf[393],6, C_text("flonum"));
lf[394]=C_h_intern(&lf[394],14, C_text("scheme#ceiling"));
lf[395]=C_h_intern(&lf[395],12, C_text("scheme#floor"));
lf[396]=C_h_intern(&lf[396],22, C_text("chicken.flonum#fpfloor"));
lf[397]=C_h_intern(&lf[397],22, C_text("chicken.fixnum#fxeven?"));
lf[398]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\146\151\170\156\165\155\145\166\145\156\160\000"));
lf[399]=C_h_intern(&lf[399],21, C_text("chicken.fixnum#fxodd?"));
lf[400]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\151\170\156\165\155\157\144\144\160\000"));
lf[401]=C_h_intern(&lf[401],11, C_text("scheme#odd?"));
lf[402]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\157\144\144\160\000"));
lf[403]=C_h_intern(&lf[403],12, C_text("scheme#even?"));
lf[404]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\145\166\145\156\160\000"));
lf[405]=C_h_intern(&lf[405],16, C_text("scheme#remainder"));
lf[406]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\146\151\170\156\165\155\137\155\157\144\165\154\157\000"));
lf[407]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\146\151\170\156\165\155\137\155\157\144\165\154\157\000"));
lf[408]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\151\170\156\165\155\157\144\144\160\000"));
lf[409]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\151\170\156\165\155\157\144\144\160\000"));
lf[410]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\146\151\170\156\165\155\145\166\145\156\160\000"));
lf[411]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\146\151\170\156\165\155\145\166\145\156\160\000"));
lf[412]=C_h_intern(&lf[412],20, C_text("##sys#context-switch"));
lf[413]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\143\157\156\164\145\170\164\137\163\167\151\164\143\150\000"));
lf[414]=C_h_intern(&lf[414],31, C_text("chicken.platform#return-to-host"));
lf[415]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\162\145\164\165\162\156\137\164\157\137\150\157\163\164\000"));
lf[416]=C_h_intern(&lf[416],25, C_text("##sys#ensure-heap-reserve"));
lf[417]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\145\156\163\165\162\145\137\150\145\141\160\137\162\145\163\145\162\166\145\000"));
lf[418]=C_h_intern(&lf[418],25, C_text("##sys#allocate-bytevector"));
lf[419]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\141\154\154\157\143\141\164\145\137\142\171\164\145\166\145\143\164\157\162\000"));
lf[420]=C_h_intern(&lf[420],21, C_text("##sys#allocate-vector"));
lf[421]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\141\154\154\157\143\141\164\145\137\166\145\143\164\157\162\000"));
lf[422]=C_h_intern(&lf[422],36, C_text("##sys#call-with-current-continuation"));
lf[423]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\143\141\154\154\137\143\143\000"));
lf[424]=C_h_intern(&lf[424],21, C_text("scheme#number->string"));
lf[425]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\001\376\377\001\000\000\000\002"));
lf[426]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\156\165\155\142\145\162\137\164\157\137\163\164\162\151\156\147\000"));
lf[427]=C_h_intern(&lf[427],8, C_text("scheme#-"));
lf[428]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\377\001\000\000\000\001\376\377\006\000"));
lf[429]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\155\151\156\165\163\000"));
lf[430]=C_h_intern(&lf[430],8, C_text("scheme#+"));
lf[431]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\160\154\165\163\000"));
lf[432]=C_h_intern(&lf[432],8, C_text("scheme#*"));
lf[433]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\164\151\155\145\163\000"));
lf[434]=C_h_intern(&lf[434],9, C_text("scheme#<="));
lf[435]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[436]=C_h_intern(&lf[436],9, C_text("scheme#>="));
lf[437]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[438]=C_h_intern(&lf[438],8, C_text("scheme#<"));
lf[439]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\154\145\163\163\160\000"));
lf[440]=C_h_intern(&lf[440],8, C_text("scheme#>"));
lf[441]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\147\162\145\141\164\145\162\160\000"));
lf[442]=C_h_intern(&lf[442],8, C_text("scheme#="));
lf[443]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\156\145\161\165\141\154\160\000"));
lf[444]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\154\145\163\163\137\157\162\137\145\161\165\141\154\160\000"));
lf[445]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\151\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\160\000"));
lf[446]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\154\145\163\163\160\000"));
lf[447]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\151\137\147\162\145\141\164\145\162\160\000"));
lf[448]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\156\145\161\165\141\154\160\000"));
lf[449]=C_h_intern(&lf[449],13, C_text("scheme#modulo"));
lf[450]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\163\137\141\137\151\137\155\157\144\165\154\157\000"));
lf[451]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\163\137\141\137\151\137\162\145\155\141\151\156\144\145\162\000"));
lf[452]=C_h_intern(&lf[452],15, C_text("scheme#quotient"));
lf[453]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\163\137\141\137\151\137\161\165\157\164\151\145\156\164\000"));
lf[454]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\163\137\141\137\151\137\164\151\155\145\163\000"));
lf[455]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\163\137\141\137\151\137\155\151\156\165\163\000"));
lf[456]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\163\137\141\137\151\137\160\154\165\163\000"));
lf[457]=C_h_intern(&lf[457],8, C_text("scheme#/"));
lf[458]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\025\103\137\146\151\170\156\165\155\137\163\150\151\146\164\137\162\151\147\150\164\000\376\377\016"));
lf[459]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\020\103\137\146\151\170\156\165\155\137\144\151\166\151\144\145\000\376\377\016"));
lf[460]=C_h_intern(&lf[460],9, C_text("##sys#/-2"));
lf[461]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\022\103\137\165\137\146\151\170\156\165\155\137\156\145\147\141\164\145\000\376\377\016"));
lf[462]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\020\103\137\146\151\170\156\165\155\137\156\145\147\141\164\145\000\376\377\016"));
lf[463]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\026\103\137\165\137\146\151\170\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000\376\377\016"));
lf[464]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\024\103\137\146\151\170\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000\376\377\016"));
lf[465]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\020\103\137\165\137\146\151\170\156\165\155\137\160\154\165\163\000\376\377\016"));
lf[466]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\016\103\137\146\151\170\156\165\155\137\160\154\165\163\000\376\377\016"));
lf[467]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\020\103\137\165\137\146\151\170\156\165\155\137\160\154\165\163\000\376\377\016"));
lf[468]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\016\103\137\146\151\170\156\165\155\137\160\154\165\163\000\376\377\016"));
lf[469]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\024\103\137\146\151\170\156\165\155\137\163\150\151\146\164\137\154\145\146\164\000\376\377\016"));
lf[470]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\017\103\137\146\151\170\156\165\155\137\164\151\155\145\163\000\376\377\016"));
lf[471]=C_h_intern(&lf[471],10, C_text("scheme#lcm"));
lf[472]=C_h_intern(&lf[472],10, C_text("scheme#gcd"));
lf[473]=C_h_intern(&lf[473],21, C_text("chicken.base#identity"));
lf[474]=C_h_intern(&lf[474],9, C_text("##sys#lcm"));
lf[475]=C_h_intern(&lf[475],9, C_text("##sys#gcd"));
lf[476]=C_h_intern(&lf[476],18, C_text("scheme#vector-set!"));
lf[477]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\166\145\143\164\157\162\137\163\145\164\000"));
lf[478]=C_h_intern(&lf[478],19, C_text("scheme#list->string"));
lf[479]=C_h_intern(&lf[479],18, C_text("##sys#list->string"));
lf[480]=C_h_intern(&lf[480],19, C_text("scheme#string->list"));
lf[481]=C_h_intern(&lf[481],18, C_text("##sys#string->list"));
lf[482]=C_h_intern(&lf[482],20, C_text("scheme#string-append"));
lf[483]=C_h_intern(&lf[483],19, C_text("##sys#string-append"));
lf[484]=C_h_intern(&lf[484],16, C_text("scheme#substring"));
lf[485]=C_h_intern(&lf[485],15, C_text("##sys#substring"));
lf[486]=C_h_intern(&lf[486],50, C_text("chicken.memory.representation#make-record-instance"));
lf[487]=C_h_intern(&lf[487],16, C_text("##sys#block-set!"));
lf[488]=C_h_intern(&lf[488],40, C_text("chicken.memory.representation#block-set!"));
lf[489]=C_h_intern(&lf[489],10, C_text("scheme#map"));
lf[490]=C_h_intern(&lf[490],9, C_text("##sys#map"));
lf[491]=C_h_intern(&lf[491],15, C_text("scheme#for-each"));
lf[492]=C_h_intern(&lf[492],14, C_text("##sys#for-each"));
lf[493]=C_h_intern(&lf[493],6, C_text("setter"));
lf[494]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\146\151\170\156\165\155\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[495]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\146\154\157\156\165\155\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[496]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\103\137\146\151\170\156\165\155\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[497]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\103\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[498]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\146\151\170\156\165\155\137\154\145\163\163\160\000"));
lf[499]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\146\154\157\156\165\155\137\154\145\163\163\160\000"));
lf[500]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\151\170\156\165\155\137\147\162\145\141\164\145\162\160\000"));
lf[501]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\160\000"));
lf[502]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\145\161\160\000"));
lf[503]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\151\137\145\161\165\141\154\160\000"));
lf[504]=C_h_intern(&lf[504],27, C_text("##sys#check-range/including"));
lf[505]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\103\137\151\137\143\150\145\143\153\137\162\141\156\147\145\137\151\156\143\154\165\144\151\156\147\137\062\000"));
lf[506]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\103\137\151\137\143\150\145\143\153\137\162\141\156\147\145\137\151\156\143\154\165\144\151\156\147\000"));
lf[507]=C_h_intern(&lf[507],17, C_text("##sys#check-range"));
lf[508]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\143\150\145\143\153\137\162\141\156\147\145\137\062\000"));
lf[509]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\143\150\145\143\153\137\162\141\156\147\145\000"));
lf[510]=C_h_intern(&lf[510],16, C_text("##sys#check-char"));
lf[511]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\143\150\141\162\137\062\000"));
lf[512]=C_h_intern(&lf[512],21, C_text("##sys#check-structure"));
lf[513]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\151\137\143\150\145\143\153\137\163\164\162\165\143\164\165\162\145\137\062\000"));
lf[514]=C_h_intern(&lf[514],18, C_text("##sys#check-vector"));
lf[515]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\166\145\143\164\157\162\137\062\000"));
lf[516]=C_h_intern(&lf[516],22, C_text("##sys#check-bytevector"));
lf[517]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\151\137\143\150\145\143\153\137\142\171\164\145\166\145\143\164\157\162\137\062\000"));
lf[518]=C_h_intern(&lf[518],18, C_text("##sys#check-string"));
lf[519]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\163\164\162\151\156\147\137\062\000"));
lf[520]=C_h_intern(&lf[520],18, C_text("##sys#check-symbol"));
lf[521]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\163\171\155\142\157\154\137\062\000"));
lf[522]=C_h_intern(&lf[522],20, C_text("##sys#check-locative"));
lf[523]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\143\150\145\143\153\137\154\157\143\141\164\151\166\145\137\062\000"));
lf[524]=C_h_intern(&lf[524],19, C_text("##sys#check-boolean"));
lf[525]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\151\137\143\150\145\143\153\137\142\157\157\154\145\141\156\137\062\000"));
lf[526]=C_h_intern(&lf[526],16, C_text("##sys#check-pair"));
lf[527]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\160\141\151\162\137\062\000"));
lf[528]=C_h_intern(&lf[528],16, C_text("##sys#check-list"));
lf[529]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\154\151\163\164\137\062\000"));
lf[530]=C_h_intern(&lf[530],18, C_text("##sys#check-number"));
lf[531]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\156\165\155\142\145\162\137\062\000"));
lf[532]=C_h_intern(&lf[532],18, C_text("##sys#check-fixnum"));
lf[533]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\146\151\170\156\165\155\137\062\000"));
lf[534]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\143\150\145\143\153\137\143\150\141\162\000"));
lf[535]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\151\137\143\150\145\143\153\137\163\164\162\165\143\164\165\162\145\000"));
lf[536]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\166\145\143\164\157\162\000"));
lf[537]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\151\137\143\150\145\143\153\137\142\171\164\145\166\145\143\164\157\162\000"));
lf[538]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\163\164\162\151\156\147\000"));
lf[539]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\163\171\155\142\157\154\000"));
lf[540]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\154\157\143\141\164\151\166\145\000"));
lf[541]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\143\150\145\143\153\137\142\157\157\154\145\141\156\000"));
lf[542]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\143\150\145\143\153\137\160\141\151\162\000"));
lf[543]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\143\150\145\143\153\137\154\151\163\164\000"));
lf[544]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\156\165\155\142\145\162\000"));
lf[545]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\146\151\170\156\165\155\000"));
lf[546]=C_h_intern(&lf[546],20, C_text("scheme#string-length"));
lf[547]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\163\164\162\151\156\147\137\154\145\156\147\164\150\000"));
lf[548]=C_h_intern(&lf[548],19, C_text("##sys#vector-length"));
lf[549]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[550]=C_h_intern(&lf[550],20, C_text("scheme#vector-length"));
lf[551]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\166\145\143\164\157\162\137\154\145\156\147\164\150\000"));
lf[552]=C_h_intern(&lf[552],20, C_text("scheme#integer->char"));
lf[553]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\155\141\153\145\137\143\150\141\162\141\143\164\145\162\000"));
lf[554]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\165\156\146\151\170\000"));
lf[555]=C_h_intern(&lf[555],20, C_text("scheme#char->integer"));
lf[556]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\146\151\170\000"));
lf[557]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\143\150\141\162\141\143\164\145\162\137\143\157\144\145\000"));
lf[558]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\146\151\170\000"));
lf[559]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\150\145\141\144\145\162\137\163\151\172\145\000"));
lf[560]=C_h_intern(&lf[560],16, C_text("scheme#negative?"));
lf[561]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\156\145\147\141\164\151\166\145\160\000"));
lf[562]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\146\154\157\156\165\155\137\154\145\163\163\160\000"));
lf[563]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\146\151\170\156\165\155\137\154\145\163\163\160\000"));
lf[564]=C_h_intern(&lf[564],16, C_text("scheme#positive?"));
lf[565]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\160\157\163\151\164\151\166\145\160\000"));
lf[566]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\160\000"));
lf[567]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\151\170\156\165\155\137\147\162\145\141\164\145\162\160\000"));
lf[568]=C_h_intern(&lf[568],12, C_text("scheme#zero?"));
lf[569]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\172\145\162\157\160\000"));
lf[570]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\172\145\162\157\160\062\000"));
lf[571]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\145\161\160\000"));
lf[572]=C_h_intern(&lf[572],19, C_text("chicken.flonum#fp*+"));
lf[573]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\032\103\137\141\137\151\137\146\154\157\156\165\155\137\155\165\154\164\151\160\154\171\137\141\144\144\000"));
lf[574]=C_h_intern(&lf[574],20, C_text("chicken.flonum#fpgcd"));
lf[575]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\147\143\144\000"));
lf[576]=C_h_intern(&lf[576],20, C_text("chicken.flonum#fpneg"));
lf[577]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\141\137\151\137\146\154\157\156\165\155\137\156\145\147\141\164\145\000"));
lf[578]=C_h_intern(&lf[578],19, C_text("chicken.flonum#fp/?"));
lf[579]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\103\137\141\137\151\137\146\154\157\156\165\155\137\161\165\157\164\151\145\156\164\137\143\150\145\143\153\145\144\000"));
lf[580]=C_h_intern(&lf[580],18, C_text("chicken.flonum#fp/"));
lf[581]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\141\137\151\137\146\154\157\156\165\155\137\161\165\157\164\151\145\156\164\000"));
lf[582]=C_h_intern(&lf[582],18, C_text("chicken.flonum#fp*"));
lf[583]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\164\151\155\145\163\000"));
lf[584]=C_h_intern(&lf[584],18, C_text("chicken.flonum#fp-"));
lf[585]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\103\137\141\137\151\137\146\154\157\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000"));
lf[586]=C_h_intern(&lf[586],18, C_text("chicken.flonum#fp+"));
lf[587]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\160\154\165\163\000"));
lf[588]=C_h_intern(&lf[588],27, C_text("chicken.bitwise#bitwise-not"));
lf[589]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\163\137\141\137\151\137\142\151\164\167\151\163\145\137\156\157\164\000"));
lf[590]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\156\157\164\000"));
lf[591]=C_h_intern(&lf[591],27, C_text("chicken.bitwise#bitwise-ior"));
lf[592]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\146\151\170\156\165\155\137\157\162\000"));
lf[593]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\165\137\146\151\170\156\165\155\137\157\162\000"));
lf[594]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\163\137\141\137\151\137\142\151\164\167\151\163\145\137\151\157\162\000"));
lf[595]=C_h_intern(&lf[595],27, C_text("chicken.bitwise#bitwise-xor"));
lf[596]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\170\157\162\000"));
lf[597]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\170\157\162\000"));
lf[598]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\163\137\141\137\151\137\142\151\164\167\151\163\145\137\170\157\162\000"));
lf[599]=C_h_intern(&lf[599],27, C_text("chicken.bitwise#bitwise-and"));
lf[600]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\141\156\144\000"));
lf[601]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\165\137\146\151\170\156\165\155\137\141\156\144\000"));
lf[602]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\163\137\141\137\151\137\142\151\164\167\151\163\145\137\141\156\144\000"));
lf[603]=C_h_intern(&lf[603],10, C_text("scheme#abs"));
lf[604]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\141\142\163\000"));
lf[605]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\141\142\163\000"));
lf[606]=C_h_intern(&lf[606],15, C_text("scheme#set-cdr!"));
lf[607]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\163\145\164\137\143\144\162\000"));
lf[608]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\165\137\151\137\163\145\164\137\143\144\162\000"));
lf[609]=C_h_intern(&lf[609],15, C_text("scheme#set-car!"));
lf[610]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\163\145\164\137\143\141\162\000"));
lf[611]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\165\137\151\137\163\145\164\137\143\141\162\000"));
lf[612]=C_h_intern(&lf[612],13, C_text("scheme#member"));
lf[613]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\151\137\155\145\155\142\145\162\000"));
lf[614]=C_h_intern(&lf[614],12, C_text("scheme#assoc"));
lf[615]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\141\163\163\157\143\000"));
lf[616]=C_h_intern(&lf[616],11, C_text("scheme#memq"));
lf[617]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\155\145\155\161\000"));
lf[618]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\155\145\155\161\000"));
lf[619]=C_h_intern(&lf[619],11, C_text("scheme#assq"));
lf[620]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\141\163\163\161\000"));
lf[621]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\141\163\163\161\000"));
lf[622]=C_h_intern(&lf[622],11, C_text("scheme#memv"));
lf[623]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\155\145\155\166\000"));
lf[624]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\155\145\155\161\000"));
lf[625]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\155\145\155\161\000"));
lf[626]=C_h_intern(&lf[626],11, C_text("scheme#assv"));
lf[627]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\141\163\163\166\000"));
lf[628]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\141\163\163\161\000"));
lf[629]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\141\163\163\161\000"));
lf[630]=C_h_intern(&lf[630],45, C_text("chicken.memory.representation#number-of-slots"));
lf[631]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\142\154\157\143\153\137\163\151\172\145\000"));
lf[632]=C_h_intern(&lf[632],39, C_text("chicken.memory.representation#block-ref"));
lf[633]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[634]=C_h_intern(&lf[634],17, C_text("##sys#bytevector?"));
lf[635]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\142\171\164\145\166\145\143\164\157\162\160\000"));
lf[636]=C_h_intern(&lf[636],16, C_text("##sys#structure?"));
lf[637]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\163\164\162\165\143\164\165\162\145\160\000"));
lf[638]=C_h_intern(&lf[638],16, C_text("scheme#list-tail"));
lf[639]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\154\151\163\164\137\164\141\151\154\000"));
lf[640]=C_h_intern(&lf[640],20, C_text("scheme#char-downcase"));
lf[641]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\143\150\141\162\137\144\157\167\156\143\141\163\145\000"));
lf[642]=C_h_intern(&lf[642],18, C_text("scheme#char-upcase"));
lf[643]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\165\137\151\137\143\150\141\162\137\165\160\143\141\163\145\000"));
lf[644]=C_h_intern(&lf[644],23, C_text("scheme#char-lower-case?"));
lf[645]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\143\150\141\162\137\154\157\167\145\162\137\143\141\163\145\160\000"));
lf[646]=C_h_intern(&lf[646],23, C_text("scheme#char-upper-case?"));
lf[647]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\143\150\141\162\137\165\160\160\145\162\137\143\141\163\145\160\000"));
lf[648]=C_h_intern(&lf[648],23, C_text("scheme#char-whitespace?"));
lf[649]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\143\150\141\162\137\167\150\151\164\145\163\160\141\143\145\160\000"));
lf[650]=C_h_intern(&lf[650],23, C_text("scheme#char-alphabetic?"));
lf[651]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\027\103\137\165\137\151\137\143\150\141\162\137\141\154\160\150\141\142\145\164\151\143\160\000"));
lf[652]=C_h_intern(&lf[652],20, C_text("scheme#char-numeric?"));
lf[653]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\143\150\141\162\137\156\165\155\145\162\151\143\160\000"));
lf[654]=C_h_intern(&lf[654],20, C_text("chicken.fixnum#fxlen"));
lf[655]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\146\151\170\156\165\155\137\154\145\156\147\164\150\000"));
lf[656]=C_h_intern(&lf[656],20, C_text("chicken.fixnum#fxgcd"));
lf[657]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\151\170\156\165\155\137\147\143\144\000"));
lf[658]=C_h_intern(&lf[658],20, C_text("chicken.flonum#fpmin"));
lf[659]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\154\157\156\165\155\137\155\151\156\000"));
lf[660]=C_h_intern(&lf[660],20, C_text("chicken.flonum#fpmax"));
lf[661]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\154\157\156\165\155\137\155\141\170\000"));
lf[662]=C_h_intern(&lf[662],20, C_text("chicken.fixnum#fxmin"));
lf[663]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\151\170\156\165\155\137\155\151\156\000"));
lf[664]=C_h_intern(&lf[664],20, C_text("chicken.fixnum#fxmax"));
lf[665]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\151\170\156\165\155\137\155\141\170\000"));
lf[666]=C_h_intern(&lf[666],19, C_text("chicken.flonum#fp<="));
lf[667]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\146\154\157\156\165\155\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[668]=C_h_intern(&lf[668],19, C_text("chicken.flonum#fp>="));
lf[669]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\103\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[670]=C_h_intern(&lf[670],18, C_text("chicken.flonum#fp<"));
lf[671]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\146\154\157\156\165\155\137\154\145\163\163\160\000"));
lf[672]=C_h_intern(&lf[672],18, C_text("chicken.flonum#fp>"));
lf[673]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\160\000"));
lf[674]=C_h_intern(&lf[674],18, C_text("chicken.flonum#fp="));
lf[675]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\146\154\157\156\165\155\137\145\161\165\141\154\160\000"));
lf[676]=C_h_intern(&lf[676],19, C_text("chicken.fixnum#fx<="));
lf[677]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\146\151\170\156\165\155\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[678]=C_h_intern(&lf[678],19, C_text("chicken.fixnum#fx>="));
lf[679]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\103\137\146\151\170\156\165\155\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[680]=C_h_intern(&lf[680],18, C_text("chicken.fixnum#fx<"));
lf[681]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\146\151\170\156\165\155\137\154\145\163\163\160\000"));
lf[682]=C_h_intern(&lf[682],18, C_text("chicken.fixnum#fx>"));
lf[683]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\151\170\156\165\155\137\147\162\145\141\164\145\162\160\000"));
lf[684]=C_h_intern(&lf[684],18, C_text("chicken.fixnum#fx="));
lf[685]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\145\161\160\000"));
lf[686]=C_h_intern(&lf[686],19, C_text("chicken.fixnum#fx/?"));
lf[687]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\026\103\137\151\137\157\137\146\151\170\156\165\155\137\161\165\157\164\151\145\156\164\000"));
lf[688]=C_h_intern(&lf[688],19, C_text("chicken.fixnum#fx*?"));
lf[689]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\157\137\146\151\170\156\165\155\137\164\151\155\145\163\000"));
lf[690]=C_h_intern(&lf[690],19, C_text("chicken.fixnum#fx-?"));
lf[691]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\103\137\151\137\157\137\146\151\170\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000"));
lf[692]=C_h_intern(&lf[692],19, C_text("chicken.fixnum#fx+?"));
lf[693]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\157\137\146\151\170\156\165\155\137\160\154\165\163\000"));
lf[694]=C_h_intern(&lf[694],18, C_text("chicken.fixnum#fx*"));
lf[695]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\146\151\170\156\165\155\137\164\151\155\145\163\000"));
lf[696]=C_h_intern(&lf[696],20, C_text("chicken.fixnum#fxnot"));
lf[697]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\146\151\170\156\165\155\137\156\157\164\000"));
lf[698]=C_h_intern(&lf[698],10, C_text("##sys#size"));
lf[699]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\142\154\157\143\153\137\163\151\172\145\000"));
lf[700]=C_h_intern(&lf[700],15, C_text("##sys#block-ref"));
lf[701]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\142\154\157\143\153\137\162\145\146\000"));
lf[702]=C_h_intern(&lf[702],10, C_text("##sys#slot"));
lf[703]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[704]=C_h_intern(&lf[704],14, C_text("scheme#char<=?"));
lf[705]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\031\103\137\151\137\143\150\141\162\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[706]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\033\103\137\165\137\151\137\143\150\141\162\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[707]=C_h_intern(&lf[707],14, C_text("scheme#char>=?"));
lf[708]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\034\103\137\151\137\143\150\141\162\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[709]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\036\103\137\165\137\151\137\143\150\141\162\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000"));
lf[710]=C_h_intern(&lf[710],13, C_text("scheme#char<?"));
lf[711]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\143\150\141\162\137\154\145\163\163\160\000"));
lf[712]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\165\137\151\137\143\150\141\162\137\154\145\163\163\160\000"));
lf[713]=C_h_intern(&lf[713],13, C_text("scheme#char>?"));
lf[714]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\143\150\141\162\137\147\162\145\141\164\145\162\160\000"));
lf[715]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\151\137\143\150\141\162\137\147\162\145\141\164\145\162\160\000"));
lf[716]=C_h_intern(&lf[716],13, C_text("scheme#char=?"));
lf[717]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\020\103\137\151\137\143\150\141\162\137\145\161\165\141\154\160\000"));
lf[718]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\165\137\151\137\143\150\141\162\137\145\161\165\141\154\160\000"));
lf[719]=C_h_intern(&lf[719],17, C_text("scheme#vector-ref"));
lf[720]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\166\145\143\164\157\162\137\162\145\146\000"));
lf[721]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\163\154\157\164\000"));
lf[722]=C_h_intern(&lf[722],18, C_text("scheme#string-set!"));
lf[723]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\163\164\162\151\156\147\137\163\145\164\000"));
lf[724]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\165\164\146\137\163\145\164\163\165\142\143\150\141\162\000"));
lf[725]=C_h_intern(&lf[725],17, C_text("scheme#string-ref"));
lf[726]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\163\164\162\151\156\147\137\162\145\146\000"));
lf[727]=C_h_intern(&lf[727],24, C_text("chicken.base#bwp-object?"));
lf[728]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\142\167\160\160\000"));
lf[729]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\165\164\146\137\163\165\142\143\150\141\162\000"));
lf[730]=C_h_intern(&lf[730],18, C_text("scheme#eof-object?"));
lf[731]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\007\103\137\145\157\146\160\000"));
lf[732]=C_h_intern(&lf[732],12, C_text("scheme#list?"));
lf[733]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\154\151\163\164\160\000"));
lf[734]=C_h_intern(&lf[734],15, C_text("scheme#inexact?"));
lf[735]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\165\137\151\137\151\156\145\170\141\143\164\160\000"));
lf[736]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\151\137\151\156\145\170\141\143\164\160\000"));
lf[737]=C_h_intern(&lf[737],13, C_text("scheme#exact?"));
lf[738]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\145\170\141\143\164\160\000"));
lf[739]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\151\137\145\170\141\143\164\160\000"));
lf[740]=C_h_intern(&lf[740],24, C_text("##sys#generic-structure?"));
lf[741]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\163\164\162\165\143\164\165\162\145\160\000"));
lf[742]=C_h_intern(&lf[742],8, C_text("pointer?"));
lf[743]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\151\137\163\141\146\145\137\160\157\151\156\164\145\162\160\000"));
lf[744]=C_h_intern(&lf[744],14, C_text("##sys#pointer?"));
lf[745]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\141\156\171\160\157\151\156\164\145\162\160\000"));
lf[746]=C_h_intern(&lf[746],25, C_text("chicken.flonum#fpinteger?"));
lf[747]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\021\103\137\165\137\151\137\146\160\151\156\164\145\147\145\162\160\000"));
lf[748]=C_h_intern(&lf[748],22, C_text("chicken.base#infinite?"));
lf[749]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\151\156\146\151\156\151\164\145\160\000"));
lf[750]=C_h_intern(&lf[750],20, C_text("chicken.base#finite?"));
lf[751]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\146\151\156\151\164\145\160\000"));
lf[752]=C_h_intern(&lf[752],17, C_text("chicken.base#nan?"));
lf[753]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\156\141\156\160\000"));
lf[754]=C_h_intern(&lf[754],20, C_text("chicken.base#ratnum?"));
lf[755]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\162\141\164\156\165\155\160\000"));
lf[756]=C_h_intern(&lf[756],21, C_text("chicken.base#cplxnum?"));
lf[757]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\151\137\143\160\154\170\156\165\155\160\000"));
lf[758]=C_h_intern(&lf[758],20, C_text("chicken.base#bignum?"));
lf[759]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\142\151\147\156\165\155\160\000"));
lf[760]=C_h_intern(&lf[760],20, C_text("chicken.base#fixnum?"));
lf[761]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\146\151\170\156\165\155\160\000"));
lf[762]=C_h_intern(&lf[762],20, C_text("chicken.base#flonum?"));
lf[763]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\146\154\157\156\165\155\160\000"));
lf[764]=C_h_intern(&lf[764],21, C_text("scheme#exact-integer?"));
lf[765]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\151\137\145\170\141\143\164\137\151\156\164\145\147\145\162\160\000"));
lf[766]=C_h_intern(&lf[766],15, C_text("scheme#integer?"));
lf[767]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\151\137\151\156\164\145\147\145\162\160\000"));
lf[768]=C_h_intern(&lf[768],12, C_text("scheme#real?"));
lf[769]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\162\145\141\154\160\000"));
lf[770]=C_h_intern(&lf[770],16, C_text("scheme#rational?"));
lf[771]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\162\141\164\151\157\156\141\154\160\000"));
lf[772]=C_h_intern(&lf[772],15, C_text("scheme#complex?"));
lf[773]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\156\165\155\142\145\162\160\000"));
lf[774]=C_h_intern(&lf[774],14, C_text("scheme#number?"));
lf[775]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\156\165\155\142\145\162\160\000"));
lf[776]=C_h_intern(&lf[776],15, C_text("scheme#boolean?"));
lf[777]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\142\157\157\154\145\141\156\160\000"));
lf[778]=C_h_intern(&lf[778],12, C_text("scheme#port?"));
lf[779]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\160\157\162\164\160\000"));
lf[780]=C_h_intern(&lf[780],17, C_text("scheme#procedure?"));
lf[781]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\151\137\143\154\157\163\165\162\145\160\000"));
lf[782]=C_h_intern(&lf[782],23, C_text("chicken.base#weak-pair?"));
lf[783]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\167\145\141\153\137\160\141\151\162\160\000"));
lf[784]=C_h_intern(&lf[784],11, C_text("##sys#pair?"));
lf[785]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\160\141\151\162\160\000"));
lf[786]=C_h_intern(&lf[786],12, C_text("scheme#pair?"));
lf[787]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\160\141\151\162\160\000"));
lf[788]=C_h_intern(&lf[788],31, C_text("chicken.number-vectorf64vector?"));
lf[789]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\066\064\166\145\143\164\157\162\160\000"));
lf[790]=C_h_intern(&lf[790],31, C_text("chicken.number-vectorf32vector?"));
lf[791]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\146\063\062\166\145\143\164\157\162\160\000"));
lf[792]=C_h_intern(&lf[792],31, C_text("chicken.number-vectors64vector?"));
lf[793]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\163\066\064\166\145\143\164\157\162\160\000"));
lf[794]=C_h_intern(&lf[794],31, C_text("chicken.number-vectoru64vector?"));
lf[795]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\165\066\064\166\145\143\164\157\162\160\000"));
lf[796]=C_h_intern(&lf[796],31, C_text("chicken.number-vectors32vector?"));
lf[797]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\163\063\062\166\145\143\164\157\162\160\000"));
lf[798]=C_h_intern(&lf[798],31, C_text("chicken.number-vectoru32vector?"));
lf[799]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\165\063\062\166\145\143\164\157\162\160\000"));
lf[800]=C_h_intern(&lf[800],31, C_text("chicken.number-vectors16vector?"));
lf[801]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\163\061\066\166\145\143\164\157\162\160\000"));
lf[802]=C_h_intern(&lf[802],31, C_text("chicken.number-vectoru16vector?"));
lf[803]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\151\137\165\061\066\166\145\143\164\157\162\160\000"));
lf[804]=C_h_intern(&lf[804],30, C_text("chicken.number-vectors8vector?"));
lf[805]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\163\070\166\145\143\164\157\162\160\000"));
lf[806]=C_h_intern(&lf[806],30, C_text("chicken.number-vectoru8vector?"));
lf[807]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\142\171\164\145\166\145\143\164\157\162\160\000"));
lf[808]=C_h_intern(&lf[808],13, C_text("##sys#vector?"));
lf[809]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\166\145\143\164\157\162\160\000"));
lf[810]=C_h_intern(&lf[810],14, C_text("scheme#vector?"));
lf[811]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\166\145\143\164\157\162\160\000"));
lf[812]=C_h_intern(&lf[812],14, C_text("scheme#symbol?"));
lf[813]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\163\171\155\142\157\154\160\000"));
lf[814]=C_h_intern(&lf[814],26, C_text("chicken.locative#locative?"));
lf[815]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\151\137\154\157\143\141\164\151\166\145\160\000"));
lf[816]=C_h_intern(&lf[816],14, C_text("scheme#string?"));
lf[817]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\151\137\163\164\162\151\156\147\160\000"));
lf[818]=C_h_intern(&lf[818],12, C_text("scheme#char?"));
lf[819]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\143\150\141\162\160\000"));
lf[820]=C_h_intern(&lf[820],10, C_text("scheme#not"));
lf[821]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\151\137\156\157\164\000"));
lf[822]=C_h_intern(&lf[822],13, C_text("scheme#length"));
lf[823]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\151\137\154\145\156\147\164\150\000"));
lf[824]=C_h_intern(&lf[824],11, C_text("##sys#null?"));
lf[825]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\156\165\154\154\160\000"));
lf[826]=C_h_intern(&lf[826],12, C_text("scheme#null?"));
lf[827]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\156\165\154\154\160\000"));
lf[828]=C_h_intern(&lf[828],15, C_text("scheme#list-ref"));
lf[829]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\151\137\154\151\163\164\137\162\145\146\000"));
lf[830]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\017\103\137\165\137\151\137\154\151\163\164\137\162\145\146\000"));
lf[831]=C_h_intern(&lf[831],10, C_text("##sys#eqv?"));
lf[832]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\145\161\166\160\000"));
lf[833]=C_h_intern(&lf[833],11, C_text("scheme#eqv?"));
lf[834]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\145\161\166\160\000"));
lf[835]=C_h_intern(&lf[835],9, C_text("##sys#eq?"));
lf[836]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\145\161\160\000"));
lf[837]=C_h_intern(&lf[837],10, C_text("scheme#eq?"));
lf[838]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\145\161\160\000"));
lf[839]=C_h_intern(&lf[839],10, C_text("scheme#cdr"));
lf[840]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\151\137\143\144\162\000"));
lf[841]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\165\137\151\137\143\144\162\000"));
lf[842]=C_h_intern(&lf[842],13, C_text("scheme#cddddr"));
lf[843]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\151\137\143\144\144\144\144\162\000"));
lf[844]=C_h_intern(&lf[844],12, C_text("scheme#cdddr"));
lf[845]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\143\144\144\144\162\000"));
lf[846]=C_h_intern(&lf[846],11, C_text("scheme#cddr"));
lf[847]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\143\144\144\162\000"));
lf[848]=C_h_intern(&lf[848],11, C_text("scheme#cdar"));
lf[849]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\143\144\141\162\000"));
lf[850]=C_h_intern(&lf[850],11, C_text("scheme#caar"));
lf[851]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\143\141\141\162\000"));
lf[852]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\144\144\144\162\000"));
lf[853]=C_h_intern(&lf[853],13, C_text("scheme#cdddar"));
lf[854]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\144\144\141\162\000"));
lf[855]=C_h_intern(&lf[855],13, C_text("scheme#cddadr"));
lf[856]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\144\141\144\162\000"));
lf[857]=C_h_intern(&lf[857],13, C_text("scheme#cddaar"));
lf[858]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\144\141\141\162\000"));
lf[859]=C_h_intern(&lf[859],13, C_text("scheme#cdaddr"));
lf[860]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\141\144\144\162\000"));
lf[861]=C_h_intern(&lf[861],13, C_text("scheme#cdadar"));
lf[862]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\141\144\141\162\000"));
lf[863]=C_h_intern(&lf[863],13, C_text("scheme#cdaadr"));
lf[864]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\141\141\144\162\000"));
lf[865]=C_h_intern(&lf[865],13, C_text("scheme#cdaaar"));
lf[866]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\144\141\141\141\162\000"));
lf[867]=C_h_intern(&lf[867],13, C_text("scheme#cadddr"));
lf[868]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\144\144\144\162\000"));
lf[869]=C_h_intern(&lf[869],13, C_text("scheme#caddar"));
lf[870]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\144\144\141\162\000"));
lf[871]=C_h_intern(&lf[871],13, C_text("scheme#cadadr"));
lf[872]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\144\141\144\162\000"));
lf[873]=C_h_intern(&lf[873],13, C_text("scheme#cadaar"));
lf[874]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\144\141\141\162\000"));
lf[875]=C_h_intern(&lf[875],13, C_text("scheme#caaddr"));
lf[876]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\141\144\144\162\000"));
lf[877]=C_h_intern(&lf[877],13, C_text("scheme#caadar"));
lf[878]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\141\144\141\162\000"));
lf[879]=C_h_intern(&lf[879],13, C_text("scheme#caaaar"));
lf[880]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\141\141\141\162\000"));
lf[881]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\144\144\144\162\000"));
lf[882]=C_h_intern(&lf[882],12, C_text("scheme#cddar"));
lf[883]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\144\144\141\162\000"));
lf[884]=C_h_intern(&lf[884],12, C_text("scheme#cdadr"));
lf[885]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\144\141\144\162\000"));
lf[886]=C_h_intern(&lf[886],12, C_text("scheme#cdaar"));
lf[887]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\144\141\141\162\000"));
lf[888]=C_h_intern(&lf[888],12, C_text("scheme#caddr"));
lf[889]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\141\144\144\162\000"));
lf[890]=C_h_intern(&lf[890],12, C_text("scheme#cadar"));
lf[891]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\141\144\141\162\000"));
lf[892]=C_h_intern(&lf[892],12, C_text("scheme#caaar"));
lf[893]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\141\141\141\162\000"));
lf[894]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\143\144\144\162\000"));
lf[895]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\143\144\141\162\000"));
lf[896]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\143\141\141\162\000"));
lf[897]=C_h_intern(&lf[897],39, C_text("chicken.continuation#continuation-graft"));
lf[898]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\143\157\156\164\151\156\165\141\164\151\157\156\137\147\162\141\146\164\000"));
lf[899]=C_h_intern(&lf[899],22, C_text("##sys#call-with-values"));
lf[900]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\143\141\154\154\137\167\151\164\150\137\166\141\154\165\145\163\000"));
lf[901]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\165\137\143\141\154\154\137\167\151\164\150\137\166\141\154\165\145\163\000"));
lf[902]=C_h_intern(&lf[902],23, C_text("scheme#call-with-values"));
lf[903]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\023\103\137\143\141\154\154\137\167\151\164\150\137\166\141\154\165\145\163\000"));
lf[904]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\103\137\165\137\143\141\154\154\137\167\151\164\150\137\166\141\154\165\145\163\000"));
lf[905]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\166\141\154\165\145\163\000"));
lf[906]=C_h_intern(&lf[906],13, C_text("scheme#values"));
lf[907]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\166\141\154\165\145\163\000"));
lf[908]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\151\137\143\141\144\144\144\162\000"));
lf[909]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\165\137\151\137\143\141\144\144\144\162\000"));
lf[910]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\151\137\143\141\144\144\162\000"));
lf[911]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\014\103\137\165\137\151\137\143\141\144\144\162\000"));
lf[912]=C_h_intern(&lf[912],11, C_text("scheme#cadr"));
lf[913]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\143\141\144\162\000"));
lf[914]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\013\103\137\165\137\151\137\143\141\144\162\000"));
lf[915]=C_h_intern(&lf[915],9, C_text("##sys#cdr"));
lf[916]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\151\137\143\144\162\000"));
lf[917]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\165\137\151\137\143\144\162\000"));
lf[918]=C_h_intern(&lf[918],9, C_text("##sys#car"));
lf[919]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\151\137\143\141\162\000"));
lf[920]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\165\137\151\137\143\141\162\000"));
lf[921]=C_h_intern(&lf[921],10, C_text("scheme#car"));
lf[922]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\010\103\137\151\137\143\141\162\000"));
lf[923]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\012\103\137\165\137\151\137\143\141\162\000"));
lf[924]=C_h_intern(&lf[924],11, C_text("##sys#apply"));
lf[925]=C_h_intern(&lf[925],12, C_text("scheme#apply"));
lf[926]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\013\103\137\151\137\145\161\165\141\154\160\000\376\377\016"));
lf[927]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\002\000\000\006\103\137\145\161\160\000\376\377\016"));
lf[928]=C_h_intern(&lf[928],13, C_text("scheme#equal?"));
lf[929]=C_h_intern(&lf[929],17, C_text("chicken.base#sub1"));
lf[930]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\151\170\156\165\155\137\144\145\143\162\145\141\163\145\000"));
lf[931]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\146\151\170\156\165\155\137\144\145\143\162\145\141\163\145\000"));
lf[932]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\016\103\137\163\137\141\137\151\137\155\151\156\165\163\000"));
lf[933]=C_h_intern(&lf[933],17, C_text("chicken.base#add1"));
lf[934]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\022\103\137\146\151\170\156\165\155\137\151\156\143\162\145\141\163\145\000"));
lf[935]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\024\103\137\165\137\146\151\170\156\165\155\137\151\156\143\162\145\141\163\145\000"));
lf[936]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\015\103\137\163\137\141\137\151\137\160\154\165\163\000"));
lf[937]=C_h_intern(&lf[937],38, C_text("chicken.compiler.support#mark-variable"));
lf[938]=C_h_intern(&lf[938],15, C_text("##compiler#pure"));
lf[939]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\163\154\157\164\376\003\000\000\002\376\001\000\000\017\001\043\043\163\171\163\043\142\154\157\143\153\055\162\145\146\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\163\151\172\145\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\142\171\164\145\376\003\000\000\002\376\001\000\000\016\001\043\043\163\171\163\043\160\157\151\156\164\145\162\077\376\003\000\000\002\376\001\000\000\030\001\043\043\163\171\163\043\147\145\156\145\162\151\143\055\163\164\162\165\143\164\165\162\145\077\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\151\155\155\145\144\151\141\164\145\077\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\142\171\164\145\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\160\141\151\162\077\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\145\161\077\376\003\000\000\002\376\001\000\000\013\001\043\043\163\171\163\043\154\151\163\164\077\376\003\000\000\002\376\001\000\000\015\001\043\043\163\171\163\043\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\145\161\166\077\376\003\000\000\002\376\001\000\000\021\001\043\043\163\171\163\043\147\145\164\055\153\145\171\167\157\162\144\376\003\000\000\002\376\001\000\000\012\001\043\043\163\171\163\043\166\157\151\144\376\003\000\000\002\376\001\000\000\020\001\043\043\163\171\163\043\160\145\162\155\141\156\145\156\164\077\376\377\016"));
lf[940]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\052\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\052\077\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\053\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\053\077\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\055\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\055\077\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\057\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\057\077\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\074\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\074\075\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\075\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\076\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\076\075\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\141\156\144\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\145\166\145\156\077\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\147\143\144\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\151\157\162\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\154\145\156\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\155\141\170\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\155\151\156\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\155\157\144\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\156\145\147\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\156\157\164\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\157\144\144\077\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\162\145\155\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\163\150\154\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\163\150\162\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\151\170\156\165\155\043\146\170\170\157\162\376\377\016"));
lf[941]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\057\077\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\053\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\055\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\052\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\057\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\076\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\074\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\075\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\076\075\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\074\075\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\155\151\156\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\155\141\170\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\156\145\147\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\147\143\144\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\052\053\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\146\154\157\157\162\376\003\000\000\002\376\001\000\000\030\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\143\145\151\154\151\156\147\376\003\000\000\002\376\001\000\000\031\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\164\162\165\156\143\141\164\145\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\162\157\165\156\144\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\163\151\156\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\143\157\163\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\164\141\156\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\163\151\156\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\143\157\163\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\164\141\156\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\164\141\156\062\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\145\170\160\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\145\170\160\164\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\154\157\147\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\163\161\162\164\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\141\142\163\376\003\000\000\002\376\001\000\000\031\001\143\150\151\143\153\145\156\056\146\154\157\156\165\155\043\146\160\151\156\164\145\147\145\162\077\376\377\016"));
lf[942]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\151\147\156\165\155\077\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\160\154\170\156\165\155\077\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\170\156\165\155\077\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\157\156\165\155\077\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\141\164\156\165\155\077\376\003\000\000\002\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\144\144\061\376\003\000\000\002\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\165\142\061\376\003\000\000\002\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\156\141\156\077\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\151\156\151\164\145\077\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\156\146\151\156\151\164\145\077\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\156\163\171\155\376\003\000\000\002\376\001\000\000\021\001\143\150\151\143\153\145\156\056\142\141\163\145\043\166\157\151\144\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\160\162\151\156\164\052\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\162\162\157\162\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\150\141\162\055\156\141\155\145\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\143\165\162\162\145\156\164\055\145\162\162\157\162\055\160\157\162\164\376\003\000\000\002\376\001\000\000\032\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\171\155\142\157\154\055\141\160\160\145\156\144\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\154\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\162\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\163\145\164\164\145\162\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\141\163\145\043\147\145\164\164\145\162\055\167\151\164\150\055\163\145\164\164\145\162\376\003\000\000\002\376\001\000\000\024\001\143\150\151\143\153\145\156\056\142\141\163\145\043\145\161\165\141\154\075\077\376\003\000\000\002\376\001\000\000\031\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\154\165\163\150\055\157\165\164\160\165\164\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\145\141\153\055\143\157\156\163\376\003\000\000\002\376\001\000\000\027\001\143\150\151\143\153\145\156\056\142\141\163\145\043\167\145\141\153\055\160\141\151\162\077\376\003\000\000\002\376\001\000\000\030\001\143\150\151\143\153\145\156\056\142\141\163\145\043\142\167\160\055\157\142\152\145\143\164\077\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\142\141\163\145\043\151\144\145\156\164\151\164\171\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\056\142\141\163\145\043\157\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\164\157\155\077\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\142\141\163\145\043\141\154\151\163\164\055\162\145\146\376\003\000\000\002\376\001\000\000\023\001\143\150\151\143\153\145\156\056\142\141\163\145\043\162\141\163\163\157\143\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\151\156\164\145\147\145\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\141\156\144\376\003\000\000\002\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\156\157\164\376\003\000\000\002\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\151\157\162\376\003\000\000\002\376\001\000\000\033\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\167\151\163\145\055\170\157\162\376\003\000\000\002\376\001\000\000\040\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\141\162\151\164\150\155\145\164\151\143\055\163\150\151\146\164\376\003\000\000\002\376\001\000\000\034\001\143\150\151\143\153\145\156\056\142\151\164\167\151\163\145\043\142\151\164\055\076\142\157\157\154\145\141\156\376\003\000\000\002\376\001\000\000\044\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\142\171\164\145\166\145\143\164\157\162\043\142\171\164\145\166\145\143\164\157\162\075\077\376\003\000\000\002\376\001\000\000\033\001\143\150\151\143\153\145\156\056\153\145\171\167\157\162\144\043\147\145\164\055\153\145\171\167\157\162\144\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\070\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\070\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\061\066\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\061\066\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\063\062\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\143\066\064\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\040\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\061\062\070\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\061\066\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\063\062\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\045\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\143\066\064\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\046\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\143\061\062\070\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\041\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\041\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\061\066\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\061\066\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\063\062\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\143\066\064\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\143\061\062\070\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\042\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\061\066\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\063\062\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\043\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\143\066\064\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\044\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\143\061\062\070\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\061\066\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\165\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\163\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\063\062\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\146\066\064\166\145\143\164\157\162\055\076\142\171\164\145\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\165\061\066\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\163\061\066\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\165\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\163\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\165\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\163\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\146\063\062\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\146\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\061\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\143\066\064\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\062\001\143\150\151\143\153\145\156\056\156\165\155\142\145\162\055\166\145\143\164\157\162\142\171\164\145\166\145\143\164\157\162\055\076\143\061\062\070\166\145\143\164\157\162\057\163\150\141\162\145\144\376\003\000\000\002\376\001\000\000\055\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\156\165\155\142\145\162\055\157\146\055\163\154\157\164\163\376\003\000\000\002\376\001\000\000\062\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\155\141\153\145\055\162\145\143\157\162\144\055\151\156\163\164\141\156\143\145\376\003\000\000\002\376\001\000\000\047\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\142\154\157\143\153\055\162\145\146\376\003\000\000\002\376\001\000\000\050\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\056\162\145\160\162\145\163\145\156\164\141\164\151\157\156\043\142\154\157\143\153\055\163\145\164\041\376\003\000\000\002\376\001\000\000\035\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\163\145\164\041\376\003\000\000\002\376\001\000\000\041\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\076\157\142\152\145\143\164\376\003\000\000\002\376\001\000\000\032\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\154\157\143\141\164\151\166\145\043\154\157\143\141\164\151\166\145\055\151\156\144\145\170\376\003\000\000\002\376\001\000\000\027\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\053\376\003\000\000\002\376\001\000\000\030\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\075\077\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\141\144\144\162\145\163\163\055\076\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\076\141\144\144\162\145\163\163\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\076\157\142\152\145\143\164\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\157\142\152\145\143\164\055\076\160\157\151\156\164\145\162\376\003\000\000\002\376\001\000\000\035\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\070\055\162\145\146\376\003\000\000\002\376\001\000\000\035\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\070\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\061\066\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\061\066\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\063\062\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\063\062\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\063\062\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\066\064\055\162\145\146\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\070\055\163\145\164\041\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\070\055\163\145\164\041\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\061\066\055\163\145\164\041\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\061\066\055\163\145\164\041\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\165\063\062\055\163\145\164\041\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\163\063\062\055\163\145\164\041\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\063\062\055\163\145\164\041\376\003\000\000\002\376\001\000\000\037\001\143\150\151\143\153\145\156\056\155\145\155\157\162\171\043\160\157\151\156\164\145\162\055\146\066\064\055\163\145\164\041\376\003\000\000\002\376\001\000\000\036\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\376\003\000\000\002\376\001\000\000\041\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\055\151\156\144\145\170\055\143\151\376\003\000\000\002\376\001\000\000\032\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\075\077\376\003\000\000\002\376\001\000\000\035\001\143\150\151\143\153\145\156\056\163\164\162\151\156\147\043\163\165\142\163\164\162\151\156\147\055\143\151\075\077\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\151\157\043\162\145\141\144\055\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\157\162\155\141\164\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\160\162\151\156\164\146\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\163\160\162\151\156\164\146\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\160\162\151\156\164\146\376\377\016"));
lf[943]=C_h_intern(&lf[943],26, C_text("chicken.base#symbol-append"));
lf[944]=C_h_intern(&lf[944],7, C_text("scheme#"));
lf[945]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\003\001\156\157\164\376\003\000\000\002\376\001\000\000\010\001\142\157\157\154\145\141\156\077\376\003\000\000\002\376\001\000\000\005\001\141\160\160\154\171\376\003\000\000\002\376\001\000\000\036\001\143\141\154\154\055\167\151\164\150\055\143\165\162\162\145\156\164\055\143\157\156\164\151\156\165\141\164\151\157\156\376\003\000\000\002\376\001\000\000\003\001\145\161\077\376\003\000\000\002\376\001\000\000\004\001\145\161\166\077\376\003\000\000\002\376\001\000\000\006\001\145\161\165\141\154\077\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\003\000\000\002\376\001\000\000\004\001\143\157\156\163\376\003\000\000\002\376\001\000\000\003\001\143\141\162\376\003\000\000\002\376\001\000\000\003\001\143\144\162\376\003\000\000\002\376\001\000\000\004\001\143\141\141\162\376\003\000\000\002\376\001\000\000\004\001\143\141\144\162\376\003\000\000\002\376\001\000\000\004\001\143\144\141\162\376\003\000\000\002\376\001\000\000\004\001\143\144\144\162\376\003\000\000\002\376\001\000\000\005\001\143\141\141\141\162\376\003\000\000\002\376\001\000\000\005\001\143\141\141\144\162\376\003\000\000\002\376\001\000\000\005\001\143\141\144\141\162\376\003\000\000\002\376\001\000\000\005\001\143\141\144\144\162\376\003\000\000\002\376\001\000\000\005\001\143\144\141\141\162\376\003\000\000\002\376\001\000\000\005\001\143\144\141\144\162\376\003\000\000\002\376\001\000\000\005\001\143\144\144\141\162\376\003\000\000\002\376\001\000\000\005\001\143\144\144\144\162\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\141\162\376\003\000\000\002\376\001\000\000\006\001\143\141\141\141\144\162\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\141\162\376\003\000\000\002\376\001\000\000\006\001\143\141\141\144\144\162\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\141\162\376\003\000\000\002\376\001\000\000\006\001\143\141\144\141\144\162\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\141\162\376\003\000\000\002\376\001\000\000\006\001\143\141\144\144\144\162\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\141\162\376\003\000\000\002\376\001\000\000\006\001\143\144\141\141\144\162\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\141\162\376\003\000\000\002\376\001\000\000\006\001\143\144\141\144\144\162\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\141\162\376\003\000\000\002\376\001\000\000\006\001\143\144\144\141\144\162\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\141\162\376\003\000\000\002\376\001\000\000\006\001\143\144\144\144\144\162\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\141\162\041\376\003\000\000\002\376\001\000\000\010\001\163\145\164\055\143\144\162\041\376\003\000\000\002\376\001\000\000\005\001\156\165\154\154\077\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\003\000\000\002\376\001\000\000\005\001\154\151\163\164\077\376\003\000\000\002\376\001\000\000\006\001\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\005\001\172\145\162\157\077\376\003\000\000\002\376\001\000\000\001\001\052\376\003\000\000\002\376\001\000\000\001\001\055\376\003\000\000\002\376\001\000\000\001\001\053\376\003\000\000\002\376\001\000\000\001\001\057\376\003\000\000\002\376\001\000\000\001\001\055\376\003\000\000\002\376\001\000\000\001\001\076\376\003\000\000\002\376\001\000\000\001\001\074\376\003\000\000\002\376\001\000\000\002\001\076\075\376\003\000\000\002\376\001\000\000\002\001\074\075\376\003\000\000\002\376\001\000\000\001\001\075\376\003\000\000\002\376\001\000\000\023\001\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\143\150\141\162\376\003\000\000\002\376\001\000\000\007\001\156\145\167\154\151\156\145\376\003\000\000\002\376\001\000\000\005\001\167\162\151\164\145\376\003\000\000\002\376\001\000\000\007\001\144\151\163\160\154\141\171\376\003\000\000\002\376\001\000\000\006\001\141\160\160\145\156\144\376\003\000\000\002\376\001\000\000\016\001\163\171\155\142\157\154\055\076\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\010\001\146\157\162\055\145\141\143\150\376\003\000\000\002\376\001\000\000\003\001\155\141\160\376\003\000\000\002\376\001\000\000\005\001\143\150\141\162\077\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\076\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\015\001\151\156\164\145\147\145\162\055\076\143\150\141\162\376\003\000\000\002\376\001\000\000\013\001\145\157\146\055\157\142\152\145\143\164\077\376\003\000\000\002\376\001\000\000\015\001\166\145\143\164\157\162\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\154\145\156\147\164\150\376\003\000\000\002\376\001\000\000\012\001\163\164\162\151\156\147\055\162\145\146\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\163\145\164\041\376\003\000\000\002\376\001\000\000\012\001\166\145\143\164\157\162\055\162\145\146\376\003\000\000\002\376\001\000\000\013\001\166\145\143\164\157\162\055\163\145\164\041\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\075\077\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\074\077\376\003\000\000\002\376\001\000\000\006\001\143\150\141\162\076\077\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\076\075\077\376\003\000\000\002\376\001\000\000\007\001\143\150\141\162\074\075\077\376\003\000\000\002\376\001\000\000\003\001\147\143\144\376\003\000\000\002\376\001\000\000\003\001\154\143\155\376\003\000\000\002\376\001\000\000\007\001\162\145\166\145\162\163\145\376\003\000\000\002\376\001\000\000\007\001\163\171\155\142\157\154\077\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\163\171\155\142\157\154\376\003\000\000\002\376\001\000\000\007\001\156\165\155\142\145\162\077\376\003\000\000\002\376\001\000\000\010\001\143\157\155\160\154\145\170\077\376\003\000\000\002\376\001\000\000\005\001\162\145\141\154\077\376\003\000\000\002\376\001\000\000\010\001\151\156\164\145\147\145\162\077\376\003\000\000\002\376\001\000\000\011\001\162\141\164\151\157\156\141\154\077\376\003\000\000\002\376\001\000\000\004\001\157\144\144\077\376\003\000\000\002\376\001\000\000\005\001\145\166\145\156\077\376\003\000\000\002\376\001\000\000\011\001\160\157\163\151\164\151\166\145\077\376\003\000\000\002\376\001\000\000\011\001\156\145\147\141\164\151\166\145\077\376\003\000\000\002\376\001\000\000\006\001\145\170\141\143\164\077\376\003\000\000\002\376\001\000\000\010\001\151\156\145\170\141\143\164\077\376\003\000\000\002\376\001\000\000\016\001\145\170\141\143\164\055\151\156\164\145\147\145\162\077\376\003\000\000\002\376\001\000\000\003\001\155\141\170\376\003\000\000\002\376\001\000\000\003\001\155\151\156\376\003\000\000\002\376\001\000\000\010\001\161\165\157\164\151\145\156\164\376\003\000\000\002\376\001\000\000\011\001\162\145\155\141\151\156\144\145\162\376\003\000\000\002\376\001\000\000\006\001\155\157\144\165\154\157\376\003\000\000\002\376\001\000\000\005\001\146\154\157\157\162\376\003\000\000\002\376\001\000\000\007\001\143\145\151\154\151\156\147\376\003\000\000\002\376\001\000\000\010\001\164\162\165\156\143\141\164\145\376\003\000\000\002\376\001\000\000\005\001\162\157\165\156\144\376\003\000\000\002\376\001\000\000\013\001\162\141\164\151\157\156\141\154\151\172\145\376\003\000\000\002\376\001\000\000\016\001\145\170\141\143\164\055\076\151\156\145\170\141\143\164\376\003\000\000\002\376\001\000\000\016\001\151\156\145\170\141\143\164\055\076\145\170\141\143\164\376\003\000\000\002\376\001\000\000\003\001\145\170\160\376\003\000\000\002\376\001\000\000\003\001\154\157\147\376\003\000\000\002\376\001\000\000\003\001\163\151\156\376\003\000\000\002\376\001\000\000\004\001\145\170\160\164\376\003\000\000\002\376\001\000\000\004\001\163\161\162\164\376\003\000\000\002\376\001\000\000\003\001\143\157\163\376\003\000\000\002\376\001\000\000\003\001\164\141\156\376\003\000\000\002\376\001\000\000\004\001\141\163\151\156\376\003\000\000\002\376\001\000\000\004\001\141\143\157\163\376\003\000\000\002\376\001\000\000\004\001\141\164\141\156\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\016\001\163\164\162\151\156\147\055\076\156\165\155\142\145\162\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\075\077\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\074\077\376\003\000\000\002\376\001\000\000\011\001\143\150\141\162\055\143\151\076\077\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\076\075\077\376\003\000\000\002\376\001\000\000\012\001\143\150\141\162\055\143\151\074\075\077\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\141\154\160\150\141\142\145\164\151\143\077\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\167\150\151\164\145\163\160\141\143\145\077\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\156\165\155\145\162\151\143\077\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\154\157\167\145\162\055\143\141\163\145\077\376\003\000\000\002\376\001\000\000\020\001\143\150\141\162\055\165\160\160\145\162\055\143\141\163\145\077\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\165\160\143\141\163\145\376\003\000\000\002\376\001\000\000\015\001\143\150\141\162\055\144\157\167\156\143\141\163\145\376\003\000\000\002\376\001\000\000\007\001\163\164\162\151\156\147\077\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\075\077\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\076\077\376\003\000\000\002\376\001\000\000\010\001\163\164\162\151\156\147\074\077\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\076\075\077\376\003\000\000\002\376\001\000\000\011\001\163\164\162\151\156\147\074\075\077\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\075\077\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\074\077\376\003\000\000\002\376\001\000\000\013\001\163\164\162\151\156\147\055\143\151\076\077\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\074\075\077\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\143\151\076\075\077\376\003\000\000\002\376\001\000\000\015\001\163\164\162\151\156\147\055\141\160\160\145\156\144\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\154\151\163\164\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\007\001\166\145\143\164\157\162\077\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\076\154\151\163\164\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\004\001\162\145\141\144\376\003\000\000\002\376\001\000\000\011\001\162\145\141\144\055\143\150\141\162\376\003\000\000\002\376\001\000\000\011\001\163\165\142\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\146\151\154\154\041\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\143\157\160\171\041\376\003\000\000\002\376\001\000\000\014\001\166\145\143\164\157\162\055\146\151\154\154\041\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\013\001\155\141\153\145\055\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\017\001\157\160\145\156\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\001\000\000\020\001\157\160\145\156\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\001\000\000\024\001\143\141\154\154\055\167\151\164\150\055\151\156\160\165\164\055\146\151\154\145\376\003\000\000\002\376\001\000\000\025\001\143\141\154\154\055\167\151\164\150\055\157\165\164\160\165\164\055\146\151\154\145\376\003\000\000\002\376\001\000\000\020\001\143\154\157\163\145\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\021\001\143\154\157\163\145\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\006\001\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\020\001\143\141\154\154\055\167\151\164\150\055\166\141\154\165\145\163\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\003\000\000\002\376\001\000\000\012\001\160\162\157\143\145\144\165\162\145\077\376\003\000\000\002\376\001\000\000\004\001\155\145\155\161\376\003\000\000\002\376\001\000\000\004\001\155\145\155\166\376\003\000\000\002\376\001\000\000\006\001\155\145\155\142\145\162\376\003\000\000\002\376\001\000\000\004\001\141\163\163\161\376\003\000\000\002\376\001\000\000\004\001\141\163\163\166\376\003\000\000\002\376\001\000\000\005\001\141\163\163\157\143\376\003\000\000\002\376\001\000\000\011\001\154\151\163\164\055\164\141\151\154\376\003\000\000\002\376\001\000\000\010\001\154\151\163\164\055\162\145\146\376\003\000\000\002\376\001\000\000\003\001\141\142\163\376\003\000\000\002\376\001\000\000\013\001\143\150\141\162\055\162\145\141\144\171\077\376\003\000\000\002\376\001\000\000\011\001\160\145\145\153\055\143\150\141\162\376\003\000\000\002\376\001\000\000\014\001\154\151\163\164\055\076\163\164\162\151\156\147\376\003\000\000\002\376\001\000\000\014\001\163\164\162\151\156\147\055\076\154\151\163\164\376\003\000\000\002\376\001\000\000\022\001\143\165\162\162\145\156\164\055\151\156\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\023\001\143\165\162\162\145\156\164\055\157\165\164\160\165\164\055\160\157\162\164\376\003\000\000\002\376\001\000\000\007\001\143\141\154\154\057\143\143\376\003\000\000\002\376\001\000\000\012\001\155\141\153\145\055\160\157\154\141\162\376\003\000\000\002\376\001\000\000\020\001\155\141\153\145\055\162\145\143\164\141\156\147\165\154\141\162\376\003\000\000\002\376\001\000\000\011\001\162\145\141\154\055\160\141\162\164\376\003\000\000\002\376\001\000\000\011\001\151\155\141\147\055\160\141\162\164\376\003\000\000\002\376\001\000\000\004\001\154\157\141\144\376\003\000\000\002\376\001\000\000\004\001\145\166\141\154\376\003\000\000\002\376\001\000\000\027\001\151\156\164\145\162\141\143\164\151\157\156\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\001\000\000\020\001\156\165\154\154\055\145\156\166\151\162\157\156\155\145\156\164\376\003\000\000\002\376\001\000\000\031\001\163\143\150\145\155\145\055\162\145\160\157\162\164\055\145\156\166\151\162\157\156\155\145\156\164\376\377\016"));
lf[946]=C_h_intern(&lf[946],50, C_text("chicken.compiler.optimizer#membership-unfold-limit"));
lf[947]=C_h_intern(&lf[947],52, C_text("chicken.compiler.optimizer#membership-test-operators"));
lf[948]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\002\000\000\011\103\137\151\137\155\145\155\161\000\376\002\000\000\006\103\137\145\161\160\000\376\003\000\000\002\376\003\000\000\002\376\002\000\000\013\103\137\165\137\151\137\155\145\155\161\000\376\002\000\000\006\103\137\145\161\160\000\376\003\000\000\002\376\003\000\000\002\376\002\000\000\013\103\137\151\137\155\145\155\142\145\162\000\376\002\000\000\013\103\137\151\137\145\161\165\141\154\160\000\376\003\000\000\002\376\003\000\000\002\376\002\000\000\011\103\137\151\137\155\145\155\166\000\376\002\000\000\011\103\137\151\137\145\161\166\160\000\376\377\016"));
lf[949]=C_h_intern(&lf[949],45, C_text("chicken.compiler.optimizer#eq-inline-operator"));
lf[950]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\103\137\145\161\160\000"));
lf[951]=C_h_intern(&lf[951],54, C_text("chicken.compiler.optimizer#default-optimization-passes"));
C_register_lf2(lf,952,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1686,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[674] = {
{C_text("f_1686:c_2dplatform_2escm"),(void*)f_1686},
{C_text("f_1689:c_2dplatform_2escm"),(void*)f_1689},
{C_text("f_1692:c_2dplatform_2escm"),(void*)f_1692},
{C_text("f_1695:c_2dplatform_2escm"),(void*)f_1695},
{C_text("f_1698:c_2dplatform_2escm"),(void*)f_1698},
{C_text("f_1701:c_2dplatform_2escm"),(void*)f_1701},
{C_text("f_2136:c_2dplatform_2escm"),(void*)f_2136},
{C_text("f_2142:c_2dplatform_2escm"),(void*)f_2142},
{C_text("f_2156:c_2dplatform_2escm"),(void*)f_2156},
{C_text("f_2312:c_2dplatform_2escm"),(void*)f_2312},
{C_text("f_2321:c_2dplatform_2escm"),(void*)f_2321},
{C_text("f_2329:c_2dplatform_2escm"),(void*)f_2329},
{C_text("f_2336:c_2dplatform_2escm"),(void*)f_2336},
{C_text("f_2350:c_2dplatform_2escm"),(void*)f_2350},
{C_text("f_2478:c_2dplatform_2escm"),(void*)f_2478},
{C_text("f_2720:c_2dplatform_2escm"),(void*)f_2720},
{C_text("f_2734:c_2dplatform_2escm"),(void*)f_2734},
{C_text("f_2738:c_2dplatform_2escm"),(void*)f_2738},
{C_text("f_2982:c_2dplatform_2escm"),(void*)f_2982},
{C_text("f_2990:c_2dplatform_2escm"),(void*)f_2990},
{C_text("f_2993:c_2dplatform_2escm"),(void*)f_2993},
{C_text("f_2996:c_2dplatform_2escm"),(void*)f_2996},
{C_text("f_3011:c_2dplatform_2escm"),(void*)f_3011},
{C_text("f_3018:c_2dplatform_2escm"),(void*)f_3018},
{C_text("f_3027:c_2dplatform_2escm"),(void*)f_3027},
{C_text("f_3029:c_2dplatform_2escm"),(void*)f_3029},
{C_text("f_3031:c_2dplatform_2escm"),(void*)f_3031},
{C_text("f_3053:c_2dplatform_2escm"),(void*)f_3053},
{C_text("f_3086:c_2dplatform_2escm"),(void*)f_3086},
{C_text("f_3094:c_2dplatform_2escm"),(void*)f_3094},
{C_text("f_3097:c_2dplatform_2escm"),(void*)f_3097},
{C_text("f_3099:c_2dplatform_2escm"),(void*)f_3099},
{C_text("f_3115:c_2dplatform_2escm"),(void*)f_3115},
{C_text("f_3124:c_2dplatform_2escm"),(void*)f_3124},
{C_text("f_3127:c_2dplatform_2escm"),(void*)f_3127},
{C_text("f_3142:c_2dplatform_2escm"),(void*)f_3142},
{C_text("f_3154:c_2dplatform_2escm"),(void*)f_3154},
{C_text("f_3168:c_2dplatform_2escm"),(void*)f_3168},
{C_text("f_3172:c_2dplatform_2escm"),(void*)f_3172},
{C_text("f_3181:c_2dplatform_2escm"),(void*)f_3181},
{C_text("f_3195:c_2dplatform_2escm"),(void*)f_3195},
{C_text("f_3199:c_2dplatform_2escm"),(void*)f_3199},
{C_text("f_3229:c_2dplatform_2escm"),(void*)f_3229},
{C_text("f_3233:c_2dplatform_2escm"),(void*)f_3233},
{C_text("f_3237:c_2dplatform_2escm"),(void*)f_3237},
{C_text("f_3241:c_2dplatform_2escm"),(void*)f_3241},
{C_text("f_3245:c_2dplatform_2escm"),(void*)f_3245},
{C_text("f_3253:c_2dplatform_2escm"),(void*)f_3253},
{C_text("f_3256:c_2dplatform_2escm"),(void*)f_3256},
{C_text("f_3259:c_2dplatform_2escm"),(void*)f_3259},
{C_text("f_3261:c_2dplatform_2escm"),(void*)f_3261},
{C_text("f_3289:c_2dplatform_2escm"),(void*)f_3289},
{C_text("f_3297:c_2dplatform_2escm"),(void*)f_3297},
{C_text("f_3314:c_2dplatform_2escm"),(void*)f_3314},
{C_text("f_3316:c_2dplatform_2escm"),(void*)f_3316},
{C_text("f_3341:c_2dplatform_2escm"),(void*)f_3341},
{C_text("f_3352:c_2dplatform_2escm"),(void*)f_3352},
{C_text("f_3356:c_2dplatform_2escm"),(void*)f_3356},
{C_text("f_3359:c_2dplatform_2escm"),(void*)f_3359},
{C_text("f_3373:c_2dplatform_2escm"),(void*)f_3373},
{C_text("f_3377:c_2dplatform_2escm"),(void*)f_3377},
{C_text("f_3400:c_2dplatform_2escm"),(void*)f_3400},
{C_text("f_3415:c_2dplatform_2escm"),(void*)f_3415},
{C_text("f_3423:c_2dplatform_2escm"),(void*)f_3423},
{C_text("f_3432:c_2dplatform_2escm"),(void*)f_3432},
{C_text("f_3436:c_2dplatform_2escm"),(void*)f_3436},
{C_text("f_3439:c_2dplatform_2escm"),(void*)f_3439},
{C_text("f_3442:c_2dplatform_2escm"),(void*)f_3442},
{C_text("f_3444:c_2dplatform_2escm"),(void*)f_3444},
{C_text("f_3450:c_2dplatform_2escm"),(void*)f_3450},
{C_text("f_3462:c_2dplatform_2escm"),(void*)f_3462},
{C_text("f_3481:c_2dplatform_2escm"),(void*)f_3481},
{C_text("f_3512:c_2dplatform_2escm"),(void*)f_3512},
{C_text("f_3515:c_2dplatform_2escm"),(void*)f_3515},
{C_text("f_3518:c_2dplatform_2escm"),(void*)f_3518},
{C_text("f_3521:c_2dplatform_2escm"),(void*)f_3521},
{C_text("f_3524:c_2dplatform_2escm"),(void*)f_3524},
{C_text("f_3527:c_2dplatform_2escm"),(void*)f_3527},
{C_text("f_3528:c_2dplatform_2escm"),(void*)f_3528},
{C_text("f_3554:c_2dplatform_2escm"),(void*)f_3554},
{C_text("f_3557:c_2dplatform_2escm"),(void*)f_3557},
{C_text("f_3559:c_2dplatform_2escm"),(void*)f_3559},
{C_text("f_3593:c_2dplatform_2escm"),(void*)f_3593},
{C_text("f_3620:c_2dplatform_2escm"),(void*)f_3620},
{C_text("f_3623:c_2dplatform_2escm"),(void*)f_3623},
{C_text("f_3626:c_2dplatform_2escm"),(void*)f_3626},
{C_text("f_3641:c_2dplatform_2escm"),(void*)f_3641},
{C_text("f_3645:c_2dplatform_2escm"),(void*)f_3645},
{C_text("f_3657:c_2dplatform_2escm"),(void*)f_3657},
{C_text("f_3669:c_2dplatform_2escm"),(void*)f_3669},
{C_text("f_3681:c_2dplatform_2escm"),(void*)f_3681},
{C_text("f_3685:c_2dplatform_2escm"),(void*)f_3685},
{C_text("f_3693:c_2dplatform_2escm"),(void*)f_3693},
{C_text("f_3700:c_2dplatform_2escm"),(void*)f_3700},
{C_text("f_3704:c_2dplatform_2escm"),(void*)f_3704},
{C_text("f_3708:c_2dplatform_2escm"),(void*)f_3708},
{C_text("f_3712:c_2dplatform_2escm"),(void*)f_3712},
{C_text("f_3716:c_2dplatform_2escm"),(void*)f_3716},
{C_text("f_3724:c_2dplatform_2escm"),(void*)f_3724},
{C_text("f_3727:c_2dplatform_2escm"),(void*)f_3727},
{C_text("f_3730:c_2dplatform_2escm"),(void*)f_3730},
{C_text("f_3733:c_2dplatform_2escm"),(void*)f_3733},
{C_text("f_3736:c_2dplatform_2escm"),(void*)f_3736},
{C_text("f_3739:c_2dplatform_2escm"),(void*)f_3739},
{C_text("f_3742:c_2dplatform_2escm"),(void*)f_3742},
{C_text("f_3745:c_2dplatform_2escm"),(void*)f_3745},
{C_text("f_3748:c_2dplatform_2escm"),(void*)f_3748},
{C_text("f_3751:c_2dplatform_2escm"),(void*)f_3751},
{C_text("f_3754:c_2dplatform_2escm"),(void*)f_3754},
{C_text("f_3757:c_2dplatform_2escm"),(void*)f_3757},
{C_text("f_3760:c_2dplatform_2escm"),(void*)f_3760},
{C_text("f_3763:c_2dplatform_2escm"),(void*)f_3763},
{C_text("f_3766:c_2dplatform_2escm"),(void*)f_3766},
{C_text("f_3769:c_2dplatform_2escm"),(void*)f_3769},
{C_text("f_3772:c_2dplatform_2escm"),(void*)f_3772},
{C_text("f_3775:c_2dplatform_2escm"),(void*)f_3775},
{C_text("f_3778:c_2dplatform_2escm"),(void*)f_3778},
{C_text("f_3781:c_2dplatform_2escm"),(void*)f_3781},
{C_text("f_3784:c_2dplatform_2escm"),(void*)f_3784},
{C_text("f_3787:c_2dplatform_2escm"),(void*)f_3787},
{C_text("f_3790:c_2dplatform_2escm"),(void*)f_3790},
{C_text("f_3793:c_2dplatform_2escm"),(void*)f_3793},
{C_text("f_3796:c_2dplatform_2escm"),(void*)f_3796},
{C_text("f_3799:c_2dplatform_2escm"),(void*)f_3799},
{C_text("f_3802:c_2dplatform_2escm"),(void*)f_3802},
{C_text("f_3805:c_2dplatform_2escm"),(void*)f_3805},
{C_text("f_3808:c_2dplatform_2escm"),(void*)f_3808},
{C_text("f_3811:c_2dplatform_2escm"),(void*)f_3811},
{C_text("f_3814:c_2dplatform_2escm"),(void*)f_3814},
{C_text("f_3817:c_2dplatform_2escm"),(void*)f_3817},
{C_text("f_3820:c_2dplatform_2escm"),(void*)f_3820},
{C_text("f_3823:c_2dplatform_2escm"),(void*)f_3823},
{C_text("f_3826:c_2dplatform_2escm"),(void*)f_3826},
{C_text("f_3829:c_2dplatform_2escm"),(void*)f_3829},
{C_text("f_3832:c_2dplatform_2escm"),(void*)f_3832},
{C_text("f_3835:c_2dplatform_2escm"),(void*)f_3835},
{C_text("f_3838:c_2dplatform_2escm"),(void*)f_3838},
{C_text("f_3841:c_2dplatform_2escm"),(void*)f_3841},
{C_text("f_3844:c_2dplatform_2escm"),(void*)f_3844},
{C_text("f_3847:c_2dplatform_2escm"),(void*)f_3847},
{C_text("f_3850:c_2dplatform_2escm"),(void*)f_3850},
{C_text("f_3853:c_2dplatform_2escm"),(void*)f_3853},
{C_text("f_3856:c_2dplatform_2escm"),(void*)f_3856},
{C_text("f_3859:c_2dplatform_2escm"),(void*)f_3859},
{C_text("f_3862:c_2dplatform_2escm"),(void*)f_3862},
{C_text("f_3865:c_2dplatform_2escm"),(void*)f_3865},
{C_text("f_3868:c_2dplatform_2escm"),(void*)f_3868},
{C_text("f_3871:c_2dplatform_2escm"),(void*)f_3871},
{C_text("f_3874:c_2dplatform_2escm"),(void*)f_3874},
{C_text("f_3877:c_2dplatform_2escm"),(void*)f_3877},
{C_text("f_3880:c_2dplatform_2escm"),(void*)f_3880},
{C_text("f_3883:c_2dplatform_2escm"),(void*)f_3883},
{C_text("f_3886:c_2dplatform_2escm"),(void*)f_3886},
{C_text("f_3889:c_2dplatform_2escm"),(void*)f_3889},
{C_text("f_3892:c_2dplatform_2escm"),(void*)f_3892},
{C_text("f_3895:c_2dplatform_2escm"),(void*)f_3895},
{C_text("f_3898:c_2dplatform_2escm"),(void*)f_3898},
{C_text("f_3901:c_2dplatform_2escm"),(void*)f_3901},
{C_text("f_3904:c_2dplatform_2escm"),(void*)f_3904},
{C_text("f_3907:c_2dplatform_2escm"),(void*)f_3907},
{C_text("f_3910:c_2dplatform_2escm"),(void*)f_3910},
{C_text("f_3913:c_2dplatform_2escm"),(void*)f_3913},
{C_text("f_3916:c_2dplatform_2escm"),(void*)f_3916},
{C_text("f_3919:c_2dplatform_2escm"),(void*)f_3919},
{C_text("f_3922:c_2dplatform_2escm"),(void*)f_3922},
{C_text("f_3925:c_2dplatform_2escm"),(void*)f_3925},
{C_text("f_3928:c_2dplatform_2escm"),(void*)f_3928},
{C_text("f_3931:c_2dplatform_2escm"),(void*)f_3931},
{C_text("f_3934:c_2dplatform_2escm"),(void*)f_3934},
{C_text("f_3937:c_2dplatform_2escm"),(void*)f_3937},
{C_text("f_3940:c_2dplatform_2escm"),(void*)f_3940},
{C_text("f_3943:c_2dplatform_2escm"),(void*)f_3943},
{C_text("f_3946:c_2dplatform_2escm"),(void*)f_3946},
{C_text("f_3949:c_2dplatform_2escm"),(void*)f_3949},
{C_text("f_3952:c_2dplatform_2escm"),(void*)f_3952},
{C_text("f_3955:c_2dplatform_2escm"),(void*)f_3955},
{C_text("f_3958:c_2dplatform_2escm"),(void*)f_3958},
{C_text("f_3961:c_2dplatform_2escm"),(void*)f_3961},
{C_text("f_3964:c_2dplatform_2escm"),(void*)f_3964},
{C_text("f_3967:c_2dplatform_2escm"),(void*)f_3967},
{C_text("f_3970:c_2dplatform_2escm"),(void*)f_3970},
{C_text("f_3973:c_2dplatform_2escm"),(void*)f_3973},
{C_text("f_3976:c_2dplatform_2escm"),(void*)f_3976},
{C_text("f_3979:c_2dplatform_2escm"),(void*)f_3979},
{C_text("f_3982:c_2dplatform_2escm"),(void*)f_3982},
{C_text("f_3985:c_2dplatform_2escm"),(void*)f_3985},
{C_text("f_3988:c_2dplatform_2escm"),(void*)f_3988},
{C_text("f_3991:c_2dplatform_2escm"),(void*)f_3991},
{C_text("f_3994:c_2dplatform_2escm"),(void*)f_3994},
{C_text("f_3997:c_2dplatform_2escm"),(void*)f_3997},
{C_text("f_4000:c_2dplatform_2escm"),(void*)f_4000},
{C_text("f_4003:c_2dplatform_2escm"),(void*)f_4003},
{C_text("f_4006:c_2dplatform_2escm"),(void*)f_4006},
{C_text("f_4009:c_2dplatform_2escm"),(void*)f_4009},
{C_text("f_4012:c_2dplatform_2escm"),(void*)f_4012},
{C_text("f_4015:c_2dplatform_2escm"),(void*)f_4015},
{C_text("f_4018:c_2dplatform_2escm"),(void*)f_4018},
{C_text("f_4021:c_2dplatform_2escm"),(void*)f_4021},
{C_text("f_4024:c_2dplatform_2escm"),(void*)f_4024},
{C_text("f_4027:c_2dplatform_2escm"),(void*)f_4027},
{C_text("f_4030:c_2dplatform_2escm"),(void*)f_4030},
{C_text("f_4033:c_2dplatform_2escm"),(void*)f_4033},
{C_text("f_4036:c_2dplatform_2escm"),(void*)f_4036},
{C_text("f_4039:c_2dplatform_2escm"),(void*)f_4039},
{C_text("f_4042:c_2dplatform_2escm"),(void*)f_4042},
{C_text("f_4045:c_2dplatform_2escm"),(void*)f_4045},
{C_text("f_4048:c_2dplatform_2escm"),(void*)f_4048},
{C_text("f_4051:c_2dplatform_2escm"),(void*)f_4051},
{C_text("f_4054:c_2dplatform_2escm"),(void*)f_4054},
{C_text("f_4057:c_2dplatform_2escm"),(void*)f_4057},
{C_text("f_4060:c_2dplatform_2escm"),(void*)f_4060},
{C_text("f_4063:c_2dplatform_2escm"),(void*)f_4063},
{C_text("f_4066:c_2dplatform_2escm"),(void*)f_4066},
{C_text("f_4069:c_2dplatform_2escm"),(void*)f_4069},
{C_text("f_4072:c_2dplatform_2escm"),(void*)f_4072},
{C_text("f_4075:c_2dplatform_2escm"),(void*)f_4075},
{C_text("f_4078:c_2dplatform_2escm"),(void*)f_4078},
{C_text("f_4081:c_2dplatform_2escm"),(void*)f_4081},
{C_text("f_4084:c_2dplatform_2escm"),(void*)f_4084},
{C_text("f_4087:c_2dplatform_2escm"),(void*)f_4087},
{C_text("f_4090:c_2dplatform_2escm"),(void*)f_4090},
{C_text("f_4093:c_2dplatform_2escm"),(void*)f_4093},
{C_text("f_4096:c_2dplatform_2escm"),(void*)f_4096},
{C_text("f_4099:c_2dplatform_2escm"),(void*)f_4099},
{C_text("f_4102:c_2dplatform_2escm"),(void*)f_4102},
{C_text("f_4105:c_2dplatform_2escm"),(void*)f_4105},
{C_text("f_4108:c_2dplatform_2escm"),(void*)f_4108},
{C_text("f_4111:c_2dplatform_2escm"),(void*)f_4111},
{C_text("f_4114:c_2dplatform_2escm"),(void*)f_4114},
{C_text("f_4117:c_2dplatform_2escm"),(void*)f_4117},
{C_text("f_4120:c_2dplatform_2escm"),(void*)f_4120},
{C_text("f_4123:c_2dplatform_2escm"),(void*)f_4123},
{C_text("f_4126:c_2dplatform_2escm"),(void*)f_4126},
{C_text("f_4129:c_2dplatform_2escm"),(void*)f_4129},
{C_text("f_4132:c_2dplatform_2escm"),(void*)f_4132},
{C_text("f_4135:c_2dplatform_2escm"),(void*)f_4135},
{C_text("f_4138:c_2dplatform_2escm"),(void*)f_4138},
{C_text("f_4141:c_2dplatform_2escm"),(void*)f_4141},
{C_text("f_4144:c_2dplatform_2escm"),(void*)f_4144},
{C_text("f_4147:c_2dplatform_2escm"),(void*)f_4147},
{C_text("f_4150:c_2dplatform_2escm"),(void*)f_4150},
{C_text("f_4153:c_2dplatform_2escm"),(void*)f_4153},
{C_text("f_4156:c_2dplatform_2escm"),(void*)f_4156},
{C_text("f_4159:c_2dplatform_2escm"),(void*)f_4159},
{C_text("f_4162:c_2dplatform_2escm"),(void*)f_4162},
{C_text("f_4165:c_2dplatform_2escm"),(void*)f_4165},
{C_text("f_4168:c_2dplatform_2escm"),(void*)f_4168},
{C_text("f_4171:c_2dplatform_2escm"),(void*)f_4171},
{C_text("f_4174:c_2dplatform_2escm"),(void*)f_4174},
{C_text("f_4177:c_2dplatform_2escm"),(void*)f_4177},
{C_text("f_4180:c_2dplatform_2escm"),(void*)f_4180},
{C_text("f_4183:c_2dplatform_2escm"),(void*)f_4183},
{C_text("f_4186:c_2dplatform_2escm"),(void*)f_4186},
{C_text("f_4189:c_2dplatform_2escm"),(void*)f_4189},
{C_text("f_4192:c_2dplatform_2escm"),(void*)f_4192},
{C_text("f_4195:c_2dplatform_2escm"),(void*)f_4195},
{C_text("f_4198:c_2dplatform_2escm"),(void*)f_4198},
{C_text("f_4201:c_2dplatform_2escm"),(void*)f_4201},
{C_text("f_4204:c_2dplatform_2escm"),(void*)f_4204},
{C_text("f_4207:c_2dplatform_2escm"),(void*)f_4207},
{C_text("f_4210:c_2dplatform_2escm"),(void*)f_4210},
{C_text("f_4213:c_2dplatform_2escm"),(void*)f_4213},
{C_text("f_4216:c_2dplatform_2escm"),(void*)f_4216},
{C_text("f_4219:c_2dplatform_2escm"),(void*)f_4219},
{C_text("f_4222:c_2dplatform_2escm"),(void*)f_4222},
{C_text("f_4225:c_2dplatform_2escm"),(void*)f_4225},
{C_text("f_4228:c_2dplatform_2escm"),(void*)f_4228},
{C_text("f_4231:c_2dplatform_2escm"),(void*)f_4231},
{C_text("f_4234:c_2dplatform_2escm"),(void*)f_4234},
{C_text("f_4237:c_2dplatform_2escm"),(void*)f_4237},
{C_text("f_4240:c_2dplatform_2escm"),(void*)f_4240},
{C_text("f_4243:c_2dplatform_2escm"),(void*)f_4243},
{C_text("f_4246:c_2dplatform_2escm"),(void*)f_4246},
{C_text("f_4249:c_2dplatform_2escm"),(void*)f_4249},
{C_text("f_4252:c_2dplatform_2escm"),(void*)f_4252},
{C_text("f_4255:c_2dplatform_2escm"),(void*)f_4255},
{C_text("f_4258:c_2dplatform_2escm"),(void*)f_4258},
{C_text("f_4261:c_2dplatform_2escm"),(void*)f_4261},
{C_text("f_4264:c_2dplatform_2escm"),(void*)f_4264},
{C_text("f_4267:c_2dplatform_2escm"),(void*)f_4267},
{C_text("f_4270:c_2dplatform_2escm"),(void*)f_4270},
{C_text("f_4273:c_2dplatform_2escm"),(void*)f_4273},
{C_text("f_4276:c_2dplatform_2escm"),(void*)f_4276},
{C_text("f_4279:c_2dplatform_2escm"),(void*)f_4279},
{C_text("f_4282:c_2dplatform_2escm"),(void*)f_4282},
{C_text("f_4285:c_2dplatform_2escm"),(void*)f_4285},
{C_text("f_4288:c_2dplatform_2escm"),(void*)f_4288},
{C_text("f_4291:c_2dplatform_2escm"),(void*)f_4291},
{C_text("f_4294:c_2dplatform_2escm"),(void*)f_4294},
{C_text("f_4297:c_2dplatform_2escm"),(void*)f_4297},
{C_text("f_4300:c_2dplatform_2escm"),(void*)f_4300},
{C_text("f_4303:c_2dplatform_2escm"),(void*)f_4303},
{C_text("f_4306:c_2dplatform_2escm"),(void*)f_4306},
{C_text("f_4309:c_2dplatform_2escm"),(void*)f_4309},
{C_text("f_4312:c_2dplatform_2escm"),(void*)f_4312},
{C_text("f_4315:c_2dplatform_2escm"),(void*)f_4315},
{C_text("f_4318:c_2dplatform_2escm"),(void*)f_4318},
{C_text("f_4321:c_2dplatform_2escm"),(void*)f_4321},
{C_text("f_4324:c_2dplatform_2escm"),(void*)f_4324},
{C_text("f_4327:c_2dplatform_2escm"),(void*)f_4327},
{C_text("f_4330:c_2dplatform_2escm"),(void*)f_4330},
{C_text("f_4333:c_2dplatform_2escm"),(void*)f_4333},
{C_text("f_4336:c_2dplatform_2escm"),(void*)f_4336},
{C_text("f_4339:c_2dplatform_2escm"),(void*)f_4339},
{C_text("f_4342:c_2dplatform_2escm"),(void*)f_4342},
{C_text("f_4345:c_2dplatform_2escm"),(void*)f_4345},
{C_text("f_4348:c_2dplatform_2escm"),(void*)f_4348},
{C_text("f_4351:c_2dplatform_2escm"),(void*)f_4351},
{C_text("f_4354:c_2dplatform_2escm"),(void*)f_4354},
{C_text("f_4357:c_2dplatform_2escm"),(void*)f_4357},
{C_text("f_4360:c_2dplatform_2escm"),(void*)f_4360},
{C_text("f_4363:c_2dplatform_2escm"),(void*)f_4363},
{C_text("f_4366:c_2dplatform_2escm"),(void*)f_4366},
{C_text("f_4369:c_2dplatform_2escm"),(void*)f_4369},
{C_text("f_4372:c_2dplatform_2escm"),(void*)f_4372},
{C_text("f_4375:c_2dplatform_2escm"),(void*)f_4375},
{C_text("f_4378:c_2dplatform_2escm"),(void*)f_4378},
{C_text("f_4381:c_2dplatform_2escm"),(void*)f_4381},
{C_text("f_4384:c_2dplatform_2escm"),(void*)f_4384},
{C_text("f_4387:c_2dplatform_2escm"),(void*)f_4387},
{C_text("f_4390:c_2dplatform_2escm"),(void*)f_4390},
{C_text("f_4393:c_2dplatform_2escm"),(void*)f_4393},
{C_text("f_4396:c_2dplatform_2escm"),(void*)f_4396},
{C_text("f_4399:c_2dplatform_2escm"),(void*)f_4399},
{C_text("f_4402:c_2dplatform_2escm"),(void*)f_4402},
{C_text("f_4405:c_2dplatform_2escm"),(void*)f_4405},
{C_text("f_4408:c_2dplatform_2escm"),(void*)f_4408},
{C_text("f_4411:c_2dplatform_2escm"),(void*)f_4411},
{C_text("f_4414:c_2dplatform_2escm"),(void*)f_4414},
{C_text("f_4417:c_2dplatform_2escm"),(void*)f_4417},
{C_text("f_4420:c_2dplatform_2escm"),(void*)f_4420},
{C_text("f_4423:c_2dplatform_2escm"),(void*)f_4423},
{C_text("f_4426:c_2dplatform_2escm"),(void*)f_4426},
{C_text("f_4429:c_2dplatform_2escm"),(void*)f_4429},
{C_text("f_4432:c_2dplatform_2escm"),(void*)f_4432},
{C_text("f_4435:c_2dplatform_2escm"),(void*)f_4435},
{C_text("f_4438:c_2dplatform_2escm"),(void*)f_4438},
{C_text("f_4441:c_2dplatform_2escm"),(void*)f_4441},
{C_text("f_4444:c_2dplatform_2escm"),(void*)f_4444},
{C_text("f_4447:c_2dplatform_2escm"),(void*)f_4447},
{C_text("f_4450:c_2dplatform_2escm"),(void*)f_4450},
{C_text("f_4453:c_2dplatform_2escm"),(void*)f_4453},
{C_text("f_4456:c_2dplatform_2escm"),(void*)f_4456},
{C_text("f_4459:c_2dplatform_2escm"),(void*)f_4459},
{C_text("f_4462:c_2dplatform_2escm"),(void*)f_4462},
{C_text("f_4465:c_2dplatform_2escm"),(void*)f_4465},
{C_text("f_4468:c_2dplatform_2escm"),(void*)f_4468},
{C_text("f_4471:c_2dplatform_2escm"),(void*)f_4471},
{C_text("f_4473:c_2dplatform_2escm"),(void*)f_4473},
{C_text("f_4510:c_2dplatform_2escm"),(void*)f_4510},
{C_text("f_4512:c_2dplatform_2escm"),(void*)f_4512},
{C_text("f_4519:c_2dplatform_2escm"),(void*)f_4519},
{C_text("f_4530:c_2dplatform_2escm"),(void*)f_4530},
{C_text("f_4551:c_2dplatform_2escm"),(void*)f_4551},
{C_text("f_4555:c_2dplatform_2escm"),(void*)f_4555},
{C_text("f_4568:c_2dplatform_2escm"),(void*)f_4568},
{C_text("f_4570:c_2dplatform_2escm"),(void*)f_4570},
{C_text("f_4592:c_2dplatform_2escm"),(void*)f_4592},
{C_text("f_4596:c_2dplatform_2escm"),(void*)f_4596},
{C_text("f_4606:c_2dplatform_2escm"),(void*)f_4606},
{C_text("f_4609:c_2dplatform_2escm"),(void*)f_4609},
{C_text("f_4612:c_2dplatform_2escm"),(void*)f_4612},
{C_text("f_4615:c_2dplatform_2escm"),(void*)f_4615},
{C_text("f_4618:c_2dplatform_2escm"),(void*)f_4618},
{C_text("f_4621:c_2dplatform_2escm"),(void*)f_4621},
{C_text("f_4624:c_2dplatform_2escm"),(void*)f_4624},
{C_text("f_4627:c_2dplatform_2escm"),(void*)f_4627},
{C_text("f_4630:c_2dplatform_2escm"),(void*)f_4630},
{C_text("f_4633:c_2dplatform_2escm"),(void*)f_4633},
{C_text("f_4636:c_2dplatform_2escm"),(void*)f_4636},
{C_text("f_4639:c_2dplatform_2escm"),(void*)f_4639},
{C_text("f_4642:c_2dplatform_2escm"),(void*)f_4642},
{C_text("f_4645:c_2dplatform_2escm"),(void*)f_4645},
{C_text("f_4648:c_2dplatform_2escm"),(void*)f_4648},
{C_text("f_4651:c_2dplatform_2escm"),(void*)f_4651},
{C_text("f_4654:c_2dplatform_2escm"),(void*)f_4654},
{C_text("f_4657:c_2dplatform_2escm"),(void*)f_4657},
{C_text("f_4660:c_2dplatform_2escm"),(void*)f_4660},
{C_text("f_4663:c_2dplatform_2escm"),(void*)f_4663},
{C_text("f_4666:c_2dplatform_2escm"),(void*)f_4666},
{C_text("f_4669:c_2dplatform_2escm"),(void*)f_4669},
{C_text("f_4672:c_2dplatform_2escm"),(void*)f_4672},
{C_text("f_4675:c_2dplatform_2escm"),(void*)f_4675},
{C_text("f_4678:c_2dplatform_2escm"),(void*)f_4678},
{C_text("f_4681:c_2dplatform_2escm"),(void*)f_4681},
{C_text("f_4684:c_2dplatform_2escm"),(void*)f_4684},
{C_text("f_4687:c_2dplatform_2escm"),(void*)f_4687},
{C_text("f_4690:c_2dplatform_2escm"),(void*)f_4690},
{C_text("f_4693:c_2dplatform_2escm"),(void*)f_4693},
{C_text("f_4696:c_2dplatform_2escm"),(void*)f_4696},
{C_text("f_4699:c_2dplatform_2escm"),(void*)f_4699},
{C_text("f_4702:c_2dplatform_2escm"),(void*)f_4702},
{C_text("f_4705:c_2dplatform_2escm"),(void*)f_4705},
{C_text("f_4708:c_2dplatform_2escm"),(void*)f_4708},
{C_text("f_4711:c_2dplatform_2escm"),(void*)f_4711},
{C_text("f_4714:c_2dplatform_2escm"),(void*)f_4714},
{C_text("f_4717:c_2dplatform_2escm"),(void*)f_4717},
{C_text("f_4720:c_2dplatform_2escm"),(void*)f_4720},
{C_text("f_4723:c_2dplatform_2escm"),(void*)f_4723},
{C_text("f_4726:c_2dplatform_2escm"),(void*)f_4726},
{C_text("f_4729:c_2dplatform_2escm"),(void*)f_4729},
{C_text("f_4732:c_2dplatform_2escm"),(void*)f_4732},
{C_text("f_4735:c_2dplatform_2escm"),(void*)f_4735},
{C_text("f_4738:c_2dplatform_2escm"),(void*)f_4738},
{C_text("f_4741:c_2dplatform_2escm"),(void*)f_4741},
{C_text("f_4744:c_2dplatform_2escm"),(void*)f_4744},
{C_text("f_4747:c_2dplatform_2escm"),(void*)f_4747},
{C_text("f_4750:c_2dplatform_2escm"),(void*)f_4750},
{C_text("f_4753:c_2dplatform_2escm"),(void*)f_4753},
{C_text("f_4756:c_2dplatform_2escm"),(void*)f_4756},
{C_text("f_4759:c_2dplatform_2escm"),(void*)f_4759},
{C_text("f_4762:c_2dplatform_2escm"),(void*)f_4762},
{C_text("f_4765:c_2dplatform_2escm"),(void*)f_4765},
{C_text("f_4768:c_2dplatform_2escm"),(void*)f_4768},
{C_text("f_4771:c_2dplatform_2escm"),(void*)f_4771},
{C_text("f_4774:c_2dplatform_2escm"),(void*)f_4774},
{C_text("f_4777:c_2dplatform_2escm"),(void*)f_4777},
{C_text("f_4780:c_2dplatform_2escm"),(void*)f_4780},
{C_text("f_4783:c_2dplatform_2escm"),(void*)f_4783},
{C_text("f_4786:c_2dplatform_2escm"),(void*)f_4786},
{C_text("f_4789:c_2dplatform_2escm"),(void*)f_4789},
{C_text("f_4792:c_2dplatform_2escm"),(void*)f_4792},
{C_text("f_4795:c_2dplatform_2escm"),(void*)f_4795},
{C_text("f_4798:c_2dplatform_2escm"),(void*)f_4798},
{C_text("f_4801:c_2dplatform_2escm"),(void*)f_4801},
{C_text("f_4804:c_2dplatform_2escm"),(void*)f_4804},
{C_text("f_4807:c_2dplatform_2escm"),(void*)f_4807},
{C_text("f_4810:c_2dplatform_2escm"),(void*)f_4810},
{C_text("f_4813:c_2dplatform_2escm"),(void*)f_4813},
{C_text("f_4816:c_2dplatform_2escm"),(void*)f_4816},
{C_text("f_4819:c_2dplatform_2escm"),(void*)f_4819},
{C_text("f_4822:c_2dplatform_2escm"),(void*)f_4822},
{C_text("f_4825:c_2dplatform_2escm"),(void*)f_4825},
{C_text("f_4828:c_2dplatform_2escm"),(void*)f_4828},
{C_text("f_4831:c_2dplatform_2escm"),(void*)f_4831},
{C_text("f_4834:c_2dplatform_2escm"),(void*)f_4834},
{C_text("f_4837:c_2dplatform_2escm"),(void*)f_4837},
{C_text("f_4840:c_2dplatform_2escm"),(void*)f_4840},
{C_text("f_4843:c_2dplatform_2escm"),(void*)f_4843},
{C_text("f_4846:c_2dplatform_2escm"),(void*)f_4846},
{C_text("f_4849:c_2dplatform_2escm"),(void*)f_4849},
{C_text("f_4852:c_2dplatform_2escm"),(void*)f_4852},
{C_text("f_4855:c_2dplatform_2escm"),(void*)f_4855},
{C_text("f_4858:c_2dplatform_2escm"),(void*)f_4858},
{C_text("f_4861:c_2dplatform_2escm"),(void*)f_4861},
{C_text("f_4864:c_2dplatform_2escm"),(void*)f_4864},
{C_text("f_4867:c_2dplatform_2escm"),(void*)f_4867},
{C_text("f_4870:c_2dplatform_2escm"),(void*)f_4870},
{C_text("f_4873:c_2dplatform_2escm"),(void*)f_4873},
{C_text("f_4876:c_2dplatform_2escm"),(void*)f_4876},
{C_text("f_4879:c_2dplatform_2escm"),(void*)f_4879},
{C_text("f_4882:c_2dplatform_2escm"),(void*)f_4882},
{C_text("f_4885:c_2dplatform_2escm"),(void*)f_4885},
{C_text("f_4888:c_2dplatform_2escm"),(void*)f_4888},
{C_text("f_4891:c_2dplatform_2escm"),(void*)f_4891},
{C_text("f_4894:c_2dplatform_2escm"),(void*)f_4894},
{C_text("f_4897:c_2dplatform_2escm"),(void*)f_4897},
{C_text("f_4900:c_2dplatform_2escm"),(void*)f_4900},
{C_text("f_4903:c_2dplatform_2escm"),(void*)f_4903},
{C_text("f_4906:c_2dplatform_2escm"),(void*)f_4906},
{C_text("f_4909:c_2dplatform_2escm"),(void*)f_4909},
{C_text("f_4912:c_2dplatform_2escm"),(void*)f_4912},
{C_text("f_4915:c_2dplatform_2escm"),(void*)f_4915},
{C_text("f_4918:c_2dplatform_2escm"),(void*)f_4918},
{C_text("f_4921:c_2dplatform_2escm"),(void*)f_4921},
{C_text("f_4924:c_2dplatform_2escm"),(void*)f_4924},
{C_text("f_4927:c_2dplatform_2escm"),(void*)f_4927},
{C_text("f_4930:c_2dplatform_2escm"),(void*)f_4930},
{C_text("f_4933:c_2dplatform_2escm"),(void*)f_4933},
{C_text("f_4936:c_2dplatform_2escm"),(void*)f_4936},
{C_text("f_4939:c_2dplatform_2escm"),(void*)f_4939},
{C_text("f_4942:c_2dplatform_2escm"),(void*)f_4942},
{C_text("f_4945:c_2dplatform_2escm"),(void*)f_4945},
{C_text("f_4948:c_2dplatform_2escm"),(void*)f_4948},
{C_text("f_4951:c_2dplatform_2escm"),(void*)f_4951},
{C_text("f_4954:c_2dplatform_2escm"),(void*)f_4954},
{C_text("f_4957:c_2dplatform_2escm"),(void*)f_4957},
{C_text("f_4960:c_2dplatform_2escm"),(void*)f_4960},
{C_text("f_4963:c_2dplatform_2escm"),(void*)f_4963},
{C_text("f_4966:c_2dplatform_2escm"),(void*)f_4966},
{C_text("f_4969:c_2dplatform_2escm"),(void*)f_4969},
{C_text("f_4972:c_2dplatform_2escm"),(void*)f_4972},
{C_text("f_4975:c_2dplatform_2escm"),(void*)f_4975},
{C_text("f_4978:c_2dplatform_2escm"),(void*)f_4978},
{C_text("f_4981:c_2dplatform_2escm"),(void*)f_4981},
{C_text("f_4984:c_2dplatform_2escm"),(void*)f_4984},
{C_text("f_4987:c_2dplatform_2escm"),(void*)f_4987},
{C_text("f_4990:c_2dplatform_2escm"),(void*)f_4990},
{C_text("f_4993:c_2dplatform_2escm"),(void*)f_4993},
{C_text("f_4996:c_2dplatform_2escm"),(void*)f_4996},
{C_text("f_4999:c_2dplatform_2escm"),(void*)f_4999},
{C_text("f_5002:c_2dplatform_2escm"),(void*)f_5002},
{C_text("f_5005:c_2dplatform_2escm"),(void*)f_5005},
{C_text("f_5008:c_2dplatform_2escm"),(void*)f_5008},
{C_text("f_5011:c_2dplatform_2escm"),(void*)f_5011},
{C_text("f_5014:c_2dplatform_2escm"),(void*)f_5014},
{C_text("f_5017:c_2dplatform_2escm"),(void*)f_5017},
{C_text("f_5020:c_2dplatform_2escm"),(void*)f_5020},
{C_text("f_5023:c_2dplatform_2escm"),(void*)f_5023},
{C_text("f_5026:c_2dplatform_2escm"),(void*)f_5026},
{C_text("f_5029:c_2dplatform_2escm"),(void*)f_5029},
{C_text("f_5032:c_2dplatform_2escm"),(void*)f_5032},
{C_text("f_5035:c_2dplatform_2escm"),(void*)f_5035},
{C_text("f_5038:c_2dplatform_2escm"),(void*)f_5038},
{C_text("f_5041:c_2dplatform_2escm"),(void*)f_5041},
{C_text("f_5044:c_2dplatform_2escm"),(void*)f_5044},
{C_text("f_5047:c_2dplatform_2escm"),(void*)f_5047},
{C_text("f_5050:c_2dplatform_2escm"),(void*)f_5050},
{C_text("f_5053:c_2dplatform_2escm"),(void*)f_5053},
{C_text("f_5056:c_2dplatform_2escm"),(void*)f_5056},
{C_text("f_5059:c_2dplatform_2escm"),(void*)f_5059},
{C_text("f_5062:c_2dplatform_2escm"),(void*)f_5062},
{C_text("f_5065:c_2dplatform_2escm"),(void*)f_5065},
{C_text("f_5068:c_2dplatform_2escm"),(void*)f_5068},
{C_text("f_5071:c_2dplatform_2escm"),(void*)f_5071},
{C_text("f_5074:c_2dplatform_2escm"),(void*)f_5074},
{C_text("f_5077:c_2dplatform_2escm"),(void*)f_5077},
{C_text("f_5080:c_2dplatform_2escm"),(void*)f_5080},
{C_text("f_5083:c_2dplatform_2escm"),(void*)f_5083},
{C_text("f_5086:c_2dplatform_2escm"),(void*)f_5086},
{C_text("f_5089:c_2dplatform_2escm"),(void*)f_5089},
{C_text("f_5092:c_2dplatform_2escm"),(void*)f_5092},
{C_text("f_5095:c_2dplatform_2escm"),(void*)f_5095},
{C_text("f_5098:c_2dplatform_2escm"),(void*)f_5098},
{C_text("f_5101:c_2dplatform_2escm"),(void*)f_5101},
{C_text("f_5104:c_2dplatform_2escm"),(void*)f_5104},
{C_text("f_5107:c_2dplatform_2escm"),(void*)f_5107},
{C_text("f_5110:c_2dplatform_2escm"),(void*)f_5110},
{C_text("f_5113:c_2dplatform_2escm"),(void*)f_5113},
{C_text("f_5116:c_2dplatform_2escm"),(void*)f_5116},
{C_text("f_5119:c_2dplatform_2escm"),(void*)f_5119},
{C_text("f_5122:c_2dplatform_2escm"),(void*)f_5122},
{C_text("f_5125:c_2dplatform_2escm"),(void*)f_5125},
{C_text("f_5128:c_2dplatform_2escm"),(void*)f_5128},
{C_text("f_5131:c_2dplatform_2escm"),(void*)f_5131},
{C_text("f_5134:c_2dplatform_2escm"),(void*)f_5134},
{C_text("f_5137:c_2dplatform_2escm"),(void*)f_5137},
{C_text("f_5140:c_2dplatform_2escm"),(void*)f_5140},
{C_text("f_5143:c_2dplatform_2escm"),(void*)f_5143},
{C_text("f_5146:c_2dplatform_2escm"),(void*)f_5146},
{C_text("f_5149:c_2dplatform_2escm"),(void*)f_5149},
{C_text("f_5152:c_2dplatform_2escm"),(void*)f_5152},
{C_text("f_5155:c_2dplatform_2escm"),(void*)f_5155},
{C_text("f_5158:c_2dplatform_2escm"),(void*)f_5158},
{C_text("f_5161:c_2dplatform_2escm"),(void*)f_5161},
{C_text("f_5164:c_2dplatform_2escm"),(void*)f_5164},
{C_text("f_5167:c_2dplatform_2escm"),(void*)f_5167},
{C_text("f_5170:c_2dplatform_2escm"),(void*)f_5170},
{C_text("f_5173:c_2dplatform_2escm"),(void*)f_5173},
{C_text("f_5176:c_2dplatform_2escm"),(void*)f_5176},
{C_text("f_5179:c_2dplatform_2escm"),(void*)f_5179},
{C_text("f_5181:c_2dplatform_2escm"),(void*)f_5181},
{C_text("f_5203:c_2dplatform_2escm"),(void*)f_5203},
{C_text("f_5218:c_2dplatform_2escm"),(void*)f_5218},
{C_text("f_5221:c_2dplatform_2escm"),(void*)f_5221},
{C_text("f_5236:c_2dplatform_2escm"),(void*)f_5236},
{C_text("f_5248:c_2dplatform_2escm"),(void*)f_5248},
{C_text("f_5256:c_2dplatform_2escm"),(void*)f_5256},
{C_text("f_5258:c_2dplatform_2escm"),(void*)f_5258},
{C_text("f_5279:c_2dplatform_2escm"),(void*)f_5279},
{C_text("f_5283:c_2dplatform_2escm"),(void*)f_5283},
{C_text("f_5286:c_2dplatform_2escm"),(void*)f_5286},
{C_text("f_5289:c_2dplatform_2escm"),(void*)f_5289},
{C_text("f_5291:c_2dplatform_2escm"),(void*)f_5291},
{C_text("f_5310:c_2dplatform_2escm"),(void*)f_5310},
{C_text("f_5327:c_2dplatform_2escm"),(void*)f_5327},
{C_text("f_5370:c_2dplatform_2escm"),(void*)f_5370},
{C_text("f_5374:c_2dplatform_2escm"),(void*)f_5374},
{C_text("f_5378:c_2dplatform_2escm"),(void*)f_5378},
{C_text("f_5382:c_2dplatform_2escm"),(void*)f_5382},
{C_text("f_5389:c_2dplatform_2escm"),(void*)f_5389},
{C_text("f_5393:c_2dplatform_2escm"),(void*)f_5393},
{C_text("f_5401:c_2dplatform_2escm"),(void*)f_5401},
{C_text("f_5405:c_2dplatform_2escm"),(void*)f_5405},
{C_text("f_5413:c_2dplatform_2escm"),(void*)f_5413},
{C_text("f_5416:c_2dplatform_2escm"),(void*)f_5416},
{C_text("f_5420:c_2dplatform_2escm"),(void*)f_5420},
{C_text("f_5423:c_2dplatform_2escm"),(void*)f_5423},
{C_text("f_5426:c_2dplatform_2escm"),(void*)f_5426},
{C_text("f_5429:c_2dplatform_2escm"),(void*)f_5429},
{C_text("f_5432:c_2dplatform_2escm"),(void*)f_5432},
{C_text("f_5435:c_2dplatform_2escm"),(void*)f_5435},
{C_text("f_5438:c_2dplatform_2escm"),(void*)f_5438},
{C_text("f_5441:c_2dplatform_2escm"),(void*)f_5441},
{C_text("f_5444:c_2dplatform_2escm"),(void*)f_5444},
{C_text("f_5447:c_2dplatform_2escm"),(void*)f_5447},
{C_text("f_5450:c_2dplatform_2escm"),(void*)f_5450},
{C_text("f_5453:c_2dplatform_2escm"),(void*)f_5453},
{C_text("f_5456:c_2dplatform_2escm"),(void*)f_5456},
{C_text("f_5459:c_2dplatform_2escm"),(void*)f_5459},
{C_text("f_5462:c_2dplatform_2escm"),(void*)f_5462},
{C_text("f_5465:c_2dplatform_2escm"),(void*)f_5465},
{C_text("f_5467:c_2dplatform_2escm"),(void*)f_5467},
{C_text("f_5489:c_2dplatform_2escm"),(void*)f_5489},
{C_text("f_5507:c_2dplatform_2escm"),(void*)f_5507},
{C_text("f_5529:c_2dplatform_2escm"),(void*)f_5529},
{C_text("f_5547:c_2dplatform_2escm"),(void*)f_5547},
{C_text("f_5572:c_2dplatform_2escm"),(void*)f_5572},
{C_text("f_5593:c_2dplatform_2escm"),(void*)f_5593},
{C_text("f_5601:c_2dplatform_2escm"),(void*)f_5601},
{C_text("f_5605:c_2dplatform_2escm"),(void*)f_5605},
{C_text("f_5612:c_2dplatform_2escm"),(void*)f_5612},
{C_text("f_5640:c_2dplatform_2escm"),(void*)f_5640},
{C_text("f_5643:c_2dplatform_2escm"),(void*)f_5643},
{C_text("f_5674:c_2dplatform_2escm"),(void*)f_5674},
{C_text("f_5696:c_2dplatform_2escm"),(void*)f_5696},
{C_text("f_5719:c_2dplatform_2escm"),(void*)f_5719},
{C_text("f_5723:c_2dplatform_2escm"),(void*)f_5723},
{C_text("f_5727:c_2dplatform_2escm"),(void*)f_5727},
{C_text("f_5734:c_2dplatform_2escm"),(void*)f_5734},
{C_text("f_5756:c_2dplatform_2escm"),(void*)f_5756},
{C_text("f_5766:c_2dplatform_2escm"),(void*)f_5766},
{C_text("f_5780:c_2dplatform_2escm"),(void*)f_5780},
{C_text("f_5784:c_2dplatform_2escm"),(void*)f_5784},
{C_text("f_5791:c_2dplatform_2escm"),(void*)f_5791},
{C_text("f_5822:c_2dplatform_2escm"),(void*)f_5822},
{C_text("f_5825:c_2dplatform_2escm"),(void*)f_5825},
{C_text("f_5840:c_2dplatform_2escm"),(void*)f_5840},
{C_text("f_5857:c_2dplatform_2escm"),(void*)f_5857},
{C_text("f_5861:c_2dplatform_2escm"),(void*)f_5861},
{C_text("f_5868:c_2dplatform_2escm"),(void*)f_5868},
{C_text("f_5899:c_2dplatform_2escm"),(void*)f_5899},
{C_text("f_5927:c_2dplatform_2escm"),(void*)f_5927},
{C_text("f_5929:c_2dplatform_2escm"),(void*)f_5929},
{C_text("f_5952:c_2dplatform_2escm"),(void*)f_5952},
{C_text("f_5954:c_2dplatform_2escm"),(void*)f_5954},
{C_text("f_5973:c_2dplatform_2escm"),(void*)f_5973},
{C_text("f_5977:c_2dplatform_2escm"),(void*)f_5977},
{C_text("f_5992:c_2dplatform_2escm"),(void*)f_5992},
{C_text("f_6023:c_2dplatform_2escm"),(void*)f_6023},
{C_text("f_6051:c_2dplatform_2escm"),(void*)f_6051},
{C_text("f_6053:c_2dplatform_2escm"),(void*)f_6053},
{C_text("f_6076:c_2dplatform_2escm"),(void*)f_6076},
{C_text("f_6078:c_2dplatform_2escm"),(void*)f_6078},
{C_text("f_6097:c_2dplatform_2escm"),(void*)f_6097},
{C_text("f_6101:c_2dplatform_2escm"),(void*)f_6101},
{C_text("f_6116:c_2dplatform_2escm"),(void*)f_6116},
{C_text("f_6120:c_2dplatform_2escm"),(void*)f_6120},
{C_text("f_6141:c_2dplatform_2escm"),(void*)f_6141},
{C_text("f_6183:c_2dplatform_2escm"),(void*)f_6183},
{C_text("f_6185:c_2dplatform_2escm"),(void*)f_6185},
{C_text("f_6192:c_2dplatform_2escm"),(void*)f_6192},
{C_text("f_6203:c_2dplatform_2escm"),(void*)f_6203},
{C_text("f_6224:c_2dplatform_2escm"),(void*)f_6224},
{C_text("f_6228:c_2dplatform_2escm"),(void*)f_6228},
{C_text("f_6234:c_2dplatform_2escm"),(void*)f_6234},
{C_text("f_6256:c_2dplatform_2escm"),(void*)f_6256},
{C_text("f_6260:c_2dplatform_2escm"),(void*)f_6260},
{C_text("f_6262:c_2dplatform_2escm"),(void*)f_6262},
{C_text("f_6278:c_2dplatform_2escm"),(void*)f_6278},
{C_text("f_6284:c_2dplatform_2escm"),(void*)f_6284},
{C_text("f_6302:c_2dplatform_2escm"),(void*)f_6302},
{C_text("f_6305:c_2dplatform_2escm"),(void*)f_6305},
{C_text("f_6308:c_2dplatform_2escm"),(void*)f_6308},
{C_text("f_6323:c_2dplatform_2escm"),(void*)f_6323},
{C_text("f_6335:c_2dplatform_2escm"),(void*)f_6335},
{C_text("f_6345:c_2dplatform_2escm"),(void*)f_6345},
{C_text("f_6349:c_2dplatform_2escm"),(void*)f_6349},
{C_text("f_6358:c_2dplatform_2escm"),(void*)f_6358},
{C_text("f_6368:c_2dplatform_2escm"),(void*)f_6368},
{C_text("f_6372:c_2dplatform_2escm"),(void*)f_6372},
{C_text("f_6402:c_2dplatform_2escm"),(void*)f_6402},
{C_text("f_6406:c_2dplatform_2escm"),(void*)f_6406},
{C_text("f_6410:c_2dplatform_2escm"),(void*)f_6410},
{C_text("f_6414:c_2dplatform_2escm"),(void*)f_6414},
{C_text("f_6418:c_2dplatform_2escm"),(void*)f_6418},
{C_text("f_6427:c_2dplatform_2escm"),(void*)f_6427},
{C_text("f_6431:c_2dplatform_2escm"),(void*)f_6431},
{C_text("f_6433:c_2dplatform_2escm"),(void*)f_6433},
{C_text("f_6443:c_2dplatform_2escm"),(void*)f_6443},
{C_text("f_6456:c_2dplatform_2escm"),(void*)f_6456},
{C_text("f_6481:c_2dplatform_2escm"),(void*)f_6481},
{C_text("toplevel:c_2dplatform_2escm"),(void*)C_c_2dplatform_toplevel},
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
o|hiding unexported module binding: chicken.compiler.c-platform#partition 
o|hiding unexported module binding: chicken.compiler.c-platform#span 
o|hiding unexported module binding: chicken.compiler.c-platform#take 
o|hiding unexported module binding: chicken.compiler.c-platform#drop 
o|hiding unexported module binding: chicken.compiler.c-platform#split-at 
o|hiding unexported module binding: chicken.compiler.c-platform#append-map 
o|hiding unexported module binding: chicken.compiler.c-platform#every 
o|hiding unexported module binding: chicken.compiler.c-platform#any 
o|hiding unexported module binding: chicken.compiler.c-platform#cons* 
o|hiding unexported module binding: chicken.compiler.c-platform#concatenate 
o|hiding unexported module binding: chicken.compiler.c-platform#delete 
o|hiding unexported module binding: chicken.compiler.c-platform#first 
o|hiding unexported module binding: chicken.compiler.c-platform#second 
o|hiding unexported module binding: chicken.compiler.c-platform#third 
o|hiding unexported module binding: chicken.compiler.c-platform#fourth 
o|hiding unexported module binding: chicken.compiler.c-platform#fifth 
o|hiding unexported module binding: chicken.compiler.c-platform#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.c-platform#alist-cons 
o|hiding unexported module binding: chicken.compiler.c-platform#filter 
o|hiding unexported module binding: chicken.compiler.c-platform#filter-map 
o|hiding unexported module binding: chicken.compiler.c-platform#remove 
o|hiding unexported module binding: chicken.compiler.c-platform#unzip1 
o|hiding unexported module binding: chicken.compiler.c-platform#last 
o|hiding unexported module binding: chicken.compiler.c-platform#list-index 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#list-tabulate 
o|hiding unexported module binding: chicken.compiler.c-platform#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.c-platform#length+ 
o|hiding unexported module binding: chicken.compiler.c-platform#find 
o|hiding unexported module binding: chicken.compiler.c-platform#find-tail 
o|hiding unexported module binding: chicken.compiler.c-platform#iota 
o|hiding unexported module binding: chicken.compiler.c-platform#make-list 
o|hiding unexported module binding: chicken.compiler.c-platform#posq 
o|hiding unexported module binding: chicken.compiler.c-platform#posv 
o|hiding unexported module binding: chicken.compiler.c-platform#min-words-per-bignum 
o|hiding unexported module binding: chicken.compiler.c-platform#constant588 
o|hiding unexported module binding: chicken.compiler.c-platform#constant592 
o|hiding unexported module binding: chicken.compiler.c-platform#constant596 
o|hiding unexported module binding: chicken.compiler.c-platform#setter-map 
S|applied compiler syntax:
S|  scheme#for-each		1
S|  chicken.base#foldl		3
S|  scheme#map		5
S|  chicken.base#foldr		3
o|eliminated procedure checks: 34 
o|specializations:
o|  1 (chicken.base#add1 fixnum)
o|  1 (scheme#- *)
o|  1 (scheme#negative? *)
o|  4 (scheme#>= fixnum fixnum)
o|  2 (scheme#zero? *)
o|  1 (scheme#length list)
o|  1 (scheme#memq * list)
o|  15 (scheme#= fixnum fixnum)
o|  1 (scheme#eqv? * *)
o|  5 (##sys#check-list (or pair list) *)
o|  26 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 461 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.compiler.c-platform#posv chicken.compiler.c-platform#posq chicken.compiler.c-platform#make-list chicken.compiler.c-platform#iota chicken.compiler.c-platform#find-tail chicken.compiler.c-platform#find chicken.compiler.c-platform#length+ chicken.compiler.c-platform#lset=/eq? chicken.compiler.c-platform#lset<=/eq? chicken.compiler.c-platform#list-tabulate chicken.compiler.c-platform#lset-intersection/eq? chicken.compiler.c-platform#lset-union/eq? chicken.compiler.c-platform#lset-difference/eq? chicken.compiler.c-platform#lset-adjoin/eq? chicken.compiler.c-platform#list-index chicken.compiler.c-platform#last chicken.compiler.c-platform#unzip1 chicken.compiler.c-platform#remove chicken.compiler.c-platform#filter-map chicken.compiler.c-platform#filter chicken.compiler.c-platform#alist-cons chicken.compiler.c-platform#delete-duplicates chicken.compiler.c-platform#fifth chicken.compiler.c-platform#fourth chicken.compiler.c-platform#third chicken.compiler.c-platform#second chicken.compiler.c-platform#first chicken.compiler.c-platform#delete chicken.compiler.c-platform#concatenate chicken.compiler.c-platform#cons* chicken.compiler.c-platform#any chicken.compiler.c-platform#every chicken.compiler.c-platform#append-map chicken.compiler.c-platform#split-at chicken.compiler.c-platform#drop chicken.compiler.c-platform#take chicken.compiler.c-platform#span chicken.compiler.c-platform#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#append-map 
o|inlining procedure: k2083 
o|inlining procedure: k2083 
o|inlining procedure: k2114 
o|inlining procedure: k2114 
o|merged explicitly consed rest parameter: xs213 
o|inlining procedure: k2144 
o|inlining procedure: k2144 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#alist-cons 
o|inlining procedure: k2331 
o|inlining procedure: k2331 
o|inlining procedure: k2323 
o|inlining procedure: k2323 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset-intersection/eq? 
o|inlining procedure: k2722 
o|inlining procedure: k2722 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#posv 
o|inlining procedure: k3033 
o|inlining procedure: k3051 
o|inlining procedure: k3065 
o|inlining procedure: k3065 
o|inlining procedure: k3051 
o|inlining procedure: k3033 
o|substituted constant variable: a3091 
o|inlining procedure: k3101 
o|inlining procedure: k3119 
o|inlining procedure: k3119 
o|inlining procedure: k3143 
o|inlining procedure: "(c-platform.scm:337) chicken.compiler.c-platform#first" 
o|inlining procedure: k3143 
o|inlining procedure: k3182 
o|inlining procedure: k3182 
o|inlining procedure: "(c-platform.scm:334) chicken.compiler.c-platform#first" 
o|inlining procedure: k3203 
o|inlining procedure: k3203 
o|inlining procedure: "(c-platform.scm:328) chicken.compiler.c-platform#second" 
o|inlining procedure: "(c-platform.scm:327) chicken.compiler.c-platform#first" 
o|inlining procedure: k3101 
o|substituted constant variable: a3250 
o|inlining procedure: k3263 
o|consed rest parameter at call site: "(c-platform.scm:383) chicken.compiler.c-platform#cons*" 2 
o|inlining procedure: k3318 
o|inlining procedure: k3318 
o|inlining procedure: "(c-platform.scm:385) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:383) chicken.compiler.c-platform#first" 
o|inlining procedure: k3360 
o|inlining procedure: k3360 
o|consed rest parameter at call site: "(c-platform.scm:398) chicken.compiler.c-platform#cons*" 2 
o|inlining procedure: k3381 
o|substituted constant variable: a3394 
o|inlining procedure: k3395 
o|inlining procedure: k3395 
o|inlining procedure: k3381 
o|substituted constant variable: a3424 
o|contracted procedure: "(c-platform.scm:378) chicken.compiler.c-platform#last" 
o|inlining procedure: k2480 
o|inlining procedure: k2480 
o|inlining procedure: k3263 
o|inlining procedure: k3452 
o|inlining procedure: k3479 
o|inlining procedure: k3479 
o|inlining procedure: "(c-platform.scm:413) chicken.compiler.c-platform#first" 
o|inlining procedure: k3452 
o|substituted constant variable: a3509 
o|inlining procedure: k3530 
o|inlining procedure: k3530 
o|substituted constant variable: a3551 
o|inlining procedure: k3561 
o|inlining procedure: k3579 
o|inlining procedure: k3594 
o|inlining procedure: k3606 
o|substituted constant variable: a3694 
o|inlining procedure: k3606 
o|inlining procedure: "(c-platform.scm:449) chicken.compiler.c-platform#third" 
o|inlining procedure: k3594 
o|inlining procedure: k3579 
o|inlining procedure: k3561 
o|substituted constant variable: a3717 
o|inlining procedure: k4475 
o|inlining procedure: k4490 
o|inlining procedure: k4514 
o|inlining procedure: k4514 
o|inlining procedure: "(c-platform.scm:861) chicken.compiler.c-platform#first" 
o|inlining procedure: k4490 
o|substituted constant variable: a4560 
o|inlining procedure: k4576 
o|inlining procedure: "(c-platform.scm:852) chicken.compiler.c-platform#first" 
o|inlining procedure: k4576 
o|substituted constant variable: a4603 
o|inlining procedure: k4475 
o|inlining procedure: k5186 
o|inlining procedure: k5207 
o|inlining procedure: "(c-platform.scm:1166) chicken.compiler.c-platform#second" 
o|inlining procedure: k5207 
o|inlining procedure: "(c-platform.scm:1162) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:1159) chicken.compiler.c-platform#first" 
o|inlining procedure: k5186 
o|inlining procedure: k5293 
o|inlining procedure: k5311 
o|inlining procedure: k5329 
o|inlining procedure: k5344 
o|inlining procedure: k5344 
o|inlining procedure: "(c-platform.scm:1195) chicken.compiler.c-platform#second" 
o|inlining procedure: k5329 
o|inlining procedure: "(c-platform.scm:1190) chicken.compiler.c-platform#third" 
o|inlining procedure: k5311 
o|inlining procedure: "(c-platform.scm:1188) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:1186) chicken.compiler.c-platform#first" 
o|inlining procedure: k5293 
o|substituted constant variable: a5406 
o|inlining procedure: k5469 
o|inlining procedure: k5495 
o|inlining procedure: k5495 
o|inlining procedure: k5469 
o|substituted constant variable: a5501 
o|inlining procedure: k5509 
o|inlining procedure: k5535 
o|inlining procedure: k5535 
o|inlining procedure: k5509 
o|substituted constant variable: a5541 
o|inlining procedure: k5549 
o|inlining procedure: k5567 
o|substituted constant variable: chicken.compiler.c-platform#setter-map 
o|inlining procedure: k5567 
o|inlining procedure: k5549 
o|substituted constant variable: a5606 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|inlining procedure: k5614 
o|inlining procedure: k5641 
o|inlining procedure: k5641 
o|inlining procedure: k5663 
o|inlining procedure: k5675 
o|inlining procedure: "(c-platform.scm:1041) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:1044) chicken.compiler.c-platform#first" 
o|inlining procedure: k5675 
o|inlining procedure: "(c-platform.scm:1036) chicken.compiler.c-platform#first" 
o|inlining procedure: k5663 
o|inlining procedure: "(c-platform.scm:1030) chicken.compiler.c-platform#second" 
o|inlining procedure: k5614 
o|substituted constant variable: a5728 
o|inlining procedure: k5736 
o|inlining procedure: k5761 
o|inlining procedure: k5761 
o|inlining procedure: "(c-platform.scm:1001) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:999) chicken.compiler.c-platform#third" 
o|inlining procedure: k5736 
o|substituted constant variable: a5789 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|substituted constant variable: chicken.compiler.c-platform#min-words-per-bignum 
o|inlining procedure: k5793 
o|inlining procedure: k5820 
o|inlining procedure: "(c-platform.scm:883) chicken.compiler.c-platform#first" 
o|inlining procedure: k5820 
o|inlining procedure: "(c-platform.scm:880) chicken.compiler.c-platform#first" 
o|inlining procedure: "(c-platform.scm:877) chicken.compiler.c-platform#second" 
o|substituted constant variable: a5866 
o|inlining procedure: k5793 
o|inlining procedure: k5870 
o|inlining procedure: k5870 
o|inlining procedure: k5901 
o|inlining procedure: k5901 
o|inlining procedure: k5907 
o|inlining procedure: k5907 
o|substituted constant variable: a5946 
o|inlining procedure: k5960 
o|inlining procedure: "(c-platform.scm:826) chicken.compiler.c-platform#first" 
o|inlining procedure: k5960 
o|inlining procedure: k5994 
o|inlining procedure: k5994 
o|inlining procedure: k6025 
o|inlining procedure: k6025 
o|inlining procedure: k6031 
o|inlining procedure: k6031 
o|substituted constant variable: a6070 
o|inlining procedure: k6084 
o|inlining procedure: "(c-platform.scm:789) chicken.compiler.c-platform#first" 
o|inlining procedure: k6084 
o|inlining procedure: k6121 
o|inlining procedure: k6121 
o|inlining procedure: "(c-platform.scm:753) chicken.compiler.c-platform#first" 
o|inlining procedure: k6163 
o|inlining procedure: k6187 
o|inlining procedure: k6187 
o|inlining procedure: "(c-platform.scm:761) chicken.compiler.c-platform#first" 
o|inlining procedure: k6163 
o|inlining procedure: k6240 
o|inlining procedure: "(c-platform.scm:749) chicken.compiler.c-platform#first" 
o|inlining procedure: k6240 
o|inlining procedure: k6264 
o|inlining procedure: k6285 
o|inlining procedure: k6285 
o|inlining procedure: k6324 
o|inlining procedure: "(c-platform.scm:362) chicken.compiler.c-platform#first" 
o|inlining procedure: k6324 
o|inlining procedure: k6359 
o|inlining procedure: k6359 
o|inlining procedure: "(c-platform.scm:359) chicken.compiler.c-platform#first" 
o|inlining procedure: k6376 
o|inlining procedure: k6376 
o|inlining procedure: "(c-platform.scm:353) chicken.compiler.c-platform#second" 
o|inlining procedure: "(c-platform.scm:352) chicken.compiler.c-platform#first" 
o|inlining procedure: k6264 
o|substituted constant variable: a6423 
o|inlining procedure: k6435 
o|contracted procedure: "(c-platform.scm:289) g601608" 
o|propagated global variable: g616617 chicken.compiler.support#mark-variable 
o|inlining procedure: k6435 
o|substituted constant variable: chicken.compiler.c-platform#constant592 
o|substituted constant variable: chicken.compiler.c-platform#constant588 
o|substituted constant variable: chicken.compiler.c-platform#constant596 
o|inlining procedure: k6458 
o|contracted procedure: "(c-platform.scm:127) g568577" 
o|inlining procedure: k6458 
o|simplifications: ((if . 1)) 
o|replaced variables: 608 
o|removed binding forms: 586 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#third 
o|substituted constant variable: r23246498 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#min-words-per-bignum 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant588 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant592 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#constant596 
o|substituted constant variable: r30346510 
o|substituted constant variable: r31206513 
o|substituted constant variable: r31446520 
o|substituted constant variable: r32046529 
o|substituted constant variable: r31026540 
o|substituted constant variable: r33966558 
o|substituted constant variable: r33826560 
o|substituted constant variable: r32646563 
o|substituted constant variable: r34536574 
o|substituted constant variable: r35316576 
o|substituted constant variable: r36076581 
o|substituted constant variable: r35956587 
o|substituted constant variable: r35806588 
o|substituted constant variable: r35626589 
o|substituted constant variable: r44916599 
o|substituted constant variable: r45776607 
o|substituted constant variable: r45776607 
o|folded constant expression: (scheme#not (quote #f)) 
o|substituted constant variable: r44766609 
o|contracted procedure: "(c-platform.scm:1178) chicken.compiler.c-platform#list-tabulate" 
o|substituted constant variable: r27236499 
o|substituted constant variable: r52086617 
o|substituted constant variable: r51876628 
o|substituted constant variable: r53456633 
o|substituted constant variable: r53306639 
o|substituted constant variable: r53126645 
o|substituted constant variable: r52946656 
o|removed side-effect free assignment to unused variable: chicken.compiler.c-platform#setter-map 
o|substituted constant variable: r54966658 
o|substituted constant variable: r54966658 
o|substituted constant variable: r54966660 
o|substituted constant variable: r54966660 
o|substituted constant variable: r54706662 
o|substituted constant variable: r55366664 
o|substituted constant variable: r55366664 
o|substituted constant variable: r55366666 
o|substituted constant variable: r55366666 
o|substituted constant variable: r55106668 
o|substituted constant variable: r55686671 
o|substituted constant variable: r55506672 
o|converted assignments to bindings: (rewrite-call/cc906) 
o|converted assignments to bindings: (rewrite-make-vector889) 
o|substituted constant variable: r56766690 
o|substituted constant variable: r56646696 
o|substituted constant variable: r56156702 
o|substituted constant variable: r57626704 
o|substituted constant variable: r57626704 
o|substituted constant variable: r57626706 
o|substituted constant variable: r57626706 
o|substituted constant variable: r57376718 
o|substituted constant variable: r57946739 
o|converted assignments to bindings: (rewrite-div837) 
o|substituted constant variable: r58716740 
o|substituted constant variable: r59026742 
o|substituted constant variable: r59026742 
o|substituted constant variable: r59026744 
o|substituted constant variable: r59026744 
o|substituted constant variable: r59086747 
o|substituted constant variable: r59616755 
o|substituted constant variable: r59616755 
o|folded constant expression: (scheme#not (quote #f)) 
o|substituted constant variable: r59956757 
o|substituted constant variable: r60266759 
o|substituted constant variable: r60266759 
o|substituted constant variable: r60266761 
o|substituted constant variable: r60266761 
o|substituted constant variable: r60326764 
o|substituted constant variable: r60856772 
o|substituted constant variable: r60856772 
o|folded constant expression: (scheme#not (quote #f)) 
o|substituted constant variable: r61646789 
o|substituted constant variable: r62416797 
o|substituted constant variable: r62416797 
o|folded constant expression: (scheme#not (quote #f)) 
o|converted assignments to bindings: (rewrite-c-w-v767) 
o|converted assignments to bindings: (rewrite-c..r738) 
o|converted assignments to bindings: (rewrite-apply694) 
o|substituted constant variable: r63256808 
o|substituted constant variable: r63776817 
o|substituted constant variable: r62656828 
o|converted assignments to bindings: (eqv?-id634) 
o|converted assignments to bindings: (op1623) 
o|substituted constant variable: g607609 
o|substituted constant variable: g574578 
o|simplifications: ((let . 8)) 
o|replaced variables: 127 
o|removed binding forms: 548 
o|replaced variables: 3 
o|removed binding forms: 208 
o|removed binding forms: 3 
o|removed unused formal parameters: (i903) 
o|removed unused parameter to known procedure: i903 "(mini-srfi-1.scm:190) a5257" 
o|simplifications: ((if . 10) (let . 10) (##core#call . 280)) 
o|  call simplifications:
o|    scheme#symbol?	2
o|    scheme#assq
o|    scheme#=
o|    chicken.base#fixnum?	2
o|    scheme#<=
o|    chicken.fixnum#fx+
o|    chicken.fixnum#fx>=	5
o|    scheme#caddr	3
o|    scheme#list?
o|    scheme#cdr	6
o|    ##sys#setslot	2
o|    scheme#cadr	8
o|    scheme#equal?	2
o|    scheme#number?	2
o|    scheme#not	12
o|    scheme#length	19
o|    scheme#eq?	56
o|    scheme#list	84
o|    ##sys#check-list	2
o|    scheme#pair?	7
o|    ##sys#slot	10
o|    scheme#null?	8
o|    scheme#car	34
o|    scheme#cons	11
o|contracted procedure: k2147 
o|contracted procedure: k2158 
o|contracted procedure: k2314 
o|contracted procedure: k2326 
o|contracted procedure: k2344 
o|contracted procedure: k2352 
o|contracted procedure: k3001 
o|contracted procedure: k3088 
o|contracted procedure: k3036 
o|contracted procedure: k3043 
o|contracted procedure: k3047 
o|contracted procedure: k3054 
o|contracted procedure: k3061 
o|contracted procedure: k3072 
o|contracted procedure: k3080 
o|contracted procedure: k3076 
o|contracted procedure: k3247 
o|contracted procedure: k3104 
o|contracted procedure: k3107 
o|contracted procedure: k3110 
o|contracted procedure: k3132 
o|contracted procedure: k3136 
o|contracted procedure: k3146 
o|contracted procedure: k3149 
o|contracted procedure: k3162 
o|contracted procedure: k3173 
o|contracted procedure: k3176 
o|contracted procedure: k3189 
o|contracted procedure: k3200 
o|contracted procedure: k3206 
o|contracted procedure: k3212 
o|contracted procedure: k3219 
o|contracted procedure: k3223 
o|contracted procedure: k3266 
o|contracted procedure: k3276 
o|contracted procedure: k3283 
o|contracted procedure: k3291 
o|contracted procedure: k3299 
o|contracted procedure: k3303 
o|contracted procedure: k3306 
o|contracted procedure: k3309 
o|contracted procedure: k3321 
o|contracted procedure: k3324 
o|contracted procedure: k3327 
o|contracted procedure: k3335 
o|contracted procedure: k3343 
o|contracted procedure: k3367 
o|contracted procedure: k3378 
o|contracted procedure: k3426 
o|contracted procedure: k3384 
o|contracted procedure: k3387 
o|contracted procedure: k3405 
o|contracted procedure: k3417 
o|contracted procedure: k3409 
o|contracted procedure: k2493 
o|contracted procedure: k2483 
o|contracted procedure: k3506 
o|contracted procedure: k3455 
o|contracted procedure: k3464 
o|contracted procedure: k3471 
o|contracted procedure: k3475 
o|contracted procedure: k3482 
o|contracted procedure: k3489 
o|contracted procedure: k3499 
o|contracted procedure: k3548 
o|contracted procedure: k3533 
o|contracted procedure: k3540 
o|contracted procedure: k3544 
o|contracted procedure: k3719 
o|contracted procedure: k3564 
o|contracted procedure: k3567 
o|contracted procedure: k3570 
o|contracted procedure: k3576 
o|contracted procedure: k3582 
o|contracted procedure: k3585 
o|contracted procedure: k3600 
o|contracted procedure: k3603 
o|contracted procedure: k3609 
o|contracted procedure: k3615 
o|contracted procedure: k3631 
o|contracted procedure: k3635 
o|contracted procedure: k3647 
o|contracted procedure: k3651 
o|contracted procedure: k3687 
o|contracted procedure: k3659 
o|contracted procedure: k3663 
o|contracted procedure: k3671 
o|contracted procedure: k3675 
o|contracted procedure: k4478 
o|contracted procedure: k4600 
o|contracted procedure: k4484 
o|contracted procedure: k4562 
o|contracted procedure: k4487 
o|contracted procedure: k4557 
o|contracted procedure: k4493 
o|contracted procedure: k4500 
o|contracted procedure: k4504 
o|contracted procedure: k4524 
o|contracted procedure: k4535 
o|contracted procedure: k4538 
o|contracted procedure: k4545 
o|contracted procedure: k4579 
o|contracted procedure: k4586 
o|contracted procedure: k4576 
o|contracted procedure: k5183 
o|contracted procedure: k5189 
o|contracted procedure: k5192 
o|contracted procedure: k5198 
o|contracted procedure: k5204 
o|contracted procedure: k5210 
o|contracted procedure: k5226 
o|contracted procedure: k5230 
o|contracted procedure: k5238 
o|contracted procedure: k5242 
o|contracted procedure: k5250 
o|contracted procedure: k2725 
o|contracted procedure: k2740 
o|contracted procedure: k5265 
o|contracted procedure: k5408 
o|contracted procedure: k5296 
o|contracted procedure: k5299 
o|contracted procedure: k5305 
o|contracted procedure: k5314 
o|contracted procedure: k5320 
o|contracted procedure: k5332 
o|contracted procedure: k5335 
o|contracted procedure: k5341 
o|contracted procedure: k5347 
o|contracted procedure: k5353 
o|contracted procedure: k5360 
o|contracted procedure: k5364 
o|contracted procedure: k5395 
o|contracted procedure: k5503 
o|contracted procedure: k5472 
o|contracted procedure: k5479 
o|contracted procedure: k5483 
o|contracted procedure: k5498 
o|contracted procedure: k5491 
o|contracted procedure: k5543 
o|contracted procedure: k5512 
o|contracted procedure: k5519 
o|contracted procedure: k5523 
o|contracted procedure: k5538 
o|contracted procedure: k5531 
o|contracted procedure: k5608 
o|contracted procedure: k5552 
o|contracted procedure: k5555 
o|contracted procedure: k5561 
o|contracted procedure: k5564 
o|contracted procedure: k5573 
o|contracted procedure: k5583 
o|contracted procedure: k5587 
o|contracted procedure: k5595 
o|contracted procedure: k5730 
o|contracted procedure: k5617 
o|contracted procedure: k5620 
o|contracted procedure: k5627 
o|contracted procedure: k5635 
o|inlining procedure: k5631 
o|inlining procedure: k5631 
o|contracted procedure: k5647 
o|contracted procedure: k5657 
o|contracted procedure: k5660 
o|contracted procedure: k5666 
o|contracted procedure: k5690 
o|contracted procedure: k5686 
o|contracted procedure: k5707 
o|contracted procedure: k5703 
o|contracted procedure: k5710 
o|contracted procedure: k5786 
o|contracted procedure: k5739 
o|contracted procedure: k5746 
o|contracted procedure: k5750 
o|contracted procedure: k5758 
o|contracted procedure: k5767 
o|contracted procedure: k5774 
o|contracted procedure: k5796 
o|contracted procedure: k5863 
o|contracted procedure: k5802 
o|contracted procedure: k5809 
o|contracted procedure: k5813 
o|contracted procedure: k5816 
o|contracted procedure: k5834 
o|contracted procedure: k5830 
o|contracted procedure: k5844 
o|contracted procedure: k5851 
o|contracted procedure: k5873 
o|contracted procedure: k5981 
o|contracted procedure: k5882 
o|contracted procedure: k5889 
o|contracted procedure: k5893 
o|contracted procedure: k5904 
o|contracted procedure: k5943 
o|contracted procedure: k5910 
o|contracted procedure: k5917 
o|contracted procedure: k5921 
o|contracted procedure: k5935 
o|contracted procedure: k5939 
o|contracted procedure: k5963 
o|contracted procedure: k5967 
o|contracted procedure: k5988 
o|contracted procedure: k5997 
o|contracted procedure: k6105 
o|contracted procedure: k6006 
o|contracted procedure: k6013 
o|contracted procedure: k6017 
o|contracted procedure: k6028 
o|contracted procedure: k6067 
o|contracted procedure: k6034 
o|contracted procedure: k6041 
o|contracted procedure: k6045 
o|contracted procedure: k6059 
o|contracted procedure: k6063 
o|contracted procedure: k6087 
o|contracted procedure: k6091 
o|contracted procedure: k6112 
o|contracted procedure: k6124 
o|contracted procedure: k6131 
o|contracted procedure: k6135 
o|contracted procedure: k6230 
o|contracted procedure: k6145 
o|contracted procedure: k6152 
o|contracted procedure: k6160 
o|contracted procedure: k6156 
o|contracted procedure: k6166 
o|contracted procedure: k6173 
o|contracted procedure: k6177 
o|contracted procedure: k6197 
o|contracted procedure: k6208 
o|contracted procedure: k6211 
o|contracted procedure: k6218 
o|contracted procedure: k6243 
o|contracted procedure: k6250 
o|contracted procedure: k6240 
o|contracted procedure: k6420 
o|contracted procedure: k6267 
o|contracted procedure: k6270 
o|contracted procedure: k6273 
o|contracted procedure: k6292 
o|contracted procedure: k6296 
o|contracted procedure: k6313 
o|contracted procedure: k6317 
o|contracted procedure: k6327 
o|contracted procedure: k6330 
o|contracted procedure: k6350 
o|contracted procedure: k6353 
o|contracted procedure: k6373 
o|contracted procedure: k6379 
o|contracted procedure: k6385 
o|contracted procedure: k6392 
o|contracted procedure: k6396 
o|contracted procedure: k6438 
o|contracted procedure: k6448 
o|contracted procedure: k6452 
o|contracted procedure: k6461 
o|contracted procedure: k6464 
o|contracted procedure: k6467 
o|contracted procedure: k6475 
o|contracted procedure: k6483 
o|simplifications: ((if . 4) (let . 47)) 
o|removed binding forms: 257 
o|contracted procedure: k5876 
o|contracted procedure: k6000 
o|removed binding forms: 3 
o|direct leaf routine/allocation: loop337 0 
o|contracted procedure: k3269 
o|converted assignments to bindings: (loop337) 
o|simplifications: ((let . 1)) 
o|removed binding forms: 1 
o|customizable procedures: (map-loop562580 for-each-loop600618 op1623 k6303 k6306 rewrite-c..r738 k6190 k5823 k5672 a5257 loop432 chicken.compiler.c-platform#filter k4517 map-loop704721 chicken.compiler.c-platform#cons* k3122 k3125 foldr264267 g269270 loop214) 
o|shared closure containers: 16 
o|shared closure users: 24 
o|calls to known targets: 63 
o|identified direct recursive calls: f_2142 1 
o|identified direct recursive calls: f_2321 1 
o|identified direct recursive calls: f_2478 1 
o|fast box initializations: 6 
o|fast global references: 6 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2136 
o|dropping unused closure argument: f_2312 
o|dropping unused closure argument: f_2478 
o|dropping unused closure argument: f_3029 
o|dropping unused closure argument: f_3444 
*/
/* end of file */
