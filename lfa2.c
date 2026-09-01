/* Generated from lfa2.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: lfa2.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -emit-import-library chicken.compiler.lfa2 -output-file lfa2.c
   unit: lfa2
   uses: eval extras support library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_extern void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[103];
static double C_possibly_force_alignment;


C_noret_decl(f5403)
static void C_ccall f5403(C_word c,C_word *av) C_noret;
C_noret_decl(f5461)
static void C_ccall f5461(C_word c,C_word *av) C_noret;
C_noret_decl(f5482)
static void C_ccall f5482(C_word c,C_word *av) C_noret;
C_noret_decl(f5494)
static void C_ccall f5494(C_word c,C_word *av) C_noret;
C_noret_decl(f5501)
static void C_ccall f5501(C_word c,C_word *av) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word *av) C_noret;
C_noret_decl(f_1464)
static void C_ccall f_1464(C_word c,C_word *av) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word *av) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word *av) C_noret;
C_noret_decl(f_2090)
static void f_2090(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2098)
static C_word f_2098(C_word *a,C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2119)
static void C_ccall f_2119(C_word c,C_word *av) C_noret;
C_noret_decl(f_2134)
static void f_2134(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2150)
static C_word f_2150(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word *av) C_noret;
C_noret_decl(f_2180)
static C_word f_2180(C_word t0,C_word t1);
C_noret_decl(f_2684)
static void f_2684(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2690)
static C_word f_2690(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word *av) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word *av) C_noret;
C_noret_decl(f_2783)
static void C_ccall f_2783(C_word c,C_word *av) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word *av) C_noret;
C_noret_decl(f_2892)
static C_word f_2892(C_word t0,C_word t1);
C_noret_decl(f_2943)
static C_word f_2943(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2969)
static void f_2969(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2975)
static void f_2975(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word *av) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word *av) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word *av) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word *av) C_noret;
C_noret_decl(f_3016)
static void f_3016(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3020)
static void C_ccall f_3020(C_word c,C_word *av) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word *av) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word *av) C_noret;
C_noret_decl(f_3031)
static void f_3031(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word *av) C_noret;
C_noret_decl(f_3039)
static void f_3039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word *av) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word *av) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word *av) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word *av) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word *av) C_noret;
C_noret_decl(f_3110)
static void f_3110(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word *av) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word *av) C_noret;
C_noret_decl(f_3156)
static C_word f_3156(C_word t0,C_word t1);
C_noret_decl(f_3202)
static C_word f_3202(C_word t0,C_word t1);
C_noret_decl(f_3208)
static void f_3208(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word *av) C_noret;
C_noret_decl(f_3215)
static C_word f_3215(C_word t0,C_word t1);
C_noret_decl(f_3225)
static void f_3225(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3232)
static void f_3232(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void f_3236(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word *av) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word *av) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_3281)
static void f_3281(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3287)
static void f_3287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3293)
static void f_3293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3299)
static void f_3299(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word *av) C_noret;
C_noret_decl(f_3306)
static void C_ccall f_3306(C_word c,C_word *av) C_noret;
C_noret_decl(f_3309)
static void C_ccall f_3309(C_word c,C_word *av) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word *av) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word *av) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word *av) C_noret;
C_noret_decl(f_3371)
static void f_3371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word *av) C_noret;
C_noret_decl(f_3382)
static void C_ccall f_3382(C_word c,C_word *av) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word *av) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word *av) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word *av) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word *av) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word *av) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word *av) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word *av) C_noret;
C_noret_decl(f_3485)
static void f_3485(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void f_3492(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word *av) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word *av) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word *av) C_noret;
C_noret_decl(f_3536)
static void f_3536(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word *av) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word *av) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word *av) C_noret;
C_noret_decl(f_3603)
static void f_3603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word *av) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word *av) C_noret;
C_noret_decl(f_3653)
static void f_3653(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word *av) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word *av) C_noret;
C_noret_decl(f_3676)
static void f_3676(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word *av) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word *av) C_noret;
C_noret_decl(f_3698)
static void f_3698(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word *av) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word *av) C_noret;
C_noret_decl(f_3806)
static void f_3806(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word *av) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word *av) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word *av) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word *av) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word *av) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word *av) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word *av) C_noret;
C_noret_decl(f_3854)
static void f_3854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word *av) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3934)
static void C_ccall f_3934(C_word c,C_word *av) C_noret;
C_noret_decl(f_3937)
static void C_ccall f_3937(C_word c,C_word *av) C_noret;
C_noret_decl(f_3946)
static void f_3946(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word *av) C_noret;
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word *av) C_noret;
C_noret_decl(f_4050)
static void f_4050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4060)
static void f_4060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word *av) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word *av) C_noret;
C_noret_decl(f_4123)
static void f_4123(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word *av) C_noret;
C_noret_decl(f_4149)
static void f_4149(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4161)
static void f_4161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word *av) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word *av) C_noret;
C_noret_decl(f_4226)
static void C_ccall f_4226(C_word c,C_word *av) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word *av) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word *av) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word *av) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word *av) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word *av) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word *av) C_noret;
C_noret_decl(f_4272)
static void f_4272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word *av) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word *av) C_noret;
C_noret_decl(f_4299)
static void C_ccall f_4299(C_word c,C_word *av) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word *av) C_noret;
C_noret_decl(f_4305)
static void C_ccall f_4305(C_word c,C_word *av) C_noret;
C_noret_decl(f_4308)
static void C_ccall f_4308(C_word c,C_word *av) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word *av) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word *av) C_noret;
C_noret_decl(f_4376)
static void f_4376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word *av) C_noret;
C_noret_decl(f_4407)
static void f_4407(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word *av) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word *av) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word *av) C_noret;
C_noret_decl(f_4468)
static void f_4468(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word *av) C_noret;
C_noret_decl(f_4515)
static void C_ccall f_4515(C_word c,C_word *av) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word *av) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word *av) C_noret;
C_noret_decl(f_4535)
static void C_ccall f_4535(C_word c,C_word *av) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word *av) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word *av) C_noret;
C_noret_decl(f_4561)
static void C_ccall f_4561(C_word c,C_word *av) C_noret;
C_noret_decl(f_4584)
static void C_ccall f_4584(C_word c,C_word *av) C_noret;
C_noret_decl(f_4602)
static void C_ccall f_4602(C_word c,C_word *av) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word *av) C_noret;
C_noret_decl(f_4623)
static void C_ccall f_4623(C_word c,C_word *av) C_noret;
C_noret_decl(f_4625)
static void f_4625(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word *av) C_noret;
C_noret_decl(f_4673)
static void f_4673(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4685)
static void C_ccall f_4685(C_word c,C_word *av) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word *av) C_noret;
C_noret_decl(f_4719)
static void f_4719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word *av) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word *av) C_noret;
C_noret_decl(f_4772)
static void f_4772(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word *av) C_noret;
C_noret_decl(f_4821)
static void C_ccall f_4821(C_word c,C_word *av) C_noret;
C_noret_decl(f_4823)
static void f_4823(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4848)
static void C_ccall f_4848(C_word c,C_word *av) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word *av) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word *av) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word *av) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word *av) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word *av) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887(C_word c,C_word *av) C_noret;
C_noret_decl(f_4893)
static void C_ccall f_4893(C_word c,C_word *av) C_noret;
C_noret_decl(f_4896)
static void C_ccall f_4896(C_word c,C_word *av) C_noret;
C_noret_decl(C_lfa2_toplevel)
C_extern void C_ccall C_lfa2_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2090)
static void C_ccall trf_2090(C_word c,C_word *av) C_noret;
static void C_ccall trf_2090(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2090(t0,t1,t2);}

C_noret_decl(trf_2134)
static void C_ccall trf_2134(C_word c,C_word *av) C_noret;
static void C_ccall trf_2134(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2134(t0,t1,t2);}

C_noret_decl(trf_2684)
static void C_ccall trf_2684(C_word c,C_word *av) C_noret;
static void C_ccall trf_2684(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2684(t0,t1,t2);}

C_noret_decl(trf_2969)
static void C_ccall trf_2969(C_word c,C_word *av) C_noret;
static void C_ccall trf_2969(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2969(t0,t1,t2);}

C_noret_decl(trf_2975)
static void C_ccall trf_2975(C_word c,C_word *av) C_noret;
static void C_ccall trf_2975(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_2975(t0,t1,t2);}

C_noret_decl(trf_3016)
static void C_ccall trf_3016(C_word c,C_word *av) C_noret;
static void C_ccall trf_3016(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3016(t0,t1,t2);}

C_noret_decl(trf_3031)
static void C_ccall trf_3031(C_word c,C_word *av) C_noret;
static void C_ccall trf_3031(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3031(t0,t1,t2,t3);}

C_noret_decl(trf_3039)
static void C_ccall trf_3039(C_word c,C_word *av) C_noret;
static void C_ccall trf_3039(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3039(t0,t1,t2);}

C_noret_decl(trf_3110)
static void C_ccall trf_3110(C_word c,C_word *av) C_noret;
static void C_ccall trf_3110(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3110(t0,t1,t2);}

C_noret_decl(trf_3208)
static void C_ccall trf_3208(C_word c,C_word *av) C_noret;
static void C_ccall trf_3208(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3208(t0,t1,t2);}

C_noret_decl(trf_3225)
static void C_ccall trf_3225(C_word c,C_word *av) C_noret;
static void C_ccall trf_3225(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3225(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3232)
static void C_ccall trf_3232(C_word c,C_word *av) C_noret;
static void C_ccall trf_3232(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3232(t0,t1);}

C_noret_decl(trf_3236)
static void C_ccall trf_3236(C_word c,C_word *av) C_noret;
static void C_ccall trf_3236(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3236(t0,t1,t2);}

C_noret_decl(trf_3281)
static void C_ccall trf_3281(C_word c,C_word *av) C_noret;
static void C_ccall trf_3281(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3281(t0,t1,t2);}

C_noret_decl(trf_3287)
static void C_ccall trf_3287(C_word c,C_word *av) C_noret;
static void C_ccall trf_3287(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3287(t0,t1,t2);}

C_noret_decl(trf_3293)
static void C_ccall trf_3293(C_word c,C_word *av) C_noret;
static void C_ccall trf_3293(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3293(t0,t1,t2);}

C_noret_decl(trf_3299)
static void C_ccall trf_3299(C_word c,C_word *av) C_noret;
static void C_ccall trf_3299(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3299(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3371)
static void C_ccall trf_3371(C_word c,C_word *av) C_noret;
static void C_ccall trf_3371(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3371(t0,t1);}

C_noret_decl(trf_3485)
static void C_ccall trf_3485(C_word c,C_word *av) C_noret;
static void C_ccall trf_3485(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3485(t0,t1);}

C_noret_decl(trf_3492)
static void C_ccall trf_3492(C_word c,C_word *av) C_noret;
static void C_ccall trf_3492(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3492(t0,t1);}

C_noret_decl(trf_3536)
static void C_ccall trf_3536(C_word c,C_word *av) C_noret;
static void C_ccall trf_3536(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3536(t0,t1);}

C_noret_decl(trf_3603)
static void C_ccall trf_3603(C_word c,C_word *av) C_noret;
static void C_ccall trf_3603(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3603(t0,t1);}

C_noret_decl(trf_3653)
static void C_ccall trf_3653(C_word c,C_word *av) C_noret;
static void C_ccall trf_3653(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3653(t0,t1,t2);}

C_noret_decl(trf_3676)
static void C_ccall trf_3676(C_word c,C_word *av) C_noret;
static void C_ccall trf_3676(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3676(t0,t1,t2);}

C_noret_decl(trf_3698)
static void C_ccall trf_3698(C_word c,C_word *av) C_noret;
static void C_ccall trf_3698(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3698(t0,t1);}

C_noret_decl(trf_3806)
static void C_ccall trf_3806(C_word c,C_word *av) C_noret;
static void C_ccall trf_3806(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3806(t0,t1,t2);}

C_noret_decl(trf_3854)
static void C_ccall trf_3854(C_word c,C_word *av) C_noret;
static void C_ccall trf_3854(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3854(t0,t1,t2);}

C_noret_decl(trf_3946)
static void C_ccall trf_3946(C_word c,C_word *av) C_noret;
static void C_ccall trf_3946(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3946(t0,t1);}

C_noret_decl(trf_4050)
static void C_ccall trf_4050(C_word c,C_word *av) C_noret;
static void C_ccall trf_4050(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4050(t0,t1,t2);}

C_noret_decl(trf_4060)
static void C_ccall trf_4060(C_word c,C_word *av) C_noret;
static void C_ccall trf_4060(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4060(t0,t1);}

C_noret_decl(trf_4123)
static void C_ccall trf_4123(C_word c,C_word *av) C_noret;
static void C_ccall trf_4123(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4123(t0,t1,t2);}

C_noret_decl(trf_4149)
static void C_ccall trf_4149(C_word c,C_word *av) C_noret;
static void C_ccall trf_4149(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4149(t0,t1,t2);}

C_noret_decl(trf_4161)
static void C_ccall trf_4161(C_word c,C_word *av) C_noret;
static void C_ccall trf_4161(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4161(t0,t1,t2);}

C_noret_decl(trf_4272)
static void C_ccall trf_4272(C_word c,C_word *av) C_noret;
static void C_ccall trf_4272(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4272(t0,t1,t2);}

C_noret_decl(trf_4376)
static void C_ccall trf_4376(C_word c,C_word *av) C_noret;
static void C_ccall trf_4376(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4376(t0,t1,t2);}

C_noret_decl(trf_4407)
static void C_ccall trf_4407(C_word c,C_word *av) C_noret;
static void C_ccall trf_4407(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4407(t0,t1,t2);}

C_noret_decl(trf_4468)
static void C_ccall trf_4468(C_word c,C_word *av) C_noret;
static void C_ccall trf_4468(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4468(t0,t1,t2);}

C_noret_decl(trf_4625)
static void C_ccall trf_4625(C_word c,C_word *av) C_noret;
static void C_ccall trf_4625(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4625(t0,t1,t2);}

C_noret_decl(trf_4673)
static void C_ccall trf_4673(C_word c,C_word *av) C_noret;
static void C_ccall trf_4673(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4673(t0,t1,t2);}

C_noret_decl(trf_4719)
static void C_ccall trf_4719(C_word c,C_word *av) C_noret;
static void C_ccall trf_4719(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4719(t0,t1,t2);}

C_noret_decl(trf_4772)
static void C_ccall trf_4772(C_word c,C_word *av) C_noret;
static void C_ccall trf_4772(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4772(t0,t1,t2);}

C_noret_decl(trf_4823)
static void C_ccall trf_4823(C_word c,C_word *av) C_noret;
static void C_ccall trf_4823(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4823(t0,t1,t2);}

/* f5403 in k3601 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f5403(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f5403,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[62];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f5461 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f5461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f5461,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:353: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3232(t3,C_SCHEME_FALSE);}}

/* f5482 in k3483 in k3472 in k3469 in k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f5482(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f5482,c,av);}
a=C_alloc(7);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
if(C_truep(C_i_not(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3522,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3530,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:402: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t3=((C_word*)t0)[3];
f_3492(t3,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_3492(t3,C_SCHEME_FALSE);}}

/* f5494 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f5494(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f5494,c,av);}
a=C_alloc(4);
t2=C_eqp(lf[11],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:415: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t3=((C_word*)t0)[2];
f_3603(t3,C_SCHEME_FALSE);}}

/* f5501 in g788 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f5501(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f5501,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[11],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3931,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:465: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3934,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("lfa2.scm:479: walk"));
t5=((C_word*)((C_word*)t2)[8])[1];
f_3299(t5,t4,((C_word*)t2)[5],((C_word*)t2)[9],((C_word*)t2)[10]);}}

/* k1459 */
static void C_ccall f_1461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1461,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1464,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1462 in k1459 */
static void C_ccall f_1464(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1464,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1465 in k1462 in k1459 */
static void C_ccall f_1467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1467,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_1470(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(22,c,4)))){
C_save_and_reclaim((void *)f_1470,c,av);}
a=C_alloc(22);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.lfa2#posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2684,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[3] /* (set! chicken.compiler.lfa2#+unboxed-map+ ...) */,lf[4]);
t6=C_mutate((C_word*)lf[5]+1 /* (set! chicken.compiler.lfa2#perform-secondary-flow-analysis ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2755,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[89]+1 /* (set! chicken.compiler.lfa2#perform-unboxing ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4295,tmp=(C_word)a,a+=2,tmp));
t8=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}

/* foldr250 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_2090(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_2090,3,t0,t1,t2);}
a=C_alloc(8);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2119,a[2]=t1,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
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

/* g255 in foldr250 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static C_word f_2098(C_word *a,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t3=(
C_trace("mini-srfi-1.scm:131: pred"),
  f_2180(((C_word*)t0)[2],t1)
);
return((C_truep(t3)?C_a_i_cons(&a,2,t1,t2):t2));}

/* k2117 in foldr250 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_2119(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,1)))){
C_save_and_reclaim((void *)f_2119,c,av);}
a=C_alloc(3);
C_trace(C_text("mini-srfi-1.scm:131: g255"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
C_trace("mini-srfi-1.scm:131: g255"),
  f_2098(C_a_i(&a,3),((C_word*)t0)[3],((C_word*)t0)[4],t1)
);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr268 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_2134(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_2134,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2168,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
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

/* g283 in k2166 in foldr268 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static C_word f_2150(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k2166 in foldr268 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_2168(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_2168,c,av);}
a=C_alloc(6);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=C_i_caddr(((C_word*)t0)[2]);
t4=C_i_nequalp(t2,t3);
t5=(C_truep(t4)?C_u_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2150,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("mini-srfi-1.scm:135: g283"));
t7=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
C_trace("mini-srfi-1.scm:135: g283"),
  f_2150(C_a_i(&a,3),t6,t5)
);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* a2179 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static C_word f_2180(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_overflow_check;{}
t2=(
C_trace("mini-srfi-1.scm:141: pred"),
  f_3215(((C_word*)t0)[2],t1)
);
return(C_i_not(t2));}

/* chicken.compiler.lfa2#posq in k1468 in k1465 in k1462 in k1459 */
static void f_2684(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,3)))){
C_save_and_reclaim_args((void *)trf_2684,3,t1,t2,t3);}
a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2690,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=(
  f_2690(t4,C_fix(0),t3)
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* loop in chicken.compiler.lfa2#posq in k1468 in k1465 in k1462 in k1459 */
static C_word f_2690(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t2))){
return(C_SCHEME_FALSE);}
else{
t3=C_i_car(t2);
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
return(t1);}
else{
t6=C_fixnum_plus(t1,C_fix(1));
t7=C_u_i_cdr(t2);
t1=t6;
t2=t7;
goto loop;}}}

/* chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_2755(C_word c,C_word *av){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(85,c,5)))){
C_save_and_reclaim((void *)f_2755,c,av);}
a=C_alloc(85);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
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
t34=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2892,tmp=(C_word)a,a+=2,tmp));
t35=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2943,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t37=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2975,a[2]=C_SCHEME_UNDEFINED,a[3]=t3,a[4]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=5,tmp));
t38=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3016,a[2]=t31,tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3031,a[2]=t11,a[3]=t17,a[4]=t15,tmp=(C_word)a,a+=5,tmp));
t40=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3202,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t41=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3208,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t42=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3281,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t44=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3293,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t46=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3299,a[2]=t27,a[3]=t21,a[4]=t23,a[5]=t9,a[6]=t33,a[7]=t13,a[8]=t7,a[9]=t29,a[10]=t19,tmp=(C_word)a,a+=11,tmp));
t47=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4223,a[2]=t1,a[3]=t7,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:512: walk"));
t48=((C_word*)t33)[1];
f_3299(t48,t47,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}

/* k2769 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_2771(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2771,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[38];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[39];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2783,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:259: chicken.compiler.support#big-fixnum?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[54]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[54]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}}}

/* k2781 in k2769 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_2783(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_2783,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2786,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=t3;{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
f_2786(2,av2);}}
else{
C_trace(C_text("lfa2.scm:259: chicken.compiler.support#small-bignum?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[53]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[53]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
tp(3,av2);}}}

/* k2784 in k2781 in k2769 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_2786(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_2786,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
if(C_truep(t1)){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[40];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_fixnump(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[41];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_bignump(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[42];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_flonump(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[43];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_ratnump(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[44];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_cplxnump(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[45];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_booleanp(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_nullp(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[46];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_listp(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[47];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_pairp(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[48];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_eofp(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[49];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_bwpp(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[50];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
if(C_truep(C_i_vectorp(((C_word*)t2)[3]))){
t3=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[51];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_immp(((C_word*)t2)[3]);
t4=C_i_not(t3);
t5=(C_truep(t4)?C_structurep(((C_word*)t2)[3]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(((C_word*)t2)[3],C_fix(0));
t7=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_a_i_list(&a,2,lf[6],t6);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}
else{
t6=C_charp(((C_word*)t2)[3]);
t7=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=(C_truep(t6)?lf[52]:lf[7]);
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}}}}}}}}}}}}

/* merge in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static C_word f_2892(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_stack_overflow_check;{}
t3=C_eqp(t1,t2);
if(C_truep(t3)){
return(t1);}
else{
if(C_truep(C_i_pairp(t1))){
if(C_truep(C_i_pairp(t2))){
t4=C_eqp(C_u_i_car(t1),lf[6]);
if(C_truep(t4)){
t5=C_eqp(C_u_i_car(t2),lf[6]);
if(C_truep(t5)){
t6=C_i_cadr(t1);
t7=C_i_cadr(t2);
t8=C_eqp(t6,t7);
return((C_truep(t8)?t1:lf[7]));}
else{
return(lf[7]);}}
else{
return(lf[7]);}}
else{
return(lf[7]);}}
else{
return(lf[7]);}}}

/* report in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static C_word f_2943(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;{}
t2=C_i_assoc(t1,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t2)){
t3=C_i_cdr(t2);
t4=C_s_a_i_plus(&a,2,t3,C_fix(1));
return(C_i_set_cdr(t2,t4));}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=C_a_i_cons(&a,2,t1,C_fix(1));
t5=C_a_i_cons(&a,2,t4,t3);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}}

/* assigned? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_2969(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_2969,3,t0,t1,t2);}
C_trace(C_text("lfa2.scm:292: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word av2[5];
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=lf[9];
tp(5,av2);}}

/* droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_2975(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_2975,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+4,t2);
t4=C_mutate(((C_word *)t0)+2,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2980,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:295: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k2978 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_2980(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_2980,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_u_i_memq(t1,lf[10]);
if(C_truep(t3)){
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:297: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}}

/* k3004 in k3008 in k3012 in k2978 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3006(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3006,c,av);}
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
C_trace(C_text("lfa2.scm:300: chicken.compiler.support#variable-mark"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[12]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[12]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[13];
tp(4,av2);}}}

/* k3008 in k3012 in k2978 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3010(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3010,c,av);}
a=C_alloc(4);
t2=C_i_car(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:299: chicken.compiler.support#db-get"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[8]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[8]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
av2[4]=lf[14];
tp(5,av2);}}

/* k3012 in k2978 in droppable? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3014,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=C_eqp(lf[11],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3010,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:298: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}
else{
t4=((C_word*)t2)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3016(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,2)))){
C_save_and_reclaim_args((void *)trf_3016,3,t0,t1,t2);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3020,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:303: sub-boxed"));
t4=((C_word*)((C_word*)t0)[2])[1];
f_3293(t4,t3,t2);}

/* k3018 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3020(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3020,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3023,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:304: chicken.compiler.support#node-class-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=lf[20];
tp(4,av2);}}

/* k3021 in k3018 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3023(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3023,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3026,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:305: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_END_OF_LIST;
tp(4,av2);}}

/* k3024 in k3021 in k3018 in drop! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3026(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3026,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("lfa2.scm:306: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
av2[3]=C_SCHEME_END_OF_LIST;
tp(4,av2);}}

/* extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3031(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_3031,4,t0,t1,t2,t3);}
a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("lfa2.scm:309: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}

/* k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3038(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,3)))){
C_save_and_reclaim((void *)f_3038,c,av);}
a=C_alloc(20);
t2=C_SCHEME_TRUE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=C_i_check_list_2(t1,lf[21]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3056,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3110,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_3110(t10,t6,t1);}

/* g617 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3039(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_3039,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:314: droppable?"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_2975(t4,t3,t2);}

/* k3044 in g617 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3046(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3046,c,av);}
if(C_truep(t1)){
C_trace(C_text("lfa2.scm:315: drop!"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3016(t2,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3054 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3056(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3056,c,av);}
a=C_alloc(8);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
C_trace(C_text("lfa2.scm:319: drop!"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_3016(t2,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3073,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3108,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:325: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}}

/* k3071 in k3054 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3073(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3073,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("lfa2.scm:320: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t2;
tp(4,av2);}}

/* k3078 in k3106 in k3054 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3080(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3080,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("lfa2.scm:323: scheme#string-append"));
t3=*((C_word*)lf[22]+1);{
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

/* k3106 in k3054 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3108(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3108,c,av);}
a=C_alloc(3);
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
switch(t2){
case C_fix(1):
C_trace(C_text("lfa2.scm:323: scheme#string-append"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[23];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
case C_fix(2):
C_trace(C_text("lfa2.scm:323: scheme#string-append"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[24];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
case C_fix(3):
C_trace(C_text("lfa2.scm:323: scheme#string-append"));
t4=*((C_word*)lf[22]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t4;
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=lf[25];
((C_proc)(void*)(*((C_word*)t4+1)))(4,av2);}
default:
C_trace(C_text("lfa2.scm:329: chicken.compiler.support#bomb"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[26]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[26]+1);
av2[1]=t3;
av2[2]=lf[27];
tp(3,av2);}}}

/* for-each-loop616 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3110(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3110,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:312: g617"));
t4=((C_word*)t0)[3];
f_3039(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3118 in for-each-loop616 in k3036 in k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3120(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3120,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3110(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3137 in extinguish! in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(42,c,2)))){
C_save_and_reclaim((void *)f_3139,c,av);}
a=C_alloc(42);
t2=(
C_trace("lfa2.scm:309: report"),
  f_2943(C_a_i(&a,35),((C_word*)((C_word*)t0)[2])[1],C_i_car(t1))
);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("lfa2.scm:310: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[6];
tp(3,av2);}}

/* loop in k3319 in k3316 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static C_word f_3156(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_nullp(t1))){
return(lf[7]);}
else{
t2=C_i_cdar(t1);
t3=C_eqp(((C_word*)t0)[2],t2);
if(C_truep(t3)){
t4=C_u_i_car(t1);
t5=C_i_assq(C_u_i_car(t4),((C_word*)t0)[3]);
if(C_truep(t5)){
return(C_i_cdr(t5));}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}
else{
t7=C_u_i_cdr(t1);
t1=t7;
goto loop;}}}

/* floatvar? in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static C_word f_3202(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_i_assq(t1,((C_word*)((C_word*)t0)[2])[1]));}

/* eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3208(C_word t0,C_word t1,C_word t2){
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
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,0,3)))){
C_save_and_reclaim_args((void *)trf_3208,3,t0,t1,t2);}
a=C_alloc(16);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2180,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=C_i_check_list_2(t5,lf[29]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2090,a[2]=t6,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_2090(t11,t3,t5);}

/* k3211 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3213(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3213,c,av);}
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* a3214 in eliminate-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static C_word f_3215(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_eqp(((C_word*)t0)[2],C_i_car(t1)));}

/* count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3225(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,0,2)))){
C_save_and_reclaim_args((void *)trf_3225,5,t0,t1,t2,t3,t4);}
a=C_alloc(10);
t5=C_i_nullp(t4);
t6=(C_truep(t5)?C_fix(1):C_i_car(t4));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3232,a[2]=t6,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f5461,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:342: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t8;
av2[2]=t2;
tp(3,av2);}}

/* k3230 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3232(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,3)))){
C_save_and_reclaim_args((void *)trf_3232,2,t0,t1);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3236,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],a[5]=C_SCHEME_UNDEFINED,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:352: g682"));
t3=t2;
f_3236(t3,((C_word*)t0)[4],t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word av2[2];
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* g682 in k3230 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3236(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3236,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+5,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3244,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:356: acc"));
t6=((C_word*)t0)[4];{
C_word av2[3];
av2[0]=t6;
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k3242 in g682 in k3230 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3244(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3244,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3256,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:356: acc"));
t4=((C_word*)t2)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[5];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3254 in k3242 in g682 in k3230 in count-floatvar in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3256(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,c,1)))){
C_save_and_reclaim((void *)f_3256,c,av);}
a=C_alloc(29);
t2=C_i_car(t1);
t3=C_s_a_i_plus(&a,2,((C_word*)t0)[2],t2);
t4=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_set_car(((C_word*)t0)[4],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3271 */
static void C_ccall f_3273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3273,c,av);}
t2=((C_word*)t0)[2];
f_3232(t2,C_i_assq(C_i_car(t1),((C_word*)((C_word*)t0)[3])[1]));}

/* add-boxed in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3281(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3281,3,t0,t1,t2);}
C_trace(C_text("lfa2.scm:358: count-floatvar"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_3225(t3,t1,t2,*((C_word*)lf[30]+1),C_SCHEME_END_OF_LIST);}

/* add-unboxed in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3287(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3287,3,t0,t1,t2);}
C_trace(C_text("lfa2.scm:359: count-floatvar"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_3225(t3,t1,t2,*((C_word*)lf[31]+1),C_SCHEME_END_OF_LIST);}

/* sub-boxed in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3293(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_3293,3,t0,t1,t2);}
a=C_alloc(3);
C_trace(C_text("lfa2.scm:360: count-floatvar"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_3225(t3,t1,t2,*((C_word*)lf[30]+1),C_a_i_list(&a,1,C_fix(-1)));}

/* walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3299(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(17,0,2)))){
C_save_and_reclaim_args((void *)trf_3299,5,t0,t1,t2,t3,t4);}
a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3303,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[2],a[8]=t2,a[9]=((C_word*)t0)[3],a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=((C_word*)t0)[6],a[13]=((C_word*)t0)[7],a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[9],a[16]=((C_word*)t0)[10],tmp=(C_word)a,a+=17,tmp);
C_trace(C_text("lfa2.scm:363: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=t2;
tp(3,av2);}}

/* k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3303(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3303,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3306,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:364: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[8];
tp(3,av2);}}

/* k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3306(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3306,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3309,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:365: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[8];
tp(3,av2);}}

/* k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3309(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(23,c,4)))){
C_save_and_reclaim((void *)f_3309,c,av);}
a=C_alloc(23);
t2=((C_word*)t0)[2];
t3=C_eqp(((C_word*)t2)[2],lf[11]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3318,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],a[5]=((C_word*)t2)[6],a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[8],tmp=(C_word)a,a+=8,tmp);
t5=(
C_trace("lfa2.scm:368: floatvar?"),
  f_3202(((C_word*)((C_word*)t2)[9])[1],C_i_car(((C_word*)t2)[3]))
);
if(C_truep(t5)){
t6=C_i_car(((C_word*)t2)[3]);
if(C_truep(C_i_not(C_i_assq(t6,((C_word*)t2)[4])))){
C_trace(C_text("lfa2.scm:370: eliminate-floatvar"));
t7=((C_word*)((C_word*)t2)[10])[1];
f_3208(t7,t4,C_i_car(((C_word*)t2)[3]));}
else{
t7=t4;{
C_word *av2=av;
av2[0]=t7;
av2[1]=C_SCHEME_UNDEFINED;
f_3318(2,av2);}}}
else{
t6=t4;{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_SCHEME_UNDEFINED;
f_3318(2,av2);}}}
else{
t4=C_eqp(((C_word*)t2)[2],lf[32]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t2)[2],lf[33]));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3368,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[11],a[4]=((C_word*)t2)[12],a[5]=t1,a[6]=((C_word*)t2)[4],a[7]=((C_word*)t2)[6],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("lfa2.scm:374: walk"));
t7=((C_word*)((C_word*)t2)[12])[1];
f_3299(t7,t6,C_i_car(t1),((C_word*)t2)[4],((C_word*)t2)[6]);}
else{
t6=C_eqp(((C_word*)t2)[2],lf[36]);
if(C_truep(t6)){
t7=C_i_car(((C_word*)t2)[3]);
if(C_truep(C_i_stringp(t7))){
t8=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t8;
av2[1]=lf[37];
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2771,a[2]=((C_word*)t2)[5],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:256: chicken.keyword#keyword?"));
t9=C_fast_retrieve(lf[55]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t9;
av2[1]=t8;
av2[2]=t7;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}}
else{
t7=C_eqp(((C_word*)t2)[2],lf[56]);
if(C_truep(t7)){
t8=C_i_car(t1);
t9=C_i_car(((C_word*)t2)[3]);
t10=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3468,a[2]=t1,a[3]=t9,a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[12],a[6]=((C_word*)t2)[5],a[7]=t8,a[8]=((C_word*)t2)[13],a[9]=((C_word*)t2)[4],a[10]=C_SCHEME_UNDEFINED,a[11]=((C_word*)t2)[14],a[12]=((C_word*)t2)[15],a[13]=((C_word*)t2)[7],a[14]=((C_word*)t2)[9],tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("lfa2.scm:388: walk"));
t11=((C_word*)((C_word*)t2)[12])[1];
f_3299(t11,t10,t8,((C_word*)t2)[4],((C_word*)t2)[6]);}
else{
t8=C_eqp(((C_word*)t2)[2],lf[57]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t2)[2],lf[58]));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3578,a[2]=((C_word*)t2)[5],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:410: walk"));
t11=((C_word*)((C_word*)t2)[12])[1];
f_3299(t11,t10,C_i_car(t1),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
t10=C_eqp(((C_word*)t2)[2],lf[60]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t2)[2],lf[61]));
if(C_truep(t11)){
t12=C_i_car(t1);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3597,a[2]=((C_word*)t2)[5],a[3]=((C_word*)t2)[12],a[4]=t12,a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3603,a[2]=((C_word*)t2)[10],a[3]=t13,a[4]=t12,a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[12],a[7]=((C_word*)t2)[4],a[8]=((C_word*)t2)[6],tmp=(C_word)a,a+=9,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f5494,a[2]=t14,a[3]=((C_word*)t2)[9],a[4]=t12,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:342: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t15;
av2[2]=t12;
tp(3,av2);}}
else{
t12=C_eqp(((C_word*)t2)[2],lf[20]);
if(C_truep(t12)){
t13=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t13;
av2[1]=lf[62];
((C_proc)(void*)(*((C_word*)t13+1)))(2,av2);}}
else{
t13=C_eqp(((C_word*)t2)[2],lf[63]);
if(C_truep(t13)){
t14=((C_word*)t2)[5];{
C_word *av2=av;
av2[0]=t14;
av2[1]=lf[59];
((C_proc)(void*)(*((C_word*)t14+1)))(2,av2);}}
else{
t14=C_eqp(((C_word*)t2)[2],lf[64]);
t15=(C_truep(t14)?t14:C_eqp(((C_word*)t2)[2],lf[65]));
if(C_truep(t15)){
t16=C_i_car(((C_word*)t2)[3]);
t17=C_i_assoc(t16,lf[3]);
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3653,a[2]=t17,a[3]=((C_word*)t2)[15],a[4]=((C_word*)t2)[12],a[5]=((C_word*)t2)[4],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
t19=C_i_check_list_2(t1,lf[21]);
t20=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3669,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[16],a[4]=((C_word*)t2)[8],a[5]=t1,a[6]=((C_word*)t2)[12],a[7]=((C_word*)t2)[4],a[8]=((C_word*)t2)[6],a[9]=((C_word*)t2)[5],tmp=(C_word)a,a+=10,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4123,a[2]=t22,a[3]=t18,tmp=(C_word)a,a+=4,tmp));
t24=((C_word*)t22)[1];
f_4123(t24,t20,t1);}
else{
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4149,a[2]=((C_word*)t2)[12],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[6],tmp=(C_word)a,a+=5,tmp);
t17=C_i_check_list_2(t1,lf[21]);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4159,a[2]=((C_word*)t2)[5],tmp=(C_word)a,a+=3,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4161,a[2]=t20,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t22=((C_word*)t20)[1];
f_4161(t22,t18,t1);}}}}}}}}}}

/* k3316 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3318(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3318,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:371: add-boxed"));
t3=((C_word*)((C_word*)t0)[6])[1];
f_3281(t3,t2,((C_word*)t0)[7]);}

/* k3319 in k3316 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3321(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3321,c,av);}
a=C_alloc(4);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_assq(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_i_cdr(t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3156,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=(
  f_3156(t4,((C_word*)t0)[5])
);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3368(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_3368,c,av);}
a=C_alloc(18);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3371,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=C_i_pairp(t1);
t4=(C_truep(t3)?C_eqp(lf[34],C_u_i_car(t1)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3400,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t6=C_i_cadr(((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t6,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:377: scheme#append"));
t8=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=C_i_cadr(t1);
av2[3]=((C_word*)t0)[6];
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}
else{
t5=t2;
f_3371(t5,C_SCHEME_UNDEFINED);}}

/* k3369 in k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,4)))){
C_save_and_reclaim_args((void *)trf_3371,2,t0,t1);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3378,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:382: walk"));
t4=((C_word*)((C_word*)t2)[4])[1];
f_3299(t4,t3,C_i_cadr(((C_word*)t2)[5]),((C_word*)t2)[6],((C_word*)t2)[7]);}

/* k3376 in k3369 in k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3378(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_3378,c,av);}
a=C_alloc(5);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3382,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:383: walk"));
t4=((C_word*)((C_word*)t2)[4])[1];
f_3299(t4,t3,C_i_caddr(((C_word*)t2)[5]),((C_word*)t2)[6],((C_word*)t2)[7]);}

/* k3380 in k3376 in k3369 in k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3382(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3382,c,av);}
C_trace(C_text("lfa2.scm:382: merge"));
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(
C_trace("lfa2.scm:382: merge"),
  f_2892(((C_word*)t0)[4],t1)
);
((C_proc)C_fast_retrieve_proc(t2))(2,av2);}}

/* k3398 in k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3400(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3400,c,av);}
a=C_alloc(11);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_i_caddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:380: scheme#append"));
t5=*((C_word*)lf[35]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=C_i_caddr(((C_word*)t0)[7]);
av2[3]=((C_word*)t0)[8];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}

/* k3402 in k3398 in k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3404(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3404,c,av);}
C_trace(C_text("lfa2.scm:376: merge"));
t2=((C_word*)t0)[2];
f_3371(t2,(
C_trace("lfa2.scm:376: merge"),
  f_2892(((C_word*)t0)[4],t1)
));}

/* k3410 in k3398 in k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3412(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3412,c,av);}
C_trace(C_text("lfa2.scm:379: walk"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3299(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k3422 in k3366 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3424(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3424,c,av);}
C_trace(C_text("lfa2.scm:376: walk"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3299(t2,((C_word*)t0)[3],((C_word*)t0)[4],t1,((C_word*)t0)[5]);}

/* k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3468(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3468,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+10,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3471,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:389: assigned?"));
t4=((C_word*)((C_word*)t0)[8])[1];
f_2969(t4,t3,((C_word*)t0)[3]);}

/* k3469 in k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3471(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_3471,c,av);}
a=C_alloc(20);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3474,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=t1,a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3536,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[11],a[4]=((C_word*)t2)[12],a[5]=t3,a[6]=((C_word*)t2)[7],a[7]=((C_word*)t2)[13],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_not(t1))){
t5=C_eqp(lf[43],((C_word*)t2)[10]);
if(C_truep(t5)){
t6=(
C_trace("lfa2.scm:392: floatvar?"),
  f_3202(((C_word*)((C_word*)t2)[14])[1],((C_word*)t2)[3])
);
t7=t4;
f_3536(t7,C_i_not(t6));}
else{
t6=t4;
f_3536(t6,C_SCHEME_FALSE);}}
else{
t5=t4;
f_3536(t5,C_SCHEME_FALSE);}}

/* k3472 in k3469 in k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3474(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,2)))){
C_save_and_reclaim((void *)f_3474,c,av);}
a=C_alloc(16);
t2=C_i_cadr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3485,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[8])){
t4=t3;
f_3485(t4,((C_word*)t0)[10]);}
else{
t4=C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[11]);
t5=t3;
f_3485(t5,C_a_i_cons(&a,2,t4,((C_word*)t0)[10]));}}

/* k3483 in k3472 in k3469 in k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3485(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,0,2)))){
C_save_and_reclaim_args((void *)trf_3485,2,t0,t1);}
a=C_alloc(15);
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f5482,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:342: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
tp(3,av2);}}

/* k3490 in k3483 in k3472 in k3469 in k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3492(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,4)))){
C_save_and_reclaim_args((void *)trf_3492,2,t0,t1);}
a=C_alloc(8);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("lfa2.scm:403: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[8];
tp(3,av2);}}
else{
C_trace(C_text("lfa2.scm:396: walk"));
t2=((C_word*)((C_word*)t0)[4])[1];
f_3299(t2,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],((C_word*)t0)[3]);}}

/* k3504 in k3490 in k3483 in k3472 in k3469 in k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3506(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,4)))){
C_save_and_reclaim((void *)f_3506,c,av);}
a=C_alloc(12);
t2=C_i_car(t1);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[2]);
t4=C_a_i_cons(&a,2,t3,((C_word*)t0)[3]);
t5=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t6=C_a_i_cons(&a,2,t5,t4);
C_trace(C_text("lfa2.scm:396: walk"));
t7=((C_word*)((C_word*)t0)[4])[1];
f_3299(t7,((C_word*)t0)[5],((C_word*)t0)[6],((C_word*)t0)[7],t6);}

/* k3520 */
static void C_ccall f_3522(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3522,c,av);}
t2=((C_word*)t0)[2];
f_3492(t2,C_i_not(t1));}

/* k3528 */
static void C_ccall f_3530(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3530,c,av);}
C_trace(C_text("lfa2.scm:402: assigned?"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_2969(t2,((C_word*)t0)[3],C_i_car(t1));}

/* k3534 in k3469 in k3466 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3536(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3536,2,t0,t1);}
a=C_alloc(12);
if(C_truep(t1)){
t2=C_a_i_list3(&a,3,((C_word*)t0)[2],C_fix(0),C_fix(0));
t3=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
C_trace(C_text("lfa2.scm:394: add-unboxed"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_3287(t5,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
C_trace(C_text("lfa2.scm:395: add-boxed"));
t2=((C_word*)((C_word*)t0)[7])[1];
f_3281(t2,((C_word*)t0)[5],((C_word*)t0)[6]);}}

/* k3576 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3578(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3578,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[59];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3595 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3597(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3597,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3600,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:417: walk"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3299(t3,t2,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3598 in k3595 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3600(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3600,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[62];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3601 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,0,4)))){
C_save_and_reclaim_args((void *)trf_3603,2,t0,t1);}
a=C_alloc(4);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3614,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:416: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5403,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:417: walk"));
t3=((C_word*)((C_word*)t0)[6])[1];
f_3299(t3,t2,((C_word*)t0)[4],((C_word*)t0)[7],((C_word*)t0)[8]);}}

/* k3612 in k3601 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3614(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3614,c,av);}
C_trace(C_text("lfa2.scm:416: eliminate-floatvar"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3208(t2,((C_word*)t0)[3],C_i_car(t1));}

/* k3626 */
static void C_ccall f_3628(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3628,c,av);}
C_trace(C_text("lfa2.scm:415: floatvar?"));
t2=((C_word*)t0)[2];
f_3603(t2,(
C_trace("lfa2.scm:415: floatvar?"),
  f_3202(((C_word*)((C_word*)t0)[3])[1],C_i_car(t1))
));}

/* g742 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3653(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3653,3,t0,t1,t2);}
a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3657,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:425: walk"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3299(t4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3655 in g742 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3657(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3657,c,av);}
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("lfa2.scm:426: add-unboxed"));
t2=((C_word*)((C_word*)t0)[3])[1];
f_3287(t2,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3669(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(11,c,3)))){
C_save_and_reclaim((void *)f_3669,c,av);}
a=C_alloc(11);
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_assoc(t2,lf[66]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("lfa2.scm:428: g764"));
t5=t4;
f_3676(t5,((C_word*)t0)[9],t3);}
else{
t4=C_i_car(((C_word*)t0)[2]);
t5=C_i_assoc(t4,lf[73]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("lfa2.scm:428: g779"));
t7=t6;
f_3806(t7,((C_word*)t0)[9],t5);}
else{
t6=C_i_car(((C_word*)t0)[2]);
t7=C_i_assoc(t6,lf[74]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3854,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[5],a[5]=C_SCHEME_UNDEFINED,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("lfa2.scm:428: g788"));
t9=t8;
f_3854(t9,((C_word*)t0)[9],t7);}
else{
t8=C_i_car(((C_word*)t0)[2]);
t9=C_i_assoc(t8,lf[78]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4050,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:428: g815"));
t11=t10;
f_4050(t11,((C_word*)t0)[9],t9);}
else{
t10=C_SCHEME_UNDEFINED;
t11=((C_word*)t0)[9];{
C_word *av2=av;
av2[0]=t11;
av2[1]=t10;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}}}}}

/* g764 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3676(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,4)))){
C_save_and_reclaim_args((void *)trf_3676,3,t0,t1,t2);}
a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3680,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("lfa2.scm:430: walk"));
t4=((C_word*)((C_word*)t0)[5])[1];
f_3299(t4,t3,C_i_car(((C_word*)t0)[4]),((C_word*)t0)[6],((C_word*)t0)[7]);}

/* k3678 in g764 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3680(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3680,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fast_retrieve(lf[67]))){
C_trace(C_text("lfa2.scm:432: extinguish!"));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3031(t3,t2,((C_word*)t0)[4],lf[68]);}
else{
t3=C_i_cadr(((C_word*)t0)[5]);
t4=C_eqp(lf[69],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3698,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t1))){
t6=C_i_car(t1);
t7=C_eqp(lf[6],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3744,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:437: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t8;
av2[2]=C_i_cadr(((C_word*)t0)[6]);
tp(3,av2);}}
else{
t8=t5;
f_3698(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_3698(t6,C_SCHEME_FALSE);}}
else{
t5=C_i_pairp(t1);
t6=(C_truep(t5)?C_eqp(lf[34],C_u_i_car(t1)):C_SCHEME_FALSE);
if(C_truep(t6)){
if(C_truep(C_i_memq(lf[34],C_u_i_cdr(((C_word*)t0)[5])))){
C_trace(C_text("lfa2.scm:444: extinguish!"));
t7=((C_word*)((C_word*)t0)[3])[1];
f_3031(t7,t2,((C_word*)t0)[4],lf[71]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
if(C_truep(C_i_member(t1,C_u_i_cdr(((C_word*)t0)[5])))){
C_trace(C_text("lfa2.scm:447: extinguish!"));
t7=((C_word*)((C_word*)t0)[3])[1];
f_3031(t7,t2,((C_word*)t0)[4],lf[72]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}}

/* k3681 in k3678 in g764 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3683(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3683,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3696 in k3678 in g764 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3698(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3698,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("lfa2.scm:438: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3722 in k3696 in k3678 in g764 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3724(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3724,c,av);}
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
C_trace(C_text("lfa2.scm:441: extinguish!"));
t5=((C_word*)((C_word*)t0)[3])[1];
f_3031(t5,((C_word*)t0)[4],((C_word*)t0)[5],lf[70]);}
else{
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3742 in k3678 in g764 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3744(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3744,c,av);}
t2=((C_word*)t0)[2];
f_3698(t2,C_eqp(lf[36],t1));}

/* g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3806(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,4)))){
C_save_and_reclaim_args((void *)trf_3806,3,t0,t1,t2);}
a=C_alloc(6);
t3=C_i_car(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3813,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:452: walk"));
t5=((C_word*)((C_word*)t0)[4])[1];
f_3299(t5,t4,t3,((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k3811 in g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3813(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3813,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3816,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_member(t1,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3822,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3840,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:454: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}
else{
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3814 in k3811 in g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3816(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3816,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3820 in k3811 in g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3822(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3822,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3825,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3836,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:455: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[4];
tp(3,av2);}}

/* k3823 in k3820 in k3811 in g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3825(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_3825,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3832,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:456: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
tp(3,av2);}}

/* k3830 in k3823 in k3820 in k3811 in g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3832(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3832,c,av);}
C_trace(C_text("lfa2.scm:456: chicken.compiler.support#node-subexpressions-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[17]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[17]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k3834 in k3820 in k3811 in g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3836(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3836,c,av);}
C_trace(C_text("lfa2.scm:455: chicken.compiler.support#node-parameters-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[18]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[18]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* k3838 in k3811 in g779 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_3840(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3840,c,av);}
C_trace(C_text("lfa2.scm:454: chicken.compiler.support#node-class-set!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[19]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[19]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=t1;
tp(4,av2);}}

/* g788 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_3854(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3854,3,t0,t1,t2);}
a=C_alloc(3);
t3=C_mutate(((C_word *)t0)+2,t2);
t4=C_mutate(((C_word *)t0)+3,t1);
t5=C_i_car(((C_word*)t0)[4]);
t6=C_mutate(((C_word *)t0)+5,t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f5501,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:342: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t7;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k3906 in k3914 in k3929 */
static void C_ccall f_3908(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(21,c,1)))){
C_save_and_reclaim((void *)f_3908,c,av);}
a=C_alloc(21);
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_a_i_list(&a,2,lf[6],t2);
t4=C_a_i_cons(&a,2,((C_word*)t0)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t6;
av2[1]=C_a_i_list(&a,3,lf[34],t5,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[6]);
t4=C_a_i_list(&a,1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[34],t4,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3914 in k3929 */
static void C_ccall f_3916(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3916,c,av);}
a=C_alloc(15);
t2=C_eqp(lf[36],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3908,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:470: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=C_i_cadr(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],lf[6]);
t4=C_a_i_list(&a,1,t3);
t5=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t5;
av2[1]=C_a_i_list(&a,3,lf[34],t4,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3929 */
static void C_ccall f_3931(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3931,c,av);}
a=C_alloc(15);
t2=C_i_car(t1);
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(lf[69],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3916,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:468: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t5;
av2[2]=C_i_cadr(((C_word*)t0)[4]);
tp(3,av2);}}
else{
t5=C_i_cadr(((C_word*)t0)[2]);
t6=C_a_i_cons(&a,2,t2,t5);
t7=C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t8;
av2[1]=C_a_i_list(&a,3,lf[34],t7,C_SCHEME_END_OF_LIST);
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3932 */
static void C_ccall f_3934(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(14,c,3)))){
C_save_and_reclaim((void *)f_3934,c,av);}
a=C_alloc(14);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3937,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[3]);
t4=C_eqp(lf[69],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3946,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_pairp(t1))){
t6=C_i_car(t1);
t7=C_eqp(lf[6],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3992,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:484: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t8;
av2[2]=C_i_cadr(((C_word*)t0)[6]);
tp(3,av2);}}
else{
t8=t5;
f_3946(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_3946(t6,C_SCHEME_FALSE);}}
else{
t5=C_i_pairp(t1);
t6=(C_truep(t5)?C_eqp(lf[34],C_u_i_car(t1)):C_SCHEME_FALSE);
if(C_truep(t6)){
if(C_truep(C_i_memq(lf[34],C_u_i_cdr(((C_word*)t0)[3])))){
C_trace(C_text("lfa2.scm:492: extinguish!"));
t7=((C_word*)((C_word*)t0)[4])[1];
f_3031(t7,t2,((C_word*)t0)[5],lf[76]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}
else{
if(C_truep(C_i_member(t1,C_u_i_cdr(((C_word*)t0)[3])))){
C_trace(C_text("lfa2.scm:495: extinguish!"));
t7=((C_word*)((C_word*)t0)[4])[1];
f_3031(t7,t2,((C_word*)t0)[5],lf[77]);}
else{
t7=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t7;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t7+1)))(2,av2);}}}}}

/* k3935 in k3932 */
static void C_ccall f_3937(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3937,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* k3944 in k3932 */
static void f_3946(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,0,2)))){
C_save_and_reclaim_args((void *)trf_3946,2,t0,t1);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("lfa2.scm:486: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[7]);
tp(3,av2);}}
else{
t2=((C_word*)t0)[6];{
C_word av2[2];
av2[0]=t2;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3970 in k3944 in k3932 */
static void C_ccall f_3972(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3972,c,av);}
t2=C_i_car(t1);
if(C_truep(C_i_symbolp(t2))){
t3=C_i_cadr(((C_word*)t0)[2]);
t4=C_eqp(t2,t3);
if(C_truep(t4)){
C_trace(C_text("lfa2.scm:489: extinguish!"));
t5=((C_word*)((C_word*)t0)[3])[1];
f_3031(t5,((C_word*)t0)[4],((C_word*)t0)[5],lf[75]);}
else{
t5=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t5;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t3=((C_word*)t0)[6];{
C_word *av2=av;
av2[0]=t3;
av2[1]=lf[34];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3990 in k3932 */
static void C_ccall f_3992(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3992,c,av);}
t2=((C_word*)t0)[2];
f_3946(t2,C_eqp(lf[36],t1));}

/* g815 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_4050(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(8,0,2)))){
C_save_and_reclaim_args((void *)trf_4050,3,t0,t1,t2);}
a=C_alloc(8);
t3=C_i_pairp(((C_word*)t0)[2]);
t4=(C_truep(t3)?C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4060,a[2]=t1,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=C_i_cadr(t2);
t7=C_eqp(lf[69],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4092,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:502: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word av2[3];
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t8;
av2[2]=t4;
tp(3,av2);}}
else{
t8=t5;
f_4060(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_4060(t6,C_SCHEME_FALSE);}}

/* k4058 in g815 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_4060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_4060,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4076,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:503: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word av2[3];
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_i_cadr(((C_word*)t0)[4]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4074 in k4058 in g815 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4076(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4076,c,av);}
a=C_alloc(6);
t2=C_i_car(t1);
t3=C_i_symbolp(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?C_a_i_list(&a,2,lf[6],t2):lf[6]);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k4090 in g815 in k3667 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4092(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4092,c,av);}
t2=((C_word*)t0)[2];
f_4060(t2,C_eqp(lf[36],t1));}

/* for-each-loop741 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_4123(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4123,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4133,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:423: g742"));
t4=((C_word*)t0)[3];
f_3653(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4131 in for-each-loop741 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4133(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4133,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4123(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* g830 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_4149(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_4149,3,t0,t1,t2);}
C_trace(C_text("lfa2.scm:509: g845"));
t3=((C_word*)((C_word*)t0)[2])[1];
f_3299(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k4157 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4159(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4159,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=lf[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* for-each-loop829 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_4161(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_4161,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:509: g830"));
t4=((C_word*)t0)[3];
f_4149(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4169 in for-each-loop829 in k3307 in k3304 in k3301 in walk in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4171(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4171,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4161(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4223(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,3)))){
C_save_and_reclaim((void *)f_4223,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4226,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(((C_word*)((C_word*)t0)[4])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:514: chicken.compiler.support#with-debugging-output"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t2;
av2[2]=lf[88];
av2[3]=t3;
tp(4,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4224 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4226(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4226,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)((C_word*)t0)[3])[1];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4234(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_4234,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4238,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:517: chicken.base#print"));
t3=*((C_word*)lf[85]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[86];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k4236 in a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4238(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4238,c,av);}
a=C_alloc(5);
t2=((C_word*)((C_word*)t0)[2])[1];
t3=C_i_check_list_2(t2,lf[21]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4272,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4272(t7,((C_word*)t0)[3],t2);}

/* k4244 in for-each-loop855 in k4236 in a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4246,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4249,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:519: ##sys#print"));
t3=*((C_word*)lf[82]+1);{
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

/* k4247 in k4244 in for-each-loop855 in k4236 in a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4249(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4249,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4252,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:519: ##sys#print"));
t4=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[83];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4250 in k4247 in k4244 in for-each-loop855 in k4236 in a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4252(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4252,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4255,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:519: ##sys#print"));
t4=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=C_u_i_cdr(((C_word*)t2)[4]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4253 in k4250 in k4247 in k4244 in for-each-loop855 in k4236 in a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4255(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4255,c,av);}
C_trace(C_text("lfa2.scm:519: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* for-each-loop855 in k4236 in a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void f_4272(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,0,4)))){
C_save_and_reclaim_args((void *)trf_4272,3,t0,t1,t2);}
a=C_alloc(10);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4282,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=*((C_word*)lf[79]+1);
t6=*((C_word*)lf[79]+1);
t7=C_i_check_port_2(*((C_word*)lf[79]+1),C_fix(2),C_SCHEME_TRUE,lf[80]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4246,a[2]=t3,a[3]=t5,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:519: ##sys#print"));
t9=*((C_word*)lf[82]+1);{
C_word av2[5];
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[84];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[79]+1);
((C_proc)(void*)(*((C_word*)t9+1)))(5,av2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k4280 in for-each-loop855 in k4236 in a4233 in k4221 in chicken.compiler.lfa2#perform-secondary-flow-analysis in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4282(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_4282,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_4272(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4295(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,3)))){
C_save_and_reclaim((void *)f_4295,c,av);}
a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4299,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_i_check_list_2(t3,lf[29]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_2134(t9,t4,t3);}

/* k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4299(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(23,c,3)))){
C_save_and_reclaim((void *)f_4299,c,av);}
a=C_alloc(23);
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4301,a[2]=t1,a[3]=t3,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4528,a[2]=t1,a[3]=t7,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4869,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:605: walk"));
t11=((C_word*)t7)[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t11;
av2[1]=t10;
av2[2]=((C_word*)t0)[3];
f_4528(3,av2);}}

/* walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4301(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4301,c,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4305,a[2]=C_SCHEME_UNDEFINED,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("lfa2.scm:533: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2=av;
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4305(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4305,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4308,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:534: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4308(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4308,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4311,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:535: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}

/* k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4311(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(21,c,4)))){
C_save_and_reclaim((void *)f_4311,c,av);}
a=C_alloc(21);
t2=((C_word*)t0)[2];
t3=C_eqp(((C_word*)t2)[2],lf[36]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t2)[3]);
if(C_truep(C_i_flonump(t4))){
t5=C_a_i_list1(&a,1,t4);
C_trace(C_text("lfa2.scm:540: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t2)[4];
av2[2]=lf[91];
av2[3]=t5;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}
else{
t5=((C_word*)t2)[4];{
C_word *av2=av;
av2[0]=t5;
av2[1]=((C_word*)t2)[5];
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}
else{
t4=C_eqp(((C_word*)t2)[2],lf[11]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4339,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:543: posq"));
f_2684(t5,C_i_car(((C_word*)t2)[3]),((C_word*)t2)[6]);}
else{
t5=C_eqp(((C_word*)t2)[2],lf[64]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t2)[2],lf[65]));
if(C_truep(t6)){
t7=C_i_car(((C_word*)t2)[3]);
t8=C_i_assoc(t7,lf[3]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4376,a[2]=((C_word*)t2)[7],a[3]=((C_word*)t2)[8],a[4]=((C_word*)t2)[9],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:548: g929"));
t10=t9;
f_4376(t10,((C_word*)t2)[4],t8);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4456,a[2]=((C_word*)t2)[4],tmp=(C_word)a,a+=3,tmp);
t10=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=((C_word*)t12)[1];
t14=C_i_check_list_2(t1,lf[95]);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4466,a[2]=t9,a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[3],tmp=(C_word)a,a+=5,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4468,a[2]=t12,a[3]=t17,a[4]=((C_word*)t2)[9],a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_4468(t19,t15,t1);}}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4515,a[2]=((C_word*)t2)[4],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:563: walk"));
t8=((C_word*)((C_word*)t2)[9])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t8;
av2[1]=t7;
av2[2]=((C_word*)t2)[5];
f_4528(3,av2);}}}}}

/* k4337 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4339(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4339,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[2]);
C_trace(C_text("lfa2.scm:545: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[92];
av2[3]=t2;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}
else{
t2=C_a_i_list1(&a,1,((C_word*)t0)[4]);
C_trace(C_text("lfa2.scm:546: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[93];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
tp(5,av2);}}}

/* g929 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4376(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(49,0,3)))){
C_save_and_reclaim_args((void *)trf_4376,3,t0,t1,t2);}
a=C_alloc(49);
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_s_a_i_plus(&a,2,t5,C_fix(1)));
t7=C_a_i_list1(&a,1,t3);
t8=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t9=t8;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=((C_word*)t10)[1];
t12=C_eqp(t4,lf[94]);
t13=(C_truep(t12)?((C_word*)((C_word*)t0)[3])[1]:((C_word*)((C_word*)t0)[4])[1]);
t14=C_i_check_list_2(((C_word*)t0)[5],lf[95]);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4405,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4407,a[2]=t10,a[3]=t17,a[4]=t13,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_4407(t19,t15,((C_word*)t0)[5]);}

/* k4403 in g929 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4405(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4405,c,av);}
C_trace(C_text("lfa2.scm:553: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[64];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* map-loop936 in g929 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4407(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4407,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:555: g942"));
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

/* k4430 in map-loop936 in g929 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4432(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4432,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4407(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4454 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
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
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("lfa2.scm:560: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
tp(5,av2);}}

/* k4464 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4466(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4466,c,av);}
C_trace(C_text("lfa2.scm:561: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* map-loop963 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4468(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4468,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:562: g969"));
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4528(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4491 in map-loop963 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4493(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4493,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4468(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4513 in k4309 in k4306 in k4303 in walk/unbox in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4515(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4515,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("lfa2.scm:563: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[93];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
tp(5,av2);}}

/* walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4528(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(10,c,2)))){
C_save_and_reclaim((void *)f_4528,c,av);}
a=C_alloc(10);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4532,a[2]=C_SCHEME_UNDEFINED,a[3]=t1,a[4]=C_SCHEME_UNDEFINED,a[5]=t2,a[6]=((C_word*)t0)[2],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("lfa2.scm:566: chicken.compiler.support#node-class"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[16]);
C_word *av2=av;
av2[0]=*((C_word*)lf[16]+1);
av2[1]=t3;
av2[2]=t2;
tp(3,av2);}}

/* k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4532(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4532,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+2,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4535,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:567: chicken.compiler.support#node-parameters"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[15]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[15]+1);
av2[1]=t3;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4535(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4535,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4538,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:568: chicken.compiler.support#node-subexpressions"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t4;
av2[2]=((C_word*)t2)[5];
tp(3,av2);}}

/* k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4538(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,3)))){
C_save_and_reclaim((void *)f_4538,c,av);}
a=C_alloc(18);
t2=((C_word*)t0)[2];
t3=C_eqp(((C_word*)t2)[2],lf[11]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4547,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[4],a[4]=((C_word*)t2)[5],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:571: posq"));
f_2684(t4,C_i_car(((C_word*)t2)[4]),((C_word*)t2)[6]);}
else{
t4=C_eqp(((C_word*)t2)[2],lf[56]);
if(C_truep(t4)){
t5=C_i_car(t1);
t6=C_i_car(((C_word*)t2)[4]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4584,a[2]=t6,a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[7],a[5]=t1,a[6]=((C_word*)t2)[8],a[7]=t5,a[8]=((C_word*)t2)[4],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("lfa2.scm:580: posq"));
f_2684(t7,t6,((C_word*)t2)[6]);}
else{
t5=C_eqp(((C_word*)t2)[2],lf[64]);
t6=(C_truep(t5)?t5:C_eqp(((C_word*)t2)[2],lf[65]));
if(C_truep(t6)){
t7=C_i_car(((C_word*)t2)[4]);
t8=C_i_assoc(t7,lf[3]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4673,a[2]=((C_word*)t2)[9],a[3]=((C_word*)t2)[7],a[4]=((C_word*)t2)[8],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:587: g1036"));
t10=t9;
f_4673(t10,((C_word*)t2)[3],t8);}
else{
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=C_i_check_list_2(t1,lf[95]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4770,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4772,a[2]=t11,a[3]=t16,a[4]=((C_word*)t2)[7],a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_4772(t18,t14,t1);}}
else{
t7=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t8=t7;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=((C_word*)t9)[1];
t11=C_i_check_list_2(t1,lf[95]);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4821,a[2]=((C_word*)t2)[3],a[3]=((C_word*)t2)[2],a[4]=((C_word*)t2)[4],tmp=(C_word)a,a+=5,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4823,a[2]=t9,a[3]=t14,a[4]=((C_word*)t2)[7],a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_4823(t16,t12,t1);}}}}

/* k4545 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4547(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4547,c,av);}
a=C_alloc(6);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
C_trace(C_text("lfa2.scm:574: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=t2;
av2[2]=lf[92];
av2[3]=t3;
av2[4]=C_SCHEME_END_OF_LIST;
tp(5,av2);}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4559 in k4545 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4561(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4561,c,av);}
a=C_alloc(3);
t2=C_a_i_list1(&a,1,t1);
C_trace(C_text("lfa2.scm:573: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[96];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t2;
tp(5,av2);}}

/* k4582 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4584(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,3)))){
C_save_and_reclaim((void *)f_4584,c,av);}
a=C_alloc(17);
if(C_truep(t1)){
t2=C_a_i_list2(&a,2,t1,((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4602,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:583: walk/unbox"));
t4=((C_word*)((C_word*)t0)[6])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t0)[7];
f_4301(3,av2);}}
else{
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[5],lf[95]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4623,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4625,a[2]=t4,a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4625(t11,t7,((C_word*)t0)[5]);}}

/* k4600 in k4582 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4602(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_4602,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4606,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:584: walk"));
t3=((C_word*)((C_word*)t0)[4])[1];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_cadr(((C_word*)t0)[5]);
f_4528(3,av2);}}

/* k4604 in k4600 in k4582 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4606(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4606,c,av);}
a=C_alloc(6);
t2=C_a_i_list2(&a,2,((C_word*)t0)[2],t1);
C_trace(C_text("lfa2.scm:582: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[97];
av2[3]=((C_word*)t0)[4];
av2[4]=t2;
tp(5,av2);}}

/* k4621 in k4582 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4623(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4623,c,av);}
C_trace(C_text("lfa2.scm:585: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[56];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* map-loop1003 in k4582 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4625(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4625,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4650,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:585: g1009"));
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4528(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4648 in map-loop1003 in k4582 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4650(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4650,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4625(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* g1036 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4673(C_word t0,C_word t1,C_word t2){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(53,0,3)))){
C_save_and_reclaim_args((void *)trf_4673,3,t0,t1,t2);}
a=C_alloc(53);
t3=C_i_cadr(t2);
t4=C_i_caddr(t2);
t5=((C_word*)((C_word*)t0)[2])[1];
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_s_a_i_plus(&a,2,t5,C_fix(1)));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4685,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=C_a_i_list1(&a,1,t3);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=C_eqp(t4,lf[99]);
t14=(C_truep(t13)?((C_word*)((C_word*)t0)[3])[1]:((C_word*)((C_word*)t0)[4])[1]);
t15=C_i_check_list_2(((C_word*)t0)[5],lf[95]);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4717,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4719,a[2]=t11,a[3]=t18,a[4]=t14,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t20=((C_word*)t18)[1];
f_4719(t20,t16,((C_word*)t0)[5]);}

/* k4683 in g1036 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4685(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4685,c,av);}
a=C_alloc(3);
t2=C_eqp(((C_word*)t0)[2],lf[98]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t1;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}
else{
t3=C_a_i_list1(&a,1,t1);
C_trace(C_text("lfa2.scm:600: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=lf[96];
av2[3]=C_SCHEME_END_OF_LIST;
av2[4]=t3;
tp(5,av2);}}}

/* k4715 in g1036 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4717(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4717,c,av);}
C_trace(C_text("lfa2.scm:592: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=lf[64];
av2[3]=((C_word*)t0)[3];
av2[4]=t1;
tp(5,av2);}}

/* map-loop1044 in g1036 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4719,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:594: g1050"));
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

/* k4742 in map-loop1044 in g1036 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4744(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4744,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4719(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4768 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4770(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4770,c,av);}
C_trace(C_text("lfa2.scm:602: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* map-loop1077 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4772(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4772,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4797,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:602: g1083"));
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4528(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4795 in map-loop1077 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4797(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4797,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4772(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4819 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4821(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_4821,c,av);}
C_trace(C_text("lfa2.scm:603: chicken.compiler.support#make-node"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[90]);
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=*((C_word*)lf[90]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
av2[3]=((C_word*)t0)[4];
av2[4]=t1;
tp(5,av2);}}

/* map-loop1103 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void f_4823(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4823,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:603: g1109"));
t4=((C_word*)((C_word*)t0)[4])[1];{
C_word av2[3];
av2[0]=t4;
av2[1]=t3;
av2[2]=C_slot(t2,C_fix(0));
f_4528(3,av2);}}
else{
t3=t1;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_slot(((C_word*)t0)[5],C_fix(1));
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k4846 in map-loop1103 in k4536 in k4533 in k4530 in walk in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4848(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4848,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4823(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4869(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,3)))){
C_save_and_reclaim((void *)f_4869,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:606: chicken.compiler.support#with-debugging-output"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[87]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[87]+1);
av2[1]=t2;
av2[2]=lf[102];
av2[3]=t3;
tp(4,av2);}}

/* k4870 in k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4872(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4872,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4873 in k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4874(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_4874,c,av);}
a=C_alloc(6);
t2=*((C_word*)lf[79]+1);
t3=*((C_word*)lf[79]+1);
t4=C_i_check_port_2(*((C_word*)lf[79]+1),C_fix(2),C_SCHEME_TRUE,lf[80]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4881,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("lfa2.scm:609: ##sys#print"));
t6=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[101];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[79]+1);
((C_proc)(void*)(*((C_word*)t6+1)))(5,av2);}}

/* k4879 in a4873 in k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4881(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,4)))){
C_save_and_reclaim((void *)f_4881,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:609: ##sys#print"));
t3=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=C_i_length(((C_word*)t0)[5]);
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[4];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k4882 in k4879 in a4873 in k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4884(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_4884,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4887,a[2]=((C_word*)t0)[2],a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("lfa2.scm:609: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=t2;
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[4];
tp(4,av2);}}

/* k4885 in k4882 in k4879 in a4873 in k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4887(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_4887,c,av);}
a=C_alloc(3);
t2=*((C_word*)lf[79]+1);
t3=C_mutate(((C_word *)t0)+3,t2);
t4=*((C_word*)lf[79]+1);
t5=C_i_check_port_2(*((C_word*)lf[79]+1),C_fix(2),C_SCHEME_TRUE,lf[80]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4893,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("lfa2.scm:611: ##sys#print"));
t7=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[100];
av2[3]=C_SCHEME_FALSE;
av2[4]=*((C_word*)lf[79]+1);
((C_proc)(void*)(*((C_word*)t7+1)))(5,av2);}}

/* k4891 in k4885 in k4882 in k4879 in a4873 in k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4893(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_4893,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4896,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("lfa2.scm:611: ##sys#print"));
t4=*((C_word*)lf[82]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)((C_word*)t2)[4])[1];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k4894 in k4891 in k4885 in k4882 in k4879 in a4873 in k4867 in k4297 in chicken.compiler.lfa2#perform-unboxing in k1468 in k1465 in k1462 in k1459 */
static void C_ccall f_4896(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_4896,c,av);}
C_trace(C_text("lfa2.scm:611: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[81]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[81]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=C_make_character(10);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_lfa2_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("lfa2"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_lfa2_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(3770))){
C_save(t1);
C_rereclaim2(3770*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,103);
lf[0]=C_h_intern(&lf[0],4, C_text("lfa2"));
lf[1]=C_h_intern(&lf[1],22, C_text("chicken.compiler.lfa2#"));
lf[4]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\160\154\165\163\000\376\003\000\000\002\376\002\000\000\023\103\137\165\142\137\151\137\146\154\157\156\165\155\137\160\154\165\163\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\030\103\137\141\137\151\137\146\154\157\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000\376\003\000\000\002\376\002\000\000\031\103\137\165\142\137\151\137\146\154\157\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\164\151\155\145\163\000\376\003\000\000\002\376\002\000\000\024\103\137\165\142\137\151\137\146\154\157\156\165\155\137\164\151\155\145\163\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\032\103\137\141\137\151\137\146\154\157\156\165\155\137\155\165\154\164\151\160\154\171\137\141\144\144\000\376\003\000\000\002\376\002\000\000\033\103\137\165\142\137\151\137\146\154\157\156\165\155\137\155\165\154\164\151\160\154\171\137\141\144\144\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\151\137\146\154\157\156\165\155\137\161\165\157\164\151\145\156\164\000\376\003\000\000\002\376\002\000\000\027\103\137\165\142\137\151\137\146\154\157\156\165\155\137\161\165\157\164\151\145\156\164\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\020\103\137\146\154\157\156\165\155\137\145\161\165\141\154\160\000\376\003\000\000\002\376\002\000\000\025\103\137\165\142\137\151\137\146\154\157\156\165\155\137\145\161\165\141\154\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\160\000\376\003\000\000\002\376\002\000\000\027\103\137\165\142\137\151\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\017\103\137\146\154\157\156\165\155\137\154\145\163\163\160\000\376\003\000\000\002\376\002\000\000\024\103\137\165\142\137\151\137\146\154\157\156\165\155\137\154\145\163\163\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\034\103\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000\376\003\000\000\002\376\002\000\000\041\103\137\165\142\137\151\137\146\154\157\156\165\155\137\147\162\145\141\164\145\162\137\157\162\137\145\161\165\141\154\137\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\031\103\137\146\154\157\156\165\155\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000\376\003\000\000\002\376\002\000\000\036\103\137\165\142\137\151\137\146\154\157\156\165\155\137\154\145\163\163\137\157\162\137\145\161\165\141\154\137\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\165\137\151\137\146\154\157\156\165\155\137\156\141\156\160\000\376\003\000\000\002\376\002\000\000\023\103\137\165\142\137\151\137\146\154\157\156\165\155\137\156\141\156\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\027\103\137\165\137\151\137\146\154\157\156\165\155\137\151\156\146\151\156\151\164\145\160\000\376\003\000\000\002\376\002\000\000\030\103\137\165\142\137\151\137\146\154\157\156\165\155\137\151\156\146\151\156\151\164\145\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\165\137\151\137\146\154\157\156\165\155\137\146\151\156\151\164\145\160\160\000\376\003\000\000\002\376\002\000\000\026\103\137\165\142\137\151\137\146\154\157\156\165\155\137\146\151\156\151\164\145\160\000\376\003\000\000\002\376\001\000\000\004\001\160\162\145\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\163\151\156\000\376\003\000\000\002\376\002\000\000\006\103\137\163\151\156\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\143\157\163\000\376\003\000\000\002\376\002\000\000\006\103\137\143\157\163\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\164\141\156\000\376\003\000\000\002\376\002\000\000\006\103\137\164\141\156\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\163\151\156\000\376\003\000\000\002\376\002\000\000\007\103\137\141\163\151\156\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\143\157\163\000\376\003\000\000\002\376\002\000\000\007\103\137\141\143\157\163\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\000\376\003\000\000\002\376\002\000\000\007\103\137\141\164\141\156\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\062\000\376\003\000\000\002\376\002\000\000\010\103\137\141\164\141\156\062\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\163\151\156\150\000\376\003\000\000\002\376\002\000\000\007\103\137\163\151\156\150\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\143\157\163\150\000\376\003\000\000\002\376\002\000\000\007\103\137\143\157\163\150\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\164\141\156\150\000\376\003\000\000\002\376\002\000\000\007\103\137\164\141\156\150\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\163\151\156\150\000\376\003\000\000\002\376\002\000\000\010\103\137\141\163\151\156\150\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\143\157\163\150\000\376\003\000\000\002\376\002\000\000\010\103\137\141\143\157\163\150\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\150\000\376\003\000\000\002\376\002\000\000\010\103\137\141\164\141\156\150\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\145\170\160\000\376\003\000\000\002\376\002\000\000\006\103\137\145\170\160\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\145\170\160\162\000\376\003\000\000\002\376\002\000\000\006\103\137\160\157\167\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\154\157\147\000\376\003\000\000\002\376\002\000\000\006\103\137\154\157\147\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\163\161\162\164\000\376\003\000\000\002\376\002\000\000\007\103\137\163\161\162\164\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\151\137\146\154\157\156\165\155\137\164\162\165\156\143\141\164\145\000\376\003\000\000\002\376\002\000\000\010\103\137\164\162\165\156\143\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\025\103\137\141\137\151\137\146\154\157\156\165\155\137\143\145\151\154\151\156\147\000\376\003\000\000\002\376\002\000\000\007\103\137\143\145\151\154\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\146\154\157\157\162\000\376\003\000\000\002\376\002\000\000\010\103\137\146\154\157\157\162\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\162\157\165\156\144\000\376\003\000\000\002\376\002\000\000\010\103\137\162\157\165\156\144\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\141\142\163\000\376\003\000\000\002\376\002\000\000\007\103\137\146\141\142\163\000\376\003\000\000\002\376\001\000\000\002\001\157\160\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\165\137\151\137\146\063\062\166\145\143\164\157\162\137\162\145\146\000\376\003\000\000\002\376\002\000\000\025\103\137\165\142\137\151\137\146\063\062\166\145\143\164\157\162\137\162\145\146\000\376\003\000\000\002\376\001\000\000\003\001\141\143\143\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\165\137\151\137\146\066\064\166\145\143\164\157\162\137\162\145\146\000\376\003\000\000\002\376\002\000\000\025\103\137\165\142\137\151\137\146\066\064\166\145\143\164\157\162\137\162\145\146\000\376\003\000\000\002\376\001\000\000\003\001\141\143\143\376\377\016\376\377\016"));
lf[5]=C_h_intern(&lf[5],53, C_text("chicken.compiler.lfa2#perform-secondary-flow-analysis"));
lf[6]=C_h_intern(&lf[6],6, C_text("struct"));
lf[7]=C_h_intern(&lf[7],1, C_text("*"));
lf[8]=C_h_intern(&lf[8],31, C_text("chicken.compiler.support#db-get"));
lf[9]=C_h_intern(&lf[9],8, C_text("assigned"));
lf[10]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\005\001\161\165\157\164\145\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\165\156\144\145\146\151\156\145\144\376\003\000\000\002\376\001\000\000\020\001\043\043\143\157\162\145\043\160\162\151\155\151\164\151\166\145\376\003\000\000\002\376\001\000\000\015\001\043\043\143\157\162\145\043\154\141\155\142\144\141\376\377\016"));
lf[11]=C_h_intern(&lf[11],15, C_text("##core#variable"));
lf[12]=C_h_intern(&lf[12],38, C_text("chicken.compiler.support#variable-mark"));
lf[13]=C_h_intern(&lf[13],23, C_text("##compiler#always-bound"));
lf[14]=C_h_intern(&lf[14],6, C_text("global"));
lf[15]=C_h_intern(&lf[15],40, C_text("chicken.compiler.support#node-parameters"));
lf[16]=C_h_intern(&lf[16],35, C_text("chicken.compiler.support#node-class"));
lf[17]=C_h_intern(&lf[17],49, C_text("chicken.compiler.support#node-subexpressions-set!"));
lf[18]=C_h_intern(&lf[18],45, C_text("chicken.compiler.support#node-parameters-set!"));
lf[19]=C_h_intern(&lf[19],40, C_text("chicken.compiler.support#node-class-set!"));
lf[20]=C_h_intern(&lf[20],16, C_text("##core#undefined"));
lf[21]=C_h_intern(&lf[21],8, C_text("for-each"));
lf[22]=C_h_intern(&lf[22],20, C_text("scheme#string-append"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\061\000"));
lf[24]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\062\000"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\002\063\000"));
lf[26]=C_h_intern(&lf[26],29, C_text("chicken.compiler.support#bomb"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\066\142\141\144\040\156\165\155\142\145\162\040\157\146\040\141\162\147\165\155\145\156\164\163\040\164\157\040\145\170\164\151\156\147\165\151\163\150\145\144\040\043\043\143\157\162\145\043\151\156\154\151\156\145\000"));
lf[28]=C_h_intern(&lf[28],44, C_text("chicken.compiler.support#node-subexpressions"));
lf[29]=C_h_intern(&lf[29],5, C_text("foldr"));
lf[30]=C_h_intern(&lf[30],10, C_text("scheme#cdr"));
lf[31]=C_h_intern(&lf[31],11, C_text("scheme#cddr"));
lf[32]=C_h_intern(&lf[32],2, C_text("if"));
lf[33]=C_h_intern(&lf[33],11, C_text("##core#cond"));
lf[34]=C_h_intern(&lf[34],7, C_text("boolean"));
lf[35]=C_h_intern(&lf[35],13, C_text("scheme#append"));
lf[36]=C_h_intern(&lf[36],5, C_text("quote"));
lf[37]=C_h_intern(&lf[37],6, C_text("string"));
lf[38]=C_h_intern(&lf[38],7, C_text("keyword"));
lf[39]=C_h_intern(&lf[39],6, C_text("symbol"));
lf[40]=C_h_intern(&lf[40],7, C_text("integer"));
lf[41]=C_h_intern(&lf[41],6, C_text("fixnum"));
lf[42]=C_h_intern(&lf[42],6, C_text("bignum"));
lf[43]=C_h_intern(&lf[43],5, C_text("float"));
lf[44]=C_h_intern(&lf[44],6, C_text("ratnum"));
lf[45]=C_h_intern(&lf[45],7, C_text("cplxnum"));
lf[46]=C_h_intern(&lf[46],4, C_text("null"));
lf[47]=C_h_intern(&lf[47],4, C_text("list"));
lf[48]=C_h_intern(&lf[48],4, C_text("pair"));
lf[49]=C_h_intern(&lf[49],3, C_text("eof"));
lf[50]=C_h_intern(&lf[50],3, C_text("bwp"));
lf[51]=C_h_intern(&lf[51],6, C_text("vector"));
lf[52]=C_h_intern(&lf[52],4, C_text("char"));
lf[53]=C_h_intern(&lf[53],38, C_text("chicken.compiler.support#small-bignum?"));
lf[54]=C_h_intern(&lf[54],36, C_text("chicken.compiler.support#big-fixnum?"));
lf[55]=C_h_intern(&lf[55],24, C_text("chicken.keyword#keyword?"));
lf[56]=C_h_intern(&lf[56],3, C_text("let"));
lf[57]=C_h_intern(&lf[57],13, C_text("##core#lambda"));
lf[58]=C_h_intern(&lf[58],20, C_text("##core#direct_lambda"));
lf[59]=C_h_intern(&lf[59],9, C_text("procedure"));
lf[60]=C_h_intern(&lf[60],4, C_text("set!"));
lf[61]=C_h_intern(&lf[61],11, C_text("##core#set!"));
lf[62]=C_h_intern(&lf[62],9, C_text("undefined"));
lf[63]=C_h_intern(&lf[63],16, C_text("##core#primitive"));
lf[64]=C_h_intern(&lf[64],13, C_text("##core#inline"));
lf[65]=C_h_intern(&lf[65],22, C_text("##core#inline_allocate"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\151\137\143\150\145\143\153\137\143\154\157\163\165\162\145\000\376\003\000\000\002\376\001\000\000\011\001\160\162\157\143\145\144\165\162\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\020\103\137\151\137\143\150\145\143\153\137\145\170\141\143\164\000\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\003\000\000\002\376\001\000\000\007\001\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\006\001\162\141\164\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\151\137\143\150\145\143\153\137\151\156\145\170\141\143\164\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\156\165\155\142\145\162\000\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\007\001\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\003\000\000\002\376\001\000\000\006\001\162\141\164\156\165\155\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\003\000\000\002\376\001\000\000\007\001\143\160\154\170\156\165\155\376\003\000\000\002\376\001\000\000\006\001\156\165\155\142\145\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\163\164\162\151\156\147\000\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\025\103\137\151\137\143\150\145\143\153\137\142\171\164\145\166\145\143\164\157\162\000\376\003\000\000\002\376\001\000\000\012\001\142\171\164\145\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\163\171\155\142\157\154\000\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\151\137\143\150\145\143\153\137\153\145\171\167\157\162\144\000\376\003\000\000\002\376\001\000\000\007\001\153\145\171\167\157\162\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\017\103\137\151\137\143\150\145\143\153\137\154\151\163\164\000\376\003\000\000\002\376\001\000\000\004\001\156\165\154\154\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\017\103\137\151\137\143\150\145\143\153\137\160\141\151\162\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\154\157\143\141\164\151\166\145\000\376\003\000\000\002\376\001\000\000\010\001\154\157\143\141\164\151\166\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\151\137\143\150\145\143\153\137\142\157\157\154\145\141\156\000\376\003\000\000\002\376\001\000\000\007\001\142\157\157\154\145\141\156\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\166\145\143\164\157\162\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\024\103\137\151\137\143\150\145\143\153\137\163\164\162\165\143\164\165\162\145\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\017\103\137\151\137\143\150\145\143\153\137\143\150\141\162\000\376\003\000\000\002\376\001\000\000\004\001\143\150\141\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\024\103\137\151\137\143\150\145\143\153\137\143\154\157\163\165\162\145\137\062\000\376\003\000\000\002\376\001\000\000\011\001\160\162\157\143\145\144\165\162\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\151\137\143\150\145\143\153\137\145\170\141\143\164\137\062\000\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\003\000\000\002\376\001\000\000\007\001\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\006\001\162\141\164\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\024\103\137\151\137\143\150\145\143\153\137\151\156\145\170\141\143\164\137\062\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\156\165\155\142\145\162\137\062\000\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\007\001\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\003\000\000\002\376\001\000\000\006\001\162\141\164\156\165\155\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\003\000\000\002\376\001\000\000\007\001\143\160\154\170\156\165\155\376\003\000\000\002\376\001\000\000\006\001\156\165\155\142\145\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\163\164\162\151\156\147\137\062\000\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\027\103\137\151\137\143\150\145\143\153\137\142\171\164\145\166\145\143\164\157\162\137\062\000\376\003\000\000\002\376\001\000\000\012\001\142\171\164\145\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\163\171\155\142\157\154\137\062\000\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\024\103\137\151\137\143\150\145\143\153\137\153\145\171\167\157\162\144\137\062\000\376\003\000\000\002\376\001\000\000\007\001\153\145\171\167\157\162\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\154\151\163\164\137\062\000\376\003\000\000\002\376\001\000\000\004\001\156\165\154\154\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\160\141\151\162\137\062\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\025\103\137\151\137\143\150\145\143\153\137\154\157\143\141\164\151\166\145\137\062\000\376\003\000\000\002\376\001\000\000\010\001\154\157\143\141\164\151\166\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\024\103\137\151\137\143\150\145\143\153\137\142\157\157\154\145\141\156\137\062\000\376\003\000\000\002\376\001\000\000\007\001\142\157\157\154\145\141\156\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\151\137\143\150\145\143\153\137\166\145\143\164\157\162\137\062\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\151\137\143\150\145\143\153\137\163\164\162\165\143\164\165\162\145\137\062\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\151\137\143\150\145\143\153\137\143\150\141\162\137\062\000\376\003\000\000\002\376\001\000\000\004\001\143\150\141\162\376\377\016\376\377\016"));
lf[67]=C_h_intern(&lf[67],31, C_text("chicken.compiler.support#unsafe"));
lf[68]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\156\157\157\160\000"));
lf[69]=C_h_intern(&lf[69],8, C_text("*struct*"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\156\157\157\160\000"));
lf[71]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\156\157\157\160\000"));
lf[72]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\156\157\157\160\000"));
lf[73]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\146\151\170\156\165\155\137\141\162\147\165\155\145\156\164\160\000\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\036\103\137\151\137\146\157\162\145\151\147\156\137\151\156\164\145\147\145\162\137\141\162\147\165\155\145\156\164\160\000\376\003\000\000\002\376\001\000\000\007\001\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\033\103\137\151\137\146\157\162\145\151\147\156\137\143\150\141\162\137\141\162\147\165\155\145\156\164\160\000\376\003\000\000\002\376\001\000\000\004\001\143\150\141\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\146\154\157\156\165\155\137\141\162\147\165\155\145\156\164\160\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\163\164\162\151\156\147\137\141\162\147\165\155\145\156\164\160\000\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\035\103\137\151\137\146\157\162\145\151\147\156\137\163\171\155\142\157\154\137\141\162\147\165\155\145\156\164\160\000\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\377\016"));
lf[74]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\151\137\143\154\157\163\165\162\145\160\000\376\003\000\000\002\376\001\000\000\011\001\160\162\157\143\145\144\165\162\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\012\103\137\146\151\170\156\165\155\160\000\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\012\103\137\142\151\147\156\165\155\160\000\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\151\137\145\170\141\143\164\137\151\156\164\145\147\145\162\160\000\376\003\000\000\002\376\001\000\000\007\001\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\151\137\146\154\157\156\165\155\160\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\151\137\156\165\155\142\145\162\160\000\376\003\000\000\002\376\001\000\000\006\001\156\165\155\142\145\162\376\003\000\000\002\376\001\000\000\006\001\146\151\170\156\165\155\376\003\000\000\002\376\001\000\000\007\001\151\156\164\145\147\145\162\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\003\000\000\002\376\001\000\000\006\001\162\141\164\156\165\155\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\003\000\000\002\376\001\000\000\007\001\143\160\154\170\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\151\137\162\141\164\156\165\155\160\000\376\003\000\000\002\376\001\000\000\006\001\162\141\164\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\151\137\143\160\154\170\156\165\155\160\000\376\003\000\000\002\376\001\000\000\007\001\143\160\154\170\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\012\103\137\163\164\162\151\156\147\160\000\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\142\171\164\145\166\145\143\164\157\162\160\000\376\003\000\000\002\376\001\000\000\012\001\142\171\164\145\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\151\137\153\145\171\167\157\162\144\160\000\376\003\000\000\002\376\001\000\000\007\001\153\145\171\167\157\162\144\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\151\137\163\171\155\142\157\154\160\000\376\003\000\000\002\376\001\000\000\006\001\163\171\155\142\157\154\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\012\103\137\151\137\154\151\163\164\160\000\376\003\000\000\002\376\001\000\000\004\001\154\151\163\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\012\103\137\151\137\160\141\151\162\160\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\154\157\143\141\164\151\166\145\160\000\376\003\000\000\002\376\001\000\000\010\001\154\157\143\141\164\151\166\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\013\103\137\142\157\157\154\145\141\156\160\000\376\003\000\000\002\376\001\000\000\007\001\142\157\157\154\145\141\156\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\151\137\166\145\143\164\157\162\160\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\163\164\162\165\143\164\165\162\145\160\000\376\003\000\000\002\376\001\000\000\006\001\163\164\162\165\143\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\017\103\137\151\137\163\164\162\165\143\164\165\162\145\160\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\010\103\137\143\150\141\162\160\000\376\003\000\000\002\376\001\000\000\004\001\143\150\141\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\012\103\137\151\137\160\157\162\164\160\000\376\003\000\000\002\376\001\000\000\004\001\160\157\162\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\012\103\137\151\137\156\165\154\154\160\000\376\003\000\000\002\376\001\000\000\004\001\156\165\154\154\376\377\016\376\377\016"));
lf[75]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\164\162\165\145\000"));
lf[76]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\164\162\165\145\000"));
lf[77]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\011\103\137\151\137\164\162\165\145\000"));
lf[78]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\061\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\062\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\063\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\064\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\065\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\066\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\067\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\162\145\143\157\162\144\070\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\141\137\151\137\162\145\143\157\162\144\000\376\003\000\000\002\376\001\000\000\010\001\052\163\164\162\165\143\164\052\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\141\137\151\137\163\164\162\151\156\147\000\376\003\000\000\002\376\001\000\000\006\001\163\164\162\151\156\147\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\013\103\137\141\137\151\137\160\157\162\164\000\376\003\000\000\002\376\001\000\000\004\001\160\157\162\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\061\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\062\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\063\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\064\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\065\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\066\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\067\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\166\145\143\164\157\162\070\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\011\103\137\141\137\160\141\151\162\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\142\171\164\145\166\145\143\164\157\162\000\376\003\000\000\002\376\001\000\000\012\001\142\171\164\145\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\024\103\137\141\137\151\137\155\141\153\145\137\154\157\143\141\164\151\166\145\000\376\003\000\000\002\376\001\000\000\010\001\154\157\143\141\164\151\166\145\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\141\137\151\137\166\145\143\164\157\162\000\376\003\000\000\002\376\001\000\000\006\001\166\145\143\164\157\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\061\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\062\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\063\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\064\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\065\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\066\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\067\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\014\103\137\141\137\151\137\154\151\163\164\070\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\013\103\137\141\137\151\137\143\157\156\163\000\376\003\000\000\002\376\001\000\000\004\001\160\141\151\162\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\015\103\137\141\137\151\137\146\154\157\156\165\155\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\151\170\137\164\157\137\146\154\157\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\142\151\147\137\164\157\137\146\154\157\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\151\170\137\164\157\137\142\151\147\000\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\142\151\147\156\165\155\060\000\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\142\151\147\156\165\155\061\000\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\016\103\137\141\137\151\137\142\151\147\156\165\155\062\000\376\003\000\000\002\376\001\000\000\006\001\142\151\147\156\165\155\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\141\142\163\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\143\157\163\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\143\157\163\150\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\045\103\137\141\137\151\137\146\154\157\156\165\155\137\141\143\164\165\141\154\137\161\165\157\164\151\145\156\164\137\143\150\145\143\153\145\144\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\163\151\156\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\163\151\156\150\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\062\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\141\164\141\156\150\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\025\103\137\141\137\151\137\146\154\157\156\165\155\137\143\145\151\154\151\156\147\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\143\157\163\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\143\157\163\150\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\030\103\137\141\137\151\137\146\154\157\156\165\155\137\144\151\146\146\145\162\145\156\143\145\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\145\170\160\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\145\170\160\164\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\146\154\157\157\162\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\147\143\144\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\154\157\147\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\034\103\137\141\137\151\137\146\154\157\156\165\155\137\155\157\144\165\154\157\137\143\150\145\143\153\145\144\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\024\103\137\141\137\151\137\146\154\157\156\165\155\137\156\145\147\141\164\145\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\160\154\165\163\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\036\103\137\141\137\151\137\146\154\157\156\165\155\137\161\165\157\164\151\145\156\164\137\143\150\145\143\153\145\144\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\151\137\146\154\157\156\165\155\137\161\165\157\164\151\145\156\164\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\037\103\137\141\137\151\137\146\154\157\156\165\155\137\162\145\155\141\151\156\144\145\162\137\143\150\145\143\153\145\144\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\162\157\165\156\144\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\032\103\137\141\137\151\137\146\154\157\156\165\155\137\162\157\165\156\144\137\160\162\157\160\145\162\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\163\151\156\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\163\151\156\150\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\163\161\162\164\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\021\103\137\141\137\151\137\146\154\157\156\165\155\137\164\141\156\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\022\103\137\141\137\151\137\146\154\157\156\165\155\137\164\141\156\150\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\023\103\137\141\137\151\137\146\154\157\156\165\155\137\164\151\155\145\163\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\032\103\137\141\137\151\137\146\154\157\156\165\155\137\155\165\154\164\151\160\154\171\137\141\144\144\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\151\137\146\154\157\156\165\155\137\164\162\165\156\143\141\164\145\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\165\137\151\137\146\066\064\166\145\143\164\157\162\137\162\145\146\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\003\000\000\002\376\003\000\000\002\376\002\000\000\026\103\137\141\137\165\137\151\137\146\063\062\166\145\143\164\157\162\137\162\145\146\000\376\003\000\000\002\376\001\000\000\005\001\146\154\157\141\164\376\377\016\376\377\016"));
lf[79]=C_h_intern(&lf[79],21, C_text("##sys#standard-output"));
lf[80]=C_h_intern(&lf[80],6, C_text("printf"));
lf[81]=C_h_intern(&lf[81],18, C_text("##sys#write-char-0"));
lf[82]=C_h_intern(&lf[82],11, C_text("##sys#print"));
lf[83]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\072\011\000"));
lf[84]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\040\040\000"));
lf[85]=C_h_intern(&lf[85],18, C_text("chicken.base#print"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\030\145\154\151\155\151\156\141\164\145\144\040\164\171\160\145\040\143\150\145\143\153\163\072\000"));
lf[87]=C_h_intern(&lf[87],46, C_text("chicken.compiler.support#with-debugging-output"));
lf[88]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\170\376\003\000\000\002\376\001\000\000\001\001\157\376\377\016"));
lf[89]=C_h_intern(&lf[89],38, C_text("chicken.compiler.lfa2#perform-unboxing"));
lf[90]=C_h_intern(&lf[90],34, C_text("chicken.compiler.support#make-node"));
lf[91]=C_h_intern(&lf[91],12, C_text("##core#float"));
lf[92]=C_h_intern(&lf[92],21, C_text("##core#float-variable"));
lf[93]=C_h_intern(&lf[93],18, C_text("##core#unbox_float"));
lf[94]=C_h_intern(&lf[94],2, C_text("op"));
lf[95]=C_h_intern(&lf[95],3, C_text("map"));
lf[96]=C_h_intern(&lf[96],16, C_text("##core#box_float"));
lf[97]=C_h_intern(&lf[97],16, C_text("##core#let_float"));
lf[98]=C_h_intern(&lf[98],4, C_text("pred"));
lf[99]=C_h_intern(&lf[99],3, C_text("acc"));
lf[100]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\071\156\165\155\142\145\162\040\157\146\040\151\156\154\151\156\145\040\157\160\145\162\141\164\151\157\156\163\040\162\145\160\154\141\143\145\144\040\167\151\164\150\040\165\156\142\157\170\145\144\040\157\156\145\163\072\040\000"));
lf[101]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\044\156\165\155\142\145\162\040\157\146\040\165\156\142\157\170\145\144\040\146\154\157\141\164\040\166\141\162\151\141\142\154\145\163\072\040\000"));
lf[102]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\001\001\170\376\003\000\000\002\376\001\000\000\001\001\157\376\377\016"));
C_register_lf2(lf,103,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1461,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[183] = {
{C_text("f5403:lfa2_2escm"),(void*)f5403},
{C_text("f5461:lfa2_2escm"),(void*)f5461},
{C_text("f5482:lfa2_2escm"),(void*)f5482},
{C_text("f5494:lfa2_2escm"),(void*)f5494},
{C_text("f5501:lfa2_2escm"),(void*)f5501},
{C_text("f_1461:lfa2_2escm"),(void*)f_1461},
{C_text("f_1464:lfa2_2escm"),(void*)f_1464},
{C_text("f_1467:lfa2_2escm"),(void*)f_1467},
{C_text("f_1470:lfa2_2escm"),(void*)f_1470},
{C_text("f_2090:lfa2_2escm"),(void*)f_2090},
{C_text("f_2098:lfa2_2escm"),(void*)f_2098},
{C_text("f_2119:lfa2_2escm"),(void*)f_2119},
{C_text("f_2134:lfa2_2escm"),(void*)f_2134},
{C_text("f_2150:lfa2_2escm"),(void*)f_2150},
{C_text("f_2168:lfa2_2escm"),(void*)f_2168},
{C_text("f_2180:lfa2_2escm"),(void*)f_2180},
{C_text("f_2684:lfa2_2escm"),(void*)f_2684},
{C_text("f_2690:lfa2_2escm"),(void*)f_2690},
{C_text("f_2755:lfa2_2escm"),(void*)f_2755},
{C_text("f_2771:lfa2_2escm"),(void*)f_2771},
{C_text("f_2783:lfa2_2escm"),(void*)f_2783},
{C_text("f_2786:lfa2_2escm"),(void*)f_2786},
{C_text("f_2892:lfa2_2escm"),(void*)f_2892},
{C_text("f_2943:lfa2_2escm"),(void*)f_2943},
{C_text("f_2969:lfa2_2escm"),(void*)f_2969},
{C_text("f_2975:lfa2_2escm"),(void*)f_2975},
{C_text("f_2980:lfa2_2escm"),(void*)f_2980},
{C_text("f_3006:lfa2_2escm"),(void*)f_3006},
{C_text("f_3010:lfa2_2escm"),(void*)f_3010},
{C_text("f_3014:lfa2_2escm"),(void*)f_3014},
{C_text("f_3016:lfa2_2escm"),(void*)f_3016},
{C_text("f_3020:lfa2_2escm"),(void*)f_3020},
{C_text("f_3023:lfa2_2escm"),(void*)f_3023},
{C_text("f_3026:lfa2_2escm"),(void*)f_3026},
{C_text("f_3031:lfa2_2escm"),(void*)f_3031},
{C_text("f_3038:lfa2_2escm"),(void*)f_3038},
{C_text("f_3039:lfa2_2escm"),(void*)f_3039},
{C_text("f_3046:lfa2_2escm"),(void*)f_3046},
{C_text("f_3056:lfa2_2escm"),(void*)f_3056},
{C_text("f_3073:lfa2_2escm"),(void*)f_3073},
{C_text("f_3080:lfa2_2escm"),(void*)f_3080},
{C_text("f_3108:lfa2_2escm"),(void*)f_3108},
{C_text("f_3110:lfa2_2escm"),(void*)f_3110},
{C_text("f_3120:lfa2_2escm"),(void*)f_3120},
{C_text("f_3139:lfa2_2escm"),(void*)f_3139},
{C_text("f_3156:lfa2_2escm"),(void*)f_3156},
{C_text("f_3202:lfa2_2escm"),(void*)f_3202},
{C_text("f_3208:lfa2_2escm"),(void*)f_3208},
{C_text("f_3213:lfa2_2escm"),(void*)f_3213},
{C_text("f_3215:lfa2_2escm"),(void*)f_3215},
{C_text("f_3225:lfa2_2escm"),(void*)f_3225},
{C_text("f_3232:lfa2_2escm"),(void*)f_3232},
{C_text("f_3236:lfa2_2escm"),(void*)f_3236},
{C_text("f_3244:lfa2_2escm"),(void*)f_3244},
{C_text("f_3256:lfa2_2escm"),(void*)f_3256},
{C_text("f_3273:lfa2_2escm"),(void*)f_3273},
{C_text("f_3281:lfa2_2escm"),(void*)f_3281},
{C_text("f_3287:lfa2_2escm"),(void*)f_3287},
{C_text("f_3293:lfa2_2escm"),(void*)f_3293},
{C_text("f_3299:lfa2_2escm"),(void*)f_3299},
{C_text("f_3303:lfa2_2escm"),(void*)f_3303},
{C_text("f_3306:lfa2_2escm"),(void*)f_3306},
{C_text("f_3309:lfa2_2escm"),(void*)f_3309},
{C_text("f_3318:lfa2_2escm"),(void*)f_3318},
{C_text("f_3321:lfa2_2escm"),(void*)f_3321},
{C_text("f_3368:lfa2_2escm"),(void*)f_3368},
{C_text("f_3371:lfa2_2escm"),(void*)f_3371},
{C_text("f_3378:lfa2_2escm"),(void*)f_3378},
{C_text("f_3382:lfa2_2escm"),(void*)f_3382},
{C_text("f_3400:lfa2_2escm"),(void*)f_3400},
{C_text("f_3404:lfa2_2escm"),(void*)f_3404},
{C_text("f_3412:lfa2_2escm"),(void*)f_3412},
{C_text("f_3424:lfa2_2escm"),(void*)f_3424},
{C_text("f_3468:lfa2_2escm"),(void*)f_3468},
{C_text("f_3471:lfa2_2escm"),(void*)f_3471},
{C_text("f_3474:lfa2_2escm"),(void*)f_3474},
{C_text("f_3485:lfa2_2escm"),(void*)f_3485},
{C_text("f_3492:lfa2_2escm"),(void*)f_3492},
{C_text("f_3506:lfa2_2escm"),(void*)f_3506},
{C_text("f_3522:lfa2_2escm"),(void*)f_3522},
{C_text("f_3530:lfa2_2escm"),(void*)f_3530},
{C_text("f_3536:lfa2_2escm"),(void*)f_3536},
{C_text("f_3578:lfa2_2escm"),(void*)f_3578},
{C_text("f_3597:lfa2_2escm"),(void*)f_3597},
{C_text("f_3600:lfa2_2escm"),(void*)f_3600},
{C_text("f_3603:lfa2_2escm"),(void*)f_3603},
{C_text("f_3614:lfa2_2escm"),(void*)f_3614},
{C_text("f_3628:lfa2_2escm"),(void*)f_3628},
{C_text("f_3653:lfa2_2escm"),(void*)f_3653},
{C_text("f_3657:lfa2_2escm"),(void*)f_3657},
{C_text("f_3669:lfa2_2escm"),(void*)f_3669},
{C_text("f_3676:lfa2_2escm"),(void*)f_3676},
{C_text("f_3680:lfa2_2escm"),(void*)f_3680},
{C_text("f_3683:lfa2_2escm"),(void*)f_3683},
{C_text("f_3698:lfa2_2escm"),(void*)f_3698},
{C_text("f_3724:lfa2_2escm"),(void*)f_3724},
{C_text("f_3744:lfa2_2escm"),(void*)f_3744},
{C_text("f_3806:lfa2_2escm"),(void*)f_3806},
{C_text("f_3813:lfa2_2escm"),(void*)f_3813},
{C_text("f_3816:lfa2_2escm"),(void*)f_3816},
{C_text("f_3822:lfa2_2escm"),(void*)f_3822},
{C_text("f_3825:lfa2_2escm"),(void*)f_3825},
{C_text("f_3832:lfa2_2escm"),(void*)f_3832},
{C_text("f_3836:lfa2_2escm"),(void*)f_3836},
{C_text("f_3840:lfa2_2escm"),(void*)f_3840},
{C_text("f_3854:lfa2_2escm"),(void*)f_3854},
{C_text("f_3908:lfa2_2escm"),(void*)f_3908},
{C_text("f_3916:lfa2_2escm"),(void*)f_3916},
{C_text("f_3931:lfa2_2escm"),(void*)f_3931},
{C_text("f_3934:lfa2_2escm"),(void*)f_3934},
{C_text("f_3937:lfa2_2escm"),(void*)f_3937},
{C_text("f_3946:lfa2_2escm"),(void*)f_3946},
{C_text("f_3972:lfa2_2escm"),(void*)f_3972},
{C_text("f_3992:lfa2_2escm"),(void*)f_3992},
{C_text("f_4050:lfa2_2escm"),(void*)f_4050},
{C_text("f_4060:lfa2_2escm"),(void*)f_4060},
{C_text("f_4076:lfa2_2escm"),(void*)f_4076},
{C_text("f_4092:lfa2_2escm"),(void*)f_4092},
{C_text("f_4123:lfa2_2escm"),(void*)f_4123},
{C_text("f_4133:lfa2_2escm"),(void*)f_4133},
{C_text("f_4149:lfa2_2escm"),(void*)f_4149},
{C_text("f_4159:lfa2_2escm"),(void*)f_4159},
{C_text("f_4161:lfa2_2escm"),(void*)f_4161},
{C_text("f_4171:lfa2_2escm"),(void*)f_4171},
{C_text("f_4223:lfa2_2escm"),(void*)f_4223},
{C_text("f_4226:lfa2_2escm"),(void*)f_4226},
{C_text("f_4234:lfa2_2escm"),(void*)f_4234},
{C_text("f_4238:lfa2_2escm"),(void*)f_4238},
{C_text("f_4246:lfa2_2escm"),(void*)f_4246},
{C_text("f_4249:lfa2_2escm"),(void*)f_4249},
{C_text("f_4252:lfa2_2escm"),(void*)f_4252},
{C_text("f_4255:lfa2_2escm"),(void*)f_4255},
{C_text("f_4272:lfa2_2escm"),(void*)f_4272},
{C_text("f_4282:lfa2_2escm"),(void*)f_4282},
{C_text("f_4295:lfa2_2escm"),(void*)f_4295},
{C_text("f_4299:lfa2_2escm"),(void*)f_4299},
{C_text("f_4301:lfa2_2escm"),(void*)f_4301},
{C_text("f_4305:lfa2_2escm"),(void*)f_4305},
{C_text("f_4308:lfa2_2escm"),(void*)f_4308},
{C_text("f_4311:lfa2_2escm"),(void*)f_4311},
{C_text("f_4339:lfa2_2escm"),(void*)f_4339},
{C_text("f_4376:lfa2_2escm"),(void*)f_4376},
{C_text("f_4405:lfa2_2escm"),(void*)f_4405},
{C_text("f_4407:lfa2_2escm"),(void*)f_4407},
{C_text("f_4432:lfa2_2escm"),(void*)f_4432},
{C_text("f_4456:lfa2_2escm"),(void*)f_4456},
{C_text("f_4466:lfa2_2escm"),(void*)f_4466},
{C_text("f_4468:lfa2_2escm"),(void*)f_4468},
{C_text("f_4493:lfa2_2escm"),(void*)f_4493},
{C_text("f_4515:lfa2_2escm"),(void*)f_4515},
{C_text("f_4528:lfa2_2escm"),(void*)f_4528},
{C_text("f_4532:lfa2_2escm"),(void*)f_4532},
{C_text("f_4535:lfa2_2escm"),(void*)f_4535},
{C_text("f_4538:lfa2_2escm"),(void*)f_4538},
{C_text("f_4547:lfa2_2escm"),(void*)f_4547},
{C_text("f_4561:lfa2_2escm"),(void*)f_4561},
{C_text("f_4584:lfa2_2escm"),(void*)f_4584},
{C_text("f_4602:lfa2_2escm"),(void*)f_4602},
{C_text("f_4606:lfa2_2escm"),(void*)f_4606},
{C_text("f_4623:lfa2_2escm"),(void*)f_4623},
{C_text("f_4625:lfa2_2escm"),(void*)f_4625},
{C_text("f_4650:lfa2_2escm"),(void*)f_4650},
{C_text("f_4673:lfa2_2escm"),(void*)f_4673},
{C_text("f_4685:lfa2_2escm"),(void*)f_4685},
{C_text("f_4717:lfa2_2escm"),(void*)f_4717},
{C_text("f_4719:lfa2_2escm"),(void*)f_4719},
{C_text("f_4744:lfa2_2escm"),(void*)f_4744},
{C_text("f_4770:lfa2_2escm"),(void*)f_4770},
{C_text("f_4772:lfa2_2escm"),(void*)f_4772},
{C_text("f_4797:lfa2_2escm"),(void*)f_4797},
{C_text("f_4821:lfa2_2escm"),(void*)f_4821},
{C_text("f_4823:lfa2_2escm"),(void*)f_4823},
{C_text("f_4848:lfa2_2escm"),(void*)f_4848},
{C_text("f_4869:lfa2_2escm"),(void*)f_4869},
{C_text("f_4872:lfa2_2escm"),(void*)f_4872},
{C_text("f_4874:lfa2_2escm"),(void*)f_4874},
{C_text("f_4881:lfa2_2escm"),(void*)f_4881},
{C_text("f_4884:lfa2_2escm"),(void*)f_4884},
{C_text("f_4887:lfa2_2escm"),(void*)f_4887},
{C_text("f_4893:lfa2_2escm"),(void*)f_4893},
{C_text("f_4896:lfa2_2escm"),(void*)f_4896},
{C_text("toplevel:lfa2_2escm"),(void*)C_lfa2_toplevel},
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
o|hiding unexported module binding: chicken.compiler.lfa2#partition 
o|hiding unexported module binding: chicken.compiler.lfa2#span 
o|hiding unexported module binding: chicken.compiler.lfa2#take 
o|hiding unexported module binding: chicken.compiler.lfa2#drop 
o|hiding unexported module binding: chicken.compiler.lfa2#split-at 
o|hiding unexported module binding: chicken.compiler.lfa2#append-map 
o|hiding unexported module binding: chicken.compiler.lfa2#every 
o|hiding unexported module binding: chicken.compiler.lfa2#any 
o|hiding unexported module binding: chicken.compiler.lfa2#cons* 
o|hiding unexported module binding: chicken.compiler.lfa2#concatenate 
o|hiding unexported module binding: chicken.compiler.lfa2#delete 
o|hiding unexported module binding: chicken.compiler.lfa2#first 
o|hiding unexported module binding: chicken.compiler.lfa2#second 
o|hiding unexported module binding: chicken.compiler.lfa2#third 
o|hiding unexported module binding: chicken.compiler.lfa2#fourth 
o|hiding unexported module binding: chicken.compiler.lfa2#fifth 
o|hiding unexported module binding: chicken.compiler.lfa2#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.lfa2#alist-cons 
o|hiding unexported module binding: chicken.compiler.lfa2#filter 
o|hiding unexported module binding: chicken.compiler.lfa2#filter-map 
o|hiding unexported module binding: chicken.compiler.lfa2#remove 
o|hiding unexported module binding: chicken.compiler.lfa2#unzip1 
o|hiding unexported module binding: chicken.compiler.lfa2#last 
o|hiding unexported module binding: chicken.compiler.lfa2#list-index 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#list-tabulate 
o|hiding unexported module binding: chicken.compiler.lfa2#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.lfa2#length+ 
o|hiding unexported module binding: chicken.compiler.lfa2#find 
o|hiding unexported module binding: chicken.compiler.lfa2#find-tail 
o|hiding unexported module binding: chicken.compiler.lfa2#iota 
o|hiding unexported module binding: chicken.compiler.lfa2#make-list 
o|hiding unexported module binding: chicken.compiler.lfa2#posq 
o|hiding unexported module binding: chicken.compiler.lfa2#posv 
o|hiding unexported module binding: chicken.compiler.lfa2#+type-check-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+predicate-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+constructor-map+ 
o|hiding unexported module binding: chicken.compiler.lfa2#+unboxed-map+ 
S|applied compiler syntax:
S|  chicken.format#printf		3
S|  scheme#for-each		4
S|  chicken.base#foldl		3
S|  scheme#map		9
S|  chicken.base#foldr		3
o|eliminated procedure checks: 71 
o|specializations:
o|  3 (##sys#check-output-port * * *)
o|  22 (scheme#eqv? * (or eof null fixnum char boolean symbol keyword))
o|  1 (scheme#caar (pair pair *))
o|  3 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#memq * list)
o|  3 (chicken.base#add1 *)
o|  1 (scheme#eqv? * *)
o|  3 (##sys#check-list (or pair list) *)
o|  28 (scheme#cdr pair)
o|  13 (scheme#car pair)
(o e)|safe calls: 474 
o|safe globals: (chicken.compiler.lfa2#perform-unboxing chicken.compiler.lfa2#perform-secondary-flow-analysis chicken.compiler.lfa2#+unboxed-map+ chicken.compiler.lfa2#+constructor-map+ chicken.compiler.lfa2#+ffi-type-check-map+ chicken.compiler.lfa2#+predicate-map+ chicken.compiler.lfa2#+type-check-map+ chicken.compiler.lfa2#posv chicken.compiler.lfa2#posq chicken.compiler.lfa2#make-list chicken.compiler.lfa2#iota chicken.compiler.lfa2#find-tail chicken.compiler.lfa2#find chicken.compiler.lfa2#length+ chicken.compiler.lfa2#lset=/eq? chicken.compiler.lfa2#lset<=/eq? chicken.compiler.lfa2#list-tabulate chicken.compiler.lfa2#lset-intersection/eq? chicken.compiler.lfa2#lset-union/eq? chicken.compiler.lfa2#lset-difference/eq? chicken.compiler.lfa2#lset-adjoin/eq? chicken.compiler.lfa2#list-index chicken.compiler.lfa2#last chicken.compiler.lfa2#unzip1 chicken.compiler.lfa2#remove chicken.compiler.lfa2#filter-map chicken.compiler.lfa2#filter chicken.compiler.lfa2#alist-cons chicken.compiler.lfa2#delete-duplicates chicken.compiler.lfa2#fifth chicken.compiler.lfa2#fourth chicken.compiler.lfa2#third chicken.compiler.lfa2#second chicken.compiler.lfa2#first chicken.compiler.lfa2#delete chicken.compiler.lfa2#concatenate chicken.compiler.lfa2#cons* chicken.compiler.lfa2#any chicken.compiler.lfa2#every chicken.compiler.lfa2#append-map chicken.compiler.lfa2#split-at chicken.compiler.lfa2#drop chicken.compiler.lfa2#take chicken.compiler.lfa2#span chicken.compiler.lfa2#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#append-map 
o|inlining procedure: k1852 
o|inlining procedure: k1852 
o|inlining procedure: k1883 
o|inlining procedure: k1883 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#delete-duplicates 
o|inlining procedure: k2100 
o|inlining procedure: k2100 
o|inlining procedure: k2092 
o|inlining procedure: k2092 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset-intersection/eq? 
o|inlining procedure: k2491 
o|inlining procedure: k2491 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#lset=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#length+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#make-list 
o|inlining procedure: k2692 
o|inlining procedure: k2692 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#posv 
o|inlining procedure: k2894 
o|inlining procedure: k2894 
o|inlining procedure: k2903 
o|inlining procedure: k2915 
o|inlining procedure: k2915 
o|inlining procedure: k2903 
o|inlining procedure: k2948 
o|contracted procedure: "(lfa2.scm:287) g593594" 
o|inlining procedure: k2948 
o|substituted constant variable: a2981 
o|inlining procedure: k2982 
o|inlining procedure: k2982 
o|inlining procedure: k2997 
o|inlining procedure: k2997 
o|inlining procedure: "(lfa2.scm:298) chicken.compiler.lfa2#first" 
o|inlining procedure: k3041 
o|inlining procedure: k3041 
o|inlining procedure: k3057 
o|inlining procedure: k3057 
o|inlining procedure: k3078 
o|inlining procedure: k3078 
o|inlining procedure: k3090 
o|inlining procedure: k3090 
o|substituted constant variable: a3100 
o|substituted constant variable: a3102 
o|substituted constant variable: a3104 
o|inlining procedure: k3112 
o|inlining procedure: k3112 
o|inlining procedure: "(lfa2.scm:309) chicken.compiler.lfa2#first" 
o|contracted procedure: "(lfa2.scm:349) chicken.compiler.lfa2#remove" 
o|merged explicitly consed rest parameter: rest666669 
o|inlining procedure: k3233 
o|inlining procedure: k3233 
o|inlining procedure: "(lfa2.scm:353) chicken.compiler.lfa2#first" 
o|consed rest parameter at call site: "(lfa2.scm:358) count-floatvar559" 3 
o|consed rest parameter at call site: "(lfa2.scm:359) count-floatvar559" 3 
o|consed rest parameter at call site: "(lfa2.scm:360) count-floatvar559" 3 
o|inlining procedure: k3310 
o|contracted procedure: "(lfa2.scm:372) vartype555" 
o|inlining procedure: k3146 
o|inlining procedure: k3146 
o|inlining procedure: k3158 
o|inlining procedure: k3158 
o|inlining procedure: "(lfa2.scm:372) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:370) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:369) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:368) chicken.compiler.lfa2#first" 
o|inlining procedure: k3310 
o|inlining procedure: "(lfa2.scm:383) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:382) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:380) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:379) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:377) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:376) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:374) chicken.compiler.lfa2#first" 
o|inlining procedure: k3441 
o|contracted procedure: "(lfa2.scm:384) constant-result548" 
o|inlining procedure: k2760 
o|inlining procedure: k2760 
o|inlining procedure: k2772 
o|inlining procedure: k2772 
o|inlining procedure: k2787 
o|inlining procedure: k2787 
o|inlining procedure: k2799 
o|inlining procedure: k2799 
o|inlining procedure: k2811 
o|inlining procedure: k2811 
o|inlining procedure: k2823 
o|inlining procedure: k2823 
o|inlining procedure: k2835 
o|inlining procedure: k2835 
o|inlining procedure: k2847 
o|inlining procedure: k2847 
o|inlining procedure: k2859 
o|inlining procedure: k2859 
o|inlining procedure: "(lfa2.scm:384) chicken.compiler.lfa2#first" 
o|inlining procedure: k3441 
o|inlining procedure: k3487 
o|inlining procedure: "(lfa2.scm:403) chicken.compiler.lfa2#first" 
o|inlining procedure: k3487 
o|inlining procedure: k3510 
o|inlining procedure: "(lfa2.scm:402) chicken.compiler.lfa2#first" 
o|inlining procedure: k3510 
o|inlining procedure: "(lfa2.scm:396) chicken.compiler.lfa2#second" 
o|inlining procedure: k3554 
o|inlining procedure: k3554 
o|inlining procedure: "(lfa2.scm:387) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:386) chicken.compiler.lfa2#first" 
o|inlining procedure: k3567 
o|inlining procedure: "(lfa2.scm:410) chicken.compiler.lfa2#first" 
o|inlining procedure: k3567 
o|inlining procedure: "(lfa2.scm:416) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:415) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:413) chicken.compiler.lfa2#first" 
o|inlining procedure: k3629 
o|inlining procedure: k3629 
o|inlining procedure: k3658 
o|inlining procedure: k3658 
o|inlining procedure: k3641 
o|inlining procedure: k3681 
o|inlining procedure: k3681 
o|inlining procedure: k3693 
o|inlining procedure: "(lfa2.scm:440) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:438) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:438) chicken.compiler.lfa2#second" 
o|inlining procedure: k3693 
o|inlining procedure: k3732 
o|inlining procedure: "(lfa2.scm:437) chicken.compiler.lfa2#second" 
o|inlining procedure: k3732 
o|inlining procedure: "(lfa2.scm:436) chicken.compiler.lfa2#first" 
o|inlining procedure: k3753 
o|inlining procedure: k3753 
o|inlining procedure: "(lfa2.scm:430) chicken.compiler.lfa2#first" 
o|inlining procedure: k3814 
o|inlining procedure: k3814 
o|inlining procedure: "(lfa2.scm:451) chicken.compiler.lfa2#first" 
o|inlining procedure: k3803 
o|inlining procedure: k3803 
o|inlining procedure: k3859 
o|inlining procedure: k3881 
o|inlining procedure: k3896 
o|inlining procedure: k3896 
o|inlining procedure: "(lfa2.scm:469) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:471) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:468) chicken.compiler.lfa2#second" 
o|inlining procedure: k3881 
o|inlining procedure: "(lfa2.scm:465) chicken.compiler.lfa2#first" 
o|inlining procedure: k3859 
o|inlining procedure: k3941 
o|inlining procedure: "(lfa2.scm:488) chicken.compiler.lfa2#second" 
o|inlining procedure: "(lfa2.scm:485) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:486) chicken.compiler.lfa2#second" 
o|inlining procedure: k3941 
o|inlining procedure: k3980 
o|inlining procedure: "(lfa2.scm:484) chicken.compiler.lfa2#second" 
o|inlining procedure: k3980 
o|inlining procedure: "(lfa2.scm:483) chicken.compiler.lfa2#first" 
o|inlining procedure: k4001 
o|inlining procedure: k4001 
o|inlining procedure: "(lfa2.scm:462) chicken.compiler.lfa2#first" 
o|inlining procedure: k4055 
o|inlining procedure: "(lfa2.scm:503) chicken.compiler.lfa2#first" 
o|inlining procedure: k4055 
o|inlining procedure: k4080 
o|inlining procedure: k4080 
o|inlining procedure: "(lfa2.scm:499) chicken.compiler.lfa2#first" 
o|inlining procedure: k4047 
o|inlining procedure: k4047 
o|substituted constant variable: chicken.compiler.lfa2#+constructor-map+ 
o|inlining procedure: "(lfa2.scm:497) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+predicate-map+ 
o|inlining procedure: "(lfa2.scm:460) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|inlining procedure: "(lfa2.scm:449) chicken.compiler.lfa2#first" 
o|substituted constant variable: chicken.compiler.lfa2#+type-check-map+ 
o|inlining procedure: "(lfa2.scm:428) chicken.compiler.lfa2#first" 
o|inlining procedure: k4125 
o|inlining procedure: k4125 
o|inlining procedure: "(lfa2.scm:422) chicken.compiler.lfa2#first" 
o|inlining procedure: k3641 
o|inlining procedure: k4163 
o|inlining procedure: k4163 
o|substituted constant variable: a4187 
o|substituted constant variable: a4189 
o|substituted constant variable: a4191 
o|substituted constant variable: a4193 
o|substituted constant variable: a4198 
o|substituted constant variable: a4200 
o|substituted constant variable: a4205 
o|substituted constant variable: a4207 
o|substituted constant variable: a4209 
o|substituted constant variable: a4211 
o|substituted constant variable: a4216 
o|substituted constant variable: a4218 
o|substituted constant variable: a4220 
o|inlining procedure: k4224 
o|inlining procedure: k4274 
o|contracted procedure: "(lfa2.scm:518) g856863" 
o|propagated global variable: out866869 ##sys#standard-output 
o|substituted constant variable: a4242 
o|substituted constant variable: a4243 
o|propagated global variable: out866869 ##sys#standard-output 
o|inlining procedure: k4274 
o|inlining procedure: k4224 
o|inlining procedure: k4312 
o|inlining procedure: "(lfa2.scm:538) chicken.compiler.lfa2#first" 
o|inlining procedure: k4312 
o|inlining procedure: k4340 
o|inlining procedure: k4340 
o|inlining procedure: "(lfa2.scm:543) chicken.compiler.lfa2#first" 
o|inlining procedure: k4361 
o|inlining procedure: k4409 
o|inlining procedure: k4409 
o|inlining procedure: "(lfa2.scm:551) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:550) chicken.compiler.lfa2#second" 
o|inlining procedure: k4470 
o|inlining procedure: k4470 
o|inlining procedure: "(lfa2.scm:548) chicken.compiler.lfa2#first" 
o|inlining procedure: k4361 
o|substituted constant variable: a4520 
o|substituted constant variable: a4522 
o|substituted constant variable: a4524 
o|substituted constant variable: a4526 
o|inlining procedure: k4539 
o|inlining procedure: "(lfa2.scm:571) chicken.compiler.lfa2#first" 
o|inlining procedure: k4539 
o|inlining procedure: k4585 
o|inlining procedure: "(lfa2.scm:584) chicken.compiler.lfa2#second" 
o|inlining procedure: k4585 
o|inlining procedure: k4627 
o|inlining procedure: k4627 
o|inlining procedure: "(lfa2.scm:579) chicken.compiler.lfa2#first" 
o|inlining procedure: "(lfa2.scm:578) chicken.compiler.lfa2#first" 
o|inlining procedure: k4658 
o|inlining procedure: k4686 
o|inlining procedure: k4686 
o|substituted constant variable: a4700 
o|inlining procedure: k4721 
o|inlining procedure: k4721 
o|inlining procedure: "(lfa2.scm:590) chicken.compiler.lfa2#third" 
o|inlining procedure: "(lfa2.scm:589) chicken.compiler.lfa2#second" 
o|inlining procedure: k4774 
o|inlining procedure: k4774 
o|inlining procedure: "(lfa2.scm:587) chicken.compiler.lfa2#first" 
o|inlining procedure: k4658 
o|inlining procedure: k4825 
o|inlining procedure: k4825 
o|substituted constant variable: a4860 
o|substituted constant variable: a4862 
o|substituted constant variable: a4864 
o|substituted constant variable: a4866 
o|propagated global variable: out11281134 ##sys#standard-output 
o|substituted constant variable: a4877 
o|substituted constant variable: a4878 
o|propagated global variable: out11311138 ##sys#standard-output 
o|substituted constant variable: a4889 
o|substituted constant variable: a4890 
o|propagated global variable: out11311138 ##sys#standard-output 
o|propagated global variable: out11281134 ##sys#standard-output 
o|inlining procedure: k4907 
o|inlining procedure: k4907 
o|contracted procedure: "(lfa2.scm:525) chicken.compiler.lfa2#filter-map" 
o|inlining procedure: k2147 
o|inlining procedure: k2147 
o|inlining procedure: k2136 
o|inlining procedure: k2136 
o|replaced variables: 741 
o|removed binding forms: 158 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#list-tabulate 
o|substituted constant variable: r26934932 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+type-check-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+predicate-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+ffi-type-check-map+ 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#+constructor-map+ 
o|inlining procedure: k2903 
o|inlining procedure: k2903 
o|substituted constant variable: r29164938 
o|inlining procedure: k2903 
o|substituted constant variable: r29044939 
o|substituted constant variable: r30794955 
o|substituted constant variable: r30794955 
o|inlining procedure: k3078 
o|inlining procedure: k3078 
o|substituted constant variable: r30914959 
o|contracted procedure: "(mini-srfi-1.scm:141) chicken.compiler.lfa2#filter" 
o|substituted constant variable: r20934929 
o|substituted constant variable: r31594978 
o|substituted constant variable: r27615037 
o|substituted constant variable: r27735039 
o|substituted constant variable: r27885041 
o|substituted constant variable: r28005043 
o|substituted constant variable: r28125045 
o|substituted constant variable: r28245047 
o|substituted constant variable: r28365049 
o|substituted constant variable: r28485051 
o|substituted constant variable: r35115076 
o|substituted constant variable: r35555083 
o|substituted constant variable: r35685094 
o|inlining procedure: k3595 
o|substituted constant variable: r36305116 
o|inlining procedure: k3681 
o|inlining procedure: k3681 
o|substituted constant variable: r37335148 
o|inlining procedure: k3681 
o|inlining procedure: k3681 
o|inlining procedure: k3881 
o|substituted constant variable: r38975176 
o|inlining procedure: k3881 
o|substituted constant variable: r38605199 
o|inlining procedure: k3935 
o|inlining procedure: k3935 
o|substituted constant variable: r39815223 
o|inlining procedure: k3935 
o|inlining procedure: k3935 
o|substituted constant variable: r40815244 
o|substituted constant variable: r36425279 
o|propagated global variable: out866869 ##sys#standard-output 
o|propagated global variable: out11281134 ##sys#standard-output 
o|propagated global variable: out11311138 ##sys#standard-output 
o|substituted constant variable: r49085375 
o|substituted constant variable: r21375379 
o|replaced variables: 249 
o|removed binding forms: 582 
o|removed conditional forms: 1 
o|substituted constant variable: r29045384 
o|substituted constant variable: r29045385 
o|substituted constant variable: r29045386 
o|inlining procedure: "(lfa2.scm:289) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:352) varnode?556" 
o|inlining procedure: "(lfa2.scm:404) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:404) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:400) varnode?556" 
o|inlining procedure: "(lfa2.scm:399) chicken.compiler.lfa2#alist-cons" 
o|inlining procedure: "(lfa2.scm:414) varnode?556" 
o|inlining procedure: k3705 
o|substituted constant variable: r38825409 
o|substituted constant variable: r38825411 
o|substituted constant variable: r386051995414 
o|substituted constant variable: r386051995416 
o|substituted constant variable: r386051995418 
o|substituted constant variable: r386051995420 
o|inlining procedure: "(lfa2.scm:463) varnode?556" 
o|replaced variables: 4 
o|removed binding forms: 259 
o|removed conditional forms: 3 
o|removed side-effect free assignment to unused variable: chicken.compiler.lfa2#alist-cons 
o|substituted constant variable: y2415449 
o|substituted constant variable: r30795387 
o|substituted constant variable: r30795389 
o|removed side-effect free assignment to unused variable: varnode?556 
o|substituted constant variable: r37065496 
o|inlining procedure: k3953 
o|contracted procedure: "(mini-srfi-1.scm:135) a4904" 
o|replaced variables: 22 
o|removed binding forms: 16 
o|removed conditional forms: 1 
o|substituted constant variable: r39545531 
o|contracted procedure: "(mini-srfi-1.scm:134) g273274" 
o|replaced variables: 5 
o|removed binding forms: 31 
o|removed conditional forms: 1 
o|replaced variables: 7 
o|removed binding forms: 3 
o|removed binding forms: 3 
o|simplifications: ((if . 19) (##core#call . 307) (let . 14)) 
o|  call simplifications:
o|    scheme#=
o|    ##sys#setslot	6
o|    ##sys#cons	3
o|    scheme#member	3
o|    scheme#memq	2
o|    scheme#string?
o|    scheme#symbol?	5
o|    chicken.base#fixnum?
o|    chicken.base#bignum?
o|    chicken.base#flonum?
o|    chicken.base#ratnum?
o|    chicken.base#cplxnum?
o|    scheme#boolean?
o|    scheme#list?
o|    scheme#eof-object?
o|    chicken.base#bwp-object?
o|    scheme#vector?
o|    ##sys#immediate?
o|    ##sys#generic-structure?
o|    scheme#char?
o|    ##sys#list	5
o|    scheme#caddr	6
o|    scheme#cdar
o|    scheme#+
o|    scheme#set-car!
o|    scheme#assq	5
o|    ##sys#check-list	12
o|    ##sys#slot	31
o|    scheme#length	2
o|    scheme#list	12
o|    scheme#not	8
o|    scheme#assoc	8
o|    scheme#cons	25
o|    scheme#cdr	4
o|    scheme#set-cdr!
o|    scheme#pair?	22
o|    scheme#cadr	24
o|    scheme#null?	4
o|    scheme#car	45
o|    scheme#eq?	55
o|    chicken.fixnum#fx+
o|contracted procedure: k2695 
o|contracted procedure: k2714 
o|contracted procedure: k2701 
o|contracted procedure: k2708 
o|contracted procedure: k2897 
o|contracted procedure: k2906 
o|contracted procedure: k2912 
o|contracted procedure: k2918 
o|contracted procedure: k2924 
o|contracted procedure: k2931 
o|contracted procedure: k2935 
o|contracted procedure: k2903 
o|contracted procedure: k2945 
o|contracted procedure: k2958 
o|contracted procedure: k20775453 
o|contracted procedure: k2965 
o|contracted procedure: k2988 
o|contracted procedure: k2991 
o|contracted procedure: k2994 
o|contracted procedure: k3051 
o|contracted procedure: k3067 
o|contracted procedure: k3075 
o|contracted procedure: k3081 
o|contracted procedure: k3087 
o|contracted procedure: k3093 
o|contracted procedure: k3115 
o|contracted procedure: k3125 
o|contracted procedure: k3129 
o|contracted procedure: k3133 
o|contracted procedure: k3221 
o|contracted procedure: k2083 
o|contracted procedure: k2095 
o|contracted procedure: k2113 
o|contracted procedure: k2121 
o|contracted procedure: k3274 
o|contracted procedure: k3227 
o|contracted procedure: k3250 
o|contracted procedure: k3246 
o|contracted procedure: k3260 
o|contracted procedure: k3267 
o|contracted procedure: k3313 
o|contracted procedure: k3326 
o|contracted procedure: k3143 
o|contracted procedure: k3161 
o|contracted procedure: k3188 
o|contracted procedure: k3178 
o|inlining procedure: k3164 
o|inlining procedure: k3164 
o|contracted procedure: k3336 
o|contracted procedure: k3350 
o|contracted procedure: k3346 
o|contracted procedure: k3354 
o|contracted procedure: k3360 
o|contracted procedure: k3363 
o|contracted procedure: k3384 
o|contracted procedure: k3388 
o|contracted procedure: k3429 
o|contracted procedure: k3391 
o|contracted procedure: k3406 
o|contracted procedure: k3414 
o|contracted procedure: k3418 
o|contracted procedure: k3426 
o|contracted procedure: k3438 
o|contracted procedure: k3444 
o|contracted procedure: k3451 
o|contracted procedure: k2763 
o|contracted procedure: k2775 
o|contracted procedure: k2790 
o|contracted procedure: k2796 
o|contracted procedure: k2802 
o|contracted procedure: k2808 
o|contracted procedure: k2814 
o|contracted procedure: k2820 
o|contracted procedure: k2826 
o|contracted procedure: k2832 
o|contracted procedure: k2838 
o|contracted procedure: k2844 
o|contracted procedure: k2850 
o|contracted procedure: k2856 
o|contracted procedure: k2885 
o|contracted procedure: k2878 
o|contracted procedure: k2862 
o|contracted procedure: k2869 
o|contracted procedure: k2875 
o|contracted procedure: k3457 
o|contracted procedure: k3460 
o|contracted procedure: k3463 
o|contracted procedure: k3479 
o|contracted procedure: k3493 
o|contracted procedure: k20775478 
o|contracted procedure: k3500 
o|contracted procedure: k20775471 
o|contracted procedure: k3487 
o|contracted procedure: k3507 
o|contracted procedure: k3513 
o|contracted procedure: k3524 
o|contracted procedure: k20775490 
o|contracted procedure: k3545 
o|contracted procedure: k3538 
o|contracted procedure: k3551 
o|contracted procedure: k3557 
o|contracted procedure: k3570 
o|contracted procedure: k3573 
o|contracted procedure: k3580 
o|contracted procedure: k3586 
o|contracted procedure: k3589 
o|contracted procedure: k3592 
o|contracted procedure: k3608 
o|contracted procedure: k3615 
o|contracted procedure: k3622 
o|contracted procedure: k3632 
o|contracted procedure: k3638 
o|contracted procedure: k3644 
o|contracted procedure: k3647 
o|contracted procedure: k4146 
o|contracted procedure: k3650 
o|contracted procedure: k3664 
o|contracted procedure: k4119 
o|contracted procedure: k3670 
o|contracted procedure: k3790 
o|contracted procedure: k3690 
o|contracted procedure: k3699 
o|contracted procedure: k3711 
o|contracted procedure: k3718 
o|contracted procedure: k3705 
o|contracted procedure: k3726 
o|contracted procedure: k3729 
o|contracted procedure: k3750 
o|contracted procedure: k3735 
o|contracted procedure: k3746 
o|contracted procedure: k3781 
o|contracted procedure: k3756 
o|contracted procedure: k3762 
o|contracted procedure: k3773 
o|contracted procedure: k3794 
o|contracted procedure: k4115 
o|contracted procedure: k3800 
o|contracted procedure: k3808 
o|contracted procedure: k3842 
o|contracted procedure: k3817 
o|contracted procedure: k4111 
o|contracted procedure: k3848 
o|contracted procedure: k3856 
o|contracted procedure: k3862 
o|contracted procedure: k3869 
o|contracted procedure: k3877 
o|contracted procedure: k3925 
o|contracted procedure: k3884 
o|contracted procedure: k3890 
o|contracted procedure: k3893 
o|contracted procedure: k3899 
o|inlining procedure: k3881 
o|contracted procedure: k3910 
o|contracted procedure: k3918 
o|inlining procedure: k3881 
o|contracted procedure: k4038 
o|contracted procedure: k3938 
o|contracted procedure: k3947 
o|contracted procedure: k3959 
o|contracted procedure: k3966 
o|contracted procedure: k3953 
o|contracted procedure: k3974 
o|contracted procedure: k3977 
o|contracted procedure: k3998 
o|contracted procedure: k3983 
o|contracted procedure: k3994 
o|contracted procedure: k4029 
o|contracted procedure: k4004 
o|contracted procedure: k4010 
o|contracted procedure: k4021 
o|contracted procedure: k4107 
o|contracted procedure: k4044 
o|contracted procedure: k4097 
o|contracted procedure: k4052 
o|contracted procedure: k4061 
o|contracted procedure: k4067 
o|contracted procedure: k4094 
o|contracted procedure: k4083 
o|contracted procedure: k4128 
o|contracted procedure: k4138 
o|contracted procedure: k4142 
o|contracted procedure: k4154 
o|contracted procedure: k4166 
o|contracted procedure: k4176 
o|contracted procedure: k4180 
o|contracted procedure: k4227 
o|contracted procedure: k4265 
o|contracted procedure: k4277 
o|contracted procedure: k4287 
o|contracted procedure: k4291 
o|contracted procedure: k4262 
o|contracted procedure: k4315 
o|contracted procedure: k4318 
o|contracted procedure: k4328 
o|contracted procedure: k4334 
o|contracted procedure: k4347 
o|contracted procedure: k4354 
o|contracted procedure: k4358 
o|contracted procedure: k4364 
o|contracted procedure: k4367 
o|contracted procedure: k4502 
o|contracted procedure: k4370 
o|contracted procedure: k4378 
o|contracted procedure: k4381 
o|contracted procedure: k4390 
o|contracted procedure: k4394 
o|contracted procedure: k4440 
o|contracted procedure: k4397 
o|contracted procedure: k4400 
o|contracted procedure: k4412 
o|contracted procedure: k4415 
o|contracted procedure: k4418 
o|contracted procedure: k4426 
o|contracted procedure: k4434 
o|contracted procedure: k4450 
o|contracted procedure: k4458 
o|contracted procedure: k4461 
o|contracted procedure: k4473 
o|contracted procedure: k4476 
o|contracted procedure: k4479 
o|contracted procedure: k4487 
o|contracted procedure: k4495 
o|contracted procedure: k4509 
o|contracted procedure: k4542 
o|contracted procedure: k4555 
o|contracted procedure: k4563 
o|contracted procedure: k4567 
o|contracted procedure: k4573 
o|contracted procedure: k4576 
o|contracted procedure: k4579 
o|contracted procedure: k4592 
o|contracted procedure: k4596 
o|contracted procedure: k4608 
o|contracted procedure: k4615 
o|contracted procedure: k4618 
o|contracted procedure: k4630 
o|contracted procedure: k4633 
o|contracted procedure: k4636 
o|contracted procedure: k4644 
o|contracted procedure: k4652 
o|contracted procedure: k4661 
o|contracted procedure: k4664 
o|contracted procedure: k4806 
o|contracted procedure: k4667 
o|contracted procedure: k4675 
o|contracted procedure: k4678 
o|contracted procedure: k4689 
o|contracted procedure: k4696 
o|contracted procedure: k4702 
o|contracted procedure: k4706 
o|contracted procedure: k4752 
o|contracted procedure: k4709 
o|contracted procedure: k4712 
o|contracted procedure: k4724 
o|contracted procedure: k4727 
o|contracted procedure: k4730 
o|contracted procedure: k4738 
o|contracted procedure: k4746 
o|contracted procedure: k4762 
o|contracted procedure: k4765 
o|contracted procedure: k4777 
o|contracted procedure: k4780 
o|contracted procedure: k4783 
o|contracted procedure: k4791 
o|contracted procedure: k4799 
o|contracted procedure: k4813 
o|contracted procedure: k4816 
o|contracted procedure: k4828 
o|contracted procedure: k4831 
o|contracted procedure: k4834 
o|contracted procedure: k4842 
o|contracted procedure: k4850 
o|contracted procedure: k4901 
o|contracted procedure: k2127 
o|contracted procedure: k2139 
o|contracted procedure: k2162 
o|contracted procedure: k4915 
o|contracted procedure: k4919 
o|contracted procedure: k4910 
o|contracted procedure: k2144 
o|contracted procedure: k2170 
o|simplifications: ((let . 94)) 
o|removed binding forms: 277 
o|substituted constant variable: r31655700 
o|substituted constant variable: r31655700 
o|inlining procedure: k3329 
o|inlining procedure: k3329 
o|inlining procedure: k3873 
o|inlining procedure: k3873 
o|inlining procedure: k3873 
o|inlining procedure: k3873 
o|removed binding forms: 2 
o|removed conditional forms: 1 
o|substituted constant variable: r33305734 
o|simplifications: ((let . 1)) 
o|removed binding forms: 3 
o|removed conditional forms: 1 
o|removed binding forms: 1 
o|direct leaf routine/allocation: loop482 0 
o|direct leaf routine/allocation: merge549 0 
o|direct leaf routine/allocation: report550 35 
o|direct leaf routine/allocation: floatvar?557 0 
o|direct leaf routine/allocation: a3214 0 
o|direct leaf routine/allocation: loop649 0 
o|direct leaf routine/allocation: g283284 3 
o|converted assignments to bindings: (loop482) 
o|contracted procedure: "(lfa2.scm:309) k3033" 
o|contracted procedure: "(mini-srfi-1.scm:141) k2186" 
o|converted assignments to bindings: (loop649) 
o|contracted procedure: "(lfa2.scm:368) k3339" 
o|contracted procedure: "(lfa2.scm:392) k3564" 
o|simplifications: ((let . 2)) 
o|removed binding forms: 4 
o|direct leaf routine/allocation: a2179 0 
o|contracted procedure: "(mini-srfi-1.scm:131) k2103" 
o|removed binding forms: 1 
o|direct leaf routine/allocation: g255256 3 
o|customizable procedures: (foldr268271 map-loop11031120 map-loop10771094 g10361037 map-loop10441061 map-loop10031020 map-loop963980 g929930 map-loop936953 chicken.compiler.lfa2#posq for-each-loop855875 g830837 for-each-loop829847 g742749 for-each-loop741753 g815816 k4058 g788789 k3944 g779780 g764765 k3696 extinguish!554 k3601 k3534 add-unboxed561 k3483 assigned?551 k3490 k3369 walk563 eliminate-floatvar558 add-boxed560 count-floatvar559 k3230 g682683 foldr250253 g617624 for-each-loop616627 droppable?552 drop!553 sub-boxed562) 
o|shared closure containers: 14 
o|shared closure users: 22 
o|calls to known targets: 110 
o|identified direct recursive calls: f_2690 1 
o|identified direct recursive calls: f_2090 1 
o|identified direct recursive calls: f_3156 2 
o|identified direct recursive calls: f_2134 1 
o|fast box initializations: 27 
o|fast global references: 6 
o|fast global assignments: 2 
o|dropping unused closure argument: f_2684 
o|dropping unused closure argument: f_2892 
*/
/* end of file */
