/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 6.0.0 (rev eeeb4bfb)
   openbsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -ignore-repository -feature chicken-bootstrap -feature debugbuild -verbose -specialize -consult-types-file ./types.db -no-lambda-info -emit-import-library chicken.compiler.compiler-syntax -output-file compiler-syntax.c
   unit: compiler-syntax
   uses: eval expand extras compiler support library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_extern void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_expand_toplevel)
C_extern void C_ccall C_expand_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_extras_toplevel)
C_extern void C_ccall C_extras_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_toplevel)
C_extern void C_ccall C_compiler_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_support_toplevel)
C_extern void C_ccall C_support_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_extern void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_word lf[105];
static double C_possibly_force_alignment;


C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word *av) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word *av) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word *av) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word *av) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word *av) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word *av) C_noret;
C_noret_decl(f_2789)
static void f_2789(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static C_word f_2795(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2989)
static void C_ccall f_2989(C_word c,C_word *av) C_noret;
C_noret_decl(f_2993)
static void C_ccall f_2993(C_word c,C_word *av) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word *av) C_noret;
C_noret_decl(f_3001)
static void f_3001(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3006)
static void f_3006(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3015)
static void f_3015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word *av) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word *av) C_noret;
C_noret_decl(f_3044)
static void C_ccall f_3044(C_word c,C_word *av) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word *av) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word *av) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word *av) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word *av) C_noret;
C_noret_decl(f_3064)
static void C_ccall f_3064(C_word c,C_word *av) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word *av) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word *av) C_noret;
C_noret_decl(f_3072)
static void f_3072(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word *av) C_noret;
C_noret_decl(f_3100)
static void f_3100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word *av) C_noret;
C_noret_decl(f_3106)
static void f_3106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word *av) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word *av) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word *av) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word *av) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word *av) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word *av) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word *av) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word *av) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word *av) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word *av) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word *av) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word *av) C_noret;
C_noret_decl(f_3157)
static void C_ccall f_3157(C_word c,C_word *av) C_noret;
C_noret_decl(f_3163)
static void C_ccall f_3163(C_word c,C_word *av) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word *av) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word *av) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word *av) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word *av) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word *av) C_noret;
C_noret_decl(f_3186)
static C_word f_3186(C_word t0);
C_noret_decl(f_3196)
static void f_3196(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3215)
static void f_3215(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word *av) C_noret;
C_noret_decl(f_3253)
static C_word f_3253(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_3263)
static void f_3263(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word *av) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word *av) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word *av) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word *av) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word *av) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word *av) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word *av) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word *av) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word *av) C_noret;
C_noret_decl(f_3427)
static void C_ccall f_3427(C_word c,C_word *av) C_noret;
C_noret_decl(f_3448)
static void C_ccall f_3448(C_word c,C_word *av) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word *av) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word *av) C_noret;
C_noret_decl(f_3524)
static void f_3524(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word *av) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word *av) C_noret;
C_noret_decl(f_3607)
static void C_ccall f_3607(C_word c,C_word *av) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word *av) C_noret;
C_noret_decl(f_3629)
static void C_ccall f_3629(C_word c,C_word *av) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word *av) C_noret;
C_noret_decl(f_3634)
static void C_ccall f_3634(C_word c,C_word *av) C_noret;
C_noret_decl(f_3653)
static void C_ccall f_3653(C_word c,C_word *av) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word *av) C_noret;
C_noret_decl(f_3659)
static void C_ccall f_3659(C_word c,C_word *av) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word *av) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word *av) C_noret;
C_noret_decl(f_3668)
static void C_ccall f_3668(C_word c,C_word *av) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word *av) C_noret;
C_noret_decl(f_3674)
static void C_ccall f_3674(C_word c,C_word *av) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word *av) C_noret;
C_noret_decl(f_3776)
static void C_ccall f_3776(C_word c,C_word *av) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word *av) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word *av) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word *av) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word *av) C_noret;
C_noret_decl(f_3791)
static void C_ccall f_3791(C_word c,C_word *av) C_noret;
C_noret_decl(f_3862)
static void C_ccall f_3862(C_word c,C_word *av) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word *av) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word *av) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word *av) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word *av) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word *av) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word *av) C_noret;
C_noret_decl(f_3919)
static void C_ccall f_3919(C_word c,C_word *av) C_noret;
C_noret_decl(f_3931)
static void C_ccall f_3931(C_word c,C_word *av) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word *av) C_noret;
C_noret_decl(f_3986)
static void C_ccall f_3986(C_word c,C_word *av) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word *av) C_noret;
C_noret_decl(f_4003)
static void C_ccall f_4003(C_word c,C_word *av) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word *av) C_noret;
C_noret_decl(f_4016)
static void f_4016(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word *av) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word *av) C_noret;
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
C_noret_decl(f_4102)
static void f_4102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word *av) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word *av) C_noret;
C_noret_decl(f_4144)
static C_word f_4144(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word *av) C_noret;
C_noret_decl(f_4174)
static void C_ccall f_4174(C_word c,C_word *av) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word *av) C_noret;
C_noret_decl(f_4224)
static void f_4224(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word *av) C_noret;
C_noret_decl(f_4286)
static void f_4286(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4323)
static C_word f_4323(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word *av) C_noret;
C_noret_decl(f_4332)
static void f_4332(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4366)
static void f_4366(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4414)
static void f_4414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word *av) C_noret;
C_noret_decl(f_4470)
static void f_4470(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4538)
static void f_4538(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word *av) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word *av) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word *av) C_noret;
C_noret_decl(f_4586)
static void C_ccall f_4586(C_word c,C_word *av) C_noret;
C_noret_decl(f_4589)
static void C_ccall f_4589(C_word c,C_word *av) C_noret;
C_noret_decl(f_4592)
static void C_ccall f_4592(C_word c,C_word *av) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word *av) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word *av) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word *av) C_noret;
C_noret_decl(f_4604)
static void C_ccall f_4604(C_word c,C_word *av) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word *av) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word *av) C_noret;
C_noret_decl(f_4619)
static void f_4619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word *av) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word *av) C_noret;
C_noret_decl(f_4653)
static C_word f_4653(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word *av) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word *av) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word *av) C_noret;
C_noret_decl(f_4721)
static void f_4721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word *av) C_noret;
C_noret_decl(f_4767)
static void f_4767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4804)
static C_word f_4804(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word *av) C_noret;
C_noret_decl(f_4813)
static void f_4813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4847)
static void f_4847(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4895)
static void f_4895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4941)
static void C_ccall f_4941(C_word c,C_word *av) C_noret;
C_noret_decl(f_4943)
static void f_4943(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4995)
static void f_4995(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word *av) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word *av) C_noret;
C_noret_decl(C_compiler_2dsyntax_toplevel)
C_extern void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av) C_noret;

C_noret_decl(trf_2789)
static void C_ccall trf_2789(C_word c,C_word *av) C_noret;
static void C_ccall trf_2789(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_2789(t0,t1);}

C_noret_decl(trf_3001)
static void C_ccall trf_3001(C_word c,C_word *av) C_noret;
static void C_ccall trf_3001(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_3001(t0,t1,t2,t3);}

C_noret_decl(trf_3006)
static void C_ccall trf_3006(C_word c,C_word *av) C_noret;
static void C_ccall trf_3006(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3006(t0,t1,t2);}

C_noret_decl(trf_3015)
static void C_ccall trf_3015(C_word c,C_word *av) C_noret;
static void C_ccall trf_3015(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3015(t0,t1,t2);}

C_noret_decl(trf_3072)
static void C_ccall trf_3072(C_word c,C_word *av) C_noret;
static void C_ccall trf_3072(C_word c,C_word *av){
C_word t0=av[6];
C_word t1=av[5];
C_word t2=av[4];
C_word t3=av[3];
C_word t4=av[2];
C_word t5=av[1];
C_word t6=av[0];
f_3072(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3100)
static void C_ccall trf_3100(C_word c,C_word *av) C_noret;
static void C_ccall trf_3100(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3100(t0,t1);}

C_noret_decl(trf_3106)
static void C_ccall trf_3106(C_word c,C_word *av) C_noret;
static void C_ccall trf_3106(C_word c,C_word *av){
C_word t0=av[4];
C_word t1=av[3];
C_word t2=av[2];
C_word t3=av[1];
C_word t4=av[0];
f_3106(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3196)
static void C_ccall trf_3196(C_word c,C_word *av) C_noret;
static void C_ccall trf_3196(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_3196(t0,t1);}

C_noret_decl(trf_3215)
static void C_ccall trf_3215(C_word c,C_word *av) C_noret;
static void C_ccall trf_3215(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3215(t0,t1,t2);}

C_noret_decl(trf_3263)
static void C_ccall trf_3263(C_word c,C_word *av) C_noret;
static void C_ccall trf_3263(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3263(t0,t1,t2);}

C_noret_decl(trf_3524)
static void C_ccall trf_3524(C_word c,C_word *av) C_noret;
static void C_ccall trf_3524(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_3524(t0,t1,t2);}

C_noret_decl(trf_4016)
static void C_ccall trf_4016(C_word c,C_word *av) C_noret;
static void C_ccall trf_4016(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4016(t0,t1,t2);}

C_noret_decl(trf_4102)
static void C_ccall trf_4102(C_word c,C_word *av) C_noret;
static void C_ccall trf_4102(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4102(t0,t1);}

C_noret_decl(trf_4224)
static void C_ccall trf_4224(C_word c,C_word *av) C_noret;
static void C_ccall trf_4224(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4224(t0,t1,t2);}

C_noret_decl(trf_4286)
static void C_ccall trf_4286(C_word c,C_word *av) C_noret;
static void C_ccall trf_4286(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4286(t0,t1,t2);}

C_noret_decl(trf_4332)
static void C_ccall trf_4332(C_word c,C_word *av) C_noret;
static void C_ccall trf_4332(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4332(t0,t1,t2);}

C_noret_decl(trf_4366)
static void C_ccall trf_4366(C_word c,C_word *av) C_noret;
static void C_ccall trf_4366(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4366(t0,t1,t2,t3);}

C_noret_decl(trf_4414)
static void C_ccall trf_4414(C_word c,C_word *av) C_noret;
static void C_ccall trf_4414(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4414(t0,t1,t2);}

C_noret_decl(trf_4470)
static void C_ccall trf_4470(C_word c,C_word *av) C_noret;
static void C_ccall trf_4470(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4470(t0,t1,t2,t3);}

C_noret_decl(trf_4538)
static void C_ccall trf_4538(C_word c,C_word *av) C_noret;
static void C_ccall trf_4538(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4538(t0,t1,t2);}

C_noret_decl(trf_4619)
static void C_ccall trf_4619(C_word c,C_word *av) C_noret;
static void C_ccall trf_4619(C_word c,C_word *av){
C_word t0=av[1];
C_word t1=av[0];
f_4619(t0,t1);}

C_noret_decl(trf_4721)
static void C_ccall trf_4721(C_word c,C_word *av) C_noret;
static void C_ccall trf_4721(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4721(t0,t1,t2);}

C_noret_decl(trf_4767)
static void C_ccall trf_4767(C_word c,C_word *av) C_noret;
static void C_ccall trf_4767(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4767(t0,t1,t2);}

C_noret_decl(trf_4813)
static void C_ccall trf_4813(C_word c,C_word *av) C_noret;
static void C_ccall trf_4813(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4813(t0,t1,t2);}

C_noret_decl(trf_4847)
static void C_ccall trf_4847(C_word c,C_word *av) C_noret;
static void C_ccall trf_4847(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4847(t0,t1,t2,t3);}

C_noret_decl(trf_4895)
static void C_ccall trf_4895(C_word c,C_word *av) C_noret;
static void C_ccall trf_4895(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4895(t0,t1,t2);}

C_noret_decl(trf_4943)
static void C_ccall trf_4943(C_word c,C_word *av) C_noret;
static void C_ccall trf_4943(C_word c,C_word *av){
C_word t0=av[3];
C_word t1=av[2];
C_word t2=av[1];
C_word t3=av[0];
f_4943(t0,t1,t2,t3);}

C_noret_decl(trf_4995)
static void C_ccall trf_4995(C_word c,C_word *av) C_noret;
static void C_ccall trf_4995(C_word c,C_word *av){
C_word t0=av[2];
C_word t1=av[1];
C_word t2=av[0];
f_4995(t0,t1,t2);}

/* k1691 */
static void C_ccall f_1693(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1693,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k1694 in k1691 */
static void C_ccall f_1696(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1696,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_expand_toplevel(2,av2);}}

/* k1697 in k1694 in k1691 */
static void C_ccall f_1699(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1699,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_extras_toplevel(2,av2);}}

/* k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_1702(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1702,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_support_toplevel(2,av2);}}

/* k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_1705(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_1705,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_compiler_toplevel(2,av2);}}

/* k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_1708(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,5)))){
C_save_and_reclaim((void *)f_1708,c,av);}
a=C_alloc(27);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=C_mutate(&lf[2] /* (set! chicken.compiler.compiler-syntax#length+ ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2789,tmp=(C_word)a,a+=2,tmp));
t5=C_set_block_item(lf[3] /* chicken.compiler.compiler-syntax#compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t6=C_mutate((C_word*)lf[4]+1 /* (set! ##sys#compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2989,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[8] /* (set! chicken.compiler.compiler-syntax#r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3001,tmp=(C_word)a,a+=2,tmp));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4582,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("compiler-syntax.scm:71: r-c-s"));
f_3001(t8,lf[103],t9,lf[104]);}

/* chicken.compiler.compiler-syntax#length+ in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_2789(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(2,0,4)))){
C_save_and_reclaim_args((void *)trf_2789,2,t1,t2);}
a=C_alloc(2);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2795,tmp=(C_word)a,a+=2,tmp);
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=(
  f_2795(t2,t2,C_fix(0))
);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* lp in chicken.compiler.compiler-syntax#length+ in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static C_word f_2795(C_word t1,C_word t2,C_word t3){
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
C_stack_overflow_check;
loop:{}
if(C_truep(C_i_pairp(t1))){
t4=C_u_i_cdr(t1);
t5=C_fixnum_plus(t3,C_fix(1));
if(C_truep(C_i_pairp(t4))){
t6=C_u_i_cdr(t4);
t7=C_i_cdr(t2);
t8=C_fixnum_plus(t5,C_fix(1));
t9=C_eqp(t6,t7);
if(C_truep(C_i_not(t9))){
t11=t6;
t12=t7;
t13=t8;
t1=t11;
t2=t12;
t3=t13;
goto loop;}
else{
return(C_SCHEME_FALSE);}}
else{
return(t5);}}
else{
return(t3);}}

/* ##sys#compiler-syntax-hook in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_2989(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_2989,c,av);}
a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2993,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("compiler-syntax.scm:52: chicken.base#alist-ref"));
t5=*((C_word*)lf[6]+1);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=t2;
av2[3]=*((C_word*)lf[3]+1);
av2[4]=*((C_word*)lf[7]+1);
av2[5]=C_fix(0);
((C_proc)(void*)(*((C_word*)t5+1)))(6,av2);}}

/* k2991 in ##sys#compiler-syntax-hook in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_2993(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(32,c,4)))){
C_save_and_reclaim((void *)f_2993,c,av);}
a=C_alloc(32);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2997,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_s_a_i_plus(&a,2,t1,C_fix(1));
C_trace(C_text("compiler-syntax.scm:54: chicken.base#alist-update!"));
t4=C_fast_retrieve(lf[5]);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
av2[3]=t3;
av2[4]=*((C_word*)lf[3]+1);
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k2995 in k2991 in ##sys#compiler-syntax-hook in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_2997(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_2997,c,av);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! chicken.compiler.compiler-syntax#compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* chicken.compiler.compiler-syntax#r-c-s in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3001(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3001,4,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3040,a[2]=t1,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3048,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("compiler-syntax.scm:58: ##sys#er-transformer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word av2[3];
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t6;
av2[2]=t3;
tp(3,av2);}}

/* g551 in k3042 in k3038 in chicken.compiler.compiler-syntax#r-c-s in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3006(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3006,3,t0,t1,t2);}
C_trace(C_text("compiler-syntax.scm:63: ##sys#put!"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[9]);
C_word av2[5];
av2[0]=*((C_word*)lf[9]+1);
av2[1]=t1;
av2[2]=t2;
av2[3]=lf[10];
av2[4]=((C_word*)t0)[2];
tp(5,av2);}}

/* for-each-loop550 in k3042 in k3038 in chicken.compiler.compiler-syntax#r-c-s in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3015(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,0,2)))){
C_save_and_reclaim_args((void *)trf_3015,3,t0,t1,t2);}
a=C_alloc(5);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3025,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("compiler-syntax.scm:61: g551"));
t4=((C_word*)t0)[3];
f_3006(t4,t3,C_slot(t2,C_fix(0)));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3023 in for-each-loop550 in k3042 in k3038 in chicken.compiler.compiler-syntax#r-c-s in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3025(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3025,c,av);}
t2=((C_word*)((C_word*)t0)[2])[1];
f_3015(t2,((C_word*)t0)[3],C_slot(((C_word*)t0)[4],C_fix(1)));}

/* k3038 in chicken.compiler.compiler-syntax#r-c-s in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3040(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_3040,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3044,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("compiler-syntax.scm:60: scheme#append"));
t3=*((C_word*)lf[11]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[4];
av2[3]=C_fast_retrieve(lf[12]);
((C_proc)(void*)(*((C_word*)t3+1)))(4,av2);}}

/* k3042 in k3038 in chicken.compiler.compiler-syntax#r-c-s in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3044(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3044,c,av);}
a=C_alloc(12);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3015,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_3015(t7,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k3046 in chicken.compiler.compiler-syntax#r-c-s in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3048(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3048,c,av);}
C_trace(C_text("compiler-syntax.scm:57: ##sys#ensure-transformer"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[13]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[13]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=C_i_car(((C_word*)t0)[3]);
tp(4,av2);}}

/* k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3055(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3055,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3058,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4050,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("compiler-syntax.scm:101: r-c-s"));
f_3001(t2,lf[98],t3,lf[99]);}

/* k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3058(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3058,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3986,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("compiler-syntax.scm:143: r-c-s"));
f_3001(t2,lf[86],t3,C_SCHEME_END_OF_LIST);}

/* k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3061(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(41,c,5)))){
C_save_and_reclaim((void *)f_3061,c,av);}
a=C_alloc(41);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3064,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3902,tmp=(C_word)a,a+=2,tmp);
t4=C_a_i_cons(&a,2,lf[75],lf[76]);
t5=C_a_i_cons(&a,2,lf[77],lf[78]);
t6=C_a_i_cons(&a,2,lf[38],lf[79]);
t7=C_a_i_cons(&a,2,lf[80],lf[81]);
t8=C_a_i_cons(&a,2,lf[72],lf[26]);
t9=C_a_i_cons(&a,2,lf[71],lf[19]);
t10=C_a_i_list(&a,6,t4,t5,t6,t7,t8,t9);
C_trace(C_text("compiler-syntax.scm:150: r-c-s"));
f_3001(t2,lf[82],t3,t10);}

/* k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3064(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3064,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3875,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("compiler-syntax.scm:167: r-c-s"));
f_3001(t2,lf[69],t3,lf[70]);}

/* k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3067(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3067,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3862,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("compiler-syntax.scm:179: r-c-s"));
f_3001(t2,lf[66],t3,lf[67]);}

/* k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3070(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,8)))){
C_save_and_reclaim((void *)f_3070,c,av);}
a=C_alloc(7);
t2=C_mutate(&lf[15] /* (set! chicken.compiler.compiler-syntax#compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3072,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3629,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3757,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("compiler-syntax.scm:278: r-c-s"));
f_3001(t3,lf[62],t4,lf[63]);}

/* chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3072(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,0,3)))){
C_save_and_reclaim_args((void *)trf_3072,7,t1,t2,t3,t4,t5,t6,t7);}
a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3078,a[2]=t5,a[3]=t2,a[4]=t4,a[5]=t3,a[6]=t6,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("compiler-syntax.scm:190: scheme#call-with-current-continuation"));
t9=*((C_word*)lf[44]+1);{
C_word av2[3];
av2[0]=t9;
av2[1]=t1;
av2[2]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(3,av2);}}

/* a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3078(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(10,c,3)))){
C_save_and_reclaim((void *)f_3078,c,av);}
a=C_alloc(10);
t3=C_i_length(((C_word*)t0)[2]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3621,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
C_trace(C_text("compiler-syntax.scm:193: chicken.base#symbol-append"));
t5=*((C_word*)lf[42]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[43];
av2[3]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t5+1)))(4,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3100(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,0,2)))){
C_save_and_reclaim_args((void *)trf_3100,2,t0,t1);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3103,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(C_u_i_car(((C_word*)t0)[2])))){
t3=t2;{
C_word av2[2];
av2[0]=t3;
av2[1]=C_u_i_car(((C_word*)t0)[2]);
f_3103(2,av2);}}
else{
C_trace(C_text("compiler-syntax.scm:198: scheme#cadar"));
t3=*((C_word*)lf[41]+1);{
C_word av2[3];
av2[0]=t3;
av2[1]=t2;
av2[2]=((C_word*)t0)[2];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}}
else{
t2=((C_word*)t0)[7];{
C_word av2[2];
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3103(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(25,c,5)))){
C_save_and_reclaim((void *)f_3103,c,av);}
a=C_alloc(25);
t2=((C_word*)t0)[2];
t3=C_u_i_cdr(((C_word*)t2)[2]);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3106,a[2]=((C_word*)t2)[3],a[3]=t1,a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_i_string_length(t1);
t11=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3178,a[2]=t1,a[3]=t9,a[4]=t4,a[5]=t5,a[6]=C_SCHEME_UNDEFINED,a[7]=t7,a[8]=t10,a[9]=((C_word*)t2)[6],a[10]=((C_word*)t2)[4],a[11]=((C_word*)t2)[7],a[12]=((C_word*)t2)[8],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("compiler-syntax.scm:211: r"));
t12=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[40];
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}

/* fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_3106,5,t0,t1,t2,t3,t4);}
a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3110,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t3,a[6]=t4,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("compiler-syntax.scm:201: chicken.syntax#get-line-number"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[28]);
C_word av2[3];
av2[0]=*((C_word*)lf[28]+1);
av2[1]=t5;
av2[2]=((C_word*)t0)[5];
tp(3,av2);}}

/* k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3110(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3110,c,av);}
a=C_alloc(13);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3123,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("compiler-syntax.scm:203: scheme#open-output-string"));
t4=C_fast_retrieve(lf[26]);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3111 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3113(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3113,c,av);}
if(C_truep(((C_word*)t0)[2])){
C_trace(C_text("compiler-syntax.scm:207: return"));
t2=((C_word*)t0)[3];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[4];
av2[2]=C_SCHEME_FALSE;
((C_proc)C_fast_retrieve_proc(t2))(3,av2);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t3;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}

/* k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3123(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(17,c,4)))){
C_save_and_reclaim((void *)f_3123,c,av);}
a=C_alloc(17);
t2=C_i_check_port_2(t1,C_fix(2),C_SCHEME_TRUE,lf[17]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3154,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3157,a[2]=t4,a[3]=C_SCHEME_UNDEFINED,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("compiler-syntax.scm:204: scheme#open-output-string"));
t6=C_fast_retrieve(lf[26]);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}
else{
C_trace(C_text("compiler-syntax.scm:203: ##sys#print"));
t5=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t5;
av2[1]=t3;
av2[2]=lf[27];
av2[3]=C_SCHEME_FALSE;
av2[4]=t1;
((C_proc)(void*)(*((C_word*)t5+1)))(5,av2);}}}

/* k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3129(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_3129,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:203: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[24]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t2;
av2[2]=C_make_character(96);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3130 in k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_3132(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,4)))){
C_save_and_reclaim((void *)f_3132,c,av);}
a=C_alloc(7);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3135,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:203: ##sys#print"));
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[7];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3133 in k3130 in k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3135(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3135,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3138,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:203: ##sys#print"));
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[23];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3136 in k3133 in k3130 in k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in ... */
static void C_ccall f_3138(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,4)))){
C_save_and_reclaim((void *)f_3138,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3141,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:203: ##sys#print"));
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[6];
av2[3]=C_SCHEME_TRUE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3139 in k3136 in k3133 in k3130 in k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in ... */
static void C_ccall f_3141(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3141,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3144,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:203: ##sys#print"));
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[22];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in ... */
static void C_ccall f_3144(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,5)))){
C_save_and_reclaim((void *)f_3144,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3147,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 6) {
  av2=av;
} else {
  av2=C_alloc(6);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[20]+1);
av2[3]=((C_word*)t2)[3];
av2[4]=((C_word*)t2)[4];
av2[5]=((C_word*)t2)[5];
C_apply(6,av2);}}

/* k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in ... */
static void C_ccall f_3147(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3147,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:203: scheme#get-output-string"));
t3=C_fast_retrieve(lf[19]);{
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

/* k3148 in k3145 in k3142 in k3139 in k3136 in k3133 in k3130 in k3127 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in ... */
static void C_ccall f_3150(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3150,c,av);}
C_trace(C_text("compiler-syntax.scm:202: chicken.base#warning"));
t2=C_fast_retrieve(lf[18]);{
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

/* k3152 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3154(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,4)))){
C_save_and_reclaim((void *)f_3154,c,av);}
C_trace(C_text("compiler-syntax.scm:203: ##sys#print"));
t2=*((C_word*)lf[21]+1);{
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

/* k3155 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3157(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3157,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+3,t1);
t3=C_i_check_port_2(((C_word*)t0)[3],C_fix(2),C_SCHEME_TRUE,lf[17]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3163,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:204: ##sys#write-char-0"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[24]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[24]+1);
av2[1]=t4;
av2[2]=C_make_character(40);
av2[3]=((C_word*)t0)[3];
tp(4,av2);}}

/* k3161 in k3155 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_3163(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_3163,c,av);}
a=C_alloc(4);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3166,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("compiler-syntax.scm:204: ##sys#print"));
t4=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=((C_word*)t2)[4];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t4+1)))(5,av2);}}

/* k3164 in k3161 in k3155 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3166(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_3166,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:204: ##sys#print"));
t3=*((C_word*)lf[21]+1);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[25];
av2[3]=C_SCHEME_FALSE;
av2[4]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(5,av2);}}

/* k3167 in k3164 in k3161 in k3155 in k3121 in k3108 in fail in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in ... */
static void C_ccall f_3169(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3169,c,av);}
t2=((C_word*)t0)[2];
C_trace(C_text("compiler-syntax.scm:204: scheme#get-output-string"));
t3=C_fast_retrieve(lf[19]);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=((C_word*)t2)[2];
av2[2]=((C_word*)t2)[3];
((C_proc)(void*)(*((C_word*)t3+1)))(3,av2);}}

/* k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3178(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3178,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3181,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:212: r"));
t4=((C_word*)t0)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3181(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3181,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3184,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=((C_word*)t2)[10],a[11]=t1,a[12]=((C_word*)t2)[11],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("compiler-syntax.scm:213: r"));
t4=((C_word*)t2)[12];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[38];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3184(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(42,c,3)))){
C_save_and_reclaim((void *)f_3184,c,av);}
a=C_alloc(42);
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3196,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3215,a[2]=((C_word*)t0)[6],a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3263,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t7,a[10]=((C_word*)t0)[4],a[11]=((C_word*)t0)[5],a[12]=t3,a[13]=t15,a[14]=t9,a[15]=t5,a[16]=t1,tmp=(C_word)a,a+=17,tmp));
t17=((C_word*)t15)[1];
f_3263(t17,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);}

/* fetch in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static C_word f_3186(C_word t0){
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

/* next in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3196(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,0,4)))){
C_save_and_reclaim_args((void *)trf_3196,2,t0,t1);}
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
C_trace(C_text("compiler-syntax.scm:220: fail"));
t2=((C_word*)t0)[3];
f_3106(t2,t1,C_SCHEME_TRUE,lf[29],C_SCHEME_END_OF_LIST);}
else{
t2=C_i_car(((C_word*)((C_word*)t0)[2])[1]);
t3=C_i_cdr(((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* endchunk in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3215(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,0,2)))){
C_save_and_reclaim_args((void *)trf_3215,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_i_length(t2);
t4=C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=C_i_car(t2);
t6=C_a_i_list(&a,3,lf[24],t5,((C_word*)t0)[2]);
C_trace(C_text("compiler-syntax.scm:226: push"));
t7=t1;{
C_word av2[2];
av2[0]=t7;
av2[1]=(
C_trace("compiler-syntax.scm:226: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t6)
);
((C_proc)C_fast_retrieve_proc(t7))(2,av2);}}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3246,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("compiler-syntax.scm:229: ##sys#reverse-list->string"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[30]);
C_word av2[3];
av2[0]=*((C_word*)lf[30]+1);
av2[1]=t5;
av2[2]=t2;
tp(3,av2);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;{
C_word av2[2];
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k3244 in endchunk in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_3246(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_3246,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
C_trace(C_text("compiler-syntax.scm:226: push"));
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=(
C_trace("compiler-syntax.scm:226: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2)
);
((C_proc)C_fast_retrieve_proc(t3))(2,av2);}}

/* push in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static C_word f_3253(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_3263(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,0,4)))){
C_save_and_reclaim_args((void *)trf_3263,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_greater_or_equalp(((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3273,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_nullp(((C_word*)((C_word*)t0)[10])[1]))){
t4=t3;{
C_word av2[2];
av2[0]=t4;
av2[1]=C_SCHEME_UNDEFINED;
f_3273(2,av2);}}
else{
C_trace(C_text("compiler-syntax.scm:235: fail"));
t4=((C_word*)t0)[11];
f_3106(t4,t3,C_SCHEME_FALSE,lf[34],C_SCHEME_END_OF_LIST);}}
else{
t3=(
C_trace("compiler-syntax.scm:241: fetch"),
  f_3186(((C_word*)((C_word*)t0)[12])[1])
);
t4=C_eqp(t3,C_make_character(126));
if(C_truep(t4)){
t5=(
C_trace("compiler-syntax.scm:243: fetch"),
  f_3186(((C_word*)((C_word*)t0)[12])[1])
);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3328,a[2]=t5,a[3]=((C_word*)t0)[13],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[2],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("compiler-syntax.scm:244: endchunk"));
t7=((C_word*)((C_word*)t0)[9])[1];
f_3215(t7,t6,t2);}
else{
t5=C_a_i_cons(&a,2,t3,t2);
C_trace(C_text("compiler-syntax.scm:276: loop"));
t8=t1;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}}

/* k3271 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_3273(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(8,c,2)))){
C_save_and_reclaim((void *)f_3273,c,av);}
a=C_alloc(8);
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace(C_text("compiler-syntax.scm:236: endchunk"));
t3=((C_word*)((C_word*)t0)[8])[1];
f_3215(t3,t2,((C_word*)t0)[9]);}

/* k3274 in k3271 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3276(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,2)))){
C_save_and_reclaim((void *)f_3276,c,av);}
a=C_alloc(33);
t2=C_a_i_list(&a,2,((C_word*)t0)[2],((C_word*)t0)[3]);
t3=C_a_i_list(&a,1,t2);
t4=C_a_i_list(&a,2,lf[31],((C_word*)t0)[4]);
t5=C_a_i_list(&a,4,lf[32],((C_word*)t0)[2],C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3299,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:239: scheme#reverse"));
t7=*((C_word*)lf[33]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=((C_word*)((C_word*)t0)[7])[1];
((C_proc)(void*)(*((C_word*)t7+1)))(3,av2);}}

/* k3297 in k3274 in k3271 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in ... */
static void C_ccall f_3299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_3299,c,av);}
a=C_alloc(9);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_3328(C_word c,C_word *av){
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
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(16,c,4)))){
C_save_and_reclaim((void *)f_3328,c,av);}
a=C_alloc(16);
t2=C_u_i_char_upcase(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3334,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:246: next"));
t5=((C_word*)((C_word*)t0)[7])[1];
f_3196(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3368,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:247: next"));
t5=((C_word*)((C_word*)t0)[7])[1];
f_3196(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:248: next"));
t5=((C_word*)((C_word*)t0)[7])[1];
f_3196(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:251: next"));
t5=((C_word*)((C_word*)t0)[7])[1];
f_3196(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3427,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:255: next"));
t5=((C_word*)((C_word*)t0)[7])[1];
f_3196(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3448,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:259: next"));
t5=((C_word*)((C_word*)t0)[7])[1];
f_3196(t5,t4);
case C_make_character(33):
t4=C_a_i_list(&a,2,lf[35],((C_word*)t0)[5]);
t5=(
C_trace("compiler-syntax.scm:261: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_3263(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3470,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:263: next"));
t5=((C_word*)((C_word*)t0)[7])[1];
f_3196(t5,t4);
case C_make_character(126):
t4=C_a_i_list(&a,3,lf[24],C_make_character(126),((C_word*)t0)[5]);
t5=(
C_trace("compiler-syntax.scm:266: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t4)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t6=((C_word*)((C_word*)t0)[3])[1];
f_3263(t6,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
default:
t4=C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=C_a_i_list(&a,3,lf[24],C_make_character(10),((C_word*)t0)[5]);
C_trace(C_text("compiler-syntax.scm:267: push"));
t7=t3;{
C_word *av2=av;
av2[0]=t7;
av2[1]=(
C_trace("compiler-syntax.scm:267: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[6])[1],t6)
);
f_3334(2,av2);}}
else{
if(C_truep(C_u_i_char_whitespacep(((C_word*)t0)[2]))){
t6=(
C_trace("compiler-syntax.scm:270: fetch"),
  f_3186(((C_word*)((C_word*)t0)[9])[1])
);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[9],a[3]=t8,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3524(t10,t3,t6);}
else{
C_trace(C_text("compiler-syntax.scm:274: fail"));
t6=((C_word*)t0)[11];
f_3106(t6,t3,C_SCHEME_TRUE,lf[37],C_a_i_list(&a,1,((C_word*)t0)[2]));}}}}

/* k3332 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_3334,c,av);}
C_trace(C_text("compiler-syntax.scm:275: loop"));
t2=((C_word*)((C_word*)t0)[2])[1];
f_3263(t2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}

/* k3349 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3351(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3351,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_TRUE,((C_word*)t0)[2]);
t3=(
C_trace("compiler-syntax.scm:246: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3263(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3366 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3368(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_3368,c,av);}
a=C_alloc(15);
t2=C_a_i_list(&a,4,lf[21],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);
t3=(
C_trace("compiler-syntax.scm:247: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3263(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3383 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3385(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_3385,c,av);}
a=C_alloc(12);
t2=C_a_i_list(&a,3,lf[24],t1,((C_word*)t0)[2]);
t3=(
C_trace("compiler-syntax.scm:248: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t2)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t4=((C_word*)((C_word*)t0)[4])[1];
f_3263(t4,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}

/* k3404 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3406(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3406,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(2));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
C_trace("compiler-syntax.scm:250: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t5=((C_word*)((C_word*)t0)[5])[1];
f_3263(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3425 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3427(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3427,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(8));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
C_trace("compiler-syntax.scm:254: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t5=((C_word*)((C_word*)t0)[5])[1];
f_3263(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3446 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3448(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(24,c,2)))){
C_save_and_reclaim((void *)f_3448,c,av);}
a=C_alloc(24);
t2=C_a_i_list(&a,3,((C_word*)t0)[2],t1,C_fix(16));
t3=C_a_i_list(&a,4,lf[21],t2,C_SCHEME_FALSE,((C_word*)t0)[3]);
t4=(
C_trace("compiler-syntax.scm:258: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t3)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t5=((C_word*)((C_word*)t0)[5])[1];
f_3263(t5,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* k3468 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_3470(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3470,c,av);}
a=C_alloc(7);
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3473,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:264: next"));
t3=((C_word*)((C_word*)t0)[6])[1];
f_3196(t3,t2);}

/* k3471 in k3468 in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in ... */
static void C_ccall f_3473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3473,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,5,lf[36],lf[20],((C_word*)t0)[2],((C_word*)t0)[3],t1);
t3=(
C_trace("compiler-syntax.scm:265: push"),
  f_3253(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t2)
);
C_trace(C_text("compiler-syntax.scm:275: loop"));
t4=((C_word*)((C_word*)t0)[5])[1];
f_3263(t4,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);}

/* skip in k3326 in loop in k3182 in k3179 in k3176 in k3101 in k3098 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void f_3524(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(29,0,2)))){
C_save_and_reclaim_args((void *)trf_3524,3,t0,t1,t2);}
a=C_alloc(29);
if(C_truep(C_u_i_char_whitespacep(t2))){
t3=(
C_trace("compiler-syntax.scm:272: fetch"),
  f_3186(((C_word*)((C_word*)t0)[2])[1])
);
C_trace(C_text("compiler-syntax.scm:272: skip"));
t6=t1;
t7=t3;
t1=t6;
t2=t7;
goto loop;}
else{
t3=((C_word*)((C_word*)t0)[4])[1];
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,C_s_a_i_minus(&a,2,t3,C_fix(1)));
t5=t1;{
C_word av2[2];
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}}

/* k3594 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3596(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3596,c,av);}
a=C_alloc(3);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:197: scheme#cadar"));
t3=*((C_word*)lf[41]+1);{
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
else{
t2=((C_word*)t0)[2];
f_3100(t2,C_SCHEME_FALSE);}}

/* k3601 in k3594 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3603(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3603,c,av);}
t2=((C_word*)t0)[2];
f_3100(t2,C_i_stringp(t1));}

/* k3605 in k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_3607,c,av);}
C_trace(C_text("compiler-syntax.scm:196: c"));
t2=((C_word*)t0)[2];{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=C_i_caar(((C_word*)t0)[4]);
((C_proc)C_fast_retrieve_proc(t2))(4,av2);}}

/* k3619 in a3077 in chicken.compiler.compiler-syntax#compile-format-string in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3621(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(18,c,2)))){
C_save_and_reclaim((void *)f_3621,c,av);}
a=C_alloc(18);
if(C_truep(C_i_memq(t1,C_fast_retrieve(lf[16])))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_i_stringp(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_3100(t5,t3);}
else{
if(C_truep(C_i_listp(C_u_i_car(((C_word*)t0)[2])))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3596,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3607,a[2]=((C_word*)t0)[9],a[3]=t5,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("compiler-syntax.scm:196: r"));
t7=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[31];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}
else{
t5=t4;
f_3100(t5,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[7];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3629(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,5)))){
C_save_and_reclaim((void *)f_3629,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3634,tmp=(C_word)a,a+=2,tmp);
C_trace(C_text("compiler-syntax.scm:300: r-c-s"));
f_3001(t2,lf[57],t3,lf[58]);}

/* k3630 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3632(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3632,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3634(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3634,c,av);}
a=C_alloc(9);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[45],C_fast_retrieve(lf[16])):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=C_i_cadddr(t2);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3653,a[2]=t9,a[3]=t8,a[4]=t10,a[5]=C_SCHEME_UNDEFINED,a[6]=t1,a[7]=C_SCHEME_UNDEFINED,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("compiler-syntax.scm:307: r"));
t12=t3;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[56];
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3653(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3653,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3656,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:308: r"));
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3654 in k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3656(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3656,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3659,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:309: r"));
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[55];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k3657 in k3654 in k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3659(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(13,c,2)))){
C_save_and_reclaim((void *)f_3659,c,av);}
a=C_alloc(13);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3662,a[2]=C_SCHEME_UNDEFINED,a[3]=((C_word*)t2)[2],a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t2)[3],a[6]=((C_word*)t2)[4],a[7]=C_SCHEME_UNDEFINED,a[8]=C_SCHEME_UNDEFINED,a[9]=t1,a[10]=((C_word*)t2)[5],a[11]=((C_word*)t2)[6],a[12]=((C_word*)t2)[7],tmp=(C_word)a,a+=13,tmp);
C_trace(C_text("compiler-syntax.scm:310: r"));
t4=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[54];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3660 in k3657 in k3654 in k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3662(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3662,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3665,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:311: chicken.base#gensym"));
t4=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* k3663 in k3660 in k3657 in k3654 in k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3665(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3665,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3668,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:312: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3668(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3668,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+2,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3671,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:313: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[53];
((C_proc)(void*)(*((C_word*)t5+1)))(3,av2);}}

/* k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3671(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3671,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+8,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3674,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:314: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3672 in k3669 in k3666 in k3663 in k3660 in k3657 in k3654 in k3651 in a3633 in k3627 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_3674(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(147,c,1)))){
C_save_and_reclaim((void *)f_3674,c,av);}
a=C_alloc(147);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,2,((C_word*)t2)[2],((C_word*)t2)[3]);
t4=C_a_i_list(&a,2,((C_word*)t2)[4],((C_word*)t2)[5]);
t5=C_a_i_list(&a,2,t1,((C_word*)t2)[6]);
t6=C_a_i_list(&a,3,t3,t4,t5);
t7=C_a_i_list(&a,2,lf[46],lf[47]);
t8=C_a_i_list(&a,3,lf[48],t1,t7);
t9=C_a_i_list(&a,2,lf[49],t8);
t10=C_a_i_list(&a,2,t1,t1);
t11=C_a_i_list(&a,2,((C_word*)t2)[2],((C_word*)t2)[2]);
t12=C_a_i_list(&a,2,t10,t11);
t13=C_a_i_list(&a,2,((C_word*)t2)[7],t1);
t14=C_a_i_list(&a,3,lf[50],t1,C_fix(1));
t15=C_a_i_list(&a,3,lf[50],t1,C_fix(0));
t16=C_a_i_list(&a,3,((C_word*)t2)[4],((C_word*)t2)[2],t15);
t17=C_a_i_list(&a,4,lf[51],((C_word*)t2)[8],t14,t16);
t18=C_a_i_list(&a,4,((C_word*)t2)[9],t13,t17,((C_word*)t2)[2]);
t19=C_a_i_list(&a,4,((C_word*)t2)[10],((C_word*)t2)[8],t12,t18);
t20=((C_word*)t2)[11];{
C_word *av2=av;
av2[0]=t20;
av2[1]=C_a_i_list(&a,4,((C_word*)t2)[12],t6,t9,t19);
((C_proc)(void*)(*((C_word*)t20+1)))(2,av2);}}

/* a3756 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3757(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,c,2)))){
C_save_and_reclaim((void *)f_3757,c,av);}
a=C_alloc(9);
t5=C_i_length(t2);
t6=C_eqp(t5,C_fix(4));
t7=(C_truep(t6)?C_i_memq(lf[59],C_fast_retrieve(lf[16])):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=C_i_cadr(t2);
t9=C_i_caddr(t2);
t10=C_i_cadddr(t2);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3776,a[2]=t10,a[3]=t8,a[4]=t9,a[5]=C_SCHEME_UNDEFINED,a[6]=t1,a[7]=C_SCHEME_UNDEFINED,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
C_trace(C_text("compiler-syntax.scm:285: r"));
t12=t3;{
C_word *av2=av;
av2[0]=t12;
av2[1]=t11;
av2[2]=lf[56];
((C_proc)C_fast_retrieve_proc(t12))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3774 in a3756 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3776(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3776,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+7,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3779,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:286: r"));
t4=((C_word*)t0)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[39];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3777 in k3774 in a3756 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3779(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3779,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3782,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:287: r"));
t5=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[54];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k3780 in k3777 in k3774 in a3756 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3782(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(11,c,2)))){
C_save_and_reclaim((void *)f_3782,c,av);}
a=C_alloc(11);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3785,a[2]=((C_word*)t2)[2],a[3]=t1,a[4]=C_SCHEME_UNDEFINED,a[5]=((C_word*)t2)[3],a[6]=C_SCHEME_UNDEFINED,a[7]=((C_word*)t2)[4],a[8]=((C_word*)t2)[5],a[9]=((C_word*)t2)[6],a[10]=((C_word*)t2)[7],tmp=(C_word)a,a+=11,tmp);
C_trace(C_text("compiler-syntax.scm:288: r"));
t4=((C_word*)t2)[8];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3783 in k3780 in k3777 in k3774 in a3756 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3785(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3785,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+6,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3788,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:289: chicken.base#gensym"));
t4=*((C_word*)lf[52]+1);{
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

/* k3786 in k3783 in k3780 in k3777 in k3774 in a3756 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3788(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_3788,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3791,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:290: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k3789 in k3786 in k3783 in k3780 in k3777 in k3774 in a3756 in k3068 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3791(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(117,c,1)))){
C_save_and_reclaim((void *)f_3791,c,av);}
a=C_alloc(117);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,2,t1,((C_word*)t2)[2]);
t4=C_a_i_list(&a,1,t3);
t5=C_a_i_list(&a,2,lf[46],lf[60]);
t6=C_a_i_list(&a,3,lf[48],t1,t5);
t7=C_a_i_list(&a,2,lf[49],t6);
t8=C_a_i_list(&a,2,t1,t1);
t9=C_a_i_list(&a,1,t8);
t10=C_a_i_list(&a,2,((C_word*)t2)[3],t1);
t11=C_a_i_list(&a,3,lf[50],t1,C_fix(0));
t12=C_a_i_list(&a,3,lf[50],t1,C_fix(1));
t13=C_a_i_list(&a,3,lf[51],((C_word*)t2)[4],t12);
t14=C_a_i_list(&a,3,((C_word*)t2)[5],t11,t13);
t15=C_a_i_list(&a,4,((C_word*)t2)[6],t10,t14,((C_word*)t2)[7]);
t16=C_a_i_list(&a,4,((C_word*)t2)[8],((C_word*)t2)[4],t9,t15);
t17=((C_word*)t2)[9];{
C_word *av2=av;
av2[0]=t17;
av2[1]=C_a_i_list(&a,4,((C_word*)t2)[10],t4,t7,t16);
((C_proc)(void*)(*((C_word*)t17+1)))(2,av2);}}

/* a3861 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3862(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_3862,c,av);}
a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3866,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("compiler-syntax.scm:186: compile-format-string"));
f_3072(t5,lf[64],lf[65],t2,C_i_cdr(t2),t3,t4);}

/* k3864 in a3861 in k3065 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3866(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3866,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3874 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3875(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(4,c,7)))){
C_save_and_reclaim((void *)f_3875,c,av);}
a=C_alloc(4);
t5=C_i_length(t2);
if(C_truep(C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3885,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=C_i_cadr(t2);
t8=C_u_i_cdr(t2);
C_trace(C_text("compiler-syntax.scm:175: compile-format-string"));
f_3072(t6,lf[68],t7,t2,C_u_i_cdr(t8),t3,t4);}
else{
t6=t1;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t6+1)))(2,av2);}}}

/* k3883 in a3874 in k3062 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3885(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_3885,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=(C_truep(t1)?t1:((C_word*)t0)[3]);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a3901 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3902(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,2)))){
C_save_and_reclaim((void *)f_3902,c,av);}
a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3906,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:157: chicken.base#gensym"));
t6=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[40];
((C_proc)(void*)(*((C_word*)t6+1)))(3,av2);}}

/* k3904 in a3901 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3906(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(6,c,7)))){
C_save_and_reclaim((void *)f_3906,c,av);}
a=C_alloc(6);
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3909,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
t4=C_eqp(t3,lf[73]);
t5=(C_truep(t4)?lf[74]:lf[17]);
C_trace(C_text("compiler-syntax.scm:158: compile-format-string"));
f_3072(t2,t5,t1,((C_word*)t0)[4],C_u_i_cdr(((C_word*)t0)[4]),((C_word*)t0)[3],((C_word*)t0)[5]);}

/* k3907 in k3904 in a3901 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3909(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(7,c,2)))){
C_save_and_reclaim((void *)f_3909,c,av);}
a=C_alloc(7);
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3919,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=C_SCHEME_UNDEFINED,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:162: r"));
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[39];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}
else{
t2=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t2;
av2[1]=((C_word*)t0)[5];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k3917 in k3907 in k3904 in a3901 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3919(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_3919,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+4,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3943,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:162: r"));
t4=((C_word*)t0)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[72];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k3929 in k3941 in k3917 in k3907 in k3904 in a3901 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3931(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(18,c,1)))){
C_save_and_reclaim((void *)f_3931,c,av);}
a=C_alloc(18);
t2=C_a_i_list(&a,2,t1,((C_word*)t0)[2]);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list(&a,4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* k3941 in k3917 in k3907 in k3904 in a3901 in k3059 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3943(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_3943,c,av);}
a=C_alloc(19);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,1,t1);
t4=C_a_i_list(&a,2,((C_word*)t2)[2],t3);
t5=C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3931,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=t5,a[6]=((C_word*)t2)[5],tmp=(C_word)a,a+=7,tmp);
C_trace(C_text("compiler-syntax.scm:164: r"));
t7=((C_word*)t2)[6];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t7;
av2[1]=t6;
av2[2]=lf[71];
((C_proc)C_fast_retrieve_proc(t7))(3,av2);}}

/* a3985 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3986(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3986,c,av);}
a=C_alloc(5);
t5=C_i_length(t2);
t6=C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?C_i_memq(lf[83],C_fast_retrieve(lf[16])):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3996,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("compiler-syntax.scm:146: r"));
t9=t3;{
C_word *av2=av;
av2[0]=t9;
av2[1]=t8;
av2[2]=lf[85];
((C_proc)C_fast_retrieve_proc(t9))(3,av2);}}
else{
t8=t1;{
C_word *av2=av;
av2[0]=t8;
av2[1]=t2;
((C_proc)(void*)(*((C_word*)t8+1)))(2,av2);}}}

/* k3994 in a3985 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_3996(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,2)))){
C_save_and_reclaim((void *)f_3996,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4003,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("compiler-syntax.scm:147: r"));
t3=((C_word*)t0)[4];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t3;
av2[1]=t2;
av2[2]=lf[84];
((C_proc)C_fast_retrieve_proc(t3))(3,av2);}}

/* k4001 in k3994 in a3985 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4003(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4003,c,av);}
a=C_alloc(14);
t2=C_a_i_list(&a,1,((C_word*)t0)[2]);
t3=C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4016,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4016(t8,t4,t3);}

/* k4012 in k4001 in k3994 in a3985 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4014(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(9,c,1)))){
C_save_and_reclaim((void *)f_4014,c,av);}
a=C_alloc(9);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* foldr1082 in k4001 in k3994 in a3985 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_4016(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4016,3,t0,t1,t2);}
a=C_alloc(4);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4034,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
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

/* k4032 in foldr1082 in k4001 in k3994 in a3985 in k3056 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4034(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4034,c,av);}
a=C_alloc(6);
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_a_i_list2(&a,2,((C_word*)t0)[3],t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4050(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4050,c,av);}
a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4054,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=C_SCHEME_UNDEFINED,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,a[8]=C_SCHEME_UNDEFINED,a[9]=t1,a[10]=C_SCHEME_UNDEFINED,a[11]=C_SCHEME_UNDEFINED,a[12]=C_SCHEME_UNDEFINED,a[13]=C_SCHEME_UNDEFINED,a[14]=t3,tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("compiler-syntax.scm:103: r"));
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4054(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4054,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+8,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4057,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:104: r"));
t4=((C_word*)t0)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4057(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4057,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+13,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4060,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:105: r"));
t5=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[97];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4060(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4060,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+12,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4063,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:106: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4063(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4063,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4066,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:107: r"));
t5=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[96];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4066(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4066,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+4,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4069,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:108: r"));
t5=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[95];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4069(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4069,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+11,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4072,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:109: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4072(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4072,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4075,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:110: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4075(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4075,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+5,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4078,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:111: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4078(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4078,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4081,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:112: r"));
t5=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[31];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4081(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4081,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4084,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:113: r"));
t5=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[94];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4084(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4084,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:114: r"));
t4=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4087(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4087,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4090,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:115: r"));
t4=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[93];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4090(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,2)))){
C_save_and_reclaim((void *)f_4090,c,av);}
a=C_alloc(15);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4093,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=((C_word*)t2)[7],a[8]=((C_word*)t2)[8],a[9]=((C_word*)t2)[9],a[10]=t1,a[11]=((C_word*)t2)[10],a[12]=((C_word*)t2)[11],a[13]=((C_word*)t2)[12],a[14]=((C_word*)t2)[13],tmp=(C_word)a,a+=15,tmp);
C_trace(C_text("compiler-syntax.scm:116: r"));
t4=((C_word*)t2)[14];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[54];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_4093(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(20,c,2)))){
C_save_and_reclaim((void *)f_4093,c,av);}
a=C_alloc(20);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4102,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t1,a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_i_memq(lf[91],C_fast_retrieve(lf[92])))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4580,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:119: length+"));
f_2789(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_4102(t4,C_SCHEME_FALSE);}}

/* k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void f_4102(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4102,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[87]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4116,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4538,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4538(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[10];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[7];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in ... */
static void C_ccall f_4116(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(70,c,4)))){
C_save_and_reclaim((void *)f_4116,c,av);}
a=C_alloc(70);
t2=((C_word*)t0)[2];
t3=C_a_i_list(&a,1,lf[88]);
t4=C_a_i_list(&a,2,((C_word*)t2)[3],C_SCHEME_END_OF_LIST);
t5=C_a_i_list(&a,3,((C_word*)t2)[4],t3,t4);
t6=C_a_i_list(&a,2,((C_word*)t2)[5],t5);
t7=C_a_i_list(&a,1,t6);
t8=C_a_i_list(&a,2,((C_word*)t2)[6],((C_word*)t2)[5]);
t9=C_i_cadr(((C_word*)t2)[7]);
t10=C_a_i_list(&a,2,((C_word*)t2)[8],t9);
t11=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t12=t11;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=((C_word*)t13)[1];
t15=C_i_check_list_2(t1,lf[87]);
t16=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_4468,a[2]=t10,a[3]=t8,a[4]=((C_word*)t2)[9],a[5]=((C_word*)t2)[10],a[6]=t7,a[7]=((C_word*)t2)[3],a[8]=((C_word*)t2)[11],a[9]=((C_word*)t2)[12],a[10]=((C_word*)t2)[8],a[11]=((C_word*)t2)[4],a[12]=((C_word*)t2)[13],a[13]=((C_word*)t2)[5],a[14]=((C_word*)t2)[14],a[15]=((C_word*)t2)[15],a[16]=((C_word*)t2)[6],a[17]=((C_word*)t2)[16],a[18]=t1,tmp=(C_word)a,a+=19,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4470,a[2]=t13,a[3]=t18,a[4]=t14,tmp=(C_word)a,a+=5,tmp));
t20=((C_word*)t18)[1];
f_4470(t20,t16,t1,((C_word*)t2)[2]);}

/* k4137 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in ... */
static void C_ccall f_4139(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(15,c,1)))){
C_save_and_reclaim((void *)f_4139,c,av);}
a=C_alloc(15);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[4];{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[5],t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* g924 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in ... */
static C_word f_4144(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[87]);
t3=C_a_i_list(&a,3,lf[48],t1,t2);
return(C_a_i_list(&a,2,lf[49],t3));}

/* k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in ... */
static void C_ccall f_4159(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(29,c,4)))){
C_save_and_reclaim((void *)f_4159,c,av);}
a=C_alloc(29);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t1,a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4366,a[2]=t4,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4366(t10,t6,((C_word*)t0)[15],((C_word*)t0)[15]);}

/* k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in ... */
static void C_ccall f_4174(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(33,c,3)))){
C_save_and_reclaim((void *)f_4174,c,av);}
a=C_alloc(33);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t1,a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4332,a[2]=t6,a[3]=t4,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4332(t11,t7,((C_word*)t0)[16]);}

/* k4220 in k4282 in k4328 in k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in ... */
static void C_ccall f_4222(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(57,c,3)))){
C_save_and_reclaim((void *)f_4222,c,av);}
a=C_alloc(57);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=C_a_i_list(&a,5,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[6],t3);
t5=C_a_i_list(&a,3,lf[50],((C_word*)t0)[7],C_fix(1));
t6=C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[9],t4,t5);
t7=C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[10],t6);
t8=C_a_i_list(&a,1,t7);
C_trace(C_text("compiler-syntax.scm:121: ##sys#append"));
t9=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t9;
av2[1]=((C_word*)t0)[11];
av2[2]=((C_word*)t0)[12];
av2[3]=t8;
((C_proc)(void*)(*((C_word*)t9+1)))(4,av2);}}

/* map-loop1039 in k4282 in k4328 in k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in ... */
static void f_4224(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4224,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(1));
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

/* k4282 in k4328 in k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in ... */
static void C_ccall f_4284(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(73,c,3)))){
C_save_and_reclaim((void *)f_4284,c,av);}
a=C_alloc(73);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_list(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=C_a_i_list(&a,3,((C_word*)t0)[4],t2,t3);
t5=C_a_i_list(&a,2,((C_word*)t0)[5],t4);
t6=C_a_i_list(&a,1,t5);
t7=C_a_i_list(&a,4,lf[89],((C_word*)t0)[6],C_fix(1),((C_word*)t0)[5]);
t8=C_a_i_list(&a,3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);
t9=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=((C_word*)t11)[1];
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4222,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=t7,a[6]=t8,a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],tmp=(C_word)a,a+=13,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4224,a[2]=t11,a[3]=t15,a[4]=t12,tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_4224(t17,t13,((C_word*)t0)[16]);}

/* map-loop1009 in k4328 in k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in ... */
static void f_4286(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4286,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(0));
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

/* g985 in k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in ... */
static C_word f_4323(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k4328 in k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in ... */
static void C_ccall f_4330(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(32,c,3)))){
C_save_and_reclaim((void *)f_4330,c,av);}
a=C_alloc(32);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t2,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4286,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4286(t11,t7,((C_word*)t0)[16]);}

/* map-loop979 in k4172 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in ... */
static void f_4332(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4332,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(
C_trace("compiler-syntax.scm:129: g985"),
  f_4323(C_a_i(&a,6),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* map-loop948 in k4157 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in ... */
static void f_4366(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4366,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
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

/* map-loop918 in k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in ... */
static void f_4414(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_4414,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=(
C_trace("compiler-syntax.scm:125: g924"),
  f_4144(C_a_i(&a,21),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k4466 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in ... */
static void C_ccall f_4468(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(44,c,3)))){
C_save_and_reclaim((void *)f_4468,c,av);}
a=C_alloc(44);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4139,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4144,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[4],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=t4,a[15]=((C_word*)t0)[18],tmp=(C_word)a,a+=16,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4414,a[2]=t9,a[3]=t7,a[4]=t12,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_4414(t14,t10,((C_word*)t0)[18]);}

/* map-loop887 in k4114 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in ... */
static void f_4470(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4470,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
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

/* map-loop857 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in ... */
static void f_4538(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4538,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:120: chicken.base#gensym"));
t4=*((C_word*)lf[52]+1);{
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

/* k4561 in map-loop857 in k4100 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in ... */
static void C_ccall f_4563(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4563,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4538(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k4578 in k4091 in k4088 in k4085 in k4082 in k4079 in k4076 in k4073 in k4070 in k4067 in k4064 in k4061 in k4058 in k4055 in k4052 in a4049 in k3053 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_4580(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_4580,c,av);}
t2=((C_word*)t0)[2];
f_4102(t2,C_i_greaterp(t1,C_fix(2)));}

/* a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4582(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4582,c,av);}
a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4586,a[2]=t2,a[3]=C_SCHEME_UNDEFINED,a[4]=t1,a[5]=C_SCHEME_UNDEFINED,a[6]=C_SCHEME_UNDEFINED,a[7]=C_SCHEME_UNDEFINED,a[8]=C_SCHEME_UNDEFINED,a[9]=C_SCHEME_UNDEFINED,a[10]=C_SCHEME_UNDEFINED,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("compiler-syntax.scm:73: r"));
t6=t3;{
C_word *av2=av;
av2[0]=t6;
av2[1]=t5;
av2[2]=lf[39];
((C_proc)C_fast_retrieve_proc(t6))(3,av2);}}

/* k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4586(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_4586,c,av);}
a=C_alloc(3);
t2=C_mutate(((C_word *)t0)+5,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4589,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:74: r"));
t4=((C_word*)t0)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[55];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4589(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4589,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+10,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4592,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:75: r"));
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[102];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4592(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4592,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+8,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4595,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:76: chicken.base#gensym"));
t5=*((C_word*)lf[52]+1);{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)(void*)(*((C_word*)t5+1)))(2,av2);}}

/* k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4595(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4595,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+3,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4598,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:77: r"));
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[94];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4598(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4598,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+9,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4601,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:78: r"));
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[31];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4601(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4601,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+6,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4604,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:79: r"));
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[93];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4604(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4604,c,av);}
a=C_alloc(3);
t2=((C_word*)t0)[2];
t3=C_mutate(((C_word *)t2)+7,t1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4607,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:80: r"));
t5=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t5;
av2[1]=t4;
av2[2]=lf[54];
((C_proc)C_fast_retrieve_proc(t5))(3,av2);}}

/* k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4607(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(12,c,2)))){
C_save_and_reclaim((void *)f_4607,c,av);}
a=C_alloc(12);
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4610,a[2]=((C_word*)t2)[2],a[3]=((C_word*)t2)[3],a[4]=((C_word*)t2)[4],a[5]=((C_word*)t2)[5],a[6]=((C_word*)t2)[6],a[7]=t1,a[8]=((C_word*)t2)[7],a[9]=((C_word*)t2)[8],a[10]=((C_word*)t2)[9],a[11]=((C_word*)t2)[10],tmp=(C_word)a,a+=12,tmp);
C_trace(C_text("compiler-syntax.scm:81: r"));
t4=((C_word*)t2)[11];{
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=t4;
av2[1]=t3;
av2[2]=lf[84];
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4610(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_4610,c,av);}
a=C_alloc(16);
t2=C_i_cddr(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4619,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_i_memq(lf[101],C_fast_retrieve(lf[92])))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5037,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("compiler-syntax.scm:84: length+"));
f_2789(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_4619(t4,C_SCHEME_FALSE);}}

/* k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_4619(C_word t0,C_word t1){
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
C_save_and_reclaim_args((void *)trf_4619,2,t0,t1);}
a=C_alloc(15);
if(C_truep(t1)){
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=C_i_check_list_2(((C_word*)t0)[2],lf[87]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4633,a[2]=t0,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4995,a[2]=t4,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4995(t11,t7,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];{
C_word av2[2];
av2[0]=t2;
av2[1]=((C_word*)t0)[3];
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4633(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(31,c,4)))){
C_save_and_reclaim((void *)f_4633,c,av);}
a=C_alloc(31);
t2=((C_word*)t0)[2];
t3=C_i_cadr(((C_word*)t2)[3]);
t4=C_a_i_list(&a,2,((C_word*)t2)[4],t3);
t5=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=((C_word*)t7)[1];
t9=C_i_check_list_2(t1,lf[87]);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4941,a[2]=t4,a[3]=((C_word*)t2)[5],a[4]=((C_word*)t2)[6],a[5]=((C_word*)t2)[7],a[6]=((C_word*)t2)[8],a[7]=((C_word*)t2)[9],a[8]=((C_word*)t2)[4],a[9]=((C_word*)t2)[10],a[10]=((C_word*)t2)[11],a[11]=((C_word*)t2)[12],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4943,a[2]=t7,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_4943(t14,t10,t1,((C_word*)t2)[2]);}

/* k4646 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4648(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_4648,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* g689 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static C_word f_4653(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_overflow_check;{}
t2=C_a_i_list(&a,2,((C_word*)t0)[2],lf[100]);
t3=C_a_i_list(&a,3,lf[48],t1,t2);
return(C_a_i_list(&a,2,lf[49],t3));}

/* k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4668(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,c,4)))){
C_save_and_reclaim((void *)f_4668,c,av);}
a=C_alloc(24);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4847,a[2]=t4,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_4847(t10,t6,((C_word*)t0)[10],((C_word*)t0)[10]);}

/* k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4683(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(28,c,3)))){
C_save_and_reclaim((void *)f_4683,c,av);}
a=C_alloc(28);
t2=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=((C_word*)t4)[1];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4804,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4811,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4813,a[2]=t6,a[3]=t4,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_4813(t11,t7,((C_word*)t0)[11]);}

/* k4717 in k4763 in k4809 in k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in ... */
static void C_ccall f_4719(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(39,c,3)))){
C_save_and_reclaim((void *)f_4719,c,av);}
a=C_alloc(39);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,lf[51],t2);
t4=C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[6],t4);
t6=C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[2],((C_word*)t0)[8],t5);
t7=C_a_i_list(&a,1,t6);
C_trace(C_text("compiler-syntax.scm:86: ##sys#append"));
t8=*((C_word*)lf[90]+1);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=t8;
av2[1]=((C_word*)t0)[9];
av2[2]=((C_word*)t0)[10];
av2[3]=t7;
((C_proc)(void*)(*((C_word*)t8+1)))(4,av2);}}

/* map-loop804 in k4763 in k4809 in k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in ... */
static void f_4721(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4721,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(1));
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

/* k4763 in k4809 in k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void C_ccall f_4765(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(26,c,3)))){
C_save_and_reclaim((void *)f_4765,c,av);}
a=C_alloc(26);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4721,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4721(t11,t7,((C_word*)t0)[11]);}

/* map-loop774 in k4809 in k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in ... */
static void f_4767(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim_args((void *)trf_4767,3,t0,t1,t2);}
a=C_alloc(12);
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=C_a_i_list(&a,3,lf[50],t3,C_fix(0));
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

/* g750 in k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static C_word f_4804(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_stack_overflow_check;{}
return(C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k4809 in k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void C_ccall f_4811(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(27,c,3)))){
C_save_and_reclaim((void *)f_4811,c,av);}
a=C_alloc(27);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=((C_word*)t5)[1];
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4765,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4767,a[2]=t5,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4767(t11,t7,((C_word*)t0)[11]);}

/* map-loop744 in k4681 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 in ... */
static void f_4813(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,2)))){
C_save_and_reclaim_args((void *)trf_4813,3,t0,t1,t2);}
a=C_alloc(9);
if(C_truep(C_i_pairp(t2))){
t3=(
C_trace("compiler-syntax.scm:92: g750"),
  f_4804(C_a_i(&a,6),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* map-loop713 in k4666 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_4847(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4847,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
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

/* map-loop683 in k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_4895(C_word t0,C_word t1,C_word t2){
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
if(C_unlikely(!C_demand(C_calculate_demand(24,0,2)))){
C_save_and_reclaim_args((void *)trf_4895,3,t0,t1,t2);}
a=C_alloc(24);
if(C_truep(C_i_pairp(t2))){
t3=(
C_trace("compiler-syntax.scm:88: g689"),
  f_4653(C_a_i(&a,21),((C_word*)t0)[2],C_slot(t2,C_fix(0)))
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

/* k4939 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_4941(C_word c,C_word *av){
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
if(C_unlikely(!C_demand(C_calculate_demand(35,c,3)))){
C_save_and_reclaim((void *)f_4941,c,av);}
a=C_alloc(35);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4648,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_cons(&a,2,C_SCHEME_UNDEFINED,C_SCHEME_END_OF_LIST);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=((C_word*)t6)[1];
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4653,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4668,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[4],a[9]=t3,a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4895,a[2]=t8,a[3]=t6,a[4]=t11,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_4895(t13,t9,((C_word*)t0)[12]);}

/* map-loop652 in k4631 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_4943(C_word t0,C_word t1,C_word t2,C_word t3){
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
if(C_unlikely(!C_demand(C_calculate_demand(9,0,3)))){
C_save_and_reclaim_args((void *)trf_4943,4,t0,t1,t2,t3);}
a=C_alloc(9);
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=C_slot(t2,C_fix(0));
t7=C_slot(t3,C_fix(0));
t8=C_a_i_list2(&a,2,t6,t7);
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

/* map-loop622 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void f_4995(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,0,2)))){
C_save_and_reclaim_args((void *)trf_4995,3,t0,t1,t2);}
a=C_alloc(6);
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace(C_text("compiler-syntax.scm:85: chicken.base#gensym"));
t4=*((C_word*)lf[52]+1);{
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

/* k5018 in map-loop622 in k4617 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_5020(C_word c,C_word *av){
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
C_save_and_reclaim((void *)f_5020,c,av);}
a=C_alloc(3);
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=C_i_setslot(((C_word*)((C_word*)t0)[2])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4995(t5,((C_word*)t0)[4],C_slot(((C_word*)t0)[5],C_fix(1)));}

/* k5035 in k4608 in k4605 in k4602 in k4599 in k4596 in k4593 in k4590 in k4587 in k4584 in a4581 in k1706 in k1703 in k1700 in k1697 in k1694 in k1691 */
static void C_ccall f_5037(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_5037,c,av);}
t2=((C_word*)t0)[2];
f_4619(t2,C_i_greaterp(t1,C_fix(2)));}

/* toplevel */
static int toplevel_initialized=0;

void C_ccall C_compiler_2dsyntax_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("compiler-syntax"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_compiler_2dsyntax_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(1003))){
C_save(t1);
C_rereclaim2(1003*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,105);
lf[0]=C_h_intern(&lf[0],15, C_text("compiler-syntax"));
lf[1]=C_h_intern(&lf[1],33, C_text("chicken.compiler.compiler-syntax#"));
lf[3]=C_h_intern(&lf[3],59, C_text("chicken.compiler.compiler-syntax#compiler-syntax-statistics"));
lf[4]=C_h_intern(&lf[4],26, C_text("##sys#compiler-syntax-hook"));
lf[5]=C_h_intern(&lf[5],26, C_text("chicken.base#alist-update!"));
lf[6]=C_h_intern(&lf[6],22, C_text("chicken.base#alist-ref"));
lf[7]=C_h_intern(&lf[7],10, C_text("scheme#eq?"));
lf[9]=C_h_intern(&lf[9],10, C_text("##sys#put!"));
lf[10]=C_h_intern(&lf[10],26, C_text("##compiler#compiler-syntax"));
lf[11]=C_h_intern(&lf[11],13, C_text("scheme#append"));
lf[12]=C_h_intern(&lf[12],31, C_text("##sys#default-macro-environment"));
lf[13]=C_h_intern(&lf[13],24, C_text("##sys#ensure-transformer"));
lf[14]=C_h_intern(&lf[14],20, C_text("##sys#er-transformer"));
lf[16]=C_h_intern(&lf[16],39, C_text("chicken.compiler.core#extended-bindings"));
lf[17]=C_h_intern(&lf[17],6, C_text("format"));
lf[18]=C_h_intern(&lf[18],20, C_text("chicken.base#warning"));
lf[19]=C_h_intern(&lf[19],24, C_text("scheme#get-output-string"));
lf[20]=C_h_intern(&lf[20],22, C_text("chicken.format#fprintf"));
lf[21]=C_h_intern(&lf[21],11, C_text("##sys#print"));
lf[22]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\054\040\000"));
lf[23]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\025\047\054\040\151\156\040\146\157\162\155\141\164\040\163\164\162\151\156\147\040\000"));
lf[24]=C_h_intern(&lf[24],18, C_text("##sys#write-char-0"));
lf[25]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\003\051\040\000"));
lf[26]=C_h_intern(&lf[26],25, C_text("scheme#open-output-string"));
lf[27]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\001\000"));
lf[28]=C_h_intern(&lf[28],30, C_text("chicken.syntax#get-line-number"));
lf[29]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\060\164\157\157\040\146\145\167\040\141\162\147\165\155\145\156\164\163\040\164\157\040\146\157\162\155\141\164\164\145\144\040\157\165\164\160\165\164\040\160\162\157\143\145\144\165\162\145\000"));
lf[30]=C_h_intern(&lf[30],26, C_text("##sys#reverse-list->string"));
lf[31]=C_h_intern(&lf[31],5, C_text("quote"));
lf[32]=C_h_intern(&lf[32],23, C_text("##sys#check-output-port"));
lf[33]=C_h_intern(&lf[33],14, C_text("scheme#reverse"));
lf[34]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\061\164\157\157\040\155\141\156\171\040\141\162\147\165\155\145\156\164\163\040\164\157\040\146\157\162\155\141\164\164\145\144\040\157\165\164\160\165\164\040\160\162\157\143\145\144\165\162\145\000"));
lf[35]=C_h_intern(&lf[35],18, C_text("##sys#flush-output"));
lf[36]=C_h_intern(&lf[36],11, C_text("##sys#apply"));
lf[37]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\045\151\154\154\145\147\141\154\040\146\157\162\155\141\164\055\163\164\162\151\156\147\040\143\150\141\162\141\143\164\145\162\040\140\176\143\047\000"));
lf[38]=C_h_intern(&lf[38],14, C_text("number->string"));
lf[39]=C_h_intern(&lf[39],3, C_text("let"));
lf[40]=C_h_intern(&lf[40],3, C_text("out"));
lf[41]=C_h_intern(&lf[41],12, C_text("scheme#cadar"));
lf[42]=C_h_intern(&lf[42],26, C_text("chicken.base#symbol-append"));
lf[43]=C_h_intern(&lf[43],15, C_text("chicken.format#"));
lf[44]=C_h_intern(&lf[44],37, C_text("scheme#call-with-current-continuation"));
lf[45]=C_h_intern(&lf[45],18, C_text("chicken.base#foldl"));
lf[46]=C_h_intern(&lf[46],12, C_text("##core#quote"));
lf[47]=C_h_intern(&lf[47],5, C_text("foldl"));
lf[48]=C_h_intern(&lf[48],16, C_text("##sys#check-list"));
lf[49]=C_h_intern(&lf[49],12, C_text("##core#check"));
lf[50]=C_h_intern(&lf[50],10, C_text("##sys#slot"));
lf[51]=C_h_intern(&lf[51],10, C_text("##core#app"));
lf[52]=C_h_intern(&lf[52],19, C_text("chicken.base#gensym"));
lf[53]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\146\157\154\144\154\000"));
lf[54]=C_h_intern(&lf[54],5, C_text("pair?"));
lf[55]=C_h_intern(&lf[55],2, C_text("if"));
lf[56]=C_h_intern(&lf[56],4, C_text("let*"));
lf[57]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\154\376\377\016"));
lf[58]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\377\016"));
lf[59]=C_h_intern(&lf[59],18, C_text("chicken.base#foldr"));
lf[60]=C_h_intern(&lf[60],5, C_text("foldr"));
lf[61]=C_decode_literal(C_heaptop,C_text("\376\002\000\000\006\146\157\154\144\162\000"));
lf[62]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\022\001\143\150\151\143\153\145\156\056\142\141\163\145\043\146\157\154\144\162\376\377\016"));
lf[63]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\377\016"));
lf[64]=C_h_intern(&lf[64],6, C_text("printf"));
lf[65]=C_h_intern(&lf[65],21, C_text("##sys#standard-output"));
lf[66]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\160\162\151\156\164\146\376\377\016"));
lf[67]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\144\151\163\160\154\141\171\376\001\000\000\016\001\163\143\150\145\155\145\043\144\151\163\160\154\141\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\167\162\151\164\145\376\001\000\000\014\001\163\143\150\145\155\145\043\167\162\151\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\143\150\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\167\162\151\164\145\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\031\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\030\001\163\143\150\145\155\145\043\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\377\016"));
lf[68]=C_h_intern(&lf[68],7, C_text("fprintf"));
lf[69]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\160\162\151\156\164\146\376\377\016"));
lf[70]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\007\001\144\151\163\160\154\141\171\376\001\000\000\016\001\163\143\150\145\155\145\043\144\151\163\160\154\141\171\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\167\162\151\164\145\376\001\000\000\014\001\163\143\150\145\155\145\043\167\162\151\164\145\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\001\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\001\000\000\025\001\163\143\150\145\155\145\043\156\165\155\142\145\162\055\076\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001\167\162\151\164\145\055\143\150\141\162\376\001\000\000\021\001\163\143\150\145\155\145\043\167\162\151\164\145\055\143\150\141\162\376\003\000\000\002\376\003\000\000\002\376\001\000\000\022\001\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\031\001\163\143\150\145\155\145\043\157\160\145\156\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021\001\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\001\000\000\030\001\163\143\150\145\155\145\043\147\145\164\055\157\165\164\160\165\164\055\163\164\162\151\156\147\376\377\016"));
lf[71]=C_h_intern(&lf[71],17, C_text("get-output-string"));
lf[72]=C_h_intern(&lf[72],18, C_text("open-output-string"));
lf[73]=C_h_intern(&lf[73],22, C_text("chicken.format#sprintf"));
lf[74]=C_h_intern(&lf[74],7, C_text("sprintf"));
lf[75]=C_h_intern(&lf[75],7, C_text("display"));
lf[76]=C_h_intern(&lf[76],14, C_text("scheme#display"));
lf[77]=C_h_intern(&lf[77],5, C_text("write"));
lf[78]=C_h_intern(&lf[78],12, C_text("scheme#write"));
lf[79]=C_h_intern(&lf[79],21, C_text("scheme#number->string"));
lf[80]=C_h_intern(&lf[80],10, C_text("write-char"));
lf[81]=C_h_intern(&lf[81],17, C_text("scheme#write-char"));
lf[82]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\026\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\163\160\162\151\156\164\146\376\003\000\000\002\376\001\000\000\025\001\143\150\151\143\153\145\156\056\146\157\162\155\141\164\043\146\157\162\155\141\164\376\377\016"));
lf[83]=C_h_intern(&lf[83],14, C_text("chicken.base#o"));
lf[84]=C_h_intern(&lf[84],6, C_text("lambda"));
lf[85]=C_h_intern(&lf[85],3, C_text("tmp"));
lf[86]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\016\001\143\150\151\143\153\145\156\056\142\141\163\145\043\157\376\377\016"));
lf[87]=C_h_intern(&lf[87],3, C_text("map"));
lf[88]=C_h_intern(&lf[88],16, C_text("##core#undefined"));
lf[89]=C_h_intern(&lf[89],13, C_text("##sys#setslot"));
lf[90]=C_h_intern(&lf[90],12, C_text("##sys#append"));
lf[91]=C_h_intern(&lf[91],10, C_text("scheme#map"));
lf[92]=C_h_intern(&lf[92],39, C_text("chicken.compiler.core#standard-bindings"));
lf[93]=C_h_intern(&lf[93],3, C_text("and"));
lf[94]=C_h_intern(&lf[94],5, C_text("begin"));
lf[95]=C_h_intern(&lf[95],4, C_text("set!"));
lf[96]=C_h_intern(&lf[96],4, C_text("cons"));
lf[97]=C_h_intern(&lf[97],8, C_text("map-loop"));
lf[98]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001\163\143\150\145\155\145\043\155\141\160\376\003\000\000\002\376\001\000\000\011\001\043\043\163\171\163\043\155\141\160\376\377\016"));
lf[99]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004\001\143\157\156\163\376\001\000\000\013\001\163\143\150\145\155\145\043\143\157\156\163\376\377\016"));
lf[100]=C_h_intern(&lf[100],8, C_text("for-each"));
lf[101]=C_h_intern(&lf[101],15, C_text("scheme#for-each"));
lf[102]=C_h_intern(&lf[102],13, C_text("for-each-loop"));
lf[103]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\017\001\163\143\150\145\155\145\043\146\157\162\055\145\141\143\150\376\003\000\000\002\376\001\000\000\016\001\043\043\163\171\163\043\146\157\162\055\145\141\143\150\376\377\016"));
lf[104]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005\001\160\141\151\162\077\376\001\000\000\014\001\163\143\150\145\155\145\043\160\141\151\162\077\376\377\016"));
C_register_lf2(lf,105,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1693,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[173] = {
{C_text("f_1693:compiler_2dsyntax_2escm"),(void*)f_1693},
{C_text("f_1696:compiler_2dsyntax_2escm"),(void*)f_1696},
{C_text("f_1699:compiler_2dsyntax_2escm"),(void*)f_1699},
{C_text("f_1702:compiler_2dsyntax_2escm"),(void*)f_1702},
{C_text("f_1705:compiler_2dsyntax_2escm"),(void*)f_1705},
{C_text("f_1708:compiler_2dsyntax_2escm"),(void*)f_1708},
{C_text("f_2789:compiler_2dsyntax_2escm"),(void*)f_2789},
{C_text("f_2795:compiler_2dsyntax_2escm"),(void*)f_2795},
{C_text("f_2989:compiler_2dsyntax_2escm"),(void*)f_2989},
{C_text("f_2993:compiler_2dsyntax_2escm"),(void*)f_2993},
{C_text("f_2997:compiler_2dsyntax_2escm"),(void*)f_2997},
{C_text("f_3001:compiler_2dsyntax_2escm"),(void*)f_3001},
{C_text("f_3006:compiler_2dsyntax_2escm"),(void*)f_3006},
{C_text("f_3015:compiler_2dsyntax_2escm"),(void*)f_3015},
{C_text("f_3025:compiler_2dsyntax_2escm"),(void*)f_3025},
{C_text("f_3040:compiler_2dsyntax_2escm"),(void*)f_3040},
{C_text("f_3044:compiler_2dsyntax_2escm"),(void*)f_3044},
{C_text("f_3048:compiler_2dsyntax_2escm"),(void*)f_3048},
{C_text("f_3055:compiler_2dsyntax_2escm"),(void*)f_3055},
{C_text("f_3058:compiler_2dsyntax_2escm"),(void*)f_3058},
{C_text("f_3061:compiler_2dsyntax_2escm"),(void*)f_3061},
{C_text("f_3064:compiler_2dsyntax_2escm"),(void*)f_3064},
{C_text("f_3067:compiler_2dsyntax_2escm"),(void*)f_3067},
{C_text("f_3070:compiler_2dsyntax_2escm"),(void*)f_3070},
{C_text("f_3072:compiler_2dsyntax_2escm"),(void*)f_3072},
{C_text("f_3078:compiler_2dsyntax_2escm"),(void*)f_3078},
{C_text("f_3100:compiler_2dsyntax_2escm"),(void*)f_3100},
{C_text("f_3103:compiler_2dsyntax_2escm"),(void*)f_3103},
{C_text("f_3106:compiler_2dsyntax_2escm"),(void*)f_3106},
{C_text("f_3110:compiler_2dsyntax_2escm"),(void*)f_3110},
{C_text("f_3113:compiler_2dsyntax_2escm"),(void*)f_3113},
{C_text("f_3123:compiler_2dsyntax_2escm"),(void*)f_3123},
{C_text("f_3129:compiler_2dsyntax_2escm"),(void*)f_3129},
{C_text("f_3132:compiler_2dsyntax_2escm"),(void*)f_3132},
{C_text("f_3135:compiler_2dsyntax_2escm"),(void*)f_3135},
{C_text("f_3138:compiler_2dsyntax_2escm"),(void*)f_3138},
{C_text("f_3141:compiler_2dsyntax_2escm"),(void*)f_3141},
{C_text("f_3144:compiler_2dsyntax_2escm"),(void*)f_3144},
{C_text("f_3147:compiler_2dsyntax_2escm"),(void*)f_3147},
{C_text("f_3150:compiler_2dsyntax_2escm"),(void*)f_3150},
{C_text("f_3154:compiler_2dsyntax_2escm"),(void*)f_3154},
{C_text("f_3157:compiler_2dsyntax_2escm"),(void*)f_3157},
{C_text("f_3163:compiler_2dsyntax_2escm"),(void*)f_3163},
{C_text("f_3166:compiler_2dsyntax_2escm"),(void*)f_3166},
{C_text("f_3169:compiler_2dsyntax_2escm"),(void*)f_3169},
{C_text("f_3178:compiler_2dsyntax_2escm"),(void*)f_3178},
{C_text("f_3181:compiler_2dsyntax_2escm"),(void*)f_3181},
{C_text("f_3184:compiler_2dsyntax_2escm"),(void*)f_3184},
{C_text("f_3186:compiler_2dsyntax_2escm"),(void*)f_3186},
{C_text("f_3196:compiler_2dsyntax_2escm"),(void*)f_3196},
{C_text("f_3215:compiler_2dsyntax_2escm"),(void*)f_3215},
{C_text("f_3246:compiler_2dsyntax_2escm"),(void*)f_3246},
{C_text("f_3253:compiler_2dsyntax_2escm"),(void*)f_3253},
{C_text("f_3263:compiler_2dsyntax_2escm"),(void*)f_3263},
{C_text("f_3273:compiler_2dsyntax_2escm"),(void*)f_3273},
{C_text("f_3276:compiler_2dsyntax_2escm"),(void*)f_3276},
{C_text("f_3299:compiler_2dsyntax_2escm"),(void*)f_3299},
{C_text("f_3328:compiler_2dsyntax_2escm"),(void*)f_3328},
{C_text("f_3334:compiler_2dsyntax_2escm"),(void*)f_3334},
{C_text("f_3351:compiler_2dsyntax_2escm"),(void*)f_3351},
{C_text("f_3368:compiler_2dsyntax_2escm"),(void*)f_3368},
{C_text("f_3385:compiler_2dsyntax_2escm"),(void*)f_3385},
{C_text("f_3406:compiler_2dsyntax_2escm"),(void*)f_3406},
{C_text("f_3427:compiler_2dsyntax_2escm"),(void*)f_3427},
{C_text("f_3448:compiler_2dsyntax_2escm"),(void*)f_3448},
{C_text("f_3470:compiler_2dsyntax_2escm"),(void*)f_3470},
{C_text("f_3473:compiler_2dsyntax_2escm"),(void*)f_3473},
{C_text("f_3524:compiler_2dsyntax_2escm"),(void*)f_3524},
{C_text("f_3596:compiler_2dsyntax_2escm"),(void*)f_3596},
{C_text("f_3603:compiler_2dsyntax_2escm"),(void*)f_3603},
{C_text("f_3607:compiler_2dsyntax_2escm"),(void*)f_3607},
{C_text("f_3621:compiler_2dsyntax_2escm"),(void*)f_3621},
{C_text("f_3629:compiler_2dsyntax_2escm"),(void*)f_3629},
{C_text("f_3632:compiler_2dsyntax_2escm"),(void*)f_3632},
{C_text("f_3634:compiler_2dsyntax_2escm"),(void*)f_3634},
{C_text("f_3653:compiler_2dsyntax_2escm"),(void*)f_3653},
{C_text("f_3656:compiler_2dsyntax_2escm"),(void*)f_3656},
{C_text("f_3659:compiler_2dsyntax_2escm"),(void*)f_3659},
{C_text("f_3662:compiler_2dsyntax_2escm"),(void*)f_3662},
{C_text("f_3665:compiler_2dsyntax_2escm"),(void*)f_3665},
{C_text("f_3668:compiler_2dsyntax_2escm"),(void*)f_3668},
{C_text("f_3671:compiler_2dsyntax_2escm"),(void*)f_3671},
{C_text("f_3674:compiler_2dsyntax_2escm"),(void*)f_3674},
{C_text("f_3757:compiler_2dsyntax_2escm"),(void*)f_3757},
{C_text("f_3776:compiler_2dsyntax_2escm"),(void*)f_3776},
{C_text("f_3779:compiler_2dsyntax_2escm"),(void*)f_3779},
{C_text("f_3782:compiler_2dsyntax_2escm"),(void*)f_3782},
{C_text("f_3785:compiler_2dsyntax_2escm"),(void*)f_3785},
{C_text("f_3788:compiler_2dsyntax_2escm"),(void*)f_3788},
{C_text("f_3791:compiler_2dsyntax_2escm"),(void*)f_3791},
{C_text("f_3862:compiler_2dsyntax_2escm"),(void*)f_3862},
{C_text("f_3866:compiler_2dsyntax_2escm"),(void*)f_3866},
{C_text("f_3875:compiler_2dsyntax_2escm"),(void*)f_3875},
{C_text("f_3885:compiler_2dsyntax_2escm"),(void*)f_3885},
{C_text("f_3902:compiler_2dsyntax_2escm"),(void*)f_3902},
{C_text("f_3906:compiler_2dsyntax_2escm"),(void*)f_3906},
{C_text("f_3909:compiler_2dsyntax_2escm"),(void*)f_3909},
{C_text("f_3919:compiler_2dsyntax_2escm"),(void*)f_3919},
{C_text("f_3931:compiler_2dsyntax_2escm"),(void*)f_3931},
{C_text("f_3943:compiler_2dsyntax_2escm"),(void*)f_3943},
{C_text("f_3986:compiler_2dsyntax_2escm"),(void*)f_3986},
{C_text("f_3996:compiler_2dsyntax_2escm"),(void*)f_3996},
{C_text("f_4003:compiler_2dsyntax_2escm"),(void*)f_4003},
{C_text("f_4014:compiler_2dsyntax_2escm"),(void*)f_4014},
{C_text("f_4016:compiler_2dsyntax_2escm"),(void*)f_4016},
{C_text("f_4034:compiler_2dsyntax_2escm"),(void*)f_4034},
{C_text("f_4050:compiler_2dsyntax_2escm"),(void*)f_4050},
{C_text("f_4054:compiler_2dsyntax_2escm"),(void*)f_4054},
{C_text("f_4057:compiler_2dsyntax_2escm"),(void*)f_4057},
{C_text("f_4060:compiler_2dsyntax_2escm"),(void*)f_4060},
{C_text("f_4063:compiler_2dsyntax_2escm"),(void*)f_4063},
{C_text("f_4066:compiler_2dsyntax_2escm"),(void*)f_4066},
{C_text("f_4069:compiler_2dsyntax_2escm"),(void*)f_4069},
{C_text("f_4072:compiler_2dsyntax_2escm"),(void*)f_4072},
{C_text("f_4075:compiler_2dsyntax_2escm"),(void*)f_4075},
{C_text("f_4078:compiler_2dsyntax_2escm"),(void*)f_4078},
{C_text("f_4081:compiler_2dsyntax_2escm"),(void*)f_4081},
{C_text("f_4084:compiler_2dsyntax_2escm"),(void*)f_4084},
{C_text("f_4087:compiler_2dsyntax_2escm"),(void*)f_4087},
{C_text("f_4090:compiler_2dsyntax_2escm"),(void*)f_4090},
{C_text("f_4093:compiler_2dsyntax_2escm"),(void*)f_4093},
{C_text("f_4102:compiler_2dsyntax_2escm"),(void*)f_4102},
{C_text("f_4116:compiler_2dsyntax_2escm"),(void*)f_4116},
{C_text("f_4139:compiler_2dsyntax_2escm"),(void*)f_4139},
{C_text("f_4144:compiler_2dsyntax_2escm"),(void*)f_4144},
{C_text("f_4159:compiler_2dsyntax_2escm"),(void*)f_4159},
{C_text("f_4174:compiler_2dsyntax_2escm"),(void*)f_4174},
{C_text("f_4222:compiler_2dsyntax_2escm"),(void*)f_4222},
{C_text("f_4224:compiler_2dsyntax_2escm"),(void*)f_4224},
{C_text("f_4284:compiler_2dsyntax_2escm"),(void*)f_4284},
{C_text("f_4286:compiler_2dsyntax_2escm"),(void*)f_4286},
{C_text("f_4323:compiler_2dsyntax_2escm"),(void*)f_4323},
{C_text("f_4330:compiler_2dsyntax_2escm"),(void*)f_4330},
{C_text("f_4332:compiler_2dsyntax_2escm"),(void*)f_4332},
{C_text("f_4366:compiler_2dsyntax_2escm"),(void*)f_4366},
{C_text("f_4414:compiler_2dsyntax_2escm"),(void*)f_4414},
{C_text("f_4468:compiler_2dsyntax_2escm"),(void*)f_4468},
{C_text("f_4470:compiler_2dsyntax_2escm"),(void*)f_4470},
{C_text("f_4538:compiler_2dsyntax_2escm"),(void*)f_4538},
{C_text("f_4563:compiler_2dsyntax_2escm"),(void*)f_4563},
{C_text("f_4580:compiler_2dsyntax_2escm"),(void*)f_4580},
{C_text("f_4582:compiler_2dsyntax_2escm"),(void*)f_4582},
{C_text("f_4586:compiler_2dsyntax_2escm"),(void*)f_4586},
{C_text("f_4589:compiler_2dsyntax_2escm"),(void*)f_4589},
{C_text("f_4592:compiler_2dsyntax_2escm"),(void*)f_4592},
{C_text("f_4595:compiler_2dsyntax_2escm"),(void*)f_4595},
{C_text("f_4598:compiler_2dsyntax_2escm"),(void*)f_4598},
{C_text("f_4601:compiler_2dsyntax_2escm"),(void*)f_4601},
{C_text("f_4604:compiler_2dsyntax_2escm"),(void*)f_4604},
{C_text("f_4607:compiler_2dsyntax_2escm"),(void*)f_4607},
{C_text("f_4610:compiler_2dsyntax_2escm"),(void*)f_4610},
{C_text("f_4619:compiler_2dsyntax_2escm"),(void*)f_4619},
{C_text("f_4633:compiler_2dsyntax_2escm"),(void*)f_4633},
{C_text("f_4648:compiler_2dsyntax_2escm"),(void*)f_4648},
{C_text("f_4653:compiler_2dsyntax_2escm"),(void*)f_4653},
{C_text("f_4668:compiler_2dsyntax_2escm"),(void*)f_4668},
{C_text("f_4683:compiler_2dsyntax_2escm"),(void*)f_4683},
{C_text("f_4719:compiler_2dsyntax_2escm"),(void*)f_4719},
{C_text("f_4721:compiler_2dsyntax_2escm"),(void*)f_4721},
{C_text("f_4765:compiler_2dsyntax_2escm"),(void*)f_4765},
{C_text("f_4767:compiler_2dsyntax_2escm"),(void*)f_4767},
{C_text("f_4804:compiler_2dsyntax_2escm"),(void*)f_4804},
{C_text("f_4811:compiler_2dsyntax_2escm"),(void*)f_4811},
{C_text("f_4813:compiler_2dsyntax_2escm"),(void*)f_4813},
{C_text("f_4847:compiler_2dsyntax_2escm"),(void*)f_4847},
{C_text("f_4895:compiler_2dsyntax_2escm"),(void*)f_4895},
{C_text("f_4941:compiler_2dsyntax_2escm"),(void*)f_4941},
{C_text("f_4943:compiler_2dsyntax_2escm"),(void*)f_4943},
{C_text("f_4995:compiler_2dsyntax_2escm"),(void*)f_4995},
{C_text("f_5020:compiler_2dsyntax_2escm"),(void*)f_5020},
{C_text("f_5037:compiler_2dsyntax_2escm"),(void*)f_5037},
{C_text("toplevel:compiler_2dsyntax_2escm"),(void*)C_compiler_2dsyntax_toplevel},
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
o|hiding unexported module binding: chicken.compiler.compiler-syntax#partition 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#span 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#take 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#drop 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#split-at 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#append-map 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#every 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#any 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#cons* 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#concatenate 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#delete 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#first 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#second 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#third 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#fourth 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#fifth 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#delete-duplicates 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#alist-cons 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#filter 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#filter-map 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#remove 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#unzip1 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#last 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#list-index 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-adjoin/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-difference/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-union/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset-intersection/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#list-tabulate 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset<=/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#lset=/eq? 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#length+ 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#find 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#find-tail 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#iota 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#make-list 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#posq 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#posv 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#r-c-s 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#define-internal-compiler-syntax 
o|hiding unexported module binding: chicken.compiler.compiler-syntax#compile-format-string 
S|applied compiler syntax:
S|  chicken.format#sprintf		2
S|  scheme#for-each		1
S|  chicken.base#foldl		3
S|  scheme#map		17
S|  chicken.base#foldr		4
o|eliminated procedure checks: 221 
o|specializations:
o|  1 (chicken.base#sub1 *)
o|  11 (scheme#eqv? (or eof null fixnum char boolean symbol keyword) *)
o|  1 (scheme#= fixnum fixnum)
o|  2 (##sys#check-output-port * * *)
o|  1 (scheme#cddr (pair * pair))
o|  2 (scheme#>= fixnum fixnum)
o|  1 (chicken.base#add1 *)
o|  1 (scheme#eqv? * *)
o|  19 (##sys#check-list (or pair list) *)
o|  24 (scheme#cdr pair)
o|  10 (scheme#car pair)
(o e)|safe calls: 537 
(o e)|assignments to immediate values: 2 
o|safe globals: (chicken.compiler.compiler-syntax#r-c-s ##sys#compiler-syntax-hook chicken.compiler.compiler-syntax#compiler-syntax-statistics chicken.compiler.compiler-syntax#posv chicken.compiler.compiler-syntax#posq chicken.compiler.compiler-syntax#make-list chicken.compiler.compiler-syntax#iota chicken.compiler.compiler-syntax#find-tail chicken.compiler.compiler-syntax#find chicken.compiler.compiler-syntax#length+ chicken.compiler.compiler-syntax#lset=/eq? chicken.compiler.compiler-syntax#lset<=/eq? chicken.compiler.compiler-syntax#list-tabulate chicken.compiler.compiler-syntax#lset-intersection/eq? chicken.compiler.compiler-syntax#lset-union/eq? chicken.compiler.compiler-syntax#lset-difference/eq? chicken.compiler.compiler-syntax#lset-adjoin/eq? chicken.compiler.compiler-syntax#list-index chicken.compiler.compiler-syntax#last chicken.compiler.compiler-syntax#unzip1 chicken.compiler.compiler-syntax#remove chicken.compiler.compiler-syntax#filter-map chicken.compiler.compiler-syntax#filter chicken.compiler.compiler-syntax#alist-cons chicken.compiler.compiler-syntax#delete-duplicates chicken.compiler.compiler-syntax#fifth chicken.compiler.compiler-syntax#fourth chicken.compiler.compiler-syntax#third chicken.compiler.compiler-syntax#second chicken.compiler.compiler-syntax#first chicken.compiler.compiler-syntax#delete chicken.compiler.compiler-syntax#concatenate chicken.compiler.compiler-syntax#cons* chicken.compiler.compiler-syntax#any chicken.compiler.compiler-syntax#every chicken.compiler.compiler-syntax#append-map chicken.compiler.compiler-syntax#split-at chicken.compiler.compiler-syntax#drop chicken.compiler.compiler-syntax#take chicken.compiler.compiler-syntax#span chicken.compiler.compiler-syntax#partition) 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#partition 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#span 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#drop 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#split-at 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#append-map 
o|inlining procedure: k2090 
o|inlining procedure: k2090 
o|inlining procedure: k2121 
o|inlining procedure: k2121 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#cons* 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#concatenate 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#first 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#second 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#third 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#fourth 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#fifth 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#delete-duplicates 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#alist-cons 
o|inlining procedure: k2338 
o|inlining procedure: k2338 
o|inlining procedure: k2330 
o|inlining procedure: k2330 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#filter-map 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#remove 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#unzip1 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#last 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#list-index 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-adjoin/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-difference/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-union/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset-intersection/eq? 
o|inlining procedure: k2729 
o|inlining procedure: k2729 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset<=/eq? 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#lset=/eq? 
o|inlining procedure: k2797 
o|inlining procedure: k2820 
o|inlining procedure: k2820 
o|inlining procedure: k2797 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#find 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#find-tail 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#iota 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#make-list 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#posq 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#posv 
o|inlining procedure: k3017 
o|inlining procedure: k3017 
o|inlining procedure: k3080 
o|merged explicitly consed rest parameter: args1144 
o|inlining procedure: k3114 
o|inlining procedure: k3114 
o|substituted constant variable: a3125 
o|substituted constant variable: a3126 
o|substituted constant variable: a3159 
o|substituted constant variable: a3160 
o|inlining procedure: k3152 
o|inlining procedure: k3152 
o|inlining procedure: k3198 
o|consed rest parameter at call site: "(compiler-syntax.scm:220) fail1141" 3 
o|inlining procedure: k3198 
o|inlining procedure: k3217 
o|inlining procedure: k3227 
o|inlining procedure: k3227 
o|substituted constant variable: a3247 
o|inlining procedure: k3217 
o|inlining procedure: k3092 
o|inlining procedure: k3265 
o|consed rest parameter at call site: "(compiler-syntax.scm:235) fail1141" 3 
o|inlining procedure: k3265 
o|inlining procedure: k3332 
o|inlining procedure: k3332 
o|inlining procedure: k3369 
o|inlining procedure: k3369 
o|inlining procedure: k3407 
o|inlining procedure: k3407 
o|inlining procedure: k3449 
o|inlining procedure: k3449 
o|inlining procedure: k3481 
o|inlining procedure: k3481 
o|inlining procedure: k3510 
o|inlining procedure: k3526 
o|inlining procedure: k3526 
o|inlining procedure: k3510 
o|consed rest parameter at call site: "(compiler-syntax.scm:274) fail1141" 3 
o|substituted constant variable: a3548 
o|substituted constant variable: a3550 
o|substituted constant variable: a3552 
o|substituted constant variable: a3554 
o|substituted constant variable: a3556 
o|substituted constant variable: a3558 
o|substituted constant variable: a3560 
o|substituted constant variable: a3562 
o|substituted constant variable: a3564 
o|substituted constant variable: a3566 
o|substituted constant variable: a3568 
o|inlining procedure: k3092 
o|inlining procedure: k3585 
o|inlining procedure: k3585 
o|inlining procedure: k3080 
o|substituted constant variable: a3626 
o|inlining procedure: k3636 
o|inlining procedure: k3636 
o|inlining procedure: k3759 
o|inlining procedure: k3759 
o|inlining procedure: k3867 
o|inlining procedure: k3867 
o|inlining procedure: k3877 
o|inlining procedure: k3877 
o|substituted constant variable: a3900 
o|inlining procedure: k3910 
o|inlining procedure: k3910 
o|inlining procedure: k3988 
o|inlining procedure: k4018 
o|inlining procedure: k4018 
o|inlining procedure: k3988 
o|inlining procedure: k4097 
o|inlining procedure: k4226 
o|contracted procedure: "(compiler-syntax.scm:139) g10451054" 
o|inlining procedure: k4226 
o|inlining procedure: k4288 
o|contracted procedure: "(compiler-syntax.scm:133) g10151024" 
o|inlining procedure: k4288 
o|inlining procedure: k4334 
o|inlining procedure: k4334 
o|inlining procedure: k4368 
o|inlining procedure: k4368 
o|inlining procedure: k4416 
o|inlining procedure: k4416 
o|inlining procedure: k4472 
o|inlining procedure: k4472 
o|inlining procedure: k4540 
o|contracted procedure: "(compiler-syntax.scm:120) g863872" 
o|inlining procedure: k4540 
o|inlining procedure: k4097 
o|inlining procedure: k4614 
o|inlining procedure: k4723 
o|contracted procedure: "(compiler-syntax.scm:98) g810819" 
o|inlining procedure: k4723 
o|inlining procedure: k4769 
o|contracted procedure: "(compiler-syntax.scm:95) g780789" 
o|inlining procedure: k4769 
o|inlining procedure: k4815 
o|inlining procedure: k4815 
o|inlining procedure: k4849 
o|inlining procedure: k4849 
o|inlining procedure: k4897 
o|inlining procedure: k4897 
o|inlining procedure: k4945 
o|inlining procedure: k4945 
o|inlining procedure: k4997 
o|contracted procedure: "(compiler-syntax.scm:85) g628637" 
o|inlining procedure: k4997 
o|inlining procedure: k4614 
o|replaced variables: 625 
o|removed binding forms: 183 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#every 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#any 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#filter 
o|removed side-effect free assignment to unused variable: chicken.compiler.compiler-syntax#list-tabulate 
o|substituted constant variable: r28215050 
o|substituted constant variable: r31535059 
o|substituted constant variable: r31535059 
o|converted assignments to bindings: (fail1141) 
o|substituted constant variable: r30935094 
o|substituted constant variable: r35865096 
o|substituted constant variable: r30815097 
o|simplifications: ((let . 1)) 
o|replaced variables: 23 
o|removed binding forms: 540 
o|removed call to pure procedure with unused result: "(compiler-syntax.scm:120) ##sys#slot" 
o|removed call to pure procedure with unused result: "(compiler-syntax.scm:85) ##sys#slot" 
o|removed binding forms: 33 
o|contracted procedure: k4565 
o|contracted procedure: k5022 
o|removed binding forms: 2 
o|removed binding forms: 2 
o|simplifications: ((let . 4) (if . 11) (##core#call . 321)) 
o|  call simplifications:
o|    scheme#cddr	2
o|    scheme#>	2
o|    ##sys#check-list	4
o|    ##sys#setslot	14
o|    chicken.fixnum#fx>
o|    scheme#list	5
o|    chicken.fixnum#fx=	2
o|    scheme#cadr	5
o|    scheme#caddr	2
o|    scheme#cadddr	2
o|    chicken.fixnum#fx>=	2
o|    scheme#memq	6
o|    scheme#list?
o|    scheme#caar
o|    scheme#string?	3
o|    scheme#string-length
o|    scheme#>=
o|    scheme#char-upcase
o|    scheme#char-whitespace?	2
o|    ##sys#cons	24
o|    scheme#length	6
o|    ##sys#list	96
o|    scheme#null?	2
o|    scheme#string-ref
o|    ##sys#apply
o|    scheme#car	5
o|    scheme#cons	31
o|    ##sys#slot	52
o|    scheme#pair?	23
o|    scheme#cdr	4
o|    chicken.fixnum#fx+	3
o|    scheme#eq?	15
o|    scheme#not
o|contracted procedure: k2800 
o|contracted procedure: k2804 
o|contracted procedure: k2810 
o|contracted procedure: k2814 
o|contracted procedure: k2817 
o|contracted procedure: k2830 
o|contracted procedure: k2823 
o|contracted procedure: k3003 
o|contracted procedure: k3020 
o|contracted procedure: k3030 
o|contracted procedure: k3034 
o|contracted procedure: k3050 
o|contracted procedure: k3623 
o|contracted procedure: k3083 
o|contracted procedure: k3089 
o|contracted procedure: k3615 
o|contracted procedure: k3095 
o|contracted procedure: k3173 
o|contracted procedure: k3188 
o|contracted procedure: k3192 
o|contracted procedure: k3201 
o|contracted procedure: k3207 
o|contracted procedure: k3211 
o|contracted procedure: k3220 
o|contracted procedure: k3249 
o|contracted procedure: k3230 
o|contracted procedure: k3237 
o|inlining procedure: k3227 
o|inlining procedure: k3227 
o|contracted procedure: k3256 
o|contracted procedure: k3268 
o|contracted procedure: k3305 
o|contracted procedure: k3285 
o|contracted procedure: k3301 
o|contracted procedure: k3293 
o|contracted procedure: k3289 
o|contracted procedure: k3281 
o|contracted procedure: k3308 
o|contracted procedure: k3320 
o|contracted procedure: k3329 
o|contracted procedure: k3338 
o|contracted procedure: k3345 
o|contracted procedure: k3355 
o|contracted procedure: k3362 
o|contracted procedure: k3372 
o|contracted procedure: k3379 
o|contracted procedure: k3389 
o|contracted procedure: k3400 
o|contracted procedure: k3396 
o|contracted procedure: k3410 
o|contracted procedure: k3421 
o|contracted procedure: k3417 
o|contracted procedure: k3431 
o|contracted procedure: k3442 
o|contracted procedure: k3438 
o|contracted procedure: k3452 
o|contracted procedure: k3459 
o|contracted procedure: k3465 
o|contracted procedure: k3478 
o|contracted procedure: k3484 
o|contracted procedure: k3491 
o|contracted procedure: k3497 
o|contracted procedure: k3500 
o|contracted procedure: k3507 
o|contracted procedure: k3513 
o|contracted procedure: k3529 
o|contracted procedure: k3573 
o|contracted procedure: k3576 
o|contracted procedure: k3588 
o|contracted procedure: k3609 
o|contracted procedure: k3753 
o|contracted procedure: k3746 
o|contracted procedure: k3639 
o|contracted procedure: k3642 
o|contracted procedure: k3645 
o|contracted procedure: k3648 
o|contracted procedure: k3735 
o|contracted procedure: k3739 
o|contracted procedure: k3743 
o|contracted procedure: k3679 
o|contracted procedure: k3731 
o|contracted procedure: k3727 
o|contracted procedure: k3683 
o|contracted procedure: k3719 
o|contracted procedure: k3723 
o|contracted procedure: k3691 
o|contracted procedure: k3699 
o|contracted procedure: k3707 
o|contracted procedure: k3715 
o|contracted procedure: k3711 
o|contracted procedure: k3703 
o|contracted procedure: k3695 
o|contracted procedure: k3687 
o|contracted procedure: k3858 
o|contracted procedure: k3851 
o|contracted procedure: k3762 
o|contracted procedure: k3765 
o|contracted procedure: k3768 
o|contracted procedure: k3771 
o|contracted procedure: k3848 
o|contracted procedure: k3796 
o|contracted procedure: k3844 
o|contracted procedure: k3840 
o|contracted procedure: k3800 
o|contracted procedure: k3836 
o|contracted procedure: k3808 
o|contracted procedure: k3816 
o|contracted procedure: k3824 
o|contracted procedure: k3832 
o|contracted procedure: k3828 
o|contracted procedure: k3820 
o|contracted procedure: k3812 
o|contracted procedure: k3804 
o|contracted procedure: k3871 
o|contracted procedure: k3897 
o|contracted procedure: k3880 
o|contracted procedure: k3890 
o|contracted procedure: k3937 
o|contracted procedure: k3933 
o|contracted procedure: k3921 
o|contracted procedure: k3925 
o|contracted procedure: k3954 
o|contracted procedure: k3950 
o|contracted procedure: k3945 
o|contracted procedure: k3962 
o|contracted procedure: k3966 
o|contracted procedure: k3970 
o|contracted procedure: k3974 
o|contracted procedure: k3978 
o|contracted procedure: k3982 
o|contracted procedure: k3958 
o|contracted procedure: k4046 
o|contracted procedure: k4039 
o|contracted procedure: k3991 
o|contracted procedure: k4005 
o|contracted procedure: k4009 
o|contracted procedure: k4021 
o|contracted procedure: k4028 
o|contracted procedure: k4036 
o|contracted procedure: k4094 
o|contracted procedure: k4103 
o|contracted procedure: k4111 
o|contracted procedure: k4530 
o|contracted procedure: k4534 
o|contracted procedure: k4526 
o|contracted procedure: k4522 
o|contracted procedure: k4121 
o|contracted procedure: k4448 
o|contracted procedure: k4518 
o|contracted procedure: k4456 
o|contracted procedure: k4460 
o|contracted procedure: k4463 
o|contracted procedure: k4452 
o|contracted procedure: k4133 
o|contracted procedure: k4129 
o|contracted procedure: k4125 
o|contracted procedure: k4141 
o|contracted procedure: k4154 
o|contracted procedure: k4150 
o|contracted procedure: k4169 
o|contracted procedure: k4320 
o|contracted procedure: k4180 
o|contracted procedure: k4274 
o|contracted procedure: k4266 
o|contracted procedure: k4270 
o|contracted procedure: k4262 
o|contracted procedure: k4258 
o|contracted procedure: k4192 
o|contracted procedure: k4196 
o|contracted procedure: k4200 
o|contracted procedure: k4212 
o|contracted procedure: k4208 
o|contracted procedure: k4204 
o|contracted procedure: k4184 
o|contracted procedure: k4188 
o|contracted procedure: k4176 
o|contracted procedure: k4165 
o|contracted procedure: k4161 
o|contracted procedure: k4229 
o|contracted procedure: k4251 
o|contracted procedure: k4247 
o|contracted procedure: k4232 
o|contracted procedure: k4235 
o|contracted procedure: k4243 
o|contracted procedure: k4291 
o|contracted procedure: k4313 
o|contracted procedure: k4309 
o|contracted procedure: k4294 
o|contracted procedure: k4297 
o|contracted procedure: k4305 
o|contracted procedure: k4337 
o|contracted procedure: k4340 
o|contracted procedure: k4343 
o|contracted procedure: k4351 
o|contracted procedure: k4359 
o|contracted procedure: k4407 
o|contracted procedure: k4371 
o|contracted procedure: k4397 
o|contracted procedure: k4401 
o|contracted procedure: k4393 
o|contracted procedure: k4374 
o|contracted procedure: k4377 
o|contracted procedure: k4385 
o|contracted procedure: k4389 
o|contracted procedure: k4419 
o|contracted procedure: k4422 
o|contracted procedure: k4425 
o|contracted procedure: k4433 
o|contracted procedure: k4441 
o|contracted procedure: k4511 
o|contracted procedure: k4475 
o|contracted procedure: k4501 
o|contracted procedure: k4505 
o|contracted procedure: k4497 
o|contracted procedure: k4478 
o|contracted procedure: k4481 
o|contracted procedure: k4489 
o|contracted procedure: k4493 
o|contracted procedure: k4543 
o|contracted procedure: k4546 
o|contracted procedure: k4549 
o|contracted procedure: k4557 
o|contracted procedure: k4571 
o|contracted procedure: k4611 
o|contracted procedure: k4620 
o|contracted procedure: k4628 
o|contracted procedure: k4991 
o|contracted procedure: k4929 
o|contracted procedure: k4933 
o|contracted procedure: k4936 
o|contracted procedure: k4642 
o|contracted procedure: k4638 
o|contracted procedure: k4650 
o|contracted procedure: k4663 
o|contracted procedure: k4659 
o|contracted procedure: k4678 
o|contracted procedure: k4801 
o|contracted procedure: k4689 
o|contracted procedure: k4755 
o|contracted procedure: k4697 
o|contracted procedure: k4709 
o|contracted procedure: k4705 
o|contracted procedure: k4701 
o|contracted procedure: k4693 
o|contracted procedure: k4685 
o|contracted procedure: k4674 
o|contracted procedure: k4670 
o|contracted procedure: k4726 
o|contracted procedure: k4748 
o|contracted procedure: k4744 
o|contracted procedure: k4729 
o|contracted procedure: k4732 
o|contracted procedure: k4740 
o|contracted procedure: k4772 
o|contracted procedure: k4794 
o|contracted procedure: k4790 
o|contracted procedure: k4775 
o|contracted procedure: k4778 
o|contracted procedure: k4786 
o|contracted procedure: k4818 
o|contracted procedure: k4821 
o|contracted procedure: k4824 
o|contracted procedure: k4832 
o|contracted procedure: k4840 
o|contracted procedure: k4888 
o|contracted procedure: k4852 
o|contracted procedure: k4878 
o|contracted procedure: k4882 
o|contracted procedure: k4874 
o|contracted procedure: k4855 
o|contracted procedure: k4858 
o|contracted procedure: k4866 
o|contracted procedure: k4870 
o|contracted procedure: k4900 
o|contracted procedure: k4903 
o|contracted procedure: k4906 
o|contracted procedure: k4914 
o|contracted procedure: k4922 
o|contracted procedure: k4984 
o|contracted procedure: k4948 
o|contracted procedure: k4974 
o|contracted procedure: k4978 
o|contracted procedure: k4970 
o|contracted procedure: k4951 
o|contracted procedure: k4954 
o|contracted procedure: k4962 
o|contracted procedure: k4966 
o|contracted procedure: k5000 
o|contracted procedure: k5003 
o|contracted procedure: k5006 
o|contracted procedure: k5014 
o|contracted procedure: k5028 
o|simplifications: ((let . 64)) 
o|removed binding forms: 290 
o|removed binding forms: 1 
o|direct leaf routine/allocation: lp433 0 
o|direct leaf routine/allocation: fetch1181 0 
o|direct leaf routine/allocation: push1184 3 
o|direct leaf routine/allocation: g924933 21 
o|direct leaf routine/allocation: g985994 6 
o|direct leaf routine/allocation: g689698 21 
o|direct leaf routine/allocation: g750759 6 
o|converted assignments to bindings: (lp433) 
o|contracted procedure: "(compiler-syntax.scm:241) k3314" 
o|contracted procedure: "(compiler-syntax.scm:243) k3323" 
o|inlining procedure: "(compiler-syntax.scm:246) k3332" 
o|inlining procedure: "(compiler-syntax.scm:247) k3332" 
o|inlining procedure: "(compiler-syntax.scm:248) k3332" 
o|inlining procedure: "(compiler-syntax.scm:250) k3332" 
o|inlining procedure: "(compiler-syntax.scm:254) k3332" 
o|inlining procedure: "(compiler-syntax.scm:258) k3332" 
o|inlining procedure: "(compiler-syntax.scm:261) k3332" 
o|inlining procedure: "(compiler-syntax.scm:265) k3332" 
o|inlining procedure: "(compiler-syntax.scm:266) k3332" 
o|contracted procedure: "(compiler-syntax.scm:270) k3520" 
o|contracted procedure: "(compiler-syntax.scm:272) k3536" 
o|contracted procedure: "(compiler-syntax.scm:129) k4355" 
o|contracted procedure: "(compiler-syntax.scm:125) k4437" 
o|contracted procedure: "(compiler-syntax.scm:92) k4836" 
o|contracted procedure: "(compiler-syntax.scm:88) k4918" 
o|simplifications: ((let . 1)) 
o|removed binding forms: 8 
o|customizable procedures: (k4617 map-loop622640 map-loop652671 map-loop683704 map-loop713732 map-loop744765 map-loop774795 map-loop804825 chicken.compiler.compiler-syntax#length+ k4100 map-loop857875 map-loop887906 map-loop918939 map-loop948967 map-loop9791000 map-loop10091030 map-loop10391060 foldr10821085 chicken.compiler.compiler-syntax#compile-format-string chicken.compiler.compiler-syntax#r-c-s k3098 skip1251 next1182 loop1197 endchunk1183 fail1141 g551558 for-each-loop550561) 
o|shared closure containers: 16 
o|shared closure users: 39 
o|calls to known targets: 84 
o|identified direct recursive calls: f_2795 1 
o|identified direct recursive calls: f_3524 1 
o|identified direct recursive calls: f_3263 1 
o|identified direct recursive calls: f_4016 1 
o|identified direct recursive calls: f_4224 1 
o|identified direct recursive calls: f_4286 1 
o|identified direct recursive calls: f_4332 1 
o|identified direct recursive calls: f_4366 1 
o|identified direct recursive calls: f_4414 1 
o|identified direct recursive calls: f_4470 1 
o|identified direct recursive calls: f_4721 1 
o|identified direct recursive calls: f_4767 1 
o|identified direct recursive calls: f_4813 1 
o|identified direct recursive calls: f_4847 1 
o|identified direct recursive calls: f_4895 1 
o|identified direct recursive calls: f_4943 1 
o|fast box initializations: 22 
o|fast global references: 13 
o|fast global assignments: 3 
o|dropping unused closure argument: f_2789 
o|dropping unused closure argument: f_2795 
o|dropping unused closure argument: f_3001 
o|dropping unused closure argument: f_3072 
*/
/* end of file */
